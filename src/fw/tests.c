#include <hal.h>
#if HW_VER == 1
    #include <hw/v1/hwspec.h>
#endif
#include <stdint.h>
#include <main.h>
#include <utils.h>
#include <hw/hwdetect.h>
#if ARCH == AVR
    #if !defined(UNITTESTS)
        #include <avr/pgmspace.h>
        #define ARCH_IMPL_PROG_MEM PROGMEM
    #else
        #define ARCH_IMPL_PROG_MEM
    #endif
#endif

const uint8_t am_data[] ARCH_IMPL_PROG_MEM = {
    32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 33, 33, 33, 33, 33, 33, 33, 33,
    33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
    33, 33, 33, 33, 33, 33, 33, 33, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
    32, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30,
    30, 29, 29, 29, 29, 29, 29, 29, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 27, 27, 27,
    27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
    26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 27, 27, 27, 27, 27, 27, 27,
    27, 27, 27, 27, 27, 27, 28, 28, 28, 28, 28, 28, 28, 29, 29, 29, 29, 29, 29, 29, 29, 30, 30, 30,
    30, 30, 31, 31, 31, 31, 31, 32, 32, 32, 32, 32, 32, 33, 33, 33, 33, 34, 34, 34, 34, 34, 35, 35,
    35, 35, 35, 36, 36, 36, 36, 37, 37, 37, 37, 37, 38, 38, 38, 38, 38, 39, 39, 39, 39, 40, 40, 40,
    40, 40, 40, 41, 41, 41, 41, 41, 41, 41, 41, 42, 42, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
    43, 43, 43, 43, 42, 43, 43, 43, 43, 42, 42, 42, 42, 42, 42, 42, 41, 41, 41, 41, 41, 41, 41, 40,
    40, 40, 40, 39, 39, 39, 39, 38, 38, 38, 38, 37, 37, 37, 37, 37, 36, 36, 36, 36, 35, 35, 35, 34,
    34, 34, 33, 33, 33, 32, 32, 32, 32, 31, 31, 31, 30, 30, 30, 29, 29, 29, 28, 28, 28, 27, 27, 27,
    26, 26, 26, 25, 25, 25, 24, 24, 24, 24, 23, 23, 23, 22, 22, 22, 22, 21, 21, 21, 20, 20, 20, 20,
    20, 19, 19, 19, 19, 19, 18, 18, 18, 18, 17, 17, 17, 17, 17, 17, 17, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 15, 15, 15, 15, 15, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 17, 17, 16, 16, 16, 17,
    17, 17, 17, 17, 18, 18, 18, 18, 19, 19, 19, 20, 20, 19, 20, 20, 20, 21, 21, 21, 22, 22, 22, 23,
    23, 24, 24, 24, 25, 25, 25, 25, 26, 26, 27, 27, 28, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32, 32,
    32, 33, 33, 34, 34, 35, 35, 36, 36, 37, 37, 38, 38, 38, 39, 39, 40, 40, 40, 41, 41, 42, 42, 43,
    43, 43, 44, 44, 44, 45, 45, 46, 46, 46, 47, 47, 47, 48, 48, 48, 49, 49, 49, 49, 50, 50, 50, 50,
    51, 51, 53, 53, 53, 53, 53, 53, 53, 53, 52, 52, 52, 52, 52, 52, 52, 51, 52, 52, 51, 51, 51, 51,
    50, 50, 50, 49, 49, 49, 49, 48, 48, 47, 48, 47, 47, 46, 46, 45, 45, 45, 44, 44, 43, 43, 42, 42,
    41, 41, 40, 41, 40, 40, 39, 39, 38, 37, 37, 36, 36, 35, 35, 34, 34, 33, 33, 32, 32, 31, 31, 30,
    30, 29, 29, 28, 28, 27, 26, 26, 25, 25, 24, 24, 23, 23, 22, 22, 21, 21, 20, 20, 19, 19, 18, 18,
    18, 17, 17, 16, 16, 15, 15, 15, 14, 14, 13, 13, 13, 12, 12, 12, 11, 11, 11, 11, 10, 10, 10, 9,
    9,  9,  9,  9,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  7,  7,  7,  7,  7,  7,  7,  7,
    8,  8,  8,  8,  8,  8,  9,  9,  9,  9,  9,  9,  9,  10, 10, 10, 11, 11, 11, 12, 12, 12, 13, 13,
    14, 14, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 22, 22, 22, 23, 23, 24, 24,
    25, 26, 26, 27, 28, 28, 29, 29, 30, 31, 31, 32, 32, 33, 33, 34, 35, 35, 36, 37, 37, 38, 38, 39,
    40, 40, 41, 42, 42, 42, 43, 44, 44, 45, 45, 46, 46, 47, 48, 48, 49, 49, 50, 50, 51, 51, 51, 52,
    52, 53, 53, 54, 54, 54, 55, 55, 55, 56, 56, 56, 57, 57, 57, 60, 60, 60, 60, 60, 59, 59, 59, 59,
    59, 59, 59, 58, 58, 58, 58, 58, 58, 57, 57, 57, 56, 56, 56, 55, 55, 55, 54, 54, 53, 53, 52, 52,
    52, 51, 51, 50, 49, 49, 48, 48, 47, 47, 46, 45, 45, 44, 43, 43, 43, 42, 42, 41, 40, 40, 39, 38,
    38, 37, 36, 36, 35, 34, 33, 33, 32, 32, 31, 31, 30, 29, 28, 28, 27, 26, 26, 25, 24, 24, 23, 22,
    22, 21, 21, 20, 20, 19, 18, 18, 17, 16, 16, 15, 15, 14, 13, 13, 12, 12, 11, 11, 11, 10, 10, 9,
    9,  8,  8,  8,  7,  7,  6,  6,  6,  5,  5,  5,  5,  4,  4,  4,  4,  3,  3,  3,  3,  3,  3,  3,
    2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  3,  3,  3,  3,  3,  3,  4,  4,  4,  4,  4,  5,
    5,  5,  5,  6,  6,  7,  7,  7,  8,  8,  9,  9,  10, 10, 11, 11, 11, 12, 12, 13, 13, 14, 15, 15,
    16, 16, 17, 18, 18, 19, 20, 20, 20, 21, 22, 22, 23, 24, 25, 25, 26, 27, 28, 28, 29, 30, 31, 31,
    32, 32, 33, 33, 34, 35, 36, 36, 37, 38, 39, 39, 40, 41, 42, 42, 43, 44, 44, 44, 45, 46, 46, 47,
    48, 48, 49, 50, 50, 51, 51, 52, 53, 53, 54, 54, 54, 55, 55, 56, 56, 57, 57, 58, 58, 58, 59, 59,
    59, 60, 60, 60, 63, 63, 63, 63, 63, 63, 63, 62, 62, 62, 62, 62, 62, 61, 61, 61, 61, 60, 60, 60,
    59, 59, 59, 58, 58, 57, 57, 56, 56, 55, 55, 54, 54, 53, 53, 52, 52, 51, 50, 50, 49, 49, 48, 47,
    47, 46, 45, 45, 44, 44, 43, 42, 42, 41, 40, 40, 39, 38, 37, 37, 36, 35, 34, 34, 33, 32, 32, 31,
    30, 30, 29, 28, 27, 27, 26, 25, 24, 24, 23, 22, 22, 21, 20, 20, 19, 19, 18, 17, 17, 16, 15, 15,
    14, 14, 13, 12, 12, 11, 11, 10, 10, 10, 9,  9,  8,  8,  7,  7,  6,  6,  5,  5,  5,  4,  4,  4,
    3,  3,  3,  3,  3,  2,  2,  2,  2,  2,  2,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,
    1,  2,  2,  2,  2,  2,  2,  3,  3,  3,  3,  4,  4,  4,  5,  5,  5,  6,  6,  6,  7,  7,  8,  8,
    9,  9,  10, 10, 10, 11, 11, 12, 13, 13, 14, 14, 15, 16, 16, 17, 18, 18, 19, 20, 20, 20, 21, 22,
    22, 23, 24, 25, 25, 26, 27, 28, 28, 29, 30, 31, 31, 32, 32, 33, 33, 34, 35, 36, 36, 37, 38, 39,
    39, 40, 41, 42, 42, 43, 44, 44, 44, 45, 46, 46, 47, 48, 48, 49, 49, 50, 51, 51, 52, 52, 53, 53,
    53, 54, 54, 55, 55, 56, 56, 57, 57, 57, 58, 58, 59, 59, 59, 59, 60, 62, 62, 62, 62, 62, 62, 62,
    61, 61, 61, 61, 61, 61, 60, 60, 60, 59, 59, 59, 58, 58, 58, 57, 57, 57, 56, 56, 55, 55, 54, 54,
    53, 53, 52, 52, 51, 51, 50, 50, 49, 48, 48, 47, 47, 46, 45, 45, 44, 43, 43, 43, 42, 41, 40, 40,
    39, 38, 38, 37, 36, 36, 35, 34, 33, 33, 32, 32, 31, 31, 30, 29, 28, 28, 27, 26, 26, 25, 24, 24,
    23, 22, 22, 21, 21, 20, 20, 19, 18, 18, 17, 17, 16, 16, 15, 14, 14, 13, 13, 12, 12, 12, 11, 11,
    11, 10, 10, 9,  9,  8,  8,  8,  7,  7,  7,  6,  6,  6,  6,  6,  6,  5,  5,  5,  5,  5,  5,  4,
    4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  5,  5,  5,  5,  5,  5,  5,  6,  6,  6,  6,  6,
    7,  7,  7,  8,  8,  8,  9,  9,  9,  10, 10, 10, 11, 11, 12, 12, 13, 13, 13, 14, 14, 15, 15, 16,
    16, 17, 18, 18, 19, 19, 20, 20, 21, 22, 22, 22, 23, 24, 24, 25, 26, 26, 27, 27, 28, 29, 29, 30,
    31, 31, 32, 32, 33, 33, 34, 35, 35, 36, 36, 37, 38, 38, 39, 40, 40, 41, 41, 42, 42, 42, 43, 44,
    44, 45, 45, 46, 46, 47, 47, 48, 48, 49, 49, 50, 50, 50, 50, 51, 51, 52, 52, 52, 53, 53, 53, 54,
    54, 54, 55, 55, 55, 55, 57, 57, 57, 57, 57, 57, 57, 57, 56, 56, 56, 56, 56, 56, 55, 55, 55, 54,
    54, 54, 54, 53, 53, 53, 52, 52, 52, 51, 51, 51, 50, 50, 49, 49, 48, 48, 47, 47, 46, 46, 45, 45,
    44, 44, 43, 43, 42, 42, 41, 41, 40, 40, 39, 39, 38, 38, 37, 37, 36, 35, 35, 34, 34, 33, 33, 32,
    32, 31, 31, 30, 30, 29, 29, 28, 28, 27, 26, 26, 25, 25, 24, 24, 23, 23, 23, 22, 22, 21, 21, 20,
    20, 20, 19, 19, 18, 18, 17, 17, 17, 16, 16, 16, 16, 15, 15, 15, 14, 14, 14, 13, 13, 13, 13, 12,
    12, 12, 12, 12, 12, 12, 12, 12, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
    11, 11, 11, 11, 12, 12, 12, 12, 12, 12, 12, 13, 13, 13, 13, 14, 14, 14, 14, 15, 15, 15, 15, 16,
    16, 16, 17, 17, 17, 18, 18, 18, 19, 19, 20, 20, 20, 21, 21, 21, 22, 22, 23, 23, 24, 24, 24, 25,
    25, 26, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32, 32, 32, 33, 33, 34, 34, 35, 35,
    36, 36, 36, 37, 37, 38, 38, 39, 39, 39, 39, 40, 40, 40, 41, 41, 42, 42, 42, 43, 43, 43, 44, 44,
    44, 45, 44, 44, 45, 45, 45, 46, 46, 46, 46, 47, 47, 47, 47, 47, 48, 48, 48, 49, 49, 49, 49, 49,
    48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 47, 47, 47, 46, 46, 46, 46, 46, 45, 45, 45, 45, 45, 44,
    44, 44, 44, 43, 43, 42, 42, 42, 41, 41, 41, 40, 40, 40, 40, 39, 39, 39, 38, 38, 38, 37, 37, 37,
    36, 36, 36, 35, 35, 34, 34, 34, 33, 33, 33, 32, 32, 32, 32, 31, 31, 31, 30, 30, 30, 29, 29, 29,
    28, 28, 28, 27, 27, 27, 27, 27, 26, 26, 26, 25, 25, 25, 25, 24, 24, 24, 24, 23, 23, 23, 23, 23,
    23, 23, 22, 22, 22, 22, 22, 22, 21, 21, 21, 21, 21, 21, 21, 20, 21, 21, 21, 21, 21, 21, 20, 20,
    20, 20, 20, 20, 20, 20, 20, 20, 20, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
    22, 22, 22, 22, 23, 23, 23, 23, 23, 23, 23, 23, 24, 24, 24, 24, 24, 24, 25, 25, 25, 25, 26, 26,
    26, 26, 26, 27, 27, 27, 27, 27, 28, 28, 28, 28, 29, 29, 29, 29, 29, 30, 30, 30, 30, 30, 31, 31,
    31, 31, 32, 32, 32, 32, 32, 32, 33, 33, 33, 33, 33, 34, 34, 34, 34, 34, 35, 35, 35, 35, 35, 35,
    35, 35, 36, 36, 36, 36, 36, 36, 36, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 38, 38,
    38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
    37, 37, 37, 37, 37, 37, 37, 36, 36, 36, 36, 36, 36, 36, 36, 36, 35, 35, 35, 35, 35, 35, 35, 35,
    35, 34, 34, 34, 34, 34, 34, 34, 34, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 32, 32, 32, 32,
    32, 32, 32, 32, 32, 32, 32, 32, 32, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
    31, 31, 31, 31, 31, 31, 31, 31, 31, 30, 30, 30, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
    31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 32, 32,
    32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 33, 33, 33, 33, 33, 33, 33, 33, 33,
    33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
    33, 33, 33, 33, 33, 33, 33, 33, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
    32, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30,
    30, 29, 29, 29, 29, 29, 29, 29, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 27, 27, 27,
    27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 26, 26, 27, 27, 27, 27, 27, 27, 27, 27, 27,
    27, 27, 27, 28, 28, 27, 27, 27, 28, 28, 28, 28, 28, 28, 28, 29, 29, 29, 29, 29, 29, 29, 29, 29,
    29, 30, 30, 30, 30, 30, 31, 31, 31, 31, 31, 31, 32, 32, 32, 32, 32, 32, 33, 33, 33, 33, 33, 34,
    34, 34, 34, 34, 35, 35, 35, 35, 35, 36, 36, 36, 36, 36, 37, 37, 37, 37, 37, 38, 38, 38, 38, 38,
    38, 39, 39, 39, 39, 40, 40, 40, 40, 40, 40, 40, 40, 41, 41, 41, 41, 41, 42, 42, 42, 42, 42, 42,
    42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
    43, 43, 42, 42, 43, 43, 43, 43, 42, 42, 42, 42, 42, 42, 42, 41, 41, 41, 41, 41, 40, 41, 41, 40,
    40, 40, 40, 39, 39, 39, 39, 38, 38, 38, 38, 37, 37, 37, 37, 37, 36, 36, 36, 36, 35, 35, 35, 34,
    34, 34, 33, 33, 33, 32, 32, 32, 32, 31, 31, 31, 30, 30, 30, 29, 29, 29, 28, 28, 28, 27, 27, 27,
    26, 26, 26, 25, 25, 25, 24, 24, 24, 24, 23, 23, 23, 22, 22, 22, 22, 21, 21, 21, 20, 20, 20, 20,
    20, 19, 19, 19, 19, 19, 18, 18, 18, 18, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 17, 17, 17, 17,
    17, 17, 17, 17, 17, 17, 17, 18, 18, 18, 18, 18, 19, 19, 19, 19, 20, 20, 20, 20, 20, 21, 21, 21,
    22, 22, 22, 23, 23, 24, 24, 24, 25, 25, 25, 25, 26, 26, 26, 27, 27, 28, 28, 29, 29, 29, 30, 30,
    31, 31, 32, 32, 32, 32, 33, 33, 34, 34, 35, 35, 36, 36, 36, 37, 37, 38, 38, 39, 39, 39, 40, 40,
    41, 41, 41, 42, 42, 43, 43, 43, 44, 44, 44, 45, 45, 45, 46, 46, 47, 47, 47, 48, 48, 48, 48, 49,
    49, 49, 49, 50, 50, 50, 50, 51, 51, 51, 51, 51, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52,
    53, 53, 53, 53, 53, 53, 53, 53, 52, 52, 52, 52, 52, 52, 52, 51, 51, 52, 52, 51, 51, 51, 51, 50,
    50, 50, 49, 49, 49, 49, 48, 48, 47, 47, 47, 47, 47, 46, 46, 45, 45, 45, 44, 44, 43, 43, 42, 42,
    41, 41, 40, 41, 40, 40, 39, 39, 38, 37, 37, 36, 36, 35, 35, 34, 34, 33, 33, 32, 32, 31, 31, 30,
    30, 29, 29, 28, 28, 27, 26, 26, 25, 25, 24, 24, 23, 23, 22, 22, 21, 21, 20, 20, 19, 19, 18, 18,
    18, 17, 17, 16, 16, 15, 15, 15, 14, 14, 13, 13, 13, 12, 12, 12, 11, 11, 11, 11, 10, 10, 10, 8,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  9,  9,  9,  9,  9,  9,  9,  10, 10, 10, 11, 11, 11,
    12, 12, 12, 13, 13, 14, 14, 14, 15, 15, 15, 16, 16, 17, 17, 18, 18, 19, 20, 20, 21, 21, 22, 22,
    22, 23, 23, 24, 25, 25, 26, 26, 27, 28, 28, 29, 29, 30, 31, 31, 32, 32, 33, 33, 34, 35, 35, 36,
    36, 37, 38, 38, 39, 40, 40, 41, 41, 42, 42, 43, 43, 44, 45, 45, 46, 46, 47, 47, 48, 48, 49, 49,
    50, 50, 51, 51, 52, 52, 52, 53, 53, 54, 54, 54, 55, 55, 55, 56, 56, 56, 57, 57, 57, 58, 58, 58,
    58, 58, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 60, 60, 60, 60, 60, 59, 59, 59, 59, 59, 59,
    59, 58, 58, 58, 58, 58, 58, 58, 57, 57, 57, 56, 56, 56, 55, 55, 55, 54, 54, 53, 53, 52, 52, 52,
    52, 51, 51, 50, 49, 49, 48, 48, 47, 47, 46, 45, 45, 44, 43, 43, 43, 42, 42, 41, 40, 40, 39, 38,
    38, 37, 36, 36, 35, 34, 33, 33, 32, 32, 31, 31, 30, 29, 28, 28, 27, 26, 26, 25, 24, 24, 23, 22,
    22, 21, 21, 20, 20, 19, 18, 18, 17, 16, 16, 15, 15, 14, 13, 13, 12, 12, 11, 11, 11, 10, 10, 9,
    9,  8,  8,  8,  7,  7,  6,  6,  6,  5,  5,  5,  2,  2,  2,  2,  2,  3,  3,  3,  3,  3,  3,  3,
    4,  4,  4,  4,  4,  5,  5,  5,  6,  6,  6,  7,  7,  8,  8,  8,  9,  9,  10, 10, 11, 11, 12, 12,
    13, 13, 14, 15, 15, 16, 17, 17, 18, 18, 19, 20, 20, 20, 21, 22, 23, 23, 24, 25, 25, 26, 27, 28,
    28, 29, 30, 31, 31, 32, 32, 33, 33, 34, 35, 36, 36, 37, 38, 39, 39, 40, 41, 42, 42, 43, 44, 44,
    44, 45, 46, 46, 47, 48, 48, 49, 50, 50, 51, 51, 52, 53, 53, 54, 54, 54, 55, 55, 56, 56, 57, 57,
    57, 58, 58, 59, 59, 59, 60, 60, 60, 60, 61, 61, 61, 61, 62, 62, 62, 62, 62, 62, 63, 63, 63, 63,
    63, 63, 63, 63, 63, 63, 63, 63, 63, 62, 62, 62, 62, 62, 62, 61, 61, 61, 61, 61, 60, 60, 60, 59,
    59, 59, 58, 58, 57, 57, 56, 56, 55, 55, 54, 54, 54, 53, 53, 52, 52, 51, 50, 50, 49, 49, 48, 47,
    47, 46, 45, 45, 44, 44, 43, 42, 42, 41, 40, 40, 39, 38, 37, 37, 36, 35, 34, 34, 33, 32, 32, 31,
    30, 30, 29, 28, 27, 27, 26, 25, 24, 24, 23, 22, 22, 21, 20, 20, 19, 19, 18, 17, 17, 16, 15, 15,
    14, 14, 13, 12, 12, 11, 11, 10, 10, 10, 9,  9,  8,  8,  7,  7,  6,  6,  5,  5,  5,  4,  4,  4,
    3,  1,  1,  1,  1,  1,  1,  1,  2,  2,  2,  2,  2,  2,  3,  3,  3,  3,  4,  4,  4,  5,  5,  6,
    6,  6,  7,  7,  8,  8,  9,  9,  10, 10, 11, 11, 12, 12, 13, 14, 14, 15, 16, 16, 17, 17, 18, 19,
    20, 20, 20, 21, 22, 22, 23, 24, 25, 25, 26, 27, 28, 28, 29, 30, 30, 31, 32, 32, 33, 33, 34, 35,
    36, 36, 37, 38, 39, 39, 40, 41, 42, 42, 43, 44, 44, 44, 45, 46, 46, 47, 48, 48, 49, 50, 50, 51,
    51, 52, 52, 53, 53, 53, 54, 54, 55, 55, 56, 56, 57, 57, 58, 58, 58, 59, 59, 59, 60, 60, 60, 60,
    60, 61, 61, 61, 61, 61, 61, 62, 62, 62, 62, 62, 62, 62, 62, 62, 62, 62, 62, 62, 62, 62, 61, 61,
    61, 61, 61, 61, 60, 60, 60, 60, 59, 59, 59, 58, 58, 58, 57, 57, 57, 56, 56, 55, 55, 54, 54, 53,
    53, 53, 52, 52, 51, 51, 50, 50, 49, 48, 48, 47, 47, 46, 45, 45, 44, 43, 43, 43, 42, 41, 40, 40,
    39, 38, 38, 37, 36, 36, 35, 34, 33, 33, 32, 32, 31, 31, 30, 29, 28, 28, 27, 26, 26, 25, 24, 24,
    23, 22, 22, 21, 21, 20, 20, 19, 18, 18, 17, 17, 16, 16, 15, 14, 14, 13, 13, 12, 12, 12, 11, 11,
    11, 10, 10, 9,  9,  8,  8,  8,  7,  7,  7,  6,  6,  6,  4,  4,  4,  4,  4,  4,  4,  4,  5,  5,
    5,  5,  5,  5,  6,  6,  6,  7,  7,  7,  8,  8,  8,  9,  9,  9,  10, 10, 11, 11, 11, 12, 13, 13,
    14, 14, 15, 15, 16, 16, 17, 17, 18, 19, 19, 20, 20, 21, 22, 22, 22, 23, 24, 24, 25, 25, 26, 27,
    27, 28, 29, 29, 30, 31, 31, 32, 32, 33, 33, 34, 35, 35, 36, 37, 37, 38, 38, 39, 40, 40, 41, 42,
    42, 42, 43, 43, 44, 44, 45, 45, 46, 47, 47, 48, 48, 49, 49, 50, 50, 51, 50, 51, 51, 52, 52, 52,
    53, 53, 53, 54, 54, 54, 55, 55, 55, 56, 56, 55, 56, 56, 56, 56, 56, 57, 57, 57, 57, 57, 57, 57,
    57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 56, 56, 56, 56, 56, 56, 55, 55, 55, 55, 54, 54,
    54, 54, 53, 53, 53, 52, 52, 52, 51, 51, 51, 50, 50, 49, 49, 49, 48, 48, 47, 47, 46, 46, 45, 45,
    44, 44, 43, 43, 42, 42, 41, 41, 40, 40, 39, 39, 38, 38, 37, 37, 36, 35, 35, 34, 34, 33, 33, 32,
    32, 31, 31, 30, 30, 29, 29, 28, 28, 27, 26, 26, 25, 25, 24, 24, 23, 23, 23, 22, 22, 21, 21, 20,
    20, 20, 19, 19, 18, 18, 17, 17, 17, 16, 16, 16, 16, 15, 15, 15, 14, 14, 14, 13, 13, 13, 13, 12,
    12, 12, 12, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 12, 12, 12, 12, 13, 13, 13, 13, 14,
    14, 14, 14, 15, 15, 15, 16, 16, 16, 17, 17, 18, 18, 18, 19, 19, 20, 20, 20, 21, 21, 22, 22, 22,
    23, 23, 24, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32, 32, 32, 33,
    33, 34, 34, 35, 35, 36, 36, 37, 37, 38, 38, 38, 39, 39, 39, 39, 40, 40, 41, 41, 41, 42, 42, 43,
    43, 43, 44, 44, 44, 45, 45, 45, 45, 45, 46, 46, 46, 46, 47, 47, 47, 47, 48, 48, 48, 48, 48, 48,
    48, 48, 48, 48, 48, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 48, 48,
    48, 48, 48, 48, 48, 48, 48, 48, 47, 47, 47, 47, 46, 46, 46, 46, 46, 45, 45, 45, 45, 45, 44, 44,
    44, 44, 43, 43, 43, 42, 42, 42, 41, 41, 41, 40, 40, 40, 40, 39, 39, 39, 38, 38, 38, 37, 37, 37,
    36, 36, 36, 35, 35, 34, 34, 34, 33, 33, 33, 32, 32, 32, 32, 31, 31, 31, 30, 30, 30, 29, 29, 29,
    28, 28, 28, 27, 27, 27, 27, 27, 26, 26, 26, 25, 25, 25, 25, 24, 24, 24, 24, 23, 23, 23, 23, 23,
    23, 23, 22, 22, 22, 22, 22, 22, 21, 21, 21, 21, 21, 21, 21, 20, 20, 20, 20, 20, 20, 20, 20, 20,
    20, 20, 20, 21, 21, 21, 21, 21, 22, 22, 22, 22, 22, 22, 22, 23, 23, 23, 23, 23, 23, 24, 24, 24,
    25, 25, 25, 25, 25, 26, 26, 26, 26, 26, 27, 27, 27, 27, 28, 28, 28, 28, 29, 29, 29, 29, 29, 30,
    30, 30, 30, 31, 31, 31, 31, 32, 32, 32, 32, 32, 32, 33, 33, 33, 33, 34, 34, 34, 34, 34, 35, 35,
    35, 35, 35, 35, 35, 36, 36, 36, 36, 36, 36, 37, 37, 37, 37, 37, 37, 38, 38, 38, 37, 37, 38, 38,
    38, 38, 38, 38, 38, 38, 38, 39, 39, 39, 39, 39, 39, 38, 38, 38, 38, 38, 39, 39, 39, 39, 39, 39,
    39, 39, 39, 39, 39, 39, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 37,
    37, 37, 37, 37, 37, 37, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 35, 35, 35, 35, 35, 35, 35, 35,
    35, 34, 34, 34, 34, 34, 34, 34, 34, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 32, 32, 32, 32,
    32, 32, 32, 32, 32, 32, 32, 32, 32, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
    31, 31, 31, 31, 31, 31, 31, 31, 31, 30, 30, 30, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
    31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 32, 32, 32,
    32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32
};

const uint8_t sine_x_on_x_data[] ARCH_IMPL_PROG_MEM = {
    12, 12, 12, 12, 12, 12, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 12, 12, 12, 12, 12, 12, 12, 12, 12, 13, 13, 13,
    13, 13, 13, 13, 13, 13, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
    14, 15, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 13, 13, 13, 13,
    13, 13, 13, 13, 13, 12, 12, 12, 12, 12, 12, 12, 11, 11, 11, 11, 11, 11, 11, 11, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,
    9,  9,  9,  9,  9,  10, 10, 10, 10, 10, 10, 10, 10, 10, 11, 11, 11, 11, 11, 11, 11, 12, 12, 12,
    12, 12, 12, 12, 13, 13, 13, 13, 13, 13, 14, 14, 14, 14, 14, 14, 14, 15, 15, 15, 15, 15, 15, 15,
    15, 15, 15, 15, 15, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 15, 15, 15, 15, 15, 15, 15, 15, 15,
    15, 15, 14, 14, 14, 14, 14, 14, 14, 13, 13, 13, 13, 13, 12, 12, 12, 12, 12, 11, 11, 11, 11, 11,
    10, 10, 10, 10, 10, 9,  9,  9,  9,  9,  9,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  7,  7,  7,
    7,  7,  7,  7,  7,  7,  7,  7,  8,  8,  8,  8,  8,  8,  8,  8,  8,  9,  9,  9,  9,  9,  10, 10,
    10, 10, 10, 11, 11, 11, 11, 12, 12, 12, 13, 13, 13, 13, 14, 14, 14, 14, 15, 15, 15, 15, 16, 16,
    16, 16, 17, 17, 17, 17, 17, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 19, 19, 19, 19, 19, 18, 18,
    18, 18, 18, 18, 18, 18, 18, 17, 17, 17, 17, 16, 16, 16, 16, 15, 15, 15, 14, 14, 14, 13, 13, 12,
    12, 12, 11, 11, 10, 10, 10, 9,  9,  8,  8,  7,  7,  7,  6,  6,  5,  5,  5,  4,  4,  4,  3,  3,
    3,  3,  2,  2,  2,  2,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  2,  2,  2,  2,  2,
    3,  3,  4,  4,  4,  5,  5,  6,  6,  7,  8,  8,  9,  10, 10, 11, 12, 13, 14, 14, 15, 16, 17, 18,
    19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43,
    44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 54, 55, 56, 57, 57, 58, 59, 59, 60, 60, 61, 61, 61,
    62, 62, 62, 62, 63, 63, 63, 63, 63, 63, 63, 63, 63, 62, 62, 62, 62, 61, 61, 61, 60, 60, 59, 59,
    58, 57, 57, 56, 55, 54, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37,
    36, 35, 34, 33, 32, 31, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 14, 13,
    12, 11, 10, 10, 9,  8,  8,  7,  6,  6,  5,  5,  4,  4,  4,  3,  3,  2,  2,  2,  2,  2,  1,  1,
    1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  2,  2,  2,  2,  3,  3,  3,  3,  4,  4,  4,  5,  5,
    5,  6,  6,  7,  7,  7,  8,  8,  9,  9,  10, 10, 10, 11, 11, 12, 12, 12, 13, 13, 14, 14, 14, 15,
    15, 15, 16, 16, 16, 16, 17, 17, 17, 17, 18, 18, 18, 18, 18, 18, 18, 18, 18, 19, 19, 19, 19, 19,
    18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 17, 17, 17, 17, 17, 16, 16, 16, 16, 15, 15, 15, 15, 14,
    14, 14, 14, 13, 13, 13, 13, 12, 12, 12, 11, 11, 11, 11, 10, 10, 10, 10, 10, 9,  9,  9,  9,  9,
    8,  8,  8,  8,  8,  8,  8,  8,  8,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  8,  8,  8,  8,
    8,  8,  8,  8,  8,  8,  9,  9,  9,  9,  9,  9,  10, 10, 10, 10, 10, 11, 11, 11, 11, 11, 12, 12,
    12, 12, 12, 13, 13, 13, 13, 13, 14, 14, 14, 14, 14, 14, 14, 15, 15, 15, 15, 15, 15, 15, 15, 15,
    15, 15, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15,
    14, 14, 14, 14, 14, 14, 14, 13, 13, 13, 13, 13, 13, 12, 12, 12, 12, 12, 12, 12, 11, 11, 11, 11,
    11, 11, 11, 10, 10, 10, 10, 10, 10, 10, 10, 10, 9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,
    9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 11, 11, 11,
    11, 11, 11, 11, 11, 12, 12, 12, 12, 12, 12, 12, 13, 13, 13, 13, 13, 13, 13, 13, 13, 14, 14, 14,
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 15, 14, 14, 14, 14, 14, 14, 14, 14,
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 13, 13, 13, 13, 13, 13, 13, 13, 13, 12, 12, 12, 12,
    12, 12, 12, 12, 12, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 12, 12, 12, 12, 12,
};

const uint8_t sine_data[] ARCH_IMPL_PROG_MEM = {
    32, 32, 33, 33, 34, 34, 34, 35, 35, 35, 36, 36, 37, 37, 37, 38, 38, 38, 39, 39, 40, 40, 40, 41,
    41, 41, 42, 42, 42, 43, 43, 44, 44, 44, 45, 45, 45, 46, 46, 46, 47, 47, 47, 48, 48, 48, 49, 49,
    49, 50, 50, 50, 50, 51, 51, 51, 52, 52, 52, 53, 53, 53, 53, 54, 54, 54, 54, 55, 55, 55, 55, 56,
    56, 56, 56, 57, 57, 57, 57, 58, 58, 58, 58, 58, 59, 59, 59, 59, 59, 60, 60, 60, 60, 60, 60, 60,
    61, 61, 61, 61, 61, 61, 61, 62, 62, 62, 62, 62, 62, 62, 62, 62, 62, 62, 63, 63, 63, 63, 63, 63,
    63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 62,
    62, 62, 62, 62, 62, 62, 62, 62, 62, 62, 61, 61, 61, 61, 61, 61, 61, 60, 60, 60, 60, 60, 60, 60,
    59, 59, 59, 59, 59, 58, 58, 58, 58, 58, 57, 57, 57, 57, 56, 56, 56, 56, 55, 55, 55, 55, 54, 54,
    54, 54, 53, 53, 53, 53, 52, 52, 52, 51, 51, 51, 50, 50, 50, 50, 49, 49, 49, 48, 48, 48, 47, 47,
    47, 46, 46, 46, 45, 45, 45, 44, 44, 44, 43, 43, 42, 42, 42, 41, 41, 41, 40, 40, 40, 39, 39, 38,
    38, 38, 37, 37, 37, 36, 36, 35, 35, 35, 34, 34, 34, 33, 33, 32, 32, 32, 31, 31, 30, 30, 30, 29,
    29, 29, 28, 28, 27, 27, 27, 26, 26, 26, 25, 25, 24, 24, 24, 23, 23, 23, 22, 22, 22, 21, 21, 20,
    20, 20, 19, 19, 19, 18, 18, 18, 17, 17, 17, 16, 16, 16, 15, 15, 15, 14, 14, 14, 14, 13, 13, 13,
    12, 12, 12, 11, 11, 11, 11, 10, 10, 10, 10, 9,  9,  9,  9,  8,  8,  8,  8,  7,  7,  7,  7,  6,
    6,  6,  6,  6,  5,  5,  5,  5,  5,  4,  4,  4,  4,  4,  4,  4,  3,  3,  3,  3,  3,  3,  3,  2,
    2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,
    1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  2,  2,  2,  2,  2,  2,  2,  2,  2,
    2,  2,  3,  3,  3,  3,  3,  3,  3,  4,  4,  4,  4,  4,  4,  4,  5,  5,  5,  5,  5,  6,  6,  6,
    6,  6,  7,  7,  7,  7,  8,  8,  8,  8,  9,  9,  9,  9,  10, 10, 10, 10, 11, 11, 11, 11, 12, 12,
    12, 13, 13, 13, 14, 14, 14, 14, 15, 15, 15, 16, 16, 16, 17, 17, 17, 18, 18, 18, 19, 19, 19, 20,
    20, 20, 21, 21, 22, 22, 22, 23, 23, 23, 24, 24, 24, 25, 25, 26, 26, 26, 27, 27, 27, 28, 28, 29,
    29, 29, 30, 30, 30, 31, 31
};

void usart_test()
{
    hal_usart_on (HAL_IMPL_USART_BAUD);
    char c = 'A';
    while (!mode_is_dirty()) {
        HAL_LOOP_DELAY (USART_TEST_DELAY_LOOP_COUNT);
        hal_usart_send_string (USART_TEST_STRING);
        hal_usart_send_char (c);

        if (++c > 'Z') {
            c = 'A';
        }
    }
    hal_usart_off();
}

static inline void dac_output_init()
{
    HAL_IO_MAKE_OUTPUT (ANALOG_OUTPUT_GPIO, ANALOG_OUTPUT_PIN_MASK);
}

static inline void dac_output_deinit()
{
    HAL_IO_OUT_LOW (ANALOG_OUTPUT_GPIO, ANALOG_OUTPUT_PIN_MASK);
}

static void runt_pulse_test_body (uint8_t highLevel, uint8_t lowLevel, uint16_t pulseWidth)
{
    HAL_IO_OUT_WRITE (RUNT_PULSE_TEST_OUTPUT_GPIO, highLevel);
    HAL_LOOP_DELAY (pulseWidth);
    HAL_IO_OUT_WRITE (RUNT_PULSE_TEST_OUTPUT_GPIO, lowLevel);
    HAL_LOOP_DELAY (pulseWidth);
}

void runt_pulse_test()
{
    dac_output_init();

    // Number of runt pulses per 1000 normal pulses
    uint32_t runtFreq        = RUNT_PULSE_FREQ;
    bool isPositiveRuntPulse = true; // true: Runt when going high, false: Runt when going low.

    while (!mode_is_dirty()) {
        uint8_t lowLevel    = RUNT_TEST_NORMAL_LOW_LEVEL;
        uint8_t highLevel   = RUNT_TEST_NORMAL_HIGH_LEVEL;
        uint16_t pulseWidth = RUNT_TEST_NORMAL_PULSE_WIDTH_LOOP_COUNT;

        if (--runtFreq == 0) {
            runtFreq   = RUNT_PULSE_FREQ;
            pulseWidth = RUNT_TEST_RUNT_PULSE_WIDTH_LOOP_COUNT;
            if (isPositiveRuntPulse) {
                highLevel = RUNT_TEST_RUNT_HIGH_LEVEL;
            } else {
                lowLevel = RUNT_TEST_RUNT_LOW_LEVEL;
            }
            isPositiveRuntPulse ^= 1;
        }

        runt_pulse_test_body (highLevel, lowLevel, pulseWidth);
    }

    dac_output_deinit();
}

static inline void two_pulses_test_init()
{
    HAL_IO_MAKE_OUTPUT (TWO_PULSES_TEST_OUTPUT_GPIO, TWO_PULSES_TEST_OUTPUT_PIN_MASK);
}

static inline void two_pulses_test_exit()
{
    HAL_IO_OUT_LOW (TWO_PULSES_TEST_OUTPUT_GPIO, TWO_PULSES_TEST_OUTPUT_PIN_MASK);
}

static void two_pulses_test_body (uint8_t pin_mask, uint16_t num_pulses, uint16_t pulse_width)
{
    while (num_pulses--) {
        HAL_IO_OUT_HIGH (TWO_PULSES_TEST_OUTPUT_GPIO, pin_mask);
        HAL_LOOP_DELAY (pulse_width);
        HAL_IO_OUT_LOW (TWO_PULSES_TEST_OUTPUT_GPIO, pin_mask);
        HAL_LOOP_DELAY (pulse_width);
    }
}

void two_pulses_test()
{
    two_pulses_test_init();

    while (!mode_is_dirty()) {
        two_pulses_test_body (TWO_PULSES_TEST_OUTPUT_PIN_NO0_MASK,
                              TWO_PULSES_TEST_NUMBER_OF_PULSES_PIN0, TWO_PULSES_TEST_PULSE_WIDTH);
        HAL_LOOP_DELAY (TWO_PULSES_TEST_DELAY_LOOP_COUNT);
        two_pulses_test_body (TWO_PULSES_TEST_OUTPUT_PIN_NO1_MASK,
                              TWO_PULSES_TEST_NUMBER_OF_PULSES_PIN1, TWO_PULSES_TEST_PULSE_WIDTH);
        HAL_LOOP_DELAY (TWO_PULSES_TEST_DELAY_LOOP_COUNT);
    }

    two_pulses_test_exit();
}

void sawtooth_test()
{
    uint16_t value = SAWTOOTH_TEST_LOW_LEVEL;
    dac_output_init();

    while (!mode_is_dirty()) {
        for (unsigned i = 0; i < DAC_WIDTH_MAX_VALUE; i++) {
            HAL_IO_OUT_WRITE (SAWTOOTH_TEST_OUTPUT_GPIO, value);
            value++;
        }
        value = SAWTOOTH_TEST_LOW_LEVEL;
    }
    dac_output_deinit();
}

void triangle_test()
{
    uint16_t value = TRIANGLE_TEST_LOW_LEVEL;

    dac_output_init();

    while (!mode_is_dirty()) {
        value = SAWTOOTH_TEST_LOW_LEVEL;
        for (unsigned i = 0; i < DAC_WIDTH_MAX_VALUE; i++) {
            HAL_IO_OUT_WRITE (TRIANGLE_TEST_OUTPUT_GPIO, value);
            value++;
        }
        value = SAWTOOTH_TEST_HIGH_LEVEL;
        for (unsigned i = 0; i < DAC_WIDTH_MAX_VALUE; i++) {
            HAL_IO_OUT_WRITE (TRIANGLE_TEST_OUTPUT_GPIO, value);
            value--;
#ifndef UNITTESTS
            // The below instructions is hacky way to make the number of instructions for the
            // falling egde same as the rising one above. Its hacky because it depends on the
            // compiler generated instructions.
            __asm__ volatile("nop");
#endif // UNITTESTS
        }
    }
    dac_output_deinit();
}

static inline void i2c_test_init()
{
    HAL_IO_MAKE_OUTPUT (I2C_TEST_OUTPUT_GPIO, I2C_TEST_OUTPUT_PIN_MASK);

    // In idle state both SDL, SCL are high
    HAL_IO_OUT_HIGH (I2C_TEST_OUTPUT_GPIO, I2C_TEST_OUTPUT_PIN_MASK);
}

static inline void i2c_test_exit()
{
    // In idle state both SDL, SCL are high
    HAL_IO_OUT_HIGH (I2C_TEST_OUTPUT_GPIO, I2C_TEST_OUTPUT_PIN_MASK);
}

#define I2C_TEST_SDA_HIGH() HAL_IO_OUT_HIGH (I2C_TEST_OUTPUT_GPIO, I2C_TEST_OUTPUT_PIN_SDA_MASK);

#define I2C_TEST_SDA_LOW()  HAL_IO_OUT_LOW (I2C_TEST_OUTPUT_GPIO, I2C_TEST_OUTPUT_PIN_SDA_MASK);

#define I2C_TEST_SCL_HIGH()                                                   \
    do {                                                                      \
        HAL_LOOP_DELAY (I2C_TEST_SCL_HOLD_DELAY / 2);                         \
        HAL_IO_OUT_HIGH (I2C_TEST_OUTPUT_GPIO, I2C_TEST_OUTPUT_PIN_SCL_MASK); \
        HAL_LOOP_DELAY (I2C_TEST_SCL_HOLD_DELAY / 2);                         \
    } while (0)

#define I2C_TEST_SCL_LOW()                                                   \
    do {                                                                     \
        HAL_LOOP_DELAY (I2C_TEST_SCL_HOLD_DELAY / 2);                        \
        HAL_IO_OUT_LOW (I2C_TEST_OUTPUT_GPIO, I2C_TEST_OUTPUT_PIN_SCL_MASK); \
        HAL_LOOP_DELAY (I2C_TEST_SCL_HOLD_DELAY / 2);                        \
    } while (0)

static inline void i2c_start()
{
    // Start bit: SDA pulled low while SCL is high.
    I2C_TEST_SCL_HIGH();
    I2C_TEST_SDA_LOW();
}

static inline void i2c_stop()
{
    // In preparation to the stop bit, we pull the SDA line low with an extra clock pulse.
    I2C_TEST_SCL_LOW();
    I2C_TEST_SDA_LOW();

    // Stop bit: SDA pulled high while SCL is high.
    I2C_TEST_SCL_HIGH();
    I2C_TEST_SDA_HIGH();
}

static void i2c_send_byte (uint8_t b)
{
    for (unsigned i = 0; i < 8; i++, b = b << 1) {
        I2C_TEST_SCL_LOW();
        if (b & 0x80) {
            I2C_TEST_SDA_HIGH();
        } else {
            I2C_TEST_SDA_LOW();
        }
        I2C_TEST_SCL_HIGH();
    }

    // Send ACK
    // One extra clock pulse when SDA is low
    I2C_TEST_SCL_LOW();
    I2C_TEST_SDA_LOW();
    I2C_TEST_SCL_HIGH();
    HAL_LOOP_DELAY (20);
}

void i2c_test()
{
    i2c_test_init();
    while (!mode_is_dirty()) {
        // Start the packet
        i2c_start();

        // Send address, always is 0x5
        i2c_send_byte ((5 << 1) | 1); // Address = 5, R/W bit = 1

        // Send data as ASCII string
        for (char* c = I2C_TEST_STRING; *c != '\0'; c++) {
            i2c_send_byte (*c);
        }
        // Packet finished
        i2c_stop();

        // Some delay before next packet.
        HAL_LOOP_DELAY (40);
    }
    i2c_test_exit();
}

static void dump_into_dac_and_loop (const uint8_t data[], const size_t count)
{
    while (!mode_is_dirty()) {
        for (uint16_t i = 0; i < count; i++) {
#if !defined(UNITTESTS)
            HAL_IO_OUT_WRITE (ANALOG_OUTPUT_GPIO, pgm_read_byte (&data[i]));
#else
            HAL_IO_OUT_WRITE (ANALOG_OUTPUT_GPIO, data[i]);
#endif
        }
    }
}

void sine_test()
{
    dac_output_init();
    dump_into_dac_and_loop (sine_data, ARRAY_LEN (sine_data));
    dac_output_deinit();
}

void sine_x_on_x_test()
{
    dac_output_init();
    dump_into_dac_and_loop (sine_x_on_x_data, ARRAY_LEN (sine_x_on_x_data));
    dac_output_deinit();
}

void am_test()
{
    dac_output_init();
    dump_into_dac_and_loop (am_data, ARRAY_LEN (am_data));
    dac_output_deinit();
}
