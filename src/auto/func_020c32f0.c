#include "m2c.h"

void func_020c32f0(s32 arg0, u16 *arg1, u16 *arg2) {
    u16 *var_r1;
    u16 *var_r2;
    u16 var_r0;

    var_r1 = arg1;
    var_r2 = arg2;
    var_r0 = *var_r2;
    if (var_r0 != 0) {
        do {
            *var_r1 = var_r0;
            var_r1  = (u16 *) ((s8 *) var_r1 + 2);
            var_r2  = (u16 *) ((s8 *) var_r2 + 2);
            var_r0  = *var_r2;
        } while (var_r0 != 0);
    }
    *var_r1 = 0;
}
