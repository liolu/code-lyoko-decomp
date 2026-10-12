#include "m2c.h"

s32 func_020e1e98(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0) + (M2C_FIELD(arg0, s32 *, 4) * 4);
}
