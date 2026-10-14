/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02031ff4(M2C_UNK *, M2C_UNK);          /* extern */
extern s32 data_020fd384;
extern M2C_UNK data_020fd388;
extern M2C_UNK func_0203a16c;
extern M2C_UNK func_0203a1e4;

void func_0203a7bc(void *arg0) {
    if (data_020fd384 == 0) {
        func_02031ff4(&data_020fd388, 0);
        data_020fd384 = 1;
    }
    M2C_FIELD(arg0, M2C_UNK **, 8)    = &func_0203a1e4;
    M2C_FIELD(arg0, void **, 0xC)     = arg0;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &func_0203a16c;
    M2C_FIELD(arg0, void **, 0x18)    = arg0;
    M2C_FIELD(arg0, s32 *, 0x44)      = 0;
    M2C_FIELD(arg0, s32 *, 0x48)      = 0;
    M2C_FIELD(arg0, s32 *, 0x24)      = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
    M2C_FIELD(arg0, s32 *, 0x24)      = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
}
