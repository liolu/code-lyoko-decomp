#include "m2c.h"

extern M2C_UNK data_020e9464;
extern M2C_UNK data_020ecd74;

M2C_UNK *func_0203f548(s32 arg0, s32 arg1) {
    if (arg1 == -1) {
        return &data_020ecd74;
    }
    return *((M2C_UNK *)((s8 *)&data_020e9464 + (arg1 * 4)));
}
