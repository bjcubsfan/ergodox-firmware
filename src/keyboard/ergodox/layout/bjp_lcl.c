/* ----------------------------------------------------------------------------
* ErgoDox layout : bjp_lcl.c
* -----------------------------------------------------------------------------
* This is my ErgoDox layout. I am learning Colemak, so it's on layer 4 for
* learning. I have symbols on layer 1, functions on layer 2, and a 
* number pad on layer 3.
* The approximation of this layout can be seen at the ergodox configuration:
* https://www.massdrop.com/ext/ergodox/?referer=EUEARV&hash=2b190cf5d422ff2270c87626c4e1398f
* (click the show more layers button for colemak)
* -------------------------------------------------------------------------- */
#include <stdint.h>
#include <stddef.h>
#include <avr/pgmspace.h>
#include "../../../lib/data-types/misc.h"
#include "../../../lib/usb/usage-page/keyboard--short-names.h"
#include "../../../lib/key-functions/public.h"
#include "../matrix.h"
#include "../layout.h"
// FUNCTIONS ------------------------------------------------------------------
void kbfun_layer_pop_all(void) {
  kbfun_layer_pop_1();
  kbfun_layer_pop_2();
  kbfun_layer_pop_3();
  kbfun_layer_pop_4();
  kbfun_layer_pop_5();
  kbfun_layer_pop_6();
  kbfun_layer_pop_7();
  kbfun_layer_pop_8();
  kbfun_layer_pop_9();
  kbfun_layer_pop_10();
}

// DEFINITIONS ----------------------------------------------------------------
#define  kprrel   &kbfun_press_release
#define  mprrel   &kbfun_mediakey_press_release
#define  ktog     &kbfun_toggle
#define  ktrans   &kbfun_transparent
#define  lpush1   &kbfun_layer_push_1
#define  lpush2   &kbfun_layer_push_2
#define  lpush3   &kbfun_layer_push_3
#define  lpush4   &kbfun_layer_push_4
#define  lpop     &kbfun_layer_pop_all
#define  lpop1    &kbfun_layer_pop_1
#define  lpop2    &kbfun_layer_pop_2
#define  lpop3    &kbfun_layer_pop_3
#define  lpop4    &kbfun_layer_pop_4
#define  dbtldr   &kbfun_jump_to_bootloader
#define  sshprre  &kbfun_shift_press_release
#define  s2kcap   &kbfun_2_keys_capslock_press_release
#define  slpunum  &kbfun_layer_push_numpad
#define  slponum  &kbfun_layer_pop_numpad
// ----------------------------------------------------------------------------

// LAYOUT ---------------------------------------------------------------------
const uint8_t PROGMEM _kb_layout[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	KEY_GraveAccent_Tilde,	KEY_1_Exclamation,	KEY_2_At,	KEY_3_Pound,	KEY_4_Dollar,	KEY_5_Percent,	3,	
	KEY_Tab,	KEY_q_Q,	KEY_w_W,	KEY_e_E,	KEY_r_R,	KEY_t_T,	2,	
	KEY_LeftControl,	KEY_a_A,	KEY_s_S,	KEY_d_D,	KEY_f_F,	KEY_g_G,	
	KEY_LeftShift,	KEY_z_Z,	KEY_x_X,	KEY_c_C,	KEY_v_V,	KEY_b_B,	1,	
	KEY_LeftControl,	KEY_LeftGUI,	KEY_LeftControl,	KEY_LeftAlt,	KEY_LeftGUI,	
	KEY_Spacebar,	KEY_ReturnEnter,	
	0,	0,	KEY_LeftShift,	
	KEY_DeleteBackspace,	KEY_Escape,	KEY_Spacebar,	
	// right hand
	0,	KEY_6_Caret,	KEY_7_Ampersand,	KEY_8_Asterisk,	KEY_9_LeftParenthesis,	KEY_0_RightParenthesis,	KEY_Dash_Underscore,	
	2,	KEY_y_Y,	KEY_u_U,	KEY_i_I,	KEY_o_O,	KEY_p_P,	KEY_SingleQuote_DoubleQuote,	
	KEY_h_H,	KEY_j_J,	KEY_k_K,	KEY_l_L,	KEY_Semicolon_Colon,	KEY_RightControl,	
	1,	KEY_n_N,	KEY_m_M,	KEY_Comma_LessThan,	KEY_Period_GreaterThan,	KEY_Slash_Question,	KEY_RightShift,	
	KEY_RightGUI,	KEY_RightAlt,	KEY_RightControl,	KEY_RightGUI,	KEY_RightControl,	
	KEY_Escape,	KEY_DeleteBackspace,	
	KEY_LeftShift,	0,	0,	
	KEY_Escape,	KEY_ReturnEnter,	KEY_Spacebar	
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	1,	2,	3,	4,	0,	0,	
	0,	0,	0,	0,	KEY_9_LeftParenthesis,	KEY_0_RightParenthesis,	0,	
	0,	KEY_Backslash_Pipe,	KEY_1_Exclamation,	KEY_GraveAccent_Tilde,	KEY_LeftBracket_LeftBrace,	KEY_RightBracket_RightBrace,	
	0,	0,	0,	0,	KEY_LeftBracket_LeftBrace,	KEY_RightBracket_RightBrace,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	0,	0,	0,	0,	0,	KEY_Equal_Plus,	0,	
	0,	0,	0,	0,	0,	0,	KEY_Backslash_Pipe,	
	KEY_Equal_Plus,	KEY_Equal_Plus,	KEY_Dash_Underscore,	KEY_8_Asterisk,	KEY_Backslash_Pipe,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	KEY_Dash_Underscore	
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	KEY_F1,	KEY_F2,	KEY_F3,	KEY_F4,	KEY_F5,	0,	
	0,	KEY_F11,	KEY_F12,	0,	0,	0,	0,	
	0,	MEDIAKEY_AUDIO_MUTE,	MEDIAKEY_AUDIO_VOL_DOWN,	MEDIAKEY_AUDIO_VOL_UP,	MEDIAKEY_PLAY_PAUSE,	KEY_Power,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	KEY_DeleteForward,	0,	0,	
	// right hand
	0,	KEY_F6,	KEY_F7,	KEY_F8,	KEY_F9,	KEY_F10,	0,	
	0,	KEY_Home,	KEY_PageDown,	KEY_PageUp,	KEY_End,	0,	0,	
	KEY_LeftArrow,	KEY_DownArrow,	KEY_UpArrow,	KEY_RightArrow,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0	
),
// LAYER 3
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	KEY_DeleteBackspace,	0,	0,	
	// right hand
	0,	0,	KEYPAD_NumLock_Clear,	KEYPAD_Asterisk,	KEYPAD_Slash,	KEYPAD_Minus,	0,	
	0,	0,	KEYPAD_7_Home,	KEYPAD_8_UpArrow,	KEYPAD_9_PageUp,	KEYPAD_Plus,	0,	
	0,	KEYPAD_4_LeftArrow,	KEYPAD_5,	KEYPAD_6_RightArrow,	KEYPAD_Plus,	0,	
	0,	0,	KEYPAD_1_End,	KEYPAD_2_DownArrow,	KEYPAD_3_PageDown,	KEY_ReturnEnter,	0,	
	KEYPAD_0_Insert,	KEYPAD_0_Insert,	KEYPAD_Period_Delete,	KEY_ReturnEnter,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	KEYPAD_0_Insert	
),
// LAYER 4
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	KEY_1_Exclamation,	KEY_2_At,	KEY_3_Pound,	KEY_4_Dollar,	KEY_5_Percent,	0,	
	0,	KEY_q_Q,	KEY_w_W,	KEY_f_F,	KEY_p_P,	KEY_g_G,	0,	
	0,	KEY_a_A,	KEY_r_R,	KEY_s_S,	KEY_t_T,	KEY_d_D,	
	0,	KEY_z_Z,	KEY_x_X,	KEY_c_C,	KEY_v_V,	KEY_b_B,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	0,	KEY_6_Caret,	KEY_7_Ampersand,	KEY_8_Asterisk,	KEY_9_LeftParenthesis,	KEY_0_RightParenthesis,	KEY_Dash_Underscore,	
	0,	KEY_j_J,	KEY_l_L,	KEY_u_U,	KEY_y_Y,	KEY_Semicolon_Colon,	KEY_SingleQuote_DoubleQuote,	
	KEY_h_H,	KEY_n_N,	KEY_e_E,	KEY_i_I,	KEY_o_O,	0,	
	0,	KEY_k_K,	KEY_m_M,	KEY_Comma_LessThan,	KEY_Period_GreaterThan,	KEY_Slash_Question,	0,	
	KEY_RightGUI,	KEY_RightAlt,	KEY_RightControl,	KEY_RightGUI,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	KEY_Spacebar	
),
};
// ----------------------------------------------------------------------------

// PRESS ----------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_press[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpush3,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpush2,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpush1,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	
	NULL,	NULL,	kprrel,	
	kprrel,	kprrel,	kprrel,	
	// right hand
	lpop,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	lpush2,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	lpush1,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	
	kprrel,	NULL,	NULL,	
	kprrel,	kprrel,	kprrel	
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	ktrans,	lpush1,	lpush2,	lpush3,	lpush4,	ktrans,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	sshprre,	sshprre,	ktrans,	
	ktrans,	kprrel,	sshprre,	sshprre,	kprrel,	kprrel,	
	ktrans,	ktrans,	ktrans,	ktrans,	sshprre,	sshprre,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	
	NULL,	NULL,	ktrans,	
	ktrans,	ktrans,	ktrans,	
	// right hand
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	kprrel,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	kprrel,	
	sshprre,	kprrel,	kprrel,	sshprre,	sshprre,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	
	ktrans,	NULL,	NULL,	
	ktrans,	ktrans,	sshprre	
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	kprrel,	kprrel,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	mprrel,	mprrel,	mprrel,	mprrel,	kprrel,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	
	NULL,	NULL,	ktrans,	
	kprrel,	ktrans,	ktrans,	
	// right hand
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	ktrans,	
	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	
	ktrans,	NULL,	NULL,	
	ktrans,	ktrans,	ktrans	
),
// LAYER 3
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	
	NULL,	NULL,	ktrans,	
	kprrel,	ktrans,	ktrans,	
	// right hand
	ktrans,	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	dbtldr,	
	ktrans,	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	ktrans,	
	ktrans,	NULL,	NULL,	
	ktrans,	ktrans,	kprrel	
),
// LAYER 4
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	
	NULL,	NULL,	ktrans,	
	ktrans,	ktrans,	ktrans,	
	// right hand
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	ktrans,	
	ktrans,	NULL,	NULL,	
	ktrans,	ktrans,	kprrel	
),
};
// ----------------------------------------------------------------------------

// RELEASE --------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_release[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpop3,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpop2,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpop1,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	
	NULL,	NULL,	kprrel,	
	kprrel,	kprrel,	kprrel,	
	// right hand
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	lpop2,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	lpop1,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	
	kprrel,	NULL,	NULL,	
	kprrel,	kprrel,	kprrel	
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	ktrans,	NULL,	NULL,	NULL,	NULL,	ktrans,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	sshprre,	sshprre,	ktrans,	
	ktrans,	kprrel,	sshprre,	sshprre,	kprrel,	kprrel,	
	ktrans,	ktrans,	ktrans,	ktrans,	sshprre,	sshprre,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	
	NULL,	NULL,	ktrans,	
	ktrans,	ktrans,	ktrans,	
	// right hand
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	kprrel,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	sshprre,	kprrel,	
	sshprre,	kprrel,	kprrel,	sshprre,	sshprre,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	
	ktrans,	NULL,	NULL,	
	ktrans,	ktrans,	sshprre	
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	kprrel,	kprrel,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	mprrel,	mprrel,	mprrel,	mprrel,	kprrel,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	
	NULL,	NULL,	ktrans,	
	kprrel,	ktrans,	ktrans,	
	// right hand
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	ktrans,	
	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	
	ktrans,	NULL,	NULL,	
	ktrans,	ktrans,	ktrans	
),
// LAYER 3
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	
	NULL,	NULL,	ktrans,	
	kprrel,	ktrans,	ktrans,	
	// right hand
	ktrans,	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,	
	ktrans,	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	ktrans,	
	ktrans,	NULL,	NULL,	
	ktrans,	ktrans,	kprrel	
),
// LAYER 4
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	
	NULL,	NULL,	ktrans,	
	ktrans,	ktrans,	ktrans,	
	// right hand
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	ktrans,	
	ktrans,	NULL,	NULL,	
	ktrans,	ktrans,	kprrel	
),
};
// ----------------------------------------------------------------------------
