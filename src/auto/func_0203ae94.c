/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0203ad78(s32);                             /* extern */
s32 *func_0203b1c4();                               /* extern */
s32 func_0203e7d4();                                /* extern */

s32 func_0203ae94(void) {
    s32 *temp_r0;

    temp_r0 = func_0203b1c4();
    if (temp_r0 == NULL) {
        return 0;
    }
    if (func_0203ad78(*temp_r0) == 0) {
        return 0;
    }
    return func_0203e7d4();
}
