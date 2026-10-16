/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Sound_FlushCommand from https://github.com/RonyxDumb/mkds src/arm9/020211e4_Sound_FlushCommand.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
typedef int BOOL;
struct SNDCommand {
    struct SNDCommand *llNext;
    s32 id;
    u32 arg[4];
};
extern const struct SNDCommand *func_0200cbb8(u32 flags);
extern BOOL func_0200c914(u32 flags);
typedef enum {
    OS_INTRMODE_DISABLE_IRQ = 0x80,
    OS_INTRMODE_DISABLE_FIQ = 0x40,
    OS_INTRMODE_ENABLE      = 0
} OSIntrMode;
extern OSIntrMode func_0200b040(void);
extern OSIntrMode func_0200b054(OSIntrMode state);
extern void func_0200b0a4(u32 cycles);
extern void func_02009d10(register const void *startAddr, register u32 nBytes);
extern s32 func_0200d5bc(s32 fifotag, u32 data, BOOL err);
extern struct SNDCommand data_020f4b60[256];
extern struct SNDCommand *data_020f48ac[8 + 1];
extern struct SNDCommand *data_020f4890;
extern struct SNDCommand *data_020f4894;
extern s32 data_020f48a0;
extern s32 data_020f48a4;
extern u32 data_020f48a8;
extern void func_0200c680(void);
const struct SNDCommand *func_0200cbb8(u32 flags);
BOOL func_0200c914(u32 flags) {
    OSIntrMode oldirq = func_0200b040();

    if (data_020f4890 == ((void *) 0)) {
        (void) func_0200b054(oldirq);
        return 1;
    }

    if (data_020f48a4 >= 8) {
        if ((flags & 0x1) == 0) {
            (void) func_0200b054(oldirq);
            return 0;
        }

        do {
            (void) func_0200cbb8(0x1);
        } while (data_020f48a4 >= 8);
    }

    func_02009d10(data_020f4b60, sizeof(data_020f4b60));

    s32 result = func_0200d5bc(7, (u32) data_020f4890, 0);
    if (result < 0) {
        if ((flags & 0x1) == 0) {
            (void) func_0200b054(oldirq);
            return 0;
        }

        result = func_0200d5bc(7, (u32) data_020f4890, 0);
        while (result < 0) {
            (void) func_0200b054(oldirq);
            func_0200b0a4(100);
            oldirq = func_0200b040();
            result = func_0200d5bc(7, (u32) data_020f4890, 0);
        }
    }

    if ((flags & 0x2) != 0) {
        func_0200c680();
    }

    data_020f48ac[data_020f48a0] = data_020f4890;

    if (++data_020f48a0 > 8) {
        data_020f48a0 = 0;
    }

    data_020f4890 = ((void *) 0);
    data_020f4894 = ((void *) 0);
    data_020f48a4++;
    data_020f48a8++;

    (void) func_0200b054(oldirq);
    return 1;
}
void func_0200c680(void);
