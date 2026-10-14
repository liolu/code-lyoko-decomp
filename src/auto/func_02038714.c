#include "m2c.h"

void func_02038714(void *arg0) {
    M2C_FIELD(arg0, volatile u16 *, 0xA)  = 0U;
    M2C_FIELD(arg0, volatile u16 *, 8)    = (u16) M2C_FIELD(arg0, volatile u16 *, 0xA);
    M2C_FIELD(arg0, volatile s16 *, 0xC)  = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x10) = 0;
}
