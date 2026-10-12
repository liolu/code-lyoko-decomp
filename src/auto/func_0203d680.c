/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200b040();                                /* extern */
M2C_UNK func_0200b054(s32);                         /* extern */
M2C_UNK func_02031f60(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_020fd518;

void func_0203d680(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_0200b040();
    func_02031f60(&data_020fd518, arg0);
    func_0200b054(temp_r4);
}
