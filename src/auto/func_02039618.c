#include "m2c.h"

extern s32 data_020fcaa4;

void func_02039618(s32 arg0) {
    data_020fcaa4 &= ~(1 << arg0);
}
