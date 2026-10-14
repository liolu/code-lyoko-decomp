/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02031df8();            /* extern */
M2C_UNK func_02031e7c();   /* extern */
extern M2C_UNK data_020fcab8;

void func_0203992c(void *arg0) {
    void *var_r1;

    var_r1 = func_02031df8(&data_020fcab8, 0);
    if (var_r1 != NULL) {
    loop_2:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_02031df8(&data_020fcab8);
            if (var_r1 != NULL) {
                goto loop_2;
            }
        }
    }
    func_02031e7c(&data_020fcab8, var_r1, arg0);
}
