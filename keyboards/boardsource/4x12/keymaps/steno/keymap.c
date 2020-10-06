#include QMK_KEYBOARD_H
#include "keymap_steno.h"

extern keymap_config_t keymap_config;

#define _PLOVER 0
#define ST_BOLT QK_STENO_BOLT
#define ST_GEM  QK_STENO_GEMINI


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Plover layer (http://opensteno.org)
 * ,-----------------------------------------------------------------------------------.
 * |   #  |   #  |   #  |   #  |   #  |   #  |   #  |   #  |   #  |   #  |   #  |   #  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |  FN  |   S  |   T  |   P  |   H  |   *  |   *  |   F  |   P  |   L  |   T  |   D  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |   S  |   K  |   W  |   R  |   *  |   *  |   R  |   B  |   G  |   S  |   Z  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Exit |      |      |   A  |   O  |             |   E  |   U  |  PWR | RES1 | RES2 |
 * `-----------------------------------------------------------------------------------'
 */

[_PLOVER] = LAYOUT_ortho_4x12(
  STN_N1,  STN_N2,  STN_N3,  STN_N4,  STN_N5,  STN_N6,  STN_N7,  STN_N8,  STN_N9,  STN_NA,  STN_NB,  STN_NC ,
  STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1, STN_FN,  STN_ST3, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR ,  
  STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2, KC_NO,   STN_ST4, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR ,  
  KC_NO,   KC_NO,   KC_NO,   STN_A,   STN_O,   KC_NO,   STN_E,   STN_U,   KC_NO,   KC_NO,   KC_NO,   KC_NO
)
};
