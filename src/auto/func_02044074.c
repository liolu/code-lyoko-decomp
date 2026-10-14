/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02044074(void *arg0) {
    void *temp_r2;

    if (M2C_FIELD(arg0, s32 *, 0) == 4) {
        temp_r2                     = M2C_FIELD(arg0, void **, 4);
        M2C_FIELD(temp_r2, u8 *, 5) = (u8) (M2C_FIELD(temp_r2, u8 *, 5) | 1);
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0) < 4) || (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 5) & 1)) {
        return 1;
    }
    return 0;
}
