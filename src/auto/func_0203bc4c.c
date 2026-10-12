/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200c144(s32, s32);                    /* extern */
s32 func_0200d044(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0200d08c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_0203bc4c(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg0 == func_0200d044(arg2, arg3)) {
        func_0200d08c(arg2, arg3, 0);
    }
    func_0200c144(arg0, arg0 + arg1);
}
