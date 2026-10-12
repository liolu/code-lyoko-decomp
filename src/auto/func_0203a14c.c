#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020fcf1c;

void func_0203a14c(s32 arg0, s32 arg1) {
    *((M2C_UNK *)((s8 *)&data_020fcf1c + (arg0 * 0x24))) = (s32) (u16) arg1;
}
