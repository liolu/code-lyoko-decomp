#include "m2c.h"

s32 func_02071fd4(void *arg0, void *arg1) {
    return M2C_FIELD(arg1, s8 *, 0x2E) - M2C_FIELD(arg0, s8 *, 0x2E);
}
