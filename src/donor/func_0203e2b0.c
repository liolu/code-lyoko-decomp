/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0212f1ac from https://github.com/RonyxDumb/mkds src/arm9/0212f1ac_func_0212f1ac.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed short int s16;
typedef signed long s32;
extern void func_0200bc40(const void *srcp, void *destp, u32 size);
static inline void MI_CpuCopyFast(const void *src, void *dest, u32 size) {
    ((void) 0);
    ((void) 0);
    ((void) 0);

    func_0200bc40(src, dest, size);
}
typedef enum {
    NNS_SND_CAPTURE_FORMAT_PCM16,
    NNS_SND_CAPTURE_FORMAT_PCM8
} NNSSndCaptureFormat;
typedef void (*NNSSndCaptureCallback)(void *bufferL, void *bufferR, u32 len, NNSSndCaptureFormat format, void *arg);
typedef enum {
    NNS_SND_CAPTURE_OUTPUT_EFFECT_NORMAL,
    NNS_SND_CAPTURE_OUTPUT_EFFECT_SURROUND,
    NNS_SND_CAPTURE_OUTPUT_EFFECT_HEADPHONE,
    NNS_SND_CAPTURE_OUTPUT_EFFECT_MONO
} NNSSndCaptureOutputEffectType;
typedef void (*EffectFunc)(void *bufferL_p, void *bufferR_p, u32 len, struct CallbackInfo *info);
typedef struct CallbackInfo {
    NNSSndCaptureOutputEffectType type;
    EffectFunc effectFunc;
    NNSSndCaptureCallback cbFunc;
    void *cbArg;
    NNSSndCaptureCallback cbPostFunc;
    void *cbPostArg;
    union {
        s32 surround[2];
        s32 headphone[24][2];
    } buffer;
} CallbackInfo;
extern void func_0203e2b0(void *bufferL_p, void *bufferR_p, u32 len, CallbackInfo *info);
void func_0203e2b0(void *bufferL_p, void *bufferR_p, u32 len, CallbackInfo *) {
    s16 *lp                     = (s16 *) bufferL_p;
    s16 *rp                     = (s16 *) bufferR_p;
    const unsigned long samples = len >> 1;
    register s32 x;
    int i;

    for (i = 0; i < samples; i++) {
        x = lp[i];
        x += rp[i];
        x++;
        x >>= 1;
        lp[i] = (s16) x;
    }
    MI_CpuCopyFast(bufferL_p, bufferR_p, len);
}
