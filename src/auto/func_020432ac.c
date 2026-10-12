#include "m2c.h"

M2C_UNK func_02041750(void *, M2C_UNK *);           /* extern */
M2C_UNK func_0204332c(void *, s32);                 /* extern */
M2C_UNK func_02043584(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_020ed434;

void func_020432ac(void *arg0) {
    u16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u16 *, 0x2C);
    if ((u32) temp_r1 > 0x1000U) {
        func_02043584(arg0, 5);
        return;
    }
    func_0204332c(arg0, temp_r1 * 2);
    if ((u32) M2C_FIELD(arg0, u16 *, 0x2C) <= 0x1000U) {
        return;
    }
    func_02041750(arg0, &data_020ed434);
}
