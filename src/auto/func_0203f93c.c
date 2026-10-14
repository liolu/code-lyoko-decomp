/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0203f93c(s32 arg0, void *arg1, s32 *arg2) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg1, s32 *, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    *arg2                     = temp_r0;
    M2C_FIELD(arg1, s32 *, 4) = 0;
    return M2C_FIELD(arg1, s32 *, 0);
}
