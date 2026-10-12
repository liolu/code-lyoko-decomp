/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02014df8(M2C_UNK *);                       /* extern */
s32 func_020167c4(M2C_UNK *, u16, u16, u16, s32);   /* extern */
M2C_UNK func_0201a420(M2C_UNK, s32);                /* extern */
extern u16 data_020ec0c0;
extern u16 data_020ec0c4;
extern u16 data_020ec0c8;
extern u16 data_020ec0cc;
extern M2C_UNK func_0201b960;

void func_0201c1d8(void) {
    func_0201a420(0x80, func_02014df8(&func_0201b960));
    func_0201a420(0x1D, func_020167c4(&func_0201b960, data_020ec0cc, data_020ec0c4, data_020ec0c0, (s32) data_020ec0c8));
}
