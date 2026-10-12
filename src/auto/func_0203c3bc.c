/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0203ad78(s32, s32);                        /* extern */
s32 *func_0203b1c4();                               /* extern */
s32 func_0203c008(s32, M2C_UNK, M2C_UNK);           /* extern */

s32 func_0203c3bc(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, s32 *arg4) {
    s32 *temp_r0;
    s32 temp_r1;
    s32 var_r0;

    temp_r0 = func_0203b1c4();
    if (temp_r0 == NULL) {
        return 3;
    }
    temp_r1 = arg1 & 8;
    if (temp_r1 != 0) {
        var_r0 = func_0203c008(*temp_r0, arg2, arg3);
        if (var_r0 == 0) {
            return 7;
        }
        goto block_6;
    }
    var_r0 = func_0203ad78(*temp_r0, temp_r1);
block_6:
    if (arg4 != NULL) {
        *arg4 = var_r0;
    }
    return 0;
}
