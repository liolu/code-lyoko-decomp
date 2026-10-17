/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* PXI_SetFifoRecvCallback from projets/rayman-rr/src/nitro/pxi/pxi_fifo_2.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
extern u32 func_0200b040(void);
extern u32 func_0200b054(u32 state);
typedef void (*PxiCallback)(u32 tag, u32 data, BOOL err);
extern void func_0200d698(u32 tag, PxiCallback callback);
typedef struct UnkPxiSystemWork {
    u8 unk_000[0x388];
    u32 unk_388[2];
} UnkPxiSystemWork;
extern PxiCallback data_020f63c8[32];
static inline UnkPxiSystemWork *GetPxiSystemWork(void) {
    return (UnkPxiSystemWork *) 0x027ffc00;
}
void func_0200d698(u32 tag, PxiCallback callback) {
    u32 enabled = func_0200b040();

    data_020f63c8[tag] = callback;
    if (callback) {
        GetPxiSystemWork()->unk_388[0] |= (1 << tag);
    } else {
        GetPxiSystemWork()->unk_388[0] &= ~(1 << tag);
    }
    func_0200b054(enabled);
}
