/* compiler: 2.0/sp1p5 -proc arm7tdmi */
#include "m2c.h"

s32 func_0208ede4(void *arg0) {
    return (M2C_FIELD(arg0, s16 *, 4) * 0x94) + *M2C_FIELD(arg0, s32 **, 8);
}
