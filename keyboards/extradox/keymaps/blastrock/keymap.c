#include QMK_KEYBOARD_H
#include "version.h"

enum layers {
    MY,
    QWER,
    SYMB,
    MDIA,
};

enum custom_keycodes {
    PLACEHOLDER = SAFE_RANGE, // can always be here
    EPRM,
    VRSN,
    RGB_SLD
};

#define MY_Q KC_Q
#define MY_W KC_G
#define MY_E KC_M
#define MY_R KC_L
#define MY_T KC_W
#define MY_Y KC_Y
#define MY_U KC_U
#define MY_I KC_F
#define MY_O KC_B
#define MY_P KC_SEMICOLON

#define MY_A KC_D
#define MY_S KC_S
#define MY_D KC_T
#define MY_F KC_N
#define MY_G KC_R
#define MY_H KC_I
#define MY_J KC_A
#define MY_K KC_E
#define MY_L KC_O
#define MY_SCLN KC_H

#define MY_Z KC_DOT
#define MY_X KC_Z
#define MY_C KC_C
#define MY_V KC_P
#define MY_B KC_V
#define MY_N KC_J
#define MY_M KC_X
#define MY_COMM KC_K
#define MY_DOT KC_COMMA
#define MY_SLSH KC_SLASH

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[MY] = LAYOUT_extradox_pretty(
  KC_ESC,    KC_F1,        KC_F2,         KC_F3,   KC_F4,   KC_F5,   KC_F11,              KC_F12,     KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,         KC_NO,
  KC_GRV,    KC_1,         KC_2,          KC_3,    KC_4,    KC_5,    KC_NO,               KC_NO,      KC_6,    KC_7,    KC_8,    KC_9,     KC_0,           KC_BSPC,
  KC_TAB,    KC_Q,         KC_W,          KC_E,    KC_R,    KC_T,    KC_NO,               KC_NO,      KC_Y,    KC_U,    KC_I,    KC_O,     KC_P,           KC_NO,
  KC_CAPS,   KC_A,         KC_S,          KC_D,    KC_F,    KC_G,                                     KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN,        KC_QUOT,
  KC_LSFT,   KC_Z,         KC_X,          KC_C,    KC_V,    KC_B,    KC_ENT,              KC_ENT,     KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,        KC_BSLS,
  KC_HOME,   KC_END,       KC_LCTL,       KC_LALT, KC_LGUI,                                                    KC_MINS, KC_EQL,  KC_LBRC,  KC_RBRC,        KC_NO,
                                                            KC_LEFT, KC_RGHT,             KC_NO, KC_DEL,
                                                                     KC_UP,               KC_PGUP,
                                                    KC_SPC, KC_ENT,  KC_DOWN,             KC_PGDN, KC_ENT, KC_SPC
),

/* Keymap 0: Basic layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |  ESC   |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |      |  F6  |  F7  |  F8  |  F9  | F10  |  F11   |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |   `    |   1  |   2  |   3  |   4  |   5  | LEFT |           | RIGHT|   6  |   7  |   8  |   9  |   0  |   -    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Del    |   Q  |   W  |   E  |   R  |   T  |  L1  |           |  L1  |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | BkSp   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |; / L2|' / Cmd |
 * |--------+------+------+------+------+------| Hyper|           | Meh  |------+------+------+------+------+--------|
 * | LShift |Z/Ctrl|   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |//Ctrl| RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |Grv/L1|  '"  |AltShf| Left | Right|                                       |  Up  | Down |   [  |   ]  | ~L1  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | App  | LGui |       | Alt  |Ctrl/Esc|
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | Home |       | PgUp |        |      |
 *                                 | Space|Backsp|------|       |------|  Tab   |Enter |
 *                                 |      |ace   | End  |       | PgDn |        |      |
 *                                 `--------------------'       `----------------------'
 */
[QWER] = LAYOUT_extradox_pretty(
  // left hand
  KC_F12,     KC_F1,        KC_F2,         KC_F3,   KC_F4,   KC_F5,   KC_EQL,              KC_TRNS,     KC_F6,   KC_F7,   KC_F8,   KC_F9,       KC_F10,          KC_F11,
  KC_GRV,     KC_1,         KC_2,          KC_3,    KC_4,    KC_5,    KC_DEL,              KC_INS,      KC_6,    KC_7,    KC_8,    KC_9,        KC_0,            KC_MINS,
  KC_TAB,     KC_Q,         KC_W,          KC_E,    KC_R,    KC_T,    OSL(SYMB),         OSL(MDIA),     KC_Y,    KC_U,    KC_I,    KC_O,        KC_P,            KC_BSLS,
  KC_ESC,     KC_A,         KC_S,          KC_D,    KC_F,    KC_G,                                      KC_H,    KC_J,    KC_K,    KC_L,        KC_SCLN,         KC_QUOT,
  KC_LSFT,    KC_Z,         KC_X,          KC_C,    KC_V,    KC_B,    KC_LBRC,             KC_RBRC,     KC_N,    KC_M,    KC_COMM, KC_DOT,      KC_SLSH,         KC_RSFT,
  KC_LCTL,   KC_LALT,      KC_LGUI,       KC_LEFT, KC_RGHT,                                                     KC_UP,   KC_DOWN, KC_RGUI,     KC_RALT,         KC_RCTL,
                                                                 KC_HOME, KC_END,              KC_PGUP, KC_PGDN,
                                                                         KC_TRNS,              KC_TRNS,
                                                         KC_SPC, KC_BSPC, KC_APP,              KC_CAPS, KC_TAB, KC_ENT
),
/* Keymap 1: Symbol Layer
 *
 * ,---------------------------------------------------.           ,--------------------------------------------------.
 * |Version  |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |      |  F6  |  F7  |  F8  |  F9  |  F10 |   F11  |
 * |---------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
 * |         |   !  |   @  |   {  |   }  |   |  |      |           |      |   Up |   7  |   8  |   9  |   *  |   F12  |
 * |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |         |   #  |   $  |   (  |   )  |   `  |------|           |------| Down |   4  |   5  |   6  |   +  |        |
 * |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |         |   %  |   ^  |   [  |   ]  |   ~  |      |           |      |   &  |   1  |   2  |   3  |   \  |        |
 * `---------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | EPRM  |      |      |      |      |                                       |      |    . |   0  |   =  |      |
 *   `-----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |Animat|      |       |Toggle|Solid |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |Bright|Bright|      |       |      |Hue-  |Hue+  |
 *                                 |ness- |ness+ |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[SYMB] = LAYOUT_extradox_pretty(
  // left hand
  VRSN,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  EE_CLR,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                               RGB_MOD, KC_TRNS,     RGB_TOG, RGB_M_P,
                                                        KC_TRNS,     KC_TRNS,
                                      RGB_VAD, RGB_VAI, KC_TRNS,     KC_TRNS, RGB_HUD, RGB_HUI
),
/* Keymap 2: Media and mouse keys
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      | MsUp |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |MsLeft|MsDown|MsRght|      |------|           |------|      |      |      |      |      |  Play  |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      | Prev | Next |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      | Lclk | Rclk |                                       |VolUp |VolDn | Mute |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |Brwser|
 *                                 |      |      |------|       |------|      |Back  |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[MDIA] = LAYOUT_extradox_pretty(
  // left hand
  DF(MY),  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  DF(QWER),KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_NUM,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_BTN1, KC_MS_U, KC_BTN2, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_P7,   KC_P8,   KC_P9,   KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS,                       KC_TRNS, KC_P4,   KC_P5,   KC_P6,   KC_TRNS, KC_TRNS,
  KC_TRNS, KC_MPRV, KC_TRNS, KC_MPLY, KC_TRNS, KC_MNXT, KC_TRNS,     KC_TRNS, KC_TRNS, KC_P1,   KC_P2,   KC_P3,   KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD, KC_VOLU,                                         KC_P0,   KC_P0,   KC_PDOT, KC_TRNS, KC_TRNS,

                                               KC_TRNS, QK_BOOT,     KC_TRNS, KC_TRNS,
                                                        KC_TRNS,     KC_TRNS,
                                      KC_TRNS, KC_WBAK, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS
),
};
// clang-format on

void send_mod_string(bool shift, unsigned key1, unsigned key2) {
    const uint8_t mods = get_mods();
    if (mods & MOD_BIT(KC_LSFT)) unregister_code(KC_LSFT);
    if (mods & MOD_BIT(KC_RSFT)) unregister_code(KC_RSFT);
    SEND_STRING(SS_TAP(X_APPLICATION));
    if (shift) register_code(KC_LSFT);
    register_code(key1);
    unregister_code(key1);
    if (shift) unregister_code(KC_LSFT);
    if (mods & MOD_BIT(KC_LSFT)) register_code(KC_LSFT);
    if (mods & MOD_BIT(KC_RSFT)) register_code(KC_RSFT);
    register_code(key2);
    unregister_code(key2);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (IS_LAYER_ON(SYMB) && record->event.pressed) {
        bool processed = false;
        switch (keycode) {
            case KC_E:
                send_mod_string(false, KC_QUOTE, KC_E);
                processed = true;
                break;
            case KC_F:
                send_mod_string(true, KC_CIRCUMFLEX, KC_E);
                processed = true;
                break;
            case KC_B:
                send_mod_string(false, KC_GRAVE, KC_E);
                processed = true;
                break;
            case KC_U:
                send_mod_string(false, KC_GRAVE, KC_U);
                processed = true;
                break;
            case KC_Y:
                send_mod_string(true, KC_CIRCUMFLEX, KC_U);
                processed = true;
                break;
            case KC_A:
                send_mod_string(false, KC_GRAVE, KC_A);
                processed = true;
                break;
            case KC_O:
                send_mod_string(true, KC_CIRCUMFLEX, KC_O);
                processed = true;
                break;
            case KC_C:
                send_mod_string(false, KC_COMMA, KC_C);
                processed = true;
                break;
            case KC_COMMA:
                send_mod_string(false, KC_O, KC_E);
                processed = true;
                break;
            case KC_X:
                send_mod_string(true, KC_CIRCUMFLEX, KC_A);
                processed = true;
                break;
            case KC_I:
                send_mod_string(true, KC_CIRCUMFLEX, KC_I);
                processed = true;
                break;
            case KC_EQL:
                send_mod_string(false, KC_EQL, KC_E);
                processed = true;
                break;
        }
        if (processed) {
            if (is_oneshot_layer_active()) {
                clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
            }
            return false;
        }
    }
    switch (keycode) {
        // dynamically generate these.
        case EPRM:
            if (record->event.pressed) {
                eeconfig_init();
            }
            return false;
            break;
        case VRSN:
            if (record->event.pressed) {
                SEND_STRING(QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
            }
            return false;
            break;
#ifdef RGBLIGHT_ENABLED
        case RGB_SLD:
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;
            break;
#endif
    }
    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    uint8_t layer = biton32(state);

    extradox_right_led_1(false);
    extradox_right_led_2(false);
    extradox_right_led_3(false);
    switch (layer - 1) {
        case 0:
            break;
        case 1:
            extradox_right_led_3(true);
            break;
        case 2:
            extradox_right_led_2(true);
            break;
        case 3:
            extradox_right_led_1(true);
            break;
        case 4:
            extradox_right_led_1(true);
            extradox_right_led_2(true);
            break;
        case 5:
            extradox_right_led_1(true);
            extradox_right_led_3(true);
            break;
        case 6:
            extradox_right_led_2(true);
            extradox_right_led_3(true);
            break;
        case 7:
            extradox_right_led_1(true);
            extradox_right_led_2(true);
            extradox_right_led_3(true);
            break;
        default:
            break;
    }
    return state;
};

bool led_update_user(led_t led_state) {
    if (led_state.caps_lock) {
        extradox_right_led_1(true);
    } else {
        extradox_right_led_1(false);
    }
    return false;
}
