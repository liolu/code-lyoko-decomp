/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020391dc();                            /* extern */
extern M2C_UNK *data_020ecc58;
extern M2C_UNK *data_020ecc5c;
extern M2C_UNK data_020fa68c;
extern M2C_UNK func_02039230;
extern M2C_UNK func_02039288;

void func_0203936c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(&data_020fa68c, s32 *, 8) = arg0;
    M2C_FIELD(&data_020fa68c, s32 *, 0xC) = arg1;
    M2C_FIELD(&data_020fa68c, s32 *, 0x10) = arg2;
    func_020391dc();
    if (arg3 == 0) {
        return;
    }
    data_020ecc58 = &func_02039288;
    data_020ecc5c = &func_02039230;
}
