
extern void func_0200aadc();
// clang-format on

/* func_0200e4a0 from projets/rayman-rr/src/auto/func_0200e4a0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_0200aacc(void) {
    stmfd sp!, {r0, lr}
    bl func_0200aadc
    ldmfd sp!, {r0, lr}
    bx lr
}
