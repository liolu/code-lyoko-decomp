/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200c484(u8, s32);                     /* extern */
M2C_UNK func_0200c540(u8);                          /* extern */
M2C_UNK func_020397e4(void *);                      /* extern */

void func_020398f0(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_0200c484(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_0200c540(M2C_FIELD(arg0, u8 *, 0x3C));
    func_020397e4(arg0);
}
