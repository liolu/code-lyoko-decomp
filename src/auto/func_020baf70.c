#include "m2c.h"

M2C_UNK func_0208f8c8(M2C_UNK **);                  /* extern */
M2C_UNK func_020d6318();                            /* extern */
extern M2C_UNK data_020f0638;

M2C_UNK **func_020baf70(M2C_UNK **arg0) {
    *arg0 = &data_020f0638;
    func_020d6318();
    func_0208f8c8(arg0);
    return arg0;
}
