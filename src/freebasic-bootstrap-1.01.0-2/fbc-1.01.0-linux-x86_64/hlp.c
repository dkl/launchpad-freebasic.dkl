// Compilation of fbc-1.01.0/src/compiler/hlp.bas started at 14:16:41 on 02-28-2015

typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
struct $16__FB_ARRAYDIMTB$ {
	int64 ELEMENTS;
	int64 LBOUND;
	int64 UBOUND;
};
#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]
__FB_STATIC_ASSERT( sizeof( struct $16__FB_ARRAYDIMTB$ ) == 24 );
typedef int64 $13FBFILE_FORMAT;
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
void* fb_ErrorThrowAt( int32, uint8*, void*, void* );
int32 fb_FileOpen( FBSTRING*, uint32, uint32, uint32, int32, int32 );
int32 fb_FileClose( int32 );
int32 fb_FileGetLarge( int32, int64, void*, uint64 );
int32 fb_FileSeekLarge( int32, int64 );
int32 fb_FileFree( void );
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
FBSTRING* fb_StrMid( FBSTRING*, int64, int64 );
int64 fb_StrLen( void*, int64 );
int64 fb_StrInstr( int64, FBSTRING*, FBSTRING* );
FBSTRING* fb_RTrimEx( FBSTRING*, FBSTRING* );
FBSTRING* fb_HEXEx_l( uint64, int32 );
FBSTRING* fb_LEFT( FBSTRING*, int64 );
FBSTRING* fb_RIGHT( FBSTRING*, int64 );
FBSTRING* fb_StrLcase2( FBSTRING*, int32 );
FBSTRING* fb_StrUcase2( FBSTRING*, int32 );
FBSTRING* fb_CurDir( void );
static void fb_ctor__hlp( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRREPORT( int64, int64, uint8* );
FBSTRING* PATHSTRIPDIV( FBSTRING* );
typedef int64 $8LEXCHECK;
int64 LEXGETTOKEN( $8LEXCHECK );
uint8* LEXGETTEXT( void );
void LEXSKIPTOKEN( $8LEXCHECK );
static int64 HFINDEXTBEGIN( FBSTRING* );
static int64 STRISQUOTED( FBSTRING* );
struct $8FBARRAY1ImE {
	uint64* DATA;
	uint64* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[1];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1ImE ) == 64 );
static struct $8FBARRAY1ImE tmp$72$;
typedef int64 $13AST_NODECLASS;
typedef int64 $11AST_OPFLAGS;
typedef int64 $6AST_OP;
struct $10AST_OPINFO {
	$13AST_NODECLASS CLASS;
	$11AST_OPFLAGS FLAGS;
	uint8* ID;
	$6AST_OP SELFOP;
};
__FB_STATIC_ASSERT( sizeof( struct $10AST_OPINFO ) == 32 );
struct $8FBARRAY1I10AST_OPINFOE {
	struct $10AST_OPINFO* DATA;
	struct $10AST_OPINFO* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[1];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I10AST_OPINFOE ) == 64 );
static struct $8FBARRAY1I10AST_OPINFOE tmp$73$;
typedef int64 $12FB_DATACLASS;
typedef int64 $11FB_DATATYPE;
struct $13SYMB_DATATYPE {
	$12FB_DATACLASS CLASS;
	int64 SIZE;
	int64 SIGNED;
	int64 INTRANK;
	$11FB_DATATYPE REMAPTYPE;
	int64 SIZETYPE;
	uint8* NAME;
};
__FB_STATIC_ASSERT( sizeof( struct $13SYMB_DATATYPE ) == 56 );
struct $8FBARRAY1I13SYMB_DATATYPEE {
	struct $13SYMB_DATATYPE* DATA;
	struct $13SYMB_DATATYPE* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[1];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I13SYMB_DATATYPEE ) == 64 );
static struct $8FBARRAY1I13SYMB_DATATYPEE tmp$74$;
struct $8FBARRAY2IlE {
	int64* DATA;
	int64* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[2];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY2IlE ) == 88 );
static struct $8FBARRAY2IlE tmp$75$;
struct $7TLISTTB;
struct $7TLISTTB {
	struct $7TLISTTB* NEXT;
	void* NODETB;
	int64 NODES;
};
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
typedef int64 $10FB_OUTTYPE;
typedef int64 $10FB_BACKEND;
typedef int64 $13FB_COMPTARGET;
typedef int64 $10FB_CPUTYPE;
typedef int64 $10FB_FPUTYPE;
typedef int64 $9FB_FPMODE;
typedef int64 $17FB_VECTORIZELEVEL;
typedef int64 $12FB_ASMSYNTAX;
typedef int64 $7FB_LANG;
typedef int64 $10FB_PDCHECK;
struct $12FBCMMLINEOPT {
	$10FB_OUTTYPE OUTTYPE;
	int64 PPONLY;
	$10FB_BACKEND BACKEND;
	$13FB_COMPTARGET TARGET;
	$10FB_CPUTYPE CPUTYPE;
	$10FB_FPUTYPE FPUTYPE;
	$9FB_FPMODE FPMODE;
	$17FB_VECTORIZELEVEL VECTORIZE;
	int64 OPTLEVEL;
	$12FB_ASMSYNTAX ASMSYNTAX;
	$7FB_LANG LANG;
	int64 FORCELANG;
	int64 DEBUG;
	int64 ERRORCHECK;
	int64 RESUMEERR;
	int64 EXTRAERRCHK;
	int64 PROFILE;
	int64 WARNINGLEVEL;
	int64 SHOWERROR;
	int64 MAXERRORS;
	$10FB_PDCHECK PDCHECKOPT;
	int64 GOSUBSETJMP;
	int64 EXPORT;
	int64 MSBITFIELDS;
	int64 MULTITHREADED;
	int64 GFX;
	int64 PIC;
	int64 STACKSIZE;
};
__FB_STATIC_ASSERT( sizeof( struct $12FBCMMLINEOPT ) == 224 );
typedef int64 $11FB_FUNCMODE;
typedef int64 $12FB_TARGETOPT;
struct $8FBTARGET {
	uint8* ID;
	$11FB_DATATYPE WCHAR;
	$11FB_FUNCMODE FBCALL;
	$11FB_FUNCMODE STDCALL;
	$12FB_TARGETOPT OPTIONS;
};
__FB_STATIC_ASSERT( sizeof( struct $8FBTARGET ) == 40 );
struct $6FBFILE {
	int64 NUM;
	uint8 NAME[261];
	uint8* INCFILE;
	int64 ISMAIN;
	$13FBFILE_FORMAT FORMAT;
};
__FB_STATIC_ASSERT( sizeof( struct $6FBFILE ) == 296 );
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
typedef int64 $12FB_SYMBCLASS;
typedef int64 $13FB_SYMBATTRIB;
typedef int64 $12FB_SYMBSTATS;
struct $9FB_SYMBID {
	uint8* NAME;
	uint8* ALIAS;
	uint8* MANGLED;
};
__FB_STATIC_ASSERT( sizeof( struct $9FB_SYMBID ) == 24 );
struct $8FBSYMBOL;
union $7FBVALUE {
	struct $8FBSYMBOL* S;
	int64 I;
	double F;
};
__FB_STATIC_ASSERT( sizeof( union $7FBVALUE ) == 8 );
struct $12AST_NODE_VAR {
	int64 OFS;
};
__FB_STATIC_ASSERT( sizeof( struct $12AST_NODE_VAR ) == 8 );
struct $12AST_NODE_IDX {
	int64 OFS;
	int64 MULT;
};
__FB_STATIC_ASSERT( sizeof( struct $12AST_NODE_IDX ) == 16 );
struct $12AST_NODE_PTR {
	int64 OFS;
};
__FB_STATIC_ASSERT( sizeof( struct $12AST_NODE_PTR ) == 8 );
struct $7ASTNODE;
struct $19AST_TMPSTRLIST_ITEM;
struct $19AST_TMPSTRLIST_ITEM {
	struct $8FBSYMBOL* SYM;
	struct $7ASTNODE* SRCTREE;
	struct $19AST_TMPSTRLIST_ITEM* PREV;
};
__FB_STATIC_ASSERT( sizeof( struct $19AST_TMPSTRLIST_ITEM ) == 24 );
struct $13AST_NODE_CALL {
	int64 ISRTL;
	int64 ARGS;
	struct $8FBSYMBOL* CURRARG;
	struct $7ASTNODE* ARGTAIL;
	struct $19AST_TMPSTRLIST_ITEM* STRTAIL;
	struct $8FBSYMBOL* TMPRES;
};
__FB_STATIC_ASSERT( sizeof( struct $13AST_NODE_CALL ) == 48 );
struct $12AST_NODE_ARG {
	int64 MODE;
	int64 LGT;
};
__FB_STATIC_ASSERT( sizeof( struct $12AST_NODE_ARG ) == 16 );
struct $12AST_NODE_IIF {
	struct $8FBSYMBOL* FALSELABEL;
};
__FB_STATIC_ASSERT( sizeof( struct $12AST_NODE_IIF ) == 8 );
typedef int64 $9AST_OPOPT;
struct $11AST_NODE_OP {
	int64 OP;
	$9AST_OPOPT OPTIONS;
	struct $8FBSYMBOL* EX;
};
__FB_STATIC_ASSERT( sizeof( struct $11AST_NODE_OP ) == 24 );
struct $13AST_NODE_LOAD {
	int64 ISRES;
};
__FB_STATIC_ASSERT( sizeof( struct $13AST_NODE_LOAD ) == 8 );
struct $14AST_NODE_LABEL {
	int64 FLUSH;
};
__FB_STATIC_ASSERT( sizeof( struct $14AST_NODE_LABEL ) == 8 );
struct $13AST_NODE_OFFS {
	int64 OFS;
};
__FB_STATIC_ASSERT( sizeof( struct $13AST_NODE_OFFS ) == 8 );
struct $12AST_NODE_LIT {
	uint8* TEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $12AST_NODE_LIT ) == 8 );
typedef int64 $14AST_ASMTOKTYPE;
struct $9ASTASMTOK;
struct $9ASTASMTOK {
	$14AST_ASMTOKTYPE TYPE;
	union {
		struct $8FBSYMBOL* SYM;
		uint8* TEXT;
	};
	struct $9ASTASMTOK* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $9ASTASMTOK ) == 24 );
struct $12AST_NODE_ASM {
	struct $9ASTASMTOK* TOKHEAD;
};
__FB_STATIC_ASSERT( sizeof( struct $12AST_NODE_ASM ) == 8 );
struct $14AST_NODE_JMPTB {
	uint64* VALUES;
	struct $8FBSYMBOL** LABELS;
	int64 LABELCOUNT;
	struct $8FBSYMBOL* DEFLABEL;
	uint64 MINVAL;
	uint64 MAXVAL;
};
__FB_STATIC_ASSERT( sizeof( struct $14AST_NODE_JMPTB ) == 48 );
struct $12AST_NODE_DBG {
	int64 EX;
	int64 OP;
};
__FB_STATIC_ASSERT( sizeof( struct $12AST_NODE_DBG ) == 16 );
struct $12AST_NODE_MEM {
	int64 BYTES;
	int64 OP;
};
__FB_STATIC_ASSERT( sizeof( struct $12AST_NODE_MEM ) == 16 );
struct $14AST_NODE_STACK {
	int64 OP;
};
__FB_STATIC_ASSERT( sizeof( struct $14AST_NODE_STACK ) == 8 );
struct $16AST_NODE_TYPEINI {
	int64 OFS;
	union {
		int64 BYTES;
		int64 ELEMENTS;
	};
	struct $8FBSYMBOL* SCP;
	struct $8FBSYMBOL* LASTSCP;
};
__FB_STATIC_ASSERT( sizeof( struct $16AST_NODE_TYPEINI ) == 32 );
struct $13AST_BREAKLIST {
	struct $7ASTNODE* HEAD;
	struct $7ASTNODE* TAIL;
};
__FB_STATIC_ASSERT( sizeof( struct $13AST_BREAKLIST ) == 16 );
struct $13AST_NODE_PROC {
	int64 ISMAIN;
	struct $7ASTNODE* DECL_LAST;
};
__FB_STATIC_ASSERT( sizeof( struct $13AST_NODE_PROC ) == 16 );
struct $14AST_NODE_BLOCK {
	struct $7ASTNODE* PARENT;
	int64 INISTMT;
	int64 ENDSTMT;
	struct $8FBSYMBOL* INITLABEL;
	struct $8FBSYMBOL* EXITLABEL;
	struct $13AST_BREAKLIST BREAKLIST;
	struct $13AST_NODE_PROC PROC;
};
__FB_STATIC_ASSERT( sizeof( struct $14AST_NODE_BLOCK ) == 72 );
struct $14AST_NODE_BREAK {
	struct $7ASTNODE* PARENT;
	int64 SCOPE;
	int64 LINENUM;
	int64 STMTNUM;
};
__FB_STATIC_ASSERT( sizeof( struct $14AST_NODE_BREAK ) == 32 );
struct $17AST_NODE_DATASTMT {
	union {
		int64 ID;
		int64 ELMTS;
	};
};
__FB_STATIC_ASSERT( sizeof( struct $17AST_NODE_DATASTMT ) == 8 );
struct $13AST_NODE_LINK {
	int64 RET_LEFT;
};
__FB_STATIC_ASSERT( sizeof( struct $13AST_NODE_LINK ) == 8 );
struct $13AST_NODE_CAST {
	int64 DOCONV;
	int64 DO_CONVFD2FS;
};
__FB_STATIC_ASSERT( sizeof( struct $13AST_NODE_CAST ) == 16 );
struct $7ASTNODE {
	$13AST_NODECLASS CLASS;
	int64 DTYPE;
	struct $8FBSYMBOL* SUBTYPE;
	struct $8FBSYMBOL* SYM;
	int64 VECTOR;
	union {
		union $7FBVALUE VAL;
		struct $12AST_NODE_VAR VAR_;
		struct $12AST_NODE_IDX IDX;
		struct $12AST_NODE_PTR PTR;
		struct $13AST_NODE_CALL CALL;
		struct $12AST_NODE_ARG ARG;
		struct $12AST_NODE_IIF IIF;
		struct $11AST_NODE_OP OP;
		struct $13AST_NODE_LOAD LOD;
		struct $14AST_NODE_LABEL LBL;
		struct $13AST_NODE_OFFS OFS;
		struct $12AST_NODE_LIT LIT;
		struct $12AST_NODE_ASM ASM;
		struct $14AST_NODE_JMPTB JMPTB;
		struct $12AST_NODE_DBG DBG;
		struct $12AST_NODE_MEM MEM;
		struct $14AST_NODE_STACK STACK;
		struct $16AST_NODE_TYPEINI TYPEINI;
		struct $14AST_NODE_BLOCK BLOCK;
		struct $14AST_NODE_BREAK BREAK;
		struct $17AST_NODE_DATASTMT DATA;
		struct $13AST_NODE_LINK LINK;
		struct $13AST_NODE_CAST CAST;
	};
	struct $7ASTNODE* L;
	struct $7ASTNODE* R;
	struct $7ASTNODE* PREV;
	struct $7ASTNODE* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $7ASTNODE ) == 144 );
struct $10FBARRAYDIM {
	int64 LOWER;
	int64 UPPER;
};
__FB_STATIC_ASSERT( sizeof( struct $10FBARRAYDIM ) == 16 );
struct $9FBS_ARRAY {
	int64 DIMENSIONS;
	struct $10FBARRAYDIM* DIMTB;
	int64 DIFF;
	int64 ELEMENTS;
	struct $8FBSYMBOL* DESC;
	struct $8FBSYMBOL* DESCTYPE;
};
__FB_STATIC_ASSERT( sizeof( struct $9FBS_ARRAY ) == 48 );
struct $10FBVAR_DESC {
	struct $8FBSYMBOL* ARRAY;
};
__FB_STATIC_ASSERT( sizeof( struct $10FBVAR_DESC ) == 8 );
struct $10FBVAR_DATA {
	struct $8FBSYMBOL* PREV;
};
__FB_STATIC_ASSERT( sizeof( struct $10FBVAR_DATA ) == 8 );
struct $7FBS_VAR {
	union {
		uint8* LITTEXT;
		uint32* LITTEXTW;
		struct $7ASTNODE* INITREE;
	};
	struct $9FBS_ARRAY ARRAY;
	struct $10FBVAR_DESC DESC;
	int64 STMTNUM;
	int64 ALIGN;
	struct $10FBVAR_DATA DATA;
	int64 BITPOS;
	int64 BITS;
};
__FB_STATIC_ASSERT( sizeof( struct $7FBS_VAR ) == 104 );
struct $10FBSYMBOLTB {
	struct $8FBSYMBOL* OWNER;
	struct $8FBSYMBOL* HEAD;
	struct $8FBSYMBOL* TAIL;
};
__FB_STATIC_ASSERT( sizeof( struct $10FBSYMBOLTB ) == 24 );
struct $8FBHASHTB;
struct $8FBHASHTB {
	struct $8FBSYMBOL* OWNER;
	struct $5THASH TB;
	struct $8FBHASHTB* PREV;
	struct $8FBHASHTB* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $8FBHASHTB ) == 48 );
struct $9FBSYMLIST {
	struct $8FBSYMBOL* HEAD;
	struct $8FBSYMBOL* TAIL;
};
__FB_STATIC_ASSERT( sizeof( struct $9FBSYMLIST ) == 16 );
struct $10FBSYMCHAIN;
struct $10FBSYMCHAIN {
	struct $8FBSYMBOL* SYM;
	struct $10FBSYMCHAIN* NEXT;
	int64 ISIMPORT;
	struct $10FBSYMCHAIN* PREV;
	struct $8HASHITEM* ITEM;
	struct $10FBSYMCHAIN* IMP_NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $10FBSYMCHAIN ) == 48 );
struct $13FBNAMESPC_EXT {
	struct $9FBSYMLIST IMPLIST;
	struct $9FBSYMLIST EXPLIST;
	int64 CNT;
	struct $10FBSYMCHAIN* IMPSYM_HEAD;
	struct $10FBSYMCHAIN* IMPSYM_TAIL;
};
__FB_STATIC_ASSERT( sizeof( struct $13FBNAMESPC_EXT ) == 56 );
struct $9FBNAMESPC {
	struct $10FBSYMBOLTB SYMTB;
	struct $8FBHASHTB HASHTB;
	struct $13FBNAMESPC_EXT* EXT;
};
__FB_STATIC_ASSERT( sizeof( struct $9FBNAMESPC ) == 80 );
struct $13FB_STRUCT_DBG {
	int64 TYPENUM;
};
__FB_STATIC_ASSERT( sizeof( struct $13FB_STRUCT_DBG ) == 8 );
struct $12FB_STRUCTEXT {
	struct $8FBSYMBOL* CTORHEAD;
	struct $8FBSYMBOL* DEFCTOR;
	struct $8FBSYMBOL* COPYCTOR;
	struct $8FBSYMBOL* COPYCTORCONST;
	struct $8FBSYMBOL* DTOR;
	struct $8FBSYMBOL* COPYLETOP;
	struct $8FBSYMBOL* COPYLETOPCONST;
	struct $8FBSYMBOL* OPOVLTB[28];
	int64 VTABLEELEMENTS;
	struct $8FBSYMBOL* VTABLE;
	struct $8FBSYMBOL* RTTI;
	int64 ABSTRACTCOUNT;
};
__FB_STATIC_ASSERT( sizeof( struct $12FB_STRUCTEXT ) == 312 );
struct $10FBS_STRUCT {
	struct $9FBNAMESPC NS;
	struct $8FBSYMBOL* BASE;
	struct $8FBSYMBOL* ANONPARENT;
	int64 NATALIGN;
	int64 UNPADLGT;
	int16 OPTIONS;
	uint8 BITPOS;
	uint8 ALIGN;
	$11FB_DATATYPE RETDTYPE;
	struct $13FB_STRUCT_DBG DBG;
	struct $12FB_STRUCTEXT* EXT;
};
__FB_STATIC_ASSERT( sizeof( struct $10FBS_STRUCT ) == 144 );
struct $8FBS_ENUM {
	struct $9FBNAMESPC NS;
	int64 ELEMENTS;
	struct $13FB_STRUCT_DBG DBG;
};
__FB_STATIC_ASSERT( sizeof( struct $8FBS_ENUM ) == 96 );
typedef int64 $21FB_PROC_RETURN_METHOD;
typedef int64 (*tmp$28)( struct $8FBSYMBOL* );
struct $10FB_PROCRTL {
	tmp$28 CALLBACK;
};
__FB_STATIC_ASSERT( sizeof( struct $10FB_PROCRTL ) == 8 );
struct $10FB_PROCOVL {
	int16 MINPARAMS;
	int16 MAXPARAMS;
	struct $8FBSYMBOL* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $10FB_PROCOVL ) == 16 );
struct $10FB_PROCSTK {
	int64 ARGOFS;
	int64 LOCALOFS;
	int64 LOCALMAX;
};
__FB_STATIC_ASSERT( sizeof( struct $10FB_PROCSTK ) == 24 );
struct $10FB_PROCDBG {
	int64 INILINE;
	int64 ENDLINE;
	uint8* INCFILE;
};
__FB_STATIC_ASSERT( sizeof( struct $10FB_PROCDBG ) == 24 );
struct $10FB_PROCERR {
	struct $8FBSYMBOL* LASTHND;
	struct $8FBSYMBOL* LASTMOD;
	struct $8FBSYMBOL* LASTFUN;
};
__FB_STATIC_ASSERT( sizeof( struct $10FB_PROCERR ) == 24 );
struct $12FB_PROCOPOVL {
	$6AST_OP OP;
};
__FB_STATIC_ASSERT( sizeof( struct $12FB_PROCOPOVL ) == 8 );
typedef int64 $12FB_PROCSTATS;
struct $10FB_PROCGSB {
	struct $8FBSYMBOL* CTX;
};
__FB_STATIC_ASSERT( sizeof( struct $10FB_PROCGSB ) == 8 );
struct $10FB_PROCEXT {
	struct $8FBSYMBOL* RES;
	struct $10FB_PROCSTK STK;
	struct $10FB_PROCDBG DBG;
	struct $10FB_PROCERR ERR;
	struct $12FB_PROCOPOVL OPOVL;
	struct $5TLIST* STATDTOR;
	$12FB_PROCSTATS STATS;
	int64 STMTNUM;
	int64 PRIORITY;
	struct $10FB_PROCGSB GOSUB;
	struct $7ASTNODE* BASE_INITREE;
	int64 VTABLEINDEX;
	struct $8FBSYMBOL* OVERRIDDEN;
};
__FB_STATIC_ASSERT( sizeof( struct $10FB_PROCEXT ) == 152 );
struct $8FBS_PROC {
	struct $10FBSYMBOLTB SYMTB;
	int16 PARAMS;
	int16 OPTPARAMS;
	struct $10FBSYMBOLTB PARAMTB;
	$11FB_FUNCMODE MODE;
	$11FB_DATATYPE REALDTYPE;
	struct $8FBSYMBOL* REALSUBTYPE;
	$21FB_PROC_RETURN_METHOD RETURNMETHOD;
	struct $10FB_PROCRTL RTL;
	struct $10FB_PROCOVL OVL;
	struct $10FB_PROCEXT* EXT;
};
__FB_STATIC_ASSERT( sizeof( struct $8FBS_PROC ) == 120 );
typedef int64 $12FB_PARAMMODE;
struct $9FBS_PARAM {
	$12FB_PARAMMODE MODE;
	struct $8FBSYMBOL* VAR;
	struct $7ASTNODE* OPTEXPR;
	int64 BYDESCDIMENSIONS;
	struct $8FBSYMBOL* BYDESCREALSUBTYPE;
};
__FB_STATIC_ASSERT( sizeof( struct $9FBS_PARAM ) == 40 );
struct $9FBS_LABEL {
	struct $8FBSYMBOL* PARENT;
	int64 DECLARED;
	int64 STMTNUM;
};
__FB_STATIC_ASSERT( sizeof( struct $9FBS_LABEL ) == 24 );
struct $11FB_DEFPARAM;
struct $11FB_DEFPARAM {
	uint8* NAME;
	int64 NUM;
	struct $11FB_DEFPARAM* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $11FB_DEFPARAM ) == 24 );
typedef int64 $14FB_DEFTOK_TYPE;
struct $9FB_DEFTOK;
struct $9FB_DEFTOK {
	$14FB_DEFTOK_TYPE TYPE;
	union {
		uint8* TEXT;
		uint32* TEXTW;
		int64 PARAMNUM;
	};
	struct $9FB_DEFTOK* PREV;
	struct $9FB_DEFTOK* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $9FB_DEFTOK ) == 32 );
typedef int64 $15FB_DEFINE_FLAGS;
typedef FBSTRING* (*tmp$26)( void );
struct $10FBS_DEFINE {
	int64 PARAMS;
	struct $11FB_DEFPARAM* PARAMHEAD;
	union {
		struct $9FB_DEFTOK* TOKHEAD;
		uint8* TEXT;
		uint32* TEXTW;
	};
	int64 ISARGLESS;
	$15FB_DEFINE_FLAGS FLAGS;
	tmp$26 PROC;
};
__FB_STATIC_ASSERT( sizeof( struct $10FBS_DEFINE ) == 48 );
typedef int64 $10FB_TKCLASS;
struct $11FBS_KEYWORD {
	int64 ID;
	$10FB_TKCLASS TKCLASS;
};
__FB_STATIC_ASSERT( sizeof( struct $11FBS_KEYWORD ) == 16 );
struct $8FBFWDREF;
struct $8FBFWDREF {
	struct $8FBSYMBOL* REF;
	struct $8FBFWDREF* PREV;
};
__FB_STATIC_ASSERT( sizeof( struct $8FBFWDREF ) == 16 );
struct $10FBS_FWDREF {
	struct $8FBFWDREF* TAIL;
};
__FB_STATIC_ASSERT( sizeof( struct $10FBS_FWDREF ) == 8 );
struct $11FB_SCOPEDBG {
	int64 INILINE;
	int64 ENDLINE;
	struct $8FBSYMBOL* INILABEL;
	struct $8FBSYMBOL* ENDLABEL;
};
__FB_STATIC_ASSERT( sizeof( struct $11FB_SCOPEDBG ) == 32 );
struct $12FB_SCOPEEMIT {
	int64 BASEOFS;
};
__FB_STATIC_ASSERT( sizeof( struct $12FB_SCOPEEMIT ) == 8 );
struct $9FBS_SCOPE {
	struct $7ASTNODE* BACKNODE;
	struct $10FBSYMBOLTB SYMTB;
	struct $11FB_SCOPEDBG DBG;
	struct $12FB_SCOPEEMIT EMIT;
};
__FB_STATIC_ASSERT( sizeof( struct $9FBS_SCOPE ) == 72 );
struct $13FBS_NAMESPACE {
	struct $9FBNAMESPC NS;
	int64 CNT;
	struct $8FBSYMBOL* LAST_TAIL;
};
__FB_STATIC_ASSERT( sizeof( struct $13FBS_NAMESPACE ) == 96 );
struct $12FBS_NSIMPORT {
	struct $8FBSYMBOL* IMP_NS;
	struct $8FBSYMBOL* IMP_PREV;
	struct $8FBSYMBOL* IMP_NEXT;
	struct $8FBSYMBOL* EXP_NS;
	struct $8FBSYMBOL* EXP_PREV;
	struct $8FBSYMBOL* EXP_NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $12FBS_NSIMPORT ) == 48 );
struct $9FBSYMHASH {
	struct $8FBHASHTB* TB;
	struct $8HASHITEM* ITEM;
	uint64 INDEX;
	struct $8FBSYMBOL* PREV;
	struct $8FBSYMBOL* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $9FBSYMHASH ) == 40 );
struct $8FBSYMBOL {
	$12FB_SYMBCLASS CLASS;
	$13FB_SYMBATTRIB ATTRIB;
	$12FB_SYMBSTATS STATS;
	struct $9FB_SYMBID ID;
	$11FB_DATATYPE TYP;
	struct $8FBSYMBOL* SUBTYPE;
	uint16 SCOPE;
	int16 MANGLING;
	int64 LGT;
	int64 OFS;
	union {
		struct $7FBS_VAR VAR_;
		union $7FBVALUE VAL;
		struct $10FBS_STRUCT UDT;
		struct $8FBS_ENUM ENUM_;
		struct $8FBS_PROC PROC;
		struct $9FBS_PARAM PARAM;
		struct $9FBS_LABEL LBL;
		struct $10FBS_DEFINE DEF;
		struct $11FBS_KEYWORD KEY;
		struct $10FBS_FWDREF FWD;
		struct $9FBS_SCOPE SCP;
		struct $13FBS_NAMESPACE NSPC;
		struct $12FBS_NSIMPORT NSIMP;
	};
	struct $9FBSYMHASH HASH;
	struct $10FBSYMBOLTB* SYMTB;
	struct $8FBSYMBOL* PARENT;
	struct $8FBSYMBOL* PREV;
	struct $8FBSYMBOL* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $8FBSYMBOL ) == 304 );
struct $6FBMAIN {
	struct $8FBSYMBOL* PROC;
	struct $7ASTNODE* INITNODE;
};
__FB_STATIC_ASSERT( sizeof( struct $6FBMAIN ) == 16 );
typedef int64 $11FB_LANG_OPT;
struct $11FB_LANG_CTX {
	$11FB_LANG_OPT OPT;
	$11FB_DATATYPE INTEGERKEYWORDDTYPE;
	$11FB_DATATYPE INT15LITERALDTYPE;
	$11FB_DATATYPE INT16LITERALDTYPE;
	$11FB_DATATYPE INT31LITERALDTYPE;
	$11FB_DATATYPE INT32LITERALDTYPE;
	$11FB_DATATYPE FLOATLITERALDTYPE;
};
__FB_STATIC_ASSERT( sizeof( struct $11FB_LANG_CTX ) == 56 );
struct $8FBOPTION {
	int64 BASE;
	int64 PARAMMODE;
	int64 EXPLICIT;
	int64 PROCPUBLIC;
	int64 ESCAPESTR;
	int64 DYNAMIC;
	int64 GOSUB;
};
__FB_STATIC_ASSERT( sizeof( struct $8FBOPTION ) == 56 );
struct $7TSTRSET {
	struct $5TLIST LIST;
	struct $5THASH HASH;
};
__FB_STATIC_ASSERT( sizeof( struct $7TSTRSET ) == 88 );
struct $5FBENV {
	struct $5TLIST PREDEFINES;
	struct $5TLIST PREINCLUDES;
	struct $5TLIST INCLUDEPATHS;
	struct $12FBCMMLINEOPT CLOPT;
	struct $8FBTARGET TARGET;
	int64 WCHAR_DOCONV;
	int64 UNDERSCOREPREFIX;
	int64 POINTERSIZE;
	struct $6FBFILE INF;
	struct $6FBFILE OUTF;
	int64 PPFILE_NUM;
	struct $5THASH INCFILEHASH;
	struct $5THASH INCONCEHASH;
	int64 INCLUDEREC;
	struct $6FBMAIN MAIN;
	struct $11FB_LANG_CTX LANG;
	struct $8FBOPTION OPT;
	int64 RESTARTS;
	int64 DORESTART;
	struct $7TSTRSET LIBS;
	struct $7TSTRSET LIBPATHS;
	int64 FBCTINF_STARTED;
};
__FB_STATIC_ASSERT( sizeof( struct $5FBENV ) == 1464 );
extern struct $5FBENV ENV$;
struct $5FBENV ENV$ __attribute__((common));

int64 HMATCHTEXT( uint8* TXT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$10:;
	uint8* vr$1 = LEXGETTEXT(  );
	FBSTRING* vr$2 = fb_StrAllocTempDescZ( vr$1 );
	FBSTRING* vr$3 = fb_StrUcase2( vr$2, 0 );
	int32 vr$4 = fb_StrCompare( (void*)vr$3, -1ll, (void*)TXT$1, 0ll );
	if( (int64)vr$4 != 0ll ) goto label$13;
	{
		LEXSKIPTOKEN( 0ll );
		fb$result$1 = -1ll;
	}
	goto label$12;
	label$13:;
	{
		fb$result$1 = 0ll;
	}
	label$12:;
	label$11:;
	return fb$result$1;
}

int64 HMATCH( int64 TOKEN$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$14:;
	int64 vr$1 = LEXGETTOKEN( 0ll );
	if( vr$1 != TOKEN$1 ) goto label$17;
	{
		LEXSKIPTOKEN( 0ll );
		fb$result$1 = -1ll;
	}
	goto label$16;
	label$17:;
	{
		fb$result$1 = 0ll;
	}
	label$16:;
	label$15:;
	return fb$result$1;
}

uint8* HHEXUINT( uint64 VALUE$1 )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$18:;
	static uint8 RES$1[9];
	static uint8* P$1;
	static int64 LGT$1;
	static int64 MAXLEN$1;
	static int64 HEXTB$1[16] = { 48ll, 49ll, 50ll, 51ll, 52ll, 53ll, 54ll, 55ll, 56ll, 57ll, 65ll, 66ll, 67ll, 68ll, 69ll, 70ll };
	struct $8FBARRAY1IlE {
		int64* DATA;
		int64* PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1IlE ) == 64 );
	static struct $8FBARRAY1IlE tmp$84$1 = { (int64*)HEXTB$1, (int64*)HEXTB$1, 128ll, 8ll, 1ll, { { 16ll, 0ll, 15ll } } };
	MAXLEN$1 = 4ll;
	if( VALUE$1 <= 65535ull ) goto label$21;
	{
		MAXLEN$1 = 8ll;
	}
	label$21:;
	label$20:;
	P$1 = (uint8*)((uint8*)RES$1 + 7ll);
	LGT$1 = 0ll;
	label$22:;
	{
		*P$1 = (uint8)*(int64*)((uint8*)HEXTB$1 + ((int64)(VALUE$1 & 15ull) << 3ll));
		LGT$1 = LGT$1 + 1ll;
		if( LGT$1 != MAXLEN$1 ) goto label$26;
		{
			goto label$23;
		}
		label$26:;
		label$25:;
		P$1 = (uint8*)((uint8*)P$1 + -1ll);
		VALUE$1 = VALUE$1 >> 4ll;
	}
	label$24:;
	goto label$22;
	label$23:;
	fb$result$1 = P$1;
	label$19:;
	return fb$result$1;
}

FBSTRING* HFLOATTOHEX( double VALUE$1, int64 DTYPE$1 )
{
	int64 TMP$99$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$27:;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$29;
	TMP$99$1 = 22ll;
	goto label$32;
	label$29:;
	TMP$99$1 = DTYPE$1 & 31ll;
	label$32:;
	if( TMP$99$1 != 15ll ) goto label$31;
	{
		FBSTRING* vr$6 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"0x", 3ll, 0 );
		FBSTRING* vr$7 = fb_HEXEx_l( *(uint64*)&VALUE$1, 16 );
		FBSTRING* vr$9 = fb_StrConcatAssign( (void*)&fb$result$1, -1ll, (void*)vr$7, -1ll, 0 );
	}
	goto label$30;
	label$31:;
	{
		float SINGLEVALUE$2;
		SINGLEVALUE$2 = (float)VALUE$1;
		FBSTRING* vr$12 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"0x", 3ll, 0 );
		FBSTRING* vr$14 = fb_HEXEx_l( (uint64)*(uint32*)&SINGLEVALUE$2, 8 );
		FBSTRING* vr$16 = fb_StrConcatAssign( (void*)&fb$result$1, -1ll, (void*)vr$14, -1ll, 0 );
	}
	label$30:;
	label$28:;
	FBSTRING* vr$18 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$18;
}

FBSTRING* HFLOATTOHEX_C99( double VALUE$1 )
{
	uint8* TMP$106$1;
	FBSTRING TMP$107$1;
	FBSTRING TMP$108$1;
	FBSTRING TMP$109$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$33:;
	uint64 N$1;
	N$1 = *(uint64*)&VALUE$1;
	int64 SIGN$1;
	SIGN$1 = (int64)(N$1 >> 63ll);
	int64 EXP2$1;
	EXP2$1 = (int64)((N$1 >> 52ll) & 2047ull);
	uint64 MANTISSA$1;
	MANTISSA$1 = N$1 & 4503599627370495ull;
	FBSTRING RET$1;
	__builtin_memset( &RET$1, 0, 24ll );
	if( SIGN$1 == 0ll ) goto label$36;
	{
		fb_StrAssign( (void*)&RET$1, -1ll, (void*)"-0x", 4ll, 0 );
	}
	goto label$35;
	label$36:;
	{
		fb_StrAssign( (void*)&RET$1, -1ll, (void*)"0x", 3ll, 0 );
	}
	label$35:;
	EXP2$1 = EXP2$1 + -1023ll;
	if( EXP2$1 <= -1023ll ) goto label$38;
	{
		FBSTRING* vr$12 = fb_StrConcatAssign( (void*)&RET$1, -1ll, (void*)"1.", 3ll, 0 );
		FBSTRING* vr$13 = fb_HEXEx_l( MANTISSA$1, 13 );
		FBSTRING* vr$15 = fb_StrConcatAssign( (void*)&RET$1, -1ll, (void*)vr$13, -1ll, 0 );
		FBSTRING* vr$17 = fb_RIGHT( &RET$1, 1ll );
		int32 vr$18 = fb_StrCompare( (void*)vr$17, -1ll, (void*)"0", 2ll );
		if( (int64)vr$18 != 0ll ) goto label$40;
		{
			FBSTRING* vr$21 = fb_StrAllocTempDescZEx( (uint8*)"0", 1ll );
			FBSTRING* vr$23 = fb_RTrimEx( &RET$1, vr$21 );
			FBSTRING* vr$25 = fb_StrAssign( (void*)&RET$1, -1ll, (void*)vr$23, -1ll, 0 );
			label$40:;
		}
	}
	goto label$37;
	label$38:;
	{
		if( MANTISSA$1 != 0ull ) goto label$42;
		{
			FBSTRING* vr$28 = fb_StrConcatAssign( (void*)&RET$1, -1ll, (void*)"0", 2ll, 0 );
			EXP2$1 = 0ll;
		}
		goto label$41;
		label$42:;
		{
			EXP2$1 = EXP2$1 + 1ll;
			FBSTRING* vr$31 = fb_StrConcatAssign( (void*)&RET$1, -1ll, (void*)"0.", 3ll, 0 );
			FBSTRING* vr$32 = fb_HEXEx_l( MANTISSA$1, 13 );
			FBSTRING* vr$34 = fb_StrConcatAssign( (void*)&RET$1, -1ll, (void*)vr$32, -1ll, 0 );
			FBSTRING* vr$36 = fb_RIGHT( &RET$1, 1ll );
			int32 vr$37 = fb_StrCompare( (void*)vr$36, -1ll, (void*)"0", 2ll );
			if( (int64)vr$37 != 0ll ) goto label$44;
			{
				FBSTRING* vr$40 = fb_StrAllocTempDescZEx( (uint8*)"0", 1ll );
				FBSTRING* vr$42 = fb_RTrimEx( &RET$1, vr$40 );
				FBSTRING* vr$44 = fb_StrAssign( (void*)&RET$1, -1ll, (void*)vr$42, -1ll, 0 );
				label$44:;
			}
		}
		label$41:;
	}
	label$37:;
	FBSTRING* vr$46 = fb_LongintToStr( __builtin_llabs( EXP2$1 ) );
	if( EXP2$1 < 0ll ) goto label$45;
	TMP$106$1 = (uint8*)"+";
	goto label$46;
	label$45:;
	TMP$106$1 = (uint8*)"-";
	label$46:;
	__builtin_memset( &TMP$107$1, 0, 24ll );
	FBSTRING* vr$50 = fb_StrConcat( &TMP$107$1, (void*)TMP$106$1, 0ll, (void*)vr$46, -1ll );
	__builtin_memset( &TMP$108$1, 0, 24ll );
	FBSTRING* vr$53 = fb_StrConcat( &TMP$108$1, (void*)"p", 2ll, (void*)vr$50, -1ll );
	__builtin_memset( &TMP$109$1, 0, 24ll );
	FBSTRING* vr$57 = fb_StrConcat( &TMP$109$1, (void*)&RET$1, -1ll, (void*)vr$53, -1ll );
	FBSTRING* vr$59 = fb_StrAssign( (void*)&RET$1, -1ll, (void*)vr$57, -1ll, 0 );
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&RET$1, -1ll, 0 );
	fb_StrDelete( &RET$1 );
	goto label$34;
	fb_StrDelete( &RET$1 );
	label$34:;
	FBSTRING* vr$65 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$65;
}

int64 HFBRELOP2IRRELOP( int64 TK$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$47:;
	static int64 OP$1;
	{
		uint64 TMP$110$2;
		TMP$110$2 = (uint64)TK$1;
		goto label$50;
		label$51:;
		{
			OP$1 = 45ll;
		}
		goto label$49;
		label$52:;
		{
			OP$1 = 46ll;
		}
		goto label$49;
		label$53:;
		{
			OP$1 = 47ll;
		}
		goto label$49;
		label$54:;
		{
			OP$1 = 48ll;
		}
		goto label$49;
		label$55:;
		{
			OP$1 = 50ll;
		}
		goto label$49;
		label$56:;
		{
			OP$1 = 49ll;
		}
		goto label$49;
		label$57:;
		{
			ERRREPORT( 284ll, 0ll, (uint8*)0ull );
			OP$1 = 45ll;
		}
		goto label$49;
		label$50:;
		static const void* tmp$111[6ll] = {
			&&label$51,
			&&label$52,
			&&label$53,
			&&label$54,
			&&label$55,
			&&label$56,
		};
		if( TMP$110$2 < 299ll ) goto label$57;
		if( TMP$110$2 > 304ll ) goto label$57;
		goto *tmp$111[TMP$110$2 - 299ll];
		label$49:;
	}
	fb$result$1 = OP$1;
	label$48:;
	return fb$result$1;
}

int64 HFILEEXISTS( uint8* FILENAME$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$58:;
	static int64 F$1;
	int32 vr$1 = fb_FileFree(  );
	F$1 = (int64)vr$1;
	FBSTRING* vr$4 = fb_StrAllocTempDescZ( FILENAME$1 );
	int32 vr$5 = fb_FileOpen( vr$4, 2u, 0u, 0u, (int32)F$1, 0 );
	if( (int64)vr$5 != 0ll ) goto label$61;
	{
		fb$result$1 = -1ll;
		int32 vr$9 = fb_FileClose( (int32)F$1 );
		if( (int64)vr$9 == 0ll ) goto label$62;
		void* vr$12 = fb_ErrorThrowAt( 191, (uint8*)"fbc-1.01.0/src/compiler/hlp.bas", (void*)0ull, (void*)0ull );
		goto *vr$12;
		label$62:;
	}
	goto label$60;
	label$61:;
	{
		fb$result$1 = 0ll;
	}
	label$60:;
	label$59:;
	return fb$result$1;
}

void HUCASE( uint8* SRC$1, uint8* DST$1 )
{
	label$63:;
	static int64 C$1;
	static uint8* S$1;
	static uint8* D$1;
	S$1 = SRC$1;
	D$1 = DST$1;
	label$65:;
	{
		C$1 = (int64)*S$1;
		if( C$1 < 97ll ) goto label$69;
		{
			if( C$1 > 122ll ) goto label$71;
			{
				C$1 = C$1 + -32ll;
			}
			label$71:;
			label$70:;
		}
		goto label$68;
		label$69:;
		if( C$1 != 0ll ) goto label$72;
		{
			goto label$66;
		}
		label$72:;
		label$68:;
		*D$1 = (uint8)C$1;
		S$1 = (uint8*)((uint8*)S$1 + 1ll);
		D$1 = (uint8*)((uint8*)D$1 + 1ll);
	}
	label$67:;
	goto label$65;
	label$66:;
	*D$1 = (uint8)0u;
	label$64:;
}

void HCLEARNAME( uint8* SRC$1 )
{
	label$73:;
	static uint8* P$1;
	P$1 = SRC$1;
	label$75:;
	{
		{
			uint64 TMP$113$3;
			TMP$113$3 = (uint64)*P$1;
			goto label$79;
			label$80:;
			{
				goto label$76;
			}
			goto label$78;
			label$81:;
			{
			}
			goto label$78;
			label$82:;
			{
				*P$1 = (uint8)122u;
			}
			goto label$78;
			label$79:;
			static const void* tmp$114[123ll] = {
				&&label$80,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$82,
				&&label$81,
				&&label$82,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
				&&label$81,
			};
			if( TMP$113$3 > 122ll ) goto label$82;
			goto *tmp$114[TMP$113$3 - 0ll];
			label$78:;
		}
		P$1 = (uint8*)((uint8*)P$1 + 1ll);
	}
	label$77:;
	goto label$75;
	label$76:;
	label$74:;
}

FBSTRING* HSTRIPEXT( FBSTRING* PATH$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$94:;
	int64 vr$1 = HFINDEXTBEGIN( PATH$1 );
	FBSTRING* vr$2 = fb_LEFT( PATH$1, vr$1 );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$2, -1ll, 0 );
	label$95:;
	FBSTRING* vr$6 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$6;
}

FBSTRING* HSTRIPPATH( uint8* FILENAME$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$96:;
	static int64 LP$1;
	static int64 P_FOUND$1;
	static int64 P$1[2];
	struct $8FBARRAY1IlE {
		int64* DATA;
		int64* PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1IlE ) == 64 );
	static struct $8FBARRAY1IlE tmp$116$1 = { (int64*)((uint8*)P$1 + -8ll), (int64*)P$1, 16ll, 8ll, 1ll, { { 2ll, 1ll, 2ll } } };
	LP$1 = 0ll;
	label$98:;
	{
		FBSTRING* vr$1 = fb_StrAllocTempDescZEx( (uint8*)"\x5C", 1ll );
		FBSTRING* vr$2 = fb_StrAllocTempDescZ( FILENAME$1 );
		int64 vr$4 = fb_StrInstr( LP$1 + 1ll, vr$2, vr$1 );
		*(int64*)P$1 = vr$4;
		FBSTRING* vr$5 = fb_StrAllocTempDescZEx( (uint8*)"/", 1ll );
		FBSTRING* vr$6 = fb_StrAllocTempDescZ( FILENAME$1 );
		int64 vr$8 = fb_StrInstr( LP$1 + 1ll, vr$6, vr$5 );
		*(int64*)((uint8*)P$1 + 8ll) = vr$8;
		if( ((int64)-(*(int64*)P$1 == 0ll) | ((int64)-(*(int64*)((uint8*)P$1 + 8ll) > 0ll) & (int64)-(*(int64*)((uint8*)P$1 + 8ll) < *(int64*)P$1))) == 0ll ) goto label$102;
		{
			P_FOUND$1 = *(int64*)((uint8*)P$1 + 8ll);
		}
		goto label$101;
		label$102:;
		{
			P_FOUND$1 = *(int64*)P$1;
		}
		label$101:;
		if( P_FOUND$1 != 0ll ) goto label$104;
		{
			goto label$99;
		}
		label$104:;
		label$103:;
		LP$1 = P_FOUND$1;
	}
	label$100:;
	goto label$98;
	label$99:;
	if( LP$1 <= 0ll ) goto label$106;
	{
		FBSTRING* vr$18 = fb_StrAllocTempDescZ( FILENAME$1 );
		FBSTRING* vr$19 = fb_StrMid( vr$18, LP$1 + 1ll, -1ll );
		FBSTRING* vr$21 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$19, -1ll, 0 );
	}
	goto label$105;
	label$106:;
	{
		fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)FILENAME$1, 0ll, 0 );
	}
	label$105:;
	label$97:;
	FBSTRING* vr$24 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$24;
}

FBSTRING* HSTRIPFILENAME( uint8* FILENAME$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$107:;
	static int64 LP$1;
	static int64 P_FOUND$1;
	static int64 P$1[2];
	struct $8FBARRAY1IlE {
		int64* DATA;
		int64* PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1IlE ) == 64 );
	static struct $8FBARRAY1IlE tmp$118$1 = { (int64*)((uint8*)P$1 + -8ll), (int64*)P$1, 16ll, 8ll, 1ll, { { 2ll, 1ll, 2ll } } };
	LP$1 = 0ll;
	label$109:;
	{
		FBSTRING* vr$1 = fb_StrAllocTempDescZEx( (uint8*)"\x5C", 1ll );
		FBSTRING* vr$2 = fb_StrAllocTempDescZ( FILENAME$1 );
		int64 vr$4 = fb_StrInstr( LP$1 + 1ll, vr$2, vr$1 );
		*(int64*)P$1 = vr$4;
		FBSTRING* vr$5 = fb_StrAllocTempDescZEx( (uint8*)"/", 1ll );
		FBSTRING* vr$6 = fb_StrAllocTempDescZ( FILENAME$1 );
		int64 vr$8 = fb_StrInstr( LP$1 + 1ll, vr$6, vr$5 );
		*(int64*)((uint8*)P$1 + 8ll) = vr$8;
		if( ((int64)-(*(int64*)P$1 == 0ll) | ((int64)-(*(int64*)((uint8*)P$1 + 8ll) > 0ll) & (int64)-(*(int64*)((uint8*)P$1 + 8ll) < *(int64*)P$1))) == 0ll ) goto label$113;
		{
			P_FOUND$1 = *(int64*)((uint8*)P$1 + 8ll);
		}
		goto label$112;
		label$113:;
		{
			P_FOUND$1 = *(int64*)P$1;
		}
		label$112:;
		if( P_FOUND$1 != 0ll ) goto label$115;
		{
			goto label$110;
		}
		label$115:;
		label$114:;
		LP$1 = P_FOUND$1;
	}
	label$111:;
	goto label$109;
	label$110:;
	if( LP$1 <= 0ll ) goto label$117;
	{
		FBSTRING* vr$17 = fb_StrAllocTempDescZ( FILENAME$1 );
		FBSTRING* vr$18 = fb_LEFT( vr$17, LP$1 );
		FBSTRING* vr$20 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$18, -1ll, 0 );
	}
	goto label$116;
	label$117:;
	{
		fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"", 1ll, 0 );
	}
	label$116:;
	label$108:;
	FBSTRING* vr$23 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$23;
}

FBSTRING* HGETFILEEXT( uint8* FNAME$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$118:;
	static int64 P$1;
	static int64 LP$1;
	static FBSTRING RES$1;
	LP$1 = 0ll;
	label$120:;
	{
		FBSTRING* vr$1 = fb_StrAllocTempDescZEx( (uint8*)".", 1ll );
		FBSTRING* vr$2 = fb_StrAllocTempDescZ( FNAME$1 );
		int64 vr$4 = fb_StrInstr( LP$1 + 1ll, vr$2, vr$1 );
		P$1 = vr$4;
		if( P$1 != 0ll ) goto label$124;
		{
			goto label$121;
		}
		label$124:;
		label$123:;
		LP$1 = P$1;
	}
	label$122:;
	goto label$120;
	label$121:;
	if( LP$1 != 0ll ) goto label$126;
	{
		fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"", 1ll, 0 );
	}
	goto label$125;
	label$126:;
	{
		FBSTRING* vr$9 = fb_StrAllocTempDescZ( FNAME$1 );
		FBSTRING* vr$10 = fb_StrMid( vr$9, LP$1 + 1ll, -1ll );
		FBSTRING* vr$11 = fb_StrLcase2( vr$10, 0 );
		FBSTRING* vr$12 = fb_StrAssign( (void*)&RES$1, -1ll, (void*)vr$11, -1ll, 0 );
		FBSTRING* vr$13 = fb_StrAllocTempDescZEx( (uint8*)"\x5C", 1ll );
		int64 vr$14 = fb_StrInstr( 1ll, &RES$1, vr$13 );
		FBSTRING* vr$16 = fb_StrAllocTempDescZEx( (uint8*)"/", 1ll );
		int64 vr$17 = fb_StrInstr( 1ll, &RES$1, vr$16 );
		if( ((int64)-(vr$14 > 0ll) | (int64)-(vr$17 > 0ll)) == 0ll ) goto label$128;
		{
			fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"", 1ll, 0 );
		}
		goto label$127;
		label$128:;
		int64 vr$22 = fb_StrLen( (void*)&RES$1, -1ll );
		if( vr$22 <= 0ll ) goto label$129;
		{
			if( ((int64)-((uint64)(int64)*(uint8*)*(uint8**)&RES$1 == 92ull) | (int64)-((uint64)(int64)*(uint8*)*(uint8**)&RES$1 == 47ull)) == 0ll ) goto label$131;
			{
				fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"", 1ll, 0 );
			}
			goto label$130;
			label$131:;
			{
				FBSTRING* vr$34 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&RES$1, -1ll, 0 );
			}
			label$130:;
		}
		label$129:;
		label$127:;
	}
	label$125:;
	label$119:;
	FBSTRING* vr$36 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$36;
}

void HREPLACESLASH( uint8* S$1, int64 CHAR$1 )
{
	label$132:;
	{
		int64 I$2;
		I$2 = 0ll;
		int64 TMP$119$2;
		int64 vr$0 = fb_StrLen( (void*)S$1, 0ll );
		TMP$119$2 = vr$0 + -1ll;
		goto label$134;
		label$137:;
		{
			if( ((int64)-((int64)*(uint8*)((uint8*)S$1 + I$2) == 92ll) | (int64)-((int64)*(uint8*)((uint8*)S$1 + I$2) == 47ll)) == 0ll ) goto label$139;
			{
				*(uint8*)((uint8*)S$1 + I$2) = (uint8)CHAR$1;
			}
			label$139:;
			label$138:;
		}
		label$135:;
		I$2 = I$2 + 1ll;
		label$134:;
		if( I$2 <= TMP$119$2 ) goto label$137;
		label$136:;
	}
	label$133:;
}

FBSTRING* PATHSTRIPDIV( FBSTRING* PATH$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$140:;
	int64 LENGTH$1;
	int64 vr$1 = fb_StrLen( (void*)PATH$1, -1ll );
	LENGTH$1 = vr$1;
	if( LENGTH$1 <= 0ll ) goto label$143;
	{
		LENGTH$1 = LENGTH$1 + -1ll;
		{
			uint8 TMP$120$3;
			TMP$120$3 = *(uint8*)((uint8*)*(uint8**)PATH$1 + LENGTH$1);
			if( (uint64)(int64)TMP$120$3 != 47ull ) goto label$145;
			label$146:;
			{
				FBSTRING* vr$8 = fb_LEFT( PATH$1, LENGTH$1 );
				fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$8, -1ll, 0 );
				goto label$141;
			}
			label$145:;
			label$144:;
		}
	}
	label$143:;
	label$142:;
	FBSTRING* vr$11 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)PATH$1, -1ll, 0 );
	label$141:;
	FBSTRING* vr$13 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$13;
}

int64 PATHISABSOLUTE( uint8* PATH$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$147:;
	fb$result$1 = (int64)-((uint64)(int64)*(uint8*)PATH$1 == 47ull);
	label$148:;
	return fb$result$1;
}

int64 HCHECKFILEFORMAT( int64 F$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$149:;
	int32 BOM$1;
	__builtin_memset( &BOM$1, 0, 4ll );
	$13FBFILE_FORMAT FMT$1;
	__builtin_memset( &FMT$1, 0, 8ll );
	FMT$1 = 0ll;
	int32 vr$5 = fb_FileGetLarge( (int32)F$1, 0ll, (void*)&BOM$1, 4ull );
	if( (int64)vr$5 != 0ll ) goto label$152;
	{
		if( (int64)BOM$1 != 4294836224ll ) goto label$154;
		{
			FMT$1 = 5ll;
		}
		goto label$153;
		label$154:;
		if( (int64)BOM$1 != 65279ll ) goto label$155;
		{
			FMT$1 = 4ll;
		}
		goto label$153;
		label$155:;
		{
			BOM$1 = (int32)((int64)BOM$1 & 16777215ll);
			if( (int64)BOM$1 != 12565487ll ) goto label$157;
			{
				FMT$1 = 1ll;
			}
			goto label$156;
			label$157:;
			{
				BOM$1 = (int32)((int64)BOM$1 & 65535ll);
				if( (int64)BOM$1 != 65279ll ) goto label$159;
				{
					FMT$1 = 2ll;
				}
				goto label$158;
				label$159:;
				if( (int64)BOM$1 != 65534ll ) goto label$160;
				{
					FMT$1 = 3ll;
				}
				label$160:;
				label$158:;
			}
			label$156:;
		}
		label$153:;
		{
			if( FMT$1 != 0ll ) goto label$162;
			label$163:;
			{
				int32 vr$26 = fb_FileSeekLarge( (int32)F$1, 1ll );
				if( (int64)vr$26 == 0ll ) goto label$164;
				void* vr$29 = fb_ErrorThrowAt( 455, (uint8*)"fbc-1.01.0/src/compiler/hlp.bas", (void*)0ull, (void*)0ull );
				goto *vr$29;
				label$164:;
			}
			goto label$161;
			label$162:;
			if( FMT$1 != 1ll ) goto label$165;
			label$166:;
			{
				int32 vr$32 = fb_FileSeekLarge( (int32)F$1, 4ll );
				if( (int64)vr$32 == 0ll ) goto label$167;
				void* vr$35 = fb_ErrorThrowAt( 458, (uint8*)"fbc-1.01.0/src/compiler/hlp.bas", (void*)0ull, (void*)0ull );
				goto *vr$35;
				label$167:;
			}
			goto label$161;
			label$165:;
			if( FMT$1 == 2ll ) goto label$169;
			label$170:;
			if( FMT$1 != 3ll ) goto label$168;
			label$169:;
			{
				int32 vr$39 = fb_FileSeekLarge( (int32)F$1, 3ll );
				if( (int64)vr$39 == 0ll ) goto label$171;
				void* vr$42 = fb_ErrorThrowAt( 462, (uint8*)"fbc-1.01.0/src/compiler/hlp.bas", (void*)0ull, (void*)0ull );
				goto *vr$42;
				label$171:;
			}
			label$168:;
			label$161:;
		}
	}
	label$152:;
	label$151:;
	fb$result$1 = FMT$1;
	label$150:;
	return fb$result$1;
}

FBSTRING* HCURDIR( void )
{
	FBSTRING TMP$121$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$172:;
	__builtin_memset( &TMP$121$1, 0, 24ll );
	FBSTRING* vr$2 = fb_CurDir(  );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&TMP$121$1, -1ll, (void*)vr$2, -1ll, 0 );
	FBSTRING* vr$6 = PATHSTRIPDIV( &TMP$121$1 );
	FBSTRING* vr$8 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$6, -1ll, 0 );
	fb_StrDelete( &TMP$121$1 );
	label$173:;
	FBSTRING* vr$11 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$11;
}

int64 HISVALIDSYMBOLNAME( uint8* SYM$1 )
{
	int64 TMP$124$1;
	int64 TMP$126$1;
	int64 TMP$127$1;
	int64 TMP$129$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$174:;
	if( SYM$1 != (uint8*)0ull ) goto label$177;
	{
		goto label$175;
		label$177:;
	}
	int64 SYMLEN$1;
	int64 vr$2 = fb_StrLen( (void*)SYM$1, 0ll );
	SYMLEN$1 = vr$2;
	if( SYMLEN$1 != 0ll ) goto label$179;
	{
		goto label$175;
		label$179:;
	}
	if( (int64)-((uint64)(int64)*SYM$1 >= 97ull) == 0ll ) goto label$180;
	TMP$124$1 = (int64)-((int64)-((uint64)(int64)*SYM$1 <= 122ull) != 0ll);
	goto label$198;
	label$180:;
	TMP$124$1 = 0ll;
	label$198:;
	if( TMP$124$1 != 0ll ) goto label$182;
	if( (int64)-((uint64)(int64)*SYM$1 <= 90ull) == 0ll ) goto label$181;
	TMP$126$1 = (int64)-((int64)-((uint64)(int64)*SYM$1 >= 65ull) != 0ll);
	goto label$200;
	label$181:;
	TMP$126$1 = 0ll;
	label$200:;
	TMP$127$1 = (int64)-(TMP$126$1 != 0ll);
	goto label$199;
	label$182:;
	TMP$127$1 = -1ll;
	label$199:;
	if( TMP$127$1 != 0ll ) goto label$183;
	TMP$129$1 = (int64)-((int64)-((uint64)(int64)*SYM$1 == 95ull) != 0ll);
	goto label$201;
	label$183:;
	TMP$129$1 = -1ll;
	label$201:;
	if( TMP$129$1 != 0ll ) goto label$185;
	{
		goto label$175;
		label$185:;
	}
	{
		int64 I$2;
		I$2 = 1ll;
		int64 TMP$130$2;
		TMP$130$2 = SYMLEN$1 + -1ll;
		goto label$186;
		label$189:;
		{
			int64 TMP$131$3;
			int64 TMP$132$3;
			int64 TMP$133$3;
			int64 TMP$134$3;
			int64 TMP$135$3;
			int64 TMP$136$3;
			if( (int64)-((uint64)(int64)*(uint8*)((uint8*)SYM$1 + I$2) >= 97ull) == 0ll ) goto label$190;
			TMP$131$3 = (int64)-((int64)-((uint64)(int64)*(uint8*)((uint8*)SYM$1 + I$2) <= 122ull) != 0ll);
			goto label$202;
			label$190:;
			TMP$131$3 = 0ll;
			label$202:;
			if( TMP$131$3 != 0ll ) goto label$192;
			if( (int64)-((uint64)(int64)*(uint8*)((uint8*)SYM$1 + I$2) <= 90ull) == 0ll ) goto label$191;
			TMP$132$3 = (int64)-((int64)-((uint64)(int64)*(uint8*)((uint8*)SYM$1 + I$2) >= 65ull) != 0ll);
			goto label$204;
			label$191:;
			TMP$132$3 = 0ll;
			label$204:;
			TMP$133$3 = (int64)-(TMP$132$3 != 0ll);
			goto label$203;
			label$192:;
			TMP$133$3 = -1ll;
			label$203:;
			if( TMP$133$3 != 0ll ) goto label$193;
			TMP$134$3 = (int64)-((int64)-((uint64)(int64)*(uint8*)((uint8*)SYM$1 + I$2) == 95ull) != 0ll);
			goto label$205;
			label$193:;
			TMP$134$3 = -1ll;
			label$205:;
			if( TMP$134$3 != 0ll ) goto label$195;
			if( (int64)-((uint64)(int64)*(uint8*)((uint8*)SYM$1 + I$2) <= 57ull) == 0ll ) goto label$194;
			TMP$135$3 = (int64)-((int64)-((uint64)(int64)*(uint8*)((uint8*)SYM$1 + I$2) >= 48ull) != 0ll);
			goto label$207;
			label$194:;
			TMP$135$3 = 0ll;
			label$207:;
			TMP$136$3 = (int64)-(TMP$135$3 != 0ll);
			goto label$206;
			label$195:;
			TMP$136$3 = -1ll;
			label$206:;
			if( TMP$136$3 != 0ll ) goto label$197;
			{
				goto label$175;
				label$197:;
			}
		}
		label$187:;
		I$2 = I$2 + 1ll;
		label$186:;
		if( I$2 <= TMP$130$2 ) goto label$189;
		label$188:;
	}
	fb$result$1 = -1ll;
	label$175:;
	return fb$result$1;
}

FBSTRING* STRUNQUOTE( FBSTRING* S$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$212:;
	int64 vr$1 = STRISQUOTED( S$1 );
	if( vr$1 == 0ll ) goto label$215;
	{
		int64 vr$3 = fb_StrLen( (void*)S$1, -1ll );
		FBSTRING* vr$5 = fb_StrMid( S$1, 2ll, vr$3 + -2ll );
		fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$5, -1ll, 0 );
		goto label$213;
	}
	label$215:;
	label$214:;
	fb_StrInit( (void*)&fb$result$1, -1ll, (void*)S$1, -1ll, 0 );
	goto label$213;
	label$213:;
	FBSTRING* vr$9 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$9;
}

__attribute__(( constructor )) static void fb_ctor__hlp( void )
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

static int64 HFINDEXTBEGIN( FBSTRING* PATH$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$83:;
	{
		int64 I$2;
		int64 vr$1 = fb_StrLen( (void*)PATH$1, -1ll );
		I$2 = vr$1 + -1ll;
		goto label$85;
		label$88:;
		{
			{
				uint8 TMP$115$4;
				TMP$115$4 = *(uint8*)((uint8*)*(uint8**)PATH$1 + I$2);
				if( (uint64)(int64)TMP$115$4 != 46ull ) goto label$90;
				label$91:;
				{
					fb$result$1 = I$2;
					goto label$84;
				}
				goto label$89;
				label$90:;
				if( (uint64)(int64)TMP$115$4 != 47ull ) goto label$92;
				label$93:;
				{
					goto label$87;
				}
				label$92:;
				label$89:;
			}
		}
		label$86:;
		I$2 = I$2 + -1ll;
		label$85:;
		if( I$2 >= 0ll ) goto label$88;
		label$87:;
	}
	int64 vr$11 = fb_StrLen( (void*)PATH$1, -1ll );
	fb$result$1 = vr$11;
	label$84:;
	return fb$result$1;
}

static int64 STRISQUOTED( FBSTRING* S$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$208:;
	int64 LAST$1;
	int64 vr$1 = fb_StrLen( (void*)S$1, -1ll );
	LAST$1 = vr$1 + -1ll;
	if( LAST$1 >= 1ll ) goto label$211;
	{
		fb$result$1 = 0ll;
		goto label$209;
	}
	label$211:;
	label$210:;
	fb$result$1 = ((int64)-((uint64)(int64)*(uint8*)*(uint8**)S$1 == 34ull) & (int64)-((uint64)(int64)*(uint8*)((uint8*)*(uint8**)S$1 + LAST$1) == 34ull)) | ((int64)-((uint64)(int64)*(uint8*)*(uint8**)S$1 == 39ull) & (int64)-((uint64)(int64)*(uint8*)((uint8*)*(uint8**)S$1 + LAST$1) == 39ull));
	goto label$209;
	label$209:;
	return fb$result$1;
}

// Total compilation time: 0.0296109514310956 seconds.
