#include "m2c.h"

void func_020199b4(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0xA) = 0x20;
    M2C_FIELD(arg0, s16 *, 0xC) = arg1;
    M2C_FIELD(arg0, s16 *, 0xE) = (s16) ((u32) (arg1 & ~0xFFFF) >> 0x10);
    M2C_FIELD(arg0, u16 *, 0x10) = (u16) M2C_FIELD(arg0, u16 *, 0x48);
}
