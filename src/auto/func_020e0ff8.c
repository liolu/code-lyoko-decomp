#include "m2c.h"

M2C_UNK func_02004f70();                /* extern */
M2C_UNK func_0202f218();        /* extern */
M2C_UNK func_0202f5d8();                   /* extern */
M2C_UNK func_0205efc0();        /* extern */
s32 func_0208f8e8();                    /* extern */
M2C_UNK func_020c352c();                /* extern */
M2C_UNK func_020c3568();     /* extern */
s32 func_020c3768();                                /* extern */
M2C_UNK func_020dffec();   /* extern */
s32 func_020e02b8();                                /* extern */
M2C_UNK func_020e11e4();        /* extern */
extern M2C_UNK data_020f4159;
extern M2C_UNK data_020f4161;
extern M2C_UNK data_020f4163;
extern s32 data_0210ad60;
extern s32 data_0210afe0;
extern s8 data_0210afe4;
extern M2C_UNK data_0210aff4;
extern M2C_UNK data_0210aff5;
extern M2C_UNK data_0210b00c;

void func_020e0ff8(void) {
    u8 spC[12];
    u8 sp0[12];
    M2C_UNK *var_r4;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    u32 temp_r1;

    data_0210afe4 = 1;
    if (data_0210ad60 == 0) {
        var_r0 = func_0208f8e8(0x64);
        if (var_r0 != 0) {
            var_r0 = func_020c3768();
        }
        data_0210ad60 = var_r0;
    }
    func_020c352c(data_0210ad60, 0);
    temp_r1 = (u32) (M2C_FIELD(&data_0210aff4, s32 *, 0) << 0x1F) >> 0x1F;
    if (temp_r1 == 0) {
        var_r4 = &data_0210aff5;
    } else {
        var_r4 = M2C_FIELD(&data_0210aff4, M2C_UNK **, 8);
    }
    if (data_0210ad60 == 0) {
        var_r0_2 = func_0208f8e8(0x64, temp_r1);
        if (var_r0_2 != 0) {
            var_r0_2 = func_020c3768();
        }
        data_0210ad60 = var_r0_2;
    }
    func_020c3568(data_0210ad60, 1, var_r4);
    func_0202f218(sp0, &data_020f4159);
    func_020e11e4(sp0, &data_0210aff4);
    func_0205efc0(sp0, &data_020f4161);
    func_020e11e4(sp0, &data_0210b00c);
    func_0202f218(spC, &data_020f4163);
    if (data_0210afe0 == 0) {
        var_r0_3 = func_0208f8e8(0x14);
        if (var_r0_3 != 0) {
            var_r0_3 = func_020e02b8();
        }
        data_0210afe0 = var_r0_3;
    }
    func_020dffec(data_0210afe0, sp0, spC);
    func_0202f5d8(spC);
    func_02004f70(0x0400106C, 0);
    func_02004f70(0x0400006C, 0);
    func_0202f5d8(sp0);
}
