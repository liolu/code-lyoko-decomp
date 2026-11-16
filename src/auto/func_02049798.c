/* compiler: 1.2/sp3  */
#include "m2c.h"

s32 func_02044d54(s32, s32 *);                      /* extern */

void *func_02049798(void *arg0, void *arg1) {
    s32 sp0;
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r2 == 3) {
        return arg0;
    }
    if ((temp_r2 == 4) && (func_02044d54(M2C_FIELD(arg0, s32 *, 4) + 0x10, &sp0) != 0)) {
        M2C_FIELD(arg1, s32 *, 0) = 3;
        M2C_FIELD(arg1, s32 *, 4) = sp0;
        return arg1;
    }
    return NULL;
}
