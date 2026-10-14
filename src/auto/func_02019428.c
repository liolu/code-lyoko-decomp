/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02018f08(s32);                         /* extern */
M2C_UNK func_02019144(s32);                         /* extern */
M2C_UNK func_0201922c(s32);                         /* extern */
M2C_UNK func_020192ec(s32);                         /* extern */
M2C_UNK func_0201933c(s32);                         /* extern */
M2C_UNK func_020193b8();                            /* extern */
M2C_UNK func_020199b4(s32, s32);                    /* extern */
extern void *data_020f7990;
extern s32 data_020f7994;

void func_02019428(s32 arg0, s32 arg1, s16 arg2) {
    s32 temp_r1;

    func_020193b8();
    func_0201933c(arg1);
    func_020192ec(arg1);
    temp_r1 = (arg1 * 0x590) + (data_020f7994 + 0x10);
    if (M2C_FIELD(temp_r1, u8 *, 0x58E) == M2C_FIELD(data_020f7990, u8 *, 7)) {
        M2C_FIELD(temp_r1, u8 *, 0x58F) = (u8) (M2C_FIELD(temp_r1, u8 *, 0x58F) + 1);
        if ((u32) M2C_FIELD(temp_r1, u8 *, 0x58F) > 3U) {
            M2C_FIELD(temp_r1, s16 *, 0x58A) = 0;
            func_0201922c(temp_r1 + 0x4C4);
            return;
        }
        goto block_4;
    }
    M2C_FIELD(temp_r1, u8 *, 0x58F) = 0U;
block_4:
    M2C_FIELD(temp_r1, u8 *, 0x58E)  = (u8) M2C_FIELD(data_020f7990, u8 *, 7);
    M2C_FIELD(temp_r1, s16 *, 0x58A) = 0x1771;
    M2C_FIELD(temp_r1, s32 *, 0x4B8) = (s32) M2C_FIELD(data_020f7990, s32 *, 0);
    M2C_FIELD(temp_r1, s8 *, 0x4B5)  = (s8) ((u32) (M2C_FIELD(data_020f7990, u8 *, 4) << 0x18) >> 0x1A);
    M2C_FIELD(temp_r1, s16 *, 0x58C) = arg2;
    func_020199b4(temp_r1 + 0x4C0, M2C_FIELD(temp_r1, s32 *, 0x4B8));
    if (((u32) (M2C_FIELD(data_020f7990, u8 *, 4) << 0x1E) >> 0x1E) == 2) {
        func_02018f08(arg1);
        return;
    }
    func_02019144(arg1);
}
