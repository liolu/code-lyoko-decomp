#include "m2c.h"

M2C_UNK func_0208f8c8();                            /* extern */
extern M2C_UNK data_020ee1e8;
extern s32 data_020f86cc;

M2C_UNK **func_020612ac(M2C_UNK **arg0) {
    *arg0         = &data_020ee1e8;
    data_020f86cc = 0;
    func_0208f8c8(arg0);
    return arg0;
}
