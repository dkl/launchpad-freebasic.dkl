// Compilation of fbc-1.01.0/src/compiler/fbc.bas started at 14:16:41 on 02-28-2015

typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
struct $7TLISTTB;
struct $7TLISTTB {
	struct $7TLISTTB* NEXT;
	void* NODETB;
	int64 NODES;
};
#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]
__FB_STATIC_ASSERT( sizeof( struct $7TLISTTB ) == 24 );
struct $9TLISTNODE;
struct $9TLISTNODE {
	struct $9TLISTNODE* PREV;
	struct $9TLISTNODE* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $9TLISTNODE ) == 16 );
typedef int64 $10LIST_FLAGS;
struct $5TLIST {
	struct $7TLISTTB* TBHEAD;
	struct $7TLISTTB* TBTAIL;
	int64 NODES;
	int64 NODELEN;
	struct $9TLISTNODE* FHEAD;
	void* HEAD;
	void* TAIL;
	$10LIST_FLAGS FLAGS;
};
__FB_STATIC_ASSERT( sizeof( struct $5TLIST ) == 64 );
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
struct $9FBCIOFILE {
	FBSTRING SRCFILE;
	FBSTRING* OBJFILE;
	int64 IS_CUSTOM_OBJFILE;
};
__FB_STATIC_ASSERT( sizeof( struct $9FBCIOFILE ) == 40 );
struct $8HASHITEM;
struct $8HASHITEM {
	uint8* NAME;
	void* DATA;
	struct $8HASHITEM* PREV;
	struct $8HASHITEM* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $8HASHITEM ) == 32 );
struct $8HASHLIST {
	struct $8HASHITEM* HEAD;
	struct $8HASHITEM* TAIL;
};
__FB_STATIC_ASSERT( sizeof( struct $8HASHLIST ) == 16 );
struct $5THASH {
	struct $8HASHLIST* LIST;
	int64 NODES;
	int64 DELSTR;
};
__FB_STATIC_ASSERT( sizeof( struct $5THASH ) == 24 );
struct $7TSTRSET {
	struct $5TLIST LIST;
	struct $5THASH HASH;
};
__FB_STATIC_ASSERT( sizeof( struct $7TSTRSET ) == 88 );
struct $10FBC_EXTOPT {
	uint8 GAS[128];
	uint8 LD[128];
	uint8 GCC[128];
};
__FB_STATIC_ASSERT( sizeof( struct $10FBC_EXTOPT ) == 384 );
typedef int64 $7FB_LANG;
struct $10FBC_OBJINF {
	$7FB_LANG LANG;
	int64 MT;
};
__FB_STATIC_ASSERT( sizeof( struct $10FBC_OBJINF ) == 16 );
struct $6FBCCTX {
	int64 OPTID;
	struct $9FBCIOFILE* LASTMODULE;
	FBSTRING OBJFILE;
	int64 BACKEND;
	int64 CPUTYPE;
	int64 CPUTYPE_IS_NATIVE;
	int64 ASMSYNTAX;
	int64 EMITASMONLY;
	int64 KEEPASM;
	int64 EMITFINALASMONLY;
	int64 KEEPFINALASM;
	int64 KEEPOBJ;
	int64 VERBOSE;
	int64 SHOWVERSION;
	int64 SHOWHELP;
	int64 PRINT;
	struct $5TLIST MODULES;
	struct $5TLIST RCS;
	struct $9FBCIOFILE XPM;
	struct $5TLIST TEMPS;
	struct $5TLIST OBJLIST;
	struct $5TLIST LIBFILES;
	struct $7TSTRSET LIBS;
	struct $7TSTRSET LIBPATHS;
	struct $7TSTRSET FINALLIBS;
	struct $7TSTRSET FINALLIBPATHS;
	uint8 OUTNAME[261];
	uint8 MAINNAME[261];
	int64 MAINSET;
	uint8 MAPFILE[261];
	uint8 SUBSYSTEM[129];
	struct $10FBC_EXTOPT EXTOPT;
	uint8 TARGET[129];
	uint8 TARGETPREFIX[129];
	uint8 XBE_TITLE[129];
	int64 NODEFLIBS;
	int64 STATICLINK;
	uint8 PREFIX[261];
	uint8 BINPATH[261];
	uint8 INCPATH[261];
	uint8 LIBPATH[261];
	struct $10FBC_OBJINF OBJINF;
};
__FB_STATIC_ASSERT( sizeof( struct $6FBCCTX ) == 3640 );
void* fb_ErrorThrowAt( int32, uint8*, void*, void* );
int32 fb_FileOpen( FBSTRING*, uint32, uint32, uint32, int32, int32 );
int32 fb_FileOpenPipe( FBSTRING*, uint32, uint32, uint32, int32, int32, uint8* );
int32 fb_FileClose( int32 );
int32 fb_FilePutLarge( int32, int64, void*, uint64 );
int32 fb_FileLineInput( int32, void*, int64, int32 );
int32 fb_FileInput( int32 );
int32 fb_InputString( void*, int64, int32 );
int32 rename( uint8*, uint8* );
int32 fb_FileFree( void );
int32 fb_FileEof( int32 );
int32 fb_FileKill( FBSTRING* );
void fb_PrintVoid( int32, int32 );
void fb_PrintString( int32, FBSTRING*, int32 );
FBSTRING* fb_StrInit( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
int32 fb_StrCompare( void*, int64, void*, int64 );
FBSTRING* fb_StrConcatAssign( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAllocTempResult( FBSTRING* );
FBSTRING* fb_StrAllocTempDescZ( uint8* );
FBSTRING* fb_StrAllocTempDescZEx( uint8*, int64 );
FBSTRING* fb_LongintToStr( int64 );
int64 fb_StrLen( void*, int64 );
int64 fb_StrInstr( int64, FBSTRING*, FBSTRING* );
FBSTRING* fb_TRIM( FBSTRING* );
int32 fb_VALINT( FBSTRING* );
FBSTRING* fb_LEFT( FBSTRING*, int64 );
FBSTRING* fb_RIGHT( FBSTRING*, int64 );
FBSTRING* fb_StrLcase2( FBSTRING*, int32 );
FBSTRING* fb_StrUcase2( FBSTRING*, int32 );
void fb_Init( int32, uint8**, int32 );
void fb_InitSignals( void );
void fb_End( int32 );
FBSTRING* fb_ExePath( void );
int32 fb_Shell( FBSTRING* );
int32 fb_Exec( FBSTRING*, FBSTRING* );
FBSTRING* fb_GetEnviron( FBSTRING* );
void LISTINIT( struct $5TLIST*, int64, int64, $10LIST_FLAGS );
void* LISTNEWNODE( struct $5TLIST* );
void* LISTGETHEAD( struct $5TLIST* );
void* LISTGETNEXT( void* );
void STRLISTAPPEND( struct $5TLIST*, FBSTRING* );
void STRLISTINIT( struct $5TLIST*, int64 );
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void STRSETADD( struct $7TSTRSET*, FBSTRING*, int64 );
void STRSETCOPY( struct $7TSTRSET*, struct $7TSTRSET* );
void STRSETINIT( struct $7TSTRSET*, int64 );
int64 ERRGETCOUNT( void );
typedef int64 $12FB_ERRMSGOPT;
void ERRREPORTEX( int64, uint8*, int64, $12FB_ERRMSGOPT, uint8* );
void ERRREPORTWARNEX( int64, uint8*, int64, $12FB_ERRMSGOPT );
void FBINIT( int64, int64 );
void FBEND( void );
void FBCOMPILE( uint8*, uint8*, FBSTRING*, int64 );
int64 FBSHOULDRESTART( void );
void FBGLOBALINIT( void );
void FBADDINCLUDEPATH( FBSTRING* );
void FBADDPREDEFINE( FBSTRING* );
void FBADDPREINCLUDE( FBSTRING* );
void FBSETOPTION( int64, int64 );
int64 FBGETOPTION( int64 );
void FBSETLIBS( struct $7TSTRSET*, struct $7TSTRSET* );
void FBGETLIBS( struct $7TSTRSET*, struct $7TSTRSET* );
FBSTRING* FBGETTARGETID( void );
FBSTRING* FBGETHOSTID( void );
int64 FBIDENTIFYOS( FBSTRING* );
int64 FBCPUTYPEFROMCPUFAMILYID( FBSTRING* );
uint8* FBGETGCCARCH( void );
uint8* FBGETFBCARCH( void );
int64 FBGETBITS( void );
int64 FBGETHOSTBITS( void );
int64 FBGETCPUFAMILY( void );
int64 FBIDENTIFYFBCARCH( FBSTRING* );
int64 FBISCROSSCOMP( void );
$7FB_LANG FBGETLANGID( uint8* );
int64 HFILEEXISTS( uint8* );
FBSTRING* HSTRIPEXT( FBSTRING* );
FBSTRING* HSTRIPPATH( uint8* );
FBSTRING* HSTRIPFILENAME( uint8* );
FBSTRING* HGETFILEEXT( uint8* );
void HREPLACESLASH( uint8*, int64 );
FBSTRING* PATHSTRIPDIV( FBSTRING* );
FBSTRING* STRUNQUOTE( FBSTRING* );
FBSTRING* HREPLACE( uint8*, uint8*, uint8* );
void OBJINFOREADOBJ( FBSTRING* );
void OBJINFOREADLIBFILE( FBSTRING* );
void OBJINFOREADLIB( FBSTRING*, struct $5TLIST* );
int64 OBJINFOREADNEXT( FBSTRING* );
uint8* OBJINFOGETFILENAME( void );
void OBJINFOREADEND( void );
int64 fb_FileLen( uint8* );
static void _ZN9FBCIOFILEC1Ev( struct $9FBCIOFILE* );
static void _ZN9FBCIOFILEaSERKS_( struct $9FBCIOFILE*, struct $9FBCIOFILE* );
static void _ZN9FBCIOFILED1Ev( struct $9FBCIOFILE* );
static void _ZN6FBCCTXC1Ev( struct $6FBCCTX* );
static void _ZN6FBCCTXaSERKS_( struct $6FBCCTX*, struct $6FBCCTX* );
static void _ZN6FBCCTXD1Ev( struct $6FBCCTX* );
void FBCFINDBIN( int64, FBSTRING*, int64* );
int64 FBCRUNBIN( uint8*, int64, FBSTRING* );
static void FBCINIT( void );
static void HSETOUTNAME( void );
static void FBCEND( int64 );
static void FBCADDTEMP( FBSTRING* );
static FBSTRING* FBCADDOBJ( FBSTRING* );
static FBSTRING* FBCBUILDPATHTOLIBFILE( uint8* );
static FBSTRING* FBCFINDLIBFILE( uint8* );
static void FBCADDDEFLIBPATH( FBSTRING* );
static void FBCADDLIBPATHFOR( uint8* );
static int64 CLEARDEFLIST( FBSTRING* );
static int64 HGENERATEEMPTYDEFFILE( FBSTRING* );
static int64 MAKEIMPLIB( FBSTRING*, FBSTRING* );
static FBSTRING* HFINDLIB( uint8* );
static int64 HLINKFILES( void );
static void HREADOBJINFO( void );
static void HCOLLECTOBJINFO( void );
static void HFATALINVALIDOPTION( FBSTRING* );
static void HCHECKWAITINGOBJFILE( void );
static void HSETIOFILE( struct $9FBCIOFILE*, FBSTRING*, int64 );
static void HADDBAS( FBSTRING* );
static void HPARSEGNUTRIPLET( FBSTRING*, int64, int64*, int64* );
static void HPARSETARGETARG( FBSTRING*, int64*, int64*, int64* );
static void HANDLEOPT( int64, FBSTRING* );
static int64 PARSEOPTION( uint8* );
static void PARSEARGSFROMFILE( FBSTRING* );
static void HANDLEARG( FBSTRING* );
static int64 HTARGETNEEDSPIC( void );
static void HPARSEARGS( int64, uint8** );
static void FBCINIT2( void );
static FBSTRING* HGETASMNAME( struct $9FBCIOFILE*, int64 );
static void HCOMPILEBAS( struct $9FBCIOFILE*, int64, int64 );
static void HCOMPILEMODULES( void );
static int64 HPARSEXPM( FBSTRING*, FBSTRING* );
static int64 HCOMPILEXPM( void );
static int64 HCOMPILESTAGE2MODULE( struct $9FBCIOFILE* );
static void HCOMPILESTAGE2MODULES( void );
static int64 HASSEMBLEMODULE( struct $9FBCIOFILE* );
static void HASSEMBLEMODULES( void );
static int64 HASSEMBLERC( struct $9FBCIOFILE* );
static void HASSEMBLERCS( void );
static void HASSEMBLEXPM( void );
static int64 HCOMPILEFBCTINF( void );
static int64 HARCHIVEFILES( void );
static void HSETDEFAULTLIBPATHS( void );
static void FBCADDDEFLIB( uint8* );
static FBSTRING* HGETFBLIBNAMESUFFIX( void );
static void HADDDEFAULTLIBS( void );
static void HPRINTOPTIONS( void );
static void HPRINTVERSION( void );
static void _GLOBAL__I( void ) __attribute__(( constructor ));
static void _GLOBAL__D( void ) __attribute__(( destructor ));
static uint8 TOOLNAMES$[9][8] = { "as", "ar", "ld", "gcc", "llc", "dlltool", "GoRC", "windres", "cxbe" };
static struct $6FBCCTX FBC$;
struct $11FBGNUOSINFO {
	uint8* GNUID;
	int64 OS;
};
__FB_STATIC_ASSERT( sizeof( struct $11FBGNUOSINFO ) == 16 );
static struct $11FBGNUOSINFO GNUOSMAP$[9] = { { (uint8*)"linux", 2ll }, { (uint8*)"mingw", 0ll }, { (uint8*)"djgpp", 3ll }, { (uint8*)"cygwin", 1ll }, { (uint8*)"darwin", 7ll }, { (uint8*)"freebsd", 5ll }, { (uint8*)"netbsd", 8ll }, { (uint8*)"openbsd", 6ll }, { (uint8*)"xbox", 4ll } };
struct $13FBGNUARCHINFO {
	uint8* GNUID;
	int64 CPUTYPE;
};
__FB_STATIC_ASSERT( sizeof( struct $13FBGNUARCHINFO ) == 16 );
static struct $13FBGNUARCHINFO GNUARCHMAP$[11] = { { (uint8*)"i386", 0ll }, { (uint8*)"i486", 1ll }, { (uint8*)"i586", 2ll }, { (uint8*)"i686", 3ll }, { (uint8*)"x86", 1ll }, { (uint8*)"x86_64", 13ll }, { (uint8*)"amd64", 13ll }, { (uint8*)"armv6", 14ll }, { (uint8*)"armv7a", 15ll }, { (uint8*)"arm", 15ll }, { (uint8*)"aarch64", 16ll } };
struct $12FBOSARCHINFO {
	uint8* TARGETID;
	int64 OS;
	int64 CPUTYPE;
};
__FB_STATIC_ASSERT( sizeof( struct $12FBOSARCHINFO ) == 24 );
static struct $12FBOSARCHINFO FBOSARCHMAP$[10] = { { (uint8*)"win32", 0ll, 1ll }, { (uint8*)"win64", 0ll, 13ll }, { (uint8*)"dos", 3ll, 1ll }, { (uint8*)"xbox", 4ll, 1ll }, { (uint8*)"cygwin", 1ll, 13ll }, { (uint8*)"darwin", 7ll, 13ll }, { (uint8*)"freebsd", 5ll, 13ll }, { (uint8*)"linux", 2ll, 13ll }, { (uint8*)"netbsd", 8ll, 13ll }, { (uint8*)"openbsd", 6ll, 13ll } };
static int64 OPTION_TAKES_ARGUMENT$[56] = { -1ll, -1ll, -1ll, -1ll, 0ll, 0ll, -1ll, 0ll, 0ll, 0ll, 0ll, 0ll, 0ll, 0ll, -1ll, -1ll, 0ll, -1ll, 0ll, -1ll, -1ll, -1ll, -1ll, 0ll, -1ll, -1ll, -1ll, 0ll, 0ll, 0ll, -1ll, -1ll, -1ll, 0ll, 0ll, -1ll, -1ll, 0ll, 0ll, 0ll, 0ll, 0ll, -1ll, 0ll, -1ll, -1ll, -1ll, 0ll, -1ll, 0ll, -1ll, -1ll, -1ll, -1ll, -1ll, -1ll };

void FBCFINDBIN( int64 TOOL$1, FBSTRING* PATH$1, int64* RELYING_ON_SYSTEM$1 )
{
	label$100:;
	static int64 LASTTOOL$1 = -1ll;
	static int64 LAST_RELYING_ON_SYSTEM$1;
	static FBSTRING LASTPATH$1;
	if( LASTTOOL$1 != TOOL$1 ) goto label$103;
	{
		FBSTRING* vr$1 = fb_StrAssign( (void*)PATH$1, -1ll, (void*)&LASTPATH$1, -1ll, 0 );
		*RELYING_ON_SYSTEM$1 = LAST_RELYING_ON_SYSTEM$1;
		goto label$101;
	}
	label$103:;
	label$102:;
	*RELYING_ON_SYSTEM$1 = 0ll;
	FBSTRING* vr$6 = fb_StrAllocTempDescZ( (uint8*)((uint8*)TOOLNAMES$ + (TOOL$1 << 3ll)) );
	FBSTRING* vr$7 = fb_StrUcase2( vr$6, 0 );
	FBSTRING* vr$8 = fb_GetEnviron( vr$7 );
	FBSTRING* vr$9 = fb_StrAssign( (void*)PATH$1, -1ll, (void*)vr$8, -1ll, 0 );
	int64 vr$10 = fb_StrLen( (void*)PATH$1, -1ll );
	if( vr$10 != 0ll ) goto label$105;
	{
		FBSTRING TMP$61$2;
		FBSTRING TMP$62$2;
		__builtin_memset( &TMP$61$2, 0, 24ll );
		FBSTRING* vr$17 = fb_StrConcat( &TMP$61$2, (void*)((uint8*)&FBC$ + 2837ll), 261ll, (void*)((uint8*)TOOLNAMES$ + (TOOL$1 << 3ll)), 8ll );
		__builtin_memset( &TMP$62$2, 0, 24ll );
		FBSTRING* vr$20 = fb_StrConcat( &TMP$62$2, (void*)vr$17, -1ll, (void*)"", 1ll );
		FBSTRING* vr$21 = fb_StrAssign( (void*)PATH$1, -1ll, (void*)vr$20, -1ll, 0 );
		int64 vr$23 = HFILEEXISTS( *(uint8**)PATH$1 );
		if( vr$23 != 0ll ) goto label$107;
		{
			FBSTRING TMP$63$3;
			FBSTRING TMP$64$3;
			__builtin_memset( &TMP$63$3, 0, 24ll );
			FBSTRING* vr$30 = fb_StrConcat( &TMP$63$3, (void*)((uint8*)&FBC$ + 2295ll), 129ll, (void*)((uint8*)TOOLNAMES$ + (TOOL$1 << 3ll)), 8ll );
			__builtin_memset( &TMP$64$3, 0, 24ll );
			FBSTRING* vr$33 = fb_StrConcat( &TMP$64$3, (void*)vr$30, -1ll, (void*)"", 1ll );
			FBSTRING* vr$34 = fb_StrAssign( (void*)PATH$1, -1ll, (void*)vr$33, -1ll, 0 );
			*RELYING_ON_SYSTEM$1 = -1ll;
		}
		label$107:;
		label$106:;
	}
	label$105:;
	label$104:;
	LASTTOOL$1 = TOOL$1;
	FBSTRING* vr$36 = fb_StrAssign( (void*)&LASTPATH$1, -1ll, (void*)PATH$1, -1ll, 0 );
	LAST_RELYING_ON_SYSTEM$1 = *RELYING_ON_SYSTEM$1;
	label$101:;
}

int64 FBCRUNBIN( uint8* ACTION$1, int64 TOOL$1, FBSTRING* LN$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$108:;
	int64 RESULT$1;
	int64 RELYING_ON_SYSTEM$1;
	FBSTRING PATH$1;
	__builtin_memset( &PATH$1, 0, 24ll );
	FBCFINDBIN( TOOL$1, &PATH$1, &RELYING_ON_SYSTEM$1 );
	if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$111;
	{
		FBSTRING TMP$66$2;
		FBSTRING TMP$68$2;
		FBSTRING TMP$69$2;
		__builtin_memset( &TMP$66$2, 0, 24ll );
		FBSTRING* vr$7 = fb_StrConcat( &TMP$66$2, (void*)ACTION$1, 0ll, (void*)": ", 3ll );
		fb_PrintString( 0, vr$7, 2 );
		__builtin_memset( &TMP$68$2, 0, 24ll );
		FBSTRING* vr$11 = fb_StrConcat( &TMP$68$2, (void*)&PATH$1, -1ll, (void*)" ", 2ll );
		__builtin_memset( &TMP$69$2, 0, 24ll );
		FBSTRING* vr$14 = fb_StrConcat( &TMP$69$2, (void*)vr$11, -1ll, (void*)LN$1, -1ll );
		fb_PrintString( 0, vr$14, 1 );
	}
	label$111:;
	label$110:;
	int32 vr$16 = fb_Exec( &PATH$1, LN$1 );
	RESULT$1 = (int64)vr$16;
	if( RESULT$1 != 0ll ) goto label$113;
	{
		fb$result$1 = -1ll;
	}
	goto label$112;
	label$113:;
	if( RESULT$1 >= 0ll ) goto label$114;
	{
		ERRREPORTEX( 90ll, *(uint8**)&PATH$1, -1ll, 6ll, (uint8*)0ull );
	}
	goto label$112;
	label$114:;
	{
		if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$116;
		{
			FBSTRING TMP$72$3;
			FBSTRING TMP$73$3;
			FBSTRING TMP$74$3;
			FBSTRING TMP$75$3;
			FBSTRING* vr$21 = fb_LongintToStr( RESULT$1 );
			__builtin_memset( &TMP$72$3, 0, 24ll );
			FBSTRING* vr$25 = fb_StrConcat( &TMP$72$3, (void*)ACTION$1, 0ll, (void*)" failed: '", 11ll );
			__builtin_memset( &TMP$73$3, 0, 24ll );
			FBSTRING* vr$28 = fb_StrConcat( &TMP$73$3, (void*)vr$25, -1ll, (void*)&PATH$1, -1ll );
			__builtin_memset( &TMP$74$3, 0, 24ll );
			FBSTRING* vr$31 = fb_StrConcat( &TMP$74$3, (void*)vr$28, -1ll, (void*)"' terminated with exit code ", 29ll );
			__builtin_memset( &TMP$75$3, 0, 24ll );
			FBSTRING* vr$34 = fb_StrConcat( &TMP$75$3, (void*)vr$31, -1ll, (void*)vr$21, -1ll );
			fb_PrintString( 0, vr$34, 1 );
		}
		label$116:;
		label$115:;
	}
	label$112:;
	fb_StrDelete( &PATH$1 );
	label$109:;
	return fb$result$1;
}

int32 main( int32 __FB_ARGC__$0, char** __FB_ARGV__$0 )
{
	int32 fb$result$0;
	__builtin_memset( &fb$result$0, 0, 4ll );
	fb_Init( __FB_ARGC__$0, (uint8**)__FB_ARGV__$0, 0 );
	fb_InitSignals(  );
	label$0:;
	FBCINIT(  );
	if( (int64)__FB_ARGC__$0 != 1ll ) goto label$1051;
	{
		HPRINTOPTIONS(  );
		FBCEND( 1ll );
	}
	label$1051:;
	label$1050:;
	HPARSEARGS( (int64)__FB_ARGC__$0, (uint8**)__FB_ARGV__$0 );
	if( *(int64*)((uint8*)&FBC$ + 120ll) == 0ll ) goto label$1053;
	{
		HPRINTVERSION(  );
		FBCEND( 0ll );
	}
	label$1053:;
	label$1052:;
	if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$1055;
	{
		HPRINTVERSION(  );
	}
	label$1055:;
	label$1054:;
	if( *(int64*)((uint8*)&FBC$ + 128ll) == 0ll ) goto label$1057;
	{
		HPRINTOPTIONS(  );
		FBCEND( 1ll );
	}
	label$1057:;
	label$1056:;
	void* vr$8 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 144ll) );
	void* vr$11 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 376ll) );
	void* vr$15 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 504ll) );
	void* vr$19 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 440ll) );
	if( ((((int64)-(vr$8 == (void*)0ull) & (int64)-(vr$11 == (void*)0ull)) & (int64)-(vr$15 == (void*)0ull)) & (int64)-(vr$19 == (void*)0ull)) == 0ll ) goto label$1059;
	{
		{
			int64 TMP$627$2;
			TMP$627$2 = *(int64*)((uint8*)&FBC$ + 136ll);
			if( TMP$627$2 == 0ll ) goto label$1062;
			label$1063:;
			if( TMP$627$2 == 1ll ) goto label$1062;
			label$1064:;
			if( TMP$627$2 != 2ll ) goto label$1061;
			label$1062:;
			{
				FBCEND( 0ll );
			}
			label$1061:;
			label$1060:;
		}
		HPRINTOPTIONS(  );
		FBCEND( 1ll );
	}
	label$1059:;
	label$1058:;
	FBCINIT2(  );
	HCOMPILEMODULES(  );
	int64 vr$26 = HCOMPILEXPM(  );
	if( vr$26 != 0ll ) goto label$1066;
	{
		FBCEND( 1ll );
	}
	label$1066:;
	label$1065:;
	if( *(int64*)((uint8*)&FBC$ + 72ll) == 0ll ) goto label$1068;
	{
		FBCEND( 0ll );
	}
	label$1068:;
	label$1067:;
	int64 vr$29 = FBGETOPTION( 2ll );
	if( vr$29 == 0ll ) goto label$1070;
	{
		HCOMPILESTAGE2MODULES(  );
	}
	label$1070:;
	label$1069:;
	if( *(int64*)((uint8*)&FBC$ + 88ll) == 0ll ) goto label$1072;
	{
		FBCEND( 0ll );
	}
	label$1072:;
	label$1071:;
	HASSEMBLEMODULES(  );
	HASSEMBLERCS(  );
	HASSEMBLEXPM(  );
	int64 vr$32 = FBGETOPTION( 0ll );
	if( vr$32 != 3ll ) goto label$1074;
	{
		FBCEND( 0ll );
	}
	label$1074:;
	label$1073:;
	HSETDEFAULTLIBPATHS(  );
	int64 vr$34 = FBISCROSSCOMP(  );
	if( vr$34 != 0ll ) goto label$1076;
	{
		HCOLLECTOBJINFO(  );
	}
	label$1076:;
	label$1075:;
	int64 vr$36 = FBGETOPTION( 0ll );
	if( vr$36 != 1ll ) goto label$1078;
	{
		int64 vr$38 = HARCHIVEFILES(  );
		if( vr$38 != 0ll ) goto label$1080;
		{
			FBCEND( 1ll );
		}
		label$1080:;
		label$1079:;
		FBCEND( 0ll );
	}
	label$1078:;
	label$1077:;
	if( *(int64*)((uint8*)&FBC$ + 2560ll) != 0ll ) goto label$1082;
	{
		HADDDEFAULTLIBS(  );
	}
	label$1082:;
	label$1081:;
	int64 vr$41 = HLINKFILES(  );
	if( vr$41 != 0ll ) goto label$1084;
	{
		FBCEND( 1ll );
	}
	label$1084:;
	label$1083:;
	FBCEND( 0ll );
	label$1:;
	fb_End( 0 );
	return fb$result$0;
}

static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM* THIS$1, struct $11TSTRSETITEM* __FB_RHS__$1 )
{
	label$4:;
	FBSTRING* vr$4 = fb_StrAssign( (void*)THIS$1, -1ll, (void*)__FB_RHS__$1, -1ll, 0 );
	*(int64*)((uint8*)THIS$1 + 24ll) = *(int64*)((uint8*)__FB_RHS__$1 + 24ll);
	label$5:;
}

static void _ZN9FBCIOFILEC1Ev( struct $9FBCIOFILE* THIS$1 )
{
	__builtin_memset( (FBSTRING*)THIS$1, 0, 24ll );
	__builtin_memset( (FBSTRING**)((uint8*)THIS$1 + 24ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 32ll), 0, 8ll );
	label$10:;
	label$11:;
}

static void _ZN9FBCIOFILEaSERKS_( struct $9FBCIOFILE* THIS$1, struct $9FBCIOFILE* __FB_RHS__$1 )
{
	label$12:;
	FBSTRING* vr$4 = fb_StrAssign( (void*)THIS$1, -1ll, (void*)__FB_RHS__$1, -1ll, 0 );
	*(FBSTRING**)((uint8*)THIS$1 + 24ll) = *(FBSTRING**)((uint8*)__FB_RHS__$1 + 24ll);
	*(int64*)((uint8*)THIS$1 + 32ll) = *(int64*)((uint8*)__FB_RHS__$1 + 32ll);
	label$13:;
}

static void _ZN9FBCIOFILED1Ev( struct $9FBCIOFILE* THIS$1 )
{
	label$16:;
	label$17:;
	fb_StrDelete( (FBSTRING*)THIS$1 );
}

static void _ZN6FBCCTXC1Ev( struct $6FBCCTX* THIS$1 )
{
	__builtin_memset( (int64*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $9FBCIOFILE**)((uint8*)THIS$1 + 8ll), 0, 8ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 16ll), 0, 24ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 40ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 48ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 56ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 64ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 72ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 80ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 88ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 96ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 104ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 112ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 120ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 128ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 136ll), 0, 8ll );
	__builtin_memset( (struct $5TLIST*)((uint8*)THIS$1 + 144ll), 0, 64ll );
	__builtin_memset( (struct $5TLIST*)((uint8*)THIS$1 + 208ll), 0, 64ll );
	_ZN9FBCIOFILEC1Ev( (struct $9FBCIOFILE*)((uint8*)THIS$1 + 272ll) );
	__builtin_memset( (struct $5TLIST*)((uint8*)THIS$1 + 312ll), 0, 64ll );
	__builtin_memset( (struct $5TLIST*)((uint8*)THIS$1 + 376ll), 0, 64ll );
	__builtin_memset( (struct $5TLIST*)((uint8*)THIS$1 + 440ll), 0, 64ll );
	__builtin_memset( (struct $7TSTRSET*)((uint8*)THIS$1 + 504ll), 0, 88ll );
	__builtin_memset( (struct $7TSTRSET*)((uint8*)THIS$1 + 592ll), 0, 88ll );
	__builtin_memset( (struct $7TSTRSET*)((uint8*)THIS$1 + 680ll), 0, 88ll );
	__builtin_memset( (struct $7TSTRSET*)((uint8*)THIS$1 + 768ll), 0, 88ll );
	__builtin_memset( (uint8*)((uint8*)THIS$1 + 856ll), 0, 261ll );
	__builtin_memset( (uint8*)((uint8*)THIS$1 + 1117ll), 0, 261ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 1384ll), 0, 8ll );
	__builtin_memset( (uint8*)((uint8*)THIS$1 + 1392ll), 0, 261ll );
	__builtin_memset( (uint8*)((uint8*)THIS$1 + 1653ll), 0, 129ll );
	__builtin_memset( (struct $10FBC_EXTOPT*)((uint8*)THIS$1 + 1782ll), 0, 384ll );
	__builtin_memset( (uint8*)((uint8*)THIS$1 + 2166ll), 0, 129ll );
	__builtin_memset( (uint8*)((uint8*)THIS$1 + 2295ll), 0, 129ll );
	__builtin_memset( (uint8*)((uint8*)THIS$1 + 2424ll), 0, 129ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 2560ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 2568ll), 0, 8ll );
	__builtin_memset( (uint8*)((uint8*)THIS$1 + 2576ll), 0, 261ll );
	__builtin_memset( (uint8*)((uint8*)THIS$1 + 2837ll), 0, 261ll );
	__builtin_memset( (uint8*)((uint8*)THIS$1 + 3098ll), 0, 261ll );
	__builtin_memset( (uint8*)((uint8*)THIS$1 + 3359ll), 0, 261ll );
	__builtin_memset( (struct $10FBC_OBJINF*)((uint8*)THIS$1 + 3624ll), 0, 16ll );
	label$18:;
	label$19:;
}

static void _ZN6FBCCTXaSERKS_( struct $6FBCCTX* THIS$1, struct $6FBCCTX* __FB_RHS__$1 )
{
	label$20:;
	*(int64*)THIS$1 = *(int64*)__FB_RHS__$1;
	*(struct $9FBCIOFILE**)((uint8*)THIS$1 + 8ll) = *(struct $9FBCIOFILE**)((uint8*)__FB_RHS__$1 + 8ll);
	FBSTRING* vr$8 = fb_StrAssign( (void*)((uint8*)THIS$1 + 16ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 16ll), -1ll, 0 );
	*(int64*)((uint8*)THIS$1 + 40ll) = *(int64*)((uint8*)__FB_RHS__$1 + 40ll);
	*(int64*)((uint8*)THIS$1 + 48ll) = *(int64*)((uint8*)__FB_RHS__$1 + 48ll);
	*(int64*)((uint8*)THIS$1 + 56ll) = *(int64*)((uint8*)__FB_RHS__$1 + 56ll);
	*(int64*)((uint8*)THIS$1 + 64ll) = *(int64*)((uint8*)__FB_RHS__$1 + 64ll);
	*(int64*)((uint8*)THIS$1 + 72ll) = *(int64*)((uint8*)__FB_RHS__$1 + 72ll);
	*(int64*)((uint8*)THIS$1 + 80ll) = *(int64*)((uint8*)__FB_RHS__$1 + 80ll);
	*(int64*)((uint8*)THIS$1 + 88ll) = *(int64*)((uint8*)__FB_RHS__$1 + 88ll);
	*(int64*)((uint8*)THIS$1 + 96ll) = *(int64*)((uint8*)__FB_RHS__$1 + 96ll);
	*(int64*)((uint8*)THIS$1 + 104ll) = *(int64*)((uint8*)__FB_RHS__$1 + 104ll);
	*(int64*)((uint8*)THIS$1 + 112ll) = *(int64*)((uint8*)__FB_RHS__$1 + 112ll);
	*(int64*)((uint8*)THIS$1 + 120ll) = *(int64*)((uint8*)__FB_RHS__$1 + 120ll);
	*(int64*)((uint8*)THIS$1 + 128ll) = *(int64*)((uint8*)__FB_RHS__$1 + 128ll);
	*(int64*)((uint8*)THIS$1 + 136ll) = *(int64*)((uint8*)__FB_RHS__$1 + 136ll);
	__builtin_memcpy( (struct $5TLIST*)((uint8*)THIS$1 + 144ll), (struct $5TLIST*)((uint8*)__FB_RHS__$1 + 144ll), 64 );
	__builtin_memcpy( (struct $5TLIST*)((uint8*)THIS$1 + 208ll), (struct $5TLIST*)((uint8*)__FB_RHS__$1 + 208ll), 64 );
	_ZN9FBCIOFILEaSERKS_( (struct $9FBCIOFILE*)((uint8*)THIS$1 + 272ll), (struct $9FBCIOFILE*)((uint8*)__FB_RHS__$1 + 272ll) );
	__builtin_memcpy( (struct $5TLIST*)((uint8*)THIS$1 + 312ll), (struct $5TLIST*)((uint8*)__FB_RHS__$1 + 312ll), 64 );
	__builtin_memcpy( (struct $5TLIST*)((uint8*)THIS$1 + 376ll), (struct $5TLIST*)((uint8*)__FB_RHS__$1 + 376ll), 64 );
	__builtin_memcpy( (struct $5TLIST*)((uint8*)THIS$1 + 440ll), (struct $5TLIST*)((uint8*)__FB_RHS__$1 + 440ll), 64 );
	__builtin_memcpy( (struct $7TSTRSET*)((uint8*)THIS$1 + 504ll), (struct $7TSTRSET*)((uint8*)__FB_RHS__$1 + 504ll), 88 );
	__builtin_memcpy( (struct $7TSTRSET*)((uint8*)THIS$1 + 592ll), (struct $7TSTRSET*)((uint8*)__FB_RHS__$1 + 592ll), 88 );
	__builtin_memcpy( (struct $7TSTRSET*)((uint8*)THIS$1 + 680ll), (struct $7TSTRSET*)((uint8*)__FB_RHS__$1 + 680ll), 88 );
	__builtin_memcpy( (struct $7TSTRSET*)((uint8*)THIS$1 + 768ll), (struct $7TSTRSET*)((uint8*)__FB_RHS__$1 + 768ll), 88 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 856ll), 261ll, (void*)((uint8*)__FB_RHS__$1 + 856ll), 261ll, 0 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 1117ll), 261ll, (void*)((uint8*)__FB_RHS__$1 + 1117ll), 261ll, 0 );
	*(int64*)((uint8*)THIS$1 + 1384ll) = *(int64*)((uint8*)__FB_RHS__$1 + 1384ll);
	fb_StrAssign( (void*)((uint8*)THIS$1 + 1392ll), 261ll, (void*)((uint8*)__FB_RHS__$1 + 1392ll), 261ll, 0 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 1653ll), 129ll, (void*)((uint8*)__FB_RHS__$1 + 1653ll), 129ll, 0 );
	__builtin_memcpy( (struct $10FBC_EXTOPT*)((uint8*)THIS$1 + 1782ll), (struct $10FBC_EXTOPT*)((uint8*)__FB_RHS__$1 + 1782ll), 384 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 2166ll), 129ll, (void*)((uint8*)__FB_RHS__$1 + 2166ll), 129ll, 0 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 2295ll), 129ll, (void*)((uint8*)__FB_RHS__$1 + 2295ll), 129ll, 0 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 2424ll), 129ll, (void*)((uint8*)__FB_RHS__$1 + 2424ll), 129ll, 0 );
	*(int64*)((uint8*)THIS$1 + 2560ll) = *(int64*)((uint8*)__FB_RHS__$1 + 2560ll);
	*(int64*)((uint8*)THIS$1 + 2568ll) = *(int64*)((uint8*)__FB_RHS__$1 + 2568ll);
	fb_StrAssign( (void*)((uint8*)THIS$1 + 2576ll), 261ll, (void*)((uint8*)__FB_RHS__$1 + 2576ll), 261ll, 0 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 2837ll), 261ll, (void*)((uint8*)__FB_RHS__$1 + 2837ll), 261ll, 0 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 3098ll), 261ll, (void*)((uint8*)__FB_RHS__$1 + 3098ll), 261ll, 0 );
	fb_StrAssign( (void*)((uint8*)THIS$1 + 3359ll), 261ll, (void*)((uint8*)__FB_RHS__$1 + 3359ll), 261ll, 0 );
	__builtin_memcpy( (struct $10FBC_OBJINF*)((uint8*)THIS$1 + 3624ll), (struct $10FBC_OBJINF*)((uint8*)__FB_RHS__$1 + 3624ll), 16 );
	label$21:;
}

static void _ZN6FBCCTXD1Ev( struct $6FBCCTX* THIS$1 )
{
	label$24:;
	label$25:;
	_ZN9FBCIOFILED1Ev( (struct $9FBCIOFILE*)((uint8*)THIS$1 + 272ll) );
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 16ll) );
}

static void FBCINIT( void )
{
	label$26:;
	*(int64*)((uint8*)&FBC$ + 40ll) = -1ll;
	*(int64*)((uint8*)&FBC$ + 48ll) = -1ll;
	*(int64*)((uint8*)&FBC$ + 64ll) = -1ll;
	LISTINIT( (struct $5TLIST*)((uint8*)&FBC$ + 144ll), 64ll, 40ll, 4294967295ll );
	LISTINIT( (struct $5TLIST*)((uint8*)&FBC$ + 208ll), 16ll, 40ll, 4294967295ll );
	STRLISTINIT( (struct $5TLIST*)((uint8*)&FBC$ + 312ll), 16ll );
	STRLISTINIT( (struct $5TLIST*)((uint8*)&FBC$ + 376ll), 64ll );
	STRLISTINIT( (struct $5TLIST*)((uint8*)&FBC$ + 440ll), 16ll );
	STRSETINIT( (struct $7TSTRSET*)((uint8*)&FBC$ + 504ll), 16ll );
	STRSETINIT( (struct $7TSTRSET*)((uint8*)&FBC$ + 592ll), 16ll );
	STRSETINIT( (struct $7TSTRSET*)((uint8*)&FBC$ + 680ll), 32ll );
	STRSETINIT( (struct $7TSTRSET*)((uint8*)&FBC$ + 768ll), 32ll );
	FBGLOBALINIT(  );
	int64 vr$9 = FBGETOPTION( 10ll );
	*($7FB_LANG*)((uint8*)&FBC$ + 3624ll) = vr$9;
	*(int64*)((uint8*)&FBC$ + 136ll) = -1ll;
	label$27:;
}

static void HSETOUTNAME( void )
{
	label$28:;
	int64 vr$1 = fb_StrLen( (void*)((uint8*)&FBC$ + 856ll), 261ll );
	if( vr$1 <= 0ll ) goto label$31;
	{
		goto label$29;
	}
	label$31:;
	label$30:;
	int64 vr$3 = FBGETOPTION( 0ll );
	if( vr$3 != 1ll ) goto label$33;
	{
		FBSTRING TMP$35$2;
		FBSTRING TMP$36$2;
		FBSTRING TMP$37$2;
		FBSTRING* vr$6 = HSTRIPPATH( (uint8*)((uint8*)&FBC$ + 1117ll) );
		FBSTRING* vr$8 = HSTRIPFILENAME( (uint8*)((uint8*)&FBC$ + 1117ll) );
		__builtin_memset( &TMP$35$2, 0, 24ll );
		FBSTRING* vr$11 = fb_StrConcat( &TMP$35$2, (void*)vr$8, -1ll, (void*)"lib", 4ll );
		__builtin_memset( &TMP$36$2, 0, 24ll );
		FBSTRING* vr$14 = fb_StrConcat( &TMP$36$2, (void*)vr$11, -1ll, (void*)vr$6, -1ll );
		__builtin_memset( &TMP$37$2, 0, 24ll );
		FBSTRING* vr$17 = fb_StrConcat( &TMP$37$2, (void*)vr$14, -1ll, (void*)".a", 3ll );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 856ll), 261ll, (void*)vr$17, -1ll, 0 );
		goto label$29;
	}
	label$33:;
	label$32:;
	fb_StrAssign( (void*)((uint8*)&FBC$ + 856ll), 261ll, (void*)((uint8*)&FBC$ + 1117ll), 261ll, 0 );
	{
		int64 TMP$38$2;
		int64 vr$21 = FBGETOPTION( 0ll );
		TMP$38$2 = vr$21;
		if( TMP$38$2 != 0ll ) goto label$35;
		label$36:;
		{
			{
				int64 TMP$39$4;
				int64 vr$23 = FBGETOPTION( 3ll );
				TMP$39$4 = vr$23;
				if( TMP$39$4 == 3ll ) goto label$39;
				label$40:;
				if( TMP$39$4 == 1ll ) goto label$39;
				label$41:;
				if( TMP$39$4 == 0ll ) goto label$39;
				label$42:;
				if( TMP$39$4 != 4ll ) goto label$38;
				label$39:;
				{
					FBSTRING TMP$41$5;
					__builtin_memset( &TMP$41$5, 0, 24ll );
					FBSTRING* vr$31 = fb_StrConcat( &TMP$41$5, (void*)((uint8*)&FBC$ + 856ll), 261ll, (void*)".exe", 5ll );
					fb_StrAssign( (void*)((uint8*)&FBC$ + 856ll), 261ll, (void*)vr$31, -1ll, 0 );
				}
				label$38:;
				label$37:;
			}
		}
		goto label$34;
		label$35:;
		if( TMP$38$2 != 2ll ) goto label$43;
		label$44:;
		{
			{
				int64 TMP$42$4;
				int64 vr$34 = FBGETOPTION( 3ll );
				TMP$42$4 = vr$34;
				if( TMP$42$4 == 1ll ) goto label$47;
				label$48:;
				if( TMP$42$4 != 0ll ) goto label$46;
				label$47:;
				{
					FBSTRING TMP$44$5;
					__builtin_memset( &TMP$44$5, 0, 24ll );
					FBSTRING* vr$40 = fb_StrConcat( &TMP$44$5, (void*)((uint8*)&FBC$ + 856ll), 261ll, (void*)".dll", 5ll );
					fb_StrAssign( (void*)((uint8*)&FBC$ + 856ll), 261ll, (void*)vr$40, -1ll, 0 );
				}
				goto label$45;
				label$46:;
				if( TMP$42$4 == 2ll ) goto label$50;
				label$51:;
				if( TMP$42$4 == 7ll ) goto label$50;
				label$52:;
				if( TMP$42$4 == 5ll ) goto label$50;
				label$53:;
				if( TMP$42$4 == 6ll ) goto label$50;
				label$54:;
				if( TMP$42$4 != 8ll ) goto label$49;
				label$50:;
				{
					FBSTRING TMP$46$5;
					FBSTRING TMP$47$5;
					FBSTRING TMP$48$5;
					FBSTRING* vr$48 = HSTRIPPATH( (uint8*)((uint8*)&FBC$ + 856ll) );
					FBSTRING* vr$50 = HSTRIPFILENAME( (uint8*)((uint8*)&FBC$ + 856ll) );
					__builtin_memset( &TMP$46$5, 0, 24ll );
					FBSTRING* vr$53 = fb_StrConcat( &TMP$46$5, (void*)vr$50, -1ll, (void*)"lib", 4ll );
					__builtin_memset( &TMP$47$5, 0, 24ll );
					FBSTRING* vr$56 = fb_StrConcat( &TMP$47$5, (void*)vr$53, -1ll, (void*)vr$48, -1ll );
					__builtin_memset( &TMP$48$5, 0, 24ll );
					FBSTRING* vr$59 = fb_StrConcat( &TMP$48$5, (void*)vr$56, -1ll, (void*)".so", 4ll );
					fb_StrAssign( (void*)((uint8*)&FBC$ + 856ll), 261ll, (void*)vr$59, -1ll, 0 );
				}
				label$49:;
				label$45:;
			}
		}
		label$43:;
		label$34:;
	}
	label$29:;
}

static void FBCEND( int64 ERRNUM$1 )
{
	label$55:;
	if( ERRNUM$1 != 0ll ) goto label$58;
	{
		{
			int64 TMP$49$3;
			TMP$49$3 = *(int64*)((uint8*)&FBC$ + 136ll);
			if( TMP$49$3 != 0ll ) goto label$60;
			label$61:;
			{
				FBSTRING* vr$2 = FBGETHOSTID(  );
				fb_PrintString( 0, vr$2, 1 );
			}
			goto label$59;
			label$60:;
			if( TMP$49$3 != 1ll ) goto label$62;
			label$63:;
			{
				FBSTRING* vr$4 = FBGETTARGETID(  );
				fb_PrintString( 0, vr$4, 1 );
			}
			goto label$59;
			label$62:;
			if( TMP$49$3 != 2ll ) goto label$64;
			label$65:;
			{
				HSETOUTNAME(  );
				FBSTRING* vr$7 = fb_StrAllocTempDescZ( (uint8*)((uint8*)&FBC$ + 856ll) );
				fb_PrintString( 0, vr$7, 1 );
			}
			label$64:;
			label$59:;
		}
	}
	label$58:;
	label$57:;
	FBSTRING* FILE$1;
	void* vr$9 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 312ll) );
	FILE$1 = (FBSTRING*)vr$9;
	label$66:;
	if( FILE$1 == (FBSTRING*)0ull ) goto label$67;
	{
		int32 vr$11 = fb_FileKill( FILE$1 );
		if( (int64)vr$11 == 0ll ) goto label$69;
		{
		}
		label$69:;
		label$68:;
		void* vr$14 = LISTGETNEXT( (void*)FILE$1 );
		FILE$1 = (FBSTRING*)vr$14;
	}
	goto label$66;
	label$67:;
	fb_End( (int32)ERRNUM$1 );
	label$56:;
}

static void FBCADDTEMP( FBSTRING* FILE$1 )
{
	label$70:;
	STRLISTAPPEND( (struct $5TLIST*)((uint8*)&FBC$ + 312ll), FILE$1 );
	label$71:;
}

static FBSTRING* FBCADDOBJ( FBSTRING* FILE$1 )
{
	FBSTRING* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$72:;
	FBSTRING* S$1;
	void* vr$2 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&FBC$ + 376ll) );
	S$1 = (FBSTRING*)vr$2;
	FBSTRING* vr$3 = fb_StrAssign( (void*)S$1, -1ll, (void*)FILE$1, -1ll, 0 );
	fb$result$1 = S$1;
	label$73:;
	return fb$result$1;
}

static FBSTRING* FBCBUILDPATHTOLIBFILE( uint8* FILE$1 )
{
	FBSTRING TMP$50$1;
	FBSTRING TMP$51$1;
	int64 TMP$52$1;
	FBSTRING TMP$57$1;
	FBSTRING TMP$58$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$74:;
	FBSTRING FOUND$1;
	__builtin_memset( &FOUND$1, 0, 24ll );
	__builtin_memset( &TMP$50$1, 0, 24ll );
	FBSTRING* vr$5 = fb_StrConcat( &TMP$50$1, (void*)((uint8*)&FBC$ + 3359ll), 261ll, (void*)"/", 2ll );
	__builtin_memset( &TMP$51$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$51$1, (void*)vr$5, -1ll, (void*)FILE$1, 0ll );
	FBSTRING* vr$10 = fb_StrAssign( (void*)&FOUND$1, -1ll, (void*)vr$8, -1ll, 0 );
	int64 vr$11 = HFILEEXISTS( *(uint8**)&FOUND$1 );
	if( vr$11 == 0ll ) goto label$77;
	{
		fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&FOUND$1, -1ll, 0 );
		fb_StrDelete( &FOUND$1 );
		goto label$75;
	}
	label$77:;
	label$76:;
	FBSTRING PATH$1;
	__builtin_memset( &PATH$1, 0, 24ll );
	TMP$52$1 = 0ll;
	FBCFINDBIN( 3ll, &PATH$1, &TMP$52$1 );
	{
		int64 TMP$53$2;
		int64 vr$19 = FBGETCPUFAMILY(  );
		TMP$53$2 = vr$19;
		if( TMP$53$2 != 0ll ) goto label$79;
		label$80:;
		{
			FBSTRING* vr$22 = fb_StrConcatAssign( (void*)&PATH$1, -1ll, (void*)" -m32", 6ll, 0 );
		}
		goto label$78;
		label$79:;
		if( TMP$53$2 != 1ll ) goto label$81;
		label$82:;
		{
			FBSTRING* vr$25 = fb_StrConcatAssign( (void*)&PATH$1, -1ll, (void*)" -m64", 6ll, 0 );
		}
		label$81:;
		label$78:;
	}
	__builtin_memset( &TMP$57$1, 0, 24ll );
	FBSTRING* vr$28 = fb_StrConcat( &TMP$57$1, (void*)" -print-file-name=", 19ll, (void*)FILE$1, 0ll );
	__builtin_memset( &TMP$58$1, 0, 24ll );
	FBSTRING* vr$32 = fb_StrConcat( &TMP$58$1, (void*)&PATH$1, -1ll, (void*)vr$28, -1ll );
	FBSTRING* vr$34 = fb_StrAssign( (void*)&PATH$1, -1ll, (void*)vr$32, -1ll, 0 );
	int64 FF$1;
	int32 vr$35 = fb_FileFree(  );
	FF$1 = (int64)vr$35;
	int32 vr$39 = fb_FileOpenPipe( &PATH$1, 2u, 0u, 0u, (int32)FF$1, 0, (uint8*)0ull );
	if( (int64)vr$39 == 0ll ) goto label$84;
	{
		fb_StrDelete( &PATH$1 );
		fb_StrDelete( &FOUND$1 );
		goto label$75;
	}
	label$84:;
	label$83:;
	fb_FileInput( (int32)FF$1 );
	fb_InputString( (void*)&FOUND$1, -1ll, 0 );
	int32 vr$47 = fb_FileClose( (int32)FF$1 );
	if( (int64)vr$47 == 0ll ) goto label$85;
	void* vr$50 = fb_ErrorThrowAt( 306, (uint8*)"fbc-1.01.0/src/compiler/fbc.bas", (void*)0ull, (void*)0ull );
	goto *vr$50;
	label$85:;
	FBSTRING* vr$51 = HSTRIPPATH( *(uint8**)&FOUND$1 );
	int32 vr$53 = fb_StrCompare( (void*)&FOUND$1, -1ll, (void*)vr$51, -1ll );
	if( (int64)vr$53 != 0ll ) goto label$87;
	{
		fb_StrDelete( &PATH$1 );
		fb_StrDelete( &FOUND$1 );
		goto label$75;
	}
	label$87:;
	label$86:;
	FBSTRING* vr$60 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&FOUND$1, -1ll, 0 );
	fb_StrDelete( &PATH$1 );
	fb_StrDelete( &FOUND$1 );
	label$75:;
	FBSTRING* vr$64 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$64;
}

static FBSTRING* FBCFINDLIBFILE( uint8* FILE$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$88:;
	FBSTRING FOUND$1;
	__builtin_memset( &FOUND$1, 0, 24ll );
	FBSTRING* vr$2 = FBCBUILDPATHTOLIBFILE( FILE$1 );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&FOUND$1, -1ll, (void*)vr$2, -1ll, 0 );
	int64 vr$6 = fb_StrLen( (void*)&FOUND$1, -1ll );
	if( vr$6 <= 0ll ) goto label$91;
	{
		int64 vr$8 = HFILEEXISTS( *(uint8**)&FOUND$1 );
		if( vr$8 != 0ll ) goto label$93;
		{
			fb_StrAssign( (void*)&FOUND$1, -1ll, (void*)"", 1ll, 0 );
		}
		label$93:;
		label$92:;
	}
	label$91:;
	label$90:;
	FBSTRING* vr$13 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&FOUND$1, -1ll, 0 );
	fb_StrDelete( &FOUND$1 );
	label$89:;
	FBSTRING* vr$16 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$16;
}

static void FBCADDDEFLIBPATH( FBSTRING* PATH$1 )
{
	label$94:;
	STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 768ll), PATH$1, -1ll );
	label$95:;
}

static void FBCADDLIBPATHFOR( uint8* LIBNAME$1 )
{
	FBSTRING TMP$60$1;
	label$96:;
	FBSTRING PATH$1;
	__builtin_memset( &PATH$1, 0, 24ll );
	__builtin_memset( &TMP$60$1, 0, 24ll );
	FBSTRING* vr$2 = FBCBUILDPATHTOLIBFILE( LIBNAME$1 );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&TMP$60$1, -1ll, (void*)vr$2, -1ll, 0 );
	FBSTRING* vr$5 = HSTRIPFILENAME( *(uint8**)&TMP$60$1 );
	FBSTRING* vr$7 = fb_StrAssign( (void*)&PATH$1, -1ll, (void*)vr$5, -1ll, 0 );
	fb_StrDelete( &TMP$60$1 );
	FBSTRING* vr$10 = PATHSTRIPDIV( &PATH$1 );
	FBSTRING* vr$12 = fb_StrAssign( (void*)&PATH$1, -1ll, (void*)vr$10, -1ll, 0 );
	int64 vr$14 = fb_StrLen( (void*)&PATH$1, -1ll );
	if( vr$14 <= 0ll ) goto label$99;
	{
		FBCADDDEFLIBPATH( &PATH$1 );
	}
	label$99:;
	label$98:;
	fb_StrDelete( &PATH$1 );
	label$97:;
}

static int64 CLEARDEFLIST( FBSTRING* DEFFILE$1 )
{
	FBSTRING TMP$77$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$117:;
	int64 FI$1;
	int32 vr$1 = fb_FileFree(  );
	FI$1 = (int64)vr$1;
	int32 vr$4 = fb_FileOpen( DEFFILE$1, 2u, 0u, 0u, (int32)FI$1, 0 );
	if( (int64)vr$4 == 0ll ) goto label$120;
	{
		fb$result$1 = 0ll;
		goto label$118;
	}
	label$120:;
	label$119:;
	FBSTRING CLEANED$1;
	FBSTRING* vr$7 = HSTRIPEXT( DEFFILE$1 );
	__builtin_memset( &TMP$77$1, 0, 24ll );
	FBSTRING* vr$10 = fb_StrConcat( &TMP$77$1, (void*)vr$7, -1ll, (void*)".clean.def", 11ll );
	FBSTRING* vr$12 = fb_StrInit( (void*)&CLEANED$1, -1ll, (void*)vr$10, -1ll, 0 );
	int64 FO$1;
	int32 vr$13 = fb_FileFree(  );
	FO$1 = (int64)vr$13;
	int32 vr$17 = fb_FileOpen( &CLEANED$1, 3u, 0u, 0u, (int32)FO$1, 0 );
	if( (int64)vr$17 == 0ll ) goto label$122;
	{
		int32 vr$21 = fb_FileClose( (int32)FI$1 );
		if( (int64)vr$21 == 0ll ) goto label$123;
		void* vr$24 = fb_ErrorThrowAt( 482, (uint8*)"fbc-1.01.0/src/compiler/fbc.bas", (void*)0ull, (void*)0ull );
		goto *vr$24;
		label$123:;
		fb$result$1 = 0ll;
		fb_StrDelete( &CLEANED$1 );
		goto label$118;
	}
	label$122:;
	label$121:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	label$124:;
	int32 vr$28 = fb_FileEof( (int32)FI$1 );
	if( (int64)vr$28 != 0ll ) goto label$125;
	{
		int64 TMP$79$2;
		fb_FileLineInput( (int32)FI$1, (void*)&LN$1, -1ll, 0 );
		FBSTRING* vr$34 = fb_RIGHT( &LN$1, 4ll );
		int32 vr$35 = fb_StrCompare( (void*)vr$34, -1ll, (void*)"DATA", 5ll );
		if( (int64)vr$35 != 0ll ) goto label$127;
		{
			int64 vr$39 = fb_StrLen( (void*)&LN$1, -1ll );
			FBSTRING* vr$42 = fb_LEFT( &LN$1, vr$39 + -4ll );
			FBSTRING* vr$44 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$42, -1ll, 0 );
		}
		label$127:;
		label$126:;
		TMP$79$2 = FO$1;
		fb_PrintString( (int32)TMP$79$2, &LN$1, 1 );
	}
	goto label$124;
	label$125:;
	int32 vr$48 = fb_FileClose( (int32)FO$1 );
	if( (int64)vr$48 == 0ll ) goto label$128;
	void* vr$51 = fb_ErrorThrowAt( 497, (uint8*)"fbc-1.01.0/src/compiler/fbc.bas", (void*)0ull, (void*)0ull );
	goto *vr$51;
	label$128:;
	int32 vr$53 = fb_FileClose( (int32)FI$1 );
	if( (int64)vr$53 == 0ll ) goto label$129;
	void* vr$56 = fb_ErrorThrowAt( 498, (uint8*)"fbc-1.01.0/src/compiler/fbc.bas", (void*)0ull, (void*)0ull );
	goto *vr$56;
	label$129:;
	fb_FileKill( DEFFILE$1 );
	int32 vr$58 = rename( *(uint8**)&CLEANED$1, *(uint8**)DEFFILE$1 );
	fb$result$1 = (int64)-((int64)vr$58 == 0ll);
	fb_StrDelete( &LN$1 );
	fb_StrDelete( &CLEANED$1 );
	goto label$118;
	fb_StrDelete( &LN$1 );
	fb_StrDelete( &CLEANED$1 );
	label$118:;
	return fb$result$1;
}

static int64 HGENERATEEMPTYDEFFILE( FBSTRING* DEFFILE$1 )
{
	int32 TMP$80$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$130:;
	int32 F$1;
	int32 vr$1 = fb_FileFree(  );
	F$1 = vr$1;
	int32 vr$2 = fb_FileOpen( DEFFILE$1, 3u, 0u, 0u, F$1, 0 );
	if( (int64)vr$2 == 0ll ) goto label$133;
	{
		goto label$131;
	}
	label$133:;
	label$132:;
	TMP$80$1 = F$1;
	FBSTRING* vr$5 = fb_StrAllocTempDescZEx( (uint8*)"EXPORTS", 7ll );
	fb_PrintString( TMP$80$1, vr$5, 1 );
	int32 vr$6 = fb_FileClose( F$1 );
	if( (int64)vr$6 == 0ll ) goto label$134;
	void* vr$9 = fb_ErrorThrowAt( 512, (uint8*)"fbc-1.01.0/src/compiler/fbc.bas", (void*)0ull, (void*)0ull );
	goto *vr$9;
	label$134:;
	fb$result$1 = -1ll;
	label$131:;
	return fb$result$1;
}

static int64 MAKEIMPLIB( FBSTRING* DLLNAME$1, FBSTRING* DEFFILE$1 )
{
	FBSTRING TMP$84$1;
	FBSTRING TMP$85$1;
	FBSTRING TMP$86$1;
	FBSTRING TMP$90$1;
	FBSTRING TMP$91$1;
	FBSTRING TMP$92$1;
	FBSTRING TMP$93$1;
	FBSTRING TMP$94$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$135:;
	int64 vr$1 = CLEARDEFLIST( DEFFILE$1 );
	if( vr$1 != 0ll ) goto label$138;
	{
		goto label$136;
	}
	label$138:;
	label$137:;
	int64 vr$4 = fb_FileLen( *(uint8**)DEFFILE$1 );
	if( vr$4 != 0ll ) goto label$140;
	{
		int64 vr$6 = HGENERATEEMPTYDEFFILE( DEFFILE$1 );
		if( vr$6 != 0ll ) goto label$142;
		{
			goto label$136;
		}
		label$142:;
		label$141:;
	}
	label$140:;
	label$139:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	__builtin_memset( &TMP$84$1, 0, 24ll );
	FBSTRING* vr$11 = fb_StrConcat( &TMP$84$1, (void*)"--def \x22", 8ll, (void*)DEFFILE$1, -1ll );
	__builtin_memset( &TMP$85$1, 0, 24ll );
	FBSTRING* vr$14 = fb_StrConcat( &TMP$85$1, (void*)vr$11, -1ll, (void*)"\x22", 2ll );
	__builtin_memset( &TMP$86$1, 0, 24ll );
	FBSTRING* vr$18 = fb_StrConcat( &TMP$86$1, (void*)&LN$1, -1ll, (void*)vr$14, -1ll );
	FBSTRING* vr$20 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$18, -1ll, 0 );
	FBSTRING* vr$22 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" --dllname \x22", 13ll, 0 );
	FBSTRING* vr$24 = HSTRIPPATH( (uint8*)((uint8*)&FBC$ + 856ll) );
	FBSTRING* vr$26 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$24, -1ll, 0 );
	FBSTRING* vr$28 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22", 2ll, 0 );
	FBSTRING* vr$30 = HSTRIPFILENAME( (uint8*)((uint8*)&FBC$ + 856ll) );
	__builtin_memset( &TMP$90$1, 0, 24ll );
	FBSTRING* vr$33 = fb_StrConcat( &TMP$90$1, (void*)" --output-lib \x22", 16ll, (void*)vr$30, -1ll );
	__builtin_memset( &TMP$91$1, 0, 24ll );
	FBSTRING* vr$36 = fb_StrConcat( &TMP$91$1, (void*)vr$33, -1ll, (void*)"lib", 4ll );
	__builtin_memset( &TMP$92$1, 0, 24ll );
	FBSTRING* vr$39 = fb_StrConcat( &TMP$92$1, (void*)vr$36, -1ll, (void*)DLLNAME$1, -1ll );
	__builtin_memset( &TMP$93$1, 0, 24ll );
	FBSTRING* vr$42 = fb_StrConcat( &TMP$93$1, (void*)vr$39, -1ll, (void*)".dll.a\x22", 8ll );
	__builtin_memset( &TMP$94$1, 0, 24ll );
	FBSTRING* vr$46 = fb_StrConcat( &TMP$94$1, (void*)&LN$1, -1ll, (void*)vr$42, -1ll );
	FBSTRING* vr$48 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$46, -1ll, 0 );
	int64 vr$50 = FBCRUNBIN( (uint8*)"creating import library", 5ll, &LN$1 );
	if( vr$50 != 0ll ) goto label$144;
	{
		fb_StrDelete( &LN$1 );
		goto label$136;
	}
	label$144:;
	label$143:;
	if( *(int64*)((uint8*)&FBC$ + 80ll) != 0ll ) goto label$146;
	{
		FBCADDTEMP( DEFFILE$1 );
	}
	label$146:;
	label$145:;
	fb$result$1 = -1ll;
	fb_StrDelete( &LN$1 );
	label$136:;
	return fb$result$1;
}

static FBSTRING* HFINDLIB( uint8* FILE$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$147:;
	FBSTRING FOUND$1;
	FBSTRING* vr$1 = FBCBUILDPATHTOLIBFILE( FILE$1 );
	FBSTRING* vr$3 = fb_StrInit( (void*)&FOUND$1, -1ll, (void*)vr$1, -1ll, 0 );
	int64 vr$5 = fb_StrLen( (void*)&FOUND$1, -1ll );
	if( vr$5 <= 0ll ) goto label$150;
	{
		FBSTRING* vr$8 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)" \x22", 3ll, 0 );
		FBSTRING* vr$11 = fb_StrConcatAssign( (void*)&fb$result$1, -1ll, (void*)&FOUND$1, -1ll, 0 );
		FBSTRING* vr$13 = fb_StrConcatAssign( (void*)&fb$result$1, -1ll, (void*)"\x22", 2ll, 0 );
	}
	goto label$149;
	label$150:;
	{
		ERRREPORTEX( 23ll, FILE$1, -1ll, 1ll, (uint8*)0ull );
	}
	label$149:;
	fb_StrDelete( &FOUND$1 );
	label$148:;
	FBSTRING* vr$16 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$16;
}

static int64 HLINKFILES( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$151:;
	FBSTRING LDCLINE$1;
	__builtin_memset( &LDCLINE$1, 0, 24ll );
	FBSTRING DLLNAME$1;
	__builtin_memset( &DLLNAME$1, 0, 24ll );
	FBSTRING DEFFILE$1;
	__builtin_memset( &DEFFILE$1, 0, 24ll );
	fb$result$1 = 0ll;
	HSETOUTNAME(  );
	{
		int64 TMP$97$2;
		int64 vr$4 = FBGETOPTION( 3ll );
		TMP$97$2 = vr$4;
		if( TMP$97$2 != 0ll ) goto label$154;
		label$155:;
		{
			{
				int64 TMP$98$4;
				int64 vr$6 = FBGETCPUFAMILY(  );
				TMP$98$4 = vr$6;
				if( TMP$98$4 != 0ll ) goto label$157;
				label$158:;
				{
					FBSTRING* vr$9 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-m i386pe ", 11ll, 0 );
				}
				goto label$156;
				label$157:;
				if( TMP$98$4 != 1ll ) goto label$159;
				label$160:;
				{
					FBSTRING* vr$12 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-m i386pep ", 12ll, 0 );
				}
				label$159:;
				label$156:;
			}
		}
		goto label$153;
		label$154:;
		if( TMP$97$2 != 2ll ) goto label$161;
		label$162:;
		{
			{
				int64 TMP$101$4;
				int64 vr$14 = FBGETCPUFAMILY(  );
				TMP$101$4 = vr$14;
				if( TMP$101$4 != 0ll ) goto label$164;
				label$165:;
				{
					FBSTRING* vr$17 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-m elf_i386 ", 13ll, 0 );
				}
				goto label$163;
				label$164:;
				if( TMP$101$4 != 1ll ) goto label$166;
				label$167:;
				{
					FBSTRING* vr$20 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-m elf_x86_64 ", 15ll, 0 );
				}
				goto label$163;
				label$166:;
				if( TMP$101$4 != 2ll ) goto label$168;
				label$169:;
				{
					FBSTRING* vr$23 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-m armelf_linux_eabi ", 22ll, 0 );
				}
				label$168:;
				label$163:;
			}
		}
		label$161:;
		label$153:;
	}
	FBSTRING* vr$25 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"-o \x22", 5ll, 0 );
	FBSTRING* vr$28 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 856ll), 261ll, 0 );
	FBSTRING* vr$30 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"\x22", 2ll, 0 );
	{
		uint64 TMP$108$2;
		int64 vr$31 = FBGETOPTION( 3ll );
		TMP$108$2 = (uint64)vr$31;
		goto label$171;
		label$172:;
		{
			int64 vr$33 = fb_StrLen( (void*)((uint8*)&FBC$ + 1653ll), 129ll );
			if( vr$33 != 0ll ) goto label$174;
			{
				fb_StrAssign( (void*)((uint8*)&FBC$ + 1653ll), 129ll, (void*)"console", 8ll, 0 );
			}
			goto label$173;
			label$174:;
			{
				int32 vr$37 = fb_StrCompare( (void*)((uint8*)&FBC$ + 1653ll), 129ll, (void*)"gui", 4ll );
				if( (int64)vr$37 != 0ll ) goto label$176;
				{
					fb_StrAssign( (void*)((uint8*)&FBC$ + 1653ll), 129ll, (void*)"windows", 8ll, 0 );
				}
				label$176:;
				label$175:;
			}
			label$173:;
			FBSTRING* vr$42 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -subsystem ", 13ll, 0 );
			FBSTRING* vr$45 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 1653ll), 129ll, 0 );
			int64 vr$46 = FBGETOPTION( 0ll );
			if( vr$46 != 2ll ) goto label$178;
			{
				FBSTRING TMP$113$4;
				FBSTRING TMP$114$4;
				__builtin_memset( &TMP$114$4, 0, 24ll );
				__builtin_memset( &TMP$113$4, 0, 24ll );
				FBSTRING* vr$52 = fb_StrAssign( (void*)&TMP$113$4, -1ll, (void*)((uint8*)&FBC$ + 856ll), 261ll, 0 );
				FBSTRING* vr$54 = HSTRIPEXT( &TMP$113$4 );
				FBSTRING* vr$56 = fb_StrAssign( (void*)&TMP$114$4, -1ll, (void*)vr$54, -1ll, 0 );
				FBSTRING* vr$57 = HSTRIPPATH( *(uint8**)&TMP$114$4 );
				FBSTRING* vr$59 = fb_StrAssign( (void*)&DLLNAME$1, -1ll, (void*)vr$57, -1ll, 0 );
				fb_StrDelete( &TMP$114$4 );
				fb_StrDelete( &TMP$113$4 );
				FBSTRING* vr$63 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --dll --enable-stdcall-fixup", 30ll, 0 );
				int64 vr$64 = FBGETCPUFAMILY(  );
				if( vr$64 != 0ll ) goto label$180;
				{
					FBSTRING* vr$67 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -e _DllMainCRTStartup@12", 26ll, 0 );
				}
				goto label$179;
				label$180:;
				{
					FBSTRING* vr$69 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -e DllMainCRTStartup", 22ll, 0 );
				}
				label$179:;
			}
			label$178:;
			label$177:;
		}
		goto label$170;
		label$181:;
		{
			int64 vr$70 = FBGETOPTION( 0ll );
			if( vr$70 != 2ll ) goto label$183;
			{
				FBSTRING TMP$118$4;
				FBSTRING TMP$119$4;
				__builtin_memset( &TMP$119$4, 0, 24ll );
				__builtin_memset( &TMP$118$4, 0, 24ll );
				FBSTRING* vr$76 = fb_StrAssign( (void*)&TMP$118$4, -1ll, (void*)((uint8*)&FBC$ + 856ll), 261ll, 0 );
				FBSTRING* vr$78 = HSTRIPEXT( &TMP$118$4 );
				FBSTRING* vr$80 = fb_StrAssign( (void*)&TMP$119$4, -1ll, (void*)vr$78, -1ll, 0 );
				FBSTRING* vr$81 = HSTRIPPATH( *(uint8**)&TMP$119$4 );
				FBSTRING* vr$83 = fb_StrAssign( (void*)&DLLNAME$1, -1ll, (void*)vr$81, -1ll, 0 );
				fb_StrDelete( &TMP$119$4 );
				fb_StrDelete( &TMP$118$4 );
				FBSTRING* vr$87 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -shared -h", 12ll, 0 );
				FBSTRING* vr$89 = HSTRIPPATH( (uint8*)((uint8*)&FBC$ + 856ll) );
				FBSTRING* vr$91 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$89, -1ll, 0 );
				FBSTRING* vr$93 = fb_LEFT( &DLLNAME$1, 3ll );
				int32 vr$94 = fb_StrCompare( (void*)vr$93, -1ll, (void*)"lib", 4ll );
				if( (int64)vr$94 != 0ll ) goto label$185;
				{
					int64 vr$98 = fb_StrLen( (void*)&DLLNAME$1, -1ll );
					FBSTRING* vr$101 = fb_RIGHT( &DLLNAME$1, vr$98 + -3ll );
					FBSTRING* vr$103 = fb_StrAssign( (void*)&DLLNAME$1, -1ll, (void*)vr$101, -1ll, 0 );
				}
				label$185:;
				label$184:;
			}
			goto label$182;
			label$183:;
			{
				{
					uint64 TMP$121$5;
					int64 vr$104 = FBGETOPTION( 3ll );
					TMP$121$5 = (uint64)vr$104;
					goto label$187;
					label$188:;
					{
						FBSTRING* vr$106 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /libexec/ld-elf.so.1", 38ll, 0 );
					}
					goto label$186;
					label$189:;
					{
						{
							int64 TMP$123$7;
							int64 vr$107 = FBGETCPUFAMILY(  );
							TMP$123$7 = vr$107;
							if( TMP$123$7 != 0ll ) goto label$191;
							label$192:;
							{
								FBSTRING* vr$110 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /lib/ld-linux.so.2", 36ll, 0 );
							}
							goto label$190;
							label$191:;
							if( TMP$123$7 != 1ll ) goto label$193;
							label$194:;
							{
								FBSTRING* vr$113 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /lib64/ld-linux-x86-64.so.2", 45ll, 0 );
							}
							goto label$190;
							label$193:;
							if( TMP$123$7 != 2ll ) goto label$195;
							label$196:;
							{
								FBSTRING* vr$116 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /lib/ld-linux-armhf.so.3", 42ll, 0 );
							}
							goto label$190;
							label$195:;
							if( TMP$123$7 != 3ll ) goto label$197;
							label$198:;
							{
								FBSTRING* vr$119 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /lib/ld-linux-aarch64.so.1", 44ll, 0 );
							}
							label$197:;
							label$190:;
						}
					}
					goto label$186;
					label$199:;
					{
						FBSTRING* vr$121 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /usr/libexec/ld.elf_so", 40ll, 0 );
					}
					goto label$186;
					label$200:;
					{
						FBSTRING* vr$123 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -dynamic-linker /usr/libexec/ld.so", 36ll, 0 );
					}
					goto label$186;
					label$187:;
					static const void* tmp$628[7ll] = {
						&&label$189,
						&&label$186,
						&&label$186,
						&&label$188,
						&&label$200,
						&&label$186,
						&&label$199,
					};
					if( TMP$121$5 < 2ll ) goto label$186;
					if( TMP$121$5 > 8ll ) goto label$186;
					goto *tmp$628[TMP$121$5 - 2ll];
					label$186:;
				}
			}
			label$182:;
			int64 vr$124 = FBGETOPTION( 0ll );
			int64 vr$126 = FBGETOPTION( 22ll );
			if( ((int64)-(vr$124 == 2ll) | vr$126) == 0ll ) goto label$202;
			{
				FBSTRING* vr$130 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --export-dynamic", 18ll, 0 );
			}
			label$202:;
			label$201:;
		}
		goto label$170;
		label$203:;
		{
			FBSTRING* vr$132 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -nostdlib --file-alignment 0x20 --section-alignment 0x20 -shared", 66ll, 0 );
		}
		goto label$170;
		label$171:;
		static const void* tmp$629[9ll] = {
			&&label$172,
			&&label$172,
			&&label$181,
			&&label$170,
			&&label$203,
			&&label$181,
			&&label$181,
			&&label$181,
			&&label$181,
		};
		if( TMP$108$2 > 8ll ) goto label$170;
		goto *tmp$629[TMP$108$2 - 0ll];
		label$170:;
	}
	int64 vr$133 = FBGETOPTION( 3ll );
	if( vr$133 != 3ll ) goto label$205;
	{
		FBSTRING* vr$136 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -T \x22", 6ll, 0 );
		FBSTRING* vr$139 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 3359ll), 261ll, 0 );
		FBSTRING* vr$141 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"/i386go32.x\x22", 13ll, 0 );
	}
	goto label$204;
	label$205:;
	{
		FBSTRING* vr$143 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" \x22", 3ll, 0 );
		FBSTRING* vr$146 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 3359ll), 261ll, 0 );
		FBSTRING* vr$148 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"/fbextra.x\x22", 12ll, 0 );
	}
	label$204:;
	{
		uint64 TMP$137$2;
		int64 vr$149 = FBGETOPTION( 3ll );
		TMP$137$2 = (uint64)vr$149;
		goto label$207;
		label$208:;
		{
			int64 STACKSIZE$3;
			int64 vr$150 = FBGETOPTION( 27ll );
			STACKSIZE$3 = vr$150;
			FBSTRING* vr$152 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --stack ", 10ll, 0 );
			FBSTRING* vr$153 = fb_LongintToStr( STACKSIZE$3 );
			FBSTRING* vr$155 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$153, -1ll, 0 );
			FBSTRING* vr$157 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)",", 2ll, 0 );
			FBSTRING* vr$158 = fb_LongintToStr( STACKSIZE$3 );
			FBSTRING* vr$160 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$158, -1ll, 0 );
			int64 vr$161 = FBGETOPTION( 0ll );
			if( vr$161 != 2ll ) goto label$210;
			{
				FBSTRING TMP$140$4;
				__builtin_memset( &TMP$140$4, 0, 24ll );
				FBSTRING* vr$166 = fb_StrAssign( (void*)&TMP$140$4, -1ll, (void*)((uint8*)&FBC$ + 856ll), 261ll, 0 );
				FBSTRING* vr$168 = HSTRIPEXT( &TMP$140$4 );
				FBSTRING* vr$170 = fb_StrAssign( (void*)&DEFFILE$1, -1ll, (void*)vr$168, -1ll, 0 );
				FBSTRING* vr$172 = fb_StrConcatAssign( (void*)&DEFFILE$1, -1ll, (void*)".def", 5ll, 0 );
				fb_StrDelete( &TMP$140$4 );
				FBSTRING* vr$175 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" --output-def \x22", 16ll, 0 );
				FBSTRING* vr$178 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)&DEFFILE$1, -1ll, 0 );
				FBSTRING* vr$180 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"\x22", 2ll, 0 );
			}
			label$210:;
			label$209:;
		}
		goto label$206;
		label$211:;
		{
			FBSTRING* vr$182 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -e _WinMainCRTStartup", 23ll, 0 );
		}
		goto label$206;
		label$207:;
		static const void* tmp$630[5ll] = {
			&&label$208,
			&&label$208,
			&&label$206,
			&&label$206,
			&&label$211,
		};
		if( TMP$137$2 > 4ll ) goto label$206;
		goto *tmp$630[TMP$137$2 - 0ll];
		label$206:;
	}
	if( *(int64*)((uint8*)&FBC$ + 2568ll) == 0ll ) goto label$213;
	{
		FBSTRING* vr$185 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -Bstatic", 10ll, 0 );
	}
	label$213:;
	label$212:;
	int64 vr$187 = fb_StrLen( (void*)((uint8*)&FBC$ + 1392ll), 261ll );
	if( vr$187 <= 0ll ) goto label$215;
	{
		FBSTRING* vr$190 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -Map ", 7ll, 0 );
		FBSTRING* vr$193 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 1392ll), 261ll, 0 );
	}
	label$215:;
	label$214:;
	int64 vr$194 = FBGETOPTION( 12ll );
	if( vr$194 != 0ll ) goto label$217;
	{
		int64 vr$196 = FBGETOPTION( 16ll );
		if( vr$196 != 0ll ) goto label$219;
		{
			FBSTRING* vr$199 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" -s", 4ll, 0 );
		}
		label$219:;
		label$218:;
	}
	label$217:;
	label$216:;
	{
		struct $11TSTRSETITEM* I$2;
		void* vr$201 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 768ll) );
		I$2 = (struct $11TSTRSETITEM*)vr$201;
		label$220:;
		if( I$2 == (struct $11TSTRSETITEM*)0ull ) goto label$221;
		{
			FBSTRING TMP$148$3;
			FBSTRING TMP$149$3;
			FBSTRING TMP$150$3;
			__builtin_memset( &TMP$148$3, 0, 24ll );
			FBSTRING* vr$207 = fb_StrConcat( &TMP$148$3, (void*)" -L \x22", 6ll, (void*)I$2, -1ll );
			__builtin_memset( &TMP$149$3, 0, 24ll );
			FBSTRING* vr$210 = fb_StrConcat( &TMP$149$3, (void*)vr$207, -1ll, (void*)"\x22", 2ll );
			__builtin_memset( &TMP$150$3, 0, 24ll );
			FBSTRING* vr$214 = fb_StrConcat( &TMP$150$3, (void*)&LDCLINE$1, -1ll, (void*)vr$210, -1ll );
			FBSTRING* vr$216 = fb_StrAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$214, -1ll, 0 );
			void* vr$217 = LISTGETNEXT( (void*)I$2 );
			I$2 = (struct $11TSTRSETITEM*)vr$217;
		}
		goto label$220;
		label$221:;
	}
	{
		uint64 TMP$151$2;
		int64 vr$218 = FBGETOPTION( 3ll );
		TMP$151$2 = (uint64)vr$218;
		goto label$223;
		label$224:;
		{
			int64 vr$219 = FBGETOPTION( 0ll );
			if( vr$219 != 2ll ) goto label$226;
			{
				FBSTRING* vr$221 = HFINDLIB( (uint8*)"crt0.o" );
				FBSTRING* vr$223 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$221, -1ll, 0 );
			}
			goto label$225;
			label$226:;
			{
				FBSTRING* vr$224 = HFINDLIB( (uint8*)"crt0.o" );
				FBSTRING* vr$226 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$224, -1ll, 0 );
				int64 vr$227 = FBGETOPTION( 16ll );
				if( vr$227 == 0ll ) goto label$228;
				{
					FBSTRING* vr$229 = HFINDLIB( (uint8*)"gcrt0.o" );
					FBSTRING* vr$231 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$229, -1ll, 0 );
				}
				label$228:;
				label$227:;
			}
			label$225:;
		}
		goto label$222;
		label$229:;
		{
			int64 vr$232 = FBGETOPTION( 0ll );
			if( vr$232 != 2ll ) goto label$231;
			{
				FBSTRING* vr$234 = HFINDLIB( (uint8*)"dllcrt2.o" );
				FBSTRING* vr$236 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$234, -1ll, 0 );
			}
			goto label$230;
			label$231:;
			{
				FBSTRING* vr$237 = HFINDLIB( (uint8*)"crt2.o" );
				FBSTRING* vr$239 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$237, -1ll, 0 );
				int64 vr$240 = FBGETOPTION( 16ll );
				if( vr$240 == 0ll ) goto label$233;
				{
					FBSTRING* vr$242 = HFINDLIB( (uint8*)"gcrt2.o" );
					FBSTRING* vr$244 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$242, -1ll, 0 );
				}
				label$233:;
				label$232:;
			}
			label$230:;
			FBSTRING* vr$245 = HFINDLIB( (uint8*)"crtbegin.o" );
			FBSTRING* vr$247 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$245, -1ll, 0 );
		}
		goto label$222;
		label$234:;
		{
			int64 vr$248 = FBGETOPTION( 16ll );
			if( vr$248 == 0ll ) goto label$236;
			{
				FBSTRING* vr$250 = HFINDLIB( (uint8*)"gcrt0.o" );
				FBSTRING* vr$252 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$250, -1ll, 0 );
			}
			goto label$235;
			label$236:;
			{
				FBSTRING* vr$253 = HFINDLIB( (uint8*)"crt0.o" );
				FBSTRING* vr$255 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$253, -1ll, 0 );
			}
			label$235:;
		}
		goto label$222;
		label$237:;
		{
			int64 vr$256 = FBGETOPTION( 0ll );
			if( vr$256 != 0ll ) goto label$239;
			{
				int64 vr$258 = FBGETOPTION( 16ll );
				if( vr$258 == 0ll ) goto label$241;
				{
					{
						uint64 TMP$158$6;
						int64 vr$260 = FBGETOPTION( 3ll );
						TMP$158$6 = (uint64)vr$260;
						goto label$243;
						label$244:;
						{
							FBSTRING* vr$261 = HFINDLIB( (uint8*)"gcrt0.o" );
							FBSTRING* vr$263 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$261, -1ll, 0 );
						}
						goto label$242;
						label$245:;
						{
							FBSTRING* vr$264 = HFINDLIB( (uint8*)"gcrt1.o" );
							FBSTRING* vr$266 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$264, -1ll, 0 );
						}
						goto label$242;
						label$243:;
						static const void* tmp$631[3ll] = {
							&&label$244,
							&&label$245,
							&&label$244,
						};
						if( TMP$158$6 < 6ll ) goto label$245;
						if( TMP$158$6 > 8ll ) goto label$245;
						goto *tmp$631[TMP$158$6 - 6ll];
						label$242:;
					}
				}
				goto label$240;
				label$241:;
				{
					{
						uint64 TMP$160$6;
						int64 vr$267 = FBGETOPTION( 3ll );
						TMP$160$6 = (uint64)vr$267;
						goto label$247;
						label$248:;
						{
							FBSTRING* vr$268 = HFINDLIB( (uint8*)"crt0.o" );
							FBSTRING* vr$270 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$268, -1ll, 0 );
						}
						goto label$246;
						label$249:;
						{
							FBSTRING* vr$271 = HFINDLIB( (uint8*)"crt1.o" );
							FBSTRING* vr$273 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$271, -1ll, 0 );
						}
						goto label$246;
						label$247:;
						static const void* tmp$632[3ll] = {
							&&label$248,
							&&label$249,
							&&label$248,
						};
						if( TMP$160$6 < 6ll ) goto label$249;
						if( TMP$160$6 > 8ll ) goto label$249;
						goto *tmp$632[TMP$160$6 - 6ll];
						label$246:;
					}
				}
				label$240:;
			}
			label$239:;
			label$238:;
			int64 vr$274 = FBGETOPTION( 3ll );
			if( vr$274 == 6ll ) goto label$251;
			{
				FBSTRING* vr$276 = HFINDLIB( (uint8*)"crti.o" );
				FBSTRING* vr$278 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$276, -1ll, 0 );
			}
			label$251:;
			label$250:;
			int64 vr$279 = FBGETOPTION( 26ll );
			if( vr$279 == 0ll ) goto label$253;
			{
				FBSTRING* vr$281 = HFINDLIB( (uint8*)"crtbeginS.o" );
				FBSTRING* vr$283 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$281, -1ll, 0 );
			}
			goto label$252;
			label$253:;
			{
				FBSTRING* vr$284 = HFINDLIB( (uint8*)"crtbegin.o" );
				FBSTRING* vr$286 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$284, -1ll, 0 );
			}
			label$252:;
		}
		goto label$222;
		label$254:;
		{
			FBSTRING* vr$287 = HFINDLIB( (uint8*)"crt0.o" );
			FBSTRING* vr$289 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$287, -1ll, 0 );
		}
		goto label$222;
		label$223:;
		static const void* tmp$633[9ll] = {
			&&label$229,
			&&label$224,
			&&label$237,
			&&label$234,
			&&label$254,
			&&label$237,
			&&label$237,
			&&label$237,
			&&label$237,
		};
		if( TMP$151$2 > 8ll ) goto label$222;
		goto *tmp$633[TMP$151$2 - 0ll];
		label$222:;
	}
	if( *(int64*)((uint8*)&FBC$ + 2560ll) != 0ll ) goto label$256;
	{
		FBSTRING* vr$292 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" \x22", 3ll, 0 );
		FBSTRING* vr$295 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 3359ll), 261ll, 0 );
		FBSTRING* vr$297 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"/", 2ll, 0 );
		int64 vr$298 = FBGETOPTION( 26ll );
		if( vr$298 == 0ll ) goto label$258;
		{
			FBSTRING* vr$301 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"fbrt0pic.o", 11ll, 0 );
		}
		goto label$257;
		label$258:;
		{
			FBSTRING* vr$303 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"fbrt0.o", 8ll, 0 );
		}
		label$257:;
		FBSTRING* vr$305 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)"\x22", 2ll, 0 );
	}
	label$256:;
	label$255:;
	{
		FBSTRING* OBJFILE$2;
		void* vr$307 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 376ll) );
		OBJFILE$2 = (FBSTRING*)vr$307;
		label$259:;
		if( OBJFILE$2 == (FBSTRING*)0ull ) goto label$260;
		{
			FBSTRING TMP$166$3;
			FBSTRING TMP$167$3;
			FBSTRING TMP$168$3;
			__builtin_memset( &TMP$166$3, 0, 24ll );
			FBSTRING* vr$311 = fb_StrConcat( &TMP$166$3, (void*)" \x22", 3ll, (void*)OBJFILE$2, -1ll );
			__builtin_memset( &TMP$167$3, 0, 24ll );
			FBSTRING* vr$314 = fb_StrConcat( &TMP$167$3, (void*)vr$311, -1ll, (void*)"\x22", 2ll );
			__builtin_memset( &TMP$168$3, 0, 24ll );
			FBSTRING* vr$318 = fb_StrConcat( &TMP$168$3, (void*)&LDCLINE$1, -1ll, (void*)vr$314, -1ll );
			FBSTRING* vr$320 = fb_StrAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$318, -1ll, 0 );
			void* vr$321 = LISTGETNEXT( (void*)OBJFILE$2 );
			OBJFILE$2 = (FBSTRING*)vr$321;
		}
		goto label$259;
		label$260:;
	}
	FBSTRING* vr$323 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" \x22-(\x22", 6ll, 0 );
	{
		FBSTRING* LIBFILE$2;
		void* vr$325 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 440ll) );
		LIBFILE$2 = (FBSTRING*)vr$325;
		label$261:;
		if( LIBFILE$2 == (FBSTRING*)0ull ) goto label$262;
		{
			FBSTRING TMP$170$3;
			FBSTRING TMP$171$3;
			FBSTRING TMP$172$3;
			__builtin_memset( &TMP$170$3, 0, 24ll );
			FBSTRING* vr$329 = fb_StrConcat( &TMP$170$3, (void*)" \x22", 3ll, (void*)LIBFILE$2, -1ll );
			__builtin_memset( &TMP$171$3, 0, 24ll );
			FBSTRING* vr$332 = fb_StrConcat( &TMP$171$3, (void*)vr$329, -1ll, (void*)"\x22", 2ll );
			__builtin_memset( &TMP$172$3, 0, 24ll );
			FBSTRING* vr$336 = fb_StrConcat( &TMP$172$3, (void*)&LDCLINE$1, -1ll, (void*)vr$332, -1ll );
			FBSTRING* vr$338 = fb_StrAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$336, -1ll, 0 );
			void* vr$339 = LISTGETNEXT( (void*)LIBFILE$2 );
			LIBFILE$2 = (FBSTRING*)vr$339;
		}
		goto label$261;
		label$262:;
	}
	{
		struct $11TSTRSETITEM* I$2;
		void* vr$341 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 680ll) );
		I$2 = (struct $11TSTRSETITEM*)vr$341;
		int64 CHECKDLLNAME$2;
		int64 vr$342 = FBGETOPTION( 0ll );
		CHECKDLLNAME$2 = (int64)-(vr$342 == 2ll);
		label$263:;
		if( I$2 == (struct $11TSTRSETITEM*)0ull ) goto label$264;
		{
			int64 TMP$173$3;
			if( (int64)-(CHECKDLLNAME$2 == 0ll) != 0ll ) goto label$265;
			int32 vr$350 = fb_StrCompare( (void*)I$2, -1ll, (void*)&DLLNAME$1, -1ll );
			TMP$173$3 = (int64)-((int64)-((int64)vr$350 != 0ll) != 0ll);
			goto label$1091;
			label$265:;
			TMP$173$3 = -1ll;
			label$1091:;
			if( TMP$173$3 == 0ll ) goto label$267;
			{
				FBSTRING TMP$175$4;
				FBSTRING TMP$176$4;
				__builtin_memset( &TMP$175$4, 0, 24ll );
				FBSTRING* vr$359 = fb_StrConcat( &TMP$175$4, (void*)" -l", 4ll, (void*)I$2, -1ll );
				__builtin_memset( &TMP$176$4, 0, 24ll );
				FBSTRING* vr$363 = fb_StrConcat( &TMP$176$4, (void*)&LDCLINE$1, -1ll, (void*)vr$359, -1ll );
				FBSTRING* vr$365 = fb_StrAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$363, -1ll, 0 );
			}
			label$267:;
			label$266:;
			void* vr$366 = LISTGETNEXT( (void*)I$2 );
			I$2 = (struct $11TSTRSETITEM*)vr$366;
		}
		goto label$263;
		label$264:;
	}
	FBSTRING* vr$368 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" \x22-)\x22", 6ll, 0 );
	{
		uint64 TMP$178$2;
		int64 vr$369 = FBGETOPTION( 3ll );
		TMP$178$2 = (uint64)vr$369;
		goto label$269;
		label$270:;
		{
			int64 vr$370 = FBGETOPTION( 26ll );
			if( vr$370 == 0ll ) goto label$272;
			{
				FBSTRING* vr$372 = HFINDLIB( (uint8*)"crtendS.o" );
				FBSTRING* vr$374 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$372, -1ll, 0 );
			}
			goto label$271;
			label$272:;
			{
				FBSTRING* vr$375 = HFINDLIB( (uint8*)"crtend.o" );
				FBSTRING* vr$377 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$375, -1ll, 0 );
			}
			label$271:;
			int64 vr$378 = FBGETOPTION( 3ll );
			if( vr$378 == 6ll ) goto label$274;
			{
				FBSTRING* vr$380 = HFINDLIB( (uint8*)"crtn.o" );
				FBSTRING* vr$382 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$380, -1ll, 0 );
			}
			label$274:;
			label$273:;
		}
		goto label$268;
		label$275:;
		{
			FBSTRING* vr$383 = HFINDLIB( (uint8*)"crtend.o" );
			FBSTRING* vr$385 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)vr$383, -1ll, 0 );
		}
		goto label$268;
		label$269:;
		static const void* tmp$634[9ll] = {
			&&label$275,
			&&label$268,
			&&label$270,
			&&label$268,
			&&label$268,
			&&label$270,
			&&label$270,
			&&label$270,
			&&label$270,
		};
		if( TMP$178$2 > 8ll ) goto label$268;
		goto *tmp$634[TMP$178$2 - 0ll];
		label$268:;
	}
	FBSTRING* vr$387 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)" ", 2ll, 0 );
	FBSTRING* vr$390 = fb_StrConcatAssign( (void*)&LDCLINE$1, -1ll, (void*)((uint8*)&FBC$ + 1910ll), 128ll, 0 );
	int64 vr$392 = FBCRUNBIN( (uint8*)"linking", 2ll, &LDCLINE$1 );
	if( vr$392 != 0ll ) goto label$277;
	{
		fb_StrDelete( &DEFFILE$1 );
		fb_StrDelete( &DLLNAME$1 );
		fb_StrDelete( &LDCLINE$1 );
		goto label$152;
	}
	label$277:;
	label$276:;
	{
		uint64 TMP$183$2;
		int64 vr$397 = FBGETOPTION( 3ll );
		TMP$183$2 = (uint64)vr$397;
		goto label$279;
		label$280:;
		{
			int32 TMP$184$3;
			int64 F$3;
			int32 vr$398 = fb_FileFree(  );
			F$3 = (int64)vr$398;
			FBSTRING* vr$402 = fb_StrAllocTempDescZ( (uint8*)((uint8*)&FBC$ + 856ll) );
			int32 vr$403 = fb_FileOpen( vr$402, 0u, 3u, 0u, (int32)F$3, 0 );
			if( (int64)vr$403 == 0ll ) goto label$282;
			{
				fb_StrDelete( &DEFFILE$1 );
				fb_StrDelete( &DLLNAME$1 );
				fb_StrDelete( &LDCLINE$1 );
				goto label$152;
			}
			label$282:;
			label$281:;
			int64 vr$409 = FBGETOPTION( 27ll );
			TMP$184$3 = (int32)vr$409;
			int32 vr$413 = fb_FilePutLarge( (int32)F$3, 533ll, (void*)&TMP$184$3, 4ull );
			if( (int64)vr$413 == 0ll ) goto label$283;
			void* vr$416 = fb_ErrorThrowAt( 940, (uint8*)"fbc-1.01.0/src/compiler/fbc.bas", (void*)0ull, (void*)0ull );
			goto *vr$416;
			label$283:;
			int32 vr$418 = fb_FileClose( (int32)F$3 );
			if( (int64)vr$418 == 0ll ) goto label$284;
			void* vr$421 = fb_ErrorThrowAt( 942, (uint8*)"fbc-1.01.0/src/compiler/fbc.bas", (void*)0ull, (void*)0ull );
			goto *vr$421;
			label$284:;
		}
		goto label$278;
		label$285:;
		{
			int64 vr$422 = FBGETOPTION( 0ll );
			if( vr$422 != 2ll ) goto label$287;
			{
				int64 vr$426 = MAKEIMPLIB( &DLLNAME$1, &DEFFILE$1 );
				if( vr$426 != 0ll ) goto label$289;
				{
					fb_StrDelete( &DEFFILE$1 );
					fb_StrDelete( &DLLNAME$1 );
					fb_StrDelete( &LDCLINE$1 );
					goto label$152;
				}
				label$289:;
				label$288:;
			}
			label$287:;
			label$286:;
		}
		goto label$278;
		label$290:;
		{
			FBSTRING TMP$196$3;
			int64 TMP$201$3;
			FBSTRING TMP$202$3;
			FBSTRING TMP$203$3;
			FBSTRING CXBEPATH$3;
			__builtin_memset( &CXBEPATH$3, 0, 24ll );
			FBSTRING CXBECLINE$3;
			__builtin_memset( &CXBECLINE$3, 0, 24ll );
			int64 RES$3;
			int64 vr$434 = fb_StrLen( (void*)((uint8*)&FBC$ + 2424ll), 129ll );
			if( vr$434 != 0ll ) goto label$292;
			{
				FBSTRING TMP$185$4;
				__builtin_memset( &TMP$185$4, 0, 24ll );
				FBSTRING* vr$439 = fb_StrAssign( (void*)&TMP$185$4, -1ll, (void*)((uint8*)&FBC$ + 856ll), 261ll, 0 );
				FBSTRING* vr$441 = HSTRIPEXT( &TMP$185$4 );
				fb_StrAssign( (void*)((uint8*)&FBC$ + 2424ll), 129ll, (void*)vr$441, -1ll, 0 );
				fb_StrDelete( &TMP$185$4 );
			}
			label$292:;
			label$291:;
			FBSTRING* vr$445 = fb_StrAssign( (void*)&CXBECLINE$3, -1ll, (void*)"-TITLE:\x22", 9ll, 0 );
			FBSTRING* vr$448 = fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)((uint8*)&FBC$ + 2424ll), 129ll, 0 );
			FBSTRING* vr$450 = fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)"\x22 ", 3ll, 0 );
			int64 vr$451 = FBGETOPTION( 12ll );
			if( vr$451 == 0ll ) goto label$294;
			{
				FBSTRING TMP$191$4;
				FBSTRING* vr$454 = fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)"-DUMPINFO:\x22", 12ll, 0 );
				__builtin_memset( &TMP$191$4, 0, 24ll );
				FBSTRING* vr$458 = fb_StrAssign( (void*)&TMP$191$4, -1ll, (void*)((uint8*)&FBC$ + 856ll), 261ll, 0 );
				FBSTRING* vr$460 = HSTRIPEXT( &TMP$191$4 );
				FBSTRING* vr$462 = fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)vr$460, -1ll, 0 );
				FBSTRING* vr$464 = fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)".cxbe\x22", 7ll, 0 );
				fb_StrDelete( &TMP$191$4 );
			}
			label$294:;
			label$293:;
			FBSTRING* vr$467 = fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)" -OUT:\x22", 8ll, 0 );
			__builtin_memset( &TMP$196$3, 0, 24ll );
			FBSTRING* vr$471 = fb_StrAssign( (void*)&TMP$196$3, -1ll, (void*)((uint8*)&FBC$ + 856ll), 261ll, 0 );
			FBSTRING* vr$473 = HSTRIPEXT( &TMP$196$3 );
			FBSTRING* vr$475 = fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)vr$473, -1ll, 0 );
			FBSTRING* vr$477 = fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)".xbe", 5ll, 0 );
			FBSTRING* vr$479 = fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)"\x22", 2ll, 0 );
			fb_StrDelete( &TMP$196$3 );
			FBSTRING* vr$482 = fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)" \x22", 3ll, 0 );
			FBSTRING* vr$485 = fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)((uint8*)&FBC$ + 856ll), 261ll, 0 );
			FBSTRING* vr$487 = fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)"\x22", 2ll, 0 );
			if( *(int64*)((uint8*)&FBC$ + 112ll) != 0ll ) goto label$296;
			{
				FBSTRING* vr$490 = fb_StrConcatAssign( (void*)&CXBECLINE$3, -1ll, (void*)" >nul", 6ll, 0 );
			}
			label$296:;
			label$295:;
			if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$298;
			{
				FBSTRING* vr$492 = fb_StrAllocTempDescZEx( (uint8*)"cxbe: ", 6ll );
				fb_PrintString( 0, vr$492, 2 );
				fb_PrintString( 0, &CXBECLINE$3, 1 );
			}
			label$298:;
			label$297:;
			TMP$201$3 = 0ll;
			FBCFINDBIN( 8ll, &CXBEPATH$3, &TMP$201$3 );
			__builtin_memset( &TMP$202$3, 0, 24ll );
			FBSTRING* vr$500 = fb_StrConcat( &TMP$202$3, (void*)&CXBEPATH$3, -1ll, (void*)" ", 2ll );
			__builtin_memset( &TMP$203$3, 0, 24ll );
			FBSTRING* vr$503 = fb_StrConcat( &TMP$203$3, (void*)vr$500, -1ll, (void*)&CXBECLINE$3, -1ll );
			int32 vr$504 = fb_Shell( vr$503 );
			RES$3 = (int64)vr$504;
			if( RES$3 == 0ll ) goto label$300;
			{
				if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$302;
				{
					FBSTRING TMP$205$5;
					FBSTRING* vr$508 = fb_LongintToStr( RES$3 );
					__builtin_memset( &TMP$205$5, 0, 24ll );
					FBSTRING* vr$511 = fb_StrConcat( &TMP$205$5, (void*)"cxbe failed: exit code ", 24ll, (void*)vr$508, -1ll );
					fb_PrintString( 0, vr$511, 1 );
				}
				label$302:;
				label$301:;
				fb_StrDelete( &CXBECLINE$3 );
				fb_StrDelete( &CXBEPATH$3 );
				fb_StrDelete( &DEFFILE$1 );
				fb_StrDelete( &DLLNAME$1 );
				fb_StrDelete( &LDCLINE$1 );
				goto label$152;
			}
			label$300:;
			label$299:;
			FBSTRING* vr$518 = fb_StrAllocTempDescZ( (uint8*)((uint8*)&FBC$ + 856ll) );
			fb_FileKill( vr$518 );
			fb_StrDelete( &CXBECLINE$3 );
			fb_StrDelete( &CXBEPATH$3 );
		}
		goto label$278;
		label$279:;
		static const void* tmp$635[5ll] = {
			&&label$285,
			&&label$285,
			&&label$278,
			&&label$280,
			&&label$290,
		};
		if( TMP$183$2 > 4ll ) goto label$278;
		goto *tmp$635[TMP$183$2 - 0ll];
		label$278:;
	}
	fb$result$1 = -1ll;
	fb_StrDelete( &DEFFILE$1 );
	fb_StrDelete( &DLLNAME$1 );
	fb_StrDelete( &LDCLINE$1 );
	label$152:;
	return fb$result$1;
}

static void HREADOBJINFO( void )
{
	label$303:;
	FBSTRING DAT$1;
	__builtin_memset( &DAT$1, 0, 24ll );
	int64 LANG$1;
	label$305:;
	{
		{
			uint64 TMP$206$3;
			int64 vr$2 = OBJINFOREADNEXT( &DAT$1 );
			TMP$206$3 = (uint64)vr$2;
			goto label$309;
			label$310:;
			{
				STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 680ll), &DAT$1, 0ll );
			}
			goto label$308;
			label$311:;
			{
				STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 768ll), &DAT$1, 0ll );
			}
			goto label$308;
			label$312:;
			{
				if( *(int64*)((uint8*)&FBC$ + 3632ll) != 0ll ) goto label$314;
				{
					uint8* vr$8 = OBJINFOGETFILENAME(  );
					ERRREPORTWARNEX( 20ll, vr$8, -1ll, 1ll );
					*(int64*)((uint8*)&FBC$ + 3632ll) = -1ll;
					FBSETOPTION( 24ll, -1ll );
				}
				label$314:;
				label$313:;
			}
			goto label$308;
			label$315:;
			{
				FBSETOPTION( 25ll, -1ll );
			}
			goto label$308;
			label$316:;
			{
				$7FB_LANG vr$9 = FBGETLANGID( *(uint8**)&DAT$1 );
				LANG$1 = vr$9;
				if( LANG$1 != -1ll ) goto label$318;
				{
					LANG$1 = 0ll;
				}
				label$318:;
				label$317:;
				if( LANG$1 == *(int64*)((uint8*)&FBC$ + 3624ll) ) goto label$320;
				{
					uint8* vr$12 = OBJINFOGETFILENAME(  );
					ERRREPORTWARNEX( 21ll, vr$12, -1ll, 1ll );
					*($7FB_LANG*)((uint8*)&FBC$ + 3624ll) = LANG$1;
					FBSETOPTION( 10ll, LANG$1 );
				}
				label$320:;
				label$319:;
			}
			goto label$308;
			label$321:;
			{
				goto label$306;
			}
			goto label$308;
			label$309:;
			static const void* tmp$636[5ll] = {
				&&label$310,
				&&label$311,
				&&label$312,
				&&label$315,
				&&label$316,
			};
			if( TMP$206$3 > 4ll ) goto label$321;
			goto *tmp$636[TMP$206$3 - 0ll];
			label$308:;
		}
	}
	label$307:;
	goto label$305;
	label$306:;
	OBJINFOREADEND(  );
	fb_StrDelete( &DAT$1 );
	label$304:;
}

static void HCOLLECTOBJINFO( void )
{
	label$322:;
	FBSTRING* S$1;
	struct $11TSTRSETITEM* I$1;
	void* vr$1 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 376ll) );
	S$1 = (FBSTRING*)vr$1;
	label$324:;
	if( S$1 == (FBSTRING*)0ull ) goto label$325;
	{
		OBJINFOREADOBJ( S$1 );
		HREADOBJINFO(  );
		void* vr$3 = LISTGETNEXT( (void*)S$1 );
		S$1 = (FBSTRING*)vr$3;
	}
	goto label$324;
	label$325:;
	void* vr$5 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 680ll) );
	I$1 = (struct $11TSTRSETITEM*)vr$5;
	label$326:;
	if( I$1 == (struct $11TSTRSETITEM*)0ull ) goto label$327;
	{
		if( *(int64*)((uint8*)I$1 + 24ll) != 0ll ) goto label$329;
		{
			OBJINFOREADLIB( (FBSTRING*)I$1, (struct $5TLIST*)((uint8*)&FBC$ + 768ll) );
			HREADOBJINFO(  );
		}
		label$329:;
		label$328:;
		void* vr$12 = LISTGETNEXT( (void*)I$1 );
		I$1 = (struct $11TSTRSETITEM*)vr$12;
	}
	goto label$326;
	label$327:;
	void* vr$14 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 440ll) );
	S$1 = (FBSTRING*)vr$14;
	label$330:;
	if( S$1 == (FBSTRING*)0ull ) goto label$331;
	{
		OBJINFOREADLIBFILE( S$1 );
		HREADOBJINFO(  );
		void* vr$16 = LISTGETNEXT( (void*)S$1 );
		S$1 = (FBSTRING*)vr$16;
	}
	goto label$330;
	label$331:;
	label$323:;
}

static void HFATALINVALIDOPTION( FBSTRING* ARG$1 )
{
	FBSTRING TMP$207$1;
	FBSTRING TMP$208$1;
	FBSTRING TMP$209$1;
	label$332:;
	__builtin_memset( &TMP$209$1, 0, 24ll );
	__builtin_memset( &TMP$207$1, 0, 24ll );
	FBSTRING* vr$3 = fb_StrConcat( &TMP$207$1, (void*)"\x22", 2ll, (void*)ARG$1, -1ll );
	__builtin_memset( &TMP$208$1, 0, 24ll );
	FBSTRING* vr$6 = fb_StrConcat( &TMP$208$1, (void*)vr$3, -1ll, (void*)"\x22", 2ll );
	FBSTRING* vr$8 = fb_StrAssign( (void*)&TMP$209$1, -1ll, (void*)vr$6, -1ll, 0 );
	ERRREPORTEX( 80ll, *(uint8**)&TMP$209$1, -1ll, 1ll, (uint8*)0ull );
	fb_StrDelete( &TMP$209$1 );
	FBCEND( 1ll );
	label$333:;
}

static void HCHECKWAITINGOBJFILE( void )
{
	label$334:;
	int64 vr$1 = fb_StrLen( (void*)((uint8*)&FBC$ + 16ll), -1ll );
	if( vr$1 <= 0ll ) goto label$337;
	{
		FBSTRING TMP$210$2;
		FBSTRING TMP$211$2;
		__builtin_memset( &TMP$211$2, 0, 24ll );
		__builtin_memset( &TMP$210$2, 0, 24ll );
		FBSTRING* vr$7 = fb_StrConcat( &TMP$210$2, (void*)"-o ", 4ll, (void*)((uint8*)&FBC$ + 16ll), -1ll );
		FBSTRING* vr$9 = fb_StrAssign( (void*)&TMP$211$2, -1ll, (void*)vr$7, -1ll, 0 );
		ERRREPORTEX( 291ll, *(uint8**)&TMP$211$2, -1ll, 1ll, (uint8*)0ull );
		fb_StrDelete( &TMP$211$2 );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 16ll), -1ll, (void*)"", 1ll, 0 );
	}
	label$337:;
	label$336:;
	label$335:;
}

static void HSETIOFILE( struct $9FBCIOFILE* MODULE$1, FBSTRING* SRCFILE$1, int64 IS_RC$1 )
{
	label$338:;
	FBSTRING* vr$2 = fb_StrAssign( (void*)MODULE$1, -1ll, (void*)SRCFILE$1, -1ll, 0 );
	int64 vr$4 = fb_StrLen( (void*)((uint8*)&FBC$ + 16ll), -1ll );
	if( vr$4 != 0ll ) goto label$341;
	{
		*(int64*)((uint8*)MODULE$1 + 32ll) = 0ll;
		if( IS_RC$1 == 0ll ) goto label$343;
		{
			FBSTRING TMP$213$3;
			__builtin_memset( &TMP$213$3, 0, 24ll );
			FBSTRING* vr$10 = fb_StrConcat( &TMP$213$3, (void*)SRCFILE$1, -1ll, (void*)".o", 3ll );
			FBSTRING* vr$12 = fb_StrAssign( (void*)((uint8*)&FBC$ + 16ll), -1ll, (void*)vr$10, -1ll, 0 );
		}
		goto label$342;
		label$343:;
		{
			FBSTRING TMP$214$3;
			FBSTRING* vr$13 = HSTRIPEXT( SRCFILE$1 );
			__builtin_memset( &TMP$214$3, 0, 24ll );
			FBSTRING* vr$16 = fb_StrConcat( &TMP$214$3, (void*)vr$13, -1ll, (void*)".o", 3ll );
			FBSTRING* vr$18 = fb_StrAssign( (void*)((uint8*)&FBC$ + 16ll), -1ll, (void*)vr$16, -1ll, 0 );
		}
		label$342:;
		*(struct $9FBCIOFILE**)((uint8*)&FBC$ + 8ll) = MODULE$1;
	}
	goto label$340;
	label$341:;
	{
		*(int64*)((uint8*)MODULE$1 + 32ll) = -1ll;
	}
	label$340:;
	FBSTRING* vr$21 = FBCADDOBJ( (FBSTRING*)((uint8*)&FBC$ + 16ll) );
	*(FBSTRING**)((uint8*)MODULE$1 + 24ll) = vr$21;
	fb_StrAssign( (void*)((uint8*)&FBC$ + 16ll), -1ll, (void*)"", 1ll, 0 );
	label$339:;
}

static void HADDBAS( FBSTRING* BASFILE$1 )
{
	label$344:;
	void* vr$1 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&FBC$ + 144ll) );
	HSETIOFILE( (struct $9FBCIOFILE*)vr$1, BASFILE$1, 0ll );
	label$345:;
}

static void HPARSEGNUTRIPLET( FBSTRING* ARG$1, int64 SEPARATOR$1, int64* OS$1, int64* CPUTYPE$1 )
{
	label$346:;
	{
		int64 I$2;
		I$2 = 0ll;
		label$351:;
		{
			FBSTRING* vr$1 = fb_StrAllocTempDescZ( *(uint8**)((uint8*)GNUOSMAP$ + (I$2 << 4ll)) );
			int64 vr$2 = fb_StrInstr( 1ll, ARG$1, vr$1 );
			if( vr$2 <= 0ll ) goto label$353;
			{
				*OS$1 = *(int64*)(((uint8*)GNUOSMAP$ + (I$2 << 4ll)) + 8ll);
				goto label$350;
			}
			label$353:;
			label$352:;
		}
		label$349:;
		I$2 = I$2 + 1ll;
		label$348:;
		if( I$2 <= 8ll ) goto label$351;
		label$350:;
	}
	if( SEPARATOR$1 <= 0ll ) goto label$355;
	{
		FBSTRING ARCH$2;
		FBSTRING* vr$10 = fb_LEFT( ARG$1, SEPARATOR$1 + -1ll );
		FBSTRING* vr$12 = fb_StrInit( (void*)&ARCH$2, -1ll, (void*)vr$10, -1ll, 0 );
		{
			int64 I$3;
			I$3 = 0ll;
			label$359:;
			{
				int32 vr$15 = fb_StrCompare( (void*)&ARCH$2, -1ll, *(void**)((uint8*)GNUARCHMAP$ + (I$3 << 4ll)), 0ll );
				if( (int64)vr$15 != 0ll ) goto label$361;
				{
					*CPUTYPE$1 = *(int64*)(((uint8*)GNUARCHMAP$ + (I$3 << 4ll)) + 8ll);
					goto label$358;
				}
				label$361:;
				label$360:;
			}
			label$357:;
			I$3 = I$3 + 1ll;
			label$356:;
			if( I$3 <= 10ll ) goto label$359;
			label$358:;
		}
		fb_StrDelete( &ARCH$2 );
	}
	label$355:;
	label$354:;
	label$347:;
}

static void HPARSETARGETARG( FBSTRING* ARG$1, int64* OS$1, int64* CPUTYPE$1, int64* IS_GNU_TRIPLET$1 )
{
	label$362:;
	*OS$1 = -1ll;
	*CPUTYPE$1 = -1ll;
	*IS_GNU_TRIPLET$1 = 0ll;
	FBSTRING LCASEARG$1;
	FBSTRING* vr$3 = fb_StrLcase2( ARG$1, 0 );
	FBSTRING* vr$5 = fb_StrInit( (void*)&LCASEARG$1, -1ll, (void*)vr$3, -1ll, 0 );
	{
		int64 I$2;
		I$2 = 0ll;
		label$367:;
		{
			int32 vr$8 = fb_StrCompare( (void*)&LCASEARG$1, -1ll, *(void**)((uint8*)FBOSARCHMAP$ + (I$2 * 24ll)), 0ll );
			if( (int64)vr$8 != 0ll ) goto label$369;
			{
				*OS$1 = *(int64*)(((uint8*)FBOSARCHMAP$ + (I$2 * 24ll)) + 8ll);
				*CPUTYPE$1 = *(int64*)(((uint8*)FBOSARCHMAP$ + (I$2 * 24ll)) + 16ll);
				fb_StrDelete( &LCASEARG$1 );
				goto label$363;
			}
			label$369:;
			label$368:;
		}
		label$365:;
		I$2 = I$2 + 1ll;
		label$364:;
		if( I$2 <= 9ll ) goto label$367;
		label$366:;
	}
	int64 SEPARATOR$1;
	FBSTRING* vr$18 = fb_StrAllocTempDescZEx( (uint8*)"-", 1ll );
	int64 vr$19 = fb_StrInstr( 1ll, ARG$1, vr$18 );
	SEPARATOR$1 = vr$19;
	if( SEPARATOR$1 <= 0ll ) goto label$371;
	{
		FBSTRING TMP$242$2;
		FBSTRING TMP$243$2;
		__builtin_memset( &TMP$242$2, 0, 24ll );
		FBSTRING* vr$24 = fb_LEFT( &LCASEARG$1, SEPARATOR$1 + -1ll );
		FBSTRING* vr$26 = fb_StrAssign( (void*)&TMP$242$2, -1ll, (void*)vr$24, -1ll, 0 );
		int64 vr$28 = FBIDENTIFYOS( &TMP$242$2 );
		*OS$1 = vr$28;
		fb_StrDelete( &TMP$242$2 );
		__builtin_memset( &TMP$243$2, 0, 24ll );
		int64 vr$33 = fb_StrLen( (void*)&LCASEARG$1, -1ll );
		FBSTRING* vr$36 = fb_RIGHT( &LCASEARG$1, vr$33 - SEPARATOR$1 );
		FBSTRING* vr$38 = fb_StrAssign( (void*)&TMP$243$2, -1ll, (void*)vr$36, -1ll, 0 );
		int64 vr$40 = FBCPUTYPEFROMCPUFAMILYID( &TMP$243$2 );
		*CPUTYPE$1 = vr$40;
		fb_StrDelete( &TMP$243$2 );
	}
	label$371:;
	label$370:;
	if( ((int64)-(*OS$1 < 0ll) & (int64)-(*CPUTYPE$1 < 0ll)) == 0ll ) goto label$373;
	{
		HPARSEGNUTRIPLET( ARG$1, SEPARATOR$1, OS$1, CPUTYPE$1 );
		*IS_GNU_TRIPLET$1 = -1ll;
	}
	label$373:;
	label$372:;
	fb_StrDelete( &LCASEARG$1 );
	label$363:;
}

static void HANDLEOPT( int64 OPTID$1, FBSTRING* ARG$1 )
{
	label$374:;
	{
		uint64 TMP$246$2;
		TMP$246$2 = (uint64)OPTID$1;
		goto label$377;
		label$378:;
		{
			FBCADDOBJ( ARG$1 );
		}
		goto label$376;
		label$379:;
		{
			int32 vr$0 = fb_StrCompare( (void*)ARG$1, -1ll, (void*)"native", 7ll );
			*(int64*)((uint8*)&FBC$ + 56ll) = (int64)-((int64)vr$0 == 0ll);
			int64 vr$3 = FBIDENTIFYFBCARCH( ARG$1 );
			*(int64*)((uint8*)&FBC$ + 48ll) = vr$3;
			if( *(int64*)((uint8*)&FBC$ + 48ll) >= 0ll ) goto label$381;
			{
				FBSTRING TMP$249$4;
				FBSTRING TMP$250$4;
				__builtin_memset( &TMP$250$4, 0, 24ll );
				__builtin_memset( &TMP$249$4, 0, 24ll );
				FBSTRING* vr$8 = fb_StrConcat( &TMP$249$4, (void*)"-arch ", 7ll, (void*)ARG$1, -1ll );
				FBSTRING* vr$10 = fb_StrAssign( (void*)&TMP$250$4, -1ll, (void*)vr$8, -1ll, 0 );
				HFATALINVALIDOPTION( &TMP$250$4 );
				fb_StrDelete( &TMP$250$4 );
			}
			label$381:;
			label$380:;
		}
		goto label$376;
		label$382:;
		{
			{
				FBSTRING TMP$251$4;
				FBSTRING* vr$14 = fb_StrInit( (void*)&TMP$251$4, -1ll, (void*)ARG$1, -1ll, 0 );
				int32 vr$16 = fb_StrCompare( (void*)&TMP$251$4, -1ll, (void*)"att", 4ll );
				if( (int64)vr$16 != 0ll ) goto label$384;
				label$385:;
				{
					*(int64*)((uint8*)&FBC$ + 64ll) = 1ll;
				}
				goto label$383;
				label$384:;
				int32 vr$20 = fb_StrCompare( (void*)&TMP$251$4, -1ll, (void*)"intel", 6ll );
				if( (int64)vr$20 != 0ll ) goto label$386;
				label$387:;
				{
					*(int64*)((uint8*)&FBC$ + 64ll) = 0ll;
				}
				goto label$383;
				label$386:;
				{
					HFATALINVALIDOPTION( ARG$1 );
				}
				label$388:;
				label$383:;
				fb_StrDelete( &TMP$251$4 );
			}
		}
		goto label$376;
		label$389:;
		{
			HADDBAS( ARG$1 );
		}
		goto label$376;
		label$390:;
		{
			FBSETOPTION( 0ll, 3ll );
			*(int64*)((uint8*)&FBC$ + 104ll) = -1ll;
		}
		goto label$376;
		label$391:;
		{
			*(int64*)((uint8*)&FBC$ + 104ll) = -1ll;
		}
		goto label$376;
		label$392:;
		{
			FBADDPREDEFINE( ARG$1 );
		}
		goto label$376;
		label$393:;
		{
			FBSETOPTION( 0ll, 2ll );
		}
		goto label$376;
		label$394:;
		{
			FBSETOPTION( 13ll, -1ll );
		}
		goto label$376;
		label$395:;
		{
			FBSETOPTION( 13ll, -1ll );
			FBSETOPTION( 14ll, -1ll );
		}
		goto label$376;
		label$396:;
		{
			FBSETOPTION( 13ll, -1ll );
			FBSETOPTION( 14ll, -1ll );
			FBSETOPTION( 15ll, -1ll );
		}
		goto label$376;
		label$397:;
		{
			FBSETOPTION( 22ll, -1ll );
		}
		goto label$376;
		label$398:;
		{
			int64 VALUE$3;
			$7FB_LANG vr$25 = FBGETLANGID( *(uint8**)ARG$1 );
			VALUE$3 = vr$25;
			if( VALUE$3 != -1ll ) goto label$400;
			{
				HFATALINVALIDOPTION( ARG$1 );
			}
			label$400:;
			label$399:;
			FBSETOPTION( 10ll, VALUE$3 );
			FBSETOPTION( 11ll, -1ll );
			*($7FB_LANG*)((uint8*)&FBC$ + 3624ll) = VALUE$3;
		}
		goto label$376;
		label$401:;
		{
			int64 VALUE$3;
			{
				FBSTRING TMP$254$4;
				FBSTRING* vr$27 = fb_StrUcase2( ARG$1, 0 );
				FBSTRING* vr$29 = fb_StrInit( (void*)&TMP$254$4, -1ll, (void*)vr$27, -1ll, 0 );
				int32 vr$31 = fb_StrCompare( (void*)&TMP$254$4, -1ll, (void*)"PRECISE", 8ll );
				if( (int64)vr$31 != 0ll ) goto label$403;
				label$404:;
				{
					VALUE$3 = 0ll;
				}
				goto label$402;
				label$403:;
				int32 vr$35 = fb_StrCompare( (void*)&TMP$254$4, -1ll, (void*)"FAST", 5ll );
				if( (int64)vr$35 != 0ll ) goto label$405;
				label$406:;
				{
					VALUE$3 = 1ll;
				}
				goto label$402;
				label$405:;
				{
					HFATALINVALIDOPTION( ARG$1 );
				}
				label$407:;
				label$402:;
				fb_StrDelete( &TMP$254$4 );
			}
			FBSETOPTION( 6ll, VALUE$3 );
		}
		goto label$376;
		label$408:;
		{
			int64 VALUE$3;
			{
				FBSTRING TMP$257$4;
				FBSTRING* vr$39 = fb_StrUcase2( ARG$1, 0 );
				FBSTRING* vr$41 = fb_StrInit( (void*)&TMP$257$4, -1ll, (void*)vr$39, -1ll, 0 );
				int32 vr$43 = fb_StrCompare( (void*)&TMP$257$4, -1ll, (void*)"X87", 4ll );
				if( (int64)vr$43 == 0ll ) goto label$411;
				label$412:;
				int32 vr$47 = fb_StrCompare( (void*)&TMP$257$4, -1ll, (void*)"FPU", 4ll );
				if( (int64)vr$47 != 0ll ) goto label$410;
				label$411:;
				{
					VALUE$3 = 0ll;
				}
				goto label$409;
				label$410:;
				int32 vr$51 = fb_StrCompare( (void*)&TMP$257$4, -1ll, (void*)"SSE", 4ll );
				if( (int64)vr$51 != 0ll ) goto label$413;
				label$414:;
				{
					VALUE$3 = 1ll;
				}
				goto label$409;
				label$413:;
				{
					HFATALINVALIDOPTION( ARG$1 );
				}
				label$415:;
				label$409:;
				fb_StrDelete( &TMP$257$4 );
			}
			FBSETOPTION( 5ll, VALUE$3 );
		}
		goto label$376;
		label$416:;
		{
			FBSETOPTION( 12ll, -1ll );
		}
		goto label$376;
		label$417:;
		{
			{
				FBSTRING TMP$261$4;
				FBSTRING* vr$55 = fb_StrLcase2( ARG$1, 0 );
				FBSTRING* vr$57 = fb_StrInit( (void*)&TMP$261$4, -1ll, (void*)vr$55, -1ll, 0 );
				int32 vr$59 = fb_StrCompare( (void*)&TMP$261$4, -1ll, (void*)"gas", 4ll );
				if( (int64)vr$59 != 0ll ) goto label$419;
				label$420:;
				{
					*(int64*)((uint8*)&FBC$ + 40ll) = 0ll;
				}
				goto label$418;
				label$419:;
				int32 vr$63 = fb_StrCompare( (void*)&TMP$261$4, -1ll, (void*)"gcc", 4ll );
				if( (int64)vr$63 != 0ll ) goto label$421;
				label$422:;
				{
					*(int64*)((uint8*)&FBC$ + 40ll) = 1ll;
				}
				goto label$418;
				label$421:;
				int32 vr$67 = fb_StrCompare( (void*)&TMP$261$4, -1ll, (void*)"llvm", 5ll );
				if( (int64)vr$67 != 0ll ) goto label$423;
				label$424:;
				{
					*(int64*)((uint8*)&FBC$ + 40ll) = 2ll;
				}
				goto label$418;
				label$423:;
				{
					HFATALINVALIDOPTION( ARG$1 );
				}
				label$425:;
				label$418:;
				fb_StrDelete( &TMP$261$4 );
			}
		}
		goto label$376;
		label$426:;
		{
			*(int64*)((uint8*)&FBC$ + 128ll) = -1ll;
		}
		goto label$376;
		label$427:;
		{
			FBSTRING TMP$264$3;
			__builtin_memset( &TMP$264$3, 0, 24ll );
			FBSTRING* vr$72 = PATHSTRIPDIV( ARG$1 );
			FBSTRING* vr$74 = fb_StrAssign( (void*)&TMP$264$3, -1ll, (void*)vr$72, -1ll, 0 );
			FBADDINCLUDEPATH( &TMP$264$3 );
			fb_StrDelete( &TMP$264$3 );
		}
		goto label$376;
		label$428:;
		{
			FBADDPREINCLUDE( ARG$1 );
		}
		goto label$376;
		label$429:;
		{
			STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 504ll), ARG$1, 0ll );
		}
		goto label$376;
		label$430:;
		{
			int64 VALUE$3;
			$7FB_LANG vr$79 = FBGETLANGID( *(uint8**)ARG$1 );
			VALUE$3 = vr$79;
			if( VALUE$3 != -1ll ) goto label$432;
			{
				HFATALINVALIDOPTION( ARG$1 );
			}
			label$432:;
			label$431:;
			FBSETOPTION( 10ll, VALUE$3 );
			*($7FB_LANG*)((uint8*)&FBC$ + 3624ll) = VALUE$3;
		}
		goto label$376;
		label$433:;
		{
			FBSETOPTION( 0ll, 1ll );
		}
		goto label$376;
		label$434:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 1117ll), 261ll, (void*)ARG$1, -1ll, 0 );
			*(int64*)((uint8*)&FBC$ + 1384ll) = -1ll;
		}
		goto label$376;
		label$435:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 1392ll), 261ll, (void*)ARG$1, -1ll, 0 );
		}
		goto label$376;
		label$436:;
		{
			int64 VALUE$3;
			int32 vr$83 = fb_StrCompare( (void*)ARG$1, -1ll, (void*)"inf", 4ll );
			if( (int64)vr$83 != 0ll ) goto label$438;
			{
				VALUE$3 = 2147483647ll;
			}
			goto label$437;
			label$438:;
			{
				int32 vr$86 = fb_VALINT( ARG$1 );
				VALUE$3 = (int64)vr$86;
				if( VALUE$3 > 0ll ) goto label$440;
				{
					HFATALINVALIDOPTION( ARG$1 );
				}
				label$440:;
				label$439:;
			}
			label$437:;
			FBSETOPTION( 19ll, VALUE$3 );
		}
		goto label$376;
		label$441:;
		{
			FBSETOPTION( 24ll, -1ll );
			*(int64*)((uint8*)&FBC$ + 3632ll) = -1ll;
		}
		goto label$376;
		label$442:;
		{
			*(int64*)((uint8*)&FBC$ + 2560ll) = -1ll;
		}
		goto label$376;
		label$443:;
		{
			FBSETOPTION( 18ll, 0ll );
		}
		goto label$376;
		label$444:;
		{
			HCHECKWAITINGOBJFILE(  );
			if( *(struct $9FBCIOFILE**)((uint8*)&FBC$ + 8ll) == (struct $9FBCIOFILE*)0ull ) goto label$446;
			{
				FBSTRING* vr$91 = fb_StrAssign( *(void**)((uint8*)*(struct $9FBCIOFILE**)((uint8*)&FBC$ + 8ll) + 24ll), -1ll, (void*)ARG$1, -1ll, 0 );
				*(int64*)((uint8*)*(struct $9FBCIOFILE**)((uint8*)&FBC$ + 8ll) + 32ll) = -1ll;
			}
			goto label$445;
			label$446:;
			{
				FBSTRING* vr$94 = fb_StrAssign( (void*)((uint8*)&FBC$ + 16ll), -1ll, (void*)ARG$1, -1ll, 0 );
			}
			label$445:;
		}
		goto label$376;
		label$447:;
		{
			int64 VALUE$3;
			int32 vr$95 = fb_StrCompare( (void*)ARG$1, -1ll, (void*)"max", 4ll );
			if( (int64)vr$95 != 0ll ) goto label$449;
			{
				VALUE$3 = 3ll;
			}
			goto label$448;
			label$449:;
			{
				int32 vr$98 = fb_VALINT( ARG$1 );
				VALUE$3 = (int64)vr$98;
				if( VALUE$3 >= 0ll ) goto label$451;
				{
					VALUE$3 = 0ll;
				}
				goto label$450;
				label$451:;
				if( VALUE$3 <= 3ll ) goto label$452;
				{
					VALUE$3 = 3ll;
				}
				label$452:;
				label$450:;
			}
			label$448:;
			FBSETOPTION( 8ll, VALUE$3 );
		}
		goto label$376;
		label$453:;
		{
			FBSTRING TMP$267$3;
			__builtin_memset( &TMP$267$3, 0, 24ll );
			FBSTRING* vr$103 = PATHSTRIPDIV( ARG$1 );
			FBSTRING* vr$105 = fb_StrAssign( (void*)&TMP$267$3, -1ll, (void*)vr$103, -1ll, 0 );
			STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 592ll), &TMP$267$3, 0ll );
			fb_StrDelete( &TMP$267$3 );
		}
		goto label$376;
		label$454:;
		{
			FBSETOPTION( 26ll, -1ll );
		}
		goto label$376;
		label$455:;
		{
			FBSETOPTION( 1ll, -1ll );
			*(int64*)((uint8*)&FBC$ + 72ll) = -1ll;
		}
		goto label$376;
		label$456:;
		{
			FBSTRING* vr$109 = PATHSTRIPDIV( ARG$1 );
			fb_StrAssign( (void*)((uint8*)&FBC$ + 2576ll), 261ll, (void*)vr$109, -1ll, 0 );
			HREPLACESLASH( (uint8*)((uint8*)&FBC$ + 2576ll), 47ll );
		}
		goto label$376;
		label$457:;
		{
			{
				FBSTRING TMP$268$4;
				FBSTRING* vr$113 = fb_StrInit( (void*)&TMP$268$4, -1ll, (void*)ARG$1, -1ll, 0 );
				int32 vr$115 = fb_StrCompare( (void*)&TMP$268$4, -1ll, (void*)"host", 5ll );
				if( (int64)vr$115 != 0ll ) goto label$459;
				label$460:;
				{
					*(int64*)((uint8*)&FBC$ + 136ll) = 0ll;
				}
				goto label$458;
				label$459:;
				int32 vr$119 = fb_StrCompare( (void*)&TMP$268$4, -1ll, (void*)"target", 7ll );
				if( (int64)vr$119 != 0ll ) goto label$461;
				label$462:;
				{
					*(int64*)((uint8*)&FBC$ + 136ll) = 1ll;
				}
				goto label$458;
				label$461:;
				int32 vr$123 = fb_StrCompare( (void*)&TMP$268$4, -1ll, (void*)"x", 2ll );
				if( (int64)vr$123 != 0ll ) goto label$463;
				label$464:;
				{
					*(int64*)((uint8*)&FBC$ + 136ll) = 2ll;
				}
				goto label$458;
				label$463:;
				{
					HFATALINVALIDOPTION( ARG$1 );
				}
				label$465:;
				label$458:;
				fb_StrDelete( &TMP$268$4 );
			}
		}
		goto label$376;
		label$466:;
		{
			FBSETOPTION( 16ll, -1ll );
		}
		goto label$376;
		label$467:;
		{
			FBSETOPTION( 0ll, 3ll );
			*(int64*)((uint8*)&FBC$ + 72ll) = -1ll;
			*(int64*)((uint8*)&FBC$ + 80ll) = -1ll;
		}
		goto label$376;
		label$468:;
		{
			*(int64*)((uint8*)&FBC$ + 80ll) = -1ll;
		}
		goto label$376;
		label$469:;
		{
			FBSETOPTION( 0ll, 3ll );
			*(int64*)((uint8*)&FBC$ + 88ll) = -1ll;
			*(int64*)((uint8*)&FBC$ + 96ll) = -1ll;
		}
		goto label$376;
		label$470:;
		{
			*(int64*)((uint8*)&FBC$ + 96ll) = -1ll;
		}
		goto label$376;
		label$471:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 1653ll), 129ll, (void*)ARG$1, -1ll, 0 );
		}
		goto label$376;
		label$472:;
		{
			*(int64*)((uint8*)&FBC$ + 2568ll) = -1ll;
		}
		goto label$376;
		label$473:;
		{
			int32 vr$128 = fb_VALINT( ARG$1 );
			FBSETOPTION( 27ll, (int64)vr$128 << 10ll );
		}
		goto label$376;
		label$474:;
		{
			int64 OS$3;
			__builtin_memset( &OS$3, 0, 8ll );
			int64 CPUTYPE$3;
			__builtin_memset( &CPUTYPE$3, 0, 8ll );
			int64 IS_GNU_TRIPLET$3;
			__builtin_memset( &IS_GNU_TRIPLET$3, 0, 8ll );
			HPARSETARGETARG( ARG$1, &OS$3, &CPUTYPE$3, &IS_GNU_TRIPLET$3 );
			if( ((int64)-(OS$3 < 0ll) | (int64)-(CPUTYPE$3 < 0ll)) == 0ll ) goto label$476;
			{
				HFATALINVALIDOPTION( ARG$1 );
			}
			label$476:;
			label$475:;
			FBSETOPTION( 3ll, OS$3 );
			FBSETOPTION( 4ll, CPUTYPE$3 );
			if( (((int64)-(OS$3 != 2ll) | (int64)-(CPUTYPE$3 != 13ll)) | IS_GNU_TRIPLET$3) == 0ll ) goto label$478;
			{
				FBSTRING TMP$272$4;
				fb_StrAssign( (void*)((uint8*)&FBC$ + 2166ll), 129ll, (void*)ARG$1, -1ll, 0 );
				__builtin_memset( &TMP$272$4, 0, 24ll );
				FBSTRING* vr$150 = fb_StrConcat( &TMP$272$4, (void*)((uint8*)&FBC$ + 2166ll), 129ll, (void*)"-", 2ll );
				fb_StrAssign( (void*)((uint8*)&FBC$ + 2295ll), 129ll, (void*)vr$150, -1ll, 0 );
			}
			label$478:;
			label$477:;
		}
		goto label$376;
		label$479:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 2424ll), 129ll, (void*)ARG$1, -1ll, 0 );
		}
		goto label$376;
		label$480:;
		{
			*(int64*)((uint8*)&FBC$ + 112ll) = -1ll;
		}
		goto label$376;
		label$481:;
		{
			int64 VALUE$3;
			{
				FBSTRING TMP$273$4;
				FBSTRING* vr$153 = fb_StrUcase2( ARG$1, 0 );
				FBSTRING* vr$155 = fb_StrInit( (void*)&TMP$273$4, -1ll, (void*)vr$153, -1ll, 0 );
				int32 vr$157 = fb_StrCompare( (void*)&TMP$273$4, -1ll, (void*)"NONE", 5ll );
				if( (int64)vr$157 == 0ll ) goto label$484;
				label$485:;
				int32 vr$161 = fb_StrCompare( (void*)&TMP$273$4, -1ll, (void*)"0", 2ll );
				if( (int64)vr$161 != 0ll ) goto label$483;
				label$484:;
				{
					VALUE$3 = 0ll;
				}
				goto label$482;
				label$483:;
				int32 vr$165 = fb_StrCompare( (void*)&TMP$273$4, -1ll, (void*)"1", 2ll );
				if( (int64)vr$165 != 0ll ) goto label$486;
				label$487:;
				{
					VALUE$3 = 1ll;
				}
				goto label$482;
				label$486:;
				int32 vr$169 = fb_StrCompare( (void*)&TMP$273$4, -1ll, (void*)"2", 2ll );
				if( (int64)vr$169 != 0ll ) goto label$488;
				label$489:;
				{
					VALUE$3 = 2ll;
				}
				goto label$482;
				label$488:;
				{
					HFATALINVALIDOPTION( ARG$1 );
				}
				label$490:;
				label$482:;
				fb_StrDelete( &TMP$273$4 );
			}
			FBSETOPTION( 7ll, VALUE$3 );
		}
		goto label$376;
		label$491:;
		{
			*(int64*)((uint8*)&FBC$ + 120ll) = -1ll;
		}
		goto label$376;
		label$492:;
		{
			int64 VALUE$3;
			VALUE$3 = -2ll;
			{
				FBSTRING TMP$276$4;
				FBSTRING* vr$174 = fb_StrInit( (void*)&TMP$276$4, -1ll, (void*)ARG$1, -1ll, 0 );
				int32 vr$176 = fb_StrCompare( (void*)&TMP$276$4, -1ll, (void*)"all", 4ll );
				if( (int64)vr$176 != 0ll ) goto label$494;
				label$495:;
				{
					VALUE$3 = -1ll;
				}
				goto label$493;
				label$494:;
				int32 vr$180 = fb_StrCompare( (void*)&TMP$276$4, -1ll, (void*)"param", 6ll );
				if( (int64)vr$180 != 0ll ) goto label$496;
				label$497:;
				{
					int64 vr$183 = FBGETOPTION( 20ll );
					FBSETOPTION( 20ll, vr$183 | 2ll );
				}
				goto label$493;
				label$496:;
				int32 vr$186 = fb_StrCompare( (void*)&TMP$276$4, -1ll, (void*)"escape", 7ll );
				if( (int64)vr$186 != 0ll ) goto label$498;
				label$499:;
				{
					int64 vr$189 = FBGETOPTION( 20ll );
					FBSETOPTION( 20ll, vr$189 | 1ll );
				}
				goto label$493;
				label$498:;
				int32 vr$192 = fb_StrCompare( (void*)&TMP$276$4, -1ll, (void*)"next", 5ll );
				if( (int64)vr$192 != 0ll ) goto label$500;
				label$501:;
				{
					int64 vr$195 = FBGETOPTION( 20ll );
					FBSETOPTION( 20ll, vr$195 | 8ll );
				}
				goto label$493;
				label$500:;
				int32 vr$198 = fb_StrCompare( (void*)&TMP$276$4, -1ll, (void*)"signedness", 11ll );
				if( (int64)vr$198 != 0ll ) goto label$502;
				label$503:;
				{
					int64 vr$201 = FBGETOPTION( 20ll );
					FBSETOPTION( 20ll, vr$201 | 32ll );
				}
				goto label$493;
				label$502:;
				int32 vr$204 = fb_StrCompare( (void*)&TMP$276$4, -1ll, (void*)"pedantic", 9ll );
				if( (int64)vr$204 != 0ll ) goto label$504;
				label$505:;
				{
					FBSETOPTION( 20ll, 4294967255ll );
					VALUE$3 = -1ll;
				}
				goto label$493;
				label$504:;
				{
					int32 vr$207 = fb_VALINT( ARG$1 );
					VALUE$3 = (int64)vr$207;
				}
				label$506:;
				label$493:;
				fb_StrDelete( &TMP$276$4 );
			}
			if( VALUE$3 < -1ll ) goto label$508;
			{
				FBSETOPTION( 17ll, VALUE$3 );
			}
			label$508:;
			label$507:;
		}
		goto label$376;
		label$509:;
		{
			FBSTRING TMP$283$3;
			FBSTRING TMP$284$3;
			FBSTRING* vr$212 = HREPLACE( *(uint8**)ARG$1, (uint8*)",", (uint8*)" " );
			__builtin_memset( &TMP$283$3, 0, 24ll );
			FBSTRING* vr$215 = fb_StrConcat( &TMP$283$3, (void*)" ", 2ll, (void*)vr$212, -1ll );
			__builtin_memset( &TMP$284$3, 0, 24ll );
			FBSTRING* vr$218 = fb_StrConcat( &TMP$284$3, (void*)vr$215, -1ll, (void*)" ", 2ll );
			fb_StrAssign( (void*)((uint8*)&FBC$ + 1782ll), 128ll, (void*)vr$218, -1ll, 0 );
		}
		goto label$376;
		label$510:;
		{
			FBSTRING TMP$285$3;
			FBSTRING TMP$286$3;
			FBSTRING* vr$221 = HREPLACE( *(uint8**)ARG$1, (uint8*)",", (uint8*)" " );
			__builtin_memset( &TMP$285$3, 0, 24ll );
			FBSTRING* vr$224 = fb_StrConcat( &TMP$285$3, (void*)" ", 2ll, (void*)vr$221, -1ll );
			__builtin_memset( &TMP$286$3, 0, 24ll );
			FBSTRING* vr$227 = fb_StrConcat( &TMP$286$3, (void*)vr$224, -1ll, (void*)" ", 2ll );
			fb_StrAssign( (void*)((uint8*)&FBC$ + 2038ll), 128ll, (void*)vr$227, -1ll, 0 );
		}
		goto label$376;
		label$511:;
		{
			FBSTRING TMP$287$3;
			FBSTRING TMP$288$3;
			FBSTRING* vr$230 = HREPLACE( *(uint8**)ARG$1, (uint8*)",", (uint8*)" " );
			__builtin_memset( &TMP$287$3, 0, 24ll );
			FBSTRING* vr$233 = fb_StrConcat( &TMP$287$3, (void*)" ", 2ll, (void*)vr$230, -1ll );
			__builtin_memset( &TMP$288$3, 0, 24ll );
			FBSTRING* vr$236 = fb_StrConcat( &TMP$288$3, (void*)vr$233, -1ll, (void*)" ", 2ll );
			fb_StrAssign( (void*)((uint8*)&FBC$ + 1910ll), 128ll, (void*)vr$236, -1ll, 0 );
		}
		goto label$376;
		label$512:;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 856ll), 261ll, (void*)ARG$1, -1ll, 0 );
		}
		goto label$376;
		label$513:;
		{
			{
				FBSTRING TMP$289$4;
				FBSTRING* vr$239 = fb_StrLcase2( ARG$1, 0 );
				FBSTRING* vr$241 = fb_StrInit( (void*)&TMP$289$4, -1ll, (void*)vr$239, -1ll, 0 );
				int32 vr$243 = fb_StrCompare( (void*)&TMP$289$4, -1ll, (void*)"gosub-setjmp", 13ll );
				if( (int64)vr$243 != 0ll ) goto label$515;
				label$516:;
				{
					FBSETOPTION( 21ll, -1ll );
				}
				goto label$514;
				label$515:;
				{
					HFATALINVALIDOPTION( ARG$1 );
				}
				label$517:;
				label$514:;
				fb_StrDelete( &TMP$289$4 );
			}
		}
		goto label$376;
		label$377:;
		static const void* tmp$637[56ll] = {
			&&label$378,
			&&label$379,
			&&label$382,
			&&label$389,
			&&label$390,
			&&label$391,
			&&label$392,
			&&label$393,
			&&label$393,
			&&label$394,
			&&label$395,
			&&label$396,
			&&label$397,
			&&label$398,
			&&label$401,
			&&label$408,
			&&label$416,
			&&label$417,
			&&label$426,
			&&label$427,
			&&label$428,
			&&label$429,
			&&label$430,
			&&label$433,
			&&label$434,
			&&label$435,
			&&label$436,
			&&label$441,
			&&label$442,
			&&label$443,
			&&label$444,
			&&label$447,
			&&label$453,
			&&label$454,
			&&label$455,
			&&label$456,
			&&label$457,
			&&label$466,
			&&label$467,
			&&label$468,
			&&label$469,
			&&label$470,
			&&label$471,
			&&label$472,
			&&label$473,
			&&label$474,
			&&label$479,
			&&label$480,
			&&label$481,
			&&label$491,
			&&label$492,
			&&label$509,
			&&label$510,
			&&label$511,
			&&label$512,
			&&label$513,
		};
		if( TMP$246$2 > 55ll ) goto label$376;
		goto *tmp$637[TMP$246$2 - 0ll];
		label$376:;
	}
	label$375:;
}

static int64 PARSEOPTION( uint8* OPT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$518:;
	{
		uint64 TMP$291$2;
		TMP$291$2 = (uint64)*(uint8*)OPT$1;
		goto label$521;
		label$522:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$524;
			{
				fb$result$1 = 0ll;
				goto label$519;
			}
			label$524:;
			label$523:;
			int32 vr$6 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"arch", 5ll );
			if( (int64)vr$6 != 0ll ) goto label$526;
			{
				fb$result$1 = 1ll;
				goto label$519;
			}
			label$526:;
			label$525:;
			int32 vr$9 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"asm", 4ll );
			if( (int64)vr$9 != 0ll ) goto label$528;
			{
				fb$result$1 = 2ll;
				goto label$519;
			}
			label$528:;
			label$527:;
		}
		goto label$520;
		label$529:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$531;
			{
				fb$result$1 = 3ll;
				goto label$519;
			}
			label$531:;
			label$530:;
		}
		goto label$520;
		label$532:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$534;
			{
				fb$result$1 = 4ll;
				goto label$519;
			}
			label$534:;
			label$533:;
		}
		goto label$520;
		label$535:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$537;
			{
				fb$result$1 = 5ll;
				goto label$519;
			}
			label$537:;
			label$536:;
		}
		goto label$520;
		label$538:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$540;
			{
				fb$result$1 = 6ll;
				goto label$519;
			}
			label$540:;
			label$539:;
			int32 vr$24 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"dll", 4ll );
			if( (int64)vr$24 != 0ll ) goto label$542;
			{
				fb$result$1 = 7ll;
				goto label$519;
			}
			label$542:;
			label$541:;
			int32 vr$27 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"dylib", 6ll );
			if( (int64)vr$27 != 0ll ) goto label$544;
			{
				fb$result$1 = 8ll;
				goto label$519;
			}
			label$544:;
			label$543:;
		}
		goto label$520;
		label$545:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$547;
			{
				fb$result$1 = 9ll;
				goto label$519;
			}
			label$547:;
			label$546:;
			int32 vr$33 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"ex", 3ll );
			if( (int64)vr$33 != 0ll ) goto label$549;
			{
				fb$result$1 = 10ll;
				goto label$519;
			}
			label$549:;
			label$548:;
			int32 vr$36 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"exx", 4ll );
			if( (int64)vr$36 != 0ll ) goto label$551;
			{
				fb$result$1 = 11ll;
				goto label$519;
			}
			label$551:;
			label$550:;
			int32 vr$39 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"export", 7ll );
			if( (int64)vr$39 != 0ll ) goto label$553;
			{
				fb$result$1 = 12ll;
				goto label$519;
			}
			label$553:;
			label$552:;
		}
		goto label$520;
		label$554:;
		{
			int32 vr$42 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"forcelang", 10ll );
			if( (int64)vr$42 != 0ll ) goto label$556;
			{
				fb$result$1 = 13ll;
				goto label$519;
			}
			label$556:;
			label$555:;
			int32 vr$45 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"fpmode", 7ll );
			if( (int64)vr$45 != 0ll ) goto label$558;
			{
				fb$result$1 = 14ll;
				goto label$519;
			}
			label$558:;
			label$557:;
			int32 vr$48 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"fpu", 4ll );
			if( (int64)vr$48 != 0ll ) goto label$560;
			{
				fb$result$1 = 15ll;
				goto label$519;
			}
			label$560:;
			label$559:;
		}
		goto label$520;
		label$561:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$563;
			{
				fb$result$1 = 16ll;
				goto label$519;
			}
			label$563:;
			label$562:;
			int32 vr$54 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"gen", 4ll );
			if( (int64)vr$54 != 0ll ) goto label$565;
			{
				fb$result$1 = 17ll;
				goto label$519;
			}
			label$565:;
			label$564:;
		}
		goto label$520;
		label$566:;
		{
			int32 vr$57 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"help", 5ll );
			if( (int64)vr$57 != 0ll ) goto label$568;
			{
				fb$result$1 = 18ll;
				goto label$519;
			}
			label$568:;
			label$567:;
		}
		goto label$520;
		label$569:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$571;
			{
				fb$result$1 = 19ll;
				goto label$519;
			}
			label$571:;
			label$570:;
			int32 vr$63 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"include", 8ll );
			if( (int64)vr$63 != 0ll ) goto label$573;
			{
				fb$result$1 = 20ll;
				goto label$519;
			}
			label$573:;
			label$572:;
		}
		goto label$520;
		label$574:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$576;
			{
				fb$result$1 = 21ll;
				goto label$519;
			}
			label$576:;
			label$575:;
			int32 vr$69 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"lang", 5ll );
			if( (int64)vr$69 != 0ll ) goto label$578;
			{
				fb$result$1 = 22ll;
				goto label$519;
			}
			label$578:;
			label$577:;
			int32 vr$72 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"lib", 4ll );
			if( (int64)vr$72 != 0ll ) goto label$580;
			{
				fb$result$1 = 23ll;
				goto label$519;
			}
			label$580:;
			label$579:;
		}
		goto label$520;
		label$581:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$583;
			{
				fb$result$1 = 24ll;
				goto label$519;
			}
			label$583:;
			label$582:;
			int32 vr$78 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"map", 4ll );
			if( (int64)vr$78 != 0ll ) goto label$585;
			{
				fb$result$1 = 25ll;
				goto label$519;
			}
			label$585:;
			label$584:;
			int32 vr$81 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"maxerr", 7ll );
			if( (int64)vr$81 != 0ll ) goto label$587;
			{
				fb$result$1 = 26ll;
				goto label$519;
			}
			label$587:;
			label$586:;
			int32 vr$84 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"mt", 3ll );
			if( (int64)vr$84 != 0ll ) goto label$589;
			{
				fb$result$1 = 27ll;
				goto label$519;
			}
			label$589:;
			label$588:;
		}
		goto label$520;
		label$590:;
		{
			int32 vr$87 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"noerrline", 10ll );
			if( (int64)vr$87 != 0ll ) goto label$592;
			{
				fb$result$1 = 29ll;
				goto label$519;
			}
			label$592:;
			label$591:;
			int32 vr$90 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"nodeflibs", 10ll );
			if( (int64)vr$90 != 0ll ) goto label$594;
			{
				fb$result$1 = 28ll;
				goto label$519;
			}
			label$594:;
			label$593:;
		}
		goto label$520;
		label$595:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$597;
			{
				fb$result$1 = 30ll;
				goto label$519;
			}
			label$597:;
			label$596:;
		}
		goto label$520;
		label$598:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$600;
			{
				fb$result$1 = 31ll;
				goto label$519;
			}
			label$600:;
			label$599:;
		}
		goto label$520;
		label$601:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$603;
			{
				fb$result$1 = 32ll;
				goto label$519;
			}
			label$603:;
			label$602:;
			int32 vr$102 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"pic", 4ll );
			if( (int64)vr$102 != 0ll ) goto label$605;
			{
				fb$result$1 = 33ll;
				goto label$519;
			}
			label$605:;
			label$604:;
			int32 vr$105 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"pp", 3ll );
			if( (int64)vr$105 != 0ll ) goto label$607;
			{
				fb$result$1 = 34ll;
				goto label$519;
			}
			label$607:;
			label$606:;
			int32 vr$108 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"prefix", 7ll );
			if( (int64)vr$108 != 0ll ) goto label$609;
			{
				fb$result$1 = 35ll;
				goto label$519;
			}
			label$609:;
			label$608:;
			int32 vr$111 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"print", 6ll );
			if( (int64)vr$111 != 0ll ) goto label$611;
			{
				fb$result$1 = 36ll;
				goto label$519;
			}
			label$611:;
			label$610:;
			int32 vr$114 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"profile", 8ll );
			if( (int64)vr$114 != 0ll ) goto label$613;
			{
				fb$result$1 = 37ll;
				goto label$519;
			}
			label$613:;
			label$612:;
		}
		goto label$520;
		label$614:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$616;
			{
				fb$result$1 = 38ll;
				goto label$519;
			}
			label$616:;
			label$615:;
			int32 vr$120 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"rr", 3ll );
			if( (int64)vr$120 != 0ll ) goto label$618;
			{
				fb$result$1 = 40ll;
				goto label$519;
			}
			label$618:;
			label$617:;
		}
		goto label$520;
		label$619:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$621;
			{
				fb$result$1 = 39ll;
				goto label$519;
			}
			label$621:;
			label$620:;
			int32 vr$126 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"RR", 3ll );
			if( (int64)vr$126 != 0ll ) goto label$623;
			{
				fb$result$1 = 41ll;
				goto label$519;
			}
			label$623:;
			label$622:;
		}
		goto label$520;
		label$624:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$626;
			{
				fb$result$1 = 42ll;
				goto label$519;
			}
			label$626:;
			label$625:;
			int32 vr$132 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"static", 7ll );
			if( (int64)vr$132 != 0ll ) goto label$628;
			{
				fb$result$1 = 43ll;
				goto label$519;
			}
			label$628:;
			label$627:;
		}
		goto label$520;
		label$629:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$631;
			{
				fb$result$1 = 44ll;
				goto label$519;
			}
			label$631:;
			label$630:;
			int32 vr$138 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"target", 7ll );
			if( (int64)vr$138 != 0ll ) goto label$633;
			{
				fb$result$1 = 45ll;
				goto label$519;
			}
			label$633:;
			label$632:;
			int32 vr$141 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"title", 6ll );
			if( (int64)vr$141 != 0ll ) goto label$635;
			{
				fb$result$1 = 46ll;
				goto label$519;
			}
			label$635:;
			label$634:;
		}
		goto label$520;
		label$636:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$638;
			{
				fb$result$1 = 47ll;
				goto label$519;
			}
			label$638:;
			label$637:;
			int32 vr$147 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"vec", 4ll );
			if( (int64)vr$147 != 0ll ) goto label$640;
			{
				fb$result$1 = 48ll;
				goto label$519;
			}
			label$640:;
			label$639:;
			int32 vr$150 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"version", 8ll );
			if( (int64)vr$150 != 0ll ) goto label$642;
			{
				fb$result$1 = 49ll;
				goto label$519;
			}
			label$642:;
			label$641:;
		}
		goto label$520;
		label$643:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$645;
			{
				fb$result$1 = 50ll;
				goto label$519;
			}
			label$645:;
			label$644:;
		}
		goto label$520;
		label$646:;
		{
			int32 vr$156 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"Wa", 3ll );
			if( (int64)vr$156 != 0ll ) goto label$648;
			{
				fb$result$1 = 51ll;
				goto label$519;
			}
			label$648:;
			label$647:;
			int32 vr$159 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"Wl", 3ll );
			if( (int64)vr$159 != 0ll ) goto label$650;
			{
				fb$result$1 = 53ll;
				goto label$519;
			}
			label$650:;
			label$649:;
			int32 vr$162 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"Wc", 3ll );
			if( (int64)vr$162 != 0ll ) goto label$652;
			{
				fb$result$1 = 52ll;
				goto label$519;
			}
			label$652:;
			label$651:;
		}
		goto label$520;
		label$653:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$655;
			{
				fb$result$1 = 54ll;
				goto label$519;
			}
			label$655:;
			label$654:;
		}
		goto label$520;
		label$656:;
		{
			if( (int64)*(uint8*)((uint8*)OPT$1 + 1ll) != 0ll ) goto label$658;
			{
				fb$result$1 = 55ll;
				goto label$519;
			}
			label$658:;
			label$657:;
		}
		goto label$520;
		label$659:;
		{
			int32 vr$171 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"-version", 9ll );
			if( (int64)vr$171 != 0ll ) goto label$661;
			{
				fb$result$1 = 49ll;
				goto label$519;
			}
			label$661:;
			label$660:;
			int32 vr$174 = fb_StrCompare( (void*)OPT$1, 0ll, (void*)"-help", 6ll );
			if( (int64)vr$174 != 0ll ) goto label$663;
			{
				fb$result$1 = 18ll;
				goto label$519;
			}
			label$663:;
			label$662:;
		}
		goto label$520;
		label$521:;
		static const void* tmp$638[78ll] = {
			&&label$659,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$535,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$598,
			&&label$520,
			&&label$520,
			&&label$619,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$646,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$520,
			&&label$522,
			&&label$529,
			&&label$532,
			&&label$538,
			&&label$545,
			&&label$554,
			&&label$561,
			&&label$566,
			&&label$569,
			&&label$520,
			&&label$520,
			&&label$574,
			&&label$581,
			&&label$590,
			&&label$595,
			&&label$601,
			&&label$520,
			&&label$614,
			&&label$624,
			&&label$629,
			&&label$520,
			&&label$636,
			&&label$643,
			&&label$653,
			&&label$520,
			&&label$656,
		};
		if( TMP$291$2 < 45ll ) goto label$520;
		if( TMP$291$2 > 122ll ) goto label$520;
		goto *tmp$638[TMP$291$2 - 45ll];
		label$520:;
	}
	fb$result$1 = -1ll;
	goto label$519;
	label$519:;
	return fb$result$1;
}

static void HANDLEARG( FBSTRING* ARG$1 )
{
	label$664:;
	if( *(int64*)&FBC$ < 0ll ) goto label$667;
	{
		int64 vr$1 = fb_StrLen( (void*)ARG$1, -1ll );
		if( vr$1 != 0ll ) goto label$669;
		{
			HFATALINVALIDOPTION( ARG$1 );
		}
		label$669:;
		label$668:;
		HANDLEOPT( *(int64*)&FBC$, ARG$1 );
		*(int64*)&FBC$ = -1ll;
		goto label$665;
	}
	label$667:;
	label$666:;
	int64 vr$3 = fb_StrLen( (void*)ARG$1, -1ll );
	if( vr$3 != 0ll ) goto label$671;
	{
		goto label$665;
	}
	label$671:;
	label$670:;
	{
		uint8 TMP$351$2;
		TMP$351$2 = *(uint8*)*(uint8**)ARG$1;
		if( (uint64)(int64)TMP$351$2 != 45ull ) goto label$673;
		label$674:;
		{
			uint8* OPT$3;
			OPT$3 = (uint8*)((uint8*)*(uint8**)ARG$1 + 1ll);
			if( (int64)*(uint8*)OPT$3 != 0ll ) goto label$676;
			{
				HFATALINVALIDOPTION( ARG$1 );
			}
			label$676:;
			label$675:;
			int64 OPTID$3;
			int64 vr$14 = PARSEOPTION( OPT$3 );
			OPTID$3 = vr$14;
			if( OPTID$3 >= 0ll ) goto label$678;
			{
				HFATALINVALIDOPTION( ARG$1 );
			}
			label$678:;
			label$677:;
			if( *(int64*)((uint8*)OPTION_TAKES_ARGUMENT$ + (OPTID$3 << 3ll)) == 0ll ) goto label$680;
			{
				*(int64*)&FBC$ = OPTID$3;
			}
			goto label$679;
			label$680:;
			{
				HANDLEOPT( OPTID$3, ARG$1 );
			}
			label$679:;
		}
		goto label$672;
		label$673:;
		if( (uint64)(int64)TMP$351$2 != 64ull ) goto label$681;
		label$682:;
		{
			static int64 RECLEVEL$3 = 0ll;
			if( RECLEVEL$3 <= 128ll ) goto label$684;
			{
				ERRREPORTEX( 27ll, *(uint8**)ARG$1, -1ll, 1ll, (uint8*)0ull );
				FBCEND( 1ll );
			}
			label$684:;
			label$683:;
			int64 vr$22 = fb_StrLen( (void*)ARG$1, -1ll );
			FBSTRING* vr$24 = fb_RIGHT( ARG$1, vr$22 + -1ll );
			FBSTRING* vr$25 = fb_StrAssign( (void*)ARG$1, -1ll, (void*)vr$24, -1ll, 0 );
			int64 vr$26 = fb_StrLen( (void*)ARG$1, -1ll );
			if( vr$26 != 0ll ) goto label$686;
			{
				HFATALINVALIDOPTION( ARG$1 );
			}
			label$686:;
			label$685:;
			RECLEVEL$3 = RECLEVEL$3 + 1ll;
			PARSEARGSFROMFILE( ARG$1 );
			RECLEVEL$3 = RECLEVEL$3 + -1ll;
		}
		goto label$672;
		label$681:;
		{
			FBSTRING EXT$3;
			FBSTRING* vr$31 = HGETFILEEXT( *(uint8**)ARG$1 );
			FBSTRING* vr$33 = fb_StrInit( (void*)&EXT$3, -1ll, (void*)vr$31, -1ll, 0 );
			{
				int32 vr$35 = fb_StrCompare( (void*)&EXT$3, -1ll, (void*)"bas", 4ll );
				if( (int64)vr$35 != 0ll ) goto label$689;
				label$690:;
				{
					HADDBAS( ARG$1 );
				}
				goto label$688;
				label$689:;
				int32 vr$39 = fb_StrCompare( (void*)&EXT$3, -1ll, (void*)"o", 2ll );
				if( (int64)vr$39 != 0ll ) goto label$691;
				label$692:;
				{
					FBCADDOBJ( ARG$1 );
				}
				goto label$688;
				label$691:;
				int32 vr$43 = fb_StrCompare( (void*)&EXT$3, -1ll, (void*)"a", 2ll );
				if( (int64)vr$43 != 0ll ) goto label$693;
				label$694:;
				{
					STRLISTAPPEND( (struct $5TLIST*)((uint8*)&FBC$ + 440ll), ARG$1 );
				}
				goto label$688;
				label$693:;
				int32 vr$48 = fb_StrCompare( (void*)&EXT$3, -1ll, (void*)"rc", 3ll );
				if( (int64)vr$48 == 0ll ) goto label$696;
				label$697:;
				int32 vr$52 = fb_StrCompare( (void*)&EXT$3, -1ll, (void*)"res", 4ll );
				if( (int64)vr$52 != 0ll ) goto label$695;
				label$696:;
				{
					void* vr$56 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&FBC$ + 208ll) );
					HSETIOFILE( (struct $9FBCIOFILE*)vr$56, ARG$1, -1ll );
				}
				goto label$688;
				label$695:;
				int32 vr$58 = fb_StrCompare( (void*)&EXT$3, -1ll, (void*)"xpm", 4ll );
				if( (int64)vr$58 != 0ll ) goto label$698;
				label$699:;
				{
					int64 vr$62 = fb_StrLen( (void*)((uint8*)&FBC$ + 272ll), -1ll );
					if( vr$62 <= 0ll ) goto label$701;
					{
						HFATALINVALIDOPTION( ARG$1 );
					}
					label$701:;
					label$700:;
					HSETIOFILE( (struct $9FBCIOFILE*)((uint8*)&FBC$ + 272ll), ARG$1, -1ll );
				}
				goto label$688;
				label$698:;
				{
					HFATALINVALIDOPTION( ARG$1 );
				}
				label$702:;
				label$688:;
			}
			fb_StrDelete( &EXT$3 );
		}
		label$687:;
		label$672:;
	}
	label$665:;
}

static void PARSEARGSFROMFILE( FBSTRING* FILENAME$1 )
{
	label$703:;
	int64 F$1;
	int32 vr$0 = fb_FileFree(  );
	F$1 = (int64)vr$0;
	int32 vr$3 = fb_FileOpen( FILENAME$1, 2u, 0u, 0u, (int32)F$1, 0 );
	if( (int64)vr$3 == 0ll ) goto label$706;
	{
		ERRREPORTEX( 26ll, *(uint8**)FILENAME$1, -1ll, 1ll, (uint8*)0ull );
		FBCEND( 1ll );
	}
	label$706:;
	label$705:;
	FBSTRING ARGS$1;
	__builtin_memset( &ARGS$1, 0, 24ll );
	FBSTRING ARG$1;
	__builtin_memset( &ARG$1, 0, 24ll );
	label$707:;
	int32 vr$10 = fb_FileEof( (int32)F$1 );
	if( (int64)vr$10 != 0ll ) goto label$708;
	{
		fb_FileLineInput( (int32)F$1, (void*)&ARGS$1, -1ll, 0 );
		FBSTRING* vr$16 = fb_TRIM( &ARGS$1 );
		FBSTRING* vr$18 = fb_StrAssign( (void*)&ARGS$1, -1ll, (void*)vr$16, -1ll, 0 );
		label$709:;
		{
			int64 LENGTH$3;
			int64 vr$20 = fb_StrLen( (void*)&ARGS$1, -1ll );
			LENGTH$3 = vr$20;
			if( LENGTH$3 != 0ll ) goto label$713;
			{
				goto label$710;
			}
			label$713:;
			label$712:;
			int64 I$3;
			I$3 = 0ll;
			int64 QUOTECH$3;
			QUOTECH$3 = 0ll;
			label$714:;
			if( I$3 >= LENGTH$3 ) goto label$715;
			{
				int64 CH$4;
				CH$4 = (int64)*(uint8*)((uint8*)*(uint8**)&ARGS$1 + I$3);
				{
					uint64 TMP$357$5;
					TMP$357$5 = (uint64)CH$4;
					goto label$717;
					label$718:;
					{
						if( QUOTECH$3 != 0ll ) goto label$720;
						{
							goto label$715;
						}
						label$720:;
						label$719:;
					}
					goto label$716;
					label$721:;
					{
						if( QUOTECH$3 != CH$4 ) goto label$723;
						{
							QUOTECH$3 = 0ll;
						}
						goto label$722;
						label$723:;
						if( QUOTECH$3 != 0ll ) goto label$724;
						{
							QUOTECH$3 = CH$4;
						}
						label$724:;
						label$722:;
					}
					goto label$716;
					label$717:;
					static const void* tmp$639[8ll] = {
						&&label$718,
						&&label$716,
						&&label$721,
						&&label$716,
						&&label$716,
						&&label$716,
						&&label$716,
						&&label$721,
					};
					if( TMP$357$5 < 32ll ) goto label$716;
					if( TMP$357$5 > 39ll ) goto label$716;
					goto *tmp$639[TMP$357$5 - 32ll];
					label$716:;
				}
				I$3 = I$3 + 1ll;
			}
			goto label$714;
			label$715:;
			if( I$3 != 0ll ) goto label$726;
			{
				I$3 = 1ll;
			}
			goto label$725;
			label$726:;
			{
				FBSTRING* vr$31 = fb_LEFT( &ARGS$1, I$3 );
				FBSTRING* vr$33 = fb_StrAssign( (void*)&ARG$1, -1ll, (void*)vr$31, -1ll, 0 );
				FBSTRING* vr$35 = fb_TRIM( &ARG$1 );
				FBSTRING* vr$37 = fb_StrAssign( (void*)&ARG$1, -1ll, (void*)vr$35, -1ll, 0 );
				FBSTRING* vr$39 = STRUNQUOTE( &ARG$1 );
				FBSTRING* vr$41 = fb_StrAssign( (void*)&ARG$1, -1ll, (void*)vr$39, -1ll, 0 );
				HANDLEARG( &ARG$1 );
			}
			label$725:;
			FBSTRING* vr$45 = fb_RIGHT( &ARGS$1, LENGTH$3 - I$3 );
			FBSTRING* vr$47 = fb_StrAssign( (void*)&ARGS$1, -1ll, (void*)vr$45, -1ll, 0 );
		}
		label$711:;
		goto label$709;
		label$710:;
	}
	goto label$707;
	label$708:;
	int32 vr$49 = fb_FileClose( (int32)F$1 );
	if( (int64)vr$49 == 0ll ) goto label$727;
	void* vr$52 = fb_ErrorThrowAt( 2111, (uint8*)"fbc-1.01.0/src/compiler/fbc.bas", (void*)0ull, (void*)0ull );
	goto *vr$52;
	label$727:;
	fb_StrDelete( &ARG$1 );
	fb_StrDelete( &ARGS$1 );
	label$704:;
}

static int64 HTARGETNEEDSPIC( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$728:;
	fb$result$1 = 0ll;
	int64 vr$1 = FBGETCPUFAMILY(  );
	if( vr$1 == 0ll ) goto label$731;
	{
		{
			uint64 TMP$359$3;
			int64 vr$3 = FBGETOPTION( 3ll );
			TMP$359$3 = (uint64)vr$3;
			goto label$733;
			label$734:;
			{
				fb$result$1 = -1ll;
			}
			goto label$732;
			label$733:;
			static const void* tmp$640[7ll] = {
				&&label$734,
				&&label$732,
				&&label$732,
				&&label$734,
				&&label$734,
				&&label$732,
				&&label$734,
			};
			if( TMP$359$3 < 2ll ) goto label$732;
			if( TMP$359$3 > 8ll ) goto label$732;
			goto *tmp$640[TMP$359$3 - 2ll];
			label$732:;
		}
	}
	label$731:;
	label$730:;
	label$729:;
	return fb$result$1;
}

static void HPARSEARGS( int64 ARGC$1, uint8** ARGV$1 )
{
	label$735:;
	*(int64*)&FBC$ = -1ll;
	FBSTRING ARG$1;
	__builtin_memset( &ARG$1, 0, 24ll );
	{
		int64 I$2;
		I$2 = 1ll;
		int64 TMP$360$2;
		TMP$360$2 = ARGC$1 + -1ll;
		goto label$737;
		label$740:;
		{
			fb_StrAssign( (void*)&ARG$1, -1ll, *(void**)((uint8*)ARGV$1 + (I$2 << 3ll)), 0ll, 0 );
			HANDLEARG( &ARG$1 );
		}
		label$738:;
		I$2 = I$2 + 1ll;
		label$737:;
		if( I$2 <= TMP$360$2 ) goto label$740;
		label$739:;
	}
	if( *(int64*)&FBC$ < 0ll ) goto label$742;
	{
		FBSTRING TMP$361$2;
		__builtin_memset( &TMP$361$2, 0, 24ll );
		FBSTRING* vr$13 = fb_StrAssign( (void*)&TMP$361$2, -1ll, *(void**)((uint8*)((uint8*)ARGV$1 + (ARGC$1 << 3ll)) + -8ll), 0ll, 0 );
		HFATALINVALIDOPTION( &TMP$361$2 );
		fb_StrDelete( &TMP$361$2 );
	}
	label$742:;
	label$741:;
	HCHECKWAITINGOBJFILE(  );
	int64 vr$16 = FBGETOPTION( 5ll );
	if( vr$16 != 0ll ) goto label$744;
	{
		int64 vr$18 = FBGETOPTION( 7ll );
		int64 vr$20 = FBGETOPTION( 6ll );
		if( ((int64)-(vr$18 >= 1ll) | (int64)-(vr$20 == 1ll)) == 0ll ) goto label$746;
		{
			ERRREPORTEX( 283ll, (uint8*)"", -1ll, 1ll, (uint8*)0ull );
			FBCEND( 1ll );
		}
		label$746:;
		label$745:;
	}
	label$744:;
	label$743:;
	if( *(int64*)((uint8*)&FBC$ + 48ll) < 0ll ) goto label$748;
	{
		FBSETOPTION( 4ll, *(int64*)((uint8*)&FBC$ + 48ll) );
	}
	label$748:;
	label$747:;
	int64 vr$25 = FBGETOPTION( 3ll );
	int64 vr$27 = FBGETCPUFAMILY(  );
	if( ((int64)-(vr$25 == 3ll) & (int64)-(vr$27 != 0ll)) == 0ll ) goto label$750;
	{
		uint8* vr$31 = FBGETFBCARCH(  );
		ERRREPORTEX( 81ll, vr$31, -1ll, 1ll, (uint8*)0ull );
		FBCEND( 1ll );
	}
	label$750:;
	label$749:;
	int64 vr$32 = FBGETCPUFAMILY(  );
	if( vr$32 != 0ll ) goto label$752;
	{
		FBSETOPTION( 2ll, 0ll );
	}
	goto label$751;
	label$752:;
	{
		FBSETOPTION( 2ll, 1ll );
	}
	label$751:;
	if( *(int64*)((uint8*)&FBC$ + 40ll) < 0ll ) goto label$754;
	{
		FBSETOPTION( 2ll, *(int64*)((uint8*)&FBC$ + 40ll) );
	}
	label$754:;
	label$753:;
	int64 vr$35 = FBGETOPTION( 2ll );
	int64 vr$37 = FBGETCPUFAMILY(  );
	if( ((int64)-(vr$35 == 0ll) & (int64)-(vr$37 != 0ll)) == 0ll ) goto label$756;
	{
		uint8* vr$41 = FBGETFBCARCH(  );
		ERRREPORTEX( 82ll, vr$41, -1ll, 1ll, (uint8*)0ull );
		FBCEND( 1ll );
	}
	label$756:;
	label$755:;
	{
		uint64 TMP$362$2;
		int64 vr$42 = FBGETOPTION( 3ll );
		TMP$362$2 = (uint64)vr$42;
		goto label$758;
		label$759:;
		{
		}
		goto label$757;
		label$760:;
		{
			struct $9FBCIOFILE* RC$3;
			void* vr$44 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 208ll) );
			RC$3 = (struct $9FBCIOFILE*)vr$44;
			if( RC$3 == (struct $9FBCIOFILE*)0ull ) goto label$762;
			{
				ERRREPORTEX( 290ll, *(uint8**)RC$3, -1ll, 1ll, (uint8*)0ull );
				FBCEND( 1ll );
			}
			label$762:;
			label$761:;
		}
		goto label$757;
		label$758:;
		static const void* tmp$641[5ll] = {
			&&label$759,
			&&label$759,
			&&label$760,
			&&label$760,
			&&label$759,
		};
		if( TMP$362$2 > 4ll ) goto label$760;
		goto *tmp$641[TMP$362$2 - 0ll];
		label$757:;
	}
	{
		uint64 TMP$363$2;
		int64 vr$47 = FBGETOPTION( 3ll );
		TMP$363$2 = (uint64)vr$47;
		goto label$764;
		label$765:;
		{
		}
		goto label$763;
		label$766:;
		{
			int64 vr$49 = fb_StrLen( (void*)((uint8*)&FBC$ + 272ll), -1ll );
			if( vr$49 <= 0ll ) goto label$768;
			{
				ERRREPORTEX( 290ll, *(uint8**)((uint8*)&FBC$ + 272ll), -1ll, 1ll, (uint8*)0ull );
				FBCEND( 1ll );
			}
			label$768:;
			label$767:;
		}
		goto label$763;
		label$764:;
		static const void* tmp$642[7ll] = {
			&&label$765,
			&&label$766,
			&&label$766,
			&&label$765,
			&&label$765,
			&&label$765,
			&&label$765,
		};
		if( TMP$363$2 < 2ll ) goto label$766;
		if( TMP$363$2 > 8ll ) goto label$766;
		goto *tmp$642[TMP$363$2 - 2ll];
		label$763:;
	}
	if( *(int64*)((uint8*)&FBC$ + 64ll) < 0ll ) goto label$770;
	{
		int64 vr$52 = FBGETOPTION( 2ll );
		if( ((int64)-(vr$52 == 0ll) & (int64)-(*(int64*)((uint8*)&FBC$ + 64ll) != 0ll)) == 0ll ) goto label$772;
		{
			ERRREPORTEX( 83ll, (uint8*)"", -1ll, 1ll, (uint8*)0ull );
		}
		label$772:;
		label$771:;
		FBSETOPTION( 9ll, *(int64*)((uint8*)&FBC$ + 64ll) );
	}
	label$770:;
	label$769:;
	int64 vr$57 = FBGETOPTION( 0ll );
	if( vr$57 != 2ll ) goto label$774;
	{
		int64 vr$59 = HTARGETNEEDSPIC(  );
		if( vr$59 == 0ll ) goto label$776;
		{
			FBSETOPTION( 26ll, -1ll );
		}
		label$776:;
		label$775:;
	}
	label$774:;
	label$773:;
	int64 vr$61 = FBGETOPTION( 26ll );
	if( vr$61 == 0ll ) goto label$778;
	{
		int64 vr$63 = FBGETOPTION( 0ll );
		if( vr$63 != 0ll ) goto label$780;
		{
			ERRREPORTEX( 84ll, (uint8*)"", -1ll, 1ll, (uint8*)0ull );
		}
		goto label$779;
		label$780:;
		int64 vr$65 = HTARGETNEEDSPIC(  );
		if( vr$65 != 0ll ) goto label$781;
		{
			ERRREPORTEX( 85ll, (uint8*)"", -1ll, 1ll, (uint8*)0ull );
		}
		label$781:;
		label$779:;
	}
	label$778:;
	label$777:;
	fb_StrDelete( &ARG$1 );
	label$736:;
}

static void FBCINIT2( void )
{
	FBSTRING TMP$373$1;
	FBSTRING TMP$374$1;
	FBSTRING TMP$375$1;
	FBSTRING TMP$376$1;
	FBSTRING TMP$377$1;
	FBSTRING TMP$378$1;
	FBSTRING TMP$379$1;
	FBSTRING TMP$380$1;
	FBSTRING TMP$381$1;
	FBSTRING TMP$382$1;
	FBSTRING TMP$392$1;
	label$782:;
	int64 vr$1 = fb_StrLen( (void*)((uint8*)&FBC$ + 2576ll), 261ll );
	if( vr$1 != 0ll ) goto label$785;
	{
		FBSTRING TMP$364$2;
		FBSTRING TMP$365$2;
		FBSTRING TMP$368$2;
		__builtin_memset( &TMP$364$2, 0, 24ll );
		FBSTRING* vr$4 = fb_ExePath(  );
		FBSTRING* vr$6 = fb_StrAssign( (void*)&TMP$364$2, -1ll, (void*)vr$4, -1ll, 0 );
		FBSTRING* vr$8 = PATHSTRIPDIV( &TMP$364$2 );
		__builtin_memset( &TMP$365$2, 0, 24ll );
		FBSTRING* vr$11 = fb_StrConcat( &TMP$365$2, (void*)vr$8, -1ll, (void*)"/", 2ll );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 2576ll), 261ll, (void*)vr$11, -1ll, 0 );
		fb_StrDelete( &TMP$364$2 );
		__builtin_memset( &TMP$368$2, 0, 24ll );
		FBSTRING* vr$17 = fb_StrConcat( &TMP$368$2, (void*)((uint8*)&FBC$ + 2576ll), 261ll, (void*)"../", 4ll );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 2576ll), 261ll, (void*)vr$17, -1ll, 0 );
	}
	goto label$784;
	label$785:;
	{
		FBSTRING TMP$369$2;
		__builtin_memset( &TMP$369$2, 0, 24ll );
		FBSTRING* vr$22 = fb_StrConcat( &TMP$369$2, (void*)((uint8*)&FBC$ + 2576ll), 261ll, (void*)"/", 2ll );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 2576ll), 261ll, (void*)vr$22, -1ll, 0 );
	}
	label$784:;
	FBSTRING TARGETID$1;
	FBSTRING* vr$24 = FBGETTARGETID(  );
	FBSTRING* vr$26 = fb_StrInit( (void*)&TARGETID$1, -1ll, (void*)vr$24, -1ll, 0 );
	FBSTRING FBNAME$1;
	__builtin_memset( &FBNAME$1, 0, 24ll );
	int64 vr$28 = FBGETOPTION( 3ll );
	if( vr$28 != 3ll ) goto label$787;
	{
		fb_StrAssign( (void*)&FBNAME$1, -1ll, (void*)"freebas", 8ll, 0 );
	}
	goto label$786;
	label$787:;
	{
		fb_StrAssign( (void*)&FBNAME$1, -1ll, (void*)"freebasic", 10ll, 0 );
	}
	label$786:;
	__builtin_memset( &TMP$373$1, 0, 24ll );
	FBSTRING* vr$36 = fb_StrConcat( &TMP$373$1, (void*)((uint8*)&FBC$ + 2576ll), 261ll, (void*)"bin", 4ll );
	__builtin_memset( &TMP$374$1, 0, 24ll );
	FBSTRING* vr$39 = fb_StrConcat( &TMP$374$1, (void*)vr$36, -1ll, (void*)"/", 2ll );
	__builtin_memset( &TMP$375$1, 0, 24ll );
	FBSTRING* vr$42 = fb_StrConcat( &TMP$375$1, (void*)vr$39, -1ll, (void*)((uint8*)&FBC$ + 2295ll), 129ll );
	fb_StrAssign( (void*)((uint8*)&FBC$ + 2837ll), 261ll, (void*)vr$42, -1ll, 0 );
	__builtin_memset( &TMP$376$1, 0, 24ll );
	FBSTRING* vr$48 = fb_StrConcat( &TMP$376$1, (void*)((uint8*)&FBC$ + 2576ll), 261ll, (void*)"include", 8ll );
	__builtin_memset( &TMP$377$1, 0, 24ll );
	FBSTRING* vr$51 = fb_StrConcat( &TMP$377$1, (void*)vr$48, -1ll, (void*)"/", 2ll );
	__builtin_memset( &TMP$378$1, 0, 24ll );
	FBSTRING* vr$54 = fb_StrConcat( &TMP$378$1, (void*)vr$51, -1ll, (void*)&FBNAME$1, -1ll );
	fb_StrAssign( (void*)((uint8*)&FBC$ + 3098ll), 261ll, (void*)vr$54, -1ll, 0 );
	__builtin_memset( &TMP$379$1, 0, 24ll );
	FBSTRING* vr$60 = fb_StrConcat( &TMP$379$1, (void*)((uint8*)&FBC$ + 2576ll), 261ll, (void*)"lib", 4ll );
	__builtin_memset( &TMP$380$1, 0, 24ll );
	FBSTRING* vr$63 = fb_StrConcat( &TMP$380$1, (void*)vr$60, -1ll, (void*)"/", 2ll );
	__builtin_memset( &TMP$381$1, 0, 24ll );
	FBSTRING* vr$66 = fb_StrConcat( &TMP$381$1, (void*)vr$63, -1ll, (void*)&FBNAME$1, -1ll );
	__builtin_memset( &TMP$382$1, 0, 24ll );
	FBSTRING* vr$69 = fb_StrConcat( &TMP$382$1, (void*)vr$66, -1ll, (void*)"/", 2ll );
	fb_StrAssign( (void*)((uint8*)&FBC$ + 3359ll), 261ll, (void*)vr$69, -1ll, 0 );
	int64 vr$72 = fb_StrLen( (void*)((uint8*)&FBC$ + 2166ll), 129ll );
	if( vr$72 <= 0ll ) goto label$789;
	{
		FBSTRING TMP$383$2;
		__builtin_memset( &TMP$383$2, 0, 24ll );
		FBSTRING* vr$78 = fb_StrConcat( &TMP$383$2, (void*)((uint8*)&FBC$ + 3359ll), 261ll, (void*)((uint8*)&FBC$ + 2166ll), 129ll );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 3359ll), 261ll, (void*)vr$78, -1ll, 0 );
	}
	goto label$788;
	label$789:;
	{
		FBSTRING TMP$384$2;
		__builtin_memset( &TMP$384$2, 0, 24ll );
		FBSTRING* vr$84 = fb_StrConcat( &TMP$384$2, (void*)((uint8*)&FBC$ + 3359ll), 261ll, (void*)&TARGETID$1, -1ll );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 3359ll), 261ll, (void*)vr$84, -1ll, 0 );
	}
	label$788:;
	if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$791;
	{
		FBSTRING TMP$386$2;
		FBSTRING TMP$387$2;
		FBSTRING S$2;
		FBSTRING* vr$89 = fb_StrInit( (void*)&S$2, -1ll, (void*)&TARGETID$1, -1ll, 0 );
		uint8* vr$90 = FBGETFBCARCH(  );
		__builtin_memset( &TMP$386$2, 0, 24ll );
		FBSTRING* vr$93 = fb_StrConcat( &TMP$386$2, (void*)", ", 3ll, (void*)vr$90, 0ll );
		__builtin_memset( &TMP$387$2, 0, 24ll );
		FBSTRING* vr$97 = fb_StrConcat( &TMP$387$2, (void*)&S$2, -1ll, (void*)vr$93, -1ll );
		FBSTRING* vr$99 = fb_StrAssign( (void*)&S$2, -1ll, (void*)vr$97, -1ll, 0 );
		FBSTRING* vr$101 = fb_StrConcatAssign( (void*)&S$2, -1ll, (void*)", ", 3ll, 0 );
		int64 vr$102 = FBGETBITS(  );
		FBSTRING* vr$103 = fb_LongintToStr( vr$102 );
		FBSTRING* vr$105 = fb_StrConcatAssign( (void*)&S$2, -1ll, (void*)vr$103, -1ll, 0 );
		FBSTRING* vr$107 = fb_StrConcatAssign( (void*)&S$2, -1ll, (void*)"bit", 4ll, 0 );
		int64 vr$109 = fb_StrLen( (void*)((uint8*)&FBC$ + 2166ll), 129ll );
		if( vr$109 <= 0ll ) goto label$793;
		{
			FBSTRING* vr$112 = fb_StrConcatAssign( (void*)&S$2, -1ll, (void*)" (", 3ll, 0 );
			FBSTRING* vr$115 = fb_StrConcatAssign( (void*)&S$2, -1ll, (void*)((uint8*)&FBC$ + 2166ll), 129ll, 0 );
			FBSTRING* vr$117 = fb_StrConcatAssign( (void*)&S$2, -1ll, (void*)")", 2ll, 0 );
		}
		label$793:;
		label$792:;
		FBSTRING* vr$118 = fb_StrAllocTempDescZEx( (uint8*)"target:", 7ll );
		fb_PrintString( 0, vr$118, 2 );
		fb_PrintString( 0, &S$2, 1 );
		fb_StrDelete( &S$2 );
	}
	label$791:;
	label$790:;
	__builtin_memset( &TMP$392$1, 0, 24ll );
	FBSTRING* vr$124 = fb_StrAssign( (void*)&TMP$392$1, -1ll, (void*)((uint8*)&FBC$ + 3098ll), 261ll, 0 );
	FBADDINCLUDEPATH( &TMP$392$1 );
	fb_StrDelete( &TMP$392$1 );
	int64 vr$128 = fb_StrLen( (void*)((uint8*)&FBC$ + 1117ll), 261ll );
	if( vr$128 != 0ll ) goto label$795;
	{
		FBSTRING TMP$394$2;
		struct $9FBCIOFILE* M$2;
		void* vr$131 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 144ll) );
		M$2 = (struct $9FBCIOFILE*)vr$131;
		if( M$2 == (struct $9FBCIOFILE*)0ull ) goto label$797;
		{
			fb_StrAssign( (void*)((uint8*)&FBC$ + 1117ll), 261ll, (void*)M$2, -1ll, 0 );
		}
		goto label$796;
		label$797:;
		{
			FBSTRING* OBJF$3;
			void* vr$137 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 376ll) );
			OBJF$3 = (FBSTRING*)vr$137;
			if( OBJF$3 == (FBSTRING*)0ull ) goto label$799;
			{
				fb_StrAssign( (void*)((uint8*)&FBC$ + 1117ll), 261ll, (void*)OBJF$3, -1ll, 0 );
			}
			goto label$798;
			label$799:;
			{
				fb_StrAssign( (void*)((uint8*)&FBC$ + 1117ll), 261ll, (void*)"unnamed", 8ll, 0 );
			}
			label$798:;
		}
		label$796:;
		__builtin_memset( &TMP$394$2, 0, 24ll );
		FBSTRING* vr$144 = fb_StrAssign( (void*)&TMP$394$2, -1ll, (void*)((uint8*)&FBC$ + 1117ll), 261ll, 0 );
		FBSTRING* vr$146 = HSTRIPEXT( &TMP$394$2 );
		fb_StrAssign( (void*)((uint8*)&FBC$ + 1117ll), 261ll, (void*)vr$146, -1ll, 0 );
		fb_StrDelete( &TMP$394$2 );
	}
	label$795:;
	label$794:;
	fb_StrDelete( &FBNAME$1 );
	fb_StrDelete( &TARGETID$1 );
	label$783:;
}

static FBSTRING* HGETASMNAME( struct $9FBCIOFILE* MODULE$1, int64 STAGE$1 )
{
	FBSTRING TMP$399$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$800:;
	uint8* EXT$1;
	FBSTRING ASMFILE$1;
	__builtin_memset( &ASMFILE$1, 0, 24ll );
	FBSTRING* vr$3 = HSTRIPEXT( *(FBSTRING**)((uint8*)MODULE$1 + 24ll) );
	FBSTRING* vr$5 = fb_StrAssign( (void*)&ASMFILE$1, -1ll, (void*)vr$3, -1ll, 0 );
	EXT$1 = (uint8*)".asm";
	if( STAGE$1 != 1ll ) goto label$803;
	{
		{
			int64 TMP$396$3;
			int64 vr$7 = FBGETOPTION( 2ll );
			TMP$396$3 = vr$7;
			if( TMP$396$3 != 1ll ) goto label$805;
			label$806:;
			{
				EXT$1 = (uint8*)".c";
			}
			goto label$804;
			label$805:;
			if( TMP$396$3 != 2ll ) goto label$807;
			label$808:;
			{
				EXT$1 = (uint8*)".ll";
			}
			label$807:;
			label$804:;
		}
	}
	label$803:;
	label$802:;
	__builtin_memset( &TMP$399$1, 0, 24ll );
	FBSTRING* vr$13 = fb_StrConcat( &TMP$399$1, (void*)&ASMFILE$1, -1ll, (void*)EXT$1, 0ll );
	FBSTRING* vr$15 = fb_StrAssign( (void*)&ASMFILE$1, -1ll, (void*)vr$13, -1ll, 0 );
	FBSTRING* vr$18 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&ASMFILE$1, -1ll, 0 );
	fb_StrDelete( &ASMFILE$1 );
	label$801:;
	FBSTRING* vr$21 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$21;
}

static void HCOMPILEBAS( struct $9FBCIOFILE* MODULE$1, int64 IS_MAIN$1, int64 IS_FBCTINF$1 )
{
	label$809:;
	int64 PREVLANG$1;
	int64 PREVOUTTYPE$1;
	int64 RESTARTS$1;
	FBSTRING ASMFILE$1;
	__builtin_memset( &ASMFILE$1, 0, 24ll );
	FBSTRING PPONLYFILE$1;
	__builtin_memset( &PPONLYFILE$1, 0, 24ll );
	FBSTRING* vr$2 = HGETASMNAME( MODULE$1, 1ll );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&ASMFILE$1, -1ll, (void*)vr$2, -1ll, 0 );
	int64 vr$6 = FBGETOPTION( 2ll );
	if( (~(*(int64*)((uint8*)&FBC$ + 80ll)) & ((int64)-(vr$6 != 0ll) | ~(*(int64*)((uint8*)&FBC$ + 96ll)))) == 0ll ) goto label$812;
	{
		FBCADDTEMP( &ASMFILE$1 );
	}
	label$812:;
	label$811:;
	int64 vr$13 = FBGETOPTION( 1ll );
	if( vr$13 == 0ll ) goto label$814;
	{
		FBSTRING* vr$17 = fb_StrAssign( (void*)&PPONLYFILE$1, -1ll, *(void**)((uint8*)MODULE$1 + 24ll), -1ll, 0 );
		if( *(int64*)((uint8*)MODULE$1 + 32ll) != 0ll ) goto label$816;
		{
			FBSTRING TMP$401$3;
			FBSTRING* vr$21 = HSTRIPEXT( &PPONLYFILE$1 );
			__builtin_memset( &TMP$401$3, 0, 24ll );
			FBSTRING* vr$24 = fb_StrConcat( &TMP$401$3, (void*)vr$21, -1ll, (void*)".pp.bas", 8ll );
			FBSTRING* vr$26 = fb_StrAssign( (void*)&PPONLYFILE$1, -1ll, (void*)vr$24, -1ll, 0 );
		}
		label$816:;
		label$815:;
	}
	label$814:;
	label$813:;
	if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$818;
	{
		FBSTRING* vr$28 = fb_StrAllocTempDescZEx( (uint8*)"compiling: ", 11ll );
		fb_PrintString( 0, vr$28, 2 );
		fb_PrintString( 0, (FBSTRING*)MODULE$1, 0 );
		FBSTRING* vr$31 = fb_StrAllocTempDescZEx( (uint8*)" -o ", 4ll );
		fb_PrintString( 0, vr$31, 0 );
		fb_PrintString( 0, &ASMFILE$1, 0 );
		int64 vr$33 = FBGETOPTION( 1ll );
		if( vr$33 == 0ll ) goto label$820;
		{
			FBSTRING TMP$405$3;
			__builtin_memset( &TMP$405$3, 0, 24ll );
			FBSTRING* vr$38 = fb_StrConcat( &TMP$405$3, (void*)" -pp ", 6ll, (void*)&PPONLYFILE$1, -1ll );
			fb_PrintString( 0, vr$38, 0 );
		}
		label$820:;
		label$819:;
		if( IS_MAIN$1 == 0ll ) goto label$822;
		{
			FBSTRING* vr$40 = fb_StrAllocTempDescZEx( (uint8*)" (main module)", 14ll );
			fb_PrintString( 0, vr$40, 0 );
		}
		goto label$821;
		label$822:;
		if( IS_FBCTINF$1 == 0ll ) goto label$823;
		{
			FBSTRING* vr$42 = fb_StrAllocTempDescZEx( (uint8*)" (FB compile-time info)", 23ll );
			fb_PrintString( 0, vr$42, 0 );
		}
		label$823:;
		label$821:;
		fb_PrintVoid( 0, 1 );
	}
	label$818:;
	label$817:;
	RESTARTS$1 = 0ll;
	int64 vr$43 = FBGETOPTION( 10ll );
	PREVLANG$1 = vr$43;
	int64 vr$44 = FBGETOPTION( 0ll );
	PREVOUTTYPE$1 = vr$44;
	if( IS_FBCTINF$1 == 0ll ) goto label$825;
	{
		FBSETOPTION( 0ll, 3ll );
	}
	label$825:;
	label$824:;
	label$826:;
	{
		FBINIT( IS_MAIN$1, RESTARTS$1 );
		if( IS_FBCTINF$1 == 0ll ) goto label$830;
		{
			FBSETLIBS( (struct $7TSTRSET*)((uint8*)&FBC$ + 680ll), (struct $7TSTRSET*)((uint8*)&FBC$ + 768ll) );
		}
		goto label$829;
		label$830:;
		{
			FBSETLIBS( (struct $7TSTRSET*)((uint8*)&FBC$ + 504ll), (struct $7TSTRSET*)((uint8*)&FBC$ + 592ll) );
		}
		label$829:;
		FBCOMPILE( *(uint8**)MODULE$1, *(uint8**)&ASMFILE$1, &PPONLYFILE$1, IS_MAIN$1 );
		int64 vr$53 = ERRGETCOUNT(  );
		if( vr$53 <= 0ll ) goto label$832;
		{
			FBCEND( 1ll );
		}
		label$832:;
		label$831:;
		int64 vr$55 = FBSHOULDRESTART(  );
		if( vr$55 != 0ll ) goto label$834;
		{
			goto label$827;
		}
		label$834:;
		label$833:;
		RESTARTS$1 = RESTARTS$1 + 1ll;
		FBEND(  );
	}
	label$828:;
	goto label$826;
	label$827:;
	if( IS_FBCTINF$1 != 0ll ) goto label$836;
	{
		FBGETLIBS( (struct $7TSTRSET*)((uint8*)&FBC$ + 680ll), (struct $7TSTRSET*)((uint8*)&FBC$ + 768ll) );
	}
	label$836:;
	label$835:;
	FBEND(  );
	FBSETOPTION( 0ll, PREVOUTTYPE$1 );
	FBSETOPTION( 10ll, PREVLANG$1 );
	fb_StrDelete( &PPONLYFILE$1 );
	fb_StrDelete( &ASMFILE$1 );
	label$810:;
}

static void HCOMPILEMODULES( void )
{
	label$837:;
	int64 ISMAIN$1;
	int64 CHECKMAIN$1;
	FBSTRING MAINFILE$1;
	__builtin_memset( &MAINFILE$1, 0, 24ll );
	struct $9FBCIOFILE* MODULE$1;
	ISMAIN$1 = 0ll;
	{
		int64 TMP$408$2;
		int64 vr$1 = FBGETOPTION( 0ll );
		TMP$408$2 = vr$1;
		if( TMP$408$2 == 0ll ) goto label$841;
		label$842:;
		if( TMP$408$2 != 2ll ) goto label$840;
		label$841:;
		{
			CHECKMAIN$1 = -1ll;
		}
		goto label$839;
		label$840:;
		{
			CHECKMAIN$1 = *(int64*)((uint8*)&FBC$ + 1384ll);
		}
		label$843:;
		label$839:;
	}
	if( CHECKMAIN$1 == 0ll ) goto label$845;
	{
		FBSTRING* vr$6 = HSTRIPPATH( (uint8*)((uint8*)&FBC$ + 1117ll) );
		FBSTRING* vr$8 = fb_StrAssign( (void*)&MAINFILE$1, -1ll, (void*)vr$6, -1ll, 0 );
	}
	label$845:;
	label$844:;
	void* vr$10 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 144ll) );
	MODULE$1 = (struct $9FBCIOFILE*)vr$10;
	if( MODULE$1 != (struct $9FBCIOFILE*)0ull ) goto label$847;
	{
		STRSETCOPY( (struct $7TSTRSET*)((uint8*)&FBC$ + 680ll), (struct $7TSTRSET*)((uint8*)&FBC$ + 504ll) );
		STRSETCOPY( (struct $7TSTRSET*)((uint8*)&FBC$ + 768ll), (struct $7TSTRSET*)((uint8*)&FBC$ + 592ll) );
		fb_StrDelete( &MAINFILE$1 );
		goto label$838;
	}
	label$847:;
	label$846:;
	label$848:;
	{
		if( CHECKMAIN$1 == 0ll ) goto label$852;
		{
			FBSTRING TMP$409$3;
			__builtin_memset( &TMP$409$3, 0, 24ll );
			FBSTRING* vr$21 = HSTRIPEXT( (FBSTRING*)MODULE$1 );
			FBSTRING* vr$23 = fb_StrAssign( (void*)&TMP$409$3, -1ll, (void*)vr$21, -1ll, 0 );
			FBSTRING* vr$24 = HSTRIPPATH( *(uint8**)&TMP$409$3 );
			int32 vr$26 = fb_StrCompare( (void*)&MAINFILE$1, -1ll, (void*)vr$24, -1ll );
			ISMAIN$1 = (int64)-((int64)vr$26 == 0ll);
			fb_StrDelete( &TMP$409$3 );
		}
		label$852:;
		label$851:;
		HCOMPILEBAS( MODULE$1, ISMAIN$1, 0ll );
		void* vr$30 = LISTGETNEXT( (void*)MODULE$1 );
		MODULE$1 = (struct $9FBCIOFILE*)vr$30;
	}
	label$850:;
	if( MODULE$1 != (struct $9FBCIOFILE*)0ull ) goto label$848;
	label$849:;
	fb_StrDelete( &MAINFILE$1 );
	label$838:;
}

static int64 HPARSEXPM( FBSTRING* XPMFILE$1, FBSTRING* CODE$1 )
{
	FBSTRING TMP$411$1;
	FBSTRING TMP$413$1;
	FBSTRING TMP$415$1;
	FBSTRING TMP$423$1;
	FBSTRING TMP$425$1;
	FBSTRING TMP$427$1;
	FBSTRING TMP$431$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$853:;
	__builtin_memset( &TMP$411$1, 0, 24ll );
	FBSTRING* vr$3 = fb_StrConcat( &TMP$411$1, (void*)CODE$1, -1ll, (void*)"\x0A" "dim shared as zstring ptr ", 28ll );
	FBSTRING* vr$4 = fb_StrAssign( (void*)CODE$1, -1ll, (void*)vr$3, -1ll, 0 );
	__builtin_memset( &TMP$413$1, 0, 24ll );
	FBSTRING* vr$7 = fb_StrConcat( &TMP$413$1, (void*)CODE$1, -1ll, (void*)"fb_program_icon_data", 21ll );
	FBSTRING* vr$8 = fb_StrAssign( (void*)CODE$1, -1ll, (void*)vr$7, -1ll, 0 );
	__builtin_memset( &TMP$415$1, 0, 24ll );
	FBSTRING* vr$11 = fb_StrConcat( &TMP$415$1, (void*)CODE$1, -1ll, (void*)"(0 to ...) = _\x0A{ _\x0A", 20ll );
	FBSTRING* vr$12 = fb_StrAssign( (void*)CODE$1, -1ll, (void*)vr$11, -1ll, 0 );
	int64 F$1;
	int32 vr$13 = fb_FileFree(  );
	F$1 = (int64)vr$13;
	int32 vr$16 = fb_FileOpen( XPMFILE$1, 2u, 0u, 0u, (int32)F$1, 0 );
	if( (int64)vr$16 == 0ll ) goto label$856;
	{
		goto label$854;
	}
	label$856:;
	label$855:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	fb_FileLineInput( (int32)F$1, (void*)&LN$1, -1ll, 0 );
	FBSTRING* vr$23 = fb_StrUcase2( &LN$1, 0 );
	int32 vr$24 = fb_StrCompare( (void*)vr$23, -1ll, (void*)"/* XPM */", 10ll );
	if( (int64)vr$24 == 0ll ) goto label$858;
	{
		int32 vr$28 = fb_FileClose( (int32)F$1 );
		if( (int64)vr$28 == 0ll ) goto label$859;
		void* vr$31 = fb_ErrorThrowAt( 2620, (uint8*)"fbc-1.01.0/src/compiler/fbc.bas", (void*)0ull, (void*)0ull );
		goto *vr$31;
		label$859:;
		fb_StrDelete( &LN$1 );
		goto label$854;
	}
	label$858:;
	label$857:;
	int64 SAW_ROWS$1;
	SAW_ROWS$1 = 0ll;
	label$860:;
	int32 vr$34 = fb_FileEof( (int32)F$1 );
	if( (int64)vr$34 != 0ll ) goto label$861;
	{
		fb_FileLineInput( (int32)F$1, (void*)&LN$1, -1ll, 0 );
		int64 vr$40 = fb_StrLen( (void*)&LN$1, -1ll );
		FBSTRING* vr$41 = fb_StrAllocTempDescZEx( (uint8*)"\x22", 1ll );
		int64 vr$43 = fb_StrInstr( 1ll, &LN$1, vr$41 );
		FBSTRING* vr$47 = fb_RIGHT( &LN$1, (vr$40 - vr$43) + 1ll );
		FBSTRING* vr$49 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$47, -1ll, 0 );
		FBSTRING* vr$50 = fb_StrAllocTempDescZEx( (uint8*)"\x22", 1ll );
		int64 vr$52 = fb_StrInstr( 2ll, &LN$1, vr$50 );
		FBSTRING* vr$54 = fb_LEFT( &LN$1, vr$52 );
		FBSTRING* vr$56 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$54, -1ll, 0 );
		int64 vr$58 = fb_StrLen( (void*)&LN$1, -1ll );
		if( vr$58 <= 0ll ) goto label$863;
		{
			FBSTRING TMP$420$3;
			FBSTRING TMP$421$3;
			if( SAW_ROWS$1 == 0ll ) goto label$865;
			{
				FBSTRING TMP$418$4;
				__builtin_memset( &TMP$418$4, 0, 24ll );
				FBSTRING* vr$63 = fb_StrConcat( &TMP$418$4, (void*)CODE$1, -1ll, (void*)", _\x0A", 5ll );
				FBSTRING* vr$64 = fb_StrAssign( (void*)CODE$1, -1ll, (void*)vr$63, -1ll, 0 );
			}
			label$865:;
			label$864:;
			__builtin_memset( &TMP$420$3, 0, 24ll );
			FBSTRING* vr$68 = fb_StrConcat( &TMP$420$3, (void*)"\x09@", 3ll, (void*)&LN$1, -1ll );
			__builtin_memset( &TMP$421$3, 0, 24ll );
			FBSTRING* vr$71 = fb_StrConcat( &TMP$421$3, (void*)CODE$1, -1ll, (void*)vr$68, -1ll );
			FBSTRING* vr$72 = fb_StrAssign( (void*)CODE$1, -1ll, (void*)vr$71, -1ll, 0 );
			SAW_ROWS$1 = -1ll;
		}
		label$863:;
		label$862:;
	}
	goto label$860;
	label$861:;
	int32 vr$74 = fb_FileClose( (int32)F$1 );
	if( (int64)vr$74 == 0ll ) goto label$866;
	void* vr$77 = fb_ErrorThrowAt( 2650, (uint8*)"fbc-1.01.0/src/compiler/fbc.bas", (void*)0ull, (void*)0ull );
	goto *vr$77;
	label$866:;
	if( SAW_ROWS$1 != 0ll ) goto label$868;
	{
		fb_StrDelete( &LN$1 );
		goto label$854;
	}
	label$868:;
	label$867:;
	__builtin_memset( &TMP$423$1, 0, 24ll );
	FBSTRING* vr$82 = fb_StrConcat( &TMP$423$1, (void*)CODE$1, -1ll, (void*)" _ \x0A", 5ll );
	FBSTRING* vr$83 = fb_StrAssign( (void*)CODE$1, -1ll, (void*)vr$82, -1ll, 0 );
	__builtin_memset( &TMP$425$1, 0, 24ll );
	FBSTRING* vr$86 = fb_StrConcat( &TMP$425$1, (void*)CODE$1, -1ll, (void*)"}\x0A\x0A", 4ll );
	FBSTRING* vr$87 = fb_StrAssign( (void*)CODE$1, -1ll, (void*)vr$86, -1ll, 0 );
	__builtin_memset( &TMP$427$1, 0, 24ll );
	FBSTRING* vr$90 = fb_StrConcat( &TMP$427$1, (void*)CODE$1, -1ll, (void*)"extern as zstring ptr ptr fb_program_icon alias \x22" "fb_program_icon\x22\x0A", 67ll );
	FBSTRING* vr$91 = fb_StrAssign( (void*)CODE$1, -1ll, (void*)vr$90, -1ll, 0 );
	__builtin_memset( &TMP$431$1, 0, 24ll );
	FBSTRING* vr$94 = fb_StrConcat( &TMP$431$1, (void*)CODE$1, -1ll, (void*)"dim shared as zstring ptr ptr fb_program_icon = @fb_program_icon_data(0)\x0A", 74ll );
	FBSTRING* vr$95 = fb_StrAssign( (void*)CODE$1, -1ll, (void*)vr$94, -1ll, 0 );
	fb$result$1 = -1ll;
	fb_StrDelete( &LN$1 );
	label$854:;
	return fb$result$1;
}

static int64 HCOMPILEXPM( void )
{
	int64 TMP$436$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$869:;
	FBSTRING XPMFILE$1;
	__builtin_memset( &XPMFILE$1, 0, 24ll );
	FBSTRING CODE$1;
	__builtin_memset( &CODE$1, 0, 24ll );
	int64 FO$1;
	int64 vr$4 = fb_StrLen( (void*)((uint8*)&FBC$ + 272ll), -1ll );
	if( vr$4 != 0ll ) goto label$872;
	{
		fb$result$1 = -1ll;
		fb_StrDelete( &CODE$1 );
		fb_StrDelete( &XPMFILE$1 );
		goto label$870;
	}
	label$872:;
	label$871:;
	FBSTRING* vr$10 = fb_StrAssign( (void*)&XPMFILE$1, -1ll, (void*)((uint8*)&FBC$ + 272ll), -1ll, 0 );
	int64 vr$11 = fb_StrLen( *(void**)((uint8*)&FBC$ + 296ll), -1ll );
	if( vr$11 <= 0ll ) goto label$874;
	{
		FBSTRING* vr$13 = HSTRIPEXT( *(FBSTRING**)((uint8*)&FBC$ + 296ll) );
		FBSTRING* vr$15 = fb_StrAssign( (void*)((uint8*)&FBC$ + 272ll), -1ll, (void*)vr$13, -1ll, 0 );
	}
	label$874:;
	label$873:;
	FBSTRING* vr$17 = fb_StrConcatAssign( (void*)((uint8*)&FBC$ + 272ll), -1ll, (void*)".bas", 5ll, 0 );
	if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$876;
	{
		FBSTRING TMP$434$2;
		FBSTRING TMP$435$2;
		FBSTRING* vr$19 = fb_StrAllocTempDescZEx( (uint8*)"parsing xpm: ", 13ll );
		fb_PrintString( 0, vr$19, 2 );
		__builtin_memset( &TMP$434$2, 0, 24ll );
		FBSTRING* vr$24 = fb_StrConcat( &TMP$434$2, (void*)&XPMFILE$1, -1ll, (void*)" -o ", 5ll );
		__builtin_memset( &TMP$435$2, 0, 24ll );
		FBSTRING* vr$27 = fb_StrConcat( &TMP$435$2, (void*)vr$24, -1ll, (void*)((uint8*)&FBC$ + 272ll), -1ll );
		fb_PrintString( 0, vr$27, 1 );
	}
	label$876:;
	label$875:;
	int64 vr$30 = HPARSEXPM( &XPMFILE$1, &CODE$1 );
	if( vr$30 != 0ll ) goto label$878;
	{
		fb_StrDelete( &CODE$1 );
		fb_StrDelete( &XPMFILE$1 );
		goto label$870;
	}
	label$878:;
	label$877:;
	int32 vr$34 = fb_FileFree(  );
	FO$1 = (int64)vr$34;
	int32 vr$38 = fb_FileOpen( (FBSTRING*)((uint8*)&FBC$ + 272ll), 3u, 0u, 0u, (int32)FO$1, 0 );
	if( (int64)vr$38 == 0ll ) goto label$880;
	{
		fb_StrDelete( &CODE$1 );
		fb_StrDelete( &XPMFILE$1 );
		goto label$870;
	}
	label$880:;
	label$879:;
	TMP$436$1 = FO$1;
	fb_PrintString( (int32)TMP$436$1, &CODE$1, 0 );
	int32 vr$46 = fb_FileClose( (int32)FO$1 );
	if( (int64)vr$46 == 0ll ) goto label$881;
	void* vr$49 = fb_ErrorThrowAt( 2706, (uint8*)"fbc-1.01.0/src/compiler/fbc.bas", (void*)0ull, (void*)0ull );
	goto *vr$49;
	label$881:;
	if( *(int64*)((uint8*)&FBC$ + 80ll) != 0ll ) goto label$883;
	{
		FBCADDTEMP( (FBSTRING*)((uint8*)&FBC$ + 272ll) );
	}
	label$883:;
	label$882:;
	HCOMPILEBAS( (struct $9FBCIOFILE*)((uint8*)&FBC$ + 272ll), 0ll, 0ll );
	fb$result$1 = -1ll;
	fb_StrDelete( &CODE$1 );
	fb_StrDelete( &XPMFILE$1 );
	label$870:;
	return fb$result$1;
}

static int64 HCOMPILESTAGE2MODULE( struct $9FBCIOFILE* MODULE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$884:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	FBSTRING ASMFILE$1;
	__builtin_memset( &ASMFILE$1, 0, 24ll );
	FBSTRING* vr$3 = HGETASMNAME( MODULE$1, 2ll );
	FBSTRING* vr$5 = fb_StrAssign( (void*)&ASMFILE$1, -1ll, (void*)vr$3, -1ll, 0 );
	if( *(int64*)((uint8*)&FBC$ + 96ll) != 0ll ) goto label$887;
	{
		FBCADDTEMP( &ASMFILE$1 );
	}
	label$887:;
	label$886:;
	{
		int64 TMP$437$2;
		int64 vr$8 = FBGETOPTION( 2ll );
		TMP$437$2 = vr$8;
		if( TMP$437$2 != 1ll ) goto label$889;
		label$890:;
		{
			{
				int64 TMP$438$4;
				int64 vr$10 = FBGETCPUFAMILY(  );
				TMP$438$4 = vr$10;
				if( TMP$438$4 != 0ll ) goto label$892;
				label$893:;
				{
					FBSTRING* vr$13 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-m32 ", 6ll, 0 );
				}
				goto label$891;
				label$892:;
				if( TMP$438$4 != 1ll ) goto label$894;
				label$895:;
				{
					FBSTRING* vr$16 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-m64 ", 6ll, 0 );
				}
				label$894:;
				label$891:;
			}
			if( *(int64*)((uint8*)&FBC$ + 56ll) == 0ll ) goto label$897;
			{
				FBSTRING* vr$19 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-march=native ", 15ll, 0 );
			}
			goto label$896;
			label$897:;
			{
				FBSTRING TMP$443$4;
				FBSTRING TMP$444$4;
				FBSTRING TMP$445$4;
				uint8* vr$20 = FBGETGCCARCH(  );
				__builtin_memset( &TMP$443$4, 0, 24ll );
				FBSTRING* vr$23 = fb_StrConcat( &TMP$443$4, (void*)"-march=", 8ll, (void*)vr$20, 0ll );
				__builtin_memset( &TMP$444$4, 0, 24ll );
				FBSTRING* vr$26 = fb_StrConcat( &TMP$444$4, (void*)vr$23, -1ll, (void*)" ", 2ll );
				__builtin_memset( &TMP$445$4, 0, 24ll );
				FBSTRING* vr$30 = fb_StrConcat( &TMP$445$4, (void*)&LN$1, -1ll, (void*)vr$26, -1ll );
				FBSTRING* vr$32 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$30, -1ll, 0 );
			}
			label$896:;
			int64 vr$33 = FBGETOPTION( 26ll );
			if( vr$33 == 0ll ) goto label$899;
			{
				FBSTRING* vr$36 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fPIC ", 7ll, 0 );
			}
			label$899:;
			label$898:;
			FBSTRING* vr$38 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-S -nostdlib -nostdinc -Wall -Wno-unused-label -Wno-unused-function -Wno-unused-variable -Wno-unused-but-set-variable ", 119ll, 0 );
			FBSTRING* vr$40 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-Wno-main ", 11ll, 0 );
			FBSTRING* vr$42 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-Werror-implicit-function-declaration ", 39ll, 0 );
			FBSTRING* vr$44 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-O", 3ll, 0 );
			int64 vr$45 = FBGETOPTION( 8ll );
			FBSTRING* vr$46 = fb_LongintToStr( vr$45 );
			FBSTRING* vr$48 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$46, -1ll, 0 );
			FBSTRING* vr$50 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" ", 2ll, 0 );
			FBSTRING* vr$52 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fno-strict-aliasing ", 22ll, 0 );
			FBSTRING* vr$54 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-frounding-math ", 17ll, 0 );
			FBSTRING* vr$56 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fno-math-errno ", 17ll, 0 );
			FBSTRING* vr$58 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-fno-exceptions -fno-unwind-tables -fno-asynchronous-unwind-tables ", 68ll, 0 );
			int64 vr$59 = FBGETOPTION( 12ll );
			if( vr$59 == 0ll ) goto label$901;
			{
				FBSTRING* vr$62 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-g ", 4ll, 0 );
			}
			label$901:;
			label$900:;
			int64 vr$63 = FBGETOPTION( 5ll );
			if( vr$63 != 1ll ) goto label$903;
			{
				FBSTRING* vr$66 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-mfpmath=sse -msse2 ", 21ll, 0 );
			}
			label$903:;
			label$902:;
			int64 vr$67 = FBGETOPTION( 9ll );
			if( vr$67 != 0ll ) goto label$905;
			{
				FBSTRING* vr$70 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-masm=intel ", 13ll, 0 );
			}
			label$905:;
			label$904:;
		}
		goto label$888;
		label$889:;
		if( TMP$437$2 != 2ll ) goto label$906;
		label$907:;
		{
			{
				int64 TMP$462$4;
				int64 vr$72 = FBGETCPUFAMILY(  );
				TMP$462$4 = vr$72;
				if( TMP$462$4 != 0ll ) goto label$909;
				label$910:;
				{
					FBSTRING* vr$75 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-march=x86 ", 12ll, 0 );
				}
				goto label$908;
				label$909:;
				if( TMP$462$4 != 1ll ) goto label$911;
				label$912:;
				{
					FBSTRING* vr$78 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-march=x86-64 ", 15ll, 0 );
				}
				goto label$908;
				label$911:;
				if( TMP$462$4 != 2ll ) goto label$913;
				label$914:;
				{
					FBSTRING* vr$81 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-march=arm ", 12ll, 0 );
				}
				goto label$908;
				label$913:;
				if( TMP$462$4 != 3ll ) goto label$915;
				label$916:;
				{
					FBSTRING* vr$84 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-march=aarch64 ", 16ll, 0 );
				}
				label$915:;
				label$908:;
			}
			int64 vr$85 = FBGETOPTION( 26ll );
			if( vr$85 == 0ll ) goto label$918;
			{
				FBSTRING* vr$88 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-relocation-model=pic ", 23ll, 0 );
			}
			label$918:;
			label$917:;
			FBSTRING* vr$90 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-O", 3ll, 0 );
			int64 vr$91 = FBGETOPTION( 8ll );
			FBSTRING* vr$92 = fb_LongintToStr( vr$91 );
			FBSTRING* vr$94 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$92, -1ll, 0 );
			FBSTRING* vr$96 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" ", 2ll, 0 );
			{
				int64 TMP$468$4;
				int64 vr$97 = FBGETCPUFAMILY(  );
				TMP$468$4 = vr$97;
				if( TMP$468$4 == 0ll ) goto label$921;
				label$922:;
				if( TMP$468$4 != 1ll ) goto label$920;
				label$921:;
				{
					int64 vr$100 = FBGETOPTION( 9ll );
					if( vr$100 != 0ll ) goto label$924;
					{
						FBSTRING* vr$103 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"--x86-asm-syntax=intel ", 24ll, 0 );
					}
					label$924:;
					label$923:;
				}
				label$920:;
				label$919:;
			}
		}
		label$906:;
		label$888:;
	}
	FBSTRING* vr$105 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22", 2ll, 0 );
	FBSTRING* vr$106 = HGETASMNAME( MODULE$1, 1ll );
	FBSTRING* vr$108 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$106, -1ll, 0 );
	FBSTRING* vr$110 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22 ", 3ll, 0 );
	FBSTRING* vr$112 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"-o \x22", 5ll, 0 );
	FBSTRING* vr$115 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)&ASMFILE$1, -1ll, 0 );
	FBSTRING* vr$117 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22", 2ll, 0 );
	FBSTRING* vr$120 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)((uint8*)&FBC$ + 2038ll), 128ll, 0 );
	{
		int64 TMP$472$2;
		int64 vr$121 = FBGETOPTION( 2ll );
		TMP$472$2 = vr$121;
		if( TMP$472$2 != 1ll ) goto label$926;
		label$927:;
		{
			int64 vr$124 = FBCRUNBIN( (uint8*)"compiling C", 3ll, &LN$1 );
			fb$result$1 = vr$124;
		}
		goto label$925;
		label$926:;
		if( TMP$472$2 != 2ll ) goto label$928;
		label$929:;
		{
			int64 vr$127 = FBCRUNBIN( (uint8*)"compiling LLVM IR", 4ll, &LN$1 );
			fb$result$1 = vr$127;
		}
		label$928:;
		label$925:;
	}
	fb_StrDelete( &ASMFILE$1 );
	fb_StrDelete( &LN$1 );
	label$885:;
	return fb$result$1;
}

static void HCOMPILESTAGE2MODULES( void )
{
	label$930:;
	struct $9FBCIOFILE* MODULE$1;
	void* vr$1 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 144ll) );
	MODULE$1 = (struct $9FBCIOFILE*)vr$1;
	label$932:;
	if( MODULE$1 == (struct $9FBCIOFILE*)0ull ) goto label$933;
	{
		int64 vr$3 = HCOMPILESTAGE2MODULE( MODULE$1 );
		if( vr$3 != 0ll ) goto label$935;
		{
			FBCEND( 1ll );
		}
		label$935:;
		label$934:;
		void* vr$5 = LISTGETNEXT( (void*)MODULE$1 );
		MODULE$1 = (struct $9FBCIOFILE*)vr$5;
	}
	goto label$932;
	label$933:;
	label$931:;
}

static int64 HASSEMBLEMODULE( struct $9FBCIOFILE* MODULE$1 )
{
	FBSTRING TMP$479$1;
	FBSTRING TMP$480$1;
	FBSTRING TMP$481$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$936:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	{
		int64 TMP$475$2;
		int64 vr$2 = FBGETCPUFAMILY(  );
		TMP$475$2 = vr$2;
		if( TMP$475$2 != 0ll ) goto label$939;
		label$940:;
		{
			FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"--32 ", 6ll, 0 );
		}
		goto label$938;
		label$939:;
		if( TMP$475$2 != 1ll ) goto label$941;
		label$942:;
		{
			FBSTRING* vr$8 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"--64 ", 6ll, 0 );
		}
		label$941:;
		label$938:;
	}
	int64 vr$9 = FBGETOPTION( 12ll );
	if( vr$9 != 0ll ) goto label$944;
	{
		FBSTRING* vr$12 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"--strip-local-absolute ", 24ll, 0 );
	}
	label$944:;
	label$943:;
	FBSTRING* vr$14 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22", 2ll, 0 );
	FBSTRING* vr$15 = HGETASMNAME( MODULE$1, 2ll );
	FBSTRING* vr$17 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$15, -1ll, 0 );
	FBSTRING* vr$19 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22 ", 3ll, 0 );
	__builtin_memset( &TMP$479$1, 0, 24ll );
	FBSTRING* vr$23 = fb_StrConcat( &TMP$479$1, (void*)"-o \x22", 5ll, *(void**)((uint8*)MODULE$1 + 24ll), -1ll );
	__builtin_memset( &TMP$480$1, 0, 24ll );
	FBSTRING* vr$26 = fb_StrConcat( &TMP$480$1, (void*)vr$23, -1ll, (void*)"\x22", 2ll );
	__builtin_memset( &TMP$481$1, 0, 24ll );
	FBSTRING* vr$30 = fb_StrConcat( &TMP$481$1, (void*)&LN$1, -1ll, (void*)vr$26, -1ll );
	FBSTRING* vr$32 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$30, -1ll, 0 );
	FBSTRING* vr$35 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)((uint8*)&FBC$ + 1782ll), 128ll, 0 );
	int64 vr$37 = FBCRUNBIN( (uint8*)"assembling", 0ll, &LN$1 );
	if( vr$37 != 0ll ) goto label$946;
	{
		fb_StrDelete( &LN$1 );
		goto label$937;
	}
	label$946:;
	label$945:;
	if( *(int64*)((uint8*)&FBC$ + 104ll) != 0ll ) goto label$948;
	{
		FBCADDTEMP( *(FBSTRING**)((uint8*)MODULE$1 + 24ll) );
	}
	label$948:;
	label$947:;
	fb$result$1 = -1ll;
	fb_StrDelete( &LN$1 );
	label$937:;
	return fb$result$1;
}

static void HASSEMBLEMODULES( void )
{
	label$949:;
	struct $9FBCIOFILE* MODULE$1;
	void* vr$1 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 144ll) );
	MODULE$1 = (struct $9FBCIOFILE*)vr$1;
	label$951:;
	if( MODULE$1 == (struct $9FBCIOFILE*)0ull ) goto label$952;
	{
		int64 vr$3 = HASSEMBLEMODULE( MODULE$1 );
		if( vr$3 != 0ll ) goto label$954;
		{
			FBCEND( 1ll );
		}
		label$954:;
		label$953:;
		void* vr$5 = LISTGETNEXT( (void*)MODULE$1 );
		MODULE$1 = (struct $9FBCIOFILE*)vr$5;
	}
	goto label$951;
	label$952:;
	label$950:;
}

static int64 HASSEMBLERC( struct $9FBCIOFILE* RC$1 )
{
	FBSTRING TMP$484$1;
	FBSTRING TMP$485$1;
	FBSTRING TMP$486$1;
	FBSTRING TMP$487$1;
	FBSTRING TMP$488$1;
	FBSTRING TMP$489$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$955:;
	FBSTRING LN$1;
	FBSTRING* vr$2 = fb_StrInit( (void*)&LN$1, -1ll, (void*)"--output-format=coff ", 22ll, 0 );
	__builtin_memset( &TMP$484$1, 0, 24ll );
	FBSTRING* vr$7 = fb_StrConcat( &TMP$484$1, (void*)" \x22", 3ll, (void*)RC$1, -1ll );
	__builtin_memset( &TMP$485$1, 0, 24ll );
	FBSTRING* vr$10 = fb_StrConcat( &TMP$485$1, (void*)vr$7, -1ll, (void*)"\x22", 2ll );
	__builtin_memset( &TMP$486$1, 0, 24ll );
	FBSTRING* vr$14 = fb_StrConcat( &TMP$486$1, (void*)&LN$1, -1ll, (void*)vr$10, -1ll );
	FBSTRING* vr$16 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$14, -1ll, 0 );
	__builtin_memset( &TMP$487$1, 0, 24ll );
	FBSTRING* vr$20 = fb_StrConcat( &TMP$487$1, (void*)" \x22", 3ll, *(void**)((uint8*)RC$1 + 24ll), -1ll );
	__builtin_memset( &TMP$488$1, 0, 24ll );
	FBSTRING* vr$23 = fb_StrConcat( &TMP$488$1, (void*)vr$20, -1ll, (void*)"\x22", 2ll );
	__builtin_memset( &TMP$489$1, 0, 24ll );
	FBSTRING* vr$27 = fb_StrConcat( &TMP$489$1, (void*)&LN$1, -1ll, (void*)vr$23, -1ll );
	FBSTRING* vr$29 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$27, -1ll, 0 );
	int64 vr$31 = FBCRUNBIN( (uint8*)"compiling rc", 7ll, &LN$1 );
	fb$result$1 = vr$31;
	if( *(int64*)((uint8*)&FBC$ + 104ll) != 0ll ) goto label$958;
	{
		FBCADDTEMP( *(FBSTRING**)((uint8*)RC$1 + 24ll) );
	}
	label$958:;
	label$957:;
	fb_StrDelete( &LN$1 );
	label$956:;
	return fb$result$1;
}

static void HASSEMBLERCS( void )
{
	label$959:;
	struct $9FBCIOFILE* RC$1;
	void* vr$1 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 208ll) );
	RC$1 = (struct $9FBCIOFILE*)vr$1;
	label$961:;
	if( RC$1 == (struct $9FBCIOFILE*)0ull ) goto label$962;
	{
		int64 vr$3 = HASSEMBLERC( RC$1 );
		if( vr$3 != 0ll ) goto label$964;
		{
			FBCEND( 1ll );
		}
		label$964:;
		label$963:;
		void* vr$5 = LISTGETNEXT( (void*)RC$1 );
		RC$1 = (struct $9FBCIOFILE*)vr$5;
	}
	goto label$961;
	label$962:;
	label$960:;
}

static void HASSEMBLEXPM( void )
{
	label$965:;
	int64 vr$1 = fb_StrLen( (void*)((uint8*)&FBC$ + 272ll), -1ll );
	if( vr$1 <= 0ll ) goto label$968;
	{
		int64 vr$3 = FBGETOPTION( 2ll );
		if( vr$3 == 0ll ) goto label$970;
		{
			HCOMPILESTAGE2MODULE( (struct $9FBCIOFILE*)((uint8*)&FBC$ + 272ll) );
		}
		label$970:;
		label$969:;
		int64 vr$7 = HASSEMBLEMODULE( (struct $9FBCIOFILE*)((uint8*)&FBC$ + 272ll) );
		if( vr$7 != 0ll ) goto label$972;
		{
			FBCEND( 1ll );
		}
		label$972:;
		label$971:;
	}
	label$968:;
	label$967:;
	label$966:;
}

static int64 HCOMPILEFBCTINF( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$973:;
	struct $9FBCIOFILE FBCTINF$1;
	_ZN9FBCIOFILEC1Ev( &FBCTINF$1 );
	FBSTRING OBJFILE$1;
	__builtin_memset( &OBJFILE$1, 0, 24ll );
	int64 FO$1;
	fb_StrAssign( (void*)&FBCTINF$1, -1ll, (void*)"__fb_ct.inf.bas", 16ll, 0 );
	fb_StrAssign( (void*)&OBJFILE$1, -1ll, (void*)"__fb_ct.inf", 12ll, 0 );
	*(FBSTRING**)((uint8*)&FBCTINF$1 + 24ll) = &OBJFILE$1;
	if( *(int64*)((uint8*)&FBC$ + 112ll) == 0ll ) goto label$976;
	{
		FBSTRING* vr$7 = fb_StrAllocTempDescZEx( (uint8*)"creating: ", 10ll );
		fb_PrintString( 0, vr$7, 2 );
		fb_PrintString( 0, (FBSTRING*)&FBCTINF$1, 1 );
	}
	label$976:;
	label$975:;
	int32 vr$9 = fb_FileFree(  );
	FO$1 = (int64)vr$9;
	int32 vr$13 = fb_FileOpen( (FBSTRING*)&FBCTINF$1, 3u, 0u, 0u, (int32)FO$1, 0 );
	if( (int64)vr$13 == 0ll ) goto label$978;
	{
		fb_StrDelete( &OBJFILE$1 );
		_ZN9FBCIOFILED1Ev( &FBCTINF$1 );
		goto label$974;
	}
	label$978:;
	label$977:;
	int32 vr$19 = fb_FileClose( (int32)FO$1 );
	if( (int64)vr$19 == 0ll ) goto label$979;
	void* vr$22 = fb_ErrorThrowAt( 2986, (uint8*)"fbc-1.01.0/src/compiler/fbc.bas", (void*)0ull, (void*)0ull );
	goto *vr$22;
	label$979:;
	if( *(int64*)((uint8*)&FBC$ + 80ll) != 0ll ) goto label$981;
	{
		FBCADDTEMP( (FBSTRING*)&FBCTINF$1 );
	}
	label$981:;
	label$980:;
	HCOMPILEBAS( &FBCTINF$1, 0ll, -1ll );
	int64 vr$26 = FBGETOPTION( 2ll );
	if( vr$26 == 0ll ) goto label$983;
	{
		HCOMPILESTAGE2MODULE( &FBCTINF$1 );
	}
	label$983:;
	label$982:;
	int64 vr$30 = HASSEMBLEMODULE( &FBCTINF$1 );
	fb$result$1 = vr$30;
	fb_StrDelete( &OBJFILE$1 );
	_ZN9FBCIOFILED1Ev( &FBCTINF$1 );
	label$974:;
	return fb$result$1;
}

static int64 HARCHIVEFILES( void )
{
	FBSTRING TMP$494$1;
	FBSTRING TMP$495$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$984:;
	HSETOUTNAME(  );
	FBSTRING* vr$2 = fb_StrAllocTempDescZ( (uint8*)((uint8*)&FBC$ + 856ll) );
	int32 vr$3 = fb_FileKill( vr$2 );
	if( (int64)vr$3 == 0ll ) goto label$987;
	{
	}
	label$987:;
	label$986:;
	FBSTRING LN$1;
	__builtin_memset( &TMP$494$1, 0, 24ll );
	FBSTRING* vr$9 = fb_StrConcat( &TMP$494$1, (void*)"-rsc \x22", 7ll, (void*)((uint8*)&FBC$ + 856ll), 261ll );
	__builtin_memset( &TMP$495$1, 0, 24ll );
	FBSTRING* vr$12 = fb_StrConcat( &TMP$495$1, (void*)vr$9, -1ll, (void*)"\x22 ", 3ll );
	FBSTRING* vr$14 = fb_StrInit( (void*)&LN$1, -1ll, (void*)vr$12, -1ll, 0 );
	int64 vr$15 = FBISCROSSCOMP(  );
	if( vr$15 != 0ll ) goto label$989;
	{
		FBSTRING TMP$499$2;
		int64 vr$17 = HCOMPILEFBCTINF(  );
		if( vr$17 == 0ll ) goto label$991;
		{
			FBSTRING* vr$20 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22__fb_ct.inf\x22 ", 15ll, 0 );
		}
		label$991:;
		label$990:;
		__builtin_memset( &TMP$499$2, 0, 24ll );
		FBSTRING* vr$23 = fb_StrAssign( (void*)&TMP$499$2, -1ll, (void*)"__fb_ct.inf", 12ll, 0 );
		FBCADDTEMP( &TMP$499$2 );
		fb_StrDelete( &TMP$499$2 );
	}
	label$989:;
	label$988:;
	FBSTRING* OBJFILE$1;
	void* vr$27 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&FBC$ + 376ll) );
	OBJFILE$1 = (FBSTRING*)vr$27;
	label$992:;
	if( OBJFILE$1 == (FBSTRING*)0ull ) goto label$993;
	{
		FBSTRING TMP$500$2;
		FBSTRING TMP$501$2;
		FBSTRING TMP$502$2;
		__builtin_memset( &TMP$500$2, 0, 24ll );
		FBSTRING* vr$31 = fb_StrConcat( &TMP$500$2, (void*)"\x22", 2ll, (void*)OBJFILE$1, -1ll );
		__builtin_memset( &TMP$501$2, 0, 24ll );
		FBSTRING* vr$34 = fb_StrConcat( &TMP$501$2, (void*)vr$31, -1ll, (void*)"\x22 ", 3ll );
		__builtin_memset( &TMP$502$2, 0, 24ll );
		FBSTRING* vr$38 = fb_StrConcat( &TMP$502$2, (void*)&LN$1, -1ll, (void*)vr$34, -1ll );
		FBSTRING* vr$40 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$38, -1ll, 0 );
		void* vr$41 = LISTGETNEXT( (void*)OBJFILE$1 );
		OBJFILE$1 = (FBSTRING*)vr$41;
	}
	goto label$992;
	label$993:;
	int64 vr$43 = FBCRUNBIN( (uint8*)"archiving", 1ll, &LN$1 );
	fb$result$1 = vr$43;
	fb_StrDelete( &LN$1 );
	label$985:;
	return fb$result$1;
}

static void HSETDEFAULTLIBPATHS( void )
{
	FBSTRING TMP$504$1;
	FBSTRING TMP$505$1;
	label$994:;
	__builtin_memset( &TMP$504$1, 0, 24ll );
	FBSTRING* vr$3 = fb_StrAssign( (void*)&TMP$504$1, -1ll, (void*)((uint8*)&FBC$ + 3359ll), 261ll, 0 );
	FBCADDDEFLIBPATH( &TMP$504$1 );
	fb_StrDelete( &TMP$504$1 );
	__builtin_memset( &TMP$505$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrAssign( (void*)&TMP$505$1, -1ll, (void*)".", 2ll, 0 );
	FBCADDDEFLIBPATH( &TMP$505$1 );
	fb_StrDelete( &TMP$505$1 );
	FBCADDLIBPATHFOR( (uint8*)"libgcc.a" );
	{
		int64 TMP$507$2;
		int64 vr$11 = FBGETOPTION( 3ll );
		TMP$507$2 = vr$11;
		if( TMP$507$2 != 3ll ) goto label$997;
		label$998:;
		{
			FBCADDLIBPATHFOR( (uint8*)"libm.a" );
		}
		goto label$996;
		label$997:;
		if( TMP$507$2 != 0ll ) goto label$999;
		label$1000:;
		{
			FBCADDLIBPATHFOR( (uint8*)"libmingw32.a" );
		}
		label$999:;
		label$996:;
	}
	label$995:;
}

static void FBCADDDEFLIB( uint8* LIBNAME$1 )
{
	FBSTRING TMP$510$1;
	label$1001:;
	__builtin_memset( &TMP$510$1, 0, 24ll );
	FBSTRING* vr$2 = fb_StrAssign( (void*)&TMP$510$1, -1ll, (void*)LIBNAME$1, 0ll, 0 );
	STRSETADD( (struct $7TSTRSET*)((uint8*)&FBC$ + 680ll), &TMP$510$1, -1ll );
	fb_StrDelete( &TMP$510$1 );
	label$1002:;
}

static FBSTRING* HGETFBLIBNAMESUFFIX( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$1003:;
	FBSTRING S$1;
	__builtin_memset( &S$1, 0, 24ll );
	int64 vr$2 = FBGETOPTION( 24ll );
	if( vr$2 == 0ll ) goto label$1006;
	{
		FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"mt", 3ll, 0 );
	}
	label$1006:;
	label$1005:;
	int64 vr$6 = FBGETOPTION( 26ll );
	if( vr$6 == 0ll ) goto label$1008;
	{
		FBSTRING* vr$9 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"pic", 4ll, 0 );
	}
	label$1008:;
	label$1007:;
	FBSTRING* vr$12 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&S$1, -1ll, 0 );
	fb_StrDelete( &S$1 );
	label$1004:;
	FBSTRING* vr$15 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$15;
}

static void HADDDEFAULTLIBS( void )
{
	FBSTRING TMP$511$1;
	FBSTRING TMP$512$1;
	label$1009:;
	__builtin_memset( &TMP$512$1, 0, 24ll );
	FBSTRING* vr$1 = HGETFBLIBNAMESUFFIX(  );
	__builtin_memset( &TMP$511$1, 0, 24ll );
	FBSTRING* vr$4 = fb_StrConcat( &TMP$511$1, (void*)"fb", 3ll, (void*)vr$1, -1ll );
	FBSTRING* vr$6 = fb_StrAssign( (void*)&TMP$512$1, -1ll, (void*)vr$4, -1ll, 0 );
	FBCADDDEFLIB( *(uint8**)&TMP$512$1 );
	fb_StrDelete( &TMP$512$1 );
	int64 vr$8 = FBGETOPTION( 25ll );
	if( vr$8 == 0ll ) goto label$1012;
	{
		FBSTRING TMP$514$2;
		FBSTRING TMP$515$2;
		__builtin_memset( &TMP$515$2, 0, 24ll );
		FBSTRING* vr$11 = HGETFBLIBNAMESUFFIX(  );
		__builtin_memset( &TMP$514$2, 0, 24ll );
		FBSTRING* vr$14 = fb_StrConcat( &TMP$514$2, (void*)"fbgfx", 6ll, (void*)vr$11, -1ll );
		FBSTRING* vr$16 = fb_StrAssign( (void*)&TMP$515$2, -1ll, (void*)vr$14, -1ll, 0 );
		FBCADDDEFLIB( *(uint8**)&TMP$515$2 );
		fb_StrDelete( &TMP$515$2 );
		{
			uint64 TMP$516$3;
			int64 vr$18 = FBGETOPTION( 3ll );
			TMP$516$3 = (uint64)vr$18;
			goto label$1014;
			label$1015:;
			{
				FBCADDDEFLIB( (uint8*)"gdi32" );
				FBCADDDEFLIB( (uint8*)"winmm" );
			}
			goto label$1013;
			label$1016:;
			{
				FBSTRING TMP$520$4;
				__builtin_memset( &TMP$520$4, 0, 24ll );
				FBSTRING* vr$21 = fb_StrAssign( (void*)&TMP$520$4, -1ll, (void*)"/usr/X11R6/lib", 15ll, 0 );
				FBCADDDEFLIBPATH( &TMP$520$4 );
				fb_StrDelete( &TMP$520$4 );
				FBCADDDEFLIB( (uint8*)"X11" );
				FBCADDDEFLIB( (uint8*)"Xext" );
				FBCADDDEFLIB( (uint8*)"Xpm" );
				FBCADDDEFLIB( (uint8*)"Xrandr" );
				FBCADDDEFLIB( (uint8*)"Xrender" );
			}
			goto label$1013;
			label$1014:;
			static const void* tmp$643[9ll] = {
				&&label$1015,
				&&label$1015,
				&&label$1016,
				&&label$1013,
				&&label$1013,
				&&label$1016,
				&&label$1016,
				&&label$1013,
				&&label$1016,
			};
			if( TMP$516$3 > 8ll ) goto label$1013;
			goto *tmp$643[TMP$516$3 - 0ll];
			label$1013:;
		}
	}
	label$1012:;
	label$1011:;
	{
		uint64 TMP$526$2;
		int64 vr$24 = FBGETOPTION( 3ll );
		TMP$526$2 = (uint64)vr$24;
		goto label$1018;
		label$1019:;
		{
			FBCADDDEFLIB( (uint8*)"gcc" );
			FBCADDDEFLIB( (uint8*)"cygwin" );
			FBCADDDEFLIB( (uint8*)"kernel32" );
			FBCADDDEFLIB( (uint8*)"user32" );
			int64 vr$25 = FBGETOPTION( 16ll );
			if( vr$25 == 0ll ) goto label$1021;
			{
				FBCADDDEFLIB( (uint8*)"gmon" );
			}
			label$1021:;
			label$1020:;
		}
		goto label$1017;
		label$1022:;
		{
			FBCADDDEFLIB( (uint8*)"gcc" );
			FBCADDDEFLIB( (uint8*)"System" );
		}
		goto label$1017;
		label$1023:;
		{
			FBCADDDEFLIB( (uint8*)"gcc" );
			FBCADDDEFLIB( (uint8*)"c" );
			FBCADDDEFLIB( (uint8*)"m" );
		}
		goto label$1017;
		label$1024:;
		{
			FBCADDDEFLIB( (uint8*)"gcc" );
			FBCADDDEFLIB( (uint8*)"pthread" );
			FBCADDDEFLIB( (uint8*)"c" );
			FBCADDDEFLIB( (uint8*)"m" );
			FBCADDDEFLIB( (uint8*)"ncurses" );
		}
		goto label$1017;
		label$1025:;
		{
			FBSTRING* vr$27 = FBCFINDLIBFILE( (uint8*)"libtinfo.a" );
			int64 vr$28 = fb_StrLen( (void*)vr$27, -1ll );
			FBSTRING* vr$30 = FBCFINDLIBFILE( (uint8*)"libtinfo.so" );
			int64 vr$31 = fb_StrLen( (void*)vr$30, -1ll );
			if( ((int64)-(vr$28 > 0ll) | (int64)-(vr$31 > 0ll)) == 0ll ) goto label$1027;
			{
				FBCADDDEFLIB( (uint8*)"tinfo" );
			}
			goto label$1026;
			label$1027:;
			{
				FBCADDDEFLIB( (uint8*)"ncurses" );
			}
			label$1026:;
			FBCADDDEFLIB( (uint8*)"m" );
			FBCADDDEFLIB( (uint8*)"dl" );
			FBCADDDEFLIB( (uint8*)"pthread" );
			FBCADDDEFLIB( (uint8*)"gcc" );
			FBSTRING* vr$35 = FBCFINDLIBFILE( (uint8*)"libgcc_eh.a" );
			int64 vr$36 = fb_StrLen( (void*)vr$35, -1ll );
			FBSTRING* vr$38 = FBCFINDLIBFILE( (uint8*)"libgcc_eh.so" );
			int64 vr$39 = fb_StrLen( (void*)vr$38, -1ll );
			if( ((int64)-(vr$36 > 0ll) | (int64)-(vr$39 > 0ll)) == 0ll ) goto label$1029;
			{
				FBCADDDEFLIB( (uint8*)"gcc_eh" );
			}
			label$1029:;
			label$1028:;
			FBCADDDEFLIB( (uint8*)"c" );
		}
		goto label$1017;
		label$1030:;
		{
		}
		goto label$1017;
		label$1031:;
		{
			FBCADDDEFLIB( (uint8*)"gcc" );
			FBCADDDEFLIB( (uint8*)"pthread" );
			FBCADDDEFLIB( (uint8*)"c" );
			FBCADDDEFLIB( (uint8*)"m" );
			FBCADDDEFLIB( (uint8*)"ncurses" );
		}
		goto label$1017;
		label$1032:;
		{
			FBCADDDEFLIB( (uint8*)"gcc" );
			FBCADDDEFLIB( (uint8*)"msvcrt" );
			FBCADDDEFLIB( (uint8*)"kernel32" );
			FBCADDDEFLIB( (uint8*)"user32" );
			FBCADDDEFLIB( (uint8*)"mingw32" );
			FBCADDDEFLIB( (uint8*)"mingwex" );
			FBCADDDEFLIB( (uint8*)"moldname" );
			FBSTRING* vr$43 = FBCFINDLIBFILE( (uint8*)"libgcc_eh.a" );
			int64 vr$44 = fb_StrLen( (void*)vr$43, -1ll );
			FBSTRING* vr$46 = FBCFINDLIBFILE( (uint8*)"libgcc_eh.dll.a" );
			int64 vr$47 = fb_StrLen( (void*)vr$46, -1ll );
			if( ((int64)-(vr$44 > 0ll) | (int64)-(vr$47 > 0ll)) == 0ll ) goto label$1034;
			{
				FBCADDDEFLIB( (uint8*)"gcc_eh" );
			}
			label$1034:;
			label$1033:;
			int64 vr$51 = FBGETOPTION( 16ll );
			if( vr$51 == 0ll ) goto label$1036;
			{
				FBCADDDEFLIB( (uint8*)"gmon" );
			}
			label$1036:;
			label$1035:;
		}
		goto label$1017;
		label$1037:;
		{
			FBCADDDEFLIB( (uint8*)"gcc" );
			FBCADDDEFLIB( (uint8*)"fbgfx" );
			FBCADDDEFLIB( (uint8*)"openxdk" );
			FBCADDDEFLIB( (uint8*)"hal" );
			FBCADDDEFLIB( (uint8*)"c" );
			FBCADDDEFLIB( (uint8*)"usb" );
			FBCADDDEFLIB( (uint8*)"xboxkrnl" );
			FBCADDDEFLIB( (uint8*)"m" );
			int64 vr$53 = FBGETOPTION( 16ll );
			if( vr$53 == 0ll ) goto label$1039;
			{
				FBCADDDEFLIB( (uint8*)"gmon" );
			}
			label$1039:;
			label$1038:;
		}
		goto label$1017;
		label$1018:;
		static const void* tmp$644[9ll] = {
			&&label$1032,
			&&label$1019,
			&&label$1025,
			&&label$1023,
			&&label$1037,
			&&label$1024,
			&&label$1031,
			&&label$1022,
			&&label$1030,
		};
		if( TMP$526$2 > 8ll ) goto label$1017;
		goto *tmp$644[TMP$526$2 - 0ll];
		label$1017:;
	}
	label$1010:;
}

static void HPRINTOPTIONS( void )
{
	label$1040:;
	FBSTRING* vr$0 = fb_StrAllocTempDescZEx( (uint8*)"usage: fbc [options] <input files>", 34ll );
	fb_PrintString( 0, vr$0, 1 );
	FBSTRING* vr$1 = fb_StrAllocTempDescZEx( (uint8*)"input files:", 12ll );
	fb_PrintString( 0, vr$1, 1 );
	FBSTRING* vr$2 = fb_StrAllocTempDescZEx( (uint8*)"  *.a = static library, *.o = object file, *.bas = source", 57ll );
	fb_PrintString( 0, vr$2, 1 );
	FBSTRING* vr$3 = fb_StrAllocTempDescZEx( (uint8*)"  *.rc = resource script, *.res = compiled resource (win32)", 59ll );
	fb_PrintString( 0, vr$3, 1 );
	FBSTRING* vr$4 = fb_StrAllocTempDescZEx( (uint8*)"  *.xpm = icon resource (*nix/*bsd)", 35ll );
	fb_PrintString( 0, vr$4, 1 );
	FBSTRING* vr$5 = fb_StrAllocTempDescZEx( (uint8*)"options:", 8ll );
	fb_PrintString( 0, vr$5, 1 );
	FBSTRING* vr$6 = fb_StrAllocTempDescZEx( (uint8*)"  @<file>          Read more command line arguments from a file", 63ll );
	fb_PrintString( 0, vr$6, 1 );
	FBSTRING* vr$7 = fb_StrAllocTempDescZEx( (uint8*)"  -a <file>        Treat file as .o/.a input file", 49ll );
	fb_PrintString( 0, vr$7, 1 );
	FBSTRING* vr$8 = fb_StrAllocTempDescZEx( (uint8*)"  -arch <type>     Set target architecture (default: 486)", 57ll );
	fb_PrintString( 0, vr$8, 1 );
	FBSTRING* vr$9 = fb_StrAllocTempDescZEx( (uint8*)"  -asm att|intel   Set asm format (-gen gcc)", 44ll );
	fb_PrintString( 0, vr$9, 1 );
	FBSTRING* vr$10 = fb_StrAllocTempDescZEx( (uint8*)"  -b <file>        Treat file as .bas input file", 48ll );
	fb_PrintString( 0, vr$10, 1 );
	FBSTRING* vr$11 = fb_StrAllocTempDescZEx( (uint8*)"  -c               Compile only, do not link", 44ll );
	fb_PrintString( 0, vr$11, 1 );
	FBSTRING* vr$12 = fb_StrAllocTempDescZEx( (uint8*)"  -C               Preserve temporary .o files", 46ll );
	fb_PrintString( 0, vr$12, 1 );
	FBSTRING* vr$13 = fb_StrAllocTempDescZEx( (uint8*)"  -d <name>[=<val>]  Add a global #define", 41ll );
	fb_PrintString( 0, vr$13, 1 );
	FBSTRING* vr$14 = fb_StrAllocTempDescZEx( (uint8*)"  -dll             Same as -dylib", 33ll );
	fb_PrintString( 0, vr$14, 1 );
	FBSTRING* vr$15 = fb_StrAllocTempDescZEx( (uint8*)"  -dylib           Create a DLL (win32) or shared library (*nix/*BSD)", 69ll );
	fb_PrintString( 0, vr$15, 1 );
	FBSTRING* vr$16 = fb_StrAllocTempDescZEx( (uint8*)"  -e               Enable runtime error checking", 48ll );
	fb_PrintString( 0, vr$16, 1 );
	FBSTRING* vr$17 = fb_StrAllocTempDescZEx( (uint8*)"  -ex              -e plus RESUME support", 41ll );
	fb_PrintString( 0, vr$17, 1 );
	FBSTRING* vr$18 = fb_StrAllocTempDescZEx( (uint8*)"  -exx             -ex plus array bounds/null-pointer checking", 62ll );
	fb_PrintString( 0, vr$18, 1 );
	FBSTRING* vr$19 = fb_StrAllocTempDescZEx( (uint8*)"  -export          Export symbols for dynamic linkage", 53ll );
	fb_PrintString( 0, vr$19, 1 );
	FBSTRING* vr$20 = fb_StrAllocTempDescZEx( (uint8*)"  -forcelang <name>  Override #lang statements in source code", 61ll );
	fb_PrintString( 0, vr$20, 1 );
	FBSTRING* vr$21 = fb_StrAllocTempDescZEx( (uint8*)"  -fpmode fast|precise  Select floating-point math accuracy/speed", 65ll );
	fb_PrintString( 0, vr$21, 1 );
	FBSTRING* vr$22 = fb_StrAllocTempDescZEx( (uint8*)"  -fpu x87|sse     Set target FPU", 33ll );
	fb_PrintString( 0, vr$22, 1 );
	FBSTRING* vr$23 = fb_StrAllocTempDescZEx( (uint8*)"  -g               Add debug info", 33ll );
	fb_PrintString( 0, vr$23, 1 );
	FBSTRING* vr$24 = fb_StrAllocTempDescZEx( (uint8*)"  -gen gas|gcc|llvm  Select code generation backend", 51ll );
	fb_PrintString( 0, vr$24, 1 );
	FBSTRING* vr$25 = fb_StrAllocTempDescZEx( (uint8*)"  [-]-help         Show this help output", 40ll );
	fb_PrintString( 0, vr$25, 1 );
	FBSTRING* vr$26 = fb_StrAllocTempDescZEx( (uint8*)"  -i <path>        Add an include file search path", 50ll );
	fb_PrintString( 0, vr$26, 1 );
	FBSTRING* vr$27 = fb_StrAllocTempDescZEx( (uint8*)"  -include <file>  Pre-#include a file for each input .bas", 58ll );
	fb_PrintString( 0, vr$27, 1 );
	FBSTRING* vr$28 = fb_StrAllocTempDescZEx( (uint8*)"  -l <name>        Link in a library", 36ll );
	fb_PrintString( 0, vr$28, 1 );
	FBSTRING* vr$29 = fb_StrAllocTempDescZEx( (uint8*)"  -lang <name>     Select FB dialect: deprecated, fblite, qb", 60ll );
	fb_PrintString( 0, vr$29, 1 );
	FBSTRING* vr$30 = fb_StrAllocTempDescZEx( (uint8*)"  -lib             Create a static library", 42ll );
	fb_PrintString( 0, vr$30, 1 );
	FBSTRING* vr$31 = fb_StrAllocTempDescZEx( (uint8*)"  -m <name>        Specify main module (default if not -c: first input .bas)", 76ll );
	fb_PrintString( 0, vr$31, 1 );
	FBSTRING* vr$32 = fb_StrAllocTempDescZEx( (uint8*)"  -map <file>      Save linking map to file", 43ll );
	fb_PrintString( 0, vr$32, 1 );
	FBSTRING* vr$33 = fb_StrAllocTempDescZEx( (uint8*)"  -maxerr <n>      Only show <n> errors", 39ll );
	fb_PrintString( 0, vr$33, 1 );
	FBSTRING* vr$34 = fb_StrAllocTempDescZEx( (uint8*)"  -mt              Use thread-safe FB runtime", 45ll );
	fb_PrintString( 0, vr$34, 1 );
	FBSTRING* vr$35 = fb_StrAllocTempDescZEx( (uint8*)"  -nodeflibs       Do not include the default libraries", 55ll );
	fb_PrintString( 0, vr$35, 1 );
	FBSTRING* vr$36 = fb_StrAllocTempDescZEx( (uint8*)"  -noerrline       Do not show source context in error messages", 63ll );
	fb_PrintString( 0, vr$36, 1 );
	FBSTRING* vr$37 = fb_StrAllocTempDescZEx( (uint8*)"  -o <file>        Set .o (or -pp .bas) file name for prev/next input file", 74ll );
	fb_PrintString( 0, vr$37, 1 );
	FBSTRING* vr$38 = fb_StrAllocTempDescZEx( (uint8*)"  -O <value>       Optimization level (default: 0)", 50ll );
	fb_PrintString( 0, vr$38, 1 );
	FBSTRING* vr$39 = fb_StrAllocTempDescZEx( (uint8*)"  -p <path>        Add a library search path", 44ll );
	fb_PrintString( 0, vr$39, 1 );
	FBSTRING* vr$40 = fb_StrAllocTempDescZEx( (uint8*)"  -pic             Generate position-indepedent code (non-x86 Unix shared libs)", 79ll );
	fb_PrintString( 0, vr$40, 1 );
	FBSTRING* vr$41 = fb_StrAllocTempDescZEx( (uint8*)"  -pp              Write out preprocessed input file (.pp.bas) only", 67ll );
	fb_PrintString( 0, vr$41, 1 );
	FBSTRING* vr$42 = fb_StrAllocTempDescZEx( (uint8*)"  -prefix <path>   Set the compiler prefix path", 47ll );
	fb_PrintString( 0, vr$42, 1 );
	FBSTRING* vr$43 = fb_StrAllocTempDescZEx( (uint8*)"  -print host|target  Display host/target system name", 53ll );
	fb_PrintString( 0, vr$43, 1 );
	FBSTRING* vr$44 = fb_StrAllocTempDescZEx( (uint8*)"  -print x         Display output binary/library file name (if known)", 69ll );
	fb_PrintString( 0, vr$44, 1 );
	FBSTRING* vr$45 = fb_StrAllocTempDescZEx( (uint8*)"  -profile         Enable function profiling", 44ll );
	fb_PrintString( 0, vr$45, 1 );
	FBSTRING* vr$46 = fb_StrAllocTempDescZEx( (uint8*)"  -r               Write out .asm (-gen gas) or .c (-gen gcc) only", 66ll );
	fb_PrintString( 0, vr$46, 1 );
	FBSTRING* vr$47 = fb_StrAllocTempDescZEx( (uint8*)"  -rr              Write out the final .asm only", 48ll );
	fb_PrintString( 0, vr$47, 1 );
	FBSTRING* vr$48 = fb_StrAllocTempDescZEx( (uint8*)"  -R               Preserve the temporary .asm/.c file", 54ll );
	fb_PrintString( 0, vr$48, 1 );
	FBSTRING* vr$49 = fb_StrAllocTempDescZEx( (uint8*)"  -RR              Preserve the final .asm file", 47ll );
	fb_PrintString( 0, vr$49, 1 );
	FBSTRING* vr$50 = fb_StrAllocTempDescZEx( (uint8*)"  -s console|gui   Select win32 subsystem", 41ll );
	fb_PrintString( 0, vr$50, 1 );
	FBSTRING* vr$51 = fb_StrAllocTempDescZEx( (uint8*)"  -static          Prefer static libraries over dynamic ones when linking", 73ll );
	fb_PrintString( 0, vr$51, 1 );
	FBSTRING* vr$52 = fb_StrAllocTempDescZEx( (uint8*)"  -t <value>       Set .exe stack size in kbytes, default: 1024 (win32/dos)", 75ll );
	fb_PrintString( 0, vr$52, 1 );
	FBSTRING* vr$53 = fb_StrAllocTempDescZEx( (uint8*)"  -target <name>   Set cross-compilation target", 47ll );
	fb_PrintString( 0, vr$53, 1 );
	FBSTRING* vr$54 = fb_StrAllocTempDescZEx( (uint8*)"  -title <name>    Set XBE display title (xbox)", 47ll );
	fb_PrintString( 0, vr$54, 1 );
	FBSTRING* vr$55 = fb_StrAllocTempDescZEx( (uint8*)"  -v               Be verbose", 29ll );
	fb_PrintString( 0, vr$55, 1 );
	FBSTRING* vr$56 = fb_StrAllocTempDescZEx( (uint8*)"  -vec <n>         Automatic vectorization level (default: 0)", 61ll );
	fb_PrintString( 0, vr$56, 1 );
	FBSTRING* vr$57 = fb_StrAllocTempDescZEx( (uint8*)"  [-]-version      Show compiler version", 40ll );
	fb_PrintString( 0, vr$57, 1 );
	FBSTRING* vr$58 = fb_StrAllocTempDescZEx( (uint8*)"  -w all|pedantic|<n>  Set min warning level: all, pedantic or a value", 70ll );
	fb_PrintString( 0, vr$58, 1 );
	FBSTRING* vr$59 = fb_StrAllocTempDescZEx( (uint8*)"  -Wa <a,b,c>      Pass options to 'as' (-gen gas or -gen llvm)", 63ll );
	fb_PrintString( 0, vr$59, 1 );
	FBSTRING* vr$60 = fb_StrAllocTempDescZEx( (uint8*)"  -Wc <a,b,c>      Pass options to 'gcc' (-gen gcc) or 'llc' (-gen llvm)", 72ll );
	fb_PrintString( 0, vr$60, 1 );
	FBSTRING* vr$61 = fb_StrAllocTempDescZEx( (uint8*)"  -Wl <a,b,c>      Pass options to 'ld'", 39ll );
	fb_PrintString( 0, vr$61, 1 );
	FBSTRING* vr$62 = fb_StrAllocTempDescZEx( (uint8*)"  -x <file>        Set output executable/library file name", 58ll );
	fb_PrintString( 0, vr$62, 1 );
	FBSTRING* vr$63 = fb_StrAllocTempDescZEx( (uint8*)"  -z gosub-setjmp  Use setjmp/longjmp to implement GOSUB", 56ll );
	fb_PrintString( 0, vr$63, 1 );
	label$1041:;
}

static void HPRINTVERSION( void )
{
	FBSTRING TMP$622$1;
	FBSTRING TMP$623$1;
	FBSTRING TMP$624$1;
	FBSTRING TMP$625$1;
	label$1046:;
	FBSTRING CONFIG$1;
	__builtin_memset( &CONFIG$1, 0, 24ll );
	int64 vr$1 = FBGETHOSTBITS(  );
	FBSTRING* vr$2 = fb_LongintToStr( vr$1 );
	FBSTRING* vr$3 = FBGETHOSTID(  );
	__builtin_memset( &TMP$622$1, 0, 24ll );
	FBSTRING* vr$6 = fb_StrConcat( &TMP$622$1, (void*)"FreeBASIC Compiler - Version 1.01.0 (02-28-2015), built for ", 61ll, (void*)vr$3, -1ll );
	__builtin_memset( &TMP$623$1, 0, 24ll );
	FBSTRING* vr$9 = fb_StrConcat( &TMP$623$1, (void*)vr$6, -1ll, (void*)" (", 3ll );
	__builtin_memset( &TMP$624$1, 0, 24ll );
	FBSTRING* vr$12 = fb_StrConcat( &TMP$624$1, (void*)vr$9, -1ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$625$1, 0, 24ll );
	FBSTRING* vr$15 = fb_StrConcat( &TMP$625$1, (void*)vr$12, -1ll, (void*)"bit)", 5ll );
	fb_PrintString( 0, vr$15, 1 );
	FBSTRING* vr$16 = fb_StrAllocTempDescZEx( (uint8*)"Copyright (C) 2004-2014 The FreeBASIC development team.", 55ll );
	fb_PrintString( 0, vr$16, 1 );
	int64 vr$18 = fb_StrLen( (void*)&CONFIG$1, -1ll );
	if( vr$18 <= 0ll ) goto label$1049;
	{
		fb_PrintString( 0, &CONFIG$1, 1 );
	}
	label$1049:;
	label$1048:;
	fb_StrDelete( &CONFIG$1 );
	label$1047:;
}

__attribute__(( constructor )) static void _GLOBAL__I( void )
{
	label$1086:;
	_ZN6FBCCTXC1Ev( &FBC$ );
	label$1087:;
}

__attribute__(( destructor )) static void _GLOBAL__D( void )
{
	label$1089:;
	_ZN6FBCCTXD1Ev( &FBC$ );
	label$1090:;
}

// Total compilation time: 0.02909499383531511 seconds.
