/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_02005ca4(M2C_UNK);
void func_0200b4b8(M2C_UNK);

extern s32 data_020ec084;
extern s32 data_020f4430;
extern s32 data_020f4434;
extern s32 data_020f4438;

void func_02007450(void) {
    if (data_020ec084 != -1) {
        func_0200b4b8(data_020ec084);
    }
    func_02005ca4(data_020f4438);
    data_020f4438 = 0;
    data_020f4434 = 0;
    data_020f4430 = 0;
}
