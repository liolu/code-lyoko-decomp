/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02009850(M2C_UNK *, u16 *, M2C_UNK);   /* extern */
s32 func_02009904(M2C_UNK *, u16 **, M2C_UNK);      /* extern */
M2C_UNK func_02009cd8(u16 *, M2C_UNK);              /* extern */
extern M2C_UNK data_020f6e70;

u16 *func_020144f8(void) {
    u16 *sp0;

    if (func_02009904(&data_020f6e70, &sp0, 0) == 0) {
        return NULL;
    }
    func_02009cd8(sp0, 2);
    if (*sp0 & 0x8000) {
        return sp0;
    }
    func_02009850(&data_020f6e70, sp0, 1);
    return NULL;
}
