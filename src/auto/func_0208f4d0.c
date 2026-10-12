#include "m2c.h"

M2C_UNK func_0200efb8(void *);                      /* extern */

void func_0208f4d0(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 4) == 0) {
        return;
    }
    func_0200efb8(arg0 + 8);
    M2C_FIELD(arg0, u8 *, 4) = 0U;
}
