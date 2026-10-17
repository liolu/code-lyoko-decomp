/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* MBi_MakeChildSendBuffer from https://github.com/ntrtwl/NitroSDK libraries/mb/src/mb_block.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
extern void func_0200bd78(const void *src, void *dest, u32 size);
extern const u16(*ctrdgi_fl_maxtime);
typedef enum MBCommType {
    MB_COMM_TYPE_DUMMY = 0,
    MB_COMM_TYPE_PARENT_SENDSTART,
    MB_COMM_TYPE_PARENT_KICKREQ,
    MB_COMM_TYPE_PARENT_DL_FILEINFO,
    MB_COMM_TYPE_PARENT_DATA,
    MB_COMM_TYPE_PARENT_BOOTREQ,
    MB_COMM_TYPE_PARENT_MEMBER_FULL,
    MB_COMM_TYPE_CHILD_FILEREQ,
    MB_COMM_TYPE_CHILD_ACCEPT_FILEINFO,
    MB_COMM_TYPE_CHILD_CONTINUE,
    MB_COMM_TYPE_CHILD_STOPREQ,
    MB_COMM_TYPE_CHILD_BOOTREQ_ACCEPTED
} MBCommType;
typedef struct {
    u8 type;
    u8 pad1[1];
    union {
        struct {
            u16 req;
            u8 reserved[((16) - 2)];
        } data;
        struct {
            u8 piece;

            u8 data[((16) - 2)];
            u8 pad2[1];
        } req_data;
    };
} MBCommChildBlockHeader;
extern u8 *func_0201e3d4(const MBCommChildBlockHeader *hdr, u8 *sendbuf);
extern struct {
    int size;
    int num;
    int bufSize;
} data_020f7b58;
u8 *func_0201e3d4(const MBCommChildBlockHeader *hdr, u8 *sendbuf) {
    u8 *pbuf = sendbuf;

    *pbuf++ = hdr->type;

    switch (hdr->type) {
        case MB_COMM_TYPE_CHILD_FILEREQ:
            *pbuf++ = hdr->req_data.piece;

            if (hdr->req_data.piece > data_020f7b58.num) {
                return 0;
            }

            func_0200bd78((void *) (hdr->req_data.data), (void *) pbuf, (u32) data_020f7b58.size);
            pbuf += data_020f7b58.size;
            break;
        case MB_COMM_TYPE_CHILD_ACCEPT_FILEINFO:
            break;
        case MB_COMM_TYPE_CHILD_CONTINUE:
            *pbuf++ = (u8) (0x00ff & hdr->data.req);
            *pbuf++ = (u8) ((0xff00 & hdr->data.req) >> 8);
            func_0200bd78((void *) (hdr->data.reserved), (void *) pbuf, (u32) data_020f7b58.size);
            pbuf += data_020f7b58.size;
            break;
        case MB_COMM_TYPE_CHILD_STOPREQ:
            break;
        case MB_COMM_TYPE_CHILD_BOOTREQ_ACCEPTED:
            break;
        default:
            return 0;
    }

    return pbuf;
}
