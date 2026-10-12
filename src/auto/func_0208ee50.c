#include "m2c.h"

s32 func_0208ee50(void *arg0) {
    return *M2C_FIELD(arg0, s32 **, 8) + (M2C_FIELD(arg0, s16 *, 4) * 8);
}
