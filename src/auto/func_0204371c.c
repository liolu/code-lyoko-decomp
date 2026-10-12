/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020448b8(M2C_UNK, void *, s32, M2C_UNK); /* extern */

void func_0204371c(M2C_UNK arg0, void *arg1) {
    s32 var_r2;

    if (M2C_FIELD(arg1, u8 *, 6) != 0) {
        var_r2 = ((M2C_FIELD(arg1, u8 *, 7) - 1) * 8) + 0x18;
    } else {
        var_r2 = ((M2C_FIELD(arg1, u8 *, 7) - 1) * 4) + 0x1C;
    }
    func_020448b8(arg0, arg1, var_r2, 0);
}
