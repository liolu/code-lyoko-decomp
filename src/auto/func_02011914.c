/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02011950(M2C_UNK, M2C_UNK, M2C_UNK *, s32 *); /* extern */
M2C_UNK func_02011d00();                            /* extern */
extern M2C_UNK func_02011cf8;

s32 func_02011914(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_02011950(arg0, arg1, &func_02011cf8, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02011d00();
    return sp0;
}
