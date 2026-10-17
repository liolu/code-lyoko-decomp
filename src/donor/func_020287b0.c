/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a88a0 from https://github.com/banatic/acww-decomp src/main/func_020a88a0.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern char data_020ec68c;
extern char data_020ec540;
extern void func_020285b0(void *);
extern void func_0208f8c8(void *);
typedef struct {
    void *vtable;
    int sub;
} UnkStruct_020a88a0;
void *func_020287b0(UnkStruct_020a88a0 *self) {
    self->vtable = &data_020ec68c;
    func_020285b0(&self->sub);
    self->vtable = &data_020ec540;
    func_0208f8c8(self);
    return self;
}
