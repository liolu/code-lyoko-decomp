/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0203ad78(M2C_UNK);                         /* extern */
extern M2C_UNK func_0203c8e0;
extern M2C_UNK func_0203c8e4;
extern M2C_UNK func_0203c904;
extern M2C_UNK func_0203c908;
extern M2C_UNK func_0203c938;
extern M2C_UNK func_0203c948;
extern M2C_UNK func_0203c984;
extern M2C_UNK func_0203c994;

void func_0203ca14(void *arg0, M2C_UNK arg1) {
    if (func_0203ad78(arg1) == 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x160) = &func_0203c994;
        M2C_FIELD(arg0, M2C_UNK **, 0x164) = &func_0203c984;
        M2C_FIELD(arg0, M2C_UNK **, 0x168) = &func_0203c948;
        M2C_FIELD(arg0, M2C_UNK **, 0x16C) = &func_0203c938;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x160) = &func_0203c908;
    M2C_FIELD(arg0, M2C_UNK **, 0x164) = &func_0203c904;
    M2C_FIELD(arg0, M2C_UNK **, 0x168) = &func_0203c8e4;
    M2C_FIELD(arg0, M2C_UNK **, 0x16C) = &func_0203c8e0;
}
