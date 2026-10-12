/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_0200b720(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0200bbc4(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_020ec084;

void func_02007de0(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_020ec084 != -1) && ((u32) arg2 > 0x30U)) {
        func_0200b720(data_020ec084, arg0, arg1 + 0x07000000, arg2);
        return;
    }
    func_0200bbc4(arg0, arg1 + 0x07000000, arg2);
}
