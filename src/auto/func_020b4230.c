#include "m2c.h"

void func_020b4230(void *arg0) {
    M2C_FIELD(arg0, volatile s32 *, 0x104) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x104) & 0xF003FFFF);
    M2C_FIELD(arg0, volatile s32 *, 0x48) = -1;
    M2C_FIELD(arg0, volatile s32 *, 0x50) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x58) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x100) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x100) & 0xC00FFFFF);
    M2C_FIELD(arg0, volatile s32 *, 0x108) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x108) & ~2);
    M2C_FIELD(arg0, volatile s32 *, 0x108) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x108) & ~4);
    M2C_FIELD(arg0, volatile s32 *, 0x108) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x108) & ~0x10);
}
