#include "m2c.h"

M2C_UNK func_0200551c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020f4420;

void func_02005448(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_0200551c(&data_020f4420);
}
