/* Copyright 2015-2017 Jack Humbert
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
#include "muse.h"

enum preonic_layers {
  _COLEMAK,
  _NUMBERS,
  _SYMBOLS,
  _PAREN,
  _ARROW
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_COLEMAK] = LAYOUT_preonic_grid( \
  KC_ESCAPE,  KC_1,        KC_2,        KC_3,        KC_4,        KC_5,            KC_6,            KC_7,                 KC_8,     KC_9,         KC_0,         KC_EQUAL, \
  KC_TAB,     LT(1,KC_Q),  LT(2,KC_W),  LT(3,KC_F),  LT(4,KC_P),  KC_B,            KC_J,            KC_L,                 KC_U,     KC_Y,         KC_SCLN,      KC_BSLASH,  \
  KC_BSPACE,  KC_A,        KC_R,        KC_S,        KC_T,        KC_G,            KC_K,            KC_N,                 KC_E,     KC_I,         KC_O,         KC_QUOT, \
  KC_LSFT,    KC_Z,        KC_X,        KC_C,        KC_D,        KC_V,            KC_M,            KC_H,                 KC_COMM,  KC_DOT,       KC_SLSH,      KC_RSHIFT,  \
  KC_LCTRL,   KC_LALT,     KC_APP,     KC_LGUI,     KC_NO,       KC_SPC,          KC_SPC,          LT(_ARROW, KC_ENTER), KC_MINUS, KC_LBRACKET,  KC_RBRACKET,  KC_RCTRL  \
),

[_NUMBERS] = LAYOUT_preonic_grid( \
  KC_ESCAPE,       KC_F1,           KC_F2,           KC_F3,           KC_F4,           KC_F5,           KC_F6,   KC_F7,   KC_F8,   KC_F9,      KC_F10,          KC_F11, \
  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_NO,   KC_7,    KC_8,    KC_9,       KC_KP_SLASH,     KC_F12,  \
  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_NO,   KC_4,    KC_5,    KC_6,       KC_KP_ASTERISK,  KC_F13, \
  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_NO,   KC_1,    KC_2,    KC_3,       KC_KP_MINUS,     KC_EQUAL,  \
  BL_TOGG,         KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_NO,   KC_NO,   KC_0,    KC_KP_DOT,  KC_KP_PLUS,      KC_ENTER  \
),

[_SYMBOLS] = LAYOUT_preonic_grid( \
  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, \
  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_UNDS,        KC_PLUS,        KC_TRANSPARENT,  \
  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_TRANSPARENT, \
  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_GRAVE,       KC_UNDS,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,  \
  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT \
),

[_PAREN] = LAYOUT_preonic_grid( \
  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, \
  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_NO,          KC_RPRN,        KC_RBRACKET,    KC_RCBR,        KC_RABK,        KC_TRANSPARENT,  \
  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_NO,          KC_LPRN,        KC_LBRACKET,    KC_LCBR,        KC_LABK,        KC_TRANSPARENT, \
  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,  \
  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT \
),

[_ARROW] = LAYOUT_preonic_grid( \
  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_NO,          KC_INSERT,      KC_HOME,        KC_PGUP,        KC_NO,          KC_NO, \
  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_NO,          KC_DELETE,      KC_END,         KC_PGDOWN,      KC_NO,          KC_NO,  \
  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_NO,          KC_NO,          KC_UP,          KC_NO,          KC_NO,          KC_NO, \
  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,          KC_NO, \
  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO \
)

};

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case _COLEMAK:
        rgblight_setrgb (0x00,  0x00, 0xFF);
        break;
    case _NUMBERS:
        rgblight_setrgb (0xFF,  0x00, 0x00);
        break;
    case _PAREN:
        rgblight_setrgb (0x00,  0xFF, 0x00);
        break;
    case _SYMBOLS:
        rgblight_setrgb (0x7A,  0x00, 0xFF);
        break;
    default: //  for any other layers, or the default layer
        rgblight_setrgb (0x00,  0xFF, 0xFF);
        break;
    }
  return state;
}


