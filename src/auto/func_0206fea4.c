#include "m2c.h"

M2C_UNK func_02070938();                            /* extern */

void func_0206fea4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return;
    }
    func_02070938(arg0);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, void **, 8) = (void *) (arg0 + 4);
}
