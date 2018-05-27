/*
 * :ts=4
 */

#ifndef _SMBNO_H_
#define _SMBNO_H_

/* these define the attribute byte as seen by DOS */
#define aRONLY	(1L<<0)
#define aHIDDEN	(1L<<1)
#define aSYSTEM	(1L<<2)
#define aVOLID	(1L<<3)
#define aDIR	(1L<<4)
#define aARCH	(1L<<5)

/* error classes */
#define SUCCESS	0		/* The request was successful. */
#define ERRDOS	0x01	/* Error is from the core DOS operating system set. */
#define ERRSRV	0x02	/* Error is generated by the server network file manager. */
#define ERRHRD	0x03	/* Error is an hardware error. */
#define ERRCMD	0xFF	/* Command was not in the "SMB" format. */

/* SMB X/Open error codes for the ERRdos error class */

#define ERRbadfunc				1	/* Invalid function (or system call) */
#define ERRbadfile				2	/* File not found (pathname error) */
#define ERRbadpath				3	/* Directory not found */
#define ERRnofids				4	/* Too many open files */
#define ERRnoaccess				5	/* Access denied */
#define ERRbadfid				6	/* Invalid fid */
#define ERRbadmcb				7	/* Memory control blocks destroyed */
#define ERRnomem				8	/* Out of memory */
#define ERRbadmem				9	/* Invalid memory block address */
#define ERRbadenv				10	/* Invalid environment */
#define ERRbadformat			11	/* Invalid format */
#define ERRbadaccess			12	/* Invalid open mode */
#define ERRbaddata				13	/* Invalid data (only from ioctl call) */
#define ERRres					14	/* reserved */
#define ERRbaddrive				15	/* Invalid drive */
#define ERRremcd				16	/* Attempt to delete current directory */
#define ERRdiffdevice			17	/* rename/move across different filesystems */
#define ERRnofiles				18	/* no more files found in file search */
#define ERRbadshare				32	/* Share mode on file conflict with open mode */
#define ERRlock					33	/* Lock request conflicts with existing lock */
#define ERRfilexists			80	/* File in operation already exists */
#define ERRpaused				81
#define ERRmsgoff				82
#define ERRnoroom				83
#define ERRinvalidparam			87
#define ERRtimeout				88
#define ERRnoresource			89
#define ERRtoomanyuids			90
#define ERRbaduid				91
#define ERRinvalidname			123	/* Object name collision */
#define ERRbadpipe				230	/* Named pipe invalid */
#define ERRpipebusy				231	/* All instances of pipe are busy */
#define ERRpipeclosing			232	/* named pipe close in progress */
#define ERRnotconnected			233	/* No process on other end of named pipe */
#define ERRmoredata				234	/* More data to be returned */
#define ERROR_EAS_DIDNT_FIT		275	/* Extended attributes didn't fit */
#define ERROR_EAS_NOT_SUPPORTED	282	/* Extended attributes not suppored */

/* Error codes for the ERRSRV class */

#define ERRerror		1		/* Non specific error code */
#define ERRbadpw		2		/* Bad password */
#define ERRbadtype		3		/* reserved */
#define ERRaccess		4		/* No permissions to do the requested operation */
#define ERRinvnid		5		/* tid invalid */
#define ERRinvnetname	6		/* Invalid servername */
#define ERRinvdevice	7		/* Invalid device */
#define ERRqfull		49		/* Print queue full */
#define ERRqtoobig		50		/* Queued item too big */
#define ERRqeof			51
#define ERRinvpfid		52		/* Invalid print file in smb_fid */
#define ERRsmbcmd		64		/* Unrecognised command */
#define ERRsrverror		65		/* smb server internal error */
#define ERRbadBID		66
#define ERRfilespecs	67		/* fid and pathname invalid combination */
#define ERRbadlink		68		/* reserved */
#define ERRbadpermits	69		/* Access specified for a file is not valid */
#define ERRbadpid		70		/* reserved */
#define ERRsetattrmode	71		/* attribute mode invalid */
#define ERRpaused		81		/* Message server paused */
#define ERRmsgoff		82		/* Not receiving messages */
#define ERRnoroom		83		/* No room for message */
#define ERRrmuns		87		/* too many remote usernames */
#define ERRtimeout		88		/* operation timed out */
#define ERRnoresource	89		/* No resources currently available for request. */
#define ERRtoomanyuids	90		/* too many userids */
#define ERRbaduid		91		/* bad userid */
#define ERRuseMPX		250		/* temporarily unable to use raw mode, use MPX mode */
#define ERRuseSTD		251		/* temporarily unable to use raw mode, use std.mode */
#define ERRcontMPX		252		/* resume MPX mode */
#define ERRbadPW		254
#define ERRnotifyEnumDir	1024
#define ERRaccountExpired	2239
#define ERRbadClient		2240
#define ERRbadLogonTime		2241
#define ERRpasswordExpired	2242
#define ERRnosupport		0xFFFF

/* Error codes for the ERRHRD class */

#define ERRnowrite		19		/* read only media */
#define ERRbadunit		20		/* Unknown device */
#define ERRnotready		21		/* Drive not ready */
#define ERRbadcmd		22		/* Unknown command */
#define ERRdata			23		/* Data (CRC) error */
#define ERRbadreq		24		/* Bad request structure length */
#define ERRseek			25
#define ERRbadmedia		26
#define ERRbadsector	27
#define ERRnopaper		28
#define ERRwrite		29		/* write fault */
#define ERRread			30		/* read fault */
#define ERRgeneral		31		/* General hardware failure */
#define ERRbadshare		32
#define ERRlock			33
#define ERRwrongdisk	34
#define ERRFCBunavail	35
#define ERRsharebufexc	36		/* share buffer exceeded */
#define ERRdiskfull		39

/* offsets into message for common items */
#define smb_com		8
#define smb_rcls	9
#define smb_reh		10
#define smb_err		11
#define smb_flg		13
#define smb_flg2	14
#define smb_reb		13
#define smb_tid		28
#define smb_pid		30
#define smb_uid		32
#define smb_mid		34
#define smb_wct		36
#define smb_vwv		37
#define smb_vwv0	37
#define smb_vwv1	39
#define smb_vwv2	41
#define smb_vwv3	43
#define smb_vwv4	45
#define smb_vwv5	47
#define smb_vwv6	49
#define smb_vwv7	51
#define smb_vwv8	53
#define smb_vwv9	55
#define smb_vwv10	57
#define smb_vwv11	59
#define smb_vwv12	61
#define smb_vwv13	63
#define smb_vwv14	65
#define smb_vwv15	67
#define smb_vwv16	69

/* these are the trans2 sub fields for primary requests */
#define smb_tpscnt	smb_vwv0
#define smb_tdscnt	smb_vwv1
#define smb_mprcnt	smb_vwv2
#define smb_mdrcnt	smb_vwv3
#define smb_msrcnt	smb_vwv4
#define smb_flags	smb_vwv5
#define smb_timeout	smb_vwv6
#define smb_pscnt	smb_vwv9
#define smb_psoff	smb_vwv10
#define smb_dscnt	smb_vwv11
#define smb_dsoff	smb_vwv12
#define smb_suwcnt	smb_vwv13
#define smb_setup	smb_vwv14
#define smb_setup0	smb_setup
#define smb_setup1	(smb_setup+2)
#define smb_setup2	(smb_setup+4)

/* these are for the secondary requests */
#define smb_spscnt	smb_vwv2
#define smb_spsoff	smb_vwv3
#define smb_spsdisp	smb_vwv4
#define smb_sdscnt	smb_vwv5
#define smb_sdsoff	smb_vwv6
#define smb_sdsdisp	smb_vwv7
#define smb_sfid	smb_vwv8

/* and these for responses */
#define smb_tprcnt	smb_vwv0
#define smb_tdrcnt	smb_vwv1
#define smb_prcnt	smb_vwv3
#define smb_proff	smb_vwv4
#define smb_prdisp	smb_vwv5
#define smb_drcnt	smb_vwv6
#define smb_droff	smb_vwv7
#define smb_drdisp	smb_vwv8

/* the complete */
#define SMBmkdir	0x00	/* create directory */
#define SMBrmdir	0x01	/* delete directory */
#define SMBopen		0x02	/* open file */
#define SMBcreate	0x03	/* create file */
#define SMBclose	0x04	/* close file */
#define SMBflush	0x05	/* flush file */
#define SMBunlink	0x06	/* delete file */
#define SMBmv		0x07	/* rename file */
#define SMBgetatr	0x08	/* get file attributes */
#define SMBsetatr	0x09	/* set file attributes */
#define SMBread		0x0A	/* read from file */
#define SMBwrite	0x0B	/* write to file */
#define SMBlock		0x0C	/* lock byte range */
#define SMBunlock	0x0D	/* unlock byte range */
#define SMBctemp	0x0E	/* create temporary file */
#define SMBmknew	0x0F	/* make new file */
#define SMBchkpth	0x10	/* check directory path */
#define SMBexit		0x11	/* process exit */
#define SMBlseek	0x12	/* seek */
#define SMBtcon		0x70	/* tree connect */
#define SMBtconX	0x75	/* tree connect and X */
#define SMBtdis		0x71	/* tree disconnect */
#define SMBnegprot	0x72	/* negotiate protocol */
#define SMBdskattr	0x80	/* get disk attributes */
#define SMBsearch	0x81	/* search directory */
#define SMBsplopen	0xC0	/* open print spool file */
#define SMBsplwr	0xC1	/* write to print spool file */
#define SMBsplclose	0xC2	/* close print spool file */
#define SMBsplretq	0xC3	/* return print queue */
#define SMBsends	0xD0	/* send single block message */
#define SMBsendb	0xD1	/* send broadcast message */
#define SMBfwdname	0xD2	/* forward user name */
#define SMBcancelf	0xD3	/* cancel forward */
#define SMBgetmac	0xD4	/* get machine name */
#define SMBsendstrt	0xD5	/* send start of multi-block message */
#define SMBsendend	0xD6	/* send end of multi-block message */
#define SMBsendtxt	0xD7	/* send text of multi-block message */

/* Core+ protocol */
#define SMBlockread		0x13	/* Lock a range and read */
#define SMBwriteunlock	0x14	/* Unlock a range then write */
#define SMBreadbraw		0x1a	/* read a block of data with no smb header */
#define SMBwritebraw	0x1d	/* write a block of data with no smb header */
#define SMBwritec		0x20	/* secondary write request */
#define SMBwriteclose	0x2c	/* write a file then close it */

/* dos extended protocol */
#define SMBreadBraw		0x1A	/* read block raw */
#define SMBreadBmpx		0x1B	/* read block multiplexed */
#define SMBreadBs		0x1C	/* read block (secondary response) */
#define SMBwriteBraw	0x1D	/* write block raw */
#define SMBwriteBmpx	0x1E	/* write block multiplexed */
#define SMBwriteBs		0x1F	/* write block (secondary request) */
#define SMBwriteC		0x20	/* write complete response */
#define SMBsetattrE		0x22	/* set file attributes expanded */
#define SMBgetattrE		0x23	/* get file attributes expanded */
#define SMBlockingX		0x24	/* lock/unlock byte ranges and X */
#define SMBtrans		0x25	/* transaction - name, bytes in/out */
#define SMBtranss		0x26	/* transaction (secondary request/response) */
#define SMBioctl		0x27	/* IOCTL */
#define SMBioctls		0x28	/* IOCTL  (secondary request/response) */
#define SMBcopy			0x29	/* copy */
#define SMBmove			0x2A	/* move */
#define SMBecho			0x2B	/* echo */
#define SMBopenX		0x2D	/* open and X */
#define SMBreadX		0x2E	/* read and X */
#define SMBwriteX		0x2F	/* write and X */
#define SMBsesssetupX	0x73	/* Session Set Up & X (including User Logon) */
#define SMBtconX		0x75	/* tree connect and X */
#define SMBffirst		0x82	/* find first */
#define SMBfunique		0x83	/* find unique */
#define SMBfclose		0x84	/* find close */
#define SMBinvalid		0xFE	/* invalid command */

/* Extended 2.0 protocol (LAN Manager 2.0) */
#define SMBtrans2		0x32	/* TRANS2 protocol set */
#define SMBtranss2		0x33	/* TRANS2 protocol set, secondary command */
#define SMBfindclose	0x34	/* Terminate a TRANSACT2_FINDFIRST */
#define SMBfindnclose	0x35	/* Terminate a TRANSACT2_FINDNOTIFYFIRST */
#define SMBulogoffX		0x74	/* user logoff */

/* NT LAN Manager */
#define SMBntcreateX	0xA2	/* Create or open file */

/* these are the TRANS2 sub commands */
#define TRANSACT2_OPEN				0
#define TRANSACT2_FINDFIRST			1
#define TRANSACT2_FINDNEXT			2
#define TRANSACT2_QFSINFO			3	/* TRANS2_QUERY_FS_INFORMATION */
#define TRANSACT2_SETFSINFO			4
#define TRANSACT2_QPATHINFO			5	/* TRANS2_QUERY_PATH_INFORMATION */
#define TRANSACT2_SETPATHINFO		6	/* TRANS2_SET_PATH_INFORMATION */
#define TRANSACT2_QFILEINFO			7
#define TRANSACT2_SETFILEINFO		8
#define TRANSACT2_FSCTL				9
#define TRANSACT2_IOCTL				10
#define TRANSACT2_FINDNOTIFYFIRST	11
#define TRANSACT2_FINDNOTIFYNEXT	12
#define TRANSACT2_MKDIR				13	/* TRANS2_CREATE_DIRECTORY */

/* Basic SMB file attributes, such as used by TRANSACT2_FINDFIRST
 * or SMB_COM_OPEN.
 */
#define SMB_FILE_ATTRIBUTE_NORMAL		0x0000
#define SMB_FILE_ATTRIBUTE_READONLY		0x0001
#define SMB_FILE_ATTRIBUTE_HIDDEN		0x0002
#define SMB_FILE_ATTRIBUTE_SYSTEM		0x0004
#define SMB_FILE_ATTRIBUTE_VOLUME		0x0008
#define SMB_FILE_ATTRIBUTE_DIRECTORY	0x0010
#define SMB_FILE_ATTRIBUTE_ARCHIVE		0x0020
#define SMB_SEARCH_ATTRIBUTE_READONLY	0x0100
#define SMB_SEARCH_ATTRIBUTE_HIDDEN		0x0200
#define SMB_SEARCH_ATTRIBUTE_SYSTEM		0x0400

/* Extended file attributes */
#define ATTR_READONLY			0x00000001
#define ATTR_HIDDEN				0x00000002
#define ATTR_SYSTEM				0x00000004
#define ATTR_DIRECTORY			0x00000010
#define ATTR_ARCHIVE			0x00000020
#define ATTR_NORMAL				0x00000080
#define ATTR_TEMPORARY			0x00000100
#define ATTR_POSIX_SEMANTICS	0x01000000
#define ATTR_SEQUENTIAL_SCAN	0x08000000
#define ATTR_RANDOM_ACCESS		0x10000000
#define ATTR_NO_BUFFERING		0x20000000
#define ATTR_WRITE_THROUGH		0x80000000

/* These are used by SMBsesssetupX */
#define NEGOTIATE_USER_SECURITY 0x01	/* If set, the server supports
										   only user level access control.
										   If clear, the server supports
										   only share level access
										   control. */

#define NEGOTIATE_ENCRYPT_PASSWORDS 0x02	/* If set, the server supports
											   challenge/response
											   authentication. If clear,
											   the server supports only
											   plaintext password
											   authentication. */


#define CAP_RAW_MODE 0x00000001	/* The server supports SMB_COM_WRITE_RAW
								 * and SMB_COM_READ_RAW requests.
								 */

#define CAP_LARGE_READX 0x00004000	/* The server permits SMB_COM_READ_ANDX
									 * to read up to 65535 bytes.
									 */

#define CAP_LARGE_WRITEX 0x00008000	/* The server permits SMB_COM_WRITE_ANDX
									 * to write up to 65535 bytes.
									 */

#define CAP_LARGE_FILES			0x00000008
#define CAP_NT_FIND				0x00000200
#define CAP_UNIX				0x00800000

/* These are used by SMBntcreateX */
#define FILE_READ_DATA			0x00000001
#define FILE_WRITE_DATA			0x00000002
#define FILE_READ_ATTRIBUTES	0x00000080
#define FILE_WRITE_ATTRIBUTES	0x00000100
#define FILE_DELETE				0x00001000
#define GENERIC_WRITE			0x40000000
#define GENERIC_READ			0x80000000

#define FILE_SHARE_READ			0x00000001
#define FILE_SHARE_WRITE		0x00000002
#define FILE_SHARE_DELETE		0x00000004
#define FILE_NON_DIRECTORY_FILE	0x00000040
#define FILE_RANDOM_ACCESS		0x00000800

#define SEC_ANONYMOUS			0x00000000
#define SEC_IDENTIFY			0x00000001

#define FILE_OPEN				0x00000001
#define FILE_CREATE				0x00000002
#define FILE_OVERWRITE_IF		0x00000005

#define NT_CREATE_REQUEST_OPBATCH 0x00000004

/* Directory entry formats supported by TRANSACT2_FINDFIRST/TRANSACT2_FINDNEXT */
#define SMB_INFO_STANDARD				0x0001	/* LAN Manager 2.0 */
#define SMB_FILE_BOTH_DIRECTORY_INFO	0x0104	/* NT LAN Manager */

/* Flags used by TRANSACT2_FINDFIRST */
#define SMB_FIND_CLOSE_AFTER_REQUEST	0x0001	/* Close the request after this search */
#define SMB_FIND_CLOSE_AT_EOS			0x0002	/* Close search when end of search is reached */
#define SMB_FIND_RETURN_RESUME_KEYS		0x0004	/* Return resume keys for each entry found */
#define SMB_FIND_CONTINUE_FROM_LAST		0x0008	/* Continue search from previous ending place */
#define SMB_FIND_WITH_BACKUP_INTENT		0x0010	/* Find with backup intent */

/* File system information formats supported by TRANSACT2_QFSINFO (actually,
 * we only need this one).
 */
#define SMB_QUERY_FS_SIZE_INFO 0x0103

/* Path information formats supported by TRANSACT2_QPATHINFO and TRANSACT2_QFILEINFO. */
#define SMB_QUERY_FILE_ALL_INFO 0x0107

/* Set information formats supported by TRANSACT2_SETFILEINFO. */
#define SMB_SET_FILE_BASIC_INFO			0x0101	/* NT LAN Manager */
#define SMB_SET_FILE_END_OF_FILE_INFO	0x0104	/* NT LAN Manager */

/* These are used with SMBopen */
#define SMB_OPEN_ACCESS_READ_ONLY			0x0000
#define SMB_OPEN_ACCESS_WRITE_ONLY			0x0001
#define SMB_OPEN_ACCESS_READ_WRITE			0x0002
#define SMB_OPEN_ACCESS_EXECUTE				0x0003
#define SMB_OPEN_SHARE_COMPATIBILITY_MODE	0x0000
#define SMB_OPEN_SHARE_DENY_EVERYTHING		0x0010
#define SMB_OPEN_SHARE_DENY_WRITE			0x0020
#define SMB_OPEN_SHARE_DENY_READ_EXECUTE	0x0030
#define SMB_OPEN_SHARE_DENY_NOTHING			0x0040
#define SMB_OPEN_LOCALITY_UNKNOWN			0x0000
#define SMB_OPEN_LOCALITY_SEQUENTIAL		0x0100
#define SMB_OPEN_LOCALITY_RANDOM			0x0200
#define SMB_OPEN_LOCALITY_MIXED				0x0300
#define SMB_OPEN_CACHE_DISABLED				0x1000
#define SMB_OPEN_WRITE_THROUGH_ENABLED		0x4000

#endif /* _SMBNO_H_ */
