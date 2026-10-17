/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_SndHeapLoadState from https://github.com/RonyxDumb/mkds src/arm9/0212d98c_Sound_Context_MaybeReset.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
typedef struct {
    void *prevObject;
    void *nextObject;
} NNSFndLink;
typedef struct {
    void *headObject;
    void *tailObject;
    u16 numObjects;
    u16 offset;
} NNSFndList;
extern void func_02031e10(NNSFndList *list, void *object);
extern void *func_02031de4(NNSFndList *list, void *object);
typedef struct NNSiFndHeapHead NNSiFndHeapHead;
struct NNSiFndHeapHead {
    u32 signature;
    NNSFndLink link;
    NNSFndList childList;
    void *heapStart;
    void *heapEnd;
    u32 attribute;
};
typedef NNSiFndHeapHead *NNSFndHeapHandle;
extern BOOL func_020321b0(NNSFndHeapHandle heap, u32 tagName);
extern BOOL func_02032154(NNSFndHeapHandle heap, u32 tagName);
typedef void (*NNSSndHeapDisposeCallback)(void *mem, u32 size, u32 data1, u32 data2);
typedef struct NNSSndHeap *NNSSndHeapHandle;
extern void func_0203b910(NNSSndHeapHandle heap);
extern void func_0203b75c(NNSSndHeapHandle heap, int level);
typedef struct NNSSndHeap {
    NNSFndHeapHandle handle;
    NNSFndList sectionList;
} NNSSndHeap;
typedef struct NNSSndHeapBlock {
    NNSFndLink link;
    u32 size;
    NNSSndHeapDisposeCallback callback;
    u32 data1;
    u32 data2;
    u8 padding[0x20 - ((sizeof(NNSFndLink) + sizeof(NNSSndHeapDisposeCallback) + sizeof(u32) * 3) & 0x1f)];
    u32 buffer[0];
} NNSSndHeapBlock;
typedef struct NNSSndHeapSection {
    NNSFndList blockList;
    NNSFndLink link;
} NNSSndHeapSection;
extern BOOL func_0203b67c(NNSSndHeap *heap);
extern void func_0203b658(void);
void func_0203b910(NNSSndHeapHandle heap);
void func_0203b75c(NNSSndHeapHandle heap, int level) {
    NNSSndHeapSection *section;
    void *object = ((void *) 0);
    BOOL result;
    BOOL doCallback = 0;

    ((void) 0);
    ((void) 0);

    if (level == 0) {
        func_0203b910(heap);
        return;
    }

    while (level < heap->sectionList.numObjects) {
        section = (NNSSndHeapSection *) func_02031de4(&heap->sectionList, ((void *) 0));

        while ((object = func_02031de4(&section->blockList, object)) != ((void *) 0)) {
            NNSSndHeapBlock *block = (NNSSndHeapBlock *) object;
            if (block->callback != ((void *) 0)) {
                block->callback(block->buffer, block->size, block->data1, block->data2);
                doCallback = 1;
            }
        }

        func_02031e10(&heap->sectionList, section);
    }

    result = func_02032154(heap->handle, (u32) level);
    ((void) 0);

    if (doCallback) {
        func_0203b658();
    }

    result = func_020321b0(heap->handle, heap->sectionList.numObjects);
    ((void) 0);

    result = func_0203b67c(heap);
    ((void) 0);
}
BOOL func_0203b67c(NNSSndHeap *heap);
void func_0203b658(void);
