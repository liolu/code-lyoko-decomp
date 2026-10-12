#include "m2c.h"

s32 func_0203ea4c();                                /* extern */
s32 func_0203ea5c(M2C_UNK);                         /* extern */
M2C_UNK func_0203f10c(M2C_UNK, s32);                /* extern */

s32 func_020410e4(M2C_UNK arg0) {
    func_0203f10c(arg0, func_0203ea4c());
    func_0203f10c(arg0, func_0203ea5c(arg0));
    return 2;
}
