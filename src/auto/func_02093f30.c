#include "m2c.h"

M2C_UNK func_02093e8c();                            /* extern */
M2C_UNK func_02093fe4(s32);                         /* extern */
M2C_UNK func_020941c0(s32);                         /* extern */

s32 func_02093f30(s32 arg0) {
    func_02093e8c();
    func_020941c0(arg0 + 0x2C);
    func_02093fe4(arg0 + 0x20);
    return arg0;
}
