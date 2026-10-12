#include "m2c.h"

extern M2C_UNK data_020ff55c;

void func_02062584(void *arg0) {
    M2C_FIELD(&data_020ff55c, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(&data_020ff55c, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(&data_020ff55c, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 8);
}
