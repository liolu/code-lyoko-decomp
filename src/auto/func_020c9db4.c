#include "m2c.h"

void func_020c9db4(void *arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg2, s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg2, s32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg2, s32 *, 0x2C);
}
