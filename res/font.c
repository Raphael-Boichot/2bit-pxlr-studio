#pragma bank 1

const unsigned char font[1456] = {
//  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//  0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00,
//  0x14, 0x14, 0x14, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//  0x00, 0x00, 0x14, 0x14, 0x3E, 0x3E, 0x14, 0x14, 0x3E, 0x3E, 0x14, 0x14, 0x00, 0x00, 0x00, 0x00,
//  0x08, 0x08, 0x1C, 0x1C, 0x20, 0x20, 0x1C, 0x1C, 0x02, 0x02, 0x1C, 0x1C, 0x08, 0x08, 0x00, 0x00,
//  0x32, 0x32, 0x32, 0x32, 0x04, 0x04, 0x08, 0x08, 0x10, 0x10, 0x26, 0x26, 0x26, 0x26, 0x00, 0x00,
//  0x18, 0x18, 0x24, 0x24, 0x28, 0x28, 0x19, 0x19, 0x26, 0x26, 0x24, 0x24, 0x1A, 0x1A, 0x00, 0x00,
//  0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//  0x08, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0x08, 0x00, 0x00,
//  0x08, 0x08, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x08, 0x08, 0x00, 0x00,
//  0x00, 0x00, 0x2A, 0x2A, 0x1C, 0x1C, 0x3E, 0x3E, 0x1C, 0x1C, 0x2A, 0x2A, 0x00, 0x00, 0x00, 0x00,
//  0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x3E, 0x3E, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00,
//  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00,
//  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00,
//  0x02, 0x02, 0x02, 0x02, 0x04, 0x04, 0x08, 0x08, 0x10, 0x10, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00,
//  0x1C, 0x1C, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x1C, 0x1C, 0x00, 0x00,
//  0x08, 0x08, 0x18, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x1C, 0x1C, 0x00, 0x00,
//  0x1C, 0x1C, 0x22, 0x22, 0x02, 0x02, 0x04, 0x04, 0x08, 0x08, 0x10, 0x10, 0x3E, 0x3E, 0x00, 0x00,
//  0x1C, 0x1C, 0x22, 0x22, 0x02, 0x02, 0x0C, 0x0C, 0x02, 0x02, 0x22, 0x22, 0x1C, 0x1C, 0x00, 0x00,
//  0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x3E, 0x3E, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00,
//  0x3E, 0x3E, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x3C, 0x02, 0x02, 0x22, 0x22, 0x1C, 0x1C, 0x00, 0x00,
//  0x1C, 0x1C, 0x22, 0x22, 0x20, 0x20, 0x3C, 0x3C, 0x22, 0x22, 0x22, 0x22, 0x1C, 0x1C, 0x00, 0x00,
//  0x3E, 0x3E, 0x02, 0x02, 0x04, 0x04, 0x08, 0x08, 0x08, 0x08, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00,
//  0x1C, 0x1C, 0x22, 0x22, 0x22, 0x22, 0x1C, 0x1C, 0x22, 0x22, 0x22, 0x22, 0x1C, 0x1C, 0x00, 0x00,
//  0x1C, 0x1C, 0x22, 0x22, 0x22, 0x22, 0x1E, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00,
//  0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//  0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x08, 0x08, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00,
//  0x04, 0x04, 0x08, 0x08, 0x10, 0x10, 0x20, 0x20, 0x10, 0x10, 0x08, 0x08, 0x04, 0x04, 0x00, 0x00,
//  0x00, 0x00, 0x00, 0x00, 0x3E, 0x3E, 0x00, 0x00, 0x3E, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//  0x10, 0x10, 0x08, 0x08, 0x04, 0x04, 0x02, 0x02, 0x04, 0x04, 0x08, 0x08, 0x10, 0x10, 0x00, 0x00,
//  0x1C, 0x1C, 0x22, 0x22, 0x02, 0x02, 0x04, 0x04, 0x08, 0x08, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00,
//  0x3E, 0x3E, 0x41, 0x41, 0x4D, 0x4D, 0x55, 0x55, 0x5F, 0x5F, 0x40, 0x40, 0x3F, 0x3F, 0x00, 0x00,
//  0x08, 0x08, 0x14, 0x14, 0x22, 0x22, 0x22, 0x22, 0x3E, 0x3E, 0x22, 0x22, 0x22, 0x22, 0x00, 0x00,
//  0x3C, 0x3C, 0x22, 0x22, 0x22, 0x22, 0x3C, 0x3C, 0x22, 0x22, 0x22, 0x22, 0x3C, 0x3C, 0x00, 0x00,
//  0x1C, 0x1C, 0x22, 0x22, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x22, 0x22, 0x1C, 0x1C, 0x00, 0x00,
//  0x3C, 0x3C, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x3C, 0x3C, 0x00, 0x00,
//  0x3E, 0x3E, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x3C, 0x20, 0x20, 0x20, 0x20, 0x3E, 0x3E, 0x00, 0x00,
//  0x3E, 0x3E, 0x20, 0x20, 0x20, 0x20, 0x38, 0x38, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00,
//  0x1C, 0x1C, 0x22, 0x22, 0x20, 0x20, 0x2E, 0x2E, 0x22, 0x22, 0x22, 0x22, 0x1C, 0x1C, 0x00, 0x00,
//  0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x3E, 0x3E, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x00, 0x00,
//  0x3E, 0x3E, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x3E, 0x3E, 0x00, 0x00,
//  0x3E, 0x3E, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x24, 0x24, 0x24, 0x24, 0x18, 0x18, 0x00, 0x00,
//  0x22, 0x22, 0x24, 0x24, 0x28, 0x28, 0x30, 0x30, 0x28, 0x28, 0x24, 0x24, 0x22, 0x22, 0x00, 0x00,
//  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3E, 0x3E, 0x00, 0x00,
//  0x22, 0x22, 0x36, 0x36, 0x2A, 0x2A, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x00, 0x00,
//  0x22, 0x22, 0x32, 0x32, 0x32, 0x32, 0x2A, 0x2A, 0x2A, 0x2A, 0x26, 0x26, 0x26, 0x26, 0x00, 0x00,
//  0x1C, 0x1C, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x1C, 0x1C, 0x00, 0x00,
//  0x3C, 0x3C, 0x22, 0x22, 0x22, 0x22, 0x3C, 0x3C, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00,
//  0x1C, 0x1C, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x2A, 0x2A, 0x24, 0x24, 0x1A, 0x1A, 0x00, 0x00,
//  0x3C, 0x3C, 0x22, 0x22, 0x22, 0x22, 0x3C, 0x3C, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x00, 0x00,
//  0x1C, 0x1C, 0x22, 0x22, 0x20, 0x20, 0x1C, 0x1C, 0x02, 0x02, 0x22, 0x22, 0x1C, 0x1C, 0x00, 0x00,
//  0x3E, 0x3E, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00,
//  0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x1C, 0x1C, 0x00, 0x00,
//  0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x14, 0x14, 0x14, 0x14, 0x08, 0x08, 0x00, 0x00,
//  0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x2A, 0x2A, 0x36, 0x36, 0x22, 0x22, 0x00, 0x00,
//  0x22, 0x22, 0x22, 0x22, 0x14, 0x14, 0x08, 0x08, 0x14, 0x14, 0x22, 0x22, 0x22, 0x22, 0x00, 0x00,
//  0x22, 0x22, 0x22, 0x22, 0x14, 0x14, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00,
//  0x3E, 0x3E, 0x02, 0x02, 0x04, 0x04, 0x08, 0x08, 0x10, 0x10, 0x20, 0x20, 0x3E, 0x3E, 0x00, 0x00,
//  0x18, 0x18, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x18, 0x18, 0x00, 0x00,
//  0x20, 0x20, 0x20, 0x20, 0x10, 0x10, 0x08, 0x08, 0x04, 0x04, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00,
//  0x18, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x18, 0x18, 0x00, 0x00,
//  0x08, 0x08, 0x14, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x3E, 0x00, 0x00,
//  0x10, 0x10, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x24, 0x24, 0x24, 0x24, 0x1A, 0x1A, 0x00, 0x00,
//  0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1C, 0x1C, 0x12, 0x12, 0x12, 0x12, 0x1C, 0x1C, 0x00, 0x00,
//  0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x12, 0x12, 0x10, 0x10, 0x12, 0x12, 0x0C, 0x0C, 0x00, 0x00,
//  0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x0E, 0x0E, 0x12, 0x12, 0x12, 0x12, 0x0E, 0x0E, 0x00, 0x00,
//  0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x12, 0x12, 0x1E, 0x1E, 0x10, 0x10, 0x0E, 0x0E, 0x00, 0x00,
//  0x0C, 0x0C, 0x12, 0x12, 0x10, 0x10, 0x18, 0x18, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00,
//  0x00, 0x00, 0x00, 0x00, 0x0E, 0x0E, 0x12, 0x12, 0x12, 0x12, 0x0E, 0x0E, 0x02, 0x02, 0x1C, 0x1C,
//  0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1C, 0x1C, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x00, 0x00,
//  0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00,
//  0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x24, 0x24, 0x18, 0x18,
//  0x10, 0x10, 0x10, 0x10, 0x12, 0x12, 0x14, 0x14, 0x18, 0x18, 0x14, 0x14, 0x12, 0x12, 0x00, 0x00,
//  0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00,
//  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x14, 0x2A, 0x2A, 0x2A, 0x2A, 0x22, 0x22, 0x00, 0x00,
//  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x00, 0x00,
//  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x12, 0x12, 0x12, 0x12, 0x0C, 0x0C, 0x00, 0x00,
//  0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x12, 0x12, 0x12, 0x12, 0x1C, 0x1C, 0x10, 0x10, 0x10, 0x10,
//  0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x12, 0x12, 0x12, 0x12, 0x0E, 0x0E, 0x02, 0x02, 0x02, 0x02,
//  0x00, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x12, 0x12, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00,
//  0x00, 0x00, 0x00, 0x00, 0x0E, 0x0E, 0x10, 0x10, 0x0C, 0x0C, 0x02, 0x02, 0x1C, 0x1C, 0x00, 0x00,
//  0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x1C, 0x1C, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00,
//  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x0E, 0x0E, 0x00, 0x00,
//  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x22, 0x22, 0x22, 0x14, 0x14, 0x08, 0x08, 0x00, 0x00,
//  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x22, 0x22, 0x22, 0x2A, 0x2A, 0x14, 0x14, 0x00, 0x00,
//  0x00, 0x00, 0x00, 0x00, 0x22, 0x22, 0x14, 0x14, 0x08, 0x08, 0x14, 0x14, 0x22, 0x22, 0x00, 0x00,
//  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x12, 0x12, 0x12, 0x0E, 0x0E, 0x02, 0x02, 0x1C, 0x1C,
//  0x00, 0x00, 0x00, 0x00, 0x3E, 0x3E, 0x04, 0x04, 0x08, 0x08, 0x10, 0x10, 0x3E, 0x3E, 0x00, 0x00,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xff, 0xff, 0xf7, 0xf7, 0xff, 0xff,
  0xeb, 0xeb, 0xeb, 0xeb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xeb, 0xeb, 0xc1, 0xc1, 0xeb, 0xeb, 0xc1, 0xc1, 0xeb, 0xeb, 0xff, 0xff, 0xff, 0xff,
  0xf7, 0xf7, 0xe3, 0xe3, 0xdf, 0xdf, 0xe3, 0xe3, 0xfd, 0xfd, 0xe3, 0xe3, 0xf7, 0xf7, 0xff, 0xff,
  0xcd, 0xcd, 0xcd, 0xcd, 0xfb, 0xfb, 0xf7, 0xf7, 0xef, 0xef, 0xd9, 0xd9, 0xd9, 0xd9, 0xff, 0xff,
  0xe7, 0xe7, 0xdb, 0xdb, 0xd7, 0xd7, 0xe6, 0xe6, 0xd9, 0xd9, 0xdb, 0xdb, 0xe5, 0xe5, 0xff, 0xff,
  0xf7, 0xf7, 0xf7, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xf7, 0xf7, 0xef, 0xef, 0xef, 0xef, 0xef, 0xef, 0xef, 0xef, 0xef, 0xef, 0xf7, 0xf7, 0xff, 0xff,
  0xf7, 0xf7, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xf7, 0xf7, 0xff, 0xff,
  0xff, 0xff, 0xd5, 0xd5, 0xe3, 0xe3, 0xc1, 0xc1, 0xe3, 0xe3, 0xd5, 0xd5, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xf7, 0xf7, 0xf7, 0xf7, 0xc1, 0xc1, 0xf7, 0xf7, 0xf7, 0xf7, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xf7, 0xef, 0xef, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 0xc1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xf7, 0xff, 0xff, 0xff, 0xff,
  0xfd, 0xfd, 0xfd, 0xfd, 0xfb, 0xfb, 0xf7, 0xf7, 0xef, 0xef, 0xdf, 0xdf, 0xdf, 0xdf, 0xff, 0xff,
  0xe3, 0xe3, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xe3, 0xe3, 0xff, 0xff,
  0xf7, 0xf7, 0xe7, 0xe7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xe3, 0xe3, 0xff, 0xff,
  0xe3, 0xe3, 0xdd, 0xdd, 0xfd, 0xfd, 0xfb, 0xfb, 0xf7, 0xf7, 0xef, 0xef, 0xc1, 0xc1, 0xff, 0xff,
  0xe3, 0xe3, 0xdd, 0xdd, 0xfd, 0xfd, 0xf3, 0xf3, 0xfd, 0xfd, 0xdd, 0xdd, 0xe3, 0xe3, 0xff, 0xff,
  0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xc1, 0xc1, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xff, 0xff,
  0xc1, 0xc1, 0xdf, 0xdf, 0xdf, 0xdf, 0xc3, 0xc3, 0xfd, 0xfd, 0xdd, 0xdd, 0xe3, 0xe3, 0xff, 0xff,
  0xe3, 0xe3, 0xdd, 0xdd, 0xdf, 0xdf, 0xc3, 0xc3, 0xdd, 0xdd, 0xdd, 0xdd, 0xe3, 0xe3, 0xff, 0xff,
  0xc1, 0xc1, 0xfd, 0xfd, 0xfb, 0xfb, 0xf7, 0xf7, 0xf7, 0xf7, 0xef, 0xef, 0xef, 0xef, 0xff, 0xff,
  0xe3, 0xe3, 0xdd, 0xdd, 0xdd, 0xdd, 0xe3, 0xe3, 0xdd, 0xdd, 0xdd, 0xdd, 0xe3, 0xe3, 0xff, 0xff,
  0xe3, 0xe3, 0xdd, 0xdd, 0xdd, 0xdd, 0xe1, 0xe1, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xf7, 0xf7, 0xff, 0xff, 0xf7, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xf7, 0xf7, 0xff, 0xff, 0xf7, 0xf7, 0xef, 0xef, 0xff, 0xff, 0xff, 0xff,
  0xfb, 0xfb, 0xf7, 0xf7, 0xef, 0xef, 0xdf, 0xdf, 0xef, 0xef, 0xf7, 0xf7, 0xfb, 0xfb, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xc1, 0xc1, 0xff, 0xff, 0xc1, 0xc1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xef, 0xef, 0xf7, 0xf7, 0xfb, 0xfb, 0xfd, 0xfd, 0xfb, 0xfb, 0xf7, 0xf7, 0xef, 0xef, 0xff, 0xff,
  0xe3, 0xe3, 0xdd, 0xdd, 0xfd, 0xfd, 0xfb, 0xfb, 0xf7, 0xf7, 0xff, 0xff, 0xf7, 0xf7, 0xff, 0xff,
  0xc1, 0xc1, 0xbe, 0xbe, 0xb2, 0xb2, 0xaa, 0xaa, 0xa0, 0xa0, 0xbf, 0xbf, 0xc0, 0xc0, 0xff, 0xff,
  0xf7, 0xf7, 0xeb, 0xeb, 0xdd, 0xdd, 0xdd, 0xdd, 0xc1, 0xc1, 0xdd, 0xdd, 0xdd, 0xdd, 0xff, 0xff,
  0xc3, 0xc3, 0xdd, 0xdd, 0xdd, 0xdd, 0xc3, 0xc3, 0xdd, 0xdd, 0xdd, 0xdd, 0xc3, 0xc3, 0xff, 0xff,
  0xe3, 0xe3, 0xdd, 0xdd, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdd, 0xdd, 0xe3, 0xe3, 0xff, 0xff,
  0xc3, 0xc3, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xc3, 0xc3, 0xff, 0xff,
  0xc1, 0xc1, 0xdf, 0xdf, 0xdf, 0xdf, 0xc3, 0xc3, 0xdf, 0xdf, 0xdf, 0xdf, 0xc1, 0xc1, 0xff, 0xff,
  0xc1, 0xc1, 0xdf, 0xdf, 0xdf, 0xdf, 0xc7, 0xc7, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xff, 0xff,
  0xe3, 0xe3, 0xdd, 0xdd, 0xdf, 0xdf, 0xd1, 0xd1, 0xdd, 0xdd, 0xdd, 0xdd, 0xe3, 0xe3, 0xff, 0xff,
  0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xc1, 0xc1, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xff, 0xff,
  0xc1, 0xc1, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xc1, 0xc1, 0xff, 0xff,
  0xc1, 0xc1, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xdb, 0xdb, 0xdb, 0xdb, 0xe7, 0xe7, 0xff, 0xff,
  0xdd, 0xdd, 0xdb, 0xdb, 0xd7, 0xd7, 0xcf, 0xcf, 0xd7, 0xd7, 0xdb, 0xdb, 0xdd, 0xdd, 0xff, 0xff,
  0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xc1, 0xc1, 0xff, 0xff,
  0xdd, 0xdd, 0xc9, 0xc9, 0xd5, 0xd5, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xff, 0xff,
  0xdd, 0xdd, 0xcd, 0xcd, 0xcd, 0xcd, 0xd5, 0xd5, 0xd5, 0xd5, 0xd9, 0xd9, 0xd9, 0xd9, 0xff, 0xff,
  0xe3, 0xe3, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xe3, 0xe3, 0xff, 0xff,
  0xc3, 0xc3, 0xdd, 0xdd, 0xdd, 0xdd, 0xc3, 0xc3, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xff, 0xff,
  0xe3, 0xe3, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xd5, 0xd5, 0xdb, 0xdb, 0xe5, 0xe5, 0xff, 0xff,
  0xc3, 0xc3, 0xdd, 0xdd, 0xdd, 0xdd, 0xc3, 0xc3, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xff, 0xff,
  0xe3, 0xe3, 0xdd, 0xdd, 0xdf, 0xdf, 0xe3, 0xe3, 0xfd, 0xfd, 0xdd, 0xdd, 0xe3, 0xe3, 0xff, 0xff,
  0xc1, 0xc1, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xff, 0xff,
  0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xe3, 0xe3, 0xff, 0xff,
  0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xeb, 0xeb, 0xeb, 0xeb, 0xf7, 0xf7, 0xff, 0xff,
  0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xd5, 0xd5, 0xc9, 0xc9, 0xdd, 0xdd, 0xff, 0xff,
  0xdd, 0xdd, 0xdd, 0xdd, 0xeb, 0xeb, 0xf7, 0xf7, 0xeb, 0xeb, 0xdd, 0xdd, 0xdd, 0xdd, 0xff, 0xff,
  0xdd, 0xdd, 0xdd, 0xdd, 0xeb, 0xeb, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xff, 0xff,
  0xc1, 0xc1, 0xfd, 0xfd, 0xfb, 0xfb, 0xf7, 0xf7, 0xef, 0xef, 0xdf, 0xdf, 0xc1, 0xc1, 0xff, 0xff,
  0xe7, 0xe7, 0xef, 0xef, 0xef, 0xef, 0xef, 0xef, 0xef, 0xef, 0xef, 0xef, 0xe7, 0xe7, 0xff, 0xff,
  0xdf, 0xdf, 0xdf, 0xdf, 0xef, 0xef, 0xf7, 0xf7, 0xfb, 0xfb, 0xfd, 0xfd, 0xfd, 0xfd, 0xff, 0xff,
  0xe7, 0xe7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xe7, 0xe7, 0xff, 0xff,
  0xf7, 0xf7, 0xeb, 0xeb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 0xc1, 0xff, 0xff,
  0xef, 0xef, 0xf7, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xe7, 0xdb, 0xdb, 0xdb, 0xdb, 0xe5, 0xe5, 0xff, 0xff,
  0xef, 0xef, 0xef, 0xef, 0xef, 0xef, 0xe3, 0xe3, 0xed, 0xed, 0xed, 0xed, 0xe3, 0xe3, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xf3, 0xf3, 0xed, 0xed, 0xef, 0xef, 0xed, 0xed, 0xf3, 0xf3, 0xff, 0xff,
  0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xf1, 0xf1, 0xed, 0xed, 0xed, 0xed, 0xf1, 0xf1, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xf3, 0xf3, 0xed, 0xed, 0xe1, 0xe1, 0xef, 0xef, 0xf1, 0xf1, 0xff, 0xff,
  0xf3, 0xf3, 0xed, 0xed, 0xef, 0xef, 0xe7, 0xe7, 0xef, 0xef, 0xef, 0xef, 0xef, 0xef, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xf1, 0xf1, 0xed, 0xed, 0xed, 0xed, 0xf1, 0xf1, 0xfd, 0xfd, 0xe3, 0xe3,
  0xef, 0xef, 0xef, 0xef, 0xef, 0xef, 0xe3, 0xe3, 0xed, 0xed, 0xed, 0xed, 0xed, 0xed, 0xff, 0xff,
  0xff, 0xff, 0xfb, 0xfb, 0xff, 0xff, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xff, 0xff,
  0xff, 0xff, 0xfb, 0xfb, 0xff, 0xff, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xdb, 0xdb, 0xe7, 0xe7,
  0xef, 0xef, 0xef, 0xef, 0xed, 0xed, 0xeb, 0xeb, 0xe7, 0xe7, 0xeb, 0xeb, 0xed, 0xed, 0xff, 0xff,
  0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xeb, 0xeb, 0xd5, 0xd5, 0xd5, 0xd5, 0xdd, 0xdd, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xe3, 0xed, 0xed, 0xed, 0xed, 0xed, 0xed, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xf3, 0xed, 0xed, 0xed, 0xed, 0xf3, 0xf3, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xf3, 0xf3, 0xed, 0xed, 0xed, 0xed, 0xe3, 0xe3, 0xef, 0xef, 0xef, 0xef,
  0xff, 0xff, 0xff, 0xff, 0xf3, 0xf3, 0xed, 0xed, 0xed, 0xed, 0xf1, 0xf1, 0xfd, 0xfd, 0xfd, 0xfd,
  0xff, 0xff, 0xff, 0xff, 0xe3, 0xe3, 0xed, 0xed, 0xef, 0xef, 0xef, 0xef, 0xef, 0xef, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xf1, 0xf1, 0xef, 0xef, 0xf3, 0xf3, 0xfd, 0xfd, 0xe3, 0xe3, 0xff, 0xff,
  0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xe3, 0xe3, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xed, 0xed, 0xed, 0xed, 0xed, 0xed, 0xf1, 0xf1, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdd, 0xdd, 0xdd, 0xdd, 0xeb, 0xeb, 0xf7, 0xf7, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdd, 0xdd, 0xdd, 0xdd, 0xd5, 0xd5, 0xeb, 0xeb, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xdd, 0xdd, 0xeb, 0xeb, 0xf7, 0xf7, 0xeb, 0xeb, 0xdd, 0xdd, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xed, 0xed, 0xed, 0xed, 0xf1, 0xf1, 0xfd, 0xfd, 0xe3, 0xe3,
  0xff, 0xff, 0xff, 0xff, 0xc1, 0xc1, 0xfb, 0xfb, 0xf7, 0xf7, 0xef, 0xef, 0xc1, 0xc1, 0xff, 0xff,
};
