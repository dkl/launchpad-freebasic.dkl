// Compilation of FreeBASIC-1.01.0-source/src/compiler/symb-mangling.bas started at 16:30:15 on 02-28-2015

typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
struct $10TFLISTITEM;
struct $10TFLISTITEM {
	struct $10TFLISTITEM* NEXT;
};
#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]
__FB_STATIC_ASSERT( sizeof( struct $10TFLISTITEM ) == 8 );
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
struct $6TFLIST {
	int64 TOTITEMS;
	int64 ITEMS;
	struct $10TFLISTITEM* ITEMTB;
	int64 INDEX;
	struct $10TFLISTITEM* LASTITEM;
	struct $5TLIST LIST;
	struct $7TLISTTB* LISTTB;
};
__FB_STATIC_ASSERT( sizeof( struct $6TFLIST ) == 112 );
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
struct $5TPOOL {
	int64 CHUNKS;
	int64 CHUNKSIZE;
	struct $5TLIST* CHUNKTB;
};
__FB_STATIC_ASSERT( sizeof( struct $5TPOOL ) == 24 );
struct $16__FB_ARRAYDIMTB$ {
	int64 ELEMENTS;
	int64 LBOUND;
	int64 UBOUND;
};
__FB_STATIC_ASSERT( sizeof( struct $16__FB_ARRAYDIMTB$ ) == 24 );
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
struct $13FB_MANGLEABBR {
	int64 IDX;
	int64 DTYPE;
	struct $8FBSYMBOL* SUBTYPE;
};
__FB_STATIC_ASSERT( sizeof( struct $13FB_MANGLEABBR ) == 24 );
typedef int64 $13FB_COMPTARGET;
typedef int64 $10FB_BACKEND;
typedef uint8* (*tmp$42)( void );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
FBSTRING* fb_StrConcatAssign( void*, int64, void*, int64, int32 );
FBSTRING* fb_UIntToStr( uint32 );
FBSTRING* fb_LongintToStr( int64 );
int64 fb_StrLen( void*, int64 );
FBSTRING* fb_CHR( int32, ... );
static void fb_ctor__symbzmangling( void ) __attribute__(( constructor ));
void* XALLOCATE( int32 );
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
int64 FBIS64BIT( void );
int64 FBGETCPUFAMILY( void );
void* POOLNEWITEM( struct $5TPOOL*, int64 );
void POOLDELITEM( struct $5TPOOL*, void* );
void SYMBGETDESCTYPEARRAYDTYPE( struct $8FBSYMBOL*, int64*, struct $8FBSYMBOL** );
int64 SYMBCALCPROCPARAMSLEN( struct $8FBSYMBOL* );
int64 SYMBHASDTOR( struct $8FBSYMBOL* );
uint8* SYMBUNIQUEID( void );
uint8* SYMBGETMANGLEDNAME( struct $8FBSYMBOL* );
void SYMBMANGLERESETABBREV( void );
uint8* HMANGLEBUILTINTYPE( int64, int64* );
void SYMBMANGLETYPE( FBSTRING*, int64, struct $8FBSYMBOL* );
void SYMBMANGLEPARAM( FBSTRING*, struct $8FBSYMBOL* );
uint8* HHEXUINT( uint64 );
uint8* HREPLACECHAR( uint8*, int64, int64 );
void FLISTINIT( struct $6TFLIST*, int64, int64 );
void FLISTEND( struct $6TFLIST* );
void* FLISTNEWITEM( struct $6TFLIST* );
void FLISTRESET( struct $6TFLIST* );
void* FLISTGETHEAD( struct $6TFLIST* );
void* FLISTGETNEXT( void* );
static int64 HDOCPPMANGLING( struct $8FBSYMBOL* );
static void HMANGLEPROC( struct $8FBSYMBOL* );
static void HMANGLEVARIABLE( struct $8FBSYMBOL* );
static void HGETPROCPARAMSTYPECODE( FBSTRING*, struct $8FBSYMBOL*, int64 );
static void HMANGLENAMESPACE( FBSTRING*, struct $8FBSYMBOL*, int64, int64 );
static void SYMBSETMANGLEDID( struct $8FBSYMBOL*, FBSTRING* );
static void HMANGLEUDTID( FBSTRING*, struct $8FBSYMBOL* );
static int64 HABBREVFIND( int64, struct $8FBSYMBOL* );
static struct $13FB_MANGLEABBR* HABBREVADD( int64, struct $8FBSYMBOL* );
static void HABBREVGET( FBSTRING*, int64 );
static int64 HADDUNDERSCORE( void );
static uint8* HGETOPERATORNAME( struct $8FBSYMBOL* );
typedef void (*tmp$35)( void );
typedef int64 (*tmp$36)( void );
typedef void (*tmp$37)( double );
typedef int64 $14IR_OPTIONVALUE;
typedef int64 (*tmp$38)( $14IR_OPTIONVALUE );
typedef int64 (*tmp$39)( int64, int64 );
typedef void (*tmp$40)( struct $8FBSYMBOL* );
typedef void (*tmp$41)( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef int64 $15IRVREGTYPE_ENUM;
typedef int64 $12IR_REGFAMILY;
struct $6IRVREG;
struct $9IRTACVREG;
struct $9IRTACVREG {
	struct $6IRVREG* VREG;
	struct $6IRVREG* PARENT;
	struct $9IRTACVREG* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $9IRTACVREG ) == 24 );
struct $13IRTACVREG_GRP {
	struct $9IRTACVREG REG;
	struct $9IRTACVREG IDX;
	struct $9IRTACVREG AUX;
};
__FB_STATIC_ASSERT( sizeof( struct $13IRTACVREG_GRP ) == 72 );
struct $5IRTAC {
	int64 POS;
	$6AST_OP OP;
	struct $13IRTACVREG_GRP VR;
	struct $13IRTACVREG_GRP V1;
	struct $13IRTACVREG_GRP V2;
	struct $8FBSYMBOL* EX1;
	int64 EX2;
};
__FB_STATIC_ASSERT( sizeof( struct $5IRTAC ) == 248 );
struct $6IRVREG {
	$15IRVREGTYPE_ENUM TYP;
	$11FB_DATATYPE DTYPE;
	struct $8FBSYMBOL* SUBTYPE;
	int64 REG;
	$12IR_REGFAMILY REGFAMILY;
	int64 VECTOR;
	union $7FBVALUE VALUE;
	struct $8FBSYMBOL* SYM;
	int64 OFS;
	int64 MULT;
	struct $6IRVREG* VIDX;
	struct $6IRVREG* VAUX;
	struct $9IRTACVREG* TACVHEAD;
	struct $9IRTACVREG* TACVTAIL;
	struct $5IRTAC* TACLAST;
};
__FB_STATIC_ASSERT( sizeof( struct $6IRVREG ) == 120 );
typedef void (*tmp$43)( struct $6IRVREG*, struct $6IRVREG* );
typedef void (*tmp$44)( int64 );
typedef void (*tmp$45)( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef void (*tmp$46)( struct $8FBSYMBOL*, struct $6IRVREG*, int64, int64 );
typedef void (*tmp$47)( uint8* );
typedef void (*tmp$48)( int64, struct $6IRVREG*, struct $6IRVREG*, struct $6IRVREG*, struct $8FBSYMBOL* );
typedef void (*tmp$49)( int64, struct $6IRVREG*, struct $6IRVREG* );
typedef void (*tmp$50)( struct $6IRVREG* );
typedef void (*tmp$51)( int64, struct $6IRVREG* );
typedef void (*tmp$52)( struct $8FBSYMBOL*, int64, struct $6IRVREG*, int64 );
typedef void (*tmp$53)( struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG*, int64, int64 );
typedef void (*tmp$54)( int64, struct $8FBSYMBOL* );
typedef void (*tmp$55)( struct $6IRVREG*, struct $8FBSYMBOL*, uint64*, struct $8FBSYMBOL**, int64, struct $8FBSYMBOL*, uint64, uint64 );
typedef void (*tmp$56)( int64, struct $6IRVREG*, struct $6IRVREG*, int64 );
typedef void (*tmp$57)( int64, struct $8FBSYMBOL*, int64 );
typedef void (*tmp$58)( struct $8FBSYMBOL*, int64 );
typedef void (*tmp$59)( struct $8FBSYMBOL*, double );
typedef void (*tmp$60)( struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
typedef void (*tmp$61)( int64, uint8*, int64 );
typedef void (*tmp$62)( int64, uint32*, int64 );
typedef void (*tmp$63)( int64 );
typedef struct $6IRVREG* (*tmp$64)( int64, struct $8FBSYMBOL* );
typedef struct $6IRVREG* (*tmp$65)( int64, struct $8FBSYMBOL*, int64 );
typedef struct $6IRVREG* (*tmp$66)( int64, struct $8FBSYMBOL*, double );
typedef struct $6IRVREG* (*tmp$67)( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
typedef struct $6IRVREG* (*tmp$68)( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64, int64, struct $6IRVREG* );
typedef struct $6IRVREG* (*tmp$69)( int64, struct $8FBSYMBOL*, int64, struct $6IRVREG* );
typedef void (*tmp$70)( struct $6IRVREG*, int64, struct $8FBSYMBOL* );
typedef uint64 (*tmp$71)( struct $6IRVREG* );
struct $7IR_VTBL {
	tmp$35 INIT;
	tmp$35 END;
	tmp$36 EMITBEGIN;
	tmp$37 EMITEND;
	tmp$38 GETOPTIONVALUE;
	tmp$39 SUPPORTSOP;
	tmp$40 PROCBEGIN;
	tmp$40 PROCEND;
	tmp$41 PROCALLOCARG;
	tmp$41 PROCALLOCLOCAL;
	tmp$42 PROCGETFRAMEREGNAME;
	tmp$40 SCOPEBEGIN;
	tmp$40 SCOPEEND;
	tmp$40 PROCALLOCSTATICVARS;
	tmp$43 EMITCONVERT;
	tmp$40 EMITLABEL;
	tmp$40 EMITLABELNF;
	tmp$44 EMITRETURN;
	tmp$41 EMITPROCBEGIN;
	tmp$45 EMITPROCEND;
	tmp$46 EMITPUSHARG;
	tmp$35 EMITASMBEGIN;
	tmp$47 EMITASMTEXT;
	tmp$40 EMITASMSYMB;
	tmp$35 EMITASMEND;
	tmp$47 EMITCOMMENT;
	tmp$48 EMITBOP;
	tmp$49 EMITUOP;
	tmp$43 EMITSTORE;
	tmp$35 EMITSPILLREGS;
	tmp$50 EMITLOAD;
	tmp$43 EMITLOADRES;
	tmp$51 EMITSTACK;
	tmp$49 EMITADDR;
	tmp$52 EMITCALL;
	tmp$53 EMITCALLPTR;
	tmp$44 EMITSTACKALIGN;
	tmp$50 EMITJUMPPTR;
	tmp$54 EMITBRANCH;
	tmp$55 EMITJMPTB;
	tmp$56 EMITMEM;
	tmp$40 EMITSCOPEBEGIN;
	tmp$40 EMITSCOPEEND;
	tmp$40 EMITDECL;
	tmp$57 EMITDBG;
	tmp$40 EMITVARINIBEGIN;
	tmp$40 EMITVARINIEND;
	tmp$58 EMITVARINII;
	tmp$59 EMITVARINIF;
	tmp$60 EMITVARINIOFS;
	tmp$61 EMITVARINISTR;
	tmp$62 EMITVARINIWSTR;
	tmp$63 EMITVARINIPAD;
	tmp$35 EMITVARINISCOPEBEGIN;
	tmp$35 EMITVARINISCOPEEND;
	tmp$35 EMITFBCTINFBEGIN;
	tmp$47 EMITFBCTINFSTRING;
	tmp$35 EMITFBCTINFEND;
	tmp$64 ALLOCVREG;
	tmp$65 ALLOCVRIMM;
	tmp$66 ALLOCVRIMMF;
	tmp$67 ALLOCVRVAR;
	tmp$68 ALLOCVRIDX;
	tmp$69 ALLOCVRPTR;
	tmp$67 ALLOCVROFS;
	tmp$70 SETVREGDATATYPE;
	tmp$71 GETDISTANCE;
	tmp$49 LOADVR;
	tmp$43 STOREVR;
	tmp$44 XCHGTOS;
};
__FB_STATIC_ASSERT( sizeof( struct $7IR_VTBL ) == 560 );
typedef int64 $6IR_OPT;
struct $5IRCTX {
	int64 INITED;
	struct $7IR_VTBL VTBL;
	$6IR_OPT OPTIONS;
};
__FB_STATIC_ASSERT( sizeof( struct $5IRCTX ) == 576 );
extern struct $5IRCTX IR$;
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
struct $12FB_MANGLECTX {
	struct $6TFLIST FLIST;
	int64 CNT;
	uint8 TEMPSTR[17];
	int64 UNIQUEIDCOUNT;
	int64 UNIQUELABELCOUNT;
	int64 PROFILELABELCOUNT;
};
__FB_STATIC_ASSERT( sizeof( struct $12FB_MANGLECTX ) == 168 );
static struct $12FB_MANGLECTX CTX$;
struct $5FBENV ENV$ __attribute__((common));

void SYMBMANGLEINIT( void )
{
	label$10:;
	FLISTINIT( (struct $6TFLIST*)&CTX$, 96ll, 24ll );
	*(int64*)((uint8*)&CTX$ + 112ll) = 0ll;
	*(int64*)((uint8*)&CTX$ + 144ll) = 0ll;
	*(int64*)((uint8*)&CTX$ + 152ll) = 0ll;
	*(int64*)((uint8*)&CTX$ + 160ll) = 0ll;
	label$11:;
}

void SYMBMANGLEEND( void )
{
	label$12:;
	FLISTEND( (struct $6TFLIST*)&CTX$ );
	label$13:;
}

uint8* SYMBUNIQUEID( void )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$14:;
	if( *(int64*)((uint8*)&ENV$ + 208ll) != 1ll ) goto label$17;
	{
		FBSTRING TMP$77$2;
		fb_StrAssign( (void*)((uint8*)&CTX$ + 120ll), 17ll, (void*)"tmp$", 5ll, 0 );
		FBSTRING* vr$3 = fb_LongintToStr( *(int64*)((uint8*)&CTX$ + 144ll) );
		__builtin_memset( &TMP$77$2, 0, 24ll );
		FBSTRING* vr$7 = fb_StrConcat( &TMP$77$2, (void*)((uint8*)&CTX$ + 120ll), 17ll, (void*)vr$3, -1ll );
		fb_StrAssign( (void*)((uint8*)&CTX$ + 120ll), 17ll, (void*)vr$7, -1ll, 0 );
	}
	goto label$16;
	label$17:;
	{
		FBSTRING TMP$79$2;
		fb_StrAssign( (void*)((uint8*)&CTX$ + 120ll), 17ll, (void*)"Lt_", 4ll, 0 );
		uint8* vr$10 = HHEXUINT( *(uint64*)((uint8*)&CTX$ + 144ll) );
		__builtin_memset( &TMP$79$2, 0, 24ll );
		FBSTRING* vr$14 = fb_StrConcat( &TMP$79$2, (void*)((uint8*)&CTX$ + 120ll), 17ll, (void*)vr$10, 0ll );
		fb_StrAssign( (void*)((uint8*)&CTX$ + 120ll), 17ll, (void*)vr$14, -1ll, 0 );
	}
	label$16:;
	*(int64*)((uint8*)&CTX$ + 144ll) = *(int64*)((uint8*)&CTX$ + 144ll) + 1ll;
	fb$result$1 = (uint8*)((uint8*)&CTX$ + 120ll);
	label$15:;
	return fb$result$1;
}

uint8* SYMBUNIQUELABEL( void )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$18:;
	if( *(int64*)((uint8*)&ENV$ + 208ll) != 1ll ) goto label$21;
	{
		FBSTRING TMP$81$2;
		fb_StrAssign( (void*)((uint8*)&CTX$ + 120ll), 17ll, (void*)"label$", 7ll, 0 );
		FBSTRING* vr$3 = fb_LongintToStr( *(int64*)((uint8*)&CTX$ + 152ll) );
		__builtin_memset( &TMP$81$2, 0, 24ll );
		FBSTRING* vr$7 = fb_StrConcat( &TMP$81$2, (void*)((uint8*)&CTX$ + 120ll), 17ll, (void*)vr$3, -1ll );
		fb_StrAssign( (void*)((uint8*)&CTX$ + 120ll), 17ll, (void*)vr$7, -1ll, 0 );
		*(int64*)((uint8*)&CTX$ + 152ll) = *(int64*)((uint8*)&CTX$ + 152ll) + 1ll;
	}
	goto label$20;
	label$21:;
	{
		FBSTRING TMP$83$2;
		fb_StrAssign( (void*)((uint8*)&CTX$ + 120ll), 17ll, (void*)".Lt_", 5ll, 0 );
		uint8* vr$11 = HHEXUINT( *(uint64*)((uint8*)&CTX$ + 144ll) );
		__builtin_memset( &TMP$83$2, 0, 24ll );
		FBSTRING* vr$15 = fb_StrConcat( &TMP$83$2, (void*)((uint8*)&CTX$ + 120ll), 17ll, (void*)vr$11, 0ll );
		fb_StrAssign( (void*)((uint8*)&CTX$ + 120ll), 17ll, (void*)vr$15, -1ll, 0 );
		*(int64*)((uint8*)&CTX$ + 144ll) = *(int64*)((uint8*)&CTX$ + 144ll) + 1ll;
	}
	label$20:;
	fb$result$1 = (uint8*)((uint8*)&CTX$ + 120ll);
	label$19:;
	return fb$result$1;
}

uint8* SYMBMAKEPROFILELABELNAME( void )
{
	FBSTRING TMP$85$1;
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$22:;
	uint8* vr$1 = HHEXUINT( *(uint64*)((uint8*)&CTX$ + 160ll) );
	__builtin_memset( &TMP$85$1, 0, 24ll );
	FBSTRING* vr$4 = fb_StrConcat( &TMP$85$1, (void*)"LP_", 4ll, (void*)vr$1, 0ll );
	fb_StrAssign( (void*)((uint8*)&CTX$ + 120ll), 17ll, (void*)vr$4, -1ll, 0 );
	*(int64*)((uint8*)&CTX$ + 160ll) = *(int64*)((uint8*)&CTX$ + 160ll) + 1ll;
	fb$result$1 = (uint8*)((uint8*)&CTX$ + 120ll);
	label$23:;
	return fb$result$1;
}

uint8* SYMBGETDBGNAME( struct $8FBSYMBOL* SYM$1 )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$24:;
	int64 vr$1 = HDOCPPMANGLING( SYM$1 );
	if( vr$1 == 0ll ) goto label$27;
	{
		{
			uint64 TMP$86$3;
			TMP$86$3 = *(uint64*)SYM$1;
			goto label$29;
			label$30:;
			{
				uint8* RES$4;
				RES$4 = *(uint8**)((uint8*)SYM$1 + 32ll);
				if( RES$4 != (uint8*)0ull ) goto label$32;
				{
					RES$4 = *(uint8**)((uint8*)SYM$1 + 24ll);
				}
				label$32:;
				label$31:;
				fb$result$1 = RES$4;
				goto label$25;
			}
			goto label$28;
			label$33:;
			{
				uint8* vr$7 = SYMBGETMANGLEDNAME( SYM$1 );
				fb$result$1 = vr$7;
				goto label$25;
			}
			goto label$28;
			label$29:;
			static const void* tmp$87[4ll] = {
				&&label$30,
				&&label$30,
				&&label$30,
				&&label$30,
			};
			if( TMP$86$3 < 8ll ) goto label$33;
			if( TMP$86$3 > 11ll ) goto label$33;
			goto *tmp$87[TMP$86$3 - 8ll];
			label$28:;
		}
	}
	label$27:;
	label$26:;
	if( ((int64)-(*(int64*)SYM$1 == 10ll) & (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 8388608ll) != 0ll)) == 0ll ) goto label$35;
	{
		if( *(uint8**)((uint8*)SYM$1 + 32ll) == (uint8*)0ull ) goto label$37;
		{
			fb$result$1 = *(uint8**)((uint8*)SYM$1 + 32ll);
			goto label$25;
		}
		label$37:;
		label$36:;
	}
	label$35:;
	label$34:;
	fb$result$1 = *(uint8**)((uint8*)SYM$1 + 24ll);
	label$25:;
	return fb$result$1;
}

void SYMBSETNAME( struct $8FBSYMBOL* S$1, uint8* NAME_$1 )
{
	label$38:;
	int64 SLEN$1;
	if( *(uint8**)((uint8*)S$1 + 24ll) == (uint8*)0ull ) goto label$41;
	{
		POOLDELITEM( (struct $5TPOOL*)((uint8*)&SYMB$ + 197168ll), *(void**)((uint8*)S$1 + 24ll) );
	}
	label$41:;
	label$40:;
	int64 vr$4 = fb_StrLen( (void*)NAME_$1, 0ll );
	SLEN$1 = vr$4;
	if( SLEN$1 != 0ll ) goto label$43;
	{
		*(uint8**)((uint8*)S$1 + 24ll) = (uint8*)0ull;
	}
	goto label$42;
	label$43:;
	{
		void* vr$9 = POOLNEWITEM( (struct $5TPOOL*)((uint8*)&SYMB$ + 197168ll), SLEN$1 + 1ll );
		*(uint8**)((uint8*)S$1 + 24ll) = (uint8*)vr$9;
		fb_StrAssign( *(void**)((uint8*)S$1 + 24ll), 0ll, (void*)NAME_$1, 0ll, 0 );
	}
	label$42:;
	label$39:;
}

uint8* SYMBGETMANGLEDNAME( struct $8FBSYMBOL* SYM$1 )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$52:;
	if( *(uint8**)((uint8*)SYM$1 + 40ll) == (uint8*)0ull ) goto label$55;
	{
		fb$result$1 = *(uint8**)((uint8*)SYM$1 + 40ll);
		goto label$53;
	}
	label$55:;
	label$54:;
	{
		uint64 TMP$96$2;
		TMP$96$2 = *(uint64*)SYM$1;
		goto label$57;
		label$58:;
		{
			HMANGLEPROC( SYM$1 );
		}
		goto label$56;
		label$59:;
		{
			FBSTRING MANGLED$3;
			__builtin_memset( &MANGLED$3, 0, 24ll );
			HMANGLENAMESPACE( &MANGLED$3, *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)SYM$1 + 232ll), -1ll, 0ll );
			HMANGLEUDTID( &MANGLED$3, SYM$1 );
			if( *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)SYM$1 + 232ll) == (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll) ) goto label$61;
			{
				FBSTRING* vr$15 = fb_StrConcatAssign( (void*)&MANGLED$3, -1ll, (void*)"E", 2ll, 0 );
			}
			label$61:;
			label$60:;
			SYMBSETMANGLEDID( SYM$1, &MANGLED$3 );
			fb_StrDelete( &MANGLED$3 );
		}
		goto label$56;
		label$62:;
		{
			HMANGLEVARIABLE( SYM$1 );
		}
		goto label$56;
		label$63:;
		{
			fb$result$1 = *(uint8**)((uint8*)SYM$1 + 32ll);
			goto label$53;
		}
		goto label$56;
		label$57:;
		static const void* tmp$98[14ll] = {
			&&label$62,
			&&label$63,
			&&label$58,
			&&label$63,
			&&label$63,
			&&label$63,
			&&label$63,
			&&label$59,
			&&label$59,
			&&label$59,
			&&label$59,
			&&label$63,
			&&label$63,
			&&label$59,
		};
		if( TMP$96$2 < 1ll ) goto label$63;
		if( TMP$96$2 > 14ll ) goto label$63;
		goto *tmp$98[TMP$96$2 - 1ll];
		label$56:;
	}
	SYMBMANGLERESETABBREV(  );
	if( *(int64*)((uint8*)&ENV$ + 208ll) != 1ll ) goto label$65;
	{
		if( (*(int64*)((uint8*)&ENV$ + 1152ll) & 524288ll) == 0ll ) goto label$67;
		{
			HREPLACECHAR( *(uint8**)((uint8*)SYM$1 + 40ll), 46ll, 36ll );
		}
		label$67:;
		label$66:;
	}
	label$65:;
	label$64:;
	fb$result$1 = *(uint8**)((uint8*)SYM$1 + 40ll);
	label$53:;
	return fb$result$1;
}

void SYMBMANGLERESETABBREV( void )
{
	label$68:;
	FLISTRESET( (struct $6TFLIST*)&CTX$ );
	*(int64*)((uint8*)&CTX$ + 112ll) = 0ll;
	label$69:;
}

uint8* HMANGLEBUILTINTYPE( int64 DTYPE$1, int64* ADD_ABBREV$1 )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$99:;
	*ADD_ABBREV$1 = 0ll;
	if( DTYPE$1 != 16ll ) goto label$102;
	{
		*ADD_ABBREV$1 = -1ll;
		fb$result$1 = (uint8*)"8FBSTRING";
		goto label$100;
	}
	label$102:;
	label$101:;
	int64 vr$4 = FBIS64BIT(  );
	if( vr$4 == 0ll ) goto label$104;
	{
		if( (*(int64*)((uint8*)&ENV$ + 448ll) & 1ll) == 0ll ) goto label$106;
		{
			{
				if( DTYPE$1 != 7ll ) goto label$108;
				label$109:;
				{
					fb$result$1 = (uint8*)"l";
					goto label$100;
				}
				goto label$107;
				label$108:;
				if( DTYPE$1 != 8ll ) goto label$110;
				label$111:;
				{
					fb$result$1 = (uint8*)"m";
					goto label$100;
				}
				label$110:;
				label$107:;
			}
		}
		goto label$105;
		label$106:;
		{
			{
				if( DTYPE$1 != 7ll ) goto label$113;
				label$114:;
				{
					*ADD_ABBREV$1 = -1ll;
					fb$result$1 = (uint8*)"u7INTEGER";
					goto label$100;
				}
				goto label$112;
				label$113:;
				if( DTYPE$1 != 8ll ) goto label$115;
				label$116:;
				{
					*ADD_ABBREV$1 = -1ll;
					fb$result$1 = (uint8*)"u8UINTEGER";
					goto label$100;
				}
				label$115:;
				label$112:;
			}
		}
		label$105:;
		{
			if( DTYPE$1 != 10ll ) goto label$118;
			label$119:;
			{
				fb$result$1 = (uint8*)"i";
				goto label$100;
			}
			goto label$117;
			label$118:;
			if( DTYPE$1 != 11ll ) goto label$120;
			label$121:;
			{
				fb$result$1 = (uint8*)"j";
				goto label$100;
			}
			label$120:;
			label$117:;
		}
	}
	goto label$103;
	label$104:;
	{
		{
			if( DTYPE$1 != 7ll ) goto label$123;
			label$124:;
			{
				fb$result$1 = (uint8*)"i";
				goto label$100;
			}
			goto label$122;
			label$123:;
			if( DTYPE$1 != 8ll ) goto label$125;
			label$126:;
			{
				fb$result$1 = (uint8*)"j";
				goto label$100;
			}
			goto label$122;
			label$125:;
			if( DTYPE$1 != 10ll ) goto label$127;
			label$128:;
			{
				fb$result$1 = (uint8*)"l";
				goto label$100;
			}
			goto label$122;
			label$127:;
			if( DTYPE$1 != 11ll ) goto label$129;
			label$130:;
			{
				fb$result$1 = (uint8*)"m";
				goto label$100;
			}
			label$129:;
			label$122:;
		}
	}
	label$103:;
	static uint8* TYPECODES$1[24] = { (uint8*)"v", (uint8*)"a", (uint8*)"h", (uint8*)"c", (uint8*)"s", (uint8*)"t", (uint8*)"w", (uint8*)0ull, (uint8*)0ull, (uint8*)0ull, (uint8*)0ull, (uint8*)0ull, (uint8*)"x", (uint8*)"y", (uint8*)"f", (uint8*)"d", (uint8*)0ull, (uint8*)0ull, (uint8*)0ull, (uint8*)0ull, (uint8*)0ull, (uint8*)0ull, (uint8*)0ull };
	struct $8FBARRAY1IPcE {
		uint8** DATA;
		uint8** PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1IPcE ) == 64 );
	static struct $8FBARRAY1IPcE tmp$117$1 = { (uint8**)TYPECODES$1, (uint8**)TYPECODES$1, 192ll, 8ll, 1ll, { { 24ll, 0ll, 23ll } } };
	fb$result$1 = *(uint8**)((uint8*)TYPECODES$1 + (DTYPE$1 << 3ll));
	label$100:;
	return fb$result$1;
}

void SYMBMANGLETYPE( FBSTRING* MANGLED$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	int64 TMP$129$1;
	label$131:;
	struct $8FBSYMBOL* NS$1;
	int64 ADD_ABBREV$1;
	int64 IDX$1;
	int64 vr$0 = HABBREVFIND( DTYPE$1, SUBTYPE$1 );
	IDX$1 = vr$0;
	if( IDX$1 == -1ll ) goto label$134;
	{
		HABBREVGET( MANGLED$1, IDX$1 );
		goto label$132;
	}
	label$134:;
	label$133:;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$135;
	TMP$129$1 = 22ll;
	goto label$169;
	label$135:;
	TMP$129$1 = DTYPE$1 & 31ll;
	label$169:;
	if( TMP$129$1 != 21ll ) goto label$137;
	{
		DTYPE$1 = ((DTYPE$1 & -2147483649ll) & -512ll) | 18ll;
	}
	label$137:;
	label$136:;
	if( (DTYPE$1 & 524288ll) == 0ll ) goto label$139;
	{
		if( (DTYPE$1 & 512ll) == 0ll ) goto label$141;
		{
			FBSTRING TMP$131$3;
			__builtin_memset( &TMP$131$3, 0, 24ll );
			FBSTRING* vr$15 = fb_StrConcat( &TMP$131$3, (void*)MANGLED$1, -1ll, (void*)"RK", 3ll );
			FBSTRING* vr$16 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$15, -1ll, 0 );
		}
		goto label$140;
		label$141:;
		{
			FBSTRING TMP$133$3;
			__builtin_memset( &TMP$133$3, 0, 24ll );
			FBSTRING* vr$19 = fb_StrConcat( &TMP$133$3, (void*)MANGLED$1, -1ll, (void*)"R", 2ll );
			FBSTRING* vr$20 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$19, -1ll, 0 );
		}
		label$140:;
		SYMBMANGLETYPE( MANGLED$1, DTYPE$1 & -524289ll, SUBTYPE$1 );
		HABBREVADD( DTYPE$1, SUBTYPE$1 );
		goto label$132;
	}
	label$139:;
	label$138:;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$143;
	{
		if( (DTYPE$1 & 1024ll) == 0ll ) goto label$145;
		{
			FBSTRING TMP$135$3;
			__builtin_memset( &TMP$135$3, 0, 24ll );
			FBSTRING* vr$28 = fb_StrConcat( &TMP$135$3, (void*)MANGLED$1, -1ll, (void*)"PK", 3ll );
			FBSTRING* vr$29 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$28, -1ll, 0 );
		}
		goto label$144;
		label$145:;
		{
			FBSTRING TMP$137$3;
			__builtin_memset( &TMP$137$3, 0, 24ll );
			FBSTRING* vr$32 = fb_StrConcat( &TMP$137$3, (void*)MANGLED$1, -1ll, (void*)"P", 2ll );
			FBSTRING* vr$33 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$32, -1ll, 0 );
		}
		label$144:;
		SYMBMANGLETYPE( MANGLED$1, ((DTYPE$1 & 31ll) | ((DTYPE$1 & 480ll) + -32ll)) | (((DTYPE$1 & 261632ll) >> 1ll) & 261632ll), SUBTYPE$1 );
		HABBREVADD( DTYPE$1, SUBTYPE$1 );
		goto label$132;
	}
	label$143:;
	label$142:;
	if( (DTYPE$1 & 261632ll) == 0ll ) goto label$147;
	{
		SYMBMANGLETYPE( MANGLED$1, DTYPE$1 & -513ll, SUBTYPE$1 );
		HABBREVADD( DTYPE$1, SUBTYPE$1 );
		goto label$132;
	}
	label$147:;
	label$146:;
	{
		if( DTYPE$1 == 18ll ) goto label$150;
		label$151:;
		if( DTYPE$1 != 9ll ) goto label$149;
		label$150:;
		{
			NS$1 = *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)SUBTYPE$1 + 232ll);
			if( NS$1 != (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll) ) goto label$153;
			{
				HMANGLEUDTID( MANGLED$1, SUBTYPE$1 );
			}
			goto label$152;
			label$153:;
			{
				FBSTRING TMP$139$4;
				FBSTRING TMP$140$4;
				__builtin_memset( &TMP$139$4, 0, 24ll );
				FBSTRING* vr$53 = fb_StrConcat( &TMP$139$4, (void*)MANGLED$1, -1ll, (void*)"N", 2ll );
				FBSTRING* vr$54 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$53, -1ll, 0 );
				SYMBMANGLETYPE( MANGLED$1, *(int64*)((uint8*)NS$1 + 48ll), NS$1 );
				HMANGLEUDTID( MANGLED$1, SUBTYPE$1 );
				__builtin_memset( &TMP$140$4, 0, 24ll );
				FBSTRING* vr$58 = fb_StrConcat( &TMP$140$4, (void*)MANGLED$1, -1ll, (void*)"E", 2ll );
				FBSTRING* vr$59 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$58, -1ll, 0 );
			}
			label$152:;
			HABBREVADD( DTYPE$1, SUBTYPE$1 );
		}
		goto label$148;
		label$149:;
		if( DTYPE$1 != 19ll ) goto label$154;
		label$155:;
		{
			if( SUBTYPE$1 != (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll) ) goto label$157;
			{
				goto label$132;
			}
			label$157:;
			label$156:;
			NS$1 = *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)SUBTYPE$1 + 232ll);
			if( NS$1 == (struct $8FBSYMBOL*)0ull ) goto label$159;
			{
				SYMBMANGLETYPE( MANGLED$1, 19ll, NS$1 );
			}
			label$159:;
			label$158:;
			HMANGLEUDTID( MANGLED$1, SUBTYPE$1 );
			HABBREVADD( DTYPE$1, SUBTYPE$1 );
		}
		goto label$148;
		label$154:;
		if( DTYPE$1 != 20ll ) goto label$160;
		label$161:;
		{
			FBSTRING TMP$142$3;
			FBSTRING TMP$146$3;
			__builtin_memset( &TMP$142$3, 0, 24ll );
			FBSTRING* vr$69 = fb_StrConcat( &TMP$142$3, (void*)MANGLED$1, -1ll, (void*)"F", 2ll );
			FBSTRING* vr$70 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$69, -1ll, 0 );
			if( (*(int64*)((uint8*)SUBTYPE$1 + 8ll) & 33554432ll) == 0ll ) goto label$163;
			{
				FBSTRING TMP$143$4;
				__builtin_memset( &TMP$143$4, 0, 24ll );
				FBSTRING* vr$76 = fb_StrConcat( &TMP$143$4, (void*)MANGLED$1, -1ll, (void*)"R", 2ll );
				FBSTRING* vr$77 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$76, -1ll, 0 );
			}
			label$163:;
			label$162:;
			if( (*(int64*)((uint8*)SUBTYPE$1 + 48ll) & 512ll) == 0ll ) goto label$165;
			{
				FBSTRING TMP$145$4;
				__builtin_memset( &TMP$145$4, 0, 24ll );
				FBSTRING* vr$83 = fb_StrConcat( &TMP$145$4, (void*)MANGLED$1, -1ll, (void*)"K", 2ll );
				FBSTRING* vr$84 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$83, -1ll, 0 );
			}
			label$165:;
			label$164:;
			SYMBMANGLETYPE( MANGLED$1, *(int64*)((uint8*)SUBTYPE$1 + 48ll), *(struct $8FBSYMBOL**)((uint8*)SUBTYPE$1 + 56ll) );
			HGETPROCPARAMSTYPECODE( MANGLED$1, SUBTYPE$1, 0ll );
			__builtin_memset( &TMP$146$3, 0, 24ll );
			FBSTRING* vr$89 = fb_StrConcat( &TMP$146$3, (void*)MANGLED$1, -1ll, (void*)"E", 2ll );
			FBSTRING* vr$90 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$89, -1ll, 0 );
			HABBREVADD( DTYPE$1, SUBTYPE$1 );
		}
		goto label$148;
		label$160:;
		{
			FBSTRING TMP$147$3;
			uint8* vr$92 = HMANGLEBUILTINTYPE( DTYPE$1, &ADD_ABBREV$1 );
			__builtin_memset( &TMP$147$3, 0, 24ll );
			FBSTRING* vr$95 = fb_StrConcat( &TMP$147$3, (void*)MANGLED$1, -1ll, (void*)vr$92, 0ll );
			FBSTRING* vr$96 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$95, -1ll, 0 );
			if( ADD_ABBREV$1 == 0ll ) goto label$168;
			{
				HABBREVADD( DTYPE$1, SUBTYPE$1 );
			}
			label$168:;
			label$167:;
		}
		label$166:;
		label$148:;
	}
	label$132:;
}

void SYMBMANGLEPARAM( FBSTRING* MANGLED$1, struct $8FBSYMBOL* PARAM$1 )
{
	label$170:;
	{
		uint64 TMP$148$2;
		TMP$148$2 = *(uint64*)((uint8*)PARAM$1 + 88ll);
		goto label$173;
		label$174:;
		{
			SYMBMANGLETYPE( MANGLED$1, *(int64*)((uint8*)PARAM$1 + 48ll), *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll) );
		}
		goto label$172;
		label$175:;
		{
			SYMBMANGLETYPE( MANGLED$1, *(int64*)((uint8*)PARAM$1 + 48ll) | 524288ll, *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll) );
		}
		goto label$172;
		label$176:;
		{
			SYMBMANGLETYPE( MANGLED$1, 524306ll, *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 120ll) );
		}
		goto label$172;
		label$177:;
		{
			FBSTRING TMP$150$3;
			__builtin_memset( &TMP$150$3, 0, 24ll );
			FBSTRING* vr$9 = fb_StrConcat( &TMP$150$3, (void*)MANGLED$1, -1ll, (void*)"z", 2ll );
			FBSTRING* vr$10 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$9, -1ll, 0 );
		}
		goto label$172;
		label$173:;
		static const void* tmp$151[4ll] = {
			&&label$174,
			&&label$175,
			&&label$176,
			&&label$177,
		};
		if( TMP$148$2 < 1ll ) goto label$172;
		if( TMP$148$2 > 4ll ) goto label$172;
		goto *tmp$151[TMP$148$2 - 1ll];
		label$172:;
	}
	label$171:;
}

__attribute__(( constructor )) static void fb_ctor__symbzmangling( void )
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

static void SYMBSETMANGLEDID( struct $8FBSYMBOL* SYM$1, FBSTRING* MANGLED$1 )
{
	label$44:;
	int64 vr$0 = fb_StrLen( (void*)MANGLED$1, -1ll );
	void* vr$3 = XALLOCATE( (int32)(vr$0 + 1ll) );
	*(uint8**)((uint8*)SYM$1 + 40ll) = (uint8*)vr$3;
	fb_StrAssign( *(void**)((uint8*)SYM$1 + 40ll), 0ll, (void*)MANGLED$1, -1ll, 0 );
	label$45:;
}

static void HMANGLEUDTID( FBSTRING* MANGLED$1, struct $8FBSYMBOL* SYM$1 )
{
	label$46:;
	int64 ARRAYDTYPE$1;
	struct $8FBSYMBOL* ARRAYSUBTYPE$1;
	if( *(uint8**)((uint8*)SYM$1 + 32ll) == (uint8*)0ull ) goto label$49;
	{
		FBSTRING TMP$88$2;
		FBSTRING TMP$89$2;
		int64 vr$3 = fb_StrLen( *(void**)((uint8*)SYM$1 + 32ll), 0ll );
		FBSTRING* vr$4 = fb_LongintToStr( vr$3 );
		__builtin_memset( &TMP$88$2, 0, 24ll );
		FBSTRING* vr$7 = fb_StrConcat( &TMP$88$2, (void*)MANGLED$1, -1ll, (void*)vr$4, -1ll );
		FBSTRING* vr$8 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$7, -1ll, 0 );
		__builtin_memset( &TMP$89$2, 0, 24ll );
		FBSTRING* vr$12 = fb_StrConcat( &TMP$89$2, (void*)MANGLED$1, -1ll, *(void**)((uint8*)SYM$1 + 32ll), 0ll );
		FBSTRING* vr$13 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$12, -1ll, 0 );
	}
	goto label$48;
	label$49:;
	{
		FBSTRING TMP$90$2;
		FBSTRING TMP$91$2;
		int64 vr$15 = fb_StrLen( *(void**)((uint8*)SYM$1 + 24ll), 0ll );
		FBSTRING* vr$16 = fb_LongintToStr( vr$15 );
		__builtin_memset( &TMP$90$2, 0, 24ll );
		FBSTRING* vr$19 = fb_StrConcat( &TMP$90$2, (void*)MANGLED$1, -1ll, (void*)vr$16, -1ll );
		FBSTRING* vr$20 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$19, -1ll, 0 );
		__builtin_memset( &TMP$91$2, 0, 24ll );
		FBSTRING* vr$24 = fb_StrConcat( &TMP$91$2, (void*)MANGLED$1, -1ll, *(void**)((uint8*)SYM$1 + 24ll), 0ll );
		FBSTRING* vr$25 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$24, -1ll, 0 );
	}
	label$48:;
	if( ((int64)-(*(int64*)SYM$1 == 10ll) & (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 8388608ll) != 0ll)) == 0ll ) goto label$51;
	{
		FBSTRING TMP$93$2;
		FBSTRING TMP$95$2;
		__builtin_memset( &TMP$93$2, 0, 24ll );
		FBSTRING* vr$35 = fb_StrConcat( &TMP$93$2, (void*)MANGLED$1, -1ll, (void*)"I", 2ll );
		FBSTRING* vr$36 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$35, -1ll, 0 );
		SYMBGETDESCTYPEARRAYDTYPE( SYM$1, &ARRAYDTYPE$1, &ARRAYSUBTYPE$1 );
		SYMBMANGLETYPE( MANGLED$1, ARRAYDTYPE$1, ARRAYSUBTYPE$1 );
		__builtin_memset( &TMP$95$2, 0, 24ll );
		FBSTRING* vr$41 = fb_StrConcat( &TMP$95$2, (void*)MANGLED$1, -1ll, (void*)"E", 2ll );
		FBSTRING* vr$42 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$41, -1ll, 0 );
	}
	label$51:;
	label$50:;
	label$47:;
}

static int64 HABBREVFIND( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$70:;
	struct $13FB_MANGLEABBR* N$1;
	if( *(int64*)((uint8*)&CTX$ + 112ll) != 0ll ) goto label$73;
	{
		fb$result$1 = -1ll;
		goto label$71;
	}
	label$73:;
	label$72:;
	if( SUBTYPE$1 != (struct $8FBSYMBOL*)0ull ) goto label$75;
	{
		if( (int64)-((DTYPE$1 & 480ll) != 0ll) != 0ll ) goto label$77;
		{
			int64 TMP$99$3;
			if( (DTYPE$1 & 480ll) == 0ll ) goto label$78;
			TMP$99$3 = 22ll;
			goto label$403;
			label$78:;
			TMP$99$3 = DTYPE$1 & 31ll;
			label$403:;
			if( TMP$99$3 == 16ll ) goto label$80;
			{
				fb$result$1 = -1ll;
				goto label$71;
			}
			label$80:;
			label$79:;
		}
		label$77:;
		label$76:;
	}
	label$75:;
	label$74:;
	void* vr$11 = FLISTGETHEAD( (struct $6TFLIST*)&CTX$ );
	N$1 = (struct $13FB_MANGLEABBR*)vr$11;
	label$81:;
	if( N$1 == (struct $13FB_MANGLEABBR*)0ull ) goto label$82;
	{
		if( *(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll) != SUBTYPE$1 ) goto label$84;
		{
			if( *(int64*)((uint8*)N$1 + 8ll) != DTYPE$1 ) goto label$86;
			{
				fb$result$1 = *(int64*)N$1;
				goto label$71;
			}
			label$86:;
			label$85:;
		}
		label$84:;
		label$83:;
		void* vr$18 = FLISTGETNEXT( (void*)N$1 );
		N$1 = (struct $13FB_MANGLEABBR*)vr$18;
	}
	goto label$81;
	label$82:;
	fb$result$1 = -1ll;
	label$71:;
	return fb$result$1;
}

static struct $13FB_MANGLEABBR* HABBREVADD( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	struct $13FB_MANGLEABBR* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$87:;
	struct $13FB_MANGLEABBR* N$1;
	void* vr$2 = FLISTNEWITEM( (struct $6TFLIST*)&CTX$ );
	N$1 = (struct $13FB_MANGLEABBR*)vr$2;
	*(int64*)N$1 = *(int64*)((uint8*)&CTX$ + 112ll);
	*(int64*)((uint8*)N$1 + 8ll) = DTYPE$1;
	*(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll) = SUBTYPE$1;
	*(int64*)((uint8*)&CTX$ + 112ll) = *(int64*)((uint8*)&CTX$ + 112ll) + 1ll;
	fb$result$1 = N$1;
	label$88:;
	return fb$result$1;
}

static void HABBREVGET( FBSTRING* MANGLED$1, int64 IDX$1 )
{
	FBSTRING TMP$101$1;
	FBSTRING TMP$109$1;
	label$89:;
	__builtin_memset( &TMP$101$1, 0, 24ll );
	FBSTRING* vr$2 = fb_StrConcat( &TMP$101$1, (void*)MANGLED$1, -1ll, (void*)"S", 2ll );
	FBSTRING* vr$3 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$2, -1ll, 0 );
	if( IDX$1 <= 0ll ) goto label$92;
	{
		if( IDX$1 > 10ll ) goto label$94;
		{
			FBSTRING TMP$102$3;
			FBSTRING* vr$8 = fb_CHR( 1, (int64)((uint64)(IDX$1 + -1ll) + 48ull) );
			__builtin_memset( &TMP$102$3, 0, 24ll );
			FBSTRING* vr$11 = fb_StrConcat( &TMP$102$3, (void*)MANGLED$1, -1ll, (void*)vr$8, -1ll );
			FBSTRING* vr$12 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$11, -1ll, 0 );
		}
		goto label$93;
		label$94:;
		if( IDX$1 > 33ll ) goto label$95;
		{
			FBSTRING TMP$104$3;
			FBSTRING* vr$16 = fb_CHR( 1, (int64)((uint64)(IDX$1 + -11ll) + 65ull) );
			__builtin_memset( &TMP$104$3, 0, 24ll );
			FBSTRING* vr$19 = fb_StrConcat( &TMP$104$3, (void*)MANGLED$1, -1ll, (void*)vr$16, -1ll );
			FBSTRING* vr$20 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$19, -1ll, 0 );
		}
		goto label$93;
		label$95:;
		{
			FBSTRING TMP$105$3;
			FBSTRING* vr$22 = fb_CHR( 1, IDX$1 / 33ll );
			__builtin_memset( &TMP$105$3, 0, 24ll );
			FBSTRING* vr$25 = fb_StrConcat( &TMP$105$3, (void*)MANGLED$1, -1ll, (void*)vr$22, -1ll );
			FBSTRING* vr$26 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$25, -1ll, 0 );
			IDX$1 = IDX$1 % 33ll;
			if( IDX$1 > 10ll ) goto label$97;
			{
				FBSTRING TMP$106$4;
				FBSTRING* vr$31 = fb_CHR( 1, (int64)((uint64)(IDX$1 + -1ll) + 48ull) );
				__builtin_memset( &TMP$106$4, 0, 24ll );
				FBSTRING* vr$34 = fb_StrConcat( &TMP$106$4, (void*)MANGLED$1, -1ll, (void*)vr$31, -1ll );
				FBSTRING* vr$35 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$34, -1ll, 0 );
			}
			goto label$96;
			label$97:;
			if( IDX$1 > 33ll ) goto label$98;
			{
				FBSTRING TMP$107$4;
				FBSTRING* vr$39 = fb_CHR( 1, (int64)((uint64)(IDX$1 + -11ll) + 65ull) );
				__builtin_memset( &TMP$107$4, 0, 24ll );
				FBSTRING* vr$42 = fb_StrConcat( &TMP$107$4, (void*)MANGLED$1, -1ll, (void*)vr$39, -1ll );
				FBSTRING* vr$43 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$42, -1ll, 0 );
			}
			label$98:;
			label$96:;
		}
		label$93:;
	}
	label$92:;
	label$91:;
	__builtin_memset( &TMP$109$1, 0, 24ll );
	FBSTRING* vr$46 = fb_StrConcat( &TMP$109$1, (void*)MANGLED$1, -1ll, (void*)"_", 2ll );
	FBSTRING* vr$47 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$46, -1ll, 0 );
	label$90:;
}

static int64 HADDUNDERSCORE( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$178:;
	if( *(int64*)((uint8*)&ENV$ + 208ll) != 1ll ) goto label$181;
	{
		fb$result$1 = 0ll;
	}
	goto label$180;
	label$181:;
	{
		fb$result$1 = *(int64*)((uint8*)&ENV$ + 464ll);
	}
	label$180:;
	label$179:;
	return fb$result$1;
}

static int64 HDOCPPMANGLING( struct $8FBSYMBOL* SYM$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$182:;
	if( (int64)*(int16*)((uint8*)SYM$1 + 66ll) != 4ll ) goto label$185;
	{
		fb$result$1 = -1ll;
		goto label$183;
	}
	label$185:;
	label$184:;
	if( (*(int64*)((uint8*)SYM$1 + 16ll) & 2080ll) == 0ll ) goto label$187;
	{
		fb$result$1 = 0ll;
		goto label$183;
	}
	label$187:;
	label$186:;
	if( *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)SYM$1 + 232ll) == (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll) ) goto label$189;
	{
		fb$result$1 = -1ll;
		goto label$183;
	}
	label$189:;
	label$188:;
	if( *(int64*)SYM$1 != 3ll ) goto label$191;
	{
		if( (*(int64*)((uint8*)SYM$1 + 8ll) & 1024ll) == 0ll ) goto label$193;
		{
			fb$result$1 = -1ll;
			goto label$183;
		}
		label$193:;
		label$192:;
	}
	label$191:;
	label$190:;
	fb$result$1 = 0ll;
	label$183:;
	return fb$result$1;
}

static void HMANGLENAMESPACE( FBSTRING* MANGLED$1, struct $8FBSYMBOL* NS$1, int64 DOHASHING$1, int64 ISCONST$1 )
{
	FBSTRING TMP$153$1;
	label$194:;
	static struct $8FBSYMBOL* NSSTK$1[64];
	struct $8FBARRAY1IP8FBSYMBOLE {
		struct $8FBSYMBOL** DATA;
		struct $8FBSYMBOL** PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1IP8FBSYMBOLE ) == 64 );
	static struct $8FBARRAY1IP8FBSYMBOLE tmp$152$1 = { (struct $8FBSYMBOL**)NSSTK$1, (struct $8FBSYMBOL**)NSSTK$1, 512ll, 8ll, 1ll, { { 64ll, 0ll, 63ll } } };
	int64 TOS$1;
	if( NS$1 != (struct $8FBSYMBOL*)0ull ) goto label$197;
	{
		goto label$195;
	}
	label$197:;
	label$196:;
	if( NS$1 != (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll) ) goto label$199;
	{
		goto label$195;
	}
	label$199:;
	label$198:;
	if( DOHASHING$1 == 0ll ) goto label$201;
	{
		FBSTRING UNUSED$2;
		__builtin_memset( &UNUSED$2, 0, 24ll );
		SYMBMANGLETYPE( &UNUSED$2, *(int64*)((uint8*)NS$1 + 48ll), NS$1 );
		fb_StrDelete( &UNUSED$2 );
	}
	label$201:;
	label$200:;
	TOS$1 = -1ll;
	label$202:;
	{
		TOS$1 = TOS$1 + 1ll;
		*(struct $8FBSYMBOL**)((uint8*)NSSTK$1 + (TOS$1 << 3ll)) = NS$1;
		NS$1 = *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)NS$1 + 232ll);
	}
	label$204:;
	if( NS$1 != (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll) ) goto label$202;
	label$203:;
	__builtin_memset( &TMP$153$1, 0, 24ll );
	FBSTRING* vr$16 = fb_StrConcat( &TMP$153$1, (void*)MANGLED$1, -1ll, (void*)"N", 2ll );
	FBSTRING* vr$17 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$16, -1ll, 0 );
	if( ISCONST$1 == 0ll ) goto label$206;
	{
		FBSTRING TMP$154$2;
		__builtin_memset( &TMP$154$2, 0, 24ll );
		FBSTRING* vr$21 = fb_StrConcat( &TMP$154$2, (void*)MANGLED$1, -1ll, (void*)"K", 2ll );
		FBSTRING* vr$22 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$21, -1ll, 0 );
	}
	label$206:;
	label$205:;
	label$207:;
	{
		NS$1 = *(struct $8FBSYMBOL**)((uint8*)NSSTK$1 + (TOS$1 << 3ll));
		HMANGLEUDTID( MANGLED$1, NS$1 );
		TOS$1 = TOS$1 + -1ll;
	}
	label$209:;
	if( TOS$1 >= 0ll ) goto label$207;
	label$208:;
	label$195:;
}

static void HMANGLEVARIABLE( struct $8FBSYMBOL* SYM$1 )
{
	label$210:;
	static FBSTRING ID$1;
	static int64 VARCOUNTER$1;
	FBSTRING MANGLED$1;
	__builtin_memset( &MANGLED$1, 0, 24ll );
	uint8* P$1;
	int64 DOCPP$1;
	int64 ISGLOBAL$1;
	if( (int64)*(uint16*)((uint8*)SYM$1 + 64ll) <= 0ll ) goto label$213;
	{
		DOCPP$1 = 0ll;
	}
	goto label$212;
	label$213:;
	{
		int64 vr$4 = HDOCPPMANGLING( SYM$1 );
		DOCPP$1 = vr$4;
	}
	label$212:;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 59ll) == 0ll ) goto label$215;
	{
		if( *(int64*)((uint8*)&ENV$ + 208ll) != 2ll ) goto label$217;
		{
			FBSTRING* vr$10 = fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)"@", 2ll, 0 );
		}
		label$217:;
		label$216:;
		{
			$13FB_COMPTARGET TMP$156$3;
			TMP$156$3 = *($13FB_COMPTARGET*)((uint8*)&ENV$ + 216ll);
			if( TMP$156$3 == 0ll ) goto label$220;
			label$221:;
			if( TMP$156$3 != 1ll ) goto label$219;
			label$220:;
			{
				if( ((int64)-(*(int64*)((uint8*)&ENV$ + 208ll) == 0ll) & (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 512ll) != 0ll)) == 0ll ) goto label$223;
				{
					FBSTRING* vr$20 = fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)"__imp_", 7ll, 0 );
				}
				label$223:;
				label$222:;
			}
			label$219:;
			label$218:;
		}
		int64 vr$21 = HADDUNDERSCORE(  );
		if( vr$21 == 0ll ) goto label$225;
		{
			FBSTRING* vr$24 = fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)"_", 2ll, 0 );
		}
		label$225:;
		label$224:;
		if( DOCPP$1 == 0ll ) goto label$227;
		{
			FBSTRING* vr$27 = fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)"_Z", 3ll, 0 );
			if( (*(int64*)((uint8*)SYM$1 + 16ll) & 256ll) == 0ll ) goto label$229;
			{
				FBSTRING* vr$32 = fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)"TS", 3ll, 0 );
			}
			goto label$228;
			label$229:;
			if( (*(int64*)((uint8*)SYM$1 + 16ll) & 1024ll) == 0ll ) goto label$230;
			{
				FBSTRING* vr$37 = fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)"TV", 3ll, 0 );
			}
			label$230:;
			label$228:;
		}
		label$227:;
		label$226:;
	}
	goto label$214;
	label$215:;
	{
		if( *(int64*)((uint8*)&ENV$ + 208ll) != 2ll ) goto label$232;
		{
			FBSTRING* vr$40 = fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)"%", 2ll, 0 );
		}
		label$232:;
		label$231:;
	}
	label$214:;
	if( DOCPP$1 == 0ll ) goto label$234;
	{
		HMANGLENAMESPACE( &MANGLED$1, *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)SYM$1 + 232ll), 0ll, 0ll );
	}
	label$234:;
	label$233:;
	if( (*(int64*)((uint8*)SYM$1 + 16ll) & 1280ll) == 0ll ) goto label$236;
	{
		fb_StrAssign( (void*)&ID$1, -1ll, (void*)"", 1ll, 0 );
	}
	goto label$235;
	label$236:;
	if( (*(int64*)((uint8*)SYM$1 + 16ll) & 512ll) == 0ll ) goto label$237;
	{
		fb_StrAssign( (void*)&ID$1, -1ll, *(void**)((uint8*)SYM$1 + 32ll), 0ll, 0 );
	}
	goto label$235;
	label$237:;
	{
		ISGLOBAL$1 = (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 57ll) != 0ll);
		if( (ISGLOBAL$1 | DOCPP$1) == 0ll ) goto label$239;
		{
			if( (int64)*(int16*)((uint8*)SYM$1 + 66ll) != 0ll ) goto label$241;
			{
				fb_StrAssign( (void*)&ID$1, -1ll, *(void**)((uint8*)SYM$1 + 24ll), 0ll, 0 );
				if( *(int64*)((uint8*)&ENV$ + 208ll) != 1ll ) goto label$243;
				{
					FBSTRING* vr$62 = fb_StrConcatAssign( (void*)&ID$1, -1ll, (void*)"$", 2ll, 0 );
				}
				label$243:;
				label$242:;
			}
			goto label$240;
			label$241:;
			{
				fb_StrAssign( (void*)&ID$1, -1ll, *(void**)((uint8*)SYM$1 + 32ll), 0ll, 0 );
			}
			label$240:;
			if( (*(int64*)((uint8*)SYM$1 + 8ll) & 268435456ll) == 0ll ) goto label$245;
			{
				int64 TMP$162$4;
				FBSTRING TMP$163$4;
				TMP$162$4 = 0ll;
				uint8* vr$70 = HMANGLEBUILTINTYPE( *(int64*)((uint8*)SYM$1 + 48ll) & 511ll, &TMP$162$4 );
				__builtin_memset( &TMP$163$4, 0, 24ll );
				FBSTRING* vr$73 = fb_StrConcat( &TMP$163$4, (void*)&ID$1, -1ll, (void*)vr$70, 0ll );
				FBSTRING* vr$74 = fb_StrAssign( (void*)&ID$1, -1ll, (void*)vr$73, -1ll, 0 );
				if( *(int64*)((uint8*)&ENV$ + 208ll) != 1ll ) goto label$247;
				{
					FBSTRING* vr$76 = fb_StrConcatAssign( (void*)&ID$1, -1ll, (void*)"$", 2ll, 0 );
				}
				label$247:;
				label$246:;
			}
			label$245:;
			label$244:;
		}
		goto label$238;
		label$239:;
		{
			{
				$10FB_BACKEND TMP$164$4;
				TMP$164$4 = *($10FB_BACKEND*)((uint8*)&ENV$ + 208ll);
				if( TMP$164$4 != 1ll ) goto label$249;
				label$250:;
				{
					int64 vr$81 = SYMBHASDTOR( SYM$1 );
					if( ((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 2ll) != 0ll) & vr$81) == 0ll ) goto label$252;
					{
						uint8* vr$84 = SYMBUNIQUEID(  );
						fb_StrAssign( (void*)&ID$1, -1ll, (void*)vr$84, 0ll, 0 );
					}
					goto label$251;
					label$252:;
					{
						if( (int64)*(int16*)((uint8*)SYM$1 + 66ll) != 0ll ) goto label$254;
						{
							FBSTRING TMP$167$7;
							fb_StrAssign( (void*)&ID$1, -1ll, *(void**)((uint8*)SYM$1 + 24ll), 0ll, 0 );
							FBSTRING* vr$89 = fb_StrConcatAssign( (void*)&ID$1, -1ll, (void*)"$", 2ll, 0 );
							if( (*(int64*)((uint8*)SYM$1 + 8ll) & 268435456ll) == 0ll ) goto label$256;
							{
								int64 TMP$165$8;
								FBSTRING TMP$166$8;
								TMP$165$8 = 0ll;
								uint8* vr$96 = HMANGLEBUILTINTYPE( *(int64*)((uint8*)SYM$1 + 48ll) & 511ll, &TMP$165$8 );
								__builtin_memset( &TMP$166$8, 0, 24ll );
								FBSTRING* vr$99 = fb_StrConcat( &TMP$166$8, (void*)&ID$1, -1ll, (void*)vr$96, 0ll );
								FBSTRING* vr$100 = fb_StrAssign( (void*)&ID$1, -1ll, (void*)vr$99, -1ll, 0 );
								FBSTRING* vr$101 = fb_StrConcatAssign( (void*)&ID$1, -1ll, (void*)"$", 2ll, 0 );
							}
							label$256:;
							label$255:;
							FBSTRING* vr$104 = fb_UIntToStr( (uint32)*(uint16*)((uint8*)SYM$1 + 64ll) );
							__builtin_memset( &TMP$167$7, 0, 24ll );
							FBSTRING* vr$107 = fb_StrConcat( &TMP$167$7, (void*)&ID$1, -1ll, (void*)vr$104, -1ll );
							FBSTRING* vr$108 = fb_StrAssign( (void*)&ID$1, -1ll, (void*)vr$107, -1ll, 0 );
						}
						goto label$253;
						label$254:;
						{
							fb_StrAssign( (void*)&ID$1, -1ll, *(void**)((uint8*)SYM$1 + 32ll), 0ll, 0 );
						}
						label$253:;
					}
					label$251:;
				}
				goto label$248;
				label$249:;
				if( TMP$164$4 != 2ll ) goto label$257;
				label$258:;
				{
					if( (int64)*(int16*)((uint8*)SYM$1 + 66ll) != 0ll ) goto label$260;
					{
						fb_StrAssign( (void*)&ID$1, -1ll, *(void**)((uint8*)SYM$1 + 24ll), 0ll, 0 );
						if( (*(int64*)((uint8*)SYM$1 + 8ll) & 268435456ll) == 0ll ) goto label$262;
						{
							int64 TMP$168$7;
							FBSTRING TMP$169$7;
							TMP$168$7 = 0ll;
							uint8* vr$121 = HMANGLEBUILTINTYPE( *(int64*)((uint8*)SYM$1 + 48ll) & 511ll, &TMP$168$7 );
							__builtin_memset( &TMP$169$7, 0, 24ll );
							FBSTRING* vr$124 = fb_StrConcat( &TMP$169$7, (void*)&ID$1, -1ll, (void*)vr$121, 0ll );
							FBSTRING* vr$125 = fb_StrAssign( (void*)&ID$1, -1ll, (void*)vr$124, -1ll, 0 );
						}
						label$262:;
						label$261:;
						FBSTRING* vr$126 = fb_StrConcatAssign( (void*)&ID$1, -1ll, (void*)".", 2ll, 0 );
						FBSTRING* vr$127 = fb_LongintToStr( VARCOUNTER$1 );
						FBSTRING* vr$128 = fb_StrConcatAssign( (void*)&ID$1, -1ll, (void*)vr$127, -1ll, 0 );
						VARCOUNTER$1 = VARCOUNTER$1 + 1ll;
					}
					goto label$259;
					label$260:;
					{
						fb_StrAssign( (void*)&ID$1, -1ll, *(void**)((uint8*)SYM$1 + 32ll), 0ll, 0 );
					}
					label$259:;
				}
				goto label$248;
				label$257:;
				{
					if( (*(int64*)((uint8*)SYM$1 + 8ll) & 2ll) == 0ll ) goto label$265;
					{
						uint8* vr$134 = SYMBUNIQUEID(  );
						fb_StrAssign( (void*)&ID$1, -1ll, (void*)vr$134, 0ll, 0 );
					}
					goto label$264;
					label$265:;
					{
						uint8* vr$135 = (*(tmp$42*)((uint8*)&IR$ + 88ll))(  );
						fb_StrAssign( (void*)&ID$1, -1ll, (void*)vr$135, 0ll, 0 );
					}
					label$264:;
				}
				label$263:;
				label$248:;
			}
		}
		label$238:;
	}
	label$235:;
	int64 vr$136 = fb_StrLen( (void*)&ID$1, -1ll );
	if( vr$136 <= 0ll ) goto label$267;
	{
		if( DOCPP$1 == 0ll ) goto label$269;
		{
			int64 vr$139 = fb_StrLen( (void*)&ID$1, -1ll );
			FBSTRING* vr$140 = fb_LongintToStr( vr$139 );
			FBSTRING* vr$142 = fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)vr$140, -1ll, 0 );
		}
		label$269:;
		label$268:;
		FBSTRING* vr$144 = fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)&ID$1, -1ll, 0 );
	}
	label$267:;
	label$266:;
	if( DOCPP$1 == 0ll ) goto label$271;
	{
		if( *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)SYM$1 + 232ll) == (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll) ) goto label$273;
		{
			FBSTRING* vr$151 = fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)"E", 2ll, 0 );
		}
		label$273:;
		label$272:;
	}
	label$271:;
	label$270:;
	SYMBSETMANGLEDID( SYM$1, &MANGLED$1 );
	fb_StrDelete( &MANGLED$1 );
	label$211:;
}

static void HGETPROCPARAMSTYPECODE( FBSTRING* MANGLED$1, struct $8FBSYMBOL* SYM$1, int64 IS_REAL_PROC$1 )
{
	label$274:;
	struct $8FBSYMBOL* PARAM$1;
	PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 128ll);
	if( PARAM$1 == (struct $8FBSYMBOL*)0ull ) goto label$277;
	{
		if( (IS_REAL_PROC$1 & (int64)-((*(int64*)((uint8*)PARAM$1 + 8ll) & 2048ll) != 0ll)) == 0ll ) goto label$279;
		{
			PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 296ll);
		}
		label$279:;
		label$278:;
	}
	label$277:;
	label$276:;
	if( PARAM$1 != (struct $8FBSYMBOL*)0ull ) goto label$281;
	{
		FBSTRING TMP$170$2;
		__builtin_memset( &TMP$170$2, 0, 24ll );
		FBSTRING* vr$11 = fb_StrConcat( &TMP$170$2, (void*)MANGLED$1, -1ll, (void*)"v", 2ll );
		FBSTRING* vr$12 = fb_StrAssign( (void*)MANGLED$1, -1ll, (void*)vr$11, -1ll, 0 );
		goto label$275;
	}
	label$281:;
	label$280:;
	label$282:;
	{
		SYMBMANGLEPARAM( MANGLED$1, PARAM$1 );
		PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 296ll);
	}
	label$284:;
	if( PARAM$1 != (struct $8FBSYMBOL*)0ull ) goto label$282;
	label$283:;
	label$275:;
}

static uint8* HGETOPERATORNAME( struct $8FBSYMBOL* PROC$1 )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$285:;
	{
		uint64 TMP$171$2;
		TMP$171$2 = *(uint64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 80ll);
		goto label$288;
		label$289:;
		{
			fb$result$1 = (uint8*)"aS";
		}
		goto label$287;
		label$290:;
		{
			fb$result$1 = (uint8*)"pl";
		}
		goto label$287;
		label$291:;
		{
			fb$result$1 = (uint8*)"pL";
		}
		goto label$287;
		label$292:;
		{
			fb$result$1 = (uint8*)"mi";
		}
		goto label$287;
		label$293:;
		{
			fb$result$1 = (uint8*)"mI";
		}
		goto label$287;
		label$294:;
		{
			fb$result$1 = (uint8*)"ml";
		}
		goto label$287;
		label$295:;
		{
			fb$result$1 = (uint8*)"mL";
		}
		goto label$287;
		label$296:;
		{
			fb$result$1 = (uint8*)"dv";
		}
		goto label$287;
		label$297:;
		{
			fb$result$1 = (uint8*)"dV";
		}
		goto label$287;
		label$298:;
		{
			fb$result$1 = (uint8*)"v24idiv";
		}
		goto label$287;
		label$299:;
		{
			fb$result$1 = (uint8*)"v28selfidiv";
		}
		goto label$287;
		label$300:;
		{
			fb$result$1 = (uint8*)"rm";
		}
		goto label$287;
		label$301:;
		{
			fb$result$1 = (uint8*)"rM";
		}
		goto label$287;
		label$302:;
		{
			fb$result$1 = (uint8*)"an";
		}
		goto label$287;
		label$303:;
		{
			fb$result$1 = (uint8*)"aN";
		}
		goto label$287;
		label$304:;
		{
			fb$result$1 = (uint8*)"or";
		}
		goto label$287;
		label$305:;
		{
			fb$result$1 = (uint8*)"oR";
		}
		goto label$287;
		label$306:;
		{
			fb$result$1 = (uint8*)"aa";
		}
		goto label$287;
		label$307:;
		{
			fb$result$1 = (uint8*)"aA";
		}
		goto label$287;
		label$308:;
		{
			fb$result$1 = (uint8*)"oo";
		}
		goto label$287;
		label$309:;
		{
			fb$result$1 = (uint8*)"oO";
		}
		goto label$287;
		label$310:;
		{
			fb$result$1 = (uint8*)"eo";
		}
		goto label$287;
		label$311:;
		{
			fb$result$1 = (uint8*)"eO";
		}
		goto label$287;
		label$312:;
		{
			fb$result$1 = (uint8*)"v23eqv";
		}
		goto label$287;
		label$313:;
		{
			fb$result$1 = (uint8*)"v27selfeqv";
		}
		goto label$287;
		label$314:;
		{
			fb$result$1 = (uint8*)"v23imp";
		}
		goto label$287;
		label$315:;
		{
			fb$result$1 = (uint8*)"v27selfimp";
		}
		goto label$287;
		label$316:;
		{
			fb$result$1 = (uint8*)"ls";
		}
		goto label$287;
		label$317:;
		{
			fb$result$1 = (uint8*)"lS";
		}
		goto label$287;
		label$318:;
		{
			fb$result$1 = (uint8*)"rs";
		}
		goto label$287;
		label$319:;
		{
			fb$result$1 = (uint8*)"rS";
		}
		goto label$287;
		label$320:;
		{
			fb$result$1 = (uint8*)"v23pow";
		}
		goto label$287;
		label$321:;
		{
			fb$result$1 = (uint8*)"v27selfpow";
		}
		goto label$287;
		label$322:;
		{
			fb$result$1 = (uint8*)"v23cat";
		}
		goto label$287;
		label$323:;
		{
			fb$result$1 = (uint8*)"v27selfcat";
		}
		goto label$287;
		label$324:;
		{
			fb$result$1 = (uint8*)"eq";
		}
		goto label$287;
		label$325:;
		{
			fb$result$1 = (uint8*)"gt";
		}
		goto label$287;
		label$326:;
		{
			fb$result$1 = (uint8*)"lt";
		}
		goto label$287;
		label$327:;
		{
			fb$result$1 = (uint8*)"ne";
		}
		goto label$287;
		label$328:;
		{
			fb$result$1 = (uint8*)"ge";
		}
		goto label$287;
		label$329:;
		{
			fb$result$1 = (uint8*)"le";
		}
		goto label$287;
		label$330:;
		{
			fb$result$1 = (uint8*)"co";
		}
		goto label$287;
		label$331:;
		{
			fb$result$1 = (uint8*)"ng";
		}
		goto label$287;
		label$332:;
		{
			fb$result$1 = (uint8*)"ps";
		}
		goto label$287;
		label$333:;
		{
			fb$result$1 = (uint8*)"v13abs";
		}
		goto label$287;
		label$334:;
		{
			fb$result$1 = (uint8*)"v13fix";
		}
		goto label$287;
		label$335:;
		{
			fb$result$1 = (uint8*)"v14frac";
		}
		goto label$287;
		label$336:;
		{
			fb$result$1 = (uint8*)"v13len";
		}
		goto label$287;
		label$337:;
		{
			fb$result$1 = (uint8*)"v13sgn";
		}
		goto label$287;
		label$338:;
		{
			fb$result$1 = (uint8*)"v13int";
		}
		goto label$287;
		label$339:;
		{
			fb$result$1 = (uint8*)"v13exp";
		}
		goto label$287;
		label$340:;
		{
			fb$result$1 = (uint8*)"v13log";
		}
		goto label$287;
		label$341:;
		{
			fb$result$1 = (uint8*)"v13sin";
		}
		goto label$287;
		label$342:;
		{
			fb$result$1 = (uint8*)"v14asin";
		}
		goto label$287;
		label$343:;
		{
			fb$result$1 = (uint8*)"v13cos";
		}
		goto label$287;
		label$344:;
		{
			fb$result$1 = (uint8*)"v14acos";
		}
		goto label$287;
		label$345:;
		{
			fb$result$1 = (uint8*)"v13tan";
		}
		goto label$287;
		label$346:;
		{
			fb$result$1 = (uint8*)"v13atn";
		}
		goto label$287;
		label$347:;
		{
			fb$result$1 = (uint8*)"nw";
		}
		goto label$287;
		label$348:;
		{
			fb$result$1 = (uint8*)"na";
		}
		goto label$287;
		label$349:;
		{
			fb$result$1 = (uint8*)"dl";
		}
		goto label$287;
		label$350:;
		{
			fb$result$1 = (uint8*)"da";
		}
		goto label$287;
		label$351:;
		{
			fb$result$1 = (uint8*)"de";
		}
		goto label$287;
		label$352:;
		{
			fb$result$1 = (uint8*)"pt";
		}
		goto label$287;
		label$353:;
		{
			fb$result$1 = (uint8*)"ix";
		}
		goto label$287;
		label$354:;
		{
			fb$result$1 = (uint8*)"ad";
		}
		goto label$287;
		label$355:;
		{
			if( (int64)*(int16*)((uint8*)PROC$1 + 112ll) != 2ll ) goto label$357;
			{
				fb$result$1 = (uint8*)"v13for";
			}
			goto label$356;
			label$357:;
			{
				fb$result$1 = (uint8*)"v03for";
			}
			label$356:;
		}
		goto label$287;
		label$358:;
		{
			if( (int64)*(int16*)((uint8*)PROC$1 + 112ll) != 2ll ) goto label$360;
			{
				fb$result$1 = (uint8*)"v14step";
			}
			goto label$359;
			label$360:;
			{
				fb$result$1 = (uint8*)"v04step";
			}
			label$359:;
		}
		goto label$287;
		label$361:;
		{
			if( (int64)*(int16*)((uint8*)PROC$1 + 112ll) != 3ll ) goto label$363;
			{
				fb$result$1 = (uint8*)"v24next";
			}
			goto label$362;
			label$363:;
			{
				fb$result$1 = (uint8*)"v14next";
			}
			label$362:;
		}
		goto label$287;
		label$288:;
		static const void* tmp$254[82ll] = {
			&&label$289,
			&&label$291,
			&&label$293,
			&&label$295,
			&&label$297,
			&&label$299,
			&&label$301,
			&&label$303,
			&&label$305,
			&&label$307,
			&&label$309,
			&&label$311,
			&&label$313,
			&&label$315,
			&&label$317,
			&&label$319,
			&&label$321,
			&&label$323,
			&&label$347,
			&&label$348,
			&&label$349,
			&&label$350,
			&&label$354,
			&&label$353,
			&&label$355,
			&&label$358,
			&&label$361,
			&&label$287,
			&&label$290,
			&&label$292,
			&&label$294,
			&&label$296,
			&&label$298,
			&&label$300,
			&&label$302,
			&&label$304,
			&&label$306,
			&&label$308,
			&&label$310,
			&&label$312,
			&&label$314,
			&&label$316,
			&&label$318,
			&&label$320,
			&&label$322,
			&&label$324,
			&&label$325,
			&&label$326,
			&&label$327,
			&&label$328,
			&&label$329,
			&&label$287,
			&&label$330,
			&&label$332,
			&&label$331,
			&&label$287,
			&&label$333,
			&&label$337,
			&&label$341,
			&&label$342,
			&&label$343,
			&&label$344,
			&&label$345,
			&&label$346,
			&&label$287,
			&&label$287,
			&&label$287,
			&&label$287,
			&&label$340,
			&&label$339,
			&&label$338,
			&&label$334,
			&&label$335,
			&&label$336,
			&&label$287,
			&&label$287,
			&&label$351,
			&&label$352,
			&&label$347,
			&&label$348,
			&&label$349,
			&&label$350,
		};
		if( TMP$171$2 > 81ll ) goto label$287;
		goto *tmp$254[TMP$171$2 - 0ll];
		label$287:;
	}
	label$286:;
	return fb$result$1;
}

static void HMANGLEPROC( struct $8FBSYMBOL* SYM$1 )
{
	label$364:;
	FBSTRING MANGLED$1;
	__builtin_memset( &MANGLED$1, 0, 24ll );
	int64 LENGTH$1;
	int64 DOCPP$1;
	int64 ADD_STDCALL_SUFFIX$1;
	uint8* ID$1;
	int64 vr$1 = HDOCPPMANGLING( SYM$1 );
	DOCPP$1 = vr$1;
	int64 vr$4 = FBGETCPUFAMILY(  );
	ADD_STDCALL_SUFFIX$1 = ((int64)-(*(int64*)((uint8*)SYM$1 + 144ll) == 1ll) & (int64)-(vr$4 == 0ll)) & (int64)-(*(int64*)((uint8*)&ENV$ + 208ll) != 1ll);
	if( *(int64*)((uint8*)&ENV$ + 208ll) != 2ll ) goto label$367;
	{
		FBSTRING* vr$11 = fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)"@", 2ll, 0 );
		if( ADD_STDCALL_SUFFIX$1 == 0ll ) goto label$369;
		{
			FBSTRING* vr$14 = fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)"\x22", 2ll, 0 );
		}
		label$369:;
		label$368:;
	}
	label$367:;
	label$366:;
	int64 vr$15 = HADDUNDERSCORE(  );
	if( vr$15 == 0ll ) goto label$371;
	{
		FBSTRING* vr$18 = fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)"_", 2ll, 0 );
	}
	label$371:;
	label$370:;
	if( DOCPP$1 == 0ll ) goto label$373;
	{
		FBSTRING* vr$21 = fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)"_Z", 3ll, 0 );
	}
	label$373:;
	label$372:;
	if( DOCPP$1 == 0ll ) goto label$375;
	{
		HMANGLENAMESPACE( &MANGLED$1, *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)SYM$1 + 232ll), -1ll, (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 1048576ll) != 0ll) );
	}
	label$375:;
	label$374:;
	if( (*(int64*)((uint8*)SYM$1 + 16ll) & 512ll) == 0ll ) goto label$377;
	{
		FBSTRING TMP$246$2;
		if( DOCPP$1 == 0ll ) goto label$379;
		{
			FBSTRING TMP$245$3;
			int64 vr$34 = fb_StrLen( *(void**)((uint8*)SYM$1 + 32ll), 0ll );
			FBSTRING* vr$35 = fb_LongintToStr( vr$34 );
			__builtin_memset( &TMP$245$3, 0, 24ll );
			FBSTRING* vr$39 = fb_StrConcat( &TMP$245$3, (void*)&MANGLED$1, -1ll, (void*)vr$35, -1ll );
			FBSTRING* vr$41 = fb_StrAssign( (void*)&MANGLED$1, -1ll, (void*)vr$39, -1ll, 0 );
		}
		label$379:;
		label$378:;
		__builtin_memset( &TMP$246$2, 0, 24ll );
		FBSTRING* vr$46 = fb_StrConcat( &TMP$246$2, (void*)&MANGLED$1, -1ll, *(void**)((uint8*)SYM$1 + 32ll), 0ll );
		FBSTRING* vr$48 = fb_StrAssign( (void*)&MANGLED$1, -1ll, (void*)vr$46, -1ll, 0 );
	}
	goto label$376;
	label$377:;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 16384ll) == 0ll ) goto label$380;
	{
		if( *(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)SYM$1 + 200ll) + 80ll) != 27ll ) goto label$382;
		{
			FBSTRING* vr$56 = fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)"cv", 3ll, 0 );
			SYMBMANGLETYPE( &MANGLED$1, *(int64*)((uint8*)SYM$1 + 48ll), *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll) );
		}
		goto label$381;
		label$382:;
		{
			FBSTRING TMP$248$3;
			uint8* vr$60 = HGETOPERATORNAME( SYM$1 );
			__builtin_memset( &TMP$248$3, 0, 24ll );
			FBSTRING* vr$64 = fb_StrConcat( &TMP$248$3, (void*)&MANGLED$1, -1ll, (void*)vr$60, 0ll );
			FBSTRING* vr$66 = fb_StrAssign( (void*)&MANGLED$1, -1ll, (void*)vr$64, -1ll, 0 );
		}
		label$381:;
	}
	goto label$376;
	label$380:;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 4096ll) == 0ll ) goto label$383;
	{
		FBSTRING* vr$71 = fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)"C1", 3ll, 0 );
	}
	goto label$376;
	label$383:;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 8192ll) == 0ll ) goto label$384;
	{
		FBSTRING* vr$76 = fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)"D1", 3ll, 0 );
	}
	goto label$376;
	label$384:;
	{
		FBSTRING TMP$251$2;
		if( (int64)*(int16*)((uint8*)SYM$1 + 66ll) != 0ll ) goto label$386;
		{
			ID$1 = *(uint8**)((uint8*)SYM$1 + 24ll);
		}
		goto label$385;
		label$386:;
		{
			ID$1 = *(uint8**)((uint8*)SYM$1 + 32ll);
		}
		label$385:;
		if( DOCPP$1 == 0ll ) goto label$388;
		{
			int64 vr$83 = fb_StrLen( (void*)ID$1, 0ll );
			LENGTH$1 = vr$83;
			if( (*(int64*)((uint8*)SYM$1 + 8ll) & 32768ll) == 0ll ) goto label$390;
			{
				LENGTH$1 = LENGTH$1 + 7ll;
			}
			label$390:;
			label$389:;
			FBSTRING* vr$88 = fb_LongintToStr( LENGTH$1 );
			FBSTRING* vr$90 = fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)vr$88, -1ll, 0 );
		}
		label$388:;
		label$387:;
		__builtin_memset( &TMP$251$2, 0, 24ll );
		FBSTRING* vr$94 = fb_StrConcat( &TMP$251$2, (void*)&MANGLED$1, -1ll, (void*)ID$1, 0ll );
		FBSTRING* vr$96 = fb_StrAssign( (void*)&MANGLED$1, -1ll, (void*)vr$94, -1ll, 0 );
		if( (*(int64*)((uint8*)SYM$1 + 8ll) & 32768ll) == 0ll ) goto label$392;
		{
			if( (*(int64*)((uint8*)SYM$1 + 48ll) & 511ll) != 0ll ) goto label$394;
			{
				FBSTRING* vr$104 = fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)"__set__", 8ll, 0 );
			}
			goto label$393;
			label$394:;
			{
				FBSTRING* vr$106 = fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)"__get__", 8ll, 0 );
			}
			label$393:;
		}
		label$392:;
		label$391:;
	}
	label$376:;
	if( DOCPP$1 == 0ll ) goto label$396;
	{
		if( *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)SYM$1 + 232ll) == (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll) ) goto label$398;
		{
			FBSTRING* vr$113 = fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)"E", 2ll, 0 );
		}
		label$398:;
		label$397:;
		HGETPROCPARAMSTYPECODE( &MANGLED$1, SYM$1, -1ll );
	}
	label$396:;
	label$395:;
	if( ADD_STDCALL_SUFFIX$1 == 0ll ) goto label$400;
	{
		FBSTRING* vr$117 = fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)"@", 2ll, 0 );
		int64 vr$118 = SYMBCALCPROCPARAMSLEN( SYM$1 );
		FBSTRING* vr$119 = fb_LongintToStr( vr$118 );
		FBSTRING* vr$121 = fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)vr$119, -1ll, 0 );
		if( *(int64*)((uint8*)&ENV$ + 208ll) != 2ll ) goto label$402;
		{
			FBSTRING* vr$124 = fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)"\x22", 2ll, 0 );
		}
		label$402:;
		label$401:;
	}
	label$400:;
	label$399:;
	SYMBSETMANGLEDID( SYM$1, &MANGLED$1 );
	fb_StrDelete( &MANGLED$1 );
	label$365:;
}

// Total compilation time: 0.03591111663263291 seconds.
