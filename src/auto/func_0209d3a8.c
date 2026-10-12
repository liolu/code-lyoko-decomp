#include "m2c.h"

M2C_UNK func_0200c280(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0200c31c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0200c914(M2C_UNK);                     /* extern */

void func_0209d3a8(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x9C) == 2) && (M2C_FIELD(arg0, u8 *, 0x51) != 0) && (M2C_FIELD(arg0, u8 *, 0x50) == 1)) {
        func_0200c31c(0x30, 0, 1, 0);
        func_0200c280(0x30, 0);
        func_0200c914(1);
        M2C_FIELD(arg0, u8 *, 0x50) = 0U;
    }
    M2C_FIELD(arg0, s32 *, 0x9C) = 1;
}
