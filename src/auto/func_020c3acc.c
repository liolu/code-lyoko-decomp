/* compiler: 1.2/sp3  */
#include "m2c.h"

M2C_UNK func_020c3e8c(void *, s32, s32, s32, s32, s32, s32); /* extern */

void func_020c3acc(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        M2C_FIELD(arg0, u8 *, 0x9C) = (u8) (M2C_FIELD(arg0, u8 *, 0x9C) | 8);
        M2C_FIELD(arg0, M2C_UNK(**)(void *, M2C_UNK), 0x24)(arg0 + 0xC, 0);
        func_020c3e8c(arg0, M2C_FIELD(arg0, s32 *, 0x74), M2C_FIELD(arg0, s32 *, 0x78), M2C_FIELD(arg0, s32 *, 0x7C),
                      M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0x80), 0);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x9C)  = (u8) ((M2C_FIELD(arg0, u8 *, 0x9C) & ~1) | 1);
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
}
