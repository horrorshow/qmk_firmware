#include "horrorshow93.h"
#ifdef OLED_DRIVER_ENABLE

static void oled_print_STATUS(void) {
    char wpm[10];

    // Host Keyboard Layer Status
    oled_write_P(PSTR("shoulders down.\n"), false);
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_P(PSTR("Default\n"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("Lower\n"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("Raise\n"), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("Adjust\n"), false);
            break;
        case _FN:
            oled_write_P(PSTR("Function\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_P(PSTR("Unknown\n"), false);
    }
    sprintf(wpm, "WPM: %03d", get_current_wpm());
    oled_write(wpm, false);
}

void oled_task_user(void) {
    oled_print_STATUS();
}
#endif
