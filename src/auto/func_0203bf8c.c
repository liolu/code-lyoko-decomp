/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203ad5c(M2C_UNK, s32);                /* extern */
s32 func_0203ad78();                                /* extern */
s32 func_0203b2b0();                                /* extern */
s32 func_0203c100(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_0203bd00;

s32 func_0203bf8c(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r4;

    var_r4 = func_0203ad78();
    if (var_r4 == 0) {
        if (arg2 == 0) {
            var_r2 = 0;
        } else {
            var_r2 = func_0203b2b0();
        }
        var_r4 = func_0203c100(arg0, &func_0203bd00, var_r2, arg0, arg1);
        if ((arg2 != 0) && (var_r4 != 0)) {
            func_0203ad5c(arg0, var_r4);
        }
    }
    return var_r4;
}
