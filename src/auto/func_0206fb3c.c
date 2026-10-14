/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0206fb3c(void *arg0) {
    u32 temp_r2_2;
    u32 var_r1;
    void *temp_r2;
    void *var_r3;

    temp_r2                      = arg0 + 0x18;
    M2C_FIELD(temp_r2, s32 *, 4) = 1;
    var_r3                       = arg0 + 0x30;
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(temp_r2, s32 *, 4);
    var_r1                       = 2;
    do {
        temp_r2_2                   = var_r1 + 1;
        M2C_FIELD(var_r3, u32 *, 0) = temp_r2_2;
        M2C_FIELD(var_r3, s32 *, 4) = (s32) (var_r1 - 1);
        var_r1                      = temp_r2_2;
        var_r3 += 0x18;
    } while (temp_r2_2 < 0x20U);
    M2C_FIELD(arg0, s32 *, 0)     = 2;
    M2C_FIELD(arg0, s32 *, 4)     = 0x1F;
    M2C_FIELD(arg0, s32 *, 0x34)  = 0;
    M2C_FIELD(arg0, s32 *, 0x2E8) = 0;
}
