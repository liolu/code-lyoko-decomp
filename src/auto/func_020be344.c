#include "m2c.h"

M2C_UNK func_0208f8c8(M2C_UNK **);                  /* extern */
M2C_UNK func_020d6f68();                            /* extern */
extern M2C_UNK data_020f14f4;

M2C_UNK **func_020be344(M2C_UNK **arg0) {
    *arg0 = &data_020f14f4;
    func_020d6f68();
    func_0208f8c8(arg0);
    return arg0;
}
