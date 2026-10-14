#include "m2c.h"

extern M2C_UNK data_020f1220;
extern M2C_UNK data_020f4140;

void func_020e11c0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)     = &data_020f1220;
    M2C_FIELD(arg0, volatile s32 *, 4) = 0xF;
    M2C_FIELD(arg0, M2C_UNK **, 0)     = &data_020f4140;
}
