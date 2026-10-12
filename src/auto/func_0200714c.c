/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_02005554(M2C_UNK);
void func_0200b4b8(M2C_UNK);

extern s32 data_020ec084;
extern s32 data_020f443c;

void func_0200714c(void) {
    if (data_020ec084 != -1) {
        func_0200b4b8(data_020ec084);
    }
    func_02005554(data_020f443c);
    data_020f443c = 0;
}
