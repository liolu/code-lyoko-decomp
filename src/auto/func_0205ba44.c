#include "m2c.h"

u8 func_0205ba44(void *arg0) {
    u8 temp_r2;

    temp_r2 = M2C_FIELD(arg0, u8 *, 0x1F);
    M2C_FIELD(arg0, u8 *, 0x1F) = 0U;
    return temp_r2;
}
