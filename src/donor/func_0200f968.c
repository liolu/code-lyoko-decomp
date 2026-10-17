/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FSi_CompareDigest from https://github.com/ntrtwl/NitroSDK libraries/fs/src/fs_overlay.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef int BOOL;
extern void func_0200bce4(void *dest, u8 data, u32 size);
extern void func_0200bd78(const void *src, void *dest, u32 size);
static inline void MI_CpuClear8(void *dest, u32 size) {
    func_0200bce4(dest, 0, size);
}
extern void func_0200fd58(void *digest, void *bin_ptr, int bin_len, void *key_ptr, int key_len);
extern const void *data_020ec0a4;
extern int data_020ec0a8;
BOOL func_0200f968(const u8 *spec_digest, void *src, int len) {
    int i;
    u8 digest[(160 / 8)];
    u8 digest_key[64];

    MI_CpuClear8(digest, sizeof(digest));
    func_0200bd78(data_020ec0a4, digest_key, (u32) data_020ec0a8);
    func_0200fd58(digest, src, len, digest_key, data_020ec0a8);

    for (i = 0; i < sizeof(digest); i += sizeof(u32)) {
        if (*(const u32 *) (digest + i) != *(const u32 *) (spec_digest + i)) {
            break;
        }
    }

    return (i == sizeof(digest));
}
