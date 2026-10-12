/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0205bbd0(void *arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r2;

    if (M2C_FIELD(arg0, u16 *, 4) & arg1) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    if (!(M2C_FIELD(arg0, u16 *, 6) & arg1)) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r2 & var_r0) {
        return 1;
    }
    return 0;
}
