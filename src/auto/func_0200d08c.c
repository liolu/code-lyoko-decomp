/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02009cf4(s32, M2C_UNK);                /* extern */
M2C_UNK func_0200c56c();                            /* extern */
M2C_UNK func_0200c580();                            /* extern */

void func_0200d08c(s32 arg0, s32 arg1, s32 arg2) {
    func_0200c580();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    func_02009cf4(arg0 + 0x3C + (arg1 * 4), 4);
    func_0200c56c();
}
