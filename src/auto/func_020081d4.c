/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020058f4(M2C_UNK);
void func_0200b4b8(M2C_UNK);

extern s32 data_020ec084;
extern s32 data_020f4448;
extern s32 data_020f444c;

void func_020081d4(void) {
    if (data_020ec084 != -1) {
        func_0200b4b8(data_020ec084);
    }
    func_020058f4(data_020f444c);
    data_020f444c = 0;
    data_020f4448 = 0;
}
