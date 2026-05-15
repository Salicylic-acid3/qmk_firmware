/*
Copyright 2021 Salicylic_Acid

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

enum unicode_names {
GRIN,
BEAMING,
SWEAT,
ROLLING,
SLINGHTLY,
WINK,
SMILE,
HALO,
SHEART,
EHEART,
YUMMY,
ZANY,
MONEY,
HUGGING,
SHUSING,
THINK,
SMIRKING,
REYES,
RELIEVED,
SLEEPING,
MASK,
THERMO,
PARTY,
COOL,
NERD,
MONOCLE,
PYEN,
FEARFUL,
CRYING,
SCREAMING,
TIRED,

DEVIL,
SKULL,
GHOST,
GOBLIN,
ROBOT,

NOSEE,
NOHEAR,
NOSPEAK,

THMUP,
THMDN,
RAISED,
LEFT,
RIGHT,
UP,
DOWN,
CLAP,
BANZAI,
HANDSHAKE,
FOLDED,
WRITING,
MUSCLE,
EYES,
EYE,

NOGES,
OKGES,
RAISEGES,
DOGEZA,
SHRUGGING,

BHART,
HART,
HART2,
CUM,
POO,
HUNRD,
DASH,
FIRE,
POPPER,
SPARKLES,
DEXC,
EXCQUE,
CHECKBOX,
CHECKMARK,
KEEB,
};

const uint32_t PROGMEM unicode_map[] = {
      [GRIN]	=	0x1F600,	//	😀8000
      [BEAMING]     =	0x1F601,	//	😁8001
      [SWEAT]	=	0x1F605,	//	😅8002
      [ROLLING]	=	0x1F923,	//	🤣8003
      [SLINGHTLY]	=	0x1F642,	//	🙂8004
      [WINK]	=	0x1F609,	//	😉8005
      [SMILE]	=	0x1F60A,	//	😊8006
      [HALO]	=	0x1F607,	//	😇8007
      [SHEART]	=	0x1F970,	//	🥰8008
      [EHEART]	=	0x1F60D,	//	😍8009
      [YUMMY]     =	0x1F60B,	//	😋800A
      [ZANY]	=	0x1F92A,	//	🤪800B
      [MONEY]	=	0x1F911,	//	🤑800C
      [HUGGING]   =	0x1F917,	//	🤗800D
      [SHUSING]	=	0x1F92B,	//	🤫800E
      [THINK]	=	0x1F914,	//	🤔800F
      [SMIRKING]	=	0x1F60F,	//	😏8010
      [REYES]	=	0x1F644,	//	🙄8011
      [RELIEVED]	=	0x1F60C,	//	😌8012
      [SLEEPING]	=	0x1F634,	//	😴8013
      [MASK]	=	0x1F637,	//	😷8014
      [THERMO]	=	0x1F912,	//	🤒8015
      [PARTY]	=	0x1F973,	//	🥳8016
      [COOL]	=	0x1F60E,	//	😎8017
      [NERD]	=	0x1F913,	//	🤓8018
      [MONOCLE]	=	0x1F9D0,	//	🧐8019
      [PYEN]	=	0x1F97A,	//	🥺801A
      [FEARFUL]	=	0x1F630,	//	😰801B
      [CRYING]	=	0x1F62D,	//	😭801C
      [SCREAMING]	=	0x1F631,	//	😱801D
      [TIRED]	=	0x1F62B,	//	😫801E

      [DEVIL]	=	0x1F608,	//	😈801F
      [SKULL]	=	0x1F480,	//	💀8020
      [GHOST]	=	0x1F47B,	//	👻8021
      [GOBLIN]    =	0x1F47A,	//	👺8022
      [ROBOT]     =	0x1F916,	//	🤖8023

      [NOSEE]	=	0x1F648,	//	🙈8024
      [NOHEAR]    =	0x1F649,	//	🙉8025
      [NOSPEAK]   =	0x1F64A,	//	🙊8026

      [THMUP]	=	0x1F44D,	//	👍8027
      [THMDN]	=	0x1F44E,	//	👎8028
      [RAISED]	=	0x270B,	//	✋8029
      [LEFT]	=	0x1F448,	//	👈802A
      [RIGHT]	=	0x1F449,	//	👉802B
      [UP]  	=	0x1F446,	//	👆802C
      [DOWN]	=	0x1F447,	//	👇802D
      [CLAP]	=	0x1F44F,	//	👏802E
      [BANZAI]	=	0x1F64C,	//	🙌802F
      [HANDSHAKE]	=	0x1F91D,	//	🤝8030
      [FOLDED]	=	0x1F64F,	//	🙏8031
      [WRITING]	=	0x270D,	//	✍8032
      [MUSCLE]	=	0x1F4AA,	//	💪8033
      [EYES]	=	0x1F440,	//	👀8034
      [EYE] 	=	0x1F441,	//	👁️8035

      [NOGES]	=	0x1F645,	//	🙅8036
      [OKGES]	=	0x1F646,	//	🙆8037
      [RAISEGES]	=	0x1F64B,	//	🙋8038
      [DOGEZA]	=	0x1F647,	//	🙇8039
      [SHRUGGING]	=	0x1F937,	//	🤷803A
      
      [BHART]	=	0x1F494,	//	💔803B
      [HART]	=	0x2764,	//	❤803C
      [HART2]	=	0x1F495,	//	💕803D
      [CUM] 	=	0x1F4A6,	//	💦803E
      [POO]	      =	0x1F4A9,	//	💩803F
      [HUNRD]	=	0x1F4AF,	//	💯8040
      [DASH]	=	0x1F4A8,	//	💨8041
      [FIRE]	=	0x1F525,	//	🔥8042
      [POPPER]	=	0x1F389,	//	🎉8043
      [SPARKLES]	=	0x2728,	//	✨8044
      [DEXC]	=	0x203C,	//	‼8045
      [EXCQUE]	=	0x2049,	//	⁉8046
      [CHECKBOX]	=	0x2611,	//	☑8047
      [CHECKMARK]	=	0x2714,	//	✔8048
      [KEEB]	=	0x2328,	//	⌨8049
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
  //,-----------------------------------|
      X(HART),X(SPARKLES),X(THMUP),X(FOLDED),
  //|--------+--------+--------+--------|
      X(POPPER),X(HUNRD),X(KEEB),X(GRIN),
  //|--------+--------+--------+--------|
      X(PYEN),X(HALO),X(THINK),X(ROLLING),
  //|--------+--------+--------+--------|
      X(PARTY),X(HUGGING),X(COOL),X(SCREAMING),
  //|--------+--------+--------+--------|
      X(CRYING),X(OKGES),X(NOGES),X(DOGEZA)
  //|-----------------------------------|
  ),
  [1] = LAYOUT(
  //,-----------------------------------|
        KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------|
        KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------|
        KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------|
        KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------|
        KC_NO,   KC_NO,   KC_NO,   KC_NO
  //|-----------------------------------|
  ),
  [2] = LAYOUT(
  //,-----------------------------------|
        KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------|
        KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------|
        KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------|
        KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------|
        KC_NO,   KC_NO,   KC_NO,   KC_NO
  //|-----------------------------------|
  ),
  [3] = LAYOUT(
  //,-----------------------------------|
        KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------|
        KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------|
        KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------|
        KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------|
        KC_NO,   KC_NO,   KC_NO,   KC_NO
  //|-----------------------------------|
  )
};


//A description for expressing the layer position in LED mode.
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case OS_LIN:
      set_unicode_input_mode(UC_LNX);
      rgblight_sethsv_at(HSV_BLUE, 0);
      return false;
      break;
    case OS_WIN:
      set_unicode_input_mode(UC_WIN);
      rgblight_sethsv_at(HSV_RED, 0);
      return false;
      break;
    case OS_WINC:
      set_unicode_input_mode(UC_WINC);
      rgblight_sethsv_at(HSV_GREEN, 0);
      return false;
      break;
    case OS_MAC:
      set_unicode_input_mode(UC_OSX);
      rgblight_sethsv_at(HSV_YELLOW, 0);
      return false;
      break;
    }
  return true;
}

void matrix_init_user(void) {
  set_unicode_input_mode(UC_WINC);
};
