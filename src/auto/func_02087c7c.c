#include "m2c.h"

M2C_UNK func_0203f95c(s32, s32, s32);               /* extern */
M2C_UNK func_0208f8c8(void *);                      /* extern */
extern M2C_UNK data_020ef6cc;

void *func_02087c7c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ef6cc;
    func_0203f95c(M2C_FIELD(arg0, s32 *, 8), 0xFFFFD8F0, M2C_FIELD(arg0, s32 *, 0xC));
    func_0208f8c8(arg0);
    return arg0;
}
