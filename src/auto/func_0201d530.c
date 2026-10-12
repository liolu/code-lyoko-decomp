/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201d438();                            /* extern */
extern void *data_020f7b48;

void func_0201d530(s32 arg0, s32 arg1) {
    M2C_FIELD(data_020f7b48, s32 *, 0x5DC) = arg0;
    M2C_FIELD(data_020f7b48, s32 *, 0x5E4) = arg1;
    M2C_FIELD(data_020f7b48, s16 *, 0x584) = 0;
    M2C_FIELD(data_020f7b48, void **, 0x580) = (void *) (data_020f7b48 + 0x4C0);
    M2C_FIELD(data_020f7b48, s32 *, 0x5EF8) = 1;
    M2C_FIELD(data_020f7b48, s32 *, 0x5F00) = 0;
    M2C_FIELD(data_020f7b48, s16 *, 0x5EE) = 0;
    func_0201d438();
}
