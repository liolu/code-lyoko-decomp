#include "m2c.h"

s32 func_0203f87c();                                /* extern */

void func_0203f63c(void *arg0) {
    s32 temp_r0;
    u32 var_r2;
    void *temp_r1;

    var_r2 = func_0203f87c() + 8;
    if (var_r2 < (u32) M2C_FIELD(arg0, volatile u32 *, 8)) {
        do {
            temp_r1 = var_r2 - 8;
            M2C_FIELD(var_r2, volatile s32 *, -8) = (s32) M2C_FIELD(var_r2, volatile s32 *, 0);
            temp_r0 = M2C_FIELD(var_r2, volatile s32 *, 4);
            var_r2 += 8;
            M2C_FIELD(temp_r1, volatile s32 *, 4) = temp_r0;
        } while (var_r2 < (u32) M2C_FIELD(arg0, volatile u32 *, 8));
    }
    M2C_FIELD(arg0, volatile u32 *, 8) = (u32) (M2C_FIELD(arg0, volatile u32 *, 8) - 8);
}
