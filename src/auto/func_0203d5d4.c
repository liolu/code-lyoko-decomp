/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02009b8c();                   /* extern */
M2C_UNK func_02009bfc();                   /* extern */
M2C_UNK func_0203a728();                      /* extern */
M2C_UNK func_0203d92c();                      /* extern */
extern s32 data_020fd510;
extern M2C_UNK data_020fdd88;

void func_0203d5d4(s32 arg0, s32 arg1, void *arg2) {
    if (arg0 != M2C_FIELD(arg2, s32 *, 0x12C)) {
        return;
    }
    func_02009bfc(&data_020fdd88);
    if (data_020fd510 != 0) {
        func_02009bfc(data_020fd510 + 0x4C8);
    }
    func_0203d92c(arg2);
    M2C_FIELD(arg2, s32 *, 0x12C) = 0;
    M2C_FIELD(arg2, s32 *, 0x130) = 0;
    M2C_FIELD(arg2, s8 *, 0x124)  = 0;
    if ((s32) M2C_FIELD(arg2, s32 *, 0x120) > 0) {
        func_0203a728(arg2);
        M2C_FIELD(arg2, s32 *, 0x120) = 0;
    }
    func_02009b8c(&data_020fdd88);
    if (data_020fd510 == 0) {
        return;
    }
    func_02009b8c(data_020fd510 + 0x4C8);
}
