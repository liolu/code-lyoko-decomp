/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020f5400 from https://github.com/banatic/acww-decomp src/autoload_2/func_020f5400.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
struct UnkStruct_020f5400 {
    void *volatile unk_00;
};
extern void func_0208f8c8(struct UnkStruct_020f5400 *obj);
extern unsigned char data_020f1220[];
extern unsigned char data_020f18e4[];
void *func_020c0614(struct UnkStruct_020f5400 *obj) {
    obj->unk_00 = (void *) data_020f18e4;
    obj->unk_00 = (void *) data_020f1220;
    func_0208f8c8(obj);
    return obj;
}
