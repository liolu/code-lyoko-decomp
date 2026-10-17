/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_GetMaxFreeSize from https://github.com/RonyxDumb/mkds verification/leafs/arm7_037fa164.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef u32 OSIntrMode;
extern OSIntrMode func_0200b040(void);
extern OSIntrMode func_0200b054(OSIntrMode state);
typedef enum {
    OS_ARENA_MAIN         = 0,
    OS_ARENA_MAIN_SUBPRIV = 1,
    OS_ARENA_MAINEX       = 2,
    OS_ARENA_ITCM         = 3,
    OS_ARENA_DTCM         = 4,
    OS_ARENA_SHARED       = 5,
    OS_ARENA_WRAM_MAIN    = 6,
    OS_ARENA_WRAM_SUB     = 7,
    OS_ARENA_WRAM_SUBPRIV = 8,
    OS_ARENA_MAX          = 9
} OSArenaId;
typedef int OSHeapHandle;
extern u32 func_0200a1c4(OSArenaId id, OSHeapHandle heap);
typedef struct Cell Cell;
typedef struct HeapDesc HeapDesc;
struct Cell {
    Cell *prev;
    Cell *next;
    long size;
};
struct HeapDesc {
    long size;
    Cell *free;
    Cell *allocated;
};
typedef struct {
    volatile OSHeapHandle currentHeap;
    int numHeaps;
    void *arenaStart;
    void *arenaEnd;
    HeapDesc *heapArray;
} OSHeapInfo;
extern void *data_020f473c[OS_ARENA_MAX];
u32 func_0200a1c4(OSArenaId id, OSHeapHandle heap) {
    OSHeapInfo *heapInfo;
    Cell *cell;
    u32 candidate      = 0;
    OSIntrMode enabled = func_0200b040();

    ((void) 0);
    heapInfo = data_020f473c[id];
    ((void) 0);
    ((void) 0);

    if (heap < 0) {
        heap = heapInfo->currentHeap;
    }

    for (cell = heapInfo->heapArray[heap].free; cell; cell = cell->next) {
        u32 size = (u32) (cell->size - (((u32) (sizeof(Cell)) + (32) - 1) & ~((32) - 1)));
        if (size > candidate) {
            candidate = size;
        }
    }

    (void) func_0200b054(enabled);
    return candidate;
}
