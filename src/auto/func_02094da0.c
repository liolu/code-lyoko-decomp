#include "m2c.h"

M2C_UNK func_0200bbf4(M2C_UNK, void *, M2C_UNK);    /* extern */

void func_02094da0(void *arg0, s32 arg1) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 var_r2;
    s32 var_r2_2;
    void *temp_r0;
    void *temp_r0_2;

    if (arg1 != 0) {
        if ((M2C_FIELD(arg0, volatile u8 *, 0x114) == 0) && (M2C_FIELD(arg0, volatile s32 *, 0x104) != 0)) {
            var_r2 = 0;
            do {
                temp_r1 = var_r2 + 1;
                temp_r0 = arg0 + (var_r2 * 4);
                var_r2 = temp_r1;
                M2C_FIELD(temp_r0, volatile s32 *, 0xC0) = temp_r1;
            } while (temp_r1 < 0x10);
            M2C_FIELD(arg0, volatile s32 *, 0x100) = 0;
            M2C_FIELD(arg0, volatile s32 *, 0x104) = 0;
            func_0200bbf4(0, arg0, 0xC0);
        }
        M2C_FIELD(arg0, volatile u8 *, 0x114) = 1U;
        M2C_FIELD(arg0, volatile s32 *, 0x104) = 0x10;
        return;
    }
    if (M2C_FIELD(arg0, volatile u8 *, 0x114) != 1) {
        return;
    }
    if (M2C_FIELD(arg0, volatile s32 *, 0x104) != 0) {
        var_r2_2 = 0;
        do {
            temp_r1_2 = var_r2_2 + 1;
            temp_r0_2 = arg0 + (var_r2_2 * 4);
            var_r2_2 = temp_r1_2;
            M2C_FIELD(temp_r0_2, volatile s32 *, 0xC0) = temp_r1_2;
        } while (temp_r1_2 < 0x10);
        M2C_FIELD(arg0, volatile s32 *, 0x100) = 0;
        M2C_FIELD(arg0, volatile s32 *, 0x104) = 0;
        func_0200bbf4(0, arg0, 0xC0);
    }
    M2C_FIELD(arg0, volatile u8 *, 0x114) = 0U;
}
