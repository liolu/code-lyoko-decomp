#include "m2c.h"

M2C_UNK func_020d6318();                            /* extern */
extern M2C_UNK data_020f3168;

M2C_UNK **func_020d2908(M2C_UNK **arg0) {
    *arg0 = &data_020f3168;
    func_020d6318();
    return arg0;
}
