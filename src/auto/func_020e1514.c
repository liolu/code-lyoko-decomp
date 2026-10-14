#include "m2c.h"

extern M2C_UNK data_020f1220;
extern M2C_UNK data_020f41c8;

void func_020e1514(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)     = &data_020f1220;
    M2C_FIELD(arg0, volatile s32 *, 4) = 0x16;
    M2C_FIELD(arg0, M2C_UNK **, 0)     = &data_020f41c8;
    M2C_FIELD(arg0, volatile s32 *, 8) = 0;
}
