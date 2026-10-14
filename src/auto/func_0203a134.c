#include "m2c.h"

extern M2C_UNK data_020fcf20;

void func_0203a134(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_020fcf20 + (arg0 * 0x24))) = arg1;
}
