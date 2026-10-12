/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020066c4();                                /* extern */
M2C_UNK func_0200b6a8(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_0200bb94(M2C_UNK, s32, u32);           /* extern */
extern s32 data_020ec084;

void func_02007b80(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_020066c4();
    if ((data_020ec084 != -1) && (arg2 > 0x1CU)) {
        func_0200b6a8(data_020ec084, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_0200bb94(arg0, temp_ip + arg1, arg2);
}
