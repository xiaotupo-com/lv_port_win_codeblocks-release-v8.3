/*******************************************************************************
 * Size: 24 px
 * Bpp: 2
 * Opts: --bpp 2 --size 24 --no-compress --font SourceHanSansCN-Normal-2.otf --symbols 你好世界，小土坡有限公司，放大器，技术设计。开关启动停止!！。. --format lvgl -o source_han_sans_cn_normal_24.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef SOURCE_HAN_SANS_CN_NORMAL_24
#define SOURCE_HAN_SANS_CN_NORMAL_24 1
#endif

#if SOURCE_HAN_SANS_CN_NORMAL_24

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0021 "!" */
    0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38,
    0x38, 0x38, 0x34, 0x34, 0x10, 0x0, 0x78, 0xbc,
    0x38,

    /* U+002E "." */
    0x0, 0x2d, 0x3e, 0x2c,

    /* U+3002 "。" */
    0xb, 0x80, 0x39, 0x74, 0xa0, 0x1c, 0xd0, 0xc,
    0xd0, 0xc, 0xa0, 0xc, 0x38, 0x74, 0xb, 0xd0,

    /* U+4E16 "世" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9, 0x0,
    0xe0, 0x7, 0x0, 0x0, 0xe0, 0xe, 0x0, 0xb0,
    0x0, 0xe, 0x0, 0xe0, 0xb, 0x0, 0x0, 0xe0,
    0xe, 0x0, 0xb0, 0x0, 0xe, 0x0, 0xe0, 0xb,
    0x0, 0x0, 0xe0, 0xe, 0x0, 0xb0, 0x7, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x6a, 0xfa, 0xaf, 0xaa,
    0xfa, 0x90, 0xe, 0x0, 0xe0, 0xb, 0x0, 0x0,
    0xe0, 0xe, 0x0, 0xb0, 0x0, 0xe, 0x0, 0xe0,
    0xb, 0x0, 0x0, 0xe0, 0xe, 0x0, 0xb0, 0x0,
    0xe, 0x0, 0xe0, 0xb, 0x0, 0x0, 0xe0, 0xf,
    0x55, 0xb0, 0x0, 0xe, 0x0, 0xff, 0xff, 0x0,
    0x0, 0xe0, 0x0, 0x0, 0x0, 0x0, 0xe, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xe0, 0x0, 0x0, 0x0,
    0x0, 0xf, 0x55, 0x55, 0x55, 0x54, 0x0, 0xff,
    0xff, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+4F60 "你" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa,
    0x3, 0x80, 0x0, 0x0, 0x0, 0xe, 0x3, 0x80,
    0x0, 0x0, 0x0, 0x2c, 0x7, 0x40, 0x0, 0x0,
    0x0, 0x38, 0xf, 0x0, 0x0, 0x0, 0x0, 0xb0,
    0xf, 0x55, 0x55, 0x54, 0x0, 0xe0, 0x1f, 0xff,
    0xff, 0xfc, 0x3, 0xe0, 0x3c, 0x3, 0x40, 0x38,
    0xb, 0xe0, 0x74, 0x3, 0x40, 0x38, 0x1e, 0xe0,
    0xf0, 0x3, 0x40, 0x34, 0x7c, 0xe1, 0xc0, 0x3,
    0x40, 0x20, 0x30, 0xe0, 0x3, 0x43, 0x47, 0x0,
    0x0, 0xe0, 0x7, 0x3, 0x43, 0x40, 0x0, 0xe0,
    0xf, 0x3, 0x42, 0xc0, 0x0, 0xe0, 0xe, 0x3,
    0x41, 0xd0, 0x0, 0xe0, 0x1c, 0x3, 0x40, 0xf0,
    0x0, 0xe0, 0x3c, 0x3, 0x40, 0xb0, 0x0, 0xe0,
    0xb4, 0x3, 0x40, 0x34, 0x0, 0xe0, 0xe0, 0x3,
    0x40, 0x38, 0x0, 0xe0, 0x40, 0x3, 0x40, 0x14,
    0x0, 0xe0, 0x0, 0x3, 0x40, 0x0, 0x0, 0xe0,
    0x0, 0xab, 0x40, 0x0, 0x0, 0xe0, 0x0, 0xbe,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+505C "停" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x28,
    0x0, 0x34, 0x0, 0x0, 0x0, 0xd0, 0x0, 0xb0,
    0x0, 0x0, 0xb, 0x3f, 0xff, 0xff, 0xfe, 0x0,
    0x38, 0x55, 0x55, 0x55, 0x54, 0x2, 0xc0, 0x0,
    0x0, 0x0, 0x0, 0xe, 0x1, 0xff, 0xff, 0xf8,
    0x0, 0xb4, 0x7, 0x0, 0x0, 0xe0, 0x7, 0xd0,
    0x1c, 0x0, 0x3, 0x80, 0x3f, 0x40, 0x7f, 0xff,
    0xfe, 0x3, 0xcd, 0x0, 0x0, 0x0, 0x0, 0x9,
    0x34, 0x0, 0x0, 0x0, 0x0, 0x0, 0xd1, 0xff,
    0xff, 0xff, 0xf8, 0x3, 0x47, 0x55, 0x55, 0x55,
    0xe0, 0xd, 0x1c, 0x0, 0x0, 0x3, 0x80, 0x34,
    0x67, 0xff, 0xff, 0xda, 0x0, 0xd0, 0x5, 0x5f,
    0x55, 0x0, 0x3, 0x40, 0x0, 0x2c, 0x0, 0x0,
    0xd, 0x0, 0x0, 0xb0, 0x0, 0x0, 0x34, 0x0,
    0x2, 0xc0, 0x0, 0x0, 0xd0, 0x0, 0xb, 0x0,
    0x0, 0x3, 0x40, 0x5, 0x7c, 0x0, 0x0, 0xd,
    0x0, 0x3f, 0xd0, 0x0, 0x0,

    /* U+516C "公" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1d,
    0x0, 0x74, 0x0, 0x0, 0x0, 0xf0, 0x0, 0xf0,
    0x0, 0x0, 0x7, 0x80, 0x1, 0xd0, 0x0, 0x0,
    0x3c, 0x0, 0x3, 0xc0, 0x0, 0x2, 0xd0, 0x0,
    0x3, 0xc0, 0x0, 0x1f, 0x0, 0x0, 0x7, 0x80,
    0x0, 0xf0, 0x1, 0x0, 0xb, 0x80, 0xf, 0x40,
    0x1e, 0x0, 0xf, 0x80, 0xf4, 0x0, 0xf0, 0x0,
    0xf, 0x83, 0x40, 0x7, 0x80, 0x0, 0xd, 0x0,
    0x0, 0x3c, 0x0, 0x0, 0x0, 0x0, 0x2, 0xd0,
    0x0, 0x0, 0x0, 0x0, 0x1f, 0x0, 0x38, 0x0,
    0x0, 0x0, 0xf0, 0x0, 0xb4, 0x0, 0x0, 0xb,
    0x40, 0x0, 0xf4, 0x0, 0x0, 0x78, 0x0, 0x0,
    0xf0, 0x0, 0x7, 0xc0, 0x0, 0x6, 0xf0, 0x0,
    0x7f, 0xff, 0xff, 0xff, 0xd0, 0x1, 0xff, 0xea,
    0x95, 0x3, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x7,
    0x80, 0x0, 0x0, 0x0, 0x0, 0x8, 0x0,

    /* U+5173 "关" */
    0x0, 0x24, 0x0, 0x0, 0xe0, 0x0, 0x0, 0xf0,
    0x0, 0x7, 0x40, 0x0, 0x0, 0xe0, 0x0, 0x3c,
    0x0, 0x0, 0x2, 0xc0, 0x1, 0xd0, 0x0, 0x0,
    0x2, 0x0, 0xe, 0x0, 0x0, 0x2f, 0xff, 0xff,
    0xff, 0xfc, 0x0, 0x6a, 0xaa, 0xfa, 0xaa, 0xa0,
    0x0, 0x0, 0x2, 0xc0, 0x0, 0x0, 0x0, 0x0,
    0xb, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2c, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xb0, 0x0, 0x0, 0xf,
    0xff, 0xff, 0xff, 0xff, 0xf4, 0x2a, 0xaa, 0xaf,
    0xea, 0xaa, 0x90, 0x0, 0x0, 0x7f, 0x0, 0x0,
    0x0, 0x0, 0x3, 0xde, 0x0, 0x0, 0x0, 0x0,
    0x2e, 0x1e, 0x0, 0x0, 0x0, 0x2, 0xf0, 0x2e,
    0x0, 0x0, 0x0, 0x2f, 0x0, 0x2e, 0x0, 0x0,
    0x7, 0xe0, 0x0, 0x2f, 0x40, 0x1, 0xfd, 0x0,
    0x0, 0x1f, 0xd0, 0x3f, 0x80, 0x0, 0x0, 0xb,
    0xe0, 0x50, 0x0, 0x0, 0x0, 0x1, 0x0,

    /* U+52A8 "动" */
    0x0, 0x0, 0x0, 0x2, 0x40, 0x0, 0x0, 0x0,
    0x0, 0x34, 0x0, 0x2f, 0xff, 0xf4, 0x3, 0x40,
    0x1, 0x55, 0x55, 0x0, 0x34, 0x0, 0x0, 0x0,
    0x0, 0x3, 0x40, 0x0, 0x0, 0x0, 0x15, 0xb9,
    0x55, 0x0, 0x0, 0x3, 0xff, 0xff, 0xe1, 0x55,
    0x55, 0x40, 0x70, 0xe, 0xbf, 0xff, 0xfc, 0x7,
    0x0, 0xe0, 0x1d, 0x0, 0x0, 0xb0, 0xe, 0x2,
    0xc0, 0x0, 0xb, 0x0, 0xd0, 0x3c, 0x4, 0x0,
    0xb0, 0xd, 0x3, 0x81, 0xc0, 0xe, 0x0, 0xd0,
    0x70, 0xe, 0x0, 0xd0, 0xd, 0xb, 0x0, 0xb0,
    0x1c, 0x1, 0xd0, 0xd0, 0x7, 0x42, 0xc0, 0x1c,
    0x1c, 0x6b, 0xf8, 0x38, 0x1, 0xc3, 0xff, 0xe6,
    0xc7, 0x40, 0x2c, 0x3e, 0x40, 0x8, 0xf0, 0x2,
    0xc0, 0x0, 0x0, 0x2d, 0x0, 0x38, 0x0, 0x0,
    0x7, 0x82, 0x9b, 0x40, 0x0, 0x0, 0x70, 0x3f,
    0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+53F8 "司" */
    0x55, 0x55, 0x55, 0x55, 0x54, 0xbf, 0xff, 0xff,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x2c, 0x0,
    0x0, 0x0, 0x0, 0x2c, 0x15, 0x55, 0x55, 0x54,
    0x2c, 0xbf, 0xff, 0xff, 0xfc, 0x2c, 0x0, 0x0,
    0x0, 0x0, 0x2c, 0x0, 0x0, 0x0, 0x0, 0x2c,
    0x0, 0x0, 0x0, 0x0, 0x2c, 0xf, 0xff, 0xff,
    0xc0, 0x2c, 0xe, 0x55, 0x56, 0xc0, 0x2c, 0xe,
    0x0, 0x1, 0xc0, 0x2c, 0xe, 0x0, 0x1, 0xc0,
    0x2c, 0xe, 0x0, 0x1, 0xc0, 0x2c, 0xe, 0x0,
    0x1, 0xc0, 0x2c, 0xf, 0xff, 0xff, 0xc0, 0x2c,
    0xf, 0x55, 0x55, 0x40, 0x2c, 0xe, 0x0, 0x0,
    0x0, 0x2c, 0x0, 0x0, 0x0, 0x0, 0x2c, 0x0,
    0x0, 0x0, 0x1a, 0xbc, 0x0, 0x0, 0x0, 0x1f,
    0xf4,

    /* U+542F "启" */
    0x0, 0x0, 0xe, 0x0, 0x0, 0x0, 0x0, 0x2,
    0xc0, 0x0, 0x0, 0x0, 0x0, 0x38, 0x0, 0x0,
    0xa, 0xaa, 0xaf, 0xaa, 0xa4, 0x3, 0xff, 0xff,
    0xff, 0xff, 0x0, 0xe0, 0x0, 0x0, 0x2, 0xc0,
    0x38, 0x0, 0x0, 0x0, 0xb0, 0xe, 0x0, 0x0,
    0x0, 0x2c, 0x3, 0xea, 0xaa, 0xaa, 0xaf, 0x0,
    0xff, 0xff, 0xff, 0xff, 0xc0, 0x38, 0x0, 0x0,
    0x0, 0x0, 0xe, 0x0, 0x0, 0x0, 0x0, 0x3,
    0x45, 0x55, 0x55, 0x55, 0x1, 0xd3, 0xff, 0xff,
    0xff, 0xd0, 0x70, 0xd0, 0x0, 0x0, 0x74, 0x2c,
    0x34, 0x0, 0x0, 0x1d, 0xf, 0xd, 0x0, 0x0,
    0x7, 0x43, 0x83, 0x40, 0x0, 0x1, 0xd2, 0xd0,
    0xe5, 0x55, 0x55, 0xb4, 0xf0, 0x3f, 0xff, 0xff,
    0xfd, 0xb4, 0xd, 0x0, 0x0, 0x7, 0x48, 0x3,
    0x40, 0x0, 0x1, 0xd0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+5668 "器" */
    0x3, 0xff, 0xf4, 0x3f, 0xff, 0x80, 0xe, 0x56,
    0xd0, 0xe5, 0x5e, 0x0, 0x34, 0x3, 0x43, 0x40,
    0x38, 0x0, 0xd0, 0xd, 0xd, 0x0, 0xe0, 0x3,
    0x40, 0x34, 0x34, 0x3, 0x80, 0xf, 0xff, 0xd0,
    0xff, 0xfe, 0x0, 0x15, 0x55, 0xe1, 0x65, 0x54,
    0x0, 0x0, 0xb, 0x40, 0xf4, 0x0, 0x0, 0x0,
    0x38, 0x0, 0x78, 0x0, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xd1, 0x55, 0xbd, 0x55, 0xf9, 0x55, 0x0,
    0x7, 0xc0, 0x0, 0xf4, 0x0, 0x0, 0xb8, 0x0,
    0x0, 0xbd, 0x0, 0x2f, 0xd5, 0x40, 0x55, 0xbf,
    0x93, 0xff, 0xff, 0x83, 0xff, 0xff, 0x40, 0xa0,
    0xe, 0xd, 0x0, 0xd0, 0x2, 0x80, 0x38, 0x34,
    0x3, 0x40, 0xa, 0x0, 0xe0, 0xd0, 0xd, 0x0,
    0x2d, 0x57, 0x83, 0x95, 0x74, 0x0, 0xbf, 0xfe,
    0xf, 0xff, 0xd0, 0x2, 0xc0, 0x34, 0x34, 0x3,
    0x40,

    /* U+571F "土" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xb0, 0x0, 0x0, 0x0, 0x0, 0xb, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xb0, 0x0, 0x0, 0x0, 0x0,
    0xb, 0x0, 0x0, 0x0, 0x0, 0x0, 0xb0, 0x0,
    0x0, 0x0, 0x0, 0xb, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xb0, 0x0, 0x0, 0x6, 0xaa, 0xaf, 0xaa,
    0xaa, 0x0, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x0,
    0x0, 0xb, 0x0, 0x0, 0x0, 0x0, 0x0, 0xb0,
    0x0, 0x0, 0x0, 0x0, 0xb, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xb0, 0x0, 0x0, 0x0, 0x0, 0xb,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xb0, 0x0, 0x0,
    0x0, 0x0, 0xb, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xb0, 0x0, 0x0, 0x0, 0x0, 0xb, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xb0, 0x0, 0x0, 0x7f, 0xff,
    0xff, 0xff, 0xff, 0xf6, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa,

    /* U+5761 "坡" */
    0x0, 0x90, 0x0, 0x3, 0x40, 0x0, 0x3, 0x80,
    0x0, 0xe, 0x0, 0x0, 0xe, 0x0, 0x0, 0x38,
    0x0, 0x0, 0x38, 0x6, 0xaa, 0xfa, 0xa9, 0x0,
    0xe0, 0x2f, 0xff, 0xff, 0xf4, 0x57, 0xd4, 0xb0,
    0xe, 0x1, 0xc3, 0xff, 0xf6, 0xc0, 0x38, 0xb,
    0x0, 0x38, 0xb, 0x0, 0xe0, 0x38, 0x0, 0xe0,
    0x2c, 0x3, 0x80, 0x40, 0x3, 0x80, 0xb5, 0x6f,
    0x55, 0x0, 0xe, 0x2, 0xff, 0xff, 0xfd, 0x0,
    0x38, 0xb, 0x70, 0x0, 0xb0, 0x0, 0xe0, 0x2c,
    0xe0, 0x3, 0x80, 0x3, 0x84, 0xf1, 0xc0, 0x2c,
    0x0, 0xf, 0xf7, 0x83, 0x80, 0xe0, 0x1, 0xbe,
    0xd, 0x7, 0x4f, 0x0, 0x3f, 0x80, 0xb0, 0xb,
    0xf0, 0x0, 0x90, 0x3, 0xc0, 0xf, 0x80, 0x0,
    0x0, 0x1d, 0x0, 0xff, 0x80, 0x0, 0x0, 0xf0,
    0x2f, 0xb, 0xd0, 0x0, 0xb, 0xb, 0xe0, 0x7,
    0xf4, 0x0, 0x4, 0x28, 0x0, 0x1, 0x80,

    /* U+5927 "大" */
    0x0, 0x0, 0xb, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x2c, 0x0, 0x0, 0x0, 0x0, 0x0, 0xb0, 0x0,
    0x0, 0x0, 0x0, 0x2, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0xb, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3c,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0,
    0xf, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x2a, 0xaa,
    0xaf, 0xea, 0xaa, 0x90, 0x0, 0x0, 0x7f, 0x0,
    0x0, 0x0, 0x0, 0x3, 0xdd, 0x0, 0x0, 0x0,
    0x0, 0xe, 0x3c, 0x0, 0x0, 0x0, 0x0, 0xb4,
    0xb0, 0x0, 0x0, 0x0, 0x3, 0xc0, 0xf0, 0x0,
    0x0, 0x0, 0x2d, 0x2, 0xd0, 0x0, 0x0, 0x0,
    0xf0, 0x3, 0xc0, 0x0, 0x0, 0xf, 0x0, 0x7,
    0xc0, 0x0, 0x0, 0xf4, 0x0, 0xb, 0xc0, 0x0,
    0x1f, 0x40, 0x0, 0xb, 0xc0, 0x2, 0xf4, 0x0,
    0x0, 0xb, 0xe0, 0x7f, 0x0, 0x0, 0x0, 0x7,
    0xf0, 0x90, 0x0, 0x0, 0x0, 0x2, 0x0,

    /* U+597D "好" */
    0x0, 0xb0, 0x0, 0x0, 0x0, 0x0, 0x2, 0xc0,
    0x0, 0x0, 0x0, 0x0, 0xe, 0x0, 0x2f, 0xff,
    0xff, 0x0, 0x34, 0x0, 0x0, 0x1, 0xf4, 0x1,
    0xd0, 0x0, 0x0, 0x7, 0x80, 0xff, 0xff, 0xc0,
    0x0, 0x78, 0x1, 0x7d, 0x5f, 0x0, 0x7, 0x80,
    0x0, 0xe0, 0x2c, 0x0, 0x3c, 0x0, 0x3, 0x40,
    0xe0, 0x0, 0xe0, 0x0, 0x1c, 0x3, 0x40, 0x3,
    0x80, 0x0, 0xb0, 0x1d, 0xbf, 0xff, 0xff, 0xc3,
    0x80, 0xb1, 0xaa, 0xbe, 0xaa, 0xe, 0x3, 0x80,
    0x0, 0xe0, 0x0, 0x2f, 0x1d, 0x0, 0x3, 0x80,
    0x0, 0x1f, 0xf0, 0x0, 0xe, 0x0, 0x0, 0xf,
    0xc0, 0x0, 0x38, 0x0, 0x0, 0x3f, 0x80, 0x0,
    0xe0, 0x0, 0x2, 0xdb, 0x80, 0x3, 0x80, 0x0,
    0x1e, 0xb, 0x0, 0xe, 0x0, 0x2, 0xf0, 0x4,
    0x0, 0x38, 0x0, 0x3e, 0x0, 0x0, 0x56, 0xd0,
    0x0, 0x90, 0x0, 0x1, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+5C0F "小" */
    0x0, 0x0, 0x1, 0x40, 0x0, 0x0, 0x0, 0x0,
    0x2, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x2, 0xc0,
    0x0, 0x0, 0x0, 0x0, 0x2, 0xc0, 0x0, 0x0,
    0x0, 0x0, 0x2, 0xc0, 0x0, 0x0, 0x0, 0x0,
    0x2, 0xc0, 0x0, 0x0, 0x0, 0x34, 0x2, 0xc0,
    0x2c, 0x0, 0x0, 0x74, 0x2, 0xc0, 0x2d, 0x0,
    0x0, 0xb0, 0x2, 0xc0, 0xf, 0x0, 0x0, 0xf0,
    0x2, 0xc0, 0x7, 0x40, 0x0, 0xe0, 0x2, 0xc0,
    0x3, 0xc0, 0x2, 0xc0, 0x2, 0xc0, 0x1, 0xd0,
    0x3, 0xc0, 0x2, 0xc0, 0x0, 0xf0, 0xb, 0x40,
    0x2, 0xc0, 0x0, 0xb4, 0xf, 0x0, 0x2, 0xc0,
    0x0, 0x38, 0x3c, 0x0, 0x2, 0xc0, 0x0, 0x3c,
    0x28, 0x0, 0x2, 0xc0, 0x0, 0x28, 0x0, 0x0,
    0x2, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x2, 0xc0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xc0, 0x0, 0x0,
    0x0, 0x2, 0xab, 0xc0, 0x0, 0x0, 0x0, 0x3,
    0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0,

    /* U+5F00 "开" */
    0x15, 0x55, 0x55, 0x55, 0x55, 0x42, 0xff, 0xff,
    0xff, 0xff, 0xfc, 0x0, 0xb, 0x0, 0x3, 0x80,
    0x0, 0x0, 0xb0, 0x0, 0x34, 0x0, 0x0, 0xb,
    0x0, 0x3, 0x40, 0x0, 0x0, 0xb0, 0x0, 0x34,
    0x0, 0x0, 0xb, 0x0, 0x3, 0x40, 0x0, 0x0,
    0xb0, 0x0, 0x34, 0x0, 0x0, 0xb, 0x0, 0x3,
    0x40, 0x7, 0xff, 0xff, 0xff, 0xff, 0xff, 0x6a,
    0xaf, 0xaa, 0xab, 0xea, 0xa0, 0x0, 0xe0, 0x0,
    0x34, 0x0, 0x0, 0xe, 0x0, 0x3, 0x40, 0x0,
    0x1, 0xd0, 0x0, 0x34, 0x0, 0x0, 0x2c, 0x0,
    0x3, 0x40, 0x0, 0x3, 0x80, 0x0, 0x34, 0x0,
    0x0, 0xf0, 0x0, 0x3, 0x40, 0x0, 0x2e, 0x0,
    0x0, 0x34, 0x0, 0xb, 0xc0, 0x0, 0x3, 0x40,
    0x2, 0xf0, 0x0, 0x0, 0x34, 0x0, 0x28, 0x0,
    0x0, 0x3, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+6280 "技" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7, 0x0,
    0x0, 0x38, 0x0, 0x0, 0x1c, 0x0, 0x0, 0xe0,
    0x0, 0x0, 0x70, 0x0, 0x3, 0x80, 0x0, 0x1,
    0xc0, 0x0, 0x1e, 0x0, 0x0, 0x7, 0x43, 0xff,
    0xff, 0xff, 0x47, 0xff, 0xf1, 0x55, 0xe5, 0x54,
    0x5, 0xb5, 0x40, 0x3, 0x80, 0x0, 0x1, 0xc0,
    0x0, 0xe, 0x0, 0x0, 0x7, 0x0, 0x0, 0x38,
    0x0, 0x0, 0x1c, 0x3, 0xff, 0xff, 0xf8, 0x0,
    0x70, 0x4b, 0x95, 0x56, 0xd0, 0x1, 0xff, 0xe,
    0x0, 0xb, 0x1, 0xbf, 0xd0, 0x2c, 0x0, 0x78,
    0xb, 0xec, 0x0, 0x38, 0x3, 0xc0, 0x0, 0x70,
    0x0, 0xb4, 0x2d, 0x0, 0x1, 0xc0, 0x0, 0xf2,
    0xd0, 0x0, 0x7, 0x0, 0x0, 0xfe, 0x0, 0x0,
    0x1c, 0x0, 0x3, 0xf0, 0x0, 0x0, 0x70, 0x0,
    0x7e, 0xf4, 0x0, 0x1, 0xc0, 0x1f, 0xd0, 0xfd,
    0x0, 0x5b, 0xb, 0xf8, 0x0, 0x7f, 0x83, 0xf8,
    0x2d, 0x0, 0x0, 0x1e, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0,

    /* U+653E "放" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x28,
    0x0, 0x7, 0x0, 0x0, 0x0, 0x2c, 0x0, 0xb,
    0x0, 0x0, 0x0, 0xd, 0x0, 0xf, 0x0, 0x0,
    0x0, 0x9, 0x0, 0xe, 0x0, 0x0, 0x3f, 0xff,
    0xfe, 0x1e, 0xaa, 0xa4, 0x15, 0xe5, 0x55, 0x3f,
    0xff, 0xfc, 0x0, 0xe0, 0x0, 0x3c, 0x2, 0xc0,
    0x0, 0xe0, 0x0, 0xbc, 0x3, 0xc0, 0x0, 0xe5,
    0x50, 0xfd, 0x3, 0x80, 0x0, 0xff, 0xfa, 0xdd,
    0x3, 0x40, 0x0, 0xe0, 0x3b, 0x8b, 0x7, 0x0,
    0x0, 0xd0, 0x35, 0x7, 0xf, 0x0, 0x0, 0xd0,
    0x34, 0x3, 0x4e, 0x0, 0x0, 0xd0, 0x34, 0x3,
    0xec, 0x0, 0x1, 0xc0, 0x34, 0x1, 0xf8, 0x0,
    0x1, 0xc0, 0x34, 0x0, 0xf0, 0x0, 0x3, 0xc0,
    0x34, 0x1, 0xf8, 0x0, 0x3, 0x80, 0x70, 0x7,
    0xfd, 0x0, 0xb, 0x0, 0x70, 0xf, 0xf, 0x0,
    0xe, 0x0, 0xb0, 0xbc, 0x7, 0xd0, 0x3c, 0x15,
    0xf3, 0xf0, 0x1, 0xf8, 0x34, 0x1f, 0xd7, 0x40,
    0x0, 0x38, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+6709 "有" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0,
    0x0, 0x0, 0xe, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0xff, 0xff, 0xff, 0xe2, 0xaa, 0xbe, 0xaa, 0xaa,
    0xa9, 0x0, 0xb, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xe0, 0x0, 0x0, 0x0, 0x0, 0x3e, 0x55, 0x55,
    0x54, 0x0, 0x7, 0xff, 0xff, 0xff, 0xc0, 0x0,
    0xfc, 0x0, 0x0, 0x2c, 0x0, 0x3e, 0xc0, 0x0,
    0x2, 0xc0, 0xf, 0x2d, 0x55, 0x55, 0x7c, 0x7,
    0xc2, 0xff, 0xff, 0xff, 0xc0, 0x20, 0x2c, 0x0,
    0x0, 0x2c, 0x0, 0x2, 0xc0, 0x0, 0x2, 0xc0,
    0x0, 0x2d, 0x55, 0x55, 0x7c, 0x0, 0x2, 0xff,
    0xff, 0xff, 0xc0, 0x0, 0x2c, 0x0, 0x0, 0x2c,
    0x0, 0x2, 0xc0, 0x0, 0x2, 0xc0, 0x0, 0x2c,
    0x0, 0x0, 0x2c, 0x0, 0x2, 0xc0, 0x1, 0xab,
    0x80, 0x0, 0x2c, 0x0, 0x1f, 0xe0, 0x0,

    /* U+672F "术" */
    0x0, 0x0, 0x3, 0x80, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xf, 0x0, 0x0, 0x0, 0x0, 0x3c, 0x1f,
    0x40, 0x0, 0x0, 0x0, 0xf0, 0xf, 0x80, 0x0,
    0x0, 0x3, 0xc0, 0x9, 0x0, 0x0, 0x0, 0xf,
    0x0, 0x0, 0x1, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x6, 0xaa, 0xab, 0xfe, 0xaa, 0xa8, 0x0, 0x0,
    0xf, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xf0,
    0x0, 0x0, 0x0, 0x3, 0xbd, 0xd0, 0x0, 0x0,
    0x0, 0x3c, 0xf2, 0xd0, 0x0, 0x0, 0x3, 0xd3,
    0xc3, 0xc0, 0x0, 0x0, 0x2d, 0xf, 0x3, 0xc0,
    0x0, 0x2, 0xe0, 0x3c, 0x3, 0xc0, 0x0, 0x2e,
    0x0, 0xf0, 0x7, 0xc0, 0x7, 0xe0, 0x3, 0xc0,
    0x7, 0xd0, 0xbd, 0x0, 0xf, 0x0, 0x3, 0xe1,
    0xc0, 0x0, 0x3c, 0x0, 0x2, 0x0, 0x0, 0x0,
    0xf0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xc0, 0x0,
    0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0,

    /* U+6B62 "止" */
    0x0, 0x0, 0x3, 0x80, 0x0, 0x0, 0x0, 0x0,
    0x38, 0x0, 0x0, 0x0, 0x0, 0x3, 0x80, 0x0,
    0x0, 0x0, 0x0, 0x38, 0x0, 0x0, 0x0, 0x0,
    0x3, 0x80, 0x0, 0x0, 0x18, 0x0, 0x38, 0x0,
    0x0, 0x2, 0xc0, 0x3, 0x80, 0x0, 0x0, 0x2c,
    0x0, 0x38, 0x0, 0x0, 0x2, 0xc0, 0x3, 0xff,
    0xff, 0x80, 0x2c, 0x0, 0x3e, 0xaa, 0xa4, 0x2,
    0xc0, 0x3, 0x80, 0x0, 0x0, 0x2c, 0x0, 0x38,
    0x0, 0x0, 0x2, 0xc0, 0x3, 0x80, 0x0, 0x0,
    0x2c, 0x0, 0x38, 0x0, 0x0, 0x2, 0xc0, 0x3,
    0x80, 0x0, 0x0, 0x2c, 0x0, 0x38, 0x0, 0x0,
    0x2, 0xc0, 0x3, 0x80, 0x0, 0x0, 0x2c, 0x0,
    0x38, 0x0, 0x0, 0x2, 0xc0, 0x3, 0x80, 0x0,
    0xf, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0x90,

    /* U+754C "界" */
    0x1, 0x55, 0x55, 0x55, 0x54, 0x0, 0x3f, 0xff,
    0xff, 0xff, 0xc0, 0x3, 0x80, 0xb, 0x0, 0x2c,
    0x0, 0x38, 0x0, 0xb0, 0x2, 0xc0, 0x3, 0x80,
    0xf, 0x0, 0x2c, 0x0, 0x3f, 0xff, 0xff, 0xff,
    0xc0, 0x3, 0x80, 0xb, 0x0, 0x2c, 0x0, 0x38,
    0x0, 0xb0, 0x2, 0xc0, 0x3, 0x80, 0xb, 0x0,
    0x2c, 0x0, 0x3f, 0xff, 0xff, 0xff, 0xc0, 0x0,
    0x2, 0xe0, 0x7c, 0x0, 0x0, 0x0, 0xb8, 0x1,
    0xe0, 0x0, 0x0, 0x3e, 0x0, 0x7, 0xc0, 0x0,
    0x2f, 0x50, 0x0, 0x1f, 0x80, 0x2f, 0x87, 0x0,
    0xb, 0x2f, 0xd3, 0x80, 0x70, 0x0, 0xb0, 0x2d,
    0x0, 0xb, 0x0, 0xb, 0x0, 0x0, 0x0, 0xf0,
    0x0, 0xb0, 0x0, 0x0, 0x1d, 0x0, 0xb, 0x0,
    0x0, 0x7, 0xc0, 0x0, 0xb0, 0x0, 0x7, 0xf0,
    0x0, 0xb, 0x0, 0x0, 0x74, 0x0, 0x0, 0xb0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+8BA1 "计" */
    0x0, 0x0, 0x0, 0xe, 0x0, 0x0, 0x78, 0x0,
    0x0, 0xe0, 0x0, 0x2, 0xe0, 0x0, 0xe, 0x0,
    0x0, 0x7, 0x80, 0x0, 0xe0, 0x0, 0x0, 0x1c,
    0x0, 0xe, 0x0, 0x0, 0x0, 0x0, 0x0, 0xe0,
    0x0, 0x0, 0x0, 0x0, 0xe, 0x0, 0x5, 0x55,
    0x0, 0x0, 0xf0, 0x0, 0xff, 0xe0, 0xff, 0xff,
    0xff, 0xf0, 0xe, 0xa, 0xaa, 0xfa, 0xaa, 0x0,
    0xe0, 0x0, 0xe, 0x0, 0x0, 0xe, 0x0, 0x0,
    0xe0, 0x0, 0x0, 0xe0, 0x0, 0xe, 0x0, 0x0,
    0xe, 0x0, 0x0, 0xe0, 0x0, 0x0, 0xe0, 0x0,
    0xe, 0x0, 0x0, 0xe, 0x0, 0x0, 0xe0, 0x0,
    0x0, 0xe1, 0xc0, 0xe, 0x0, 0x0, 0xe, 0xbc,
    0x0, 0xe0, 0x0, 0x0, 0xfe, 0x0, 0xe, 0x0,
    0x0, 0x2f, 0x40, 0x0, 0xe0, 0x0, 0x3, 0xc0,
    0x0, 0xe, 0x0, 0x0, 0x0, 0x0, 0x0, 0xe0,
    0x0,

    /* U+8BBE "设" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xb0, 0x0,
    0x3f, 0xff, 0x0, 0x3, 0xd0, 0x3, 0x95, 0xb0,
    0x0, 0xf, 0x0, 0x34, 0x7, 0x0, 0x0, 0x34,
    0x3, 0x40, 0x70, 0x0, 0x0, 0x0, 0x70, 0x7,
    0x0, 0x0, 0x0, 0xf, 0x0, 0x70, 0x6, 0xa8,
    0x3, 0xc0, 0x7, 0xe9, 0xff, 0xc1, 0xf4, 0x0,
    0x2a, 0x90, 0x1c, 0x18, 0x0, 0x0, 0x0, 0x1,
    0xc0, 0x55, 0x55, 0x55, 0x0, 0x1c, 0xf, 0xff,
    0xff, 0xf0, 0x1, 0xc0, 0x2c, 0x0, 0xe, 0x0,
    0x1c, 0x0, 0xe0, 0x2, 0xc0, 0x1, 0xc0, 0x7,
    0x0, 0x38, 0x0, 0x1c, 0x0, 0x3c, 0xf, 0x0,
    0x1, 0xc2, 0x0, 0xf3, 0xc0, 0x0, 0x1d, 0xf0,
    0x3, 0xf0, 0x0, 0x2, 0xfc, 0x0, 0xbf, 0x80,
    0x0, 0x3d, 0x1, 0xbd, 0x2f, 0x80, 0x7, 0x1,
    0xfe, 0x0, 0x2f, 0xd0, 0x0, 0x9, 0x0, 0x0,
    0x1c,

    /* U+9650 "限" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x2f, 0xff, 0x4f,
    0xff, 0xff, 0xb, 0x56, 0xc3, 0x95, 0x56, 0xc2,
    0xc0, 0xb0, 0xd0, 0x0, 0x70, 0xb0, 0x34, 0x34,
    0x0, 0x1c, 0x2c, 0x1c, 0xe, 0x55, 0x5b, 0xb,
    0xa, 0x3, 0xff, 0xff, 0xc2, 0xc3, 0x40, 0xd0,
    0x0, 0x70, 0xb0, 0xe0, 0x34, 0x0, 0x1c, 0x2c,
    0xd, 0xd, 0x0, 0x7, 0xb, 0x2, 0xc3, 0xff,
    0xff, 0xc2, 0xc0, 0x70, 0xe5, 0xe5, 0x50, 0xb0,
    0xd, 0x34, 0x2c, 0x1, 0x2c, 0x3, 0xd, 0x7,
    0x3, 0xcb, 0x6, 0xc3, 0x40, 0xd7, 0xc2, 0xcb,
    0xd0, 0xd0, 0x2f, 0x80, 0xb0, 0x0, 0x34, 0x3,
    0x80, 0x2c, 0x0, 0xd, 0x0, 0xb4, 0xb, 0x0,
    0x3, 0x40, 0x4f, 0x2, 0xc0, 0x0, 0xeb, 0xf0,
    0xf8, 0xb0, 0x0, 0xbf, 0x90, 0xf, 0xac, 0x0,
    0x29, 0x0, 0x0, 0x80, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+FF01 "！" */
    0x7d, 0x7d, 0x7d, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c,
    0x3c, 0x3c, 0x3c, 0x2c, 0x0, 0x0, 0x14, 0xbe,
    0xff, 0x7d, 0x0,

    /* U+FF0C "，" */
    0x4, 0xf, 0xc3, 0xf8, 0x7e, 0x3, 0x41, 0xc1,
    0xe2, 0xe0, 0x40, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 121, .box_w = 4, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 17, .adv_w = 104, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 384, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 37, .adv_w = 384, .box_w = 22, .box_h = 22, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 158, .adv_w = 384, .box_w = 24, .box_h = 24, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 302, .adv_w = 384, .box_w = 23, .box_h = 23, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 435, .adv_w = 384, .box_w = 23, .box_h = 22, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 562, .adv_w = 384, .box_w = 23, .box_h = 22, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 689, .adv_w = 384, .box_w = 22, .box_h = 23, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 816, .adv_w = 384, .box_w = 20, .box_h = 21, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 921, .adv_w = 384, .box_w = 21, .box_h = 23, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1042, .adv_w = 384, .box_w = 23, .box_h = 21, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1163, .adv_w = 384, .box_w = 22, .box_h = 22, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1284, .adv_w = 384, .box_w = 23, .box_h = 22, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1411, .adv_w = 384, .box_w = 23, .box_h = 22, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1538, .adv_w = 384, .box_w = 23, .box_h = 23, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1671, .adv_w = 384, .box_w = 24, .box_h = 23, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1809, .adv_w = 384, .box_w = 22, .box_h = 22, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1930, .adv_w = 384, .box_w = 23, .box_h = 24, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2068, .adv_w = 384, .box_w = 24, .box_h = 24, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2212, .adv_w = 384, .box_w = 22, .box_h = 23, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2339, .adv_w = 384, .box_w = 23, .box_h = 22, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2466, .adv_w = 384, .box_w = 22, .box_h = 21, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2582, .adv_w = 384, .box_w = 22, .box_h = 23, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2709, .adv_w = 384, .box_w = 22, .box_h = 22, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2830, .adv_w = 384, .box_w = 22, .box_h = 22, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2951, .adv_w = 384, .box_w = 21, .box_h = 23, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 3072, .adv_w = 384, .box_w = 4, .box_h = 19, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 3091, .adv_w = 384, .box_w = 5, .box_h = 9, .ofs_x = 3, .ofs_y = -3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0xd, 0x2fe1, 0x4df5, 0x4f3f, 0x503b, 0x514b, 0x5152,
    0x5287, 0x53d7, 0x540e, 0x5647, 0x56fe, 0x5740, 0x5906, 0x595c,
    0x5bee, 0x5edf, 0x625f, 0x651d, 0x66e8, 0x670e, 0x6b41, 0x752b,
    0x8b80, 0x8b9d, 0x962f, 0xfee0, 0xfeeb
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 33, .range_length = 65260, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 29, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
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
    .bpp = 2,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t source_han_sans_cn_normal_24 = {
#else
lv_font_t source_han_sans_cn_normal_24 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 24,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if SOURCE_HAN_SANS_CN_NORMAL_24*/

