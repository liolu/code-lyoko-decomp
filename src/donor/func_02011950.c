/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02010600 from projets/rayman-rr/src/donor/func_02010600.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
typedef void (*PMCallback)(u32 result, void *arg);
typedef struct {
    u16 flag;
    u16 padding;
    u16 *buffer;
} PMData16;
extern void func_02011610(u32 data);
extern u32 func_02011950(u16 registerAddr, u16 *buffer, PMCallback callback, void *arg);
extern const u16(*ctrdgi_fl_maxtime);
typedef struct {
    BOOL lock;
    PMCallback callback;
    void *callbackArg;
    void *work;
} PMiWork;
inline u32 PMi_MakeData1(u32 bit, u32 seq, u32 command, u32 data) {
    return (bit) | ((seq) << 16) | ((command) << 8) | ((data) & 0xff);
}
extern BOOL func_02011d40(void);
extern PMiWork data_020f6524;
extern PMData16 data_020f654c[5];
extern BOOL func_02011d40(void);
u32 func_02011950(u16 registerAddr, u16 *buffer, PMCallback callback, void *arg) {
    u32 pxi_send_data;

    if (!func_02011d40()) {
        return 1;
    }

    do {
        data_020f6524.callback    = (callback);
        data_020f6524.callbackArg = (arg);
    } while (0);

    data_020f654c[registerAddr].flag   = 0;
    data_020f654c[registerAddr].buffer = buffer;

    pxi_send_data = PMi_MakeData1(0x02000000 | 0x01000000, 0, 0x0065, registerAddr);
    func_02011610(pxi_send_data);

    return 0;
}
extern void func_02011610(u32 data);
