// Compilation of FreeBASIC-1.01.0-source/src/compiler/symb.bas started at 16:30:15 on 02-28-2015

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
struct $5TPOOL {
	int64 CHUNKS;
	int64 CHUNKSIZE;
	struct $5TLIST* CHUNKTB;
};
__FB_STATIC_ASSERT( sizeof( struct $5TPOOL ) == 24 );
typedef int64 $12FB_SYMBCLASS;
typedef int64 $13FB_SYMBATTRIB;
typedef int64 $12FB_SYMBSTATS;
struct $9FB_SYMBID {
	uint8* NAME;
	uint8* ALIAS;
	uint8* MANGLED;
};
__FB_STATIC_ASSERT( sizeof( struct $9FB_SYMBID ) == 24 );
typedef int64 $11FB_DATATYPE;
struct $8FBSYMBOL;
typedef int64 $13AST_NODECLASS;
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
typedef int64 $11FB_FUNCMODE;
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
typedef int64 $6AST_OP;
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
typedef int64 $10FB_SYMBOPT;
typedef int64 $11FB_MANGLING;
typedef int64 $8FB_TOKEN;
typedef void (*tmp$40)( struct $8FBSYMBOL* );
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
void free( void* );
void* memset( void*, int32, uint64 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
FBSTRING* fb_StrConcatAssign( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAllocTempResult( FBSTRING* );
FBSTRING* fb_LongintToStr( int64 );
int64 fb_StrLen( void*, int64 );
static void fb_ctor__symb( void ) __attribute__(( constructor ));
void* XALLOCATE( int32 );
void LISTINIT( struct $5TLIST*, int64, int64, $10LIST_FLAGS );
void LISTEND( struct $5TLIST* );
void* LISTNEWNODE( struct $5TLIST* );
void LISTDELNODE( struct $5TLIST*, void* );
void HASHINIT( struct $5THASH*, int64, int64 );
void HASHEND( struct $5THASH* );
uint64 HASHHASH( uint8* );
void* HASHLOOKUPEX( struct $5THASH*, uint8*, uint64 );
struct $8HASHITEM* HASHADD( struct $5THASH*, uint8*, void*, uint64 );
void HASHDEL( struct $5THASH*, struct $8HASHITEM*, uint64 );
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void POOLINIT( struct $5TPOOL*, int64, int64, int64 );
void POOLEND( struct $5TPOOL* );
void* POOLNEWITEM( struct $5TPOOL*, int64 );
void POOLDELITEM( struct $5TPOOL*, void* );
void SYMBDATAINIT( void );
struct $10FBSYMCHAIN* SYMBLOOKUPAT( struct $8FBSYMBOL*, uint8*, int64, int64 );
struct $8FBSYMBOL* SYMBFINDBYCLASS( struct $10FBSYMCHAIN*, int64 );
struct $8FBSYMBOL* SYMBFINDVARBYSUFFIX( struct $10FBSYMCHAIN*, int64 );
struct $8FBSYMBOL* SYMBFINDVARBYDEFTYPE( struct $10FBSYMCHAIN*, int64 );
int64 SYMBPARAMISSAME( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
int64 SYMBAREPROCMODESEQUAL( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
void SYMBGETDESCTYPEARRAYDTYPE( struct $8FBSYMBOL*, int64*, struct $8FBSYMBOL** );
int64 SYMBGETDESCTYPEDIMENSIONS( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBADDARRAYDESCRIPTORTYPE( int64, int64, struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBADDPROCPTRFROMFUNCTION( struct $8FBSYMBOL* );
int64 SYMBCALCPARAMLEN( int64, struct $8FBSYMBOL*, $12FB_PARAMMODE );
void SYMBADDTOFWDREF( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
void SYMBREMOVEFROMFWDREF( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
void SYMBDELSYMBOL( struct $8FBSYMBOL*, int64 );
int64 SYMBDELDEFINE( struct $8FBSYMBOL* );
void SYMBDELLABEL( struct $8FBSYMBOL* );
void SYMBDELVAR( struct $8FBSYMBOL*, int64 );
void SYMBDELPROTOTYPE( struct $8FBSYMBOL* );
void SYMBDELENUM( struct $8FBSYMBOL* );
void SYMBDELSTRUCT( struct $8FBSYMBOL* );
void SYMBDELCONST( struct $8FBSYMBOL* );
void SYMBDELSCOPE( struct $8FBSYMBOL* );
void SYMBDELNAMESPACE( struct $8FBSYMBOL* );
void SYMBFREESYMBOL( struct $8FBSYMBOL* );
void SYMBFREESYMBOL_REMONLY( struct $8FBSYMBOL* );
void SYMBFREESYMBOL_UNLINKONLY( struct $8FBSYMBOL* );
void SYMBDELFROMHASH( struct $8FBSYMBOL* );
void SYMBDELFROMCHAINLIST( struct $8FBSYMBOL* );
void SYMBRECALCLEN( struct $8FBSYMBOL* );
int64 SYMBCALCLEN( int64, struct $8FBSYMBOL* );
int64 SYMBISEQUAL( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
int64 TYPEHASCTOR( int64, struct $8FBSYMBOL* );
int64 TYPEHASDEFCTOR( int64, struct $8FBSYMBOL* );
int64 TYPEHASDTOR( int64, struct $8FBSYMBOL* );
void SYMBHASHLISTADD( struct $8FBHASHTB* );
void SYMBNAMESPACEREMOVE( struct $8FBSYMBOL*, int64 );
int64 SYMBCANDUPLICATE( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
FBSTRING* SYMBPROCPTRTOSTR( struct $8FBSYMBOL* );
int64 SYMBGETDEFTYPE( uint8* );
struct $8FBSYMBOL* SYMBCLONECONST( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBCLONEVAR( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBCLONELABEL( struct $8FBSYMBOL* );
int64 SYMBVARCHECKACCESS( struct $8FBSYMBOL* );
int64 SYMBGETUDTBASELEVEL( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
void SYMBPROCRECALCREALTYPE( struct $8FBSYMBOL* );
void HUCASE( uint8*, uint8* );
void SYMBDELGLOBALTB( void );
void SYMBKEYWORDINIT( void );
void SYMBDEFINEINIT( int64 );
void SYMBDEFINEEND( void );
void SYMBFWDREFINIT( void );
void SYMBFWDREFEND( void );
void SYMBVARINIT( void );
void SYMBVAREND( void );
void SYMBPROCINIT( void );
void SYMBPROCEND( void );
void SYMBMANGLEINIT( void );
void SYMBMANGLEEND( void );
void SYMBCOMPINIT( void );
void SYMBCOMPEND( void );
void SYMBCOMPRTTIINIT( void );
void SYMBCOMPRTTIEND( void );
void SYMBINITSYMBOLS( void );
static void HINITDEFTYPETB( void );
static struct $10FBSYMCHAIN* CHAINPOOLNEXT( void );
static struct $10FBSYMCHAIN* HLOOKUPIMPORTHASH( struct $8FBSYMBOL*, uint8*, uint64 );
static struct $10FBSYMCHAIN* HLOOKUPIMPORTLIST( struct $8FBSYMBOL*, uint8*, uint64 );
static void HFOREACHGLOBAL( struct $8FBSYMBOL*, int64, tmp$40 );
struct $12AST_PROC_CTX {
	struct $7ASTNODE* HEAD;
	struct $7ASTNODE* TAIL;
	struct $7ASTNODE* CURR;
};
__FB_STATIC_ASSERT( sizeof( struct $12AST_PROC_CTX ) == 24 );
struct $12AST_CALL_CTX {
	struct $5TLIST TMPSTRLIST;
};
__FB_STATIC_ASSERT( sizeof( struct $12AST_CALL_CTX ) == 64 );
struct $16AST_GLOBINST_CTX {
	struct $5TLIST LIST;
	int64 CTORCNT;
	int64 DTORCNT;
};
__FB_STATIC_ASSERT( sizeof( struct $16AST_GLOBINST_CTX ) == 80 );
struct $16AST_DATASTMT_CTX {
	struct $8FBSYMBOL* DESC;
	struct $8FBSYMBOL* LASTSYM;
	struct $8FBSYMBOL* FIRSTSYM;
	struct $8FBSYMBOL* LASTLBL;
};
__FB_STATIC_ASSERT( sizeof( struct $16AST_DATASTMT_CTX ) == 32 );
struct $23AST_DTORLIST_SCOPESTACK {
	int64* COOKIES;
	int64 COUNT;
	int64 ROOM;
};
__FB_STATIC_ASSERT( sizeof( struct $23AST_DTORLIST_SCOPESTACK ) == 24 );
struct $6ASTCTX {
	struct $5TLIST ASTTB;
	struct $12AST_PROC_CTX PROC;
	struct $12AST_CALL_CTX CALL;
	struct $16AST_GLOBINST_CTX GLOBINST;
	struct $16AST_DATASTMT_CTX DATA;
	struct $7ASTNODE* CURRBLOCK;
	int64 DOEMIT;
	int64 TYPEINICOUNT;
	int64 BITFIELDCOUNT;
	struct $5TLIST DTORLIST;
	struct $23AST_DTORLIST_SCOPESTACK DTORLISTSCOPES;
	int64 DTORLISTCOOKIES;
	int64 FLUSHDTORLIST;
	struct $5TLIST ASMTOKLIST;
	int64 HIDEWARNINGSLEVEL;
};
__FB_STATIC_ASSERT( sizeof( struct $6ASTCTX ) == 472 );
extern struct $6ASTCTX AST$;
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
typedef int64 $11AST_OPFLAGS;
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
struct $12FBHASHTBLIST {
	struct $8FBHASHTB* HEAD;
	struct $8FBHASHTB* TAIL;
};
__FB_STATIC_ASSERT( sizeof( struct $12FBHASHTBLIST ) == 16 );
struct $8TSTACKTB;
struct $10TSTACKNODE;
struct $10TSTACKNODE {
	struct $10TSTACKNODE* PREV;
	struct $10TSTACKNODE* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $10TSTACKNODE ) == 16 );
struct $8TSTACKTB {
	struct $8TSTACKTB* NEXT;
	struct $10TSTACKNODE* NODETB;
	int64 NODES;
};
__FB_STATIC_ASSERT( sizeof( struct $8TSTACKTB ) == 24 );
struct $6TSTACK {
	struct $8TSTACKTB* TBHEAD;
	struct $8TSTACKTB* TBTAIL;
	int64 NODES;
	int64 NODELEN;
	struct $10TSTACKNODE* TOS;
	int64 CLEAR;
};
__FB_STATIC_ASSERT( sizeof( struct $6TSTACK ) == 48 );
struct $14SYMB_DEF_PARAM {
	struct $8HASHITEM* ITEM;
	uint64 INDEX;
};
__FB_STATIC_ASSERT( sizeof( struct $14SYMB_DEF_PARAM ) == 16 );
struct $12SYMB_DEF_CTX {
	struct $5TLIST PARAMLIST;
	struct $5TLIST TOKLIST;
	int64 PARAM;
	struct $5THASH PARAMHASH;
	struct $14SYMB_DEF_PARAM HASH[32];
};
__FB_STATIC_ASSERT( sizeof( struct $12SYMB_DEF_CTX ) == 672 );
struct $20FB_GLOBCTORLIST_ITEM;
struct $20FB_GLOBCTORLIST_ITEM {
	struct $8FBSYMBOL* SYM;
	struct $20FB_GLOBCTORLIST_ITEM* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $20FB_GLOBCTORLIST_ITEM ) == 16 );
struct $15FB_GLOBCTORLIST {
	struct $20FB_GLOBCTORLIST_ITEM* HEAD;
	struct $20FB_GLOBCTORLIST_ITEM* TAIL;
	struct $5TLIST LIST;
};
__FB_STATIC_ASSERT( sizeof( struct $15FB_GLOBCTORLIST ) == 80 );
struct $10SYMB_OVLOP {
	struct $8FBSYMBOL* HEAD;
};
__FB_STATIC_ASSERT( sizeof( struct $10SYMB_OVLOP ) == 8 );
struct $10FB_RTTICTX {
	struct $8FBSYMBOL* FB_RTTI;
	struct $8FBSYMBOL* FB_OBJECT;
};
__FB_STATIC_ASSERT( sizeof( struct $10FB_RTTICTX ) == 16 );
struct $7SYMBCTX {
	int64 INITED;
	struct $5TLIST SYMLIST;
	struct $12FBHASHTBLIST HASHLIST;
	struct $10FBSYMCHAIN CHAINPOOL[4096];
	int64 CHAINPOOLHEAD;
	struct $8FBSYMBOL GLOBNSPC;
	struct $8FBSYMBOL* NAMESPC;
	struct $8FBHASHTB* HASHTB;
	struct $10FBSYMBOLTB* SYMTB;
	struct $6TSTACK NESTSTK;
	struct $5THASH IMPHASHTB;
	struct $5TLIST IMPHASHLIST;
	struct $5TPOOL NAMEPOOL;
	struct $5TLIST FWDLIST;
	struct $5TLIST NSEXTLIST;
	int64 FWDREFCNT;
	struct $12SYMB_DEF_CTX DEF;
	struct $8FBSYMBOL* LASTLBL;
	struct $15FB_GLOBCTORLIST GLOBCTORLIST;
	struct $15FB_GLOBCTORLIST GLOBDTORLIST;
	struct $10SYMB_OVLOP GLOBOPOVLTB[116];
	int64 FBARRAY_DATA;
	int64 FBARRAY_PTR;
	int64 FBARRAY_SIZE;
	int64 FBARRAY_DIMTB;
	struct $8FBSYMBOL* FBARRAYDIM;
	int64 FBARRAYDIM_LBOUND;
	int64 FBARRAYDIM_UBOUND;
	struct $10FB_RTTICTX RTTI;
};
__FB_STATIC_ASSERT( sizeof( struct $7SYMBCTX ) == 199168 );
extern struct $7SYMBCTX SYMB$;
typedef int64 $12FB_DATACLASS;
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
typedef int64 $15FB_CMPSTMT_MASK;
struct $17FB_CMPSTMT_FORELM {
	struct $8FBSYMBOL* SYM;
	union $7FBVALUE VALUE;
	int64 DTYPE;
};
__FB_STATIC_ASSERT( sizeof( struct $17FB_CMPSTMT_FORELM ) == 24 );
struct $13FB_CMPSTMTSTK;
struct $14FB_CMPSTMT_FOR {
	struct $7ASTNODE* OUTERSCOPENODE;
	struct $17FB_CMPSTMT_FORELM CNT;
	struct $17FB_CMPSTMT_FORELM END;
	struct $17FB_CMPSTMT_FORELM STP;
	struct $17FB_CMPSTMT_FORELM ISPOS;
	struct $8FBSYMBOL* TESTLABEL;
	struct $8FBSYMBOL* INILABEL;
	struct $8FBSYMBOL* CMPLABEL;
	struct $8FBSYMBOL* ENDLABEL;
	struct $13FB_CMPSTMTSTK* LAST;
	int64 EXPLICIT_STEP;
};
__FB_STATIC_ASSERT( sizeof( struct $14FB_CMPSTMT_FOR ) == 152 );
struct $13FB_CMPSTMT_DO {
	int64 ATTOP;
	struct $8FBSYMBOL* INILABEL;
	struct $8FBSYMBOL* CMPLABEL;
	struct $8FBSYMBOL* ENDLABEL;
	struct $13FB_CMPSTMTSTK* LAST;
};
__FB_STATIC_ASSERT( sizeof( struct $13FB_CMPSTMT_DO ) == 40 );
struct $16FB_CMPSTMT_WHILE {
	struct $8FBSYMBOL* CMPLABEL;
	struct $8FBSYMBOL* ENDLABEL;
	struct $13FB_CMPSTMTSTK* LAST;
};
__FB_STATIC_ASSERT( sizeof( struct $16FB_CMPSTMT_WHILE ) == 24 );
struct $13FB_CMPSTMT_IF {
	int64 ISSINGLE;
	struct $8FBSYMBOL* NXTLABEL;
	struct $8FBSYMBOL* ENDLABEL;
	int64 ELSECNT;
};
__FB_STATIC_ASSERT( sizeof( struct $13FB_CMPSTMT_IF ) == 32 );
struct $15FB_CMPSTMT_PROC {
	$8FB_TOKEN TKN;
	int64 IS_NESTED;
	struct $8FBSYMBOL* ENDLABEL;
	struct $13FB_CMPSTMTSTK* LAST;
};
__FB_STATIC_ASSERT( sizeof( struct $15FB_CMPSTMT_PROC ) == 32 );
struct $19FB_CMPSTMT_SELCONST {
	int64 BASE;
	struct $8FBSYMBOL* DEFLABEL;
	uint64 MINVAL;
	uint64 MAXVAL;
};
__FB_STATIC_ASSERT( sizeof( struct $19FB_CMPSTMT_SELCONST ) == 32 );
struct $17FB_CMPSTMT_SELECT {
	int64 ISCONST;
	struct $8FBSYMBOL* SYM;
	int64 CASECNT;
	struct $19FB_CMPSTMT_SELCONST CONST_;
	struct $8FBSYMBOL* CMPLABEL;
	struct $8FBSYMBOL* ENDLABEL;
	struct $13FB_CMPSTMTSTK* LAST;
	struct $7ASTNODE* OUTERSCOPENODE;
};
__FB_STATIC_ASSERT( sizeof( struct $17FB_CMPSTMT_SELECT ) == 88 );
struct $15FB_CMPSTMT_WITH {
	struct $8FBSYMBOL* SYM;
	int64 IS_PTR;
	struct $13FB_CMPSTMTSTK* LAST;
};
__FB_STATIC_ASSERT( sizeof( struct $15FB_CMPSTMT_WITH ) == 24 );
struct $20FB_CMPSTMT_NAMESPACE {
	struct $8FBSYMBOL* SYM;
	int64 LEVELS;
};
__FB_STATIC_ASSERT( sizeof( struct $20FB_CMPSTMT_NAMESPACE ) == 16 );
struct $17FB_CMPSTMT_EXTERN {
	$11FB_MANGLING LASTMANG;
};
__FB_STATIC_ASSERT( sizeof( struct $17FB_CMPSTMT_EXTERN ) == 8 );
struct $16FB_CMPSTMT_SCOPE {
	int64 LASTIS_SCOPE;
};
__FB_STATIC_ASSERT( sizeof( struct $16FB_CMPSTMT_SCOPE ) == 8 );
struct $13FB_CMPSTMTSTK {
	int64 ID;
	$15FB_CMPSTMT_MASK ALLOWMASK;
	struct $7ASTNODE* SCOPENODE;
	union {
		struct $14FB_CMPSTMT_FOR FOR;
		struct $13FB_CMPSTMT_DO DO;
		struct $16FB_CMPSTMT_WHILE WHILE;
		struct $13FB_CMPSTMT_IF IF;
		struct $15FB_CMPSTMT_PROC PROC;
		struct $17FB_CMPSTMT_SELECT SELECT;
		struct $15FB_CMPSTMT_WITH WITH;
		struct $20FB_CMPSTMT_NAMESPACE NSPC;
		struct $17FB_CMPSTMT_EXTERN EXT;
		struct $16FB_CMPSTMT_SCOPE SCP;
	};
};
__FB_STATIC_ASSERT( sizeof( struct $13FB_CMPSTMTSTK ) == 176 );
struct $17FBPARSER_STMT_LET {
	struct $5TLIST LIST;
};
__FB_STATIC_ASSERT( sizeof( struct $17FBPARSER_STMT_LET ) == 64 );
struct $13FBPARSER_STMT {
	struct $6TSTACK STK;
	$8FB_TOKEN ID;
	int64 CNT;
	struct $13FB_CMPSTMTSTK* FOR;
	struct $13FB_CMPSTMTSTK* DO;
	struct $13FB_CMPSTMTSTK* WHILE;
	struct $13FB_CMPSTMTSTK* SELECT;
	struct $13FB_CMPSTMTSTK* PROC;
	struct $13FB_CMPSTMTSTK* WITH;
	struct $17FBPARSER_STMT_LET LET;
};
__FB_STATIC_ASSERT( sizeof( struct $13FBPARSER_STMT ) == 176 );
typedef int64 $12FB_PARSEROPT;
struct $9PARSERCTX {
	struct $13FBPARSER_STMT STMT;
	int64 NSPCREC;
	uint64 SCOPE;
	$11FB_MANGLING MANGLING;
	struct $8FBSYMBOL* CURRPROC;
	struct $8FBSYMBOL* CURRBLOCK;
	struct $5TLIST OVLARGLIST;
	int64 PRNTCNT;
	$12FB_PARSEROPT OPTIONS;
	int64 CTX_DTYPE;
	struct $8FBSYMBOL* CTXSYM;
	int64 HAVE_EQ_OUTSIDE_PARENS;
};
__FB_STATIC_ASSERT( sizeof( struct $9PARSERCTX ) == 320 );
extern struct $9PARSERCTX PARSER$;
static int64 DEFTYPETB$[31];
struct $7SYMBCTX SYMB$;
struct $5FBENV ENV$ __attribute__((common));

void SYMBINITSYMBOLS( void )
{
	label$10:;
	LISTINIT( (struct $5TLIST*)((uint8*)&SYMB$ + 8ll), 8000ll, 304ll, 6ll );
	POOLINIT( (struct $5TPOOL*)((uint8*)&SYMB$ + 197168ll), 1000ll, 17ll, 129ll );
	*(int64*)((uint8*)&SYMB$ + 196696ll) = 0ll;
	LISTINIT( (struct $5TLIST*)((uint8*)&SYMB$ + 197256ll), 500ll, 56ll, 7ll );
	*($12FB_SYMBCLASS*)((uint8*)&SYMB$ + 196704ll) = 8ll;
	*(uint16*)((uint8*)&SYMB$ + 196768ll) = (uint16)0u;
	{
		struct $13FBS_NAMESPACE* TMP$88$2;
		TMP$88$2 = (struct $13FBS_NAMESPACE*)((uint8*)&SYMB$ + 196792ll);
		*(struct $8FBSYMBOL**)TMP$88$2 = (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll);
		*(struct $8FBSYMBOL**)((uint8*)TMP$88$2 + 8ll) = (struct $8FBSYMBOL*)0ull;
		*(struct $8FBSYMBOL**)((uint8*)TMP$88$2 + 16ll) = (struct $8FBSYMBOL*)0ull;
		*(struct $8FBSYMBOL**)((uint8*)TMP$88$2 + 24ll) = (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll);
		*(struct $8FBHASHTB**)((uint8*)TMP$88$2 + 56ll) = (struct $8FBHASHTB*)0ull;
		*(struct $8FBHASHTB**)((uint8*)TMP$88$2 + 64ll) = (struct $8FBHASHTB*)0ull;
		{
			HASHINIT( (struct $5THASH*)((uint8*)TMP$88$2 + 32ll), 8000ll, 0ll );
		}
		goto label$12;
		label$13:;
		{
			memset( (void*)((uint8*)TMP$88$2 + 32ll), 0, 24ull );
		}
		label$12:;
		void* vr$17 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&SYMB$ + 197256ll) );
		*(struct $13FBNAMESPC_EXT**)((uint8*)TMP$88$2 + 72ll) = (struct $13FBNAMESPC_EXT*)vr$17;
	}
	*(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll) = (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll);
	*(struct $10FBSYMBOLTB**)((uint8*)&SYMB$ + 197024ll) = (struct $10FBSYMBOLTB*)((uint8*)&SYMB$ + 196792ll);
	*(struct $8FBHASHTB**)((uint8*)&SYMB$ + 197016ll) = (struct $8FBHASHTB*)((uint8*)&SYMB$ + 196816ll);
	*(struct $8FBHASHTB**)((uint8*)&SYMB$ + 72ll) = (struct $8FBHASHTB*)0ull;
	*(struct $8FBHASHTB**)((uint8*)&SYMB$ + 80ll) = (struct $8FBHASHTB*)0ull;
	SYMBHASHLISTADD( *(struct $8FBHASHTB**)((uint8*)&SYMB$ + 197016ll) );
	HASHINIT( (struct $5THASH*)((uint8*)&SYMB$ + 197080ll), 8000ll, 0ll );
	LISTINIT( (struct $5TLIST*)((uint8*)&SYMB$ + 197104ll), 4000ll, 48ll, 6ll );
	*(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 198000ll) = (struct $8FBSYMBOL*)0ull;
	SYMBDATAINIT(  );
	label$11:;
}

void SYMBINIT( int64 ISMAIN$1 )
{
	label$22:;
	if( *(int64*)&SYMB$ == 0ll ) goto label$25;
	{
		goto label$23;
	}
	label$25:;
	label$24:;
	SYMBINITSYMBOLS(  );
	SYMBCOMPINIT(  );
	SYMBMANGLEINIT(  );
	SYMBKEYWORDINIT(  );
	SYMBDEFINEINIT( ISMAIN$1 );
	SYMBFWDREFINIT(  );
	SYMBVARINIT(  );
	SYMBPROCINIT(  );
	HINITDEFTYPETB(  );
	SYMBCOMPRTTIINIT(  );
	*(int64*)&SYMB$ = -1ll;
	label$23:;
}

void SYMBEND( void )
{
	label$26:;
	if( *(int64*)&SYMB$ != 0ll ) goto label$29;
	{
		goto label$27;
	}
	label$29:;
	label$28:;
	SYMBDELGLOBALTB(  );
	*(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 196800ll) = (struct $8FBSYMBOL*)0ull;
	*(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 196808ll) = (struct $8FBSYMBOL*)0ull;
	*(struct $10FBSYMBOLTB**)((uint8*)&SYMB$ + 197024ll) = (struct $10FBSYMBOLTB*)0ull;
	LISTEND( (struct $5TLIST*)((uint8*)&SYMB$ + 197104ll) );
	HASHEND( (struct $5THASH*)((uint8*)&SYMB$ + 197080ll) );
	HASHEND( (struct $5THASH*)((uint8*)&SYMB$ + 196824ll) );
	SYMBCOMPRTTIEND(  );
	SYMBPROCEND(  );
	SYMBVAREND(  );
	SYMBFWDREFEND(  );
	SYMBDEFINEEND(  );
	SYMBMANGLEEND(  );
	SYMBCOMPEND(  );
	LISTDELNODE( (struct $5TLIST*)((uint8*)&SYMB$ + 197256ll), *(void**)((uint8*)&SYMB$ + 196864ll) );
	LISTEND( (struct $5TLIST*)((uint8*)&SYMB$ + 197256ll) );
	POOLEND( (struct $5TPOOL*)((uint8*)&SYMB$ + 197168ll) );
	LISTEND( (struct $5TLIST*)((uint8*)&SYMB$ + 8ll) );
	*(int64*)&SYMB$ = 0ll;
	label$27:;
}

int64 SYMBCANDUPLICATE( struct $8FBSYMBOL* HEAD_SYM$1, struct $8FBSYMBOL* S$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$30:;
	fb$result$1 = 0ll;
	{
		uint64 TMP$89$2;
		TMP$89$2 = *(uint64*)S$1;
		goto label$33;
		label$34:;
		{
			goto label$31;
		}
		goto label$32;
		label$35:;
		{
			label$36:;
			{
				{
					uint64 TMP$90$5;
					TMP$90$5 = *(uint64*)HEAD_SYM$1;
					goto label$40;
					label$41:;
					{
						goto label$31;
					}
					goto label$39;
					label$40:;
					static const void* tmp$95[9ll] = {
						&&label$41,
						&&label$39,
						&&label$39,
						&&label$41,
						&&label$41,
						&&label$41,
						&&label$41,
						&&label$41,
						&&label$41,
					};
					if( TMP$90$5 < 5ll ) goto label$39;
					if( TMP$90$5 > 13ll ) goto label$39;
					goto *tmp$95[TMP$90$5 - 5ll];
					label$39:;
				}
				HEAD_SYM$1 = *(struct $8FBSYMBOL**)((uint8*)HEAD_SYM$1 + 264ll);
			}
			label$38:;
			if( HEAD_SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$36;
			label$37:;
		}
		goto label$32;
		label$42:;
		{
			label$43:;
			{
				{
					$12FB_SYMBCLASS TMP$91$5;
					TMP$91$5 = *($12FB_SYMBCLASS*)HEAD_SYM$1;
					if( TMP$91$5 == 5ll ) goto label$48;
					label$49:;
					if( TMP$91$5 == 8ll ) goto label$48;
					label$50:;
					if( TMP$91$5 == 14ll ) goto label$48;
					label$51:;
					if( TMP$91$5 != 11ll ) goto label$47;
					label$48:;
					{
						goto label$31;
					}
					goto label$46;
					label$47:;
					if( TMP$91$5 != 10ll ) goto label$52;
					label$53:;
					{
						if( (*(int64*)((uint8*)HEAD_SYM$1 + 16ll) & 262144ll) == 0ll ) goto label$55;
						{
							goto label$31;
						}
						label$55:;
						label$54:;
					}
					label$52:;
					label$46:;
				}
				HEAD_SYM$1 = *(struct $8FBSYMBOL**)((uint8*)HEAD_SYM$1 + 264ll);
			}
			label$45:;
			if( HEAD_SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$43;
			label$44:;
		}
		goto label$32;
		label$56:;
		{
			label$57:;
			{
				{
					uint64 TMP$92$5;
					TMP$92$5 = *(uint64*)HEAD_SYM$1;
					goto label$61;
					label$62:;
					{
					}
					goto label$60;
					label$63:;
					{
						if( (*(int64*)((uint8*)HEAD_SYM$1 + 16ll) & 262144ll) == 0ll ) goto label$65;
						{
							goto label$31;
						}
						label$65:;
						label$64:;
					}
					goto label$60;
					label$66:;
					{
						if( *(int64*)((uint8*)&ENV$ + 272ll) == 3ll ) goto label$68;
						{
							goto label$31;
						}
						label$68:;
						label$67:;
						if( *(int64*)HEAD_SYM$1 != 3ll ) goto label$70;
						{
							if( (int64)-((*(int64*)((uint8*)HEAD_SYM$1 + 16ll) & 32ll) != 0ll) != 0ll ) goto label$72;
							{
								goto label$31;
							}
							goto label$71;
							label$72:;
							{
								if( (*(int64*)((uint8*)HEAD_SYM$1 + 16ll) & 32ll) == 0ll ) goto label$74;
								{
									goto label$31;
								}
								label$74:;
								label$73:;
							}
							label$71:;
						}
						label$70:;
						label$69:;
						if( (*(int64*)((uint8*)S$1 + 8ll) & 268435456ll) == 0ll ) goto label$76;
						{
							if( (*(int64*)((uint8*)S$1 + 48ll) & 511ll) != (*(int64*)((uint8*)HEAD_SYM$1 + 48ll) & 511ll) ) goto label$78;
							{
								goto label$31;
							}
							label$78:;
							label$77:;
						}
						goto label$75;
						label$76:;
						{
							if( (*(int64*)((uint8*)HEAD_SYM$1 + 48ll) & 511ll) == 16ll ) goto label$80;
							{
								goto label$31;
							}
							label$80:;
							label$79:;
						}
						label$75:;
					}
					goto label$60;
					label$81:;
					{
						goto label$31;
					}
					goto label$60;
					label$61:;
					static const void* tmp$96[12ll] = {
						&&label$66,
						&&label$81,
						&&label$81,
						&&label$66,
						&&label$62,
						&&label$81,
						&&label$62,
						&&label$63,
						&&label$81,
						&&label$81,
						&&label$62,
						&&label$62,
					};
					if( TMP$92$5 < 3ll ) goto label$81;
					if( TMP$92$5 > 14ll ) goto label$81;
					goto *tmp$96[TMP$92$5 - 3ll];
					label$60:;
				}
				HEAD_SYM$1 = *(struct $8FBSYMBOL**)((uint8*)HEAD_SYM$1 + 264ll);
			}
			label$59:;
			if( HEAD_SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$57;
			label$58:;
		}
		goto label$32;
		label$82:;
		{
			label$83:;
			{
				{
					uint64 TMP$93$5;
					TMP$93$5 = *(uint64*)HEAD_SYM$1;
					goto label$87;
					label$88:;
					{
					}
					goto label$86;
					label$89:;
					{
						if( (*(int64*)((uint8*)HEAD_SYM$1 + 16ll) & 262144ll) == 0ll ) goto label$91;
						{
							goto label$31;
						}
						label$91:;
						label$90:;
					}
					goto label$86;
					label$92:;
					{
						if( *(int64*)((uint8*)&ENV$ + 272ll) == 3ll ) goto label$94;
						{
							goto label$31;
						}
						label$94:;
						label$93:;
						if( *(int64*)HEAD_SYM$1 != 3ll ) goto label$96;
						{
							if( (int64)-((*(int64*)((uint8*)HEAD_SYM$1 + 16ll) & 32ll) != 0ll) != 0ll ) goto label$98;
							{
								goto label$31;
							}
							label$98:;
							label$97:;
						}
						label$96:;
						label$95:;
						if( (*(int64*)((uint8*)S$1 + 8ll) & 268435456ll) == 0ll ) goto label$100;
						{
							if( (*(int64*)((uint8*)S$1 + 48ll) & 511ll) != (*(int64*)((uint8*)HEAD_SYM$1 + 48ll) & 511ll) ) goto label$102;
							{
								goto label$31;
							}
							label$102:;
							label$101:;
						}
						goto label$99;
						label$100:;
						{
							if( (*(int64*)((uint8*)HEAD_SYM$1 + 48ll) & 511ll) == 16ll ) goto label$104;
							{
								goto label$31;
							}
							label$104:;
							label$103:;
						}
						label$99:;
					}
					goto label$86;
					label$105:;
					{
						if( (int64)*(uint16*)((uint8*)S$1 + 64ll) != (int64)*(uint16*)((uint8*)HEAD_SYM$1 + 64ll) ) goto label$107;
						{
							goto label$31;
						}
						label$107:;
						label$106:;
					}
					goto label$86;
					label$108:;
					{
						if( (int64)*(uint16*)((uint8*)S$1 + 64ll) != (int64)*(uint16*)((uint8*)HEAD_SYM$1 + 64ll) ) goto label$110;
						{
							if( *(int64*)((uint8*)&ENV$ + 272ll) != 0ll ) goto label$112;
							{
								goto label$31;
							}
							label$112:;
							label$111:;
							if( (*(int64*)((uint8*)HEAD_SYM$1 + 48ll) & 511ll) != (*(int64*)((uint8*)S$1 + 48ll) & 511ll) ) goto label$114;
							{
								goto label$31;
							}
							label$114:;
							label$113:;
							if( ((int64)-((int64)-((*(int64*)((uint8*)HEAD_SYM$1 + 8ll) & 268435456ll) != 0ll) == 0ll) & (int64)-((int64)-((*(int64*)((uint8*)S$1 + 8ll) & 268435456ll) != 0ll) == 0ll)) == 0ll ) goto label$116;
							{
								goto label$31;
							}
							label$116:;
							label$115:;
						}
						label$110:;
						label$109:;
					}
					goto label$86;
					label$117:;
					{
						goto label$31;
					}
					goto label$86;
					label$87:;
					static const void* tmp$97[14ll] = {
						&&label$108,
						&&label$117,
						&&label$92,
						&&label$117,
						&&label$117,
						&&label$92,
						&&label$88,
						&&label$117,
						&&label$88,
						&&label$89,
						&&label$117,
						&&label$105,
						&&label$88,
						&&label$88,
					};
					if( TMP$93$5 < 1ll ) goto label$117;
					if( TMP$93$5 > 14ll ) goto label$117;
					goto *tmp$97[TMP$93$5 - 1ll];
					label$86:;
				}
				HEAD_SYM$1 = *(struct $8FBSYMBOL**)((uint8*)HEAD_SYM$1 + 264ll);
			}
			label$85:;
			if( HEAD_SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$83;
			label$84:;
		}
		goto label$32;
		label$118:;
		{
			label$119:;
			{
				{
					uint64 TMP$94$5;
					TMP$94$5 = *(uint64*)HEAD_SYM$1;
					goto label$123;
					label$124:;
					{
						goto label$31;
					}
					goto label$122;
					label$125:;
					{
						if( (*(int64*)((uint8*)HEAD_SYM$1 + 16ll) & 262144ll) == 0ll ) goto label$127;
						{
							goto label$31;
						}
						label$127:;
						label$126:;
					}
					goto label$122;
					label$123:;
					static const void* tmp$98[7ll] = {
						&&label$124,
						&&label$124,
						&&label$124,
						&&label$124,
						&&label$122,
						&&label$125,
						&&label$124,
					};
					if( TMP$94$5 < 5ll ) goto label$122;
					if( TMP$94$5 > 11ll ) goto label$122;
					goto *tmp$98[TMP$94$5 - 5ll];
					label$122:;
				}
				HEAD_SYM$1 = *(struct $8FBSYMBOL**)((uint8*)HEAD_SYM$1 + 264ll);
			}
			label$121:;
			if( HEAD_SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$119;
			label$120:;
		}
		goto label$32;
		label$128:;
		{
		}
		goto label$32;
		label$33:;
		static const void* tmp$99[14ll] = {
			&&label$82,
			&&label$56,
			&&label$56,
			&&label$128,
			&&label$34,
			&&label$34,
			&&label$118,
			&&label$34,
			&&label$35,
			&&label$35,
			&&label$34,
			&&label$34,
			&&label$35,
			&&label$42,
		};
		if( TMP$89$2 < 1ll ) goto label$32;
		if( TMP$89$2 > 14ll ) goto label$32;
		goto *tmp$99[TMP$89$2 - 1ll];
		label$32:;
	}
	fb$result$1 = -1ll;
	label$31:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBNEWSYMBOL( $10FB_SYMBOPT OPTIONS$1, struct $8FBSYMBOL* S$1, struct $10FBSYMBOLTB* SYMTB$1, struct $8FBHASHTB* HASHTB$1, $12FB_SYMBCLASS CLASS_$1, uint8* ID$1, uint8* ID_ALIAS$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, $13FB_SYMBATTRIB ATTRIB$1 )
{
	int64 TMP$100$1;
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$129:;
	int64 SLEN$1;
	int64 DELOK$1;
	fb$result$1 = (struct $8FBSYMBOL*)0ull;
	if( SYMTB$1 != (struct $10FBSYMBOLTB*)0ull ) goto label$132;
	{
		SYMTB$1 = *(struct $10FBSYMBOLTB**)((uint8*)&SYMB$ + 197024ll);
		if( *(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) != *(struct $8FBSYMBOL**)((uint8*)&ENV$ + 1136ll) ) goto label$134;
		{
			if( *(uint64*)((uint8*)&PARSER$ + 184ll) != 0ull ) goto label$136;
			{
				if( *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll) != (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll) ) goto label$138;
				{
					SYMTB$1 = (struct $10FBSYMBOLTB*)((uint8*)&SYMB$ + 196792ll);
				}
				label$138:;
				label$137:;
				ATTRIB$1 = ATTRIB$1 & -129ll;
			}
			goto label$135;
			label$136:;
			{
				ATTRIB$1 = ATTRIB$1 | 128ll;
			}
			label$135:;
		}
		goto label$133;
		label$134:;
		{
			ATTRIB$1 = ATTRIB$1 | 128ll;
		}
		label$133:;
	}
	label$132:;
	label$131:;
	if( HASHTB$1 != (struct $8FBHASHTB*)0ull ) goto label$140;
	{
		HASHTB$1 = *(struct $8FBHASHTB**)((uint8*)&SYMB$ + 197016ll);
	}
	label$140:;
	label$139:;
	DELOK$1 = 0ll;
	if( S$1 != (struct $8FBSYMBOL*)0ull ) goto label$142;
	{
		DELOK$1 = -1ll;
		void* vr$13 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&SYMB$ + 8ll) );
		S$1 = (struct $8FBSYMBOL*)vr$13;
	}
	label$142:;
	label$141:;
	*($12FB_SYMBCLASS*)S$1 = CLASS_$1;
	*($13FB_SYMBATTRIB*)((uint8*)S$1 + 8ll) = ATTRIB$1;
	*($12FB_SYMBSTATS*)((uint8*)S$1 + 16ll) = 0ll;
	*(int16*)((uint8*)S$1 + 66ll) = (int16)*($11FB_MANGLING*)((uint8*)&PARSER$ + 192ll);
	*($11FB_DATATYPE*)((uint8*)S$1 + 48ll) = DTYPE$1;
	*(struct $8FBSYMBOL**)((uint8*)S$1 + 56ll) = SUBTYPE$1;
	if( (OPTIONS$1 & 2ll) == 0ll ) goto label$144;
	{
		if( (*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 16ll) & 12288ll) == 0ll ) goto label$146;
		{
			*(uint16*)((uint8*)S$1 + 64ll) = (uint16)0u;
		}
		goto label$145;
		label$146:;
		{
			*(uint16*)((uint8*)S$1 + 64ll) = (uint16)((int64)*(uint16*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 64ll) + 1ll);
		}
		label$145:;
	}
	goto label$143;
	label$144:;
	{
		*(uint16*)((uint8*)S$1 + 64ll) = (uint16)*(uint64*)((uint8*)&PARSER$ + 184ll);
	}
	label$143:;
	if( ID$1 == (uint8*)0ull ) goto label$147;
	int64 vr$35 = fb_StrLen( (void*)ID$1, 0ll );
	TMP$100$1 = vr$35;
	goto label$183;
	label$147:;
	TMP$100$1 = 0ll;
	label$183:;
	SLEN$1 = TMP$100$1;
	if( SLEN$1 <= 0ll ) goto label$149;
	{
		void* vr$39 = POOLNEWITEM( (struct $5TPOOL*)((uint8*)&SYMB$ + 197168ll), SLEN$1 + 1ll );
		*(uint8**)((uint8*)S$1 + 24ll) = (uint8*)vr$39;
		if( (OPTIONS$1 & 1ll) != 0ll ) goto label$151;
		{
			HUCASE( ID$1, *(uint8**)((uint8*)S$1 + 24ll) );
		}
		goto label$150;
		label$151:;
		{
			fb_StrAssign( *(void**)((uint8*)S$1 + 24ll), 0ll, (void*)ID$1, 0ll, 0 );
		}
		label$150:;
	}
	goto label$148;
	label$149:;
	{
		*(uint8**)((uint8*)S$1 + 24ll) = (uint8*)0ull;
		OPTIONS$1 = OPTIONS$1 & -33ll;
	}
	label$148:;
	if( ID_ALIAS$1 == (uint8*)0ull ) goto label$153;
	{
		int64 vr$48 = fb_StrLen( (void*)ID_ALIAS$1, 0ll );
		void* vr$51 = XALLOCATE( (int32)(vr$48 + 1ll) );
		*(uint8**)((uint8*)S$1 + 32ll) = (uint8*)vr$51;
		fb_StrAssign( *(void**)((uint8*)S$1 + 32ll), 0ll, (void*)ID_ALIAS$1, 0ll, 0 );
	}
	goto label$152;
	label$153:;
	{
		*(uint8**)((uint8*)S$1 + 32ll) = (uint8*)0ull;
	}
	label$152:;
	*(uint8**)((uint8*)S$1 + 40ll) = (uint8*)0ull;
	*(int64*)((uint8*)S$1 + 72ll) = 0ll;
	*(int64*)((uint8*)S$1 + 80ll) = 0ll;
	*(struct $8FBHASHTB**)((uint8*)S$1 + 232ll) = HASHTB$1;
	if( (OPTIONS$1 & 32ll) == 0ll ) goto label$155;
	{
		struct $8FBSYMBOL* HEAD_SYM$2;
		uint64 vr$62 = HASHHASH( *(uint8**)((uint8*)S$1 + 24ll) );
		*(uint64*)((uint8*)S$1 + 248ll) = vr$62;
		void* vr$68 = HASHLOOKUPEX( (struct $5THASH*)((uint8*)HASHTB$1 + 8ll), *(uint8**)((uint8*)S$1 + 24ll), *(uint64*)((uint8*)S$1 + 248ll) );
		HEAD_SYM$2 = (struct $8FBSYMBOL*)vr$68;
		if( HEAD_SYM$2 != (struct $8FBSYMBOL*)0ull ) goto label$157;
		{
			struct $8HASHITEM* vr$74 = HASHADD( (struct $5THASH*)((uint8*)HASHTB$1 + 8ll), *(uint8**)((uint8*)S$1 + 24ll), (void*)S$1, *(uint64*)((uint8*)S$1 + 248ll) );
			*(struct $8HASHITEM**)((uint8*)S$1 + 240ll) = vr$74;
			*(struct $8FBSYMBOL**)((uint8*)S$1 + 256ll) = (struct $8FBSYMBOL*)0ull;
			*(struct $8FBSYMBOL**)((uint8*)S$1 + 264ll) = (struct $8FBSYMBOL*)0ull;
		}
		goto label$156;
		label$157:;
		{
			if( (OPTIONS$1 & 128ll) != 0ll ) goto label$159;
			{
				int64 vr$80 = SYMBCANDUPLICATE( HEAD_SYM$2, S$1 );
				if( vr$80 != 0ll ) goto label$161;
				{
					POOLDELITEM( (struct $5TPOOL*)((uint8*)&SYMB$ + 197168ll), *(void**)((uint8*)S$1 + 24ll) );
					if( *(uint8**)((uint8*)S$1 + 32ll) == (uint8*)0ull ) goto label$163;
					{
						free( *(void**)((uint8*)S$1 + 32ll) );
					}
					label$163:;
					label$162:;
					if( *(uint8**)((uint8*)S$1 + 40ll) == (uint8*)0ull ) goto label$165;
					{
						free( *(void**)((uint8*)S$1 + 40ll) );
					}
					label$165:;
					label$164:;
					if( DELOK$1 == 0ll ) goto label$167;
					{
						LISTDELNODE( (struct $5TLIST*)((uint8*)&SYMB$ + 8ll), (void*)S$1 );
					}
					label$167:;
					label$166:;
					goto label$130;
				}
				label$161:;
				label$160:;
			}
			label$159:;
			label$158:;
			*(struct $8HASHITEM**)((uint8*)S$1 + 240ll) = *(struct $8HASHITEM**)((uint8*)HEAD_SYM$2 + 240ll);
			if( *(int64*)((uint8*)&ENV$ + 272ll) != 3ll ) goto label$169;
			{
				struct $8FBSYMBOL* PREV$4;
				PREV$4 = (struct $8FBSYMBOL*)0ull;
				label$170:;
				if( *(int64*)HEAD_SYM$2 != 6ll ) goto label$171;
				{
					PREV$4 = HEAD_SYM$2;
					HEAD_SYM$2 = *(struct $8FBSYMBOL**)((uint8*)HEAD_SYM$2 + 264ll);
					if( HEAD_SYM$2 != (struct $8FBSYMBOL*)0ull ) goto label$173;
					{
						goto label$171;
					}
					label$173:;
					label$172:;
				}
				goto label$170;
				label$171:;
				if( PREV$4 != (struct $8FBSYMBOL*)0ull ) goto label$175;
				{
					goto label$176;
				}
				label$175:;
				label$174:;
				*(struct $8FBSYMBOL**)((uint8*)PREV$4 + 264ll) = S$1;
				*(struct $8FBSYMBOL**)((uint8*)S$1 + 256ll) = PREV$4;
				*(struct $8FBSYMBOL**)((uint8*)S$1 + 264ll) = HEAD_SYM$2;
				if( HEAD_SYM$2 == (struct $8FBSYMBOL*)0ull ) goto label$178;
				{
					*(struct $8FBSYMBOL**)((uint8*)HEAD_SYM$2 + 256ll) = S$1;
				}
				label$178:;
				label$177:;
			}
			goto label$168;
			label$169:;
			{
				label$176:;
				*(void**)((uint8*)*(struct $8HASHITEM**)((uint8*)HEAD_SYM$2 + 240ll) + 8ll) = (void*)S$1;
				*(uint8**)*(struct $8HASHITEM**)((uint8*)HEAD_SYM$2 + 240ll) = *(uint8**)((uint8*)S$1 + 24ll);
				*(struct $8FBSYMBOL**)((uint8*)HEAD_SYM$2 + 256ll) = S$1;
				*(struct $8FBSYMBOL**)((uint8*)S$1 + 256ll) = (struct $8FBSYMBOL*)0ull;
				*(struct $8FBSYMBOL**)((uint8*)S$1 + 264ll) = HEAD_SYM$2;
			}
			label$168:;
		}
		label$156:;
	}
	goto label$154;
	label$155:;
	{
		*(struct $8HASHITEM**)((uint8*)S$1 + 240ll) = (struct $8HASHITEM*)0ull;
		*(struct $8FBSYMBOL**)((uint8*)S$1 + 256ll) = (struct $8FBSYMBOL*)0ull;
		*(struct $8FBSYMBOL**)((uint8*)S$1 + 264ll) = (struct $8FBSYMBOL*)0ull;
	}
	label$154:;
	if( *(struct $8FBSYMBOL**)((uint8*)SYMTB$1 + 16ll) == (struct $8FBSYMBOL*)0ull ) goto label$180;
	{
		*(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)SYMTB$1 + 16ll) + 296ll) = S$1;
	}
	goto label$179;
	label$180:;
	{
		*(struct $8FBSYMBOL**)((uint8*)SYMTB$1 + 8ll) = S$1;
	}
	label$179:;
	*(struct $8FBSYMBOL**)((uint8*)S$1 + 288ll) = *(struct $8FBSYMBOL**)((uint8*)SYMTB$1 + 16ll);
	*(struct $8FBSYMBOL**)((uint8*)S$1 + 296ll) = (struct $8FBSYMBOL*)0ull;
	*(struct $10FBSYMBOLTB**)((uint8*)S$1 + 272ll) = SYMTB$1;
	*(struct $8FBSYMBOL**)((uint8*)SYMTB$1 + 16ll) = S$1;
	*(struct $8FBSYMBOL**)((uint8*)S$1 + 280ll) = (struct $8FBSYMBOL*)0ull;
	if( (DTYPE$1 & 31ll) != 21ll ) goto label$182;
	{
		SYMBADDTOFWDREF( SUBTYPE$1, S$1 );
	}
	label$182:;
	label$181:;
	fb$result$1 = S$1;
	label$130:;
	return fb$result$1;
}

void SYMBHASHLISTADD( struct $8FBHASHTB* HASHTB$1 )
{
	label$184:;
	if( *(struct $8FBHASHTB**)((uint8*)&SYMB$ + 80ll) == (struct $8FBHASHTB*)0ull ) goto label$187;
	{
		*(struct $8FBHASHTB**)((uint8*)*(struct $8FBHASHTB**)((uint8*)&SYMB$ + 80ll) + 40ll) = HASHTB$1;
	}
	goto label$186;
	label$187:;
	{
		*(struct $8FBHASHTB**)((uint8*)&SYMB$ + 72ll) = HASHTB$1;
	}
	label$186:;
	*(struct $8FBHASHTB**)((uint8*)HASHTB$1 + 32ll) = *(struct $8FBHASHTB**)((uint8*)&SYMB$ + 80ll);
	*(struct $8FBHASHTB**)((uint8*)HASHTB$1 + 40ll) = (struct $8FBHASHTB*)0ull;
	*(struct $8FBHASHTB**)((uint8*)&SYMB$ + 80ll) = HASHTB$1;
	label$185:;
}

void SYMBHASHLISTADDBEFORE( struct $8FBHASHTB* LASTTB$1, struct $8FBHASHTB* HASHTB$1 )
{
	label$188:;
	if( *(struct $8FBHASHTB**)((uint8*)LASTTB$1 + 32ll) != (struct $8FBHASHTB*)0ull ) goto label$191;
	{
		*(struct $8FBHASHTB**)((uint8*)&SYMB$ + 72ll) = HASHTB$1;
	}
	goto label$190;
	label$191:;
	{
		*(struct $8FBHASHTB**)((uint8*)*(struct $8FBHASHTB**)((uint8*)LASTTB$1 + 32ll) + 40ll) = HASHTB$1;
	}
	label$190:;
	*(struct $8FBHASHTB**)((uint8*)HASHTB$1 + 32ll) = *(struct $8FBHASHTB**)((uint8*)LASTTB$1 + 32ll);
	*(struct $8FBHASHTB**)((uint8*)HASHTB$1 + 40ll) = LASTTB$1;
	*(struct $8FBHASHTB**)((uint8*)LASTTB$1 + 32ll) = HASHTB$1;
	label$189:;
}

void SYMBHASHLISTDEL( struct $8FBHASHTB* HASHTB$1 )
{
	label$192:;
	if( *(struct $8FBHASHTB**)((uint8*)HASHTB$1 + 32ll) == (struct $8FBHASHTB*)0ull ) goto label$195;
	{
		*(struct $8FBHASHTB**)((uint8*)*(struct $8FBHASHTB**)((uint8*)HASHTB$1 + 32ll) + 40ll) = *(struct $8FBHASHTB**)((uint8*)HASHTB$1 + 40ll);
	}
	goto label$194;
	label$195:;
	{
		*(struct $8FBHASHTB**)((uint8*)&SYMB$ + 72ll) = *(struct $8FBHASHTB**)((uint8*)HASHTB$1 + 40ll);
	}
	label$194:;
	if( *(struct $8FBHASHTB**)((uint8*)HASHTB$1 + 40ll) == (struct $8FBHASHTB*)0ull ) goto label$197;
	{
		*(struct $8FBHASHTB**)((uint8*)*(struct $8FBHASHTB**)((uint8*)HASHTB$1 + 40ll) + 32ll) = *(struct $8FBHASHTB**)((uint8*)HASHTB$1 + 32ll);
	}
	goto label$196;
	label$197:;
	{
		*(struct $8FBHASHTB**)((uint8*)&SYMB$ + 80ll) = *(struct $8FBHASHTB**)((uint8*)HASHTB$1 + 32ll);
	}
	label$196:;
	*(struct $8FBHASHTB**)((uint8*)HASHTB$1 + 32ll) = (struct $8FBHASHTB*)0ull;
	*(struct $8FBHASHTB**)((uint8*)HASHTB$1 + 40ll) = (struct $8FBHASHTB*)0ull;
	label$193:;
}

void SYMBHASHLISTINSERTNAMESPACE( struct $8FBSYMBOL* NS$1, struct $8FBSYMBOL* SRC_HEAD$1 )
{
	label$198:;
	struct $10FBSYMCHAIN* IMP_HEAD$1;
	IMP_HEAD$1 = *(struct $10FBSYMCHAIN**)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) + 40ll);
	struct $10FBSYMCHAIN* IMP_TAIL$1;
	IMP_TAIL$1 = *(struct $10FBSYMCHAIN**)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) + 48ll);
	struct $8FBSYMBOL* S$1;
	S$1 = SRC_HEAD$1;
	label$200:;
	if( S$1 == (struct $8FBSYMBOL*)0ull ) goto label$201;
	{
		if( *(struct $8HASHITEM**)((uint8*)S$1 + 240ll) == (struct $8HASHITEM*)0ull ) goto label$203;
		{
			if( *(struct $8FBSYMBOL**)((uint8*)S$1 + 256ll) != (struct $8FBSYMBOL*)0ull ) goto label$205;
			{
				struct $10FBSYMCHAIN* CHAIN_$4;
				void* vr$10 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&SYMB$ + 197104ll) );
				CHAIN_$4 = (struct $10FBSYMCHAIN*)vr$10;
				*(struct $8FBSYMBOL**)CHAIN_$4 = S$1;
				*(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$4 + 24ll) = (struct $10FBSYMCHAIN*)0ull;
				*(int64*)((uint8*)CHAIN_$4 + 16ll) = -1ll;
				struct $10FBSYMCHAIN* HEAD$4;
				void* vr$17 = HASHLOOKUPEX( (struct $5THASH*)((uint8*)&SYMB$ + 197080ll), *(uint8**)((uint8*)S$1 + 24ll), *(uint64*)((uint8*)S$1 + 248ll) );
				HEAD$4 = (struct $10FBSYMCHAIN*)vr$17;
				if( HEAD$4 != (struct $10FBSYMCHAIN*)0ull ) goto label$207;
				{
					struct $8HASHITEM* vr$22 = HASHADD( (struct $5THASH*)((uint8*)&SYMB$ + 197080ll), *(uint8**)((uint8*)S$1 + 24ll), (void*)CHAIN_$4, *(uint64*)((uint8*)S$1 + 248ll) );
					*(struct $8HASHITEM**)((uint8*)CHAIN_$4 + 32ll) = vr$22;
					*(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$4 + 8ll) = (struct $10FBSYMCHAIN*)0ull;
				}
				goto label$206;
				label$207:;
				{
					*(struct $8HASHITEM**)((uint8*)CHAIN_$4 + 32ll) = *(struct $8HASHITEM**)((uint8*)HEAD$4 + 32ll);
					*(void**)((uint8*)*(struct $8HASHITEM**)((uint8*)HEAD$4 + 32ll) + 8ll) = (void*)CHAIN_$4;
					*(struct $10FBSYMCHAIN**)((uint8*)HEAD$4 + 24ll) = CHAIN_$4;
					*(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$4 + 8ll) = HEAD$4;
				}
				label$206:;
				if( IMP_TAIL$1 == (struct $10FBSYMCHAIN*)0ull ) goto label$209;
				{
					*(struct $10FBSYMCHAIN**)((uint8*)IMP_TAIL$1 + 40ll) = CHAIN_$4;
				}
				goto label$208;
				label$209:;
				{
					IMP_HEAD$1 = CHAIN_$4;
				}
				label$208:;
				*(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$4 + 40ll) = (struct $10FBSYMCHAIN*)0ull;
				IMP_TAIL$1 = CHAIN_$4;
			}
			label$205:;
			label$204:;
		}
		label$203:;
		label$202:;
		S$1 = *(struct $8FBSYMBOL**)((uint8*)S$1 + 296ll);
	}
	goto label$200;
	label$201:;
	*(struct $10FBSYMCHAIN**)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) + 40ll) = IMP_HEAD$1;
	*(struct $10FBSYMCHAIN**)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) + 48ll) = IMP_TAIL$1;
	label$199:;
}

void SYMBHASHLISTREMOVENAMESPACE( struct $8FBSYMBOL* NS$1 )
{
	label$210:;
	struct $10FBSYMCHAIN* CHAIN_$1;
	CHAIN_$1 = *(struct $10FBSYMCHAIN**)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) + 40ll);
	label$212:;
	if( CHAIN_$1 == (struct $10FBSYMCHAIN*)0ull ) goto label$213;
	{
		struct $10FBSYMCHAIN* PRV$2;
		struct $10FBSYMCHAIN* NXT$2;
		PRV$2 = *(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$1 + 24ll);
		NXT$2 = *(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$1 + 8ll);
		if( PRV$2 == (struct $10FBSYMCHAIN*)0ull ) goto label$215;
		{
			*(struct $10FBSYMCHAIN**)((uint8*)PRV$2 + 8ll) = NXT$2;
			if( NXT$2 == (struct $10FBSYMCHAIN*)0ull ) goto label$217;
			{
				*(struct $10FBSYMCHAIN**)((uint8*)NXT$2 + 24ll) = PRV$2;
			}
			label$217:;
			label$216:;
		}
		goto label$214;
		label$215:;
		{
			if( NXT$2 == (struct $10FBSYMCHAIN*)0ull ) goto label$219;
			{
				*(struct $10FBSYMCHAIN**)((uint8*)NXT$2 + 24ll) = (struct $10FBSYMCHAIN*)0ull;
				*(void**)((uint8*)*(struct $8HASHITEM**)((uint8*)CHAIN_$1 + 32ll) + 8ll) = (void*)NXT$2;
			}
			goto label$218;
			label$219:;
			{
				HASHDEL( (struct $5THASH*)((uint8*)&SYMB$ + 197080ll), *(struct $8HASHITEM**)((uint8*)CHAIN_$1 + 32ll), *(uint64*)((uint8*)*(struct $8FBSYMBOL**)CHAIN_$1 + 248ll) );
			}
			label$218:;
		}
		label$214:;
		NXT$2 = *(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$1 + 40ll);
		LISTDELNODE( (struct $5TLIST*)((uint8*)&SYMB$ + 197104ll), (void*)CHAIN_$1 );
		CHAIN_$1 = NXT$2;
	}
	goto label$212;
	label$213:;
	*(struct $10FBSYMCHAIN**)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) + 40ll) = (struct $10FBSYMCHAIN*)0ull;
	*(struct $10FBSYMCHAIN**)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) + 48ll) = (struct $10FBSYMCHAIN*)0ull;
	label$211:;
}

struct $10FBSYMCHAIN* SYMBLOOKUP( uint8* ID$1, $8FB_TOKEN* TK$1, $10FB_TKCLASS* TK_CLASS$1, int64 PRESERVE_CASE$1 )
{
	struct $10FBSYMCHAIN* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$224:;
	static uint8 SNAME$1[129];
	*TK$1 = 265ll;
	*TK_CLASS$1 = 0ll;
	if( PRESERVE_CASE$1 != 0ll ) goto label$227;
	{
		HUCASE( ID$1, (uint8*)SNAME$1 );
		ID$1 = (uint8*)SNAME$1;
	}
	label$227:;
	label$226:;
	uint64 INDEX$1;
	uint64 vr$4 = HASHHASH( ID$1 );
	INDEX$1 = vr$4;
	struct $10FBSYMCHAIN* CHAIN_$1;
	CHAIN_$1 = (struct $10FBSYMCHAIN*)0ull;
	struct $8FBHASHTB* HASHTB$1;
	HASHTB$1 = *(struct $8FBHASHTB**)((uint8*)&SYMB$ + 80ll);
	label$228:;
	{
		struct $8FBSYMBOL* SYM$2;
		void* vr$7 = HASHLOOKUPEX( (struct $5THASH*)((uint8*)HASHTB$1 + 8ll), ID$1, INDEX$1 );
		SYM$2 = (struct $8FBSYMBOL*)vr$7;
		if( SYM$2 == (struct $8FBSYMBOL*)0ull ) goto label$232;
		{
			struct $10FBSYMCHAIN* vr$9 = CHAINPOOLNEXT(  );
			CHAIN_$1 = vr$9;
			*(struct $8FBSYMBOL**)CHAIN_$1 = SYM$2;
			*(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$1 + 8ll) = (struct $10FBSYMCHAIN*)0ull;
			*(int64*)((uint8*)CHAIN_$1 + 16ll) = 0ll;
			if( *(int64*)SYM$2 != 6ll ) goto label$234;
			{
				*TK$1 = *($8FB_TOKEN*)((uint8*)SYM$2 + 88ll);
				*TK_CLASS$1 = *($10FB_TKCLASS*)((uint8*)SYM$2 + 96ll);
				if( *(int64*)TK_CLASS$1 == 2ll ) goto label$236;
				{
					fb$result$1 = CHAIN_$1;
					goto label$225;
				}
				label$236:;
				label$235:;
			}
			label$234:;
			label$233:;
			if( *(struct $8FBSYMBOL**)HASHTB$1 == (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll) ) goto label$238;
			{
				fb$result$1 = CHAIN_$1;
				goto label$225;
			}
			goto label$237;
			label$238:;
			{
				if( *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll) != (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll) ) goto label$240;
				{
					fb$result$1 = CHAIN_$1;
					goto label$225;
				}
				label$240:;
				label$239:;
				goto label$229;
			}
			label$237:;
		}
		label$232:;
		label$231:;
		HASHTB$1 = *(struct $8FBHASHTB**)((uint8*)HASHTB$1 + 32ll);
	}
	label$230:;
	if( HASHTB$1 != (struct $8FBHASHTB*)0ull ) goto label$228;
	label$229:;
	struct $10FBSYMCHAIN* IMP_CHAIN$1;
	void* vr$29 = HASHLOOKUPEX( (struct $5THASH*)((uint8*)&SYMB$ + 197080ll), ID$1, INDEX$1 );
	IMP_CHAIN$1 = (struct $10FBSYMCHAIN*)vr$29;
	if( CHAIN_$1 != (struct $10FBSYMCHAIN*)0ull ) goto label$242;
	{
		fb$result$1 = IMP_CHAIN$1;
		goto label$225;
	}
	label$242:;
	label$241:;
	*(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$1 + 8ll) = IMP_CHAIN$1;
	fb$result$1 = CHAIN_$1;
	goto label$225;
	label$225:;
	return fb$result$1;
}

struct $10FBSYMCHAIN* SYMBLOOKUPAT( struct $8FBSYMBOL* NS$1, uint8* ID$1, int64 PRESERVE_CASE$1, int64 SEARCH_IMPORTS$1 )
{
	struct $10FBSYMCHAIN* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$265:;
	static uint8 SNAME$1[129];
	if( ((int64)-(*(int64*)NS$1 == 9ll) & ~(int64)-(*(int64*)((uint8*)NS$1 + 128ll) != 0ll)) == 0ll ) goto label$268;
	{
		goto label$266;
	}
	label$268:;
	label$267:;
	if( PRESERVE_CASE$1 != 0ll ) goto label$270;
	{
		HUCASE( ID$1, (uint8*)SNAME$1 );
		ID$1 = (uint8*)SNAME$1;
	}
	label$270:;
	label$269:;
	uint64 INDEX$1;
	uint64 vr$9 = HASHHASH( ID$1 );
	INDEX$1 = vr$9;
	struct $8FBSYMBOL* SYM$1;
	void* vr$12 = HASHLOOKUPEX( (struct $5THASH*)((uint8*)NS$1 + 120ll), ID$1, INDEX$1 );
	SYM$1 = (struct $8FBSYMBOL*)vr$12;
	if( SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$272;
	{
		if( SEARCH_IMPORTS$1 != 0ll ) goto label$274;
		{
			fb$result$1 = (struct $10FBSYMCHAIN*)0ull;
			goto label$266;
		}
		label$274:;
		label$273:;
	}
	goto label$271;
	label$272:;
	{
		struct $10FBSYMCHAIN* CHAIN_$2;
		struct $10FBSYMCHAIN* vr$15 = CHAINPOOLNEXT(  );
		CHAIN_$2 = vr$15;
		*(struct $8FBSYMBOL**)CHAIN_$2 = SYM$1;
		*(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$2 + 8ll) = (struct $10FBSYMCHAIN*)0ull;
		*(int64*)((uint8*)CHAIN_$2 + 16ll) = 0ll;
		fb$result$1 = CHAIN_$2;
		goto label$266;
	}
	label$271:;
	if( *(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) != (struct $13FBNAMESPC_EXT*)0ull ) goto label$276;
	{
		fb$result$1 = (struct $10FBSYMCHAIN*)0ull;
		goto label$266;
	}
	label$276:;
	label$275:;
	if( *(struct $8FBSYMBOL**)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) != (struct $8FBSYMBOL*)0ull ) goto label$278;
	{
		fb$result$1 = (struct $10FBSYMCHAIN*)0ull;
		goto label$266;
	}
	label$278:;
	label$277:;
	if( NS$1 != (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll) ) goto label$280;
	{
		struct $10FBSYMCHAIN* vr$26 = HLOOKUPIMPORTHASH( NS$1, ID$1, INDEX$1 );
		fb$result$1 = vr$26;
		goto label$266;
	}
	goto label$279;
	label$280:;
	{
		struct $10FBSYMCHAIN* vr$27 = HLOOKUPIMPORTLIST( NS$1, ID$1, INDEX$1 );
		fb$result$1 = vr$27;
		goto label$266;
	}
	label$279:;
	label$266:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBLOOKUPBYNAMEANDCLASS( struct $8FBSYMBOL* NS$1, uint8* ID$1, int64 CLASS_$1, int64 PRESERVE_CASE$1, int64 SEARCH_IMPORTS$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$281:;
	struct $10FBSYMCHAIN* CHAIN_$1;
	struct $10FBSYMCHAIN* vr$1 = SYMBLOOKUPAT( NS$1, ID$1, PRESERVE_CASE$1, SEARCH_IMPORTS$1 );
	CHAIN_$1 = vr$1;
	if( CHAIN_$1 == (struct $10FBSYMCHAIN*)0ull ) goto label$284;
	{
		struct $8FBSYMBOL* vr$3 = SYMBFINDBYCLASS( CHAIN_$1, CLASS_$1 );
		fb$result$1 = vr$3;
	}
	goto label$283;
	label$284:;
	{
		fb$result$1 = (struct $8FBSYMBOL*)0ull;
	}
	label$283:;
	label$282:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBLOOKUPBYNAMEANDSUFFIX( struct $8FBSYMBOL* NS$1, uint8* ID$1, int64 SUFFIX$1, int64 PRESERVE_CASE$1, int64 SEARCH_IMPORTS$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$285:;
	struct $10FBSYMCHAIN* CHAIN_$1;
	struct $10FBSYMCHAIN* vr$1 = SYMBLOOKUPAT( NS$1, ID$1, PRESERVE_CASE$1, SEARCH_IMPORTS$1 );
	CHAIN_$1 = vr$1;
	if( CHAIN_$1 == (struct $10FBSYMCHAIN*)0ull ) goto label$288;
	{
		if( SUFFIX$1 != 2147483648ll ) goto label$290;
		{
			int64 vr$4 = SYMBGETDEFTYPE( ID$1 );
			struct $8FBSYMBOL* vr$5 = SYMBFINDVARBYDEFTYPE( CHAIN_$1, vr$4 );
			fb$result$1 = vr$5;
		}
		goto label$289;
		label$290:;
		{
			struct $8FBSYMBOL* vr$6 = SYMBFINDVARBYSUFFIX( CHAIN_$1, SUFFIX$1 );
			fb$result$1 = vr$6;
		}
		label$289:;
	}
	goto label$287;
	label$288:;
	{
		fb$result$1 = (struct $8FBSYMBOL*)0ull;
	}
	label$287:;
	label$286:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBFINDBYCLASS( struct $10FBSYMCHAIN* CHAIN_$1, int64 CLASS_$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$291:;
	struct $8FBSYMBOL* SYM$1;
	int64 MATCH$1;
	MATCH$1 = 0ll;
	label$293:;
	if( CHAIN_$1 == (struct $10FBSYMCHAIN*)0ull ) goto label$294;
	{
		SYM$1 = *(struct $8FBSYMBOL**)CHAIN_$1;
		label$295:;
		{
			if( *(int64*)SYM$1 != CLASS_$1 ) goto label$299;
			{
				MATCH$1 = -1ll;
				goto label$294;
			}
			label$299:;
			label$298:;
			SYM$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 264ll);
		}
		label$297:;
		if( SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$295;
		label$296:;
		CHAIN_$1 = *(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$1 + 8ll);
	}
	goto label$293;
	label$294:;
	if( MATCH$1 != 0ll ) goto label$301;
	{
		fb$result$1 = (struct $8FBSYMBOL*)0ull;
		goto label$292;
	}
	label$301:;
	label$300:;
	if( *(int64*)SYM$1 != 1ll ) goto label$303;
	{
		int64 vr$11 = SYMBVARCHECKACCESS( SYM$1 );
		if( vr$11 == 0ll ) goto label$305;
		{
			fb$result$1 = SYM$1;
			goto label$292;
		}
		goto label$304;
		label$305:;
		{
			fb$result$1 = (struct $8FBSYMBOL*)0ull;
			goto label$292;
		}
		label$304:;
	}
	label$303:;
	label$302:;
	fb$result$1 = SYM$1;
	label$292:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBFINDVARBYSUFFIX( struct $10FBSYMCHAIN* CHAIN_$1, int64 SUFFIX$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$306:;
	struct $8FBSYMBOL* SYM$1;
	if( SUFFIX$1 != 16ll ) goto label$309;
	{
		label$310:;
		if( CHAIN_$1 == (struct $10FBSYMCHAIN*)0ull ) goto label$311;
		{
			SYM$1 = *(struct $8FBSYMBOL**)CHAIN_$1;
			label$312:;
			{
				if( *(int64*)SYM$1 != 1ll ) goto label$316;
				{
					{
						int64 TMP$101$6;
						TMP$101$6 = *(int64*)((uint8*)SYM$1 + 48ll) & 511ll;
						if( TMP$101$6 == 16ll ) goto label$319;
						label$320:;
						if( TMP$101$6 == 17ll ) goto label$319;
						label$321:;
						if( TMP$101$6 != 3ll ) goto label$318;
						label$319:;
						{
							goto label$322;
						}
						label$318:;
						label$317:;
					}
				}
				label$316:;
				label$315:;
				SYM$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 264ll);
			}
			label$314:;
			if( SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$312;
			label$313:;
			CHAIN_$1 = *(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$1 + 8ll);
		}
		goto label$310;
		label$311:;
	}
	goto label$308;
	label$309:;
	{
		label$323:;
		if( CHAIN_$1 == (struct $10FBSYMCHAIN*)0ull ) goto label$324;
		{
			SYM$1 = *(struct $8FBSYMBOL**)CHAIN_$1;
			label$325:;
			{
				if( *(int64*)SYM$1 != 1ll ) goto label$329;
				{
					if( (*(int64*)((uint8*)SYM$1 + 48ll) & 511ll) != SUFFIX$1 ) goto label$331;
					{
						goto label$322;
					}
					label$331:;
					label$330:;
				}
				label$329:;
				label$328:;
				SYM$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 264ll);
			}
			label$327:;
			if( SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$325;
			label$326:;
			CHAIN_$1 = *(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$1 + 8ll);
		}
		goto label$323;
		label$324:;
	}
	label$308:;
	fb$result$1 = (struct $8FBSYMBOL*)0ull;
	goto label$307;
	label$322:;
	int64 vr$24 = SYMBVARCHECKACCESS( SYM$1 );
	if( vr$24 == 0ll ) goto label$333;
	{
		fb$result$1 = SYM$1;
	}
	goto label$332;
	label$333:;
	{
		fb$result$1 = (struct $8FBSYMBOL*)0ull;
	}
	label$332:;
	label$307:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBFINDVARBYDEFTYPE( struct $10FBSYMCHAIN* CHAIN_$1, int64 DEF_DTYPE$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$334:;
	struct $8FBSYMBOL* SYM$1;
	if( DEF_DTYPE$1 != 16ll ) goto label$337;
	{
		label$338:;
		if( CHAIN_$1 == (struct $10FBSYMCHAIN*)0ull ) goto label$339;
		{
			SYM$1 = *(struct $8FBSYMBOL**)CHAIN_$1;
			label$340:;
			{
				if( *(int64*)SYM$1 != 1ll ) goto label$344;
				{
					if( (*(int64*)((uint8*)SYM$1 + 8ll) & 268435456ll) == 0ll ) goto label$346;
					{
						{
							$11FB_DATATYPE TMP$102$7;
							TMP$102$7 = *($11FB_DATATYPE*)((uint8*)SYM$1 + 48ll);
							if( TMP$102$7 == 16ll ) goto label$349;
							label$350:;
							if( TMP$102$7 == 17ll ) goto label$349;
							label$351:;
							if( TMP$102$7 != 3ll ) goto label$348;
							label$349:;
							{
								goto label$352;
							}
							label$348:;
							label$347:;
						}
					}
					goto label$345;
					label$346:;
					{
						goto label$352;
					}
					label$345:;
				}
				label$344:;
				label$343:;
				SYM$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 264ll);
			}
			label$342:;
			if( SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$340;
			label$341:;
			CHAIN_$1 = *(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$1 + 8ll);
		}
		goto label$338;
		label$339:;
	}
	goto label$336;
	label$337:;
	{
		label$353:;
		if( CHAIN_$1 == (struct $10FBSYMCHAIN*)0ull ) goto label$354;
		{
			SYM$1 = *(struct $8FBSYMBOL**)CHAIN_$1;
			label$355:;
			{
				if( *(int64*)SYM$1 != 1ll ) goto label$359;
				{
					if( (*(int64*)((uint8*)SYM$1 + 8ll) & 268435456ll) == 0ll ) goto label$361;
					{
						if( (*(int64*)((uint8*)SYM$1 + 48ll) & 511ll) != DEF_DTYPE$1 ) goto label$363;
						{
							goto label$352;
						}
						label$363:;
						label$362:;
					}
					goto label$360;
					label$361:;
					{
						goto label$352;
					}
					label$360:;
				}
				label$359:;
				label$358:;
				SYM$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 264ll);
			}
			label$357:;
			if( SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$355;
			label$356:;
			CHAIN_$1 = *(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$1 + 8ll);
		}
		goto label$353;
		label$354:;
	}
	label$336:;
	fb$result$1 = (struct $8FBSYMBOL*)0ull;
	goto label$335;
	label$352:;
	int64 vr$29 = SYMBVARCHECKACCESS( SYM$1 );
	if( vr$29 == 0ll ) goto label$365;
	{
		fb$result$1 = SYM$1;
	}
	goto label$364;
	label$365:;
	{
		fb$result$1 = (struct $8FBSYMBOL*)0ull;
	}
	label$364:;
	label$335:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBFINDVARBYTYPE( struct $10FBSYMCHAIN* CHAIN_$1, int64 DTYPE$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$366:;
	struct $8FBSYMBOL* SYM$1;
	label$368:;
	if( CHAIN_$1 == (struct $10FBSYMCHAIN*)0ull ) goto label$369;
	{
		SYM$1 = *(struct $8FBSYMBOL**)CHAIN_$1;
		label$370:;
		{
			if( *(int64*)SYM$1 != 1ll ) goto label$374;
			{
				if( *(int64*)((uint8*)SYM$1 + 48ll) != DTYPE$1 ) goto label$376;
				{
					goto label$377;
				}
				label$376:;
				label$375:;
			}
			label$374:;
			label$373:;
			SYM$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 264ll);
		}
		label$372:;
		if( SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$370;
		label$371:;
		CHAIN_$1 = *(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$1 + 8ll);
	}
	goto label$368;
	label$369:;
	fb$result$1 = (struct $8FBSYMBOL*)0ull;
	goto label$367;
	label$377:;
	int64 vr$10 = SYMBVARCHECKACCESS( SYM$1 );
	if( vr$10 == 0ll ) goto label$379;
	{
		fb$result$1 = SYM$1;
	}
	goto label$378;
	label$379:;
	{
		fb$result$1 = (struct $8FBSYMBOL*)0ull;
	}
	label$378:;
	label$367:;
	return fb$result$1;
}

void SYMBDELFROMCHAINLIST( struct $8FBSYMBOL* S$1 )
{
	label$380:;
	struct $8FBSYMBOL* PRV$1;
	struct $8FBSYMBOL* NXT$1;
	PRV$1 = *(struct $8FBSYMBOL**)((uint8*)S$1 + 256ll);
	NXT$1 = *(struct $8FBSYMBOL**)((uint8*)S$1 + 264ll);
	if( PRV$1 == (struct $8FBSYMBOL*)0ull ) goto label$383;
	{
		*(struct $8FBSYMBOL**)((uint8*)PRV$1 + 264ll) = NXT$1;
		if( NXT$1 == (struct $8FBSYMBOL*)0ull ) goto label$385;
		{
			*(struct $8FBSYMBOL**)((uint8*)NXT$1 + 256ll) = PRV$1;
		}
		label$385:;
		label$384:;
	}
	goto label$382;
	label$383:;
	{
		if( NXT$1 == (struct $8FBSYMBOL*)0ull ) goto label$387;
		{
			*(struct $8FBSYMBOL**)((uint8*)NXT$1 + 256ll) = (struct $8FBSYMBOL*)0ull;
			*(void**)((uint8*)*(struct $8HASHITEM**)((uint8*)S$1 + 240ll) + 8ll) = (void*)NXT$1;
			*(uint8**)*(struct $8HASHITEM**)((uint8*)S$1 + 240ll) = *(uint8**)((uint8*)NXT$1 + 24ll);
		}
		goto label$386;
		label$387:;
		{
			HASHDEL( (struct $5THASH*)((uint8*)*(struct $8FBHASHTB**)((uint8*)S$1 + 232ll) + 8ll), *(struct $8HASHITEM**)((uint8*)S$1 + 240ll), *(uint64*)((uint8*)S$1 + 248ll) );
		}
		label$386:;
	}
	label$382:;
	label$381:;
}

void SYMBDELFROMHASH( struct $8FBSYMBOL* S$1 )
{
	label$388:;
	if( *(struct $8HASHITEM**)((uint8*)S$1 + 240ll) != (struct $8HASHITEM*)0ull ) goto label$391;
	{
		goto label$389;
	}
	label$391:;
	label$390:;
	SYMBDELFROMCHAINLIST( S$1 );
	*(struct $8HASHITEM**)((uint8*)S$1 + 240ll) = (struct $8HASHITEM*)0ull;
	label$389:;
}

void SYMBFREESYMBOL( struct $8FBSYMBOL* S$1 )
{
	label$392:;
	if( (*(int64*)((uint8*)S$1 + 48ll) & 31ll) != 21ll ) goto label$395;
	{
		SYMBREMOVEFROMFWDREF( *(struct $8FBSYMBOL**)((uint8*)S$1 + 56ll), S$1 );
	}
	label$395:;
	label$394:;
	SYMBDELFROMHASH( S$1 );
	SYMBFREESYMBOL_UNLINKONLY( S$1 );
	SYMBFREESYMBOL_REMONLY( S$1 );
	label$393:;
}

void SYMBFREESYMBOL_REMONLY( struct $8FBSYMBOL* S$1 )
{
	label$396:;
	POOLDELITEM( (struct $5TPOOL*)((uint8*)&SYMB$ + 197168ll), *(void**)((uint8*)S$1 + 24ll) );
	if( *(uint8**)((uint8*)S$1 + 32ll) == (uint8*)0ull ) goto label$399;
	{
		free( *(void**)((uint8*)S$1 + 32ll) );
	}
	label$399:;
	label$398:;
	if( *(uint8**)((uint8*)S$1 + 40ll) == (uint8*)0ull ) goto label$401;
	{
		free( *(void**)((uint8*)S$1 + 40ll) );
	}
	label$401:;
	label$400:;
	LISTDELNODE( (struct $5TLIST*)((uint8*)&SYMB$ + 8ll), (void*)S$1 );
	label$397:;
}

void SYMBFREESYMBOL_UNLINKONLY( struct $8FBSYMBOL* S$1 )
{
	label$402:;
	struct $10FBSYMBOLTB* TB$1;
	struct $8FBSYMBOL* PRV$1;
	struct $8FBSYMBOL* NXT$1;
	TB$1 = *(struct $10FBSYMBOLTB**)((uint8*)S$1 + 272ll);
	PRV$1 = *(struct $8FBSYMBOL**)((uint8*)S$1 + 288ll);
	NXT$1 = *(struct $8FBSYMBOL**)((uint8*)S$1 + 296ll);
	if( PRV$1 == (struct $8FBSYMBOL*)0ull ) goto label$405;
	{
		*(struct $8FBSYMBOL**)((uint8*)PRV$1 + 296ll) = NXT$1;
	}
	goto label$404;
	label$405:;
	{
		*(struct $8FBSYMBOL**)((uint8*)TB$1 + 8ll) = NXT$1;
	}
	label$404:;
	if( NXT$1 == (struct $8FBSYMBOL*)0ull ) goto label$407;
	{
		*(struct $8FBSYMBOL**)((uint8*)NXT$1 + 288ll) = PRV$1;
	}
	goto label$406;
	label$407:;
	{
		*(struct $8FBSYMBOL**)((uint8*)TB$1 + 16ll) = PRV$1;
	}
	label$406:;
	*(struct $8FBSYMBOL**)((uint8*)S$1 + 288ll) = (struct $8FBSYMBOL*)0ull;
	*(struct $8FBSYMBOL**)((uint8*)S$1 + 296ll) = (struct $8FBSYMBOL*)0ull;
	label$403:;
}

void SYMBDELSYMBOL( struct $8FBSYMBOL* S$1, int64 IS_TBDEL$1 )
{
	label$408:;
	{
		uint64 TMP$103$2;
		TMP$103$2 = *(uint64*)S$1;
		goto label$411;
		label$412:;
		{
			SYMBDELVAR( S$1, IS_TBDEL$1 );
		}
		goto label$410;
		label$413:;
		{
			SYMBDELCONST( S$1 );
		}
		goto label$410;
		label$414:;
		{
			SYMBDELPROTOTYPE( S$1 );
		}
		goto label$410;
		label$415:;
		{
			SYMBDELDEFINE( S$1 );
		}
		goto label$410;
		label$416:;
		{
			SYMBDELLABEL( S$1 );
		}
		goto label$410;
		label$417:;
		{
			SYMBDELENUM( S$1 );
		}
		goto label$410;
		label$418:;
		{
			SYMBDELSTRUCT( S$1 );
		}
		goto label$410;
		label$419:;
		{
			SYMBDELSCOPE( S$1 );
		}
		goto label$410;
		label$420:;
		{
			SYMBDELNAMESPACE( S$1 );
		}
		goto label$410;
		label$421:;
		{
			SYMBNAMESPACEREMOVE( S$1, 0ll );
		}
		goto label$410;
		label$422:;
		{
			SYMBFREESYMBOL( S$1 );
		}
		goto label$410;
		label$411:;
		static const void* tmp$104[16ll] = {
			&&label$412,
			&&label$413,
			&&label$414,
			&&label$422,
			&&label$415,
			&&label$422,
			&&label$416,
			&&label$420,
			&&label$417,
			&&label$418,
			&&label$422,
			&&label$412,
			&&label$422,
			&&label$422,
			&&label$419,
			&&label$421,
		};
		if( TMP$103$2 < 1ll ) goto label$422;
		if( TMP$103$2 > 16ll ) goto label$422;
		goto *tmp$104[TMP$103$2 - 1ll];
		label$410:;
	}
	label$409:;
}

struct $8FBSYMBOL* SYMBCLONESYMBOL( struct $8FBSYMBOL* S$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$423:;
	int64 ARRAYDTYPE$1;
	struct $8FBSYMBOL* ARRAYSUBTYPE$1;
	{
		uint64 TMP$105$2;
		TMP$105$2 = *(uint64*)S$1;
		goto label$426;
		label$427:;
		{
			struct $8FBSYMBOL* vr$2 = SYMBADDPROCPTRFROMFUNCTION( S$1 );
			fb$result$1 = vr$2;
		}
		goto label$425;
		label$428:;
		{
			struct $8FBSYMBOL* vr$3 = SYMBCLONEVAR( S$1 );
			fb$result$1 = vr$3;
		}
		goto label$425;
		label$429:;
		{
			struct $8FBSYMBOL* vr$4 = SYMBCLONECONST( S$1 );
			fb$result$1 = vr$4;
		}
		goto label$425;
		label$430:;
		{
			struct $8FBSYMBOL* vr$5 = SYMBCLONELABEL( S$1 );
			fb$result$1 = vr$5;
		}
		goto label$425;
		label$431:;
		{
			SYMBGETDESCTYPEARRAYDTYPE( S$1, &ARRAYDTYPE$1, &ARRAYSUBTYPE$1 );
			int64 vr$8 = SYMBGETDESCTYPEDIMENSIONS( S$1 );
			struct $8FBSYMBOL* vr$9 = SYMBADDARRAYDESCRIPTORTYPE( vr$8, ARRAYDTYPE$1, ARRAYSUBTYPE$1 );
			fb$result$1 = vr$9;
		}
		goto label$425;
		label$432:;
		{
			fb$result$1 = (struct $8FBSYMBOL*)0ull;
		}
		goto label$425;
		label$426:;
		static const void* tmp$106[10ll] = {
			&&label$428,
			&&label$429,
			&&label$427,
			&&label$432,
			&&label$432,
			&&label$432,
			&&label$430,
			&&label$432,
			&&label$432,
			&&label$431,
		};
		if( TMP$105$2 < 1ll ) goto label$432;
		if( TMP$105$2 > 10ll ) goto label$432;
		goto *tmp$106[TMP$105$2 - 1ll];
		label$425:;
	}
	label$424:;
	return fb$result$1;
}

void SYMBDELGLOBALTB( void )
{
	label$433:;
	label$435:;
	{
		struct $8FBSYMBOL* S$2;
		S$2 = *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 196808ll);
		if( S$2 != (struct $8FBSYMBOL*)0ull ) goto label$439;
		{
			goto label$436;
		}
		label$439:;
		label$438:;
		SYMBDELSYMBOL( S$2, -1ll );
	}
	label$437:;
	goto label$435;
	label$436:;
	label$434:;
}

void SYMBDELSYMBOLTB( struct $10FBSYMBOLTB* TB$1, int64 HASHONLY$1 )
{
	label$440:;
	if( HASHONLY$1 == 0ll ) goto label$443;
	{
		struct $8FBSYMBOL* S$2;
		S$2 = *(struct $8FBSYMBOL**)((uint8*)TB$1 + 8ll);
		label$444:;
		if( S$2 == (struct $8FBSYMBOL*)0ull ) goto label$445;
		{
			SYMBDELFROMHASH( S$2 );
			if( *(int64*)S$2 != 16ll ) goto label$447;
			{
				SYMBNAMESPACEREMOVE( S$2, -1ll );
			}
			label$447:;
			label$446:;
			S$2 = *(struct $8FBSYMBOL**)((uint8*)S$2 + 296ll);
		}
		goto label$444;
		label$445:;
	}
	goto label$442;
	label$443:;
	{
		label$448:;
		{
			struct $8FBSYMBOL* S$3;
			S$3 = *(struct $8FBSYMBOL**)((uint8*)TB$1 + 16ll);
			if( S$3 != (struct $8FBSYMBOL*)0ull ) goto label$452;
			{
				goto label$449;
			}
			label$452:;
			label$451:;
			SYMBDELSYMBOL( S$3, -1ll );
		}
		label$450:;
		goto label$448;
		label$449:;
	}
	label$442:;
	label$441:;
}

int64 SYMBHASCTOR( struct $8FBSYMBOL* SYM$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$453:;
	int64 vr$3 = TYPEHASCTOR( *(int64*)((uint8*)SYM$1 + 48ll), *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll) );
	fb$result$1 = vr$3;
	label$454:;
	return fb$result$1;
}

int64 SYMBHASDEFCTOR( struct $8FBSYMBOL* SYM$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$455:;
	int64 vr$3 = TYPEHASDEFCTOR( *(int64*)((uint8*)SYM$1 + 48ll), *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll) );
	fb$result$1 = vr$3;
	label$456:;
	return fb$result$1;
}

int64 SYMBHASDTOR( struct $8FBSYMBOL* SYM$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$457:;
	int64 vr$3 = TYPEHASDTOR( *(int64*)((uint8*)SYM$1 + 48ll), *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll) );
	fb$result$1 = vr$3;
	label$458:;
	return fb$result$1;
}

int64 SYMBISDATADESC( struct $8FBSYMBOL* SYM$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$459:;
	if( (*(int64*)((uint8*)SYM$1 + 48ll) & 511ll) != 18ll ) goto label$462;
	{
		fb$result$1 = (int64)-(*(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll) == *(struct $8FBSYMBOL**)((uint8*)&AST$ + 232ll));
	}
	label$462:;
	label$461:;
	label$460:;
	return fb$result$1;
}

int64 SYMBISARRAY( struct $8FBSYMBOL* SYM$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$463:;
	{
		$12FB_SYMBCLASS TMP$107$2;
		TMP$107$2 = *($12FB_SYMBCLASS*)SYM$1;
		if( TMP$107$2 == 1ll ) goto label$467;
		label$468:;
		if( TMP$107$2 != 12ll ) goto label$466;
		label$467:;
		{
			fb$result$1 = (int64)-(*(int64*)((uint8*)SYM$1 + 96ll) != 0ll);
		}
		goto label$465;
		label$466:;
		{
			fb$result$1 = 0ll;
		}
		label$469:;
		label$465:;
	}
	label$464:;
	return fb$result$1;
}

int64 SYMBISSTRING( int64 DTYPE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$470:;
	{
		uint64 TMP$108$2;
		TMP$108$2 = (uint64)DTYPE$1;
		goto label$473;
		label$474:;
		{
			fb$result$1 = -1ll;
		}
		goto label$472;
		label$475:;
		{
			fb$result$1 = 0ll;
		}
		goto label$472;
		label$473:;
		static const void* tmp$109[15ll] = {
			&&label$474,
			&&label$475,
			&&label$475,
			&&label$474,
			&&label$475,
			&&label$475,
			&&label$475,
			&&label$475,
			&&label$475,
			&&label$475,
			&&label$475,
			&&label$475,
			&&label$475,
			&&label$474,
			&&label$474,
		};
		if( TMP$108$2 < 3ll ) goto label$475;
		if( TMP$108$2 > 17ll ) goto label$475;
		goto *tmp$109[TMP$108$2 - 3ll];
		label$472:;
	}
	label$471:;
	return fb$result$1;
}

int64 SYMBISEQUAL( struct $8FBSYMBOL* SYM1$1, struct $8FBSYMBOL* SYM2$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$476:;
	struct $8FBSYMBOL* PARAML$1;
	struct $8FBSYMBOL* PARAMR$1;
	fb$result$1 = 0ll;
	if( SYM1$1 != SYM2$1 ) goto label$479;
	{
		fb$result$1 = -1ll;
		goto label$477;
	}
	label$479:;
	label$478:;
	if( ((int64)-(SYM1$1 == (struct $8FBSYMBOL*)0ull) | (int64)-(SYM2$1 == (struct $8FBSYMBOL*)0ull)) == 0ll ) goto label$481;
	{
		goto label$477;
	}
	label$481:;
	label$480:;
	if( *(int64*)SYM1$1 == *(int64*)SYM2$1 ) goto label$483;
	{
		goto label$477;
	}
	label$483:;
	label$482:;
	if( *(int64*)SYM1$1 != 14ll ) goto label$485;
	{
		fb$result$1 = 0ll;
		goto label$477;
	}
	label$485:;
	label$484:;
	if( *(int64*)((uint8*)SYM1$1 + 48ll) == *(int64*)((uint8*)SYM2$1 + 48ll) ) goto label$487;
	{
		goto label$477;
	}
	label$487:;
	label$486:;
	{
		$12FB_SYMBCLASS TMP$110$2;
		TMP$110$2 = *($12FB_SYMBCLASS*)SYM1$1;
		if( TMP$110$2 != 10ll ) goto label$489;
		label$490:;
		{
			int64 vr$16 = SYMBGETUDTBASELEVEL( SYM1$1, SYM2$1 );
			fb$result$1 = (int64)-(vr$16 > 0ll);
			goto label$477;
		}
		goto label$488;
		label$489:;
		if( TMP$110$2 != 9ll ) goto label$491;
		label$492:;
		{
			goto label$477;
		}
		goto label$488;
		label$491:;
		if( TMP$110$2 != 3ll ) goto label$493;
		label$494:;
		{
			if( (int64)-((*(int64*)((uint8*)SYM1$1 + 8ll) & 33554432ll) != 0ll) == (int64)-((*(int64*)((uint8*)SYM2$1 + 8ll) & 33554432ll) != 0ll) ) goto label$496;
			{
				goto label$477;
			}
			label$496:;
			label$495:;
			int64 vr$27 = SYMBAREPROCMODESEQUAL( SYM1$1, SYM2$1 );
			if( vr$27 != 0ll ) goto label$498;
			{
				goto label$477;
			}
			label$498:;
			label$497:;
			if( (int64)*(int16*)((uint8*)SYM1$1 + 112ll) == (int64)*(int16*)((uint8*)SYM2$1 + 112ll) ) goto label$500;
			{
				goto label$477;
			}
			label$500:;
			label$499:;
			PARAML$1 = *(struct $8FBSYMBOL**)((uint8*)SYM1$1 + 128ll);
			PARAMR$1 = *(struct $8FBSYMBOL**)((uint8*)SYM2$1 + 128ll);
			label$501:;
			if( PARAML$1 == (struct $8FBSYMBOL*)0ull ) goto label$502;
			{
				int64 vr$37 = SYMBPARAMISSAME( PARAML$1, PARAMR$1 );
				if( vr$37 != 0ll ) goto label$504;
				{
					goto label$477;
				}
				label$504:;
				label$503:;
				PARAML$1 = *(struct $8FBSYMBOL**)((uint8*)PARAML$1 + 296ll);
				PARAMR$1 = *(struct $8FBSYMBOL**)((uint8*)PARAMR$1 + 296ll);
			}
			goto label$501;
			label$502:;
		}
		label$493:;
		label$488:;
	}
	if( *(struct $8FBSYMBOL**)((uint8*)SYM1$1 + 56ll) == *(struct $8FBSYMBOL**)((uint8*)SYM2$1 + 56ll) ) goto label$506;
	{
		int64 vr$46 = SYMBISEQUAL( *(struct $8FBSYMBOL**)((uint8*)SYM1$1 + 56ll), *(struct $8FBSYMBOL**)((uint8*)SYM2$1 + 56ll) );
		fb$result$1 = vr$46;
	}
	goto label$505;
	label$506:;
	{
		fb$result$1 = -1ll;
	}
	label$505:;
	label$477:;
	return fb$result$1;
}

FBSTRING* SYMBTYPETOSTR( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, int64 LENGTH$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$507:;
	FBSTRING S$1;
	__builtin_memset( &S$1, 0, 24ll );
	int64 DTYPEONLY$1;
	int64 PTRCOUNT$1;
	if( DTYPE$1 != 2147483648ll ) goto label$510;
	{
		fb_StrDelete( &S$1 );
		goto label$508;
	}
	label$510:;
	label$509:;
	PTRCOUNT$1 = (DTYPE$1 & 480ll) >> 5ll;
	if( (DTYPE$1 & (1ll << (PTRCOUNT$1 + 9ll))) == 0ll ) goto label$512;
	{
		fb_StrAssign( (void*)&S$1, -1ll, (void*)"const ", 7ll, 0 );
	}
	goto label$511;
	label$512:;
	{
		fb_StrAssign( (void*)&S$1, -1ll, (void*)"", 1ll, 0 );
	}
	label$511:;
	DTYPEONLY$1 = DTYPE$1 & 31ll;
	{
		uint64 TMP$112$2;
		TMP$112$2 = (uint64)DTYPEONLY$1;
		goto label$514;
		label$515:;
		{
			FBSTRING TMP$113$3;
			__builtin_memset( &TMP$113$3, 0, 24ll );
			FBSTRING* vr$17 = fb_StrConcat( &TMP$113$3, (void*)&S$1, -1ll, *(void**)((uint8*)SUBTYPE$1 + 24ll), 0ll );
			FBSTRING* vr$19 = fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$17, -1ll, 0 );
		}
		goto label$513;
		label$516:;
		{
			FBSTRING TMP$114$3;
			__builtin_memset( &TMP$114$3, 0, 24ll );
			FBSTRING* vr$24 = fb_StrConcat( &TMP$114$3, (void*)&S$1, -1ll, *(void**)(((uint8*)SYMB_DTYPETB$ + (DTYPEONLY$1 * 56ll)) + 48ll), 0ll );
			FBSTRING* vr$26 = fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$24, -1ll, 0 );
			if( LENGTH$1 <= 0ll ) goto label$518;
			{
				{
					if( DTYPEONLY$1 != 17ll ) goto label$520;
					label$521:;
					{
						LENGTH$1 = LENGTH$1 + -1ll;
					}
					goto label$519;
					label$520:;
					if( DTYPEONLY$1 != 6ll ) goto label$522;
					label$523:;
					{
						LENGTH$1 = LENGTH$1 / *(int64*)((uint8*)SYMB_DTYPETB$ + 344ll);
					}
					label$522:;
					label$519:;
				}
				FBSTRING* vr$33 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)" * ", 4ll, 0 );
				FBSTRING* vr$34 = fb_LongintToStr( LENGTH$1 );
				FBSTRING* vr$36 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)vr$34, -1ll, 0 );
			}
			label$518:;
			label$517:;
		}
		goto label$513;
		label$524:;
		{
			PTRCOUNT$1 = PTRCOUNT$1 + -1ll;
			if( PTRCOUNT$1 <= 0ll ) goto label$526;
			{
				FBSTRING* vr$40 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"typeof(", 8ll, 0 );
			}
			label$526:;
			label$525:;
			FBSTRING* vr$41 = SYMBPROCPTRTOSTR( SUBTYPE$1 );
			FBSTRING* vr$43 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)vr$41, -1ll, 0 );
			if( PTRCOUNT$1 <= 0ll ) goto label$528;
			{
				FBSTRING* vr$46 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)")", 2ll, 0 );
			}
			label$528:;
			label$527:;
		}
		goto label$513;
		label$529:;
		{
			FBSTRING TMP$118$3;
			__builtin_memset( &TMP$118$3, 0, 24ll );
			FBSTRING* vr$51 = fb_StrConcat( &TMP$118$3, (void*)&S$1, -1ll, *(void**)(((uint8*)SYMB_DTYPETB$ + (DTYPEONLY$1 * 56ll)) + 48ll), 0ll );
			FBSTRING* vr$53 = fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$51, -1ll, 0 );
		}
		goto label$513;
		label$514:;
		static const void* tmp$121[19ll] = {
			&&label$516,
			&&label$529,
			&&label$529,
			&&label$516,
			&&label$529,
			&&label$529,
			&&label$515,
			&&label$529,
			&&label$529,
			&&label$529,
			&&label$529,
			&&label$529,
			&&label$529,
			&&label$529,
			&&label$516,
			&&label$515,
			&&label$529,
			&&label$524,
			&&label$515,
		};
		if( TMP$112$2 < 3ll ) goto label$529;
		if( TMP$112$2 > 21ll ) goto label$529;
		goto *tmp$121[TMP$112$2 - 3ll];
		label$513:;
	}
	{
		int64 I$2;
		I$2 = PTRCOUNT$1 + -1ll;
		goto label$530;
		label$533:;
		{
			if( (DTYPE$1 & (1ll << (I$2 + 9ll))) == 0ll ) goto label$535;
			{
				FBSTRING* vr$60 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)" const", 7ll, 0 );
			}
			label$535:;
			label$534:;
			FBSTRING* vr$62 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)" ptr", 5ll, 0 );
		}
		label$531:;
		I$2 = I$2 + -1ll;
		label$530:;
		if( I$2 >= 0ll ) goto label$533;
		label$532:;
	}
	FBSTRING* vr$67 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&S$1, -1ll, 0 );
	fb_StrDelete( &S$1 );
	label$508:;
	FBSTRING* vr$70 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$70;
}

int64 SYMBGETDEFTYPE( uint8* SYMBOL$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$536:;
	int64 C$1;
	int64 I$1;
	C$1 = (int64)*(uint8*)SYMBOL$1;
	if( ((int64)-((uint64)C$1 >= 97ull) & (int64)-((uint64)C$1 <= 122ull)) == 0ll ) goto label$539;
	{
		C$1 = (int64)((uint64)C$1 + 18446744073709551584ull);
	}
	label$539:;
	label$538:;
	I$1 = (int64)((uint64)C$1 + 18446744073709551551ull);
	if( ((int64)-(I$1 < 0ll) | (int64)-(I$1 > 30ll)) == 0ll ) goto label$541;
	{
		if( *(int64*)((uint8*)&ENV$ + 272ll) != 3ll ) goto label$543;
		{
			fb$result$1 = 14ll;
		}
		goto label$542;
		label$543:;
		{
			fb$result$1 = 7ll;
		}
		label$542:;
	}
	goto label$540;
	label$541:;
	{
		fb$result$1 = *(int64*)((uint8*)DEFTYPETB$ + (I$1 << 3ll));
	}
	label$540:;
	label$537:;
	return fb$result$1;
}

void SYMBSETDEFTYPE( int64 ICHAR$1, int64 ECHAR$1, int64 DTYPE$1 )
{
	label$544:;
	int64 I$1;
	if( (uint64)ICHAR$1 >= 65ull ) goto label$547;
	{
		ICHAR$1 = 65ll;
	}
	goto label$546;
	label$547:;
	if( (uint64)ICHAR$1 <= 95ull ) goto label$548;
	{
		ICHAR$1 = 95ll;
	}
	label$548:;
	label$546:;
	if( (uint64)ECHAR$1 >= 65ull ) goto label$550;
	{
		ECHAR$1 = 65ll;
	}
	goto label$549;
	label$550:;
	if( (uint64)ECHAR$1 <= 95ull ) goto label$551;
	{
		ECHAR$1 = 95ll;
	}
	label$551:;
	label$549:;
	if( ICHAR$1 <= ECHAR$1 ) goto label$553;
	{
		{
			int64 TMP$124$3;
			TMP$124$3 = ICHAR$1;
			ICHAR$1 = ECHAR$1;
			ECHAR$1 = TMP$124$3;
		}
	}
	label$553:;
	label$552:;
	{
		I$1 = ICHAR$1;
		int64 TMP$125$2;
		TMP$125$2 = ECHAR$1;
		goto label$554;
		label$557:;
		{
			*(int64*)((uint8*)DEFTYPETB$ + ((int64)((uint64)I$1 + 18446744073709551551ull) << 3ll)) = DTYPE$1;
		}
		label$555:;
		I$1 = I$1 + 1ll;
		label$554:;
		if( I$1 <= TMP$125$2 ) goto label$557;
		label$556:;
	}
	label$545:;
}

void SYMBRECALCLEN( struct $8FBSYMBOL* SYM$1 )
{
	label$558:;
	if( *(int64*)SYM$1 != 4ll ) goto label$561;
	{
		int64 vr$5 = SYMBCALCPARAMLEN( *(int64*)((uint8*)SYM$1 + 48ll), *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll), *($12FB_PARAMMODE*)((uint8*)SYM$1 + 88ll) );
		*(int64*)((uint8*)SYM$1 + 72ll) = vr$5;
	}
	goto label$560;
	label$561:;
	{
		int64 vr$9 = SYMBCALCLEN( *(int64*)((uint8*)SYM$1 + 48ll), *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll) );
		*(int64*)((uint8*)SYM$1 + 72ll) = vr$9;
	}
	label$560:;
	label$559:;
}

void SYMBSETTYPE( struct $8FBSYMBOL* SYM$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	label$562:;
	*($11FB_DATATYPE*)((uint8*)SYM$1 + 48ll) = DTYPE$1;
	*(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll) = SUBTYPE$1;
	SYMBRECALCLEN( SYM$1 );
	if( *(int64*)SYM$1 != 3ll ) goto label$565;
	{
		SYMBPROCRECALCREALTYPE( SYM$1 );
	}
	label$565:;
	label$564:;
	if( (DTYPE$1 & 31ll) != 21ll ) goto label$567;
	{
		SYMBADDTOFWDREF( SUBTYPE$1, SYM$1 );
	}
	label$567:;
	label$566:;
	label$563:;
}

int64 SYMBCALCLEN( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	int64 TMP$126$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$568:;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$570;
	TMP$126$1 = 22ll;
	goto label$577;
	label$570:;
	TMP$126$1 = DTYPE$1 & 31ll;
	label$577:;
	DTYPE$1 = TMP$126$1;
	{
		uint64 TMP$127$2;
		TMP$127$2 = (uint64)DTYPE$1;
		goto label$572;
		label$573:;
		{
			fb$result$1 = 0ll;
		}
		goto label$571;
		label$574:;
		{
			fb$result$1 = *(int64*)((uint8*)SUBTYPE$1 + 72ll);
		}
		goto label$571;
		label$575:;
		{
			int64 TMP$128$3;
			if( (DTYPE$1 & 480ll) == 0ll ) goto label$576;
			TMP$128$3 = 22ll;
			goto label$578;
			label$576:;
			TMP$128$3 = DTYPE$1 & 31ll;
			label$578:;
			fb$result$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$128$3 * 56ll)) + 8ll);
		}
		goto label$571;
		label$572:;
		static const void* tmp$129[2ll] = {
			&&label$573,
			&&label$574,
		};
		if( TMP$127$2 < 17ll ) goto label$575;
		if( TMP$127$2 > 18ll ) goto label$575;
		goto *tmp$129[TMP$127$2 - 17ll];
		label$571:;
	}
	label$569:;
	return fb$result$1;
}

int64 SYMBCALCDEREFLEN( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$579:;
	int64 LENGTH$1;
	int64 vr$9 = SYMBCALCLEN( ((DTYPE$1 & 31ll) | ((DTYPE$1 & 480ll) + -32ll)) | (((DTYPE$1 & 261632ll) >> 1ll) & 261632ll), SUBTYPE$1 );
	LENGTH$1 = vr$9;
	if( LENGTH$1 != 0ll ) goto label$582;
	{
		if( DTYPE$1 != 32ll ) goto label$584;
		{
			LENGTH$1 = 1ll;
		}
		label$584:;
		label$583:;
	}
	label$582:;
	label$581:;
	fb$result$1 = LENGTH$1;
	label$580:;
	return fb$result$1;
}

int64 SYMBCHECKACCESS( struct $8FBSYMBOL* SYM$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$585:;
	struct $8FBSYMBOL* PARENT$1;
	struct $8FBSYMBOL* CONTEXT$1;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 201326592ll) != 0ll ) goto label$588;
	{
		fb$result$1 = -1ll;
		goto label$586;
	}
	label$588:;
	label$587:;
	PARENT$1 = SYM$1;
	label$589:;
	{
		PARENT$1 = *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)PARENT$1 + 232ll);
	}
	label$591:;
	if( ~(int64)-(*(int64*)PARENT$1 == 10ll) != 0ll ) goto label$589;
	label$590:;
	CONTEXT$1 = *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll);
	label$592:;
	if( CONTEXT$1 == (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll) ) goto label$593;
	{
		if( *(int64*)CONTEXT$1 != 10ll ) goto label$595;
		{
			if( CONTEXT$1 != PARENT$1 ) goto label$597;
			{
				fb$result$1 = -1ll;
				goto label$586;
			}
			label$597:;
			label$596:;
			if( (*(int64*)((uint8*)SYM$1 + 8ll) & 134217728ll) == 0ll ) goto label$599;
			{
				int64 vr$18 = SYMBGETUDTBASELEVEL( CONTEXT$1, PARENT$1 );
				if( vr$18 <= 0ll ) goto label$601;
				{
					fb$result$1 = -1ll;
					goto label$586;
				}
				label$601:;
				label$600:;
			}
			label$599:;
			label$598:;
		}
		label$595:;
		label$594:;
		CONTEXT$1 = *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)CONTEXT$1 + 232ll);
	}
	goto label$592;
	label$593:;
	fb$result$1 = 0ll;
	label$586:;
	return fb$result$1;
}

int64 SYMBCHECKCONSTASSIGN( $11FB_DATATYPE LDTYPE$1, $11FB_DATATYPE RDTYPE$1, struct $8FBSYMBOL* LSUBTYPE$1, struct $8FBSYMBOL* RSUBTYPE$1, $12FB_PARAMMODE MODE$1, int64* MATCHES$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$602:;
	int64 I$1;
	int64 LCOUNT$1;
	int64 RCOUNT$1;
	int64 RMATCHES$1;
	int64 LCONST$1;
	int64 RCONST$1;
	fb$result$1 = 0ll;
	*MATCHES$1 = 0ll;
	if( ((LDTYPE$1 & 261632ll) | (RDTYPE$1 & 261632ll)) != 0ll ) goto label$605;
	{
		fb$result$1 = -1ll;
		goto label$603;
	}
	label$605:;
	label$604:;
	if( MODE$1 != 4ll ) goto label$607;
	{
		fb$result$1 = -1ll;
		goto label$603;
	}
	label$607:;
	label$606:;
	LCOUNT$1 = (LDTYPE$1 & 480ll) >> 5ll;
	RCOUNT$1 = (RDTYPE$1 & 480ll) >> 5ll;
	I$1 = 0ll;
	RMATCHES$1 = RCOUNT$1;
	{
		if( MODE$1 != 1ll ) goto label$609;
		label$610:;
		{
			I$1 = 1ll;
			*MATCHES$1 = RCOUNT$1 + 1ll;
			if( (LDTYPE$1 & 512ll) == 0ll ) goto label$612;
			{
				*MATCHES$1 = *MATCHES$1 + 1ll;
			}
			label$612:;
			label$611:;
		}
		goto label$608;
		label$609:;
		if( MODE$1 != 0ll ) goto label$613;
		label$614:;
		{
			I$1 = 1ll;
		}
		goto label$608;
		label$613:;
		{
			RMATCHES$1 = RMATCHES$1 + 1ll;
		}
		label$615:;
		label$608:;
	}
	label$616:;
	if( ((int64)-(I$1 <= LCOUNT$1) & (int64)-(I$1 <= RCOUNT$1)) == 0ll ) goto label$617;
	{
		LCONST$1 = (int64)-((LDTYPE$1 & (1ll << (I$1 + 9ll))) != 0ll);
		RCONST$1 = (int64)-((RDTYPE$1 & (1ll << (I$1 + 9ll))) != 0ll);
		if( LCONST$1 != RCONST$1 ) goto label$619;
		{
			if( *MATCHES$1 >= RMATCHES$1 ) goto label$621;
			{
				*MATCHES$1 = RMATCHES$1;
			}
			label$621:;
			label$620:;
		}
		label$619:;
		label$618:;
		if( (RCONST$1 & ~LCONST$1) == 0ll ) goto label$623;
		{
			goto label$603;
		}
		label$623:;
		label$622:;
		RMATCHES$1 = RMATCHES$1 + -1ll;
		I$1 = I$1 + 1ll;
	}
	goto label$616;
	label$617:;
	fb$result$1 = -1ll;
	label$603:;
	return fb$result$1;
}

void SYMBFOREACHGLOBAL( int64 SYMCLASS$1, tmp$40 CALLBACK$1 )
{
	label$637:;
	HFOREACHGLOBAL( *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 196800ll), SYMCLASS$1, CALLBACK$1 );
	label$638:;
}

__attribute__(( constructor )) static void fb_ctor__symb( void )
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

static void HINITDEFTYPETB( void )
{
	label$14:;
	int64 DTYPE$1;
	__builtin_memset( &DTYPE$1, 0, 8ll );
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	if( *(int64*)((uint8*)&ENV$ + 272ll) != 3ll ) goto label$17;
	{
		DTYPE$1 = 14ll;
	}
	goto label$16;
	label$17:;
	{
		DTYPE$1 = 7ll;
	}
	label$16:;
	{
		I$1 = 0ll;
		label$21:;
		{
			*(int64*)((uint8*)DEFTYPETB$ + (I$1 << 3ll)) = DTYPE$1;
		}
		label$19:;
		I$1 = I$1 + 1ll;
		label$18:;
		if( I$1 <= 30ll ) goto label$21;
		label$20:;
	}
	label$15:;
}

static struct $10FBSYMCHAIN* CHAINPOOLNEXT( void )
{
	struct $10FBSYMCHAIN* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$220:;
	*(int64*)((uint8*)&SYMB$ + 196696ll) = *(int64*)((uint8*)&SYMB$ + 196696ll) + 1ll;
	if( *(int64*)((uint8*)&SYMB$ + 196696ll) < 4096ll ) goto label$223;
	{
		*(int64*)((uint8*)&SYMB$ + 196696ll) = 0ll;
	}
	label$223:;
	label$222:;
	fb$result$1 = (struct $10FBSYMCHAIN*)((uint8*)((uint8*)&SYMB$ + (*(int64*)((uint8*)&SYMB$ + 196696ll) * 48ll)) + 88ll);
	goto label$221;
	label$221:;
	return fb$result$1;
}

static struct $10FBSYMCHAIN* HLOOKUPIMPORTHASH( struct $8FBSYMBOL* NS$1, uint8* ID$1, uint64 INDEX$1 )
{
	struct $10FBSYMCHAIN* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$243:;
	struct $10FBSYMCHAIN* CHAIN_HEAD$1;
	void* vr$2 = HASHLOOKUPEX( (struct $5THASH*)((uint8*)&SYMB$ + 197080ll), ID$1, INDEX$1 );
	CHAIN_HEAD$1 = (struct $10FBSYMCHAIN*)vr$2;
	if( CHAIN_HEAD$1 != (struct $10FBSYMCHAIN*)0ull ) goto label$246;
	{
		fb$result$1 = (struct $10FBSYMCHAIN*)0ull;
		goto label$244;
	}
	label$246:;
	label$245:;
	struct $10FBSYMCHAIN* HEAD$1;
	HEAD$1 = (struct $10FBSYMCHAIN*)0ull;
	struct $10FBSYMCHAIN* TAIL$1;
	TAIL$1 = (struct $10FBSYMCHAIN*)0ull;
	struct $10FBSYMCHAIN* CHAIN_$1;
	CHAIN_$1 = CHAIN_HEAD$1;
	label$247:;
	{
		struct $8FBSYMBOL* EXP_$2;
		EXP_$2 = *(struct $8FBSYMBOL**)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)*(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)*(struct $8FBSYMBOL**)CHAIN_$1 + 232ll) + 160ll) + 16ll);
		label$250:;
		{
			if( *(struct $8FBSYMBOL**)((uint8*)EXP_$2 + 112ll) != NS$1 ) goto label$254;
			{
				struct $10FBSYMCHAIN* NODE$4;
				struct $10FBSYMCHAIN* vr$11 = CHAINPOOLNEXT(  );
				NODE$4 = vr$11;
				*(struct $8FBSYMBOL**)NODE$4 = *(struct $8FBSYMBOL**)CHAIN_$1;
				*(struct $10FBSYMCHAIN**)((uint8*)NODE$4 + 8ll) = (struct $10FBSYMCHAIN*)0ull;
				*(int64*)((uint8*)NODE$4 + 16ll) = -1ll;
				if( HEAD$1 != (struct $10FBSYMCHAIN*)0ull ) goto label$256;
				{
					HEAD$1 = NODE$4;
				}
				goto label$255;
				label$256:;
				{
					*(struct $10FBSYMCHAIN**)((uint8*)TAIL$1 + 8ll) = NODE$4;
					fb$result$1 = HEAD$1;
					goto label$244;
				}
				label$255:;
				TAIL$1 = NODE$4;
			}
			label$254:;
			label$253:;
			EXP_$2 = *(struct $8FBSYMBOL**)((uint8*)EXP_$2 + 128ll);
		}
		label$252:;
		if( EXP_$2 != (struct $8FBSYMBOL*)0ull ) goto label$250;
		label$251:;
		CHAIN_$1 = *(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$1 + 8ll);
	}
	label$249:;
	if( CHAIN_$1 != (struct $10FBSYMCHAIN*)0ull ) goto label$247;
	label$248:;
	fb$result$1 = HEAD$1;
	goto label$244;
	label$244:;
	return fb$result$1;
}

static struct $10FBSYMCHAIN* HLOOKUPIMPORTLIST( struct $8FBSYMBOL* NS$1, uint8* ID$1, uint64 INDEX$1 )
{
	struct $10FBSYMCHAIN* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$257:;
	struct $10FBSYMCHAIN* HEAD$1;
	HEAD$1 = (struct $10FBSYMCHAIN*)0ull;
	struct $10FBSYMCHAIN* TAIL$1;
	TAIL$1 = (struct $10FBSYMCHAIN*)0ull;
	struct $8FBSYMBOL* IMP_$1;
	IMP_$1 = *(struct $8FBSYMBOL**)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll);
	label$259:;
	if( IMP_$1 == (struct $8FBSYMBOL*)0ull ) goto label$260;
	{
		struct $8FBSYMBOL* SYM$2;
		void* vr$7 = HASHLOOKUPEX( (struct $5THASH*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 88ll) + 120ll), ID$1, INDEX$1 );
		SYM$2 = (struct $8FBSYMBOL*)vr$7;
		if( SYM$2 == (struct $8FBSYMBOL*)0ull ) goto label$262;
		{
			struct $10FBSYMCHAIN* CHAIN_$3;
			struct $10FBSYMCHAIN* vr$9 = CHAINPOOLNEXT(  );
			CHAIN_$3 = vr$9;
			*(struct $8FBSYMBOL**)CHAIN_$3 = SYM$2;
			*(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$3 + 8ll) = (struct $10FBSYMCHAIN*)0ull;
			*(int64*)((uint8*)CHAIN_$3 + 16ll) = -1ll;
			if( HEAD$1 != (struct $10FBSYMCHAIN*)0ull ) goto label$264;
			{
				HEAD$1 = CHAIN_$3;
			}
			goto label$263;
			label$264:;
			{
				*(struct $10FBSYMCHAIN**)((uint8*)TAIL$1 + 8ll) = CHAIN_$3;
				fb$result$1 = HEAD$1;
				goto label$258;
			}
			label$263:;
			TAIL$1 = CHAIN_$3;
		}
		label$262:;
		label$261:;
		IMP_$1 = *(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 104ll);
	}
	goto label$259;
	label$260:;
	fb$result$1 = HEAD$1;
	goto label$258;
	label$258:;
	return fb$result$1;
}

static void HFOREACHGLOBAL( struct $8FBSYMBOL* SYM$1, int64 SYMCLASS$1, tmp$40 CALLBACK$1 )
{
	label$624:;
	label$626:;
	if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$627;
	{
		{
			$12FB_SYMBCLASS TMP$130$3;
			TMP$130$3 = *($12FB_SYMBCLASS*)SYM$1;
			if( TMP$130$3 != 8ll ) goto label$629;
			label$630:;
			{
				HFOREACHGLOBAL( *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 96ll), SYMCLASS$1, CALLBACK$1 );
			}
			goto label$628;
			label$629:;
			if( TMP$130$3 != 10ll ) goto label$631;
			label$632:;
			{
				HFOREACHGLOBAL( *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 96ll), SYMCLASS$1, CALLBACK$1 );
			}
			goto label$628;
			label$631:;
			if( TMP$130$3 != 15ll ) goto label$633;
			label$634:;
			{
				HFOREACHGLOBAL( *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 104ll), SYMCLASS$1, CALLBACK$1 );
			}
			goto label$628;
			label$633:;
			if( TMP$130$3 != SYMCLASS$1 ) goto label$635;
			label$636:;
			{
				(CALLBACK$1)( SYM$1 );
			}
			label$635:;
			label$628:;
		}
		SYM$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 296ll);
	}
	goto label$626;
	label$627:;
	label$625:;
}

// Total compilation time: 0.05083391629159451 seconds.
