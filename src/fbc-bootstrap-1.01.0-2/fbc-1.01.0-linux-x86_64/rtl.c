// Compilation of fbc-1.01.0/src/compiler/rtl.bas started at 15:27:43 on 02-28-2015

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
struct $16__FB_ARRAYDIMTB$ {
	int64 ELEMENTS;
	int64 LBOUND;
	int64 UBOUND;
};
__FB_STATIC_ASSERT( sizeof( struct $16__FB_ARRAYDIMTB$ ) == 24 );
struct $7FBARRAYIvE {
	void* DATA;
	void* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYIvE ) == 232 );
typedef int64 $11FB_DATATYPE;
typedef int64 $11FB_FUNCMODE;
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
typedef int64 (*tmp$28)( struct $8FBSYMBOL* );
typedef int64 $10FB_RTL_OPT;
struct $15FB_RTL_PARAMDEF {
	$11FB_DATATYPE DTYPE;
	$12FB_PARAMMODE MODE;
	int64 ISOPT;
	int64 OPTVAL;
	int64 CHECK_CONST;
};
__FB_STATIC_ASSERT( sizeof( struct $15FB_RTL_PARAMDEF ) == 40 );
struct $14FB_RTL_PROCDEF {
	uint8* NAME;
	uint8* ALIAS;
	$11FB_DATATYPE DTYPE;
	$11FB_FUNCMODE CALLCONV;
	tmp$28 CALLBACK;
	$10FB_RTL_OPT OPTIONS;
	int64 PARAMS;
	struct $15FB_RTL_PARAMDEF PARAMTB[16];
};
__FB_STATIC_ASSERT( sizeof( struct $14FB_RTL_PROCDEF ) == 696 );
typedef int64 $9FB_ERRMSG;
struct $11FB_CALL_ARG;
struct $11FB_CALL_ARG {
	struct $7ASTNODE* EXPR;
	$12FB_PARAMMODE MODE;
	struct $11FB_CALL_ARG* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $11FB_CALL_ARG ) == 24 );
struct $16FB_CALL_ARG_LIST {
	int64 ARGS;
	struct $11FB_CALL_ARG* HEAD;
	struct $11FB_CALL_ARG* TAIL;
};
__FB_STATIC_ASSERT( sizeof( struct $16FB_CALL_ARG_LIST ) == 24 );
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
int32 fb_ArrayClear( struct $7FBARRAYIvE*, int32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
static void fb_ctor__rtl( void ) __attribute__(( constructor ));
void LISTINIT( struct $5TLIST*, int64, int64, $10LIST_FLAGS );
void LISTEND( struct $5TLIST* );
void LISTDELNODE( struct $5TLIST*, void* );
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
typedef int64 $12FB_ERRMSGOPT;
void ERRREPORTEX( int64, uint8*, int64, $12FB_ERRMSGOPT, uint8* );
int64 FBGETCPUFAMILY( void );
struct $7ASTNODE* ASTNEWCONSTSTR( uint8* );
struct $7ASTNODE* ASTNEWCONSTI( int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWCONSTF( double, int64 );
struct $7ASTNODE* ASTNEWCALL( struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWARG( struct $7ASTNODE*, struct $7ASTNODE*, int64, int64 );
struct $10FBSYMCHAIN* SYMBLOOKUPAT( struct $8FBSYMBOL*, uint8*, int64, int64 );
typedef int64 $16FB_SYMBLOOKUPOPT;
struct $8FBSYMBOL* SYMBFINDCLOSESTOVLPROC( struct $8FBSYMBOL*, int64, struct $11FB_CALL_ARG*, $9FB_ERRMSG*, $16FB_SYMBLOOKUPOPT );
struct $8FBSYMBOL* SYMBADDPROCPARAM( struct $8FBSYMBOL*, uint8*, int64, struct $8FBSYMBOL*, int64, int64, $13FB_SYMBATTRIB );
void SYMBMAKEPARAMOPTIONAL( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $7ASTNODE* );
typedef int64 $10FB_SYMBOPT;
struct $8FBSYMBOL* SYMBADDPROC( struct $8FBSYMBOL*, uint8*, uint8*, int64, struct $8FBSYMBOL*, int64, int64, $10FB_SYMBOPT );
struct $8FBSYMBOL* SYMBADDPROCPTR( struct $8FBSYMBOL*, int64, struct $8FBSYMBOL*, int64, int64 );
struct $8FBSYMBOL* SYMBPREADDPROC( uint8* );
int64 SYMBCALCLEN( int64, struct $8FBSYMBOL* );
struct $11FB_CALL_ARG* SYMBALLOCOVLCALLARG( struct $5TLIST*, struct $16FB_CALL_ARG_LIST*, int64 );
void SYMBFREEOVLCALLARGS( struct $5TLIST*, struct $16FB_CALL_ARG_LIST* );
int64 RTLCALCSTRLEN( struct $7ASTNODE*, int64 );
void RTLARRAYMODINIT( void );
void RTLCONSOLEMODINIT( void );
void RTLDATAMODINIT( void );
void RTLERRORMODINIT( void );
void RTLFILEMODINIT( void );
void RTLGFXMODINIT( void );
void RTLMACROMODINIT( void );
void RTLMATHMODINIT( void );
void RTLMEMMODINIT( void );
void RTLPRINTMODINIT( void );
void RTLPROFILEMODINIT( void );
void RTLSTRINGMODINIT( void );
void RTLSYSTEMMODINIT( void );
void RTLGOSUBMODINIT( void );
void RTLOOPMODINIT( void );
void RTLARRAYMODEND( void );
void RTLCONSOLEMODEND( void );
void RTLDATAMODEND( void );
void RTLERRORMODEND( void );
void RTLFILEMODEND( void );
void RTLGFXMODEND( void );
void RTLMACROMODEND( void );
void RTLMATHMODEND( void );
void RTLMEMMODEND( void );
void RTLPRINTMODEND( void );
void RTLPROFILEMODEND( void );
void RTLSTRINGMODEND( void );
void RTLSYSTEMMODEND( void );
void RTLGOSUBMODEND( void );
void RTLOOPMODEND( void );
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
struct $6RTLCTX {
	struct $5TLIST ARGLIST;
};
__FB_STATIC_ASSERT( sizeof( struct $6RTLCTX ) == 64 );
static struct $6RTLCTX CTX$;
static struct $8FBSYMBOL* RTLLOOKUPTB$[356];
struct $8FBARRAY1IP8FBSYMBOLE {
	struct $8FBSYMBOL** DATA;
	struct $8FBSYMBOL** PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[1];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1IP8FBSYMBOLE ) == 64 );
static struct $8FBARRAY1IP8FBSYMBOLE tmp$77$ = { (struct $8FBSYMBOL**)RTLLOOKUPTB$, (struct $8FBSYMBOL**)RTLLOOKUPTB$, 2848ll, 8ll, 1ll, { { 356ll, 0ll, 355ll } } };
struct $5FBENV ENV$ __attribute__((common));

void RTLINIT( void )
{
	label$10:;
	LISTINIT( (struct $5TLIST*)&CTX$, 32ll, 24ll, 6ll );
	RTLARRAYMODINIT(  );
	RTLCONSOLEMODINIT(  );
	RTLDATAMODINIT(  );
	RTLERRORMODINIT(  );
	RTLFILEMODINIT(  );
	RTLGFXMODINIT(  );
	RTLMACROMODINIT(  );
	RTLMATHMODINIT(  );
	RTLMEMMODINIT(  );
	RTLPRINTMODINIT(  );
	RTLPROFILEMODINIT(  );
	RTLSTRINGMODINIT(  );
	RTLSYSTEMMODINIT(  );
	RTLGOSUBMODINIT(  );
	RTLOOPMODINIT(  );
	label$11:;
}

void RTLEND( void )
{
	label$12:;
	RTLOOPMODEND(  );
	RTLGOSUBMODEND(  );
	RTLSYSTEMMODEND(  );
	RTLSTRINGMODEND(  );
	RTLPROFILEMODEND(  );
	RTLPRINTMODEND(  );
	RTLMEMMODEND(  );
	RTLMATHMODEND(  );
	RTLMACROMODEND(  );
	RTLGFXMODEND(  );
	RTLFILEMODEND(  );
	RTLERRORMODEND(  );
	RTLDATAMODEND(  );
	RTLCONSOLEMODEND(  );
	RTLARRAYMODEND(  );
	LISTEND( (struct $5TLIST*)&CTX$ );
	fb_ArrayClear( (struct $7FBARRAYIvE*)&tmp$77$, 0 );
	label$13:;
}

void RTLADDINTRINSICPROCS( struct $14FB_RTL_PROCDEF* PROCDEF$1 )
{
	label$14:;
	struct $8FBSYMBOL* PARAM$1;
	int64 CALLCONV$1;
	label$16:;
	{
		if( *(uint8**)PROCDEF$1 != (uint8*)0ull ) goto label$20;
		{
			goto label$17;
		}
		label$20:;
		label$19:;
		CALLCONV$1 = *(int64*)((uint8*)PROCDEF$1 + 24ll);
		if( CALLCONV$1 != -1ll ) goto label$22;
		{
			CALLCONV$1 = *(int64*)((uint8*)&ENV$ + 432ll);
		}
		label$22:;
		label$21:;
		int64 DOADD$2;
		DOADD$2 = -1ll;
		if( (*(int64*)((uint8*)PROCDEF$1 + 40ll) & 4ll) == 0ll ) goto label$24;
		{
			DOADD$2 = (int64)-((*(int64*)((uint8*)&ENV$ + 1152ll) & 1ll) != 0ll);
		}
		label$24:;
		label$23:;
		if( (*(int64*)((uint8*)PROCDEF$1 + 40ll) & 16384ll) == 0ll ) goto label$26;
		{
			int64 vr$12 = FBGETCPUFAMILY(  );
			DOADD$2 = DOADD$2 & (int64)-(vr$12 == 0ll);
		}
		label$26:;
		label$25:;
		if( DOADD$2 == 0ll ) goto label$28;
		{
			if( (*(int64*)((uint8*)PROCDEF$1 + 40ll) & 256ll) == 0ll ) goto label$30;
			{
				DOADD$2 = (int64)-(*(int64*)((uint8*)&ENV$ + 272ll) == 3ll);
			}
			label$30:;
			label$29:;
			if( (*(int64*)((uint8*)PROCDEF$1 + 40ll) & 1024ll) == 0ll ) goto label$32;
			{
				DOADD$2 = (int64)-(*(int64*)((uint8*)&ENV$ + 272ll) == 0ll);
			}
			label$32:;
			label$31:;
			if( (*(int64*)((uint8*)PROCDEF$1 + 40ll) & 512ll) == 0ll ) goto label$34;
			{
				DOADD$2 = (int64)-(*(int64*)((uint8*)&ENV$ + 272ll) != 0ll);
			}
			label$34:;
			label$33:;
		}
		label$28:;
		label$27:;
		if( DOADD$2 == 0ll ) goto label$36;
		{
			struct $8FBSYMBOL* PROC$3;
			struct $8FBSYMBOL* vr$29 = SYMBPREADDPROC( (uint8*)0ull );
			PROC$3 = vr$29;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$78$4;
				TMP$78$4 = *(int64*)((uint8*)PROCDEF$1 + 48ll) + -1ll;
				goto label$37;
				label$40:;
				{
					{
						int64 TMP$86$6;
						struct $15FB_RTL_PARAMDEF* TMP$79$6;
						TMP$79$6 = (struct $15FB_RTL_PARAMDEF*)((uint8*)((uint8*)PROCDEF$1 + (I$4 * 40ll)) + 56ll);
						struct $8FBSYMBOL* SUBTYPE$6;
						SUBTYPE$6 = (struct $8FBSYMBOL*)0ull;
						int64 ATTRIB$6;
						int64 DTYPE$6;
						struct $7ASTNODE* PARAM_OPTVAL$6;
						if( *(int64*)((uint8*)TMP$79$6 + 16ll) == 0ll ) goto label$42;
						{
							ATTRIB$6 = 2097152ll;
							{
								uint64 TMP$80$8;
								TMP$80$8 = *(uint64*)TMP$79$6;
								goto label$44;
								label$45:;
								{
									struct $7ASTNODE* vr$38 = ASTNEWCONSTSTR( (uint8*)"" );
									PARAM_OPTVAL$6 = vr$38;
								}
								goto label$43;
								label$46:;
								{
									struct $7ASTNODE* vr$42 = ASTNEWCONSTF( (double)*(int64*)((uint8*)TMP$79$6 + 24ll), *(int64*)TMP$79$6 );
									PARAM_OPTVAL$6 = vr$42;
								}
								goto label$43;
								label$47:;
								{
									int64 INNER_ATTRIB$9;
									int64 FUNC_ARG$9;
									struct $7ASTNODE* INNER_PARAM_OPTVAL$9;
									struct $8FBSYMBOL* INNER_PROC$9;
									struct $8FBSYMBOL* vr$43 = SYMBPREADDPROC( (uint8*)0ull );
									INNER_PROC$9 = vr$43;
									{
										FUNC_ARG$9 = 0ll;
										int64 TMP$81$10;
										TMP$81$10 = *(int64*)((uint8*)TMP$79$6 + 24ll) + -1ll;
										goto label$48;
										label$51:;
										{
											I$4 = I$4 + 1ll;
											{
												int64 TMP$84$12;
												struct $15FB_RTL_PARAMDEF* TMP$82$12;
												TMP$82$12 = (struct $15FB_RTL_PARAMDEF*)((uint8*)((uint8*)PROCDEF$1 + (I$4 * 40ll)) + 56ll);
												if( *(int64*)((uint8*)TMP$82$12 + 16ll) == 0ll ) goto label$53;
												{
													INNER_ATTRIB$9 = 2097152ll;
													{
														uint64 TMP$83$14;
														TMP$83$14 = *(uint64*)TMP$82$12;
														goto label$55;
														label$56:;
														{
															struct $7ASTNODE* vr$53 = ASTNEWCONSTSTR( (uint8*)"" );
															INNER_PARAM_OPTVAL$9 = vr$53;
														}
														goto label$54;
														label$57:;
														{
															struct $7ASTNODE* vr$57 = ASTNEWCONSTF( (double)*(int64*)((uint8*)TMP$82$12 + 24ll), *(int64*)TMP$82$12 );
															INNER_PARAM_OPTVAL$9 = vr$57;
														}
														goto label$54;
														label$58:;
														{
															struct $7ASTNODE* vr$60 = ASTNEWCONSTI( *(int64*)((uint8*)TMP$82$12 + 24ll), *(int64*)TMP$82$12, (struct $8FBSYMBOL*)0ull );
															INNER_PARAM_OPTVAL$9 = vr$60;
														}
														goto label$54;
														label$55:;
														static const void* tmp$89[3ll] = {
															&&label$57,
															&&label$57,
															&&label$56,
														};
														if( TMP$83$14 < 14ll ) goto label$58;
														if( TMP$83$14 > 16ll ) goto label$58;
														goto *tmp$89[TMP$83$14 - 14ll];
														label$54:;
													}
												}
												goto label$52;
												label$53:;
												{
													INNER_PARAM_OPTVAL$9 = (struct $7ASTNODE*)0ull;
													INNER_ATTRIB$9 = 0ll;
												}
												label$52:;
												if( *(int64*)((uint8*)TMP$82$12 + 8ll) != 3ll ) goto label$59;
												TMP$84$12 = -1ll;
												goto label$86;
												label$59:;
												TMP$84$12 = 0ll;
												label$86:;
												struct $8FBSYMBOL* vr$65 = SYMBADDPROCPARAM( INNER_PROC$9, (uint8*)0ull, *(int64*)TMP$82$12, (struct $8FBSYMBOL*)0ull, TMP$84$12, *(int64*)((uint8*)TMP$82$12 + 8ll), INNER_ATTRIB$9 );
												PARAM$1 = vr$65;
												SYMBMAKEPARAMOPTIONAL( INNER_PROC$9, PARAM$1, INNER_PARAM_OPTVAL$9 );
											}
										}
										label$49:;
										FUNC_ARG$9 = FUNC_ARG$9 + 1ll;
										label$48:;
										if( FUNC_ARG$9 <= TMP$81$10 ) goto label$51;
										label$50:;
									}
									I$4 = I$4 + 1ll;
									{
										struct $15FB_RTL_PARAMDEF* TMP$85$10;
										TMP$85$10 = (struct $15FB_RTL_PARAMDEF*)((uint8*)((uint8*)PROCDEF$1 + (I$4 * 40ll)) + 56ll);
										struct $8FBSYMBOL* vr$73 = SYMBADDPROCPTR( INNER_PROC$9, *(int64*)TMP$85$10, (struct $8FBSYMBOL*)0ull, 0ll, *(int64*)((uint8*)&ENV$ + 432ll) );
										SUBTYPE$6 = vr$73;
										if( *(int64*)((uint8*)TMP$85$10 + 16ll) != 0ll ) goto label$61;
										{
											ATTRIB$6 = 0ll;
										}
										label$61:;
										label$60:;
									}
									PARAM_OPTVAL$6 = (struct $7ASTNODE*)0ull;
								}
								goto label$43;
								label$62:;
								{
									struct $7ASTNODE* vr$78 = ASTNEWCONSTI( *(int64*)((uint8*)TMP$79$6 + 24ll), *(int64*)TMP$79$6, (struct $8FBSYMBOL*)0ull );
									PARAM_OPTVAL$6 = vr$78;
								}
								goto label$43;
								label$44:;
								static const void* tmp$90[39ll] = {
									&&label$46,
									&&label$46,
									&&label$45,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$62,
									&&label$47,
								};
								if( TMP$80$8 < 14ll ) goto label$62;
								if( TMP$80$8 > 52ll ) goto label$62;
								goto *tmp$90[TMP$80$8 - 14ll];
								label$43:;
							}
						}
						goto label$41;
						label$42:;
						{
							ATTRIB$6 = 0ll;
							PARAM_OPTVAL$6 = (struct $7ASTNODE*)0ull;
						}
						label$41:;
						DTYPE$6 = *(int64*)TMP$79$6;
						if( DTYPE$6 != 2147483648ll ) goto label$64;
						{
							DTYPE$6 = 32ll;
						}
						label$64:;
						label$63:;
						if( *(int64*)((uint8*)TMP$79$6 + 8ll) != 3ll ) goto label$65;
						TMP$86$6 = -1ll;
						goto label$87;
						label$65:;
						TMP$86$6 = 0ll;
						label$87:;
						struct $8FBSYMBOL* vr$84 = SYMBADDPROCPARAM( PROC$3, (uint8*)0ull, DTYPE$6, SUBTYPE$6, TMP$86$6, *(int64*)((uint8*)TMP$79$6 + 8ll), ATTRIB$6 );
						PARAM$1 = vr$84;
						if( *(int64*)((uint8*)TMP$79$6 + 32ll) == 0ll ) goto label$67;
						{
							*($12FB_SYMBSTATS*)((uint8*)PARAM$1 + 16ll) = *(int64*)((uint8*)PARAM$1 + 16ll) | 33554432ll;
						}
						label$67:;
						label$66:;
						SYMBMAKEPARAMOPTIONAL( PROC$3, PARAM$1, PARAM_OPTVAL$6 );
					}
				}
				label$38:;
				I$4 = I$4 + 1ll;
				label$37:;
				if( I$4 <= TMP$78$4 ) goto label$40;
				label$39:;
			}
			$13FB_SYMBATTRIB ATTRIB$3;
			ATTRIB$3 = 0ll;
			if( (*(int64*)((uint8*)PROCDEF$1 + 40ll) & 1ll) == 0ll ) goto label$69;
			{
				ATTRIB$3 = 1024ll;
			}
			label$69:;
			label$68:;
			if( (*(int64*)((uint8*)PROCDEF$1 + 40ll) & 64ll) == 0ll ) goto label$71;
			{
				ATTRIB$3 = ATTRIB$3 | 268435456ll;
			}
			label$71:;
			label$70:;
			uint8* PNAME$3;
			PNAME$3 = *(uint8**)PROCDEF$1;
			uint8* PALIAS$3;
			PALIAS$3 = *(uint8**)((uint8*)PROCDEF$1 + 8ll);
			if( (*(int64*)((uint8*)PROCDEF$1 + 40ll) & 128ll) == 0ll ) goto label$73;
			{
				if( *(int64*)((uint8*)&ENV$ + 272ll) != 3ll ) goto label$75;
				{
					FBSTRING TMP$88$5;
					if( PALIAS$3 != (uint8*)0ull ) goto label$77;
					{
						static FBSTRING TMP_ALIAS$6;
						fb_StrAssign( (void*)&TMP_ALIAS$6, -1ll, (void*)PNAME$3, 0ll, 0 );
						PALIAS$3 = *(uint8**)&TMP_ALIAS$6;
					}
					label$77:;
					label$76:;
					static FBSTRING TMP_NAME$5;
					__builtin_memset( &TMP$88$5, 0, 24ll );
					FBSTRING* vr$108 = fb_StrConcat( &TMP$88$5, (void*)"__", 3ll, (void*)PNAME$3, 0ll );
					FBSTRING* vr$109 = fb_StrAssign( (void*)&TMP_NAME$5, -1ll, (void*)vr$108, -1ll, 0 );
					PNAME$3 = *(uint8**)&TMP_NAME$5;
				}
				label$75:;
				label$74:;
			}
			label$73:;
			label$72:;
			if( PALIAS$3 != (uint8*)0ull ) goto label$79;
			{
				PALIAS$3 = PNAME$3;
			}
			label$79:;
			label$78:;
			struct $8FBSYMBOL* vr$112 = SYMBADDPROC( PROC$3, PNAME$3, PALIAS$3, *(int64*)((uint8*)PROCDEF$1 + 16ll), (struct $8FBSYMBOL*)0ull, ATTRIB$3, CALLCONV$1, 20ll );
			PROC$3 = vr$112;
			if( PROC$3 == (struct $8FBSYMBOL*)0ull ) goto label$81;
			{
				*(tmp$28*)((uint8*)PROC$3 + 176ll) = *(tmp$28*)((uint8*)PROCDEF$1 + 32ll);
				if( (*(int64*)((uint8*)PROCDEF$1 + 40ll) & 2ll) == 0ll ) goto label$83;
				{
					*($12FB_SYMBSTATS*)((uint8*)PROC$3 + 16ll) = *(int64*)((uint8*)PROC$3 + 16ll) | 64ll;
				}
				label$83:;
				label$82:;
				if( (*(int64*)((uint8*)PROCDEF$1 + 40ll) & 2048ll) == 0ll ) goto label$85;
				{
					*($12FB_SYMBSTATS*)((uint8*)PROC$3 + 16ll) = *(int64*)((uint8*)PROC$3 + 16ll) | 524288ll;
				}
				label$85:;
				label$84:;
			}
			goto label$80;
			label$81:;
			{
				ERRREPORTEX( 4ll, *(uint8**)PROCDEF$1, 0ll, 1ll, (uint8*)0ull );
			}
			label$80:;
		}
		label$36:;
		label$35:;
		PROCDEF$1 = (struct $14FB_RTL_PROCDEF*)((uint8*)PROCDEF$1 + 696ll);
	}
	label$18:;
	goto label$16;
	label$17:;
	label$15:;
}

struct $8FBSYMBOL* RTLPROCLOOKUP( uint8* PNAME$1, int64 PIDX$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$88:;
	struct $10FBSYMCHAIN* CHAIN_$1;
	if( *(struct $8FBSYMBOL**)((uint8*)RTLLOOKUPTB$ + (PIDX$1 << 3ll)) != (struct $8FBSYMBOL*)0ull ) goto label$91;
	{
		struct $10FBSYMCHAIN* vr$4 = SYMBLOOKUPAT( (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll), PNAME$1, 0ll, 0ll );
		CHAIN_$1 = vr$4;
		if( CHAIN_$1 != (struct $10FBSYMCHAIN*)0ull ) goto label$93;
		{
			if( *(int64*)((uint8*)&ENV$ + 272ll) != 3ll ) goto label$95;
			{
				FBSTRING TMP$91$4;
				static FBSTRING TMP_NAME$4;
				__builtin_memset( &TMP$91$4, 0, 24ll );
				FBSTRING* vr$9 = fb_StrConcat( &TMP$91$4, (void*)"__", 3ll, (void*)PNAME$1, 0ll );
				FBSTRING* vr$10 = fb_StrAssign( (void*)&TMP_NAME$4, -1ll, (void*)vr$9, -1ll, 0 );
				PNAME$1 = *(uint8**)&TMP_NAME$4;
				struct $10FBSYMCHAIN* vr$12 = SYMBLOOKUPAT( (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll), PNAME$1, 0ll, 0ll );
				CHAIN_$1 = vr$12;
				if( CHAIN_$1 != (struct $10FBSYMCHAIN*)0ull ) goto label$97;
				{
					ERRREPORTEX( 8ll, PNAME$1, 0ll, 1ll, (uint8*)0ull );
					*(struct $8FBSYMBOL**)((uint8*)RTLLOOKUPTB$ + (PIDX$1 << 3ll)) = (struct $8FBSYMBOL*)0ull;
				}
				goto label$96;
				label$97:;
				{
					*(struct $8FBSYMBOL**)((uint8*)RTLLOOKUPTB$ + (PIDX$1 << 3ll)) = *(struct $8FBSYMBOL**)CHAIN_$1;
				}
				label$96:;
			}
			goto label$94;
			label$95:;
			{
				ERRREPORTEX( 8ll, PNAME$1, 0ll, 1ll, (uint8*)0ull );
				*(struct $8FBSYMBOL**)((uint8*)RTLLOOKUPTB$ + (PIDX$1 << 3ll)) = (struct $8FBSYMBOL*)0ull;
			}
			label$94:;
		}
		goto label$92;
		label$93:;
		{
			*(struct $8FBSYMBOL**)((uint8*)RTLLOOKUPTB$ + (PIDX$1 << 3ll)) = *(struct $8FBSYMBOL**)CHAIN_$1;
		}
		label$92:;
	}
	label$91:;
	label$90:;
	fb$result$1 = *(struct $8FBSYMBOL**)((uint8*)RTLLOOKUPTB$ + (PIDX$1 << 3ll));
	label$89:;
	return fb$result$1;
}

struct $7ASTNODE* RTLOVLPROCCALL( struct $8FBSYMBOL* SYM$1, struct $7ASTNODE* PARAM1$1, struct $7ASTNODE* PARAM2$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$98:;
	$9FB_ERRMSG ERR_NUM$1;
	int64 ARGS$1;
	ARGS$1 = 0ll;
	struct $16FB_CALL_ARG_LIST ARG_LIST$1;
	*(int64*)&ARG_LIST$1 = 0ll;
	*(struct $11FB_CALL_ARG**)((uint8*)&ARG_LIST$1 + 8ll) = (struct $11FB_CALL_ARG*)0ull;
	*(struct $11FB_CALL_ARG**)((uint8*)&ARG_LIST$1 + 16ll) = (struct $11FB_CALL_ARG*)0ull;
	struct $11FB_CALL_ARG* ARG$1;
	struct $11FB_CALL_ARG* vr$7 = SYMBALLOCOVLCALLARG( (struct $5TLIST*)&CTX$, &ARG_LIST$1, 0ll );
	ARG$1 = vr$7;
	*(struct $7ASTNODE**)ARG$1 = PARAM1$1;
	*($12FB_PARAMMODE*)((uint8*)ARG$1 + 8ll) = 1ll;
	ARGS$1 = ARGS$1 + 1ll;
	if( PARAM2$1 == (struct $7ASTNODE*)0ull ) goto label$101;
	{
		struct $11FB_CALL_ARG* vr$14 = SYMBALLOCOVLCALLARG( (struct $5TLIST*)&CTX$, &ARG_LIST$1, 0ll );
		ARG$1 = vr$14;
		*(struct $7ASTNODE**)ARG$1 = PARAM2$1;
		*($12FB_PARAMMODE*)((uint8*)ARG$1 + 8ll) = 1ll;
		ARGS$1 = ARGS$1 + 1ll;
	}
	label$101:;
	label$100:;
	struct $8FBSYMBOL* PROC$1;
	struct $8FBSYMBOL* vr$19 = SYMBFINDCLOSESTOVLPROC( SYM$1, ARGS$1, *(struct $11FB_CALL_ARG**)((uint8*)&ARG_LIST$1 + 8ll), &ERR_NUM$1, 0ll );
	PROC$1 = vr$19;
	if( PROC$1 != (struct $8FBSYMBOL*)0ull ) goto label$103;
	{
		SYMBFREEOVLCALLARGS( (struct $5TLIST*)&CTX$, &ARG_LIST$1 );
		fb$result$1 = (struct $7ASTNODE*)0ull;
		goto label$99;
	}
	label$103:;
	label$102:;
	struct $7ASTNODE* PROCEXPR$1;
	struct $7ASTNODE* vr$23 = ASTNEWCALL( PROC$1, (struct $7ASTNODE*)0ull );
	PROCEXPR$1 = vr$23;
	ARG$1 = *(struct $11FB_CALL_ARG**)((uint8*)&ARG_LIST$1 + 8ll);
	label$104:;
	if( ARG$1 == (struct $11FB_CALL_ARG*)0ull ) goto label$105;
	{
		struct $11FB_CALL_ARG* NXT$2;
		NXT$2 = *(struct $11FB_CALL_ARG**)((uint8*)ARG$1 + 16ll);
		struct $7ASTNODE* vr$28 = ASTNEWARG( PROCEXPR$1, *(struct $7ASTNODE**)ARG$1, 2147483648ll, *(int64*)((uint8*)ARG$1 + 8ll) );
		if( vr$28 != (struct $7ASTNODE*)0ull ) goto label$107;
		{
			fb$result$1 = (struct $7ASTNODE*)0ull;
			goto label$99;
		}
		label$107:;
		label$106:;
		LISTDELNODE( (struct $5TLIST*)&CTX$, (void*)ARG$1 );
		ARG$1 = NXT$2;
	}
	goto label$104;
	label$105:;
	fb$result$1 = PROCEXPR$1;
	label$99:;
	return fb$result$1;
}

int64 RTLCALCEXPRLEN( struct $7ASTNODE* EXPR$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$108:;
	struct $8FBSYMBOL* S$1;
	int64 DTYPE$1;
	DTYPE$1 = *(int64*)((uint8*)EXPR$1 + 8ll) & 511ll;
	{
		uint64 TMP$92$2;
		TMP$92$2 = (uint64)DTYPE$1;
		goto label$111;
		label$112:;
		{
			int64 vr$3 = RTLCALCSTRLEN( EXPR$1, DTYPE$1 );
			fb$result$1 = vr$3;
		}
		goto label$110;
		label$113:;
		{
			int64 vr$5 = SYMBCALCLEN( DTYPE$1, *(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 16ll) );
			fb$result$1 = vr$5;
		}
		goto label$110;
		label$111:;
		static const void* tmp$93[15ll] = {
			&&label$112,
			&&label$113,
			&&label$113,
			&&label$112,
			&&label$113,
			&&label$113,
			&&label$113,
			&&label$113,
			&&label$113,
			&&label$113,
			&&label$113,
			&&label$113,
			&&label$113,
			&&label$113,
			&&label$112,
		};
		if( TMP$92$2 < 3ll ) goto label$113;
		if( TMP$92$2 > 17ll ) goto label$113;
		goto *tmp$93[TMP$92$2 - 3ll];
		label$110:;
	}
	label$109:;
	return fb$result$1;
}

int64 RTLCALCSTRLEN( struct $7ASTNODE* EXPR$1, int64 DTYPE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$114:;
	struct $8FBSYMBOL* S$1;
	__builtin_memset( &S$1, 0, 8ll );
	{
		int64 TMP$94$2;
		uint64 TMP$95$2;
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$116;
		TMP$94$2 = 22ll;
		goto label$131;
		label$116:;
		TMP$94$2 = DTYPE$1 & 31ll;
		label$131:;
		TMP$95$2 = (uint64)TMP$94$2;
		goto label$118;
		label$119:;
		{
			fb$result$1 = 0ll;
		}
		goto label$117;
		label$120:;
		{
			S$1 = *(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 24ll);
			if( S$1 != (struct $8FBSYMBOL*)0ull ) goto label$122;
			{
				fb$result$1 = 0ll;
			}
			goto label$121;
			label$122:;
			{
				if( (*(int64*)((uint8*)S$1 + 48ll) & 511ll) == (DTYPE$1 & 511ll) ) goto label$124;
				{
					fb$result$1 = 0ll;
				}
				goto label$123;
				label$124:;
				{
					fb$result$1 = *(int64*)((uint8*)S$1 + 72ll);
				}
				label$123:;
			}
			label$121:;
		}
		goto label$117;
		label$125:;
		{
			S$1 = *(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 24ll);
			if( S$1 != (struct $8FBSYMBOL*)0ull ) goto label$127;
			{
				fb$result$1 = 0ll;
			}
			goto label$126;
			label$127:;
			{
				if( (*(int64*)((uint8*)S$1 + 48ll) & 511ll) == (DTYPE$1 & 511ll) ) goto label$129;
				{
					fb$result$1 = 0ll;
				}
				goto label$128;
				label$129:;
				{
					fb$result$1 = *(int64*)((uint8*)S$1 + 72ll) / *(int64*)((uint8*)SYMB_DTYPETB$ + 344ll);
				}
				label$128:;
			}
			label$126:;
		}
		goto label$117;
		label$130:;
		{
			fb$result$1 = -1ll;
		}
		goto label$117;
		label$118:;
		static const void* tmp$96[17ll] = {
			&&label$119,
			&&label$119,
			&&label$120,
			&&label$130,
			&&label$130,
			&&label$125,
			&&label$130,
			&&label$130,
			&&label$130,
			&&label$130,
			&&label$130,
			&&label$130,
			&&label$130,
			&&label$130,
			&&label$130,
			&&label$130,
			&&label$120,
		};
		if( TMP$95$2 < 1ll ) goto label$130;
		if( TMP$95$2 > 17ll ) goto label$130;
		goto *tmp$96[TMP$95$2 - 1ll];
		label$117:;
	}
	label$115:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__rtl( void )
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

// Total compilation time: 0.0343429435743019 seconds.
