/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_020055e0(M2C_UNK);
void func_0200b4b8(M2C_UNK);

extern s32 data_020ec084;
extern s32 data_020f4424;

void func_02007230(void) {
    if (data_020ec084 != -1) {
        func_0200b4b8(data_020ec084);
    }
    func_020055e0(data_020f4424);
    data_020f4424 = 0;
}
