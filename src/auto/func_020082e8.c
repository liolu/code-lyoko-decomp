/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020059e8(M2C_UNK);
void func_0200b4b8(M2C_UNK);

extern s32 data_020ec084;
extern s32 data_020f4444;
extern s32 data_020f4454;
extern s32 data_020f4458;
extern s32 data_020f445c;

void func_020082e8(void) {
    if (data_020ec084 != -1) {
        func_0200b4b8(data_020ec084);
    }
    func_020059e8(data_020f4454);
    data_020f445c = 0;
    data_020f4458 = 0;
    data_020f4444 = 0;
    data_020f4454 = 0;
}
