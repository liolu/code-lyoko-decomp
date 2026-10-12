#include "m2c.h"

M2C_UNK func_020476a4(void *);                      /* extern */
s32 func_02049840(s32);                             /* extern */

void func_02047618(void *arg0) {
    if (func_02049840(M2C_FIELD(arg0, s32 *, 4)) == 0) {
        return;
    }
    func_020476a4(arg0);
}
