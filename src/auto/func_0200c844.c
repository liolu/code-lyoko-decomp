/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

M2C_UNK func_0200b040(void);
void func_0200b054(M2C_UNK);

extern s32 data_020f488c;
extern s32 data_020f4890;
extern s32 data_020f48a8;

s32 func_0200c844(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_0200b040();
    if (data_020f4890 == 0) {
        var_r4 = data_020f488c;
    } else {
        var_r4 = data_020f48a8;
    }
    func_0200b054(temp_r0);
    return var_r4;
}
