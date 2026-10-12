#include "m2c.h"

M2C_UNK func_0208f8c8();                            /* extern */
M2C_UNK func_020d513c(void *, s32);                 /* extern */

void *func_020d5114(void *arg0) {
    func_020d513c(arg0, M2C_FIELD(arg0, s32 *, 4));
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        func_0208f8c8();
    }
    return arg0;
}
