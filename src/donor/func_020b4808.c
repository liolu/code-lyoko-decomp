/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a8c5c from https://github.com/banatic/acww-decomp src/main/func_020a8c5c.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern char data_020f0470;
extern char data_020ec868;
extern void func_020b4840(void *ptr);
extern void func_0208f8c8(void *ptr);
void *func_020b4808(void *obj) {
    char *self      = (char *) obj;
    *(void **) self = &data_020f0470;
    func_020b4840(self + 8);
    *(void **) self = &data_020ec868;
    func_0208f8c8(self);
    return obj;
}
