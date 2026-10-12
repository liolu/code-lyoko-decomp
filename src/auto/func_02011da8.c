#include "m2c.h"

extern M2C_UNK data_020f6578;

void func_02011da8(s32 arg0) {
    M2C_FIELD(&data_020f6578, s32 *, 0x20) = arg0;
}
