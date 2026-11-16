/* compiler: 1.2/sp3 -O2,p */
#include "m2c.h"

s32 func_020238f0(s32);                             /* extern */
s32 func_020454ac(void *, s32, s32);                /* extern */
extern M2C_UNK data_020e9488;

void func_02046d68(void *arg0) {
    s32 temp_r7;
    s32 var_r5;
    void *temp_r1;

    var_r5 = 0;
    do {
        temp_r7 = *((M2C_UNK *) ((s8 *) &data_020e9488 + (var_r5 * 4)));
        M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x10) + (var_r5 * 4)), s32 *, 0x54) =
            func_020454ac(arg0, temp_r7, func_020238f0(temp_r7));
        temp_r1 = M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x10) + (var_r5 * 4)), void **, 0x54);
        var_r5 += 1;
        M2C_FIELD(temp_r1, u8 *, 5) = (u8) (M2C_FIELD(temp_r1, u8 *, 5) | 0x10);
    } while (var_r5 < 0xF);
}
