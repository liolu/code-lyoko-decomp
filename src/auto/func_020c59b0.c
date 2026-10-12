#include "m2c.h"

M2C_UNK func_0204debc(s32, M2C_UNK);                /* extern */
extern void **data_020ff650;

void func_020c59b0(void *arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r1;

    if (M2C_FIELD(*data_020ff650, s32 (**)(void **, M2C_UNK), 0x14)(data_020ff650, arg2) == 0) {
        return;
    }
    func_0204debc(arg0 + 8 + (arg1 * 4), arg2);
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (temp_r1 + 1);
    M2C_FIELD((arg0 + (temp_r1 * 4)), s32 *, 0x1C) = arg1;
}
