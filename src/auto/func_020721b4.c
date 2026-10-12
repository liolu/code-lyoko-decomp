#include "m2c.h"

M2C_UNK func_0208f8c8();                            /* extern */
extern M2C_UNK data_020eeaf0;
extern s32 data_020ff658;

M2C_UNK **func_020721b4(M2C_UNK **arg0) {
    *arg0 = &data_020eeaf0;
    data_020ff658 = 0;
    func_0208f8c8(arg0);
    return arg0;
}
