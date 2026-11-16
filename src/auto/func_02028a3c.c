/* compiler: 1.2/sp3  */
#include "m2c.h"

void *func_02028c7c(void *, M2C_UNK *);             /* extern */

void func_02028a3c(u8 *arg0) {
    M2C_UNK sp0;
    u8 temp_r4;
    void *temp_r0;

    temp_r4 = *arg0;
    temp_r0 = func_02028c7c(arg0 + 2, &sp0);
    if (!(temp_r4 & 0x40)) {
        return;
    }
    func_02028c7c(temp_r0, &sp0);
}
