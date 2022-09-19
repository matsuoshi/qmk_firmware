/* Copyright 2021
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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    BASE,
    FN1
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_all( /* Base Layer */
      KC_Y,    KC_U,    KC_I,    KC_O,    LT(FN1,KC_P),    KC_BSPC,
      KC_H,    KC_J,    KC_K,    KC_L,    KC_MINS, KC_EQL,
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

