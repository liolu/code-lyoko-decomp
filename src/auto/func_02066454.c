#include "m2c.h"

s32 func_02066454(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0) + (M2C_FIELD(arg0, s32 *, 4) << 6);
}
