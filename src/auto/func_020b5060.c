#include "m2c.h"

void func_020b5060(void *arg0) {
    M2C_FIELD(arg0, volatile s32 *, 0) = 0;
    M2C_FIELD(arg0, volatile s32 *, 4) = 0;
    M2C_FIELD(arg0, volatile s32 *, 8) = (s32) (M2C_FIELD(arg0, volatile s32 *, 8) & ~0xFF);
    M2C_FIELD(arg0, volatile s32 *, 8) = (s32) (M2C_FIELD(arg0, volatile s32 *, 8) | 0x100);
}
