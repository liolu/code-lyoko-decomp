#include "m2c.h"

M2C_UNK func_0200bbb0(M2C_UNK, void *, M2C_UNK);    /* extern */
M2C_UNK func_0208f870();                            /* extern */

void func_020885a8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        return;
    }
    func_0208f870();
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    func_0200bbb0(0, arg0 + 0x14, 0x20);
    M2C_FIELD(arg0, s8 *, 0xE) = 0;
}
