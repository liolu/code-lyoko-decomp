/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02072834(void *arg0) {
    s32 temp_r0;
    s32 var_r1;
    s32 var_r2;

    var_r2 = 0;
    if (M2C_FIELD(arg0, s32 *, 0xE68) != 3) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xE64);
        var_r1  = 1;
        if ((temp_r0 != 2) && (temp_r0 != 3)) {
            var_r1 = 0;
        }
        if (var_r1 != 0) {
            var_r2 = 1;
        }
    }
    return var_r2;
}
