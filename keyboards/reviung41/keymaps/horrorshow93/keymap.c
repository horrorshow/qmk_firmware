/* Copyright 2021 gtips
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
#include "users/horrorshow93/horrorshow93.h"

#define LAYOUT_wrapper(...) LAYOUT_reviung41(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_wrapper(
    ______BASE_LEFT_1______, ______BASE_RIGHT_1______,
    ______BASE_LEFT_2______, ______BASE_RIGHT_2______,
    ______BASE_LEFT_3______, ______BASE_RIGHT_3______,
    ______BASE_4______
  ),

  [_LOWER] = LAYOUT_wrapper(
    ______LOWER_LEFT_1______, ______LOWER_RIGHT_1______,
    ______LOWER_LEFT_2______, ______LOWER_RIGHT_2______,
    ______LOWER_LEFT_3______, ______LOWER_RIGHT_3______,
    ______LOWER_4______
  ),

  [_RAISE] = LAYOUT_wrapper(
    ______RAISE_LEFT_1______, ______RAISE_RIGHT_1______,
    ______RAISE_LEFT_2______, ______RAISE_RIGHT_2______,
    ______RAISE_LEFT_3______, ______RAISE_RIGHT_3______,
    ______RAISE_4______
  ),

  [_ADJUST] = LAYOUT_wrapper(
    ______ADJUST_LEFT_1______, ______ADJUST_RIGHT_1______,
    ______ADJUST_LEFT_2______, ______ADJUST_RIGHT_2______,
    ______ADJUST_LEFT_3______, ______ADJUST_RIGHT_3______,
    ______ADJUST_4______
  ),

  [_FN] = LAYOUT_wrapper(
    ______FN_LEFT_1______, ______FN_RIGHT_1______,
    ______FN_LEFT_2______, ______FN_RIGHT_2______,
    ______FN_LEFT_3______, ______FN_RIGHT_3______,
    ______FN_4______
  ),
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

#ifdef OLED_DRIVER_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_180;
}

// void oled_task_user(void) {
//     oled_print_STATUS();
// }
#endif
