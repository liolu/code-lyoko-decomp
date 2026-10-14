/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020b9470(void *arg0, s32 arg1) {
    void *temp_r3;

    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
    temp_r3                      = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r3 == NULL) {
        return;
    }
    M2C_FIELD(temp_r3, s8 *, 0x2E)  = 0;
    M2C_FIELD(temp_r3, s32 *, 0x48) = arg1;
    M2C_FIELD(temp_r3, s32 *, 0x40) = -1;
    M2C_FIELD(temp_r3, s8 *, 0x2F)  = 0;
}
