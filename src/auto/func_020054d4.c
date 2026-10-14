#include "m2c.h"

M2C_UNK func_0200551c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020f4418;

void func_020054d4(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_0200551c(&data_020f4418);
}
