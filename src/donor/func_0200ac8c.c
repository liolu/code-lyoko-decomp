/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_SetPeriodicAlarm from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OS_SetPeriodicAlarm.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef unsigned long long u64;
typedef long long s64;
typedef u64 OSTick;
typedef void (*OSAlarmHandler)(void *);
typedef struct OSAlarm {
    OSAlarmHandler handler;
    void *arg;
    u32 pad_08[5];
    s64 period;
    s64 fire;
} OSAlarm;
extern u32 func_0200b040(void);
extern void func_0200b054(u32);
extern void func_0200b2ec(void);
extern void func_0200ad78(OSAlarm *alarm, OSTick fire);
void func_0200ac8c(OSAlarm *alarm, s64 fire, s64 period, OSAlarmHandler handler, void *arg) {
    u32 irq;

    if (alarm == 0 || alarm->handler != 0) {
        func_0200b2ec();
    }

    irq            = func_0200b040();
    alarm->period  = period;
    alarm->fire    = fire;
    alarm->handler = handler;
    alarm->arg     = arg;
    func_0200ad78(alarm, 0);
    func_0200b054(irq);
}
