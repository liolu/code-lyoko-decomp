#include "m2c.h"

M2C_UNK func_0208272c(void *, s32);                 /* extern */
M2C_UNK func_0208f8c8();                            /* extern */

void *func_02082704(void *arg0) {
    func_0208272c(arg0, M2C_FIELD(arg0, s32 *, 4));
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        func_0208f8c8();
    }
    return arg0;
}
