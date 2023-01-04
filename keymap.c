#include QMK_KEYBOARD_H
#include <stdio.h>

enum layers {
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST,
    _ADJUST_LOWER,
    _MACRO,
    _SPLIT_PLAY,
    _SPLIT_G_LOWER,
};

enum custom_keycodes {
    SCREENSHOT = SAFE_RANGE,
    FULL_SCREENSHOT,
    LALT_LSFT,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_split_3x6_3(
      //,-----------------------------------------------------------------.           LAYER #0           ,-----------------------------------------------------------------.
             KC_TAB,      KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,                                     KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,   KC_BSPC,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
            KC_LSFT,      KC_A,      KC_S,      KC_D,      KC_F,      KC_G,                                     KC_H,      KC_J,      KC_K,      KC_L,   KC_SCLN,RSFT_T(KC_QUOT),
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
            KC_LCTL,      KC_Z,      KC_X,      KC_C,       KC_V,     KC_B,                                     KC_N,      KC_M,   KC_COMM,    KC_DOT,   KC_SLSH,     MO(5),
      //|----------+----------+----------+----------+----------+----------+----------|        |----------+----------+----------+----------+----------+----------+----------|
                                                        KC_LGUI,     MO(1),    KC_SPC,             KC_ENT,     MO(2),   KC_LALT
                                                  //`--------------------------------'        `--------------------------------'
  ),
  [_LOWER] = LAYOUT_split_3x6_3(
      //,-----------------------------------------------------------------.           LAYER #1           ,-----------------------------------------------------------------.
             KC_ESC,      KC_1,      KC_2,      KC_3,      KC_4,      KC_5,                                     KC_6,      KC_7,      KC_8,      KC_9,      KC_0,   KC_BSPC,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
            KC_LSFT,     KC_NO,     KC_NO,     KC_NO,     MO(4),     KC_NO,                                  KC_LEFT,   KC_DOWN,     KC_UP,   KC_RGHT,     KC_NO,     KC_NO,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
            KC_LCTL,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,                                    KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,
      //|----------+----------+----------+----------+----------+----------+----------|        |----------+----------+----------+----------+----------+----------+----------|
                                                        KC_LGUI,   KC_TRNS,    KC_SPC,             KC_ENT,     MO(3),   KC_LALT
                                                  //`--------------------------------'        `--------------------------------'
  ),
  [_RAISE] = LAYOUT_split_3x6_3(
      //,-----------------------------------------------------------------.           LAYER #2           ,-----------------------------------------------------------------.
             KC_ESC,   KC_EXLM,     KC_AT,   KC_HASH,    KC_DLR,   KC_PERC,                                  KC_CIRC,   KC_AMPR,   KC_ASTR,   KC_LPRN,   KC_RPRN,   KC_BSPC,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
            KC_LSFT,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,                                  KC_MINS,    KC_EQL,   KC_LBRC,   KC_RBRC,   KC_BSLS,    KC_GRV,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
            KC_LCTL,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,                                    KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_TILD,
      //|----------+----------+----------+----------+----------+----------+----------|        |----------+----------+----------+----------+----------+----------+----------|
                                                        KC_LGUI,     MO(3),    KC_SPC,             KC_ENT,   KC_TRNS,   KC_LALT
                                                  //`--------------------------------'        `--------------------------------'
  ),
  [_ADJUST] = LAYOUT_split_3x6_3(
      //,-----------------------------------------------------------------.           LAYER #3           ,-----------------------------------------------------------------.
            QK_BOOT,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,                                    KC_NO,     KC_NO,     KC_NO,   KC_MPRV,   KC_MNXT,   KC_MPLY,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
            RGB_TOG,   RGB_HUI,   RGB_SAI,   RGB_VAI,     KC_NO,     KC_NO,                                    KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_VOLU,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
            RGB_MOD,   RGB_HUD,   RGB_SAD,   RGB_VAD,     KC_NO,     KC_NO,                                    KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_MUTE,   KC_VOLD,
      //|----------+----------+----------+----------+----------+----------+----------|        |----------+----------+----------+----------+----------+----------+----------|
                                                        KC_LGUI,   KC_TRNS,    KC_SPC,             KC_ENT,   KC_TRNS,   KC_LALT
                                                  //`--------------------------------'        `--------------------------------'
  ),
  [_ADJUST_LOWER] = LAYOUT_split_3x6_3(
      //,-----------------------------------------------------------------.           LAYER #4           ,-----------------------------------------------------------------.
              KC_NO,     KC_NO,     KC_F2,     KC_NO,     KC_F4,     KC_NO,                                     KC_7,      KC_8,      KC_9,     KC_NO,     KC_NO,    KC_F12,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
              KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_TRNS,     KC_NO,                                     KC_4,      KC_5,      KC_6,     KC_NO,     KC_NO,     KC_NO,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
              TG(6),     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,                                     KC_1,      KC_2,      KC_3,      KC_0,     KC_NO,     KC_NO,
      //|----------+----------+----------+----------+----------+----------+----------|        |----------+----------+----------+----------+----------+----------+----------|
                                                        KC_LGUI,   KC_TRNS,    KC_SPC,             KC_ENT,   KC_TRNS,   KC_LALT
                                                  //`--------------------------------'        `--------------------------------'
  ),
  [_MACRO] = LAYOUT_split_3x6_3(
      //,-----------------------------------------------------------------.           LAYER #5           ,-----------------------------------------------------------------.
              KC_NO,     KC_NO,    KC_NO,FULL_SCREENSHOT,SCREENSHOT, KC_NO,                                    KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_WH_D,   KC_MPLY,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
          LALT_LSFT,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,                                    KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_WH_U,     KC_NO,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
              KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,                                    KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_TRNS,
      //|----------+----------+----------+----------+----------+----------+----------|        |----------+----------+----------+----------+----------+----------+----------|
                                                        KC_LGUI,   KC_TRNS,    KC_SPC,             KC_ENT,   KC_TRNS,   KC_LALT
                                                  //`--------------------------------'        `--------------------------------'
  ),
  [_SPLIT_PLAY] = LAYOUT_split_3x6_3(
      //,-----------------------------------------------------------------.           LAYER #6           ,-----------------------------------------------------------------.
             KC_ESC,      KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,                                     KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,   KC_BSPC,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
            KC_LSFT,      KC_A,      KC_S,      KC_D,      KC_F,      KC_G,                                     KC_H,      KC_J,      KC_K,      KC_L,   KC_SCLN,   KC_QUOT,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
            KC_LCTL,      KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,                                     KC_N,      KC_M,   KC_COMM,    KC_DOT,   KC_SLSH,     MO(5),
      //|----------+----------+----------+----------+----------+----------+----------|        |----------+----------+----------+----------+----------+----------+----------|
                                                          MO(7),    KC_SPC,    KC_ENT,             KC_ENT,     KC_NO,   KC_MPLY
                                                  //`--------------------------------'        `--------------------------------'
  ),
  [_SPLIT_G_LOWER] = LAYOUT_split_3x6_3(
      //,-----------------------------------------------------------------.           LAYER #7           ,-----------------------------------------------------------------.
             KC_TAB,     KC_NO,     KC_UP,     KC_NO,     KC_NO,     TG(6),                                   KC_F13,    KC_F14,    KC_F15,    KC_F16,    KC_F17,    KC_F18,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
             KC_TAB,   KC_LEFT,   KC_DOWN,   KC_RGHT,     KC_NO,     KC_NO,                                    KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
              KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,                                    KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,
      //|----------+----------+----------+----------+----------+----------+----------|        |----------+----------+----------+----------+----------+----------+----------|
                                                        KC_TRNS,     KC_NO,     KC_NO,              KC_NO,     KC_NO,     KC_NO
                                                  //`--------------------------------'        `--------------------------------'
  ),
};

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

void oled_render_layer_state(void) {
    oled_write_ln_P(PSTR("Wubba Lubba Dub Dub!"), false);
}

void render_prompt(void) {
    bool blink = (timer_read() % 1000) < 500;

    if (layer_state_is(_LOWER)) {
        oled_write_ln_P(blink ? PSTR("> Lower_") : PSTR("> Lower "), false);
    } else if (layer_state_is(_RAISE)) {
        oled_write_ln_P(blink ? PSTR("> Raise_") : PSTR("> Raise "), false);
    } else if (layer_state_is(_ADJUST)) {
        oled_write_ln_P(blink ? PSTR("> Adjust_") : PSTR("> Adjust "), false);
    } else if (layer_state_is(_MACRO)) {
        oled_write_ln_P(blink ? PSTR("> Macro_") : PSTR("> Macro "), false);
    } else if (layer_state_is(_SPLIT_PLAY)) {
        oled_write_ln_P(blink ? PSTR("> Play_") : PSTR("> Play "), false);
    } else {
        oled_write_ln_P(blink ? PSTR("> _  ") : PSTR(">    "), false);
    }
};

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
        oled_write_ln("", false);
        render_prompt();
    } else {
        oled_render_logo();
    }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SCREENSHOT:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_LSFT) "4");
            } else {
                SEND_STRING(SS_UP(X_LSFT) SS_UP(X_LGUI));
            }
            break;
        case FULL_SCREENSHOT:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_LSFT) "3");
            } else {
                SEND_STRING(SS_UP(X_LSFT) SS_UP(X_LGUI));
            }
            break;
        case LALT_LSFT:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LALT) SS_DOWN(X_LSFT));
            } else {
                SEND_STRING(SS_UP(X_LALT) SS_UP(X_LSFT));
            }
            break;
    }
    return true;
}
