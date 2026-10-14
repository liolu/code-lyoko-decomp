#include "m2c.h"

M2C_UNK func_0208f8c8();                            /* extern */
extern M2C_UNK data_020f00e4;
extern M2C_UNK data_020f0114;
extern s32 data_020fe42c;

M2C_UNK **func_0209d940(M2C_UNK **arg0) {
    *arg0         = &data_020f00e4;
    *arg0         = &data_020f0114;
    data_020fe42c = 0;
    func_0208f8c8(arg0);
    return arg0;
}
