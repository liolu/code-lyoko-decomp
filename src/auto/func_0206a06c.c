#include "m2c.h"

M2C_UNK func_0208f8c8();                            /* extern */
extern M2C_UNK data_020ee5ac;
extern s32 data_020ff5e4;

M2C_UNK **func_0206a06c(M2C_UNK **arg0) {
    *arg0         = &data_020ee5ac;
    data_020ff5e4 = 0;
    func_0208f8c8(arg0);
    return arg0;
}
