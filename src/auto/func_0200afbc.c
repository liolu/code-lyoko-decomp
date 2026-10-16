/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef signed long s32;
typedef int BOOL;
typedef void (*OSAlarmHandler)(void *);
typedef struct OSiVAlarm OSVAlarm;
struct OSiVAlarm {
    OSAlarmHandler handler;
    void *arg;
    u32 tag;
    u32 frame;
    s16 fire;
    s16 delay;
    OSVAlarm *prev;
    OSVAlarm *next;
    BOOL period;
    BOOL finish;
    BOOL canceled;
};
extern void func_0200afbc(void);
typedef u32 OSIrqMask;
extern OSIrqMask func_02008794(OSIrqMask mask);
extern struct OSiVAlarmQueue {
    OSVAlarm *head;
    OSVAlarm *tail;
} data_020f4818;
extern u16 data_020f480c;
extern s32 data_020f4814;
extern s32 data_020f4810;

/* Os_InitializeVAlarm from https://github.com/RonyxDumb/mkds src/arm9/0200fc1c_Os_InitializeVAlarm.c (license: none), reused
 * by tools/donor_match.py */
void func_0200afbc(void) {
    if (!data_020f480c) {
        data_020f480c = 1;

        data_020f4818.head = ((void *) 0);
        data_020f4818.tail = ((void *) 0);

        (void) func_02008794((1UL << 2));

        data_020f4814 = 0;
        data_020f4810 = 0;
    }
}
