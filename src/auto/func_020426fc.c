/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020426fc(void *arg0) {
    s32 temp_r1;
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r2 & 1) {
        return -1;
    }
    if (temp_r2 & 2) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) *M2C_FIELD(arg0, s32 **, 0x10);
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0xC) - M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, -4), void **, 0xC), s32 *, 0xC);
    return ((s32) (temp_r1 + ((u32) (temp_r1 >> 1) >> 0x1E)) >> 2) - 1;
}
