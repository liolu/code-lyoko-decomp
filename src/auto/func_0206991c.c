/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0206991c(void *arg0, void *arg1) {
    void *var_ip;
    void *var_r2;
    void *var_r3;

    if (arg1 == NULL) {
        return NULL;
    }
    var_r2 = M2C_FIELD(arg0, void **, 4);
    var_ip = NULL;
    var_r3 = NULL;
    if (var_r2 != NULL) {
    loop_3:
        if (var_r2 == arg1) {
            var_r3 = (void *) 1;
            if (var_ip != NULL) {
                M2C_FIELD(var_ip, void **, 8) = (void *) M2C_FIELD(arg1, void **, 8);
            } else {
                M2C_FIELD(arg0, void **, 4) = (void *) M2C_FIELD(arg1, void **, 8);
            }
            if (arg1 == M2C_FIELD(arg0, void **, 0x10)) {
                M2C_FIELD(arg0, void **, 0x10) = var_ip;
            }
            M2C_FIELD(arg1, void **, 8) = NULL;
            M2C_FIELD(arg1, s32 *, 0xC) = 0;
        } else {
            var_ip = var_r2;
            var_r2 = M2C_FIELD(var_r2, void **, 8);
            if (var_r2 != NULL) {
                goto loop_3;
            }
        }
    }
    return var_r3;
}
