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
  [0] = LAYOUT_moonlander(
    XXXXXXX,      XXXXXXX,        XXXXXXX,        XXXXXXX,         XXXXXXX,        XXXXXXX,        XXXXXXX,                                        XXXXXXX,        XXXXXXX,         XXXXXXX,         XXXXXXX,       XXXXXXX,        XXXXXXX,       XXXXXXX,
    XXXXXXX,      EG_Q,           EG_C,           EG_O,            EG_P,           EG_W,           XXXXXXX,                                        XXXXXXX,         EG_J,           EG_M,           EG_D,           EG_DK,          EG_Y,          XXXXXXX,
    XXXXXXX,      EG_A,           LGUI_T(EG_S),   LCTL_T(EG_E),    LALT_T(EG_N),   EG_F,           XXXXXXX,                                        XXXXXXX,         EG_L,           LALT_T(EG_R),   LCTL_T(EG_T),   LGUI_T(EG_I),   EG_U,          XXXXXXX,
    XXXXXXX,      EG_Z,           EG_X,           EG_QUES,         EG_V,           EG_B,                                                                            EG_DOT,         EG_H,           EG_G,           EG_COMM,        EG_K,          XXXXXXX,
    XXXXXXX,      XXXXXXX,        XXXXXXX,        XXXXXXX,         XXXXXXX,        TT(2),                                                                           TT(2),          XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,       XXXXXXX,
                                                  LSHIFT_T(KC_ESC),LT(1,KC_BSPC),  XXXXXXX,                                                                         XXXXXXX,         LT(1,KC_SPACE), ALGR_T(KC_ENTER)
  ),
  [1] = LAYOUT_moonlander(
    ____,         ____,           ____,           ____,           ____,            ____,           ____,                                           ____,           ____,           ____,           ____,           ____,           ____,           ____,
    ____,         KC_TAB,         KC_HOME,        KC_UP,          KC_END,          KC_PGUP,        ____,                                           ____,           KC_KP_SLASH,    KC_KP_7,        KC_KP_8,        KC_KP_9,        ____,           ____,
    ____,         KC_CAPS,        LGUI_T(KC_LEFT),LCTL_T(KC_DOWN),LALT_T(KC_RIGHT),KC_PGDN,        ____,                                           ____,           KC_KP_MINUS,    LALT_T(KC_KP_4),LCTL_T(KC_KP_5),LGUI_T(KC_KP_6),KC_KP_0,        ____,
    ____,         ____,           KC_AUDIO_VOL_DOWN,KC_F13,       KC_AUDIO_VOL_UP, KC_DEL,                                                                         KC_KP_COMMA,    KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_DOT,      ____,
    ____,         ____,           ____,           ____,           ____,            ____,                                                                           ____,           ____,           _____,          ____,           ____,           ____,
                                                  ____,           ____,            ____,                                                                           ____,           ____,           _____
  ),
  [2] = LAYOUT_moonlander(
    ____,         ____,           ____,           ____,           ____,            ____,           ____,                                           ____,           ____,           ____,           ____,           ____,           ____,           ____,
    ____,         KC_F1,          KC_F2,          KC_F3,          KC_F4,           ____,           ____,                                           ____,           ____,           ____,           ____,           ____,           ____,           ____,
    ____,         KC_F5,          KC_F6,          KC_F7,          KC_F8,           ____,           ____,                                           ____,           ____,           ____,           ____,           ____,           ____,           ____,
    ____,         KC_F9,          KC_F10,         KC_F11,         KC_F12,          ____,                                                                           ____,           ____,           ____,           ____,           ____,           ____,
    ____,         ____,           ____,           ____,           ____,            ____,                                                                           ____,           ____,           ____,           ____,           ____,           ____,
                                                  ____,           ____,            ____,                                                                           ____,           ____,           _____
  ),
};


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

bool rgb_matrix_indicators_kb(void) {
    switch (get_highest_layer(layer_state)) {
        case 0:
            break;
        case 1:
            rgb_matrix_set_color_all(0,0,0);
            rgb_matrix_set_color(6, 204, 255, 204);
            break;
        case 2:
            rgb_matrix_set_color_all(0,0,0);
            rgb_matrix_set_color(6, 75, 255, 75);
            rgb_matrix_set_color(7, 75, 255, 75);
            break;
        default:
            break;
    }
    return true;
}
