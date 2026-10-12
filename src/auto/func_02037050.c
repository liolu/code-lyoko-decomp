/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02038360(M2C_UNK, void *);                 /* extern */
extern M2C_UNK func_0203852c;

void func_02037050(void *arg0, M2C_UNK arg1) {
    s16 var_r1;

    M2C_FIELD(arg0, u16 *, 8) = (u16) (func_02038360(arg1, arg0) - 1);
    if (M2C_FIELD(arg0, u16 *, 8) != 0) {
        var_r1 = 2;
    } else {
        var_r1 = 3;
    }
    M2C_FIELD(arg0, s16 *, 0xA) = var_r1;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &func_0203852c;
}
