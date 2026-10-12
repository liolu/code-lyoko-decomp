#include "m2c.h"

M2C_UNK func_0204bd1c();                            /* extern */
M2C_UNK func_0208f7c0(void *);                      /* extern */

s32 func_0204cce4(void *arg0) {
    if (arg0 == NULL) {
        return -0x66;
    }
    if (M2C_FIELD(arg0, s32 *, 0x80) != 0) {
        func_0204bd1c(arg0);
    }
    if (arg0 != NULL) {
        func_0208f7c0(arg0);
    }
    return 0;
}
