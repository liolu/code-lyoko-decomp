#include "m2c.h"

u8 func_020728a0(void *arg0) {
    return M2C_FIELD((arg0 + M2C_FIELD(arg0, u16 *, 0xE3C)), u8 *, 0xED4);
}
