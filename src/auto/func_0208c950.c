#include "m2c.h"

M2C_UNK func_0208c984(s32);                         /* extern */
extern M2C_UNK data_020ef964;

void *func_0208c950(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ef964;
    func_0208c984(arg0 + 4);
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, void **, 0x14) = (void *) (arg0 + 8);
    return arg0;
}
