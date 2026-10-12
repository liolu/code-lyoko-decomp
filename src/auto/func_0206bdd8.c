#include "m2c.h"

M2C_UNK func_0206be20(M2C_UNK **, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK **func_02099488(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020f0084;
extern M2C_UNK data_02103250;

M2C_UNK **func_0206bdd8(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK **temp_r0;

    temp_r0 = func_02099488(&data_02103250, 0x90, 0x90);
    if (temp_r0 != NULL) {
        func_0206be20(temp_r0, arg1, arg2);
        *temp_r0 = &data_020f0084;
    }
    return temp_r0;
}
