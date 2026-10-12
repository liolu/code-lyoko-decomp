#include "m2c.h"

s32 func_020418b8();         /* extern */
s32 func_02048f70();                        /* extern */
s32 func_02048ff4(); /* extern */

s32 func_02048edc(M2C_UNK arg0, void *arg1, void *arg2) {
    s32 temp_ip;
    s32 temp_r0;
    s32 var_r0;
    s32 var_r0_2;

    temp_ip = M2C_FIELD(arg1, s32 *, 0);
    if (temp_ip != M2C_FIELD(arg2, s32 *, 0)) {
        return func_020418b8();
    }
    if (temp_ip == 3) {
        if ((s32) M2C_FIELD(arg1, s32 *, 4) < (s32) M2C_FIELD(arg2, s32 *, 4)) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
        return var_r0_2;
    }
    if (temp_ip == 4) {
        if (func_02048f70(M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg2, s32 *, 4)) < 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    temp_r0 = func_02048ff4(arg0, arg1, arg2, 0xB);
    if (temp_r0 != -1) {
        return temp_r0;
    }
    return func_020418b8(arg0, arg1, arg2);
}
