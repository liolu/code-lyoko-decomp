/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02038e2c();                            /* extern */
extern M2C_UNK *data_020ecc50;
extern M2C_UNK *data_020ecc54;
extern M2C_UNK data_020fa670;
extern M2C_UNK func_02039024;
extern M2C_UNK func_020390b4;

void func_02039168(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(&data_020fa670, s32 *, 0xC) = arg0;
    M2C_FIELD(&data_020fa670, s32 *, 0x10) = arg1;
    M2C_FIELD(&data_020fa670, s32 *, 0x14) = arg2;
    M2C_FIELD(&data_020fa670, s32 *, 0x18) = arg3;
    func_02038e2c();
    if (arg4 == 0) {
        return;
    }
    data_020ecc50 = &func_020390b4;
    data_020ecc54 = &func_02039024;
}
