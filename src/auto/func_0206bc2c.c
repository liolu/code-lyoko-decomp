/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0206bc2c(s32 arg0, void *arg1, void *arg2) {
    void *temp_r1;

    if (arg1 == NULL) {
        return;
    }
    M2C_FIELD(arg1, s32 *, 0)      = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(arg1, s32 *, 4)      = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(arg1, s32 *, 8)      = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(arg1, s32 *, 0xC)    = (s32) M2C_FIELD(arg2, s32 *, 0xC);
    M2C_FIELD(arg1, s32 *, 0x10)   = (s32) M2C_FIELD(arg2, s32 *, 0x10);
    M2C_FIELD(arg1, s32 *, 0x14)   = (s32) M2C_FIELD(arg2, s32 *, 0x14);
    M2C_FIELD(arg1, s32 *, 0x18)   = (s32) M2C_FIELD(arg2, s32 *, 0x18);
    M2C_FIELD(arg1, s32 *, 0x1C)   = (s32) M2C_FIELD(arg2, s32 *, 0x1C);
    M2C_FIELD(arg1, s32 *, 0x20)   = (s32) M2C_FIELD(arg2, s32 *, 0x20);
    M2C_FIELD(arg1, void **, 0x24) = (void *) M2C_FIELD(arg2, void **, 0x24);
    temp_r1                        = M2C_FIELD(arg1, void **, 0x24);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 4) = (s32) (M2C_FIELD(temp_r1, s32 *, 4) + 1);
    }
}
