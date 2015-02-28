// Compilation of fbc-1.01.0/src/compiler/hlp-str.bas started at 14:16:41 on 02-28-2015

typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
struct $8DWSTRING {
	uint32* DATA;
	int64 LEN;
	int64 SIZE;
};
#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]
__FB_STATIC_ASSERT( sizeof( struct $8DWSTRING ) == 24 );
struct $8DZSTRING {
	uint8* DATA;
	int64 LEN;
	int64 SIZE;
};
__FB_STATIC_ASSERT( sizeof( struct $8DZSTRING ) == 24 );
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
void free( void* );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
uint32* fb_WstrAssign( uint32*, int64, uint32* );
uint32* fb_WstrAssignFromA( uint32*, int64, void*, int64 );
FBSTRING* fb_WstrAssignToA( void*, int64, uint32*, int32 );
void fb_StrDelete( FBSTRING* );
void fb_WstrDelete( uint32* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
FBSTRING* fb_StrConcatAssign( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAllocTempResult( FBSTRING* );
FBSTRING* fb_StrAllocTempDescZ( uint8* );
FBSTRING* fb_StrMid( FBSTRING*, int64, int64 );
uint32* fb_WstrMid( uint32*, int64, int64 );
int64 fb_StrLen( void*, int64 );
int64 fb_WstrLen( uint32* );
int64 fb_StrInstr( int64, FBSTRING*, FBSTRING* );
int64 fb_WstrInstr( int64, uint32*, uint32* );
FBSTRING* fb_OCT_l( uint64 );
uint32* fb_WstrOct_l( uint64 );
FBSTRING* fb_LEFT( FBSTRING*, int64 );
uint32* fb_WstrLeft( uint32*, int64 );
static void fb_ctor__hlpzstr( void ) __attribute__(( constructor ));
void* XALLOCATE( int32 );
void* XREALLOCATE( void*, int32 );
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
typedef int64 $12FB_ERRMSGOPT;
void ERRREPORTWARN( int64, uint8*, $12FB_ERRMSGOPT );
void DZSTRALLOCATE( struct $8DZSTRING*, int64 );
void DWSTRALLOCATE( struct $8DWSTRING*, int64 );
void DWSTRASSIGN( struct $8DWSTRING*, uint32* );
void DWSTRCONCATASSIGN( struct $8DWSTRING*, uint32* );
static int64 HREMAPCHAR( int64 );
static uint64 HU16TOWCHAR( uint32* );
struct $16__FB_ARRAYDIMTB$ {
	int64 ELEMENTS;
	int64 LBOUND;
	int64 UBOUND;
};
__FB_STATIC_ASSERT( sizeof( struct $16__FB_ARRAYDIMTB$ ) == 24 );
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
extern struct $13SYMB_DATATYPE SYMB_DTYPETB$[24];
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
typedef int64 $13FBFILE_FORMAT;
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

void ZSTRASSIGN( uint8** DST$1, uint8* SRC$1 )
{
	label$10:;
	int64 DST_LEN$1;
	__builtin_memset( &DST_LEN$1, 0, 8ll );
	int64 SRC_LEN$1;
	__builtin_memset( &SRC_LEN$1, 0, 8ll );
	if( SRC$1 != (uint8*)0ull ) goto label$13;
	{
		SRC_LEN$1 = 0ll;
	}
	goto label$12;
	label$13:;
	{
		int64 vr$3 = fb_StrLen( (void*)SRC$1, 0ll );
		SRC_LEN$1 = vr$3;
	}
	label$12:;
	if( SRC_LEN$1 != 0ll ) goto label$15;
	{
		if( *DST$1 == (uint8*)0ull ) goto label$17;
		{
			free( *(void**)DST$1 );
			*DST$1 = (uint8*)0ull;
			goto label$11;
		}
		label$17:;
		label$16:;
	}
	label$15:;
	label$14:;
	if( *DST$1 != (uint8*)0ull ) goto label$19;
	{
		DST_LEN$1 = 0ll;
	}
	goto label$18;
	label$19:;
	{
		int64 vr$12 = fb_StrLen( *(void**)DST$1, 0ll );
		DST_LEN$1 = vr$12;
	}
	label$18:;
	if( DST_LEN$1 == SRC_LEN$1 ) goto label$21;
	{
		void* vr$16 = XALLOCATE( (int32)(SRC_LEN$1 + 1ll) );
		*DST$1 = (uint8*)vr$16;
	}
	label$21:;
	label$20:;
	if( *DST$1 == (uint8*)0ull ) goto label$23;
	{
		fb_StrAssign( *(void**)DST$1, 0ll, (void*)SRC$1, 0ll, 0 );
	}
	label$23:;
	label$22:;
	label$11:;
}

void ZSTRASSIGNW( uint8** DST$1, uint32* SRC$1 )
{
	label$24:;
	int64 DST_LEN$1;
	__builtin_memset( &DST_LEN$1, 0, 8ll );
	int64 SRC_LEN$1;
	__builtin_memset( &SRC_LEN$1, 0, 8ll );
	if( SRC$1 != (uint32*)0ull ) goto label$27;
	{
		SRC_LEN$1 = 0ll;
	}
	goto label$26;
	label$27:;
	{
		int64 vr$3 = fb_WstrLen( SRC$1 );
		SRC_LEN$1 = vr$3;
	}
	label$26:;
	if( SRC_LEN$1 != 0ll ) goto label$29;
	{
		if( *DST$1 == (uint8*)0ull ) goto label$31;
		{
			free( *(void**)DST$1 );
			*DST$1 = (uint8*)0ull;
			goto label$25;
		}
		label$31:;
		label$30:;
	}
	label$29:;
	label$28:;
	if( *DST$1 != (uint8*)0ull ) goto label$33;
	{
		DST_LEN$1 = 0ll;
	}
	goto label$32;
	label$33:;
	{
		int64 vr$12 = fb_StrLen( *(void**)DST$1, 0ll );
		DST_LEN$1 = vr$12;
	}
	label$32:;
	if( DST_LEN$1 == SRC_LEN$1 ) goto label$35;
	{
		void* vr$16 = XALLOCATE( (int32)(SRC_LEN$1 + 1ll) );
		*DST$1 = (uint8*)vr$16;
	}
	label$35:;
	label$34:;
	if( *DST$1 == (uint8*)0ull ) goto label$37;
	{
		fb_WstrAssignToA( *(void**)DST$1, 0ll, SRC$1, 0 );
	}
	label$37:;
	label$36:;
	label$25:;
}

void ZSTRCONCATASSIGN( uint8** DST$1, uint8* SRC$1 )
{
	label$38:;
	int64 DST_LEN$1;
	__builtin_memset( &DST_LEN$1, 0, 8ll );
	int64 SRC_LEN$1;
	__builtin_memset( &SRC_LEN$1, 0, 8ll );
	if( SRC$1 != (uint8*)0ull ) goto label$41;
	{
		goto label$39;
	}
	label$41:;
	label$40:;
	int64 vr$3 = fb_StrLen( (void*)SRC$1, 0ll );
	SRC_LEN$1 = vr$3;
	if( SRC_LEN$1 != 0ll ) goto label$43;
	{
		goto label$39;
	}
	label$43:;
	label$42:;
	if( *DST$1 != (uint8*)0ull ) goto label$45;
	{
		DST_LEN$1 = 0ll;
		void* vr$9 = XALLOCATE( (int32)(SRC_LEN$1 + 1ll) );
		*DST$1 = (uint8*)vr$9;
	}
	goto label$44;
	label$45:;
	{
		int64 vr$12 = fb_StrLen( *(void**)DST$1, 0ll );
		DST_LEN$1 = vr$12;
		void* vr$17 = XREALLOCATE( *(void**)DST$1, (int32)((DST_LEN$1 + SRC_LEN$1) + 1ll) );
		*DST$1 = (uint8*)vr$17;
	}
	label$44:;
	if( *DST$1 == (uint8*)0ull ) goto label$47;
	{
		fb_StrAssign( (void*)((uint8*)*DST$1 + DST_LEN$1), 0ll, (void*)SRC$1, 0ll, 0 );
	}
	label$47:;
	label$46:;
	label$39:;
}

void ZSTRCONCATASSIGNW( uint8** DST$1, uint32* SRC$1 )
{
	label$48:;
	int64 DST_LEN$1;
	__builtin_memset( &DST_LEN$1, 0, 8ll );
	int64 SRC_LEN$1;
	__builtin_memset( &SRC_LEN$1, 0, 8ll );
	if( SRC$1 != (uint32*)0ull ) goto label$51;
	{
		goto label$49;
	}
	label$51:;
	label$50:;
	int64 vr$3 = fb_WstrLen( SRC$1 );
	SRC_LEN$1 = vr$3;
	if( SRC_LEN$1 != 0ll ) goto label$53;
	{
		goto label$49;
	}
	label$53:;
	label$52:;
	if( *DST$1 != (uint8*)0ull ) goto label$55;
	{
		DST_LEN$1 = 0ll;
		void* vr$9 = XALLOCATE( (int32)(SRC_LEN$1 + 1ll) );
		*DST$1 = (uint8*)vr$9;
	}
	goto label$54;
	label$55:;
	{
		int64 vr$12 = fb_StrLen( *(void**)DST$1, 0ll );
		DST_LEN$1 = vr$12;
		void* vr$17 = XREALLOCATE( *(void**)DST$1, (int32)((DST_LEN$1 + SRC_LEN$1) + 1ll) );
		*DST$1 = (uint8*)vr$17;
	}
	label$54:;
	if( *DST$1 == (uint8*)0ull ) goto label$57;
	{
		fb_WstrAssignToA( (void*)((uint8*)*DST$1 + DST_LEN$1), 0ll, SRC$1, 0 );
	}
	label$57:;
	label$56:;
	label$49:;
}

void WSTRASSIGN( uint32** DST$1, uint32* SRC$1 )
{
	label$58:;
	int64 DST_LEN$1;
	__builtin_memset( &DST_LEN$1, 0, 8ll );
	int64 SRC_LEN$1;
	__builtin_memset( &SRC_LEN$1, 0, 8ll );
	if( SRC$1 != (uint32*)0ull ) goto label$61;
	{
		SRC_LEN$1 = 0ll;
	}
	goto label$60;
	label$61:;
	{
		int64 vr$3 = fb_WstrLen( SRC$1 );
		SRC_LEN$1 = vr$3;
	}
	label$60:;
	if( SRC_LEN$1 != 0ll ) goto label$63;
	{
		if( *DST$1 == (uint32*)0ull ) goto label$65;
		{
			free( *(void**)DST$1 );
			*DST$1 = (uint32*)0ull;
			goto label$59;
		}
		label$65:;
		label$64:;
	}
	label$63:;
	label$62:;
	if( *DST$1 != (uint32*)0ull ) goto label$67;
	{
		DST_LEN$1 = 0ll;
	}
	goto label$66;
	label$67:;
	{
		int64 vr$12 = fb_WstrLen( *DST$1 );
		DST_LEN$1 = vr$12;
	}
	label$66:;
	if( DST_LEN$1 == SRC_LEN$1 ) goto label$69;
	{
		void* vr$17 = XALLOCATE( (int32)((SRC_LEN$1 << 2ll) + 4ll) );
		*DST$1 = (uint32*)vr$17;
	}
	label$69:;
	label$68:;
	if( *DST$1 == (uint32*)0ull ) goto label$71;
	{
		uint32* vr$22 = fb_WstrAssign( *DST$1, 0ll, SRC$1 );
	}
	label$71:;
	label$70:;
	label$59:;
}

void WSTRASSIGNA( uint32** DST$1, uint8* SRC$1 )
{
	label$72:;
	int64 DST_LEN$1;
	__builtin_memset( &DST_LEN$1, 0, 8ll );
	int64 SRC_LEN$1;
	__builtin_memset( &SRC_LEN$1, 0, 8ll );
	if( SRC$1 != (uint8*)0ull ) goto label$75;
	{
		SRC_LEN$1 = 0ll;
	}
	goto label$74;
	label$75:;
	{
		int64 vr$3 = fb_StrLen( (void*)SRC$1, 0ll );
		SRC_LEN$1 = vr$3;
	}
	label$74:;
	if( SRC_LEN$1 != 0ll ) goto label$77;
	{
		if( *DST$1 == (uint32*)0ull ) goto label$79;
		{
			free( *(void**)DST$1 );
			*DST$1 = (uint32*)0ull;
			goto label$73;
		}
		label$79:;
		label$78:;
	}
	label$77:;
	label$76:;
	if( *DST$1 != (uint32*)0ull ) goto label$81;
	{
		DST_LEN$1 = 0ll;
	}
	goto label$80;
	label$81:;
	{
		int64 vr$12 = fb_WstrLen( *DST$1 );
		DST_LEN$1 = vr$12;
	}
	label$80:;
	if( DST_LEN$1 == SRC_LEN$1 ) goto label$83;
	{
		void* vr$17 = XALLOCATE( (int32)((SRC_LEN$1 << 2ll) + 4ll) );
		*DST$1 = (uint32*)vr$17;
	}
	label$83:;
	label$82:;
	if( *DST$1 == (uint32*)0ull ) goto label$85;
	{
		fb_WstrAssignFromA( *DST$1, 0ll, (void*)SRC$1, 0ll );
	}
	label$85:;
	label$84:;
	label$73:;
}

void WSTRCONCATASSIGN( uint32** DST$1, uint32* SRC$1 )
{
	label$86:;
	int64 DST_LEN$1;
	__builtin_memset( &DST_LEN$1, 0, 8ll );
	int64 SRC_LEN$1;
	__builtin_memset( &SRC_LEN$1, 0, 8ll );
	if( SRC$1 != (uint32*)0ull ) goto label$89;
	{
		goto label$87;
	}
	label$89:;
	label$88:;
	int64 vr$3 = fb_WstrLen( SRC$1 );
	SRC_LEN$1 = vr$3;
	if( SRC_LEN$1 != 0ll ) goto label$91;
	{
		goto label$87;
	}
	label$91:;
	label$90:;
	if( *DST$1 != (uint32*)0ull ) goto label$93;
	{
		DST_LEN$1 = 0ll;
		void* vr$10 = XALLOCATE( (int32)((SRC_LEN$1 << 2ll) + 4ll) );
		*DST$1 = (uint32*)vr$10;
	}
	goto label$92;
	label$93:;
	{
		int64 vr$13 = fb_WstrLen( *DST$1 );
		DST_LEN$1 = vr$13;
		void* vr$19 = XREALLOCATE( *(void**)DST$1, (int32)(((DST_LEN$1 + SRC_LEN$1) << 2ll) + 4ll) );
		*DST$1 = (uint32*)vr$19;
	}
	label$92:;
	if( *DST$1 == (uint32*)0ull ) goto label$95;
	{
		uint32* vr$26 = fb_WstrAssign( (uint32*)((uint8*)*DST$1 + (DST_LEN$1 << 2ll)), 0ll, SRC$1 );
	}
	label$95:;
	label$94:;
	label$87:;
}

void WSTRCONCATASSIGNW( uint32** DST$1, uint8* SRC$1 )
{
	label$96:;
	int64 DST_LEN$1;
	__builtin_memset( &DST_LEN$1, 0, 8ll );
	int64 SRC_LEN$1;
	__builtin_memset( &SRC_LEN$1, 0, 8ll );
	if( SRC$1 != (uint8*)0ull ) goto label$99;
	{
		goto label$97;
	}
	label$99:;
	label$98:;
	int64 vr$3 = fb_StrLen( (void*)SRC$1, 0ll );
	SRC_LEN$1 = vr$3;
	if( SRC_LEN$1 != 0ll ) goto label$101;
	{
		goto label$97;
	}
	label$101:;
	label$100:;
	if( *DST$1 != (uint32*)0ull ) goto label$103;
	{
		DST_LEN$1 = 0ll;
		void* vr$10 = XALLOCATE( (int32)((SRC_LEN$1 << 2ll) + 4ll) );
		*DST$1 = (uint32*)vr$10;
	}
	goto label$102;
	label$103:;
	{
		int64 vr$13 = fb_WstrLen( *DST$1 );
		DST_LEN$1 = vr$13;
		void* vr$19 = XREALLOCATE( *(void**)DST$1, (int32)(((DST_LEN$1 + SRC_LEN$1) << 2ll) + 4ll) );
		*DST$1 = (uint32*)vr$19;
	}
	label$102:;
	if( *DST$1 == (uint32*)0ull ) goto label$105;
	{
		fb_WstrAssignFromA( (uint32*)((uint8*)*DST$1 + (DST_LEN$1 << 2ll)), 0ll, (void*)SRC$1, 0ll );
	}
	label$105:;
	label$104:;
	label$97:;
}

uint8* ZSTRDUP( uint8* S$1 )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$106:;
	uint8* DST$1;
	__builtin_memset( &DST$1, 0, 8ll );
	int64 vr$2 = fb_StrLen( (void*)S$1, 0ll );
	void* vr$5 = XALLOCATE( (int32)(vr$2 + 1ll) );
	DST$1 = (uint8*)vr$5;
	fb_StrAssign( (void*)DST$1, 0ll, (void*)S$1, 0ll, 0 );
	fb$result$1 = DST$1;
	label$107:;
	return fb$result$1;
}

uint32* WSTRDUP( uint32* S$1 )
{
	uint32* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$108:;
	uint32* DST$1;
	__builtin_memset( &DST$1, 0, 8ll );
	int64 vr$2 = fb_WstrLen( S$1 );
	void* vr$6 = XALLOCATE( (int32)((vr$2 << 2ll) + 4ll) );
	DST$1 = (uint32*)vr$6;
	uint32* vr$7 = fb_WstrAssign( DST$1, 0ll, S$1 );
	fb$result$1 = DST$1;
	label$109:;
	return fb$result$1;
}

FBSTRING* HREPLACE( uint8* ORGTEXT$1, uint8* OLDTEXT$1, uint8* NEWTEXT$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$110:;
	static int64 OLDLEN$1;
	static int64 NEWLEN$1;
	static int64 P$1;
	static FBSTRING TEXT$1;
	static FBSTRING REMTEXT$1;
	int64 vr$1 = fb_StrLen( (void*)OLDTEXT$1, 0ll );
	OLDLEN$1 = vr$1;
	int64 vr$2 = fb_StrLen( (void*)NEWTEXT$1, 0ll );
	NEWLEN$1 = vr$2;
	fb_StrAssign( (void*)&TEXT$1, -1ll, (void*)ORGTEXT$1, 0ll, 0 );
	P$1 = 0ll;
	label$112:;
	{
		FBSTRING TMP$76$2;
		FBSTRING* vr$3 = fb_StrAllocTempDescZ( OLDTEXT$1 );
		int64 vr$5 = fb_StrInstr( P$1 + 1ll, &TEXT$1, vr$3 );
		P$1 = vr$5;
		if( P$1 != 0ll ) goto label$116;
		{
			goto label$113;
		}
		label$116:;
		label$115:;
		FBSTRING* vr$8 = fb_StrMid( &TEXT$1, P$1 + OLDLEN$1, -1ll );
		FBSTRING* vr$9 = fb_StrAssign( (void*)&REMTEXT$1, -1ll, (void*)vr$8, -1ll, 0 );
		FBSTRING* vr$11 = fb_LEFT( &TEXT$1, P$1 + -1ll );
		FBSTRING* vr$12 = fb_StrAssign( (void*)&TEXT$1, -1ll, (void*)vr$11, -1ll, 0 );
		__builtin_memset( &TMP$76$2, 0, 24ll );
		FBSTRING* vr$15 = fb_StrConcat( &TMP$76$2, (void*)&TEXT$1, -1ll, (void*)NEWTEXT$1, 0ll );
		FBSTRING* vr$16 = fb_StrAssign( (void*)&TEXT$1, -1ll, (void*)vr$15, -1ll, 0 );
		FBSTRING* vr$17 = fb_StrConcatAssign( (void*)&TEXT$1, -1ll, (void*)&REMTEXT$1, -1ll, 0 );
		P$1 = (P$1 + NEWLEN$1) + -1ll;
	}
	label$114:;
	goto label$112;
	label$113:;
	FBSTRING* vr$21 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&TEXT$1, -1ll, 0 );
	label$111:;
	FBSTRING* vr$23 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$23;
}

uint32* HREPLACEW( uint32* ORGTEXT$1, uint32* OLDTEXT$1, uint32* NEWTEXT$1 )
{
	uint32* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$117:;
	static int64 OLDLEN$1;
	static int64 NEWLEN$1;
	static int64 P$1;
	static struct $8DWSTRING TEXT$1;
	static struct $8DWSTRING REMTEXT$1;
	int64 vr$1 = fb_WstrLen( OLDTEXT$1 );
	OLDLEN$1 = vr$1;
	int64 vr$2 = fb_WstrLen( NEWTEXT$1 );
	NEWLEN$1 = vr$2;
	DWSTRASSIGN( &TEXT$1, ORGTEXT$1 );
	P$1 = 0ll;
	label$119:;
	{
		uint32* TMP$77$2;
		uint32* TMP$78$2;
		int64 vr$4 = fb_WstrInstr( P$1 + 1ll, *(uint32**)&TEXT$1, OLDTEXT$1 );
		P$1 = vr$4;
		if( P$1 != 0ll ) goto label$123;
		{
			goto label$120;
		}
		label$123:;
		label$122:;
		uint32* vr$7 = fb_WstrMid( *(uint32**)&TEXT$1, P$1 + OLDLEN$1, -1ll );
		TMP$77$2 = vr$7;
		DWSTRASSIGN( &REMTEXT$1, TMP$77$2 );
		fb_WstrDelete( TMP$77$2 );
		uint32* vr$9 = fb_WstrLeft( *(uint32**)&TEXT$1, P$1 + -1ll );
		TMP$78$2 = vr$9;
		DWSTRASSIGN( &TEXT$1, TMP$78$2 );
		fb_WstrDelete( TMP$78$2 );
		DWSTRCONCATASSIGN( &TEXT$1, NEWTEXT$1 );
		DWSTRCONCATASSIGN( &TEXT$1, *(uint32**)&REMTEXT$1 );
		P$1 = (P$1 + NEWLEN$1) + -1ll;
	}
	label$121:;
	goto label$119;
	label$120:;
	fb$result$1 = *(uint32**)&TEXT$1;
	label$118:;
	return fb$result$1;
}

uint8* HREPLACECHAR( uint8* ORGTEXT$1, int64 OLDCHAR$1, int64 NEWCHAR$1 )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$124:;
	{
		int64 I$2;
		I$2 = 0ll;
		int64 TMP$79$2;
		int64 vr$1 = fb_StrLen( (void*)ORGTEXT$1, 0ll );
		TMP$79$2 = vr$1 + -1ll;
		goto label$126;
		label$129:;
		{
			if( (int64)*(uint8*)((uint8*)ORGTEXT$1 + I$2) != OLDCHAR$1 ) goto label$131;
			{
				*(uint8*)((uint8*)ORGTEXT$1 + I$2) = (uint8)NEWCHAR$1;
			}
			label$131:;
			label$130:;
		}
		label$127:;
		I$2 = I$2 + 1ll;
		label$126:;
		if( I$2 <= TMP$79$2 ) goto label$129;
		label$128:;
	}
	fb$result$1 = ORGTEXT$1;
	label$125:;
	return fb$result$1;
}

uint8* HREESCAPE( uint8* TEXT$1, int64* TEXTLEN$1, int64* ISUNICODE$1 )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$132:;
	static struct $8DZSTRING RES$1;
	static int64 CHAR$1;
	static int64 LGT$1;
	static int64 I$1;
	static int64 VALUE$1;
	static int64 ISNUMBER$1;
	static uint8* SRC$1;
	static uint8* DST$1;
	static uint8* SRC_END$1;
	*ISUNICODE$1 = 0ll;
	*TEXTLEN$1 = 0ll;
	int64 vr$3 = fb_StrLen( (void*)TEXT$1, 0ll );
	LGT$1 = vr$3;
	if( LGT$1 != 0ll ) goto label$135;
	{
		fb$result$1 = TEXT$1;
		goto label$133;
	}
	label$135:;
	label$134:;
	DZSTRALLOCATE( &RES$1, LGT$1 << 1ll );
	SRC$1 = TEXT$1;
	DST$1 = *(uint8**)&RES$1;
	SRC_END$1 = (uint8*)((uint8*)SRC$1 + LGT$1);
	label$136:;
	if( SRC$1 >= SRC_END$1 ) goto label$137;
	{
		CHAR$1 = (int64)*SRC$1;
		SRC$1 = (uint8*)((uint8*)SRC$1 + 1ll);
		if( CHAR$1 != 92ll ) goto label$139;
		{
			if( SRC$1 < SRC_END$1 ) goto label$141;
			{
				goto label$137;
				label$141:;
			}
			*DST$1 = (uint8)27u;
			DST$1 = (uint8*)((uint8*)DST$1 + 1ll);
			ISNUMBER$1 = 0ll;
			CHAR$1 = (int64)*SRC$1;
			SRC$1 = (uint8*)((uint8*)SRC$1 + 1ll);
			{
				if( CHAR$1 < 48ll ) goto label$143;
				if( CHAR$1 > 57ll ) goto label$143;
				label$144:;
				{
					ISNUMBER$1 = -1ll;
					VALUE$1 = CHAR$1 + -48ll;
					{
						I$1 = 2ll;
						label$148:;
						{
							if( SRC$1 < SRC_END$1 ) goto label$150;
							{
								goto label$147;
								label$150:;
							}
							CHAR$1 = (int64)*SRC$1;
							if( ((int64)-(CHAR$1 < 48ll) | (int64)-(CHAR$1 > 57ll)) == 0ll ) goto label$152;
							{
								goto label$147;
							}
							label$152:;
							label$151:;
							VALUE$1 = ((VALUE$1 * 10ll) + CHAR$1) + -48ll;
							SRC$1 = (uint8*)((uint8*)SRC$1 + 1ll);
						}
						label$146:;
						I$1 = I$1 + 1ll;
						label$145:;
						if( I$1 <= 3ll ) goto label$148;
						label$147:;
					}
				}
				goto label$142;
				label$143:;
				if( CHAR$1 == 38ll ) goto label$154;
				label$155:;
				if( CHAR$1 == 88ll ) goto label$154;
				label$156:;
				if( CHAR$1 != 120ll ) goto label$153;
				label$154:;
				{
					if( SRC$1 < SRC_END$1 ) goto label$158;
					{
						goto label$137;
						label$158:;
					}
					VALUE$1 = 0ll;
					if( CHAR$1 != 38ll ) goto label$160;
					{
						CHAR$1 = (int64)*SRC$1;
						SRC$1 = (uint8*)((uint8*)SRC$1 + 1ll);
					}
					goto label$159;
					label$160:;
					{
						CHAR$1 = 72ll;
					}
					label$159:;
					{
						uint64 TMP$80$6;
						TMP$80$6 = (uint64)CHAR$1;
						goto label$162;
						label$163:;
						{
							ISNUMBER$1 = -1ll;
							{
								I$1 = 1ll;
								label$167:;
								{
									if( SRC$1 < SRC_END$1 ) goto label$169;
									{
										goto label$166;
										label$169:;
									}
									CHAR$1 = (int64)*SRC$1;
									{
										if( CHAR$1 < 97ll ) goto label$173;
										if( CHAR$1 <= 102ll ) goto label$172;
										label$173:;
										if( CHAR$1 < 65ll ) goto label$174;
										if( CHAR$1 <= 70ll ) goto label$172;
										label$174:;
										if( CHAR$1 < 48ll ) goto label$171;
										if( CHAR$1 > 57ll ) goto label$171;
										label$172:;
										{
											CHAR$1 = CHAR$1 + -48ll;
											if( CHAR$1 <= 9ll ) goto label$176;
											{
												CHAR$1 = CHAR$1 + -7ll;
											}
											label$176:;
											label$175:;
											if( CHAR$1 <= 16ll ) goto label$178;
											{
												CHAR$1 = CHAR$1 + -32ll;
											}
											label$178:;
											label$177:;
											VALUE$1 = (VALUE$1 << 4ll) + CHAR$1;
										}
										goto label$170;
										label$171:;
										{
											goto label$166;
										}
										label$179:;
										label$170:;
									}
									SRC$1 = (uint8*)((uint8*)SRC$1 + 1ll);
								}
								label$165:;
								I$1 = I$1 + 1ll;
								label$164:;
								if( I$1 <= 2ll ) goto label$167;
								label$166:;
							}
						}
						goto label$161;
						label$180:;
						{
							ISNUMBER$1 = -1ll;
							{
								I$1 = 1ll;
								label$184:;
								{
									if( SRC$1 < SRC_END$1 ) goto label$186;
									{
										goto label$183;
										label$186:;
									}
									CHAR$1 = (int64)*SRC$1;
									if( ((int64)-(CHAR$1 < 48ll) | (int64)-(CHAR$1 > 55ll)) == 0ll ) goto label$188;
									{
										goto label$183;
									}
									label$188:;
									label$187:;
									VALUE$1 = ((VALUE$1 << 3ll) + CHAR$1) + -48ll;
									SRC$1 = (uint8*)((uint8*)SRC$1 + 1ll);
								}
								label$182:;
								I$1 = I$1 + 1ll;
								label$181:;
								if( I$1 <= 3ll ) goto label$184;
								label$183:;
							}
						}
						goto label$161;
						label$189:;
						{
							ISNUMBER$1 = -1ll;
							{
								I$1 = 1ll;
								label$193:;
								{
									if( SRC$1 < SRC_END$1 ) goto label$195;
									{
										goto label$192;
										label$195:;
									}
									CHAR$1 = (int64)*SRC$1;
									if( ((int64)-(CHAR$1 < 48ll) | (int64)-(CHAR$1 > 49ll)) == 0ll ) goto label$197;
									{
										goto label$192;
									}
									label$197:;
									label$196:;
									VALUE$1 = ((VALUE$1 << 1ll) + CHAR$1) + -48ll;
									SRC$1 = (uint8*)((uint8*)SRC$1 + 1ll);
								}
								label$191:;
								I$1 = I$1 + 1ll;
								label$190:;
								if( I$1 <= 8ll ) goto label$193;
								label$192:;
							}
						}
						goto label$161;
						label$162:;
						static const void* tmp$81[46ll] = {
							&&label$189,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$163,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$180,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$189,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$163,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$161,
							&&label$180,
						};
						if( TMP$80$6 < 66ll ) goto label$161;
						if( TMP$80$6 > 111ll ) goto label$161;
						goto *tmp$81[TMP$80$6 - 66ll];
						label$161:;
					}
				}
				goto label$142;
				label$153:;
				if( CHAR$1 != 97ll ) goto label$198;
				label$199:;
				{
					ISNUMBER$1 = -1ll;
					VALUE$1 = 7ll;
				}
				goto label$142;
				label$198:;
				if( CHAR$1 != 117ll ) goto label$200;
				label$201:;
				{
					*ISUNICODE$1 = -1ll;
					*DST$1 = (uint8)CHAR$1;
					DST$1 = (uint8*)((uint8*)DST$1 + 1ll);
					{
						I$1 = 1ll;
						label$205:;
						{
							fb_StrAssign( (void*)DST$1, 0ll, (void*)SRC$1, 0ll, 0 );
							DST$1 = (uint8*)((uint8*)DST$1 + 1ll);
							SRC$1 = (uint8*)((uint8*)SRC$1 + 1ll);
						}
						label$203:;
						I$1 = I$1 + 1ll;
						label$202:;
						if( I$1 <= 4ll ) goto label$205;
						label$204:;
					}
					*TEXTLEN$1 = *TEXTLEN$1 + 2ll;
					goto label$136;
				}
				goto label$142;
				label$200:;
				if( CHAR$1 != 85ll ) goto label$206;
				label$207:;
				{
					*ISUNICODE$1 = -1ll;
					*DST$1 = (uint8)85u;
					DST$1 = (uint8*)((uint8*)DST$1 + 1ll);
					{
						I$1 = 1ll;
						label$211:;
						{
							fb_StrAssign( (void*)DST$1, 0ll, (void*)SRC$1, 0ll, 0 );
							DST$1 = (uint8*)((uint8*)DST$1 + 1ll);
							SRC$1 = (uint8*)((uint8*)SRC$1 + 1ll);
						}
						label$209:;
						I$1 = I$1 + 1ll;
						label$208:;
						if( I$1 <= 4ll ) goto label$211;
						label$210:;
					}
					*DST$1 = (uint8)27u;
					*(uint8*)((uint8*)DST$1 + 1ll) = (uint8)85u;
					DST$1 = (uint8*)((uint8*)DST$1 + 2ll);
					{
						I$1 = 1ll;
						label$215:;
						{
							fb_StrAssign( (void*)DST$1, 0ll, (void*)SRC$1, 0ll, 0 );
							DST$1 = (uint8*)((uint8*)DST$1 + 1ll);
							SRC$1 = (uint8*)((uint8*)SRC$1 + 1ll);
						}
						label$213:;
						I$1 = I$1 + 1ll;
						label$212:;
						if( I$1 <= 4ll ) goto label$215;
						label$214:;
					}
					*TEXTLEN$1 = *TEXTLEN$1 + 4ll;
					goto label$136;
				}
				label$206:;
				label$142:;
			}
			if( ISNUMBER$1 == 0ll ) goto label$217;
			{
				if( (uint64)VALUE$1 <= 255ull ) goto label$219;
				{
					ERRREPORTWARN( 8ll, (uint8*)0ull, 1ll );
					VALUE$1 = 255ll;
				}
				label$219:;
				label$218:;
				if( VALUE$1 >= 8ll ) goto label$221;
				{
					LGT$1 = 1ll;
				}
				goto label$220;
				label$221:;
				if( VALUE$1 >= 64ll ) goto label$222;
				{
					LGT$1 = 2ll;
				}
				goto label$220;
				label$222:;
				{
					LGT$1 = 3ll;
				}
				label$220:;
				*DST$1 = (uint8)LGT$1;
				DST$1 = (uint8*)((uint8*)DST$1 + 1ll);
				FBSTRING* vr$125 = fb_OCT_l( (uint64)VALUE$1 );
				fb_StrAssign( (void*)DST$1, 0ll, (void*)vr$125, -1ll, 0 );
				DST$1 = (uint8*)((uint8*)DST$1 + LGT$1);
				*TEXTLEN$1 = *TEXTLEN$1 + 1ll;
				goto label$136;
			}
			label$217:;
			label$216:;
		}
		label$139:;
		label$138:;
		*DST$1 = (uint8)CHAR$1;
		DST$1 = (uint8*)((uint8*)DST$1 + 1ll);
		*TEXTLEN$1 = *TEXTLEN$1 + 1ll;
	}
	goto label$136;
	label$137:;
	*DST$1 = (uint8)0u;
	fb$result$1 = *(uint8**)&RES$1;
	label$133:;
	return fb$result$1;
}

uint32* HREESCAPEW( uint32* TEXT$1, int64* TEXTLEN$1 )
{
	uint32* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$223:;
	static struct $8DWSTRING RES$1;
	static int64 CHAR$1;
	static int64 LGT$1;
	static int64 I$1;
	static int64 ISNUMBER$1;
	static uint64 VALUE$1;
	static uint32* SRC$1;
	static uint32* DST$1;
	static uint32* SRC_END$1;
	*TEXTLEN$1 = 0ll;
	int64 vr$2 = fb_WstrLen( TEXT$1 );
	LGT$1 = vr$2;
	if( LGT$1 != 0ll ) goto label$226;
	{
		fb$result$1 = TEXT$1;
		goto label$224;
	}
	label$226:;
	label$225:;
	DWSTRALLOCATE( &RES$1, LGT$1 << 1ll );
	SRC$1 = TEXT$1;
	DST$1 = *(uint32**)&RES$1;
	SRC_END$1 = (uint32*)((uint8*)SRC$1 + (LGT$1 << 2ll));
	label$227:;
	if( SRC$1 >= SRC_END$1 ) goto label$228;
	{
		CHAR$1 = (int64)*SRC$1;
		SRC$1 = (uint32*)((uint8*)SRC$1 + 4ll);
		if( CHAR$1 != 92ll ) goto label$230;
		{
			if( SRC$1 < SRC_END$1 ) goto label$232;
			{
				goto label$228;
				label$232:;
			}
			*DST$1 = 27u;
			DST$1 = (uint32*)((uint8*)DST$1 + 4ll);
			ISNUMBER$1 = 0ll;
			CHAR$1 = (int64)*SRC$1;
			SRC$1 = (uint32*)((uint8*)SRC$1 + 4ll);
			{
				if( CHAR$1 < 48ll ) goto label$234;
				if( CHAR$1 > 57ll ) goto label$234;
				label$235:;
				{
					ISNUMBER$1 = -1ll;
					VALUE$1 = (uint64)(CHAR$1 + -48ll);
					{
						I$1 = 2ll;
						label$239:;
						{
							if( SRC$1 < SRC_END$1 ) goto label$241;
							{
								goto label$238;
								label$241:;
							}
							CHAR$1 = (int64)*SRC$1;
							if( ((int64)-(CHAR$1 < 48ll) | (int64)-(CHAR$1 > 57ll)) == 0ll ) goto label$243;
							{
								goto label$238;
							}
							label$243:;
							label$242:;
							VALUE$1 = (VALUE$1 * 10ull) + (uint64)(CHAR$1 + -48ll);
							SRC$1 = (uint32*)((uint8*)SRC$1 + 4ll);
						}
						label$237:;
						I$1 = I$1 + 1ll;
						label$236:;
						if( I$1 <= 5ll ) goto label$239;
						label$238:;
					}
				}
				goto label$233;
				label$234:;
				if( CHAR$1 == 38ll ) goto label$245;
				label$246:;
				if( CHAR$1 == 88ll ) goto label$245;
				label$247:;
				if( CHAR$1 != 120ll ) goto label$244;
				label$245:;
				{
					if( SRC$1 < SRC_END$1 ) goto label$249;
					{
						goto label$228;
						label$249:;
					}
					VALUE$1 = 0ull;
					if( CHAR$1 != 38ll ) goto label$251;
					{
						CHAR$1 = (int64)*SRC$1;
						SRC$1 = (uint32*)((uint8*)SRC$1 + 4ll);
					}
					goto label$250;
					label$251:;
					{
						CHAR$1 = 72ll;
					}
					label$250:;
					{
						uint64 TMP$82$6;
						TMP$82$6 = (uint64)CHAR$1;
						goto label$253;
						label$254:;
						{
							ISNUMBER$1 = -1ll;
							{
								I$1 = 1ll;
								label$258:;
								{
									if( SRC$1 < SRC_END$1 ) goto label$260;
									{
										goto label$257;
										label$260:;
									}
									CHAR$1 = (int64)*SRC$1;
									{
										if( CHAR$1 < 97ll ) goto label$264;
										if( CHAR$1 <= 102ll ) goto label$263;
										label$264:;
										if( CHAR$1 < 65ll ) goto label$265;
										if( CHAR$1 <= 70ll ) goto label$263;
										label$265:;
										if( CHAR$1 < 48ll ) goto label$262;
										if( CHAR$1 > 57ll ) goto label$262;
										label$263:;
										{
											CHAR$1 = CHAR$1 + -48ll;
											if( CHAR$1 <= 9ll ) goto label$267;
											{
												CHAR$1 = CHAR$1 + -7ll;
											}
											label$267:;
											label$266:;
											if( CHAR$1 <= 16ll ) goto label$269;
											{
												CHAR$1 = CHAR$1 + -32ll;
											}
											label$269:;
											label$268:;
											VALUE$1 = (VALUE$1 << 4ull) + (uint64)CHAR$1;
										}
										goto label$261;
										label$262:;
										{
											goto label$257;
										}
										label$270:;
										label$261:;
									}
									SRC$1 = (uint32*)((uint8*)SRC$1 + 4ll);
								}
								label$256:;
								I$1 = I$1 + 1ll;
								label$255:;
								if( I$1 <= 4ll ) goto label$258;
								label$257:;
							}
						}
						goto label$252;
						label$271:;
						{
							ISNUMBER$1 = -1ll;
							{
								I$1 = 1ll;
								label$275:;
								{
									if( SRC$1 < SRC_END$1 ) goto label$277;
									{
										goto label$274;
										label$277:;
									}
									CHAR$1 = (int64)*SRC$1;
									if( ((int64)-(CHAR$1 < 48ll) | (int64)-(CHAR$1 > 55ll)) == 0ll ) goto label$279;
									{
										goto label$274;
									}
									label$279:;
									label$278:;
									VALUE$1 = (VALUE$1 << 3ull) + (uint64)(CHAR$1 + -48ll);
									SRC$1 = (uint32*)((uint8*)SRC$1 + 4ll);
								}
								label$273:;
								I$1 = I$1 + 1ll;
								label$272:;
								if( I$1 <= 6ll ) goto label$275;
								label$274:;
							}
						}
						goto label$252;
						label$280:;
						{
							ISNUMBER$1 = -1ll;
							{
								I$1 = 1ll;
								label$284:;
								{
									if( SRC$1 < SRC_END$1 ) goto label$286;
									{
										goto label$283;
										label$286:;
									}
									CHAR$1 = (int64)*SRC$1;
									if( ((int64)-(CHAR$1 < 48ll) | (int64)-(CHAR$1 > 49ll)) == 0ll ) goto label$288;
									{
										goto label$283;
									}
									label$288:;
									label$287:;
									VALUE$1 = (VALUE$1 << 1ull) + (uint64)(CHAR$1 + -48ll);
									SRC$1 = (uint32*)((uint8*)SRC$1 + 4ll);
								}
								label$282:;
								I$1 = I$1 + 1ll;
								label$281:;
								if( I$1 <= 16ll ) goto label$284;
								label$283:;
							}
						}
						goto label$252;
						label$253:;
						static const void* tmp$84[46ll] = {
							&&label$280,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$254,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$271,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$280,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$254,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$252,
							&&label$271,
						};
						if( TMP$82$6 < 66ll ) goto label$252;
						if( TMP$82$6 > 111ll ) goto label$252;
						goto *tmp$84[TMP$82$6 - 66ll];
						label$252:;
					}
				}
				goto label$233;
				label$244:;
				if( CHAR$1 != 117ll ) goto label$289;
				label$290:;
				{
					*DST$1 = (uint32)CHAR$1;
					DST$1 = (uint32*)((uint8*)DST$1 + 4ll);
					{
						I$1 = 1ll;
						label$294:;
						{
							uint32* vr$91 = fb_WstrAssign( DST$1, 0ll, SRC$1 );
							DST$1 = (uint32*)((uint8*)DST$1 + 4ll);
							SRC$1 = (uint32*)((uint8*)SRC$1 + 4ll);
						}
						label$292:;
						I$1 = I$1 + 1ll;
						label$291:;
						if( I$1 <= 4ll ) goto label$294;
						label$293:;
					}
					*TEXTLEN$1 = *TEXTLEN$1 + 2ll;
					goto label$227;
				}
				goto label$233;
				label$289:;
				if( CHAR$1 != 85ll ) goto label$295;
				label$296:;
				{
					*DST$1 = 85u;
					DST$1 = (uint32*)((uint8*)DST$1 + 4ll);
					{
						I$1 = 1ll;
						label$300:;
						{
							uint32* vr$102 = fb_WstrAssign( DST$1, 0ll, SRC$1 );
							DST$1 = (uint32*)((uint8*)DST$1 + 4ll);
							SRC$1 = (uint32*)((uint8*)SRC$1 + 4ll);
						}
						label$298:;
						I$1 = I$1 + 1ll;
						label$297:;
						if( I$1 <= 4ll ) goto label$300;
						label$299:;
					}
					*DST$1 = 27u;
					*(uint32*)((uint8*)DST$1 + 4ll) = 85u;
					DST$1 = (uint32*)((uint8*)DST$1 + 8ll);
					{
						I$1 = 1ll;
						label$304:;
						{
							uint32* vr$110 = fb_WstrAssign( DST$1, 0ll, SRC$1 );
							DST$1 = (uint32*)((uint8*)DST$1 + 4ll);
							SRC$1 = (uint32*)((uint8*)SRC$1 + 4ll);
						}
						label$302:;
						I$1 = I$1 + 1ll;
						label$301:;
						if( I$1 <= 4ll ) goto label$304;
						label$303:;
					}
					*TEXTLEN$1 = *TEXTLEN$1 + 4ll;
					goto label$227;
				}
				label$295:;
				label$233:;
			}
			if( ISNUMBER$1 == 0ll ) goto label$306;
			{
				uint32* TMP$83$4;
				if( VALUE$1 <= 65535ull ) goto label$308;
				{
					ERRREPORTWARN( 8ll, (uint8*)0ull, 1ll );
					VALUE$1 = 65535ull;
				}
				label$308:;
				label$307:;
				LGT$1 = 1ll;
				label$309:;
				if( VALUE$1 <= 7ull ) goto label$310;
				{
					VALUE$1 = VALUE$1 >> 3ll;
					LGT$1 = LGT$1 + 1ll;
				}
				goto label$309;
				label$310:;
				*DST$1 = (uint32)LGT$1;
				DST$1 = (uint32*)((uint8*)DST$1 + 4ll);
				uint32* vr$126 = fb_WstrOct_l( VALUE$1 );
				TMP$83$4 = vr$126;
				uint32* vr$127 = fb_WstrAssign( DST$1, 0ll, TMP$83$4 );
				fb_WstrDelete( TMP$83$4 );
				DST$1 = (uint32*)((uint8*)DST$1 + (LGT$1 << 2ll));
				*TEXTLEN$1 = *TEXTLEN$1 + 1ll;
				goto label$227;
			}
			label$306:;
			label$305:;
		}
		label$230:;
		label$229:;
		*DST$1 = (uint32)CHAR$1;
		DST$1 = (uint32*)((uint8*)DST$1 + 4ll);
		*TEXTLEN$1 = *TEXTLEN$1 + 1ll;
	}
	goto label$227;
	label$228:;
	*DST$1 = 0u;
	fb$result$1 = *(uint32**)&RES$1;
	label$224:;
	return fb$result$1;
}

uint8* HESCAPE( uint8* TEXT$1 )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$311:;
	static struct $8DZSTRING RES$1;
	static int64 C$1;
	static int64 OCTLEN$1;
	static int64 LGT$1;
	static uint8* SRC$1;
	static uint8* SRC_END$1;
	static uint8* DST$1;
	OCTLEN$1 = 0ll;
	int64 vr$1 = fb_StrLen( (void*)TEXT$1, 0ll );
	LGT$1 = vr$1;
	if( LGT$1 != 0ll ) goto label$314;
	{
		fb$result$1 = TEXT$1;
		goto label$312;
	}
	label$314:;
	label$313:;
	DZSTRALLOCATE( &RES$1, LGT$1 << 2ll );
	SRC$1 = TEXT$1;
	DST$1 = *(uint8**)&RES$1;
	SRC_END$1 = (uint8*)((uint8*)SRC$1 + LGT$1);
	label$315:;
	if( SRC$1 >= SRC_END$1 ) goto label$316;
	{
		C$1 = (int64)*SRC$1;
		SRC$1 = (uint8*)((uint8*)SRC$1 + 1ll);
		{
			if( C$1 == 92ll ) goto label$319;
			label$320:;
			if( C$1 != 34ll ) goto label$318;
			label$319:;
			{
				*DST$1 = (uint8)92u;
				DST$1 = (uint8*)((uint8*)DST$1 + 1ll);
			}
			goto label$317;
			label$318:;
			if( C$1 != 27ll ) goto label$321;
			label$322:;
			{
				*DST$1 = (uint8)92u;
				DST$1 = (uint8*)((uint8*)DST$1 + 1ll);
				if( SRC$1 < SRC_END$1 ) goto label$324;
				{
					goto label$316;
					label$324:;
				}
				C$1 = (int64)*SRC$1;
				SRC$1 = (uint8*)((uint8*)SRC$1 + 1ll);
				if( ((int64)-(C$1 >= 1ll) & (int64)-(C$1 <= 3ll)) == 0ll ) goto label$326;
				{
					OCTLEN$1 = C$1;
					if( SRC$1 < SRC_END$1 ) goto label$328;
					{
						goto label$316;
						label$328:;
					}
					C$1 = (int64)*SRC$1;
					SRC$1 = (uint8*)((uint8*)SRC$1 + 1ll);
				}
				label$326:;
				label$325:;
			}
			goto label$317;
			label$321:;
			if( C$1 < 0ll ) goto label$331;
			if( C$1 <= 31ll ) goto label$330;
			label$331:;
			if( C$1 < 128ll ) goto label$329;
			if( C$1 > 255ll ) goto label$329;
			label$330:;
			{
				*DST$1 = (uint8)92u;
				DST$1 = (uint8*)((uint8*)DST$1 + 1ll);
				if( C$1 >= 8ll ) goto label$333;
				{
					C$1 = C$1 + 48ll;
				}
				goto label$332;
				label$333:;
				if( C$1 >= 64ll ) goto label$334;
				{
					*DST$1 = (uint8)((C$1 >> 3ll) + 48ll);
					DST$1 = (uint8*)((uint8*)DST$1 + 1ll);
					C$1 = (C$1 & 7ll) + 48ll;
				}
				goto label$332;
				label$334:;
				{
					*DST$1 = (uint8)((C$1 >> 6ll) + 48ll);
					*(uint8*)((uint8*)DST$1 + 1ll) = (uint8)(((C$1 & 56ll) >> 3ll) + 48ll);
					DST$1 = (uint8*)((uint8*)DST$1 + 2ll);
					C$1 = (C$1 & 7ll) + 48ll;
				}
				label$332:;
			}
			label$329:;
			label$317:;
		}
		*DST$1 = (uint8)C$1;
		DST$1 = (uint8*)((uint8*)DST$1 + 1ll);
		if( OCTLEN$1 <= 0ll ) goto label$336;
		{
			OCTLEN$1 = OCTLEN$1 + -1ll;
			if( OCTLEN$1 != 0ll ) goto label$338;
			{
				*DST$1 = (uint8)34u;
				*(uint8*)((uint8*)DST$1 + 1ll) = (uint8)34u;
				DST$1 = (uint8*)((uint8*)DST$1 + 2ll);
			}
			label$338:;
			label$337:;
		}
		label$336:;
		label$335:;
	}
	goto label$315;
	label$316:;
	*DST$1 = (uint8)0u;
	fb$result$1 = *(uint8**)&RES$1;
	label$312:;
	return fb$result$1;
}

int64 HHASESCAPE( uint8* TEXT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$351:;
	static uint64 CHAR$1;
	static int64 LGT$1;
	int64 vr$1 = fb_StrLen( (void*)TEXT$1, 0ll );
	LGT$1 = vr$1;
	label$353:;
	if( LGT$1 <= 0ll ) goto label$354;
	{
		if( (int64)*TEXT$1 != 92ll ) goto label$356;
		{
			TEXT$1 = (uint8*)((uint8*)TEXT$1 + 1ll);
			CHAR$1 = (uint64)*TEXT$1;
			{
				uint64 TMP$94$4;
				TMP$94$4 = CHAR$1;
				goto label$358;
				label$359:;
				{
					fb$result$1 = -1ll;
					goto label$352;
				}
				goto label$357;
				label$358:;
				static const void* tmp$95[85ll] = {
					&&label$359,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$359,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$359,
					&&label$359,
					&&label$359,
					&&label$359,
					&&label$359,
					&&label$359,
					&&label$359,
					&&label$359,
					&&label$359,
					&&label$359,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$359,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$359,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$359,
					&&label$359,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$359,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$359,
					&&label$357,
					&&label$359,
					&&label$357,
					&&label$357,
					&&label$357,
					&&label$359,
					&&label$357,
					&&label$359,
					&&label$359,
					&&label$359,
				};
				if( TMP$94$4 < 34ll ) goto label$357;
				if( TMP$94$4 > 118ll ) goto label$357;
				goto *tmp$95[TMP$94$4 - 34ll];
				label$357:;
			}
		}
		label$356:;
		label$355:;
		TEXT$1 = (uint8*)((uint8*)TEXT$1 + 1ll);
		LGT$1 = LGT$1 + -1ll;
	}
	goto label$353;
	label$354:;
	fb$result$1 = 0ll;
	label$352:;
	return fb$result$1;
}

int64 HHASESCAPEW( uint32* TEXT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$360:;
	static uint64 CHAR$1;
	static int64 LGT$1;
	int64 vr$1 = fb_WstrLen( TEXT$1 );
	LGT$1 = vr$1;
	label$362:;
	if( LGT$1 <= 0ll ) goto label$363;
	{
		if( (int64)*TEXT$1 != 92ll ) goto label$365;
		{
			TEXT$1 = (uint32*)((uint8*)TEXT$1 + 4ll);
			CHAR$1 = (uint64)*TEXT$1;
			{
				uint64 TMP$96$4;
				TMP$96$4 = CHAR$1;
				goto label$367;
				label$368:;
				{
					fb$result$1 = -1ll;
					goto label$361;
				}
				goto label$366;
				label$367:;
				static const void* tmp$97[85ll] = {
					&&label$368,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$368,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$368,
					&&label$368,
					&&label$368,
					&&label$368,
					&&label$368,
					&&label$368,
					&&label$368,
					&&label$368,
					&&label$368,
					&&label$368,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$368,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$368,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$368,
					&&label$368,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$368,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$368,
					&&label$366,
					&&label$368,
					&&label$366,
					&&label$366,
					&&label$366,
					&&label$368,
					&&label$366,
					&&label$368,
					&&label$368,
					&&label$368,
				};
				if( TMP$96$4 < 34ll ) goto label$366;
				if( TMP$96$4 > 118ll ) goto label$366;
				goto *tmp$97[TMP$96$4 - 34ll];
				label$366:;
			}
		}
		label$365:;
		label$364:;
		TEXT$1 = (uint32*)((uint8*)TEXT$1 + 4ll);
		LGT$1 = LGT$1 + -1ll;
	}
	goto label$362;
	label$363:;
	fb$result$1 = 0ll;
	label$361:;
	return fb$result$1;
}

uint8* HESCAPEW( uint32* TEXT$1 )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$379:;
	static struct $8DZSTRING RES$1;
	static uint64 CHAR$1;
	static uint64 C$1;
	static int64 LGT$1;
	static int64 I$1;
	static int64 WCHARLEN$1;
	static uint32* SRC$1;
	static uint32* SRC_END$1;
	static uint8* DST$1;
	WCHARLEN$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + 344ll);
	int64 vr$1 = fb_WstrLen( TEXT$1 );
	LGT$1 = vr$1;
	if( LGT$1 != 0ll ) goto label$382;
	{
		fb$result$1 = (uint8*)0ull;
		goto label$380;
	}
	label$382:;
	label$381:;
	DZSTRALLOCATE( &RES$1, (LGT$1 * WCHARLEN$1) << 2ll );
	SRC$1 = TEXT$1;
	DST$1 = *(uint8**)&RES$1;
	SRC_END$1 = (uint32*)((uint8*)SRC$1 + (LGT$1 << 2ll));
	label$383:;
	if( SRC$1 >= SRC_END$1 ) goto label$384;
	{
		CHAR$1 = (uint64)*SRC$1;
		SRC$1 = (uint32*)((uint8*)SRC$1 + 4ll);
		if( CHAR$1 != 27ull ) goto label$386;
		{
			if( SRC$1 < SRC_END$1 ) goto label$388;
			{
				goto label$384;
				label$388:;
			}
			CHAR$1 = (uint64)*SRC$1;
			SRC$1 = (uint32*)((uint8*)SRC$1 + 4ll);
			if( ((int64)-(CHAR$1 >= 1ull) & (int64)-(CHAR$1 <= 6ull)) == 0ll ) goto label$390;
			{
				I$1 = (int64)CHAR$1;
				CHAR$1 = 0ull;
				if( (uint32*)((uint8*)SRC$1 + (I$1 << 2ll)) <= SRC_END$1 ) goto label$392;
				{
					goto label$384;
					label$392:;
				}
				label$393:;
				if( I$1 <= 0ll ) goto label$394;
				{
					CHAR$1 = (CHAR$1 << 3ull) + (uint64)((int64)*SRC$1 + -48ll);
					SRC$1 = (uint32*)((uint8*)SRC$1 + 4ll);
					I$1 = I$1 + -1ll;
				}
				goto label$393;
				label$394:;
			}
			goto label$389;
			label$390:;
			{
				if( CHAR$1 != 117ull ) goto label$396;
				{
					if( (uint32*)((uint8*)SRC$1 + 16ll) <= SRC_END$1 ) goto label$398;
					{
						goto label$384;
						label$398:;
					}
					uint64 vr$34 = HU16TOWCHAR( SRC$1 );
					CHAR$1 = vr$34;
					SRC$1 = (uint32*)((uint8*)SRC$1 + 16ll);
				}
				goto label$395;
				label$396:;
				{
					int64 vr$36 = HREMAPCHAR( (int64)CHAR$1 );
					CHAR$1 = (uint64)vr$36;
				}
				label$395:;
			}
			label$389:;
		}
		label$386:;
		label$385:;
		{
			I$1 = 1ll;
			int64 TMP$99$3;
			TMP$99$3 = WCHARLEN$1;
			goto label$399;
			label$402:;
			{
				*DST$1 = (uint8)92u;
				DST$1 = (uint8*)((uint8*)DST$1 + 1ll);
				C$1 = CHAR$1 & 255ull;
				if( C$1 >= 8ull ) goto label$404;
				{
					*DST$1 = (uint8)(C$1 + 48ull);
					DST$1 = (uint8*)((uint8*)DST$1 + 1ll);
				}
				goto label$403;
				label$404:;
				if( C$1 >= 64ull ) goto label$405;
				{
					*DST$1 = (uint8)((C$1 >> 3ll) + 48ull);
					*(uint8*)((uint8*)DST$1 + 1ll) = (uint8)((C$1 & 7ull) + 48ull);
					DST$1 = (uint8*)((uint8*)DST$1 + 2ll);
				}
				goto label$403;
				label$405:;
				{
					*DST$1 = (uint8)((C$1 >> 6ll) + 48ull);
					*(uint8*)((uint8*)DST$1 + 1ll) = (uint8)(((C$1 & 56ull) >> 3ll) + 48ull);
					*(uint8*)((uint8*)DST$1 + 2ll) = (uint8)((C$1 & 7ull) + 48ull);
					DST$1 = (uint8*)((uint8*)DST$1 + 3ll);
				}
				label$403:;
				CHAR$1 = CHAR$1 >> 8ll;
			}
			label$400:;
			I$1 = I$1 + 1ll;
			label$399:;
			if( I$1 <= TMP$99$3 ) goto label$402;
			label$401:;
		}
	}
	goto label$383;
	label$384:;
	*DST$1 = (uint8)0u;
	fb$result$1 = *(uint8**)&RES$1;
	label$380:;
	return fb$result$1;
}

uint8* HUNESCAPE( uint8* TEXT$1 )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$406:;
	static struct $8DZSTRING RES$1;
	static int64 CHAR$1;
	static int64 LGT$1;
	static int64 I$1;
	static uint8* SRC$1;
	static uint8* DST$1;
	static uint8* SRC_END$1;
	int64 vr$1 = fb_StrLen( (void*)TEXT$1, 0ll );
	LGT$1 = vr$1;
	if( LGT$1 != 0ll ) goto label$409;
	{
		fb$result$1 = TEXT$1;
		goto label$407;
	}
	label$409:;
	label$408:;
	DZSTRALLOCATE( &RES$1, LGT$1 );
	SRC$1 = TEXT$1;
	DST$1 = *(uint8**)&RES$1;
	SRC_END$1 = (uint8*)((uint8*)SRC$1 + LGT$1);
	label$410:;
	if( SRC$1 >= SRC_END$1 ) goto label$411;
	{
		CHAR$1 = (int64)*SRC$1;
		SRC$1 = (uint8*)((uint8*)SRC$1 + 1ll);
		if( CHAR$1 != 27ll ) goto label$413;
		{
			if( SRC$1 < SRC_END$1 ) goto label$415;
			{
				goto label$411;
				label$415:;
			}
			CHAR$1 = (int64)*SRC$1;
			SRC$1 = (uint8*)((uint8*)SRC$1 + 1ll);
			if( ((int64)-(CHAR$1 >= 1ll) & (int64)-(CHAR$1 <= 3ll)) == 0ll ) goto label$417;
			{
				I$1 = CHAR$1;
				CHAR$1 = 0ll;
				label$418:;
				if( I$1 <= 0ll ) goto label$419;
				{
					CHAR$1 = ((CHAR$1 << 3ll) + (int64)*SRC$1) + -48ll;
					SRC$1 = (uint8*)((uint8*)SRC$1 + 1ll);
					I$1 = I$1 + -1ll;
				}
				goto label$418;
				label$419:;
			}
			goto label$416;
			label$417:;
			{
				int64 vr$25 = HREMAPCHAR( CHAR$1 );
				CHAR$1 = vr$25;
			}
			label$416:;
		}
		label$413:;
		label$412:;
		*DST$1 = (uint8)CHAR$1;
		DST$1 = (uint8*)((uint8*)DST$1 + 1ll);
	}
	goto label$410;
	label$411:;
	*DST$1 = (uint8)0u;
	fb$result$1 = *(uint8**)&RES$1;
	label$407:;
	return fb$result$1;
}

uint32* HUNESCAPEW( uint32* TEXT$1 )
{
	uint32* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$420:;
	static struct $8DWSTRING RES$1;
	static int64 CHAR$1;
	static int64 LGT$1;
	static int64 I$1;
	static uint32* SRC$1;
	static uint32* DST$1;
	static uint32* SRC_END$1;
	int64 vr$1 = fb_WstrLen( TEXT$1 );
	LGT$1 = vr$1;
	if( LGT$1 != 0ll ) goto label$423;
	{
		fb$result$1 = TEXT$1;
		goto label$421;
	}
	label$423:;
	label$422:;
	DWSTRALLOCATE( &RES$1, LGT$1 );
	SRC$1 = TEXT$1;
	DST$1 = *(uint32**)&RES$1;
	SRC_END$1 = (uint32*)((uint8*)SRC$1 + (LGT$1 << 2ll));
	label$424:;
	if( SRC$1 >= SRC_END$1 ) goto label$425;
	{
		CHAR$1 = (int64)*SRC$1;
		SRC$1 = (uint32*)((uint8*)SRC$1 + 4ll);
		if( CHAR$1 != 27ll ) goto label$427;
		{
			if( SRC$1 < SRC_END$1 ) goto label$429;
			{
				goto label$425;
				label$429:;
			}
			CHAR$1 = (int64)*SRC$1;
			SRC$1 = (uint32*)((uint8*)SRC$1 + 4ll);
			if( ((int64)-(CHAR$1 >= 1ll) & (int64)-(CHAR$1 <= 6ll)) == 0ll ) goto label$431;
			{
				I$1 = CHAR$1;
				CHAR$1 = 0ll;
				label$432:;
				if( I$1 <= 0ll ) goto label$433;
				{
					CHAR$1 = ((CHAR$1 << 3ll) + (int64)*SRC$1) + -48ll;
					SRC$1 = (uint32*)((uint8*)SRC$1 + 4ll);
					I$1 = I$1 + -1ll;
				}
				goto label$432;
				label$433:;
			}
			goto label$430;
			label$431:;
			{
				if( (uint64)CHAR$1 != 117ull ) goto label$435;
				{
					if( (uint32*)((uint8*)SRC$1 + 16ll) <= SRC_END$1 ) goto label$437;
					{
						goto label$425;
						label$437:;
					}
					uint64 vr$29 = HU16TOWCHAR( SRC$1 );
					CHAR$1 = (int64)vr$29;
					SRC$1 = (uint32*)((uint8*)SRC$1 + 16ll);
				}
				goto label$434;
				label$435:;
				{
					int64 vr$31 = HREMAPCHAR( CHAR$1 );
					CHAR$1 = vr$31;
				}
				label$434:;
			}
			label$430:;
		}
		label$427:;
		label$426:;
		*DST$1 = (uint32)CHAR$1;
		DST$1 = (uint32*)((uint8*)DST$1 + 4ll);
	}
	goto label$424;
	label$425:;
	*DST$1 = 0u;
	fb$result$1 = *(uint32**)&RES$1;
	label$421:;
	return fb$result$1;
}

int64 HCHARNEEDSESCAPING( int64 CH$1, int64 QUOTECHAR$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$438:;
	fb$result$1 = (((int64)-(CH$1 < 32ll) | (int64)-(CH$1 >= 127ll)) | (int64)-((uint64)CH$1 == 92ull)) | (int64)-(CH$1 == QUOTECHAR$1);
	label$439:;
	return fb$result$1;
}

int64 HISVALIDHEXDIGIT( int64 CH$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$440:;
	fb$result$1 = (((int64)-((uint64)CH$1 >= 48ull) & (int64)-((uint64)CH$1 <= 57ull)) | ((int64)-((uint64)CH$1 >= 97ull) & (int64)-((uint64)CH$1 <= 102ull))) | ((int64)-((uint64)CH$1 >= 65ull) & (int64)-((uint64)CH$1 <= 70ull));
	label$441:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__hlpzstr( void )
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

static int64 HREMAPCHAR( int64 CHAR$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$339:;
	{
		uint64 TMP$85$2;
		TMP$85$2 = (uint64)CHAR$1;
		goto label$342;
		label$343:;
		{
			fb$result$1 = 13ll;
		}
		goto label$341;
		label$344:;
		{
			fb$result$1 = 10ll;
		}
		goto label$341;
		label$345:;
		{
			fb$result$1 = 9ll;
		}
		goto label$341;
		label$346:;
		{
			fb$result$1 = 8ll;
		}
		goto label$341;
		label$347:;
		{
			fb$result$1 = 7ll;
		}
		goto label$341;
		label$348:;
		{
			fb$result$1 = 12ll;
		}
		goto label$341;
		label$349:;
		{
			fb$result$1 = 11ll;
		}
		goto label$341;
		label$350:;
		{
			fb$result$1 = CHAR$1;
		}
		goto label$341;
		label$342:;
		static const void* tmp$104[22ll] = {
			&&label$347,
			&&label$346,
			&&label$350,
			&&label$350,
			&&label$350,
			&&label$348,
			&&label$350,
			&&label$350,
			&&label$350,
			&&label$350,
			&&label$350,
			&&label$344,
			&&label$350,
			&&label$344,
			&&label$350,
			&&label$350,
			&&label$350,
			&&label$343,
			&&label$350,
			&&label$345,
			&&label$350,
			&&label$349,
		};
		if( TMP$85$2 < 97ll ) goto label$350;
		if( TMP$85$2 > 118ll ) goto label$350;
		goto *tmp$104[TMP$85$2 - 97ll];
		label$341:;
	}
	label$340:;
	return fb$result$1;
}

static uint64 HU16TOWCHAR( uint32* SRC$1 )
{
	uint64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$369:;
	static uint64 CHAR$1;
	static uint64 C$1;
	static int64 I$1;
	CHAR$1 = 0ull;
	{
		I$1 = 1ll;
		label$374:;
		{
			C$1 = (uint64)((int64)*SRC$1 + -48ll);
			SRC$1 = (uint32*)((uint8*)SRC$1 + 4ll);
			if( C$1 <= 9ull ) goto label$376;
			{
				C$1 = C$1 + 18446744073709551609ull;
			}
			label$376:;
			label$375:;
			if( C$1 <= 16ull ) goto label$378;
			{
				C$1 = C$1 + 18446744073709551584ull;
			}
			label$378:;
			label$377:;
			CHAR$1 = (CHAR$1 << 4ull) | C$1;
		}
		label$372:;
		I$1 = I$1 + 1ll;
		label$371:;
		if( I$1 <= 4ll ) goto label$374;
		label$373:;
	}
	fb$result$1 = CHAR$1;
	label$370:;
	return fb$result$1;
}

// Total compilation time: 0.03505706635769457 seconds.
