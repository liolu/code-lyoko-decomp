/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNSi_G2dMCMStoreCurrentMtxToMtxCache from https://github.com/ntrtwl/NitroSystem libraries/g2d/src/g2d_Renderer.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
typedef int BOOL;
extern void func_0200bbf4(u32 data, void *destp, u32 size);
static inline void MI_CpuFillFast(void *dest, u32 data, u32 size) {
    ((void) 0);
    ((void) 0);

    func_0200bbf4(data, dest, size);
}
typedef s32 fx32;
typedef union {
    struct {
        fx32 _00, _01;
        fx32 _10, _11;
    };
    fx32 m[2][2];
    fx32 a[4];
} MtxFx22;
extern const u16(*ctrdgi_fl_maxtime);
typedef union {
    struct {
        fx32 _00, _01;
        fx32 _10, _11;
        fx32 _20, _21;
    };
    fx32 m[3][2];
    fx32 a[6];
} MtxFx32;
typedef struct NNSG2dRndCore2DMtxCache {
    MtxFx22 m22;
    u16 affineIndex[0x04][2];
} NNSG2dRndCore2DMtxCache;
inline void NNS_G2dInitRndCore2DMtxCache(NNSG2dRndCore2DMtxCache *pMtxCache) {
    MI_CpuFillFast(pMtxCache->affineIndex, 0xFFFFFFFF, sizeof(pMtxCache->affineIndex));
}
extern void NNSi_G2dGetMtxRS(const MtxFx32 *m, MtxFx22 *pRet);
inline void NNSi_G2dGetMtxRS(const MtxFx32 *m, MtxFx22 *pRet) {
    ((void) 0);
    ((void) 0);

    pRet->_00 = m->_00;
    pRet->_01 = m->_01;
    pRet->_10 = m->_10;
    pRet->_11 = m->_11;
}
extern MtxFx32 data_020f9838[32];
extern MtxFx32 data_020f9b38[32];
extern s32 data_020f96b4;
extern BOOL data_020f96ac;
extern MtxFx32 data_020ecc34;
extern u16 NNSi_G2dGetMtxStackPos(void);
inline const MtxFx32 *NNSi_G2dGetCurrentMtxFor2DHW(void) {
    if (data_020f96ac) {
        data_020ecc34._20 = data_020f9838[data_020f96b4]._20;
        data_020ecc34._21 = data_020f9838[data_020f96b4]._21;
        return &data_020ecc34;

    } else {
        return &data_020f9b38[data_020f96b4];
    }
}
inline u16 NNSi_G2dGetMtxStackPos(void) {

    return (u16) (data_020f96b4);
}
extern NNSG2dRndCore2DMtxCache data_020f9e38[32];
extern u16 data_020f96a4;
inline NNSG2dRndCore2DMtxCache *NNSi_RMCGetMtxCacheByIdx(u16 idx) {
    ((void) 0);
    return &data_020f9e38[idx];
}
inline u16 NNSi_RMCUseNewMtxCache(void) {
    const u16 ret = data_020f96a4;

    if (data_020f96a4 < 32 - 1) {
        data_020f96a4++;
    } else {

        ((void) 0);
    }

    return ret;
}
typedef enum MCMRndMtxStateType {
    MCM_MTX_NOT_SR = 0,
    MCM_MTX_SR_NOT_CACHELOADED,
    MCM_MTX_SR_NOT_CACHELOADED_STACKCHANGED,
    MCM_MTX_SR_CACHELOADED
} MCMRndMtxStateType;
typedef struct MCMMtxState {
    u16 mtxCacheIdx;
    u16 groupID;
    u16 stateType;
    u16 pad16;
} MCMMtxState;
inline u16 GetMtxStateMtxCacheIdx_(const MCMMtxState *pMtxState) {
    return pMtxState->mtxCacheIdx;
}
inline void SetMtxStateMtxCacheIdx_(MCMMtxState *pMtxState, u16 cacheIdx) {
    pMtxState->mtxCacheIdx = cacheIdx;
}
inline u16 GetMtxStateGroupID_(const MCMMtxState *pMtxState) {
    return pMtxState->groupID;
}
extern MCMMtxState data_020f9738[32];
inline MCMMtxState *GetCuurentMtxState_() {
    return &data_020f9738[NNSi_G2dGetMtxStackPos()];
}
inline void SetParentMtxStateLoaded_(u16 mtxCacheIdx, u16 groupID) {
    int i;
    const u16 currntStackPos = NNSi_G2dGetMtxStackPos();

    for (i = currntStackPos; i >= 0; i--) {

        if (GetMtxStateGroupID_(&data_020f9738[i]) != groupID) {
            break;
        } else {

            data_020f9738[i].stateType = MCM_MTX_SR_CACHELOADED;
            SetMtxStateMtxCacheIdx_(&data_020f9738[i], mtxCacheIdx);
        }

        ((void) 0);
    }
}
inline NNSG2dRndCore2DMtxCache *NNSi_G2dMCMGetCurrentMtxCache(void) {
    return NNSi_RMCGetMtxCacheByIdx(GetMtxStateMtxCacheIdx_(GetCuurentMtxState_()));
}
inline BOOL NNSi_G2dMCMShouldCurrentMtxBeLoadedToMtxCache(void) {
    MCMMtxState *pCurrMtxState = GetCuurentMtxState_();

    return (BOOL) (pCurrMtxState->stateType == MCM_MTX_SR_NOT_CACHELOADED ||
                   pCurrMtxState->stateType == MCM_MTX_SR_NOT_CACHELOADED_STACKCHANGED);
}
void func_0203522c(void) {
    if (NNSi_G2dMCMShouldCurrentMtxBeLoadedToMtxCache()) {
        MCMMtxState *pCurrentState = GetCuurentMtxState_();
        const u16 mtxCacheIdx      = NNSi_RMCUseNewMtxCache();
        const u16 groupID          = GetMtxStateGroupID_(pCurrentState);

        ((void) 0);

        SetMtxStateMtxCacheIdx_(pCurrentState, mtxCacheIdx);

        {
            NNS_G2dInitRndCore2DMtxCache(NNSi_RMCGetMtxCacheByIdx(mtxCacheIdx));

            NNSi_G2dGetMtxRS(NNSi_G2dGetCurrentMtxFor2DHW(), &NNSi_G2dMCMGetCurrentMtxCache()->m22);

            ((void) 0);
        }

        SetParentMtxStateLoaded_(mtxCacheIdx, groupID);
    }
}
