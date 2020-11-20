//: C03:Rotation.cpp {O}
// Perform left and right rotations
#include "../inc/Rotation.h"

unsigned char rol(unsigned char val) {
    int highbit;
    if (val & 0x80) // 0x80 is the high bit only
        highbit = 1;
    else
        highbit = 0;
    // Left shift (bottom bit becomes 0):
    val <<= 1;
    // Rotate the high bit onto the bottom:
    val |= highbit;
    return val;
}