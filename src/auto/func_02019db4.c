#include "m2c.h"

extern M2C_UNK data_020f79a0;

void func_02019db4(void) {
    M2C_FIELD(M2C_FIELD(&data_020f79a0, void **, 4), s16 *, 0x4B0) = 1;
    M2C_FIELD(&data_020f79a0, u8 *, 0xE) = (u8) M2C_FIELD(M2C_FIELD(&data_020f79a0, void **, 4), u8 *, 0x4B4);
    M2C_FIELD(&data_020f79a0, s8 *, 0xC) = 5;
}
