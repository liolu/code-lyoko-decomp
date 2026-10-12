/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200d810(void *, s32);                     /* extern */
M2C_UNK func_0200d98c(void *, s32);                 /* extern */
M2C_UNK func_0200ea44();                            /* extern */
s32 func_0200eae8(s32);                             /* extern */

s32 func_0200e9fc(void *arg0) {
    func_0200d98c(arg0, func_0200d810(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_0200eae8(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_0200ea44();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
