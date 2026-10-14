#include "m2c.h"

M2C_UNK func_0205c024(void *);                      /* extern */
M2C_UNK func_0208f8c8(void *);                      /* extern */
extern M2C_UNK data_020eddb4;
extern M2C_UNK data_020eddf4;
extern M2C_UNK data_020ede34;
extern s32 data_020f86c4;

void *func_0205be24(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020eddb4;
    func_0208f8c8(M2C_FIELD(arg0, void **, 0xC));
    func_0208f8c8(M2C_FIELD(arg0, void **, 0x14));
    func_0205c024(arg0 + 0x2C);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020eddf4;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ede34;
    data_020f86c4                  = 0;
    func_0208f8c8(arg0);
    return arg0;
}
