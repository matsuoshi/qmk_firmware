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
      KC_LSFT, LT(FN1,KC_Z),    KC_X,    KC_C,    KC_V,    KC_B,
      RALT_T(KC_ESC), KC_LALT, KC_BSPC, LGUI_T(KC_LANG2),          KC_SPC
  ),
  [FN1] = LAYOUT_all( /* Function Layer */
      KC_NO,   KC_NO,   KC_7,    KC_8,    KC_9,    KC_NO,
      KC_NO,   KC_NO,   KC_4,    KC_5,    KC_6,    KC_NO,
      KC_NO,   KC_NO,   KC_1,    KC_2,    KC_3,    KC_NO,
      KC_NO,   KC_NO,   KC_NO,   KC_NO,          KC_0
  ),
};
// clang-format on

