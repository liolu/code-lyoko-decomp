#include "m2c.h"

M2C_UNK func_0204e420(void *);                      /* extern */
extern M2C_UNK data_020ec868;
extern M2C_UNK data_020ee1c8;

void *func_02060bd8(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ee1c8;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x10);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_0204e420(arg0 + 0xC);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ec868;
    return arg0;
}
