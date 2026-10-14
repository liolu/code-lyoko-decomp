/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203d758();           /* extern */
M2C_UNK func_0203d838();                            /* extern */
M2C_UNK func_0203dcd4();                      /* extern */
extern s32 data_020fd510;
extern M2C_UNK data_020fdda0;

void func_0203d8c0(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_0203d838(arg0);
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x164)(arg0);
    func_0203d758(&data_020fdda0, arg0);
    if (data_020fd510 != 0) {
        func_0203d758(data_020fd510 + 0x4E0, arg0);
    }
    func_0203dcd4(arg0);
}
