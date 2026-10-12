#include "m2c.h"

extern u16 data_020f47ec;

void func_0200a8dc(s32 arg0) {
    data_020f47ec |= 1 << arg0;
}
