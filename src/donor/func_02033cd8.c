/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_G2dRotZ from https://github.com/ntrtwl/NitroSystem libraries/g2d/src/g2d_Renderer.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef signed long s32;
typedef int BOOL;
typedef s32 fx32;
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
extern void func_02033cd8(fx32 sin, fx32 cos);
extern void NNSi_G2dSetRotate(MtxFx32 *m, fx32 sin, fx32 cos);
extern void func_0203546c(const MtxFx32 *a, const MtxFx32 *b, MtxFx32 *ab);
inline void NNSi_G2dSetRotate(MtxFx32 *m, fx32 sin, fx32 cos) {
    ((void) 0);

    m->_00 = cos;
    m->_01 = sin;
    m->_10 = -sin;
    m->_11 = cos;
    m->_20 = 0;
    m->_21 = 0;
}
extern MtxFx32 data_020f9838[32];
extern MtxFx32 data_020f9b38[32];
extern s32 data_020f96b4;
extern u16 data_020ecc2c;
extern BOOL data_020f96ac;
extern void NNSi_G2dRotate(fx32 sin, fx32 cos);
extern u16 NNSi_G2dGetMtxStackPos(void);
extern void NNSi_G2dSetRndMtxStackSRTransformed(void);
extern BOOL NNSi_G2dIsRndCurrentMtxSRTransformed(void);
inline void NNSi_G2dSetRndMtxStackSRTransformed(void) {
    ((void) 0);

    ((void) 0);

    data_020ecc2c = NNSi_G2dGetMtxStackPos();
}
inline BOOL NNSi_G2dIsRndCurrentMtxSRTransformed(void) {
    return (BOOL) (!data_020f96ac && data_020ecc2c != 0xFFFE);
}
inline void NNSi_G2dRotate(fx32 sin, fx32 cos) {
    ((void) 0);

    {
        MtxFx32 temp;
        NNSi_G2dSetRotate(&temp, sin, cos);

        func_0203546c(&temp, &data_020f9838[data_020f96b4], &data_020f9838[data_020f96b4]);
        func_0203546c(&temp, &data_020f9b38[data_020f96b4], &data_020f9b38[data_020f96b4]);
    }
}
inline u16 NNSi_G2dGetMtxStackPos(void) {

    return (u16) (data_020f96b4);
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
inline void SetMtxStateGroupID_(MCMMtxState *pMtxState, u16 groupID) {
    pMtxState->groupID = groupID;
}
extern MCMMtxState data_020f9738[32];
extern u16 data_020f96a8;
inline MCMMtxState *GetCuurentMtxState_() {
    return &data_020f9738[NNSi_G2dGetMtxStackPos()];
}
inline u16 GetNewGroupID_(void) {
    return data_020f96a8++;
}
inline void NNSi_G2dMCMSetCurrentMtxSRChanged(void) {
    MCMMtxState *pCurrMtxState = GetCuurentMtxState_();

    switch (pCurrMtxState->stateType) {
        case MCM_MTX_SR_NOT_CACHELOADED:
            return;
        case MCM_MTX_NOT_SR:
        case MCM_MTX_SR_NOT_CACHELOADED_STACKCHANGED:
        case MCM_MTX_SR_CACHELOADED: {
            SetMtxStateGroupID_(pCurrMtxState, GetNewGroupID_());

            pCurrMtxState->stateType = MCM_MTX_SR_NOT_CACHELOADED;

            ((void) 0);
        } break;
    }
}
void func_02033cd8(fx32 sin, fx32 cos) {
    ((void) 0);
    NNSi_G2dRotate(sin, cos);

    if (!NNSi_G2dIsRndCurrentMtxSRTransformed()) {
        ((void) 0);
        NNSi_G2dSetRndMtxStackSRTransformed();
    }

    NNSi_G2dMCMSetCurrentMtxSRChanged();
}
