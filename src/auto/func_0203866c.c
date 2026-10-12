/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02038a44();                                /* extern */
u16 func_02038a70(void *, u16);                     /* extern */

s32 func_0203866c(void *arg0) {
    if (func_02038a44() != 0) {
        return 0;
    }
    M2C_FIELD(arg0, u16 *, 8) = func_02038a70(arg0, M2C_FIELD(arg0, u16 *, 8));
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) - 1);
    return 1;
}
