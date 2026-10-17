/* compiler: 1.2/sp2p3  */
#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f1;
} M2C_S8;

s32 func_0204ccc4(void *arg0, void *arg1) {
    if (arg0 == NULL) {
        return -0x66;
    }
    *(M2C_S8 *) ((s8 *) arg1 + 0) = *(M2C_S8 *) ((s8 *) arg0 + 72);

    return 0;
}
