#include "m2c.h"

M2C_UNK func_020719f8(s32);                         /* extern */
M2C_UNK func_02071bd4();                            /* extern */
M2C_UNK func_020721e4(s32, M2C_UNK, M2C_UNK *);     /* extern */
extern M2C_UNK func_02071fd4;

void func_02071fa8(s32 arg0) {
    func_02071bd4();
    func_020721e4(arg0 + 8, 1, &func_02071fd4);
    func_020719f8(arg0);
}
