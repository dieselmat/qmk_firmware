#include QMK_KEYBOARD_H


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _COLEMAK 0
#define _NUMBERS 1
#define _SYMBOLS 2
#define _PAREN 3
#define _ARROW 4

// Some basic macros
#define TASK    LCTL(LSFT(KC_ESC))
#define TAB_R   LCTL(KC_TAB)
#define TAB_L   LCTL(LSFT(KC_TAB))
#define TAB_RO  LCTL(LSFT(KC_T))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_COLEMAK] = LAYOUT_5x7(
  // left hand
   KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TG(_NUMBERS),
   LCTL(KC_BSPACE),LT(1,KC_Q),     LT(2,KC_W),     LT(3,KC_F),     LT(4,KC_P),     KC_B,           KC_CAPSLOCK,
   KC_BSPACE,      KC_A,           KC_R,           KC_S,           KC_T,           KC_G,           KC_TRANSPARENT,
   KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,           
   KC_LCTRL,       KC_LEFT,        KC_DOWN,        KC_UP,
                               KC_SPC, TT(_ARROW),
                               KC_LCTL, KC_LSFT,
                               KC_LALT, KC_LGUI,
  // right hand
   TG(_ARROW),     KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_EQUAL,
   KC_TRANSPARENT, KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCOLON,      KC_BSLASH,
   KC_TRANSPARENT, KC_K,           KC_N,           KC_E,           KC_I,           KC_O,           KC_QUOTE,
                   KC_M,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,
                                                   KC_MINUS,       KC_LBRACKET,    KC_RBRACKET,    KC_RCTRL,
        KC_TAB, KC_ENT,
        KC_RSFT, KC_RCTL,
        KC_RGUI, KC_RALT),

[_NUMBERS] = LAYOUT_5x7(
  // left hand
  KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,
  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,       
  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                               KC_TRANSPARENT, KC_TRANSPARENT,
                               KC_TRANSPARENT, KC_TRANSPARENT,
                               KC_TRANSPARENT, KC_TRANSPARENT,
        // right hand
  KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
  KC_TRANSPARENT, KC_NO,          KC_7,           KC_8,           KC_9,           KC_KP_SLASH,    KC_F12,
  KC_TRANSPARENT, KC_NO,          KC_4,           KC_5,           KC_6,           KC_KP_ASTERISK, KC_F13,
                  KC_NO,          KC_1,           KC_2,           KC_3,           KC_KP_MINUS,    KC_EQUAL,
                                                  KC_KP_0,        KC_KP_DOT,      KC_KP_PLUS,     KC_ENTER,
        KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT),

[_SYMBOLS] = LAYOUT_5x7(
  // left hand
  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,  
  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,       
  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                               KC_TRANSPARENT, KC_TRANSPARENT,
                               KC_TRANSPARENT, KC_TRANSPARENT,
                               KC_TRANSPARENT, KC_TRANSPARENT,
  // right hand
 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
 KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_UNDS,        KC_PLUS,        KC_TRANSPARENT,
 KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_TRANSPARENT,
                 KC_GRAVE,       KC_UNDS,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT),
[_PAREN] = LAYOUT_5x7(
  // left hand
  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,  
  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,       
  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                               KC_TRANSPARENT, KC_TRANSPARENT,
                               KC_TRANSPARENT, KC_TRANSPARENT,
                               KC_TRANSPARENT, KC_TRANSPARENT,
  // right hand
 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
 KC_TRANSPARENT, KC_NO,          KC_RPRN,        KC_RBRACKET,    KC_RCBR,        KC_RABK,        KC_TRANSPARENT,
 KC_TRANSPARENT, KC_NO,          KC_LPRN,        KC_LBRACKET,    KC_LCBR,        KC_LABK,        KC_TRANSPARENT,
                 KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,
                                                 KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT),
[_ARROW] = LAYOUT_5x7(
  // left hand
  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,  
  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,       
  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                               KC_TRANSPARENT, KC_TRANSPARENT,
                               KC_TRANSPARENT, KC_TRANSPARENT,
                               KC_TRANSPARENT, KC_TRANSPARENT,
  // right hand
  KC_TRANSPARENT, KC_NO,          KC_INSERT,      KC_HOME,        KC_PGUP,        KC_NO,          KC_NO,
  KC_NO,          KC_NO,          KC_DELETE,      KC_END,         KC_PGDOWN,      KC_NO,          KC_NO,
  KC_NO,          KC_NO,          KC_NO,          KC_UP,          KC_NO,          KC_NO,          KC_NO,
                  KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,          KC_NO,
                                                  KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT)

};
