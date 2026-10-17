/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02046d10 from https://github.com/dothacktranslate/okamiden-decomp src/main/func_02046d10.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int undefined4;
extern int func_0203f87c();
extern int func_020491f4();
void func_0203eccc(int param_1)

{
    undefined4 uVar1;

    uVar1 = func_0203f87c();
    func_020491f4(param_1, uVar1, *(int *) (param_1 + 8) + -0x10, *(int *) (param_1 + 8) + -8);
    *(int *) (param_1 + 8) = *(int *) (param_1 + 8) + -0x10;
    return;
}
