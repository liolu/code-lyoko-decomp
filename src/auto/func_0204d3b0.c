#include "m2c.h"

s32 func_0200ee10(M2C_UNK, s32, M2C_UNK);           /* extern */
s32 func_0200ee7c(M2C_UNK, s32, M2C_UNK);           /* extern */
M2C_UNK func_0201fc54(s32, s32, s32);               /* extern */
extern s32 data_020fe374;
extern s32 data_020fe37c;
extern s32 data_020fe380;
extern s32 data_020fe384;

s32 func_0204d3b0(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;
    s32 var_r4;
    s32 var_r6;

    var_r6 = arg2;
    var_r4 = 0;
    if (((s32) data_020fe380 >= (s32) data_020fe374) && ((s32) data_020fe380 < (s32) data_020fe384)) {
        temp_r3 = data_020fe380 - data_020fe374;
        temp_r0 = 0x400 - temp_r3;
        var_r4  = var_r6;
        if (var_r6 > temp_r0) {
            var_r4 = temp_r0;
        }
        if (var_r4 > var_r6) {
            var_r4 = var_r6;
        }
        func_0201fc54(arg1, data_020fe37c + temp_r3, var_r4);
        var_r6 -= var_r4;
        data_020fe380 += var_r4;
    }
    if (var_r6 > 0) {
        if (func_0200ee10(arg0, data_020fe380, 0) < 0) {
            return -1;
        }
        temp_r0_2 = func_0200ee7c(arg0, data_020fe37c, 0x400);
        if (temp_r0_2 < 0) {
            return -1;
        }
        data_020fe374 = data_020fe380;
        data_020fe384 = data_020fe380 + temp_r0_2;
        return func_0204d3b0(arg0, arg1 + var_r4, var_r6, var_r4 + arg3);
    }
    return var_r4;
}
