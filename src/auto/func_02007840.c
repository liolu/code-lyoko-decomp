/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02006404();                                /* extern */
M2C_UNK func_0200b720(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_0200bbc4(M2C_UNK, s32, u32);           /* extern */
extern s32 data_020ec084;

void func_02007840(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_02006404();
    if ((data_020ec084 != -1) && (arg2 > 0x30U)) {
        func_0200b720(data_020ec084, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_0200bbc4(arg0, temp_ip + arg1, arg2);
}
