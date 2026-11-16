/* compiler: 1.2/sp3  */
#include "m2c.h"

M2C_UNK func_0208f870();                            /* extern */

void *func_020c371c(void *arg0) {
    s32 var_r7;
    void *temp_r0;
    void *var_r6;

    var_r6 = arg0;
    var_r7 = 0;
    do {
        if (M2C_FIELD(var_r6, s32 *, 8) != 0) {
            func_0208f870();
            M2C_FIELD(var_r6, s32 *, 8) = 0;
        }
        temp_r0 = arg0 + var_r7;
        var_r7 += 1;
        M2C_FIELD(temp_r0, s8 *, 0x60) = 0;
        var_r6 += 0x18;
    } while (var_r7 < 4);
    return arg0;
}
