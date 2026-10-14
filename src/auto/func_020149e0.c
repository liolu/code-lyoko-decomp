/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02009cd8(void *, M2C_UNK);             /* extern */
s32 func_0201439c();                                /* extern */
void *func_020143b8();                              /* extern */

u16 func_020149e0(void) {
    u16 temp_r0;
    void *temp_r2;
    void *temp_r4;

    temp_r4 = func_020143b8();
    if (func_0201439c() != 0) {
        return 0U;
    }
    func_02009cd8(M2C_FIELD(temp_r4, void **, 4), 2);
    temp_r2 = M2C_FIELD(temp_r4, void **, 4);
    temp_r0 = M2C_FIELD(temp_r2, u16 *, 0);
    switch (temp_r0) {                              /* irregular */
        case 9:
            func_02009cd8(temp_r2 + 0x182, 2);
            if (M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), u16 *, 0x182) == 0) {
                return 0U;
            }
        case 10:
        case 11:
            func_02009cd8(M2C_FIELD(temp_r4, void **, 4) + 0xBC, 2);
            return M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), u16 *, 0xBC);
        default:
            return 0U;
    }
}
