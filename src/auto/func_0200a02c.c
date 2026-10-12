/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02009830();                                /* extern */
M2C_UNK func_02009dc0(M2C_UNK, s32);                /* extern */
M2C_UNK func_02009dd4(M2C_UNK, s32);                /* extern */
s32 func_02009de8(M2C_UNK);                         /* extern */
s32 func_02009ed4(M2C_UNK);                         /* extern */
M2C_UNK func_0200a6bc(s32);                         /* extern */
M2C_UNK func_0200a6c4(s32);                         /* extern */
extern s32 data_020f4738;

void func_0200a02c(void) {
    func_02009dd4(2, func_02009ed4(2));
    func_02009dc0(2, func_02009de8(2));
    if ((data_020f4738 != 0) && ((func_02009830() & 3) != 1)) {
        return;
    }
    func_0200a6bc(0x0200002B);
    func_0200a6c4(0x023E0021);
}
