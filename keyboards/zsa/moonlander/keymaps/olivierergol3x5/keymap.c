#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_ergol.h"
#include "keycodes.h"
// #include "drashna.h"








#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL


enum custom_keycodes {
  RGB_SLD = SAFE_RANGE,
  BP_LSPO,
  BP_RSPC,
  FR_LSPO,
  FR_RSPC,
};


enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    XXXXXXX,      XXXXXXX,        XXXXXXX,        XXXXXXX,         XXXXXXX,        XXXXXXX,        XXXXXXX,                                        XXXXXXX,        XXXXXXX,         XXXXXXX,         XXXXXXX,       XXXXXXX,        XXXXXXX,       XXXXXXX,
    XXXXXXX,      EG_Q,           EG_C,           EG_O,            EG_P,           EG_W,           XXXXXXX,                                        XXXXXXX,         EG_J,           EG_M,           EG_D,           EG_DK,          EG_Y,          XXXXXXX,
    XXXXXXX,      EG_A,           LGUI_T(EG_S),   LCTL_T(EG_E),    LALT_T(EG_N),   EG_F,           XXXXXXX,                                        XXXXXXX,         EG_L,           LALT_T(EG_R),   RCTL_T(EG_T),   RGUI_T(EG_I),   EG_U,          XXXXXXX,
    XXXXXXX,      LT(4,EG_Z),     EG_X,           EG_QUES,         EG_V,           EG_B,                                                                            EG_DOT,         EG_H,           EG_G,           EG_COMM,        LT(3,EG_K),    XXXXXXX,
    XXXXXXX,      XXXXXXX,        XXXXXXX,        XXXXXXX,         XXXXXXX,        TT(1),                                                                           TT(2),          XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,       XXXXXXX,
                                                  LSFT_T(KC_ESC),  KC_BSPC,        XXXXXXX,                                                                         XXXXXXX,        ALGR_T(KC_ENTER),KC_SPACE
  ),
  [1] = LAYOUT(
    _______,      _______,        _______,        _______,        _______,         _______,        _______,                                        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,      _______,        _______,        _______,        _______,         _______,        _______,                                        _______,        KC_KP_SLASH,    KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_PSCR,        _______,
    _______,      _______,        _______,        _______,        _______,         _______,        _______,                                        _______,        KC_KP_MINUS,    KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_0,        _______,
    _______,      _______,        _______,        _______,        _______,         _______,                                                                        KC_KP_COMMA,    KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_DOT,      _______,
    _______,      _______,        _______,        _______,        _______,         _______,                                                                        _______,        _______,        _______,        _______,        _______,        _______,
                                                  _______,        _______,         _______,                                                                        _______,        _______,        _______
  ),
  [2] = LAYOUT(
    _______,      _______,        _______,        _______,        _______,         _______,        _______,                                        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,      KC_TAB,         KC_HOME,        KC_UP,          KC_END,          KC_PGUP,        _______,                                        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,      KC_CAPS,        KC_LEFT,        KC_DOWN,        KC_RIGHT,        KC_PGDN,        _______,                                        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,      KC_LGUI,        KC_AUDIO_VOL_DOWN,KC_F13,       KC_AUDIO_VOL_UP, KC_DEL,                                                                         _______,        _______,        _______,        _______,        _______,        _______,
    _______,      _______,        _______,        _______,        _______,         _______,                                                                        _______,        _______,        _______,        _______,        _______,        _______,
                                                  _______,        _______,         _______,                                                                        _______,        _______,        _______
  ),
  [3] = LAYOUT(
    _______,      _______,        _______,        _______,        _______,         _______,        _______,                                        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,      KC_F1,          KC_F2,          KC_F3,          KC_F4,           _______,        _______,                                        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,      KC_F5,          KC_F6,          KC_F7,          KC_F8,           _______,        _______,                                        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,      KC_F9,          KC_F10,         KC_F11,         KC_F12,          _______,                                                                        _______,        _______,        _______,        _______,        _______,        _______,
    _______,      _______,        _______,        _______,        _______,         _______,                                                                        _______,        _______,        _______,        _______,        _______,        _______,
                                                  _______,        _______,         _______,                                                                        _______,        _______,        _______
  ),
  [4] = LAYOUT(
    _______,      _______,        _______,        _______,        _______,         _______,        _______,                                        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,      _______,        _______,        KC_UP,          _______,         _______,        _______,                                        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,      _______,        KC_LEFT,        KC_DOWN,        KC_RIGHT,        _______,        _______,                                        _______,        _______,        _______,        _______,        KC_LGUI,        _______,        _______,
    _______,      _______,        _______,        _______,        _______,          _______,                                                                       _______,        _______,        _______,        _______,        _______,        _______,
    _______,      _______,        _______,        _______,        _______,         _______,                                                                        _______,        _______,        _______,        _______,        _______,        _______,
                                                  KC_ESC,         _______,         _______,                                                                        _______,        KC_ENTER,        _______
  ),
};

// Only work with differend hands
const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT(
    'L', 'L',        'L',        'L',        'L',         'L',        'L',                                        'R',        'R',        'R',        'R',        'R',        'R',        'R',
    'L', 'L',        'L',        'L',        'L',         'L',        'L',                                        'R',        'R',        'R',        'R',        'R',        'R',        'R',
    'L', 'L',        'L',        'L',        'L',         'L',        'L',                                        'R',        'R',        'R',        'R',        'R',        'R',        'R',
    'L', 'L',        'L',        'L',        'L',         'L',                                                                'R',        'R',        'R',        'R',        'R',        'R',
    'L', 'L',        'L',        'L',        'L',         '*',                                                                '*',        'R',        'R',        'R',        'R',        'R',
                                 '*',        '*',         '*',                                                                '*',        '*',        '*'
    );



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {

    // avoid mod when using EG_E followed by EG_N
    case LALT_T(EG_N):
        /*
        Detect the tap.
        We're only interested in overriding the tap behavior
        in a certain cicumstance. The hold behavior can stay the same.
        */
        if (record->event.pressed && record->tap.count > 0) {
            // Detect right Shift
            if (get_mods() & MOD_BIT(KC_LCTL)) {
                // temporarily disable right Shift
                // so that we can send KC_E and KC_N
                // without Shift on.
                unregister_mods(MOD_BIT(KC_LCTL));
                tap_code(EG_E);
                tap_code(EG_N);
                // restore the mod state
                add_mods(MOD_BIT(KC_LCTL));
                // to prevent QMK from processing RCTL_T(KC_N) as usual in our special case
                return false;
            }
        }
         /*else process RCTL_T(KC_N) as usual.*/
        return true;

    }
    return true;
};



// reduce tapping term for thumbs key
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SFT_T(KC_ESC):
            return TAPPING_TERM - 50;
        case ALGR_T(KC_ENTER):
            return TAPPING_TERM - 50;
        default:
            return TAPPING_TERM;
    }
}

// remove insecable space
const key_override_t non_breaking_space_override = ko_make_basic(MOD_MASK_SHIFT, KC_SPACE, KC_SPACE);
// keep it for slack mute
const key_override_t breaking_space_override = ko_make_basic(MOD_MASK_CS, KC_SPACE, KC_SPACE);
// This globally defines all key overrides to be used
const key_override_t *key_overrides[] = {
  &non_breaking_space_override,
  &breaking_space_override
};

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {78,218,204}, {78,218,204}, {0,245,245}, {78,218,204}, {0,0,255}, {78,218,204}, {78,218,204}, {78,218,204}, {78,218,204}, {0,245,245}, {78,218,204}, {78,218,204}, {78,218,204}, {78,218,204}, {0,245,245}, {78,218,204}, {78,218,204}, {78,218,204}, {78,218,204}, {46,215,244}, {78,218,204}, {78,218,204}, {78,218,204}, {78,218,204}, {46,215,244}, {78,218,204}, {78,218,204}, {78,218,204}, {78,218,204}, {46,215,244}, {46,215,244}, {46,215,244}, {78,218,204}, {78,218,204}, {0,245,245}, {0,245,245}, {78,218,204}, {78,218,204}, {72,218,204}, {46,215,244}, {46,215,244}, {78,218,204}, {78,218,204}, {78,218,204}, {78,218,204}, {0,245,245}, {78,218,204}, {78,218,204}, {78,218,204}, {78,218,204}, {0,245,245}, {78,218,204}, {78,218,204}, {78,218,204}, {78,218,204}, {46,215,244}, {78,218,204}, {78,218,204}, {78,218,204}, {78,218,204}, {46,215,244}, {78,218,204}, {78,218,204}, {78,218,204}, {78,218,204}, {78,218,204}, {78,218,204}, {78,218,204}, {78,218,204}, {0,245,245}, {0,245,245}, {46,215,244} },

    [1] = { {30,218,204}, {0,245,245}, {0,245,245}, {0,245,245}, {0,0,255}, {30,218,204}, {0,245,245}, {0,245,245}, {0,245,245}, {46,215,244}, {30,218,204}, {0,245,245}, {0,245,245}, {0,245,245}, {46,215,244}, {30,218,204}, {0,245,245}, {0,245,245}, {30,218,204}, {46,215,244}, {30,218,204}, {30,218,204}, {30,218,204}, {30,218,204}, {46,215,244}, {30,218,204}, {30,218,204}, {30,218,204}, {30,218,204}, {46,215,244}, {46,215,244}, {46,215,244}, {30,218,204}, {30,218,204}, {30,218,204}, {30,218,204}, {30,218,204}, {30,218,204}, {30,218,204}, {30,218,204}, {30,218,204}, {30,218,204}, {46,215,244}, {46,215,244}, {46,215,244}, {30,218,204}, {30,218,204}, {46,215,244}, {46,215,244}, {46,215,244}, {46,215,244}, {30,218,204}, {46,215,244}, {46,215,244}, {46,215,244}, {46,215,244}, {30,218,204}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {30,218,204}, {0,245,245}, {0,245,245}, {0,0,255}, {30,218,204}, {0,245,245}, {0,245,245}, {30,218,204}, {30,218,204}, {30,218,204}, {30,218,204} },

    [2] = { {168,218,204}, {168,218,204}, {168,218,204}, {168,218,204}, {0,0,255}, {168,218,204}, {30,218,204}, {30,218,204}, {0,245,245}, {168,218,204}, {168,218,204}, {30,218,204}, {30,218,204}, {0,245,245}, {168,218,204}, {168,218,204}, {30,218,204}, {30,218,204}, {0,245,245}, {168,218,204}, {168,218,204}, {30,218,204}, {30,218,204}, {0,245,245}, {168,218,204}, {168,218,204}, {30,218,204}, {30,218,204}, {0,245,245}, {0,245,245}, {30,218,204}, {30,218,204}, {168,218,204}, {168,218,204}, {168,218,204}, {168,218,204}, {168,218,204}, {0,245,245}, {72,218,204}, {0,245,245}, {72,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {168,218,204}, {168,218,204}, {46,215,244}, {46,215,244}, {46,215,244}, {168,218,204}, {168,218,204}, {46,215,244}, {46,215,244}, {46,215,244}, {168,218,204}, {168,218,204}, {46,215,244}, {46,215,244}, {0,0,255}, {168,218,204}, {0,245,245}, {0,245,245}, {168,218,204}, {168,218,204}, {168,218,204}, {168,218,204} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void set_left_hand_color(int r, int g, int b) {
    // top left
    rgb_matrix_set_color(6, r, g, b);
    rgb_matrix_set_color(7, r, g, b);
    rgb_matrix_set_color(8, r, g, b);

    rgb_matrix_set_color(11, r, g, b);
    rgb_matrix_set_color(12, r, g, b);
    rgb_matrix_set_color(13, r, g, b);

    rgb_matrix_set_color(16, r, g, b);
    rgb_matrix_set_color(17, r, g, b);
    rgb_matrix_set_color(18, r, g, b);

    rgb_matrix_set_color(21, r, g, b);
    rgb_matrix_set_color(22, r, g, b);
    rgb_matrix_set_color(23, r, g, b);

    rgb_matrix_set_color(26, r, g, b);
    rgb_matrix_set_color(27, r, g, b);
    rgb_matrix_set_color(28, r, g, b);

}

void set_right_hand_color(int r, int g, int b) {
    // top right
    rgb_matrix_set_color(42, r, g, b);
    rgb_matrix_set_color(43, r, g, b);
    rgb_matrix_set_color(44, r, g, b);

    rgb_matrix_set_color(47, r, g, b);
    rgb_matrix_set_color(48, r, g, b);
    rgb_matrix_set_color(49, r, g, b);

    rgb_matrix_set_color(52, r, g, b);
    rgb_matrix_set_color(53, r, g, b);
    rgb_matrix_set_color(54, r, g, b);

    rgb_matrix_set_color(57, r, g, b);
    rgb_matrix_set_color(58, r, g, b);
    rgb_matrix_set_color(59, r, g, b);

    rgb_matrix_set_color(62, r, g, b);
    rgb_matrix_set_color(63, r, g, b);
    rgb_matrix_set_color(64, r, g, b);

}

void set_functions_keys(int r, int g, int b) {
    // top left
    rgb_matrix_set_color(6, r, g, b);
    rgb_matrix_set_color(7, r, g, b);
    rgb_matrix_set_color(8, r, g, b);

    rgb_matrix_set_color(11, r, g, b);
    rgb_matrix_set_color(12, r, g, b);
    rgb_matrix_set_color(13, r, g, b);

    rgb_matrix_set_color(16, r, g, b);
    rgb_matrix_set_color(17, r, g, b);
    rgb_matrix_set_color(18, r, g, b);

    rgb_matrix_set_color(21, r, g, b);
    rgb_matrix_set_color(22, r, g, b);
    rgb_matrix_set_color(23, r, g, b);

}

void set_thumb_keys(int r, int g, int b) {
    // left thumb
    rgb_matrix_set_color(32, r, g, b);
    rgb_matrix_set_color(33, r, g, b);
    rgb_matrix_set_color(35, r, g, b);

    // right thumb
    rgb_matrix_set_color(68, r, g, b);
    rgb_matrix_set_color(69, r, g, b);
    rgb_matrix_set_color(71, r, g, b);
}

void set_all_keys(int r, int g, int b) {
    set_left_hand_color(r, g, b);
    set_right_hand_color(r, g, b);
    set_thumb_keys(r, g, b);
}

void set_top_keys(int r, int g, int b) {

    rgb_matrix_set_color(6, r, g, b);
    rgb_matrix_set_color(11, r, g, b);
    rgb_matrix_set_color(16, r, g, b);
    rgb_matrix_set_color(21, r, g, b);
    rgb_matrix_set_color(26, r, g, b);
    rgb_matrix_set_color(42, r, g, b);
    rgb_matrix_set_color(47, r, g, b);
    rgb_matrix_set_color(52, r, g, b);
    rgb_matrix_set_color(57, r, g, b);
    rgb_matrix_set_color(62, r, g, b);
}

bool rgb_matrix_indicators_kb(void) {
    switch (get_highest_layer(layer_state)) {
        case 0:
            rgb_matrix_set_color_all(0,0,0);
            set_all_keys(255, 255, 255);
            break;
        case 1:
            rgb_matrix_set_color_all(0,0,0);
            set_all_keys(255, 255, 255);
            set_right_hand_color(75, 255, 255);
            break;
        case 2:
            rgb_matrix_set_color_all(0,0,0);
            set_all_keys(255, 255, 255);
            set_left_hand_color(75, 255, 75);
            break;
        case 3:
            rgb_matrix_set_color_all(0,0,0);
            set_all_keys(255, 255, 255);
            set_functions_keys(255, 0, 255);
            break;
        case 4:
            rgb_matrix_set_color_all(0,0,0);
            set_all_keys(255, 255, 75);
            break;
        default:
            break;
    }
    if (host_keyboard_led_state().caps_lock) {
        set_top_keys(255, 0, 0);
    }
    return true;
}
