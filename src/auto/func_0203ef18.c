/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0203ef18(void *arg0, s32 arg1) {
    s32 var_r3;
    void *temp_r2;

    temp_r2                      = M2C_FIELD(arg0, void **, 8);
    var_r3                       = 1;
    M2C_FIELD(temp_r2, s32 *, 0) = 1;
    if (arg1 == 0) {
        var_r3 = 0;
    }
    M2C_FIELD(temp_r2, s32 *, 4) = var_r3;
    M2C_FIELD(arg0, void **, 8)  = (void *) (M2C_FIELD(arg0, void **, 8) + 8);
}
