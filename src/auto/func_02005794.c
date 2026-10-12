#include "m2c.h"

M2C_UNK func_020061dc();                            /* extern */
extern u16 data_020f4408;

void func_02005794(s32 arg0) {
    data_020f4408 |= arg0;
    func_020061dc(arg0);
}
