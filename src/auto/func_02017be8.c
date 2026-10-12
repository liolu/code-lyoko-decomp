/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0201698c();                                /* extern */
M2C_UNK func_02017bac(s32, s32, M2C_UNK);           /* extern */
extern s32 data_020f7b0c;

void func_02017be8(s32 arg0, s32 arg1, M2C_UNK arg2) {
    if (func_0201698c() != 0) {
        M2C_FIELD((data_020f7b0c + ((arg0 - 1) * 4)), s32 *, 0x14E8) = arg1;
    }
    func_02017bac(arg0, arg1, arg2);
}
