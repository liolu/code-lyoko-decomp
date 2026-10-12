#include "m2c.h"

M2C_UNK func_0200bbf4(M2C_UNK, s16 *, s32);         /* extern */
M2C_UNK func_02032a30(s32, void *);                 /* extern */
M2C_UNK func_02032a64(s32, void *);                 /* extern */
M2C_UNK func_0208f870(s16 *);                       /* extern */
s16 *func_0208f890(s32);                            /* extern */

s32 func_02088d28(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, volatile s32 *, 0x10) != 0) {
        return 0;
    }
    M2C_FIELD(arg0, volatile s32 *, 0x10) = arg1;
    func_02032a64(M2C_FIELD(arg0, volatile s32 *, 0x10), arg0 + 0x14);
    M2C_FIELD(arg0, volatile s32 *, 0x1C) = 0x400;
    func_0208f870(M2C_FIELD(arg0, s16 **, 0x20));
    func_0208f870(M2C_FIELD(arg0, s16 **, 0x24));
    M2C_FIELD(arg0, s16 **, 0x20) = func_0208f890(M2C_FIELD(arg0, volatile s32 *, 0x1C) * 2);
    M2C_FIELD(arg0, s16 **, 0x24) = func_0208f890(M2C_FIELD(arg0, volatile s32 *, 0x1C) * 2);
    func_0200bbf4(-1, M2C_FIELD(arg0, s16 **, 0x20), M2C_FIELD(arg0, volatile s32 *, 0x1C) * 2);
    func_0200bbf4(-1, M2C_FIELD(arg0, s16 **, 0x24), M2C_FIELD(arg0, volatile s32 *, 0x1C) * 2);
    *M2C_FIELD(arg0, s16 **, 0x20) = 0;
    *M2C_FIELD(arg0, s16 **, 0x24) = 0;
    if (M2C_FIELD(arg0, volatile s32 *, 0x14) == 0) {
        return 0;
    }
    M2C_FIELD(arg0, volatile s8 *, 0xE) = 1;
    func_02032a30(M2C_FIELD(arg0, volatile s32 *, 0x10), arg0 + 0x18);
    return 1;
}
