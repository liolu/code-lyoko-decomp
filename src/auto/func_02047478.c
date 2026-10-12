#include "m2c.h"

s32 func_020454ac(s32, s32, s32);                   /* extern */
s32 func_020474e8();                                /* extern */
M2C_UNK func_02047618(void *, s32, s32);            /* extern */
s32 func_020497fc(s32, s32, s32);                   /* extern */

s32 func_02047478(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0_2 = func_020474e8();
    if (temp_r0_2 == 0) {
        return 0;
    }
    temp_r0 = func_020497fc(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 8), temp_r0_2);
    func_02047618(arg0, temp_r0, temp_r0_2);
    return func_020454ac(M2C_FIELD(arg0, s32 *, 0), temp_r0, temp_r0_2 - 1);
}
