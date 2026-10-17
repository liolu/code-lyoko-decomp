/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FS_LoadOverlayInfo from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/fs/calls/FS_LoadOverlayInfo.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef int BOOL;
typedef enum {
    FS_COMMAND_ASYNC_BEGIN = 0,
    FS_COMMAND_READFILE    = FS_COMMAND_ASYNC_BEGIN,
    FS_COMMAND_WRITEFILE,
    FS_COMMAND_ASYNC_END,
    FS_COMMAND_SYNC_BEGIN = FS_COMMAND_ASYNC_END,
    FS_COMMAND_SEEKDIR    = FS_COMMAND_SYNC_BEGIN,
    FS_COMMAND_READDIR,
    FS_COMMAND_FINDPATH,
    FS_COMMAND_GETPATH,
    FS_COMMAND_OPENFILEFAST,
    FS_COMMAND_OPENFILEDIRECT,
    FS_COMMAND_CLOSEFILE,
    FS_COMMAND_SYNC_END,
    FS_COMMAND_STATUS_BEGIN = FS_COMMAND_SYNC_END,
    FS_COMMAND_ACTIVATE     = FS_COMMAND_STATUS_BEGIN,
    FS_COMMAND_IDLE,
    FS_COMMAND_SUSPEND,
    FS_COMMAND_RESUME,
    FS_COMMAND_STATUS_END,
    FS_COMMAND_INVALID
} FSCommandType;
typedef enum {
    FS_RESULT_SUCCESS = 0,
    FS_RESULT_FAILURE,
    FS_RESULT_BUSY,
    FS_RESULT_CANCELED,
    FS_RESULT_UNSUPPORTED,
    FS_RESULT_ERROR,
    FS_RESULT_PROC_ASYNC,
    FS_RESULT_PROC_DEFAULT,
    FS_RESULT_PROC_UNKNOWN
} FSResult;
typedef FSResult (*FS_ARCHIVE_PROC_FUNC)(struct FSFile *, FSCommandType);
typedef FSResult (*FS_ARCHIVE_READ_FUNC)(struct FSArchive *p, void *dst, u32 pos, u32 size);
typedef FSResult (*FS_ARCHIVE_WRITE_FUNC)(struct FSArchive *p, const void *src, u32 pos, u32 size);
typedef struct FSFileLink {
    struct FSFile *prev;
    struct FSFile *next;
} FSFileLink;
typedef struct OSThreadQueue {
    struct OSThread *head;
    struct OSThread *tail;
} OSThreadQueue;
typedef struct FSArchive {
    union {
        char ptr[3 + 1];
        u32 pack;
    } name;
    struct FSArchive *next;
    struct FSArchive *prev;
    OSThreadQueue sync_q;
    OSThreadQueue stat_q;
    u32 flag;
    FSFileLink list;
    u32 base;
    u32 fat;
    u32 fat_size;
    u32 fnt;
    u32 fnt_size;
    u32 fat_bak;
    u32 fnt_bak;
    void *load_mem;
    FS_ARCHIVE_READ_FUNC read_func;
    FS_ARCHIVE_WRITE_FUNC write_func;
    FS_ARCHIVE_READ_FUNC table_func;
    FS_ARCHIVE_PROC_FUNC proc;
    u32 proc_flag;
} FSArchive;
typedef struct {
    struct FSArchive *arc;
    u16 own_id;
    u16 index;
    u32 pos;
} FSDirPos;
typedef struct {
    struct FSArchive *arc;
    u32 file_id;
} FSFileID;
typedef struct {
    union {
        FSFileID file_id;
        FSDirPos dir_id;
    };
    u32 is_directory;
    u32 name_len;
    char name[127 + 1];
} FSDirEntry;
typedef struct {
    FSDirPos pos;
} FSSeekDirInfo;
typedef struct {
    FSDirEntry *p_entry;
    BOOL skip_string;
} FSReadDirInfo;
typedef struct {
    FSDirPos pos;
    const char *path;
    BOOL find_directory;
    union {
        FSFileID *file;
        FSDirPos *dir;
    } result;
} FSFindPathInfo;
typedef struct {
    u8 *buf;
    u32 buf_len;
    u16 total_len;
    u16 dir_id;
} FSGetPathInfo;
typedef struct {
    FSFileID id;
} FSOpenFileFastInfo;
typedef struct {
    u32 top;
    u32 bottom;
    u32 index;
} FSOpenFileDirectInfo;
typedef struct {
    u32 reserved;
} FSCloseFileInfo;
typedef struct {
    void *dst;
    u32 len_org;
    u32 len;
} FSReadFileInfo;
typedef struct {
    const void *src;
    u32 len_org;
    u32 len;
} FSWriteFileInfo;
typedef struct FSFile {
    FSFileLink link;
    struct FSArchive *arc;
    u32 stat;
    FSCommandType command;
    FSResult error;
    OSThreadQueue queue[1];
    union {
        struct {
            u32 own_id;
            u32 top;
            u32 bottom;
            u32 pos;
        } file;
        struct {
            FSDirPos pos;
            u32 parent;
        } dir;
    } prop;
    union {
        FSReadFileInfo readfile;
        FSWriteFileInfo writefile;
        FSSeekDirInfo seekdir;
        FSReadDirInfo readdir;
        FSFindPathInfo findpath;
        FSGetPathInfo getpath;
        FSOpenFileFastInfo openfilefast;
        FSOpenFileDirectInfo openfiledirect;
        FSCloseFileInfo closefile;
    } arg;
} FSFile;
typedef int MIProcessor;
typedef u32 FSOverlayID;
typedef void (*FSOverlayInitFunc)(void);
typedef struct {
    u32 offset;
    u32 length;
} CARDRomRegion;
typedef struct {
    u32 id;
    u8 *ram_address;
    u32 ram_size;
    u32 bss_size;
    FSOverlayInitFunc *sinit_init;
    FSOverlayInitFunc *sinit_init_end;
    u32 file_id;
    u32 compressed : 24;
    u32 flag : 8;
} FSOverlayInfoHeader;
typedef struct {
    FSOverlayInfoHeader header;
    MIProcessor target;
    CARDRomRegion file_pos;
} FSOverlayInfo;
static inline const CARDRomRegion *CARD_GetRomRegionOVT(MIProcessor target) {
    return (target == 0) ? (const CARDRomRegion *) ((const u8 *) 0x027ffe00 + 0x50)
                         : (const CARDRomRegion *) ((const u8 *) 0x027ffe00 + 0x58);
}
static inline u32 FS_GetFileImageTop(const FSFile *p_file) {
    return p_file->prop.file.top;
}
static inline u32 FS_GetLength(const FSFile *p_file) {
    return p_file->prop.file.bottom - p_file->prop.file.top;
}
extern void func_0200f350(FSFile *p_file);
extern BOOL func_0200efb8(FSFile *p_file);
extern BOOL func_0200f050(FSFile *p_file, FSFileID file_id);
extern FSFileID func_0200fcd0(const FSOverlayInfo *p_ovi);
extern BOOL func_0200fbc0(FSOverlayInfo *p_ovi, MIProcessor target, FSOverlayID id, FSArchive *p_arc, u32 offset_arm9,
                          u32 len_arm9, u32 offset_arm7, u32 len_arm7);
extern BOOL func_0200faac(FSOverlayInfo *p_ovi, MIProcessor target, FSOverlayID id);
extern void func_0200bd78(const void *src, void *dst, u32 size);
extern CARDRomRegion data_020f6464;
extern CARDRomRegion data_020f646c;
extern FSArchive data_020f6474;
BOOL func_0200faac(FSOverlayInfo *p_ovi, MIProcessor target, FSOverlayID id) {
    CARDRomRegion *const pr = (target == 0) ? &data_020f6464 : &data_020f646c;

    if (pr->offset) {
        const u32 pos = (u32) id * sizeof(FSOverlayInfoHeader);

        if (pos >= pr->length) {
            return 0;
        } else {
            func_0200bd78((const void *) (pr->offset + pos), p_ovi, sizeof(FSOverlayInfoHeader));
            p_ovi->target = target;

            {
                FSFile file[1];
                func_0200f350(file);

                if (!func_0200f050(file, func_0200fcd0(p_ovi))) {
                    return 0;
                } else {
                    p_ovi->file_pos.offset = FS_GetFileImageTop(file);
                    p_ovi->file_pos.length = FS_GetLength(file);
                    (void) func_0200efb8(file);
                }
            }
            return 1;
        }
    } else {
        const CARDRomRegion *const p_ovt9 = CARD_GetRomRegionOVT(0);
        const CARDRomRegion *const p_ovt7 = CARD_GetRomRegionOVT(1);
        return func_0200fbc0(p_ovi, target, id, &data_020f6474, p_ovt9->offset, p_ovt9->length, p_ovt7->offset,
                             p_ovt7->length);
    }
}
