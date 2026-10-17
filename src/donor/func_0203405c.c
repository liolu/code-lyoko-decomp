/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_G2dPopMtx from https://github.com/ntrtwl/NitroSystem libraries/g2d/src/g2d_Renderer.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef signed long s32;
typedef int BOOL;
extern const u16(*ctrdgi_fl_maxtime);
extern void func_0203405c();
extern s32 data_020f96b4;
extern u16 data_020ecc2c;
extern BOOL NNSi_G2dIsStackEmpty(void);
extern void NNSi_G2dMtxPop(void);
extern void RestoreRndMtxStackStateNotSR_(void);
inline void RestoreRndMtxStackStateNotSR_(void) {
    data_020ecc2c = 0xFFFE;
}
inline BOOL NNSi_G2dIsStackEmpty(void) {
    return (BOOL) (data_020f96b4 <= 0);
}
inline void NNSi_G2dMtxPop(void) {
    if (!NNSi_G2dIsStackEmpty()) {
        data_020f96b4--;

        {
            if (data_020ecc2c > data_020f96b4) {
                ((void) 0);

                RestoreRndMtxStackStateNotSR_();
            }
        }
    } else {
        ((void) 0);
    }
}
void func_0203405c() {
    ((void) 0);
    NNSi_G2dMtxPop();
}
