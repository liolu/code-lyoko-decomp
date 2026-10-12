#include "m2c.h"

M2C_UNK func_0203ed00(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0203ee80(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0203f0ac(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
s32 func_0203f568(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_020ed12c;

s32 func_020412bc(M2C_UNK arg0) {
    func_0203ed00(arg0, -1);
    func_0203f0ac(arg0, &data_020ed12c, 6);
    func_0203ee80(arg0, -2);
    if (func_0203f568(arg0, -1) != 0) {
        return 1;
    }
    return 0;
}
