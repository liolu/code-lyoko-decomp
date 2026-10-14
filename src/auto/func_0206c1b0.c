#include "m2c.h"

M2C_UNK func_0208f8c8();                            /* extern */
extern M2C_UNK data_020ee6a8;
extern M2C_UNK data_020ee6e8;
extern s32 data_020f86bc;

M2C_UNK **func_0206c1b0(M2C_UNK **arg0) {
    *arg0         = &data_020ee6a8;
    *arg0         = &data_020ee6e8;
    data_020f86bc = 0;
    func_0208f8c8(arg0);
    return arg0;
}
