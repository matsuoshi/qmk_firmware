/*
 * amag23 Right
 */
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    BASE,
    FN1,
    FN2
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_all( /* Base Layer */
      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
      KC_H,    KC_J,    KC_K,    KC_L,    LT(FN2,KC_SCLN), KC_QUOT,
      KC_N,    KC_M,    KC_COMM, KC_DOT,  LT(FN1,KC_SLSH), KC_ENT,
      KC_RALT, KC_LEFT, KC_DOWN, KC_UP,            KC_RGHT
  ),
  [FN1] = LAYOUT_all( /* Function Layer */
      KC_NO,   KC_7,    KC_8,    KC_9,    KC_NO,   KC_NO,
      KC_MINS, KC_4,    KC_5,    KC_6,    KC_NO,   KC_NO,
      KC_COLN, KC_1,    KC_2,    KC_3,    KC_NO,   KC_NO,
      KC_NO,   KC_0,    KC_DOT,  KC_SLSH,          KC_NO
  ),
  [FN2] = LAYOUT_all( /* Function Layer */
      KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_NO,   KC_NO,
      KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_NO,   KC_NO,
      KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,   KC_NO,
      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
  ),
};
// clang-format on

