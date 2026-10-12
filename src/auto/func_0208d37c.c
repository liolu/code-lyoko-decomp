#include "m2c.h"

M2C_UNK func_0208f8c8();                            /* extern */
extern M2C_UNK data_020efa40;
extern M2C_UNK data_020efa50;
extern s32 data_021033d8;

M2C_UNK **func_0208d37c(M2C_UNK **arg0) {
    *arg0 = &data_020efa40;
    *arg0 = &data_020efa50;
    data_021033d8 = 0;
    func_0208f8c8(arg0);
    return arg0;
}
