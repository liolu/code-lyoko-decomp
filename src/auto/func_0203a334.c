/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200c31c(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_0200c844();                                /* extern */
M2C_UNK func_0200c884(s32);                         /* extern */
M2C_UNK func_0200c914(M2C_UNK);                     /* extern */
M2C_UNK func_02011154(void *);                      /* extern */
M2C_UNK func_0201116c(void *);                      /* extern */
M2C_UNK func_0203a300(void *);                      /* extern */

void func_0203a334(void *arg0) {
    s32 temp_r5;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        func_0200c31c(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
        func_0201116c(arg0 + 8);
        func_02011154(arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
        temp_r5 = func_0200c844();
        func_0200c914(1);
        func_0200c884(temp_r5);
    }
    func_0203a300(arg0);
}
