/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020461dc(void *arg0) {
    s32 temp_r0;
    s32 temp_r2;

    if (M2C_FIELD(arg0, s32 *, 0) == 3) {
        temp_r2 = M2C_FIELD(arg0, s32 *, 4);
        temp_r0 = temp_r2 >> 0xC;
        if (((temp_r0 << 0xC) == temp_r2) && (temp_r0 >= 1) && (((s32) (temp_r0 - 1) >> 0x18) == 0)) {
            return temp_r0;
        }
    }
    return -1;
}
