/*
 * amag23 Left
 */
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    BASE,
    FN1,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_all( /* Base Layer */
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
      KC_LCTL,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
      KC_RCTL, KC_LALT, KC_BSPC, KC_LGUI,          KC_SPC
  ),
  [FN1] = LAYOUT_all( /* Function Layer */
      _______, KC_NO,   KC_7,    KC_8,    KC_9,    KC_NO,
      _______, KC_NO,   KC_4,    KC_5,    KC_6,    KC_COLN,
      _______, KC_NO,   KC_1,    KC_2,    KC_3,    KC_DOT,
      _______, _______, _______, _______,          KC_0
  ),
};
// clang-format on

