#include "keymap.h"

// clang-format off
const uint16_t PROGMEM keymaps[N_layers][MATRIX_ROWS][MATRIX_COLS] = {
    [DV] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,             KC_PSCR, KC_SLCK, TG(QW), \
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_LBRC, KC_RBRC, KC_BSPC,   KC_INS,  KC_HOME, KC_PGUP, \
        KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH, KC_EQL,  KC_BSLS,   KC_DEL,  KC_END,  KC_PGDN, \
        KC_CAPS, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINS, KC_ENT, \
        KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_RSFT,                              KC_UP, \
        KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                             KC_RALT, MO(FN),  KC_APP,  KC_RCTL,            KC_LEFT, KC_DOWN, KC_RGHT \
    ),

    [QW] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,             KC_PSCR, KC_SLCK, _______, \
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,   KC_INS,  KC_HOME, KC_PGUP, \
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,   KC_DEL,  KC_END,  KC_PGDN, \
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, \
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,                              KC_UP, \
        KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                             KC_RALT, MO(FN),  KC_APP,  KC_RCTL,            KC_LEFT, KC_DOWN, KC_RGHT \
    ),

    [FN] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, KC_VOLU, \
        _______, _______, _______, _______, _______, _______, _______, U_T_AUTO,U_T_AGCR,_______, _______, _______, _______, _______,   _______, _______, KC_VOLD, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, RGB_TOG, _______, _______, _______, MD_BOOT, NK_TOGG, _______, _______, _______, _______, _______,                              KC_MUTE, \
        _______, _______, _______,                   _______,                            _______, _______, _______, _______,            KC_MPRV, KC_MPLY, KC_MNXT \
    ),
};

#ifdef _______
#define REV___
#undef _______
#endif
#define _______ {RGB_OFF}

const uint8_t PROGMEM ledmap[N_layers][DRIVER_LED_TOTAL][3] = {
    [DV] = {
        CYAN,    PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,           PURPLE,  PURPLE,  GREEN,
        PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,
        PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,
        PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  CYAN,
        PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,                             CYAN,
        PURPLE,  PURPLE,  PURPLE,                    PURPLE,                             PURPLE,  PURPLE,  PURPLE,  PURPLE,           CYAN,    CYAN,    CYAN,

        // bottom right, 12
        PURPLE, PURPLE, PURPLE, MAGENTA,  MAGENTA, MAGENTA, MAGENTA, MAGENTA,  MAGENTA, MAGENTA, PURPLE, PURPLE,
        // bottom left, 5
        PURPLE, PURPLE, PURPLE, PURPLE, PURPLE,
        // top left, 11
        PURPLE, PURPLE, PURPLE, PINK, PINK, PINK, PINK, PINK, PINK, PURPLE, PURPLE,
        // top right, 4
        PURPLE, PURPLE, PURPLE, PURPLE,
    },

    [QW] = {
        CYAN,    GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,            GREEN,   GREEN,   PURPLE,
        GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,
        GREEN,   GREEN,   RED,     GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,
        GREEN,   RED,     RED,     RED,     GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   CYAN,
        GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,   GREEN,                              CYAN,
        GREEN,   GREEN,   GREEN,                     GREEN,                              GREEN,   GREEN,   GREEN,   GREEN,            CYAN,    CYAN,    CYAN,

        // bottom right, 12
        GREEN, GREEN, GREEN, SPRING,  SPRING, SPRING, SPRING, SPRING,  SPRING, SPRING, GREEN, GREEN,
        // bottom left, 5
        GREEN, GREEN, GREEN, GREEN, GREEN,
        // top left, 11
        GREEN, GREEN, GREEN, SPRING, SPRING, SPRING, SPRING, SPRING, SPRING, GREEN, GREEN,
        // top right, 4
        GREEN, GREEN, GREEN, GREEN,
    },

    [FN] = {
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, ORANGE,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, ORANGE,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, ORANGE,  _______, _______, _______, ORANGE,  _______, _______, _______, _______, _______, _______,                            ORANGE,
        _______, _______, _______,                   _______,                            _______, BLUE,    _______, _______,          ORANGE,  ORANGE,  ORANGE,

        // 32x red
        RED, RED, RED, RED, RED, RED, RED, RED,
        RED, RED, RED, RED, RED, RED, RED, RED,
        RED, RED, RED, RED, RED, RED, RED, RED,
        RED, RED, RED, RED, RED, RED, RED, RED,
    },
};

#undef _______
#ifdef REV___
#define _______ KC_TRNS
#undef REV___
#endif
// clang-format on



// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {}

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {}

// Runs after the keyboard is done initialising.
void keyboard_post_init_user(void) {
    rgb_matrix_enable();
    rgb_matrix_enable_noeeprom();
}


static void toggle_led_mode(void)
{
    if (rgb_matrix_get_flags() & LED_FLAG_ALL) {
        rgb_matrix_set_flags(LED_FLAG_NONE);
        rgb_matrix_disable_noeeprom();
    } else {
        rgb_matrix_set_flags(LED_FLAG_ALL);
        rgb_matrix_enable_noeeprom();
    }
}


static void set_layer_color(int layer) {
    for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
        RGB rgb = {
            .r = pgm_read_byte(&ledmap[layer][i][0]),
            .g = pgm_read_byte(&ledmap[layer][i][1]),
            .b = pgm_read_byte(&ledmap[layer][i][2]),
        };

        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
}

void rgb_matrix_indicators_user(void) {
    // ignore if we have NONE mode on
    if (rgb_matrix_get_flags() & LED_FLAG_NONE) return;

    // determine per layer
    set_layer_color(get_highest_layer(layer_state));
}



// Called whenever a key is recorded
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static uint32_t key_timer;

    switch (keycode) {
        case U_T_AUTO:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_extra_manual, "USB extra port manual mode");
            }
            return false;

        case U_T_AGCR:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_gcr_auto, "USB GCR auto mode");
            }
            return false;

        case DBG_TOG:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_enable, "Debug mode");
            }
            return false;

        case DBG_MTRX:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_matrix, "Debug matrix");
            }
            return false;

        case DBG_KBD:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_keyboard, "Debug keyboard");
            }
            return false;

        case DBG_MOU:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_mouse, "Debug mouse");
            }
            return false;

        case MD_BOOT:
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else if (timer_elapsed32(key_timer) >= 500) {
                reset_keyboard();
            }

            return false;

        case RGB_TOG:
            if (record->event.pressed) toggle_led_mode();
            return false;

        default:
            return true;  // Process all other keycodes normally
    }
}
