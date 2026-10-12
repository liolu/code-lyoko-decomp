#include "m2c.h"

s32 func_0208ef9c(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x18) != 0) {
        return M2C_FIELD(arg0, s32 *, 0x14);
    }
    return -1;
}
