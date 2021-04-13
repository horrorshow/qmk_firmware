enum layer_names {
    _BASE,
    _LOWER,
    _RAISE,
    _ADJUST,
    _FN
};

#define LOWER  MO(_LOWER)
#define RAISE  MO(_RAISE)
#define ADJUST MO(_ADJUST)
#define FN_SPACE LT(_FN, KC_SPC)
#define TAB_ALT LALT_T(KC_TAB)
#define CAPS_CTRL LCTL_T(KC_CAPS)
