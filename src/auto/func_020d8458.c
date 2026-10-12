#include "m2c.h"

M2C_UNK func_0204e6d8(void *);                      /* extern */
M2C_UNK func_0208f8c8(void *);                      /* extern */
M2C_UNK func_ov001_02125220(void *);                /* extern */
extern M2C_UNK data_020f34c4;
extern M2C_UNK data_020f34f8;

void *func_020d8458(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020f34c4;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &data_020f34f8;
    func_0204e6d8(arg0 + 0x80);
    func_0204e6d8(arg0 + 0x7C);
    func_ov001_02125220(arg0);
    func_0208f8c8(arg0);
    return arg0;
}
