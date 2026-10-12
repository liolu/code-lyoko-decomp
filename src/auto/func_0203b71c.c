/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u32 func_02032208(s32, M2C_UNK);                    /* extern */

s32 func_0203b71c(s32 *arg0) {
    u32 temp_r0;

    temp_r0 = func_02032208(*arg0, 0x20);
    if (temp_r0 < 0x20U) {
        return 0;
    }
    return (temp_r0 - 0x20) & ~0x1F;
}
