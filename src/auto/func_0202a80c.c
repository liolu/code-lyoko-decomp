#include "m2c.h"

M2C_UNK func_0202a854();                            /* extern */
M2C_UNK func_0208f8c8(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020ec7d4;

M2C_UNK **func_0202a80c(M2C_UNK **arg0) {
    *arg0 = &data_020ec7d4;
    func_0202a854();
    func_0208f8c8(arg0);
    return arg0;
}
