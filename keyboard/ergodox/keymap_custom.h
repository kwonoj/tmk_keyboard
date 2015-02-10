static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Colemak
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |   =    |   1  |   2  |   3  |   4  |   5  |  ESC |           |   \  |   6  |   7  |   8  |   9  |   0  |   -    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |   TAB  |   Q  |   W  |   F  |   P  |   G  |   [  |           |   ]  |   J  |   L  |   U  |   Y  |   ;  |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |   A  |   R  |   S  |   T  |   D  |------|           |------|   H  |   N  |   E  |   I  |   O  |   '    |
     * |--------+------+------+------+------+------|LShift|           |Rshift|------+------+------+------+------+--------|
     * |    L2  |   Z  |   X  |   C  |   V  |   B  |      |           |      |   K  |   M  |   ,  |   .  |   /  |  ~L2   |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LGui |   `  |      | LCtl | Lalt |                                       | Left | Down |  Up  | Right|  L1  |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |  KR  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | Home |       | PgUp |      |      |
     *                                 | BkSp | Del  |------|       |------| Enter| Space|
     *                                 |      |      |  End |       | PgDn |      |      |
     *                                 `--------------------'       `--------------------'
     */
	KEYMAP( // Layer 0: Colemak
		// Left Hand
	    EQL, 1,   2,   3,   4,   5,   ESC,
	    TAB, Q,   W,   F,   P,   G,   LBRC,
	    NO , A,   R,   S,   T,   D,
	    FN0,Z,   X,   C,   V,   B,   LSFT,
	    LGUI,GRV, NO,  LCTL,LALT,
	                                  NO,   NO,
	                                        HOME,
	                             BSPC, DEL, END,
	    // Right Hand
		    BSLS, 6,   7,   8,   9,   0,      MINS,
		    RBRC, J,   L,   U,   Y,   SCLN,   NO,
		          H,   N,   E,   I,   O,      QUOT,
		    RSFT, K,   M,   COMM,DOT, SLSH,   FN2,
		               LEFT,DOWN, UP, RGHT,   FN1,
	    NO, FN4,
	    PGUP,
	    PGDN, ENT, SPC
    ),

    /* Layer 1: QWERTY (Gaming)
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |   =    |   1  |   2  |   3  |   4  |   5  |  ESC |           |   \  |   6  |   7  |   8  |   9  |   0  |   -    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |   TAB  |   Q  |   W  |   E  |   R  |   T  |   [  |           |   ]  |   Y  |   U  |   I  |   O  |   P  |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
     * |--------+------+------+------+------+------|Lshift|           |Rshift|------+------+------+------+------+--------|
     * |    L2  |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  |  ~L2   |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LGui |   `  |      | LCtl | Lalt |                                       | Left | Down |  Up  | Right|  L0  |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |  KR  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | Home |       | PgUp |      |      |
     *                                 | BkSp | Del  |------|       |------| Enter| Space|
     *                                 |      |      |  End |       | PgDn |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP( // Layer 1: Qwerty
        // Left Hand
        EQL, 1,   2,   3,   4,   5,   ESC,
        TAB, Q,   W,   E,   R,   T,   LBRC,
        NO,  A,   S,   D,   F,   G,
        FN0,Z,   X,   C,   V,   B,   LSFT,
        LGUI,GRV, NO,  LCTL,LALT,
                                      NO,  NO,
                                           HOME,
                                  BSPC,DEL, END,
        // Right Hand
            BSLS,  6,   7,   8,   9,   0,   MINS,
            RBRC, Y,   U,   I,   O,   P,   NO,
                  H,   J,   K,   L,   SCLN,   QUOT,
            RSFT, N,   M,   COMM,DOT, SLSH,   FN2,
                       LEFT,DOWN, UP, RGHT,   FN1,
        NO, FN3,
        PGUP,
        PGDN, ENT, SPC
    ),

    /* Layer 2: Function and Media Keys
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |   F11  |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |      |  F6  |  F7  |  F8  |  F9  |  F10 |   F12  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | TRNS   |      |      |      |      |      | ~L3  |           |      |      |      |      |      |      |  PrtSc |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |------|           |------|      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | TRNS   |      |      |      |      |      | TRNS |           | TRNS |      |      | Mute | Play |      |    TRNS|
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      | TRNS | TRNS |                                       |Prev.T|VolDn |VolUp |Next T|      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | TRNS | TRNS |       | TRNS | TRNS |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | TRNS |       | TRNS |      |      |
     *                                 | TRNS | TRNS |------|       |------| TRNS | TRNS |
     *                                 |      |      | TRNS |       | TRNS |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP( // Layer 2: Function and Media Keys
        // Left Hand
         F11, F1,  F2,  F3,  F4,  F5,  NO,
         TRNS, NO,  NO,  NO,  NO,  NO,   FN6,
         NO, NO,  NO,  NO,  NO,  NO,
         TRNS, NO,  NO,  NO,  NO,  NO,  TRNS,
         NO, NO,  NO,  TRNS, TRNS,
                                      TRNS, TRNS,
                                            TRNS,
                                TRNS, TRNS, TRNS,
        // Right Hand
             NO,  F6,  F7,  F8,  F9,  F10, F12,
             NO,  NO,  NO,  NO,  NO,  NO,  PSCR,
                  NO,  NO,  NO,  NO,  NO,  NO,
             TRNS,NO,  MUTE,MPLY,NO,  NO,  TRNS,
                       MPRV,VOLD,VOLU,MNXT,NO,
        TRNS, TRNS,
        TRNS,
        TRNS, TRNS, TRNS
    ),

    /* Layer 3: Bridge to special
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |      |      |      |      |      |  ~L4 |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |------|           |------|      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP( // Layer 3: Bridge to special
        // Left Hand
         NO, NO,  NO,  NO,  NO,  NO,  FN7,
         NO, NO,  NO,  NO,  NO,  NO,  NO,
         NO, NO,  NO,  NO,  NO,  NO,
         NO, NO,  NO,  NO,  NO,  NO,  NO,
         NO, NO,  NO,  NO,  NO,
                                      NO, NO,
                                          NO,
                                  NO, NO, NO,
        // Right Hand
             NO,  NO,  NO,  NO,  NO,  NO, NO,
             NO,  NO,  NO,  NO,  NO,  NO, NO,
                  NO,  NO,  NO,  NO,  NO, NO,
             NO,  NO,  NO,  NO,  NO,  NO, NO,
                  NO,  NO,  NO,  NO,  NO,
         NO, NO,
         NO,
         NO, NO, NO
    ),

    /* Layer 3: Bridge to special
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |      |      |      |      |      |      |           |Teensy|      |      |      |      |      |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |------|           |------|      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP( // Layer 4: Special
        // Left Hand
         NO, NO,  NO,  NO,  NO,  NO,  NO,
         NO, NO,  NO,  NO,  NO,  NO,  NO,
         NO, NO,  NO,  NO,  NO,  NO,
         NO, NO,  NO,  NO,  NO,  NO,  NO,
         NO, NO,  NO,  NO,  NO,
                                      NO, NO,
                                          NO,
                                  NO, NO, NO,
        // Right Hand
             FN5,  NO,  NO,  NO,  NO,  NO, NO,
             NO,  NO,  NO,  NO,  NO,  NO, NO,
                  NO,  NO,  NO,  NO,  NO, NO,
             NO,  NO,  NO,  NO,  NO,  NO, NO,
                  NO,  NO,  NO,  NO,  NO,
         NO, NO,
         NO,
         NO, NO, NO
    ),
};

/* id for user defined functions */
enum function_id {
    RALT_QWERTY,
    RALT_COLEMAK,
    TEENSY_KEY,
};

static const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_INVERT(2, ON_PRESS),                // FN0  - Switch layer state between 2 to current
    [1] = ACTION_LAYER_INVERT(1, ON_PRESS),                // FN1  - Switch layer state between 1 to current
    [2] = ACTION_LAYER_MOMENTARY(2),                       // FN2  - Switching to layer 2 while holding key
    [3] = ACTION_FUNCTION(RALT_QWERTY),			   // FN3 - Switching language macro for qwerty based layout
    [4] = ACTION_FUNCTION(RALT_COLEMAK),                   // FN4 - Switching language macro for colemak based layout

    [5] = ACTION_FUNCTION(TEENSY_KEY),                     // FN5  - Teensy key
    [6] = ACTION_LAYER_MOMENTARY(3),                       // FN6  - Switching to layer 3 while holding key
    [7] = ACTION_LAYER_MOMENTARY(4),                       // FN7  - Switching to layer 4 while holding key
};


bool layer_origin_colemak = false;

void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
    print("action_function called\n");
    print("id  = "); phex(id); print("\n");
    print("opt = "); phex(opt); print("\n");

  switch(id) {
    case TEENSY_KEY:
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
        print("not supported.\n");
	break;

    case RALT_COLEMAK:
	if (!event->event.pressed)
	{
	  break;
	}

	//Explicitly move qwerty layer for KR layout
	layer_origin_colemak = true;
	layer_on(1);
	register_code(KC_RALT);
	unregister_code(KC_RALT);
	break;

    case RALT_QWERTY:
	if (!event->event.pressed)
	{
	  break;
	}
	register_code(KC_RALT);
	unregister_code(KC_RALT);
	
	//If layer's moved from colemak for language switch, clear current layer
	if (layer_origin_colemak)
	{
	  layer_origin_colemak = false;
	  layer_clear();
	}
	break;
  }
}

