/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_G2dGetNewCellTransferStateHandle from https://github.com/ntrtwl/NitroSystem libraries/g2d/src/g2d_CellTransferManager.c
 * (license: none), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef int BOOL;
typedef enum NNS_G2D_VRAM_TYPE {
    NNS_G2D_VRAM_TYPE_3DMAIN = 0,
    NNS_G2D_VRAM_TYPE_2DMAIN = 1,
    NNS_G2D_VRAM_TYPE_2DSUB  = 2,
    NNS_G2D_VRAM_TYPE_2DBOTH = 3,
    NNS_G2D_VRAM_TYPE_MAX    = 3
} NNS_G2D_VRAM_TYPE;
typedef struct NNSG2dVRamLocation {
    u32 baseAddrOfVram[NNS_G2D_VRAM_TYPE_MAX];
} NNSG2dVRamLocation;
typedef struct NNSG2dCellTransferState {
    NNSG2dVRamLocation dstVramLocation;
    u32 szDst;
    const void *pSrcNCGR;
    const void *pSrcNCBR;
    u32 szSrcData;
    BOOL bActive;
    u32 bDrawn;
    u32 bTransferRequested;
    u32 srcOffset;
    u32 szByte;
} NNSG2dCellTransferState;
extern u32 func_020355dc();
extern NNSG2dCellTransferState *data_020fa648;
extern u32 data_020fa644;
u32 func_020355dc(void) {
    ((void) 0);

    {
        u32 i = 0;
        for (i = 0; i < data_020fa644; i++) {
            if (data_020fa648[i].bActive != 1) {
                data_020fa648[i].bActive = 1;
                return i;
            }
        }
    }

    return (u32) 0xFFFFFFFF;
}
