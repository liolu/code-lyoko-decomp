/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02011d90();                            /* extern */
s32 func_02012400(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_020f6578;
extern M2C_UNK func_02011da8;

s32 func_020123bc(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                                = func_02012400(arg0, &func_02011da8, 0);
    M2C_FIELD(&data_020f6578, s32 *, 0x20) = temp_r0;
    if (temp_r0 == 0) {
        func_02011d90();
    }
    return M2C_FIELD(&data_020f6578, s32 *, 0x20);
}
