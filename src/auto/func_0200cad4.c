/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200b040(void);
void func_0200b054(M2C_UNK);

extern s32 data_020f4890;
extern s32 data_020f4894;

void func_0200cad4(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_0200b040();
    if (data_020f4894 == 0) {
        data_020f4894 = arg0;
        data_020f4890 = arg0;
    } else {
        *(M2C_UNK *) data_020f4894 = arg0;
        data_020f4894              = arg0;
    }
    *(M2C_UNK *) arg0 = 0;
    func_0200b054(temp_r0);
}
