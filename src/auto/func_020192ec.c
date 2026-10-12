/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02018e80();                            /* extern */
extern void *data_020f7990;
extern s32 data_020f7994;

void func_020192ec(s32 arg0) {
    if (M2C_FIELD(data_020f7990, u8 *, 6) == M2C_FIELD(((arg0 * 0x590) + data_020f7994), u8 *, 0x4C4)) {
        return;
    }
    func_02018e80(arg0);
}
