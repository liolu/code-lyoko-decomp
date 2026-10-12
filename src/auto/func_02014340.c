/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02009cd8(u16 *, M2C_UNK);              /* extern */
s32 func_0201439c();                                /* extern */
extern void *data_020f6e6c;

s32 func_02014340(void) {
    s32 temp_r0;

    temp_r0 = func_0201439c();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02009cd8(M2C_FIELD(data_020f6e6c, u16 **, 4), 2);
    if ((u32) *M2C_FIELD(data_020f6e6c, u16 **, 4) <= 1U) {
        return 3;
    }
    return 0;
}
