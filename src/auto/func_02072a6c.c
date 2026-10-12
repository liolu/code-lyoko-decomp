/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02072a6c(s32 arg0, s32 arg1) {
    s32 temp_r2;

    temp_r2 = (arg1 * 0xE0) + arg0;
    if (M2C_FIELD(temp_r2, s32 *, 0x30) == 0) {
        return 0;
    }
    if (M2C_FIELD(temp_r2, u8 *, 0x83) & 1) {
        return 1;
    }
    return 0;
}
