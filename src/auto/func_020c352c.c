#include "m2c.h"

M2C_UNK func_0208f870();                            /* extern */

void func_020c352c(s32 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = (arg1 * 0x18) + arg0;
    if (M2C_FIELD(temp_r4, s32 *, 8) != 0) {
        func_0208f870();
        M2C_FIELD(temp_r4, s32 *, 8) = 0;
    }
    M2C_FIELD((arg0 + arg1), s8 *, 0x60) = 0;
}
