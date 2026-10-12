#include "m2c.h"

M2C_UNK func_0203f0ac(s32, M2C_UNK *, M2C_UNK);     /* extern */
s32 func_0203f1e4(s32, M2C_UNK);                    /* extern */
s32 func_0203f6fc(s32);                             /* extern */
M2C_UNK func_020404dc(s32, M2C_UNK, M2C_UNK *);     /* extern */
s32 func_020425f4(s32, M2C_UNK, M2C_UNK *);         /* extern */
extern M2C_UNK data_020ecf78;
extern M2C_UNK data_020ecf8c;
extern M2C_UNK data_020ecf94;
extern M2C_UNK data_020ecf9c;

s32 func_020406f8(s32 arg0) {
    u8 sp0[100];
    s32 temp_r0;

    temp_r0 = func_0203f1e4(arg0, 1);
    if (temp_r0 == 0) {
        func_020404dc(arg0, 1, &data_020ecf78);
    }
    if (arg0 == temp_r0) {
        func_0203f0ac(arg0, &data_020ecf8c, 7);
    } else if ((func_020425f4(temp_r0, 0, sp0) == 0) && (func_0203f6fc(temp_r0) == 0)) {
        func_0203f0ac(arg0, &data_020ecf94, 4);
    } else {
        func_0203f0ac(arg0, &data_020ecf9c, 9);
    }
    return 1;
}
