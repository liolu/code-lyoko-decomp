/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020091f8(s32);                         /* extern */
M2C_UNK func_02009734(void *, M2C_UNK (*)(s32));    /* extern */
M2C_UNK func_020097ec(void *);                      /* extern */
extern s32 data_020f44c4;

void func_0200923c(void *arg0, s32 arg1) {
    if (data_020f44c4 != 0) {
        func_02009734(arg0, func_020091f8);
        M2C_FIELD(arg0, s32 *, 4) = arg1;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80);
        M2C_FIELD(arg0, s32 *, 0x64) = 1;
        func_020097ec(arg0);
        return;
    }
    func_020091f8(arg1);
}
