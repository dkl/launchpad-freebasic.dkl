// Compilation of fbc-1.01.0/src/compiler/parser-decl-symb-init.bas started at 14:16:42 on 02-28-2015

typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
typedef int64 $13AST_NODECLASS;
typedef int64 $12FB_SYMBCLASS;
typedef int64 $13FB_SYMBATTRIB;
typedef int64 $12FB_SYMBSTATS;
struct $9FB_SYMBID {
	uint8* NAME;
	uint8* ALIAS;
	uint8* MANGLED;
};
#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]
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
typedef int64 $9FB_INIOPT;
struct $10FB_INITCTX {
	struct $8FBSYMBOL* SYM;
	int64 DTYPE;
	struct $8FBSYMBOL* SUBTYPE;
	int64 DIMENSION;
	struct $7ASTNODE* TREE;
	$9FB_INIOPT OPTIONS;
	struct $7ASTNODE* INIT_EXPR;
};
__FB_STATIC_ASSERT( sizeof( struct $10FB_INITCTX ) == 56 );
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
typedef int64 $9FB_ERRMSG;
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__parserzdeclzsymbzinit( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRREPORT( int64, int64, uint8* );
void ASTDELTREE( struct $7ASTNODE* );
typedef int64 $11AST_CONVOPT;
struct $7ASTNODE* ASTNEWCONV( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, $11AST_CONVOPT, int64* );
struct $7ASTNODE* ASTNEWCONSTI( int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWCONSTZ( int64, struct $8FBSYMBOL* );
int64 ASTCHECKASSIGNTOTYPE( int64, struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* ASTTYPEINIBEGIN( int64, struct $8FBSYMBOL*, int64, int64 );
void ASTTYPEINIEND( struct $7ASTNODE*, int64 );
void ASTTYPEINIREMOVELASTNODE( struct $7ASTNODE* );
struct $7ASTNODE* ASTTYPEINIADDPAD( struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTTYPEINIADDASSIGN( struct $7ASTNODE*, struct $7ASTNODE*, struct $8FBSYMBOL*, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTTYPEINIADDCTORCALL( struct $7ASTNODE*, struct $8FBSYMBOL*, struct $7ASTNODE*, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTTYPEINIADDCTORLIST( struct $7ASTNODE*, struct $8FBSYMBOL*, int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTTYPEINISCOPEBEGIN( struct $7ASTNODE*, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTTYPEINISCOPEEND( struct $7ASTNODE*, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTBUILDIMPLICITCTORCALLEX( struct $8FBSYMBOL*, struct $7ASTNODE*, $12FB_PARAMMODE, int64* );
void SYMBSETFIXEDSIZEARRAYDIMENSIONELEMENTS( struct $8FBSYMBOL*, int64, int64 );
void SYMBMAYBEADDARRAYDESC( struct $8FBSYMBOL* );
int64 SYMBCALCLEN( int64, struct $8FBSYMBOL* );
int64 SYMBCALCARRAYELEMENTS( struct $8FBSYMBOL*, int64 );
int64 SYMBCHECKARRAYSIZE( int64, struct $10FBARRAYDIM*, int64, int64 );
int64 SYMBHASCTOR( struct $8FBSYMBOL* );
int64 TYPEHASCTOR( int64, struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBGETCOMPDEFCTOR( struct $8FBSYMBOL* );
int64 SYMBCHECKACCESS( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBUDTGETFIRSTFIELD( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBUDTGETNEXTINITABLEFIELD( struct $8FBSYMBOL* );
int64 HMATCH( int64 );
typedef int64 $8LEXCHECK;
int64 LEXGETTOKEN( $8LEXCHECK );
void LEXSKIPTOKEN( $8LEXCHECK );
int64 LEXGETLOOKAHEAD( int64, $8LEXCHECK );
struct $7ASTNODE* CEXPRESSION( void );
$12FB_PARAMMODE CBYDESCARRAYARGPARENS( struct $7ASTNODE* );
void HSKIPUNTIL( int64, int64, $8LEXCHECK, int64 );
static int64 HUDTINIT( struct $10FB_INITCTX* );
static void HUPDATECONTEXTDTYPE( struct $10FB_INITCTX*, int64, struct $8FBSYMBOL* );
static int64 HDOASSIGN( struct $10FB_INITCTX*, struct $7ASTNODE*, int64 );
static int64 HELMINIT( struct $10FB_INITCTX*, int64 );
static int64 HARRAYINIT( struct $10FB_INITCTX*, int64 );
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
typedef int64 $8FB_TOKEN;
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
typedef int64 $11FB_MANGLING;
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
struct $5FBENV ENV$ __attribute__((common));

struct $7ASTNODE* CINITIALIZER( struct $8FBSYMBOL* SYM$1, $9FB_INIOPT OPTIONS$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	struct $7ASTNODE* TMP$87$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$137:;
	int64 IS_LOCAL$1;
	int64 OK$1;
	struct $10FB_INITCTX CTX$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	if( ((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 65540ll) != 0ll) | (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 8ll) != 0ll)) == 0ll ) goto label$140;
	{
		ERRREPORT( 74ll, -1ll, (uint8*)0ull );
		goto label$138;
	}
	label$140:;
	label$139:;
	if( *(int64*)SYM$1 != 1ll ) goto label$142;
	{
		IS_LOCAL$1 = (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 128ll) != 0ll);
	}
	goto label$141;
	label$142:;
	{
		IS_LOCAL$1 = 0ll;
	}
	label$141:;
	*($9FB_INIOPT*)((uint8*)&CTX$1 + 40ll) = OPTIONS$1;
	*(struct $8FBSYMBOL**)&CTX$1 = SYM$1;
	*(int64*)((uint8*)&CTX$1 + 24ll) = -1ll;
	*(struct $7ASTNODE**)((uint8*)&CTX$1 + 48ll) = (struct $7ASTNODE*)0ull;
	HUPDATECONTEXTDTYPE( &CTX$1, DTYPE$1, SUBTYPE$1 );
	struct $7ASTNODE* vr$16 = ASTTYPEINIBEGIN( *(int64*)((uint8*)&CTX$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)&CTX$1 + 16ll), IS_LOCAL$1, *(int64*)((uint8*)SYM$1 + 80ll) );
	*(struct $7ASTNODE**)((uint8*)&CTX$1 + 32ll) = vr$16;
	int64 vr$17 = TYPEHASCTOR( *(int64*)((uint8*)&CTX$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)&CTX$1 + 16ll) );
	if( vr$17 == 0ll ) goto label$144;
	{
		*($9FB_INIOPT*)((uint8*)&CTX$1 + 40ll) = *(int64*)((uint8*)&CTX$1 + 40ll) | 2ll;
	}
	label$144:;
	label$143:;
	if( ((int64)-(*(int64*)*(struct $8FBSYMBOL**)&CTX$1 == 1ll) | (int64)-(*(int64*)*(struct $8FBSYMBOL**)&CTX$1 == 12ll)) == 0ll ) goto label$146;
	{
		int64 vr$27 = HARRAYINIT( &CTX$1, 0ll );
		OK$1 = vr$27;
	}
	goto label$145;
	label$146:;
	{
		if( (*(int64*)((uint8*)&CTX$1 + 8ll) & 511ll) != 18ll ) goto label$148;
		{
			int64 vr$31 = HUDTINIT( &CTX$1 );
			OK$1 = vr$31;
		}
		goto label$147;
		label$148:;
		{
			int64 vr$33 = HELMINIT( &CTX$1, 0ll );
			OK$1 = vr$33;
		}
		label$147:;
	}
	label$145:;
	ASTTYPEINIEND( *(struct $7ASTNODE**)((uint8*)&CTX$1 + 32ll), (int64)-((OPTIONS$1 & 1ll) != 0ll) );
	if( OK$1 == 0ll ) goto label$149;
	TMP$87$1 = *(struct $7ASTNODE**)((uint8*)&CTX$1 + 32ll);
	goto label$150;
	label$149:;
	TMP$87$1 = (struct $7ASTNODE*)0ull;
	label$150:;
	fb$result$1 = TMP$87$1;
	label$138:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__parserzdeclzsymbzinit( void )
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

static void HUPDATECONTEXTDTYPE( struct $10FB_INITCTX* CTX$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	label$10:;
	if( DTYPE$1 != 2147483648ll ) goto label$13;
	{
		*(int64*)((uint8*)CTX$1 + 8ll) = *(int64*)((uint8*)*(struct $8FBSYMBOL**)CTX$1 + 48ll);
		*(struct $8FBSYMBOL**)((uint8*)CTX$1 + 16ll) = *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)CTX$1 + 56ll);
	}
	goto label$12;
	label$13:;
	{
		*(int64*)((uint8*)CTX$1 + 8ll) = DTYPE$1;
		*(struct $8FBSYMBOL**)((uint8*)CTX$1 + 16ll) = SUBTYPE$1;
	}
	label$12:;
	label$11:;
}

static int64 HDOASSIGN( struct $10FB_INITCTX* CTX$1, struct $7ASTNODE* EXPR$1, int64 NO_FAKE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$14:;
	int64 vr$3 = ASTCHECKASSIGNTOTYPE( *(int64*)((uint8*)CTX$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)CTX$1 + 16ll), EXPR$1 );
	if( vr$3 != 0ll ) goto label$17;
	{
		struct $7ASTNODE* vr$7 = ASTNEWCONV( *(int64*)((uint8*)CTX$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)CTX$1 + 16ll), EXPR$1, 0ll, (int64*)0ull );
		EXPR$1 = vr$7;
		if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$19;
		{
			if( NO_FAKE$1 == 0ll ) goto label$21;
			{
				goto label$15;
			}
			label$21:;
			label$20:;
			ERRREPORT( 24ll, -1ll, (uint8*)0ull );
			ASTDELTREE( EXPR$1 );
			struct $7ASTNODE* vr$12 = ASTNEWCONSTZ( *(int64*)((uint8*)CTX$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)CTX$1 + 16ll) );
			EXPR$1 = vr$12;
		}
		label$19:;
		label$18:;
	}
	label$17:;
	label$16:;
	ASTTYPEINIADDASSIGN( *(struct $7ASTNODE**)((uint8*)CTX$1 + 32ll), EXPR$1, *(struct $8FBSYMBOL**)CTX$1, *(int64*)((uint8*)CTX$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)CTX$1 + 16ll) );
	fb$result$1 = -1ll;
	label$15:;
	return fb$result$1;
}

static int64 HELMINIT( struct $10FB_INITCTX* CTX$1, int64 NO_FAKE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$22:;
	struct $7ASTNODE* EXPR$1;
	struct $8FBSYMBOL* OLDSYM$1;
	int64 OLD_DTYPE$1;
	fb$result$1 = 0ll;
	OLDSYM$1 = *(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 304ll);
	OLD_DTYPE$1 = *(int64*)((uint8*)&PARSER$ + 296ll);
	*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 304ll) = *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)CTX$1 + 56ll);
	*(int64*)((uint8*)&PARSER$ + 296ll) = *(int64*)((uint8*)*(struct $8FBSYMBOL**)CTX$1 + 48ll) & 511ll;
	struct $7ASTNODE* vr$6 = CEXPRESSION(  );
	EXPR$1 = vr$6;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$25;
	{
		ERRREPORT( 9ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( 44ll, 0ll, 0ll, 0ll );
		struct $7ASTNODE* vr$10 = ASTNEWCONSTZ( *(int64*)((uint8*)CTX$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)CTX$1 + 16ll) );
		EXPR$1 = vr$10;
	}
	label$25:;
	label$24:;
	*(struct $7ASTNODE**)((uint8*)CTX$1 + 48ll) = EXPR$1;
	*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 304ll) = OLDSYM$1;
	*(int64*)((uint8*)&PARSER$ + 296ll) = OLD_DTYPE$1;
	int64 vr$12 = HDOASSIGN( CTX$1, EXPR$1, NO_FAKE$1 );
	fb$result$1 = vr$12;
	label$23:;
	return fb$result$1;
}

static int64 HARRAYINIT( struct $10FB_INITCTX* CTX$1, int64 NO_FAKE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$26:;
	int64 ELM_CNT$1;
	int64 ELEMENTS$1;
	int64 ISARRAY$1;
	fb$result$1 = 0ll;
	ISARRAY$1 = 0ll;
	int64 vr$1 = LEXGETTOKEN( 0ll );
	if( vr$1 != 123ll ) goto label$29;
	{
		LEXSKIPTOKEN( 0ll );
		*(int64*)((uint8*)CTX$1 + 24ll) = *(int64*)((uint8*)CTX$1 + 24ll) + 1ll;
		ISARRAY$1 = -1ll;
		if( *(int64*)((uint8*)CTX$1 + 24ll) < *(int64*)((uint8*)*(struct $8FBSYMBOL**)CTX$1 + 96ll) ) goto label$31;
		{
			$9FB_ERRMSG TMP$85$3;
			if( *(int64*)((uint8*)*(struct $8FBSYMBOL**)CTX$1 + 96ll) <= 0ll ) goto label$32;
			TMP$85$3 = 66ll;
			goto label$151;
			label$32:;
			TMP$85$3 = 62ll;
			label$151:;
			ERRREPORT( TMP$85$3, 0ll, (uint8*)0ull );
			HSKIPUNTIL( 125ll, -1ll, 0ll, 0ll );
			*(int64*)((uint8*)CTX$1 + 24ll) = *(int64*)((uint8*)CTX$1 + 24ll) + -1ll;
			goto label$27;
		}
		label$31:;
		label$30:;
	}
	goto label$28;
	label$29:;
	{
		if( *(int64*)((uint8*)CTX$1 + 24ll) >= (*(int64*)((uint8*)*(struct $8FBSYMBOL**)CTX$1 + 96ll) + -1ll) ) goto label$34;
		{
			ERRREPORT( 63ll, 0ll, (uint8*)0ull );
			*(int64*)((uint8*)CTX$1 + 24ll) = *(int64*)((uint8*)CTX$1 + 24ll) + 1ll;
			ISARRAY$1 = -1ll;
		}
		label$34:;
		label$33:;
	}
	label$28:;
	if( ISARRAY$1 == 0ll ) goto label$36;
	{
		ASTTYPEINISCOPEBEGIN( *(struct $7ASTNODE**)((uint8*)CTX$1 + 32ll), *(struct $8FBSYMBOL**)CTX$1 );
	}
	label$36:;
	label$35:;
	if( *(int64*)((uint8*)CTX$1 + 24ll) < 0ll ) goto label$38;
	{
		if( *(int64*)((uint8*)((uint8*)*(struct $10FBARRAYDIM**)((uint8*)*(struct $8FBSYMBOL**)CTX$1 + 104ll) + (*(int64*)((uint8*)CTX$1 + 24ll) << 4ll)) + 8ll) != -9223372036854775808ull ) goto label$40;
		{
			ELEMENTS$1 = -1ll;
		}
		goto label$39;
		label$40:;
		{
			ELEMENTS$1 = (*(int64*)((uint8*)((uint8*)*(struct $10FBARRAYDIM**)((uint8*)*(struct $8FBSYMBOL**)CTX$1 + 104ll) + (*(int64*)((uint8*)CTX$1 + 24ll) << 4ll)) + 8ll) - *(int64*)((uint8*)*(struct $10FBARRAYDIM**)((uint8*)*(struct $8FBSYMBOL**)CTX$1 + 104ll) + (*(int64*)((uint8*)CTX$1 + 24ll) << 4ll))) + 1ll;
		}
		label$39:;
	}
	goto label$37;
	label$38:;
	{
		ELEMENTS$1 = 1ll;
	}
	label$37:;
	ELM_CNT$1 = 0ll;
	label$41:;
	{
		if( *(int64*)((uint8*)CTX$1 + 24ll) >= (*(int64*)((uint8*)*(struct $8FBSYMBOL**)CTX$1 + 96ll) + -1ll) ) goto label$45;
		{
			int64 vr$52 = HARRAYINIT( CTX$1, 0ll );
			if( vr$52 != 0ll ) goto label$47;
			{
				goto label$27;
			}
			label$47:;
			label$46:;
		}
		goto label$44;
		label$45:;
		{
			if( (*(int64*)((uint8*)CTX$1 + 8ll) & 511ll) != 18ll ) goto label$49;
			{
				int64 vr$57 = HUDTINIT( CTX$1 );
				if( vr$57 != 0ll ) goto label$51;
				{
					goto label$27;
				}
				label$51:;
				label$50:;
			}
			goto label$48;
			label$49:;
			{
				int64 vr$59 = HELMINIT( CTX$1, NO_FAKE$1 );
				if( vr$59 != 0ll ) goto label$53;
				{
					goto label$27;
				}
				label$53:;
				label$52:;
			}
			label$48:;
		}
		label$44:;
		ELM_CNT$1 = ELM_CNT$1 + 1ll;
		if( ((int64)-(ELM_CNT$1 >= ELEMENTS$1) & (int64)-(ELEMENTS$1 != -1ll)) == 0ll ) goto label$55;
		{
			goto label$42;
		}
		label$55:;
		label$54:;
	}
	label$43:;
	int64 vr$66 = HMATCH( 44ll );
	if( vr$66 != 0ll ) goto label$41;
	label$42:;
	if( ELEMENTS$1 != -1ll ) goto label$57;
	{
		ELEMENTS$1 = ELM_CNT$1;
		SYMBSETFIXEDSIZEARRAYDIMENSIONELEMENTS( *(struct $8FBSYMBOL**)CTX$1, *(int64*)((uint8*)CTX$1 + 24ll), ELEMENTS$1 );
		SYMBMAYBEADDARRAYDESC( *(struct $8FBSYMBOL**)CTX$1 );
		int64 vr$82 = SYMBCHECKARRAYSIZE( *(int64*)((uint8*)*(struct $8FBSYMBOL**)CTX$1 + 96ll), *(struct $10FBARRAYDIM**)((uint8*)*(struct $8FBSYMBOL**)CTX$1 + 104ll), *(int64*)((uint8*)*(struct $8FBSYMBOL**)CTX$1 + 72ll), (int64)-((*(int64*)((uint8*)*(struct $8FBSYMBOL**)CTX$1 + 8ll) & 3ll) == 0ll) );
		if( vr$82 != 0ll ) goto label$59;
		{
			ERRREPORT( 49ll, 0ll, (uint8*)0ull );
			SYMBSETFIXEDSIZEARRAYDIMENSIONELEMENTS( *(struct $8FBSYMBOL**)CTX$1, *(int64*)((uint8*)CTX$1 + 24ll), 1ll );
		}
		label$59:;
		label$58:;
	}
	label$57:;
	label$56:;
	ELEMENTS$1 = ELEMENTS$1 - ELM_CNT$1;
	if( ELEMENTS$1 <= 0ll ) goto label$61;
	{
		int64 vr$91 = SYMBCALCARRAYELEMENTS( *(struct $8FBSYMBOL**)CTX$1, *(int64*)((uint8*)CTX$1 + 24ll) + 1ll );
		ELEMENTS$1 = ELEMENTS$1 * vr$91;
		struct $8FBSYMBOL* CTOR$2;
		CTOR$2 = (struct $8FBSYMBOL*)0ull;
		if( (*(int64*)((uint8*)CTX$1 + 40ll) & 2ll) == 0ll ) goto label$63;
		{
			struct $8FBSYMBOL* vr$97 = SYMBGETCOMPDEFCTOR( *(struct $8FBSYMBOL**)((uint8*)CTX$1 + 16ll) );
			CTOR$2 = vr$97;
			if( CTOR$2 != (struct $8FBSYMBOL*)0ull ) goto label$65;
			{
				ERRREPORT( 182ll, 0ll, (uint8*)0ull );
			}
			goto label$64;
			label$65:;
			{
				int64 vr$99 = SYMBCHECKACCESS( CTOR$2 );
				if( vr$99 != 0ll ) goto label$67;
				{
					ERRREPORT( 203ll, 0ll, (uint8*)0ull );
				}
				label$67:;
				label$66:;
			}
			label$64:;
		}
		label$63:;
		label$62:;
		if( CTOR$2 == (struct $8FBSYMBOL*)0ull ) goto label$69;
		{
			ASTTYPEINIADDCTORLIST( *(struct $7ASTNODE**)((uint8*)CTX$1 + 32ll), *(struct $8FBSYMBOL**)CTX$1, ELEMENTS$1, *(int64*)((uint8*)CTX$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)CTX$1 + 16ll) );
		}
		goto label$68;
		label$69:;
		{
			int64 PAD_LGT$3;
			{
				uint64 TMP$86$4;
				TMP$86$4 = (uint64)(*(int64*)((uint8*)CTX$1 + 8ll) & 511ll);
				goto label$71;
				label$72:;
				{
					PAD_LGT$3 = *(int64*)((uint8*)*(struct $8FBSYMBOL**)CTX$1 + 72ll);
				}
				goto label$70;
				label$73:;
				{
					int64 vr$112 = SYMBCALCLEN( *(int64*)((uint8*)CTX$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)CTX$1 + 16ll) );
					PAD_LGT$3 = vr$112;
				}
				goto label$70;
				label$71:;
				static const void* tmp$88[15ll] = {
					&&label$72,
					&&label$73,
					&&label$73,
					&&label$72,
					&&label$73,
					&&label$73,
					&&label$73,
					&&label$73,
					&&label$73,
					&&label$73,
					&&label$73,
					&&label$73,
					&&label$73,
					&&label$73,
					&&label$72,
				};
				if( TMP$86$4 < 3ll ) goto label$73;
				if( TMP$86$4 > 17ll ) goto label$73;
				goto *tmp$88[TMP$86$4 - 3ll];
				label$70:;
			}
			PAD_LGT$3 = PAD_LGT$3 * ELEMENTS$1;
			ASTTYPEINIADDPAD( *(struct $7ASTNODE**)((uint8*)CTX$1 + 32ll), PAD_LGT$3 );
			*(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)CTX$1 + 32ll) + 40ll) = *(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)CTX$1 + 32ll) + 40ll) + PAD_LGT$3;
		}
		label$68:;
	}
	label$61:;
	label$60:;
	if( ISARRAY$1 == 0ll ) goto label$75;
	{
		ASTTYPEINISCOPEEND( *(struct $7ASTNODE**)((uint8*)CTX$1 + 32ll), *(struct $8FBSYMBOL**)CTX$1 );
		int64 vr$123 = LEXGETTOKEN( 0ll );
		if( vr$123 == 125ll ) goto label$77;
		{
			ERRREPORT( 64ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( 125ll, -1ll, 0ll, 0ll );
		}
		goto label$76;
		label$77:;
		{
			LEXSKIPTOKEN( 0ll );
		}
		label$76:;
		*(int64*)((uint8*)CTX$1 + 24ll) = *(int64*)((uint8*)CTX$1 + 24ll) + -1ll;
	}
	label$75:;
	label$74:;
	fb$result$1 = -1ll;
	label$27:;
	return fb$result$1;
}

static int64 HUDTINIT( struct $10FB_INITCTX* CTX$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$78:;
	static int64 REC_CNT$1;
	int64 ELM_CNT$1;
	int64 LGT$1;
	int64 BASEOFS$1;
	int64 PAD_LGT$1;
	struct $8FBSYMBOL* FLD$1;
	struct $8FBSYMBOL* FIRST$1;
	struct $8FBSYMBOL* OLDSUBTYPE$1;
	int64 OLDDTYPE$1;
	struct $10FB_INITCTX OLD_CTX$1;
	fb$result$1 = 0ll;
	REC_CNT$1 = REC_CNT$1 + 1ll;
	if( (*(int64*)((uint8*)CTX$1 + 40ll) & 2ll) == 0ll ) goto label$81;
	{
		struct $7ASTNODE* EXPR$2;
		OLDSUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 304ll);
		OLDDTYPE$1 = *(int64*)((uint8*)&PARSER$ + 296ll);
		*(int64*)((uint8*)&PARSER$ + 296ll) = *(int64*)((uint8*)CTX$1 + 8ll);
		*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 304ll) = *(struct $8FBSYMBOL**)((uint8*)CTX$1 + 16ll);
		struct $7ASTNODE* vr$7 = CEXPRESSION(  );
		EXPR$2 = vr$7;
		*(int64*)((uint8*)&PARSER$ + 296ll) = OLDDTYPE$1;
		*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 304ll) = OLDSUBTYPE$1;
		if( EXPR$2 != (struct $7ASTNODE*)0ull ) goto label$83;
		{
			ERRREPORT( 9ll, 0ll, (uint8*)0ull );
			struct $7ASTNODE* vr$9 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
			EXPR$2 = vr$9;
		}
		label$83:;
		label$82:;
		if( *(int64*)*(struct $8FBSYMBOL**)CTX$1 != 4ll ) goto label$85;
		{
			if( *(int64*)((uint8*)*(struct $8FBSYMBOL**)CTX$1 + 88ll) != 2ll ) goto label$87;
			{
				if( ((int64)-((*(int64*)((uint8*)EXPR$2 + 8ll) & 511ll) == (*(int64*)((uint8*)CTX$1 + 8ll) & 511ll)) & (int64)-(*(struct $8FBSYMBOL**)((uint8*)EXPR$2 + 16ll) == *(struct $8FBSYMBOL**)((uint8*)CTX$1 + 16ll))) == 0ll ) goto label$89;
				{
					REC_CNT$1 = REC_CNT$1 + -1ll;
					int64 vr$27 = HDOASSIGN( CTX$1, EXPR$2, 0ll );
					fb$result$1 = vr$27;
					goto label$79;
				}
				label$89:;
				label$88:;
			}
			label$87:;
			label$86:;
		}
		label$85:;
		label$84:;
		int64 IS_CTORCALL$2;
		$12FB_PARAMMODE vr$29 = CBYDESCARRAYARGPARENS( EXPR$2 );
		struct $7ASTNODE* vr$31 = ASTBUILDIMPLICITCTORCALLEX( *(struct $8FBSYMBOL**)CTX$1, EXPR$2, vr$29, &IS_CTORCALL$2 );
		EXPR$2 = vr$31;
		if( EXPR$2 != (struct $7ASTNODE*)0ull ) goto label$91;
		{
			REC_CNT$1 = REC_CNT$1 + -1ll;
			goto label$79;
		}
		label$91:;
		label$90:;
		if( IS_CTORCALL$2 == 0ll ) goto label$93;
		{
			REC_CNT$1 = REC_CNT$1 + -1ll;
			struct $7ASTNODE* vr$40 = ASTTYPEINIADDCTORCALL( *(struct $7ASTNODE**)((uint8*)CTX$1 + 32ll), *(struct $8FBSYMBOL**)CTX$1, EXPR$2, *(int64*)((uint8*)CTX$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)CTX$1 + 16ll) );
			fb$result$1 = (int64)-(vr$40 != (struct $7ASTNODE*)0ull);
			goto label$79;
		}
		goto label$92;
		label$93:;
		{
			REC_CNT$1 = REC_CNT$1 + -1ll;
			int64 vr$43 = HDOASSIGN( CTX$1, EXPR$2, 0ll );
			fb$result$1 = vr$43;
			goto label$79;
		}
		label$92:;
	}
	label$81:;
	label$80:;
	int64 PARENTH$1;
	PARENTH$1 = -1ll;
	int64 COMMA$1;
	COMMA$1 = 0ll;
	int64 vr$44 = LEXGETTOKEN( 0ll );
	if( vr$44 == 40ll ) goto label$95;
	{
		if( REC_CNT$1 > 1ll ) goto label$97;
		{
			REC_CNT$1 = REC_CNT$1 + -1ll;
			int64 vr$48 = HELMINIT( CTX$1, 0ll );
			fb$result$1 = vr$48;
			goto label$79;
		}
		label$97:;
		label$96:;
		int64 vr$49 = LEXGETLOOKAHEAD( 1ll, 0ll );
		COMMA$1 = (int64)-(vr$49 == 44ll);
		PARENTH$1 = 0ll;
	}
	goto label$94;
	label$95:;
	{
		ASTTYPEINISCOPEBEGIN( *(struct $7ASTNODE**)((uint8*)CTX$1 + 32ll), *(struct $8FBSYMBOL**)CTX$1 );
		LEXSKIPTOKEN( 0ll );
	}
	label$94:;
	struct $8FBSYMBOL* vr$54 = SYMBUDTGETFIRSTFIELD( *(struct $8FBSYMBOL**)((uint8*)CTX$1 + 16ll) );
	FIRST$1 = vr$54;
	FLD$1 = FIRST$1;
	LGT$1 = 0ll;
	BASEOFS$1 = *(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)CTX$1 + 32ll) + 40ll);
	__builtin_memcpy( &OLD_CTX$1, CTX$1, 56 );
	*(int64*)((uint8*)CTX$1 + 24ll) = -1ll;
	label$98:;
	{
		if( FLD$1 != (struct $8FBSYMBOL*)0ull ) goto label$102;
		{
			ERRREPORT( 66ll, 0ll, (uint8*)0ull );
			goto label$99;
		}
		label$102:;
		label$101:;
		if( LGT$1 <= 0ll ) goto label$104;
		{
			PAD_LGT$1 = *(int64*)((uint8*)FLD$1 + 80ll) - LGT$1;
			if( PAD_LGT$1 <= 0ll ) goto label$106;
			{
				ASTTYPEINIADDPAD( *(struct $7ASTNODE**)((uint8*)CTX$1 + 32ll), PAD_LGT$1 );
				LGT$1 = LGT$1 + PAD_LGT$1;
			}
			label$106:;
			label$105:;
		}
		label$104:;
		label$103:;
		*(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)CTX$1 + 32ll) + 40ll) = BASEOFS$1 + *(int64*)((uint8*)FLD$1 + 80ll);
		int64 vr$70 = SYMBCHECKACCESS( FLD$1 );
		if( vr$70 != 0ll ) goto label$108;
		{
			ERRREPORT( 201ll, 0ll, (uint8*)0ull );
		}
		label$108:;
		label$107:;
		*(struct $8FBSYMBOL**)CTX$1 = FLD$1;
		HUPDATECONTEXTDTYPE( CTX$1, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		*($9FB_INIOPT*)((uint8*)CTX$1 + 40ll) = *(int64*)((uint8*)CTX$1 + 40ll) & -3ll;
		int64 vr$76 = SYMBHASCTOR( FLD$1 );
		if( vr$76 == 0ll ) goto label$110;
		{
			*($9FB_INIOPT*)((uint8*)CTX$1 + 40ll) = *(int64*)((uint8*)CTX$1 + 40ll) | 2ll;
		}
		label$110:;
		label$109:;
		int64 vr$81 = HARRAYINIT( CTX$1, -1ll );
		if( vr$81 != 0ll ) goto label$112;
		{
			if( ((int64)-(FLD$1 != FIRST$1) | (int64)-(*(struct $7ASTNODE**)((uint8*)CTX$1 + 48ll) == (struct $7ASTNODE*)0ull)) == 0ll ) goto label$114;
			{
				ERRREPORT( 24ll, -1ll, (uint8*)0ull );
				REC_CNT$1 = REC_CNT$1 + -1ll;
				goto label$79;
			}
			label$114:;
			label$113:;
			int64 IS_CTORCALL$3;
			struct $7ASTNODE* EXPR$3;
			EXPR$3 = *(struct $7ASTNODE**)((uint8*)CTX$1 + 48ll);
			__builtin_memcpy( CTX$1, &OLD_CTX$1, 56 );
			struct $7ASTNODE* vr$93 = ASTBUILDIMPLICITCTORCALLEX( *(struct $8FBSYMBOL**)CTX$1, EXPR$3, -1ll, &IS_CTORCALL$3 );
			EXPR$3 = vr$93;
			if( EXPR$3 != (struct $7ASTNODE*)0ull ) goto label$116;
			{
				REC_CNT$1 = REC_CNT$1 + -1ll;
				goto label$79;
			}
			label$116:;
			label$115:;
			if( PARENTH$1 == 0ll ) goto label$118;
			{
				int64 vr$97 = LEXGETTOKEN( 0ll );
				if( vr$97 == 41ll ) goto label$120;
				{
					ERRREPORT( 7ll, 0ll, (uint8*)0ull );
					HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
				}
				label$120:;
				label$119:;
				LEXSKIPTOKEN( 0ll );
				ASTTYPEINIREMOVELASTNODE( *(struct $7ASTNODE**)((uint8*)CTX$1 + 32ll) );
			}
			label$118:;
			label$117:;
			REC_CNT$1 = REC_CNT$1 + -1ll;
			if( IS_CTORCALL$3 == 0ll ) goto label$122;
			{
				struct $7ASTNODE* vr$106 = ASTTYPEINIADDCTORCALL( *(struct $7ASTNODE**)((uint8*)CTX$1 + 32ll), *(struct $8FBSYMBOL**)CTX$1, EXPR$3, *(int64*)((uint8*)CTX$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)CTX$1 + 16ll) );
				fb$result$1 = (int64)-(vr$106 != (struct $7ASTNODE*)0ull);
				goto label$79;
			}
			goto label$121;
			label$122:;
			{
				int64 vr$108 = HDOASSIGN( CTX$1, EXPR$3, 0ll );
				fb$result$1 = vr$108;
				goto label$79;
			}
			label$121:;
		}
		label$112:;
		label$111:;
		LGT$1 = LGT$1 + (*(int64*)((uint8*)FLD$1 + 72ll) * *(int64*)((uint8*)FLD$1 + 120ll));
		struct $8FBSYMBOL* vr$113 = SYMBUDTGETNEXTINITABLEFIELD( FLD$1 );
		FLD$1 = vr$113;
		if( REC_CNT$1 <= 1ll ) goto label$124;
		{
			if( COMMA$1 == 0ll ) goto label$126;
			{
				if( FLD$1 != (struct $8FBSYMBOL*)0ull ) goto label$128;
				{
					goto label$99;
				}
				label$128:;
				label$127:;
			}
			label$126:;
			label$125:;
		}
		label$124:;
		label$123:;
		int64 vr$117 = HMATCH( 44ll );
		if( vr$117 != 0ll ) goto label$130;
		{
			goto label$99;
		}
		label$130:;
		label$129:;
	}
	label$100:;
	goto label$98;
	label$99:;
	if( PARENTH$1 == 0ll ) goto label$132;
	{
		int64 vr$120 = LEXGETTOKEN( 0ll );
		if( vr$120 == 41ll ) goto label$134;
		{
			ERRREPORT( 7ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
		}
		goto label$133;
		label$134:;
		{
			LEXSKIPTOKEN( 0ll );
			ASTTYPEINISCOPEEND( *(struct $7ASTNODE**)((uint8*)CTX$1 + 32ll), *(struct $8FBSYMBOL**)CTX$1 );
		}
		label$133:;
	}
	label$132:;
	label$131:;
	__builtin_memcpy( CTX$1, &OLD_CTX$1, 56 );
	int64 SYM_LEN$1;
	int64 vr$127 = SYMBCALCLEN( *(int64*)((uint8*)CTX$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)CTX$1 + 16ll) );
	SYM_LEN$1 = vr$127;
	PAD_LGT$1 = SYM_LEN$1 - LGT$1;
	if( PAD_LGT$1 <= 0ll ) goto label$136;
	{
		ASTTYPEINIADDPAD( *(struct $7ASTNODE**)((uint8*)CTX$1 + 32ll), PAD_LGT$1 );
	}
	label$136:;
	label$135:;
	*(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)CTX$1 + 32ll) + 40ll) = BASEOFS$1 + SYM_LEN$1;
	REC_CNT$1 = REC_CNT$1 + -1ll;
	fb$result$1 = -1ll;
	label$79:;
	return fb$result$1;
}

// Total compilation time: 0.03091692132875323 seconds.
