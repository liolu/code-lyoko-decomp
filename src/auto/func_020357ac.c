/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203391c(void *);                      /* extern */
extern s32 data_020fa640;
extern u32 data_020fa644;
extern void *data_020fa648;

void func_020357ac(void *arg0, u32 arg1, s32 arg2) {
    u32 var_r5;
    void *var_r7;

    var_r7        = arg0;
    data_020fa640 = arg2;
    var_r5        = 0;
    data_020fa648 = var_r7;
    data_020fa644 = arg1;
    if (arg1 == 0) {
        return;
    }
    do {
        func_0203391c(var_r7);
        M2C_FIELD(var_r7, s32 *, 0xC)  = 0;
        M2C_FIELD(var_r7, s32 *, 0x10) = 0;
        M2C_FIELD(var_r7, s32 *, 0x14) = 0;
        M2C_FIELD(var_r7, s32 *, 0x18) = 0;
        M2C_FIELD(var_r7, s32 *, 0x1C) = 0;
        M2C_FIELD(var_r7, s32 *, 0x20) = 0;
        M2C_FIELD(var_r7, s32 *, 0x24) = 0;
        M2C_FIELD(var_r7, s32 *, 0x28) = 0;
        var_r5 += 1;
        M2C_FIELD(var_r7, s32 *, 0x2C) = 0;
        var_r7 += 0x30;
    } while (var_r5 < arg1);
}
