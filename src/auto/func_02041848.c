#include "m2c.h"

void *func_020425d8(void *);                        /* extern */
s32 func_020426c4(void *);                          /* extern */
M2C_UNK func_02044980(M2C_UNK *, s32, M2C_UNK);     /* extern */
s32 func_02044aa0(void *, M2C_UNK *, M2C_UNK *, s32, s32); /* extern */
extern M2C_UNK data_020ed238;

s32 func_02041848(void *arg0, s32 arg1) {
    u8 sp4[64];
    s32 temp_r0;
    s32 temp_r4;
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x14);
    temp_r0 = M2C_FIELD(temp_r5, s32 *, 8) & 1;
    if (temp_r0 != 0) {
        return temp_r0;
    }
    temp_r4 = func_020426c4(temp_r5);
    func_02044980(sp4, M2C_FIELD(func_020425d8(temp_r5), s32 *, 0x20) + 0x10, 0x3C);
    return func_02044aa0(arg0, &data_020ed238, sp4, temp_r4, arg1);
}
