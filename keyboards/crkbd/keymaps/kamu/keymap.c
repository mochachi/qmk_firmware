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
//#include QMK_KEYBOARD_H
#include "keymap_jp.h"

const uint16_t PROGMEM keymaps[MATRIX_ROWS2][MATRIX_COLS2][3] =
  {
	// ÅõÅõÅõÅõÅõ
	   { { KC_NO, KC_NO, KC_NO },    { KC_NO, KC_NO, KC_NO },  { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_NO, KC_NO, KC_NO },    { KC_NO, KC_NO, KC_NO },  { KC_ESCAPE, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, \
		 { KC_NO, KC_NO, KC_NO },    { KC_NO, KC_NO, KC_NO },  { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_ENTER, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },  { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_NO, KC_NO, KC_NO },    { KC_TAB, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_SPACE, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },  { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_BSPC, KC_NO, KC_NO },  { KC_NO, KC_NO, KC_NO },  { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_NO, KC_NO, KC_NO },    { KC_NO, KC_NO, KC_NO },  { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO } },
	// ÅõÅõÅõÅõÅú
	   { { KC_NO, KC_NO, KC_NO },    { KC_DOT, KC_NO, KC_NO }, { KC_W,  KC_O,  KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_W,  KC_I,  KC_NO },    { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_W,  KC_E,  KC_NO },    { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_NO, KC_NO, KC_NO },    { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
         { KC_W,  KC_A,  KC_NO },    { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_NO, KC_NO, KC_NO },    { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_L,  KC_W,  KC_A  },    { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_NO, KC_NO, KC_NO },    { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO } },
	// ÅúÅõÅõÅõÅõ
	   { { KC_NO, KC_NO, KC_NO },    { KC_R,   KC_U,  KC_NO }, { KC_R,  KC_O,  KC_NO },     { KC_NO, KC_NO, KC_NO }, \
	     { KC_R,  KC_I,  KC_NO },    { KC_R,   KC_Y,  KC_U  }, { KC_R,  KC_Y,  KC_O  },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_R,  KC_E,  KC_NO },    { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_NO, KC_NO, KC_NO },    { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
         { KC_R,  KC_A,  KC_NO },    { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_R,  KC_Y,  KC_A  },    { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_NO, KC_NO, KC_NO },    { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_NO, KC_NO, KC_NO },    { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO } },
	// ÅúÅõÅõÅõÅú
	   { { KC_NO, KC_NO, KC_NO },    { KC_S,   KC_U,  KC_NO }, { KC_S,  KC_O,  KC_NO },     { KC_NO, KC_NO, KC_NO }, \
	     { KC_S,  KC_I,  KC_NO },    { KC_S,   KC_Y,  KC_U  }, { KC_S,  KC_Y,  KC_O  },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_S,  KC_E,  KC_NO },    { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_NO, KC_NO, KC_NO },    { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
         { KC_S,  KC_A,  KC_NO },    { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_S,  KC_Y,  KC_A  },    { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_NO, KC_NO, KC_NO },    { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_NO, KC_NO, KC_NO },    { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO } },
	// ÅõÅúÅõÅõÅõ
	   { { KC_NO,    KC_NO, KC_NO }, { KC_Y,   KC_U,  KC_NO }, { KC_Y,  KC_O,  KC_NO },     { KC_L,  KC_Y,  KC_O  }, \
		 { KC_COMMA, KC_NO, KC_NO }, { KC_L,   KC_Y,  KC_U  }, { KC_L,  KC_Y,  KC_O  },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_N,     KC_N,  KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_MINS,  KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
         { KC_Y,     KC_A,  KC_NO }, { KC_L,   KC_Y,  KC_U  }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_L,     KC_Y,  KC_A  }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_L,     KC_Y,  KC_A  }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO } },
	// ÅõÅúÅõÅõÅú
	   { { KC_NO,    KC_NO, KC_NO }, { KC_G,   KC_U,  KC_NO }, { KC_G,  KC_O,  KC_NO },     { KC_NO, KC_NO, KC_NO }, \
	     { KC_G,     KC_I,  KC_NO }, { KC_G,   KC_Y,  KC_U  }, { KC_G,  KC_Y,  KC_O  },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_G,     KC_E,  KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
         { KC_G,     KC_A,  KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_G,     KC_Y,  KC_A  }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO } },
	// ÅúÅúÅõÅõÅõ
	   { { KC_NO,    KC_NO, KC_NO }, { KC_K,   KC_U,  KC_NO }, { KC_K,  KC_O,  KC_NO },     { KC_NO, KC_NO, KC_NO }, \
	     { KC_K,     KC_I,  KC_NO }, { KC_K,   KC_Y,  KC_U  }, { KC_K,  KC_Y,  KC_O  },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_K,     KC_E,  KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
         { KC_K,     KC_A,  KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
         { KC_K,     KC_Y,  KC_A  }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO } },
	// ÅúÅúÅõÅõÅú
	   { { KC_NO,          KC_NO, KC_NO }, { KC_5,       KC_NO, KC_NO }, { KC_4,        KC_NO, KC_NO }, { KC_9,  KC_NO, KC_NO }, \
	     { KC_3,           KC_NO, KC_NO }, { KC_KP_PLUS, KC_NO, KC_NO }, { KC_8,        KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, \
		 { KC_2,           KC_NO, KC_NO }, { KC_0,       KC_NO, KC_NO }, { KC_KP_SLASH, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, \
		 { KC_7,           KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,       KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, \
         { KC_1,           KC_NO, KC_NO }, { KC_0,       KC_NO, KC_NO }, { KC_KP_MINUS, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, \
		 { KC_KP_ASTERISK, KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,       KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, \
		 { KC_6,           KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,       KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, \
		 { KC_NO,          KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,       KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO } },
	// ÅõÅõÅúÅõÅõ
	   { { KC_NO,    KC_NO, KC_NO }, { KC_M,   KC_U,  KC_NO }, { KC_M,  KC_O,  KC_NO },     { KC_NO, KC_NO, KC_NO },
	     { KC_M,     KC_I,  KC_NO }, { KC_M,   KC_Y,  KC_U  }, { KC_M,  KC_Y,  KC_O  },     { KC_NO, KC_NO, KC_NO },
		 { KC_M,     KC_E,  KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
         { KC_M,     KC_A,  KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO },
		 { KC_M,     KC_Y,  KC_A  }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO } },
	// ÅõÅõÅúÅõÅú
	   { { KC_NO,    KC_NO, KC_NO }, { KC_D,   KC_U,  KC_NO }, { KC_D,  KC_O,  KC_NO },     { KC_NO, KC_NO, KC_NO },
	     { KC_D,     KC_I,  KC_NO }, { KC_D,   KC_Y,  KC_U  }, { KC_D,  KC_Y,  KC_O  },     { KC_NO, KC_NO, KC_NO },
		 { KC_D,     KC_E,  KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
         { KC_D,     KC_A,  KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO },
		 { KC_D,     KC_Y,  KC_A  }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO } },
	// ÅúÅõÅúÅõÅõ
	   { { KC_NO,    KC_NO, KC_NO }, { KC_N,   KC_U,  KC_NO }, { KC_N,  KC_O,  KC_NO },     { KC_NO, KC_NO, KC_NO },
	     { KC_N,     KC_I,  KC_NO }, { KC_N,   KC_Y,  KC_U  }, { KC_N,  KC_Y,  KC_O  },     { KC_NO, KC_NO, KC_NO },
		 { KC_N,     KC_E,  KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO }, \
         { KC_N,     KC_A,  KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO },
		 { KC_N,     KC_Y,  KC_A  }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },     { KC_NO, KC_NO, KC_NO } },
	// ÅúÅõÅúÅõÅú
	   { { KC_NO,    KC_NO, KC_NO }, { KC_F5,  KC_NO, KC_NO }, { KC_F4,  KC_NO, KC_NO },    { KC_F9, KC_NO, KC_NO },
	     { KC_F3,    KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_F8,  KC_NO, KC_NO },    { KC_NO, KC_NO, KC_NO },
		 { KC_F2,    KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_F12, KC_NO, KC_NO },    { KC_NO, KC_NO, KC_NO },
		 { KC_F7,    KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO },    { KC_NO, KC_NO, KC_NO }, \
		 { KC_F1,    KC_NO, KC_NO }, { KC_F10, KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO },    { KC_NO, KC_NO, KC_NO },
		 { KC_F11,   KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO },    { KC_NO, KC_NO, KC_NO },
		 { KC_F6,    KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO },    { KC_NO, KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO },    { KC_NO, KC_NO, KC_NO } },
	// ÅõÅúÅúÅõÅõ
	   { { KC_NO,    KC_NO, KC_NO }, { KC_U,   KC_NO, KC_NO }, { KC_O,   KC_NO, KC_NO },    { KC_L,  KC_O,  KC_NO },
	     { KC_I,     KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_L,   KC_I,  KC_NO },    { KC_NO, KC_NO, KC_NO },
		 { KC_E,     KC_NO, KC_NO }, { KC_V,   KC_U,  KC_NO }, { KC_NO,  KC_NO, KC_NO },    { KC_NO, KC_NO, KC_NO },
		 { KC_L,     KC_E,  KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO },    { KC_NO, KC_NO, KC_NO }, \
		 { KC_A,     KC_NO, KC_NO }, { KC_L,   KC_U,  KC_NO }, { KC_NO,  KC_NO, KC_NO },    { KC_NO, KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO },    { KC_NO, KC_NO, KC_NO },
		 { KC_L,     KC_A,  KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO },    { KC_NO, KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO },    { KC_NO, KC_NO, KC_NO } },
	// ÅõÅúÅúÅõÅú
	   { { KC_NO,    KC_NO, KC_NO }, {JP_COLN,  KC_NO, KC_NO }, { JP_PIPE, KC_NO, KC_NO }, { JP_SCLN, KC_NO, KC_NO },
	     { JP_UNDS,  KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, { JP_RCBR, KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO },
		 { JP_CIRC,  KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO },
		 { JP_RBRC,  KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, \
		 { JP_AT,    KC_NO, KC_NO }, { JP_LCBR, KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, 
		 { JP_LBRC,  KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO } },
	// ÅúÅúÅúÅõÅõ
	   { { KC_NO,    KC_NO, KC_NO }, { KC_W,    KC_NO, KC_NO }, { KC_R,    KC_NO, KC_NO }, { KC_S,    KC_NO, KC_NO },
	     { KC_Y,     KC_NO, KC_NO }, { KC_G,    KC_NO, KC_NO }, { KC_K,    KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO },
		 { KC_M,     KC_NO, KC_NO }, { KC_D,    KC_NO, KC_NO }, { KC_N,    KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO },
		 { KC_SPACE, KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, \
		 { KC_H,     KC_NO, KC_NO }, { KC_T,    KC_NO, KC_NO }, { KC_Z,    KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, 
		 { KC_B,     KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, 
		 { KC_P,     KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO } },
	// ÅúÅúÅúÅõÅú
	   { { KC_NO,          KC_NO, KC_NO }, { KC_MS_WH_UP, KC_NO,          KC_NO }, { KC_MS_WH_DOWN, KC_NO,          KC_NO }, { KC_NO, KC_NO, KC_NO },
	     { KC_MS_WH_RIGHT, KC_NO, KC_NO }, { KC_MS_WH_UP, KC_MS_WH_RIGHT, KC_NO }, { KC_MS_WH_DOWN, KC_MS_WH_RIGHT, KC_NO }, { KC_NO, KC_NO, KC_NO },
		 { KC_NO,          KC_NO, KC_NO }, { KC_NO,       KC_NO,          KC_NO }, { KC_NO,         KC_NO,          KC_NO }, { KC_NO, KC_NO, KC_NO },
		 { KC_NO,          KC_NO, KC_NO }, { KC_NO,       KC_NO,          KC_NO }, { KC_NO,         KC_NO,          KC_NO }, { KC_NO, KC_NO, KC_NO }, \
		 { KC_MS_WH_LEFT,  KC_NO, KC_NO }, { KC_MS_WH_UP, KC_MS_WH_LEFT,  KC_NO }, { KC_MS_WH_DOWN, KC_MS_WH_LEFT,  KC_NO }, { KC_NO, KC_NO, KC_NO },
		 { KC_NO,          KC_NO, KC_NO }, { KC_NO,       KC_NO,          KC_NO }, { KC_NO,         KC_NO,          KC_NO }, { KC_NO, KC_NO, KC_NO },
		 { KC_NO,          KC_NO, KC_NO }, { KC_NO,       KC_NO,          KC_NO }, { KC_NO,         KC_NO,          KC_NO }, { KC_NO, KC_NO, KC_NO },
		 { KC_NO,          KC_NO, KC_NO }, { KC_NO,       KC_NO,          KC_NO }, { KC_NO,         KC_NO,          KC_NO }, { KC_NO, KC_NO, KC_NO } },
	// ÅõÅõÅõÅúÅõ
	   { { KC_NO,    KC_NO, KC_NO }, { KC_H,  KC_U,  KC_NO }, { KC_H,  KC_O,  KC_NO }, { KC_NO,    KC_NO, KC_NO },
	     { KC_H,     KC_I,  KC_NO }, { KC_H,  KC_Y,  KC_U  }, { KC_H,  KC_Y,  KC_O  }, { KC_NO,    KC_NO, KC_NO },
		 { KC_H,     KC_E,  KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, \
		 { KC_H,     KC_A,  KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_H,     KC_Y,  KC_A  }, { KC_NO, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO } },
	// ÅõÅõÅõÅúÅú
	   { { KC_NO,    KC_NO, KC_NO }, { KC_T,  KC_U,  KC_NO }, { KC_T,  KC_O,  KC_NO }, { KC_NO,    KC_NO, KC_NO },
	     { KC_T,     KC_I,  KC_NO }, { KC_T,  KC_Y,  KC_U  }, { KC_T,  KC_Y,  KC_O  }, { KC_NO,    KC_NO, KC_NO },
		 { KC_T,     KC_E,  KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, \
		 { KC_T,     KC_A,  KC_NO }, { KC_L,  KC_T,  KC_U  }, { KC_NO, KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_T,     KC_Y,  KC_A  }, { KC_NO, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO } },
	// ÅúÅõÅõÅúÅõ
	   { { KC_NO,    KC_NO, KC_NO }, { KC_Z,  KC_U,  KC_NO }, { KC_Z,  KC_O,  KC_NO }, { KC_NO,    KC_NO, KC_NO },
	     { KC_Z,     KC_I,  KC_NO }, { KC_Z,  KC_Y,  KC_U  }, { KC_Z,  KC_Y,  KC_O  }, { KC_NO,    KC_NO, KC_NO },
		 { KC_Z,     KC_E,  KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, \
		 { KC_Z,     KC_A,  KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_Z,     KC_Y,  KC_A  }, { KC_NO, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO } },
	// ÅúÅõÅõÅúÅú
	   { { KC_NO,      KC_NO, KC_NO }, { LSFT(KC_5), KC_NO, KC_NO }, { LSFT(KC_4), KC_NO, KC_NO }, {JP_TILD, KC_NO, KC_NO },
	     { LSFT(KC_3), KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { LSFT(KC_9), KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO },
		 { LSFT(KC_2), KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO },
		 { LSFT(KC_7), KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, \
		 { LSFT(KC_1), KC_NO, KC_NO }, { LSFT(KC_8), KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO },
		 { KC_NO,      KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO }, 
		 { LSFT(KC_6), KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO },
		 { KC_NO,      KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,  KC_NO, KC_NO } },
	// ÅõÅúÅõÅúÅõ
	   { { KC_NO,      KC_NO, KC_NO }, { KC_B,  KC_U,  KC_NO },{ KC_B,  KC_O,  KC_NO },{ KC_NO,    KC_NO, KC_NO },
	     { KC_B,       KC_I,  KC_NO }, { KC_B,  KC_Y,  KC_U  },{ KC_B,  KC_Y,  KC_O  },{ KC_NO,    KC_NO, KC_NO },
		 { KC_B,       KC_E,  KC_NO }, { KC_NO, KC_NO, KC_NO },{ KC_NO, KC_NO, KC_NO },{ KC_NO,    KC_NO, KC_NO },
		 { KC_NO,      KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },{ KC_NO, KC_NO, KC_NO },{ KC_NO,    KC_NO, KC_NO }, \
		 { KC_B,       KC_A,  KC_NO }, { KC_NO, KC_NO, KC_NO },{ KC_NO, KC_NO, KC_NO },{ KC_NO,    KC_NO, KC_NO },
		 { KC_B,       KC_Y,  KC_A  }, { KC_NO, KC_NO, KC_NO },{ KC_NO, KC_NO, KC_NO },{ KC_NO,    KC_NO, KC_NO },
		 { KC_NO,      KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },{ KC_NO, KC_NO, KC_NO },{ KC_NO,    KC_NO, KC_NO },
		 { KC_NO,      KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },{ KC_NO, KC_NO, KC_NO },{ KC_NO,    KC_NO, KC_NO } },
	// ÅõÅúÅõÅúÅú
	   { { KC_NO,      KC_NO, KC_NO }, { LSFT(KC_U), KC_NO, KC_NO }, { LSFT(KC_O), KC_NO, KC_NO }, { LSFT(KC_L), KC_NO, KC_NO },
	     { LSFT(KC_I), KC_NO, KC_NO }, { KC_COMMA,   KC_NO, KC_NO }, { LSFT(KC_Q), KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO },
		 { LSFT(KC_E), KC_NO, KC_NO }, { KC_DOT,     KC_NO, KC_NO }, { KC_QUOTE,   KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO },
		 { LSFT(KC_X), KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, \
		 { LSFT(KC_A), KC_NO, KC_NO }, { LSFT(KC_C), KC_NO, KC_NO }, { LSFT(KC_J), KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, 
		 { LSFT(KC_V), KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO },
		 { LSFT(KC_F), KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO },
		 { KC_NO,      KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO } },
	// ÅúÅúÅõÅúÅõ
	   { { KC_NO,    KC_NO, KC_NO }, { KC_U,     KC_NO, KC_NO }, { KC_O,     KC_NO, KC_NO }, { KC_L,  KC_NO, KC_NO },
	     { KC_I,     KC_NO, KC_NO }, { KC_COMMA, KC_NO, KC_NO }, { KC_Q,     KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },
		 { KC_E,     KC_NO, KC_NO }, { KC_DOT,   KC_NO, KC_NO }, { KC_QUOTE, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },
		 { KC_X,     KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, \
		 { KC_A,     KC_NO, KC_NO }, { KC_C,     KC_NO, KC_NO }, { KC_J,     KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, 
		 { KC_V,     KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, 
		 { KC_F,     KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO } },
	// ÅúÅúÅõÅúÅú
	   { { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
	     { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, \
	     { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }},
	// ÅõÅõÅúÅúÅõ
	   { { KC_NO,    KC_NO, KC_NO }, { KC_P,  KC_U,  KC_NO }, { KC_P,  KC_O,  KC_NO }, { KC_NO,    KC_NO, KC_NO },
	     { KC_P,     KC_I,  KC_NO }, { KC_P,  KC_Y,  KC_U  }, { KC_P,  KC_Y,  KC_O  }, { KC_NO,    KC_NO, KC_NO },
		 { KC_P,     KC_E,  KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_ENTER, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, \
		 { KC_P,     KC_A,  KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, 
		 { KC_P,     KC_Y,  KC_A  }, { KC_NO, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, 
		 { KC_BSPC,  KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO, KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO } },
	// ÅõÅõÅúÅúÅú
	   { { KC_NO,      KC_NO, KC_NO }, { LSFT(KC_W), KC_NO, KC_NO }, { LSFT(KC_R), KC_NO, KC_NO }, { LSFT(KC_S), KC_NO, KC_NO },
	     { LSFT(KC_Y), KC_NO, KC_NO }, { LSFT(KC_G), KC_NO, KC_NO }, { LSFT(KC_K), KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO },
		 { LSFT(KC_M), KC_NO, KC_NO }, { LSFT(KC_D), KC_NO, KC_NO }, { LSFT(KC_N), KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO },
		 { KC_SPACE,   KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, \
		 { LSFT(KC_H), KC_NO, KC_NO }, { LSFT(KC_T), KC_NO, KC_NO }, { LSFT(KC_Z), KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, 
		 { LSFT(KC_B), KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO },
		 { LSFT(KC_P), KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO },
		 { KC_NO,      KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO } },
	// ÅúÅõÅúÅúÅõ
	   { { KC_NO,          KC_NO, KC_NO }, { LSFT(KC_COMMA), KC_NO, KC_NO }, { LSFT(KC_DOT), KC_NO, KC_NO }, { LCTL(KC_Z), KC_NO, KC_NO },
	     { LSFT(KC_SLASH), KC_NO, KC_NO }, { KC_NO,          KC_NO, KC_NO }, { LCTL(KC_V),   KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO },
		 { JP_GRV,         KC_NO, KC_NO }, { KC_NO,          KC_NO, KC_NO }, { KC_NO,        KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO },
		 { LCTL(KC_C),     KC_NO, KC_NO }, { KC_NO,          KC_NO, KC_NO }, { KC_NO,        KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO }, \
		 { JP_BSLS,        KC_NO, KC_NO }, { LCTL(KC_Y),     KC_NO, KC_NO }, { KC_NO,        KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO },
		 { KC_NO,          KC_NO, KC_NO }, { KC_NO,          KC_NO, KC_NO }, { KC_NO,        KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO },
		 { LCTL(KC_X),     KC_NO, KC_NO }, { KC_NO,          KC_NO, KC_NO }, { KC_NO,        KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO },
		 { KC_NO,          KC_NO, KC_NO }, { KC_NO,          KC_NO, KC_NO }, { KC_NO,        KC_NO, KC_NO }, { KC_NO,      KC_NO, KC_NO } },
	// ÅúÅõÅúÅúÅú
	   { { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
	     { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, \
	     { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO } },
	// ÅõÅúÅúÅúÅõ
	   { { KC_NO,          KC_NO, KC_NO }, { KC_UP,       KC_NO, KC_NO }, { KC_DOWN,       KC_NO, KC_NO }, { KC_ZKHK, KC_NO, KC_NO },
	     { KC_RIGHT,       KC_NO, KC_NO }, { KC_NO,       KC_NO, KC_NO }, { LSFT(KC_DOWN), KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO },
		 { KC_SPACE,       KC_NO, KC_NO }, { KC_NO,       KC_NO, KC_NO }, { KC_NO,         KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO },
		 { LSFT(KC_RIGHT), KC_NO, KC_NO }, { KC_NO,       KC_NO, KC_NO }, { KC_NO,         KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, \
		 { KC_LEFT,        KC_NO, KC_NO }, { LSFT(KC_UP), KC_NO, KC_NO }, { KC_NO,         KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO },
		 { KC_NO,          KC_NO, KC_NO }, { KC_NO,       KC_NO, KC_NO }, { KC_NO,         KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO }, 
		 { LSFT(KC_LEFT),  KC_NO, KC_NO }, { KC_NO,       KC_NO, KC_NO }, { KC_NO,         KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO },
		 { KC_KANA,        KC_NO, KC_NO }, { KC_NO,       KC_NO, KC_NO }, { KC_NO,         KC_NO, KC_NO }, { KC_NO,   KC_NO, KC_NO } },
	// ÅõÅúÅúÅúÅú
	   { { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
	     { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, \
	     { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO } },
	// ÅúÅúÅúÅúÅõ
	   { { KC_NO,       KC_NO, KC_NO }, { KC_MS_UP, KC_NO,       KC_NO }, { KC_MS_DOWN, KC_NO,       KC_NO }, { KC_NO,    KC_NO, KC_NO },
	     { KC_MS_RIGHT, KC_NO, KC_NO }, { KC_MS_UP, KC_MS_RIGHT, KC_NO }, { KC_MS_DOWN, KC_MS_RIGHT, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,       KC_NO, KC_NO }, { KC_NO,    KC_NO,       KC_NO }, { KC_NO,      KC_NO,       KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,       KC_NO, KC_NO }, { KC_NO,    KC_NO,       KC_NO }, { KC_NO,      KC_NO,       KC_NO }, { KC_NO,    KC_NO, KC_NO }, \
		 { KC_MS_LEFT,  KC_NO, KC_NO }, { KC_MS_UP, KC_MS_LEFT,  KC_NO }, { KC_MS_DOWN, KC_MS_LEFT,  KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,       KC_NO, KC_NO }, { KC_NO,    KC_NO,       KC_NO }, { KC_NO,      KC_NO,       KC_NO }, { KC_NO,    KC_NO, KC_NO }, 
		 { KC_NO,       KC_NO, KC_NO }, { KC_NO,    KC_NO,       KC_NO }, { KC_NO,      KC_NO,       KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,       KC_NO, KC_NO }, { KC_NO,    KC_NO,       KC_NO }, { KC_NO,      KC_NO,       KC_NO }, { KC_NO,    KC_NO, KC_NO } },
	// ÅúÅúÅúÅúÅú
	   { { KC_NO,      KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
	     { KC_MS_BTN1, KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,      KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,      KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, \
		 { KC_MS_BTN2, KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,      KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,      KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO },
		 { KC_NO,      KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO }, { KC_NO,    KC_NO, KC_NO } }

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
