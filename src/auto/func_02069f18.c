#include "m2c.h"

M2C_UNK func_0208f8c8(void *);                      /* extern */
extern M2C_UNK data_020ee534;
extern M2C_UNK data_020ee590;
extern M2C_UNK data_020ee5ac;
extern s32 data_020ff5e4;

void *func_02069f18(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ee534;
    func_0208f8c8(M2C_FIELD(arg0, void **, 4));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ee590;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ee5ac;
    data_020ff5e4                  = 0;
    func_0208f8c8(arg0);
    return arg0;
}
