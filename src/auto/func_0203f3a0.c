#include "m2c.h"

s32 *func_0203f840();                               /* extern */
s32 *func_02049798(s32 *, M2C_UNK *);               /* extern */

s32 func_0203f3a0(void) {
    u8 sp0[12];
    s32 *var_r0;

    var_r0 = func_0203f840();
    if ((var_r0 != NULL) && ((*var_r0 == 3) || (var_r0 = func_02049798(var_r0, sp0), (var_r0 != NULL)))) {
        return M2C_FIELD(var_r0, s32 *, 4);
    }
    return 0;
}
