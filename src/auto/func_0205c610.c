#include "m2c.h"

s32 func_0203eac0(s32, s32, M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_0205c254(void *, s32);                 /* extern */

void func_0205c610(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x10) == 0) {
        return;
    }
    func_0205c254(arg0, func_0203eac0(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC), 0, 0));
    M2C_FIELD(arg0, u8 *, 0x10) = 0U;
}
