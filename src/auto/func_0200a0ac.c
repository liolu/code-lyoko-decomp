/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02009dc0(M2C_UNK, s32);                /* extern */
M2C_UNK func_02009dd4(M2C_UNK, s32);                /* extern */
s32 func_02009de8(M2C_UNK);                         /* extern */
s32 func_02009ed4(M2C_UNK);                         /* extern */
extern s32 data_020f4734;

void func_0200a0ac(void) {
    if (data_020f4734 != 0) {
        return;
    }
    data_020f4734 = 1;
    func_02009dd4(0, func_02009ed4(0));
    func_02009dc0(0, func_02009de8(0));
    func_02009dc0(2, 0);
    func_02009dd4(2, 0);
    func_02009dd4(3, func_02009ed4(3));
    func_02009dc0(3, func_02009de8(3));
    func_02009dd4(4, func_02009ed4(4));
    func_02009dc0(4, func_02009de8(4));
    func_02009dd4(5, func_02009ed4(5));
    func_02009dc0(5, func_02009de8(5));
    func_02009dd4(6, func_02009ed4(6));
    func_02009dc0(6, func_02009de8(6));
}
