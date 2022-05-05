inline void init_gfx() {
  ENABLE_RAM;
  SHOW_BKG;
  BGP_REG = PALETTE_NORMAL;
  OBP0_REG = OBP1_REG = PALETTE_SPRITES;
  SHOW_SPRITES;
  SPRITES_8x8;
  set_sprite_tile(SPRITE_MENU_INDICATOR, OFFSET_MENU_ARROW);
  set_sprite_prop(SPRITE_MENU_INDICATOR, S_FLIPX);

  set_sprite_tile(SPRITE_BORDER_H_1, OFFSET_BORDER_H);
  set_sprite_tile(SPRITE_BORDER_H_2, OFFSET_BORDER_H);
  set_sprite_tile(SPRITE_BORDER_H_3, OFFSET_BORDER_H);
  set_sprite_tile(SPRITE_BORDER_H_4, OFFSET_BORDER_H);
  set_sprite_tile(SPRITE_BORDER_H_5, OFFSET_BORDER_H);
  set_sprite_tile(SPRITE_BORDER_H_6, OFFSET_BORDER_H);
  set_sprite_tile(SPRITE_BORDER_H_7, OFFSET_BORDER_H);
  set_sprite_tile(SPRITE_BORDER_H_8, OFFSET_BORDER_H);

  set_sprite_tile(SPRITE_BORDER_V_1, OFFSET_BORDER_V);
  set_sprite_tile(SPRITE_BORDER_V_2, OFFSET_BORDER_V);
  set_sprite_tile(SPRITE_BORDER_V_3, OFFSET_BORDER_V);
  set_sprite_tile(SPRITE_BORDER_V_4, OFFSET_BORDER_V);
  set_sprite_tile(SPRITE_BORDER_V_5, OFFSET_BORDER_V);
  set_sprite_tile(SPRITE_BORDER_V_6, OFFSET_BORDER_V);
  set_sprite_tile(SPRITE_BORDER_V_7, OFFSET_BORDER_V);
  set_sprite_tile(SPRITE_BORDER_V_8, OFFSET_BORDER_V);

  move_sprite(SPRITE_BORDER_H_1, 24, 25);
  move_sprite(SPRITE_BORDER_H_2, 32, 25);
  move_sprite(SPRITE_BORDER_H_3, 136, 25);
  move_sprite(SPRITE_BORDER_H_4, 144, 25);
  move_sprite(SPRITE_BORDER_H_5, 24, 136);
  move_sprite(SPRITE_BORDER_H_6, 32, 136);
  move_sprite(SPRITE_BORDER_H_7, 136, 136);
  move_sprite(SPRITE_BORDER_H_8, 144, 136);

  move_sprite(SPRITE_BORDER_V_1, 20, 32);
  move_sprite(SPRITE_BORDER_V_2, 20, 40);
  move_sprite(SPRITE_BORDER_V_3, 147, 32);
  move_sprite(SPRITE_BORDER_V_4, 147, 40);
  move_sprite(SPRITE_BORDER_V_5, 20, 128);
  move_sprite(SPRITE_BORDER_V_6, 20, 136);
  move_sprite(SPRITE_BORDER_V_7, 147, 128);
  move_sprite(SPRITE_BORDER_V_8, 147, 136);
}

inline void init_sound() {
  // This enables sound, registers must be in this specific order!
  NR52_REG = 0x80;
  NR50_REG = 0x77;
  NR51_REG = 0xFF;

  const uint8_t sinewave[16] = { 0x89, 0xbc, 0xde, 0xff, 0xff, 0xfe, 0xdb, 0xa8, 0x75, 0x42, 0x10, 0x00, 0x00, 0x12, 0x34, 0x67 };
//  const uint8_t sinewavex2[16] = { 0x8b, 0xdf, 0xfe, 0xc9, 0x63, 0x10, 0x02, 0x47, 0xbd, 0xff, 0xec, 0x96, 0x31, 0x00, 0x24, 0x7b };
//  const uint8_t randwave[16] = { 0x13, 0x08, 0xd2, 0x53, 0xa1, 0xa0, 0x4f, 0x4c, 0x99, 0xbc, 0xe8, 0x7f, 0x62, 0xe7, 0x5b, 0xd6 };
//  const uint8_t sawtoothwave[16] = { 0x01, 0x23, 0x45, 0x67, 0x89, 0xab, 0xcd, 0xef, 0x01, 0x23, 0x45, 0x67, 0x89, 0xab, 0xcd, 0xef };
//  const uint8_t sawtoothwave2[16] = { 0x02, 0x46, 0x8a, 0xce, 0x02, 0x46, 0x8a, 0xce, 0x02, 0x46, 0x8a, 0xce, 0x02, 0x46, 0x8a, 0xce, };
//  const uint8_t single[16] = { 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

  for (uint8_t x = 0; x < 16; x++) {
    _AUD3WAVERAM[x] = sinewave[x];
  }
}
inline void beep() {
  NR21_REG=0x80;
  NR22_REG=0xA2;
  NR23_REG=0x60;
  NR24_REG=0x87;
}

inline void boop() {
  NR21_REG=0x80;
  NR22_REG=0xA2;
  NR23_REG=0xD7;
  NR24_REG=0x86;
}

inline void clonk() {
  NR41_REG=0x01;
  NR42_REG=0xC1;
  NR43_REG=0x70;
  NR44_REG=0xC0;
}

inline void pause(unsigned char frames) {
  for (unsigned char i = 0; i < frames; i++) {
    wait_vbl_done();
  }
}

unsigned char digits_map[10];

//void showDigit(unsigned char digit, unsigned char numChars, unsigned char xposition, unsigned char ypositoion) {
//  BCD bcd = MAKE_BCD(0);
//  uint2bcd(digit, &bcd);
//  bcd2text(&bcd, OFFSET_FONT, digits_map);
//
//  if (numChars == 3) {
//    unsigned char threeDigits[] = {
//      digits_map[5],
//      digits_map[6],
//      digits_map[7],
//    };
//
//    set_bkg_tiles(xposition, ypositoion, 3, 1, threeDigits);
//  } else if (numChars == 2) {
//    unsigned char twoDigits[] = {
//      digits_map[6],
//      digits_map[7],
//    };
//
//    set_bkg_tiles(xposition, ypositoion, 2, 1, twoDigits);
//  }
//
//}

void waitPush(unsigned char what) {
  // Wait until A has been pressed
  while (what != joypad()) {
    wait_vbl_done();
  }
}

void waitRelease() {
  // Wait until A has been released
  while (joypad() != 0) {
    wait_vbl_done();
  }
}

