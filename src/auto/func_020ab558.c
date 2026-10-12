#include "m2c.h"

M2C_UNK func_020ab3cc(s32, s32);                    /* extern */
extern s32 data_02107824;

s32 func_020ab558(s32 arg0, s32 *arg1) {
    func_020ab3cc(arg0, data_02107824 + *arg1 + 4);
    return arg0;
}
