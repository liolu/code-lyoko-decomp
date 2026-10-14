#include "m2c.h"

s32 *func_0203f840();                               /* extern */
s32 func_02049798(s32 *, M2C_UNK *);                /* extern */

s32 func_0203f4b0(void) {
    u8 sp0[12];
    s32 *temp_r0;
    s32 var_r4;
    s32 var_r5;

    temp_r0 = func_0203f840();
    var_r5  = 0;
    if (temp_r0 != NULL) {
        var_r4 = 1;
        if ((*temp_r0 != 3) && (func_02049798(temp_r0, sp0) == 0)) {
            var_r4 = 0;
        }
        if (var_r4 != 0) {
            var_r5 = 1;
        }
    }
    return var_r5;
}
