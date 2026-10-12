#include "m2c.h"

s32 func_020b54b0(void *arg0) {
    return M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0xF0) * 4)), s32 *, 0xE8);
}
