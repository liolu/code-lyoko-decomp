/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02018cb8(M2C_UNK, M2C_UNK, s32);       /* extern */
M2C_UNK func_0201e71c(s8 *, s32);                   /* extern */
extern s32 data_020f7b0c;

void func_020170d8(s8 arg0, M2C_UNK arg1) {
    s8 sp0;

    sp0 = arg0;
    func_0201e71c(&sp0, data_020f7b0c);
    func_02018cb8(6, arg1, data_020f7b0c);
}
