// Compilation of fbc-1.01.0/src/compiler/rtl-macro.bas started at 14:16:44 on 02-28-2015

typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
typedef int64 $10FB_RTL_OPT;
typedef int64 $14FB_DEFTOK_TYPE;
struct $17FB_RTL_MACROTOKEN {
	$14FB_DEFTOK_TYPE TYPE;
	void* DATA;
};
#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]
__FB_STATIC_ASSERT( sizeof( struct $17FB_RTL_MACROTOKEN ) == 16 );
struct $15FB_RTL_MACRODEF {
	uint8* NAME;
	$10FB_RTL_OPT OPTIONS;
	int64 PARAMS;
	uint8* PARAMTB[4];
	struct $17FB_RTL_MACROTOKEN TOKENTB[12];
};
__FB_STATIC_ASSERT( sizeof( struct $15FB_RTL_MACRODEF ) == 248 );
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
typedef int64 $15FB_DEFINE_FLAGS;
struct $11FB_DEFPARAM;
struct $11FB_DEFPARAM {
	uint8* NAME;
	int64 NUM;
	struct $11FB_DEFPARAM* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $11FB_DEFPARAM ) == 24 );
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
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__rtlzmacro( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
int64 FBIS64BIT( void );
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
struct $8FBSYMBOL* SYMBADDDEFINEMACRO( uint8*, struct $9FB_DEFTOK*, int64, struct $11FB_DEFPARAM*, $15FB_DEFINE_FLAGS );
struct $11FB_DEFPARAM* SYMBADDDEFINEPARAM( struct $11FB_DEFPARAM*, uint8* );
struct $9FB_DEFTOK* SYMBADDDEFINETOK( struct $9FB_DEFTOK*, $14FB_DEFTOK_TYPE );
void ZSTRASSIGN( uint8**, uint8* );
static void HADDMACRO( struct $15FB_RTL_MACRODEF* );
static void HADDMACROS( struct $15FB_RTL_MACRODEF* );
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
static struct $15FB_RTL_MACRODEF MACRODATA$[17] = { { (uint8*)"RGB", 0ll, 3ll, { (uint8*)"R", (uint8*)"G", (uint8*)"B" }, { { 2ll, (void*)"((cuint(" }, { 0ll, (void*)0ull }, { 2ll, (void*)") shl 16) or (cuint(" }, { 0ll, (void*)1ull }, { 2ll, (void*)") shl 8) or cuint(" }, { 0ll, (void*)2ull }, { 2ll, (void*)") or &hFF000000)" }, { -1ll } } }, { (uint8*)"RGBA", 0ll, 4ll, { (uint8*)"R", (uint8*)"G", (uint8*)"B", (uint8*)"A" }, { { 2ll, (void*)"((cuint(" }, { 0ll, (void*)0ull }, { 2ll, (void*)") shl 16) or (cuint(" }, { 0ll, (void*)1ull }, { 2ll, (void*)") shl 8) or cuint(" }, { 0ll, (void*)2ull }, { 2ll, (void*)") or (cuint(" }, { 0ll, (void*)3ull }, { 2ll, (void*)") shl 24))" }, { -1ll } } }, { (uint8*)"VA_ARG", 8192ll, 2ll, { (uint8*)"A", (uint8*)"T" }, { { 2ll, (void*)"peek(" }, { 0ll, (void*)1ull }, { 2ll, (void*)"," }, { 0ll, (void*)0ull }, { 2ll, (void*)")" }, { -1ll } } }, { (uint8*)"VA_NEXT", 8192ll, 2ll, { (uint8*)"A", (uint8*)"T" }, { { 2ll, (void*)"(cptr(" }, { 0ll, (void*)1ull }, { 2ll, (void*)" ptr, cptr(byte ptr, " }, { 0ll, (void*)0ull }, { 2ll, (void*)") + (sizeof(" }, { 0ll, (void*)1ull }, { 2ll, (void*)") + sizeof(any ptr)-1 and -sizeof(any ptr)) ) )" }, { -1ll } } }, { (uint8*)"ASSERT", 16ll, 1ll, { (uint8*)"E" }, { { 2ll, (void*)"if (" }, { 0ll, (void*)0ull }, { 2ll, (void*)") = 0 then fb_Assert(__FILE__, __LINE__, __FUNCTION__, " }, { 1ll, (void*)0ull }, { 2ll, (void*)") end if" }, { -1ll } } }, { (uint8*)"ASSERTWARN", 16ll, 1ll, { (uint8*)"E" }, { { 2ll, (void*)"if (" }, { 0ll, (void*)0ull }, { 2ll, (void*)") = 0 then fb_AssertWarn(__FILE__, __LINE__, __FUNCTION__, " }, { 1ll, (void*)0ull }, { 2ll, (void*)") end if" }, { -1ll } } }, { (uint8*)"OFFSETOF", 0ll, 2ll, { (uint8*)"T", (uint8*)"F" }, { { 2ll, (void*)"cint( @cast( " }, { 0ll, (void*)0ull }, { 2ll, (void*)" ptr, 0 )->" }, { 0ll, (void*)1ull }, { 2ll, (void*)" )" }, { -1ll } } }, { (uint8*)"__FB_MIN_VERSION__", 0ll, 3ll, { (uint8*)"MAJOR", (uint8*)"MINOR", (uint8*)"PATCH_LEVEL" }, { { 2ll, (void*)"((__FB_VER_MAJOR__ > (" }, { 0ll, (void*)0ull }, { 2ll, (void*)")) or ((__FB_VER_MAJOR__ = (" }, { 0ll, (void*)0ull }, { 2ll, (void*)")) and ((__FB_VER_MINOR__ > (" }, { 0ll, (void*)1ull }, { 2ll, (void*)")) or (__FB_VER_MINOR__ = (" }, { 0ll, (void*)1ull }, { 2ll, (void*)") and __FB_VER_PATCH__ >= (" }, { 0ll, (void*)2ull }, { 2ll, (void*)")))))" }, { -1ll } } }, { (uint8*)"LOWORD", 0ll, 1ll, { (uint8*)"X" }, { { 2ll, (void*)"(cuint(" }, { 0ll, (void*)0ull }, { 2ll, (void*)") and &h0000FFFF)" }, { -1ll } } }, { (uint8*)"HIWORD", 32768ll, 1ll, { (uint8*)"X" }, { { 2ll, (void*)"(cuint(" }, { 0ll, (void*)0ull }, { 2ll, (void*)") shr 16)" }, { -1ll } } }, { (uint8*)"HIWORD", 65536ll, 1ll, { (uint8*)"X" }, { { 2ll, (void*)"((cuint(" }, { 0ll, (void*)0ull }, { 2ll, (void*)") and &hFFFF0000u) shr 16)" }, { -1ll } } }, { (uint8*)"LOBYTE", 0ll, 1ll, { (uint8*)"X" }, { { 2ll, (void*)"(cuint(" }, { 0ll, (void*)0ull }, { 2ll, (void*)") and &h000000FF)" }, { -1ll } } }, { (uint8*)"HIBYTE", 0ll, 1ll, { (uint8*)"X" }, { { 2ll, (void*)"((cuint(" }, { 0ll, (void*)0ull }, { 2ll, (void*)") and &h0000FF00) shr 8)" }, { -1ll } } }, { (uint8*)"BIT", 0ll, 2ll, { (uint8*)"X", (uint8*)"Y" }, { { 2ll, (void*)"(((" }, { 0ll, (void*)0ull }, { 2ll, (void*)") and (cast(typeof(" }, { 0ll, (void*)0ull }, { 2ll, (void*)"), 1) shl (" }, { 0ll, (void*)1ull }, { 2ll, (void*)"))) <> 0)" }, { -1ll } } }, { (uint8*)"BITSET", 0ll, 2ll, { (uint8*)"X", (uint8*)"Y" }, { { 2ll, (void*)"((" }, { 0ll, (void*)0ull }, { 2ll, (void*)") or (cast(typeof(" }, { 0ll, (void*)0ull }, { 2ll, (void*)"), 1) shl (" }, { 0ll, (void*)1ull }, { 2ll, (void*)")))" }, { -1ll } } }, { (uint8*)"BITRESET", 0ll, 2ll, { (uint8*)"X", (uint8*)"Y" }, { { 2ll, (void*)"((" }, { 0ll, (void*)0ull }, { 2ll, (void*)") and not (cast(typeof(" }, { 0ll, (void*)0ull }, { 2ll, (void*)"), 1) shl (" }, { 0ll, (void*)1ull }, { 2ll, (void*)")))" }, { -1ll } } }, { (uint8*)0ull } };
static struct $15FB_RTL_MACRODEF MACRODATAQB$[16] = { { (uint8*)"__RGB", 0ll, 3ll, { (uint8*)"R", (uint8*)"G", (uint8*)"B" }, { { 2ll, (void*)"((__cuint(" }, { 0ll, (void*)0ull }, { 2ll, (void*)") __shl 16) or (__cuint(" }, { 0ll, (void*)1ull }, { 2ll, (void*)") __shl 8) or __cuint(" }, { 0ll, (void*)2ull }, { 2ll, (void*)") or &hFF000000)" }, { -1ll } } }, { (uint8*)"__RGBA", 0ll, 4ll, { (uint8*)"R", (uint8*)"G", (uint8*)"B", (uint8*)"A" }, { { 2ll, (void*)"((__cuint(" }, { 0ll, (void*)0ull }, { 2ll, (void*)") __shl 16) or (__cuint(" }, { 0ll, (void*)1ull }, { 2ll, (void*)") __shl 8) or __cuint(" }, { 0ll, (void*)2ull }, { 2ll, (void*)") or (__cuint(" }, { 0ll, (void*)3ull }, { 2ll, (void*)") __shl 24))" }, { -1ll } } }, { (uint8*)"__VA_ARG", 8192ll, 2ll, { (uint8*)"A", (uint8*)"T" }, { { 2ll, (void*)"peek(" }, { 0ll, (void*)1ull }, { 2ll, (void*)"," }, { 0ll, (void*)0ull }, { 2ll, (void*)")" }, { -1ll } } }, { (uint8*)"__VA_NEXT", 8192ll, 2ll, { (uint8*)"A", (uint8*)"T" }, { { 2ll, (void*)"(__cptr(" }, { 0ll, (void*)1ull }, { 2ll, (void*)" __ptr, __cptr(__byte __ptr, " }, { 0ll, (void*)0ull }, { 2ll, (void*)") + (__sizeof(" }, { 0ll, (void*)1ull }, { 2ll, (void*)") + __sizeof(any __ptr)-1 and -__sizeof(any __ptr)) ) )" }, { -1ll } } }, { (uint8*)"__ASSERT", 16ll, 1ll, { (uint8*)"E" }, { { 2ll, (void*)"if (" }, { 0ll, (void*)0ull }, { 2ll, (void*)") = 0 then fb_Assert(__FILE__, __LINE__, __FUNCTION__, " }, { 1ll, (void*)0ull }, { 2ll, (void*)") end if" }, { -1ll } } }, { (uint8*)"__ASSERTWARN", 16ll, 1ll, { (uint8*)"E" }, { { 2ll, (void*)"if (" }, { 0ll, (void*)0ull }, { 2ll, (void*)") = 0 then fb_AssertWarn(__FILE__, __LINE__, __FUNCTION__, " }, { 1ll, (void*)0ull }, { 2ll, (void*)") end if" }, { -1ll } } }, { (uint8*)"__OFFSETOF", 0ll, 2ll, { (uint8*)"T", (uint8*)"F" }, { { 2ll, (void*)"cint( @__cast( " }, { 0ll, (void*)0ull }, { 2ll, (void*)" __ptr, 0 )->" }, { 0ll, (void*)1ull }, { 2ll, (void*)" )" }, { -1ll } } }, { (uint8*)"__FB_MIN_VERSION__", 0ll, 3ll, { (uint8*)"MAJOR", (uint8*)"MINOR", (uint8*)"PATCH_LEVEL" }, { { 2ll, (void*)"((__FB_VER_MAJOR__ > (" }, { 0ll, (void*)0ull }, { 2ll, (void*)")) or ((__FB_VER_MAJOR__ = (" }, { 0ll, (void*)0ull }, { 2ll, (void*)")) and ((__FB_VER_MINOR__ > (" }, { 0ll, (void*)1ull }, { 2ll, (void*)")) or (__FB_VER_MINOR__ = (" }, { 0ll, (void*)1ull }, { 2ll, (void*)") and __FB_VER_PATCH__ >= (" }, { 0ll, (void*)2ull }, { 2ll, (void*)")))))" }, { -1ll } } }, { (uint8*)"__LOWORD", 0ll, 1ll, { (uint8*)"X" }, { { 2ll, (void*)"(__cuint(" }, { 0ll, (void*)0ull }, { 2ll, (void*)") and &h0000FFFF)" }, { -1ll } } }, { (uint8*)"__HIWORD", 0ll, 1ll, { (uint8*)"X" }, { { 2ll, (void*)"(__cuint(" }, { 0ll, (void*)0ull }, { 2ll, (void*)") __shr 16)" }, { -1ll } } }, { (uint8*)"__LOBYTE", 0ll, 1ll, { (uint8*)"X" }, { { 2ll, (void*)"(__cuint(" }, { 0ll, (void*)0ull }, { 2ll, (void*)") and &h000000FF)" }, { -1ll } } }, { (uint8*)"__HIBYTE", 0ll, 1ll, { (uint8*)"X" }, { { 2ll, (void*)"((__cuint(" }, { 0ll, (void*)0ull }, { 2ll, (void*)") and &h0000FF00) __shr 8)" }, { -1ll } } }, { (uint8*)"__BIT", 0ll, 2ll, { (uint8*)"X", (uint8*)"Y" }, { { 2ll, (void*)"(((" }, { 0ll, (void*)0ull }, { 2ll, (void*)") and (__cast(__typeof(" }, { 0ll, (void*)0ull }, { 2ll, (void*)"), 1) __shl (" }, { 0ll, (void*)1ull }, { 2ll, (void*)"))) <> 0)" }, { -1ll } } }, { (uint8*)"__BITSET", 0ll, 2ll, { (uint8*)"X", (uint8*)"Y" }, { { 2ll, (void*)"((" }, { 0ll, (void*)0ull }, { 2ll, (void*)") or (__cast(__typeof(" }, { 0ll, (void*)0ull }, { 2ll, (void*)"), 1) __shl (" }, { 0ll, (void*)1ull }, { 2ll, (void*)")))" }, { -1ll } } }, { (uint8*)"__BITRESET", 0ll, 2ll, { (uint8*)"X", (uint8*)"Y" }, { { 2ll, (void*)"((" }, { 0ll, (void*)0ull }, { 2ll, (void*)") and not (__cast(__typeof(" }, { 0ll, (void*)0ull }, { 2ll, (void*)"), 1) __shl (" }, { 0ll, (void*)1ull }, { 2ll, (void*)")))" }, { -1ll } } }, { (uint8*)0ull } };
struct $5FBENV ENV$ __attribute__((common));

void RTLMACROMODINIT( void )
{
	label$47:;
	if( *(int64*)((uint8*)&ENV$ + 272ll) != 3ll ) goto label$50;
	{
		HADDMACROS( (struct $15FB_RTL_MACRODEF*)MACRODATAQB$ );
	}
	goto label$49;
	label$50:;
	{
		HADDMACROS( (struct $15FB_RTL_MACRODEF*)MACRODATA$ );
	}
	label$49:;
	label$48:;
}

void RTLMACROMODEND( void )
{
	label$51:;
	label$52:;
}

__attribute__(( constructor )) static void fb_ctor__rtlzmacro( void )
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

static void HADDMACRO( struct $15FB_RTL_MACRODEF* MACDEF$1 )
{
	label$10:;
	int64 ADDBODY$1;
	ADDBODY$1 = -1ll;
	$15FB_DEFINE_FLAGS FLAGS$1;
	FLAGS$1 = 0ll;
	struct $11FB_DEFPARAM* PARAMHEAD$1;
	__builtin_memset( &PARAMHEAD$1, 0, 8ll );
	struct $11FB_DEFPARAM* LASTPARAM$1;
	__builtin_memset( &LASTPARAM$1, 0, 8ll );
	{
		int64 I$2;
		I$2 = 0ll;
		int64 TMP$178$2;
		TMP$178$2 = *(int64*)((uint8*)MACDEF$1 + 16ll) + -1ll;
		goto label$12;
		label$15:;
		{
			struct $11FB_DEFPARAM* vr$6 = SYMBADDDEFINEPARAM( LASTPARAM$1, *(uint8**)((uint8*)((uint8*)MACDEF$1 + (I$2 << 3ll)) + 24ll) );
			LASTPARAM$1 = vr$6;
			if( PARAMHEAD$1 != (struct $11FB_DEFPARAM*)0ull ) goto label$17;
			{
				PARAMHEAD$1 = LASTPARAM$1;
			}
			label$17:;
			label$16:;
		}
		label$13:;
		I$2 = I$2 + 1ll;
		label$12:;
		if( I$2 <= TMP$178$2 ) goto label$15;
		label$14:;
	}
	if( (*(int64*)((uint8*)MACDEF$1 + 8ll) & 16ll) == 0ll ) goto label$19;
	{
		if( *(int64*)((uint8*)&ENV$ + 288ll) != 0ll ) goto label$21;
		{
			ADDBODY$1 = 0ll;
		}
		label$21:;
		label$20:;
	}
	label$19:;
	label$18:;
	if( (*(int64*)((uint8*)MACDEF$1 + 8ll) & 8192ll) == 0ll ) goto label$23;
	{
		if( *(int64*)((uint8*)&ENV$ + 208ll) != 1ll ) goto label$25;
		{
			ADDBODY$1 = 0ll;
			FLAGS$1 = FLAGS$1 | 2ll;
		}
		label$25:;
		label$24:;
	}
	label$23:;
	label$22:;
	struct $9FB_DEFTOK* TOKHEAD$1;
	__builtin_memset( &TOKHEAD$1, 0, 8ll );
	if( ADDBODY$1 == 0ll ) goto label$27;
	{
		struct $9FB_DEFTOK* TOK$2;
		__builtin_memset( &TOK$2, 0, 8ll );
		struct $17FB_RTL_MACROTOKEN* PTK$2;
		PTK$2 = (struct $17FB_RTL_MACROTOKEN*)((uint8*)MACDEF$1 + 56ll);
		label$28:;
		if( *(int64*)PTK$2 == -1ll ) goto label$29;
		{
			struct $9FB_DEFTOK* vr$27 = SYMBADDDEFINETOK( TOK$2, *($14FB_DEFTOK_TYPE*)PTK$2 );
			TOK$2 = vr$27;
			if( TOKHEAD$1 != (struct $9FB_DEFTOK*)0ull ) goto label$31;
			{
				TOKHEAD$1 = TOK$2;
			}
			label$31:;
			label$30:;
			{
				$14FB_DEFTOK_TYPE TMP$179$4;
				TMP$179$4 = *($14FB_DEFTOK_TYPE*)PTK$2;
				if( TMP$179$4 == 0ll ) goto label$34;
				label$35:;
				if( TMP$179$4 != 1ll ) goto label$33;
				label$34:;
				{
					*(int64*)((uint8*)TOK$2 + 8ll) = *(int64*)((uint8*)PTK$2 + 8ll);
				}
				goto label$32;
				label$33:;
				if( TMP$179$4 != 2ll ) goto label$36;
				label$37:;
				{
					ZSTRASSIGN( (uint8**)((uint8*)TOK$2 + 8ll), *(uint8**)((uint8*)PTK$2 + 8ll) );
				}
				label$36:;
				label$32:;
			}
			PTK$2 = (struct $17FB_RTL_MACROTOKEN*)((uint8*)PTK$2 + 16ll);
		}
		goto label$28;
		label$29:;
	}
	label$27:;
	label$26:;
	SYMBADDDEFINEMACRO( *(uint8**)MACDEF$1, TOKHEAD$1, *(int64*)((uint8*)MACDEF$1 + 16ll), PARAMHEAD$1, FLAGS$1 );
	label$11:;
}

static void HADDMACROS( struct $15FB_RTL_MACRODEF* MACDEF$1 )
{
	label$38:;
	label$40:;
	if( *(uint8**)MACDEF$1 == (uint8*)0ull ) goto label$41;
	{
		int64 ADD_MACRO$2;
		ADD_MACRO$2 = -1ll;
		if( (*(int64*)((uint8*)MACDEF$1 + 8ll) & 32768ll) == 0ll ) goto label$43;
		{
			int64 vr$5 = FBIS64BIT(  );
			ADD_MACRO$2 = ADD_MACRO$2 & ~vr$5;
		}
		goto label$42;
		label$43:;
		if( (*(int64*)((uint8*)MACDEF$1 + 8ll) & 65536ll) == 0ll ) goto label$44;
		{
			int64 vr$11 = FBIS64BIT(  );
			ADD_MACRO$2 = ADD_MACRO$2 & vr$11;
		}
		label$44:;
		label$42:;
		if( ADD_MACRO$2 == 0ll ) goto label$46;
		{
			HADDMACRO( MACDEF$1 );
		}
		label$46:;
		label$45:;
		MACDEF$1 = (struct $15FB_RTL_MACRODEF*)((uint8*)MACDEF$1 + 248ll);
	}
	goto label$40;
	label$41:;
	label$39:;
}

// Total compilation time: 0.02902591868769377 seconds.
