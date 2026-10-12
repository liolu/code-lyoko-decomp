#include "m2c.h"

extern M2C_UNK data_02107914;

void func_020adb84(s32 arg0, s32 arg1) {
    *((M2C_UNK *)((s8 *)&data_02107914 + (arg0 * 4))) = arg1 | (arg0 << 0x1E);
}
