#pragma once
#include QMK_KEYBOARD_H

// Layers
enum layer_names {
    _BASE,
    _LOWER,
    _RAISE,
    _ADJUST,
    _FN,
};

// Shortcuts
#define LOWER  MO(_LOWER)
#define RAISE  MO(_RAISE)
#define ADJUST MO(_ADJUST)
#define FNSPACE LT(_FN, KC_SPC)
#define TABALT LALT_T(KC_TAB)
#define CAPSCTL LCTL_T(KC_CAPS)
#define QUOTCTL RCTL_T(KC_QUOT)

/**
 * 3 x 12 Layouts (Reviung, CRKBD)
 */
#define ______TRANSPARENT______    _______, _______, _______, _______, _______, _______
#define ______NOTHING______        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

// BASE
#define ______BASE_LEFT_1______    TABALT,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define ______BASE_LEFT_2______    CAPSCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define ______BASE_LEFT_3______    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define ______BASE_RIGHT_1______   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC
#define ______BASE_RIGHT_2______   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, QUOTCTL
#define ______BASE_RIGHT_3______   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT

#define ______BASE_4______         KC_LCTL, LOWER,   FNSPACE, RAISE,   KC_RALT


// LOWER
#define ______LOWER_LEFT_1______   KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define ______LOWER_LEFT_2______   KC_LGUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define ______LOWER_LEFT_3______   ______TRANSPARENT______

#define ______LOWER_RIGHT_1______   KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_DEL
#define ______LOWER_RIGHT_2______   KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV
#define ______LOWER_RIGHT_3______   ______TRANSPARENT______

#define ______LOWER_4______        _______, _______, _______, _______, _______


// RAISE
#define ______RAISE_LEFT_1______   KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define ______RAISE_LEFT_2______   KC_LGUI, KC_TRNS, KC_TRNS, KC_INS,  KC_HOME, KC_PGUP
#define ______RAISE_LEFT_3______   KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL,  KC_END,  KC_PGDN

#define ______RAISE_RIGHT_1______  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL
#define ______RAISE_RIGHT_2______  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS, KC_RGUI
#define ______RAISE_RIGHT_3______  ______TRANSPARENT______

#define ______RAISE_4______        _______, _______, _______, _______, _______


// ADJUST
#define ______ADJUST_LEFT_1______  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6
#define ______ADJUST_LEFT_2______  KC_LGUI, KC_NO,   KC_NO,   KC_NO,   RGB_TOG, RGB_VAD
#define ______ADJUST_LEFT_3______  KC_LCTL, KC_NO,   KC_NO,   KC_NO,   KC_NO,   RGB_M_P

#define ______ADJUST_RIGHT_1______ KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12
#define ______ADJUST_RIGHT_2______ RGB_VAI, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_RGUI
#define ______ADJUST_RIGHT_3______ RGB_M_B, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_RCTL

#define ______ADJUST_4______       _______, _______, _______, KC_ENT,  _______


// FN
#define ______FN_LEFT_1______      KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6
#define ______FN_LEFT_2______      KC_LGUI, KC_NO,   KC_NO,   KC_NO,   RGB_TOG, RGB_VAD
#define ______FN_LEFT_3______      KC_LCTL, KC_NO,   KC_NO,   KC_NO,   KC_NO,   RGB_M_P

#define ______FN_RIGHT_1______     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12
#define ______FN_RIGHT_2______     RGB_SAD, RGB_HUD, KC_NO,   KC_NO,   KC_NO,   KC_RCTL
#define ______FN_RIGHT_3______     RGB_M_B, RGB_M_K, RGB_M_R, KC_NO,   KC_NO,   KC_RCTL

#define ______FN_4______           _______, _______, _______, KC_ENT, _______
