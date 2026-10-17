/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* GXS_LoadOBJExtPltt from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx_load2d.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
extern u32 data_020ec084;
extern void func_0200bbc4(const void *src, void *dest, u32 size);
extern void func_0200b528(u32 dmaNo, const void *src, void *dest, u32 size, void (*callback)(void *), void *arg);
static inline void UnkGxCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1) {
        func_0200b528(dmaNo, src, dest, size, 0, 0);
    } else {
        func_0200bbc4(src, dest, size);
    }
}
void func_02007198(const void *src, u32 destSlotAddr, u32 size) {
    UnkGxCopy32Async(data_020ec084, src, (void *) (0x68a0000 + destSlotAddr), size);
}
