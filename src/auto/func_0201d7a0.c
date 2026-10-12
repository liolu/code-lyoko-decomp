/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200bce4(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_0200bd78(M2C_UNK, void *, M2C_UNK);    /* extern */
M2C_UNK func_02019ad0();                            /* extern */
M2C_UNK func_0201a3f4(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0201a410(void *);                      /* extern */
extern u16 data_020f7b44;
extern void *data_020f7b48;
extern M2C_UNK func_0201d230;
extern M2C_UNK func_0201d24c;

void func_0201d7a0(void *arg0, M2C_UNK arg1) {
    if (data_020f7b44 != 0) {
        return;
    }
    data_020f7b44 = 1;
    func_0200bce4(arg0, 0, 0x5F20);
    data_020f7b48 = arg0;
    M2C_FIELD(arg0, s16 *, 0x5F0E) = 0;
    func_0200bd78(arg1, data_020f7b48 + 0x5C4, 0x16);
    func_0201a410(data_020f7b48 + 0x5E8);
    func_02019ad0();
    func_0201a3f4(&func_0201d24c, &func_0201d230);
}
