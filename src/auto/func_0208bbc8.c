#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f1;
} M2C_S8;

void func_0208bbc8(void *arg0, s32 *arg1, void *arg2) {
    M2C_FIELD(arg0, s32 *, 0)     = (s32) *arg1;
    *(M2C_S8 *) ((s8 *) arg0 + 4) = *(M2C_S8 *) ((s8 *) arg2 + 0);
}
