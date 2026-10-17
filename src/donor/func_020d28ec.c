/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02078bb0 from https://github.com/banatic/acww-decomp src/main/func_02078bb0.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
#pragma ipa file
void func_020d28ec(int *a) {
    int i;
    int v;

    for (i = 0, v = i; i < 4; i++) {
        a[i] = v;
    }
}
