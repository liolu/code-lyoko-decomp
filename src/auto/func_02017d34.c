/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

M2C_UNK func_0201698c(M2C_UNK);

extern s32 data_020f7b0c;

s32 func_02017d34(s32 arg0) {
    if ((data_020f7b0c != 0) && (func_0201698c(arg0) != 0) && (M2C_FIELD((data_020f7b0c + ((arg0 - 1) * 4)), s32 *, 0x14E8) == 7)) {
        return 1;
    }
    return 0;
}
