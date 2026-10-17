/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020754b0 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_arcload.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
extern u32 func_0200b040(void);
extern u32 func_0200b054(u32 irq_flag);
extern void *func_0203b2c0(void *arc);
extern void *func_0203ad78(u32 fileId);
extern void func_0203ad5c(u32 fileId, void *mem);
extern void func_0203bd70(void *mem, void *arc, u32 fileId);
void func_0203bd70(void *mem, void *arc, u32 fileId) {
    void *prev;
    int irq;

    if (arc == 0) {
        return;
    }

    irq  = func_0200b040();
    prev = func_0203b2c0(arc);
    if (mem == func_0203ad78(fileId)) {
        func_0203ad5c(fileId, 0);
    }
    func_0203b2c0(prev);
    func_0200b054(irq);
}
