/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020b6d70(s32 arg0, void *arg1, void *arg2) {
    void *temp_r3;

    if (arg1 == NULL) {
        return;
    }
    M2C_FIELD(arg1, void **, 0) = (void *) M2C_FIELD(arg2, void **, 0);
    temp_r3                     = M2C_FIELD(arg1, void **, 0);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 4) = (s32) (M2C_FIELD(temp_r3, s32 *, 4) + 1);
    }
    M2C_FIELD(arg1, s32 *, 4)    = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(arg1, s32 *, 8)    = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(arg1, s32 *, 0xC)  = (s32) M2C_FIELD(arg2, s32 *, 0xC);
    M2C_FIELD(arg1, s32 *, 0x10) = (s32) M2C_FIELD(arg2, s32 *, 0x10);
    M2C_FIELD(arg1, s32 *, 0x14) = (s32) M2C_FIELD(arg2, s32 *, 0x14);
    M2C_FIELD(arg1, s32 *, 0x18) = (s32) M2C_FIELD(arg2, s32 *, 0x18);
    M2C_FIELD(arg1, s32 *, 0x1C) = (s32) M2C_FIELD(arg2, s32 *, 0x1C);
    M2C_FIELD(arg1, s32 *, 0x20) = (s32) M2C_FIELD(arg2, s32 *, 0x20);
    M2C_FIELD(arg1, s32 *, 0x24) = (s32) M2C_FIELD(arg2, s32 *, 0x24);
    M2C_FIELD(arg1, s32 *, 0x28) = (s32) M2C_FIELD(arg2, s32 *, 0x28);
    M2C_FIELD(arg1, s32 *, 0x2C) = (s32) M2C_FIELD(arg2, s32 *, 0x2C);
    M2C_FIELD(arg1, s32 *, 0x30) = (s32) M2C_FIELD(arg2, s32 *, 0x30);
    M2C_FIELD(arg1, u8 *, 0x34)  = (u8) M2C_FIELD(arg2, u8 *, 0x34);
}
