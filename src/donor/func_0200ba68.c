/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02067540 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/mi_dma_gxcommand.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
typedef s32 BOOL;
extern void func_0200b4b8(u32 dmaNo);
typedef void (*UnkDmaCallback)(void *arg);
typedef void (*UnkIrqHandler)(void);
typedef struct {
    volatile BOOL isBusy;
    u32 dmaNo;
    u32 src;
    u32 size;
    UnkDmaCallback callback;
    void *arg;
    u32 fifoCond;
    UnkIrqHandler fifoIntrHandler;
} UnkGxCmdDmaState;
extern UnkGxCmdDmaState data_020f4840;
extern void func_0200896c(u32 mask, UnkIrqHandler handler);
extern UnkIrqHandler func_020088e0(u32 mask);
extern void func_020087dc(u32 mask);
extern void func_0200b310(u32 dmaNo, u32 src, u32 size, u32 dir);
extern void func_0200b9a0(void);
static inline void UnkCallCallback(UnkDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}
void func_0200ba68(u32 dmaNo, const void *src, u32 size, UnkDmaCallback callback, void *arg) {
    u32 e;

    if (size == 0) {
        UnkCallCallback(callback, arg);
        return;
    }
    while (data_020f4840.isBusy) {
    }
    while (!((((*(vu32 *) 0x04000600) & 0x7000000) >> 24) & 2)) {
    }
    data_020f4840.isBusy   = 1;
    data_020f4840.dmaNo    = dmaNo;
    data_020f4840.src      = (u32) src;
    data_020f4840.size     = size;
    data_020f4840.callback = callback;
    data_020f4840.arg      = arg;
    func_0200b310(dmaNo, (u32) src, size, 0);
    func_0200b4b8(dmaNo);

    e                             = func_0200b040();
    data_020f4840.fifoCond        = ((*(vu32 *) 0x04000600) & 0xc0000000) >> 30;
    data_020f4840.fifoIntrHandler = func_020088e0(0x200000);
    (*(vu32 *) 0x04000600)        = ((*(vu32 *) 0x04000600) & ~0xc0000000) | 0x40000000;
    func_0200896c(0x200000, func_0200b9a0);
    func_020087dc(0x200000);
    func_0200b9a0();
    func_0200b054(e);
}
void func_0200b9a0(void);
