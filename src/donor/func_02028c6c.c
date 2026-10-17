/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* longjmp from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/msl/longjmp.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_02028c6c(void *buf, int value)
{
    ldmia r0, {r4-r11, sp, lr}
    movs r0, r1
    moveq r0, #1
    bx lr
}
// clang-format on
