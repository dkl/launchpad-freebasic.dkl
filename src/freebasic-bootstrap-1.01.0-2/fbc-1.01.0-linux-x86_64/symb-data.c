// Compilation of fbc-1.01.0/src/compiler/symb-data.bas started at 14:16:45 on 02-28-2015

typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
typedef int64 $12FB_DATACLASS;
typedef int64 $11FB_DATATYPE;
struct $16__FB_ARRAYDIMTB$ {
	int64 ELEMENTS;
	int64 LBOUND;
	int64 UBOUND;
};
#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]
__FB_STATIC_ASSERT( sizeof( struct $16__FB_ARRAYDIMTB$ ) == 24 );
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
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__symbzdata( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRREPORT( int64, int64, uint8* );
int64 FBIS64BIT( void );
int64 SYMBPROCHASFWDREFINSIGNATURE( struct $8FBSYMBOL* );
int64 TYPETOSIGNED( int64 );
int64 TYPEHASDTOR( int64, struct $8FBSYMBOL* );
int64 SYMBCOMPISTRIVIAL( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBGETCOMPCTORHEAD( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBGETCOMPDEFCTOR( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBGETCOMPDTOR( struct $8FBSYMBOL* );
$11FB_DATATYPE CLOSESTTYPE( $11FB_DATATYPE, $11FB_DATATYPE, $11FB_DATATYPE );
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
extern int64 SYMB_DTYPEMATCHTB$[15][15];
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
struct $13SYMB_DATATYPE SYMB_DTYPETB$[24] = { { 4ll, 0ll, 0ll, 0ll, 0ll, -1ll, (uint8*)"any" }, { 0ll, 1ll, -1ll, 10ll, 1ll, 0ll, (uint8*)"byte" }, { 0ll, 1ll, 0ll, 15ll, 2ll, 1ll, (uint8*)"ubyte" }, { 0ll, 1ll, 0ll, 0ll, 2ll, 1ll, (uint8*)"zstring" }, { 0ll, 2ll, -1ll, 20ll, 4ll, 2ll, (uint8*)"short" }, { 0ll, 2ll, 0ll, 25ll, 5ll, 3ll, (uint8*)"ushort" }, { 0ll, 2ll, 0ll, 0ll, -1ll, -1ll, (uint8*)"wstring" }, { 0ll, -1ll, -1ll, -1ll, 7ll, -1ll, (uint8*)"integer" }, { 0ll, -1ll, 0ll, -1ll, 8ll, -1ll, (uint8*)"uinteger" }, { 0ll, -1ll, -1ll, 0ll, 7ll, -1ll, (uint8*)"enum" }, { 0ll, 4ll, -1ll, 40ll, 10ll, 4ll, (uint8*)"long" }, { 0ll, 4ll, 0ll, 45ll, 11ll, 5ll, (uint8*)"ulong" }, { 0ll, 8ll, -1ll, 80ll, 12ll, 6ll, (uint8*)"longint" }, { 0ll, 8ll, 0ll, 85ll, 13ll, 7ll, (uint8*)"ulongint" }, { 1ll, 4ll, -1ll, 0ll, 14ll, 8ll, (uint8*)"single" }, { 1ll, 8ll, -1ll, 0ll, 15ll, 9ll, (uint8*)"double" }, { 2ll, -1ll, 0ll, 0ll, 16ll, -1ll, (uint8*)"string" }, { 2ll, 1ll, 0ll, 0ll, 17ll, -1ll, (uint8*)"string" }, { 3ll, 0ll, 0ll, 0ll, 18ll, -1ll, (uint8*)"type" }, { 3ll, 0ll, 0ll, 0ll, 19ll, -1ll, (uint8*)"namepace" }, { 0ll, 0ll, 0ll, 0ll, 8ll, -1ll, (uint8*)"function" }, { 4ll, 0ll, 0ll, 0ll, 0ll, -1ll, (uint8*)"fwdref" }, { 0ll, -1ll, 0ll, 0ll, 8ll, -1ll, (uint8*)"pointer" }, { 0ll, 16ll, 0ll, 0ll, 23ll, -1ll, (uint8*)"xmmword" } };
int64 SYMB_DTYPEMATCHTB$[15][15];
struct $5FBENV ENV$ __attribute__((common));

void SYMBDATAINIT( void )
{
	label$10:;
	int64 vr$0 = FBIS64BIT(  );
	if( vr$0 == 0ll ) goto label$13;
	{
		*(int64*)((uint8*)&ENV$ + 472ll) = 8ll;
		*(int64*)((uint8*)SYMB_DTYPETB$ + 400ll) = 8ll;
		*(int64*)((uint8*)SYMB_DTYPETB$ + 456ll) = 8ll;
		*(int64*)((uint8*)SYMB_DTYPETB$ + 512ll) = 8ll;
		*(int64*)((uint8*)SYMB_DTYPETB$ + 904ll) = 24ll;
		*(int64*)((uint8*)SYMB_DTYPETB$ + 1240ll) = 8ll;
		*(int64*)((uint8*)SYMB_DTYPETB$ + 432ll) = 6ll;
		*(int64*)((uint8*)SYMB_DTYPETB$ + 488ll) = 7ll;
		*(int64*)((uint8*)SYMB_DTYPETB$ + 544ll) = 6ll;
		*(int64*)((uint8*)SYMB_DTYPETB$ + 1272ll) = 7ll;
		*(int64*)((uint8*)SYMB_DTYPETB$ + 416ll) = 81ll;
		*(int64*)((uint8*)SYMB_DTYPETB$ + 472ll) = 86ll;
	}
	goto label$12;
	label$13:;
	{
		*(int64*)((uint8*)&ENV$ + 472ll) = 4ll;
		*(int64*)((uint8*)SYMB_DTYPETB$ + 400ll) = 4ll;
		*(int64*)((uint8*)SYMB_DTYPETB$ + 456ll) = 4ll;
		*(int64*)((uint8*)SYMB_DTYPETB$ + 512ll) = 4ll;
		*(int64*)((uint8*)SYMB_DTYPETB$ + 904ll) = 12ll;
		*(int64*)((uint8*)SYMB_DTYPETB$ + 1240ll) = 4ll;
		*(int64*)((uint8*)SYMB_DTYPETB$ + 432ll) = 4ll;
		*(int64*)((uint8*)SYMB_DTYPETB$ + 488ll) = 5ll;
		*(int64*)((uint8*)SYMB_DTYPETB$ + 544ll) = 4ll;
		*(int64*)((uint8*)SYMB_DTYPETB$ + 1272ll) = 5ll;
		*(int64*)((uint8*)SYMB_DTYPETB$ + 416ll) = 41ll;
		*(int64*)((uint8*)SYMB_DTYPETB$ + 472ll) = 46ll;
	}
	label$12:;
	*($12FB_DATACLASS*)((uint8*)SYMB_DTYPETB$ + 336ll) = *($12FB_DATACLASS*)((uint8*)SYMB_DTYPETB$ + (*(int64*)((uint8*)&ENV$ + 424ll) * 56ll));
	*(int64*)((uint8*)SYMB_DTYPETB$ + 344ll) = *(int64*)(((uint8*)SYMB_DTYPETB$ + (*(int64*)((uint8*)&ENV$ + 424ll) * 56ll)) + 8ll);
	*(int64*)((uint8*)SYMB_DTYPETB$ + 352ll) = *(int64*)(((uint8*)SYMB_DTYPETB$ + (*(int64*)((uint8*)&ENV$ + 424ll) * 56ll)) + 16ll);
	*($11FB_DATATYPE*)((uint8*)SYMB_DTYPETB$ + 368ll) = *($11FB_DATATYPE*)(((uint8*)SYMB_DTYPETB$ + (*(int64*)((uint8*)&ENV$ + 424ll) * 56ll)) + 32ll);
	$11FB_DATATYPE RANK$1[15];
	__builtin_memset( ($11FB_DATATYPE*)RANK$1, 0, 120ll );
	struct $8FBARRAY1I11FB_DATATYPEE {
		$11FB_DATATYPE* DATA;
		$11FB_DATATYPE* PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I11FB_DATATYPEE ) == 64 );
	struct $8FBARRAY1I11FB_DATATYPEE tmp$99$1;
	*($11FB_DATATYPE**)&tmp$99$1 = ($11FB_DATATYPE*)RANK$1;
	*($11FB_DATATYPE**)((uint8*)&tmp$99$1 + 8ll) = ($11FB_DATATYPE*)RANK$1;
	*(int64*)((uint8*)&tmp$99$1 + 16ll) = 120ll;
	*(int64*)((uint8*)&tmp$99$1 + 24ll) = 8ll;
	*(int64*)((uint8*)&tmp$99$1 + 32ll) = 1ll;
	*(int64*)((uint8*)&tmp$99$1 + 40ll) = 15ll;
	*(int64*)((uint8*)&tmp$99$1 + 48ll) = 0ll;
	*(int64*)((uint8*)&tmp$99$1 + 56ll) = 14ll;
	$11FB_DATATYPE DTYPE1$1;
	$11FB_DATATYPE DTYPE2$1;
	int64 I$1;
	int64 J$1;
	{
		DTYPE1$1 = 1ll;
		label$17:;
		{
			{
				DTYPE2$1 = 1ll;
				label$21:;
				{
					*($11FB_DATATYPE*)(((uint8*)RANK$1 + (DTYPE2$1 << 3ll)) + -8ll) = DTYPE2$1;
				}
				label$19:;
				DTYPE2$1 = DTYPE2$1 + 1ll;
				label$18:;
				if( DTYPE2$1 <= 15ll ) goto label$21;
				label$20:;
			}
			{
				I$1 = 0ll;
				label$25:;
				{
					{
						J$1 = I$1 + 1ll;
						goto label$26;
						label$29:;
						{
							$11FB_DATATYPE vr$29 = CLOSESTTYPE( DTYPE1$1, *($11FB_DATATYPE*)((uint8*)RANK$1 + (I$1 << 3ll)), *($11FB_DATATYPE*)((uint8*)RANK$1 + (J$1 << 3ll)) );
							if( vr$29 != *(int64*)((uint8*)RANK$1 + (J$1 << 3ll)) ) goto label$31;
							{
								{
									$11FB_DATATYPE TMP$100$9;
									TMP$100$9 = *($11FB_DATATYPE*)((uint8*)RANK$1 + (I$1 << 3ll));
									*($11FB_DATATYPE*)((uint8*)RANK$1 + (I$1 << 3ll)) = *($11FB_DATATYPE*)((uint8*)RANK$1 + (J$1 << 3ll));
									*($11FB_DATATYPE*)((uint8*)RANK$1 + (J$1 << 3ll)) = TMP$100$9;
								}
							}
							label$31:;
							label$30:;
						}
						label$27:;
						J$1 = J$1 + 1ll;
						label$26:;
						if( J$1 <= 14ll ) goto label$29;
						label$28:;
					}
				}
				label$23:;
				I$1 = I$1 + 1ll;
				label$22:;
				if( I$1 <= 13ll ) goto label$25;
				label$24:;
			}
			{
				I$1 = 0ll;
				label$35:;
				{
					DTYPE2$1 = *($11FB_DATATYPE*)((uint8*)RANK$1 + (I$1 << 3ll));
					*(int64*)(((uint8*)SYMB_DTYPEMATCHTB$ + (((DTYPE1$1 * 15ll) + DTYPE2$1) << 3ll)) + -128ll) = I$1;
				}
				label$33:;
				I$1 = I$1 + 1ll;
				label$32:;
				if( I$1 <= 14ll ) goto label$35;
				label$34:;
			}
		}
		label$15:;
		DTYPE1$1 = DTYPE1$1 + 1ll;
		label$14:;
		if( DTYPE1$1 <= 15ll ) goto label$17;
		label$16:;
	}
	label$11:;
}

void TYPEMAX( int64 LDTYPE$1, struct $8FBSYMBOL* LSUBTYPE$1, int64 RDTYPE$1, struct $8FBSYMBOL* RSUBTYPE$1, int64* DTYPE$1, struct $8FBSYMBOL** SUBTYPE$1 )
{
	int64 TMP$101$1;
	int64 TMP$102$1;
	int64 TMP$103$1;
	int64 TMP$104$1;
	label$36:;
	int64 DTYPE1$1;
	int64 DTYPE2$1;
	if( ((int64)-((LDTYPE$1 & 511ll) == (RDTYPE$1 & 511ll)) & (int64)-(LSUBTYPE$1 == RSUBTYPE$1)) == 0ll ) goto label$39;
	{
		*DTYPE$1 = LDTYPE$1;
		*SUBTYPE$1 = LSUBTYPE$1;
		goto label$37;
	}
	label$39:;
	label$38:;
	if( (LDTYPE$1 & 480ll) == 0ll ) goto label$40;
	TMP$101$1 = 22ll;
	goto label$52;
	label$40:;
	TMP$101$1 = LDTYPE$1 & 31ll;
	label$52:;
	DTYPE1$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$101$1 * 56ll)) + 32ll);
	if( (RDTYPE$1 & 480ll) == 0ll ) goto label$41;
	TMP$102$1 = 22ll;
	goto label$53;
	label$41:;
	TMP$102$1 = RDTYPE$1 & 31ll;
	label$53:;
	DTYPE2$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$102$1 * 56ll)) + 32ll);
	if( DTYPE1$1 != DTYPE2$1 ) goto label$43;
	{
		*DTYPE$1 = DTYPE1$1;
		*SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
	}
	goto label$42;
	label$43:;
	if( (DTYPE1$1 & 480ll) == 0ll ) goto label$45;
	TMP$103$1 = 22ll;
	goto label$54;
	label$45:;
	TMP$103$1 = DTYPE1$1 & 31ll;
	label$54:;
	if( (DTYPE2$1 & 480ll) == 0ll ) goto label$46;
	TMP$104$1 = 22ll;
	goto label$55;
	label$46:;
	TMP$104$1 = DTYPE2$1 & 31ll;
	label$55:;
	if( ((int64)-(*(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$103$1 * 56ll)) == 0ll) & (int64)-(*(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$104$1 * 56ll)) == 0ll)) == 0ll ) goto label$44;
	{
		int64 TMP$105$2;
		int64 TMP$106$2;
		if( (DTYPE1$1 & 480ll) == 0ll ) goto label$47;
		TMP$105$2 = 22ll;
		goto label$56;
		label$47:;
		TMP$105$2 = DTYPE1$1 & 31ll;
		label$56:;
		if( (DTYPE2$1 & 480ll) == 0ll ) goto label$48;
		TMP$106$2 = 22ll;
		goto label$57;
		label$48:;
		TMP$106$2 = DTYPE2$1 & 31ll;
		label$57:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$105$2 * 56ll)) + 24ll) <= *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$106$2 * 56ll)) + 24ll) ) goto label$50;
		{
			*DTYPE$1 = LDTYPE$1;
			*SUBTYPE$1 = LSUBTYPE$1;
		}
		goto label$49;
		label$50:;
		{
			*DTYPE$1 = RDTYPE$1;
			*SUBTYPE$1 = RSUBTYPE$1;
		}
		label$49:;
	}
	goto label$42;
	label$44:;
	if( DTYPE1$1 <= DTYPE2$1 ) goto label$51;
	{
		*DTYPE$1 = LDTYPE$1;
		*SUBTYPE$1 = LSUBTYPE$1;
	}
	goto label$42;
	label$51:;
	{
		*DTYPE$1 = RDTYPE$1;
		*SUBTYPE$1 = RSUBTYPE$1;
	}
	label$42:;
	label$37:;
}

int64 TYPETOSIGNED( int64 DTYPE$1 )
{
	int64 TMP$107$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$58:;
	int64 DT$1;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$60;
	TMP$107$1 = 22ll;
	goto label$72;
	label$60:;
	TMP$107$1 = DTYPE$1 & 31ll;
	label$72:;
	DT$1 = TMP$107$1;
	int64 ND$1;
	if( *(int64*)((uint8*)SYMB_DTYPETB$ + (DT$1 * 56ll)) == 0ll ) goto label$62;
	{
		fb$result$1 = DTYPE$1;
		goto label$59;
	}
	label$62:;
	label$61:;
	{
		uint64 TMP$108$2;
		TMP$108$2 = (uint64)DT$1;
		goto label$64;
		label$65:;
		{
			ND$1 = 1ll;
		}
		goto label$63;
		label$66:;
		{
			ND$1 = 4ll;
		}
		goto label$63;
		label$67:;
		{
			ND$1 = 7ll;
		}
		goto label$63;
		label$68:;
		{
			int64 vr$6 = TYPETOSIGNED( *(int64*)((uint8*)&ENV$ + 424ll) );
			fb$result$1 = vr$6;
			goto label$59;
		}
		goto label$63;
		label$69:;
		{
			ND$1 = 10ll;
		}
		goto label$63;
		label$70:;
		{
			ND$1 = 12ll;
		}
		goto label$63;
		label$71:;
		{
			ND$1 = DTYPE$1;
		}
		goto label$63;
		label$64:;
		static const void* tmp$109[21ll] = {
			&&label$65,
			&&label$65,
			&&label$71,
			&&label$66,
			&&label$68,
			&&label$71,
			&&label$67,
			&&label$71,
			&&label$71,
			&&label$69,
			&&label$71,
			&&label$70,
			&&label$71,
			&&label$71,
			&&label$71,
			&&label$71,
			&&label$71,
			&&label$71,
			&&label$71,
			&&label$71,
			&&label$69,
		};
		if( TMP$108$2 < 2ll ) goto label$71;
		if( TMP$108$2 > 22ll ) goto label$71;
		goto *tmp$109[TMP$108$2 - 2ll];
		label$63:;
	}
	fb$result$1 = (DTYPE$1 & -512ll) | (ND$1 & 511ll);
	label$59:;
	return fb$result$1;
}

int64 TYPETOUNSIGNED( int64 DTYPE$1 )
{
	int64 TMP$110$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$73:;
	int64 DT$1;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$75;
	TMP$110$1 = 22ll;
	goto label$86;
	label$75:;
	TMP$110$1 = DTYPE$1 & 31ll;
	label$86:;
	DT$1 = TMP$110$1;
	int64 ND$1;
	if( *(int64*)((uint8*)SYMB_DTYPETB$ + (DT$1 * 56ll)) == 0ll ) goto label$77;
	{
		fb$result$1 = DTYPE$1;
		goto label$74;
	}
	label$77:;
	label$76:;
	{
		uint64 TMP$111$2;
		TMP$111$2 = (uint64)DT$1;
		goto label$79;
		label$80:;
		{
			ND$1 = 2ll;
		}
		goto label$78;
		label$81:;
		{
			ND$1 = 5ll;
		}
		goto label$78;
		label$82:;
		{
			ND$1 = 8ll;
		}
		goto label$78;
		label$83:;
		{
			ND$1 = 11ll;
		}
		goto label$78;
		label$84:;
		{
			ND$1 = 13ll;
		}
		goto label$78;
		label$85:;
		{
			ND$1 = DTYPE$1;
		}
		goto label$78;
		label$79:;
		static const void* tmp$112[22ll] = {
			&&label$80,
			&&label$85,
			&&label$85,
			&&label$81,
			&&label$85,
			&&label$85,
			&&label$82,
			&&label$85,
			&&label$82,
			&&label$83,
			&&label$85,
			&&label$84,
			&&label$85,
			&&label$85,
			&&label$85,
			&&label$85,
			&&label$85,
			&&label$85,
			&&label$85,
			&&label$85,
			&&label$85,
			&&label$83,
		};
		if( TMP$111$2 < 1ll ) goto label$85;
		if( TMP$111$2 > 22ll ) goto label$85;
		goto *tmp$112[TMP$111$2 - 1ll];
		label$78:;
	}
	fb$result$1 = (DTYPE$1 & -512ll) | (ND$1 & 511ll);
	label$74:;
	return fb$result$1;
}

int64 TYPEHASCTOR( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$87:;
	{
		int64 TMP$113$2;
		int64 TMP$114$2;
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$89;
		TMP$113$2 = 22ll;
		goto label$93;
		label$89:;
		TMP$113$2 = DTYPE$1 & 31ll;
		label$93:;
		TMP$114$2 = TMP$113$2;
		if( TMP$114$2 != 18ll ) goto label$91;
		label$92:;
		{
			struct $8FBSYMBOL* vr$5 = SYMBGETCOMPCTORHEAD( SUBTYPE$1 );
			fb$result$1 = (int64)-(vr$5 != (struct $8FBSYMBOL*)0ull);
		}
		label$91:;
		label$90:;
	}
	label$88:;
	return fb$result$1;
}

int64 TYPEHASDEFCTOR( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$94:;
	{
		int64 TMP$115$2;
		int64 TMP$116$2;
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$96;
		TMP$115$2 = 22ll;
		goto label$100;
		label$96:;
		TMP$115$2 = DTYPE$1 & 31ll;
		label$100:;
		TMP$116$2 = TMP$115$2;
		if( TMP$116$2 != 18ll ) goto label$98;
		label$99:;
		{
			struct $8FBSYMBOL* vr$5 = SYMBGETCOMPDEFCTOR( SUBTYPE$1 );
			fb$result$1 = (int64)-(vr$5 != (struct $8FBSYMBOL*)0ull);
		}
		label$98:;
		label$97:;
	}
	label$95:;
	return fb$result$1;
}

int64 TYPEHASDTOR( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$101:;
	{
		int64 TMP$117$2;
		int64 TMP$118$2;
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$103;
		TMP$117$2 = 22ll;
		goto label$107;
		label$103:;
		TMP$117$2 = DTYPE$1 & 31ll;
		label$107:;
		TMP$118$2 = TMP$117$2;
		if( TMP$118$2 != 18ll ) goto label$105;
		label$106:;
		{
			struct $8FBSYMBOL* vr$5 = SYMBGETCOMPDTOR( SUBTYPE$1 );
			fb$result$1 = (int64)-(vr$5 != (struct $8FBSYMBOL*)0ull);
		}
		label$105:;
		label$104:;
	}
	label$102:;
	return fb$result$1;
}

int64 TYPENEEDSDTORCALL( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$108:;
	int64 vr$1 = TYPEHASDTOR( DTYPE$1, SUBTYPE$1 );
	fb$result$1 = vr$1 | (int64)-((DTYPE$1 & 511ll) == 16ll);
	label$109:;
	return fb$result$1;
}

int64 TYPEISTRIVIAL( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$110:;
	fb$result$1 = -1ll;
	{
		int64 TMP$119$2;
		TMP$119$2 = DTYPE$1 & 511ll;
		if( TMP$119$2 != 16ll ) goto label$113;
		label$114:;
		{
			fb$result$1 = 0ll;
		}
		goto label$112;
		label$113:;
		if( TMP$119$2 != 18ll ) goto label$115;
		label$116:;
		{
			int64 vr$4 = SYMBCOMPISTRIVIAL( SUBTYPE$1 );
			fb$result$1 = vr$4;
		}
		label$115:;
		label$112:;
	}
	label$111:;
	return fb$result$1;
}

int64 TYPEHASFWDREFINSIGNATURE( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$117:;
	{
		int64 TMP$120$2;
		TMP$120$2 = DTYPE$1 & 31ll;
		if( TMP$120$2 != 21ll ) goto label$120;
		label$121:;
		{
			fb$result$1 = -1ll;
		}
		goto label$119;
		label$120:;
		if( TMP$120$2 != 20ll ) goto label$122;
		label$123:;
		{
			int64 vr$4 = SYMBPROCHASFWDREFINSIGNATURE( SUBTYPE$1 );
			fb$result$1 = vr$4;
		}
		goto label$119;
		label$122:;
		{
			fb$result$1 = 0ll;
		}
		label$124:;
		label$119:;
	}
	label$118:;
	return fb$result$1;
}

int64 TYPEMERGE( int64 DTYPE1$1, int64 DTYPE2$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$125:;
	int64 OLDPTRCOUNT$1;
	int64 ADDPTRCOUNT$1;
	OLDPTRCOUNT$1 = (DTYPE1$1 & 480ll) >> 5ll;
	ADDPTRCOUNT$1 = (DTYPE2$1 & 480ll) >> 5ll;
	if( (OLDPTRCOUNT$1 + ADDPTRCOUNT$1) <= 8ll ) goto label$128;
	{
		ERRREPORT( 273ll, 0ll, (uint8*)0ull );
		OLDPTRCOUNT$1 = 8ll - ADDPTRCOUNT$1;
	}
	label$128:;
	label$127:;
	DTYPE1$1 = (((DTYPE2$1 & 31ll) | ((DTYPE2$1 & 480ll) + (OLDPTRCOUNT$1 << 5ll))) | ((DTYPE2$1 & 261632ll) << OLDPTRCOUNT$1)) | (DTYPE1$1 & 261632ll);
	fb$result$1 = DTYPE1$1;
	label$126:;
	return fb$result$1;
}

$11FB_DATATYPE CLOSESTTYPE( $11FB_DATATYPE DTYPE$1, $11FB_DATATYPE DTYPE1$1, $11FB_DATATYPE DTYPE2$1 )
{
	int64 TMP$121$1;
	int64 TMP$122$1;
	int64 TMP$123$1;
	int64 TMP$124$1;
	int64 TMP$125$1;
	int64 TMP$126$1;
	int64 TMP$127$1;
	int64 TMP$128$1;
	int64 TMP$129$1;
	int64 TMP$130$1;
	int64 TMP$131$1;
	int64 TMP$132$1;
	int64 TMP$133$1;
	int64 TMP$134$1;
	int64 TMP$135$1;
	int64 TMP$136$1;
	$11FB_DATATYPE fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$129:;
	if( ((int64)-(DTYPE1$1 != 9ll) & (int64)-(DTYPE2$1 == 9ll)) == 0ll ) goto label$132;
	{
		fb$result$1 = DTYPE1$1;
		goto label$130;
		label$132:;
	}
	if( ((int64)-(DTYPE2$1 != 9ll) & (int64)-(DTYPE1$1 == 9ll)) == 0ll ) goto label$134;
	{
		fb$result$1 = DTYPE2$1;
		goto label$130;
		label$134:;
	}
	if( ((int64)-(DTYPE1$1 != 3ll) & (int64)-(DTYPE2$1 == 3ll)) == 0ll ) goto label$136;
	{
		fb$result$1 = DTYPE1$1;
		goto label$130;
		label$136:;
	}
	if( ((int64)-(DTYPE2$1 != 3ll) & (int64)-(DTYPE1$1 == 3ll)) == 0ll ) goto label$138;
	{
		fb$result$1 = DTYPE2$1;
		goto label$130;
		label$138:;
	}
	if( ((int64)-(DTYPE1$1 != 6ll) & (int64)-(DTYPE2$1 == 6ll)) == 0ll ) goto label$140;
	{
		fb$result$1 = DTYPE1$1;
		goto label$130;
		label$140:;
	}
	if( ((int64)-(DTYPE2$1 != 6ll) & (int64)-(DTYPE1$1 == 6ll)) == 0ll ) goto label$142;
	{
		fb$result$1 = DTYPE2$1;
		goto label$130;
		label$142:;
	}
	int64 SAMECLASS1$1;
	if( (DTYPE1$1 & 480ll) == 0ll ) goto label$143;
	TMP$121$1 = 22ll;
	goto label$183;
	label$143:;
	TMP$121$1 = DTYPE1$1 & 31ll;
	label$183:;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$144;
	TMP$122$1 = 22ll;
	goto label$184;
	label$144:;
	TMP$122$1 = DTYPE$1 & 31ll;
	label$184:;
	SAMECLASS1$1 = (int64)-(*(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$121$1 * 56ll)) == *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$122$1 * 56ll)));
	int64 SAMECLASS2$1;
	if( (DTYPE2$1 & 480ll) == 0ll ) goto label$145;
	TMP$123$1 = 22ll;
	goto label$185;
	label$145:;
	TMP$123$1 = DTYPE2$1 & 31ll;
	label$185:;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$146;
	TMP$124$1 = 22ll;
	goto label$186;
	label$146:;
	TMP$124$1 = DTYPE$1 & 31ll;
	label$186:;
	SAMECLASS2$1 = (int64)-(*(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$123$1 * 56ll)) == *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$124$1 * 56ll)));
	if( (SAMECLASS1$1 & ~SAMECLASS2$1) == 0ll ) goto label$148;
	{
		fb$result$1 = DTYPE1$1;
		goto label$130;
		label$148:;
	}
	if( (SAMECLASS2$1 & ~SAMECLASS1$1) == 0ll ) goto label$150;
	{
		fb$result$1 = DTYPE2$1;
		goto label$130;
		label$150:;
	}
	int64 LARGER1$1;
	if( (DTYPE1$1 & 480ll) == 0ll ) goto label$151;
	TMP$125$1 = 22ll;
	goto label$187;
	label$151:;
	TMP$125$1 = DTYPE1$1 & 31ll;
	label$187:;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$152;
	TMP$126$1 = 22ll;
	goto label$188;
	label$152:;
	TMP$126$1 = DTYPE$1 & 31ll;
	label$188:;
	LARGER1$1 = (int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$125$1 * 56ll)) + 8ll) >= *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$126$1 * 56ll)) + 8ll));
	int64 LARGER2$1;
	if( (DTYPE2$1 & 480ll) == 0ll ) goto label$153;
	TMP$127$1 = 22ll;
	goto label$189;
	label$153:;
	TMP$127$1 = DTYPE2$1 & 31ll;
	label$189:;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$154;
	TMP$128$1 = 22ll;
	goto label$190;
	label$154:;
	TMP$128$1 = DTYPE$1 & 31ll;
	label$190:;
	LARGER2$1 = (int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$127$1 * 56ll)) + 8ll) >= *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$128$1 * 56ll)) + 8ll));
	if( (LARGER1$1 & ~LARGER2$1) == 0ll ) goto label$156;
	{
		fb$result$1 = DTYPE1$1;
		goto label$130;
		label$156:;
	}
	if( (LARGER2$1 & ~LARGER1$1) == 0ll ) goto label$158;
	{
		fb$result$1 = DTYPE2$1;
		goto label$130;
		label$158:;
	}
	int64 SIZEDIFF1$1;
	if( (DTYPE1$1 & 480ll) == 0ll ) goto label$159;
	TMP$129$1 = 22ll;
	goto label$191;
	label$159:;
	TMP$129$1 = DTYPE1$1 & 31ll;
	label$191:;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$160;
	TMP$130$1 = 22ll;
	goto label$192;
	label$160:;
	TMP$130$1 = DTYPE$1 & 31ll;
	label$192:;
	SIZEDIFF1$1 = __builtin_llabs( (*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$129$1 * 56ll)) + 8ll) - *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$130$1 * 56ll)) + 8ll)) );
	int64 SIZEDIFF2$1;
	if( (DTYPE2$1 & 480ll) == 0ll ) goto label$161;
	TMP$131$1 = 22ll;
	goto label$193;
	label$161:;
	TMP$131$1 = DTYPE2$1 & 31ll;
	label$193:;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$162;
	TMP$132$1 = 22ll;
	goto label$194;
	label$162:;
	TMP$132$1 = DTYPE$1 & 31ll;
	label$194:;
	SIZEDIFF2$1 = __builtin_llabs( (*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$131$1 * 56ll)) + 8ll) - *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$132$1 * 56ll)) + 8ll)) );
	if( SIZEDIFF1$1 >= SIZEDIFF2$1 ) goto label$164;
	{
		fb$result$1 = DTYPE1$1;
		goto label$130;
		label$164:;
	}
	if( SIZEDIFF2$1 >= SIZEDIFF1$1 ) goto label$166;
	{
		fb$result$1 = DTYPE2$1;
		goto label$130;
		label$166:;
	}
	int64 SAMESIGN1$1;
	if( (DTYPE1$1 & 480ll) == 0ll ) goto label$167;
	TMP$133$1 = 22ll;
	goto label$195;
	label$167:;
	TMP$133$1 = DTYPE1$1 & 31ll;
	label$195:;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$168;
	TMP$134$1 = 22ll;
	goto label$196;
	label$168:;
	TMP$134$1 = DTYPE$1 & 31ll;
	label$196:;
	SAMESIGN1$1 = (int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$133$1 * 56ll)) + 16ll) == *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$134$1 * 56ll)) + 16ll));
	int64 SAMESIGN2$1;
	if( (DTYPE2$1 & 480ll) == 0ll ) goto label$169;
	TMP$135$1 = 22ll;
	goto label$197;
	label$169:;
	TMP$135$1 = DTYPE2$1 & 31ll;
	label$197:;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$170;
	TMP$136$1 = 22ll;
	goto label$198;
	label$170:;
	TMP$136$1 = DTYPE$1 & 31ll;
	label$198:;
	SAMESIGN2$1 = (int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$135$1 * 56ll)) + 16ll) == *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$136$1 * 56ll)) + 16ll));
	if( (SAMESIGN1$1 & ~SAMESIGN2$1) == 0ll ) goto label$172;
	{
		fb$result$1 = DTYPE1$1;
		goto label$130;
		label$172:;
	}
	if( (SAMESIGN2$1 & ~SAMESIGN1$1) == 0ll ) goto label$174;
	{
		fb$result$1 = DTYPE2$1;
		goto label$130;
		label$174:;
	}
	int64 SAMEKIND1$1;
	int64 vr$119 = TYPETOSIGNED( DTYPE1$1 );
	int64 vr$120 = TYPETOSIGNED( DTYPE$1 );
	SAMEKIND1$1 = (int64)-(vr$119 == vr$120);
	int64 SAMEKIND2$1;
	int64 vr$122 = TYPETOSIGNED( DTYPE2$1 );
	int64 vr$123 = TYPETOSIGNED( DTYPE$1 );
	SAMEKIND2$1 = (int64)-(vr$122 == vr$123);
	if( (SAMEKIND1$1 & ~SAMEKIND2$1) == 0ll ) goto label$176;
	{
		fb$result$1 = DTYPE1$1;
		goto label$130;
		label$176:;
	}
	if( (SAMEKIND2$1 & ~SAMEKIND1$1) == 0ll ) goto label$178;
	{
		fb$result$1 = DTYPE2$1;
		goto label$130;
		label$178:;
	}
	int64 ISINT1$1;
	int64 vr$131 = TYPETOSIGNED( DTYPE1$1 );
	ISINT1$1 = (int64)-(vr$131 == 7ll);
	int64 ISINT2$1;
	int64 vr$133 = TYPETOSIGNED( DTYPE2$1 );
	ISINT2$1 = (int64)-(vr$133 == 7ll);
	if( (ISINT1$1 & ~ISINT2$1) == 0ll ) goto label$180;
	{
		fb$result$1 = DTYPE1$1;
		goto label$130;
		label$180:;
	}
	if( (ISINT2$1 & ~ISINT1$1) == 0ll ) goto label$182;
	{
		fb$result$1 = DTYPE2$1;
		goto label$130;
		label$182:;
	}
	fb$result$1 = DTYPE1$1;
	goto label$130;
	label$130:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__symbzdata( void )
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

// Total compilation time: 0.03059691097587347 seconds.
