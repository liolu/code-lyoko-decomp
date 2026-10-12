/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020099b0(M2C_UNK *, s32, M2C_UNK);     /* extern */
M2C_UNK func_02009cf4(s32, M2C_UNK);                /* extern */
M2C_UNK func_0200bd78(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_0200d5bc(M2C_UNK, s32, M2C_UNK);           /* extern */
s32 func_020144f8();                                /* extern */
extern M2C_UNK data_020f6e70;

s32 func_020143c8(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = func_020144f8();
    if (temp_r0 == 0) {
        return 8;
    }
    func_0200bd78(arg0, temp_r0, arg1);
    func_02009cf4(temp_r0, arg1);
    temp_r4 = func_0200d5bc(0xA, temp_r0, 0);
    func_020099b0(&data_020f6e70, temp_r0, 1);
    if (temp_r4 < 0) {
        return 8;
    }
    return 2;
}
