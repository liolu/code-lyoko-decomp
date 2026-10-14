#include "m2c.h"

M2C_UNK func_0200551c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020f441e;

void func_02005470(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_0200551c(&data_020f441e);
}
