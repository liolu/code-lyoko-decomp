/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020057b4(M2C_UNK);
void func_0200b4b8(M2C_UNK);

extern s32 data_020ec084;
extern s32 data_020f4440;
extern s32 data_020f4450;

void func_02007fd0(void) {
    if (data_020ec084 != -1) {
        func_0200b4b8(data_020ec084);
    }
    func_020057b4(data_020f4440);
    data_020f4440 = 0;
    data_020f4450 = 0;
}
