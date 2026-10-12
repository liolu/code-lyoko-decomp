#include "m2c.h"

extern s32 data_020f6e6c;

void func_0201456c(s32 arg0, s32 arg1) {
    M2C_FIELD((data_020f6e6c + (arg0 * 4)), s32 *, 0x18) = arg1;
}
