/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02009c88(M2C_UNK *);                   /* extern */
M2C_UNK func_0200ccec();                            /* extern */
M2C_UNK func_0200ceb4();                            /* extern */
extern s32 data_020f486c;
extern M2C_UNK data_020f4870;

void func_0200c594(void) {
    if (data_020f486c != 0) {
        return;
    }
    data_020f486c = 1;
    func_02009c88(&data_020f4870);
    func_0200ccec();
    func_0200ceb4();
}
