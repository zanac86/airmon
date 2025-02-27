#ifndef MSX_FONT_HEADER_ADA
#define MSX_FONT_HEADER_ADA

#include <TFT_eSPI.h>

const uint8_t MSX_Font_6x8_Bitmaps[] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x3d, 0x0a, 0x60, 0xa6, 0x64, 0x0f,
0x3d, 0xfd, 0xbf, 0xff, 0x66, 0x4f,
0x6f, 0xff, 0xff, 0x7c, 0xe1, 0x00,
0x10, 0xe7, 0xff, 0x7c, 0xe1, 0x00,
0x10, 0xe5, 0x7f, 0x54, 0x43, 0x80,
0x10, 0xe7, 0xff, 0xfc, 0x43, 0x80,
0x00, 0x00, 0x0c, 0x30, 0x00, 0x00,
0xff, 0xff, 0xf9, 0xe7, 0xff, 0xff,
0x39, 0x18, 0x20, 0x81, 0x13, 0x80,
0xc6, 0xe7, 0xdf, 0x7e, 0xec, 0x7f,
0x0c, 0x00, 0x5e, 0x8a, 0x28, 0x9c,
0x39, 0x14, 0x51, 0x38, 0x47, 0xc4,
0x30, 0xa2, 0x49, 0x28, 0x8e, 0x30,
0x3c, 0x93, 0xc9, 0x27, 0x9d, 0xc6,
0x11, 0x53, 0xbb, 0x39, 0x51, 0x00,
0x10, 0x41, 0x1f, 0x10, 0x41, 0x04,
0x10, 0x41, 0x3f, 0x00, 0x00, 0x00,
0x00, 0x00, 0x3f, 0x10, 0x41, 0x04,
0x10, 0x41, 0x3c, 0x10, 0x41, 0x04,
0x10, 0x41, 0x07, 0x10, 0x41, 0x04,
0x10, 0x41, 0x3f, 0x10, 0x41, 0x04,
0x10, 0x41, 0x04, 0x10, 0x41, 0x04,
0x00, 0x00, 0x3f, 0x00, 0x00, 0x00,
0x00, 0x00, 0x07, 0x10, 0x41, 0x04,
0x00, 0x00, 0x3c, 0x10, 0x41, 0x04,
0x10, 0x41, 0x07, 0x00, 0x00, 0x00,
0x10, 0x41, 0x3c, 0x00, 0x00, 0x00,
0x81, 0x02, 0x46, 0x18, 0x94, 0x20,
0x00, 0x00, 0x42, 0x10, 0x84, 0x20,
0x81, 0x02, 0x04, 0x08, 0x10, 0x00,
0x00, 0x41, 0x3f, 0x10, 0x40, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x20, 0x82, 0x08, 0x00, 0x02, 0x00,
0x51, 0x45, 0x00, 0x00, 0x00, 0x00,
0x51, 0x4f, 0x94, 0xf9, 0x45, 0x00,
0x21, 0xea, 0x1c, 0x2b, 0xc2, 0x00,
0xc3, 0x21, 0x08, 0x42, 0x61, 0x80,
0x42, 0x84, 0x2a, 0x92, 0x66, 0x00,
0x10, 0x84, 0x00, 0x00, 0x00, 0x00,
0x10, 0x84, 0x10, 0x40, 0x81, 0x00,
0x40, 0x81, 0x04, 0x10, 0x84, 0x00,
0x89, 0x42, 0x3e, 0x21, 0x48, 0x80,
0x00, 0x82, 0x3e, 0x20, 0x80, 0x00,
0x00, 0x00, 0x00, 0x00, 0x82, 0x10,
0x00, 0x00, 0x1e, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0x86, 0x00,
0x00, 0x00, 0x84, 0x21, 0x08, 0x00,
0x72, 0x29, 0xaa, 0xca, 0x27, 0x00,
0x21, 0x8a, 0x08, 0x20, 0x8f, 0x80,
0x72, 0x20, 0x84, 0x62, 0x0f, 0x80,
0x72, 0x20, 0x8c, 0x0a, 0x27, 0x00,
0x10, 0xc5, 0x24, 0xf8, 0x41, 0x00,
0xfa, 0x0e, 0x04, 0x08, 0x4e, 0x00,
0x31, 0x08, 0x3c, 0x8a, 0x27, 0x00,
0xfa, 0x21, 0x08, 0x20, 0x82, 0x00,
0x72, 0x28, 0x9c, 0x8a, 0x27, 0x00,
0x72, 0x28, 0x9e, 0x08, 0x46, 0x00,
0x00, 0x02, 0x00, 0x00, 0x80, 0x00,
0x00, 0x02, 0x00, 0x00, 0x82, 0x10,
0x18, 0xc6, 0x30, 0x60, 0xc1, 0x80,
0x00, 0x0f, 0x80, 0xf8, 0x00, 0x00,
0xc1, 0x83, 0x06, 0x31, 0x8c, 0x00,
0x72, 0x20, 0x84, 0x20, 0x02, 0x00,
0x72, 0x20, 0x9a, 0xaa, 0xa7, 0x00,
0x21, 0x48, 0xa2, 0xfa, 0x28, 0x80,
0xf1, 0x24, 0x9c, 0x49, 0x2f, 0x00,
0x31, 0x28, 0x20, 0x81, 0x23, 0x00,
0xe1, 0x44, 0x92, 0x49, 0x4e, 0x00,
0xfa, 0x08, 0x3c, 0x82, 0x0f, 0x80,
0xfa, 0x08, 0x3c, 0x82, 0x08, 0x00,
0x72, 0x28, 0x2e, 0x8a, 0x27, 0x00,
0x8a, 0x28, 0xbe, 0x8a, 0x28, 0x80,
0x70, 0x82, 0x08, 0x20, 0x87, 0x00,
0x38, 0x41, 0x04, 0x92, 0x46, 0x00,
0x8a, 0x4a, 0x30, 0xa2, 0x48, 0x80,
0x82, 0x08, 0x20, 0x82, 0x0f, 0x80,
0x8b, 0x6a, 0xaa, 0x8a, 0x28, 0x80,
0x8b, 0x2c, 0xaa, 0x9a, 0x68, 0x80,
0x72, 0x28, 0xa2, 0x8a, 0x27, 0x00,
0xf2, 0x28, 0xbc, 0x82, 0x08, 0x00,
0x72, 0x28, 0xa2, 0xaa, 0x46, 0x80,
0xf2, 0x28, 0xbc, 0xa2, 0x48, 0x80,
0x72, 0x28, 0x1c, 0x0a, 0x27, 0x00,
0xf8, 0x82, 0x08, 0x20, 0x82, 0x00,
0x8a, 0x28, 0xa2, 0x8a, 0x27, 0x00,
0x8a, 0x28, 0xa2, 0x51, 0x42, 0x00,
0x8a, 0x28, 0xaa, 0xab, 0x68, 0x80,
0x8a, 0x25, 0x08, 0x52, 0x28, 0x80,
0x8a, 0x28, 0x9c, 0x20, 0x82, 0x00,
0xf8, 0x21, 0x08, 0x42, 0x0f, 0x80,
0x71, 0x04, 0x10, 0x41, 0x07, 0x00,
0x00, 0x08, 0x10, 0x20, 0x40, 0x80,
0x70, 0x41, 0x04, 0x10, 0x47, 0x00,
0x21, 0x48, 0x80, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x0f, 0x80,
0x40, 0x81, 0x00, 0x00, 0x00, 0x00,
0x00, 0x07, 0x02, 0x7a, 0x27, 0x80,
0x82, 0x0b, 0x32, 0x8b, 0x2b, 0x00,
0x00, 0x07, 0x22, 0x82, 0x27, 0x00,
0x08, 0x26, 0xa6, 0x8a, 0x66, 0x80,
0x00, 0x07, 0x22, 0xfa, 0x07, 0x00,
0x10, 0xa2, 0x3e, 0x20, 0x82, 0x00,
0x00, 0x06, 0xa6, 0x99, 0xa0, 0x9c,
0x82, 0x0f, 0x22, 0x8a, 0x28, 0x80,
0x20, 0x06, 0x08, 0x20, 0x87, 0x00,
0x10, 0x03, 0x04, 0x10, 0x49, 0x18,
0x41, 0x04, 0x94, 0x61, 0x44, 0x80,
0x60, 0x82, 0x08, 0x20, 0x87, 0x00,
0x00, 0x0d, 0x2a, 0xaa, 0xaa, 0x80,
0x00, 0x0b, 0x32, 0x8a, 0x28, 0x80,
0x00, 0x07, 0x22, 0x8a, 0x27, 0x00,
0x00, 0x0b, 0x32, 0xca, 0xc8, 0x20,
0x00, 0x06, 0xa6, 0x99, 0xa0, 0x82,
0x00, 0x0b, 0x32, 0x82, 0x08, 0x00,
0x00, 0x07, 0xa0, 0xf0, 0x2f, 0x00,
0x41, 0x0f, 0x10, 0x41, 0x23, 0x00,
0x00, 0x09, 0x24, 0x92, 0x46, 0x80,
0x00, 0x08, 0xa2, 0x89, 0x42, 0x00,
0x00, 0x08, 0xaa, 0xaa, 0xa5, 0x00,
0x00, 0x08, 0x94, 0x21, 0x48, 0x80,
0x00, 0x08, 0xa2, 0x99, 0xa0, 0x9c,
0x00, 0x0f, 0x84, 0x21, 0x0f, 0x80,
0x18, 0x82, 0x10, 0x20, 0x81, 0x80,
0x20, 0x82, 0x00, 0x20, 0x82, 0x00,
0xc0, 0x82, 0x04, 0x20, 0x8c, 0x00,
0x42, 0xa1, 0x00, 0x00, 0x00, 0x00,
0x00, 0x02, 0x14, 0xf8, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x0f, 0xff,
0xf3, 0xcf, 0x3c, 0x0c, 0x30, 0xc3,
0x00, 0x0f, 0xff, 0xff, 0xff, 0xff,
0xff, 0xf0, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x0f, 0x3c, 0x00, 0x00,
0xff, 0xff, 0xff, 0xff, 0xf0, 0x00,
0xc3, 0x0c, 0x30, 0xc3, 0x0c, 0x30,
0x0c, 0x30, 0xc3, 0xf3, 0xcf, 0x3c,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf,
0x10, 0x84, 0x62, 0x10, 0x84, 0x62,
0x89, 0x12, 0x04, 0x89, 0x12, 0x04,
0xfd, 0xf3, 0x84, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x10, 0xe7, 0xff,
0x83, 0x0e, 0x3c, 0xe3, 0x08, 0x00,
0x00, 0x00, 0x43, 0x04, 0x00, 0x00,
0xfd, 0xf3, 0xc6, 0x18, 0xf7, 0xff,
0x83, 0x0e, 0x7f, 0xff, 0x9c, 0x20,
0xf3, 0xcf, 0x3c, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x0c, 0x30, 0xc3,
0x0c, 0x30, 0xc3, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xf3, 0xcf, 0x3c,
0x30, 0xcc, 0xf3, 0x30, 0xcc, 0xf3,
0x00, 0x82, 0x14, 0x52, 0x2f, 0x80,
0x20, 0x87, 0x08, 0x70, 0x82, 0x00,
0x00, 0x00, 0x14, 0x8a, 0xa5, 0x00,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0x00, 0x00, 0x00, 0xff, 0xff, 0xff,
0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c,
0x0c, 0x30, 0xc3, 0x0c, 0x30, 0xc3,
0xff, 0xff, 0xff, 0x00, 0x00, 0x00,
0x00, 0x06, 0xa4, 0x92, 0x46, 0x80,
0x31, 0x24, 0x9c, 0x49, 0x27, 0x30,
0xfa, 0x28, 0x20, 0x82, 0x08, 0x00,
0xf9, 0x45, 0x14, 0x51, 0x49, 0x80,
0xfa, 0x24, 0x08, 0x42, 0x2f, 0x80,
0x00, 0x07, 0xa4, 0x92, 0x46, 0x00,
0x01, 0x45, 0x14, 0x51, 0xa8, 0x20,
0x01, 0x4a, 0x08, 0x20, 0x82, 0x00,
0xf8, 0x87, 0x2a, 0xa9, 0xc2, 0x3e,
0x21, 0x48, 0xbe, 0x89, 0x42, 0x00,
0x72, 0x28, 0xa2, 0x51, 0x4d, 0x80,
0x31, 0x04, 0x08, 0x51, 0x45, 0x08,
0x00, 0x00, 0x14, 0xaa, 0xa5, 0x00,
0x09, 0xca, 0xaa, 0xa9, 0xc8, 0x00,
0x39, 0x08, 0x3e, 0x81, 0x03, 0x80,
0x72, 0x28, 0xa2, 0x8a, 0x28, 0x80,
0x03, 0xe0, 0x3e, 0x03, 0xe0, 0x00,
0x20, 0x8f, 0x88, 0x20, 0x0f, 0x80,
0xc0, 0xc0, 0x8c, 0xc0, 0x0f, 0x80,
0x19, 0x88, 0x18, 0x18, 0x0f, 0x80,
0x10, 0xa2, 0x08, 0x20, 0x82, 0x08,
0x20, 0x82, 0x08, 0x20, 0x8a, 0x10,
0x00, 0x80, 0x3e, 0x00, 0x80, 0x00,
0x01, 0x4a, 0x00, 0x52, 0x80, 0x00,
0x31, 0x24, 0x8c, 0x00, 0x00, 0x00,
0x31, 0xe7, 0x8c, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x30, 0x00, 0x00,
0x3c, 0x82, 0x08, 0xa1, 0x82, 0x00,
0xa1, 0x45, 0x14, 0x00, 0x00, 0x00,
0x42, 0x82, 0x10, 0xe0, 0x00, 0x00,
0x00, 0xe3, 0x8e, 0x38, 0xe3, 0x80,
0x89, 0xc8, 0xa2, 0x72, 0x20, 0x00,
0x21, 0x48, 0xa2, 0xfa, 0x28, 0x80,
0xfa, 0x28, 0x3c, 0x8a, 0x2f, 0x00,
0xf1, 0x24, 0x9c, 0x49, 0x2f, 0x00,
0xfa, 0x28, 0xa0, 0x82, 0x08, 0x00,
0x38, 0xa2, 0x92, 0x4b, 0xe8, 0x80,
0xfa, 0x08, 0x3c, 0x82, 0x0f, 0x80,
0xaa, 0xa7, 0x08, 0x72, 0xaa, 0x80,
0xf0, 0x20, 0x8c, 0x08, 0x2f, 0x00,
0x8a, 0x29, 0xaa, 0xca, 0x28, 0x80,
0x50, 0x88, 0xa6, 0xab, 0x28, 0x80,
0x8a, 0x4a, 0x30, 0xa2, 0x48, 0x80,
0x18, 0xa4, 0x92, 0x49, 0x28, 0x80,
0x8b, 0x6a, 0xaa, 0x8a, 0x28, 0x80,
0x8a, 0x28, 0xbe, 0x8a, 0x28, 0x80,
0x72, 0x28, 0xa2, 0x8a, 0x27, 0x00,
0xfa, 0x28, 0xa2, 0x8a, 0x28, 0x80,
0xf2, 0x28, 0xbc, 0x82, 0x08, 0x00,
0x72, 0x28, 0x20, 0x82, 0x27, 0x00,
0xf8, 0x82, 0x08, 0x20, 0x82, 0x00,
0x8a, 0x28, 0x94, 0x21, 0x08, 0x00,
0x21, 0xca, 0xaa, 0xa9, 0xc2, 0x00,
0x8a, 0x25, 0x08, 0x52, 0x28, 0x80,
0x92, 0x49, 0x24, 0x93, 0xe0, 0x80,
0x8a, 0x28, 0xa2, 0x78, 0x20, 0x80,
0xaa, 0xaa, 0xaa, 0xaa, 0xaf, 0x80,
0xaa, 0xaa, 0xaa, 0xab, 0xe0, 0x80,
0xc1, 0x04, 0x1c, 0x49, 0x27, 0x00,
0x8a, 0x28, 0xb2, 0xaa, 0xac, 0x80,
0x82, 0x08, 0x3c, 0x8a, 0x2f, 0x00,
0x72, 0x20, 0x9e, 0x0a, 0x27, 0x00,
0x92, 0xaa, 0xba, 0xaa, 0xa9, 0x00,
0x7a, 0x28, 0x9e, 0x29, 0x28, 0x80,
0x00, 0x06, 0x04, 0x72, 0x46, 0x80,
0x00, 0x0f, 0x20, 0xf2, 0x2f, 0x00,
0x00, 0x0f, 0x12, 0x71, 0x2f, 0x00,
0x00, 0x07, 0x92, 0x41, 0x04, 0x00,
0x00, 0x03, 0x14, 0x51, 0xc8, 0x80,
0x00, 0x07, 0x22, 0xfa, 0x07, 0x00,
0x00, 0x0a, 0x9c, 0x21, 0xca, 0x80,
0x00, 0x0f, 0x02, 0x70, 0x2f, 0x00,
0x00, 0x08, 0xa6, 0xab, 0x28, 0x80,
0x01, 0x42, 0x00, 0x9a, 0xac, 0x80,
0x00, 0x09, 0x28, 0xc2, 0x89, 0x00,
0x00, 0x03, 0x8a, 0x29, 0x28, 0x80,
0x00, 0x08, 0xb6, 0xaa, 0x28, 0x80,
0x00, 0x08, 0xa2, 0xfa, 0x28, 0x80,
0x00, 0x07, 0x22, 0x8a, 0x27, 0x00,
0x00, 0x07, 0x92, 0x49, 0x24, 0x80,
0x00, 0x0f, 0x22, 0xf2, 0x08, 0x00,
0x00, 0x07, 0xa0, 0x82, 0x07, 0x80,
0x00, 0x0f, 0x88, 0x20, 0x82, 0x00,
0x00, 0x08, 0x94, 0x21, 0x08, 0x00,
0x00, 0x87, 0x2a, 0xa9, 0xc2, 0x00,
0x00, 0x08, 0x94, 0x21, 0x48, 0x80,
0x00, 0x09, 0x24, 0x93, 0xe0, 0x80,
0x00, 0x04, 0x92, 0x78, 0x20, 0x80,
0x00, 0x0a, 0xaa, 0xaa, 0xaf, 0x80,
0x00, 0x0a, 0xaa, 0xab, 0xe0, 0x80,
0x00, 0x0c, 0x10, 0x71, 0x27, 0x00,
0x00, 0x08, 0xa2, 0xca, 0xac, 0x80,
0x00, 0x04, 0x10, 0x71, 0x27, 0x00,
0x00, 0x07, 0x22, 0x3a, 0x27, 0x00,
0x00, 0x09, 0x2a, 0xea, 0xa9, 0x00,
0x00, 0x07, 0xa2, 0x78, 0xa4, 0x80
};

const GFXglyph MSX_Font_6x8_Glyphs[] PROGMEM = {
    { 0, 6, 8, 6, 0, -7 },
    { 6, 6, 8, 6, 0, -7 },
    { 12, 6, 8, 6, 0, -7 },
    { 18, 6, 8, 6, 0, -7 },
    { 24, 6, 8, 6, 0, -7 },
    { 30, 6, 8, 6, 0, -7 },
    { 36, 6, 8, 6, 0, -7 },
    { 42, 6, 8, 6, 0, -7 },
    { 48, 6, 8, 6, 0, -7 },
    { 54, 6, 8, 6, 0, -7 },
    { 60, 6, 8, 6, 0, -7 },
    { 66, 6, 8, 6, 0, -7 },
    { 72, 6, 8, 6, 0, -7 },
    { 78, 6, 8, 6, 0, -7 },
    { 84, 6, 8, 6, 0, -7 },
    { 90, 6, 8, 6, 0, -7 },
    { 96, 6, 8, 6, 0, -7 },
    { 102, 6, 8, 6, 0, -7 },
    { 108, 6, 8, 6, 0, -7 },
    { 114, 6, 8, 6, 0, -7 },
    { 120, 6, 8, 6, 0, -7 },
    { 126, 6, 8, 6, 0, -7 },
    { 132, 6, 8, 6, 0, -7 },
    { 138, 6, 8, 6, 0, -7 },
    { 144, 6, 8, 6, 0, -7 },
    { 150, 6, 8, 6, 0, -7 },
    { 156, 6, 8, 6, 0, -7 },
    { 162, 6, 8, 6, 0, -7 },
    { 168, 6, 8, 6, 0, -7 },
    { 174, 6, 8, 6, 0, -7 },
    { 180, 6, 8, 6, 0, -7 },
    { 186, 6, 8, 6, 0, -7 },
    { 192, 6, 8, 6, 0, -7 },
    { 198, 6, 8, 6, 0, -7 },
    { 204, 6, 8, 6, 0, -7 },
    { 210, 6, 8, 6, 0, -7 },
    { 216, 6, 8, 6, 0, -7 },
    { 222, 6, 8, 6, 0, -7 },
    { 228, 6, 8, 6, 0, -7 },
    { 234, 6, 8, 6, 0, -7 },
    { 240, 6, 8, 6, 0, -7 },
    { 246, 6, 8, 6, 0, -7 },
    { 252, 6, 8, 6, 0, -7 },
    { 258, 6, 8, 6, 0, -7 },
    { 264, 6, 8, 6, 0, -7 },
    { 270, 6, 8, 6, 0, -7 },
    { 276, 6, 8, 6, 0, -7 },
    { 282, 6, 8, 6, 0, -7 },
    { 288, 6, 8, 6, 0, -7 },
    { 294, 6, 8, 6, 0, -7 },
    { 300, 6, 8, 6, 0, -7 },
    { 306, 6, 8, 6, 0, -7 },
    { 312, 6, 8, 6, 0, -7 },
    { 318, 6, 8, 6, 0, -7 },
    { 324, 6, 8, 6, 0, -7 },
    { 330, 6, 8, 6, 0, -7 },
    { 336, 6, 8, 6, 0, -7 },
    { 342, 6, 8, 6, 0, -7 },
    { 348, 6, 8, 6, 0, -7 },
    { 354, 6, 8, 6, 0, -7 },
    { 360, 6, 8, 6, 0, -7 },
    { 366, 6, 8, 6, 0, -7 },
    { 372, 6, 8, 6, 0, -7 },
    { 378, 6, 8, 6, 0, -7 },
    { 384, 6, 8, 6, 0, -7 },
    { 390, 6, 8, 6, 0, -7 },
    { 396, 6, 8, 6, 0, -7 },
    { 402, 6, 8, 6, 0, -7 },
    { 408, 6, 8, 6, 0, -7 },
    { 414, 6, 8, 6, 0, -7 },
    { 420, 6, 8, 6, 0, -7 },
    { 426, 6, 8, 6, 0, -7 },
    { 432, 6, 8, 6, 0, -7 },
    { 438, 6, 8, 6, 0, -7 },
    { 444, 6, 8, 6, 0, -7 },
    { 450, 6, 8, 6, 0, -7 },
    { 456, 6, 8, 6, 0, -7 },
    { 462, 6, 8, 6, 0, -7 },
    { 468, 6, 8, 6, 0, -7 },
    { 474, 6, 8, 6, 0, -7 },
    { 480, 6, 8, 6, 0, -7 },
    { 486, 6, 8, 6, 0, -7 },
    { 492, 6, 8, 6, 0, -7 },
    { 498, 6, 8, 6, 0, -7 },
    { 504, 6, 8, 6, 0, -7 },
    { 510, 6, 8, 6, 0, -7 },
    { 516, 6, 8, 6, 0, -7 },
    { 522, 6, 8, 6, 0, -7 },
    { 528, 6, 8, 6, 0, -7 },
    { 534, 6, 8, 6, 0, -7 },
    { 540, 6, 8, 6, 0, -7 },
    { 546, 6, 8, 6, 0, -7 },
    { 552, 6, 8, 6, 0, -7 },
    { 558, 6, 8, 6, 0, -7 },
    { 564, 6, 8, 6, 0, -7 },
    { 570, 6, 8, 6, 0, -7 },
    { 576, 6, 8, 6, 0, -7 },
    { 582, 6, 8, 6, 0, -7 },
    { 588, 6, 8, 6, 0, -7 },
    { 594, 6, 8, 6, 0, -7 },
    { 600, 6, 8, 6, 0, -7 },
    { 606, 6, 8, 6, 0, -7 },
    { 612, 6, 8, 6, 0, -7 },
    { 618, 6, 8, 6, 0, -7 },
    { 624, 6, 8, 6, 0, -7 },
    { 630, 6, 8, 6, 0, -7 },
    { 636, 6, 8, 6, 0, -7 },
    { 642, 6, 8, 6, 0, -7 },
    { 648, 6, 8, 6, 0, -7 },
    { 654, 6, 8, 6, 0, -7 },
    { 660, 6, 8, 6, 0, -7 },
    { 666, 6, 8, 6, 0, -7 },
    { 672, 6, 8, 6, 0, -7 },
    { 678, 6, 8, 6, 0, -7 },
    { 684, 6, 8, 6, 0, -7 },
    { 690, 6, 8, 6, 0, -7 },
    { 696, 6, 8, 6, 0, -7 },
    { 702, 6, 8, 6, 0, -7 },
    { 708, 6, 8, 6, 0, -7 },
    { 714, 6, 8, 6, 0, -7 },
    { 720, 6, 8, 6, 0, -7 },
    { 726, 6, 8, 6, 0, -7 },
    { 732, 6, 8, 6, 0, -7 },
    { 738, 6, 8, 6, 0, -7 },
    { 744, 6, 8, 6, 0, -7 },
    { 750, 6, 8, 6, 0, -7 },
    { 756, 6, 8, 6, 0, -7 },
    { 762, 6, 8, 6, 0, -7 },
    { 768, 6, 8, 6, 0, -7 },
    { 774, 6, 8, 6, 0, -7 },
    { 780, 6, 8, 6, 0, -7 },
    { 786, 6, 8, 6, 0, -7 },
    { 792, 6, 8, 6, 0, -7 },
    { 798, 6, 8, 6, 0, -7 },
    { 804, 6, 8, 6, 0, -7 },
    { 810, 6, 8, 6, 0, -7 },
    { 816, 6, 8, 6, 0, -7 },
    { 822, 6, 8, 6, 0, -7 },
    { 828, 6, 8, 6, 0, -7 },
    { 834, 6, 8, 6, 0, -7 },
    { 840, 6, 8, 6, 0, -7 },
    { 846, 6, 8, 6, 0, -7 },
    { 852, 6, 8, 6, 0, -7 },
    { 858, 6, 8, 6, 0, -7 },
    { 864, 6, 8, 6, 0, -7 },
    { 870, 6, 8, 6, 0, -7 },
    { 876, 6, 8, 6, 0, -7 },
    { 882, 6, 8, 6, 0, -7 },
    { 888, 6, 8, 6, 0, -7 },
    { 894, 6, 8, 6, 0, -7 },
    { 900, 6, 8, 6, 0, -7 },
    { 906, 6, 8, 6, 0, -7 },
    { 912, 6, 8, 6, 0, -7 },
    { 918, 6, 8, 6, 0, -7 },
    { 924, 6, 8, 6, 0, -7 },
    { 930, 6, 8, 6, 0, -7 },
    { 936, 6, 8, 6, 0, -7 },
    { 942, 6, 8, 6, 0, -7 },
    { 948, 6, 8, 6, 0, -7 },
    { 954, 6, 8, 6, 0, -7 },
    { 960, 6, 8, 6, 0, -7 },
    { 966, 6, 8, 6, 0, -7 },
    { 972, 6, 8, 6, 0, -7 },
    { 978, 6, 8, 6, 0, -7 },
    { 984, 6, 8, 6, 0, -7 },
    { 990, 6, 8, 6, 0, -7 },
    { 996, 6, 8, 6, 0, -7 },
    { 1002, 6, 8, 6, 0, -7 },
    { 1008, 6, 8, 6, 0, -7 },
    { 1014, 6, 8, 6, 0, -7 },
    { 1020, 6, 8, 6, 0, -7 },
    { 1026, 6, 8, 6, 0, -7 },
    { 1032, 6, 8, 6, 0, -7 },
    { 1038, 6, 8, 6, 0, -7 },
    { 1044, 6, 8, 6, 0, -7 },
    { 1050, 6, 8, 6, 0, -7 },
    { 1056, 6, 8, 6, 0, -7 },
    { 1062, 6, 8, 6, 0, -7 },
    { 1068, 6, 8, 6, 0, -7 },
    { 1074, 6, 8, 6, 0, -7 },
    { 1080, 6, 8, 6, 0, -7 },
    { 1086, 6, 8, 6, 0, -7 },
    { 1092, 6, 8, 6, 0, -7 },
    { 1098, 6, 8, 6, 0, -7 },
    { 1104, 6, 8, 6, 0, -7 },
    { 1110, 6, 8, 6, 0, -7 },
    { 1116, 6, 8, 6, 0, -7 },
    { 1122, 6, 8, 6, 0, -7 },
    { 1128, 6, 8, 6, 0, -7 },
    { 1134, 6, 8, 6, 0, -7 },
    { 1140, 6, 8, 6, 0, -7 },
    { 1146, 6, 8, 6, 0, -7 },
    { 1152, 6, 8, 6, 0, -7 },
    { 1158, 6, 8, 6, 0, -7 },
    { 1164, 6, 8, 6, 0, -7 },
    { 1170, 6, 8, 6, 0, -7 },
    { 1176, 6, 8, 6, 0, -7 },
    { 1182, 6, 8, 6, 0, -7 },
    { 1188, 6, 8, 6, 0, -7 },
    { 1194, 6, 8, 6, 0, -7 },
    { 1200, 6, 8, 6, 0, -7 },
    { 1206, 6, 8, 6, 0, -7 },
    { 1212, 6, 8, 6, 0, -7 },
    { 1218, 6, 8, 6, 0, -7 },
    { 1224, 6, 8, 6, 0, -7 },
    { 1230, 6, 8, 6, 0, -7 },
    { 1236, 6, 8, 6, 0, -7 },
    { 1242, 6, 8, 6, 0, -7 },
    { 1248, 6, 8, 6, 0, -7 },
    { 1254, 6, 8, 6, 0, -7 },
    { 1260, 6, 8, 6, 0, -7 },
    { 1266, 6, 8, 6, 0, -7 },
    { 1272, 6, 8, 6, 0, -7 },
    { 1278, 6, 8, 6, 0, -7 },
    { 1284, 6, 8, 6, 0, -7 },
    { 1290, 6, 8, 6, 0, -7 },
    { 1296, 6, 8, 6, 0, -7 },
    { 1302, 6, 8, 6, 0, -7 },
    { 1308, 6, 8, 6, 0, -7 },
    { 1314, 6, 8, 6, 0, -7 },
    { 1320, 6, 8, 6, 0, -7 },
    { 1326, 6, 8, 6, 0, -7 },
    { 1332, 6, 8, 6, 0, -7 },
    { 1338, 6, 8, 6, 0, -7 },
    { 1344, 6, 8, 6, 0, -7 },
    { 1350, 6, 8, 6, 0, -7 },
    { 1356, 6, 8, 6, 0, -7 },
    { 1362, 6, 8, 6, 0, -7 },
    { 1368, 6, 8, 6, 0, -7 },
    { 1374, 6, 8, 6, 0, -7 },
    { 1380, 6, 8, 6, 0, -7 },
    { 1386, 6, 8, 6, 0, -7 },
    { 1392, 6, 8, 6, 0, -7 },
    { 1398, 6, 8, 6, 0, -7 },
    { 1404, 6, 8, 6, 0, -7 },
    { 1410, 6, 8, 6, 0, -7 },
    { 1416, 6, 8, 6, 0, -7 },
    { 1422, 6, 8, 6, 0, -7 },
    { 1428, 6, 8, 6, 0, -7 },
    { 1434, 6, 8, 6, 0, -7 },
    { 1440, 6, 8, 6, 0, -7 },
    { 1446, 6, 8, 6, 0, -7 },
    { 1452, 6, 8, 6, 0, -7 },
    { 1458, 6, 8, 6, 0, -7 },
    { 1464, 6, 8, 6, 0, -7 },
    { 1470, 6, 8, 6, 0, -7 },
    { 1476, 6, 8, 6, 0, -7 },
    { 1482, 6, 8, 6, 0, -7 },
    { 1488, 6, 8, 6, 0, -7 },
    { 1494, 6, 8, 6, 0, -7 },
    { 1500, 6, 8, 6, 0, -7 },
    { 1506, 6, 8, 6, 0, -7 },
    { 1512, 6, 8, 6, 0, -7 },
    { 1518, 6, 8, 6, 0, -7 },
    { 1524, 6, 8, 6, 0, -7 },
    { 1530, 6, 8, 6, 0, -7 }
};

const GFXfont MSX_Font_6x8 PROGMEM = {
(uint8_t *)MSX_Font_6x8_Bitmaps, (GFXglyph *)MSX_Font_6x8_Glyphs, 0, 255, 8};

#endif
