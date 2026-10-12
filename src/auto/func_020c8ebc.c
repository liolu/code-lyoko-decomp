#include "m2c.h"

extern s32 data_0210ad80;

void func_020c8ebc(void *arg0) {
    if (M2C_FIELD(arg0, volatile u8 *, 4) != 0) {
        M2C_FIELD(arg0, volatile s32 *, 0) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0) - data_0210ad80);
        if ((s32) M2C_FIELD(arg0, volatile s32 *, 0) < 0) {
            M2C_FIELD(arg0, volatile s32 *, 0) = 0;
        }
        return;
    }
    M2C_FIELD(arg0, volatile s32 *, 0) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0) + data_0210ad80);
}
