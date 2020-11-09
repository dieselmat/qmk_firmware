/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

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
#include QMK_KEYBOARD_H


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.TS
#define _MAC 0
#define _WIN 1


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_MAC] = LAYOUT_ortho_5x12(
  KC_ESC,           LGUI(KC_F4),    RGUI(KC_5),     RGUI(KC_4),  RGUI(KC_6),     C(KC_F9),       S(KC_F10),          S(KC_F9),       KC_NO,        LGUI(KC_1),   LGUI(KC_9),        C(KC_F12),
  KC_TAB,           C(KC_F4),       C(S(KC_DOWN)),  RGUI(KC_1),  RGUI(KC_8),     KC_F9,          KC_F8,              LGUI(KC_F8),    C(S(KC_S)),   KC_NO,        C(KC_F),           C(S(KC_F)),
  C(LGUI(KC_TAB)),  S(KC_DEL),      C(KC_SPACE),    RGUI(KC_2),  C(KC_D),        KC_F7,          S(KC_F8),           KC_NO,          LGUI(KC_J),   C(KC_N),      C(S(KC_N)),        C(S(KC_A)),
  KC_PSCR,          LGUI(KC_PSCR),  C(S(KC_UP)),    RGUI(KC_3),  KC_NO,          KC_NO,          KC_NO,              C(KC_K),        C(S(KC_K)),   C(KC_D),      C(LGUI(KC_LEFT)),  C(LGUI(KC_RIGHT)),
  C(KC_Z),          C(KC_C),        C(KC_V),        C(KC_A),     BL_STEP,        TG(_WIN),       KC_ENTER,           RESET,          C(KC_B),      LGUI(KC_F7),  LGUI(KC_LEFT),     LGUI(KC_RIGHT)
),
[_WIN] = LAYOUT_ortho_5x12(
  KC_ESC,           A(KC_F4),       RGUI(KC_5),     RGUI(KC_4),  RGUI(KC_6),     C(KC_F9),       S(KC_F10),          S(KC_F9),       KC_NO,        A(KC_1),      A(KC_9),           C(KC_F12),
  KC_TAB,           C(KC_F4),       C(S(KC_DOWN)),  RGUI(KC_1),  RGUI(KC_8),     KC_F9,          KC_F8,              A(KC_F8),       C(S(KC_S)),   KC_NO,        C(KC_F),           C(S(KC_F)),
  C(A(KC_TAB)),     S(KC_DEL),      C(KC_SPACE),    RGUI(KC_2),  C(KC_D),        KC_F7,          S(KC_F8),           KC_NO,          A(KC_J),      C(KC_N),      C(S(KC_N)),        C(S(KC_A)),
  KC_PSCR,          A(KC_PSCR),     C(S(KC_UP)),    RGUI(KC_3),  KC_NO,          KC_NO,          KC_NO,              C(KC_K),        C(S(KC_K)),   C(KC_D),      C(A(KC_LEFT)),     C(A(KC_RIGHT)),
  C(KC_Z),          C(KC_C),        C(KC_V),        C(KC_A),     BL_STEP,        KC_TRANSPARENT, KC_ENTER,           RESET,          C(KC_B),      A(KC_F7),     A(KC_LEFT),        A(KC_RIGHT)
)
};
