/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0202ceb4(M2C_UNK, M2C_UNK);

extern M2C_UNK data_020f7b58;

void func_0201e810(s32 arg0) {
    s32 temp_r1;

    temp_r1                             = arg0 - 2;
    M2C_FIELD(&data_020f7b58, s32 *, 0) = temp_r1;
    M2C_FIELD(&data_020f7b58, s32 *, 4) = func_0202ceb4(0x1E, temp_r1);
    M2C_FIELD(&data_020f7b58, s32 *, 8) = 0x1E;
}
