/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a8c38 from https://github.com/banatic/acww-decomp src/main/func_020a8c38.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern int data_020f0470;
extern int data_020ec868;
struct SomeObject {
    void *vtable;
    int unk_04;
    char unk_08;
};
extern void func_020b4840(void *ptr);
struct SomeObject *func_020b47d8(struct SomeObject *this) {
    this->vtable = (void *) &data_020f0470;
    func_020b4840(&this->unk_08);
    this->vtable = (void *) &data_020ec868;
    return this;
}
