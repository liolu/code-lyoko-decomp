#include "m2c.h"

s32 func_0203e9a4(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0203ee38(s32, s32, s32);               /* extern */
M2C_UNK func_0203f12c(s32);                         /* extern */
M2C_UNK func_0203f68c(s32, M2C_UNK);                /* extern */
s32 func_0203fd04(s32, M2C_UNK);                    /* extern */

s32 func_02087aa0(void *arg0) {
    s32 var_r5;

    func_0203ee38(M2C_FIELD(arg0, s32 *, 8), 0xFFFFD8F0, M2C_FIELD(arg0, s32 *, 0xC));
    var_r5 = func_0203fd04(M2C_FIELD(arg0, s32 *, 8), -1);
    if (var_r5 == 0) {
        func_0203f12c(M2C_FIELD(arg0, s32 *, 8));
        if (func_0203e9a4(M2C_FIELD(arg0, s32 *, 8), -2) != 0) {
            do {
                var_r5 += 1;
                func_0203f68c(M2C_FIELD(arg0, s32 *, 8), -2);
            } while (func_0203e9a4(M2C_FIELD(arg0, s32 *, 8), -2) != 0);
        }
    }
    func_0203f68c(M2C_FIELD(arg0, s32 *, 8), -2);
    return var_r5;
}
