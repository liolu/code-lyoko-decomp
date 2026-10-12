/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200b040();                                /* extern */
M2C_UNK func_0200b054(s32);                         /* extern */
s32 func_0201439c();                                /* extern */
void *func_020143b8();                              /* extern */

s32 func_02014df8(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_0200b040();
    temp_r0 = func_0201439c();
    if (temp_r0 != 0) {
        func_0200b054(temp_r5);
        return temp_r0;
    }
    M2C_FIELD(func_020143b8(), s32 *, 0xC8) = arg0;
    func_0200b054(temp_r5);
    return 0;
}
