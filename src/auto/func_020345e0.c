/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200bb7c(M2C_UNK, void *, M2C_UNK);    /* extern */
extern M2C_UNK func_02034d88;
extern M2C_UNK func_02034e40;
extern M2C_UNK func_02035050;
extern M2C_UNK func_020350f0;

void func_020345e0(void *arg0) {
    func_0200bb7c(0, arg0, 0x48);
    M2C_FIELD(arg0, s32 *, 0x10) = 1;
    M2C_FIELD(arg0, s32 *, 0x14) = 3;
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_020350f0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &func_02035050;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &func_02034e40;
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &func_02034d88;
}
