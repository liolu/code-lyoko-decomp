/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214fefc from https://github.com/RonyxDumb/mkds src/arm9/0214fefc_func_0214fefc.c (license: none), reused by
 * tools/donor_match.py */
extern int func_02011d40(void);
extern void func_02011610(int param);
extern void func_020112e0(int a, int b, int c, int d);
extern volatile int data_020f6510;
extern int data_020f6514;
int func_02011a3c(unsigned int a, unsigned int b) {
    volatile int *p;

    if (!func_02011d40()) {
        return 1;
    }
    data_020f6510 = 0;
    func_02011610(0x3006000);
    p = &data_020f6510;
    while (!*p) {
    }
    *p            = 0;
    data_020f6514 = 0;
    func_020112e0(0, 2, 0, 0);
    func_02011610((a & 0xff) | 0x2006100);
    func_02011610((b & 0xffff) | 0x1010000);
    return 0;
}
