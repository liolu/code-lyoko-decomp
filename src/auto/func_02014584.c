/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200d698(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02013e98();                            /* extern */
s32 func_02014298(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0201439c();                                /* extern */
extern s16 data_020f6e68;
extern s32 data_020f6e6c;

s32 func_02014584(void) {
    s32 temp_r0;

    if (func_0201439c() != 0) {
        return 3;
    }
    temp_r0 = func_02014298(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02013e98();
    func_0200d698(0xA, 0);
    data_020f6e6c = 0;
    data_020f6e68 = 0;
    return 0;
}
