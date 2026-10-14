/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200b040(void);
void func_0200b054(M2C_UNK);

extern s32 *data_020f7b4c;

void func_0201e278(s32 arg0) {
    s32 temp_r0;

    temp_r0        = func_0200b040();
    *data_020f7b4c = arg0;
    func_0200b054(temp_r0);
}
