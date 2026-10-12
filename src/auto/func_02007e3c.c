/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_0200b6a8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0200bb94(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_020ec084;

void func_02007e3c(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_020ec084 != -1) && ((u32) arg2 > 0x1CU)) {
        func_0200b6a8(data_020ec084, arg0, arg1 + 0x05000600, arg2);
        return;
    }
    func_0200bb94(arg0, arg1 + 0x05000600, arg2);
}
