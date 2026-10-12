/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020256e4(void *arg0, s32 arg1) {
    s32 temp_r3;
    s32 var_r1;
    u32 temp_r2;

    var_r1 = arg1;
    if ((arg0 == NULL) || (temp_r3 = M2C_FIELD(arg0, s32 *, 4), (((u32) (temp_r3 << 0x16) >> 0x1D) == 0))) {
        return 0;
    }
    temp_r2 = (u32) (temp_r3 << 0x14) >> 0x1E;
    switch (temp_r2) {                              /* irregular */
    case 2:
        var_r1 = 1;
        break;
    case 0:
        if (var_r1 > 0) {
            M2C_FIELD(arg0, s32 *, 4) = (s32) ((temp_r3 & ~0xC00) | 0x800);
        } else if (var_r1 < 0) {
            M2C_FIELD(arg0, s32 *, 4) = (s32) ((temp_r3 & ~0xC00) | 0x400);
        }
        break;
    case 1:
        var_r1 = -1;
        break;
    }
    return var_r1;
}
