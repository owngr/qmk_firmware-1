#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_french.h"
#include "keymap_bepo.h"
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
  RGB_SLD = ML_SAFE_RANGE,
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
    BP_DLR,         BP_DQUO,        BP_LDAQ,        BP_RDAQ,        BP_LPRN,        BP_RPRN,        KC_PSCREEN,                                     BP_PERC,        BP_AT,          BP_PLUS,        BP_MINS,        BP_SLSH,        BP_ASTR,        BP_EQL,         
    KC_TAB,         BP_B,           BP_EACU,        BP_P,           BP_O,           BP_EGRV,        KC_INSERT,                                      KC_PGUP,        BP_DCIR,        BP_V,           BP_D,           BP_L,           BP_J,           BP_Z,           
    KC_ESCAPE,      BP_A,           BP_U,           BP_I,           BP_E,           BP_COMM,        KC_DELETE,                                      KC_PGDOWN,      BP_C,           BP_T,           BP_S,           BP_R,           BP_N,           BP_M,           
    KC_LSHIFT,      BP_AGRV,        BP_Y,           BP_X,           BP_DOT,         BP_K,                                                                           BP_QUOT,        BP_Q,           BP_G,           BP_H,           BP_F,           BP_W,           
    KC_LCTRL,       TT(1),          TT(2),          KC_HOME,        KC_END,         MT(MOD_LGUI, KC_ESCAPE),                                        KC_ENTER,       KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       MT(MOD_RCTL, BP_CCED),
                                                    KC_LSHIFT,      BP_UNDS,        KC_LALT,                                                        MT(MOD_RALT, KC_APPLICATION),KC_BSPACE,      KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_AUDIO_MUTE,                                  KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         
    KC_MS_WH_LEFT,  KC_MS_UP,       KC_MS_WH_RIGHT, KC_MS_WH_UP,    KC_PC_COPY,     KC_PC_PASTE,    KC_AUDIO_VOL_DOWN,                                KC_HOME,        KC_UP,          KC_END,         KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_SLASH,    
    KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_DOWN,  KC_WWW_FAVORITES,KC_CALCULATOR,  KC_AUDIO_VOL_UP,                                                                KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_ASTERISK, 
    _______,        _______,        _______,    KC_SCROLLLOCK,  KC_MAIL,        KC_WWW_SEARCH,                                  TG(2),          KC_PGUP,        KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_MINUS,    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,MT(MOD_LGUI, KC_ESCAPE),                                                                                                OSM(MOD_RCTL),  KC_PGDOWN,      KC_KP_0,        KC_KP_DOT,      KC_KP_EQUAL,    KC_KP_PLUS,     
    OSM(MOD_LCTL),  OSM(MOD_RALT),  OSM(MOD_LSFT),                  MT(MOD_RGUI, KC_APPLICATION),OSM(MOD_RALT),  OSM(MOD_RSFT)
  ),
  [2] = LAYOUT_moonlander(
    MU_MOD,         KC_INT1,        KC_INT2,        KC_INT3,        KC_INT4,        KC_INT5,        OSM(MOD_LGUI),                                  KC_INT6,        KC_INT7,        KC_INT8,        KC_INT9,        KC_NO,          KC_NO,          DYN_REC_STOP,   
    MU_TOG,         KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          OSM(MOD_RGUI),  KC_END,         KC_UP,          KC_PGUP,        KC_NO,          KC_NO,          DYN_REC_START1, 
    MU_ON,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,                                                                         KC_APPLICATION, KC_LEFT,        KC_HOME,        KC_RIGHT,       KC_NO,          KC_NO,          DYN_MACRO_PLAY1,
    MU_OFF,         OSM(MOD_LALT),  OSM(MOD_LSFT),  OSM(MOD_LCTL),  OSM(MOD_RALT),  OSM(MOD_RSFT),                                  KC_TRANSPARENT, KC_DOWN,        KC_PGDOWN,      KC_NO,          KC_NO,          DYN_REC_START2, 
    TO(0),          AU_OFF,         KC_TRANSPARENT, MOON_LED_LEVEL, RGB_SPI,        RGB_VAI,                                                                                                        RGB_VAD,        RGB_SPD,        RGB_SLD,        RGB_MOD,        KC_NO,          DYN_MACRO_PLAY2,
    RGB_SAI,        RGB_HUI,        RGB_TOG,                        TOGGLE_LAYER_COLOR,RGB_HUD,        RGB_SAD
  ),
};

const key_override_t three_dot_override = ko_make_basic(MOD_MASK_SA, BP_DOT, BP_ELLP);
const key_override_t middle_dot_override = ko_make_with_layers_and_negmods(MOD_MASK_ALT, BP_DOT, BP_MDDT, ~0, MOD_MASK_SHIFT);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
	&middle_dot_override,
  &three_dot_override,
	NULL // Null terminate the array of overrides!
};


#ifdef RGB_MATRIX_ENABLE
bool rgb_matrix_indicators_advanced_keymap(uint8_t led_min, uint8_t led_max) {
    if (layer_state_is(1)) {
        RGB_MATRIX_INDICATOR_SET_COLOR(11, 0x00, 0xFF, 0x00);  // Q
        RGB_MATRIX_INDICATOR_SET_COLOR(16, 0x00, 0xFF, 0xFF);  // W
        RGB_MATRIX_INDICATOR_SET_COLOR(21, 0xFF, 0x00, 0x00);  // E
        RGB_MATRIX_INDICATOR_SET_COLOR(26, 0xFF, 0x80, 0x00);  // R
        RGB_MATRIX_INDICATOR_SET_COLOR(12, 0x00, 0xFF, 0xFF);  // A
        RGB_MATRIX_INDICATOR_SET_COLOR(17, 0x00, 0xFF, 0xFF);  // S
        RGB_MATRIX_INDICATOR_SET_COLOR(22, 0x00, 0xFF, 0xFF);  // D
        RGB_MATRIX_INDICATOR_SET_COLOR(27, 0x7A, 0x00, 0xFF);  // F

        RGB_MATRIX_INDICATOR_SET_COLOR(27, 0x7A, 0x00, 0xFF);  // 1
        RGB_MATRIX_INDICATOR_SET_COLOR(27, 0x7A, 0x00, 0xFF);  // 2
        RGB_MATRIX_INDICATOR_SET_COLOR(20, 0x7A, 0x00, 0xFF);                                          // 3
    }

    return true;
}
#endif