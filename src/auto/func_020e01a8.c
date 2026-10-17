#include "m2c.h"

M2C_UNK func_020ded80(s32);                         /* extern */
M2C_UNK func_020df1d4(s32);                         /* extern */

void func_020e01a8(void *arg0) {
    s32 temp_r1;

    if (M2C_FIELD(arg0, volatile s32 *, 8) != 0) {
        temp_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 8);
        if (temp_r1 != M2C_FIELD(arg0, volatile s32 *, 4)) {
            M2C_FIELD(arg0, volatile s32 *, 4) = temp_r1;
            func_020df1d4(M2C_FIELD(arg0, volatile s32 *, 4));
        }
        func_020ded80(M2C_FIELD(arg0, volatile s32 *, 4));
        return;
    }
    if (M2C_FIELD(arg0, volatile s32 *, 4) != 0) {
        M2C_FIELD(arg0, volatile s32 *, 4) = 0;
    }
}
