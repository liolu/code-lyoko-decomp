/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a887c from https://github.com/banatic/acww-decomp src/main/func_020a887c.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern void func_020285b0(void *);
extern unsigned int data_020ec68c;
extern unsigned int data_020ec540;
void *func_02028780(void *self) {
    *(unsigned int *) self = (unsigned int) &data_020ec68c;
    func_020285b0((char *) self + 4);
    *(unsigned int *) self = (unsigned int) &data_020ec540;
    return self;
}
