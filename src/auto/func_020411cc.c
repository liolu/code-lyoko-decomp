#include "m2c.h"

s32 func_0203eb60(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0203f3a0(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0203f4b0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0203f588(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0203f5b8(M2C_UNK, s32);                /* extern */
M2C_UNK func_0203f68c(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02040334(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020403a0(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020412bc(M2C_UNK);                         /* extern */
M2C_UNK func_02041308(M2C_UNK);                     /* extern */
extern M2C_UNK data_020ed0c4;
extern M2C_UNK data_020ed0f4;

s32 func_020411cc(M2C_UNK arg0) {
    func_02040334(arg0, 2, 5);
    func_02041308(arg0);
    if (func_020412bc(arg0) != 0) {
        func_020403a0(arg0, &data_020ed0c4);
    } else {
        func_0203f68c(arg0, -3);
    }
    func_0203f588(arg0, 2);
    if ((func_0203f4b0(arg0, 1) != 0) && (func_0203f3a0(arg0, 1) == 0)) {
        func_0203f5b8(arg0, 0xFFFFD8EF);
    } else if (func_0203eb60(arg0, -2) == 0) {
        func_020403a0(arg0, &data_020ed0f4);
    }
    return 0;
}
