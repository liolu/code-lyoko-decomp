#include "m2c.h"

M2C_UNK func_0200bb7c(M2C_UNK, void *, M2C_UNK);    /* extern */
void *func_0208f890(M2C_UNK);                       /* extern */
extern void *data_02107824;

s32 *func_020ab598(s32 *arg0) {
    void *temp_r0;

    *arg0 = 0;
    if (data_02107824 == NULL) {
        temp_r0 = func_0208f890(0x10000);
        data_02107824 = temp_r0;
        func_0200bb7c(0, temp_r0, 0x10000);
        M2C_FIELD(data_02107824, s32 *, 0) = 0x40000001;
        M2C_FIELD(data_02107824, s32 *, 8) = 0x20005FFF;
    }
    return arg0;
}
