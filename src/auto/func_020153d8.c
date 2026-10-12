/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02014340();                                /* extern */
s32 func_02014440(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0201456c(M2C_UNK, M2C_UNK);            /* extern */

s32 func_020153d8(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02014340();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0201456c(1, arg0);
    var_r0 = func_02014440(1, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
