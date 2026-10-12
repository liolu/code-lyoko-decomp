/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200bf00();                            /* extern */
M2C_UNK func_02012670(u16);                         /* extern */
extern M2C_UNK data_020f4860;

void func_0200bed8(void) {
    func_0200bf00();
    func_02012670(M2C_FIELD(&data_020f4860, u16 *, 4));
}
