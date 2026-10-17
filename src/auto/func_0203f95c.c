#include "engine.h"
#include "m2c.h"

void func_0203ec40(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0203ee38(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0203f10c(void *, s32);
s32 func_0203f6fc(void *);

void func_0203f95c(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r5;

    var_r5 = arg1;
    if (arg2 < 0) {
        return;
    }
    if ((var_r5 <= 0) && (var_r5 > -10000)) {
        var_r5 = var_r5 + func_0203f6fc((void *) arg0) + 1;
    }
    func_0203ee38(arg0, var_r5, 1);
    func_0203ec40(arg0, var_r5, arg2);
    func_0203f10c((void *) arg0, arg2);
    func_0203ec40(arg0, var_r5, 1);
}
