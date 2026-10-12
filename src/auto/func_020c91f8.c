#include "m2c.h"

M2C_UNK func_0200bc40(void *, s32, M2C_UNK);        /* extern */

void func_020c91f8(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x38) = 0;
    func_0200bc40(arg0 + 0x54, M2C_FIELD(arg0, s32 *, 0x18) + 0x1C, 0x30);
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
}
