#include "m2c.h"

M2C_UNK func_0206bf4c(M2C_UNK **, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK **func_02099488(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020ee68c;
extern M2C_UNK data_02103224;

M2C_UNK **func_0206bf04(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK **temp_r0;

    temp_r0 = func_02099488(&data_02103224, 0x64, 0x64);
    if (temp_r0 != NULL) {
        func_0206bf4c(temp_r0, arg1, arg2);
        *temp_r0 = &data_020ee68c;
    }
    return temp_r0;
}
