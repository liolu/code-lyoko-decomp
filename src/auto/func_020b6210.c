#include "m2c.h"

M2C_UNK func_0200eee8(s32);                         /* extern */

void func_020b6210(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x10) == 1) {
        func_0200eee8(M2C_FIELD(arg0, s32 *, 0xC));
    }
    M2C_FIELD(arg0, u8 *, 0x10) = 0U;
}
