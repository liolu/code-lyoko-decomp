/* compiler: 1.2/sp3  */
#include "m2c.h"

M2C_UNK func_02041750(s32, M2C_UNK *, s32);         /* extern */
M2C_UNK func_020475c8(void *, s32 *, M2C_UNK);      /* extern */
extern M2C_UNK data_020ed864;

s32 func_02047508(void *arg0) {
    s32 sp0;

    func_020475c8(arg0, &sp0, 4);
    if (sp0 < 0) {
        func_02041750(M2C_FIELD(arg0, s32 *, 0), &data_020ed864, M2C_FIELD(arg0, s32 *, 0x10));
    }
    return sp0;
}
