/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font /Users/frankfritze/SquareLine/assets/fonts/AlphaClock Mac.ttf -o /Users/frankfritze/SquareLine/assets/fonts/ui_font_Alpha.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_ALPHA
#define UI_FONT_ALPHA 1
#endif

#if UI_FONT_ALPHA

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfd,

    /* U+0022 "\"" */
    0x99, 0x90,

    /* U+0023 "#" */
    0x24, 0x24, 0xff, 0x24, 0x24, 0xff, 0x24, 0x24,

    /* U+0024 "$" */
    0x8, 0x4, 0x1f, 0xf1, 0x8, 0x83, 0xf8, 0x22,
    0x11, 0x8, 0xff, 0x82, 0x1, 0x0,

    /* U+0025 "%" */
    0x0, 0xf0, 0xe8, 0xdc, 0xc0, 0x80, 0x80, 0x9e,
    0x89, 0x87, 0x80,

    /* U+0026 "&" */
    0x7c, 0x41, 0x20, 0x8f, 0xe8, 0x24, 0x12, 0x8,
    0xff,

    /* U+0027 "'" */
    0xe0,

    /* U+0028 "(" */
    0x7c, 0x21, 0x8, 0x42, 0xf,

    /* U+0029 ")" */
    0xf0, 0x42, 0x10, 0x84, 0x3e,

    /* U+002A "*" */
    0x40, 0x50, 0xc7, 0xf3, 0x5, 0x10, 0x0,

    /* U+002B "+" */
    0x10, 0x20, 0x47, 0xf1, 0x2, 0x4, 0x0,

    /* U+002C "," */
    0x90,

    /* U+002D "-" */
    0xfe,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x1, 0x81, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1,
    0x0,

    /* U+0030 "0" */
    0x7f, 0x41, 0x61, 0x31, 0x19, 0xd, 0x7, 0x2,
    0xfe,

    /* U+0031 "1" */
    0xf8, 0x4, 0x2, 0x1, 0x0, 0x80, 0x40, 0x21,
    0xff,

    /* U+0032 "2" */
    0xff, 0x0, 0x40, 0x2f, 0xe8, 0x4, 0x2, 0x1,
    0xff,

    /* U+0033 "3" */
    0xff, 0x0, 0x40, 0x27, 0xe0, 0x8, 0x4, 0x3,
    0xfe,

    /* U+0034 "4" */
    0x80, 0xc0, 0x60, 0x30, 0x1f, 0xf8, 0x4, 0x2,
    0x1,

    /* U+0035 "5" */
    0xff, 0xc0, 0x20, 0x1f, 0xe0, 0x8, 0x4, 0x3,
    0xfe,

    /* U+0036 "6" */
    0x7f, 0x40, 0x20, 0x1f, 0xe8, 0xc, 0x6, 0x2,
    0xfe,

    /* U+0037 "7" */
    0xff, 0x80, 0x40, 0x20, 0x10, 0x8, 0x4, 0x2,
    0x1,

    /* U+0038 "8" */
    0x7f, 0x40, 0x60, 0x2f, 0xe8, 0xc, 0x6, 0x2,
    0xfe,

    /* U+0039 "9" */
    0x7f, 0x40, 0x60, 0x30, 0x17, 0xf8, 0x4, 0x2,
    0xfe,

    /* U+003A ":" */
    0x90,

    /* U+003B ";" */
    0x80, 0x90,

    /* U+003C "<" */
    0x12, 0x48, 0x86, 0x31,

    /* U+003D "=" */
    0xfe, 0x0, 0x7, 0xf0,

    /* U+003E ">" */
    0x84, 0x21, 0x16, 0xc8,

    /* U+003F "?" */
    0xfe, 0x1, 0x1, 0x1e, 0x20, 0x20, 0x0, 0x20,

    /* U+0040 "@" */
    0x7f, 0x40, 0x67, 0x34, 0x9a, 0x4c, 0xfa, 0x0,
    0xff,

    /* U+0041 "A" */
    0x7f, 0x40, 0x60, 0x30, 0x1f, 0xfc, 0x6, 0x3,
    0x1,

    /* U+0042 "B" */
    0xff, 0x40, 0x60, 0x3f, 0xe8, 0xc, 0x6, 0x3,
    0xfe,

    /* U+0043 "C" */
    0x7f, 0xc0, 0x20, 0x10, 0x8, 0x4, 0x2, 0x0,
    0xff,

    /* U+0044 "D" */
    0xff, 0x40, 0xe0, 0x30, 0x18, 0xc, 0x6, 0x7,
    0xfe,

    /* U+0045 "E" */
    0xff, 0xc0, 0x20, 0x1f, 0xc8, 0x4, 0x2, 0x1,
    0xff,

    /* U+0046 "F" */
    0xff, 0xc0, 0x20, 0x1f, 0xc8, 0x4, 0x2, 0x1,
    0x0,

    /* U+0047 "G" */
    0x7f, 0xc0, 0x20, 0x10, 0x78, 0xc, 0x6, 0x2,
    0xff,

    /* U+0048 "H" */
    0x80, 0xc0, 0x60, 0x3f, 0xf8, 0xc, 0x6, 0x3,
    0x1,

    /* U+0049 "I" */
    0xff, 0x84, 0x2, 0x1, 0x0, 0x80, 0x40, 0x21,
    0xff,

    /* U+004A "J" */
    0xff, 0x80, 0x40, 0x20, 0x10, 0x8, 0x6, 0x2,
    0xfe,

    /* U+004B "K" */
    0x80, 0xc1, 0xa1, 0x13, 0xa, 0x46, 0x12, 0x5,
    0x1,

    /* U+004C "L" */
    0x80, 0x40, 0x20, 0x10, 0x8, 0x4, 0x2, 0x1,
    0xff,

    /* U+004D "M" */
    0x80, 0xe0, 0xe8, 0xb2, 0x98, 0x8c, 0x46, 0x3,
    0x1,

    /* U+004E "N" */
    0xc0, 0xf0, 0x6c, 0x33, 0x18, 0xcc, 0x36, 0xf,
    0x3,

    /* U+004F "O" */
    0x7f, 0x40, 0x60, 0x30, 0x18, 0xc, 0x6, 0x2,
    0xfe,

    /* U+0050 "P" */
    0xff, 0x40, 0x60, 0x30, 0x1f, 0xf4, 0x2, 0x1,
    0x0,

    /* U+0051 "Q" */
    0x7f, 0x40, 0x60, 0x30, 0x18, 0xc, 0x6, 0x6,
    0xff,

    /* U+0052 "R" */
    0xff, 0x40, 0x60, 0x30, 0x1f, 0xf4, 0x42, 0x19,
    0x2,

    /* U+0053 "S" */
    0x7f, 0xc0, 0x20, 0xf, 0xe0, 0x8, 0x4, 0x3,
    0xfe,

    /* U+0054 "T" */
    0xff, 0x84, 0x2, 0x1, 0x0, 0x80, 0x40, 0x20,
    0x10,

    /* U+0055 "U" */
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x2,
    0xfe,

    /* U+0056 "V" */
    0x80, 0xc0, 0x60, 0x30, 0x1c, 0x19, 0x18, 0x50,
    0x10,

    /* U+0057 "W" */
    0x80, 0xc4, 0x62, 0x31, 0x18, 0x8c, 0x46, 0x22,
    0xee,

    /* U+0058 "X" */
    0x81, 0xa1, 0x9, 0x3, 0x1, 0x81, 0x21, 0x9,
    0x3,

    /* U+0059 "Y" */
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xb, 0xfc, 0x2,
    0xfe,

    /* U+005A "Z" */
    0xff, 0x80, 0x80, 0x81, 0x81, 0x1, 0x1, 0x1,
    0xff,

    /* U+005B "[" */
    0xfc, 0x21, 0x8, 0x42, 0x1f,

    /* U+005C "\\" */
    0x80, 0x20, 0x8, 0x2, 0x0, 0x80, 0x20, 0x8,
    0x3,

    /* U+005D "]" */
    0xf8, 0x42, 0x10, 0x84, 0x3f,

    /* U+005E "^" */
    0x18, 0x1a, 0x18, 0x98, 0x20,

    /* U+005F "_" */
    0xff, 0x80,

    /* U+0060 "`" */
    0x94,

    /* U+0061 "a" */
    0x7f, 0x0, 0x5f, 0xf0, 0x18, 0xb, 0xfc,

    /* U+0062 "b" */
    0x80, 0x40, 0x3f, 0xd0, 0x18, 0xc, 0x6, 0x3,
    0xfe,

    /* U+0063 "c" */
    0x7f, 0xc0, 0x20, 0x10, 0x8, 0x3, 0xfc,

    /* U+0064 "d" */
    0x0, 0x80, 0x5f, 0xf0, 0x18, 0xc, 0x6, 0x2,
    0xff,

    /* U+0065 "e" */
    0x7f, 0x40, 0x60, 0x3f, 0xf8, 0x3, 0xf8,

    /* U+0066 "f" */
    0x1f, 0x90, 0x3f, 0x4, 0x2, 0x1, 0x0, 0x80,
    0x40,

    /* U+0067 "g" */
    0x7f, 0xc0, 0x60, 0x30, 0x18, 0xb, 0xfc, 0x2,
    0x7e,

    /* U+0068 "h" */
    0x80, 0x40, 0x3f, 0xd0, 0x18, 0xc, 0x6, 0x3,
    0x1,

    /* U+0069 "i" */
    0x8, 0x0, 0x3f, 0xe1, 0x0, 0x80, 0x40, 0x21,
    0xff,

    /* U+006A "j" */
    0x8, 0x0, 0x3f, 0x1, 0x1, 0x1, 0x1, 0x1,
    0x1, 0xfe,

    /* U+006B "k" */
    0x80, 0x40, 0x20, 0x30, 0x68, 0xc5, 0xc3, 0x19,
    0x3,

    /* U+006C "l" */
    0xf8, 0x4, 0x2, 0x1, 0x0, 0x80, 0x40, 0x21,
    0xff,

    /* U+006D "m" */
    0xf7, 0x44, 0x62, 0x31, 0x18, 0x8c, 0x44,

    /* U+006E "n" */
    0xff, 0x40, 0x60, 0x30, 0x18, 0xc, 0x4,

    /* U+006F "o" */
    0x7f, 0x40, 0x60, 0x30, 0x18, 0xb, 0xf8,

    /* U+0070 "p" */
    0xff, 0x40, 0x60, 0x30, 0x18, 0xf, 0xfa, 0x1,
    0x0,

    /* U+0071 "q" */
    0x7f, 0xc0, 0x60, 0x30, 0x18, 0xb, 0xfc, 0x2,
    0x1,

    /* U+0072 "r" */
    0xff, 0x40, 0x60, 0x10, 0x8, 0x4, 0x0,

    /* U+0073 "s" */
    0x7f, 0xc0, 0x20, 0xf, 0xf0, 0xf, 0xfc,

    /* U+0074 "t" */
    0x20, 0x10, 0x3f, 0x4, 0x2, 0x1, 0x0, 0x80,
    0x3f,

    /* U+0075 "u" */
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xb, 0xfc,

    /* U+0076 "v" */
    0x80, 0xc0, 0x50, 0x44, 0x41, 0x40, 0x40,

    /* U+0077 "w" */
    0x80, 0xc4, 0x62, 0x31, 0x18, 0x8b, 0xb8,

    /* U+0078 "x" */
    0x81, 0x31, 0x7, 0x3, 0x86, 0x24, 0x8,

    /* U+0079 "y" */
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xb, 0xfc, 0x2,
    0xfe,

    /* U+007A "z" */
    0xff, 0x81, 0x83, 0x2, 0x6, 0x7, 0xfc,

    /* U+007B "{" */
    0x1c, 0x82, 0x10, 0x40, 0x82, 0x7,

    /* U+007C "|" */
    0xff,

    /* U+007D "}" */
    0xe0, 0x41, 0x2, 0x8, 0x41, 0x38,

    /* U+007E "~" */
    0x68, 0x40
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 150, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 150, .box_w = 1, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 150, .box_w = 4, .box_h = 3, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 4, .adv_w = 150, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12, .adv_w = 150, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 26, .adv_w = 150, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 37, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 46, .adv_w = 150, .box_w = 1, .box_h = 3, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 47, .adv_w = 150, .box_w = 5, .box_h = 8, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 150, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 57, .adv_w = 150, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 64, .adv_w = 150, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 71, .adv_w = 150, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 150, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 73, .adv_w = 150, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 74, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 146, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 164, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 150, .box_w = 1, .box_h = 4, .ofs_x = 4, .ofs_y = 2},
    {.bitmap_index = 174, .adv_w = 150, .box_w = 2, .box_h = 6, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 150, .box_w = 4, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 150, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 184, .adv_w = 150, .box_w = 4, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 150, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 214, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 223, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 250, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 259, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 277, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 295, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 304, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 313, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 322, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 331, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 358, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 367, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 376, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 385, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 394, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 412, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 421, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 430, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 439, .adv_w = 150, .box_w = 5, .box_h = 8, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 444, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 453, .adv_w = 150, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 458, .adv_w = 150, .box_w = 9, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 463, .adv_w = 150, .box_w = 9, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 465, .adv_w = 150, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 466, .adv_w = 150, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 473, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 482, .adv_w = 150, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 489, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 498, .adv_w = 150, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 505, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 514, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 523, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 532, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 541, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 551, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 560, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 569, .adv_w = 150, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 576, .adv_w = 150, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 150, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 590, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 599, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 608, .adv_w = 150, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 615, .adv_w = 150, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 622, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 631, .adv_w = 150, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 638, .adv_w = 150, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 645, .adv_w = 150, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 652, .adv_w = 150, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 659, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 668, .adv_w = 150, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 675, .adv_w = 150, .box_w = 6, .box_h = 8, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 681, .adv_w = 150, .box_w = 1, .box_h = 8, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 682, .adv_w = 150, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 688, .adv_w = 150, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_Alpha = {
#else
lv_font_t ui_font_Alpha = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 12,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_ALPHA*/

