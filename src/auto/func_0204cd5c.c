#include "m2c.h"

M2C_UNK func_0201fc54(s32, M2C_UNK *, M2C_UNK);     /* extern */
s32 func_0208f7d8(M2C_UNK);                         /* extern */
extern M2C_UNK data_020fe388;

s32 func_0204cd5c(void) {
    s32 temp_r0;

    temp_r0 = func_0208f7d8(0x84);
    func_0201fc54(temp_r0, &data_020fe388, 0x84);
    return temp_r0;
}
