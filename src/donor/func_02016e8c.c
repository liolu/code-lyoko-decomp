/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* MbCache_LoadPage from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/mb/mb_cache_load_page.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef int BOOL;
typedef struct OSThreadQueue {
    u16 head;
    u16 tail;
} OSThreadQueue;
extern void func_0200b2ec(void);
typedef struct DlPlayHeldBlock {
    u32 address;
    u32 size;
    u8 *buffer;
    u32 state;
} DlPlayHeldBlock;
typedef struct DlPlayHeldProgram {
    u32 readSinceLoad;
    u8 pad_04[0x10 - 4];
    char archiveName[4];
    int archiveNameLength;
    u8 pad_18[0x30 - 0x18];
    DlPlayHeldBlock pages[4];
} DlPlayHeldProgram;
typedef struct DlPlayWorkerJob {
    struct DlPlayWorkerJob *next;
    u32 busy : 1;
    u32 priority : 31;
    void (*task)(struct DlPlayWorkerJob *info);
    void (*callback)(struct DlPlayWorkerJob *info);
    DlPlayHeldBlock *page;
    DlPlayHeldProgram *cache;
    u8 pad_18[8];
} DlPlayWorkerJob;
typedef struct FSArchive FSArchive;
typedef struct FSFile FSFile;
typedef struct FSFileID {
    FSArchive *arc;
    u32 file_id;
} FSFileID;
typedef struct FSDirPos {
    FSArchive *arc;
    u16 ownId;
    u16 index;
    u32 pos;
} FSDirPos;
typedef struct DirListingEntry {
    union {
        FSFileID fileId;
        FSDirPos dirId;
    };
    u32 isDirectory;
    u32 nameLength;
    char name[127 + 1];
} DirListingEntry;
typedef struct FSGetPathInfo {
    u8 *buffer;
    u32 bufferSize;
    u16 totalLength;
    u16 dirId;
} FSGetPathInfo;
struct FSFile {
    FSFile *prev;
    FSFile *next;
    FSArchive *arc;
    u32 flags;
    u32 command;
    u32 error;
    OSThreadQueue queue;
    union {
        struct {
            u32 id;
            u32 top;
            u32 bottom;
            u32 pos;
        };
        struct {
            FSDirPos dirPos;
            u32 parent;
        };
    };
    union {
        struct {
            u32 top;
            u32 bottom;
            u32 id;
        } openFileDirect;
        struct {
            u32 unused;
            u32 id;
        } openFileFast;
        struct {
            void *dest;
            u32 requested;
            u32 length;
        } readFile;
        struct {
            FSDirPos pos;
        } seekDir;
        struct {
            DirListingEntry *entry;
            BOOL skipName;
        } readDir;
        struct {
            FSDirPos pos;
            const char *path;
            BOOL findDirectory;
            union {
                FSFileID *file;
                FSDirPos *dir;
            } result;
        } findPath;
        FSGetPathInfo getPath;
    } arg;
};
typedef int (*ArchiveByteReader)(FSArchive *arc, void *dest, u32 src, u32 len);
typedef int (*ArchiveByteWriter)(FSArchive *arc, const void *src, u32 dest, u32 len);
struct FSArchive {
    u32 name;
    FSArchive *next;
    FSArchive *prev;
    OSThreadQueue queue;
    u32 flags;
    u32 unk_14;
    FSFile *command;
    u32 base;
    u32 fat;
    u32 fatSize;
    u32 fnt;
    u32 fntSize;
    u32 fatOriginal;
    u32 fntOriginal;
    u32 unk_38;
    ArchiveByteReader read;
    ArchiveByteWriter write;
    ArchiveByteReader readTable;
    void *tableBuffer;
    u32 tableBufferSize;
};
extern FSArchive *func_0200e7b8(const char *name, int length);
extern void func_0200f350(FSFile *file);
extern s32 func_0200ee7c(FSFile *file, void *dest, s32 size);
extern BOOL func_0200efb8(FSFile *file);
extern BOOL func_0200f0cc(FSFile *file, FSArchive *arc, u32 top, u32 bottom, u32 index);
void func_02016e8c(DlPlayWorkerJob *task) {
    DlPlayHeldProgram *cache = task->cache;
    DlPlayHeldBlock *page    = task->page;
    FSFile file;
    u32 address;

    func_0200f350(&file);
    address = page->address;
    if (func_0200f0cc(&file, func_0200e7b8(cache->archiveName, cache->archiveNameLength), address, address + page->size, -1)) {
        if (page->size == func_0200ee7c(&file, page->buffer, page->size)) {
            page->state = 2;
        }
        func_0200efb8(&file);
    }
    if (page->state != 2) {
        func_0200b2ec();
    }
}
