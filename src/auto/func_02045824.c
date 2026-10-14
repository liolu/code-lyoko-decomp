/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020e92f0;

s32 func_02045824(s32 arg0, s32 arg1) {
    s32 var_r3;

    var_r3 = ((M2C_FIELD(arg1, s32 *, 8) & ((1 << M2C_FIELD(arg0, u8 *, 7)) - 1)) * 0x14) + M2C_FIELD(arg0, s32 *, 0x10);
loop_1:
    if ((M2C_FIELD(var_r3, s32 *, 0) == 4) && (M2C_FIELD(var_r3, s32 *, 4) == arg1)) {
        return var_r3 + 8;
    }
    var_r3 = M2C_FIELD(var_r3, s32 *, 0x10);
    if (var_r3 == 0) {
        return (s32) &data_020e92f0;
    }
    goto loop_1;
}
