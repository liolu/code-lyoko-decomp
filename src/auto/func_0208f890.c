#include "m2c.h"

M2C_UNK func_0201fbf4(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_0209e1b0();                                /* extern */
extern s32 data_021034c8;

s32 func_0208f890(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = func_0209e1b0();
    temp_r4 = temp_r0;
    data_021034c8 += 1;
    func_0201fbf4(temp_r0, 0xCD, arg0);
    return temp_r4;
}
