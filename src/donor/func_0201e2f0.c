/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* MBi_SetRecvBufferFromParent from https://github.com/ntrtwl/NitroSDK libraries/mb/src/mb_block.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
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
    u16 fid;
    u16 seqno;
} MBCommParentBlockHeader;
extern u8 *func_0201e2f0(MBCommParentBlockHeader *hdr, const u8 *recvbuf);
u8 *func_0201e2f0(MBCommParentBlockHeader *hdr, const u8 *recvbuf) {
    hdr->type = *recvbuf++;

    switch (hdr->type) {
        case MB_COMM_TYPE_PARENT_SENDSTART:
            break;
        case MB_COMM_TYPE_PARENT_KICKREQ:
            break;
        case MB_COMM_TYPE_PARENT_DL_FILEINFO:
            break;
        case MB_COMM_TYPE_PARENT_DATA:
            hdr->fid = (u16) (*recvbuf++);
            hdr->fid |= ((u16) (*recvbuf++) << 8);
            hdr->seqno = (u16) (*recvbuf++);
            hdr->seqno |= ((u16) (*recvbuf++) << 8);
            break;
        case MB_COMM_TYPE_PARENT_BOOTREQ:
            break;
        case MB_COMM_TYPE_PARENT_MEMBER_FULL:
            break;
        default:
            return 0;
    }
    return (u8 *) recvbuf;
}
