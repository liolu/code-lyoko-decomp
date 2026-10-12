/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200c31c(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_0200c844();                                /* extern */
M2C_UNK func_0200c884(s32);                         /* extern */
M2C_UNK func_0200c914(M2C_UNK);                     /* extern */

void func_0203a1e4(void *arg0) {
    s32 temp_r4;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) == 0) {
        return;
    }
    func_0200c31c(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
    temp_r4 = func_0200c844();
    func_0200c914(1);
    func_0200c884(temp_r4);
}
