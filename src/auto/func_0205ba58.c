#include "m2c.h"

u8 func_0205ba58(void *arg0) {
    u8 temp_r2;

    temp_r2 = M2C_FIELD(arg0, u8 *, 0x1E);
    M2C_FIELD(arg0, u8 *, 0x1E) = 0U;
    return temp_r2;
}
