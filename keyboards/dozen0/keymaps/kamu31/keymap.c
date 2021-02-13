/* Copyright 2020 mochachi
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "keymap_jp.h"

const uint16_t PROGMEM keymaps[MATRIX_ROWS2][MATRIX_COLS2] =
  {
	  {KC_U, KC_O,KC_L,KC_I,KC_COMMA,KC_Q,KC_P,KC_E,KC_DOT,KC_QUOTE,KC_B,KC_X,KC_Z,KC_T,KC_H,KC_A, \
	  KC_C,KC_J,KC_SPACE,KC_V,KC_N,KC_D,KC_M,KC_F,KC_K,KC_G,KC_Y,KC_S,KC_R,KC_W,KC_ENTER},

	  { LSFT(KC_U), LSFT(KC_O),LSFT(KC_L),LSFT(KC_I),KC_COMMA,LSFT(KC_Q),LSFT(KC_P),LSFT(KC_E),KC_DOT,KC_QUOTE,LSFT(KC_B),LSFT(KC_X),LSFT(KC_Z),LSFT(KC_T),LSFT(KC_H),LSFT(KC_A), \
		  LSFT(KC_C), LSFT(KC_J),KC_SPACE, LSFT(KC_V), LSFT(KC_N), LSFT(KC_D), LSFT(KC_M), LSFT(KC_F), LSFT(KC_K), LSFT(KC_G), LSFT(KC_Y), LSFT(KC_S), LSFT(KC_R), LSFT(KC_W),KC_ENTER },
		
	{ KC_5, KC_4,KC_9,KC_3,JP_PLUS,KC_8,KC_NO,KC_2,KC_NO,JP_SLSH,KC_NO,KC_7,KC_NO,KC_NO,KC_NO,KC_1, \
	KC_0, JP_MINS,KC_NO, JP_ASTR,KC_NO,KC_NO,KC_NO,KC_6,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_ENTER },
	
	{ KC_U, KC_O,KC_L,KC_I,KC_COMMA,KC_Q,KC_P,KC_E,KC_DOT,KC_QUOTE,KC_B,KC_X,KC_Z,KC_T,KC_H,KC_A, \
	KC_C,KC_J,KC_SPACE,KC_V,KC_N,KC_D,KC_M,KC_F,KC_K,KC_G,KC_Y,KC_S,KC_R,KC_W,KC_ENTER },

	{ KC_ZKHK, KC_BSPC,KC_L,KC_I,KC_COMMA,KC_Q,KC_P,KC_E,KC_DOT,KC_QUOTE,KC_B,KC_X,KC_Z,KC_T,KC_H,KC_A, \
	KC_C,KC_J,KC_SPACE,KC_V,KC_N,KC_D,KC_M,KC_F,KC_K,KC_G,KC_Y,KC_S,KC_R,KC_W,KC_ENTER }
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
