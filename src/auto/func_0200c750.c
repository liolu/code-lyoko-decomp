/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200c770();                                /* extern */
s32 func_0200c7b0();                                /* extern */

s32 func_0200c750(void) {
    s32 temp_r4;

    temp_r4 = func_0200c7b0();
    return (0x100 - temp_r4) - func_0200c770();
}
