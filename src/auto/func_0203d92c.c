/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02009b8c();                   /* extern */
M2C_UNK func_02009bfc();                   /* extern */
M2C_UNK func_0203a4cc();                      /* extern */
M2C_UNK func_0203d8c0();                      /* extern */
extern s32 data_020fd510;
extern M2C_UNK data_020fdd88;

void func_0203d92c(void *arg0) {
    func_02009bfc(&data_020fdd88);
    if (data_020fd510 != 0) {
        func_02009bfc(data_020fd510 + 0x4C8);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1E) >> 0x1F) != 0) {
        func_0203a4cc(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x16C)(arg0);
    }
    func_0203d8c0(arg0);
    func_02009b8c(&data_020fdd88);
    if (data_020fd510 == 0) {
        return;
    }
    func_02009b8c(data_020fd510 + 0x4C8);
}
