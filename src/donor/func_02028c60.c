/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* setjmp from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/msl/setjmp.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
// clang-format off
asm int func_02028c60(void *buf)
{
    stmia r0, {r4-r11, sp, lr}
    mov r0, #0
    bx lr
}
// clang-format on
