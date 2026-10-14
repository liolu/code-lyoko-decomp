#include "m2c.h"

M2C_UNK func_0208f8c8();                            /* extern */
extern M2C_UNK data_020ef0cc;
extern s32 data_020fe428;

M2C_UNK **func_0207e3f4(M2C_UNK **arg0) {
    *arg0         = &data_020ef0cc;
    data_020fe428 = 0;
    func_0208f8c8(arg0);
    return arg0;
}
