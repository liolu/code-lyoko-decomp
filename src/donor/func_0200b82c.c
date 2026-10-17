/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* MIi_DMAFastCallback from projets/rayman-rr/src/nitro/mi/mi_dma_gxcommand.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef s32 BOOL;
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
extern void func_0200b82c(void *arg);
static inline void UnkCallCallback(UnkDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}
void func_0200b82c(void *arg) {
    data_020f4840.isBusy = 0;
    UnkCallCallback(data_020f4840.callback, data_020f4840.arg);
}
