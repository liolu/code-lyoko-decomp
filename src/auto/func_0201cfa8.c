/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200bd78(void *, void *, M2C_UNK);     /* extern */
void *func_02018cf4();                              /* extern */
M2C_UNK func_0201d5a4(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0201e190(void *);                      /* extern */
M2C_UNK func_0201e278(M2C_UNK *);                   /* extern */
M2C_UNK func_0201e2a0(void *);                      /* extern */
extern void *data_020f7b48;
extern M2C_UNK func_0201cca0;

s32 func_0201cfa8(void) {
    void *temp_r0;

    temp_r0 = func_02018cf4();
    if (temp_r0 == NULL) {
        return 0;
    }
    M2C_FIELD(data_020f7b48, s32 *, 0x5F08) = (s32) M2C_FIELD(temp_r0, s32 *, 0x4B8);
    M2C_FIELD(data_020f7b48, s16 *, 0x5F0C) = (s16) M2C_FIELD(temp_r0, u8 *, 0x4B5);
    func_0201e2a0(data_020f7b48 + 0x5A0);
    func_0201e278(&func_0201cca0);
    func_0201d5a4(1, 0);
    func_0200bd78(temp_r0 + 0x4C0, data_020f7b48 + 0x4C0, 0xC0);
    func_0201e190(data_020f7b48 + 0x4C0);
    return 1;
}
