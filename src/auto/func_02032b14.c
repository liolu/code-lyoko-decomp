#include "m2c.h"
#include "engine.h"

void func_02032b14(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + arg0);
}
