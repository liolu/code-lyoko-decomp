#include "m2c.h"

M2C_UNK func_020d6318();                            /* extern */
extern M2C_UNK data_020f30c8;

M2C_UNK **func_020d26c0(M2C_UNK **arg0) {
    *arg0 = &data_020f30c8;
    func_020d6318();
    return arg0;
}
