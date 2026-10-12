#include "m2c.h"

extern void **data_020ff650;

void func_020c5d00(void *arg0) {
    M2C_FIELD(*data_020ff650, M2C_UNK (**)(void **, s32, M2C_UNK), 0x2C)(data_020ff650, M2C_FIELD(arg0, s32 *, 4), 0);
    M2C_FIELD(arg0, u8 *, 0x1A4) = (u8) (M2C_FIELD(arg0, u8 *, 0x1A4) & ~1);
}
