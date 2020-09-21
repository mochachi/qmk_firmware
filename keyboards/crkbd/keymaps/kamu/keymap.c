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


const uint16_t PROGMEM keymaps[3][MATRIX_ROWS2][MATRIX_COLS2] =
  {
	  {
	// ����������
   	   { KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
	   KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
	  {KC_NO, KC_DOT,KC_W,KC_NO,KC_W,KC_NO,KC_NO,KC_NO,KC_W,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
	  KC_W,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
	  {KC_NO, KC_R,KC_R,KC_NO,KC_R,KC_NO,KC_NO,KC_NO,KC_R,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
	  KC_R,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
	  {KC_NO, KC_S,KC_S,KC_NO,KC_S,KC_NO,KC_NO,KC_NO,KC_S,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
	  KC_S,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
	  {KC_NO, KC_Y,KC_Y,KC_L,KC_COMMA,KC_NO,KC_MINS,KC_NO,KC_N,KC_NO,KC_NO,KC_NO,KC_SPC,KC_NO,KC_NO,KC_NO, \
	  KC_Y,KC_L,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_L,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
	  {KC_NO, KC_G,KC_G,KC_NO,KC_G,KC_NO,KC_NO,KC_NO,KC_G,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
	  KC_G,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
	  {KC_NO, KC_K,KC_K,KC_NO,KC_K,KC_NO,KC_NO,KC_NO,KC_K,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
	  KC_K,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
	  {KC_NO, KC_5,KC_4,KC_9,KC_3,KC_KP_PLUS,KC_8,KC_NO,KC_2,KC_0,KC_KP_SLASH,KC_NO,KC_7,KC_NO,KC_NO,KC_NO, \
	  KC_1,KC_0, KC_KP_MINUS,KC_NO,KC_KP_ASTERISK,KC_NO,KC_NO,KC_NO,KC_6,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
	  {KC_NO, KC_M,KC_M,KC_NO,KC_M,KC_NO,KC_NO,KC_NO,KC_M,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
	  KC_M,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
	  {KC_NO, KC_D,KC_D,KC_NO,KC_D,KC_NO,KC_NO,KC_NO,KC_D,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
	  KC_D,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
	  {KC_NO, KC_N,KC_N,KC_NO,KC_N,KC_NO,KC_NO,KC_NO,KC_N,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
	  KC_N,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
	  {KC_NO, KC_F5,KC_F4,KC_F9,KC_F3,KC_NO,KC_F8,KC_NO,KC_F2,KC_NO,KC_F12,KC_NO,KC_F7,KC_NO,KC_NO,KC_NO, \
	  KC_F1,KC_F10,KC_NO,KC_NO,KC_F11,KC_NO,KC_NO,KC_NO,KC_F6,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
	  {KC_NO, KC_U,KC_O,KC_L,KC_I,KC_NO,KC_L,KC_NO,KC_E,KC_NO,KC_NO,KC_NO,KC_L,KC_NO,KC_NO,KC_NO, \
	  KC_A,KC_L,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_L,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
	  {KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
	  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
	  { KC_NO, KC_W,KC_R,KC_S,KC_Y,KC_G,KC_K,KC_NO,KC_M,KC_D,KC_N,KC_NO,KC_SPACE,KC_NO,KC_NO,KC_NO, \
	KC_H, KC_T, KC_Z,KC_NO, KC_B,KC_NO,KC_NO,KC_NO, KC_P,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
	  {KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
	  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
	  {KC_NO, KC_H,KC_H,KC_NO,KC_H,KC_NO,KC_NO,KC_NO,KC_H,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
	  KC_H,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
	  {KC_NO, KC_T,KC_T,KC_NO,KC_T,KC_NO,KC_NO,KC_NO,KC_T,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
	  KC_T,KC_L,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
	  {KC_NO, KC_Z,KC_Z,KC_NO,KC_Z,KC_NO,KC_NO,KC_NO,KC_Z,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
	  KC_Z,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
	  {KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
	  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
	  {KC_NO, KC_B,KC_B,KC_NO,KC_B,KC_NO,KC_NO,KC_NO,KC_B,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
	  KC_B,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
	  { KC_NO, LSFT(KC_U),LSFT(KC_O),LSFT(KC_L),LSFT(KC_I),KC_COMMA,LSFT(KC_Q),KC_NO,LSFT(KC_E),KC_DOT,KC_QUOTE,KC_NO,LSFT(KC_X),KC_NO,KC_NO,KC_NO, \
	LSFT(KC_A), LSFT(KC_C), LSFT(KC_J),KC_NO, LSFT(KC_V),KC_NO,KC_NO,KC_NO, LSFT(KC_F),KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
	{ KC_NO, LSFT(KC_W),LSFT(KC_R),LSFT(KC_S),LSFT(KC_Y),LSFT(KC_G),LSFT(KC_K),KC_NO,LSFT(KC_M),LSFT(KC_D),LSFT(KC_N),KC_NO,KC_SPACE,KC_NO,KC_NO,KC_NO, \
	LSFT(KC_H), LSFT(KC_T), LSFT(KC_Z),KC_NO, LSFT(KC_B),KC_NO,KC_NO,KC_NO, LSFT(KC_P),KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
	  {KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
	  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
	  {KC_NO, KC_P,KC_P,KC_NO,KC_P,KC_NO,KC_NO,KC_NO,KC_P,KC_NO,KC_NO,KC_NO,KC_ENTER,KC_NO,KC_NO,KC_NO, \
	  KC_P,KC_NO,KC_NO,KC_NO, KC_SPACE,KC_NO,KC_NO,KC_NO, KC_BSPC,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
	  { KC_NO, KC_U,KC_O,KC_L,KC_I,KC_COMMA,KC_Q,KC_NO,KC_E,KC_DOT,KC_QUOTE,KC_NO,KC_X,KC_NO,KC_NO,KC_NO, \
	KC_A, KC_C, KC_J,KC_NO, KC_V,KC_NO,KC_NO,KC_NO, KC_F,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
	  {KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
	  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
	  {KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
	  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
	  {KC_NO, KC_UP,KC_DOWN,KC_ZKHK,KC_RIGHT,KC_NO,LSFT(KC_RIGHT),KC_NO,KC_SPACE,KC_NO,KC_NO,KC_NO,KC_ENTER,KC_NO,KC_NO,KC_NO, \
	KC_LEFT, LSFT(KC_LEFT),KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, KC_BSPC,KC_NO,KC_NO,KC_NO,KC_KANA,KC_NO,KC_NO,KC_NO},
	// ����������
	  {KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
	  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
	  {KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
	  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
	  {KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
	  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO}
	  },



	  {
	// ����������
		{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
		{KC_NO, KC_NO, KC_O, KC_NO, KC_I, KC_NO, KC_NO, KC_NO, KC_E, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
		KC_A, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO},
	// ����������
		{KC_NO, KC_U, KC_O, KC_NO, KC_I, KC_NO, KC_NO, KC_NO, KC_E, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
		KC_A, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO},
	// ����������
		{KC_NO, KC_U, KC_O, KC_NO, KC_I, KC_NO, KC_NO, KC_NO, KC_E, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
		KC_A, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO},
	// ����������
		{KC_NO, KC_U, KC_O, KC_Y, KC_NO, KC_NO, KC_NO, KC_NO, KC_N, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
		KC_A, KC_Y, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_Y, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO},
	// ����������
		{KC_NO, KC_U, KC_O, KC_NO, KC_I, KC_NO, KC_NO, KC_NO, KC_E, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
		KC_A, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO},
	// ����������
		{KC_NO, KC_U, KC_O, KC_NO, KC_I, KC_NO, KC_NO, KC_NO, KC_E, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
		KC_A, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO},
	// ����������
		{KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_0,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
		{KC_NO, KC_U, KC_O, KC_NO, KC_I, KC_NO, KC_NO, KC_NO, KC_E, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
		KC_A, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO},
	// ����������
		{KC_NO, KC_U, KC_O, KC_NO, KC_I, KC_NO, KC_NO, KC_NO, KC_E, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
		KC_A, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO},
	// ����������
		{KC_NO, KC_U, KC_O, KC_NO, KC_I, KC_NO, KC_NO, KC_NO, KC_E, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
		KC_A, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO},
	// ����������
		{KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
		{KC_NO, KC_NO, KC_NO, KC_O, KC_NO, KC_NO, KC_I, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_E, KC_NO, KC_NO, KC_NO, \
		KC_NO, KC_U, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_A, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO},
	// ����������
		{KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
		{KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
		{KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
		{KC_NO, KC_U, KC_O, KC_NO, KC_I, KC_NO, KC_NO, KC_NO, KC_E, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
		KC_A, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO},
	// ����������
		{KC_NO, KC_U, KC_O, KC_NO, KC_I, KC_NO, KC_NO, KC_NO, KC_E, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
		KC_A, KC_T, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO},
	// ����������
		{KC_NO, KC_U, KC_O, KC_NO, KC_I, KC_NO, KC_NO, KC_NO, KC_E, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
		KC_A, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO},
	// ����������
		{KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
		{KC_NO, KC_U, KC_O, KC_NO, KC_I, KC_NO, KC_NO, KC_NO, KC_E, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
		KC_A, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO},
	// ����������
		{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
		  { KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
		{KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
		{KC_NO, KC_U, KC_O, KC_NO, KC_I, KC_NO, KC_NO, KC_NO, KC_E, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
		KC_A, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO},
	// ����������
		{KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
		{KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
		{KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
		{KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
		{KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
		{KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO},
	// ����������
		{KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO}
	},


	{
	// ����������
		{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
		{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
		{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
			KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
			{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
			KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
		  { KC_NO, KC_NO, KC_NO, KC_O, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
		  KC_NO, KC_U, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_A, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO },
	// ����������
		  { KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
			KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
			{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
			KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
			{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
			KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
			{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
		{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
			KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
			{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
			KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
			{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
			KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
			{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
		{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
			KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
			{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
		{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
		{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
		{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
			KC_NO,KC_U,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
			{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
			KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
			{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
			KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
			{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
		{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
		{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
			KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
		{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
		{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
		{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
			KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
			{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
		{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
		{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
		{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
		{ KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO },
	// ����������
		  { KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
		  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO }
	}

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
