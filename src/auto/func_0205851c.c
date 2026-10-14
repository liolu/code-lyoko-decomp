#include "m2c.h"

M2C_UNK func_0208f8c8();                            /* extern */
extern M2C_UNK data_020edcf4;
extern s32 data_020f86c8;

M2C_UNK **func_0205851c(M2C_UNK **arg0) {
    *arg0         = &data_020edcf4;
    data_020f86c8 = 0;
    func_0208f8c8(arg0);
    return arg0;
}
