#include "m2c.h"

s32 func_0203e9a4(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0203f12c(M2C_UNK);                     /* extern */
M2C_UNK func_0203f68c(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02040334(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

s32 func_02041038(M2C_UNK arg0) {
    func_02040334(arg0, 1, 5);
    func_0203f68c(arg0, 2);
    if (func_0203e9a4(arg0, 1) != 0) {
        return 2;
    }
    func_0203f12c(arg0);
    return 1;
}
