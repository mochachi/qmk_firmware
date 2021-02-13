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

const uint16_t PROGMEM keymaps[5][MATRIX_ROWS2][MATRIX_COLS2] =
{
	//レイヤー0　英小文字
	//●○○○○　○●○○○　○○●○○　○○○●○　○○○○●
	{{KC_U,       KC_A,       KC_E,       KC_I,       KC_O },
	//●●○○○　○●●○○　○○●●○　○○○●●　●○○○●
	{KC_C,       KC_F,       KC_X,       KC_Q,       KC_L },
	//●○●○○　○●○●○　○○●○●　●○○●○　○●○○●
	{KC_DOT,     KC_V,       JP_QUOT,    KC_COMMA,   KC_J },
	//○●●●●　●○●●●　●●○●●　●●●○●　●●●●○
	{KC_W,       KC_H,       KC_M,       KC_Y,       KC_R },
	//○○●●●　●○○●●　●●○○●　●●●○○　○●●●○
	{KC_T,       KC_P,       KC_SPACE,   KC_K,       KC_S },
	//○●○●●　●○●○●　●●○●○　○●●○●　●○●●○
	{KC_D,       KC_B,       KC_N,       KC_G,       KC_Z },
	//●●●●●
	{KC_ENTER,   KC_NO,      KC_NO,      KC_NO,      KC_NO }},

	//レイヤー1　英大文字
	//●○○○○　○●○○○　○○●○○　○○○●○　○○○○●
	{{LSFT(KC_U), LSFT(KC_A), LSFT(KC_E), LSFT(KC_I), LSFT(KC_O)},
	//●●○○○　○●●○○　○○●●○　○○○●●　●○○○●
	{ LSFT(KC_C), LSFT(KC_F), LSFT(KC_X), LSFT(KC_Q), LSFT(KC_L) },
	//●○●○○　○●○●○　○○●○●　●○○●○　○●○○●
	{ KC_DOT,     LSFT(KC_V), JP_QUOT,    KC_COMMA,   LSFT(KC_J) },
	//○●●●●　●○●●●　●●○●●　●●●○●　●●●●○
	{ LSFT(KC_W), LSFT(KC_H), LSFT(KC_M), LSFT(KC_Y), LSFT(KC_R) },
	//○○●●●　●○○●●　●●○○●　●●●○○　○●●●○
	{ LSFT(KC_T), LSFT(KC_P), KC_SPACE,   LSFT(KC_K), LSFT(KC_S) },
	//○●○●●　●○●○●　●●○●○　○●●○●　●○●●○
	{ LSFT(KC_D), LSFT(KC_B), LSFT(KC_N), LSFT(KC_G), LSFT(KC_Z) },
	//●●●●●
	{ KC_ENTER,   KC_NO,      KC_NO,      KC_NO,      KC_NO }},

	//レイヤー2　数字
	//●○○○○　○●○○○　○○●○○　○○○●○　○○○○●
	{{KC_5,       KC_1,       KC_2,       KC_3,       KC_4},
	//●●○○○　○●●○○　○○●●○　○○○●●　●○○○●
	{ KC_0,       KC_6,       KC_7,       KC_8,       KC_9 },
	//●○●○○　○●○●○　○○●○●　●○○●○　○●○○●
	{ JP_EQL,     JP_ASTR,    JP_SLSH,    JP_PLUS,    JP_MINS },
	//○●●●●　●○●●●　●●○●●　●●●○●　●●●●○
	{ KC_F5,      KC_F1,      KC_F2,      KC_F3,      KC_F4 },
	//○○●●●　●○○●●　●●○○●　●●●○○　○●●●○
	{ KC_F10,     KC_F6,      KC_F7,      KC_F8,      KC_F9 },
	//○●○●●　●○●○●　●●○●○　○●●○●　●○●●○
	{ KC_NO,      KC_F11,     KC_F12,     JP_CIRC,    JP_YEN },
	//●●●●●
	{ KC_ENTER,   KC_NO,      KC_NO,      KC_NO,      KC_NO } },

	//レイヤー3　記号
	//●○○○○　○●○○○　○○●○○　○○○●○　○○○○●
	{{JP_PERC,    JP_EXLM,    JP_DQUO,    JP_HASH,    JP_DLR},
	//●●○○○　○●●○○　○○●●○　○○○●●　●○○○●
	{ JP_AT,      JP_AMPR,    JP_QUOT,    JP_LPRN,    JP_RPRN },
	//●○●○○　○●○●○　○○●○●　●○○●○　○●○○●
	{ JP_LCBR,    JP_QUES,    JP_RCBR,    JP_LBRC,    JP_RBRC },
	//○●●●●　●○●●●　●●○●●　●●●○●　●●●●○
	{ JP_RABK,    JP_TILD,    JP_PIPE,    JP_GRV,     JP_LABK },
	//○○●●●　●○○●●　●●○○●　●●●○○　○●●●○
	{ KC_NO,      JP_SCLN,    JP_COLN,    JP_UNDS,    KC_NO },
	//○●○●●　●○●○●　●●○●○　○●●○●　●○●●○
	{ LCTL(KC_Y), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), LCTL(KC_Z) },
	//●●●●●
	{ KC_ENTER,   KC_NO,      KC_NO,      KC_NO,      KC_NO }},

	//レイヤー4　制御用
	//●○○○○　○●○○○　○○●○○　○○○●○　○○○○●
	{{KC_ZKHK,    KC_BSPC,    KC_NO,      KC_NO,      KC_NO},
	//●●○○○　○●●○○　○○●●○　○○○●●　●○○○●
	{ KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO },
	//●○●○○　○●○●○　○○●○●　●○○●○　○●○○●
	{ KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO },
	//○●●●●　●○●●●　●●○●●　●●●○●　●●●●○
	{ KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO },
	//○○●●●　●○○●●　●●○○●　●●●○○　○●●●○
	{ KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO },
	//○●○●●　●○●○●　●●○●○　○●●○●　●○●●○
	{ KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO },
	//●●●●●
	{ KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO }}
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
