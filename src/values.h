
#define A000_CAPTURE_POSITIVE 0b00000010
#define A000_START_CAPTURE    0b00000001

#define A001_GAIN_140   0b00000000 // 14.0
#define A001_GAIN_155   0b00000001 // 15.5
#define A001_GAIN_170   0b00000010 // 17.0
#define A001_GAIN_185   0b00000010 // 18.5
#define A001_GAIN_200   0b00000100 // 20.0
#define A001_GAIN_200_D 0b00010000 // 20.0 (d)
#define A001_GAIN_215   0b00000101 // 21.5
#define A001_GAIN_215_D 0b00010001 // 21.5 (d)
#define A001_GAIN_230   0b00000110 // 23.0
#define A001_GAIN_230_D 0b00010010 // 23.0 (d)
#define A001_GAIN_245   0b00010010 // 24.5
#define A001_GAIN_260   0b00010100 // 26.0
#define A001_GAIN_275   0b00010101 // 27.5
#define A001_GAIN_290   0b00010110 // 29.0

#define A001_EDGE_OP_MODE_NONE       0b00000000
#define A001_EDGE_OP_MODE_HORIZONTAL 0b00100000
#define A001_EDGE_OP_MODE_VERTICAL   0b01000000
#define A001_EDGE_OP_MODE_2D         0b01100000

#define A001_EDGE_EXCLUSIVE_VERT_ON      0b10000000
#define A001_EDGE_EXCLUSIVE_VERT_OFF     0b00000000

#define A004_EDGE_RATIO_050   0b00000000
#define A004_EDGE_RATIO_075   0b00010000
#define A004_EDGE_RATIO_100   0b00100000
#define A004_EDGE_RATIO_125   0b00110000
#define A004_EDGE_RATIO_200   0b01000000
#define A004_EDGE_RATIO_300   0b01010000
#define A004_EDGE_RATIO_400   0b01100000
#define A004_EDGE_RATIO_500   0b01110000

#define A004_INVERT_OUTPUT_ON    0b00001000
#define A004_INVERT_OUTPUT_OFF   0b00000000

#define A004_VOLTAGE_REF_00   0b00000000
#define A004_VOLTAGE_REF_05   0b00000001
#define A004_VOLTAGE_REF_10   0b00000010
#define A004_VOLTAGE_REF_15   0b00000011
#define A004_VOLTAGE_REF_20   0b00000100
#define A004_VOLTAGE_REF_25   0b00000101
#define A004_VOLTAGE_REF_30   0b00000110
#define A004_VOLTAGE_REF_35   0b00000111

#define A005_ZERO_DISABLED    0b00000000
#define A005_ZERO_POSITIVE    0b10000000
#define A005_ZERO_NEGATIVE    0b01000000

#define A005_VOLTAGE_OUT_NEG_992 0b00011111 // -0.992mV
#define A005_VOLTAGE_OUT_NEG_960 0b00011110 // -0.960mV
#define A005_VOLTAGE_OUT_NEG_928 0b00011101 // -0.928mV
#define A005_VOLTAGE_OUT_NEG_896 0b00011100 // -0.896mV
#define A005_VOLTAGE_OUT_NEG_864 0b00011011 // -0.864mV
#define A005_VOLTAGE_OUT_NEG_832 0b00011010 // -0.832mV
#define A005_VOLTAGE_OUT_NEG_800 0b00011001 // -0.800mV
#define A005_VOLTAGE_OUT_NEG_768 0b00011000 // -0.768mV
#define A005_VOLTAGE_OUT_NEG_736 0b00010111 // -0.736mV
#define A005_VOLTAGE_OUT_NEG_704 0b00010110 // -0.704mV
#define A005_VOLTAGE_OUT_NEG_672 0b00010101 // -0.672mV
#define A005_VOLTAGE_OUT_NEG_640 0b00010100 // -0.640mV
#define A005_VOLTAGE_OUT_NEG_608 0b00010011 // -0.608mV
#define A005_VOLTAGE_OUT_NEG_576 0b00010010 // -0.576mV
#define A005_VOLTAGE_OUT_NEG_544 0b00010001 // -0.544mV
#define A005_VOLTAGE_OUT_NEG_512 0b00010000 // -0.512mV
#define A005_VOLTAGE_OUT_NEG_480 0b00001111 // -0.480mV
#define A005_VOLTAGE_OUT_NEG_448 0b00001110 // -0.448mV
#define A005_VOLTAGE_OUT_NEG_416 0b00001101 // -0.416mV
#define A005_VOLTAGE_OUT_NEG_384 0b00001100 // -0.384mV
#define A005_VOLTAGE_OUT_NEG_352 0b00001011 // -0.352mV
#define A005_VOLTAGE_OUT_NEG_320 0b00001010 // -0.320mV
#define A005_VOLTAGE_OUT_NEG_288 0b00001001 // -0.288mV
#define A005_VOLTAGE_OUT_NEG_256 0b00001000 // -0.256mV
#define A005_VOLTAGE_OUT_NEG_224 0b00000111 // -0.224mV
#define A005_VOLTAGE_OUT_NEG_192 0b00000110 // -0.192mV
#define A005_VOLTAGE_OUT_NEG_160 0b00000101 // -0.160mV
#define A005_VOLTAGE_OUT_NEG_128 0b00000100 // -0.128mV
#define A005_VOLTAGE_OUT_NEG_096 0b00000011 // -0.096mV
#define A005_VOLTAGE_OUT_NEG_064 0b00000010 // -0.064mV
#define A005_VOLTAGE_OUT_NEG_032 0b00000001 // -0.032mV
#define A005_VOLTAGE_OUT_NEG_000 0b00000000 // -0.000mV
#define A005_VOLTAGE_OUT_POS_000 0b00100000 //  0.000mV
#define A005_VOLTAGE_OUT_POS_032 0b00100001 //  0.032mV
#define A005_VOLTAGE_OUT_POS_064 0b00100010 //  0.064mV
#define A005_VOLTAGE_OUT_POS_096 0b00100011 //  0.096mV
#define A005_VOLTAGE_OUT_POS_128 0b00100100 //  0.128mV
#define A005_VOLTAGE_OUT_POS_160 0b00100101 //  0.160mV
#define A005_VOLTAGE_OUT_POS_192 0b00100110 //  0.192mV
#define A005_VOLTAGE_OUT_POS_224 0b00100111 //  0.224mV
#define A005_VOLTAGE_OUT_POS_256 0b00101000 //  0.256mV
#define A005_VOLTAGE_OUT_POS_288 0b00101001 //  0.288mV
#define A005_VOLTAGE_OUT_POS_320 0b00101010 //  0.320mV
#define A005_VOLTAGE_OUT_POS_352 0b00101011 //  0.352mV
#define A005_VOLTAGE_OUT_POS_384 0b00101100 //  0.384mV
#define A005_VOLTAGE_OUT_POS_416 0b00101101 //  0.416mV
#define A005_VOLTAGE_OUT_POS_448 0b00101110 //  0.448mV
#define A005_VOLTAGE_OUT_POS_480 0b00101111 //  0.480mV
#define A005_VOLTAGE_OUT_POS_512 0b00110000 //  0.512mV
#define A005_VOLTAGE_OUT_POS_544 0b00110001 //  0.544mV
#define A005_VOLTAGE_OUT_POS_576 0b00110010 //  0.576mV
#define A005_VOLTAGE_OUT_POS_608 0b00110011 //  0.608mV
#define A005_VOLTAGE_OUT_POS_640 0b00110100 //  0.640mV
#define A005_VOLTAGE_OUT_POS_672 0b00110101 //  0.672mV
#define A005_VOLTAGE_OUT_POS_704 0b00110110 //  0.704mV
#define A005_VOLTAGE_OUT_POS_736 0b00110111 //  0.736mV
#define A005_VOLTAGE_OUT_POS_768 0b00111000 //  0.768mV
#define A005_VOLTAGE_OUT_POS_800 0b00111001 //  0.800mV
#define A005_VOLTAGE_OUT_POS_832 0b00111010 //  0.832mV
#define A005_VOLTAGE_OUT_POS_864 0b00111011 //  0.864mV
#define A005_VOLTAGE_OUT_POS_896 0b00111100 //  0.896mV
#define A005_VOLTAGE_OUT_POS_928 0b00111101 //  0.928mV
#define A005_VOLTAGE_OUT_POS_960 0b00111110 //  0.960mV
#define A005_VOLTAGE_OUT_POS_992 0b00111111 //  0.992mV

#define NUM_GAIN_LEVELS 11
#define NUM_EXPOSURE_TIMES 9
#define NUM_DITHERS 16
#define NUM_DITHER_HIGHLOWS 4
#define NUM_EDGE_MODES 8
#define NUM_VOLTAGE_REFS 8
#define NUM_ZERO_POINTS 3
#define NUM_VOLTAGE_OUTS 64
#define NUM_EDGE_OP_MODES 4
#define NUM_EDGE_EXCLUSIVE 2
#define NUM_INVERT_OUTPUTS 2

#define DITHER_SET_HIGH 0
#define DITHER_SET_LOW 1
#define DITHER_SET_NO_HIGH 2
#define DITHER_SET_NO_LOW 3

// 0x0030 - Objects under direct sunlight.
// 0x0300 - Objects not under direct sunlight.
// 0x0800 - Room during the day with good light.
// 0x2C00 - Room at night with light.
// 0x5000 - Room at night with no light, only a reading lamp.
// 0xF000 - Room at night with only a TV on in the background.

unsigned const int exposureTimesValues[NUM_EXPOSURE_TIMES] = { 0x0030, 0x0080, 0x0300, 0x0800, 0x1100, 0x2C00, 0x5000, 0xF000, 0xFF00, };

const MenuOption exposureTimes[NUM_EXPOSURE_TIMES] = {
  { 0, "+Sun", },
  { 1, " Sun", },
  { 2, "-Sun", },
  { 3, "+Day", },
  { 4, " Day", },
  { 5, "-Day", },
  { 6, "Nite", },
  { 7, "Lon1", },
  { 8, "Lon2", },
};

// Set 1 (High Light)
unsigned const char ditherHighLightValues[NUM_DITHERS][48] = {
    { 0x80, 0x8F, 0xD0, 0x8B, 0xBF, 0xE0, 0x82, 0x9B, 0xD4, 0x8E, 0xCB, 0xE4, 0x87, 0xAF, 0xDB, 0x83, 0x9F, 0xD5, 0x8A, 0xBB, 0xDF, 0x86, 0xAB, 0xD9, 0x81, 0x97, 0xD2, 0x8D, 0xC7, 0xE3, 0x80, 0x93, 0xD1, 0x8C, 0xC3, 0xE1, 0x89, 0xB7, 0xDD, 0x85, 0xA7, 0xD8, 0x88, 0xB3, 0xDC, 0x84, 0xA3, 0xD6, },
    { 0x82, 0x90, 0xC8, 0x8C, 0xBA, 0xDC, 0x84, 0x9A, 0xCD, 0x8F, 0xC4, 0xE1, 0x89, 0xAC, 0xD5, 0x85, 0x9E, 0xCE, 0x8B, 0xB6, 0xDA, 0x88, 0xA8, 0xD3, 0x83, 0x97, 0xCB, 0x8E, 0xC1, 0xDF, 0x82, 0x93, 0xC9, 0x8D, 0xBD, 0xDD, 0x8A, 0xB3, 0xD8, 0x87, 0xA5, 0xD2, 0x89, 0xAF, 0xD7, 0x86, 0xA1, 0xD0, },
    { 0x84, 0x90, 0xC0, 0x8D, 0xB4, 0xD8, 0x86, 0x99, 0xC6, 0x8F, 0xBD, 0xDE, 0x8A, 0xA8, 0xD0, 0x87, 0x9C, 0xC8, 0x8C, 0xB1, 0xD6, 0x89, 0xA5, 0xCE, 0x85, 0x96, 0xC4, 0x8E, 0xBA, 0xDC, 0x84, 0x93, 0xC2, 0x8D, 0xB7, 0xDA, 0x8B, 0xAE, 0xD4, 0x88, 0xA2, 0xCC, 0x8A, 0xAB, 0xD2, 0x87, 0x9F, 0xCA, },
    { 0x85, 0x91, 0xB8, 0x8E, 0xAE, 0xD3, 0x87, 0x98, 0xBE, 0x90, 0xB5, 0xDA, 0x8B, 0xA4, 0xCA, 0x88, 0x9A, 0xC1, 0x8D, 0xAB, 0xD1, 0x8A, 0xA2, 0xC8, 0x86, 0x95, 0xBC, 0x8F, 0xB3, 0xD8, 0x85, 0x93, 0xBA, 0x8E, 0xB0, 0xD6, 0x8C, 0xA9, 0xCF, 0x89, 0x9F, 0xC5, 0x8B, 0xA6, 0xCC, 0x88, 0x9D, 0xC3, },
    { 0x86, 0x91, 0xB1, 0x8E, 0xA9, 0xD0, 0x88, 0x97, 0xB8, 0x90, 0xAF, 0xD8, 0x8B, 0xA1, 0xC6, 0x88, 0x99, 0xBB, 0x8D, 0xA7, 0xCD, 0x8A, 0x9F, 0xC3, 0x87, 0x95, 0xB6, 0x8F, 0xAD, 0xD5, 0x86, 0x93, 0xB3, 0x8E, 0xAB, 0xD3, 0x8C, 0xA5, 0xCB, 0x8A, 0x9D, 0xC0, 0x8C, 0xA3, 0xC8, 0x89, 0x9B, 0xBE, },
    { 0x87, 0x92, 0xAA, 0x8F, 0xA4, 0xCC, 0x89, 0x96, 0xB2, 0x91, 0xA8, 0xD5, 0x8C, 0x9E, 0xC1, 0x89, 0x98, 0xB5, 0x8E, 0xA2, 0xC9, 0x8B, 0x9C, 0xBE, 0x88, 0x95, 0xAF, 0x90, 0xA7, 0xD2, 0x87, 0x93, 0xAC, 0x8F, 0xA5, 0xCF, 0x8D, 0xA1, 0xC6, 0x8B, 0x9B, 0xBB, 0x8D, 0x9F, 0xC3, 0x8A, 0x99, 0xB8, },
    { 0x88, 0x92, 0xA5, 0x8F, 0xA0, 0xC9, 0x89, 0x95, 0xAE, 0x91, 0xA3, 0xD2, 0x8D, 0x9B, 0xBD, 0x8A, 0x96, 0xB1, 0x8E, 0x9F, 0xC6, 0x8C, 0x9A, 0xBA, 0x89, 0x94, 0xAB, 0x90, 0xA2, 0xCF, 0x88, 0x93, 0xA8, 0x90, 0xA1, 0xCC, 0x8E, 0x9D, 0xC3, 0x8B, 0x99, 0xB7, 0x8D, 0x9C, 0xC0, 0x8B, 0x97, 0xB4, },
    { 0x89, 0x92, 0xA2, 0x8F, 0x9E, 0xC6, 0x8A, 0x95, 0xAB, 0x91, 0xA1, 0xCF, 0x8D, 0x9A, 0xBA, 0x8B, 0x96, 0xAE, 0x8F, 0x9D, 0xC3, 0x8C, 0x99, 0xB7, 0x8A, 0x94, 0xA8, 0x90, 0xA0, 0xCC, 0x89, 0x93, 0xA5, 0x90, 0x9F, 0xC9, 0x8E, 0x9C, 0xC0, 0x8C, 0x98, 0xB4, 0x8E, 0x9B, 0xBD, 0x8B, 0x97, 0xB1, },
    { 0x8A, 0x92, 0xA1, 0x90, 0x9D, 0xBE, 0x8B, 0x94, 0xA8, 0x91, 0xA0, 0xC5, 0x8E, 0x99, 0xB4, 0x8C, 0x95, 0xAA, 0x8F, 0x9C, 0xBB, 0x8D, 0x98, 0xB2, 0x8B, 0x93, 0xA5, 0x91, 0x9F, 0xC3, 0x8A, 0x92, 0xA3, 0x90, 0x9E, 0xC0, 0x8F, 0x9B, 0xB9, 0x8D, 0x97, 0xAF, 0x8E, 0x9A, 0xB6, 0x8C, 0x96, 0xAD, },
    { 0x8B, 0x92, 0xA0, 0x90, 0x9C, 0xB6, 0x8C, 0x94, 0xA5, 0x91, 0x9F, 0xBC, 0x8E, 0x99, 0xAF, 0x8C, 0x95, 0xA7, 0x8F, 0x9B, 0xB4, 0x8E, 0x98, 0xAD, 0x8B, 0x93, 0xA3, 0x91, 0x9E, 0xBA, 0x8B, 0x92, 0xA1, 0x90, 0x9D, 0xB8, 0x8F, 0x9A, 0xB2, 0x8D, 0x97, 0xAB, 0x8E, 0x99, 0xB0, 0x8D, 0x96, 0xA9, },
    { 0x8C, 0x92, 0x9E, 0x90, 0x9B, 0xAE, 0x8D, 0x94, 0xA2, 0x91, 0x9D, 0xB2, 0x8F, 0x98, 0xA9, 0x8D, 0x95, 0xA3, 0x90, 0x9A, 0xAD, 0x8E, 0x97, 0xA7, 0x8C, 0x93, 0xA0, 0x91, 0x9C, 0xB1, 0x8C, 0x92, 0x9F, 0x90, 0x9B, 0xAF, 0x8F, 0x99, 0xAB, 0x8E, 0x96, 0xA6, 0x8F, 0x98, 0xAA, 0x8D, 0x95, 0xA4, },
    { 0x8D, 0x92, 0x9C, 0x90, 0x99, 0xA8, 0x8D, 0x93, 0x9F, 0x91, 0x9B, 0xAB, 0x8F, 0x97, 0xA4, 0x8E, 0x94, 0xA0, 0x90, 0x98, 0xA7, 0x8F, 0x96, 0xA3, 0x8D, 0x93, 0x9E, 0x91, 0x9A, 0xAA, 0x8D, 0x92, 0x9D, 0x91, 0x9A, 0xA9, 0x90, 0x98, 0xA6, 0x8E, 0x95, 0xA2, 0x8F, 0x97, 0xA5, 0x8E, 0x95, 0xA1, },
    { 0x8E, 0x92, 0x9B, 0x91, 0x98, 0xA2, 0x8E, 0x93, 0x9C, 0x91, 0x9A, 0xA4, 0x90, 0x96, 0xA0, 0x8F, 0x94, 0x9D, 0x90, 0x98, 0xA1, 0x8F, 0x95, 0x9F, 0x8E, 0x93, 0x9C, 0x91, 0x99, 0xA3, 0x8E, 0x92, 0x9B, 0x91, 0x99, 0xA3, 0x90, 0x97, 0xA1, 0x8F, 0x95, 0x9E, 0x90, 0x97, 0xA0, 0x8F, 0x94, 0x9E, },
    { 0x8F, 0x92, 0x99, 0x91, 0x97, 0x9E, 0x8F, 0x93, 0x9A, 0x91, 0x98, 0x9F, 0x90, 0x95, 0x9C, 0x8F, 0x93, 0x9A, 0x91, 0x96, 0x9D, 0x90, 0x95, 0x9C, 0x8F, 0x92, 0x99, 0x91, 0x98, 0x9F, 0x8F, 0x92, 0x99, 0x91, 0x97, 0x9E, 0x90, 0x96, 0x9D, 0x90, 0x94, 0x9B, 0x90, 0x95, 0x9C, 0x8F, 0x94, 0x9B, },
    { 0x90, 0x92, 0x97, 0x91, 0x95, 0x99, 0x90, 0x92, 0x97, 0x91, 0x96, 0x99, 0x91, 0x94, 0x98, 0x90, 0x93, 0x97, 0x91, 0x95, 0x99, 0x90, 0x94, 0x98, 0x90, 0x92, 0x97, 0x91, 0x96, 0x99, 0x90, 0x92, 0x97, 0x91, 0x96, 0x99, 0x91, 0x95, 0x98, 0x90, 0x93, 0x98, 0x91, 0x94, 0x98, 0x90, 0x93, 0x97, },
    { 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, },
};

// Set 2 (Low Light)
unsigned const char ditherLowLightValues[NUM_DITHERS][48] = {
    { 0x80, 0x94, 0xDC, 0x8F, 0xCA, 0xF6, 0x83, 0xA1, 0xE2, 0x92, 0xD7, 0xFC, 0x8A, 0xB8, 0xED, 0x85, 0xA6, 0xE4, 0x8D, 0xC5, 0xF4, 0x88, 0xB3, 0xEB, 0x82, 0x9D, 0xE0, 0x91, 0xD3, 0xFA, 0x81, 0x98, 0xDE, 0x90, 0xCE, 0xF8, 0x8C, 0xC1, 0xF1, 0x87, 0xAF, 0xE9, 0x8B, 0xBC, 0xEF, 0x86, 0xAA, 0xE6, },
    { 0x82, 0x95, 0xD2, 0x90, 0xC2, 0xF3, 0x85, 0xA0, 0xDA, 0x93, 0xCE, 0xFC, 0x8B, 0xB3, 0xE8, 0x86, 0xA4, 0xDD, 0x8F, 0xBE, 0xF0, 0x8A, 0xAF, 0xE5, 0x84, 0x9C, 0xD7, 0x92, 0xCA, 0xF9, 0x83, 0x98, 0xD4, 0x91, 0xC6, 0xF6, 0x8D, 0xBB, 0xEE, 0x89, 0xAB, 0xE2, 0x8C, 0xB7, 0xEB, 0x87, 0xA8, 0xE0, },
    { 0x84, 0x96, 0xCA, 0x91, 0xBD, 0xF1, 0x87, 0x9F, 0xD3, 0x94, 0xC6, 0xFB, 0x8D, 0xB0, 0xE4, 0x88, 0xA3, 0xD7, 0x90, 0xB9, 0xEE, 0x8B, 0xAC, 0xE1, 0x86, 0x9C, 0xD0, 0x93, 0xC3, 0xF8, 0x85, 0x99, 0xCD, 0x92, 0xC0, 0xF5, 0x8F, 0xB6, 0xEB, 0x8A, 0xA9, 0xDD, 0x8E, 0xB3, 0xE7, 0x89, 0xA6, 0xDA, },
    { 0x86, 0x96, 0xC4, 0x92, 0xB8, 0xF0, 0x89, 0x9E, 0xCF, 0x95, 0xC1, 0xFB, 0x8E, 0xAD, 0xE1, 0x8A, 0xA1, 0xD2, 0x91, 0xB5, 0xEC, 0x8D, 0xAA, 0xDD, 0x88, 0x9B, 0xCB, 0x94, 0xBE, 0xF7, 0x87, 0x98, 0xC7, 0x93, 0xBB, 0xF3, 0x90, 0xB2, 0xE8, 0x8C, 0xA7, 0xDA, 0x8F, 0xAF, 0xE5, 0x8B, 0xA4, 0xD6, },
    { 0x88, 0x97, 0xBE, 0x93, 0xB4, 0xEE, 0x8A, 0x9E, 0xCA, 0x96, 0xBB, 0xFA, 0x8F, 0xAA, 0xDE, 0x8B, 0xA0, 0xCE, 0x92, 0xB1, 0xEA, 0x8E, 0xA8, 0xDA, 0x89, 0x9B, 0xC6, 0x95, 0xB9, 0xF6, 0x88, 0x99, 0xC2, 0x94, 0xB6, 0xF2, 0x91, 0xAF, 0xE6, 0x8D, 0xA5, 0xD6, 0x90, 0xAC, 0xE2, 0x8C, 0xA3, 0xD2, },
    { 0x8A, 0x97, 0xB8, 0x93, 0xAF, 0xED, 0x8C, 0x9D, 0xC5, 0x96, 0xB5, 0xFA, 0x90, 0xA7, 0xDB, 0x8D, 0x9F, 0xC9, 0x92, 0xAD, 0xE8, 0x8F, 0xA5, 0xD7, 0x8B, 0x9B, 0xC0, 0x95, 0xB3, 0xF6, 0x8A, 0x99, 0xBC, 0x94, 0xB1, 0xF1, 0x92, 0xAB, 0xE4, 0x8E, 0xA3, 0xD2, 0x91, 0xA9, 0xDF, 0x8E, 0xA1, 0xCE, },
    { 0x8B, 0x98, 0xB2, 0x94, 0xAB, 0xE4, 0x8D, 0x9C, 0xBE, 0x97, 0xB0, 0xF0, 0x91, 0xA5, 0xD3, 0x8E, 0x9E, 0xC2, 0x93, 0xA9, 0xE0, 0x90, 0xA3, 0xCF, 0x8C, 0x9B, 0xBA, 0x96, 0xAE, 0xEC, 0x8B, 0x99, 0xB6, 0x95, 0xAD, 0xE8, 0x93, 0xA8, 0xDB, 0x8F, 0xA1, 0xCB, 0x92, 0xA6, 0xD7, 0x8F, 0xA0, 0xC6, },
    { 0x8C, 0x98, 0xAC, 0x95, 0xA7, 0xDB, 0x8E, 0x9B, 0xB7, 0x97, 0xAA, 0xE7, 0x92, 0xA2, 0xCB, 0x8F, 0x9D, 0xBB, 0x94, 0xA5, 0xD7, 0x91, 0xA0, 0xC7, 0x8D, 0x9A, 0xB3, 0x96, 0xA9, 0xE3, 0x8C, 0x99, 0xAF, 0x95, 0xA8, 0xDF, 0x93, 0xA4, 0xD3, 0x90, 0x9F, 0xC3, 0x92, 0xA3, 0xCF, 0x8F, 0x9E, 0xBF, },
    { 0x8D, 0x98, 0xAA, 0x95, 0xA5, 0xD0, 0x8F, 0x9B, 0xB3, 0x97, 0xA8, 0xD9, 0x92, 0xA1, 0xC3, 0x8F, 0x9C, 0xB6, 0x94, 0xA4, 0xCD, 0x91, 0x9F, 0xC0, 0x8E, 0x9A, 0xB0, 0x96, 0xA7, 0xD6, 0x8D, 0x99, 0xAD, 0x95, 0xA6, 0xD3, 0x93, 0xA3, 0xC9, 0x91, 0x9E, 0xBD, 0x93, 0xA2, 0xC6, 0x90, 0x9D, 0xB9, },
    { 0x8E, 0x98, 0xA8, 0x95, 0xA4, 0xC6, 0x8F, 0x9B, 0xAF, 0x97, 0xA7, 0xCD, 0x93, 0xA0, 0xBC, 0x90, 0x9C, 0xB2, 0x94, 0xA3, 0xC3, 0x92, 0x9F, 0xB9, 0x8F, 0x9A, 0xAD, 0x96, 0xA6, 0xCB, 0x8E, 0x99, 0xAA, 0x96, 0xA5, 0xC8, 0x94, 0xA2, 0xC1, 0x91, 0x9E, 0xB7, 0x93, 0xA1, 0xBE, 0x91, 0x9D, 0xB4, },
    { 0x8F, 0x98, 0xA6, 0x95, 0xA2, 0xBC, 0x90, 0x9A, 0xAB, 0x97, 0xA5, 0xC2, 0x93, 0x9F, 0xB5, 0x91, 0x9B, 0xAD, 0x95, 0xA1, 0xBA, 0x92, 0x9E, 0xB3, 0x90, 0x99, 0xA9, 0x96, 0xA4, 0xC0, 0x8F, 0x98, 0xA7, 0x96, 0xA3, 0xBE, 0x94, 0xA0, 0xB8, 0x92, 0x9D, 0xB1, 0x94, 0x9F, 0xB6, 0x91, 0x9C, 0xAF, },
    { 0x90, 0x98, 0xA4, 0x96, 0xA1, 0xB4, 0x91, 0x9A, 0xA8, 0x97, 0xA3, 0xB8, 0x94, 0x9E, 0xAF, 0x92, 0x9B, 0xA9, 0x95, 0xA0, 0xB3, 0x93, 0x9D, 0xAD, 0x91, 0x99, 0xA6, 0x97, 0xA2, 0xB7, 0x90, 0x98, 0xA5, 0x96, 0xA1, 0xB5, 0x95, 0x9F, 0xB1, 0x93, 0x9C, 0xAC, 0x94, 0x9E, 0xB0, 0x92, 0x9B, 0xAA, },
    { 0x92, 0x98, 0xA1, 0x96, 0x9E, 0xAD, 0x93, 0x99, 0xA4, 0x97, 0xA0, 0xB0, 0x95, 0x9C, 0xA9, 0x93, 0x9A, 0xA5, 0x96, 0x9E, 0xAC, 0x94, 0x9B, 0xA8, 0x92, 0x99, 0xA3, 0x97, 0x9F, 0xAF, 0x92, 0x98, 0xA2, 0x96, 0x9F, 0xAE, 0x95, 0x9D, 0xAB, 0x94, 0x9B, 0xA7, 0x95, 0x9D, 0xAA, 0x93, 0x9A, 0xA6, },
    { 0x94, 0x98, 0x9D, 0x97, 0x9B, 0xA5, 0x94, 0x98, 0x9F, 0x97, 0x9C, 0xA7, 0x96, 0x9A, 0xA2, 0x95, 0x99, 0x9F, 0x96, 0x9B, 0xA4, 0x95, 0x9A, 0xA1, 0x94, 0x98, 0x9E, 0x97, 0x9C, 0xA6, 0x94, 0x98, 0x9D, 0x97, 0x9C, 0xA5, 0x96, 0x9B, 0xA3, 0x95, 0x99, 0xA1, 0x96, 0x9A, 0xA3, 0x95, 0x99, 0xA0, },
    { 0x96, 0x98, 0x99, 0x97, 0x98, 0x9E, 0x96, 0x98, 0x9A, 0x97, 0x98, 0x9F, 0x97, 0x98, 0x9C, 0x96, 0x98, 0x9A, 0x97, 0x98, 0x9D, 0x96, 0x98, 0x9C, 0x96, 0x98, 0x99, 0x97, 0x98, 0x9F, 0x96, 0x98, 0x99, 0x97, 0x98, 0x9E, 0x97, 0x98, 0x9D, 0x96, 0x98, 0x9B, 0x97, 0x98, 0x9C, 0x96, 0x98, 0x9B, },
    { 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, },
};

// Set 3 (No Dither - High Light)
unsigned const char ditherNoHighLightValues[NUM_DITHERS][48] = {
    { 0x80, 0x8F, 0xD0, 0x80, 0x8F, 0xD0, 0x80, 0x8F, 0xD0, 0x80, 0x8F, 0xD0, 0x80, 0x8F, 0xD0, 0x80, 0x8F, 0xD0, 0x80, 0x8F, 0xD0, 0x80, 0x8F, 0xD0, 0x80, 0x8F, 0xD0, 0x80, 0x8F, 0xD0, 0x80, 0x8F, 0xD0, 0x80, 0x8F, 0xD0, 0x80, 0x8F, 0xD0, 0x80, 0x8F, 0xD0, 0x80, 0x8F, 0xD0, 0x80, 0x8F, 0xD0, },
    { 0x82, 0x90, 0xC8, 0x82, 0x90, 0xC8, 0x82, 0x90, 0xC8, 0x82, 0x90, 0xC8, 0x82, 0x90, 0xC8, 0x82, 0x90, 0xC8, 0x82, 0x90, 0xC8, 0x82, 0x90, 0xC8, 0x82, 0x90, 0xC8, 0x82, 0x90, 0xC8, 0x82, 0x90, 0xC8, 0x82, 0x90, 0xC8, 0x82, 0x90, 0xC8, 0x82, 0x90, 0xC8, 0x82, 0x90, 0xC8, 0x82, 0x90, 0xC8, },
    { 0x84, 0x90, 0xC0, 0x84, 0x90, 0xC0, 0x84, 0x90, 0xC0, 0x84, 0x90, 0xC0, 0x84, 0x90, 0xC0, 0x84, 0x90, 0xC0, 0x84, 0x90, 0xC0, 0x84, 0x90, 0xC0, 0x84, 0x90, 0xC0, 0x84, 0x90, 0xC0, 0x84, 0x90, 0xC0, 0x84, 0x90, 0xC0, 0x84, 0x90, 0xC0, 0x84, 0x90, 0xC0, 0x84, 0x90, 0xC0, 0x84, 0x90, 0xC0, },
    { 0x85, 0x91, 0xB8, 0x85, 0x91, 0xB8, 0x85, 0x91, 0xB8, 0x85, 0x91, 0xB8, 0x85, 0x91, 0xB8, 0x85, 0x91, 0xB8, 0x85, 0x91, 0xB8, 0x85, 0x91, 0xB8, 0x85, 0x91, 0xB8, 0x85, 0x91, 0xB8, 0x85, 0x91, 0xB8, 0x85, 0x91, 0xB8, 0x85, 0x91, 0xB8, 0x85, 0x91, 0xB8, 0x85, 0x91, 0xB8, 0x85, 0x91, 0xB8, },
    { 0x86, 0x91, 0xB1, 0x86, 0x91, 0xB1, 0x86, 0x91, 0xB1, 0x86, 0x91, 0xB1, 0x86, 0x91, 0xB1, 0x86, 0x91, 0xB1, 0x86, 0x91, 0xB1, 0x86, 0x91, 0xB1, 0x86, 0x91, 0xB1, 0x86, 0x91, 0xB1, 0x86, 0x91, 0xB1, 0x86, 0x91, 0xB1, 0x86, 0x91, 0xB1, 0x86, 0x91, 0xB1, 0x86, 0x91, 0xB1, 0x86, 0x91, 0xB1, },
    { 0x87, 0x92, 0xAA, 0x87, 0x92, 0xAA, 0x87, 0x92, 0xAA, 0x87, 0x92, 0xAA, 0x87, 0x92, 0xAA, 0x87, 0x92, 0xAA, 0x87, 0x92, 0xAA, 0x87, 0x92, 0xAA, 0x87, 0x92, 0xAA, 0x87, 0x92, 0xAA, 0x87, 0x92, 0xAA, 0x87, 0x92, 0xAA, 0x87, 0x92, 0xAA, 0x87, 0x92, 0xAA, 0x87, 0x92, 0xAA, 0x87, 0x92, 0xAA, },
    { 0x88, 0x92, 0xA5, 0x88, 0x92, 0xA5, 0x88, 0x92, 0xA5, 0x88, 0x92, 0xA5, 0x88, 0x92, 0xA5, 0x88, 0x92, 0xA5, 0x88, 0x92, 0xA5, 0x88, 0x92, 0xA5, 0x88, 0x92, 0xA5, 0x88, 0x92, 0xA5, 0x88, 0x92, 0xA5, 0x88, 0x92, 0xA5, 0x88, 0x92, 0xA5, 0x88, 0x92, 0xA5, 0x88, 0x92, 0xA5, 0x88, 0x92, 0xA5, },
    { 0x89, 0x92, 0xA2, 0x89, 0x92, 0xA2, 0x89, 0x92, 0xA2, 0x89, 0x92, 0xA2, 0x89, 0x92, 0xA2, 0x89, 0x92, 0xA2, 0x89, 0x92, 0xA2, 0x89, 0x92, 0xA2, 0x89, 0x92, 0xA2, 0x89, 0x92, 0xA2, 0x89, 0x92, 0xA2, 0x89, 0x92, 0xA2, 0x89, 0x92, 0xA2, 0x89, 0x92, 0xA2, 0x89, 0x92, 0xA2, 0x89, 0x92, 0xA2, },
    { 0x8A, 0x92, 0xA1, 0x8A, 0x92, 0xA1, 0x8A, 0x92, 0xA1, 0x8A, 0x92, 0xA1, 0x8A, 0x92, 0xA1, 0x8A, 0x92, 0xA1, 0x8A, 0x92, 0xA1, 0x8A, 0x92, 0xA1, 0x8A, 0x92, 0xA1, 0x8A, 0x92, 0xA1, 0x8A, 0x92, 0xA1, 0x8A, 0x92, 0xA1, 0x8A, 0x92, 0xA1, 0x8A, 0x92, 0xA1, 0x8A, 0x92, 0xA1, 0x8A, 0x92, 0xA1, },
    { 0x8B, 0x92, 0xA0, 0x8B, 0x92, 0xA0, 0x8B, 0x92, 0xA0, 0x8B, 0x92, 0xA0, 0x8B, 0x92, 0xA0, 0x8B, 0x92, 0xA0, 0x8B, 0x92, 0xA0, 0x8B, 0x92, 0xA0, 0x8B, 0x92, 0xA0, 0x8B, 0x92, 0xA0, 0x8B, 0x92, 0xA0, 0x8B, 0x92, 0xA0, 0x8B, 0x92, 0xA0, 0x8B, 0x92, 0xA0, 0x8B, 0x92, 0xA0, 0x8B, 0x92, 0xA0, },
    { 0x8C, 0x92, 0x9E, 0x8C, 0x92, 0x9E, 0x8C, 0x92, 0x9E, 0x8C, 0x92, 0x9E, 0x8C, 0x92, 0x9E, 0x8C, 0x92, 0x9E, 0x8C, 0x92, 0x9E, 0x8C, 0x92, 0x9E, 0x8C, 0x92, 0x9E, 0x8C, 0x92, 0x9E, 0x8C, 0x92, 0x9E, 0x8C, 0x92, 0x9E, 0x8C, 0x92, 0x9E, 0x8C, 0x92, 0x9E, 0x8C, 0x92, 0x9E, 0x8C, 0x92, 0x9E, },
    { 0x8D, 0x92, 0x9C, 0x8D, 0x92, 0x9C, 0x8D, 0x92, 0x9C, 0x8D, 0x92, 0x9C, 0x8D, 0x92, 0x9C, 0x8D, 0x92, 0x9C, 0x8D, 0x92, 0x9C, 0x8D, 0x92, 0x9C, 0x8D, 0x92, 0x9C, 0x8D, 0x92, 0x9C, 0x8D, 0x92, 0x9C, 0x8D, 0x92, 0x9C, 0x8D, 0x92, 0x9C, 0x8D, 0x92, 0x9C, 0x8D, 0x92, 0x9C, 0x8D, 0x92, 0x9C, },
    { 0x8E, 0x92, 0x9B, 0x8E, 0x92, 0x9B, 0x8E, 0x92, 0x9B, 0x8E, 0x92, 0x9B, 0x8E, 0x92, 0x9B, 0x8E, 0x92, 0x9B, 0x8E, 0x92, 0x9B, 0x8E, 0x92, 0x9B, 0x8E, 0x92, 0x9B, 0x8E, 0x92, 0x9B, 0x8E, 0x92, 0x9B, 0x8E, 0x92, 0x9B, 0x8E, 0x92, 0x9B, 0x8E, 0x92, 0x9B, 0x8E, 0x92, 0x9B, 0x8E, 0x92, 0x9B, },
    { 0x8F, 0x92, 0x99, 0x8F, 0x92, 0x99, 0x8F, 0x92, 0x99, 0x8F, 0x92, 0x99, 0x8F, 0x92, 0x99, 0x8F, 0x92, 0x99, 0x8F, 0x92, 0x99, 0x8F, 0x92, 0x99, 0x8F, 0x92, 0x99, 0x8F, 0x92, 0x99, 0x8F, 0x92, 0x99, 0x8F, 0x92, 0x99, 0x8F, 0x92, 0x99, 0x8F, 0x92, 0x99, 0x8F, 0x92, 0x99, 0x8F, 0x92, 0x99, },
    { 0x90, 0x92, 0x97, 0x90, 0x92, 0x97, 0x90, 0x92, 0x97, 0x90, 0x92, 0x97, 0x90, 0x92, 0x97, 0x90, 0x92, 0x97, 0x90, 0x92, 0x97, 0x90, 0x92, 0x97, 0x90, 0x92, 0x97, 0x90, 0x92, 0x97, 0x90, 0x92, 0x97, 0x90, 0x92, 0x97, 0x90, 0x92, 0x97, 0x90, 0x92, 0x97, 0x90, 0x92, 0x97, 0x90, 0x92, 0x97, },
    { 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, },
};

// Set 4 (No Dither - Low Light)
unsigned const char ditherNoLowLightValues[NUM_DITHERS][48] = {
    { 0x80, 0x94, 0xDC, 0x80, 0x94, 0xDC, 0x80, 0x94, 0xDC, 0x80, 0x94, 0xDC, 0x80, 0x94, 0xDC, 0x80, 0x94, 0xDC, 0x80, 0x94, 0xDC, 0x80, 0x94, 0xDC, 0x80, 0x94, 0xDC, 0x80, 0x94, 0xDC, 0x80, 0x94, 0xDC, 0x80, 0x94, 0xDC, 0x80, 0x94, 0xDC, 0x80, 0x94, 0xDC, 0x80, 0x94, 0xDC, 0x80, 0x94, 0xDC, },
    { 0x82, 0x95, 0xD2, 0x82, 0x95, 0xD2, 0x82, 0x95, 0xD2, 0x82, 0x95, 0xD2, 0x82, 0x95, 0xD2, 0x82, 0x95, 0xD2, 0x82, 0x95, 0xD2, 0x82, 0x95, 0xD2, 0x82, 0x95, 0xD2, 0x82, 0x95, 0xD2, 0x82, 0x95, 0xD2, 0x82, 0x95, 0xD2, 0x82, 0x95, 0xD2, 0x82, 0x95, 0xD2, 0x82, 0x95, 0xD2, 0x82, 0x95, 0xD2, },
    { 0x84, 0x96, 0xCA, 0x84, 0x96, 0xCA, 0x84, 0x96, 0xCA, 0x84, 0x96, 0xCA, 0x84, 0x96, 0xCA, 0x84, 0x96, 0xCA, 0x84, 0x96, 0xCA, 0x84, 0x96, 0xCA, 0x84, 0x96, 0xCA, 0x84, 0x96, 0xCA, 0x84, 0x96, 0xCA, 0x84, 0x96, 0xCA, 0x84, 0x96, 0xCA, 0x84, 0x96, 0xCA, 0x84, 0x96, 0xCA, 0x84, 0x96, 0xCA, },
    { 0x86, 0x96, 0xC4, 0x86, 0x96, 0xC4, 0x86, 0x96, 0xC4, 0x86, 0x96, 0xC4, 0x86, 0x96, 0xC4, 0x86, 0x96, 0xC4, 0x86, 0x96, 0xC4, 0x86, 0x96, 0xC4, 0x86, 0x96, 0xC4, 0x86, 0x96, 0xC4, 0x86, 0x96, 0xC4, 0x86, 0x96, 0xC4, 0x86, 0x96, 0xC4, 0x86, 0x96, 0xC4, 0x86, 0x96, 0xC4, 0x86, 0x96, 0xC4, },
    { 0x88, 0x97, 0xBE, 0x88, 0x97, 0xBE, 0x88, 0x97, 0xBE, 0x88, 0x97, 0xBE, 0x88, 0x97, 0xBE, 0x88, 0x97, 0xBE, 0x88, 0x97, 0xBE, 0x88, 0x97, 0xBE, 0x88, 0x97, 0xBE, 0x88, 0x97, 0xBE, 0x88, 0x97, 0xBE, 0x88, 0x97, 0xBE, 0x88, 0x97, 0xBE, 0x88, 0x97, 0xBE, 0x88, 0x97, 0xBE, 0x88, 0x97, 0xBE, },
    { 0x8A, 0x97, 0xB8, 0x8A, 0x97, 0xB8, 0x8A, 0x97, 0xB8, 0x8A, 0x97, 0xB8, 0x8A, 0x97, 0xB8, 0x8A, 0x97, 0xB8, 0x8A, 0x97, 0xB8, 0x8A, 0x97, 0xB8, 0x8A, 0x97, 0xB8, 0x8A, 0x97, 0xB8, 0x8A, 0x97, 0xB8, 0x8A, 0x97, 0xB8, 0x8A, 0x97, 0xB8, 0x8A, 0x97, 0xB8, 0x8A, 0x97, 0xB8, 0x8A, 0x97, 0xB8, },
    { 0x8B, 0x98, 0xB2, 0x8B, 0x98, 0xB2, 0x8B, 0x98, 0xB2, 0x8B, 0x98, 0xB2, 0x8B, 0x98, 0xB2, 0x8B, 0x98, 0xB2, 0x8B, 0x98, 0xB2, 0x8B, 0x98, 0xB2, 0x8B, 0x98, 0xB2, 0x8B, 0x98, 0xB2, 0x8B, 0x98, 0xB2, 0x8B, 0x98, 0xB2, 0x8B, 0x98, 0xB2, 0x8B, 0x98, 0xB2, 0x8B, 0x98, 0xB2, 0x8B, 0x98, 0xB2, },
    { 0x8C, 0x98, 0xAC, 0x8C, 0x98, 0xAC, 0x8C, 0x98, 0xAC, 0x8C, 0x98, 0xAC, 0x8C, 0x98, 0xAC, 0x8C, 0x98, 0xAC, 0x8C, 0x98, 0xAC, 0x8C, 0x98, 0xAC, 0x8C, 0x98, 0xAC, 0x8C, 0x98, 0xAC, 0x8C, 0x98, 0xAC, 0x8C, 0x98, 0xAC, 0x8C, 0x98, 0xAC, 0x8C, 0x98, 0xAC, 0x8C, 0x98, 0xAC, 0x8C, 0x98, 0xAC, },
    { 0x8D, 0x98, 0xAA, 0x8D, 0x98, 0xAA, 0x8D, 0x98, 0xAA, 0x8D, 0x98, 0xAA, 0x8D, 0x98, 0xAA, 0x8D, 0x98, 0xAA, 0x8D, 0x98, 0xAA, 0x8D, 0x98, 0xAA, 0x8D, 0x98, 0xAA, 0x8D, 0x98, 0xAA, 0x8D, 0x98, 0xAA, 0x8D, 0x98, 0xAA, 0x8D, 0x98, 0xAA, 0x8D, 0x98, 0xAA, 0x8D, 0x98, 0xAA, 0x8D, 0x98, 0xAA, },
    { 0x8E, 0x98, 0xA8, 0x8E, 0x98, 0xA8, 0x8E, 0x98, 0xA8, 0x8E, 0x98, 0xA8, 0x8E, 0x98, 0xA8, 0x8E, 0x98, 0xA8, 0x8E, 0x98, 0xA8, 0x8E, 0x98, 0xA8, 0x8E, 0x98, 0xA8, 0x8E, 0x98, 0xA8, 0x8E, 0x98, 0xA8, 0x8E, 0x98, 0xA8, 0x8E, 0x98, 0xA8, 0x8E, 0x98, 0xA8, 0x8E, 0x98, 0xA8, 0x8E, 0x98, 0xA8, },
    { 0x8F, 0x98, 0xA6, 0x8F, 0x98, 0xA6, 0x8F, 0x98, 0xA6, 0x8F, 0x98, 0xA6, 0x8F, 0x98, 0xA6, 0x8F, 0x98, 0xA6, 0x8F, 0x98, 0xA6, 0x8F, 0x98, 0xA6, 0x8F, 0x98, 0xA6, 0x8F, 0x98, 0xA6, 0x8F, 0x98, 0xA6, 0x8F, 0x98, 0xA6, 0x8F, 0x98, 0xA6, 0x8F, 0x98, 0xA6, 0x8F, 0x98, 0xA6, 0x8F, 0x98, 0xA6, },
    { 0x90, 0x98, 0xA4, 0x90, 0x98, 0xA4, 0x90, 0x98, 0xA4, 0x90, 0x98, 0xA4, 0x90, 0x98, 0xA4, 0x90, 0x98, 0xA4, 0x90, 0x98, 0xA4, 0x90, 0x98, 0xA4, 0x90, 0x98, 0xA4, 0x90, 0x98, 0xA4, 0x90, 0x98, 0xA4, 0x90, 0x98, 0xA4, 0x90, 0x98, 0xA4, 0x90, 0x98, 0xA4, 0x90, 0x98, 0xA4, 0x90, 0x98, 0xA4, },
    { 0x92, 0x98, 0xA1, 0x92, 0x98, 0xA1, 0x92, 0x98, 0xA1, 0x92, 0x98, 0xA1, 0x92, 0x98, 0xA1, 0x92, 0x98, 0xA1, 0x92, 0x98, 0xA1, 0x92, 0x98, 0xA1, 0x92, 0x98, 0xA1, 0x92, 0x98, 0xA1, 0x92, 0x98, 0xA1, 0x92, 0x98, 0xA1, 0x92, 0x98, 0xA1, 0x92, 0x98, 0xA1, 0x92, 0x98, 0xA1, 0x92, 0x98, 0xA1, },
    { 0x94, 0x98, 0x9D, 0x94, 0x98, 0x9D, 0x94, 0x98, 0x9D, 0x94, 0x98, 0x9D, 0x94, 0x98, 0x9D, 0x94, 0x98, 0x9D, 0x94, 0x98, 0x9D, 0x94, 0x98, 0x9D, 0x94, 0x98, 0x9D, 0x94, 0x98, 0x9D, 0x94, 0x98, 0x9D, 0x94, 0x98, 0x9D, 0x94, 0x98, 0x9D, 0x94, 0x98, 0x9D, 0x94, 0x98, 0x9D, 0x94, 0x98, 0x9D, },
    { 0x96, 0x98, 0x99, 0x96, 0x98, 0x99, 0x96, 0x98, 0x99, 0x96, 0x98, 0x99, 0x96, 0x98, 0x99, 0x96, 0x98, 0x99, 0x96, 0x98, 0x99, 0x96, 0x98, 0x99, 0x96, 0x98, 0x99, 0x96, 0x98, 0x99, 0x96, 0x98, 0x99, 0x96, 0x98, 0x99, 0x96, 0x98, 0x99, 0x96, 0x98, 0x99, 0x96, 0x98, 0x99, 0x96, 0x98, 0x99, },
    { 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, },
};

const MenuOption ditherSets[NUM_DITHERS] = {
   { 0, "   0"},
   { 1, "   1"},
   { 2, "   2"},
   { 3, "   3"},
   { 4, "   4"},
   { 5, "   5"},
   { 6, "   6"},
   { 7, "   7"},
   { 8, "   8"},
   { 9, "   9"},
   { 10, "  10"},
   { 11, "  11"},
   { 12, "  12"},
   { 13, "  13"},
   { 14, "  14"},
   { 15, "  15"},
};

// The Game Boy Camera uses 00h, 04h, 08h and 0Ah.
// They are 14.0dB, 20.0dB, 26.0dB and 32dB, which translate to a gain of 5.01, 10.00, 19.95 and 39.81.
const MenuOption gains[NUM_GAIN_LEVELS] = {
  { A001_GAIN_140, "14.0", },
  { A001_GAIN_155, "15.5", },
  { A001_GAIN_170, "17.0", },
  { A001_GAIN_185, "18.5", },
  { A001_GAIN_200, "20.0", },
  { A001_GAIN_215, "21.5", },
  { A001_GAIN_230, "23.0", },
  { A001_GAIN_245, "24.5", },
  { A001_GAIN_260, "26.0", },
  { A001_GAIN_275, "27.5", },
  { A001_GAIN_290, "29.0", },
};

const MenuOption edgeOpModes[NUM_EDGE_OP_MODES] = {
  { A001_EDGE_OP_MODE_NONE, "none", },
  { A001_EDGE_OP_MODE_HORIZONTAL, "horz", },
  { A001_EDGE_OP_MODE_VERTICAL, "vert", },
  { A001_EDGE_OP_MODE_2D, "  2d", },
};

const MenuOption edgeExclusives[NUM_EDGE_EXCLUSIVE] = {
  { A001_EDGE_EXCLUSIVE_VERT_OFF, "V-Of", },
  { A001_EDGE_EXCLUSIVE_VERT_ON, "V-On", },
};

const MenuOption edgeModes[NUM_EDGE_MODES] = {
    { A004_EDGE_RATIO_050, " 50%", },
    { A004_EDGE_RATIO_075, " 75%", },
    { A004_EDGE_RATIO_100, "100%", },
    { A004_EDGE_RATIO_125, "125%", },
    { A004_EDGE_RATIO_200, "200%", },
    { A004_EDGE_RATIO_300, "300%", },
    { A004_EDGE_RATIO_400, "400%", },
    { A004_EDGE_RATIO_500, "500%", },
};

const MenuOption ditherHighLows[NUM_DITHER_HIGHLOWS] = {
  { DITHER_SET_HIGH,    "High", },
  { DITHER_SET_LOW,     " Low", },
  { DITHER_SET_NO_HIGH, "N-Hi", },
  { DITHER_SET_NO_LOW,  "N-Lo", },
};

const MenuOption invertOutputs[NUM_INVERT_OUTPUTS] = {
  { A004_INVERT_OUTPUT_OFF, " Off", },
  { A004_INVERT_OUTPUT_ON, "  On", },
};

const MenuOption zeroPoints[NUM_ZERO_POINTS] = {
  { A005_ZERO_DISABLED, "none", },
  { A005_ZERO_POSITIVE, " pos", },
  { A005_ZERO_NEGATIVE, " neg", },
};


const MenuOption voltageRefs[NUM_VOLTAGE_REFS] = {
  { A004_VOLTAGE_REF_00, "0.0V", },
  { A004_VOLTAGE_REF_05, "0.5V", },
  { A004_VOLTAGE_REF_10, "1.0V", },
  { A004_VOLTAGE_REF_15, "1.5V", },
  { A004_VOLTAGE_REF_20, "2.0V", },
  { A004_VOLTAGE_REF_25, "2.5V", },
  { A004_VOLTAGE_REF_30, "3.0V", },
  { A004_VOLTAGE_REF_35, "3.5V", },
};

const MenuOption voltageOuts[NUM_VOLTAGE_OUTS] = {
  { A005_VOLTAGE_OUT_NEG_992, "-992", },
  { A005_VOLTAGE_OUT_NEG_960, "-960", },
  { A005_VOLTAGE_OUT_NEG_928, "-928", },
  { A005_VOLTAGE_OUT_NEG_896, "-896", },
  { A005_VOLTAGE_OUT_NEG_864, "-864", },
  { A005_VOLTAGE_OUT_NEG_832, "-832", },
  { A005_VOLTAGE_OUT_NEG_800, "-800", },
  { A005_VOLTAGE_OUT_NEG_768, "-768", },
  { A005_VOLTAGE_OUT_NEG_736, "-736", },
  { A005_VOLTAGE_OUT_NEG_704, "-704", },
  { A005_VOLTAGE_OUT_NEG_672, "-672", },
  { A005_VOLTAGE_OUT_NEG_640, "-640", },
  { A005_VOLTAGE_OUT_NEG_608, "-608", },
  { A005_VOLTAGE_OUT_NEG_576, "-576", },
  { A005_VOLTAGE_OUT_NEG_544, "-544", },
  { A005_VOLTAGE_OUT_NEG_512, "-512", },
  { A005_VOLTAGE_OUT_NEG_480, "-480", },
  { A005_VOLTAGE_OUT_NEG_448, "-448", },
  { A005_VOLTAGE_OUT_NEG_416, "-416", },
  { A005_VOLTAGE_OUT_NEG_384, "-384", },
  { A005_VOLTAGE_OUT_NEG_352, "-352", },
  { A005_VOLTAGE_OUT_NEG_320, "-320", },
  { A005_VOLTAGE_OUT_NEG_288, "-288", },
  { A005_VOLTAGE_OUT_NEG_256, "-256", },
  { A005_VOLTAGE_OUT_NEG_224, "-224", },
  { A005_VOLTAGE_OUT_NEG_192, "-192", },
  { A005_VOLTAGE_OUT_NEG_160, "-160", },
  { A005_VOLTAGE_OUT_NEG_128, "-128", },
  { A005_VOLTAGE_OUT_NEG_096, "-096", },
  { A005_VOLTAGE_OUT_NEG_064, "-064", },
  { A005_VOLTAGE_OUT_NEG_032, "-032", },
  { A005_VOLTAGE_OUT_NEG_000, "-000", },
  { A005_VOLTAGE_OUT_POS_000, "+000", },
  { A005_VOLTAGE_OUT_POS_032, "+032", },
  { A005_VOLTAGE_OUT_POS_064, "+064", },
  { A005_VOLTAGE_OUT_POS_096, "+096", },
  { A005_VOLTAGE_OUT_POS_128, "+128", },
  { A005_VOLTAGE_OUT_POS_160, "+160", },
  { A005_VOLTAGE_OUT_POS_192, "+192", },
  { A005_VOLTAGE_OUT_POS_224, "+224", },
  { A005_VOLTAGE_OUT_POS_256, "+256", },
  { A005_VOLTAGE_OUT_POS_288, "+288", },
  { A005_VOLTAGE_OUT_POS_320, "+320", },
  { A005_VOLTAGE_OUT_POS_352, "+352", },
  { A005_VOLTAGE_OUT_POS_384, "+384", },
  { A005_VOLTAGE_OUT_POS_416, "+416", },
  { A005_VOLTAGE_OUT_POS_448, "+448", },
  { A005_VOLTAGE_OUT_POS_480, "+480", },
  { A005_VOLTAGE_OUT_POS_512, "+512", },
  { A005_VOLTAGE_OUT_POS_544, "+544", },
  { A005_VOLTAGE_OUT_POS_576, "+576", },
  { A005_VOLTAGE_OUT_POS_608, "+608", },
  { A005_VOLTAGE_OUT_POS_640, "+640", },
  { A005_VOLTAGE_OUT_POS_672, "+672", },
  { A005_VOLTAGE_OUT_POS_704, "+704", },
  { A005_VOLTAGE_OUT_POS_736, "+736", },
  { A005_VOLTAGE_OUT_POS_768, "+768", },
  { A005_VOLTAGE_OUT_POS_800, "+800", },
  { A005_VOLTAGE_OUT_POS_832, "+832", },
  { A005_VOLTAGE_OUT_POS_864, "+864", },
  { A005_VOLTAGE_OUT_POS_896, "+896", },
  { A005_VOLTAGE_OUT_POS_928, "+928", },
  { A005_VOLTAGE_OUT_POS_960, "+960", },
  { A005_VOLTAGE_OUT_POS_992, "+992", },
};
