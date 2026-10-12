#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02009d10(void) {
    mov ip, #0x0
    add r1, r1, r0
    bic r0, r0, #0x1f
L_02009d1c:
    mcr p15, 0, ip, c7, c10, 4
    mcr p15, 0, r0, c7, c14, 1
    add r0, r0, #0x20
    cmp r0, r1
    blt L_02009d1c
    bx lr
}
// clang-format on
