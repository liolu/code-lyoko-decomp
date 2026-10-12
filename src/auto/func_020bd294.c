#include "m2c.h"

M2C_UNK func_02069d98(s32, M2C_UNK);                /* extern */
s32 func_02069fb8();                                /* extern */
s32 func_0208f8e8(M2C_UNK);                         /* extern */
extern M2C_UNK data_020f1448;
extern s32 data_020ff5e0;

M2C_UNK **func_020bd294(M2C_UNK **arg0) {
    s32 var_r0;

    *arg0 = &data_020f1448;
    if (data_020ff5e0 == 0) {
        var_r0 = func_0208f8e8(8);
        if (var_r0 != 0) {
            var_r0 = func_02069fb8();
        }
        data_020ff5e0 = var_r0;
    }
    func_02069d98(data_020ff5e0, 0);
    return arg0;
}
