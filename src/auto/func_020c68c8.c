#include "m2c.h"

s32 func_0205c2c8(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0205c2dc(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0208f8e8(M2C_UNK);                         /* extern */
M2C_UNK func_020d47c0(s32, s32, s32);               /* extern */
s32 func_020d4edc();                                /* extern */
extern s32 data_0210af68;

s32 func_020c68c8(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r0;

    if (data_0210af68 == 0) {
        var_r0 = func_0208f8e8(0x48);
        if (var_r0 != 0) {
            var_r0 = func_020d4edc();
        }
        data_0210af68 = var_r0;
    }
    temp_r5 = data_0210af68;
    temp_r4 = func_0205c2dc(arg1, 0);
    func_020d47c0(temp_r5, temp_r4, func_0205c2c8(arg1, 1));
    return 0;
}
