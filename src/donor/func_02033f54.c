/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_G2dTranslate from https://github.com/ntrtwl/NitroSystem libraries/g2d/src/g2d_Renderer.c (license: none), reused by
 * tools/donor_match.py */
typedef signed long s32;
typedef int BOOL;
typedef s32 fx32;
typedef union {
    struct {
        fx32 _00, _01;
        fx32 _10, _11;
        fx32 _20, _21;
    };
    fx32 m[3][2];
    fx32 a[6];
} MtxFx32;
extern void func_02033f54(fx32 x, fx32 y, fx32 z);
extern void NNSi_G2dSetTranslate(MtxFx32 *m, fx32 x, fx32 y);
extern void func_0203546c(const MtxFx32 *a, const MtxFx32 *b, MtxFx32 *ab);
inline void NNSi_G2dSetTranslate(MtxFx32 *m, fx32 x, fx32 y) {
    ((void) 0);

    m->_00 = ((fx32) 0x0000000000001000L);
    m->_01 = 0;
    m->_10 = 0;
    m->_11 = ((fx32) 0x0000000000001000L);
    m->_20 = x;
    m->_21 = y;
}
extern MtxFx32 data_020f9838[32];
extern MtxFx32 data_020f9b38[32];
extern fx32 data_020f96b8[32];
extern s32 data_020f96b4;
extern BOOL data_020f96ac;
extern void NNSi_G2dTranslate(fx32 x, fx32 y, fx32 z);
inline void NNSi_G2dTranslate(fx32 x, fx32 y, fx32 z) {
    if (data_020f96ac) {
        data_020f9838[data_020f96b4]._20 += x;
        data_020f9838[data_020f96b4]._21 += y;
        data_020f96b8[data_020f96b4] += z;
    } else {
        MtxFx32 temp;

        NNSi_G2dSetTranslate(&temp, x, y);
        func_0203546c(&temp, &data_020f9838[data_020f96b4], &data_020f9838[data_020f96b4]);
        func_0203546c(&temp, &data_020f9b38[data_020f96b4], &data_020f9b38[data_020f96b4]);

        data_020f96b8[data_020f96b4] += z;
    }
}
void func_02033f54(fx32 x, fx32 y, fx32 z) {
    ((void) 0);
    NNSi_G2dTranslate(x, y, z);
}
