/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020231e4 from https://github.com/RonyxDumb/mkds src/arm9/020231e4_func_020231e4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
extern int func_0203749c(int areaWidth, int areaHeight);
#pragma thumb off
int func_0203749c(int areaWidth, int areaHeight) {
    const u32 w   = (unsigned int) areaWidth;
    const u32 h   = (unsigned int) areaHeight;
    const u32 w8  = w / 8;
    const u32 h8  = h / 8;
    const u32 w4  = (w & 4) >> 2;
    const u32 h4  = (h & 4) >> 2;
    const u32 wcp = ((w & 2) >> 1) + (w & 1);
    const u32 hcp = ((h & 2) >> 1) + (h & 1);
    int ret       = 0;

    ((void) 0);
    ((void) 0);

    ret += w8 * h8;
    ret += (wcp * 2 + w4) * h8;
    ret += (hcp * 2 + h4) * w8;
    ret += (wcp + w4) * (hcp + h4);

    return ret;
}
