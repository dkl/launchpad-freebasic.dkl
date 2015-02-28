// Compilation of fbc-1.01.0/src/compiler/ast-misc.bas started at 15:27:38 on 02-28-2015

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
struct $23AST_DTORLIST_SCOPESTACK {
	int64* COOKIES;
	int64 COUNT;
	int64 ROOM;
};
__FB_STATIC_ASSERT( sizeof( struct $23AST_DTORLIST_SCOPESTACK ) == 24 );
typedef int64 $13AST_NODECLASS;
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
struct $7ASTNODE;
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
union $7FBVALUE {
	struct $8FBSYMBOL* S;
	int64 I;
	double F;
};
__FB_STATIC_ASSERT( sizeof( union $7FBVALUE ) == 8 );
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
typedef int64 $12FB_DATACLASS;
typedef int64 $9FB_ERRMSG;
struct $17AST_DTORLIST_ITEM {
	struct $8FBSYMBOL* SYM;
	int64 COOKIE;
	int64 REFCOUNT;
};
__FB_STATIC_ASSERT( sizeof( struct $17AST_DTORLIST_ITEM ) == 24 );
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
void free( void* );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
static void fb_ctor__astzmisc( void ) __attribute__(( constructor ));
void* XREALLOCATE( void*, int32 );
void LISTINIT( struct $5TLIST*, int64, int64, $10LIST_FLAGS );
void LISTEND( struct $5TLIST* );
void* LISTNEWNODE( struct $5TLIST* );
void LISTDELNODE( struct $5TLIST*, void* );
void* LISTGETHEAD( struct $5TLIST* );
void* LISTGETTAIL( struct $5TLIST* );
void* LISTGETPREV( void* );
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRREPORT( int64, int64, uint8* );
typedef int64 $12FB_ERRMSGOPT;
void ERRREPORTWARN( int64, uint8*, $12FB_ERRMSGOPT );
void ASTDELNODE( struct $7ASTNODE* );
int64 ASTISTREEEQUAL( struct $7ASTNODE*, struct $7ASTNODE* );
int64 ASTISEQUALPARAMINIT( struct $7ASTNODE*, struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWNOP( void );
struct $7ASTNODE* ASTNEWBOP( int64, struct $7ASTNODE*, struct $7ASTNODE*, struct $8FBSYMBOL*, $9AST_OPOPT );
int64 ASTCONSTEQZERO( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWCONSTZ( int64, struct $8FBSYMBOL* );
int64 ASTCONSTGETASINT64( struct $7ASTNODE* );
double ASTCONSTGETASDOUBLE( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWVAR( struct $8FBSYMBOL*, int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWBRANCH( int64, struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWLINK( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTOPTIMIZETREE( struct $7ASTNODE* );
struct $7ASTNODE* ASTUPDSTRCONCAT( struct $7ASTNODE* );
int64 ASTHASSIDEFX( struct $7ASTNODE* );
int64 ASTISSYMBOLONTREE( struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* ASTTYPEINIUPDATE( struct $7ASTNODE* );
int64 ASTGETINVERSELOGOP( int64 );
struct $7ASTNODE* _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEl( struct $8FBSYMBOL*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTBUILDCALL( struct $8FBSYMBOL*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE* );
struct $7ASTNODE* _Z19ASTBUILDVARDTORCALLP8FBSYMBOLl( struct $8FBSYMBOL*, int64 );
void ASTREPLACESYMBOLONTREE( struct $7ASTNODE*, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
void ASTREPLACEFWDREF( struct $7ASTNODE*, struct $8FBSYMBOL*, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTDTORLISTFLUSH( int64 );
void ASTSETTYPE( struct $7ASTNODE*, int64, struct $8FBSYMBOL* );
int64 ASTISACCESSTOLOCAL( struct $7ASTNODE* );
struct $8FBSYMBOL* SYMBFINDCASTOVLPROC( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, $9FB_ERRMSG* );
struct $8FBSYMBOL* SYMBADDTEMPVAR( int64, struct $8FBSYMBOL* );
int64 SYMBCALCLEN( int64, struct $8FBSYMBOL* );
int64 SYMBISEQUAL( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
int64 SYMBHASDTOR( struct $8FBSYMBOL* );
int64 TYPEMERGE( int64, int64 );
struct $8FBSYMBOL* SYMBGETCOMPOPOVLHEAD( struct $8FBSYMBOL*, $6AST_OP );
struct $7ASTNODE* RTLSTRCONCAT( struct $7ASTNODE*, int64, struct $7ASTNODE*, int64 );
struct $7ASTNODE* RTLWSTRCONCAT( struct $7ASTNODE*, int64, struct $7ASTNODE*, int64 );
void ASTREPLACESYMBOLONCALL( struct $7ASTNODE*, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static int64 HHASDTOR( struct $8FBSYMBOL* );
static int64 HSYMBISONLOCALSTACK( struct $8FBSYMBOL* );
typedef void (*tmp$35)( void );
typedef int64 (*tmp$36)( void );
typedef void (*tmp$37)( double );
typedef int64 $14IR_OPTIONVALUE;
typedef int64 (*tmp$38)( $14IR_OPTIONVALUE );
typedef int64 (*tmp$39)( int64, int64 );
typedef void (*tmp$40)( struct $8FBSYMBOL* );
typedef void (*tmp$41)( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef uint8* (*tmp$42)( void );
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
struct $5FBENV ENV$ __attribute__((common));

void ASTMISCINIT( void )
{
	label$10:;
	LISTINIT( (struct $5TLIST*)((uint8*)&AST$ + 296ll), 64ll, 24ll, 6ll );
	{
		struct $23AST_DTORLIST_SCOPESTACK* TMP$77$2;
		TMP$77$2 = (struct $23AST_DTORLIST_SCOPESTACK*)((uint8*)&AST$ + 360ll);
		*(int64**)TMP$77$2 = (int64*)0ull;
		*(int64*)((uint8*)TMP$77$2 + 8ll) = 0ll;
		*(int64*)((uint8*)TMP$77$2 + 16ll) = 0ll;
	}
	*(int64*)((uint8*)&AST$ + 384ll) = 0ll;
	*(int64*)((uint8*)&AST$ + 392ll) = -1ll;
	label$11:;
}

void ASTMISCEND( void )
{
	label$12:;
	{
		struct $23AST_DTORLIST_SCOPESTACK* TMP$78$2;
		TMP$78$2 = (struct $23AST_DTORLIST_SCOPESTACK*)((uint8*)&AST$ + 360ll);
		free( *(void**)TMP$78$2 );
	}
	LISTEND( (struct $5TLIST*)((uint8*)&AST$ + 296ll) );
	label$13:;
}

int64 ASTISTREEEQUAL( struct $7ASTNODE* L$1, struct $7ASTNODE* R$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$14:;
	fb$result$1 = 0ll;
	if( ((int64)-(L$1 == (struct $7ASTNODE*)0ull) | (int64)-(R$1 == (struct $7ASTNODE*)0ull)) == 0ll ) goto label$17;
	{
		if( L$1 != R$1 ) goto label$19;
		{
			fb$result$1 = -1ll;
		}
		label$19:;
		label$18:;
		goto label$15;
	}
	label$17:;
	label$16:;
	if( *(int64*)L$1 == *(int64*)R$1 ) goto label$21;
	{
		goto label$15;
	}
	label$21:;
	label$20:;
	if( *(int64*)((uint8*)L$1 + 8ll) == *(int64*)((uint8*)R$1 + 8ll) ) goto label$23;
	{
		goto label$15;
	}
	label$23:;
	label$22:;
	if( *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) == *(struct $8FBSYMBOL**)((uint8*)R$1 + 16ll) ) goto label$25;
	{
		goto label$15;
	}
	label$25:;
	label$24:;
	{
		uint64 TMP$79$2;
		TMP$79$2 = *(uint64*)L$1;
		goto label$27;
		label$28:;
		{
			if( *(struct $8FBSYMBOL**)((uint8*)L$1 + 24ll) == *(struct $8FBSYMBOL**)((uint8*)R$1 + 24ll) ) goto label$30;
			{
				goto label$15;
			}
			label$30:;
			label$29:;
			if( *(int64*)((uint8*)L$1 + 40ll) == *(int64*)((uint8*)R$1 + 40ll) ) goto label$32;
			{
				goto label$15;
			}
			label$32:;
			label$31:;
		}
		goto label$26;
		label$33:;
		{
			if( *(struct $8FBSYMBOL**)((uint8*)L$1 + 24ll) == *(struct $8FBSYMBOL**)((uint8*)R$1 + 24ll) ) goto label$35;
			{
				goto label$15;
			}
			label$35:;
			label$34:;
		}
		goto label$26;
		label$36:;
		{
			{
				int64 TMP$80$4;
				$12FB_DATACLASS TMP$81$4;
				if( (*(int64*)((uint8*)L$1 + 8ll) & 480ll) == 0ll ) goto label$37;
				TMP$80$4 = 22ll;
				goto label$83;
				label$37:;
				TMP$80$4 = *(int64*)((uint8*)L$1 + 8ll) & 31ll;
				label$83:;
				TMP$81$4 = *($12FB_DATACLASS*)((uint8*)SYMB_DTYPETB$ + (TMP$80$4 * 56ll));
				if( TMP$81$4 != 1ll ) goto label$39;
				label$40:;
				{
					if( *(double*)((uint8*)L$1 + 40ll) == *(double*)((uint8*)R$1 + 40ll) ) goto label$42;
					{
						goto label$15;
					}
					label$42:;
					label$41:;
				}
				goto label$38;
				label$39:;
				if( TMP$81$4 != 0ll ) goto label$43;
				label$44:;
				{
					if( *(int64*)((uint8*)L$1 + 40ll) == *(int64*)((uint8*)R$1 + 40ll) ) goto label$46;
					{
						goto label$15;
					}
					label$46:;
					label$45:;
				}
				label$43:;
				label$38:;
			}
		}
		goto label$26;
		label$47:;
		{
			if( *(int64*)((uint8*)L$1 + 40ll) == *(int64*)((uint8*)R$1 + 40ll) ) goto label$49;
			{
				goto label$15;
			}
			label$49:;
			label$48:;
		}
		goto label$26;
		label$50:;
		{
			if( *(int64*)((uint8*)L$1 + 40ll) == *(int64*)((uint8*)R$1 + 40ll) ) goto label$52;
			{
				goto label$15;
			}
			label$52:;
			label$51:;
			if( *(int64*)((uint8*)L$1 + 48ll) == *(int64*)((uint8*)R$1 + 48ll) ) goto label$54;
			{
				goto label$15;
			}
			label$54:;
			label$53:;
		}
		goto label$26;
		label$55:;
		{
			if( *(int64*)((uint8*)L$1 + 40ll) == *(int64*)((uint8*)R$1 + 40ll) ) goto label$57;
			{
				goto label$15;
			}
			label$57:;
			label$56:;
			if( *(int64*)((uint8*)L$1 + 48ll) == *(int64*)((uint8*)R$1 + 48ll) ) goto label$59;
			{
				goto label$15;
			}
			label$59:;
			label$58:;
			if( *(struct $8FBSYMBOL**)((uint8*)L$1 + 56ll) == *(struct $8FBSYMBOL**)((uint8*)R$1 + 56ll) ) goto label$61;
			{
				goto label$15;
			}
			label$61:;
			label$60:;
		}
		goto label$26;
		label$62:;
		{
			if( *(int64*)((uint8*)L$1 + 40ll) == *(int64*)((uint8*)R$1 + 40ll) ) goto label$64;
			{
				goto label$15;
			}
			label$64:;
			label$63:;
			if( *(int64*)((uint8*)L$1 + 48ll) == *(int64*)((uint8*)R$1 + 48ll) ) goto label$66;
			{
				goto label$15;
			}
			label$66:;
			label$65:;
		}
		goto label$26;
		label$67:;
		{
			if( *(struct $8FBSYMBOL**)((uint8*)L$1 + 24ll) == *(struct $8FBSYMBOL**)((uint8*)R$1 + 24ll) ) goto label$69;
			{
				goto label$15;
			}
			label$69:;
			label$68:;
			if( *(int64*)((uint8*)L$1 + 40ll) == *(int64*)((uint8*)R$1 + 40ll) ) goto label$71;
			{
				goto label$15;
			}
			label$71:;
			label$70:;
		}
		goto label$26;
		label$72:;
		{
			if( *(struct $8FBSYMBOL**)((uint8*)L$1 + 24ll) == *(struct $8FBSYMBOL**)((uint8*)R$1 + 24ll) ) goto label$74;
			{
				goto label$15;
			}
			label$74:;
			label$73:;
			if( *(int64*)((uint8*)L$1 + 40ll) == *(int64*)((uint8*)R$1 + 40ll) ) goto label$76;
			{
				goto label$15;
			}
			label$76:;
			label$75:;
		}
		goto label$26;
		label$77:;
		{
		}
		goto label$26;
		label$78:;
		{
			goto label$15;
		}
		goto label$26;
		label$27:;
		static const void* tmp$82[23ll] = {
			&&label$78,
			&&label$78,
			&&label$55,
			&&label$62,
			&&label$77,
			&&label$67,
			&&label$78,
			&&label$26,
			&&label$78,
			&&label$26,
			&&label$26,
			&&label$26,
			&&label$26,
			&&label$26,
			&&label$78,
			&&label$36,
			&&label$28,
			&&label$50,
			&&label$33,
			&&label$47,
			&&label$26,
			&&label$26,
			&&label$72,
		};
		if( TMP$79$2 < 1ll ) goto label$26;
		if( TMP$79$2 > 23ll ) goto label$26;
		goto *tmp$82[TMP$79$2 - 1ll];
		label$26:;
	}
	int64 vr$77 = ASTISTREEEQUAL( *(struct $7ASTNODE**)((uint8*)L$1 + 112ll), *(struct $7ASTNODE**)((uint8*)R$1 + 112ll) );
	if( vr$77 != 0ll ) goto label$80;
	{
		goto label$15;
	}
	label$80:;
	label$79:;
	int64 vr$81 = ASTISTREEEQUAL( *(struct $7ASTNODE**)((uint8*)L$1 + 120ll), *(struct $7ASTNODE**)((uint8*)R$1 + 120ll) );
	if( vr$81 != 0ll ) goto label$82;
	{
		goto label$15;
	}
	label$82:;
	label$81:;
	fb$result$1 = -1ll;
	label$15:;
	return fb$result$1;
}

int64 ASTISEQUALPARAMINIT( struct $7ASTNODE* L$1, struct $7ASTNODE* R$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$84:;
	fb$result$1 = 0ll;
	if( ((int64)-(L$1 == (struct $7ASTNODE*)0ull) | (int64)-(R$1 == (struct $7ASTNODE*)0ull)) == 0ll ) goto label$87;
	{
		if( L$1 != R$1 ) goto label$89;
		{
			fb$result$1 = -1ll;
		}
		label$89:;
		label$88:;
		goto label$85;
	}
	label$87:;
	label$86:;
	if( *(int64*)L$1 == *(int64*)R$1 ) goto label$91;
	{
		goto label$85;
	}
	label$91:;
	label$90:;
	if( *(int64*)((uint8*)L$1 + 8ll) == *(int64*)((uint8*)R$1 + 8ll) ) goto label$93;
	{
		goto label$85;
	}
	label$93:;
	label$92:;
	if( *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) == *(struct $8FBSYMBOL**)((uint8*)R$1 + 16ll) ) goto label$95;
	{
		if( (*(int64*)((uint8*)L$1 + 8ll) & 31ll) != 20ll ) goto label$97;
		{
			int64 vr$20 = SYMBISEQUAL( *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll), *(struct $8FBSYMBOL**)((uint8*)R$1 + 16ll) );
			if( vr$20 != 0ll ) goto label$99;
			{
				goto label$85;
			}
			label$99:;
			label$98:;
		}
		goto label$96;
		label$97:;
		{
			goto label$85;
		}
		label$96:;
	}
	label$95:;
	label$94:;
	{
		uint64 TMP$83$2;
		TMP$83$2 = *(uint64*)L$1;
		goto label$101;
		label$102:;
		{
			if( *(int64*)((uint8*)L$1 + 40ll) == *(int64*)((uint8*)R$1 + 40ll) ) goto label$104;
			{
				goto label$85;
			}
			label$104:;
			label$103:;
		}
		goto label$100;
		label$105:;
		{
			if( *(struct $8FBSYMBOL**)((uint8*)L$1 + 24ll) == *(struct $8FBSYMBOL**)((uint8*)R$1 + 24ll) ) goto label$107;
			{
				if( (int64)-((*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)L$1 + 24ll) + 8ll) & 4194304ll) != 0ll) != 0ll ) goto label$109;
				{
					goto label$85;
				}
				label$109:;
				label$108:;
				if( (int64)-((*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)R$1 + 24ll) + 8ll) & 4194304ll) != 0ll) != 0ll ) goto label$111;
				{
					goto label$85;
				}
				label$111:;
				label$110:;
			}
			label$107:;
			label$106:;
			if( *(int64*)((uint8*)L$1 + 40ll) == *(int64*)((uint8*)R$1 + 40ll) ) goto label$113;
			{
				goto label$85;
			}
			label$113:;
			label$112:;
		}
		goto label$100;
		label$114:;
		{
			if( *(struct $8FBSYMBOL**)((uint8*)L$1 + 24ll) == *(struct $8FBSYMBOL**)((uint8*)R$1 + 24ll) ) goto label$116;
			{
				if( (int64)-((*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)L$1 + 24ll) + 8ll) & 4194304ll) != 0ll) != 0ll ) goto label$118;
				{
					goto label$85;
				}
				label$118:;
				label$117:;
				if( (int64)-((*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)R$1 + 24ll) + 8ll) & 4194304ll) != 0ll) != 0ll ) goto label$120;
				{
					goto label$85;
				}
				label$120:;
				label$119:;
			}
			label$116:;
			label$115:;
		}
		goto label$100;
		label$121:;
		{
			int64 TMP$84$3;
			if( (*(int64*)((uint8*)L$1 + 8ll) & 480ll) == 0ll ) goto label$122;
			TMP$84$3 = 22ll;
			goto label$167;
			label$122:;
			TMP$84$3 = *(int64*)((uint8*)L$1 + 8ll) & 31ll;
			label$167:;
			if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$84$3 * 56ll)) != 1ll ) goto label$124;
			{
				if( *(double*)((uint8*)L$1 + 40ll) == *(double*)((uint8*)R$1 + 40ll) ) goto label$126;
				{
					goto label$85;
				}
				label$126:;
				label$125:;
			}
			goto label$123;
			label$124:;
			{
				if( *(int64*)((uint8*)L$1 + 40ll) == *(int64*)((uint8*)R$1 + 40ll) ) goto label$128;
				{
					goto label$85;
				}
				label$128:;
				label$127:;
			}
			label$123:;
		}
		goto label$100;
		label$129:;
		{
			if( *(int64*)((uint8*)L$1 + 40ll) == *(int64*)((uint8*)R$1 + 40ll) ) goto label$131;
			{
				goto label$85;
			}
			label$131:;
			label$130:;
		}
		goto label$100;
		label$132:;
		{
			if( *(int64*)((uint8*)L$1 + 40ll) == *(int64*)((uint8*)R$1 + 40ll) ) goto label$134;
			{
				goto label$85;
			}
			label$134:;
			label$133:;
			if( *(int64*)((uint8*)L$1 + 48ll) == *(int64*)((uint8*)R$1 + 48ll) ) goto label$136;
			{
				goto label$85;
			}
			label$136:;
			label$135:;
		}
		goto label$100;
		label$137:;
		{
			if( *(int64*)((uint8*)L$1 + 40ll) == *(int64*)((uint8*)R$1 + 40ll) ) goto label$139;
			{
				goto label$85;
			}
			label$139:;
			label$138:;
			if( *(int64*)((uint8*)L$1 + 48ll) == *(int64*)((uint8*)R$1 + 48ll) ) goto label$141;
			{
				goto label$85;
			}
			label$141:;
			label$140:;
		}
		goto label$100;
		label$142:;
		{
			if( *(struct $8FBSYMBOL**)((uint8*)L$1 + 24ll) == *(struct $8FBSYMBOL**)((uint8*)R$1 + 24ll) ) goto label$144;
			{
				if( (int64)-((*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)L$1 + 24ll) + 8ll) & 4194304ll) != 0ll) != 0ll ) goto label$146;
				{
					goto label$85;
				}
				label$146:;
				label$145:;
				if( (int64)-((*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)R$1 + 24ll) + 8ll) & 4194304ll) != 0ll) != 0ll ) goto label$148;
				{
					goto label$85;
				}
				label$148:;
				label$147:;
			}
			label$144:;
			label$143:;
			if( *(int64*)((uint8*)L$1 + 40ll) == *(int64*)((uint8*)R$1 + 40ll) ) goto label$150;
			{
				goto label$85;
			}
			label$150:;
			label$149:;
		}
		goto label$100;
		label$151:;
		{
			if( *(struct $8FBSYMBOL**)((uint8*)L$1 + 24ll) == *(struct $8FBSYMBOL**)((uint8*)R$1 + 24ll) ) goto label$153;
			{
				if( (int64)-((*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)L$1 + 24ll) + 8ll) & 4194304ll) != 0ll) != 0ll ) goto label$155;
				{
					goto label$85;
				}
				label$155:;
				label$154:;
				if( (int64)-((*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)R$1 + 24ll) + 8ll) & 4194304ll) != 0ll) != 0ll ) goto label$157;
				{
					goto label$85;
				}
				label$157:;
				label$156:;
			}
			label$153:;
			label$152:;
			if( *(int64*)((uint8*)L$1 + 40ll) == *(int64*)((uint8*)R$1 + 40ll) ) goto label$159;
			{
				goto label$85;
			}
			label$159:;
			label$158:;
		}
		goto label$100;
		label$160:;
		{
			if( *(struct $8FBSYMBOL**)((uint8*)L$1 + 24ll) == *(struct $8FBSYMBOL**)((uint8*)R$1 + 24ll) ) goto label$162;
			{
				goto label$85;
			}
			label$162:;
			label$161:;
		}
		goto label$100;
		label$101:;
		static const void* tmp$85[21ll] = {
			&&label$137,
			&&label$137,
			&&label$100,
			&&label$142,
			&&label$100,
			&&label$100,
			&&label$160,
			&&label$100,
			&&label$100,
			&&label$100,
			&&label$100,
			&&label$100,
			&&label$102,
			&&label$121,
			&&label$105,
			&&label$132,
			&&label$114,
			&&label$129,
			&&label$100,
			&&label$100,
			&&label$151,
		};
		if( TMP$83$2 < 3ll ) goto label$100;
		if( TMP$83$2 > 23ll ) goto label$100;
		goto *tmp$85[TMP$83$2 - 3ll];
		label$100:;
	}
	int64 vr$120 = ASTISEQUALPARAMINIT( *(struct $7ASTNODE**)((uint8*)L$1 + 112ll), *(struct $7ASTNODE**)((uint8*)R$1 + 112ll) );
	if( vr$120 != 0ll ) goto label$164;
	{
		goto label$85;
	}
	label$164:;
	label$163:;
	int64 vr$124 = ASTISEQUALPARAMINIT( *(struct $7ASTNODE**)((uint8*)L$1 + 120ll), *(struct $7ASTNODE**)((uint8*)R$1 + 120ll) );
	if( vr$124 != 0ll ) goto label$166;
	{
		goto label$85;
	}
	label$166:;
	label$165:;
	fb$result$1 = -1ll;
	label$85:;
	return fb$result$1;
}

int64 ASTHASSIDEFX( struct $7ASTNODE* N$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$168:;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$171;
	{
		goto label$169;
	}
	label$171:;
	label$170:;
	if( *(int64*)N$1 != 9ll ) goto label$173;
	{
		if( (*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) + 16ll) & 524288ll) != 0ll ) goto label$175;
		{
			fb$result$1 = -1ll;
			goto label$169;
		}
		label$175:;
		label$174:;
	}
	label$173:;
	label$172:;
	int64 vr$9 = ASTHASSIDEFX( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
	if( vr$9 == 0ll ) goto label$177;
	{
		fb$result$1 = -1ll;
		goto label$169;
	}
	label$177:;
	label$176:;
	int64 vr$12 = ASTHASSIDEFX( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) );
	fb$result$1 = vr$12;
	label$169:;
	return fb$result$1;
}

int64 ASTISSYMBOLONTREE( struct $8FBSYMBOL* SYM$1, struct $7ASTNODE* N$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$178:;
	struct $8FBSYMBOL* S$1;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$181;
	{
		fb$result$1 = 0ll;
		goto label$179;
	}
	label$181:;
	label$180:;
	{
		uint64 TMP$86$2;
		TMP$86$2 = *(uint64*)N$1;
		goto label$183;
		label$184:;
		{
			S$1 = *(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll);
			if( S$1 != SYM$1 ) goto label$186;
			{
				fb$result$1 = -1ll;
				goto label$179;
			}
			label$186:;
			label$185:;
			if( S$1 == (struct $8FBSYMBOL*)0ull ) goto label$188;
			{
				if( (*(int64*)((uint8*)S$1 + 8ll) & 327680ll) == 0ll ) goto label$190;
				{
					fb$result$1 = -1ll;
					goto label$179;
				}
				label$190:;
				label$189:;
			}
			label$188:;
			label$187:;
		}
		goto label$182;
		label$191:;
		{
			fb$result$1 = -1ll;
			goto label$179;
		}
		goto label$182;
		label$183:;
		static const void* tmp$87[18ll] = {
			&&label$184,
			&&label$182,
			&&label$182,
			&&label$182,
			&&label$182,
			&&label$182,
			&&label$182,
			&&label$182,
			&&label$182,
			&&label$182,
			&&label$182,
			&&label$184,
			&&label$184,
			&&label$184,
			&&label$191,
			&&label$182,
			&&label$182,
			&&label$184,
		};
		if( TMP$86$2 < 6ll ) goto label$182;
		if( TMP$86$2 > 23ll ) goto label$182;
		goto *tmp$87[TMP$86$2 - 6ll];
		label$182:;
	}
	if( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) == (struct $7ASTNODE*)0ull ) goto label$193;
	{
		int64 vr$12 = ASTISSYMBOLONTREE( SYM$1, *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
		if( vr$12 == 0ll ) goto label$195;
		{
			fb$result$1 = -1ll;
			goto label$179;
		}
		label$195:;
		label$194:;
	}
	label$193:;
	label$192:;
	if( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) == (struct $7ASTNODE*)0ull ) goto label$197;
	{
		int64 vr$17 = ASTISSYMBOLONTREE( SYM$1, *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) );
		if( vr$17 == 0ll ) goto label$199;
		{
			fb$result$1 = -1ll;
			goto label$179;
		}
		label$199:;
		label$198:;
	}
	label$197:;
	label$196:;
	fb$result$1 = 0ll;
	label$179:;
	return fb$result$1;
}

void ASTREPLACESYMBOLONTREE( struct $7ASTNODE* N$1, struct $8FBSYMBOL* OLD_SYM$1, struct $8FBSYMBOL* NEW_SYM$1 )
{
	label$200:;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$203;
	{
		goto label$201;
	}
	label$203:;
	label$202:;
	if( *(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) != OLD_SYM$1 ) goto label$205;
	{
		*(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) = NEW_SYM$1;
	}
	label$205:;
	label$204:;
	{
		uint64 TMP$88$2;
		TMP$88$2 = *(uint64*)N$1;
		goto label$207;
		label$208:;
		{
			if( *(struct $8FBSYMBOL**)((uint8*)N$1 + 56ll) != OLD_SYM$1 ) goto label$210;
			{
				*(struct $8FBSYMBOL**)((uint8*)N$1 + 56ll) = NEW_SYM$1;
			}
			label$210:;
			label$209:;
		}
		goto label$206;
		label$211:;
		{
			if( *(struct $8FBSYMBOL**)((uint8*)N$1 + 40ll) != OLD_SYM$1 ) goto label$213;
			{
				*(struct $8FBSYMBOL**)((uint8*)N$1 + 40ll) = NEW_SYM$1;
			}
			label$213:;
			label$212:;
		}
		goto label$206;
		label$214:;
		{
			ASTREPLACESYMBOLONCALL( N$1, OLD_SYM$1, NEW_SYM$1 );
		}
		goto label$206;
		label$207:;
		static const void* tmp$89[24ll] = {
			&&label$208,
			&&label$208,
			&&label$206,
			&&label$206,
			&&label$208,
			&&label$206,
			&&label$214,
			&&label$206,
			&&label$206,
			&&label$206,
			&&label$208,
			&&label$206,
			&&label$206,
			&&label$206,
			&&label$206,
			&&label$206,
			&&label$206,
			&&label$206,
			&&label$206,
			&&label$206,
			&&label$206,
			&&label$206,
			&&label$206,
			&&label$211,
		};
		if( TMP$88$2 < 3ll ) goto label$206;
		if( TMP$88$2 > 26ll ) goto label$206;
		goto *tmp$89[TMP$88$2 - 3ll];
		label$206:;
	}
	if( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) == (struct $7ASTNODE*)0ull ) goto label$216;
	{
		ASTREPLACESYMBOLONTREE( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), OLD_SYM$1, NEW_SYM$1 );
	}
	label$216:;
	label$215:;
	if( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) == (struct $7ASTNODE*)0ull ) goto label$218;
	{
		ASTREPLACESYMBOLONTREE( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll), OLD_SYM$1, NEW_SYM$1 );
	}
	label$218:;
	label$217:;
	label$201:;
}

void ASTREPLACEFWDREF( struct $7ASTNODE* N$1, struct $8FBSYMBOL* OLDSUBTYPE$1, int64 NEWDTYPE$1, struct $8FBSYMBOL* NEWSUBTYPE$1 )
{
	label$219:;
	if( ((int64)-((*(int64*)((uint8*)N$1 + 8ll) & 31ll) == 21ll) & (int64)-(*(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll) == OLDSUBTYPE$1)) == 0ll ) goto label$222;
	{
		int64 vr$8 = TYPEMERGE( *(int64*)((uint8*)N$1 + 8ll), NEWDTYPE$1 );
		*(int64*)((uint8*)N$1 + 8ll) = vr$8;
		*(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll) = NEWSUBTYPE$1;
	}
	label$222:;
	label$221:;
	if( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) == (struct $7ASTNODE*)0ull ) goto label$224;
	{
		ASTREPLACEFWDREF( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), OLDSUBTYPE$1, NEWDTYPE$1, NEWSUBTYPE$1 );
	}
	label$224:;
	label$223:;
	if( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) == (struct $7ASTNODE*)0ull ) goto label$226;
	{
		ASTREPLACEFWDREF( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll), OLDSUBTYPE$1, NEWDTYPE$1, NEWSUBTYPE$1 );
	}
	label$226:;
	label$225:;
	label$220:;
}

int64 ASTISCONSTANT( struct $7ASTNODE* EXPR$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$227:;
	if( *(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 24ll) == (struct $8FBSYMBOL*)0ull ) goto label$230;
	{
		if( (*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 24ll) + 8ll) & 1048576ll) == 0ll ) goto label$232;
		{
			fb$result$1 = -1ll;
			goto label$228;
		}
		label$232:;
		label$231:;
	}
	label$230:;
	label$229:;
	fb$result$1 = (int64)-(*(int64*)EXPR$1 == 16ll) | (int64)-((*(int64*)((uint8*)EXPR$1 + 8ll) & 512ll) != 0ll);
	goto label$228;
	label$228:;
	return fb$result$1;
}

struct $8FBSYMBOL* ASTGETSTRLITSYMBOL( struct $7ASTNODE* N$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$233:;
	struct $8FBSYMBOL* S$1;
	fb$result$1 = (struct $8FBSYMBOL*)0ull;
	if( *(int64*)N$1 != 17ll ) goto label$236;
	{
		S$1 = *(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll);
		if( S$1 == (struct $8FBSYMBOL*)0ull ) goto label$238;
		{
			if( (*(int64*)((uint8*)S$1 + 8ll) & 524288ll) == 0ll ) goto label$240;
			{
				fb$result$1 = S$1;
			}
			label$240:;
			label$239:;
		}
		label$238:;
		label$237:;
	}
	label$236:;
	label$235:;
	label$234:;
	return fb$result$1;
}

void ASTCHECKCONST( int64 DTYPE$1, struct $7ASTNODE* N$1 )
{
	label$241:;
	int64 RESULT$1;
	double DVAL$1;
	float SVAL$1;
	int64 LVAL$1;
	RESULT$1 = -1ll;
	{
		uint64 TMP$90$2;
		TMP$90$2 = (uint64)(DTYPE$1 & 511ll);
		goto label$244;
		label$245:;
		{
			double vr$1 = ASTCONSTGETASDOUBLE( N$1 );
			DVAL$1 = vr$1;
			{
				double TMP$91$4;
				TMP$91$4 = __builtin_fabs( DVAL$1 );
				if( TMP$91$4 == 0x0p+0 ) goto label$248;
				label$249:;
				if( TMP$91$4 < 0x1.6D601AD376AB9p-149 ) goto label$247;
				if( TMP$91$4 > 0x1.C363CBF21F28Ap+127 ) goto label$247;
				label$248:;
				{
					RESULT$1 = -1ll;
				}
				goto label$246;
				label$247:;
				{
					SVAL$1 = (float)DVAL$1;
					if( (SVAL$1 + SVAL$1) != SVAL$1 ) goto label$252;
					{
						RESULT$1 = (int64)-((DVAL$1 + DVAL$1) == DVAL$1);
					}
					goto label$251;
					label$252:;
					{
						RESULT$1 = -1ll;
					}
					label$251:;
				}
				label$250:;
				label$246:;
			}
		}
		goto label$243;
		label$253:;
		{
			{
				int64 TMP$92$4;
				uint64 TMP$93$4;
				if( (DTYPE$1 & 480ll) == 0ll ) goto label$254;
				TMP$92$4 = 22ll;
				goto label$266;
				label$254:;
				TMP$92$4 = DTYPE$1 & 31ll;
				label$266:;
				TMP$93$4 = *(uint64*)(((uint8*)SYMB_DTYPETB$ + (TMP$92$4 * 56ll)) + 40ll);
				goto label$256;
				label$257:;
				{
					int64 vr$15 = ASTCONSTGETASINT64( N$1 );
					LVAL$1 = vr$15;
					RESULT$1 = (int64)-(LVAL$1 >= -128ll) & (int64)-(LVAL$1 <= 255ll);
				}
				goto label$255;
				label$258:;
				{
					int64 vr$19 = ASTCONSTGETASINT64( N$1 );
					LVAL$1 = vr$19;
					RESULT$1 = (int64)-(LVAL$1 >= -32768ll) & (int64)-(LVAL$1 <= 65535ll);
				}
				goto label$255;
				label$259:;
				{
					int64 vr$23 = ASTCONSTGETASINT64( N$1 );
					LVAL$1 = vr$23;
					RESULT$1 = (int64)-(LVAL$1 >= -2147483648ll) & (int64)-(LVAL$1 <= 4294967295ll);
				}
				goto label$255;
				label$260:;
				{
					int64 TMP$94$5;
					if( (*(int64*)((uint8*)N$1 + 8ll) & 480ll) == 0ll ) goto label$261;
					TMP$94$5 = 22ll;
					goto label$267;
					label$261:;
					TMP$94$5 = *(int64*)((uint8*)N$1 + 8ll) & 31ll;
					label$267:;
					if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$94$5 * 56ll)) != 1ll ) goto label$263;
					{
						double vr$34 = ASTCONSTGETASDOUBLE( N$1 );
						DVAL$1 = vr$34;
						RESULT$1 = (int64)-(DVAL$1 >= -0x1.p+63) & (int64)-(DVAL$1 <= 0x1.p+64);
					}
					label$263:;
					label$262:;
				}
				goto label$255;
				label$256:;
				static const void* tmp$95[8ll] = {
					&&label$257,
					&&label$257,
					&&label$258,
					&&label$258,
					&&label$259,
					&&label$259,
					&&label$260,
					&&label$260,
				};
				if( TMP$93$4 > 7ll ) goto label$255;
				goto *tmp$95[TMP$93$4 - 0ll];
				label$255:;
			}
		}
		goto label$243;
		label$244:;
		static const void* tmp$96[1ll] = {
			&&label$245,
		};
		if( TMP$90$2 < 14ll ) goto label$253;
		if( TMP$90$2 > 14ll ) goto label$253;
		goto *tmp$96[TMP$90$2 - 14ll];
		label$243:;
	}
	if( ((int64)-(RESULT$1 == 0ll) & (int64)-(*(int64*)((uint8*)&AST$ + 464ll) == 0ll)) == 0ll ) goto label$265;
	{
		ERRREPORTWARN( 25ll, (uint8*)0ull, 1ll );
	}
	label$265:;
	label$264:;
	label$242:;
}

int64 ASTPTRCHECK( int64 PDTYPE$1, struct $8FBSYMBOL* PSUBTYPE$1, struct $7ASTNODE* EXPR$1, int64 STRICTCHECK$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$268:;
	int64 EDTYPE$1;
	fb$result$1 = 0ll;
	EDTYPE$1 = *(int64*)((uint8*)EXPR$1 + 8ll);
	if( (int64)-((EDTYPE$1 & 480ll) != 0ll) != 0ll ) goto label$271;
	{
		if( *(int64*)EXPR$1 != 16ll ) goto label$273;
		{
			int64 TMP$97$3;
			if( (EDTYPE$1 & 480ll) == 0ll ) goto label$274;
			TMP$97$3 = 22ll;
			goto label$298;
			label$274:;
			TMP$97$3 = EDTYPE$1 & 31ll;
			label$298:;
			if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$97$3 * 56ll)) != 0ll ) goto label$276;
			{
				int64 vr$12 = ASTCONSTEQZERO( EXPR$1 );
				fb$result$1 = vr$12;
			}
			label$276:;
			label$275:;
		}
		label$273:;
		label$272:;
		goto label$269;
	}
	label$271:;
	label$270:;
	if( STRICTCHECK$1 == 0ll ) goto label$278;
	{
		if( ((EDTYPE$1 & 261632ll) & -513ll) == ((PDTYPE$1 & 261632ll) & -513ll) ) goto label$280;
		{
			goto label$269;
		}
		label$280:;
		label$279:;
	}
	label$278:;
	label$277:;
	if( (PDTYPE$1 & 511ll) == (EDTYPE$1 & 511ll) ) goto label$282;
	{
		int64 PDTYPE_NP$2;
		int64 EDTYPE_NP$2;
		PDTYPE_NP$2 = PDTYPE$1 & 31ll;
		EDTYPE_NP$2 = EDTYPE$1 & 31ll;
		if( PDTYPE_NP$2 != 0ll ) goto label$284;
		{
			fb$result$1 = -1ll;
			goto label$269;
		}
		goto label$283;
		label$284:;
		if( EDTYPE_NP$2 != 0ll ) goto label$285;
		{
			fb$result$1 = -1ll;
			goto label$269;
		}
		label$285:;
		label$283:;
		if( ((PDTYPE$1 & 480ll) >> 5ll) == ((EDTYPE$1 & 480ll) >> 5ll) ) goto label$287;
		{
			goto label$269;
		}
		label$287:;
		label$286:;
		if( ((int64)-(PDTYPE_NP$2 <= 15ll) & (int64)-(EDTYPE_NP$2 <= 15ll)) == 0ll ) goto label$289;
		{
			int64 TMP$98$3;
			int64 TMP$99$3;
			if( (PDTYPE_NP$2 & 480ll) == 0ll ) goto label$290;
			TMP$98$3 = 22ll;
			goto label$299;
			label$290:;
			TMP$98$3 = PDTYPE_NP$2 & 31ll;
			label$299:;
			if( (EDTYPE_NP$2 & 480ll) == 0ll ) goto label$291;
			TMP$99$3 = 22ll;
			goto label$300;
			label$291:;
			TMP$99$3 = EDTYPE_NP$2 & 31ll;
			label$300:;
			if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$98$3 * 56ll)) + 8ll) != *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$99$3 * 56ll)) + 8ll) ) goto label$293;
			{
				int64 TMP$100$4;
				int64 TMP$101$4;
				if( (PDTYPE_NP$2 & 480ll) == 0ll ) goto label$294;
				TMP$100$4 = 22ll;
				goto label$301;
				label$294:;
				TMP$100$4 = PDTYPE_NP$2 & 31ll;
				label$301:;
				if( (EDTYPE_NP$2 & 480ll) == 0ll ) goto label$295;
				TMP$101$4 = 22ll;
				goto label$302;
				label$295:;
				TMP$101$4 = EDTYPE_NP$2 & 31ll;
				label$302:;
				if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$100$4 * 56ll)) != *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$101$4 * 56ll)) ) goto label$297;
				{
					fb$result$1 = -1ll;
					goto label$269;
				}
				label$297:;
				label$296:;
			}
			label$293:;
			label$292:;
		}
		label$289:;
		label$288:;
		goto label$269;
	}
	label$282:;
	label$281:;
	int64 vr$54 = SYMBISEQUAL( *(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 16ll), PSUBTYPE$1 );
	fb$result$1 = vr$54;
	label$269:;
	return fb$result$1;
}

struct $7ASTNODE* ASTUPDSTRCONCAT( struct $7ASTNODE* N$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$303:;
	struct $7ASTNODE* L$1;
	struct $7ASTNODE* R$1;
	fb$result$1 = N$1;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$306;
	{
		goto label$304;
	}
	label$306:;
	label$305:;
	{
		uint64 TMP$102$2;
		TMP$102$2 = (uint64)(*(int64*)((uint8*)N$1 + 8ll) & 511ll);
		goto label$308;
		label$309:;
		{
		}
		goto label$307;
		label$310:;
		{
			goto label$304;
		}
		goto label$307;
		label$308:;
		static const void* tmp$103[12ll] = {
			&&label$309,
			&&label$310,
			&&label$310,
			&&label$310,
			&&label$310,
			&&label$310,
			&&label$310,
			&&label$310,
			&&label$310,
			&&label$310,
			&&label$309,
			&&label$309,
		};
		if( TMP$102$2 < 6ll ) goto label$310;
		if( TMP$102$2 > 17ll ) goto label$310;
		goto *tmp$103[TMP$102$2 - 6ll];
		label$307:;
	}
	L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
	if( L$1 == (struct $7ASTNODE*)0ull ) goto label$312;
	{
		struct $7ASTNODE* vr$6 = ASTUPDSTRCONCAT( L$1 );
		*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$6;
	}
	label$312:;
	label$311:;
	R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
	if( R$1 == (struct $7ASTNODE*)0ull ) goto label$314;
	{
		struct $7ASTNODE* vr$10 = ASTUPDSTRCONCAT( R$1 );
		*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = vr$10;
	}
	label$314:;
	label$313:;
	if( *(int64*)N$1 != 3ll ) goto label$316;
	{
		if( *(int64*)((uint8*)N$1 + 40ll) != 28ll ) goto label$318;
		{
			L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
			R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
			int64 LDTYPE$3;
			LDTYPE$3 = *(int64*)((uint8*)L$1 + 8ll) & 511ll;
			int64 RDTYPE$3;
			RDTYPE$3 = *(int64*)((uint8*)R$1 + 8ll) & 511ll;
			if( (*(int64*)((uint8*)N$1 + 8ll) & 511ll) == 6ll ) goto label$320;
			{
				struct $7ASTNODE* vr$25 = RTLSTRCONCAT( L$1, LDTYPE$3, R$1, RDTYPE$3 );
				fb$result$1 = vr$25;
			}
			goto label$319;
			label$320:;
			{
				struct $7ASTNODE* vr$26 = RTLWSTRCONCAT( L$1, LDTYPE$3, R$1, RDTYPE$3 );
				fb$result$1 = vr$26;
			}
			label$319:;
			ASTDELNODE( N$1 );
		}
		label$318:;
		label$317:;
	}
	label$316:;
	label$315:;
	label$304:;
	return fb$result$1;
}

struct $7ASTNODE* ASTBUILDBRANCH( struct $7ASTNODE* EXPR$1, struct $8FBSYMBOL* LABEL$1, int64 IS_INVERSE$1, int64 IS_IIF$1 )
{
	int64 TMP$104$1;
	$6AST_OP TMP$116$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$321:;
	struct $7ASTNODE* N$1;
	struct $7ASTNODE* PARENTLINK$1;
	struct $7ASTNODE* M$1;
	int64 DTYPE$1;
	int64 CALL_DTORS$1;
	struct $8FBSYMBOL* TEMP$1;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$324;
	{
		fb$result$1 = (struct $7ASTNODE*)0ull;
		goto label$322;
	}
	label$324:;
	label$323:;
	struct $7ASTNODE* vr$2 = ASTOPTIMIZETREE( EXPR$1 );
	EXPR$1 = vr$2;
	DTYPE$1 = *(int64*)((uint8*)EXPR$1 + 8ll) & 511ll;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$325;
	TMP$104$1 = 22ll;
	goto label$385;
	label$325:;
	TMP$104$1 = DTYPE$1 & 31ll;
	label$385:;
	if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$104$1 * 56ll)) != 2ll ) goto label$327;
	{
		fb$result$1 = (struct $7ASTNODE*)0ull;
		goto label$322;
	}
	label$327:;
	label$326:;
	{
		uint64 TMP$105$2;
		TMP$105$2 = (uint64)DTYPE$1;
		goto label$329;
		label$330:;
		{
			if( (int64)-(*(int64*)EXPR$1 == 20ll) != 0ll ) goto label$332;
			{
				fb$result$1 = (struct $7ASTNODE*)0ull;
				goto label$322;
			}
			label$332:;
			label$331:;
		}
		goto label$328;
		label$333:;
		{
			$9FB_ERRMSG ERR_NUM$3;
			struct $8FBSYMBOL* OVLPROC$3;
			struct $8FBSYMBOL* vr$14 = SYMBFINDCASTOVLPROC( 0ll, (struct $8FBSYMBOL*)0ull, EXPR$1, &ERR_NUM$3 );
			OVLPROC$3 = vr$14;
			if( OVLPROC$3 != (struct $8FBSYMBOL*)0ull ) goto label$335;
			{
				struct $8FBSYMBOL* vr$17 = SYMBFINDCASTOVLPROC( 32ll, (struct $8FBSYMBOL*)0ull, EXPR$1, &ERR_NUM$3 );
				OVLPROC$3 = vr$17;
				if( OVLPROC$3 != (struct $8FBSYMBOL*)0ull ) goto label$337;
				{
					struct $8FBSYMBOL* vr$20 = SYMBGETCOMPOPOVLHEAD( *(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 16ll), 27ll );
					OVLPROC$3 = vr$20;
					if( OVLPROC$3 != (struct $8FBSYMBOL*)0ull ) goto label$339;
					{
						FBSTRING TMP$108$6;
						FBSTRING TMP$109$6;
						FBSTRING TMP$110$6;
						__builtin_memset( &TMP$110$6, 0, 24ll );
						__builtin_memset( &TMP$108$6, 0, 24ll );
						FBSTRING* vr$27 = fb_StrConcat( &TMP$108$6, (void*)" \x22", 3ll, *(void**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 16ll) + 24ll), 0ll );
						__builtin_memset( &TMP$109$6, 0, 24ll );
						FBSTRING* vr$30 = fb_StrConcat( &TMP$109$6, (void*)vr$27, -1ll, (void*)".cast()\x22", 9ll );
						FBSTRING* vr$32 = fb_StrAssign( (void*)&TMP$110$6, -1ll, (void*)vr$30, -1ll, 0 );
						ERRREPORT( 98ll, -1ll, *(uint8**)&TMP$110$6 );
						fb_StrDelete( &TMP$110$6 );
						fb$result$1 = (struct $7ASTNODE*)0ull;
						goto label$322;
					}
					label$339:;
					label$338:;
					ERRREPORT( 98ll, -1ll, (uint8*)0ull );
					fb$result$1 = (struct $7ASTNODE*)0ull;
					goto label$322;
				}
				label$337:;
				label$336:;
			}
			label$335:;
			label$334:;
			struct $7ASTNODE* vr$34 = ASTBUILDCALL( OVLPROC$3, EXPR$1, (struct $7ASTNODE*)0ull, (struct $7ASTNODE*)0ull );
			EXPR$1 = vr$34;
			DTYPE$1 = *(int64*)((uint8*)EXPR$1 + 8ll) & 511ll;
		}
		goto label$328;
		label$329:;
		static const void* tmp$117[16ll] = {
			&&label$330,
			&&label$328,
			&&label$328,
			&&label$330,
			&&label$328,
			&&label$328,
			&&label$328,
			&&label$328,
			&&label$328,
			&&label$328,
			&&label$328,
			&&label$328,
			&&label$328,
			&&label$328,
			&&label$328,
			&&label$333,
		};
		if( TMP$105$2 < 3ll ) goto label$328;
		if( TMP$105$2 > 18ll ) goto label$328;
		goto *tmp$117[TMP$105$2 - 3ll];
		label$328:;
	}
	struct $7ASTNODE* vr$37 = ASTTYPEINIUPDATE( EXPR$1 );
	EXPR$1 = vr$37;
	void* vr$39 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&AST$ + 296ll) );
	CALL_DTORS$1 = ~(IS_IIF$1 | (int64)-(vr$39 == (void*)0ull));
	if( CALL_DTORS$1 != 0ll ) goto label$341;
	{
		N$1 = EXPR$1;
		PARENTLINK$1 = (struct $7ASTNODE*)0ull;
		label$342:;
		if( *(int64*)N$1 != 15ll ) goto label$343;
		{
			PARENTLINK$1 = N$1;
			if( *(int64*)((uint8*)N$1 + 40ll) == 0ll ) goto label$345;
			{
				N$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
			}
			goto label$344;
			label$345:;
			{
				N$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
			}
			label$344:;
		}
		goto label$342;
		label$343:;
		{
			$13AST_NODECLASS TMP$111$3;
			TMP$111$3 = *($13AST_NODECLASS*)N$1;
			if( TMP$111$3 != 16ll ) goto label$347;
			label$348:;
			{
				int64 vr$52 = ASTCONSTEQZERO( N$1 );
				if( vr$52 == IS_INVERSE$1 ) goto label$350;
				{
					struct $7ASTNODE* vr$54 = ASTNEWBRANCH( 97ll, LABEL$1, (struct $7ASTNODE*)0ull );
					M$1 = vr$54;
				}
				goto label$349;
				label$350:;
				{
					struct $7ASTNODE* vr$55 = ASTNEWNOP(  );
					M$1 = vr$55;
				}
				label$349:;
				ASTDELNODE( N$1 );
				N$1 = M$1;
			}
			goto label$346;
			label$347:;
			if( TMP$111$3 != 3ll ) goto label$351;
			label$352:;
			{
				{
					uint64 TMP$112$5;
					TMP$112$5 = *(uint64*)((uint8*)N$1 + 40ll);
					goto label$354;
					label$355:;
					{
						*(struct $8FBSYMBOL**)((uint8*)N$1 + 56ll) = LABEL$1;
						if( IS_INVERSE$1 != 0ll ) goto label$357;
						{
							int64 vr$61 = ASTGETINVERSELOGOP( *(int64*)((uint8*)N$1 + 40ll) );
							*(int64*)((uint8*)N$1 + 40ll) = vr$61;
						}
						label$357:;
						label$356:;
					}
					goto label$353;
					label$358:;
					{
						int64 TMP$113$6;
						int64 DOOPT$6;
						if( (DTYPE$1 & 480ll) == 0ll ) goto label$359;
						TMP$113$6 = 22ll;
						goto label$386;
						label$359:;
						TMP$113$6 = DTYPE$1 & 31ll;
						label$386:;
						if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$113$6 * 56ll)) != 0ll ) goto label$361;
						{
							DOOPT$6 = (int64)-((*(int64*)((uint8*)&IR$ + 568ll) & 256ll) != 0ll);
							if( DOOPT$6 == 0ll ) goto label$363;
							{
								{
									uint64 TMP$114$9;
									TMP$114$9 = (uint64)DTYPE$1;
									goto label$365;
									label$366:;
									{
										DOOPT$6 = (int64)-((*(int64*)((uint8*)&IR$ + 568ll) & 1024ll) != 0ll);
									}
									goto label$364;
									label$365:;
									static const void* tmp$118[2ll] = {
										&&label$366,
										&&label$366,
									};
									if( TMP$114$9 < 12ll ) goto label$364;
									if( TMP$114$9 > 13ll ) goto label$364;
									goto *tmp$118[TMP$114$9 - 12ll];
									label$364:;
								}
							}
							label$363:;
							label$362:;
						}
						goto label$360;
						label$361:;
						{
							DOOPT$6 = (int64)-((*(int64*)((uint8*)&IR$ + 568ll) & 4ll) != 0ll);
						}
						label$360:;
						if( DOOPT$6 == 0ll ) goto label$368;
						{
							$6AST_OP TMP$115$7;
							if( IS_INVERSE$1 == 0ll ) goto label$369;
							TMP$115$7 = 94ll;
							goto label$387;
							label$369:;
							TMP$115$7 = 91ll;
							label$387:;
							struct $7ASTNODE* vr$77 = ASTNEWBRANCH( TMP$115$7, LABEL$1, N$1 );
							N$1 = vr$77;
						}
						goto label$367;
						label$368:;
						{
							N$1 = (struct $7ASTNODE*)0ull;
						}
						label$367:;
					}
					goto label$353;
					label$370:;
					{
						N$1 = (struct $7ASTNODE*)0ull;
					}
					goto label$353;
					label$354:;
					static const void* tmp$119[23ll] = {
						&&label$358,
						&&label$358,
						&&label$370,
						&&label$370,
						&&label$370,
						&&label$370,
						&&label$358,
						&&label$358,
						&&label$370,
						&&label$370,
						&&label$358,
						&&label$370,
						&&label$358,
						&&label$358,
						&&label$358,
						&&label$370,
						&&label$370,
						&&label$355,
						&&label$355,
						&&label$355,
						&&label$355,
						&&label$355,
						&&label$355,
					};
					if( TMP$112$5 < 28ll ) goto label$370;
					if( TMP$112$5 > 50ll ) goto label$370;
					goto *tmp$119[TMP$112$5 - 28ll];
					label$353:;
				}
			}
			goto label$346;
			label$351:;
			{
				N$1 = (struct $7ASTNODE*)0ull;
			}
			label$371:;
			label$346:;
		}
		if( N$1 == (struct $7ASTNODE*)0ull ) goto label$373;
		{
			if( PARENTLINK$1 == (struct $7ASTNODE*)0ull ) goto label$375;
			{
				if( *(int64*)((uint8*)PARENTLINK$1 + 40ll) == 0ll ) goto label$377;
				{
					*(struct $7ASTNODE**)((uint8*)PARENTLINK$1 + 112ll) = N$1;
				}
				goto label$376;
				label$377:;
				{
					*(struct $7ASTNODE**)((uint8*)PARENTLINK$1 + 120ll) = N$1;
				}
				label$376:;
			}
			goto label$374;
			label$375:;
			{
				EXPR$1 = N$1;
			}
			label$374:;
			fb$result$1 = EXPR$1;
			goto label$322;
		}
		label$373:;
		label$372:;
	}
	goto label$340;
	label$341:;
	{
		N$1 = (struct $7ASTNODE*)0ull;
	}
	label$340:;
	{
		if( DTYPE$1 == 3ll ) goto label$380;
		label$381:;
		if( DTYPE$1 != 6ll ) goto label$379;
		label$380:;
		{
			DTYPE$1 = (DTYPE$1 & -512ll) | (*(int64*)(((uint8*)SYMB_DTYPETB$ + (DTYPE$1 * 56ll)) + 32ll) & 511ll);
		}
		label$379:;
		label$378:;
	}
	if( CALL_DTORS$1 == 0ll ) goto label$383;
	{
		struct $8FBSYMBOL* vr$92 = SYMBADDTEMPVAR( DTYPE$1, *(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 16ll) );
		TEMP$1 = vr$92;
		struct $7ASTNODE* vr$93 = _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEl( TEMP$1, EXPR$1, 64ll );
		N$1 = vr$93;
		struct $7ASTNODE* vr$94 = ASTDTORLISTFLUSH( 0ll );
		struct $7ASTNODE* vr$95 = ASTNEWLINK( N$1, vr$94, -1ll );
		N$1 = vr$95;
		struct $7ASTNODE* vr$96 = ASTNEWVAR( TEMP$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		EXPR$1 = vr$96;
	}
	label$383:;
	label$382:;
	struct $7ASTNODE* vr$98 = ASTNEWCONSTZ( DTYPE$1, *(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 16ll) );
	if( IS_INVERSE$1 == 0ll ) goto label$384;
	TMP$116$1 = 48ll;
	goto label$388;
	label$384:;
	TMP$116$1 = 45ll;
	label$388:;
	struct $7ASTNODE* vr$100 = ASTNEWBOP( TMP$116$1, EXPR$1, vr$98, LABEL$1, 0ll );
	struct $7ASTNODE* vr$101 = ASTNEWLINK( N$1, vr$100, -1ll );
	N$1 = vr$101;
	fb$result$1 = N$1;
	label$322:;
	return fb$result$1;
}

void ASTDTORLISTADD( struct $8FBSYMBOL* SYM$1 )
{
	label$398:;
	struct $17AST_DTORLIST_ITEM* N$1;
	int64 vr$0 = HHASDTOR( SYM$1 );
	if( vr$0 != 0ll ) goto label$401;
	{
		goto label$399;
	}
	label$401:;
	label$400:;
	void* vr$3 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&AST$ + 296ll) );
	N$1 = (struct $17AST_DTORLIST_ITEM*)vr$3;
	*(struct $8FBSYMBOL**)N$1 = SYM$1;
	{
		struct $23AST_DTORLIST_SCOPESTACK* TMP$121$2;
		TMP$121$2 = (struct $23AST_DTORLIST_SCOPESTACK*)((uint8*)&AST$ + 360ll);
		if( *(int64*)((uint8*)TMP$121$2 + 8ll) <= 0ll ) goto label$403;
		{
			*(int64*)((uint8*)N$1 + 8ll) = *(int64*)((uint8*)((uint8*)*(int64**)TMP$121$2 + (*(int64*)((uint8*)TMP$121$2 + 8ll) << 3ll)) + -8ll);
		}
		goto label$402;
		label$403:;
		{
			*(int64*)((uint8*)N$1 + 8ll) = 0ll;
		}
		label$402:;
	}
	*(int64*)((uint8*)N$1 + 16ll) = 0ll;
	label$399:;
}

void ASTDTORLISTADDREF( struct $8FBSYMBOL* SYM$1 )
{
	label$404:;
	struct $17AST_DTORLIST_ITEM* I$1;
	int64 vr$0 = HHASDTOR( SYM$1 );
	if( vr$0 != 0ll ) goto label$407;
	{
		goto label$405;
	}
	label$407:;
	label$406:;
	void* vr$3 = LISTGETTAIL( (struct $5TLIST*)((uint8*)&AST$ + 296ll) );
	I$1 = (struct $17AST_DTORLIST_ITEM*)vr$3;
	label$408:;
	if( I$1 == (struct $17AST_DTORLIST_ITEM*)0ull ) goto label$409;
	{
		if( *(struct $8FBSYMBOL**)I$1 != SYM$1 ) goto label$411;
		{
			*(int64*)((uint8*)I$1 + 16ll) = *(int64*)((uint8*)I$1 + 16ll) + 1ll;
			goto label$409;
		}
		label$411:;
		label$410:;
		void* vr$10 = LISTGETPREV( (void*)I$1 );
		I$1 = (struct $17AST_DTORLIST_ITEM*)vr$10;
	}
	goto label$408;
	label$409:;
	label$405:;
}

void ASTDTORLISTREMOVEREF( struct $8FBSYMBOL* SYM$1 )
{
	label$412:;
	struct $17AST_DTORLIST_ITEM* I$1;
	int64 vr$0 = HHASDTOR( SYM$1 );
	if( vr$0 != 0ll ) goto label$415;
	{
		goto label$413;
	}
	label$415:;
	label$414:;
	void* vr$3 = LISTGETTAIL( (struct $5TLIST*)((uint8*)&AST$ + 296ll) );
	I$1 = (struct $17AST_DTORLIST_ITEM*)vr$3;
	label$416:;
	if( I$1 == (struct $17AST_DTORLIST_ITEM*)0ull ) goto label$417;
	{
		if( *(struct $8FBSYMBOL**)I$1 != SYM$1 ) goto label$419;
		{
			*(int64*)((uint8*)I$1 + 16ll) = *(int64*)((uint8*)I$1 + 16ll) + -1ll;
			if( *(int64*)((uint8*)I$1 + 16ll) > 0ll ) goto label$421;
			{
				LISTDELNODE( (struct $5TLIST*)((uint8*)&AST$ + 296ll), (void*)I$1 );
			}
			label$421:;
			label$420:;
			goto label$417;
		}
		label$419:;
		label$418:;
		void* vr$13 = LISTGETPREV( (void*)I$1 );
		I$1 = (struct $17AST_DTORLIST_ITEM*)vr$13;
	}
	goto label$416;
	label$417:;
	label$413:;
}

struct $7ASTNODE* ASTDTORLISTFLUSH( int64 COOKIE$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$422:;
	struct $17AST_DTORLIST_ITEM* N$1;
	struct $17AST_DTORLIST_ITEM* P$1;
	struct $7ASTNODE* T$1;
	T$1 = (struct $7ASTNODE*)0ull;
	void* vr$2 = LISTGETTAIL( (struct $5TLIST*)((uint8*)&AST$ + 296ll) );
	N$1 = (struct $17AST_DTORLIST_ITEM*)vr$2;
	label$424:;
	if( N$1 == (struct $17AST_DTORLIST_ITEM*)0ull ) goto label$425;
	{
		void* vr$4 = LISTGETPREV( (void*)N$1 );
		P$1 = (struct $17AST_DTORLIST_ITEM*)vr$4;
		if( *(int64*)((uint8*)N$1 + 8ll) != COOKIE$1 ) goto label$427;
		{
			struct $7ASTNODE* vr$8 = _Z19ASTBUILDVARDTORCALLP8FBSYMBOLl( *(struct $8FBSYMBOL**)N$1, 0ll );
			struct $7ASTNODE* vr$9 = ASTNEWLINK( T$1, vr$8, -1ll );
			T$1 = vr$9;
			LISTDELNODE( (struct $5TLIST*)((uint8*)&AST$ + 296ll), (void*)N$1 );
		}
		label$427:;
		label$426:;
		N$1 = P$1;
	}
	goto label$424;
	label$425:;
	if( COOKIE$1 != 0ll ) goto label$429;
	{
		*(int64*)((uint8*)&AST$ + 384ll) = 0ll;
	}
	label$429:;
	label$428:;
	fb$result$1 = T$1;
	label$423:;
	return fb$result$1;
}

void ASTDTORLISTDEL( struct $8FBSYMBOL* SYM$1 )
{
	label$430:;
	struct $17AST_DTORLIST_ITEM* N$1;
	int64 vr$0 = HHASDTOR( SYM$1 );
	if( vr$0 != 0ll ) goto label$433;
	{
		goto label$431;
	}
	label$433:;
	label$432:;
	void* vr$3 = LISTGETTAIL( (struct $5TLIST*)((uint8*)&AST$ + 296ll) );
	N$1 = (struct $17AST_DTORLIST_ITEM*)vr$3;
	label$434:;
	if( N$1 == (struct $17AST_DTORLIST_ITEM*)0ull ) goto label$435;
	{
		if( *(struct $8FBSYMBOL**)N$1 != SYM$1 ) goto label$437;
		{
			LISTDELNODE( (struct $5TLIST*)((uint8*)&AST$ + 296ll), (void*)N$1 );
			goto label$435;
		}
		label$437:;
		label$436:;
		void* vr$8 = LISTGETPREV( (void*)N$1 );
		N$1 = (struct $17AST_DTORLIST_ITEM*)vr$8;
	}
	goto label$434;
	label$435:;
	label$431:;
}

void ASTDTORLISTSCOPEBEGIN( int64 COOKIE$1 )
{
	label$438:;
	if( COOKIE$1 != 0ll ) goto label$441;
	{
		*(int64*)((uint8*)&AST$ + 384ll) = *(int64*)((uint8*)&AST$ + 384ll) + 1ll;
		COOKIE$1 = *(int64*)((uint8*)&AST$ + 384ll);
	}
	label$441:;
	label$440:;
	{
		struct $23AST_DTORLIST_SCOPESTACK* TMP$122$2;
		TMP$122$2 = (struct $23AST_DTORLIST_SCOPESTACK*)((uint8*)&AST$ + 360ll);
		if( *(int64*)((uint8*)TMP$122$2 + 8ll) != *(int64*)((uint8*)TMP$122$2 + 16ll) ) goto label$443;
		{
			*(int64*)((uint8*)TMP$122$2 + 16ll) = *(int64*)((uint8*)TMP$122$2 + 16ll) + 8ll;
			void* vr$13 = XREALLOCATE( *(void**)TMP$122$2, (int32)(*(int64*)((uint8*)TMP$122$2 + 16ll) << 3ll) );
			*(int64**)TMP$122$2 = (int64*)vr$13;
		}
		label$443:;
		label$442:;
		*(int64*)((uint8*)*(int64**)TMP$122$2 + (*(int64*)((uint8*)TMP$122$2 + 8ll) << 3ll)) = COOKIE$1;
		*(int64*)((uint8*)TMP$122$2 + 8ll) = *(int64*)((uint8*)TMP$122$2 + 8ll) + 1ll;
	}
	label$439:;
}

int64 ASTDTORLISTSCOPEEND( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$444:;
	{
		struct $23AST_DTORLIST_SCOPESTACK* TMP$123$2;
		TMP$123$2 = (struct $23AST_DTORLIST_SCOPESTACK*)((uint8*)&AST$ + 360ll);
		fb$result$1 = *(int64*)((uint8*)((uint8*)*(int64**)TMP$123$2 + (*(int64*)((uint8*)TMP$123$2 + 8ll) << 3ll)) + -8ll);
		*(int64*)((uint8*)TMP$123$2 + 8ll) = *(int64*)((uint8*)TMP$123$2 + 8ll) + -1ll;
	}
	label$445:;
	return fb$result$1;
}

void ASTDTORLISTUNSCOPE( int64 COOKIE$1 )
{
	label$446:;
	struct $17AST_DTORLIST_ITEM* I$1;
	void* vr$1 = LISTGETTAIL( (struct $5TLIST*)((uint8*)&AST$ + 296ll) );
	I$1 = (struct $17AST_DTORLIST_ITEM*)vr$1;
	label$448:;
	if( I$1 == (struct $17AST_DTORLIST_ITEM*)0ull ) goto label$449;
	{
		if( *(int64*)((uint8*)I$1 + 8ll) != COOKIE$1 ) goto label$451;
		{
			*(int64*)((uint8*)I$1 + 8ll) = 0ll;
		}
		label$451:;
		label$450:;
		void* vr$6 = LISTGETPREV( (void*)I$1 );
		I$1 = (struct $17AST_DTORLIST_ITEM*)vr$6;
	}
	goto label$448;
	label$449:;
	label$447:;
}

void ASTSETTYPE( struct $7ASTNODE* N$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	label$452:;
	*(int64*)((uint8*)N$1 + 8ll) = DTYPE$1;
	*(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll) = SUBTYPE$1;
	{
		$13AST_NODECLASS TMP$124$2;
		TMP$124$2 = *($13AST_NODECLASS*)N$1;
		if( TMP$124$2 != 15ll ) goto label$455;
		label$456:;
		{
			if( *(int64*)((uint8*)N$1 + 40ll) == 0ll ) goto label$458;
			{
				ASTSETTYPE( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), DTYPE$1, SUBTYPE$1 );
			}
			goto label$457;
			label$458:;
			{
				ASTSETTYPE( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll), DTYPE$1, SUBTYPE$1 );
			}
			label$457:;
		}
		goto label$454;
		label$455:;
		if( TMP$124$2 != 19ll ) goto label$459;
		label$460:;
		{
			ASTSETTYPE( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), DTYPE$1, SUBTYPE$1 );
		}
		goto label$454;
		label$459:;
		if( TMP$124$2 != 10ll ) goto label$461;
		label$462:;
		{
			ASTSETTYPE( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll), DTYPE$1, SUBTYPE$1 );
		}
		goto label$454;
		label$461:;
		if( TMP$124$2 != 26ll ) goto label$463;
		label$464:;
		{
			ASTSETTYPE( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), DTYPE$1, SUBTYPE$1 );
		}
		label$463:;
		label$454:;
	}
	label$453:;
}

int64 ASTSIZEOF( struct $7ASTNODE* N$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$465:;
	int64 vr$3 = SYMBCALCLEN( *(int64*)((uint8*)N$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll) );
	fb$result$1 = vr$3;
	{
		int64 TMP$125$2;
		TMP$125$2 = *(int64*)((uint8*)N$1 + 8ll) & 511ll;
		if( TMP$125$2 == 3ll ) goto label$469;
		label$470:;
		if( TMP$125$2 == 6ll ) goto label$469;
		label$471:;
		if( TMP$125$2 != 17ll ) goto label$468;
		label$469:;
		{
			if( *(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) == (struct $8FBSYMBOL*)0ull ) goto label$473;
			{
				fb$result$1 = *(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) + 72ll);
			}
			label$473:;
			label$472:;
		}
		label$468:;
		label$467:;
	}
	label$466:;
	return fb$result$1;
}

int64 ASTISACCESSTOLOCAL( struct $7ASTNODE* EXPR$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$476:;
	fb$result$1 = 0ll;
	{
		$13AST_NODECLASS TMP$126$2;
		TMP$126$2 = *($13AST_NODECLASS*)EXPR$1;
		if( TMP$126$2 != 17ll ) goto label$479;
		label$480:;
		{
			int64 vr$4 = HSYMBISONLOCALSTACK( *(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 24ll) );
			fb$result$1 = vr$4;
		}
		goto label$478;
		label$479:;
		if( TMP$126$2 != 18ll ) goto label$481;
		label$482:;
		{
			if( (int64)-((*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 24ll) + 8ll) & 65536ll) != 0ll) != 0ll ) goto label$484;
			{
				int64 vr$12 = HSYMBISONLOCALSTACK( *(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 24ll) );
				fb$result$1 = vr$12;
			}
			label$484:;
			label$483:;
		}
		goto label$478;
		label$481:;
		if( TMP$126$2 != 9ll ) goto label$485;
		label$486:;
		{
			fb$result$1 = -1ll;
		}
		goto label$478;
		label$485:;
		if( TMP$126$2 != 19ll ) goto label$487;
		label$488:;
		{
			if( *(int64*)*(struct $7ASTNODE**)((uint8*)EXPR$1 + 112ll) != 20ll ) goto label$490;
			{
				int64 TMP$127$4;
				if( (int64)-(*(int64*)*(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)EXPR$1 + 112ll) + 112ll) == 3ll) == 0ll ) goto label$491;
				TMP$127$4 = (int64)-((int64)-(*(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)EXPR$1 + 112ll) + 112ll) + 40ll) == 28ll) != 0ll);
				goto label$496;
				label$491:;
				TMP$127$4 = 0ll;
				label$496:;
				if( TMP$127$4 == 0ll ) goto label$493;
				{
					if( *(int64*)*(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)EXPR$1 + 112ll) + 112ll) + 112ll) != 6ll ) goto label$495;
					{
						int64 vr$38 = ASTISACCESSTOLOCAL( *(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)EXPR$1 + 112ll) + 112ll) + 112ll) + 112ll) );
						fb$result$1 = vr$38;
					}
					label$495:;
					label$494:;
				}
				label$493:;
				label$492:;
			}
			label$490:;
			label$489:;
		}
		label$487:;
		label$478:;
	}
	label$477:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__astzmisc( void )
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

static int64 HHASDTOR( struct $8FBSYMBOL* SYM$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$389:;
	int64 vr$1 = SYMBHASDTOR( SYM$1 );
	fb$result$1 = vr$1;
	{
		int64 TMP$120$2;
		TMP$120$2 = *(int64*)((uint8*)SYM$1 + 48ll) & 511ll;
		if( TMP$120$2 != 16ll ) goto label$392;
		label$393:;
		{
			fb$result$1 = -1ll;
		}
		goto label$391;
		label$392:;
		if( TMP$120$2 != 38ll ) goto label$394;
		label$395:;
		{
			if( (*(int64*)((uint8*)SYM$1 + 16ll) & 16777216ll) == 0ll ) goto label$397;
			{
				fb$result$1 = -1ll;
			}
			label$397:;
			label$396:;
		}
		label$394:;
		label$391:;
	}
	label$390:;
	return fb$result$1;
}

static int64 HSYMBISONLOCALSTACK( struct $8FBSYMBOL* SYM$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$474:;
	fb$result$1 = (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 128ll) != 0ll) & ~(int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 2ll) != 0ll);
	label$475:;
	return fb$result$1;
}

// Total compilation time: 0.04484205250628293 seconds.
