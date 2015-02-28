// Compilation of fbc-1.01.0/src/compiler/objinfo.bas started at 15:27:40 on 02-28-2015

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
struct $16OBJINFOPARSERCTX {
	int64 I;
	FBSTRING FILENAME;
	int64 IS_OLD;
	int64 OLD_SECTION;
};
__FB_STATIC_ASSERT( sizeof( struct $16OBJINFOPARSERCTX ) == 48 );
struct $8ELF32_SH {
	uint32 SH_NAME __attribute__((packed, aligned(1)));
	uint32 SH_TYPE __attribute__((packed, aligned(1)));
	uint32 SH_FLAGS __attribute__((packed, aligned(1)));
	uint32 SH_ADDR __attribute__((packed, aligned(1)));
	uint32 SH_OFFSET __attribute__((packed, aligned(1)));
	uint32 SH_SIZE __attribute__((packed, aligned(1)));
	uint32 SH_LINK __attribute__((packed, aligned(1)));
	uint32 SH_INFO __attribute__((packed, aligned(1)));
	uint32 SH_ADDRALIGN __attribute__((packed, aligned(1)));
	uint32 SH_ENTSIZE __attribute__((packed, aligned(1)));
};
__FB_STATIC_ASSERT( sizeof( struct $8ELF32_SH ) == 40 );
struct $7ELF32_H {
	uint8 E_IDENT[16];
	uint16 E_TYPE __attribute__((packed, aligned(1)));
	uint16 E_MACHINE __attribute__((packed, aligned(1)));
	uint32 E_VERSION __attribute__((packed, aligned(1)));
	uint32 E_ENTRY __attribute__((packed, aligned(1)));
	uint32 E_PHOFF __attribute__((packed, aligned(1)));
	uint32 E_SHOFF __attribute__((packed, aligned(1)));
	uint32 E_FLAGS __attribute__((packed, aligned(1)));
	uint16 E_EHSIZE __attribute__((packed, aligned(1)));
	uint16 E_PHENTSIZE __attribute__((packed, aligned(1)));
	uint16 E_PHNUM __attribute__((packed, aligned(1)));
	uint16 E_SHENTSIZE __attribute__((packed, aligned(1)));
	uint16 E_SHNUM __attribute__((packed, aligned(1)));
	uint16 E_SHSTRNDX __attribute__((packed, aligned(1)));
};
__FB_STATIC_ASSERT( sizeof( struct $7ELF32_H ) == 52 );
struct $8ELF64_SH {
	uint32 SH_NAME __attribute__((packed, aligned(1)));
	uint32 SH_TYPE __attribute__((packed, aligned(1)));
	uint64 SH_FLAGS __attribute__((packed, aligned(1)));
	uint64 SH_ADDR __attribute__((packed, aligned(1)));
	uint64 SH_OFFSET __attribute__((packed, aligned(1)));
	uint64 SH_SIZE __attribute__((packed, aligned(1)));
	uint32 SH_LINK __attribute__((packed, aligned(1)));
	uint32 SH_INFO __attribute__((packed, aligned(1)));
	uint64 SH_ADDRALIGN __attribute__((packed, aligned(1)));
	uint64 SH_ENTSIZE __attribute__((packed, aligned(1)));
};
__FB_STATIC_ASSERT( sizeof( struct $8ELF64_SH ) == 64 );
struct $7ELF64_H {
	uint8 E_IDENT[16];
	uint16 E_TYPE __attribute__((packed, aligned(1)));
	uint16 E_MACHINE __attribute__((packed, aligned(1)));
	uint32 E_VERSION __attribute__((packed, aligned(1)));
	uint64 E_ENTRY __attribute__((packed, aligned(1)));
	uint64 E_PHOFF __attribute__((packed, aligned(1)));
	uint64 E_SHOFF __attribute__((packed, aligned(1)));
	uint32 E_FLAGS __attribute__((packed, aligned(1)));
	uint16 E_EHSIZE __attribute__((packed, aligned(1)));
	uint16 E_PHENTSIZE __attribute__((packed, aligned(1)));
	uint16 E_PHNUM __attribute__((packed, aligned(1)));
	uint16 E_SHENTSIZE __attribute__((packed, aligned(1)));
	uint16 E_SHNUM __attribute__((packed, aligned(1)));
	uint16 E_SHSTRNDX __attribute__((packed, aligned(1)));
};
__FB_STATIC_ASSERT( sizeof( struct $7ELF64_H ) == 64 );
struct $6COFF_H {
	uint16 MAGIC __attribute__((packed, aligned(1)));
	uint16 SECCOUNT __attribute__((packed, aligned(1)));
	uint32 TIMESTAMP __attribute__((packed, aligned(1)));
	uint32 SYMTBOFFSET __attribute__((packed, aligned(1)));
	uint32 SYMCOUNT __attribute__((packed, aligned(1)));
	uint16 OPTHEADSIZE __attribute__((packed, aligned(1)));
	uint16 FLAGS __attribute__((packed, aligned(1)));
};
__FB_STATIC_ASSERT( sizeof( struct $6COFF_H ) == 20 );
struct $7COFF_SH {
	uint8 NAME[8];
	uint32 PADDR __attribute__((packed, aligned(1)));
	uint32 VADDR __attribute__((packed, aligned(1)));
	uint32 SIZE __attribute__((packed, aligned(1)));
	uint32 DATAOFFSET __attribute__((packed, aligned(1)));
	uint32 RELOFFSET __attribute__((packed, aligned(1)));
	uint32 LNOFFSET __attribute__((packed, aligned(1)));
	uint16 RELCOUNT __attribute__((packed, aligned(1)));
	uint16 LNCOUNT __attribute__((packed, aligned(1)));
	uint32 FLAGS __attribute__((packed, aligned(1)));
};
__FB_STATIC_ASSERT( sizeof( struct $7COFF_SH ) == 40 );
struct $4AR_H {
	uint8 NAME[16];
	uint8 MODIFYTIME[12];
	uint8 OWNERID[6];
	uint8 GROUPID[6];
	uint8 MODE[8];
	uint8 SIZE[10];
	uint8 MAGIC[2];
};
__FB_STATIC_ASSERT( sizeof( struct $4AR_H ) == 60 );
struct $10DATABUFFER {
	uint8* P;
	int64 SIZE;
};
__FB_STATIC_ASSERT( sizeof( struct $10DATABUFFER ) == 16 );
#define fb_D2L( value ) ((int64)__builtin_nearbyint( value ))
void* fb_ErrorThrowAt( int32, uint8*, void*, void* );
int32 fb_FileOpen( FBSTRING*, uint32, uint32, uint32, int32, int32 );
int32 fb_FileClose( int32 );
int32 fb_FileGetLargeIOB( int32, int64, void*, uint64, uint64* );
int32 fb_FileFree( void );
int64 fb_FileSize( int32 );
void* malloc( uint64 );
void free( void* );
FBSTRING* fb_StrInit( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
int32 fb_StrCompare( void*, int64, void*, int64 );
FBSTRING* fb_StrAllocTempDescZ( uint8* );
int64 fb_StrLen( void*, int64 );
double fb_VAL( FBSTRING* );
static void fb_ctor__objinfo( void ) __attribute__(( constructor ));
void* LISTGETHEAD( struct $5TLIST* );
void* LISTGETNEXT( void* );
void OBJINFOREADLIBFILE( FBSTRING* );
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
int64 FBGETOPTION( int64 );
int64 FBGETCPUFAMILY( void );
int64 HFILEEXISTS( uint8* );
static void _ZN16OBJINFOPARSERCTXC1Ev( struct $16OBJINFOPARSERCTX* );
static void _ZN16OBJINFOPARSERCTXaSERKS_( struct $16OBJINFOPARSERCTX*, struct $16OBJINFOPARSERCTX* );
static void _ZN16OBJINFOPARSERCTXD1Ev( struct $16OBJINFOPARSERCTX* );
static struct $8ELF32_SH* HCHECKELF32_SH( struct $7ELF32_H*, int64 );
static uint8* HGETSECTIONNAMEELF32_SH( struct $7ELF32_H*, int64, int64 );
static void HLOADFBCTINFFROMELF32_H( void );
static struct $8ELF64_SH* HCHECKELF64_SH( struct $7ELF64_H*, int64 );
static uint8* HGETSECTIONNAMEELF64_SH( struct $7ELF64_H*, int64, int64 );
static void HLOADFBCTINFFROMELF64_H( void );
static void HLOADFBCTINFFROMCOFF( uint16 );
static uint8* HLOADARSTRING( uint8*, int64 );
static void HLOADOBJFROMAR( void );
static void HLOADFILE( FBSTRING*, struct $10DATABUFFER* );
static void HLOADFBCTINFFROMOBJ( void );
static void HRESETBUFFERS( void );
static void OBJINFOINIT( FBSTRING* );
static uint8* HGETNEXTSTRING( void );
static void _GLOBAL__I( void ) __attribute__(( constructor ));
static void _GLOBAL__D( void ) __attribute__(( destructor ));
static struct $10DATABUFFER ARDATA$;
static struct $10DATABUFFER OBJDATA$;
static struct $10DATABUFFER FBCTINF$;
static struct $16OBJINFOPARSERCTX PARSER$;
static uint8 FBCTINFNAME$[9] = ".fbctinf";
static uint8 ELFMAGIC$[16] = { (uint8)127u, (uint8)69u, (uint8)76u, (uint8)70u, (uint8)0u, (uint8)1u, (uint8)1u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u, (uint8)0u };
static uint8 ARMAGIC$[8] = { (uint8)33u, (uint8)60u, (uint8)97u, (uint8)114u, (uint8)99u, (uint8)104u, (uint8)62u, (uint8)10u };
struct $9ENTRYINFO {
	uint8* TEXT;
	int64 HAS_PARAM;
};
__FB_STATIC_ASSERT( sizeof( struct $9ENTRYINFO ) == 16 );
static struct $9ENTRYINFO ENTRIES$[5] = { { (uint8*)"-l", -1ll }, { (uint8*)"-p", -1ll }, { (uint8*)"-mt", 0ll }, { (uint8*)"-gfx", 0ll }, { (uint8*)"-lang", -1ll } };

void OBJINFOREADOBJ( FBSTRING* OBJFILE$1 )
{
	label$210:;
	OBJINFOINIT( OBJFILE$1 );
	HLOADFILE( OBJFILE$1, &OBJDATA$ );
	if( *(int64*)((uint8*)&OBJDATA$ + 8ll) != 0ll ) goto label$213;
	{
		goto label$211;
	}
	label$213:;
	label$212:;
	HLOADFBCTINFFROMOBJ(  );
	label$211:;
}

void OBJINFOREADLIBFILE( FBSTRING* LIBFILE$1 )
{
	label$214:;
	OBJINFOINIT( LIBFILE$1 );
	HLOADFILE( LIBFILE$1, &ARDATA$ );
	if( *(int64*)((uint8*)&ARDATA$ + 8ll) != 0ll ) goto label$217;
	{
		goto label$215;
	}
	label$217:;
	label$216:;
	HLOADOBJFROMAR(  );
	if( *(int64*)((uint8*)&OBJDATA$ + 8ll) != 0ll ) goto label$219;
	{
		goto label$215;
	}
	label$219:;
	label$218:;
	HLOADFBCTINFFROMOBJ(  );
	label$215:;
}

void OBJINFOREADLIB( FBSTRING* LIBNAME$1, struct $5TLIST* LIBPATHS$1 )
{
	FBSTRING TMP$50$1;
	FBSTRING TMP$51$1;
	label$220:;
	static FBSTRING LIBFILE$1;
	static FBSTRING FILENAME$1;
	struct $11TSTRSETITEM* PATH$1;
	__builtin_memset( &TMP$50$1, 0, 24ll );
	FBSTRING* vr$2 = fb_StrConcat( &TMP$50$1, (void*)"lib", 4ll, (void*)LIBNAME$1, -1ll );
	__builtin_memset( &TMP$51$1, 0, 24ll );
	FBSTRING* vr$5 = fb_StrConcat( &TMP$51$1, (void*)vr$2, -1ll, (void*)".a", 3ll );
	FBSTRING* vr$6 = fb_StrAssign( (void*)&FILENAME$1, -1ll, (void*)vr$5, -1ll, 0 );
	void* vr$7 = LISTGETHEAD( LIBPATHS$1 );
	PATH$1 = (struct $11TSTRSETITEM*)vr$7;
	label$222:;
	if( PATH$1 == (struct $11TSTRSETITEM*)0ull ) goto label$223;
	{
		FBSTRING TMP$52$2;
		FBSTRING TMP$53$2;
		__builtin_memset( &TMP$52$2, 0, 24ll );
		FBSTRING* vr$13 = fb_StrConcat( &TMP$52$2, (void*)PATH$1, -1ll, (void*)"/", 2ll );
		__builtin_memset( &TMP$53$2, 0, 24ll );
		FBSTRING* vr$16 = fb_StrConcat( &TMP$53$2, (void*)vr$13, -1ll, (void*)&FILENAME$1, -1ll );
		FBSTRING* vr$17 = fb_StrAssign( (void*)&LIBFILE$1, -1ll, (void*)vr$16, -1ll, 0 );
		int64 vr$18 = HFILEEXISTS( *(uint8**)&LIBFILE$1 );
		if( vr$18 == 0ll ) goto label$225;
		{
			goto label$223;
		}
		label$225:;
		label$224:;
		void* vr$20 = LISTGETNEXT( (void*)PATH$1 );
		PATH$1 = (struct $11TSTRSETITEM*)vr$20;
	}
	goto label$222;
	label$223:;
	if( PATH$1 != (struct $11TSTRSETITEM*)0ull ) goto label$227;
	{
		goto label$221;
	}
	label$227:;
	label$226:;
	OBJINFOREADLIBFILE( &LIBFILE$1 );
	label$221:;
}

int64 OBJINFOREADNEXT( FBSTRING* DAT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$234:;
	if( *(int64*)((uint8*)&FBCTINF$ + 8ll) > 0ll ) goto label$237;
	{
		fb$result$1 = -1ll;
		goto label$235;
	}
	label$237:;
	label$236:;
	if( *(int64*)((uint8*)&PARSER$ + 32ll) == 0ll ) goto label$239;
	{
		label$240:;
		if( *(int64*)&PARSER$ >= *(int64*)((uint8*)&FBCTINF$ + 8ll) ) goto label$241;
		{
			if( *(int64*)((uint8*)&PARSER$ + 40ll) >= 0ll ) goto label$243;
			{
				*(int64*)((uint8*)&PARSER$ + 40ll) = (int64)*(uint8*)(*(uint8**)&FBCTINF$ + *(int64*)&PARSER$);
				*(int64*)&PARSER$ = *(int64*)&PARSER$ + 1ll;
				if( ((int64)-(*(int64*)((uint8*)&PARSER$ + 40ll) <= 0ll) | (int64)-(*(int64*)((uint8*)&PARSER$ + 40ll) > 3ll)) == 0ll ) goto label$245;
				{
					*(int64*)((uint8*)&PARSER$ + 40ll) = -1ll;
					*(int64*)&PARSER$ = *(int64*)((uint8*)&FBCTINF$ + 8ll);
					fb$result$1 = -1ll;
					goto label$235;
				}
				label$245:;
				label$244:;
			}
			label$243:;
			label$242:;
			if( *(int64*)&PARSER$ < *(int64*)((uint8*)&FBCTINF$ + 8ll) ) goto label$247;
			{
				fb$result$1 = -1ll;
				goto label$235;
			}
			label$247:;
			label$246:;
			*(int64*)&PARSER$ = *(int64*)&PARSER$ + 1ll;
			if( (int64)*(uint8*)((uint8*)(*(uint8**)&FBCTINF$ + *(int64*)&PARSER$) + -1ll) != 0ll ) goto label$249;
			{
				*(int64*)((uint8*)&PARSER$ + 40ll) = -1ll;
				goto label$240;
			}
			label$249:;
			label$248:;
			uint8* vr$17 = HGETNEXTSTRING(  );
			fb_StrAssign( (void*)DAT$1, -1ll, (void*)vr$17, 0ll, 0 );
			{
				int64 TMP$54$4;
				TMP$54$4 = *(int64*)((uint8*)&PARSER$ + 40ll);
				if( TMP$54$4 != 1ll ) goto label$251;
				label$252:;
				{
					fb$result$1 = 0ll;
					goto label$235;
				}
				goto label$250;
				label$251:;
				if( TMP$54$4 != 2ll ) goto label$253;
				label$254:;
				{
					fb$result$1 = 1ll;
					goto label$235;
				}
				goto label$250;
				label$253:;
				if( TMP$54$4 != 3ll ) goto label$255;
				label$256:;
				{
					{
						FBSTRING TMP$55$6;
						FBSTRING* vr$22 = fb_StrInit( (void*)&TMP$55$6, -1ll, (void*)DAT$1, -1ll, 0 );
						int32 vr$24 = fb_StrCompare( (void*)&TMP$55$6, -1ll, (void*)"-lang", 6ll );
						if( (int64)vr$24 != 0ll ) goto label$258;
						label$259:;
						{
							uint8* vr$27 = HGETNEXTSTRING(  );
							fb_StrAssign( (void*)DAT$1, -1ll, (void*)vr$27, 0ll, 0 );
							int64 vr$28 = fb_StrLen( (void*)DAT$1, -1ll );
							if( vr$28 <= 0ll ) goto label$261;
							{
								fb$result$1 = 4ll;
								fb_StrDelete( &TMP$55$6 );
								goto label$235;
							}
							label$261:;
							label$260:;
						}
						goto label$257;
						label$258:;
						int32 vr$32 = fb_StrCompare( (void*)&TMP$55$6, -1ll, (void*)"-mt", 4ll );
						if( (int64)vr$32 != 0ll ) goto label$262;
						label$263:;
						{
							fb$result$1 = 2ll;
							fb_StrDelete( &TMP$55$6 );
							goto label$235;
						}
						label$262:;
						label$257:;
						fb_StrDelete( &TMP$55$6 );
					}
				}
				label$255:;
				label$250:;
			}
		}
		goto label$240;
		label$241:;
	}
	goto label$238;
	label$239:;
	{
		uint8* vr$37 = HGETNEXTSTRING(  );
		fb_StrAssign( (void*)DAT$1, -1ll, (void*)vr$37, 0ll, 0 );
		{
			int64 I$3;
			I$3 = 0ll;
			label$267:;
			{
				int32 vr$39 = fb_StrCompare( (void*)DAT$1, -1ll, *(void**)((uint8*)ENTRIES$ + (I$3 << 4ll)), 0ll );
				if( (int64)vr$39 != 0ll ) goto label$269;
				{
					if( *(int64*)(((uint8*)ENTRIES$ + (I$3 << 4ll)) + 8ll) == 0ll ) goto label$271;
					{
						uint8* vr$44 = HGETNEXTSTRING(  );
						fb_StrAssign( (void*)DAT$1, -1ll, (void*)vr$44, 0ll, 0 );
					}
					goto label$270;
					label$271:;
					{
					}
					label$270:;
					fb$result$1 = I$3;
					goto label$235;
				}
				label$269:;
				label$268:;
			}
			label$265:;
			I$3 = I$3 + 1ll;
			label$264:;
			if( I$3 <= 4ll ) goto label$267;
			label$266:;
		}
	}
	label$238:;
	fb$result$1 = -1ll;
	label$235:;
	return fb$result$1;
}

uint8* OBJINFOGETFILENAME( void )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$272:;
	fb$result$1 = *(uint8**)((uint8*)&PARSER$ + 8ll);
	label$273:;
	return fb$result$1;
}

void OBJINFOREADEND( void )
{
	label$274:;
	if( *(uint8**)&ARDATA$ == (uint8*)0ull ) goto label$277;
	{
		free( *(void**)&ARDATA$ );
	}
	goto label$276;
	label$277:;
	if( *(uint8**)&OBJDATA$ == (uint8*)0ull ) goto label$278;
	{
		free( *(void**)&OBJDATA$ );
	}
	label$278:;
	label$276:;
	HRESETBUFFERS(  );
	label$275:;
}

uint8* OBJINFOENCODE( int64 ENTRY$1 )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$279:;
	fb$result$1 = *(uint8**)((uint8*)ENTRIES$ + (ENTRY$1 << 4ll));
	label$280:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__objinfo( void )
{
	label$0:;
	label$1:;
}

static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM* THIS$1, struct $11TSTRSETITEM* __FB_RHS__$1 )
{
	label$4:;
	FBSTRING* vr$4 = fb_StrAssign( (void*)THIS$1, -1ll, (void*)__FB_RHS__$1, -1ll, 0 );
	*(int64*)((uint8*)THIS$1 + 24ll) = *(int64*)((uint8*)__FB_RHS__$1 + 24ll);
	label$5:;
}

static void _ZN16OBJINFOPARSERCTXC1Ev( struct $16OBJINFOPARSERCTX* THIS$1 )
{
	__builtin_memset( (int64*)THIS$1, 0, 8ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 8ll), 0, 24ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 32ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 40ll), 0, 8ll );
	label$10:;
	label$11:;
}

static void _ZN16OBJINFOPARSERCTXaSERKS_( struct $16OBJINFOPARSERCTX* THIS$1, struct $16OBJINFOPARSERCTX* __FB_RHS__$1 )
{
	label$12:;
	*(int64*)THIS$1 = *(int64*)__FB_RHS__$1;
	FBSTRING* vr$6 = fb_StrAssign( (void*)((uint8*)THIS$1 + 8ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 8ll), -1ll, 0 );
	*(int64*)((uint8*)THIS$1 + 32ll) = *(int64*)((uint8*)__FB_RHS__$1 + 32ll);
	*(int64*)((uint8*)THIS$1 + 40ll) = *(int64*)((uint8*)__FB_RHS__$1 + 40ll);
	label$13:;
}

static void _ZN16OBJINFOPARSERCTXD1Ev( struct $16OBJINFOPARSERCTX* THIS$1 )
{
	label$16:;
	label$17:;
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 8ll) );
}

static struct $8ELF32_SH* HCHECKELF32_SH( struct $7ELF32_H* H$1, int64 INDEX$1 )
{
	struct $8ELF32_SH* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$18:;
	struct $8ELF32_SH* SH$1;
	int64 HEADEROFFSET$1;
	HEADEROFFSET$1 = (int64)*(uint32*)((uint8*)H$1 + 32ll) + (INDEX$1 * 40ll);
	if( ((uint64)HEADEROFFSET$1 + 40ull) <= *(uint64*)((uint8*)&OBJDATA$ + 8ll) ) goto label$21;
	{
		goto label$19;
	}
	label$21:;
	label$20:;
	SH$1 = (struct $8ELF32_SH*)((uint8*)*(void**)&OBJDATA$ + HEADEROFFSET$1);
	if( ((uint64)*(uint32*)((uint8*)SH$1 + 16ll) + (uint64)(int64)*(uint32*)((uint8*)SH$1 + 20ll)) <= *(uint64*)((uint8*)&OBJDATA$ + 8ll) ) goto label$23;
	{
		goto label$19;
	}
	label$23:;
	label$22:;
	fb$result$1 = SH$1;
	label$19:;
	return fb$result$1;
}

static uint8* HGETSECTIONNAMEELF32_SH( struct $7ELF32_H* H$1, int64 INDEX$1, int64 NAMETB$1 )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$24:;
	static uint8 SECTIONNAME$1[33];
	struct $8ELF32_SH* SH$1;
	int64 I$1;
	int64 J$1;
	int64 CH$1;
	struct $8ELF32_SH* vr$1 = HCHECKELF32_SH( H$1, INDEX$1 );
	SH$1 = vr$1;
	if( SH$1 != (struct $8ELF32_SH*)0ull ) goto label$27;
	{
		goto label$25;
	}
	label$27:;
	label$26:;
	I$1 = NAMETB$1 + (int64)*(uint32*)SH$1;
	J$1 = 0ll;
	label$28:;
	if( ((int64)-(I$1 < *(int64*)((uint8*)&OBJDATA$ + 8ll)) & (int64)-(J$1 < 32ll)) == 0ll ) goto label$29;
	{
		CH$1 = (int64)*(uint8*)(*(uint8**)&OBJDATA$ + I$1);
		if( CH$1 != 0ll ) goto label$31;
		{
			goto label$29;
		}
		label$31:;
		label$30:;
		*(uint8*)((uint8*)SECTIONNAME$1 + J$1) = (uint8)CH$1;
		I$1 = I$1 + 1ll;
		J$1 = J$1 + 1ll;
	}
	goto label$28;
	label$29:;
	*(uint8*)((uint8*)SECTIONNAME$1 + J$1) = (uint8)0u;
	fb$result$1 = (uint8*)SECTIONNAME$1;
	label$25:;
	return fb$result$1;
}

static void HLOADFBCTINFFROMELF32_H( void )
{
	label$32:;
	struct $7ELF32_H* H$1;
	struct $8ELF32_SH* SH$1;
	struct $8ELF32_SH* NAMETB$1;
	uint8* SECTIONNAME$1;
	*(uint8**)&FBCTINF$ = (uint8*)0ull;
	*(int64*)((uint8*)&FBCTINF$ + 8ll) = 0ll;
	if( *(int64*)((uint8*)&OBJDATA$ + 8ll) >= 52ll ) goto label$35;
	{
		goto label$33;
	}
	label$35:;
	label$34:;
	H$1 = *(struct $7ELF32_H**)&OBJDATA$;
	*(uint8*)((uint8*)ELFMAGIC$ + 4ll) = (uint8)1u;
	{
		int64 I$2;
		I$2 = 0ll;
		label$39:;
		{
			if( (int64)*(uint8*)((uint8*)H$1 + I$2) == (int64)*(uint8*)((uint8*)ELFMAGIC$ + I$2) ) goto label$41;
			{
				goto label$33;
			}
			label$41:;
			label$40:;
		}
		label$37:;
		I$2 = I$2 + 1ll;
		label$36:;
		if( I$2 <= 15ll ) goto label$39;
		label$38:;
	}
	if( (int64)*(uint16*)((uint8*)H$1 + 40ll) == 52ll ) goto label$43;
	{
		goto label$33;
	}
	label$43:;
	label$42:;
	if( (int64)*(uint16*)((uint8*)H$1 + 16ll) == 1ll ) goto label$45;
	{
		goto label$33;
	}
	label$45:;
	label$44:;
	if( (int64)*(uint16*)((uint8*)H$1 + 18ll) == 3ll ) goto label$47;
	{
		goto label$33;
	}
	label$47:;
	label$46:;
	if( (int64)*(uint16*)((uint8*)H$1 + 46ll) == 40ll ) goto label$49;
	{
		goto label$33;
	}
	label$49:;
	label$48:;
	if( ((uint64)*(uint16*)((uint8*)H$1 + 48ll) * 40ull) <= *(uint64*)((uint8*)&OBJDATA$ + 8ll) ) goto label$51;
	{
		goto label$33;
	}
	label$51:;
	label$50:;
	if( ((int64)-((int64)*(uint16*)((uint8*)H$1 + 50ll) < 0ll) | (int64)-((int64)*(uint16*)((uint8*)H$1 + 50ll) >= (int64)*(uint16*)((uint8*)H$1 + 48ll))) == 0ll ) goto label$53;
	{
		goto label$33;
	}
	label$53:;
	label$52:;
	if( ((uint64)*(uint32*)((uint8*)H$1 + 32ll) + (uint64)((int64)*(uint16*)((uint8*)H$1 + 48ll) * 40ll)) <= *(uint64*)((uint8*)&OBJDATA$ + 8ll) ) goto label$55;
	{
		goto label$33;
	}
	label$55:;
	label$54:;
	struct $8ELF32_SH* vr$42 = HCHECKELF32_SH( H$1, (int64)*(uint16*)((uint8*)H$1 + 50ll) );
	NAMETB$1 = vr$42;
	if( NAMETB$1 != (struct $8ELF32_SH*)0ull ) goto label$57;
	{
		goto label$33;
	}
	label$57:;
	label$56:;
	{
		int64 I$2;
		I$2 = 1ll;
		int64 TMP$22$2;
		TMP$22$2 = (int64)*(uint16*)((uint8*)H$1 + 48ll) + -1ll;
		goto label$58;
		label$61:;
		{
			uint8* vr$49 = HGETSECTIONNAMEELF32_SH( H$1, I$2, (int64)*(uint32*)((uint8*)NAMETB$1 + 16ll) );
			SECTIONNAME$1 = vr$49;
			if( SECTIONNAME$1 == (uint8*)0ull ) goto label$63;
			{
				int32 vr$51 = fb_StrCompare( (void*)SECTIONNAME$1, 0ll, (void*)FBCTINFNAME$, 9ll );
				if( (int64)vr$51 != 0ll ) goto label$65;
				{
					struct $8ELF32_SH* vr$54 = HCHECKELF32_SH( H$1, I$2 );
					SH$1 = vr$54;
					if( SH$1 == (struct $8ELF32_SH*)0ull ) goto label$67;
					{
						*(uint8**)&FBCTINF$ = (uint8*)(*(uint8**)&OBJDATA$ + (int64)*(uint32*)((uint8*)SH$1 + 16ll));
						*(int64*)((uint8*)&FBCTINF$ + 8ll) = (int64)*(uint32*)((uint8*)SH$1 + 20ll);
						goto label$60;
					}
					label$67:;
					label$66:;
				}
				label$65:;
				label$64:;
			}
			label$63:;
			label$62:;
		}
		label$59:;
		I$2 = I$2 + 1ll;
		label$58:;
		if( I$2 <= TMP$22$2 ) goto label$61;
		label$60:;
	}
	label$33:;
}

static struct $8ELF64_SH* HCHECKELF64_SH( struct $7ELF64_H* H$1, int64 INDEX$1 )
{
	struct $8ELF64_SH* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$68:;
	struct $8ELF64_SH* SH$1;
	int64 HEADEROFFSET$1;
	HEADEROFFSET$1 = (int64)(*(uint64*)((uint8*)H$1 + 40ll) + (uint64)(INDEX$1 << 6ll));
	if( ((uint64)HEADEROFFSET$1 + 64ull) <= *(uint64*)((uint8*)&OBJDATA$ + 8ll) ) goto label$71;
	{
		goto label$69;
	}
	label$71:;
	label$70:;
	SH$1 = (struct $8ELF64_SH*)((uint8*)*(void**)&OBJDATA$ + HEADEROFFSET$1);
	if( (*(uint64*)((uint8*)SH$1 + 24ll) + *(uint64*)((uint8*)SH$1 + 32ll)) <= *(uint64*)((uint8*)&OBJDATA$ + 8ll) ) goto label$73;
	{
		goto label$69;
	}
	label$73:;
	label$72:;
	fb$result$1 = SH$1;
	label$69:;
	return fb$result$1;
}

static uint8* HGETSECTIONNAMEELF64_SH( struct $7ELF64_H* H$1, int64 INDEX$1, int64 NAMETB$1 )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$74:;
	static uint8 SECTIONNAME$1[33];
	struct $8ELF64_SH* SH$1;
	int64 I$1;
	int64 J$1;
	int64 CH$1;
	struct $8ELF64_SH* vr$1 = HCHECKELF64_SH( H$1, INDEX$1 );
	SH$1 = vr$1;
	if( SH$1 != (struct $8ELF64_SH*)0ull ) goto label$77;
	{
		goto label$75;
	}
	label$77:;
	label$76:;
	I$1 = NAMETB$1 + (int64)*(uint32*)SH$1;
	J$1 = 0ll;
	label$78:;
	if( ((int64)-(I$1 < *(int64*)((uint8*)&OBJDATA$ + 8ll)) & (int64)-(J$1 < 32ll)) == 0ll ) goto label$79;
	{
		CH$1 = (int64)*(uint8*)(*(uint8**)&OBJDATA$ + I$1);
		if( CH$1 != 0ll ) goto label$81;
		{
			goto label$79;
		}
		label$81:;
		label$80:;
		*(uint8*)((uint8*)SECTIONNAME$1 + J$1) = (uint8)CH$1;
		I$1 = I$1 + 1ll;
		J$1 = J$1 + 1ll;
	}
	goto label$78;
	label$79:;
	*(uint8*)((uint8*)SECTIONNAME$1 + J$1) = (uint8)0u;
	fb$result$1 = (uint8*)SECTIONNAME$1;
	label$75:;
	return fb$result$1;
}

static void HLOADFBCTINFFROMELF64_H( void )
{
	label$82:;
	struct $7ELF64_H* H$1;
	struct $8ELF64_SH* SH$1;
	struct $8ELF64_SH* NAMETB$1;
	uint8* SECTIONNAME$1;
	*(uint8**)&FBCTINF$ = (uint8*)0ull;
	*(int64*)((uint8*)&FBCTINF$ + 8ll) = 0ll;
	if( *(int64*)((uint8*)&OBJDATA$ + 8ll) >= 64ll ) goto label$85;
	{
		goto label$83;
	}
	label$85:;
	label$84:;
	H$1 = *(struct $7ELF64_H**)&OBJDATA$;
	*(uint8*)((uint8*)ELFMAGIC$ + 4ll) = (uint8)2u;
	{
		int64 I$2;
		I$2 = 0ll;
		label$89:;
		{
			if( (int64)*(uint8*)((uint8*)H$1 + I$2) == (int64)*(uint8*)((uint8*)ELFMAGIC$ + I$2) ) goto label$91;
			{
				goto label$83;
			}
			label$91:;
			label$90:;
		}
		label$87:;
		I$2 = I$2 + 1ll;
		label$86:;
		if( I$2 <= 15ll ) goto label$89;
		label$88:;
	}
	if( (int64)*(uint16*)((uint8*)H$1 + 52ll) == 64ll ) goto label$93;
	{
		goto label$83;
	}
	label$93:;
	label$92:;
	if( (int64)*(uint16*)((uint8*)H$1 + 16ll) == 1ll ) goto label$95;
	{
		goto label$83;
	}
	label$95:;
	label$94:;
	if( (int64)*(uint16*)((uint8*)H$1 + 18ll) == 62ll ) goto label$97;
	{
		goto label$83;
	}
	label$97:;
	label$96:;
	if( (int64)*(uint16*)((uint8*)H$1 + 58ll) == 64ll ) goto label$99;
	{
		goto label$83;
	}
	label$99:;
	label$98:;
	if( ((uint64)*(uint16*)((uint8*)H$1 + 60ll) << 6ull) <= *(uint64*)((uint8*)&OBJDATA$ + 8ll) ) goto label$101;
	{
		goto label$83;
	}
	label$101:;
	label$100:;
	if( ((int64)-((int64)*(uint16*)((uint8*)H$1 + 62ll) < 0ll) | (int64)-((int64)*(uint16*)((uint8*)H$1 + 62ll) >= (int64)*(uint16*)((uint8*)H$1 + 60ll))) == 0ll ) goto label$103;
	{
		goto label$83;
	}
	label$103:;
	label$102:;
	if( (*(uint64*)((uint8*)H$1 + 40ll) + (uint64)((int64)*(uint16*)((uint8*)H$1 + 60ll) << 6ll)) <= *(uint64*)((uint8*)&OBJDATA$ + 8ll) ) goto label$105;
	{
		goto label$83;
	}
	label$105:;
	label$104:;
	struct $8ELF64_SH* vr$41 = HCHECKELF64_SH( H$1, (int64)*(uint16*)((uint8*)H$1 + 62ll) );
	NAMETB$1 = vr$41;
	if( NAMETB$1 != (struct $8ELF64_SH*)0ull ) goto label$107;
	{
		goto label$83;
	}
	label$107:;
	label$106:;
	{
		int64 I$2;
		I$2 = 1ll;
		int64 TMP$23$2;
		TMP$23$2 = (int64)*(uint16*)((uint8*)H$1 + 60ll) + -1ll;
		goto label$108;
		label$111:;
		{
			uint8* vr$47 = HGETSECTIONNAMEELF64_SH( H$1, I$2, *(int64*)((uint8*)NAMETB$1 + 24ll) );
			SECTIONNAME$1 = vr$47;
			if( SECTIONNAME$1 == (uint8*)0ull ) goto label$113;
			{
				int32 vr$49 = fb_StrCompare( (void*)SECTIONNAME$1, 0ll, (void*)FBCTINFNAME$, 9ll );
				if( (int64)vr$49 != 0ll ) goto label$115;
				{
					struct $8ELF64_SH* vr$52 = HCHECKELF64_SH( H$1, I$2 );
					SH$1 = vr$52;
					if( SH$1 == (struct $8ELF64_SH*)0ull ) goto label$117;
					{
						*(uint8**)&FBCTINF$ = (uint8*)(*(uint8**)&OBJDATA$ + *(int64*)((uint8*)SH$1 + 24ll));
						*(int64*)((uint8*)&FBCTINF$ + 8ll) = *(int64*)((uint8*)SH$1 + 32ll);
						goto label$110;
					}
					label$117:;
					label$116:;
				}
				label$115:;
				label$114:;
			}
			label$113:;
			label$112:;
		}
		label$109:;
		I$2 = I$2 + 1ll;
		label$108:;
		if( I$2 <= TMP$23$2 ) goto label$111;
		label$110:;
	}
	label$83:;
}

static void HLOADFBCTINFFROMCOFF( uint16 MAGIC$1 )
{
	label$118:;
	struct $6COFF_H* H$1;
	struct $7COFF_SH* SH$1;
	struct $7COFF_SH* SHBASE$1;
	*(uint8**)&FBCTINF$ = (uint8*)0ull;
	*(int64*)((uint8*)&FBCTINF$ + 8ll) = 0ll;
	if( *(int64*)((uint8*)&OBJDATA$ + 8ll) >= 20ll ) goto label$121;
	{
		goto label$119;
	}
	label$121:;
	label$120:;
	H$1 = *(struct $6COFF_H**)&OBJDATA$;
	if( (int64)*(uint16*)H$1 == (int64)MAGIC$1 ) goto label$123;
	{
		goto label$119;
	}
	label$123:;
	label$122:;
	if( (int64)*(uint16*)((uint8*)H$1 + 16ll) == 0ll ) goto label$125;
	{
		goto label$119;
	}
	label$125:;
	label$124:;
	if( ((uint64)*(uint16*)((uint8*)H$1 + 2ll) * 40ull) <= *(uint64*)((uint8*)&OBJDATA$ + 8ll) ) goto label$127;
	{
		goto label$119;
	}
	label$127:;
	label$126:;
	SHBASE$1 = (struct $7COFF_SH*)((uint8*)H$1 + 20ll);
	{
		int64 I$2;
		I$2 = 0ll;
		int64 TMP$24$2;
		TMP$24$2 = (int64)*(uint16*)((uint8*)H$1 + 2ll) + -1ll;
		goto label$128;
		label$131:;
		{
			SH$1 = (struct $7COFF_SH*)((uint8*)SHBASE$1 + (I$2 * 40ll));
			{
				int64 J$4;
				J$4 = 0ll;
				label$135:;
				{
					if( (int64)*(uint8*)((uint8*)SH$1 + J$4) == (int64)*(uint8*)((uint8*)FBCTINFNAME$ + J$4) ) goto label$137;
					{
						goto label$129;
					}
					label$137:;
					label$136:;
				}
				label$133:;
				J$4 = J$4 + 1ll;
				label$132:;
				if( J$4 <= 7ll ) goto label$135;
				label$134:;
			}
			if( ((uint64)*(uint32*)((uint8*)SH$1 + 20ll) + (uint64)(int64)*(uint32*)((uint8*)SH$1 + 16ll)) <= *(uint64*)((uint8*)&OBJDATA$ + 8ll) ) goto label$139;
			{
				goto label$119;
			}
			label$139:;
			label$138:;
			*(uint8**)&FBCTINF$ = (uint8*)(*(uint8**)&OBJDATA$ + (int64)*(uint32*)((uint8*)SH$1 + 20ll));
			*(int64*)((uint8*)&FBCTINF$ + 8ll) = (int64)*(uint32*)((uint8*)SH$1 + 16ll);
			goto label$130;
		}
		label$129:;
		I$2 = I$2 + 1ll;
		label$128:;
		if( I$2 <= TMP$24$2 ) goto label$131;
		label$130:;
	}
	label$119:;
}

static uint8* HLOADARSTRING( uint8* P$1, int64 LENGTH$1 )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$140:;
	static uint8 S$1[17];
	int64 LAST$1;
	int64 I$1;
	LAST$1 = LENGTH$1 + -1ll;
	label$142:;
	if( LAST$1 < 0ll ) goto label$143;
	{
		if( (uint64)(int64)*(uint8*)(P$1 + LAST$1) == 32ull ) goto label$145;
		{
			goto label$143;
		}
		label$145:;
		label$144:;
		LAST$1 = LAST$1 + -1ll;
	}
	goto label$142;
	label$143:;
	I$1 = 0ll;
	label$146:;
	if( I$1 > LAST$1 ) goto label$147;
	{
		*(uint8*)((uint8*)S$1 + I$1) = *(uint8*)(P$1 + I$1);
		I$1 = I$1 + 1ll;
	}
	goto label$146;
	label$147:;
	*(uint8*)((uint8*)S$1 + I$1) = (uint8)0u;
	fb$result$1 = (uint8*)S$1;
	label$141:;
	return fb$result$1;
}

static void HLOADOBJFROMAR( void )
{
	label$148:;
	struct $4AR_H* H$1;
	FBSTRING FILENAME$1;
	__builtin_memset( &FILENAME$1, 0, 24ll );
	int64 I$1;
	int64 FILESIZE$1;
	*(uint8**)&OBJDATA$ = (uint8*)0ull;
	*(int64*)((uint8*)&OBJDATA$ + 8ll) = 0ll;
	if( *(int64*)((uint8*)&ARDATA$ + 8ll) >= 8ll ) goto label$151;
	{
		fb_StrDelete( &FILENAME$1 );
		goto label$149;
	}
	label$151:;
	label$150:;
	{
		I$1 = 0ll;
		label$155:;
		{
			if( (int64)*(uint8*)(*(uint8**)&ARDATA$ + I$1) == (int64)*(uint8*)((uint8*)ARMAGIC$ + I$1) ) goto label$157;
			{
				fb_StrDelete( &FILENAME$1 );
				goto label$149;
			}
			label$157:;
			label$156:;
		}
		label$153:;
		I$1 = I$1 + 1ll;
		label$152:;
		if( I$1 <= 7ll ) goto label$155;
		label$154:;
	}
	I$1 = 8ll;
	label$158:;
	{
		if( (I$1 + 60ll) <= *(int64*)((uint8*)&ARDATA$ + 8ll) ) goto label$162;
		{
			fb_StrDelete( &FILENAME$1 );
			goto label$149;
		}
		label$162:;
		label$161:;
		H$1 = (struct $4AR_H*)((uint8*)*(void**)&ARDATA$ + I$1);
		uint8* vr$16 = HLOADARSTRING( (uint8*)H$1, 16ll );
		fb_StrAssign( (void*)&FILENAME$1, -1ll, (void*)vr$16, 0ll, 0 );
		uint8* vr$20 = HLOADARSTRING( (uint8*)((uint8*)H$1 + 48ll), 10ll );
		FBSTRING* vr$21 = fb_StrAllocTempDescZ( vr$20 );
		double vr$22 = fb_VAL( vr$21 );
		FILESIZE$1 = fb_D2L( vr$22 );
		if( FILESIZE$1 >= 0ll ) goto label$164;
		{
			FILESIZE$1 = 0ll;
		}
		goto label$163;
		label$164:;
		if( ((int64)-(FILESIZE$1 > *(int64*)((uint8*)&ARDATA$ + 8ll)) | (int64)-(FILESIZE$1 > (*(int64*)((uint8*)&ARDATA$ + 8ll) - I$1))) == 0ll ) goto label$165;
		{
			FILESIZE$1 = *(int64*)((uint8*)&ARDATA$ + 8ll) - I$1;
		}
		label$165:;
		label$163:;
		I$1 = I$1 + 60ll;
		{
			int32 vr$33 = fb_StrCompare( (void*)&FILENAME$1, -1ll, (void*)"__fb_ct.inf", 12ll );
			if( (int64)vr$33 == 0ll ) goto label$168;
			label$169:;
			int32 vr$37 = fb_StrCompare( (void*)&FILENAME$1, -1ll, (void*)"__fb_ct.inf/", 13ll );
			if( (int64)vr$37 != 0ll ) goto label$167;
			label$168:;
			{
				if( FILESIZE$1 <= 0ll ) goto label$171;
				{
					*(uint8**)&OBJDATA$ = (uint8*)((uint8*)*(void**)&ARDATA$ + I$1);
					*(int64*)((uint8*)&OBJDATA$ + 8ll) = FILESIZE$1;
				}
				label$171:;
				label$170:;
				goto label$159;
			}
			goto label$166;
			label$167:;
			int32 vr$43 = fb_StrCompare( (void*)&FILENAME$1, -1ll, (void*)"/", 2ll );
			if( (int64)vr$43 == 0ll ) goto label$173;
			label$174:;
			int32 vr$47 = fb_StrCompare( (void*)&FILENAME$1, -1ll, (void*)"//", 3ll );
			if( (int64)vr$47 == 0ll ) goto label$173;
			label$175:;
			int32 vr$51 = fb_StrCompare( (void*)&FILENAME$1, -1ll, (void*)"__.SYMDEF", 10ll );
			if( (int64)vr$51 != 0ll ) goto label$172;
			label$173:;
			{
			}
			goto label$166;
			label$172:;
			{
				goto label$159;
			}
			label$176:;
			label$166:;
		}
		I$1 = I$1 + FILESIZE$1;
		I$1 = I$1 + (I$1 & 1ll);
	}
	label$160:;
	goto label$158;
	label$159:;
	fb_StrDelete( &FILENAME$1 );
	label$149:;
}

static void HLOADFILE( FBSTRING* FILENAME$1, struct $10DATABUFFER* BUF$1 )
{
	label$177:;
	int64 F$1;
	int64 SIZE$1;
	uint8* P$1;
	*(uint8**)BUF$1 = (uint8*)0ull;
	*(int64*)((uint8*)BUF$1 + 8ll) = 0ll;
	int32 vr$2 = fb_FileFree(  );
	F$1 = (int64)vr$2;
	int32 vr$5 = fb_FileOpen( FILENAME$1, 0u, 1u, 0u, (int32)F$1, 0 );
	if( (int64)vr$5 == 0ll ) goto label$180;
	{
		goto label$178;
	}
	label$180:;
	label$179:;
	int64 vr$9 = fb_FileSize( (int32)F$1 );
	SIZE$1 = vr$9;
	if( SIZE$1 <= 0ll ) goto label$182;
	{
		void* vr$11 = malloc( (uint64)SIZE$1 );
		P$1 = (uint8*)vr$11;
		int32 vr$14 = fb_FileGetLargeIOB( (int32)F$1, 0ll, (void*)P$1, (uint64)SIZE$1, (uint64*)&SIZE$1 );
		if( (int64)vr$14 == 0ll ) goto label$184;
		{
			goto label$178;
		}
		label$184:;
		label$183:;
		*(uint8**)BUF$1 = P$1;
		*(int64*)((uint8*)BUF$1 + 8ll) = SIZE$1;
	}
	label$182:;
	label$181:;
	int32 vr$20 = fb_FileClose( (int32)F$1 );
	if( (int64)vr$20 == 0ll ) goto label$185;
	void* vr$23 = fb_ErrorThrowAt( 611, (uint8*)"fbc-1.01.0/src/compiler/objinfo.bas", (void*)0ull, (void*)0ull );
	goto *vr$23;
	label$185:;
	label$178:;
}

static void HLOADFBCTINFFROMOBJ( void )
{
	label$186:;
	{
		uint64 TMP$39$2;
		int64 vr$0 = FBGETOPTION( 3ll );
		TMP$39$2 = (uint64)vr$0;
		goto label$189;
		label$190:;
		{
			{
				int64 TMP$40$4;
				int64 vr$1 = FBGETCPUFAMILY(  );
				TMP$40$4 = vr$1;
				if( TMP$40$4 != 1ll ) goto label$192;
				label$193:;
				{
					HLOADFBCTINFFROMCOFF( (uint16)34404u );
				}
				goto label$191;
				label$192:;
				if( TMP$40$4 != 0ll ) goto label$194;
				label$195:;
				{
					HLOADFBCTINFFROMCOFF( (uint16)332u );
				}
				label$194:;
				label$191:;
			}
		}
		goto label$188;
		label$196:;
		{
			{
				int64 TMP$41$4;
				int64 vr$4 = FBGETCPUFAMILY(  );
				TMP$41$4 = vr$4;
				if( TMP$41$4 != 1ll ) goto label$198;
				label$199:;
				{
					HLOADFBCTINFFROMELF64_H(  );
				}
				goto label$197;
				label$198:;
				if( TMP$41$4 != 0ll ) goto label$200;
				label$201:;
				{
					HLOADFBCTINFFROMELF32_H(  );
				}
				label$200:;
				label$197:;
			}
		}
		goto label$188;
		label$189:;
		static const void* tmp$56[9ll] = {
			&&label$190,
			&&label$190,
			&&label$196,
			&&label$190,
			&&label$190,
			&&label$196,
			&&label$196,
			&&label$196,
			&&label$196,
		};
		if( TMP$39$2 > 8ll ) goto label$188;
		goto *tmp$56[TMP$39$2 - 0ll];
		label$188:;
	}
	if( *(int64*)((uint8*)&FBCTINF$ + 8ll) != 0ll ) goto label$203;
	{
		goto label$187;
	}
	label$203:;
	label$202:;
	if( (int64)*(*(uint8**)&FBCTINF$) != 16ll ) goto label$205;
	{
		*(int64*)((uint8*)&PARSER$ + 32ll) = -1ll;
		*(int64*)&PARSER$ = 1ll;
	}
	goto label$204;
	label$205:;
	{
		*(int64*)((uint8*)&PARSER$ + 32ll) = 0ll;
	}
	label$204:;
	label$187:;
}

static void HRESETBUFFERS( void )
{
	label$206:;
	*(uint8**)&ARDATA$ = (uint8*)0ull;
	*(int64*)((uint8*)&ARDATA$ + 8ll) = 0ll;
	*(uint8**)&OBJDATA$ = (uint8*)0ull;
	*(int64*)((uint8*)&OBJDATA$ + 8ll) = 0ll;
	*(uint8**)&FBCTINF$ = (uint8*)0ull;
	*(int64*)((uint8*)&FBCTINF$ + 8ll) = 0ll;
	label$207:;
}

static void OBJINFOINIT( FBSTRING* FILENAME$1 )
{
	label$208:;
	HRESETBUFFERS(  );
	*(int64*)&PARSER$ = 0ll;
	FBSTRING* vr$1 = fb_StrAssign( (void*)((uint8*)&PARSER$ + 8ll), -1ll, (void*)FILENAME$1, -1ll, 0 );
	*(int64*)((uint8*)&PARSER$ + 32ll) = 0ll;
	*(int64*)((uint8*)&PARSER$ + 40ll) = -1ll;
	label$209:;
}

static uint8* HGETNEXTSTRING( void )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$228:;
	int64 BEGIN$1;
	fb$result$1 = (uint8*)"";
	BEGIN$1 = *(int64*)&PARSER$;
	label$230:;
	if( *(int64*)&PARSER$ >= *(int64*)((uint8*)&FBCTINF$ + 8ll) ) goto label$231;
	{
		*(int64*)&PARSER$ = *(int64*)&PARSER$ + 1ll;
		if( (int64)*(uint8*)((uint8*)(*(uint8**)&FBCTINF$ + *(int64*)&PARSER$) + -1ll) != 0ll ) goto label$233;
		{
			fb$result$1 = (uint8*)(*(uint8**)&FBCTINF$ + BEGIN$1);
			goto label$229;
		}
		label$233:;
		label$232:;
	}
	goto label$230;
	label$231:;
	label$229:;
	return fb$result$1;
}

__attribute__(( constructor )) static void _GLOBAL__I( void )
{
	label$282:;
	_ZN16OBJINFOPARSERCTXC1Ev( &PARSER$ );
	label$283:;
}

__attribute__(( destructor )) static void _GLOBAL__D( void )
{
	label$285:;
	_ZN16OBJINFOPARSERCTXD1Ev( &PARSER$ );
	label$286:;
}

// Total compilation time: 0.01192890841048211 seconds.
