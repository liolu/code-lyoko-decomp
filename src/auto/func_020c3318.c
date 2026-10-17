#include "m2c.h"

void func_020c3318(s32 arg0, s8 *arg1, s16 *arg2) {
    s16 *var_r2;
    s8 *var_r1;
    s8 var_r0;

    var_r1 = arg1;
    var_r2 = arg2;
    var_r0 = *var_r1;
    if (var_r0 != 0) {
        do {
            *var_r2 = (s16) var_r0;
            var_r2  = (s16 *) ((s8 *) var_r2 + 2);
            var_r1  = (s8 *) ((s8 *) var_r1 + 1);
            var_r0  = *var_r1;
        } while (var_r0 != 0);
    }
    *var_r2 = 0;
}
