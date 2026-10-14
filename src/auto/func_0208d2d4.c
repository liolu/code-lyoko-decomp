#include "m2c.h"

extern M2C_UNK data_020efa40;
extern M2C_UNK data_020efa50;
extern s32 data_020f86c8;
extern void *data_021033d8;

void func_0208d2d4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa50;
    data_021033d8                  = arg0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa40;
    M2C_FIELD(arg0, s8 *, 4)       = 0;
    M2C_FIELD(arg0, s8 *, 5)       = 0;
    M2C_FIELD(arg0, s8 *, 6)       = 7;
    M2C_FIELD(arg0, s32 *, 8)      = (s32) data_020f86c8;
}
