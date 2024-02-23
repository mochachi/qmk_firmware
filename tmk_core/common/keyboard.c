/*
Copyright 2011, 2012, 2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdint.h>
#include "keyboard.h"
#include "matrix.h"
#include "keymap.h"
#include "host.h"
#include "led.h"
#include "keycode.h"
#include "timer.h"
#include "print.h"
#include "debug.h"
#include "command.h"
#include "util.h"
#include "sendchar.h"
#include "eeconfig.h"
#include "action_layer.h"
#include "action_util.h"
#include "wait.h"
#ifdef BACKLIGHT_ENABLE
#    include "backlight.h"
#endif
#ifdef BOOTMAGIC_ENABLE
#    include "bootmagic.h"
#else
#    include "magic.h"
#endif
#ifdef MOUSEKEY_ENABLE
#    include "mousekey.h"
#endif
#ifdef PS2_MOUSE_ENABLE
#    include "ps2_mouse.h"
#endif
#ifdef SERIAL_MOUSE_ENABLE
#    include "serial_mouse.h"
#endif
#ifdef ADB_MOUSE_ENABLE
#    include "adb.h"
#endif
#ifdef RGBLIGHT_ENABLE
#    include "rgblight.h"
#endif
#ifdef ENCODER_ENABLE
#    include "encoder.h"
#endif
#ifdef STENO_ENABLE
#    include "process_steno.h"
#endif
#ifdef FAUXCLICKY_ENABLE
#    include "fauxclicky.h"
#endif
#ifdef SERIAL_LINK_ENABLE
#    include "serial_link/system/serial_link.h"
#endif
#ifdef VISUALIZER_ENABLE
#    include "visualizer/visualizer.h"
#endif
#ifdef POINTING_DEVICE_ENABLE
#    include "pointing_device.h"
#endif
#ifdef MIDI_ENABLE
#    include "process_midi.h"
#endif
#ifdef JOYSTICK_ENABLE
#    include "process_joystick.h"
#endif
#ifdef HD44780_ENABLE
#    include "hd44780.h"
#endif
#ifdef QWIIC_ENABLE
#    include "qwiic.h"
#endif
#ifdef OLED_DRIVER_ENABLE
#    include "oled_driver.h"
#endif
#ifdef VELOCIKEY_ENABLE
#    include "velocikey.h"
#endif
#ifdef VIA_ENABLE
#    include "via.h"
#endif
#ifdef DIP_SWITCH_ENABLE
#    include "dip_switch.h"
#endif

// Only enable this if console is enabled to print to
#if defined(DEBUG_MATRIX_SCAN_RATE) && defined(CONSOLE_ENABLE)
static uint32_t matrix_timer      = 0;
static uint32_t matrix_scan_count = 0;

void matrix_scan_perf_task(void) {
    matrix_scan_count++;

    uint32_t timer_now = timer_read32();
    if (TIMER_DIFF_32(timer_now, matrix_timer) > 1000) {
        dprintf("matrix scan frequency: %d\n", matrix_scan_count);

        matrix_timer      = timer_now;
        matrix_scan_count = 0;
    }
}
#else
#    define matrix_scan_perf_task()
#endif

#ifdef MATRIX_HAS_GHOST
extern const uint16_t keymaps[MATRIX_ROWS][MATRIX_COLS][3];
static matrix_row_t   get_real_keys(uint8_t row, matrix_row_t rowdata) {
    matrix_row_t out = 0;
    for (uint8_t col = 0; col < MATRIX_COLS; col++) {
        // read each key in the row data and check if the keymap defines it as a real key
        if (pgm_read_byte(&keymaps[row][col][0]) && (rowdata & (1 << col))) {
            // this creates new row data, if a key is defined in the keymap, it will be set here
            out |= 1 << col;
        }
    }
    return out;
}

static inline bool popcount_more_than_one(matrix_row_t rowdata) {
    rowdata &= rowdata - 1;  // if there are less than two bits (keys) set, rowdata will become zero
    return rowdata;
}

static inline bool has_ghost_in_row(uint8_t row, matrix_row_t rowdata) {
    /* No ghost exists when less than 2 keys are down on the row.
    If there are "active" blanks in the matrix, the key can't be pressed by the user,
    there is no doubt as to which keys are really being pressed.
    The ghosts will be ignored, they are KC_NO.   */
    rowdata = get_real_keys(row, rowdata);
    if ((popcount_more_than_one(rowdata)) == 0) {
        return false;
    }
    /* Ghost occurs when the row shares a column line with other row,
    and two columns are read on each row. Blanks in the matrix don't matter,
    so they are filtered out.
    If there are two or more real keys pressed and they match columns with
    at least two of another row's real keys, the row will be ignored. Keep in mind,
    we are checking one row at a time, not all of them at once.
    */
    for (uint8_t i = 0; i < MATRIX_ROWS; i++) {
        if (i != row && popcount_more_than_one(get_real_keys(i, matrix_get_row(i)) & rowdata)) {
            return true;
        }
    }
    return false;
}

#endif

void disable_jtag(void) {
// To use PF4-7 (PC2-5 on ATmega32A), disable JTAG by writing JTD bit twice within four cycles.
#if (defined(__AVR_AT90USB646__) || defined(__AVR_AT90USB647__) || defined(__AVR_AT90USB1286__) || defined(__AVR_AT90USB1287__) || defined(__AVR_ATmega16U4__) || defined(__AVR_ATmega32U4__))
    MCUCR |= _BV(JTD);
    MCUCR |= _BV(JTD);
#elif defined(__AVR_ATmega32A__)
    MCUCSR |= _BV(JTD);
    MCUCSR |= _BV(JTD);
#endif
}

/** \brief matrix_setup
 *
 * FIXME: needs doc
 */
__attribute__((weak)) void matrix_setup(void) {}

/** \brief keyboard_pre_init_user
 *
 * FIXME: needs doc
 */
__attribute__((weak)) void keyboard_pre_init_user(void) {}

/** \brief keyboard_pre_init_kb
 *
 * FIXME: needs doc
 */
__attribute__((weak)) void keyboard_pre_init_kb(void) { keyboard_pre_init_user(); }

/** \brief keyboard_post_init_user
 *
 * FIXME: needs doc
 */

__attribute__((weak)) void keyboard_post_init_user() {}

/** \brief keyboard_post_init_kb
 *
 * FIXME: needs doc
 */

__attribute__((weak)) void keyboard_post_init_kb(void) { keyboard_post_init_user(); }

/** \brief keyboard_setup
 *
 * FIXME: needs doc
 */
void keyboard_setup(void) {
#ifndef NO_JTAG_DISABLE
    disable_jtag();
#endif
    matrix_setup();
    keyboard_pre_init_kb();
}

/** \brief is_keyboard_master
 *
 * FIXME: needs doc
 */
__attribute__((weak)) bool is_keyboard_master(void) { return true; }

/** \brief should_process_keypress
 *
 * Override this function if you have a condition where keypresses processing should change:
 *   - splits where the slave side needs to process for rgb/oled functionality
 */
__attribute__((weak)) bool should_process_keypress(void) { return is_keyboard_master(); }

/** \brief keyboard_init
 *
 * FIXME: needs doc
 */
void keyboard_init(void) {
    timer_init();
    matrix_init();
#ifdef VIA_ENABLE
    via_init();
#endif
#ifdef QWIIC_ENABLE
    qwiic_init();
#endif
#ifdef OLED_DRIVER_ENABLE
    oled_init(OLED_ROTATION_0);
#endif
#ifdef PS2_MOUSE_ENABLE
    ps2_mouse_init();
#endif
#ifdef SERIAL_MOUSE_ENABLE
    serial_mouse_init();
#endif
#ifdef ADB_MOUSE_ENABLE
    adb_mouse_init();
#endif
#ifdef BOOTMAGIC_ENABLE
    bootmagic();
#else
    magic();
#endif
#ifdef BACKLIGHT_ENABLE
    backlight_init();
#endif
#ifdef RGBLIGHT_ENABLE
    rgblight_init();
#endif
#ifdef ENCODER_ENABLE
    encoder_init();
#endif
#ifdef STENO_ENABLE
    steno_init();
#endif
#ifdef FAUXCLICKY_ENABLE
    fauxclicky_init();
#endif
#ifdef POINTING_DEVICE_ENABLE
    pointing_device_init();
#endif
#if defined(NKRO_ENABLE) && defined(FORCE_NKRO)
    keymap_config.nkro = 1;
    eeconfig_update_keymap(keymap_config.raw);
#endif
#ifdef DIP_SWITCH_ENABLE
    dip_switch_init();
#endif

    keyboard_post_init_kb(); /* Always keep this last */
}

/** \brief Keyboard task: Do keyboard routine jobs
 *
 * Do routine keyboard jobs:
 *
 * * scan matrix
 * * handle mouse movements
 * * run visualizer code
 * * handle midi commands
 * * light LEDs
 *
 * This is repeatedly called as fast as possible.
 */

matrix_row_t LeftHand = 0;
matrix_row_t RightHand = 0;
int mode = 0;
int upDown = 0;
matrix_row_t LeftHand_old = 0;
matrix_row_t RightHand_old = 0;
int LoopCount = 0;


void keyShot(int hand22, int hand12, int layer)
{
    uint16_t word = pgm_read_word(&keymaps[hand22][hand12][layer]);
    add_key(word);
    send_keyboard_report();
    wait_ms(10);
    del_key(word);
    send_keyboard_report();
}

void keyboard_task(void) {
    //static matrix_row_t matrix_prev[MATRIX_ROWS];
    static uint8_t      led_status    = 0;
    //matrix_row_t        matrix_row    = 0;
    //matrix_row_t        matrix_change = 0;
	matrix_row_t hand1 = 0;
	matrix_row_t hand2 = 0;
#ifdef QMK_KEYS_PER_SCAN
    uint8_t keys_processed = 0;
#endif

#if defined(OLED_DRIVER_ENABLE) && !defined(OLED_DISABLE_TIMEOUT)
    uint8_t ret = matrix_scan();
#else
    matrix_scan();
#endif

	LeftHand = 0;
	RightHand = 0;

    if (should_process_keypress()) {
        //for (uint8_t r = 0; r < MATRIX_ROWS; r++) {
        //    matrix_row    = matrix_get_row(r);
        //    matrix_change = matrix_row ^ matrix_prev[r];
            //if (matrix_change) {
			if (matrix_get_row(KAMU_R0) & (1 << KAMU_C0))
			{
				RightHand |= 16;
			}
			if (matrix_get_row(KAMU_R1) & (1 << KAMU_C1))
			{
				RightHand |= 8;
			}
			if (matrix_get_row(KAMU_R2) & (1 << KAMU_C2))
			{
				RightHand |= 4;
			}
			if (matrix_get_row(KAMU_R3) & (1 << KAMU_C3))
			{
				RightHand |= 2;
			}
			if (matrix_get_row(KAMU_R4) & (1 << KAMU_C4))
			{
				RightHand |= 1;
			}
			if (matrix_get_row(KAMU_R5) & (1 << KAMU_C5))
			{
				LeftHand |= 16;
			}
			if (matrix_get_row(KAMU_R6) & (1 << KAMU_C6))
			{
				LeftHand |= 8;
			}
			if (matrix_get_row(KAMU_R7) & (1 << KAMU_C7))
			{
				LeftHand |= 4;
			}
			if (matrix_get_row(KAMU_R8) & (1 << KAMU_C8))
			{
				LeftHand |= 2;
			}
			if (matrix_get_row(KAMU_R9) & (1 << KAMU_C9))
			{
				LeftHand |= 1;
			}
			//matrix_prev[r] = matrix_row;

			/*	action_exec((keyevent_t) {
			.key = (keypos_t) { .row = 1 << 8, .col = matrix_row << 8 },
			.pressed = 1,
			.time = 1
			});*/

//			for (uint8_t c = 0; c < MATRIX_COLS; c++) {
//
//				if (matrix_change & ((matrix_row_t)1 << c)) {
//
//					// record a processed key
//
//					matrix_prev[r] ^= ((matrix_row_t)1 << c);
//
//#ifdef QMK_KEYS_PER_SCAN
//
//					// only jump out if we have processed "enough" keys.
//
//					if (++keys_processed >= QMK_KEYS_PER_SCAN)
//
//#endif
//
//						// process a key per task call
//
//						goto MATRIX_LOOP_END;
//
//				}
//
//			}
//	}


#ifdef MATRIX_HAS_GHOST
                if (has_ghost_in_row(r, matrix_row)) {
                    continue;
                }
#endif
				if ((LeftHand ^ LeftHand_old) || (RightHand ^ RightHand_old))
				{
					LoopCount = 0;
					hand1 = LeftHand | LeftHand_old;
					hand2 = RightHand | RightHand_old;
					if ((hand1 != LeftHand) || (hand2 != RightHand))
					{
						if (upDown == 0)
						{
							int hand12 = 0;
							switch (hand1)
							{
							case 0:
								hand12 = 0;
								break;

							case 1:
								hand12 = 5;
								break;
							case 2:
								hand12 = 4;
								break;
							case 3:
								hand12 = 9;
								break;
							case 4:
								hand12 = 3;
								break;
							case 5:
								hand12 = 13;
								break;

							case 6:
								hand12 = 8;
								break;
							case 7:
								hand12 = 21;
								break;
							case 8:
								hand12 = 2;
								break;
							case 9:
								hand12 = 15;
								break;
							case 10:
								hand12 = 12;
								break;

							case 11:
								hand12 = 26;
								break;
							case 12:
								hand12 = 7;
								break;
							case 13:
								hand12 = 29;
								break;
							case 14:
								hand12 = 25;
								break;
							case 15:
								hand12 = 16;
								break;

							case 16:
								hand12 = 1;
								break;
							case 17:
								hand12 = 10;
								break;
							case 18:
								hand12 = 14;
								break;
							case 19:
								hand12 = 22;
								break;
							case 20:
								hand12 = 11;
								break;

							case 21:
								hand12 = 27;
								break;
							case 22:
								hand12 = 30;
								break;
							case 23:
								hand12 = 17;
								break;
							case 24:
								hand12 = 6;
								break;
							case 25:
								hand12 = 23;
								break;

							case 26:
								hand12 = 28;
								break;
							case 27:
								hand12 = 18;
								break;
							case 28:
								hand12 = 24;
								break;
							case 29:
								hand12 = 19;
								break;
							case 30:
								hand12 = 20;
								break;

							case 31:
								hand12 = 31;
								break;

							default:
								break;
							}

							int hand22 = 0;
							switch (hand2)
							{
							case 0:
								hand22 = 0;
								break;

							case 1:
								hand22 = 5;
								break;
							case 2:
								hand22 = 4;
								break;
							case 3:
								hand22 = 9;
								break;
							case 4:
								hand22 = 3;
								break;
							case 5:
								hand22 = 13;
								break;

							case 6:
								hand22 = 8;
								break;
							case 7:
								hand22 = 21;
								break;
							case 8:
								hand22 = 2;
								break;
							case 9:
								hand22 = 15;
								break;
							case 10:
								hand22 = 12;
								break;

							case 11:
								hand22 = 26;
								break;
							case 12:
								hand22 = 7;
								break;
							case 13:
								hand22 = 29;
								break;
							case 14:
								hand22 = 25;
								break;
							case 15:
								hand22 = 16;
								break;

							case 16:
								hand22 = 1;
								break;
							case 17:
								hand22 = 10;
								break;
							case 18:
								hand22 = 14;
								break;
							case 19:
								hand22 = 22;
								break;
							case 20:
								hand22 = 11;
								break;

							case 21:
								hand22 = 27;
								break;
							case 22:
								hand22 = 30;
								break;
							case 23:
								hand22 = 17;
								break;
							case 24:
								hand22 = 6;
								break;
							case 25:
								hand22 = 23;
								break;

							case 26:
								hand22 = 28;
								break;
							case 27:
								hand22 = 18;
								break;
							case 28:
								hand22 = 24;
								break;
							case 29:
								hand22 = 19;
								break;
							case 30:
								hand22 = 20;
								break;

							case 31:
								hand22 = 31;
								break;

							default:
								break;
							}

							upDown = 1;
                            keyShot(hand22, hand12, 0);
                            //uint16_t word  = pgm_read_word(&keymaps[hand22][hand12][0]);
                            //add_key(word);
                            //send_keyboard_report();
                            //wait_ms(100);
                            //del_key(word);
                            //send_keyboard_report();
       //                     layer_on(0);
       //                     action_exec((keyevent_t){
							//	.key = (keypos_t) { .row = hand22 << 8, .col = hand12 << 8 },
							//		.pressed = 1,
							//		.time = 1 /* time should not be 0 */
							//});
							//wait_ms(20);
							//action_exec((keyevent_t) {
							//	.key = (keypos_t) { .row = hand22 << 8, .col = hand12 << 8 },
							//		.pressed = 0,
							//		.time = 1 /* time should not be 0 */
							//});

                            keyShot(hand22, hand12, 1);
                            //word = pgm_read_word(&keymaps[hand22][hand12][1]);
                            //add_key(word);
                            //send_keyboard_report();
                            //wait_ms(100);
                            //del_key(word);
                            //send_keyboard_report();

							//wait_ms(20);
       //                     layer_on(1);
       //                     layer_off(0);
       //                     action_exec((keyevent_t){
							//	.key = (keypos_t) { .row = hand22 << 8, .col = hand12 << 8 },
							//		.pressed = 1,
							//		.time = 1
							//});
							//wait_ms(20);
							//action_exec((keyevent_t) {
							//	.key = (keypos_t) { .row = hand22 << 8, .col = hand12 << 8 },
							//		.pressed = 0,
							//		.time = 1
							//});

                            keyShot(hand22, hand12, 2);
                            //word = pgm_read_word(&keymaps[hand22][hand12][2]);
                            //add_key(word);
                            //send_keyboard_report();
                            //wait_ms(100);
                            //del_key(word);
                            //send_keyboard_report();
							//wait_ms(20);
       //                     layer_on(2);
       //                     layer_off(1);
       //                     action_exec((keyevent_t){
							//	.key = (keypos_t) { .row = hand22 << 8, .col = hand12 << 8 },
							//		.pressed = 1,
							//		.time = 1
							//});
							//wait_ms(20);
							//action_exec((keyevent_t) {
							//	.key = (keypos_t) { .row = hand22 << 8, .col = hand12 << 8 },
							//		.pressed = 0,
							//		.time = 1
							//});

       //                     layer_off(2);
       //                     layer_on(0);

							//action_exec((keyevent_t) {
							//	.key = (keypos_t) { .row = 1 << 8, .col = 1 << 8 },
							//		.pressed = 1,
							//		.time = 1
							//});

						}
					}
					else
					{
						upDown = 0;
					}
				}
				else if (LeftHand != 0 || RightHand != 0)
				{
					LoopCount++;
					if (LoopCount > 500)
					{
						if (LoopCount % 6 == 0 || keymaps[LeftHand][RightHand][0] == KC_MS_UP || keymaps[LeftHand][RightHand][0] == KC_MS_DOWN
							|| keymaps[LeftHand][RightHand][0] == KC_MS_LEFT || keymaps[LeftHand][RightHand][0] == KC_MS_RIGHT)
						{
							layer_on(0);

							int LeftHand2 = 0;
							switch (LeftHand)
							{
							case 0:
								LeftHand2 = 0;
								break;

							case 1:
								LeftHand2 = 5;
								break;
							case 2:
								LeftHand2 = 4;
								break;
							case 3:
								LeftHand2 = 9;
								break;
							case 4:
								LeftHand2 = 3;
								break;
							case 5:
								LeftHand2 = 13;
								break;

							case 6:
								LeftHand2 = 8;
								break;
							case 7:
								LeftHand2 = 21;
								break;
							case 8:
								LeftHand2 = 2;
								break;
							case 9:
								LeftHand2 = 15;
								break;
							case 10:
								LeftHand2 = 12;
								break;

							case 11:
								LeftHand2 = 26;
								break;
							case 12:
								LeftHand2 = 7;
								break;
							case 13:
								LeftHand2 = 29;
								break;
							case 14:
								LeftHand2 = 25;
								break;
							case 15:
								LeftHand2 = 16;
								break;

							case 16:
								LeftHand2 = 1;
								break;
							case 17:
								LeftHand2 = 10;
								break;
							case 18:
								LeftHand2 = 14;
								break;
							case 19:
								LeftHand2 = 22;
								break;
							case 20:
								LeftHand2 = 11;
								break;

							case 21:
								LeftHand2 = 27;
								break;
							case 22:
								LeftHand2 = 30;
								break;
							case 23:
								LeftHand2 = 17;
								break;
							case 24:
								LeftHand2 = 6;
								break;
							case 25:
								LeftHand2 = 23;
								break;

							case 26:
								LeftHand2 = 28;
								break;
							case 27:
								LeftHand2 = 18;
								break;
							case 28:
								LeftHand2 = 24;
								break;
							case 29:
								LeftHand2 = 19;
								break;
							case 30:
								LeftHand2 = 20;
								break;

							case 31:
								LeftHand2 = 31;
								break;

							default:
								break;
							}

							int RightHand2 = 0;
							switch (RightHand)
							{
							case 0:
								RightHand2 = 0;
								break;

							case 1:
								RightHand2 = 5;
								break;
							case 2:
								RightHand2 = 4;
								break;
							case 3:
								RightHand2 = 9;
								break;
							case 4:
								RightHand2 = 3;
								break;
							case 5:
								RightHand2 = 13;
								break;

							case 6:
								RightHand2 = 8;
								break;
							case 7:
								RightHand2 = 21;
								break;
							case 8:
								RightHand2 = 2;
								break;
							case 9:
								RightHand2 = 15;
								break;
							case 10:
								RightHand2 = 12;
								break;

							case 11:
								RightHand2 = 26;
								break;
							case 12:
								RightHand2 = 7;
								break;
							case 13:
								RightHand2 = 29;
								break;
							case 14:
								RightHand2 = 25;
								break;
							case 15:
								RightHand2 = 16;
								break;

							case 16:
								RightHand2 = 1;
								break;
							case 17:
								RightHand2 = 10;
								break;
							case 18:
								RightHand2 = 14;
								break;
							case 19:
								RightHand2 = 22;
								break;
							case 20:
								RightHand2 = 11;
								break;

							case 21:
								RightHand2 = 27;
								break;
							case 22:
								RightHand2 = 30;
								break;
							case 23:
								RightHand2 = 17;
								break;
							case 24:
								RightHand2 = 6;
								break;
							case 25:
								RightHand2 = 23;
								break;

							case 26:
								RightHand2 = 28;
								break;
							case 27:
								RightHand2 = 18;
								break;
							case 28:
								RightHand2 = 24;
								break;
							case 29:
								RightHand2 = 19;
								break;
							case 30:
								RightHand2 = 20;
								break;

							case 31:
								RightHand2 = 31;
								break;

							default:
								break;
							}

							action_exec((keyevent_t) {
								.key = (keypos_t) { .row = RightHand2 << 8, .col = LeftHand2 << 8 },
									.pressed = 1,
									.time = 1 /* time should not be 0 */
							});
							//wait_ms(20);
							action_exec((keyevent_t) {
								.key = (keypos_t) { .row = RightHand2 << 8, .col = LeftHand2 << 8 },
									.pressed = 0,
									.time = 1 /* time should not be 0 */
							});

							layer_on(1);
							layer_off(0);
							action_exec((keyevent_t) {
								.key = (keypos_t) { .row = RightHand2 << 8, .col = LeftHand2 << 8 },
									.pressed = 1,
									.time = 1
							});
							//wait_ms(20);
							action_exec((keyevent_t) {
								.key = (keypos_t) { .row = RightHand2 << 8, .col = LeftHand2 << 8 },
									.pressed = 0,
									.time = 1
							});

							layer_on(2);
							layer_off(1);
							action_exec((keyevent_t) {
								.key = (keypos_t) { .row = RightHand2 << 8, .col = LeftHand2 << 8 },
									.pressed = 1,
									.time = 1
							});
							//wait_ms(20);
							action_exec((keyevent_t) {
								.key = (keypos_t) { .row = RightHand2 << 8, .col = LeftHand2 << 8 },
									.pressed = 0,
									.time = 1
							});

							layer_on(0);
							layer_off(2);
						}
					}
				}
				LeftHand_old = LeftHand;
				RightHand_old = RightHand;
	}
	// call with pseudo tick event when no real key event.
#ifdef QMK_KEYS_PER_SCAN
                        // only jump out if we have processed "enough" keys.
                        if (++keys_processed >= QMK_KEYS_PER_SCAN)
#endif
    //                        // process a key per task call
    //                        goto MATRIX_LOOP_END;
    //                }
    //            }
    //        }
    //    }
    //}
    // call with pseudo tick event when no real key event.
#ifdef QMK_KEYS_PER_SCAN
    // we can get here with some keys processed now.
    if (!keys_processed)
#endif
        action_exec(TICK);

//MATRIX_LOOP_END:

#ifdef DEBUG_MATRIX_SCAN_RATE
    matrix_scan_perf_task();
#endif

#if defined(RGBLIGHT_ENABLE)
    rgblight_task();
#endif

#if defined(BACKLIGHT_ENABLE)
#    if defined(BACKLIGHT_PIN) || defined(BACKLIGHT_PINS)
    backlight_task();
#    endif
#endif

#ifdef ENCODER_ENABLE
    encoder_read();
#endif

#ifdef QWIIC_ENABLE
    qwiic_task();
#endif

#ifdef OLED_DRIVER_ENABLE
    oled_task();
#    ifndef OLED_DISABLE_TIMEOUT
    // Wake up oled if user is using those fabulous keys!
    if (ret) oled_on();
#    endif
#endif

#ifdef MOUSEKEY_ENABLE
    // mousekey repeat & acceleration
    mousekey_task();
#endif

#ifdef PS2_MOUSE_ENABLE
    ps2_mouse_task();
#endif

#ifdef SERIAL_MOUSE_ENABLE
    serial_mouse_task();
#endif

#ifdef ADB_MOUSE_ENABLE
    adb_mouse_task();
#endif

#ifdef SERIAL_LINK_ENABLE
    serial_link_update();
#endif

#ifdef VISUALIZER_ENABLE
    visualizer_update(default_layer_state, layer_state, visualizer_get_mods(), host_keyboard_leds());
#endif

#ifdef POINTING_DEVICE_ENABLE
    pointing_device_task();
#endif

#ifdef MIDI_ENABLE
    midi_task();
#endif

#ifdef VELOCIKEY_ENABLE
    if (velocikey_enabled()) {
        velocikey_decelerate();
    }
#endif

#ifdef JOYSTICK_ENABLE
    joystick_task();
#endif

    // update LED
    if (led_status != host_keyboard_leds()) {
        led_status = host_keyboard_leds();
        keyboard_set_leds(led_status);
    }
}

/** \brief keyboard set leds
 *
 * FIXME: needs doc
 */
void keyboard_set_leds(uint8_t leds) {
    if (debug_keyboard) {
        debug("keyboard_set_led: ");
        debug_hex8(leds);
        debug("\n");
    }
    led_set(leds);
}
