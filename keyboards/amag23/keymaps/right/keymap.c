/*
 * amag23 Right
 */
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    BASE,
    FN1
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_all( /* Base Layer */
      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
      KC_H,    KC_J,    KC_K,    KC_L,    KC_MINS, KC_ENT,
      KC_N,    KC_M,    KC_COMM, LT(FN1,KC_DOT),  KC_RSFT, KC_UP,
      KC_ENT,  KC_RGUI, KC_LEFT, KC_RGHT, KC_DOWN
  ),
  [FN1] = LAYOUT_all( /* Function Layer */
      KC_7,    KC_8,    KC_9,    KC_NO,   KC_NO,   KC_NO,
      KC_4,    KC_5,    KC_6,    KC_COLN, KC_NO,   KC_NO,
      KC_1,    KC_2,    KC_3,    KC_NO,   KC_NO,   KC_NO,
      KC_0,    KC_DOT,  KC_SLSH, KC_NO,            KC_NO
    ),
};
// clang-format on

