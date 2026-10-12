/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_02005bec(M2C_UNK);
void func_0200b4b8(M2C_UNK);

extern s32 data_020ec084;
extern s32 data_020f4428;
extern s32 data_020f442c;

void func_02007314(void) {
    if (data_020ec084 != -1) {
        func_0200b4b8(data_020ec084);
    }
    func_02005bec(data_020f442c);
    data_020f442c = 0;
    data_020f4428 = 0;
}
