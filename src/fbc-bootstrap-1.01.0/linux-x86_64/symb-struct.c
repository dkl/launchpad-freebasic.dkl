// Compilation of FreeBASIC-1.01.0-source/src/compiler/symb-struct.bas started at 16:30:15 on 02-28-2015

typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
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
struct $16__FB_ARRAYDIMTB$ {
	int64 ELEMENTS;
	int64 LBOUND;
	int64 UBOUND;
};
__FB_STATIC_ASSERT( sizeof( struct $16__FB_ARRAYDIMTB$ ) == 24 );
struct $7FBARRAYI10FBARRAYDIME {
	struct $10FBARRAYDIM* DATA;
	struct $10FBARRAYDIM* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYI10FBARRAYDIME ) == 232 );
struct $18SYMBDEFAULTMEMBERS {
	struct $8FBSYMBOL* DEFCTOR;
	struct $8FBSYMBOL* DTOR;
	struct $8FBSYMBOL* COPYCTOR;
	struct $8FBSYMBOL* COPYCTORCONST;
	struct $8FBSYMBOL* COPYLETOPCONST;
};
__FB_STATIC_ASSERT( sizeof( struct $18SYMBDEFAULTMEMBERS ) == 40 );
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
void free( void* );
void* memset( void*, int32, uint64 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__symbzstruct( void ) __attribute__(( constructor ));
void HASHINIT( struct $5THASH*, int64, int64 );
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRREPORT( int64, int64, uint8* );
int64 FBIS64BIT( void );
int64 FBGETCPUFAMILY( void );
struct $7ASTNODE* ASTBUILDARRAYDESCINITREE( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $8FBSYMBOL* SYMBADDARRAYDESCRIPTORTYPE( int64, int64, struct $8FBSYMBOL* );
void SYMBVARINITFIELDS( struct $8FBSYMBOL* );
void SYMBVARINITARRAYDIMENSIONS( struct $8FBSYMBOL*, int64, struct $7FBARRAYI10FBARRAYDIME* );
int64 TYPECALCNATURALALIGN( int64, struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBADDFIELD( struct $8FBSYMBOL*, uint8*, int64, struct $7FBARRAYI10FBARRAYDIME*, int64, struct $8FBSYMBOL*, int64, int64, int64 );
void SYMBDELNAMESPACEMEMBERS( struct $8FBSYMBOL*, int64 );
typedef int64 $10FB_SYMBOPT;
struct $8FBSYMBOL* SYMBNEWSYMBOL( $10FB_SYMBOPT, struct $8FBSYMBOL*, struct $10FBSYMBOLTB*, struct $8FBHASHTB*, $12FB_SYMBCLASS, uint8*, uint8*, int64, struct $8FBSYMBOL*, $13FB_SYMBATTRIB );
void SYMBFREESYMBOL( struct $8FBSYMBOL* );
int64 SYMBCALCLEN( int64, struct $8FBSYMBOL* );
void SYMBCHECKFWDREF( struct $8FBSYMBOL* );
int64 SYMBNAMESPACEIMPORTEX( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
void SYMBNESTBEGIN( struct $8FBSYMBOL*, int64 );
void SYMBNESTEND( int64 );
void SYMBUDTALLOCEXT( struct $8FBSYMBOL* );
void SYMBUDTDECLAREDEFAULTMEMBERS( struct $18SYMBDEFAULTMEMBERS*, struct $8FBSYMBOL* );
void SYMBUDTIMPLEMENTDEFAULTMEMBERS( struct $18SYMBDEFAULTMEMBERS*, struct $8FBSYMBOL* );
int64 SYMBCOMPISTRIVIAL( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBGETCOMPCTORHEAD( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBGETCOMPDTOR( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBUDTGETFIRSTFIELD( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBUDTGETNEXTFIELD( struct $8FBSYMBOL* );
static int64 HCALCPADDING( int64, int64, int64, struct $8FBSYMBOL* );
static int64 HCHECKUDTSIZE( uint64, uint64, uint64 );
static int64 HGETRETURNTYPE( struct $8FBSYMBOL* );
static struct $8FBSYMBOL* HSKIPTOFIELD( struct $8FBSYMBOL* );
static struct $8FBSYMBOL* HFINDCOMMONPARENT( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
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
struct $5TPOOL {
	int64 CHUNKS;
	int64 CHUNKSIZE;
	struct $5TLIST* CHUNKTB;
};
__FB_STATIC_ASSERT( sizeof( struct $5TPOOL ) == 24 );
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

struct $8FBSYMBOL* SYMBSTRUCTBEGIN( struct $10FBSYMBOLTB* SYMTB$1, struct $8FBHASHTB* HASHTB$1, struct $8FBSYMBOL* PARENT$1, uint8* ID$1, uint8* ID_ALIAS$1, int64 ISUNION$1, int64 ALIGN$1, struct $8FBSYMBOL* BASE_$1, int64 ATTRIB$1, int64 OPTIONS$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$10:;
	struct $8FBSYMBOL* S$1;
	fb$result$1 = (struct $8FBSYMBOL*)0ull;
	if( ID_ALIAS$1 != (uint8*)0ull ) goto label$13;
	{
		if( *(int64*)((uint8*)&PARSER$ + 192ll) == 0ll ) goto label$15;
		{
			ID_ALIAS$1 = ID$1;
		}
		label$15:;
		label$14:;
	}
	label$13:;
	label$12:;
	struct $8FBSYMBOL* vr$4 = SYMBNEWSYMBOL( OPTIONS$1 | 32ll, (struct $8FBSYMBOL*)0ull, SYMTB$1, HASHTB$1, 10ll, ID$1, ID_ALIAS$1, 18ll, (struct $8FBSYMBOL*)0ull, ATTRIB$1 );
	S$1 = vr$4;
	if( S$1 != (struct $8FBSYMBOL*)0ull ) goto label$17;
	{
		goto label$11;
	}
	label$17:;
	label$16:;
	*(int16*)((uint8*)S$1 + 200ll) = (int16)0;
	if( ISUNION$1 == 0ll ) goto label$19;
	{
		*(int16*)((uint8*)S$1 + 200ll) = (int16)((int64)*(int16*)((uint8*)S$1 + 200ll) | 1ll);
	}
	label$19:;
	label$18:;
	*(struct $8FBSYMBOL**)((uint8*)S$1 + 88ll) = S$1;
	*(struct $8FBSYMBOL**)((uint8*)S$1 + 96ll) = (struct $8FBSYMBOL*)0ull;
	*(struct $8FBSYMBOL**)((uint8*)S$1 + 104ll) = (struct $8FBSYMBOL*)0ull;
	if( PARENT$1 != (struct $8FBSYMBOL*)0ull ) goto label$21;
	{
		*(struct $8FBSYMBOL**)((uint8*)S$1 + 112ll) = S$1;
		*(struct $8FBHASHTB**)((uint8*)S$1 + 144ll) = (struct $8FBHASHTB*)0ull;
		*(struct $8FBHASHTB**)((uint8*)S$1 + 152ll) = (struct $8FBHASHTB*)0ull;
		{
			HASHINIT( (struct $5THASH*)((uint8*)S$1 + 120ll), 16ll, 0ll );
		}
		goto label$22;
		label$23:;
		{
			memset( (void*)((uint8*)S$1 + 120ll), 0, 24ull );
		}
		label$22:;
	}
	goto label$20;
	label$21:;
	{
		*(struct $8FBSYMBOL**)((uint8*)S$1 + 176ll) = PARENT$1;
		*(int16*)((uint8*)S$1 + 200ll) = (int16)((int64)*(int16*)((uint8*)S$1 + 200ll) | 2ll);
	}
	label$20:;
	*(struct $13FBNAMESPC_EXT**)((uint8*)S$1 + 160ll) = (struct $13FBNAMESPC_EXT*)0ull;
	*(int64*)((uint8*)S$1 + 80ll) = 0ll;
	if( *(int64*)((uint8*)&ENV$ + 272ll) != 3ll ) goto label$25;
	{
		if( ALIGN$1 != 0ll ) goto label$27;
		{
			ALIGN$1 = 1ll;
		}
		label$27:;
		label$26:;
	}
	label$25:;
	label$24:;
	*(uint8*)((uint8*)S$1 + 203ll) = (uint8)ALIGN$1;
	*(int64*)((uint8*)S$1 + 184ll) = 1ll;
	*(uint8*)((uint8*)S$1 + 202ll) = (uint8)0u;
	*(int64*)((uint8*)S$1 + 192ll) = 0ll;
	*($11FB_DATATYPE*)((uint8*)S$1 + 208ll) = 2147483648ll;
	*(int64*)((uint8*)S$1 + 216ll) = -1ll;
	*(struct $12FB_STRUCTEXT**)((uint8*)S$1 + 224ll) = (struct $12FB_STRUCTEXT*)0ull;
	if( BASE_$1 == (struct $8FBSYMBOL*)0ull ) goto label$29;
	{
		static struct $10FBARRAYDIM DTB$2[1];
		struct $8FBARRAY1I10FBARRAYDIME {
			struct $10FBARRAYDIM* DATA;
			struct $10FBARRAYDIM* PTR;
			int64 SIZE;
			int64 ELEMENT_LEN;
			int64 DIMENSIONS;
			struct $16__FB_ARRAYDIMTB$ DIMTB[1];
		};
		__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I10FBARRAYDIME ) == 64 );
		static struct $8FBARRAY1I10FBARRAYDIME tmp$85$2 = { (struct $10FBARRAYDIM*)DTB$2, (struct $10FBARRAYDIM*)DTB$2, 16ll, 16ll, 1ll, { { 1ll, 0ll, 0ll } } };
		struct $8FBSYMBOL* vr$43 = SYMBADDFIELD( S$1, (uint8*)"base$", 0ll, (struct $7FBARRAYI10FBARRAYDIME*)&tmp$85$2, 18ll, BASE_$1, 0ll, 0ll, 0ll );
		*(struct $8FBSYMBOL**)((uint8*)S$1 + 168ll) = vr$43;
		*($12FB_SYMBSTATS*)((uint8*)S$1 + 16ll) = *(int64*)((uint8*)S$1 + 16ll) | 262144ll;
		SYMBNESTBEGIN( S$1, 0ll );
		SYMBNAMESPACEIMPORTEX( BASE_$1, S$1 );
		if( (*(int64*)((uint8*)BASE_$1 + 16ll) & 4194304ll) == 0ll ) goto label$31;
		{
			*($12FB_SYMBSTATS*)((uint8*)S$1 + 16ll) = *(int64*)((uint8*)S$1 + 16ll) | 4194304ll;
			SYMBUDTALLOCEXT( S$1 );
			*(int64*)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)S$1 + 224ll) + 280ll) = *(int64*)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)BASE_$1 + 224ll) + 280ll);
			*(int64*)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)S$1 + 224ll) + 304ll) = *(int64*)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)BASE_$1 + 224ll) + 304ll);
		}
		label$31:;
		label$30:;
	}
	goto label$28;
	label$29:;
	{
		*(struct $8FBSYMBOL**)((uint8*)S$1 + 168ll) = (struct $8FBSYMBOL*)0ull;
	}
	label$28:;
	fb$result$1 = S$1;
	label$11:;
	return fb$result$1;
}

int64 TYPECALCNATURALALIGN( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$32:;
	int64 ALIGN$1;
	{
		int64 TMP$87$2;
		uint64 TMP$88$2;
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$34;
		TMP$87$2 = 22ll;
		goto label$45;
		label$34:;
		TMP$87$2 = DTYPE$1 & 31ll;
		label$45:;
		TMP$88$2 = (uint64)TMP$87$2;
		goto label$36;
		label$37:;
		{
			ALIGN$1 = *(int64*)((uint8*)SUBTYPE$1 + 184ll);
		}
		goto label$35;
		label$38:;
		{
			ALIGN$1 = *(int64*)((uint8*)&ENV$ + 472ll);
		}
		goto label$35;
		label$39:;
		{
			int64 TMP$89$3;
			if( (DTYPE$1 & 480ll) == 0ll ) goto label$40;
			TMP$89$3 = 22ll;
			goto label$46;
			label$40:;
			TMP$89$3 = DTYPE$1 & 31ll;
			label$46:;
			ALIGN$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$89$3 * 56ll)) + 8ll);
		}
		goto label$35;
		label$36:;
		static const void* tmp$90[3ll] = {
			&&label$38,
			&&label$39,
			&&label$37,
		};
		if( TMP$88$2 < 16ll ) goto label$39;
		if( TMP$88$2 > 18ll ) goto label$39;
		goto *tmp$90[TMP$88$2 - 16ll];
		label$35:;
	}
	int64 vr$9 = FBGETCPUFAMILY(  );
	if( ((int64)-(vr$9 == 0ll) & (int64)-(*(int64*)((uint8*)&ENV$ + 216ll) != 0ll)) == 0ll ) goto label$42;
	{
		if( ALIGN$1 != 8ll ) goto label$44;
		{
			ALIGN$1 = 4ll;
		}
		label$44:;
		label$43:;
	}
	label$42:;
	label$41:;
	fb$result$1 = ALIGN$1;
	label$33:;
	return fb$result$1;
}

int64 SYMBCHECKBITFIELD( struct $8FBSYMBOL* UDT$1, int64 DTYPE$1, int64 LGT$1, int64 BITS$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$57:;
	if( ((int64)-(BITS$1 <= 0ll) | (int64)-(BITS$1 > (LGT$1 << 3ll))) == 0ll ) goto label$60;
	{
		fb$result$1 = 0ll;
		goto label$58;
	}
	label$60:;
	label$59:;
	{
		int64 TMP$91$2;
		uint64 TMP$92$2;
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$61;
		TMP$91$2 = 22ll;
		goto label$67;
		label$61:;
		TMP$91$2 = DTYPE$1 & 31ll;
		label$67:;
		TMP$92$2 = (uint64)TMP$91$2;
		goto label$63;
		label$64:;
		{
			fb$result$1 = -1ll;
			goto label$58;
		}
		goto label$62;
		label$65:;
		{
			int64 vr$9 = FBIS64BIT(  );
			fb$result$1 = vr$9;
		}
		goto label$62;
		label$66:;
		{
			fb$result$1 = 0ll;
			goto label$58;
		}
		goto label$62;
		label$63:;
		static const void* tmp$93[13ll] = {
			&&label$64,
			&&label$64,
			&&label$66,
			&&label$64,
			&&label$64,
			&&label$66,
			&&label$64,
			&&label$64,
			&&label$66,
			&&label$64,
			&&label$64,
			&&label$65,
			&&label$65,
		};
		if( TMP$92$2 < 1ll ) goto label$66;
		if( TMP$92$2 > 13ll ) goto label$66;
		goto *tmp$93[TMP$92$2 - 1ll];
		label$62:;
	}
	label$58:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBADDFIELD( struct $8FBSYMBOL* PARENT$1, uint8* ID$1, int64 DIMENSIONS$1, struct $7FBARRAYI10FBARRAYDIME* DTB$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, int64 LGT$1, int64 BITS$1, int64 ATTRIB$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$68:;
	struct $8FBSYMBOL* SYM$1;
	struct $8FBSYMBOL* TAIL$1;
	struct $8FBSYMBOL* BASE_PARENT$1;
	struct $8FBSYMBOL* DESC$1;
	struct $8FBSYMBOL* DESCTYPE$1;
	int64 PAD$1;
	int64 ALLOC_FIELD$1;
	int64 ELEN$1;
	int64 OPTIONS$1;
	int64 OFFSET$1;
	fb$result$1 = (struct $8FBSYMBOL*)0ull;
	DESC$1 = (struct $8FBSYMBOL*)0ull;
	if( LGT$1 > 0ll ) goto label$71;
	{
		int64 vr$2 = SYMBCALCLEN( DTYPE$1, SUBTYPE$1 );
		LGT$1 = vr$2;
	}
	label$71:;
	label$70:;
	if( (ATTRIB$1 & 4ll) == 0ll ) goto label$73;
	{
		struct $10FBARRAYDIM EMPTYDTB$2[1];
		__builtin_memset( (struct $10FBARRAYDIM*)EMPTYDTB$2, 0, 16ll );
		struct $8FBARRAY1I10FBARRAYDIME {
			struct $10FBARRAYDIM* DATA;
			struct $10FBARRAYDIM* PTR;
			int64 SIZE;
			int64 ELEMENT_LEN;
			int64 DIMENSIONS;
			struct $16__FB_ARRAYDIMTB$ DIMTB[1];
		};
		__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I10FBARRAYDIME ) == 64 );
		struct $8FBARRAY1I10FBARRAYDIME tmp$94$2;
		*(struct $10FBARRAYDIM**)&tmp$94$2 = (struct $10FBARRAYDIM*)EMPTYDTB$2;
		*(struct $10FBARRAYDIM**)((uint8*)&tmp$94$2 + 8ll) = (struct $10FBARRAYDIM*)EMPTYDTB$2;
		*(int64*)((uint8*)&tmp$94$2 + 16ll) = 16ll;
		*(int64*)((uint8*)&tmp$94$2 + 24ll) = 16ll;
		*(int64*)((uint8*)&tmp$94$2 + 32ll) = 1ll;
		*(int64*)((uint8*)&tmp$94$2 + 40ll) = 1ll;
		*(int64*)((uint8*)&tmp$94$2 + 48ll) = 0ll;
		*(int64*)((uint8*)&tmp$94$2 + 56ll) = 0ll;
		struct $8FBSYMBOL* vr$22 = SYMBADDARRAYDESCRIPTORTYPE( DIMENSIONS$1, DTYPE$1, SUBTYPE$1 );
		DESCTYPE$1 = vr$22;
		struct $8FBSYMBOL* vr$24 = SYMBADDFIELD( PARENT$1, ID$1, 0ll, (struct $7FBARRAYI10FBARRAYDIME*)&tmp$94$2, 18ll, DESCTYPE$1, 0ll, 0ll, 8388608ll );
		DESC$1 = vr$24;
		OFFSET$1 = *(int64*)((uint8*)DESC$1 + 80ll);
		ALLOC_FIELD$1 = 0ll;
	}
	goto label$72;
	label$73:;
	{
		OFFSET$1 = *(int64*)((uint8*)PARENT$1 + 80ll);
		ALLOC_FIELD$1 = -1ll;
	}
	label$72:;
	if( BITS$1 <= 0ll ) goto label$75;
	{
		*(int16*)((uint8*)PARENT$1 + 200ll) = (int16)((int64)*(int16*)((uint8*)PARENT$1 + 200ll) | 32768ll);
		if( (int64)*(uint8*)((uint8*)PARENT$1 + 202ll) <= 0ll ) goto label$77;
		{
			TAIL$1 = *(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 104ll);
			label$78:;
			if( (int64)-(*(int64*)TAIL$1 == 12ll) != 0ll ) goto label$79;
			{
				TAIL$1 = *(struct $8FBSYMBOL**)((uint8*)TAIL$1 + 288ll);
			}
			goto label$78;
			label$79:;
			if( ((int64)*(uint8*)((uint8*)PARENT$1 + 202ll) + BITS$1) <= (*(int64*)((uint8*)TAIL$1 + 72ll) << 3ll) ) goto label$81;
			{
				*(uint8*)((uint8*)PARENT$1 + 202ll) = (uint8)0u;
			}
			goto label$80;
			label$81:;
			{
				if( LGT$1 == *(int64*)((uint8*)TAIL$1 + 72ll) ) goto label$83;
				{
					DTYPE$1 = *(int64*)((uint8*)TAIL$1 + 48ll) & 511ll;
					LGT$1 = *(int64*)((uint8*)TAIL$1 + 72ll);
				}
				label$83:;
				label$82:;
				OFFSET$1 = *(int64*)((uint8*)TAIL$1 + 80ll);
				ALLOC_FIELD$1 = 0ll;
			}
			label$80:;
		}
		label$77:;
		label$76:;
	}
	goto label$74;
	label$75:;
	{
		*(uint8*)((uint8*)PARENT$1 + 202ll) = (uint8)0u;
	}
	label$74:;
	if( ALLOC_FIELD$1 == 0ll ) goto label$85;
	{
		int64 vr$58 = HCALCPADDING( OFFSET$1, (int64)*(uint8*)((uint8*)PARENT$1 + 203ll), DTYPE$1, SUBTYPE$1 );
		PAD$1 = vr$58;
		if( PAD$1 <= 0ll ) goto label$87;
		{
			if( BITS$1 <= 0ll ) goto label$89;
			{
				if( *(int64*)((uint8*)&ENV$ + 376ll) != 0ll ) goto label$91;
				{
					if( BITS$1 > (PAD$1 << 3ll) ) goto label$93;
					{
						LGT$1 = PAD$1;
						PAD$1 = 0ll;
						{
							if( LGT$1 != 1ll ) goto label$95;
							label$96:;
							{
								int64 TMP$95$8;
								if( (DTYPE$1 & 480ll) == 0ll ) goto label$97;
								TMP$95$8 = 22ll;
								goto label$148;
								label$97:;
								TMP$95$8 = DTYPE$1 & 31ll;
								label$148:;
								if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$95$8 * 56ll)) + 16ll) == 0ll ) goto label$99;
								{
									DTYPE$1 = 1ll;
								}
								goto label$98;
								label$99:;
								{
									DTYPE$1 = 2ll;
								}
								label$98:;
							}
							goto label$94;
							label$95:;
							if( LGT$1 != 2ll ) goto label$100;
							label$101:;
							{
								int64 TMP$96$8;
								if( (DTYPE$1 & 480ll) == 0ll ) goto label$102;
								TMP$96$8 = 22ll;
								goto label$149;
								label$102:;
								TMP$96$8 = DTYPE$1 & 31ll;
								label$149:;
								if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$96$8 * 56ll)) + 16ll) == 0ll ) goto label$104;
								{
									DTYPE$1 = 4ll;
								}
								goto label$103;
								label$104:;
								{
									DTYPE$1 = 5ll;
								}
								label$103:;
							}
							label$100:;
							label$94:;
						}
					}
					label$93:;
					label$92:;
				}
				label$91:;
				label$90:;
			}
			label$89:;
			label$88:;
		}
		label$87:;
		label$86:;
		int64 vr$76 = HCHECKUDTSIZE( (uint64)OFFSET$1, (uint64)LGT$1, (uint64)PAD$1 );
		if( vr$76 == 0ll ) goto label$106;
		{
			OFFSET$1 = OFFSET$1 + PAD$1;
		}
		goto label$105;
		label$106:;
		{
			ALLOC_FIELD$1 = 0ll;
		}
		label$105:;
		int64 vr$79 = TYPECALCNATURALALIGN( DTYPE$1, SUBTYPE$1 );
		ELEN$1 = vr$79;
		if( ELEN$1 <= *(int64*)((uint8*)PARENT$1 + 184ll) ) goto label$108;
		{
			*(int64*)((uint8*)PARENT$1 + 184ll) = ELEN$1;
		}
		label$108:;
		label$107:;
	}
	label$85:;
	label$84:;
	BASE_PARENT$1 = PARENT$1;
	label$109:;
	if( ((int64)*(int16*)((uint8*)BASE_PARENT$1 + 200ll) & 2ll) == 0ll ) goto label$110;
	{
		BASE_PARENT$1 = *(struct $8FBSYMBOL**)((uint8*)BASE_PARENT$1 + 176ll);
	}
	goto label$109;
	label$110:;
	ATTRIB$1 = ATTRIB$1 | (*(int64*)((uint8*)PARENT$1 + 8ll) & 128ll);
	OPTIONS$1 = 0ll;
	if( (ATTRIB$1 & 8388608ll) != 0ll ) goto label$112;
	{
		OPTIONS$1 = 32ll;
	}
	label$112:;
	label$111:;
	struct $8FBSYMBOL* vr$97 = SYMBNEWSYMBOL( OPTIONS$1, (struct $8FBSYMBOL*)0ull, (struct $10FBSYMBOLTB*)((uint8*)PARENT$1 + 88ll), (struct $8FBHASHTB*)((uint8*)BASE_PARENT$1 + 112ll), 12ll, ID$1, (uint8*)0ull, DTYPE$1, SUBTYPE$1, ATTRIB$1 );
	SYM$1 = vr$97;
	if( SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$114;
	{
		goto label$69;
	}
	label$114:;
	label$113:;
	*(int64*)((uint8*)SYM$1 + 72ll) = LGT$1;
	*(int64*)((uint8*)SYM$1 + 80ll) = OFFSET$1;
	SYMBVARINITFIELDS( SYM$1 );
	SYMBVARINITARRAYDIMENSIONS( SYM$1, DIMENSIONS$1, *(struct $7FBARRAYI10FBARRAYDIME**)&DTB$1 );
	if( DESC$1 == (struct $8FBSYMBOL*)0ull ) goto label$116;
	{
		*(struct $8FBSYMBOL**)((uint8*)SYM$1 + 128ll) = DESC$1;
		*(struct $8FBSYMBOL**)((uint8*)SYM$1 + 136ll) = *(struct $8FBSYMBOL**)((uint8*)DESC$1 + 56ll);
		*(struct $8FBSYMBOL**)((uint8*)DESC$1 + 144ll) = SYM$1;
		struct $7ASTNODE* vr$106 = ASTBUILDARRAYDESCINITREE( DESC$1, SYM$1, (struct $7ASTNODE*)0ull );
		*(struct $7ASTNODE**)((uint8*)DESC$1 + 88ll) = vr$106;
	}
	label$116:;
	label$115:;
	*(int64*)((uint8*)SYM$1 + 176ll) = (int64)*(uint8*)((uint8*)PARENT$1 + 202ll);
	*(int64*)((uint8*)SYM$1 + 184ll) = BITS$1;
	LGT$1 = LGT$1 * *(int64*)((uint8*)SYM$1 + 120ll);
	if( (ATTRIB$1 & 4ll) == 0ll ) goto label$118;
	{
		if( ((int64)*(int16*)((uint8*)PARENT$1 + 200ll) & 3ll) == 0ll ) goto label$120;
		{
			ERRREPORT( 161ll, 0ll, (uint8*)0ull );
		}
		goto label$119;
		label$120:;
		{
			*(int16*)((uint8*)PARENT$1 + 200ll) = (int16)((int64)*(int16*)((uint8*)PARENT$1 + 200ll) | 8ll);
			*(int16*)((uint8*)PARENT$1 + 200ll) = (int16)((int64)*(int16*)((uint8*)PARENT$1 + 200ll) | 16ll);
			*(int16*)((uint8*)PARENT$1 + 200ll) = (int16)((int64)*(int16*)((uint8*)PARENT$1 + 200ll) | 4ll);
		}
		label$119:;
	}
	goto label$117;
	label$118:;
	{
		{
			int64 TMP$97$3;
			TMP$97$3 = DTYPE$1 & 511ll;
			if( TMP$97$3 != 16ll ) goto label$122;
			label$123:;
			{
				if( ((int64)*(int16*)((uint8*)PARENT$1 + 200ll) & 3ll) == 0ll ) goto label$125;
				{
					ERRREPORT( 160ll, 0ll, (uint8*)0ull );
				}
				goto label$124;
				label$125:;
				{
					*(int16*)((uint8*)PARENT$1 + 200ll) = (int16)((int64)*(int16*)((uint8*)PARENT$1 + 200ll) | 8ll);
					*(int16*)((uint8*)PARENT$1 + 200ll) = (int16)((int64)*(int16*)((uint8*)PARENT$1 + 200ll) | 16ll);
					*(int16*)((uint8*)PARENT$1 + 200ll) = (int16)((int64)*(int16*)((uint8*)PARENT$1 + 200ll) | 4ll);
				}
				label$124:;
			}
			goto label$121;
			label$122:;
			if( TMP$97$3 != 18ll ) goto label$126;
			label$127:;
			{
				if( ((int64)*(int16*)((uint8*)SUBTYPE$1 + 200ll) & 4ll) == 0ll ) goto label$129;
				{
					*(int16*)((uint8*)BASE_PARENT$1 + 200ll) = (int16)((int64)*(int16*)((uint8*)BASE_PARENT$1 + 200ll) | 4ll);
				}
				label$129:;
				label$128:;
				struct $8FBSYMBOL* vr$166 = SYMBGETCOMPCTORHEAD( SUBTYPE$1 );
				if( vr$166 == (struct $8FBSYMBOL*)0ull ) goto label$131;
				{
					if( ((int64)*(int16*)((uint8*)PARENT$1 + 200ll) & 3ll) == 0ll ) goto label$133;
					{
						ERRREPORT( 162ll, 0ll, (uint8*)0ull );
					}
					goto label$132;
					label$133:;
					{
						*(int16*)((uint8*)PARENT$1 + 200ll) = (int16)((int64)*(int16*)((uint8*)PARENT$1 + 200ll) | 8ll);
					}
					label$132:;
				}
				label$131:;
				label$130:;
				struct $8FBSYMBOL* vr$177 = SYMBGETCOMPDTOR( SUBTYPE$1 );
				if( vr$177 == (struct $8FBSYMBOL*)0ull ) goto label$135;
				{
					if( ((int64)*(int16*)((uint8*)PARENT$1 + 200ll) & 3ll) == 0ll ) goto label$137;
					{
						ERRREPORT( 163ll, 0ll, (uint8*)0ull );
					}
					goto label$136;
					label$137:;
					{
						*(int16*)((uint8*)PARENT$1 + 200ll) = (int16)((int64)*(int16*)((uint8*)PARENT$1 + 200ll) | 16ll);
					}
					label$136:;
				}
				label$135:;
				label$134:;
			}
			label$126:;
			label$121:;
		}
	}
	label$117:;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$139;
	{
		*(int16*)((uint8*)BASE_PARENT$1 + 200ll) = (int16)((int64)*(int16*)((uint8*)BASE_PARENT$1 + 200ll) | 4ll);
	}
	label$139:;
	label$138:;
	if( ((int64)*(int16*)((uint8*)PARENT$1 + 200ll) & 1ll) == 0ll ) goto label$141;
	{
		*($12FB_SYMBSTATS*)((uint8*)SYM$1 + 16ll) = *(int64*)((uint8*)SYM$1 + 16ll) | 16777216ll;
		if( ALLOC_FIELD$1 == 0ll ) goto label$143;
		{
			if( *(int64*)((uint8*)PARENT$1 + 72ll) >= LGT$1 ) goto label$145;
			{
				*(int64*)((uint8*)PARENT$1 + 72ll) = LGT$1;
			}
			label$145:;
			label$144:;
		}
		label$143:;
		label$142:;
	}
	goto label$140;
	label$141:;
	{
		if( ALLOC_FIELD$1 == 0ll ) goto label$147;
		{
			OFFSET$1 = OFFSET$1 + LGT$1;
			*(int64*)((uint8*)PARENT$1 + 80ll) = OFFSET$1;
			*(int64*)((uint8*)PARENT$1 + 72ll) = OFFSET$1;
		}
		label$147:;
		label$146:;
		*(uint8*)((uint8*)PARENT$1 + 202ll) = (uint8)((int64)*(uint8*)((uint8*)PARENT$1 + 202ll) + BITS$1);
	}
	label$140:;
	*(struct $8FBSYMBOL**)((uint8*)SYM$1 + 280ll) = PARENT$1;
	fb$result$1 = SYM$1;
	label$69:;
	return fb$result$1;
}

void SYMBINSERTINNERUDT( struct $8FBSYMBOL* PARENT$1, struct $8FBSYMBOL* INNER$1 )
{
	label$150:;
	struct $8FBSYMBOL* FLD$1;
	struct $10FBSYMBOLTB* SYMTB$1;
	int64 PAD$1;
	if( (int64)-(((int64)*(int16*)((uint8*)PARENT$1 + 200ll) & 1ll) != 0ll) != 0ll ) goto label$153;
	{
		int64 vr$8 = HCALCPADDING( *(int64*)((uint8*)PARENT$1 + 80ll), (int64)*(uint8*)((uint8*)PARENT$1 + 203ll), 18ll, INNER$1 );
		PAD$1 = vr$8;
		int64 vr$10 = HCHECKUDTSIZE( *(uint64*)((uint8*)PARENT$1 + 80ll), 0ull, (uint64)PAD$1 );
		if( vr$10 == 0ll ) goto label$155;
		{
			*(int64*)((uint8*)PARENT$1 + 80ll) = *(int64*)((uint8*)PARENT$1 + 80ll) + PAD$1;
		}
		label$155:;
		label$154:;
	}
	label$153:;
	label$152:;
	FLD$1 = *(struct $8FBSYMBOL**)((uint8*)INNER$1 + 96ll);
	if( FLD$1 != (struct $8FBSYMBOL*)0ull ) goto label$157;
	{
		goto label$151;
	}
	label$157:;
	label$156:;
	*(struct $8FBSYMBOL**)((uint8*)FLD$1 + 288ll) = *(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 104ll);
	if( *(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 104ll) != (struct $8FBSYMBOL*)0ull ) goto label$159;
	{
		*(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 96ll) = FLD$1;
	}
	goto label$158;
	label$159:;
	{
		*(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 104ll) + 296ll) = FLD$1;
	}
	label$158:;
	SYMTB$1 = (struct $10FBSYMBOLTB*)((uint8*)PARENT$1 + 88ll);
	label$160:;
	if( FLD$1 == (struct $8FBSYMBOL*)0ull ) goto label$161;
	{
		*(struct $10FBSYMBOLTB**)((uint8*)FLD$1 + 272ll) = SYMTB$1;
		if( ((int64)*(int16*)((uint8*)PARENT$1 + 200ll) & 1ll) == 0ll ) goto label$163;
		{
			*($12FB_SYMBSTATS*)((uint8*)FLD$1 + 16ll) = *(int64*)((uint8*)FLD$1 + 16ll) | 16777216ll;
		}
		goto label$162;
		label$163:;
		{
			*(int64*)((uint8*)FLD$1 + 80ll) = *(int64*)((uint8*)FLD$1 + 80ll) + *(int64*)((uint8*)PARENT$1 + 80ll);
		}
		label$162:;
		FLD$1 = *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 296ll);
	}
	goto label$160;
	label$161:;
	*(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 104ll) = *(struct $8FBSYMBOL**)((uint8*)INNER$1 + 104ll);
	if( (int64)-(((int64)*(int16*)((uint8*)PARENT$1 + 200ll) & 1ll) != 0ll) != 0ll ) goto label$165;
	{
		*(int64*)((uint8*)PARENT$1 + 80ll) = *(int64*)((uint8*)PARENT$1 + 80ll) + *(int64*)((uint8*)INNER$1 + 72ll);
		*(int64*)((uint8*)PARENT$1 + 72ll) = *(int64*)((uint8*)PARENT$1 + 80ll);
	}
	goto label$164;
	label$165:;
	{
		*(int64*)((uint8*)PARENT$1 + 80ll) = 0ll;
		if( *(int64*)((uint8*)INNER$1 + 72ll) <= *(int64*)((uint8*)PARENT$1 + 72ll) ) goto label$167;
		{
			*(int64*)((uint8*)PARENT$1 + 72ll) = *(int64*)((uint8*)INNER$1 + 72ll);
		}
		label$167:;
		label$166:;
	}
	label$164:;
	if( *(int64*)((uint8*)INNER$1 + 184ll) <= *(int64*)((uint8*)PARENT$1 + 184ll) ) goto label$169;
	{
		*(int64*)((uint8*)PARENT$1 + 184ll) = *(int64*)((uint8*)INNER$1 + 184ll);
	}
	label$169:;
	label$168:;
	*(uint8*)((uint8*)PARENT$1 + 202ll) = (uint8)0u;
	*(struct $8FBSYMBOL**)((uint8*)INNER$1 + 96ll) = (struct $8FBSYMBOL*)0ull;
	*(struct $8FBSYMBOL**)((uint8*)INNER$1 + 104ll) = (struct $8FBSYMBOL*)0ull;
	*(struct $8FBSYMBOL**)((uint8*)INNER$1 + 280ll) = PARENT$1;
	label$151:;
}

void SYMBSTRUCTEND( struct $8FBSYMBOL* SYM$1, int64 ISNESTED$1 )
{
	label$220:;
	struct $18SYMBDEFAULTMEMBERS DEFAULTMEMBERS$1;
	int64 PAD$1;
	if( ISNESTED$1 == 0ll ) goto label$223;
	{
		SYMBNESTEND( 0ll );
	}
	label$223:;
	label$222:;
	*(int64*)((uint8*)SYM$1 + 192ll) = *(int64*)((uint8*)SYM$1 + 72ll);
	int64 vr$6 = HCALCPADDING( *(int64*)((uint8*)SYM$1 + 72ll), (int64)*(uint8*)((uint8*)SYM$1 + 203ll), 18ll, SYM$1 );
	PAD$1 = vr$6;
	int64 vr$8 = HCHECKUDTSIZE( *(uint64*)((uint8*)SYM$1 + 72ll), 0ull, (uint64)PAD$1 );
	if( vr$8 == 0ll ) goto label$225;
	{
		*(int64*)((uint8*)SYM$1 + 72ll) = *(int64*)((uint8*)SYM$1 + 72ll) + PAD$1;
	}
	label$225:;
	label$224:;
	SYMBUDTDECLAREDEFAULTMEMBERS( &DEFAULTMEMBERS$1, SYM$1 );
	int64 vr$14 = HGETRETURNTYPE( SYM$1 );
	*($11FB_DATATYPE*)((uint8*)SYM$1 + 208ll) = vr$14;
	SYMBUDTIMPLEMENTDEFAULTMEMBERS( &DEFAULTMEMBERS$1, SYM$1 );
	if( *(int64*)((uint8*)&SYMB$ + 197320ll) <= 0ll ) goto label$227;
	{
		SYMBCHECKFWDREF( SYM$1 );
	}
	label$227:;
	label$226:;
	label$221:;
}

void SYMBDELSTRUCT( struct $8FBSYMBOL* S$1 )
{
	label$228:;
	SYMBDELNAMESPACEMEMBERS( S$1, ~(int64)-(((int64)*(int16*)((uint8*)S$1 + 200ll) & 2ll) != 0ll) );
	if( *(struct $12FB_STRUCTEXT**)((uint8*)S$1 + 224ll) == (struct $12FB_STRUCTEXT*)0ull ) goto label$231;
	{
		free( *(void**)((uint8*)S$1 + 224ll) );
		*(struct $12FB_STRUCTEXT**)((uint8*)S$1 + 224ll) = (struct $12FB_STRUCTEXT*)0ull;
	}
	label$231:;
	label$230:;
	SYMBFREESYMBOL( S$1 );
	label$229:;
}

struct $8FBSYMBOL* SYMBUDTGETFIRSTFIELD( struct $8FBSYMBOL* PARENT$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$238:;
	struct $8FBSYMBOL* vr$2 = HSKIPTOFIELD( *(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 96ll) );
	fb$result$1 = vr$2;
	label$239:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBUDTGETNEXTFIELD( struct $8FBSYMBOL* SYM$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$240:;
	struct $8FBSYMBOL* vr$2 = HSKIPTOFIELD( *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 296ll) );
	fb$result$1 = vr$2;
	label$241:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBUDTGETNEXTINITABLEFIELD( struct $8FBSYMBOL* SYM$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$250:;
	struct $8FBSYMBOL* ORIGINAL$1;
	struct $8FBSYMBOL* PARENT$1;
	ORIGINAL$1 = SYM$1;
	label$252:;
	{
		struct $8FBSYMBOL* vr$1 = SYMBUDTGETNEXTFIELD( SYM$1 );
		SYM$1 = vr$1;
		if( SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$256;
		{
			goto label$253;
		}
		label$256:;
		label$255:;
		struct $8FBSYMBOL* vr$3 = HFINDCOMMONPARENT( ORIGINAL$1, SYM$1 );
		PARENT$1 = vr$3;
		if( PARENT$1 != (struct $8FBSYMBOL*)0ull ) goto label$258;
		{
			goto label$253;
		}
		label$258:;
		label$257:;
		if( (int64)-(((int64)*(int16*)((uint8*)PARENT$1 + 200ll) & 1ll) != 0ll) != 0ll ) goto label$260;
		{
			goto label$253;
		}
		label$260:;
		label$259:;
	}
	label$254:;
	goto label$252;
	label$253:;
	fb$result$1 = SYM$1;
	label$251:;
	return fb$result$1;
}

int64 SYMBGETUDTBASELEVEL( struct $8FBSYMBOL* S$1, struct $8FBSYMBOL* BASESYM$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$261:;
	if( ((int64)-(S$1 == (struct $8FBSYMBOL*)0ull) | (int64)-(BASESYM$1 == (struct $8FBSYMBOL*)0ull)) == 0ll ) goto label$264;
	{
		fb$result$1 = 0ll;
		goto label$262;
	}
	label$264:;
	label$263:;
	int64 LEVEL$1;
	LEVEL$1 = 1ll;
	label$265:;
	if( *(struct $8FBSYMBOL**)((uint8*)S$1 + 168ll) == (struct $8FBSYMBOL*)0ull ) goto label$266;
	{
		if( *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)S$1 + 168ll) + 56ll) != BASESYM$1 ) goto label$268;
		{
			fb$result$1 = LEVEL$1;
			goto label$262;
		}
		label$268:;
		label$267:;
		S$1 = *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)S$1 + 168ll) + 56ll);
		LEVEL$1 = LEVEL$1 + 1ll;
	}
	goto label$265;
	label$266:;
	fb$result$1 = 0ll;
	goto label$262;
	label$262:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__symbzstruct( void )
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

static int64 HCALCPADDING( int64 OFS$1, int64 ALIGN$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$47:;
	int64 NATALIGN$1;
	int64 vr$1 = TYPECALCNATURALALIGN( DTYPE$1, SUBTYPE$1 );
	NATALIGN$1 = vr$1;
	if( ALIGN$1 != 0ll ) goto label$50;
	{
		ALIGN$1 = NATALIGN$1;
	}
	goto label$49;
	label$50:;
	{
		if( ALIGN$1 <= NATALIGN$1 ) goto label$52;
		{
			ALIGN$1 = NATALIGN$1;
		}
		label$52:;
		label$51:;
	}
	label$49:;
	fb$result$1 = (ALIGN$1 - (OFS$1 & (ALIGN$1 + -1ll))) & (ALIGN$1 + -1ll);
	label$48:;
	return fb$result$1;
}

static int64 HCHECKUDTSIZE( uint64 UDTLEN$1, uint64 FIELDLEN$1, uint64 FIELDPAD$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$53:;
	uint64 N$1;
	N$1 = UDTLEN$1;
	N$1 = N$1 + FIELDLEN$1;
	N$1 = N$1 + FIELDPAD$1;
	if( N$1 <= 2147483647ull ) goto label$56;
	{
		fb$result$1 = 0ll;
		ERRREPORT( 50ll, 0ll, (uint8*)0ull );
	}
	goto label$55;
	label$56:;
	{
		fb$result$1 = -1ll;
	}
	label$55:;
	label$54:;
	return fb$result$1;
}

static int64 HGETRETURNTYPE( struct $8FBSYMBOL* SYM$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$170:;
	struct $8FBSYMBOL* FLD$1;
	int64 RES$1;
	int64 UNPADLEN$1;
	int64 UNPADLEN64$1;
	int64 vr$1 = SYMBCOMPISTRIVIAL( SYM$1 );
	if( vr$1 != 0ll ) goto label$173;
	{
		fb$result$1 = 50ll;
		goto label$171;
	}
	label$173:;
	label$172:;
	if( *(int64*)((uint8*)&ENV$ + 208ll) != 1ll ) goto label$175;
	{
		fb$result$1 = 18ll;
		goto label$171;
	}
	label$175:;
	label$174:;
	if( (*(int64*)((uint8*)&ENV$ + 448ll) & 16ll) != 0ll ) goto label$177;
	{
		fb$result$1 = 50ll;
		goto label$171;
	}
	label$177:;
	label$176:;
	RES$1 = 0ll;
	UNPADLEN64$1 = *(int64*)((uint8*)SYM$1 + 192ll);
	UNPADLEN$1 = UNPADLEN64$1;
	if( UNPADLEN$1 == UNPADLEN64$1 ) goto label$179;
	{
		fb$result$1 = 18ll;
		goto label$171;
	}
	label$179:;
	label$178:;
	{
		uint64 TMP$98$2;
		TMP$98$2 = (uint64)UNPADLEN$1;
		goto label$181;
		label$182:;
		{
			RES$1 = 1ll;
		}
		goto label$180;
		label$183:;
		{
			RES$1 = 4ll;
		}
		goto label$180;
		label$184:;
		{
			struct $8FBSYMBOL* vr$8 = SYMBUDTGETFIRSTFIELD( SYM$1 );
			FLD$1 = vr$8;
			if( *(int64*)((uint8*)FLD$1 + 72ll) != 2ll ) goto label$186;
			{
				if( *(int64*)((uint8*)SYM$1 + 72ll) < 4ll ) goto label$188;
				{
					RES$1 = 7ll;
				}
				label$188:;
				label$187:;
			}
			label$186:;
			label$185:;
		}
		goto label$180;
		label$189:;
		{
			label$190:;
			{
				struct $8FBSYMBOL* vr$13 = SYMBUDTGETFIRSTFIELD( SYM$1 );
				FLD$1 = vr$13;
				struct $8FBSYMBOL* vr$14 = SYMBUDTGETNEXTFIELD( FLD$1 );
				if( vr$14 == (struct $8FBSYMBOL*)0ull ) goto label$194;
				{
					goto label$191;
				}
				label$194:;
				label$193:;
				if( (*(int64*)((uint8*)FLD$1 + 48ll) & 511ll) != 14ll ) goto label$196;
				{
					RES$1 = 14ll;
				}
				label$196:;
				label$195:;
				if( (*(int64*)((uint8*)FLD$1 + 48ll) & 511ll) == 18ll ) goto label$198;
				{
					goto label$191;
				}
				label$198:;
				label$197:;
				SYM$1 = *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 56ll);
			}
			label$192:;
			goto label$190;
			label$191:;
			if( RES$1 != 0ll ) goto label$200;
			{
				RES$1 = 7ll;
			}
			label$200:;
			label$199:;
		}
		goto label$180;
		label$201:;
		{
			struct $8FBSYMBOL* vr$24 = SYMBUDTGETFIRSTFIELD( SYM$1 );
			FLD$1 = vr$24;
			if( *(int64*)((uint8*)FLD$1 + 72ll) != 4ll ) goto label$203;
			{
				if( *(int64*)((uint8*)SYM$1 + 72ll) < 8ll ) goto label$205;
				{
					RES$1 = 12ll;
				}
				label$205:;
				label$204:;
			}
			label$203:;
			label$202:;
		}
		goto label$180;
		label$206:;
		{
			label$207:;
			{
				struct $8FBSYMBOL* vr$29 = SYMBUDTGETFIRSTFIELD( SYM$1 );
				FLD$1 = vr$29;
				struct $8FBSYMBOL* vr$30 = SYMBUDTGETNEXTFIELD( FLD$1 );
				if( vr$30 == (struct $8FBSYMBOL*)0ull ) goto label$211;
				{
					goto label$208;
				}
				label$211:;
				label$210:;
				if( (*(int64*)((uint8*)FLD$1 + 48ll) & 511ll) != 15ll ) goto label$213;
				{
					RES$1 = 15ll;
				}
				label$213:;
				label$212:;
				if( (*(int64*)((uint8*)FLD$1 + 48ll) & 511ll) == 18ll ) goto label$215;
				{
					goto label$208;
				}
				label$215:;
				label$214:;
				SYM$1 = *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 56ll);
			}
			label$209:;
			goto label$207;
			label$208:;
			if( RES$1 != 0ll ) goto label$217;
			{
				RES$1 = 12ll;
			}
			label$217:;
			label$216:;
		}
		goto label$180;
		label$181:;
		static const void* tmp$99[8ll] = {
			&&label$182,
			&&label$183,
			&&label$184,
			&&label$189,
			&&label$201,
			&&label$201,
			&&label$201,
			&&label$206,
		};
		if( TMP$98$2 < 1ll ) goto label$180;
		if( TMP$98$2 > 8ll ) goto label$180;
		goto *tmp$99[TMP$98$2 - 1ll];
		label$180:;
	}
	if( RES$1 != 0ll ) goto label$219;
	{
		RES$1 = 50ll;
	}
	label$219:;
	label$218:;
	fb$result$1 = RES$1;
	label$171:;
	return fb$result$1;
}

static struct $8FBSYMBOL* HSKIPTOFIELD( struct $8FBSYMBOL* SYM$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$232:;
	label$234:;
	if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$235;
	{
		if( *(int64*)SYM$1 != 12ll ) goto label$237;
		{
			goto label$235;
		}
		label$237:;
		label$236:;
		SYM$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 296ll);
	}
	goto label$234;
	label$235:;
	fb$result$1 = SYM$1;
	label$233:;
	return fb$result$1;
}

static struct $8FBSYMBOL* HFINDCOMMONPARENT( struct $8FBSYMBOL* A$1, struct $8FBSYMBOL* B$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$242:;
	struct $8FBSYMBOL* ORIGINALB$1;
	ORIGINALB$1 = B$1;
	label$244:;
	if( A$1 == (struct $8FBSYMBOL*)0ull ) goto label$245;
	{
		B$1 = ORIGINALB$1;
		label$246:;
		if( B$1 == (struct $8FBSYMBOL*)0ull ) goto label$247;
		{
			if( A$1 != B$1 ) goto label$249;
			{
				fb$result$1 = A$1;
				goto label$243;
			}
			label$249:;
			label$248:;
			B$1 = *(struct $8FBSYMBOL**)((uint8*)B$1 + 280ll);
		}
		goto label$246;
		label$247:;
		A$1 = *(struct $8FBSYMBOL**)((uint8*)A$1 + 280ll);
	}
	goto label$244;
	label$245:;
	fb$result$1 = (struct $8FBSYMBOL*)0ull;
	label$243:;
	return fb$result$1;
}

// Total compilation time: 0.0459958961000666 seconds.
