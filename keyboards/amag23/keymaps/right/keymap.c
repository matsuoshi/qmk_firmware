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
      KC_Y,    KC_U,    KC_I,    KC_O,    LT(FN1,KC_P),    KC_MINS,
      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP, LSFT_T(KC_SLSH),
      RCTL_T(KC_ENT), RGUI_T(KC_LANG1), KC_LEFT, KC_DOWN,  KC_RGHT
  ),
  [FN1] = LAYOUT_all( /* Function Layer */
      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_0,
      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
      KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO
    ),
};
// clang-format on

