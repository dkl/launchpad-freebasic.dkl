// Compilation of fbc-1.01.0/src/compiler/symb-proc.bas started at 14:16:45 on 02-28-2015

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
struct $20FB_GLOBCTORLIST_ITEM;
struct $20FB_GLOBCTORLIST_ITEM {
	struct $8FBSYMBOL* SYM;
	struct $20FB_GLOBCTORLIST_ITEM* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $20FB_GLOBCTORLIST_ITEM ) == 16 );
typedef int64 $10FB_SYMBOPT;
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
typedef int64 $16FB_SYMBLOOKUPOPT;
struct $11FB_CALL_ARG;
struct $11FB_CALL_ARG {
	struct $7ASTNODE* EXPR;
	$12FB_PARAMMODE MODE;
	struct $11FB_CALL_ARG* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $11FB_CALL_ARG ) == 24 );
typedef int64 $9FB_ERRMSG;
struct $15FB_GLOBCTORLIST {
	struct $20FB_GLOBCTORLIST_ITEM* HEAD;
	struct $20FB_GLOBCTORLIST_ITEM* TAIL;
	struct $5TLIST LIST;
};
__FB_STATIC_ASSERT( sizeof( struct $15FB_GLOBCTORLIST ) == 80 );
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
void free( void* );
FBSTRING* fb_StrInit( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
FBSTRING* fb_StrConcatAssign( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAllocTempResult( FBSTRING* );
FBSTRING* fb_HEX_l( uint64 );
static void fb_ctor__symbzproc( void ) __attribute__(( constructor ));
void* XCALLOCATE( int32 );
void LISTINIT( struct $5TLIST*, int64, int64, $10LIST_FLAGS );
void LISTEND( struct $5TLIST* );
void* LISTNEWNODE( struct $5TLIST* );
void LISTDELNODE( struct $5TLIST*, void* );
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
typedef int64 $12FB_ERRMSGOPT;
void ERRREPORTEX( int64, uint8*, int64, $12FB_ERRMSGOPT, uint8* );
void ERRREPORT( int64, int64, uint8* );
void ERRREPORTPARAM( struct $8FBSYMBOL*, int64, uint8*, int64 );
struct $7ASTNODE* ASTADD( struct $7ASTNODE* );
int64 ASTPTRCHECK( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTNEWDECL( struct $8FBSYMBOL*, int64 );
typedef int64 $11AST_CONVOPT;
int64 ASTCHECKCONVNONPTRTOPTR( int64, int64, struct $7ASTNODE*, $11AST_CONVOPT );
struct $10FBSYMCHAIN* SYMBLOOKUPAT( struct $8FBSYMBOL*, uint8*, int64, int64 );
struct $8FBSYMBOL* SYMBLOOKUPBYNAMEANDCLASS( struct $8FBSYMBOL*, uint8*, int64, int64, int64 );
struct $8FBSYMBOL* SYMBFINDOVERLOADPROC( struct $8FBSYMBOL*, struct $8FBSYMBOL*, $16FB_SYMBLOOKUPOPT );
struct $8FBSYMBOL* SYMBFINDOPOVLPROC( $6AST_OP, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBFINDCLOSESTOVLPROC( struct $8FBSYMBOL*, int64, struct $11FB_CALL_ARG*, $9FB_ERRMSG*, $16FB_SYMBLOOKUPOPT );
struct $8FBSYMBOL* SYMBFINDCASTOVLPROC( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, $9FB_ERRMSG* );
struct $8FBSYMBOL* SYMBFINDCTOROVLPROC( struct $8FBSYMBOL*, struct $7ASTNODE*, $12FB_PARAMMODE, $9FB_ERRMSG* );
int64 SYMBPARAMISSAME( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
void SYMBPROCSETVTABLEINDEX( struct $8FBSYMBOL*, int64 );
int64 SYMBPROCGETVTABLEINDEX( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBPROCGETOVERRIDDEN( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBGETPROCRESULT( struct $8FBSYMBOL* );
int64 SYMBAREPROCMODESEQUAL( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBADDARRAYDESCRIPTORTYPE( int64, int64, struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBADDVAR( uint8*, uint8*, int64, struct $8FBSYMBOL*, int64, int64, struct $7FBARRAYI10FBARRAYDIME*, int64, $10FB_SYMBOPT );
struct $8FBSYMBOL* SYMBADDPROCPARAM( struct $8FBSYMBOL*, uint8*, int64, struct $8FBSYMBOL*, int64, int64, $13FB_SYMBATTRIB );
void SYMBMAKEPARAMOPTIONAL( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $8FBSYMBOL* SYMBADDPROC( struct $8FBSYMBOL*, uint8*, uint8*, int64, struct $8FBSYMBOL*, int64, int64, $10FB_SYMBOPT );
struct $8FBSYMBOL* SYMBLOOKUPINTERNALLYMANGLEDSUBTYPE( uint8*, int64*, struct $8FBSYMBOL**, struct $10FBSYMBOLTB**, struct $8FBHASHTB** );
struct $8FBSYMBOL* SYMBADDPROCPTR( struct $8FBSYMBOL*, int64, struct $8FBSYMBOL*, int64, int64 );
struct $8FBSYMBOL* SYMBPREADDPROC( uint8* );
void _Z21SYMBGETREALPARAMDTYPElP8FBSYMBOLRlRS0_( int64, struct $8FBSYMBOL*, int64*, struct $8FBSYMBOL** );
void SYMBPROCALLOCEXT( struct $8FBSYMBOL* );
void SYMBPROCFREEEXT( struct $8FBSYMBOL* );
int64 SYMBPROCRETURNSONSTACK( struct $8FBSYMBOL* );
int64 SYMBCALCARGLEN( int64, struct $8FBSYMBOL*, int64 );
int64 SYMBCALCPARAMLEN( int64, struct $8FBSYMBOL*, $12FB_PARAMMODE );
struct $8FBSYMBOL* SYMBNEWSYMBOL( $10FB_SYMBOPT, struct $8FBSYMBOL*, struct $10FBSYMBOLTB*, struct $8FBHASHTB*, $12FB_SYMBCLASS, uint8*, uint8*, int64, struct $8FBSYMBOL*, $13FB_SYMBATTRIB );
void SYMBFREESYMBOL( struct $8FBSYMBOL* );
int64 SYMBCALCLEN( int64, struct $8FBSYMBOL* );
int64 TYPEISTRIVIAL( int64, struct $8FBSYMBOL* );
int64 TYPEHASFWDREFINSIGNATURE( int64, struct $8FBSYMBOL* );
uint8* SYMBUNIQUEID( void );
void SYMBMANGLERESETABBREV( void );
void SYMBMANGLETYPE( FBSTRING*, int64, struct $8FBSYMBOL* );
FBSTRING* HDUMPDYNAMICARRAYDIMENSIONS( int64 );
FBSTRING* SYMBTYPETOSTR( int64, struct $8FBSYMBOL*, int64 );
int64 SYMBGETDEFTYPE( uint8* );
void SYMBSETCOMPCTORHEAD( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
void SYMBCHECKCOMPCTOR( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
void SYMBSETCOMPDTOR( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBGETCOMPCTORHEAD( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBGETCOMPDTOR( struct $8FBSYMBOL* );
void SYMBCHECKCOMPLETOP( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBGETCOMPOPOVLHEAD( struct $8FBSYMBOL*, $6AST_OP );
void SYMBSETCOMPOPOVLHEAD( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
int64 SYMBCOMPADDVIRTUAL( struct $8FBSYMBOL* );
int64 SYMBCHECKACCESS( struct $8FBSYMBOL* );
uint8* SYMBGETFULLPROCNAME( struct $8FBSYMBOL* );
int64 SYMBGETDEFAULTPARAMMODE( int64, struct $8FBSYMBOL* );
int64 SYMBCHECKCONSTASSIGN( $11FB_DATATYPE, $11FB_DATATYPE, struct $8FBSYMBOL*, struct $8FBSYMBOL*, $12FB_PARAMMODE, int64* );
int64 SYMBGETUDTBASELEVEL( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
void SYMBPROCRECALCREALTYPE( struct $8FBSYMBOL* );
static int64 HALIGNTOPOW2( int64, int64 );
static int64 HCANOVERLOAD( struct $8FBSYMBOL* );
static int64 HCANOVERLOADBYDESC( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static struct $8FBSYMBOL* HADDOVLPROC( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $10FBSYMBOLTB*, struct $8FBHASHTB*, uint8*, uint8*, int64, struct $8FBSYMBOL*, $13FB_SYMBATTRIB, int64 );
static struct $8FBSYMBOL* HADDOPOVLPROC( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $10FBSYMBOLTB*, struct $8FBHASHTB*, $6AST_OP, uint8*, int64, struct $8FBSYMBOL*, $13FB_SYMBATTRIB );
static struct $8FBSYMBOL* HSETUPPROC( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $10FBSYMBOLTB*, struct $8FBHASHTB*, uint8*, uint8*, int64, struct $8FBSYMBOL*, int64, int64, $10FB_SYMBOPT );
static int64 HCALCTYPESDIFF( int64, struct $8FBSYMBOL*, int64, int64, struct $8FBSYMBOL*, struct $7ASTNODE*, $12FB_PARAMMODE );
static int64 HCHECKOVLPARAM( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $7ASTNODE*, int64, int64* );
static int64 HCHECKCASTOVL( struct $8FBSYMBOL*, int64, struct $8FBSYMBOL* );
static void HDELPARAMS( struct $8FBSYMBOL* );
static struct $20FB_GLOBCTORLIST_ITEM* HADDTOGLOBCTORLIST( struct $15FB_GLOBCTORLIST*, struct $8FBSYMBOL* );
static int64 HAREMETHODSCOMPATIBLE( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static void HSUBORFUNCTOSTR( FBSTRING*, struct $8FBSYMBOL* );
static void HPROCMODETOSTR( FBSTRING*, struct $8FBSYMBOL* );
static void HPARAMSTOSTR( FBSTRING*, struct $8FBSYMBOL* );
static void HRESULTTOSTR( FBSTRING*, struct $8FBSYMBOL* );
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
extern struct $10AST_OPINFO AST_OPTB$[116];
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
extern int64 SYMB_DTYPEMATCHTB$[15][15];
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

void SYMBPROCINIT( void )
{
	label$10:;
	*(struct $20FB_GLOBCTORLIST_ITEM**)((uint8*)&SYMB$ + 198008ll) = (struct $20FB_GLOBCTORLIST_ITEM*)0ull;
	*(struct $20FB_GLOBCTORLIST_ITEM**)((uint8*)&SYMB$ + 198016ll) = (struct $20FB_GLOBCTORLIST_ITEM*)0ull;
	LISTINIT( (struct $5TLIST*)((uint8*)&SYMB$ + 198024ll), 8ll, 16ll, 6ll );
	*(struct $20FB_GLOBCTORLIST_ITEM**)((uint8*)&SYMB$ + 198088ll) = (struct $20FB_GLOBCTORLIST_ITEM*)0ull;
	*(struct $20FB_GLOBCTORLIST_ITEM**)((uint8*)&SYMB$ + 198096ll) = (struct $20FB_GLOBCTORLIST_ITEM*)0ull;
	LISTINIT( (struct $5TLIST*)((uint8*)&SYMB$ + 198104ll), 8ll, 16ll, 6ll );
	label$11:;
}

void SYMBPROCEND( void )
{
	label$12:;
	LISTEND( (struct $5TLIST*)((uint8*)&SYMB$ + 198104ll) );
	LISTEND( (struct $5TLIST*)((uint8*)&SYMB$ + 198024ll) );
	label$13:;
}

void SYMBPROCALLOCEXT( struct $8FBSYMBOL* PROC$1 )
{
	label$14:;
	if( *(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) != (struct $10FB_PROCEXT*)0ull ) goto label$17;
	{
		void* vr$2 = XCALLOCATE( 152 );
		*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) = (struct $10FB_PROCEXT*)vr$2;
	}
	label$17:;
	label$16:;
	label$15:;
}

void SYMBPROCFREEEXT( struct $8FBSYMBOL* PROC$1 )
{
	label$18:;
	if( *(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) == (struct $10FB_PROCEXT*)0ull ) goto label$21;
	{
		free( *(void**)((uint8*)PROC$1 + 200ll) );
		*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) = (struct $10FB_PROCEXT*)0ull;
	}
	label$21:;
	label$20:;
	label$19:;
}

int64 SYMBPROCRETURNSONSTACK( struct $8FBSYMBOL* PROC$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$22:;
	if( (*(int64*)((uint8*)PROC$1 + 8ll) & 33554432ll) == 0ll ) goto label$25;
	{
		goto label$23;
	}
	label$25:;
	label$24:;
	if( (*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) != 18ll ) goto label$27;
	{
		fb$result$1 = (int64)-((*(int64*)((uint8*)PROC$1 + 152ll) & 511ll) == 50ll);
	}
	label$27:;
	label$26:;
	label$23:;
	return fb$result$1;
}

int64 SYMBCALCARGLEN( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, int64 MODE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$30:;
	{
		if( MODE$1 == 2ll ) goto label$34;
		label$35:;
		if( MODE$1 != 3ll ) goto label$33;
		label$34:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 472ll);
			goto label$31;
		}
		label$33:;
		label$32:;
	}
	int64 vr$3 = TYPEISTRIVIAL( DTYPE$1, SUBTYPE$1 );
	if( vr$3 != 0ll ) goto label$37;
	{
		fb$result$1 = *(int64*)((uint8*)&ENV$ + 472ll);
		goto label$31;
	}
	label$37:;
	label$36:;
	int64 vr$5 = SYMBCALCLEN( DTYPE$1, SUBTYPE$1 );
	int64 vr$6 = HALIGNTOPOW2( vr$5, *(int64*)((uint8*)&ENV$ + 472ll) );
	fb$result$1 = vr$6;
	label$31:;
	return fb$result$1;
}

int64 SYMBCALCPARAMLEN( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, $12FB_PARAMMODE MODE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$38:;
	if( MODE$1 != 4ll ) goto label$41;
	{
		fb$result$1 = 0ll;
	}
	goto label$40;
	label$41:;
	{
		int64 vr$2 = SYMBCALCARGLEN( DTYPE$1, SUBTYPE$1, MODE$1 );
		fb$result$1 = vr$2;
	}
	label$40:;
	label$39:;
	return fb$result$1;
}

int64 SYMBCALCPROCPARAMSLEN( struct $8FBSYMBOL* PROC$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$42:;
	int64 LENGTH$1;
	struct $8FBSYMBOL* PARAM$1;
	PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 128ll);
	LENGTH$1 = 0ll;
	label$44:;
	if( PARAM$1 == (struct $8FBSYMBOL*)0ull ) goto label$45;
	{
		LENGTH$1 = LENGTH$1 + *(int64*)((uint8*)PARAM$1 + 72ll);
		PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 296ll);
	}
	goto label$44;
	label$45:;
	fb$result$1 = LENGTH$1;
	label$43:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBADDPROCPARAM( struct $8FBSYMBOL* PROC$1, uint8* ID$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, int64 DIMENSIONS$1, int64 MODE$1, $13FB_SYMBATTRIB ATTRIB$1 )
{
	int64 TMP$85$1;
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$46:;
	struct $8FBSYMBOL* PARAM$1;
	fb$result$1 = (struct $8FBSYMBOL*)0ull;
	struct $8FBSYMBOL* vr$3 = SYMBNEWSYMBOL( 1ll, (struct $8FBSYMBOL*)0ull, (struct $10FBSYMBOLTB*)((uint8*)PROC$1 + 120ll), (struct $8FBHASHTB*)0ull, 4ll, ID$1, (uint8*)0ull, DTYPE$1, SUBTYPE$1, ATTRIB$1 );
	PARAM$1 = vr$3;
	if( PARAM$1 != (struct $8FBSYMBOL*)0ull ) goto label$49;
	{
		goto label$47;
	}
	label$49:;
	label$48:;
	*(int16*)((uint8*)PROC$1 + 112ll) = (int16)((int64)*(int16*)((uint8*)PROC$1 + 112ll) + 1ll);
	int64 vr$10 = SYMBCALCPARAMLEN( DTYPE$1, SUBTYPE$1, MODE$1 );
	*(int64*)((uint8*)PARAM$1 + 72ll) = vr$10;
	*($12FB_PARAMMODE*)((uint8*)PARAM$1 + 88ll) = MODE$1;
	*(struct $7ASTNODE**)((uint8*)PARAM$1 + 104ll) = (struct $7ASTNODE*)0ull;
	*(int64*)((uint8*)PARAM$1 + 112ll) = DIMENSIONS$1;
	if( MODE$1 != 3ll ) goto label$51;
	{
		struct $8FBSYMBOL* vr$16 = SYMBADDARRAYDESCRIPTORTYPE( DIMENSIONS$1, DTYPE$1, SUBTYPE$1 );
		*(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 120ll) = vr$16;
	}
	goto label$50;
	label$51:;
	{
		*(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 120ll) = (struct $8FBSYMBOL*)0ull;
	}
	label$50:;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$52;
	TMP$85$1 = 22ll;
	goto label$59;
	label$52:;
	TMP$85$1 = DTYPE$1 & 31ll;
	label$59:;
	if( TMP$85$1 != 18ll ) goto label$54;
	{
		if( MODE$1 != 1ll ) goto label$56;
		{
			if( SUBTYPE$1 != *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll) ) goto label$58;
			{
				*(int16*)((uint8*)SUBTYPE$1 + 200ll) = (int16)((int64)*(int16*)((uint8*)SUBTYPE$1 + 200ll) | 32ll);
			}
			label$58:;
			label$57:;
		}
		label$56:;
		label$55:;
	}
	label$54:;
	label$53:;
	fb$result$1 = PARAM$1;
	label$47:;
	return fb$result$1;
}

void SYMBMAKEPARAMOPTIONAL( struct $8FBSYMBOL* PROC$1, struct $8FBSYMBOL* PARAM$1, struct $7ASTNODE* OPTEXPR$1 )
{
	label$60:;
	if( OPTEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$63;
	{
		goto label$61;
	}
	label$63:;
	label$62:;
	*($13FB_SYMBATTRIB*)((uint8*)PARAM$1 + 8ll) = *(int64*)((uint8*)PARAM$1 + 8ll) | 2097152ll;
	*(struct $7ASTNODE**)((uint8*)PARAM$1 + 104ll) = OPTEXPR$1;
	*(int16*)((uint8*)PROC$1 + 114ll) = (int16)((int64)*(int16*)((uint8*)PROC$1 + 114ll) + 1ll);
	label$61:;
}

int64 SYMBISPROCOVERLOADOF( struct $8FBSYMBOL* PROC$1, struct $8FBSYMBOL* HEAD_PROC$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$64:;
	struct $8FBSYMBOL* F$1;
	if( HEAD_PROC$1 != (struct $8FBSYMBOL*)0ull ) goto label$67;
	{
		fb$result$1 = 0ll;
		goto label$65;
	}
	label$67:;
	label$66:;
	if( PROC$1 != HEAD_PROC$1 ) goto label$69;
	{
		fb$result$1 = -1ll;
		goto label$65;
	}
	label$69:;
	label$68:;
	if( (int64)-((*(int64*)((uint8*)HEAD_PROC$1 + 8ll) & 1024ll) != 0ll) != 0ll ) goto label$71;
	{
		fb$result$1 = 0ll;
		goto label$65;
	}
	label$71:;
	label$70:;
	F$1 = *(struct $8FBSYMBOL**)((uint8*)HEAD_PROC$1 + 192ll);
	label$72:;
	if( F$1 == (struct $8FBSYMBOL*)0ull ) goto label$73;
	{
		if( PROC$1 != F$1 ) goto label$75;
		{
			fb$result$1 = -1ll;
			goto label$65;
		}
		label$75:;
		label$74:;
		F$1 = *(struct $8FBSYMBOL**)((uint8*)F$1 + 192ll);
	}
	goto label$72;
	label$73:;
	fb$result$1 = 0ll;
	goto label$65;
	label$65:;
	return fb$result$1;
}

void SYMBPROCRECALCREALTYPE( struct $8FBSYMBOL* PROC$1 )
{
	label$76:;
	int64 DTYPE$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	DTYPE$1 = *(int64*)((uint8*)PROC$1 + 48ll);
	SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 56ll);
	if( (*(int64*)((uint8*)PROC$1 + 8ll) & 33554432ll) == 0ll ) goto label$79;
	{
		DTYPE$1 = ((DTYPE$1 & 31ll) | ((DTYPE$1 & 480ll) + 32ll)) | ((DTYPE$1 & 261632ll) << 1ll);
	}
	label$79:;
	label$78:;
	{
		int64 TMP$86$2;
		TMP$86$2 = DTYPE$1 & 511ll;
		if( TMP$86$2 == 16ll ) goto label$82;
		label$83:;
		if( TMP$86$2 != 6ll ) goto label$81;
		label$82:;
		{
			DTYPE$1 = ((DTYPE$1 & 31ll) | ((DTYPE$1 & 480ll) + 32ll)) | ((DTYPE$1 & 261632ll) << 1ll);
		}
		goto label$80;
		label$81:;
		if( TMP$86$2 != 18ll ) goto label$84;
		label$85:;
		{
			if( SUBTYPE$1 != *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll) ) goto label$87;
			{
				*(int16*)((uint8*)SUBTYPE$1 + 200ll) = (int16)((int64)*(int16*)((uint8*)SUBTYPE$1 + 200ll) | 64ll);
			}
			goto label$86;
			label$87:;
			{
				DTYPE$1 = *(int64*)((uint8*)SUBTYPE$1 + 208ll);
				if( (DTYPE$1 & 31ll) == 18ll ) goto label$89;
				{
					SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
				}
				label$89:;
				label$88:;
			}
			label$86:;
		}
		label$84:;
		label$80:;
	}
	*($11FB_DATATYPE*)((uint8*)PROC$1 + 152ll) = DTYPE$1;
	*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 160ll) = SUBTYPE$1;
	label$77:;
}

struct $8FBSYMBOL* SYMBADDPROC( struct $8FBSYMBOL* PROC$1, uint8* ID$1, uint8* ID_ALIAS$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, int64 ATTRIB$1, int64 MODE$1, $10FB_SYMBOPT OPTIONS$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$280:;
	struct $8FBSYMBOL* PARENT$1;
	struct $10FBSYMBOLTB* SYMTB$1;
	struct $8FBHASHTB* HASHTB$1;
	PARENT$1 = *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll);
	SYMTB$1 = (struct $10FBSYMBOLTB*)((uint8*)PARENT$1 + 88ll);
	HASHTB$1 = (struct $8FBHASHTB*)((uint8*)PARENT$1 + 112ll);
	ATTRIB$1 = ATTRIB$1 | 1ll;
	struct $8FBSYMBOL* vr$6 = HSETUPPROC( PROC$1, PARENT$1, SYMTB$1, HASHTB$1, ID$1, ID_ALIAS$1, DTYPE$1, SUBTYPE$1, ATTRIB$1, MODE$1, OPTIONS$1 );
	fb$result$1 = vr$6;
	label$281:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBADDOPERATOR( struct $8FBSYMBOL* PROC$1, $6AST_OP OP$1, uint8* ID_ALIAS$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, int64 ATTRIB$1, int64 MODE$1, $10FB_SYMBOPT OPTIONS$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$282:;
	struct $8FBSYMBOL* SYM$1;
	SYMBPROCALLOCEXT( PROC$1 );
	*($6AST_OP*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 80ll) = OP$1;
	struct $8FBSYMBOL* vr$3 = SYMBADDPROC( PROC$1, (uint8*)0ull, ID_ALIAS$1, DTYPE$1, SUBTYPE$1, ATTRIB$1, MODE$1, OPTIONS$1 );
	SYM$1 = vr$3;
	if( SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$285;
	{
		SYMBPROCFREEEXT( PROC$1 );
		goto label$283;
	}
	label$285:;
	label$284:;
	fb$result$1 = SYM$1;
	label$283:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBADDCTOR( struct $8FBSYMBOL* PROC$1, uint8* ID_ALIAS$1, int64 ATTRIB$1, int64 MODE$1, $10FB_SYMBOPT OPTIONS$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$286:;
	struct $8FBSYMBOL* vr$1 = SYMBADDPROC( PROC$1, (uint8*)0ull, ID_ALIAS$1, 0ll, (struct $8FBSYMBOL*)0ull, ATTRIB$1, MODE$1, OPTIONS$1 );
	fb$result$1 = vr$1;
	label$287:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBLOOKUPINTERNALLYMANGLEDSUBTYPE( uint8* ID$1, int64* ATTRIB$1, struct $8FBSYMBOL** PARENT$1, struct $10FBSYMBOLTB** SYMTB$1, struct $8FBHASHTB** HASHTB$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$288:;
	struct $10FBSYMCHAIN* CHAIN_$1;
	if( *(uint64*)((uint8*)&PARSER$ + 184ll) != 0ull ) goto label$291;
	{
		*PARENT$1 = (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll);
		*SYMTB$1 = (struct $10FBSYMBOLTB*)((uint8*)*PARENT$1 + 88ll);
		*HASHTB$1 = (struct $8FBHASHTB*)((uint8*)*PARENT$1 + 112ll);
		*ATTRIB$1 = *ATTRIB$1 | 1ll;
	}
	goto label$290;
	label$291:;
	{
		*PARENT$1 = *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll);
		*SYMTB$1 = *(struct $10FBSYMBOLTB**)((uint8*)&SYMB$ + 197024ll);
		*HASHTB$1 = (struct $8FBHASHTB*)((uint8*)*PARENT$1 + 112ll);
		*ATTRIB$1 = *ATTRIB$1 | 128ll;
	}
	label$290:;
	struct $10FBSYMCHAIN* vr$25 = SYMBLOOKUPAT( *PARENT$1, ID$1, -1ll, 0ll );
	CHAIN_$1 = vr$25;
	if( CHAIN_$1 == (struct $10FBSYMCHAIN*)0ull ) goto label$293;
	{
		fb$result$1 = *(struct $8FBSYMBOL**)CHAIN_$1;
	}
	label$293:;
	label$292:;
	label$289:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBADDPROCPTR( struct $8FBSYMBOL* PROC$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, int64 ATTRIB$1, int64 MODE$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$294:;
	struct $8FBSYMBOL* SYM$1;
	struct $8FBSYMBOL* PARENT$1;
	struct $10FBSYMBOLTB* SYMTB$1;
	struct $8FBHASHTB* HASHTB$1;
	FBSTRING ID$1;
	__builtin_memset( &ID$1, 0, 24ll );
	*($13FB_SYMBATTRIB*)((uint8*)PROC$1 + 8ll) = *(int64*)((uint8*)PROC$1 + 8ll) | ATTRIB$1;
	*($11FB_DATATYPE*)((uint8*)PROC$1 + 48ll) = DTYPE$1;
	*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 56ll) = SUBTYPE$1;
	fb_StrAssign( (void*)&ID$1, -1ll, (void*)"{fbfp}", 7ll, 0 );
	SYMBMANGLETYPE( &ID$1, 20ll, PROC$1 );
	SYMBMANGLERESETABBREV(  );
	FBSTRING* vr$10 = fb_StrConcatAssign( (void*)&ID$1, -1ll, (void*)"$", 2ll, 0 );
	FBSTRING* vr$11 = fb_HEX_l( (uint64)MODE$1 );
	FBSTRING* vr$13 = fb_StrConcatAssign( (void*)&ID$1, -1ll, (void*)vr$11, -1ll, 0 );
	struct $8FBSYMBOL* vr$18 = SYMBLOOKUPINTERNALLYMANGLEDSUBTYPE( *(uint8**)&ID$1, &ATTRIB$1, &PARENT$1, &SYMTB$1, &HASHTB$1 );
	SYM$1 = vr$18;
	if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$297;
	{
		fb$result$1 = SYM$1;
		fb_StrDelete( &ID$1 );
		goto label$295;
	}
	label$297:;
	label$296:;
	uint8* vr$21 = SYMBUNIQUEID(  );
	struct $8FBSYMBOL* vr$22 = HSETUPPROC( PROC$1, PARENT$1, SYMTB$1, HASHTB$1, *(uint8**)&ID$1, vr$21, DTYPE$1, SUBTYPE$1, ATTRIB$1, MODE$1, 5ll );
	SYM$1 = vr$22;
	if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$299;
	{
		*($12FB_SYMBSTATS*)((uint8*)SYM$1 + 16ll) = *(int64*)((uint8*)SYM$1 + 16ll) | 16384ll;
	}
	label$299:;
	label$298:;
	fb$result$1 = SYM$1;
	fb_StrDelete( &ID$1 );
	label$295:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBADDPROCPTRFROMFUNCTION( struct $8FBSYMBOL* BASE_PROC$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$300:;
	struct $8FBSYMBOL* PROC$1;
	struct $8FBSYMBOL* vr$1 = SYMBPREADDPROC( (uint8*)0ull );
	PROC$1 = vr$1;
	*($21FB_PROC_RETURN_METHOD*)((uint8*)PROC$1 + 168ll) = *($21FB_PROC_RETURN_METHOD*)((uint8*)BASE_PROC$1 + 168ll);
	struct $8FBSYMBOL* PARAM$1;
	PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)BASE_PROC$1 + 128ll);
	label$302:;
	if( PARAM$1 == (struct $8FBSYMBOL*)0ull ) goto label$303;
	{
		struct $8FBSYMBOL* P$2;
		struct $8FBSYMBOL* vr$11 = SYMBADDPROCPARAM( PROC$1, (uint8*)0ull, *(int64*)((uint8*)PARAM$1 + 48ll), *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll), *(int64*)((uint8*)PARAM$1 + 112ll), *(int64*)((uint8*)PARAM$1 + 88ll), *($13FB_SYMBATTRIB*)((uint8*)PARAM$1 + 8ll) );
		P$2 = vr$11;
		if( (*(int64*)((uint8*)PARAM$1 + 16ll) & 2048ll) == 0ll ) goto label$305;
		{
			*($12FB_SYMBSTATS*)((uint8*)P$2 + 16ll) = *(int64*)((uint8*)P$2 + 16ll) | 2048ll;
		}
		label$305:;
		label$304:;
		SYMBMAKEPARAMOPTIONAL( PROC$1, P$2, *(struct $7ASTNODE**)((uint8*)PARAM$1 + 104ll) );
		PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 296ll);
	}
	goto label$302;
	label$303:;
	struct $8FBSYMBOL* vr$25 = SYMBADDPROCPTR( PROC$1, *(int64*)((uint8*)BASE_PROC$1 + 48ll), *(struct $8FBSYMBOL**)((uint8*)BASE_PROC$1 + 56ll), *(int64*)((uint8*)BASE_PROC$1 + 8ll) & 33554432ll, *(int64*)((uint8*)BASE_PROC$1 + 144ll) );
	fb$result$1 = vr$25;
	label$301:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBPREADDPROC( uint8* SYMBOL$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$306:;
	struct $8FBSYMBOL* PROC$1;
	void* vr$2 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&SYMB$ + 8ll) );
	PROC$1 = (struct $8FBSYMBOL*)vr$2;
	*($12FB_SYMBCLASS*)PROC$1 = 3ll;
	*($13FB_SYMBATTRIB*)((uint8*)PROC$1 + 8ll) = 0ll;
	*($12FB_SYMBSTATS*)((uint8*)PROC$1 + 16ll) = 0ll;
	*(uint8**)((uint8*)PROC$1 + 24ll) = SYMBOL$1;
	*(uint8**)((uint8*)PROC$1 + 32ll) = (uint8*)0ull;
	*(uint8**)((uint8*)PROC$1 + 40ll) = (uint8*)0ull;
	*($11FB_DATATYPE*)((uint8*)PROC$1 + 48ll) = 2147483648ll;
	*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 56ll) = (struct $8FBSYMBOL*)0ull;
	*(uint16*)((uint8*)PROC$1 + 64ll) = (uint16)0u;
	*(int16*)((uint8*)PROC$1 + 66ll) = (int16)0;
	*(int64*)((uint8*)PROC$1 + 72ll) = 0ll;
	*(int64*)((uint8*)PROC$1 + 80ll) = 0ll;
	*(int16*)((uint8*)PROC$1 + 112ll) = (int16)0;
	*(int16*)((uint8*)PROC$1 + 114ll) = (int16)0;
	*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 120ll) = PROC$1;
	*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 128ll) = (struct $8FBSYMBOL*)0ull;
	*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 136ll) = (struct $8FBSYMBOL*)0ull;
	*($11FB_FUNCMODE*)((uint8*)PROC$1 + 144ll) = *($11FB_FUNCMODE*)((uint8*)&ENV$ + 432ll);
	*($11FB_DATATYPE*)((uint8*)PROC$1 + 152ll) = 2147483648ll;
	*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 160ll) = (struct $8FBSYMBOL*)0ull;
	*($21FB_PROC_RETURN_METHOD*)((uint8*)PROC$1 + 168ll) = 0ll;
	*(tmp$28*)((uint8*)PROC$1 + 176ll) = (tmp$28)0ull;
	*(int16*)((uint8*)PROC$1 + 184ll) = (int16)0;
	*(int16*)((uint8*)PROC$1 + 186ll) = (int16)0;
	*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 192ll) = (struct $8FBSYMBOL*)0ull;
	*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) = (struct $10FB_PROCEXT*)0ull;
	*(struct $10FBSYMBOLTB**)((uint8*)PROC$1 + 272ll) = (struct $10FBSYMBOLTB*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll) + 88ll);
	*(struct $8FBHASHTB**)((uint8*)PROC$1 + 232ll) = (struct $8FBHASHTB*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll) + 112ll);
	*(struct $8HASHITEM**)((uint8*)PROC$1 + 240ll) = (struct $8HASHITEM*)0ull;
	*(uint64*)((uint8*)PROC$1 + 248ll) = 0ull;
	*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 256ll) = (struct $8FBSYMBOL*)0ull;
	*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 264ll) = (struct $8FBSYMBOL*)0ull;
	*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 280ll) = (struct $8FBSYMBOL*)0ull;
	*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 288ll) = (struct $8FBSYMBOL*)0ull;
	*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 296ll) = (struct $8FBSYMBOL*)0ull;
	fb$result$1 = PROC$1;
	label$307:;
	return fb$result$1;
}

void _Z21SYMBGETREALPARAMDTYPElP8FBSYMBOLRlRS0_( int64 PARAMMODE$1, struct $8FBSYMBOL* BYDESCREALSUBTYPE$1, int64* DTYPE$1, struct $8FBSYMBOL** SUBTYPE$1 )
{
	label$308:;
	{
		if( PARAMMODE$1 != 1ll ) goto label$311;
		label$312:;
		{
			int64 vr$3 = TYPEISTRIVIAL( *DTYPE$1, *SUBTYPE$1 );
			if( vr$3 != 0ll ) goto label$314;
			{
				*DTYPE$1 = ((*DTYPE$1 & 31ll) | ((*DTYPE$1 & 480ll) + 32ll)) | ((*DTYPE$1 & 261632ll) << 1ll);
			}
			label$314:;
			label$313:;
		}
		goto label$310;
		label$311:;
		if( PARAMMODE$1 != 2ll ) goto label$315;
		label$316:;
		{
			*DTYPE$1 = ((*DTYPE$1 & 31ll) | ((*DTYPE$1 & 480ll) + 32ll)) | ((*DTYPE$1 & 261632ll) << 1ll);
		}
		goto label$310;
		label$315:;
		if( PARAMMODE$1 != 3ll ) goto label$317;
		label$318:;
		{
			*DTYPE$1 = 50ll;
			*SUBTYPE$1 = BYDESCREALSUBTYPE$1;
		}
		label$317:;
		label$310:;
	}
	label$309:;
}

void _Z21SYMBGETREALPARAMDTYPEP8FBSYMBOLRlRS0_( struct $8FBSYMBOL* PARAM$1, int64* DTYPE$1, struct $8FBSYMBOL** SUBTYPE$1 )
{
	label$319:;
	*DTYPE$1 = *(int64*)((uint8*)PARAM$1 + 48ll) & 511ll;
	*SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll);
	_Z21SYMBGETREALPARAMDTYPElP8FBSYMBOLRlRS0_( *(int64*)((uint8*)PARAM$1 + 88ll), *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 120ll), DTYPE$1, SUBTYPE$1 );
	label$320:;
}

struct $8FBSYMBOL* SYMBADDVARFORPARAM( struct $8FBSYMBOL* PARAM$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$321:;
	struct $10FBARRAYDIM DTB$1[1];
	struct $8FBARRAY1I10FBARRAYDIME {
		struct $10FBARRAYDIM* DATA;
		struct $10FBARRAYDIM* PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I10FBARRAYDIME ) == 64 );
	struct $8FBARRAY1I10FBARRAYDIME tmp$90$1;
	*(struct $10FBARRAYDIM**)&tmp$90$1 = (struct $10FBARRAYDIM*)DTB$1;
	*(struct $10FBARRAYDIM**)((uint8*)&tmp$90$1 + 8ll) = (struct $10FBARRAYDIM*)DTB$1;
	*(int64*)((uint8*)&tmp$90$1 + 16ll) = 16ll;
	*(int64*)((uint8*)&tmp$90$1 + 24ll) = 16ll;
	*(int64*)((uint8*)&tmp$90$1 + 32ll) = 1ll;
	*(int64*)((uint8*)&tmp$90$1 + 40ll) = 1ll;
	*(int64*)((uint8*)&tmp$90$1 + 48ll) = 0ll;
	*(int64*)((uint8*)&tmp$90$1 + 56ll) = 0ll;
	struct $8FBSYMBOL* S$1;
	int64 ATTRIB$1;
	int64 DTYPE$1;
	int64 DIMENSIONS$1;
	fb$result$1 = (struct $8FBSYMBOL*)0ull;
	DTYPE$1 = *(int64*)((uint8*)PARAM$1 + 48ll);
	{
		uint64 TMP$91$2;
		TMP$91$2 = *(uint64*)((uint8*)PARAM$1 + 88ll);
		goto label$324;
		label$325:;
		{
			ATTRIB$1 = 131072ll;
			int64 vr$20 = TYPEISTRIVIAL( DTYPE$1, *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll) );
			if( vr$20 != 0ll ) goto label$327;
			{
				ATTRIB$1 = 262144ll;
			}
			label$327:;
			label$326:;
		}
		goto label$323;
		label$328:;
		{
			ATTRIB$1 = 262144ll;
		}
		goto label$323;
		label$329:;
		{
			ATTRIB$1 = 65536ll;
		}
		goto label$323;
		label$330:;
		{
			goto label$322;
		}
		goto label$323;
		label$324:;
		static const void* tmp$92[3ll] = {
			&&label$325,
			&&label$328,
			&&label$329,
		};
		if( TMP$91$2 < 1ll ) goto label$330;
		if( TMP$91$2 > 3ll ) goto label$330;
		goto *tmp$92[TMP$91$2 - 1ll];
		label$323:;
	}
	if( (*(int64*)((uint8*)PARAM$1 + 8ll) & 2048ll) == 0ll ) goto label$332;
	{
		ATTRIB$1 = ATTRIB$1 | 2048ll;
	}
	label$332:;
	label$331:;
	if( (*(int64*)((uint8*)PARAM$1 + 8ll) & 268435456ll) == 0ll ) goto label$334;
	{
		ATTRIB$1 = ATTRIB$1 | 268435456ll;
	}
	label$334:;
	label$333:;
	struct $8FBSYMBOL* vr$34 = SYMBADDVAR( *(uint8**)((uint8*)PARAM$1 + 24ll), (uint8*)0ull, DTYPE$1, *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll), 0ll, *(int64*)((uint8*)PARAM$1 + 112ll), (struct $7FBARRAYI10FBARRAYDIME*)&tmp$90$1, ATTRIB$1, 0ll );
	S$1 = vr$34;
	if( S$1 != (struct $8FBSYMBOL*)0ull ) goto label$336;
	{
		goto label$322;
	}
	label$336:;
	label$335:;
	*(struct $8FBSYMBOL**)((uint8*)S$1 + 136ll) = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 120ll);
	*($12FB_SYMBSTATS*)((uint8*)S$1 + 16ll) = *(int64*)((uint8*)S$1 + 16ll) | 8ll;
	if( (*(int64*)((uint8*)PARAM$1 + 16ll) & 2048ll) == 0ll ) goto label$338;
	{
		*($12FB_SYMBSTATS*)((uint8*)S$1 + 16ll) = *(int64*)((uint8*)S$1 + 16ll) | 2048ll;
	}
	label$338:;
	label$337:;
	if( (*(int64*)((uint8*)PARAM$1 + 16ll) & 524288ll) == 0ll ) goto label$340;
	{
		*($12FB_SYMBSTATS*)((uint8*)S$1 + 16ll) = *(int64*)((uint8*)S$1 + 16ll) | 524288ll;
	}
	label$340:;
	label$339:;
	fb$result$1 = S$1;
	label$322:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBADDPROCRESULTPARAM( struct $8FBSYMBOL* PROC$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$341:;
	struct $10FBARRAYDIM DTB$1[1];
	struct $8FBARRAY1I10FBARRAYDIME {
		struct $10FBARRAYDIM* DATA;
		struct $10FBARRAYDIM* PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I10FBARRAYDIME ) == 64 );
	struct $8FBARRAY1I10FBARRAYDIME tmp$93$1;
	*(struct $10FBARRAYDIM**)&tmp$93$1 = (struct $10FBARRAYDIM*)DTB$1;
	*(struct $10FBARRAYDIM**)((uint8*)&tmp$93$1 + 8ll) = (struct $10FBARRAYDIM*)DTB$1;
	*(int64*)((uint8*)&tmp$93$1 + 16ll) = 16ll;
	*(int64*)((uint8*)&tmp$93$1 + 24ll) = 16ll;
	*(int64*)((uint8*)&tmp$93$1 + 32ll) = 1ll;
	*(int64*)((uint8*)&tmp$93$1 + 40ll) = 1ll;
	*(int64*)((uint8*)&tmp$93$1 + 48ll) = 0ll;
	*(int64*)((uint8*)&tmp$93$1 + 56ll) = 0ll;
	struct $8FBSYMBOL* S$1;
	int64 vr$17 = SYMBPROCRETURNSONSTACK( PROC$1 );
	if( vr$17 != 0ll ) goto label$344;
	{
		fb$result$1 = (struct $8FBSYMBOL*)0ull;
		goto label$342;
	}
	label$344:;
	label$343:;
	uint8* vr$21 = SYMBUNIQUEID(  );
	struct $8FBSYMBOL* vr$22 = SYMBADDVAR( vr$21, (uint8*)0ull, 18ll, *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 56ll), 0ll, 0ll, (struct $7FBARRAYI10FBARRAYDIME*)&tmp$93$1, 262144ll, 1ll );
	S$1 = vr$22;
	SYMBPROCALLOCEXT( PROC$1 );
	*(struct $8FBSYMBOL**)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) = S$1;
	*($12FB_SYMBSTATS*)((uint8*)S$1 + 16ll) = *(int64*)((uint8*)S$1 + 16ll) | 8ll;
	*($12FB_SYMBSTATS*)((uint8*)S$1 + 16ll) = *(int64*)((uint8*)S$1 + 16ll) | 16ll;
	fb$result$1 = S$1;
	label$342:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBADDPROCRESULT( struct $8FBSYMBOL* PROC$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$345:;
	struct $10FBARRAYDIM DTB$1[1];
	struct $8FBARRAY1I10FBARRAYDIME {
		struct $10FBARRAYDIM* DATA;
		struct $10FBARRAYDIM* PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I10FBARRAYDIME ) == 64 );
	struct $8FBARRAY1I10FBARRAYDIME tmp$94$1;
	*(struct $10FBARRAYDIM**)&tmp$94$1 = (struct $10FBARRAYDIM*)DTB$1;
	*(struct $10FBARRAYDIM**)((uint8*)&tmp$94$1 + 8ll) = (struct $10FBARRAYDIM*)DTB$1;
	*(int64*)((uint8*)&tmp$94$1 + 16ll) = 16ll;
	*(int64*)((uint8*)&tmp$94$1 + 24ll) = 16ll;
	*(int64*)((uint8*)&tmp$94$1 + 32ll) = 1ll;
	*(int64*)((uint8*)&tmp$94$1 + 40ll) = 1ll;
	*(int64*)((uint8*)&tmp$94$1 + 48ll) = 0ll;
	*(int64*)((uint8*)&tmp$94$1 + 56ll) = 0ll;
	struct $8FBSYMBOL* RES$1;
	int64 DTYPE$1;
	uint8* ID$1;
	int64 vr$17 = SYMBPROCRETURNSONSTACK( PROC$1 );
	if( vr$17 == 0ll ) goto label$348;
	{
		struct $8FBSYMBOL* vr$19 = SYMBGETPROCRESULT( PROC$1 );
		fb$result$1 = vr$19;
		goto label$346;
	}
	label$348:;
	label$347:;
	DTYPE$1 = *(int64*)((uint8*)PROC$1 + 48ll);
	if( (*(int64*)((uint8*)PROC$1 + 8ll) & 33554432ll) == 0ll ) goto label$350;
	{
		DTYPE$1 = ((DTYPE$1 & 31ll) | ((DTYPE$1 & 480ll) + 32ll)) | ((DTYPE$1 & 261632ll) << 1ll);
	}
	label$350:;
	label$349:;
	struct $8FBSYMBOL* vr$33 = SYMBADDVAR( (uint8*)"fb$result", (uint8*)0ull, DTYPE$1, *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 56ll), 0ll, 0ll, (struct $7FBARRAYI10FBARRAYDIME*)&tmp$94$1, 16777216ll, 1ll );
	RES$1 = vr$33;
	SYMBPROCALLOCEXT( PROC$1 );
	*(struct $8FBSYMBOL**)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) = RES$1;
	struct $7ASTNODE* vr$36 = ASTNEWDECL( RES$1, -1ll );
	ASTADD( vr$36 );
	*($12FB_SYMBSTATS*)((uint8*)RES$1 + 16ll) = *(int64*)((uint8*)RES$1 + 16ll) | 8ll;
	*($12FB_SYMBSTATS*)((uint8*)RES$1 + 16ll) = *(int64*)((uint8*)RES$1 + 16ll) | 16ll;
	fb$result$1 = RES$1;
	label$346:;
	return fb$result$1;
}

void SYMBADDPROCINSTANCEPTR( struct $8FBSYMBOL* PARENT$1, struct $8FBSYMBOL* PROC$1 )
{
	label$351:;
	int64 DTYPE$1;
	{
		$12FB_SYMBCLASS TMP$96$2;
		TMP$96$2 = *($12FB_SYMBCLASS*)PARENT$1;
		if( TMP$96$2 != 10ll ) goto label$354;
		label$355:;
		{
			DTYPE$1 = 18ll;
		}
		goto label$353;
		label$354:;
		if( TMP$96$2 != 11ll ) goto label$356;
		label$357:;
		{
		}
		label$356:;
		label$353:;
	}
	if( (*(int64*)((uint8*)PROC$1 + 8ll) & 1048576ll) == 0ll ) goto label$359;
	{
		DTYPE$1 = DTYPE$1 | 512ll;
	}
	label$359:;
	label$358:;
	SYMBADDPROCPARAM( PROC$1, (uint8*)"THIS", DTYPE$1, PARENT$1, 0ll, 2ll, 2048ll );
	label$352:;
}

struct $8FBSYMBOL* SYMBFINDOVERLOADPROC( struct $8FBSYMBOL* OVL_HEAD_PROC$1, struct $8FBSYMBOL* PROC$1, $16FB_SYMBLOOKUPOPT OPTIONS$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$360:;
	struct $8FBSYMBOL* OVL$1;
	struct $8FBSYMBOL* OVL_PARAM$1;
	struct $8FBSYMBOL* PARAM$1;
	struct $8FBSYMBOL* OVL_SUBTYPE$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	int64 OVL_PARAMS$1;
	int64 PARAMS$1;
	int64 I$1;
	if( ((int64)-(OVL_HEAD_PROC$1 == (struct $8FBSYMBOL*)0ull) | (int64)-(PROC$1 == (struct $8FBSYMBOL*)0ull)) == 0ll ) goto label$363;
	{
		fb$result$1 = (struct $8FBSYMBOL*)0ull;
		goto label$361;
	}
	label$363:;
	label$362:;
	if( ((int64)-(*(int64*)OVL_HEAD_PROC$1 != 3ll) | (int64)-(*(int64*)PROC$1 != 3ll)) == 0ll ) goto label$365;
	{
		fb$result$1 = (struct $8FBSYMBOL*)0ull;
		goto label$361;
	}
	label$365:;
	label$364:;
	PARAMS$1 = (int64)*(int16*)((uint8*)PROC$1 + 112ll);
	if( (*(int64*)((uint8*)PROC$1 + 8ll) & 2048ll) == 0ll ) goto label$367;
	{
		PARAMS$1 = PARAMS$1 + -1ll;
	}
	label$367:;
	label$366:;
	int64 IS_PROPERTY$1;
	IS_PROPERTY$1 = (int64)-((*(int64*)((uint8*)OVL_HEAD_PROC$1 + 8ll) & 32768ll) != 0ll);
	OVL$1 = OVL_HEAD_PROC$1;
	label$368:;
	{
		OVL_PARAMS$1 = (int64)*(int16*)((uint8*)OVL$1 + 112ll);
		if( (*(int64*)((uint8*)OVL$1 + 8ll) & 2048ll) == 0ll ) goto label$372;
		{
			OVL_PARAMS$1 = OVL_PARAMS$1 + -1ll;
		}
		label$372:;
		label$371:;
		if( IS_PROPERTY$1 == 0ll ) goto label$374;
		{
			if( (OPTIONS$1 & 1ll) == 0ll ) goto label$376;
			{
				if( (*(int64*)((uint8*)OVL$1 + 48ll) & 511ll) != 0ll ) goto label$378;
				{
					OVL_PARAMS$1 = -1ll;
				}
				label$378:;
				label$377:;
			}
			goto label$375;
			label$376:;
			{
				if( (*(int64*)((uint8*)OVL$1 + 48ll) & 511ll) == 0ll ) goto label$380;
				{
					OVL_PARAMS$1 = -1ll;
				}
				label$380:;
				label$379:;
			}
			label$375:;
		}
		label$374:;
		label$373:;
		if( PARAMS$1 != OVL_PARAMS$1 ) goto label$382;
		{
			if( PARAMS$1 != 0ll ) goto label$384;
			{
				fb$result$1 = OVL$1;
				goto label$361;
			}
			label$384:;
			label$383:;
			OVL_PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)OVL$1 + 136ll);
			PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 136ll);
			label$385:;
			{
				int64 vr$39 = HCANOVERLOADBYDESC( PARAM$1, OVL_PARAM$1 );
				if( vr$39 == 0ll ) goto label$389;
				{
					goto label$386;
				}
				label$389:;
				label$388:;
				if( *(int64*)((uint8*)PARAM$1 + 48ll) == *(int64*)((uint8*)OVL_PARAM$1 + 48ll) ) goto label$391;
				{
					goto label$386;
				}
				label$391:;
				label$390:;
				if( *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll) == *(struct $8FBSYMBOL**)((uint8*)OVL_PARAM$1 + 56ll) ) goto label$393;
				{
					goto label$386;
				}
				label$393:;
				label$392:;
				PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 288ll);
				OVL_PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)OVL_PARAM$1 + 288ll);
				OVL_PARAMS$1 = OVL_PARAMS$1 + -1ll;
			}
			label$387:;
			if( OVL_PARAMS$1 > 0ll ) goto label$385;
			label$386:;
			if( OVL_PARAMS$1 != 0ll ) goto label$395;
			{
				fb$result$1 = OVL$1;
				goto label$361;
			}
			label$395:;
			label$394:;
		}
		label$382:;
		label$381:;
		OVL$1 = *(struct $8FBSYMBOL**)((uint8*)OVL$1 + 192ll);
	}
	label$370:;
	if( OVL$1 != (struct $8FBSYMBOL*)0ull ) goto label$368;
	label$369:;
	fb$result$1 = (struct $8FBSYMBOL*)0ull;
	label$361:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBFINDOPOVLPROC( $6AST_OP OP$1, struct $8FBSYMBOL* OVL_HEAD_PROC$1, struct $8FBSYMBOL* PROC$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$396:;
	struct $8FBSYMBOL* OVL$1;
	if( OP$1 == 27ll ) goto label$399;
	{
		struct $8FBSYMBOL* vr$2 = SYMBFINDOVERLOADPROC( OVL_HEAD_PROC$1, PROC$1, 0ll );
		fb$result$1 = vr$2;
		goto label$397;
	}
	label$399:;
	label$398:;
	OVL$1 = OVL_HEAD_PROC$1;
	label$400:;
	if( OVL$1 == (struct $8FBSYMBOL*)0ull ) goto label$401;
	{
		if( *(int64*)((uint8*)PROC$1 + 48ll) != *(int64*)((uint8*)OVL$1 + 48ll) ) goto label$403;
		{
			if( *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 56ll) != *(struct $8FBSYMBOL**)((uint8*)OVL$1 + 56ll) ) goto label$405;
			{
				fb$result$1 = OVL$1;
				goto label$397;
			}
			label$405:;
			label$404:;
		}
		label$403:;
		label$402:;
		OVL$1 = *(struct $8FBSYMBOL**)((uint8*)OVL$1 + 192ll);
	}
	goto label$400;
	label$401:;
	fb$result$1 = (struct $8FBSYMBOL*)0ull;
	label$397:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBFINDCTORPROC( struct $8FBSYMBOL* OVL_HEAD_PROC$1, struct $8FBSYMBOL* PROC$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$406:;
	if( (*(int64*)((uint8*)OVL_HEAD_PROC$1 + 8ll) & 8192ll) == 0ll ) goto label$409;
	{
		fb$result$1 = OVL_HEAD_PROC$1;
		goto label$407;
	}
	goto label$408;
	label$409:;
	{
		struct $8FBSYMBOL* vr$4 = SYMBFINDOVERLOADPROC( OVL_HEAD_PROC$1, PROC$1, 0ll );
		fb$result$1 = vr$4;
		goto label$407;
	}
	label$408:;
	label$407:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBFINDCLOSESTOVLPROC( struct $8FBSYMBOL* OVL_HEAD_PROC$1, int64 ARGS$1, struct $11FB_CALL_ARG* ARG_HEAD$1, $9FB_ERRMSG* ERR_NUM$1, $16FB_SYMBLOOKUPOPT OPTIONS$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$585:;
	struct $8FBSYMBOL* OVL$1;
	struct $8FBSYMBOL* CLOSEST_PROC$1;
	struct $8FBSYMBOL* PARAM$1;
	int64 ARG_MATCHES$1;
	int64 MATCHES$1;
	int64 MAX_MATCHES$1;
	int64 EXACT_MATCHES$1;
	int64 MATCHCOUNT$1;
	int64 CONSTONLY_DIFF$1;
	struct $11FB_CALL_ARG* ARG$1;
	*ERR_NUM$1 = 0ll;
	if( OVL_HEAD_PROC$1 != (struct $8FBSYMBOL*)0ull ) goto label$588;
	{
		fb$result$1 = (struct $8FBSYMBOL*)0ull;
		goto label$586;
	}
	label$588:;
	label$587:;
	CLOSEST_PROC$1 = (struct $8FBSYMBOL*)0ull;
	MAX_MATCHES$1 = 0ll;
	MATCHCOUNT$1 = 0ll;
	int64 IS_PROPERTY$1;
	IS_PROPERTY$1 = (int64)-((*(int64*)((uint8*)OVL_HEAD_PROC$1 + 8ll) & 32768ll) != 0ll);
	OVL$1 = OVL_HEAD_PROC$1;
	label$589:;
	{
		int64 PARAMS$2;
		PARAMS$2 = (int64)*(int16*)((uint8*)OVL$1 + 112ll);
		if( (*(int64*)((uint8*)OVL$1 + 8ll) & 2048ll) == 0ll ) goto label$593;
		{
			PARAMS$2 = PARAMS$2 + -1ll;
		}
		label$593:;
		label$592:;
		if( IS_PROPERTY$1 == 0ll ) goto label$595;
		{
			if( (OPTIONS$1 & 1ll) == 0ll ) goto label$597;
			{
				if( (*(int64*)((uint8*)OVL$1 + 48ll) & 511ll) != 0ll ) goto label$599;
				{
					PARAMS$2 = -1ll;
				}
				label$599:;
				label$598:;
			}
			goto label$596;
			label$597:;
			{
				if( (*(int64*)((uint8*)OVL$1 + 48ll) & 511ll) == 0ll ) goto label$601;
				{
					PARAMS$2 = -1ll;
				}
				label$601:;
				label$600:;
			}
			label$596:;
		}
		label$595:;
		label$594:;
		if( ARGS$1 > PARAMS$2 ) goto label$603;
		{
			PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)OVL$1 + 128ll);
			if( (*(int64*)((uint8*)OVL$1 + 8ll) & 2048ll) == 0ll ) goto label$605;
			{
				PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 296ll);
			}
			label$605:;
			label$604:;
			MATCHES$1 = 0ll;
			EXACT_MATCHES$1 = 0ll;
			ARG$1 = ARG_HEAD$1;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$117$4;
				TMP$117$4 = ARGS$1 + -1ll;
				goto label$606;
				label$609:;
				{
					int64 vr$31 = HCHECKOVLPARAM( OVL$1, PARAM$1, *(struct $7ASTNODE**)ARG$1, *(int64*)((uint8*)ARG$1 + 8ll), &CONSTONLY_DIFF$1 );
					ARG_MATCHES$1 = vr$31;
					if( ARG_MATCHES$1 != 0ll ) goto label$611;
					{
						MATCHES$1 = 0ll;
						goto label$608;
					}
					label$611:;
					label$610:;
					if( (OPTIONS$1 & 2ll) == 0ll ) goto label$613;
					{
						if( ARG_MATCHES$1 != 48ll ) goto label$615;
						{
							EXACT_MATCHES$1 = EXACT_MATCHES$1 + 1ll;
						}
						label$615:;
						label$614:;
					}
					label$613:;
					label$612:;
					MATCHES$1 = MATCHES$1 + ARG_MATCHES$1;
					PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 296ll);
					ARG$1 = *(struct $11FB_CALL_ARG**)((uint8*)ARG$1 + 16ll);
				}
				label$607:;
				I$4 = I$4 + 1ll;
				label$606:;
				if( I$4 <= TMP$117$4 ) goto label$609;
				label$608:;
			}
			int64 IS_MATCH$3;
			IS_MATCH$3 = (int64)-(ARGS$1 == 0ll) | (int64)-(MATCHES$1 > 0ll);
			{
				int64 I$4;
				I$4 = ARGS$1;
				int64 TMP$118$4;
				TMP$118$4 = PARAMS$2 + -1ll;
				goto label$616;
				label$619:;
				{
					if( (int64)-((*(int64*)((uint8*)PARAM$1 + 8ll) & 2097152ll) != 0ll) != 0ll ) goto label$621;
					{
						IS_MATCH$3 = 0ll;
						goto label$618;
					}
					label$621:;
					label$620:;
					PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 296ll);
				}
				label$617:;
				I$4 = I$4 + 1ll;
				label$616:;
				if( I$4 <= TMP$118$4 ) goto label$619;
				label$618:;
			}
			if( IS_MATCH$3 == 0ll ) goto label$623;
			{
				if( ((int64)-(MATCHCOUNT$1 == 0ll) | (int64)-(MATCHES$1 > MAX_MATCHES$1)) == 0ll ) goto label$625;
				{
					int64 ELIGIBLE$5;
					ELIGIBLE$5 = -1ll;
					if( (OPTIONS$1 & 2ll) == 0ll ) goto label$627;
					{
						if( ((int64)-(EXACT_MATCHES$1 == 0ll) & (int64)-(CONSTONLY_DIFF$1 == 0ll)) == 0ll ) goto label$629;
						{
							ELIGIBLE$5 = 0ll;
						}
						label$629:;
						label$628:;
					}
					label$627:;
					label$626:;
					if( ELIGIBLE$5 == 0ll ) goto label$631;
					{
						CLOSEST_PROC$1 = OVL$1;
						MAX_MATCHES$1 = MATCHES$1;
						MATCHCOUNT$1 = 1ll;
					}
					label$631:;
					label$630:;
				}
				goto label$624;
				label$625:;
				if( MATCHES$1 != MAX_MATCHES$1 ) goto label$632;
				{
					MATCHCOUNT$1 = MATCHCOUNT$1 + 1ll;
				}
				label$632:;
				label$624:;
			}
			label$623:;
			label$622:;
		}
		label$603:;
		label$602:;
		OVL$1 = *(struct $8FBSYMBOL**)((uint8*)OVL$1 + 192ll);
	}
	label$591:;
	if( OVL$1 != (struct $8FBSYMBOL*)0ull ) goto label$589;
	label$590:;
	if( MATCHCOUNT$1 <= 1ll ) goto label$634;
	{
		*ERR_NUM$1 = 97ll;
		fb$result$1 = (struct $8FBSYMBOL*)0ull;
	}
	goto label$633;
	label$634:;
	{
		fb$result$1 = CLOSEST_PROC$1;
	}
	label$633:;
	label$586:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBFINDBOPOVLPROC( $6AST_OP OP$1, struct $7ASTNODE* L$1, struct $7ASTNODE* R$1, $9FB_ERRMSG* ERR_NUM$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$635:;
	struct $11FB_CALL_ARG ARG1$1;
	struct $11FB_CALL_ARG ARG2$1;
	struct $8FBSYMBOL* PROC$1;
	*ERR_NUM$1 = 0ll;
	{
		int64 TMP$119$2;
		TMP$119$2 = *(int64*)((uint8*)L$1 + 8ll) & 511ll;
		if( TMP$119$2 == 18ll ) goto label$639;
		label$640:;
		if( TMP$119$2 != 9ll ) goto label$638;
		label$639:;
		{
		}
		goto label$637;
		label$638:;
		{
			{
				int64 TMP$120$4;
				TMP$120$4 = *(int64*)((uint8*)R$1 + 8ll) & 511ll;
				if( TMP$120$4 == 18ll ) goto label$644;
				label$645:;
				if( TMP$120$4 != 9ll ) goto label$643;
				label$644:;
				{
				}
				goto label$642;
				label$643:;
				{
					fb$result$1 = (struct $8FBSYMBOL*)0ull;
					goto label$636;
				}
				label$646:;
				label$642:;
			}
		}
		label$641:;
		label$637:;
	}
	*(struct $7ASTNODE**)&ARG1$1 = L$1;
	*($12FB_PARAMMODE*)((uint8*)&ARG1$1 + 8ll) = -1ll;
	*(struct $11FB_CALL_ARG**)((uint8*)&ARG1$1 + 16ll) = &ARG2$1;
	*(struct $7ASTNODE**)&ARG2$1 = R$1;
	*($12FB_PARAMMODE*)((uint8*)&ARG2$1 + 8ll) = -1ll;
	*(struct $11FB_CALL_ARG**)((uint8*)&ARG2$1 + 16ll) = (struct $11FB_CALL_ARG*)0ull;
	struct $8FBSYMBOL* vr$14 = SYMBFINDCLOSESTOVLPROC( *(struct $8FBSYMBOL**)((uint8*)((uint8*)&SYMB$ + (OP$1 << 3ll)) + 198168ll), 2ll, &ARG1$1, ERR_NUM$1, 2ll );
	PROC$1 = vr$14;
	if( PROC$1 != (struct $8FBSYMBOL*)0ull ) goto label$648;
	{
		if( *(int64*)ERR_NUM$1 == 0ll ) goto label$650;
		{
			ERRREPORT( *(int64*)ERR_NUM$1, -1ll, (uint8*)0ull );
		}
		label$650:;
		label$649:;
	}
	label$648:;
	label$647:;
	fb$result$1 = PROC$1;
	label$636:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBFINDSELFBOPOVLPROC( $6AST_OP OP$1, struct $7ASTNODE* L$1, struct $7ASTNODE* R$1, $9FB_ERRMSG* ERR_NUM$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$651:;
	struct $11FB_CALL_ARG ARG1$1;
	struct $8FBSYMBOL* PROC$1;
	struct $8FBSYMBOL* HEAD_PROC$1;
	*ERR_NUM$1 = 0ll;
	{
		int64 TMP$121$2;
		TMP$121$2 = *(int64*)((uint8*)L$1 + 8ll) & 511ll;
		if( TMP$121$2 != 18ll ) goto label$654;
		label$655:;
		{
			struct $8FBSYMBOL* SUBTYPE$3;
			SUBTYPE$3 = *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll);
			if( *(struct $12FB_STRUCTEXT**)((uint8*)SUBTYPE$3 + 224ll) != (struct $12FB_STRUCTEXT*)0ull ) goto label$657;
			{
				fb$result$1 = (struct $8FBSYMBOL*)0ull;
				goto label$652;
			}
			label$657:;
			label$656:;
			HEAD_PROC$1 = *(struct $8FBSYMBOL**)((uint8*)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)SUBTYPE$3 + 224ll) + (OP$1 << 3ll)) + 56ll);
		}
		goto label$653;
		label$654:;
		{
			fb$result$1 = (struct $8FBSYMBOL*)0ull;
			goto label$652;
		}
		label$658:;
		label$653:;
	}
	if( HEAD_PROC$1 != (struct $8FBSYMBOL*)0ull ) goto label$660;
	{
		fb$result$1 = (struct $8FBSYMBOL*)0ull;
		goto label$652;
	}
	label$660:;
	label$659:;
	*(struct $7ASTNODE**)&ARG1$1 = R$1;
	*($12FB_PARAMMODE*)((uint8*)&ARG1$1 + 8ll) = -1ll;
	*(struct $11FB_CALL_ARG**)((uint8*)&ARG1$1 + 16ll) = (struct $11FB_CALL_ARG*)0ull;
	struct $8FBSYMBOL* vr$13 = SYMBFINDCLOSESTOVLPROC( HEAD_PROC$1, 1ll, &ARG1$1, ERR_NUM$1, 0ll );
	PROC$1 = vr$13;
	if( PROC$1 != (struct $8FBSYMBOL*)0ull ) goto label$662;
	{
		if( *(int64*)ERR_NUM$1 == 0ll ) goto label$664;
		{
			ERRREPORT( *(int64*)ERR_NUM$1, -1ll, (uint8*)0ull );
		}
		label$664:;
		label$663:;
	}
	goto label$661;
	label$662:;
	{
		int64 vr$18 = SYMBCHECKACCESS( PROC$1 );
		if( vr$18 != 0ll ) goto label$666;
		{
			*ERR_NUM$1 = 201ll;
			uint8* vr$21 = SYMBGETFULLPROCNAME( PROC$1 );
			ERRREPORTEX( 201ll, vr$21, 0ll, 1ll, (uint8*)0ull );
			PROC$1 = (struct $8FBSYMBOL*)0ull;
		}
		label$666:;
		label$665:;
	}
	label$661:;
	fb$result$1 = PROC$1;
	label$652:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBFINDUOPOVLPROC( $6AST_OP OP$1, struct $7ASTNODE* L$1, $9FB_ERRMSG* ERR_NUM$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$667:;
	struct $11FB_CALL_ARG ARG1$1;
	struct $8FBSYMBOL* PROC$1;
	*ERR_NUM$1 = 0ll;
	{
		int64 TMP$122$2;
		TMP$122$2 = *(int64*)((uint8*)L$1 + 8ll) & 511ll;
		if( TMP$122$2 == 18ll ) goto label$671;
		label$672:;
		if( TMP$122$2 != 9ll ) goto label$670;
		label$671:;
		{
		}
		goto label$669;
		label$670:;
		{
			fb$result$1 = (struct $8FBSYMBOL*)0ull;
			goto label$668;
		}
		label$673:;
		label$669:;
	}
	*(struct $7ASTNODE**)&ARG1$1 = L$1;
	*($12FB_PARAMMODE*)((uint8*)&ARG1$1 + 8ll) = -1ll;
	*(struct $11FB_CALL_ARG**)((uint8*)&ARG1$1 + 16ll) = (struct $11FB_CALL_ARG*)0ull;
	struct $8FBSYMBOL* vr$9 = SYMBFINDCLOSESTOVLPROC( *(struct $8FBSYMBOL**)((uint8*)((uint8*)&SYMB$ + (OP$1 << 3ll)) + 198168ll), 1ll, &ARG1$1, ERR_NUM$1, 0ll );
	PROC$1 = vr$9;
	if( PROC$1 != (struct $8FBSYMBOL*)0ull ) goto label$675;
	{
		if( *(int64*)ERR_NUM$1 == 0ll ) goto label$677;
		{
			ERRREPORT( *(int64*)ERR_NUM$1, -1ll, (uint8*)0ull );
		}
		label$677:;
		label$676:;
	}
	label$675:;
	label$674:;
	fb$result$1 = PROC$1;
	label$668:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBFINDSELFUOPOVLPROC( $6AST_OP OP$1, struct $7ASTNODE* L$1, $9FB_ERRMSG* ERR_NUM$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$678:;
	struct $8FBSYMBOL* PROC$1;
	struct $8FBSYMBOL* HEAD_PROC$1;
	*ERR_NUM$1 = 0ll;
	{
		int64 TMP$123$2;
		TMP$123$2 = *(int64*)((uint8*)L$1 + 8ll) & 511ll;
		if( TMP$123$2 != 18ll ) goto label$681;
		label$682:;
		{
			struct $8FBSYMBOL* SUBTYPE$3;
			SUBTYPE$3 = *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll);
			if( *(struct $12FB_STRUCTEXT**)((uint8*)SUBTYPE$3 + 224ll) != (struct $12FB_STRUCTEXT*)0ull ) goto label$684;
			{
				fb$result$1 = (struct $8FBSYMBOL*)0ull;
				goto label$679;
			}
			label$684:;
			label$683:;
			HEAD_PROC$1 = *(struct $8FBSYMBOL**)((uint8*)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)SUBTYPE$3 + 224ll) + (OP$1 << 3ll)) + 56ll);
		}
		goto label$680;
		label$681:;
		{
			fb$result$1 = (struct $8FBSYMBOL*)0ull;
			goto label$679;
		}
		label$685:;
		label$680:;
	}
	if( HEAD_PROC$1 != (struct $8FBSYMBOL*)0ull ) goto label$687;
	{
		fb$result$1 = (struct $8FBSYMBOL*)0ull;
		goto label$679;
	}
	label$687:;
	label$686:;
	struct $8FBSYMBOL* vr$12 = SYMBFINDCLOSESTOVLPROC( HEAD_PROC$1, 0ll, (struct $11FB_CALL_ARG*)0ull, ERR_NUM$1, 0ll );
	PROC$1 = vr$12;
	if( PROC$1 != (struct $8FBSYMBOL*)0ull ) goto label$689;
	{
		if( *(int64*)ERR_NUM$1 == 0ll ) goto label$691;
		{
			ERRREPORT( *(int64*)ERR_NUM$1, -1ll, (uint8*)0ull );
		}
		label$691:;
		label$690:;
	}
	goto label$688;
	label$689:;
	{
		int64 vr$17 = SYMBCHECKACCESS( PROC$1 );
		if( vr$17 != 0ll ) goto label$693;
		{
			*ERR_NUM$1 = 201ll;
			uint8* vr$20 = SYMBGETFULLPROCNAME( PROC$1 );
			ERRREPORTEX( 201ll, vr$20, 0ll, 1ll, (uint8*)0ull );
			PROC$1 = (struct $8FBSYMBOL*)0ull;
		}
		label$693:;
		label$692:;
	}
	label$688:;
	fb$result$1 = PROC$1;
	label$679:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBFINDCASTOVLPROC( int64 TO_DTYPE$1, struct $8FBSYMBOL* TO_SUBTYPE$1, struct $7ASTNODE* L$1, $9FB_ERRMSG* ERR_NUM$1 )
{
	int64 TMP$129$1;
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$712:;
	struct $8FBSYMBOL* PROC_HEAD$1;
	*ERR_NUM$1 = 0ll;
	{
		int64 TMP$128$2;
		TMP$128$2 = *(int64*)((uint8*)L$1 + 8ll) & 511ll;
		if( TMP$128$2 != 18ll ) goto label$715;
		label$716:;
		{
			struct $8FBSYMBOL* SUBTYPE$3;
			SUBTYPE$3 = *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll);
			if( SUBTYPE$3 != (struct $8FBSYMBOL*)0ull ) goto label$718;
			{
				fb$result$1 = (struct $8FBSYMBOL*)0ull;
				goto label$713;
			}
			label$718:;
			label$717:;
			if( *(struct $12FB_STRUCTEXT**)((uint8*)SUBTYPE$3 + 224ll) != (struct $12FB_STRUCTEXT*)0ull ) goto label$720;
			{
				fb$result$1 = (struct $8FBSYMBOL*)0ull;
				goto label$713;
			}
			label$720:;
			label$719:;
			PROC_HEAD$1 = *(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)SUBTYPE$3 + 224ll) + 272ll);
		}
		goto label$714;
		label$715:;
		{
			fb$result$1 = (struct $8FBSYMBOL*)0ull;
			goto label$713;
		}
		label$721:;
		label$714:;
	}
	if( PROC_HEAD$1 != (struct $8FBSYMBOL*)0ull ) goto label$723;
	{
		fb$result$1 = (struct $8FBSYMBOL*)0ull;
		goto label$713;
	}
	label$723:;
	label$722:;
	struct $8FBSYMBOL* P$1;
	struct $8FBSYMBOL* PROC$1;
	struct $8FBSYMBOL* CLOSEST_PROC$1;
	int64 MATCHES$1;
	int64 MAX_MATCHES$1;
	int64 MATCHCOUNT$1;
	CLOSEST_PROC$1 = (struct $8FBSYMBOL*)0ull;
	MAX_MATCHES$1 = 0ll;
	MATCHCOUNT$1 = 0ll;
	if( (TO_DTYPE$1 & 480ll) == 0ll ) goto label$724;
	TMP$129$1 = 22ll;
	goto label$748;
	label$724:;
	TMP$129$1 = TO_DTYPE$1 & 31ll;
	label$748:;
	if( TMP$129$1 == 0ll ) goto label$726;
	{
		PROC$1 = PROC_HEAD$1;
		label$727:;
		if( PROC$1 == (struct $8FBSYMBOL*)0ull ) goto label$728;
		{
			int64 vr$17 = HCHECKCASTOVL( PROC$1, TO_DTYPE$1, TO_SUBTYPE$1 );
			MATCHES$1 = vr$17;
			if( MATCHES$1 <= MAX_MATCHES$1 ) goto label$730;
			{
				CLOSEST_PROC$1 = PROC$1;
				MAX_MATCHES$1 = MATCHES$1;
				MATCHCOUNT$1 = 1ll;
			}
			goto label$729;
			label$730:;
			if( MATCHES$1 != MAX_MATCHES$1 ) goto label$731;
			{
				if( MAX_MATCHES$1 <= 0ll ) goto label$733;
				{
					MATCHCOUNT$1 = MATCHCOUNT$1 + 1ll;
				}
				label$733:;
				label$732:;
			}
			label$731:;
			label$729:;
			PROC$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 192ll);
		}
		goto label$727;
		label$728:;
	}
	goto label$725;
	label$726:;
	{
		PROC$1 = PROC_HEAD$1;
		label$734:;
		if( PROC$1 == (struct $8FBSYMBOL*)0ull ) goto label$735;
		{
			if( *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 56ll) != (struct $8FBSYMBOL*)0ull ) goto label$737;
			{
				if( (*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) > 15ll ) goto label$739;
				{
					if( (*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) <= TO_DTYPE$1 ) goto label$741;
					{
						CLOSEST_PROC$1 = PROC$1;
						TO_DTYPE$1 = *(int64*)((uint8*)PROC$1 + 48ll) & 511ll;
					}
					label$741:;
					label$740:;
				}
				label$739:;
				label$738:;
			}
			label$737:;
			label$736:;
			PROC$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 192ll);
		}
		goto label$734;
		label$735:;
	}
	label$725:;
	if( MATCHCOUNT$1 <= 1ll ) goto label$743;
	{
		*ERR_NUM$1 = 97ll;
		ERRREPORTPARAM( PROC_HEAD$1, 0ll, (uint8*)0ull, 97ll );
		CLOSEST_PROC$1 = (struct $8FBSYMBOL*)0ull;
	}
	goto label$742;
	label$743:;
	{
		if( CLOSEST_PROC$1 == (struct $8FBSYMBOL*)0ull ) goto label$745;
		{
			int64 vr$38 = SYMBCHECKACCESS( CLOSEST_PROC$1 );
			if( vr$38 != 0ll ) goto label$747;
			{
				*ERR_NUM$1 = 201ll;
				uint8* vr$41 = SYMBGETFULLPROCNAME( CLOSEST_PROC$1 );
				ERRREPORTEX( 201ll, vr$41, 0ll, 1ll, (uint8*)0ull );
				CLOSEST_PROC$1 = (struct $8FBSYMBOL*)0ull;
			}
			label$747:;
			label$746:;
		}
		label$745:;
		label$744:;
	}
	label$742:;
	fb$result$1 = CLOSEST_PROC$1;
	label$713:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBFINDCTOROVLPROC( struct $8FBSYMBOL* SYM$1, struct $7ASTNODE* EXPR$1, $12FB_PARAMMODE ARG_MODE$1, $9FB_ERRMSG* ERR_NUM$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$749:;
	struct $11FB_CALL_ARG ARG1$1;
	*(struct $7ASTNODE**)&ARG1$1 = EXPR$1;
	*($12FB_PARAMMODE*)((uint8*)&ARG1$1 + 8ll) = ARG_MODE$1;
	*(struct $11FB_CALL_ARG**)((uint8*)&ARG1$1 + 16ll) = (struct $11FB_CALL_ARG*)0ull;
	struct $8FBSYMBOL* vr$2 = SYMBGETCOMPCTORHEAD( SYM$1 );
	struct $8FBSYMBOL* vr$3 = SYMBFINDCLOSESTOVLPROC( vr$2, 1ll, &ARG1$1, ERR_NUM$1, 0ll );
	fb$result$1 = vr$3;
	label$750:;
	return fb$result$1;
}

void SYMBDELPROTOTYPE( struct $8FBSYMBOL* S$1 )
{
	label$755:;
	if( (int64)*(int16*)((uint8*)S$1 + 112ll) <= 0ll ) goto label$758;
	{
		HDELPARAMS( S$1 );
	}
	label$758:;
	label$757:;
	SYMBPROCFREEEXT( S$1 );
	SYMBFREESYMBOL( S$1 );
	label$756:;
}

struct $20FB_GLOBCTORLIST_ITEM* SYMBADDGLOBALCTOR( struct $8FBSYMBOL* PROC$1 )
{
	struct $20FB_GLOBCTORLIST_ITEM* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$763:;
	*($12FB_SYMBSTATS*)((uint8*)PROC$1 + 16ll) = *(int64*)((uint8*)PROC$1 + 16ll) | 65538ll;
	struct $20FB_GLOBCTORLIST_ITEM* vr$5 = HADDTOGLOBCTORLIST( (struct $15FB_GLOBCTORLIST*)((uint8*)&SYMB$ + 198008ll), PROC$1 );
	fb$result$1 = vr$5;
	label$764:;
	return fb$result$1;
}

struct $20FB_GLOBCTORLIST_ITEM* SYMBADDGLOBALDTOR( struct $8FBSYMBOL* PROC$1 )
{
	struct $20FB_GLOBCTORLIST_ITEM* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$765:;
	*($12FB_SYMBSTATS*)((uint8*)PROC$1 + 16ll) = *(int64*)((uint8*)PROC$1 + 16ll) | 131074ll;
	struct $20FB_GLOBCTORLIST_ITEM* vr$5 = HADDTOGLOBCTORLIST( (struct $15FB_GLOBCTORLIST*)((uint8*)&SYMB$ + 198088ll), PROC$1 );
	fb$result$1 = vr$5;
	label$766:;
	return fb$result$1;
}

int64 SYMBPARAMISSAME( struct $8FBSYMBOL* A$1, struct $8FBSYMBOL* B$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$767:;
	fb$result$1 = 0ll;
	if( (((int64)-(*(int64*)((uint8*)A$1 + 88ll) != *(int64*)((uint8*)B$1 + 88ll)) | (int64)-(*(int64*)((uint8*)A$1 + 48ll) != *(int64*)((uint8*)B$1 + 48ll))) | (int64)-(*(struct $8FBSYMBOL**)((uint8*)A$1 + 56ll) != *(struct $8FBSYMBOL**)((uint8*)B$1 + 56ll))) == 0ll ) goto label$770;
	{
		goto label$768;
	}
	label$770:;
	label$769:;
	if( *(int64*)((uint8*)A$1 + 88ll) != 3ll ) goto label$772;
	{
		if( *(int64*)((uint8*)A$1 + 112ll) == *(int64*)((uint8*)B$1 + 112ll) ) goto label$774;
		{
			goto label$768;
		}
		label$774:;
		label$773:;
	}
	label$772:;
	label$771:;
	fb$result$1 = -1ll;
	label$768:;
	return fb$result$1;
}

void SYMBPROCCHECKOVERRIDDEN( struct $8FBSYMBOL* PROC$1, int64 IS_IMPLICIT$1 )
{
	label$793:;
	struct $8FBSYMBOL* OVERRIDDEN$1;
	int64 ERRMSG$1;
	struct $8FBSYMBOL* vr$0 = SYMBPROCGETOVERRIDDEN( PROC$1 );
	OVERRIDDEN$1 = vr$0;
	if( OVERRIDDEN$1 == (struct $8FBSYMBOL*)0ull ) goto label$796;
	{
		int64 vr$2 = HAREMETHODSCOMPATIBLE( OVERRIDDEN$1, PROC$1 );
		ERRMSG$1 = vr$2;
		if( ERRMSG$1 == 0ll ) goto label$798;
		{
			if( (IS_IMPLICIT$1 & (int64)-(ERRMSG$1 == 225ll)) == 0ll ) goto label$800;
			{
				if( (*(int64*)((uint8*)PROC$1 + 8ll) & 8192ll) == 0ll ) goto label$802;
				{
					ERRMSG$1 = 226ll;
				}
				goto label$801;
				label$802:;
				{
					ERRMSG$1 = 227ll;
				}
				label$801:;
			}
			label$800:;
			label$799:;
			ERRREPORT( ERRMSG$1, 0ll, (uint8*)0ull );
		}
		label$798:;
		label$797:;
	}
	label$796:;
	label$795:;
	label$794:;
}

void SYMBPROCSETVTABLEINDEX( struct $8FBSYMBOL* PROC$1, int64 I$1 )
{
	label$803:;
	SYMBPROCALLOCEXT( PROC$1 );
	*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 136ll) = I$1;
	label$804:;
}

int64 SYMBPROCGETVTABLEINDEX( struct $8FBSYMBOL* PROC$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$805:;
	if( *(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) == (struct $10FB_PROCEXT*)0ull ) goto label$808;
	{
		fb$result$1 = *(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 136ll);
	}
	label$808:;
	label$807:;
	label$806:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBPROCGETOVERRIDDEN( struct $8FBSYMBOL* PROC$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$809:;
	if( *(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) == (struct $10FB_PROCEXT*)0ull ) goto label$812;
	{
		fb$result$1 = *(struct $8FBSYMBOL**)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 144ll);
	}
	label$812:;
	label$811:;
	label$810:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBGETPROCRESULT( struct $8FBSYMBOL* PROC$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$813:;
	if( *(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) == (struct $10FB_PROCEXT*)0ull ) goto label$816;
	{
		fb$result$1 = *(struct $8FBSYMBOL**)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll);
	}
	label$816:;
	label$815:;
	label$814:;
	return fb$result$1;
}

int64 SYMBPROCHASFWDREFINSIGNATURE( struct $8FBSYMBOL* PROC$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$817:;
	struct $8FBSYMBOL* PARAM$1;
	int64 vr$3 = TYPEHASFWDREFINSIGNATURE( *(int64*)((uint8*)PROC$1 + 48ll), *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 56ll) );
	if( vr$3 == 0ll ) goto label$820;
	{
		fb$result$1 = -1ll;
		goto label$818;
	}
	label$820:;
	label$819:;
	PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 128ll);
	label$821:;
	if( PARAM$1 == (struct $8FBSYMBOL*)0ull ) goto label$822;
	{
		int64 vr$9 = TYPEHASFWDREFINSIGNATURE( *(int64*)((uint8*)PARAM$1 + 48ll), *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll) );
		if( vr$9 == 0ll ) goto label$824;
		{
			fb$result$1 = -1ll;
			goto label$818;
		}
		label$824:;
		label$823:;
		PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 296ll);
	}
	goto label$821;
	label$822:;
	fb$result$1 = 0ll;
	label$818:;
	return fb$result$1;
}

FBSTRING* HDUMPDYNAMICARRAYDIMENSIONS( int64 DIMENSIONS$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$856:;
	FBSTRING S$1;
	__builtin_memset( &S$1, 0, 24ll );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"(", 2ll, 0 );
	{
		int64 I$2;
		I$2 = 1ll;
		int64 TMP$146$2;
		TMP$146$2 = DIMENSIONS$1;
		goto label$858;
		label$861:;
		{
			if( I$2 <= 1ll ) goto label$863;
			{
				FBSTRING* vr$6 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)", ", 3ll, 0 );
			}
			label$863:;
			label$862:;
			FBSTRING* vr$8 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"any", 4ll, 0 );
		}
		label$859:;
		I$2 = I$2 + 1ll;
		label$858:;
		if( I$2 <= TMP$146$2 ) goto label$861;
		label$860:;
	}
	FBSTRING* vr$12 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)") ", 3ll, 0 );
	FBSTRING* vr$15 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&S$1, -1ll, 0 );
	fb_StrDelete( &S$1 );
	label$857:;
	FBSTRING* vr$18 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$18;
}

FBSTRING* SYMBPROCPTRTOSTR( struct $8FBSYMBOL* PROC$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$895:;
	FBSTRING S$1;
	__builtin_memset( &S$1, 0, 24ll );
	HSUBORFUNCTOSTR( &S$1, PROC$1 );
	HPROCMODETOSTR( &S$1, PROC$1 );
	HPARAMSTOSTR( &S$1, PROC$1 );
	HRESULTTOSTR( &S$1, PROC$1 );
	FBSTRING* vr$8 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&S$1, -1ll, 0 );
	fb_StrDelete( &S$1 );
	label$896:;
	FBSTRING* vr$11 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$11;
}

uint8* SYMBGETFULLPROCNAME( struct $8FBSYMBOL* PROC$1 )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$897:;
	static FBSTRING RES$1;
	fb_StrAssign( (void*)&RES$1, -1ll, (void*)"", 1ll, 0 );
	struct $8FBSYMBOL* NS$1;
	NS$1 = *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)PROC$1 + 232ll);
	label$899:;
	if( NS$1 == (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll) ) goto label$900;
	{
		FBSTRING TMP$169$2;
		FBSTRING TMP$170$2;
		__builtin_memset( &TMP$169$2, 0, 24ll );
		FBSTRING* vr$8 = fb_StrConcat( &TMP$169$2, *(void**)((uint8*)NS$1 + 24ll), 0ll, (void*)".", 2ll );
		__builtin_memset( &TMP$170$2, 0, 24ll );
		FBSTRING* vr$11 = fb_StrConcat( &TMP$170$2, (void*)vr$8, -1ll, (void*)&RES$1, -1ll );
		FBSTRING* vr$12 = fb_StrAssign( (void*)&RES$1, -1ll, (void*)vr$11, -1ll, 0 );
		NS$1 = *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)NS$1 + 232ll);
	}
	goto label$899;
	label$900:;
	if( (*(int64*)((uint8*)PROC$1 + 8ll) & 4096ll) == 0ll ) goto label$902;
	{
		FBSTRING* vr$18 = fb_StrConcatAssign( (void*)&RES$1, -1ll, (void*)"constructor", 12ll, 0 );
	}
	goto label$901;
	label$902:;
	if( (*(int64*)((uint8*)PROC$1 + 8ll) & 8192ll) == 0ll ) goto label$903;
	{
		FBSTRING* vr$22 = fb_StrConcatAssign( (void*)&RES$1, -1ll, (void*)"destructor", 11ll, 0 );
	}
	goto label$901;
	label$903:;
	if( (*(int64*)((uint8*)PROC$1 + 8ll) & 16384ll) == 0ll ) goto label$904;
	{
		FBSTRING* vr$26 = fb_StrConcatAssign( (void*)&RES$1, -1ll, (void*)"operator.", 10ll, 0 );
		if( *(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) == (struct $10FB_PROCEXT*)0ull ) goto label$906;
		{
			FBSTRING TMP$174$3;
			__builtin_memset( &TMP$174$3, 0, 24ll );
			FBSTRING* vr$34 = fb_StrConcat( &TMP$174$3, (void*)&RES$1, -1ll, *(void**)(((uint8*)AST_OPTB$ + (*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 80ll) << 5ll)) + 16ll), 0ll );
			FBSTRING* vr$35 = fb_StrAssign( (void*)&RES$1, -1ll, (void*)vr$34, -1ll, 0 );
		}
		label$906:;
		label$905:;
	}
	goto label$901;
	label$904:;
	if( (*(int64*)((uint8*)PROC$1 + 8ll) & 32768ll) == 0ll ) goto label$907;
	{
		FBSTRING TMP$175$2;
		__builtin_memset( &TMP$175$2, 0, 24ll );
		FBSTRING* vr$42 = fb_StrConcat( &TMP$175$2, (void*)&RES$1, -1ll, *(void**)((uint8*)PROC$1 + 24ll), 0ll );
		FBSTRING* vr$43 = fb_StrAssign( (void*)&RES$1, -1ll, (void*)vr$42, -1ll, 0 );
		FBSTRING* vr$44 = fb_StrConcatAssign( (void*)&RES$1, -1ll, (void*)".property.", 11ll, 0 );
		if( (*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) == 0ll ) goto label$909;
		{
			FBSTRING* vr$48 = fb_StrConcatAssign( (void*)&RES$1, -1ll, (void*)"get", 4ll, 0 );
		}
		goto label$908;
		label$909:;
		{
			FBSTRING* vr$49 = fb_StrConcatAssign( (void*)&RES$1, -1ll, (void*)"set", 4ll, 0 );
		}
		label$908:;
	}
	goto label$901;
	label$907:;
	{
		FBSTRING TMP$179$2;
		__builtin_memset( &TMP$179$2, 0, 24ll );
		FBSTRING* vr$53 = fb_StrConcat( &TMP$179$2, (void*)&RES$1, -1ll, *(void**)((uint8*)PROC$1 + 24ll), 0ll );
		FBSTRING* vr$54 = fb_StrAssign( (void*)&RES$1, -1ll, (void*)vr$53, -1ll, 0 );
	}
	label$901:;
	fb$result$1 = *(uint8**)&RES$1;
	label$898:;
	return fb$result$1;
}

FBSTRING* SYMBMETHODTOSTR( struct $8FBSYMBOL* PROC$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$910:;
	FBSTRING S$1;
	uint8* vr$1 = SYMBGETFULLPROCNAME( PROC$1 );
	FBSTRING* vr$3 = fb_StrInit( (void*)&S$1, -1ll, (void*)vr$1, 0ll, 0 );
	HPROCMODETOSTR( &S$1, PROC$1 );
	HPARAMSTOSTR( &S$1, PROC$1 );
	HRESULTTOSTR( &S$1, PROC$1 );
	FBSTRING* vr$9 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&S$1, -1ll, 0 );
	fb_StrDelete( &S$1 );
	label$911:;
	FBSTRING* vr$12 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$12;
}

int64 SYMBGETDEFAULTPARAMMODE( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$912:;
	{
		uint64 TMP$180$2;
		TMP$180$2 = (uint64)(DTYPE$1 & 511ll);
		goto label$915;
		label$916:;
		{
			fb$result$1 = 2ll;
			goto label$913;
		}
		goto label$914;
		label$917:;
		{
			fb$result$1 = 1ll;
			goto label$913;
		}
		goto label$914;
		label$915:;
		static const void* tmp$181[19ll] = {
			&&label$916,
			&&label$917,
			&&label$917,
			&&label$916,
			&&label$917,
			&&label$917,
			&&label$917,
			&&label$917,
			&&label$917,
			&&label$917,
			&&label$917,
			&&label$917,
			&&label$917,
			&&label$916,
			&&label$916,
			&&label$916,
			&&label$917,
			&&label$917,
			&&label$916,
		};
		if( TMP$180$2 < 3ll ) goto label$917;
		if( TMP$180$2 > 21ll ) goto label$917;
		goto *tmp$181[TMP$180$2 - 3ll];
		label$914:;
	}
	label$913:;
	return fb$result$1;
}

int64 SYMBAREPROCMODESEQUAL( struct $8FBSYMBOL* PROCA$1, struct $8FBSYMBOL* PROCB$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$918:;
	int64 A$1;
	int64 B$1;
	A$1 = *(int64*)((uint8*)PROCA$1 + 144ll);
	B$1 = *(int64*)((uint8*)PROCB$1 + 144ll);
	{
		if( A$1 == 1ll ) goto label$922;
		label$923:;
		if( A$1 != 2ll ) goto label$921;
		label$922:;
		{
			{
				if( B$1 == 1ll ) goto label$926;
				label$927:;
				if( B$1 != 2ll ) goto label$925;
				label$926:;
				{
					fb$result$1 = -1ll;
					goto label$919;
				}
				label$925:;
				label$924:;
			}
		}
		label$921:;
		label$920:;
	}
	fb$result$1 = (int64)-(A$1 == B$1);
	label$919:;
	return fb$result$1;
}

struct $11FB_CALL_ARG* SYMBALLOCOVLCALLARG( struct $5TLIST* LIST$1, struct $16FB_CALL_ARG_LIST* ARG_LIST$1, int64 TO_HEAD$1 )
{
	struct $11FB_CALL_ARG* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$928:;
	struct $11FB_CALL_ARG* ARG$1;
	void* vr$1 = LISTNEWNODE( LIST$1 );
	ARG$1 = (struct $11FB_CALL_ARG*)vr$1;
	if( TO_HEAD$1 != 0ll ) goto label$931;
	{
		if( *(struct $11FB_CALL_ARG**)((uint8*)ARG_LIST$1 + 8ll) != (struct $11FB_CALL_ARG*)0ull ) goto label$933;
		{
			*(struct $11FB_CALL_ARG**)((uint8*)ARG_LIST$1 + 8ll) = ARG$1;
		}
		goto label$932;
		label$933:;
		{
			*(struct $11FB_CALL_ARG**)((uint8*)*(struct $11FB_CALL_ARG**)((uint8*)ARG_LIST$1 + 16ll) + 16ll) = ARG$1;
		}
		label$932:;
		*(struct $11FB_CALL_ARG**)((uint8*)ARG$1 + 16ll) = (struct $11FB_CALL_ARG*)0ull;
		*(struct $11FB_CALL_ARG**)((uint8*)ARG_LIST$1 + 16ll) = ARG$1;
	}
	goto label$930;
	label$931:;
	{
		if( *(struct $11FB_CALL_ARG**)((uint8*)ARG_LIST$1 + 16ll) != (struct $11FB_CALL_ARG*)0ull ) goto label$935;
		{
			*(struct $11FB_CALL_ARG**)((uint8*)ARG_LIST$1 + 16ll) = ARG$1;
		}
		label$935:;
		label$934:;
		*(struct $11FB_CALL_ARG**)((uint8*)ARG$1 + 16ll) = *(struct $11FB_CALL_ARG**)((uint8*)ARG_LIST$1 + 8ll);
		*(struct $11FB_CALL_ARG**)((uint8*)ARG_LIST$1 + 8ll) = ARG$1;
	}
	label$930:;
	*(int64*)ARG_LIST$1 = *(int64*)ARG_LIST$1 + 1ll;
	fb$result$1 = ARG$1;
	label$929:;
	return fb$result$1;
}

void SYMBFREEOVLCALLARGS( struct $5TLIST* LIST$1, struct $16FB_CALL_ARG_LIST* ARG_LIST$1 )
{
	label$936:;
	struct $11FB_CALL_ARG* ARG$1;
	__builtin_memset( &ARG$1, 0, 8ll );
	struct $11FB_CALL_ARG* NXT$1;
	__builtin_memset( &NXT$1, 0, 8ll );
	ARG$1 = *(struct $11FB_CALL_ARG**)((uint8*)ARG_LIST$1 + 8ll);
	label$938:;
	if( ARG$1 == (struct $11FB_CALL_ARG*)0ull ) goto label$939;
	{
		NXT$1 = *(struct $11FB_CALL_ARG**)((uint8*)ARG$1 + 16ll);
		LISTDELNODE( LIST$1, (void*)ARG$1 );
		ARG$1 = NXT$1;
	}
	goto label$938;
	label$939:;
	label$937:;
}

__attribute__(( constructor )) static void fb_ctor__symbzproc( void )
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

static int64 HALIGNTOPOW2( int64 VALUE$1, int64 ALIGN$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$28:;
	fb$result$1 = ((VALUE$1 + ALIGN$1) + -1ll) & ~(ALIGN$1 + -1ll);
	label$29:;
	return fb$result$1;
}

static int64 HCANOVERLOAD( struct $8FBSYMBOL* PROC$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$90:;
	struct $8FBSYMBOL* PPARAM$1;
	if( (int64)*(int16*)((uint8*)PROC$1 + 112ll) != 0ll ) goto label$93;
	{
		fb$result$1 = -1ll;
		goto label$91;
	}
	label$93:;
	label$92:;
	PPARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 136ll);
	if( *(int64*)((uint8*)PPARAM$1 + 88ll) != 4ll ) goto label$95;
	{
		fb$result$1 = 0ll;
		goto label$91;
	}
	label$95:;
	label$94:;
	label$96:;
	if( PPARAM$1 == (struct $8FBSYMBOL*)0ull ) goto label$97;
	{
		if( *(int64*)((uint8*)PPARAM$1 + 48ll) != 0ll ) goto label$99;
		{
			fb$result$1 = 0ll;
			goto label$91;
		}
		label$99:;
		label$98:;
		PPARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PPARAM$1 + 288ll);
	}
	goto label$96;
	label$97:;
	fb$result$1 = -1ll;
	label$91:;
	return fb$result$1;
}

static int64 HCANOVERLOADBYDESC( struct $8FBSYMBOL* A$1, struct $8FBSYMBOL* B$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$100:;
	fb$result$1 = 0ll;
	if( ((int64)-(*(int64*)((uint8*)A$1 + 88ll) == 3ll) | (int64)-(*(int64*)((uint8*)B$1 + 88ll) == 3ll)) == 0ll ) goto label$103;
	{
		if( ((int64)-(*(int64*)((uint8*)A$1 + 88ll) == 3ll) & (int64)-(*(int64*)((uint8*)B$1 + 88ll) == 3ll)) == 0ll ) goto label$105;
		{
			if( ((int64)-(*(int64*)((uint8*)A$1 + 112ll) > 0ll) & (int64)-(*(int64*)((uint8*)B$1 + 112ll) > 0ll)) == 0ll ) goto label$107;
			{
				fb$result$1 = (int64)-(*(int64*)((uint8*)A$1 + 112ll) != *(int64*)((uint8*)B$1 + 112ll));
			}
			label$107:;
			label$106:;
		}
		goto label$104;
		label$105:;
		{
			fb$result$1 = -1ll;
		}
		label$104:;
	}
	label$103:;
	label$102:;
	label$101:;
	return fb$result$1;
}

static struct $8FBSYMBOL* HADDOVLPROC( struct $8FBSYMBOL* PROC$1, struct $8FBSYMBOL* OVL_HEAD_PROC$1, struct $10FBSYMBOLTB* SYMTB$1, struct $8FBHASHTB* HASHTB$1, uint8* ID$1, uint8* ID_ALIAS$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, $13FB_SYMBATTRIB ATTRIB$1, int64 PRESERVECASE$1 )
{
	$10FB_SYMBOPT TMP$87$1;
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$108:;
	struct $8FBSYMBOL* OVL$1;
	struct $8FBSYMBOL* OVL_PARAM$1;
	struct $8FBSYMBOL* PARAM$1;
	int64 OVL_PARAMS$1;
	int64 PARAMS$1;
	fb$result$1 = (struct $8FBSYMBOL*)0ull;
	if( OVL_HEAD_PROC$1 != (struct $8FBSYMBOL*)0ull ) goto label$111;
	{
		goto label$109;
	}
	label$111:;
	label$110:;
	if( (int64)-((ATTRIB$1 & 32768ll) != 0ll) == (int64)-((*(int64*)((uint8*)OVL_HEAD_PROC$1 + 8ll) & 32768ll) != 0ll) ) goto label$113;
	{
		goto label$109;
	}
	label$113:;
	label$112:;
	PARAMS$1 = (int64)*(int16*)((uint8*)PROC$1 + 112ll);
	if( (ATTRIB$1 & 2048ll) == 0ll ) goto label$115;
	{
		PARAMS$1 = PARAMS$1 + -1ll;
	}
	label$115:;
	label$114:;
	if( PARAMS$1 <= 0ll ) goto label$117;
	{
		PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 136ll);
		if( *(int64*)((uint8*)PARAM$1 + 88ll) != 4ll ) goto label$119;
		{
			goto label$109;
		}
		label$119:;
		label$118:;
		label$120:;
		if( PARAM$1 == (struct $8FBSYMBOL*)0ull ) goto label$121;
		{
			if( *(int64*)((uint8*)PARAM$1 + 48ll) != 0ll ) goto label$123;
			{
				goto label$109;
			}
			label$123:;
			label$122:;
			PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 288ll);
		}
		goto label$120;
		label$121:;
	}
	label$117:;
	label$116:;
	OVL$1 = OVL_HEAD_PROC$1;
	label$124:;
	{
		OVL_PARAMS$1 = (int64)*(int16*)((uint8*)OVL$1 + 112ll);
		if( (*(int64*)((uint8*)OVL$1 + 8ll) & 2048ll) == 0ll ) goto label$128;
		{
			OVL_PARAMS$1 = OVL_PARAMS$1 + -1ll;
		}
		label$128:;
		label$127:;
		if( (ATTRIB$1 & 32768ll) == 0ll ) goto label$130;
		{
			if( DTYPE$1 == 0ll ) goto label$132;
			{
				if( (*(int64*)((uint8*)OVL$1 + 48ll) & 511ll) != 0ll ) goto label$134;
				{
					OVL_PARAMS$1 = -1ll;
				}
				label$134:;
				label$133:;
			}
			goto label$131;
			label$132:;
			{
				if( (*(int64*)((uint8*)OVL$1 + 48ll) & 511ll) == 0ll ) goto label$136;
				{
					OVL_PARAMS$1 = -1ll;
				}
				label$136:;
				label$135:;
			}
			label$131:;
		}
		label$130:;
		label$129:;
		if( OVL_PARAMS$1 != PARAMS$1 ) goto label$138;
		{
			if( PARAMS$1 != 0ll ) goto label$140;
			{
				goto label$109;
			}
			label$140:;
			label$139:;
			PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 136ll);
			OVL_PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)OVL$1 + 136ll);
			label$141:;
			{
				int64 vr$40 = HCANOVERLOADBYDESC( PARAM$1, OVL_PARAM$1 );
				if( vr$40 == 0ll ) goto label$145;
				{
					goto label$142;
				}
				label$145:;
				label$144:;
				int64 PDTYPE$4;
				PDTYPE$4 = *(int64*)((uint8*)PARAM$1 + 48ll);
				int64 ODTYPE$4;
				ODTYPE$4 = *(int64*)((uint8*)OVL_PARAM$1 + 48ll);
				if( ((PDTYPE$4 & 261632ll) | (ODTYPE$4 & 261632ll)) == 0ll ) goto label$147;
				{
					if( ((int64)-(*(int64*)((uint8*)PARAM$1 + 88ll) == 2ll) & (int64)-(*(int64*)((uint8*)OVL_PARAM$1 + 88ll) == 2ll)) == 0ll ) goto label$149;
					{
						if( (PDTYPE$4 & 261632ll) == (ODTYPE$4 & 261632ll) ) goto label$151;
						{
							goto label$142;
						}
						label$151:;
						label$150:;
					}
					label$149:;
					label$148:;
					if( ((PDTYPE$4 & 261632ll) & -513ll) == ((ODTYPE$4 & 261632ll) & -513ll) ) goto label$153;
					{
						goto label$142;
					}
					label$153:;
					label$152:;
					PDTYPE$4 = PDTYPE$4 & 511ll;
					ODTYPE$4 = ODTYPE$4 & 511ll;
				}
				label$147:;
				label$146:;
				if( PDTYPE$4 == ODTYPE$4 ) goto label$155;
				{
					{
						if( PDTYPE$4 != 35ll ) goto label$157;
						label$158:;
						{
							if( ODTYPE$4 == 16ll ) goto label$160;
							{
								goto label$142;
							}
							label$160:;
							label$159:;
						}
						goto label$156;
						label$157:;
						if( PDTYPE$4 != 16ll ) goto label$161;
						label$162:;
						{
							if( ODTYPE$4 == 35ll ) goto label$164;
							{
								goto label$142;
							}
							label$164:;
							label$163:;
						}
						goto label$156;
						label$161:;
						{
							goto label$142;
						}
						label$165:;
						label$156:;
					}
				}
				label$155:;
				label$154:;
				if( *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll) == *(struct $8FBSYMBOL**)((uint8*)OVL_PARAM$1 + 56ll) ) goto label$167;
				{
					goto label$142;
				}
				label$167:;
				label$166:;
				PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 288ll);
				OVL_PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)OVL_PARAM$1 + 288ll);
				OVL_PARAMS$1 = OVL_PARAMS$1 + -1ll;
			}
			label$143:;
			if( OVL_PARAMS$1 > 0ll ) goto label$141;
			label$142:;
			if( OVL_PARAMS$1 != 0ll ) goto label$169;
			{
				goto label$109;
			}
			label$169:;
			label$168:;
		}
		label$138:;
		label$137:;
		OVL$1 = *(struct $8FBSYMBOL**)((uint8*)OVL$1 + 192ll);
	}
	label$126:;
	if( OVL$1 != (struct $8FBSYMBOL*)0ull ) goto label$124;
	label$125:;
	if( PRESERVECASE$1 == 0ll ) goto label$170;
	TMP$87$1 = 1ll;
	goto label$940;
	label$170:;
	TMP$87$1 = 0ll;
	label$940:;
	struct $8FBSYMBOL* vr$80 = SYMBNEWSYMBOL( TMP$87$1, PROC$1, SYMTB$1, HASHTB$1, 3ll, ID$1, ID_ALIAS$1, DTYPE$1, SUBTYPE$1, ATTRIB$1 );
	PROC$1 = vr$80;
	if( PROC$1 != (struct $8FBSYMBOL*)0ull ) goto label$172;
	{
		goto label$109;
	}
	label$172:;
	label$171:;
	if( ID$1 == (uint8*)0ull ) goto label$174;
	{
		struct $8FBSYMBOL* NXT$2;
		*(uint64*)((uint8*)PROC$1 + 248ll) = *(uint64*)((uint8*)OVL_HEAD_PROC$1 + 248ll);
		*(struct $8HASHITEM**)((uint8*)PROC$1 + 240ll) = *(struct $8HASHITEM**)((uint8*)OVL_HEAD_PROC$1 + 240ll);
		NXT$2 = *(struct $8FBSYMBOL**)((uint8*)OVL_HEAD_PROC$1 + 264ll);
		*(struct $8FBSYMBOL**)((uint8*)OVL_HEAD_PROC$1 + 264ll) = PROC$1;
		*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 256ll) = OVL_HEAD_PROC$1;
		*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 264ll) = NXT$2;
		if( NXT$2 == (struct $8FBSYMBOL*)0ull ) goto label$176;
		{
			*(struct $8FBSYMBOL**)((uint8*)NXT$2 + 256ll) = PROC$1;
		}
		label$176:;
		label$175:;
	}
	label$174:;
	label$173:;
	fb$result$1 = PROC$1;
	label$109:;
	return fb$result$1;
}

static struct $8FBSYMBOL* HADDOPOVLPROC( struct $8FBSYMBOL* PROC$1, struct $8FBSYMBOL* OVL_HEAD_PROC$1, struct $10FBSYMBOLTB* SYMTB$1, struct $8FBHASHTB* HASHTB$1, $6AST_OP OP$1, uint8* ID_ALIAS$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, $13FB_SYMBATTRIB ATTRIB$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$177:;
	struct $8FBSYMBOL* OVL$1;
	if( OP$1 == 27ll ) goto label$180;
	{
		struct $8FBSYMBOL* vr$2 = HADDOVLPROC( PROC$1, OVL_HEAD_PROC$1, SYMTB$1, HASHTB$1, (uint8*)0ull, ID_ALIAS$1, DTYPE$1, SUBTYPE$1, ATTRIB$1, 0ll );
		fb$result$1 = vr$2;
		goto label$178;
	}
	label$180:;
	label$179:;
	OVL$1 = OVL_HEAD_PROC$1;
	label$181:;
	if( OVL$1 == (struct $8FBSYMBOL*)0ull ) goto label$182;
	{
		if( *(int64*)((uint8*)PROC$1 + 48ll) != *(int64*)((uint8*)OVL$1 + 48ll) ) goto label$184;
		{
			if( *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 56ll) != *(struct $8FBSYMBOL**)((uint8*)OVL$1 + 56ll) ) goto label$186;
			{
				fb$result$1 = (struct $8FBSYMBOL*)0ull;
				goto label$178;
			}
			label$186:;
			label$185:;
		}
		label$184:;
		label$183:;
		OVL$1 = *(struct $8FBSYMBOL**)((uint8*)OVL$1 + 192ll);
	}
	goto label$181;
	label$182:;
	struct $8FBSYMBOL* vr$11 = SYMBNEWSYMBOL( 0ll, PROC$1, SYMTB$1, HASHTB$1, 3ll, (uint8*)0ull, ID_ALIAS$1, DTYPE$1, SUBTYPE$1, ATTRIB$1 );
	PROC$1 = vr$11;
	fb$result$1 = PROC$1;
	label$178:;
	return fb$result$1;
}

static struct $8FBSYMBOL* HSETUPPROC( struct $8FBSYMBOL* SYM$1, struct $8FBSYMBOL* PARENT$1, struct $10FBSYMBOLTB* SYMTB$1, struct $8FBHASHTB* HASHTB$1, uint8* ID$1, uint8* ID_ALIAS$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, int64 ATTRIB$1, int64 MODE$1, $10FB_SYMBOPT OPTIONS$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$187:;
	int64 STATS$1;
	int64 PRESERVE_CASE$1;
	int64 LOOKUPOPTIONS$1;
	struct $8FBSYMBOL* PROC$1;
	struct $8FBSYMBOL* HEAD_PROC$1;
	struct $8FBSYMBOL* OVERRIDDEN$1;
	fb$result$1 = (struct $8FBSYMBOL*)0ull;
	if( DTYPE$1 != 2147483648ll ) goto label$190;
	{
		int64 vr$2 = SYMBGETDEFTYPE( ID$1 );
		DTYPE$1 = vr$2;
		SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
	}
	label$190:;
	label$189:;
	if( ID_ALIAS$1 != (uint8*)0ull ) goto label$192;
	{
		if( *(int64*)((uint8*)&PARSER$ + 192ll) == 0ll ) goto label$194;
		{
			ID_ALIAS$1 = ID$1;
		}
		label$194:;
		label$193:;
		STATS$1 = 0ll;
	}
	goto label$191;
	label$192:;
	{
		STATS$1 = 512ll;
	}
	label$191:;
	HEAD_PROC$1 = (struct $8FBSYMBOL*)0ull;
	if( (ATTRIB$1 & 12288ll) == 0ll ) goto label$196;
	{
		if( (ATTRIB$1 & 4096ll) == 0ll ) goto label$198;
		{
			struct $8FBSYMBOL* vr$9 = SYMBGETCOMPCTORHEAD( PARENT$1 );
			HEAD_PROC$1 = vr$9;
		}
		goto label$197;
		label$198:;
		{
			struct $8FBSYMBOL* vr$10 = SYMBGETCOMPDTOR( PARENT$1 );
			HEAD_PROC$1 = vr$10;
		}
		label$197:;
		if( HEAD_PROC$1 != (struct $8FBSYMBOL*)0ull ) goto label$200;
		{
			struct $8FBSYMBOL* vr$12 = SYMBNEWSYMBOL( 0ll, SYM$1, SYMTB$1, HASHTB$1, 3ll, (uint8*)0ull, ID_ALIAS$1, 0ll, (struct $8FBSYMBOL*)0ull, ATTRIB$1 );
			PROC$1 = vr$12;
			if( (ATTRIB$1 & 4096ll) == 0ll ) goto label$202;
			{
				SYMBSETCOMPCTORHEAD( PARENT$1, PROC$1 );
			}
			goto label$201;
			label$202:;
			{
				SYMBSETCOMPDTOR( PARENT$1, PROC$1 );
			}
			label$201:;
		}
		goto label$199;
		label$200:;
		{
			if( (ATTRIB$1 & 8192ll) == 0ll ) goto label$204;
			{
				fb$result$1 = (struct $8FBSYMBOL*)0ull;
				goto label$188;
			}
			label$204:;
			label$203:;
			struct $8FBSYMBOL* vr$17 = HADDOVLPROC( SYM$1, HEAD_PROC$1, SYMTB$1, HASHTB$1, (uint8*)0ull, ID_ALIAS$1, 0ll, (struct $8FBSYMBOL*)0ull, ATTRIB$1, 0ll );
			PROC$1 = vr$17;
			if( PROC$1 != (struct $8FBSYMBOL*)0ull ) goto label$206;
			{
				goto label$188;
			}
			label$206:;
			label$205:;
		}
		label$199:;
		if( (ATTRIB$1 & 4096ll) == 0ll ) goto label$208;
		{
			SYMBCHECKCOMPCTOR( PARENT$1, PROC$1 );
		}
		label$208:;
		label$207:;
	}
	goto label$195;
	label$196:;
	if( (ATTRIB$1 & 16384ll) == 0ll ) goto label$209;
	{
		if( *(struct $10FB_PROCEXT**)((uint8*)SYM$1 + 200ll) != (struct $10FB_PROCEXT*)0ull ) goto label$211;
		{
			goto label$212;
		}
		label$211:;
		label$210:;
		$6AST_OP OP$2;
		__builtin_memset( &OP$2, 0, 8ll );
		OP$2 = *($6AST_OP*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)SYM$1 + 200ll) + 80ll);
		struct $8FBSYMBOL* vr$28 = SYMBGETCOMPOPOVLHEAD( PARENT$1, OP$2 );
		HEAD_PROC$1 = vr$28;
		if( HEAD_PROC$1 != (struct $8FBSYMBOL*)0ull ) goto label$214;
		{
			struct $8FBSYMBOL* vr$30 = SYMBNEWSYMBOL( 0ll, SYM$1, SYMTB$1, HASHTB$1, 3ll, (uint8*)0ull, ID_ALIAS$1, DTYPE$1, SUBTYPE$1, ATTRIB$1 );
			PROC$1 = vr$30;
			SYMBSETCOMPOPOVLHEAD( PARENT$1, PROC$1 );
		}
		goto label$213;
		label$214:;
		{
			struct $8FBSYMBOL* vr$31 = HADDOPOVLPROC( SYM$1, HEAD_PROC$1, SYMTB$1, HASHTB$1, OP$2, ID_ALIAS$1, DTYPE$1, SUBTYPE$1, ATTRIB$1 );
			PROC$1 = vr$31;
			if( PROC$1 != (struct $8FBSYMBOL*)0ull ) goto label$216;
			{
				goto label$188;
			}
			label$216:;
			label$215:;
			if( OP$2 != 0ll ) goto label$218;
			{
				SYMBCHECKCOMPLETOP( PARENT$1, PROC$1 );
			}
			label$218:;
			label$217:;
		}
		label$213:;
	}
	goto label$195;
	label$209:;
	{
		label$212:;
		PRESERVE_CASE$1 = (int64)-((OPTIONS$1 & 1ll) != 0ll);
		struct $8FBSYMBOL* vr$37 = SYMBNEWSYMBOL( OPTIONS$1 | 32ll, SYM$1, SYMTB$1, HASHTB$1, 3ll, ID$1, ID_ALIAS$1, DTYPE$1, SUBTYPE$1, ATTRIB$1 );
		PROC$1 = vr$37;
		if( PROC$1 != (struct $8FBSYMBOL*)0ull ) goto label$220;
		{
			struct $8FBSYMBOL* vr$39 = SYMBLOOKUPBYNAMEANDCLASS( PARENT$1, ID$1, 3ll, PRESERVE_CASE$1, 0ll );
			HEAD_PROC$1 = vr$39;
			if( HEAD_PROC$1 != (struct $8FBSYMBOL*)0ull ) goto label$222;
			{
				goto label$188;
			}
			label$222:;
			label$221:;
			if( (int64)-((*(int64*)((uint8*)HEAD_PROC$1 + 8ll) & 1024ll) != 0ll) != 0ll ) goto label$224;
			{
				if( (int64)-((*(int64*)((uint8*)&ENV$ + 1152ll) & 1024ll) != 0ll) != 0ll ) goto label$226;
				{
					goto label$188;
				}
				label$226:;
				label$225:;
			}
			label$224:;
			label$223:;
			struct $8FBSYMBOL* vr$48 = HADDOVLPROC( SYM$1, HEAD_PROC$1, SYMTB$1, HASHTB$1, ID$1, ID_ALIAS$1, DTYPE$1, SUBTYPE$1, ATTRIB$1, PRESERVE_CASE$1 );
			PROC$1 = vr$48;
			if( PROC$1 != (struct $8FBSYMBOL*)0ull ) goto label$228;
			{
				goto label$188;
			}
			label$228:;
			label$227:;
			*($13FB_SYMBATTRIB*)((uint8*)PROC$1 + 8ll) = *(int64*)((uint8*)PROC$1 + 8ll) | 1024ll;
		}
		goto label$219;
		label$220:;
		{
			if( (OPTIONS$1 & 16ll) != 0ll ) goto label$230;
			{
				if( (ATTRIB$1 & 1024ll) == 0ll ) goto label$232;
				{
					int64 vr$57 = HCANOVERLOAD( SYM$1 );
					if( vr$57 != 0ll ) goto label$234;
					{
						goto label$188;
					}
					label$234:;
					label$233:;
				}
				goto label$231;
				label$232:;
				if( (*(int64*)((uint8*)&ENV$ + 1152ll) & 1024ll) == 0ll ) goto label$235;
				{
					int64 vr$61 = HCANOVERLOAD( SYM$1 );
					if( vr$61 == 0ll ) goto label$237;
					{
						*($13FB_SYMBATTRIB*)((uint8*)PROC$1 + 8ll) = *(int64*)((uint8*)PROC$1 + 8ll) | 1024ll;
					}
					label$237:;
					label$236:;
				}
				label$235:;
				label$231:;
			}
			label$230:;
			label$229:;
		}
		label$219:;
	}
	label$195:;
	if( (OPTIONS$1 & 16ll) == 0ll ) goto label$239;
	{
		STATS$1 = STATS$1 | 32ll;
	}
	label$239:;
	label$238:;
	*($11FB_FUNCMODE*)((uint8*)PROC$1 + 144ll) = MODE$1;
	if( *(int64*)((uint8*)&PARSER$ + 48ll) != 306ll ) goto label$241;
	{
		if( *(int64*)((uint8*)&PARSER$ + 192ll) == 4ll ) goto label$243;
		{
			STATS$1 = STATS$1 | 2048ll;
		}
		label$243:;
		label$242:;
	}
	label$241:;
	label$240:;
	SYMBPROCRECALCREALTYPE( PROC$1 );
	if( (OPTIONS$1 & 4ll) == 0ll ) goto label$245;
	{
		STATS$1 = STATS$1 | 8ll;
	}
	label$245:;
	label$244:;
	*(tmp$28*)((uint8*)PROC$1 + 176ll) = (tmp$28)0ull;
	if( (*(int64*)((uint8*)PROC$1 + 8ll) & 1024ll) == 0ll ) goto label$247;
	{
		int64 PARAMS$2;
		PARAMS$2 = (int64)*(int16*)((uint8*)PROC$1 + 112ll);
		if( (*(int64*)((uint8*)PROC$1 + 8ll) & 2048ll) == 0ll ) goto label$249;
		{
			PARAMS$2 = PARAMS$2 + -1ll;
		}
		label$249:;
		label$248:;
		if( HEAD_PROC$1 == (struct $8FBSYMBOL*)0ull ) goto label$251;
		{
			*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 192ll) = *(struct $8FBSYMBOL**)((uint8*)HEAD_PROC$1 + 192ll);
			*(struct $8FBSYMBOL**)((uint8*)HEAD_PROC$1 + 192ll) = PROC$1;
			if( PARAMS$2 >= (int64)*(int16*)((uint8*)HEAD_PROC$1 + 184ll) ) goto label$253;
			{
				*(int16*)((uint8*)HEAD_PROC$1 + 184ll) = (int16)PARAMS$2;
			}
			label$253:;
			label$252:;
			if( PARAMS$2 <= (int64)*(int16*)((uint8*)HEAD_PROC$1 + 186ll) ) goto label$255;
			{
				*(int16*)((uint8*)HEAD_PROC$1 + 186ll) = (int16)PARAMS$2;
			}
			label$255:;
			label$254:;
		}
		goto label$250;
		label$251:;
		{
			*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 192ll) = (struct $8FBSYMBOL*)0ull;
			*(int16*)((uint8*)PROC$1 + 184ll) = (int16)PARAMS$2;
			*(int16*)((uint8*)PROC$1 + 186ll) = (int16)PARAMS$2;
		}
		label$250:;
	}
	label$247:;
	label$246:;
	*($12FB_SYMBSTATS*)((uint8*)PROC$1 + 16ll) = *(int64*)((uint8*)PROC$1 + 16ll) | STATS$1;
	if( (*(int64*)((uint8*)PROC$1 + 8ll) & 2048ll) == 0ll ) goto label$257;
	{
		if( (*(int64*)((uint8*)PROC$1 + 8ll) & 1073741824ll) == 0ll ) goto label$259;
		{
			*(int64*)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)PARENT$1 + 224ll) + 304ll) = *(int64*)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)PARENT$1 + 224ll) + 304ll) + 1ll;
		}
		label$259:;
		label$258:;
		OVERRIDDEN$1 = (struct $8FBSYMBOL*)0ull;
		if( *(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 168ll) == (struct $8FBSYMBOL*)0ull ) goto label$261;
		{
			if( (*(int64*)((uint8*)PROC$1 + 8ll) & 8192ll) == 0ll ) goto label$263;
			{
				struct $8FBSYMBOL* vr$126 = SYMBGETCOMPDTOR( *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 168ll) + 56ll) );
				OVERRIDDEN$1 = vr$126;
			}
			goto label$262;
			label$263:;
			if( (*(int64*)((uint8*)PROC$1 + 8ll) & 16384ll) == 0ll ) goto label$264;
			{
				struct $8FBSYMBOL* vr$134 = SYMBGETCOMPOPOVLHEAD( *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 168ll) + 56ll), *($6AST_OP*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 80ll) );
				OVERRIDDEN$1 = vr$134;
				struct $8FBSYMBOL* vr$137 = SYMBFINDOPOVLPROC( *($6AST_OP*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 80ll), OVERRIDDEN$1, PROC$1 );
				OVERRIDDEN$1 = vr$137;
			}
			goto label$262;
			label$264:;
			if( ID$1 == (uint8*)0ull ) goto label$265;
			{
				struct $8FBSYMBOL* vr$143 = SYMBLOOKUPBYNAMEANDCLASS( *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 168ll) + 56ll), ID$1, 3ll, (int64)-((OPTIONS$1 & 1ll) != 0ll), -1ll );
				OVERRIDDEN$1 = vr$143;
				LOOKUPOPTIONS$1 = 0ll;
				if( (*(int64*)((uint8*)PROC$1 + 8ll) & 32768ll) == 0ll ) goto label$267;
				{
					if( (*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) == 0ll ) goto label$269;
					{
						LOOKUPOPTIONS$1 = 1ll;
					}
					label$269:;
					label$268:;
				}
				label$267:;
				label$266:;
				struct $8FBSYMBOL* vr$150 = SYMBFINDOVERLOADPROC( OVERRIDDEN$1, PROC$1, LOOKUPOPTIONS$1 );
				OVERRIDDEN$1 = vr$150;
			}
			label$265:;
			label$262:;
			if( OVERRIDDEN$1 == (struct $8FBSYMBOL*)0ull ) goto label$271;
			{
				if( (int64)-((*(int64*)((uint8*)OVERRIDDEN$1 + 8ll) & 536870912ll) != 0ll) != 0ll ) goto label$273;
				{
					OVERRIDDEN$1 = (struct $8FBSYMBOL*)0ull;
				}
				label$273:;
				label$272:;
			}
			label$271:;
			label$270:;
		}
		label$261:;
		label$260:;
		if( OVERRIDDEN$1 == (struct $8FBSYMBOL*)0ull ) goto label$275;
		{
			if( (*(int64*)((uint8*)OVERRIDDEN$1 + 8ll) & 1073741824ll) == 0ll ) goto label$277;
			{
				*(int64*)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)PARENT$1 + 224ll) + 304ll) = *(int64*)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)PARENT$1 + 224ll) + 304ll) + -1ll;
			}
			label$277:;
			label$276:;
			int64 vr$165 = SYMBPROCGETVTABLEINDEX( OVERRIDDEN$1 );
			SYMBPROCSETVTABLEINDEX( PROC$1, vr$165 );
			*(struct $8FBSYMBOL**)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 144ll) = OVERRIDDEN$1;
		}
		goto label$274;
		label$275:;
		{
			if( (*(int64*)((uint8*)PROC$1 + 8ll) & 536870912ll) == 0ll ) goto label$279;
			{
				int64 vr$171 = SYMBCOMPADDVIRTUAL( PARENT$1 );
				SYMBPROCSETVTABLEINDEX( PROC$1, vr$171 );
			}
			label$279:;
			label$278:;
		}
		label$274:;
	}
	label$257:;
	label$256:;
	fb$result$1 = PROC$1;
	label$188:;
	return fb$result$1;
}

static int64 HCALCTYPESDIFF( int64 PARAM_DTYPE$1, struct $8FBSYMBOL* PARAM_SUBTYPE$1, int64 PARAM_PTRCNT$1, int64 ARG_DTYPE$1, struct $8FBSYMBOL* ARG_SUBTYPE$1, struct $7ASTNODE* ARG_EXPR$1, $12FB_PARAMMODE MODE$1 )
{
	int64 TMP$97$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$410:;
	int64 ARG_DCLASS$1;
	int64 PARAM_DT$1;
	int64 ARG_DT$1;
	fb$result$1 = 0ll;
	PARAM_DTYPE$1 = PARAM_DTYPE$1 & 511ll;
	ARG_DTYPE$1 = ARG_DTYPE$1 & 511ll;
	if( (ARG_DTYPE$1 & 480ll) == 0ll ) goto label$412;
	TMP$97$1 = 22ll;
	goto label$941;
	label$412:;
	TMP$97$1 = ARG_DTYPE$1 & 31ll;
	label$941:;
	ARG_DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$97$1 * 56ll));
	{
		int64 TMP$98$2;
		uint64 TMP$99$2;
		if( (PARAM_DTYPE$1 & 480ll) == 0ll ) goto label$413;
		TMP$98$2 = 22ll;
		goto label$942;
		label$413:;
		TMP$98$2 = PARAM_DTYPE$1 & 31ll;
		label$942:;
		TMP$99$2 = *(uint64*)((uint8*)SYMB_DTYPETB$ + (TMP$98$2 * 56ll));
		goto label$415;
		label$416:;
		{
			{
				uint64 TMP$100$4;
				TMP$100$4 = (uint64)ARG_DCLASS$1;
				goto label$418;
				label$419:;
				{
					int64 TMP$105$5;
					int64 TMP$106$5;
					{
						if( PARAM_DTYPE$1 != 3ll ) goto label$421;
						label$422:;
						{
							{
								if( ARG_DTYPE$1 != 3ll ) goto label$424;
								label$425:;
								{
									fb$result$1 = 48ll;
									goto label$411;
								}
								goto label$423;
								label$424:;
								if( ARG_DTYPE$1 != 6ll ) goto label$426;
								label$427:;
								{
									fb$result$1 = 24ll;
									goto label$411;
								}
								label$426:;
								label$423:;
							}
							fb$result$1 = 0ll;
							goto label$411;
						}
						goto label$420;
						label$421:;
						if( PARAM_DTYPE$1 != 6ll ) goto label$428;
						label$429:;
						{
							{
								if( ARG_DTYPE$1 != 3ll ) goto label$431;
								label$432:;
								{
									fb$result$1 = 24ll;
									goto label$411;
								}
								goto label$430;
								label$431:;
								if( ARG_DTYPE$1 != 6ll ) goto label$433;
								label$434:;
								{
									fb$result$1 = 48ll;
									goto label$411;
								}
								label$433:;
								label$430:;
							}
							fb$result$1 = 0ll;
							goto label$411;
						}
						goto label$420;
						label$428:;
						if( PARAM_DTYPE$1 != 35ll ) goto label$435;
						label$436:;
						{
							{
								if( ARG_DTYPE$1 != 3ll ) goto label$438;
								label$439:;
								{
									fb$result$1 = 48ll;
									goto label$411;
								}
								goto label$437;
								label$438:;
								if( ARG_DTYPE$1 != 6ll ) goto label$440;
								label$441:;
								{
									fb$result$1 = 24ll;
									goto label$411;
								}
								label$440:;
								label$437:;
							}
						}
						goto label$420;
						label$435:;
						if( PARAM_DTYPE$1 != 38ll ) goto label$442;
						label$443:;
						{
							{
								if( ARG_DTYPE$1 != 3ll ) goto label$445;
								label$446:;
								{
									fb$result$1 = 24ll;
									goto label$411;
								}
								goto label$444;
								label$445:;
								if( ARG_DTYPE$1 != 6ll ) goto label$447;
								label$448:;
								{
									fb$result$1 = 48ll;
									goto label$411;
								}
								label$447:;
								label$444:;
							}
						}
						goto label$420;
						label$442:;
						{
							{
								if( ARG_DTYPE$1 == 3ll ) goto label$452;
								label$453:;
								if( ARG_DTYPE$1 != 6ll ) goto label$451;
								label$452:;
								{
									if( ARG_EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$455;
									{
										fb$result$1 = 0ll;
										goto label$411;
									}
									label$455:;
									label$454:;
									if( (int64)-(*(int64*)ARG_EXPR$1 == 20ll) != 0ll ) goto label$457;
									{
										fb$result$1 = 0ll;
										goto label$411;
									}
									label$457:;
									label$456:;
								}
								label$451:;
								label$450:;
							}
						}
						label$449:;
						label$420:;
					}
					if( ARG_DTYPE$1 != 9ll ) goto label$459;
					{
						ARG_DTYPE$1 = (ARG_DTYPE$1 & -512ll) | (*(int64*)(((uint8*)SYMB_DTYPETB$ + (ARG_DTYPE$1 * 56ll)) + 32ll) & 511ll);
					}
					label$459:;
					label$458:;
					if( (PARAM_DTYPE$1 & 480ll) == 0ll ) goto label$461;
					{
						if( (int64)-((ARG_DTYPE$1 & 480ll) != 0ll) != 0ll ) goto label$463;
						{
							if( ARG_EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$465;
							{
								fb$result$1 = 0ll;
								goto label$411;
							}
							label$465:;
							label$464:;
							int64 vr$40 = ASTCHECKCONVNONPTRTOPTR( PARAM_DTYPE$1, ARG_DTYPE$1, ARG_EXPR$1, 0ll );
							if( vr$40 == 0ll ) goto label$467;
							{
								fb$result$1 = 0ll;
								goto label$411;
							}
							label$467:;
							label$466:;
							fb$result$1 = 1ll;
							goto label$411;
						}
						label$463:;
						label$462:;
						if( ((int64)-(PARAM_DTYPE$1 == 32ll) | (int64)-(ARG_DTYPE$1 == 32ll)) == 0ll ) goto label$469;
						{
							fb$result$1 = 24ll;
							goto label$411;
						}
						label$469:;
						label$468:;
						if( ((PARAM_DTYPE$1 & 480ll) >> 5ll) != ((ARG_DTYPE$1 & 480ll) >> 5ll) ) goto label$471;
						{
							int64 TMP$101$7;
							int64 TMP$102$7;
							int64 TMP$103$7;
							int64 TMP$104$7;
							PARAM_DT$1 = PARAM_DTYPE$1 & 31ll;
							ARG_DT$1 = ARG_DTYPE$1 & 31ll;
							if( (PARAM_DT$1 & 480ll) == 0ll ) goto label$472;
							TMP$101$7 = 22ll;
							goto label$943;
							label$472:;
							TMP$101$7 = PARAM_DT$1 & 31ll;
							label$943:;
							if( (ARG_DT$1 & 480ll) == 0ll ) goto label$473;
							TMP$102$7 = 22ll;
							goto label$944;
							label$473:;
							TMP$102$7 = ARG_DT$1 & 31ll;
							label$944:;
							if( (PARAM_DT$1 & 480ll) == 0ll ) goto label$474;
							TMP$103$7 = 22ll;
							goto label$945;
							label$474:;
							TMP$103$7 = PARAM_DT$1 & 31ll;
							label$945:;
							if( (ARG_DT$1 & 480ll) == 0ll ) goto label$475;
							TMP$104$7 = 22ll;
							goto label$946;
							label$475:;
							TMP$104$7 = ARG_DT$1 & 31ll;
							label$946:;
							if( (((int64)-(*(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$101$7 * 56ll)) == 0ll) & (int64)-(*(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$102$7 * 56ll)) == 0ll)) & (int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$103$7 * 56ll)) + 8ll) == *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$104$7 * 56ll)) + 8ll))) == 0ll ) goto label$477;
							{
								fb$result$1 = -(*(int64*)(((uint8*)SYMB_DTYPEMATCHTB$ + (((ARG_DT$1 * 15ll) + PARAM_DT$1) << 3ll)) + -128ll)) + 24ll;
								goto label$411;
							}
							label$477:;
							label$476:;
						}
						label$471:;
						label$470:;
						fb$result$1 = 0ll;
						goto label$411;
					}
					goto label$460;
					label$461:;
					if( (ARG_DTYPE$1 & 480ll) == 0ll ) goto label$478;
					{
						fb$result$1 = 0ll;
						goto label$411;
					}
					label$478:;
					label$460:;
					if( (ARG_DTYPE$1 & 480ll) == 0ll ) goto label$479;
					TMP$105$5 = 22ll;
					goto label$947;
					label$479:;
					TMP$105$5 = ARG_DTYPE$1 & 31ll;
					label$947:;
					if( (PARAM_DTYPE$1 & 480ll) == 0ll ) goto label$480;
					TMP$106$5 = 22ll;
					goto label$948;
					label$480:;
					TMP$106$5 = PARAM_DTYPE$1 & 31ll;
					label$948:;
					fb$result$1 = -(*(int64*)(((uint8*)SYMB_DTYPEMATCHTB$ + (((TMP$105$5 * 15ll) + TMP$106$5) << 3ll)) + -128ll)) + 24ll;
					goto label$411;
				}
				goto label$417;
				label$481:;
				{
					int64 TMP$107$5;
					int64 TMP$108$5;
					if( (PARAM_DTYPE$1 & 480ll) == 0ll ) goto label$483;
					{
						fb$result$1 = 0ll;
						goto label$411;
					}
					label$483:;
					label$482:;
					if( (ARG_DTYPE$1 & 480ll) == 0ll ) goto label$484;
					TMP$107$5 = 22ll;
					goto label$949;
					label$484:;
					TMP$107$5 = ARG_DTYPE$1 & 31ll;
					label$949:;
					if( (PARAM_DTYPE$1 & 480ll) == 0ll ) goto label$485;
					TMP$108$5 = 22ll;
					goto label$950;
					label$485:;
					TMP$108$5 = PARAM_DTYPE$1 & 31ll;
					label$950:;
					fb$result$1 = -(*(int64*)(((uint8*)SYMB_DTYPEMATCHTB$ + (((TMP$107$5 * 15ll) + TMP$108$5) << 3ll)) + -128ll)) + 24ll;
					goto label$411;
				}
				goto label$417;
				label$486:;
				{
					{
						if( PARAM_DTYPE$1 == 3ll ) goto label$489;
						label$490:;
						if( PARAM_DTYPE$1 != 35ll ) goto label$488;
						label$489:;
						{
							fb$result$1 = 48ll;
							goto label$411;
						}
						goto label$487;
						label$488:;
						if( PARAM_DTYPE$1 == 6ll ) goto label$492;
						label$493:;
						if( PARAM_DTYPE$1 != 38ll ) goto label$491;
						label$492:;
						{
							fb$result$1 = 24ll;
							goto label$411;
						}
						label$491:;
						label$487:;
					}
				}
				goto label$417;
				label$418:;
				static const void* tmp$182[3ll] = {
					&&label$419,
					&&label$481,
					&&label$486,
				};
				if( TMP$100$4 > 2ll ) goto label$417;
				goto *tmp$182[TMP$100$4 - 0ll];
				label$417:;
			}
		}
		goto label$414;
		label$494:;
		{
			{
				uint64 TMP$109$4;
				TMP$109$4 = (uint64)ARG_DCLASS$1;
				goto label$496;
				label$497:;
				{
					int64 TMP$110$5;
					int64 TMP$111$5;
					if( (ARG_DTYPE$1 & 480ll) == 0ll ) goto label$499;
					{
						fb$result$1 = 0ll;
						goto label$411;
					}
					label$499:;
					label$498:;
					if( ARG_DTYPE$1 != 9ll ) goto label$501;
					{
						ARG_DTYPE$1 = (ARG_DTYPE$1 & -512ll) | (*(int64*)(((uint8*)SYMB_DTYPETB$ + (ARG_DTYPE$1 * 56ll)) + 32ll) & 511ll);
					}
					label$501:;
					label$500:;
					if( (ARG_DTYPE$1 & 480ll) == 0ll ) goto label$502;
					TMP$110$5 = 22ll;
					goto label$951;
					label$502:;
					TMP$110$5 = ARG_DTYPE$1 & 31ll;
					label$951:;
					if( (PARAM_DTYPE$1 & 480ll) == 0ll ) goto label$503;
					TMP$111$5 = 22ll;
					goto label$952;
					label$503:;
					TMP$111$5 = PARAM_DTYPE$1 & 31ll;
					label$952:;
					fb$result$1 = -(*(int64*)(((uint8*)SYMB_DTYPEMATCHTB$ + (((TMP$110$5 * 15ll) + TMP$111$5) << 3ll)) + -128ll)) + 24ll;
					goto label$411;
				}
				goto label$495;
				label$504:;
				{
					int64 TMP$112$5;
					int64 TMP$113$5;
					if( (ARG_DTYPE$1 & 480ll) == 0ll ) goto label$505;
					TMP$112$5 = 22ll;
					goto label$953;
					label$505:;
					TMP$112$5 = ARG_DTYPE$1 & 31ll;
					label$953:;
					if( (PARAM_DTYPE$1 & 480ll) == 0ll ) goto label$506;
					TMP$113$5 = 22ll;
					goto label$954;
					label$506:;
					TMP$113$5 = PARAM_DTYPE$1 & 31ll;
					label$954:;
					fb$result$1 = -(*(int64*)(((uint8*)SYMB_DTYPEMATCHTB$ + (((TMP$112$5 * 15ll) + TMP$113$5) << 3ll)) + -128ll)) + 24ll;
					goto label$411;
				}
				goto label$495;
				label$496:;
				static const void* tmp$183[2ll] = {
					&&label$497,
					&&label$504,
				};
				if( TMP$109$4 > 1ll ) goto label$495;
				goto *tmp$183[TMP$109$4 - 0ll];
				label$495:;
			}
		}
		goto label$414;
		label$507:;
		{
			{
				if( ARG_DCLASS$1 != 2ll ) goto label$509;
				label$510:;
				{
					fb$result$1 = 48ll;
				}
				goto label$508;
				label$509:;
				if( ARG_DCLASS$1 != 0ll ) goto label$511;
				label$512:;
				{
					{
						if( ARG_DTYPE$1 != 3ll ) goto label$514;
						label$515:;
						{
							fb$result$1 = 48ll;
						}
						goto label$513;
						label$514:;
						if( ARG_DTYPE$1 != 6ll ) goto label$516;
						label$517:;
						{
							fb$result$1 = 24ll;
						}
						label$516:;
						label$513:;
					}
				}
				label$511:;
				label$508:;
			}
		}
		goto label$414;
		label$415:;
		static const void* tmp$184[3ll] = {
			&&label$416,
			&&label$494,
			&&label$507,
		};
		if( TMP$99$2 > 2ll ) goto label$414;
		goto *tmp$184[TMP$99$2 - 0ll];
		label$414:;
	}
	label$411:;
	return fb$result$1;
}

static int64 HCHECKOVLPARAM( struct $8FBSYMBOL* PARENT$1, struct $8FBSYMBOL* PARAM$1, struct $7ASTNODE* ARG_EXPR$1, int64 ARG_MODE$1, int64* CONSTONLY_DIFF$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$518:;
	int64 PARAM_DTYPE$1;
	int64 ARG_DTYPE$1;
	int64 PARAM_PTRCNT$1;
	int64 BASELEVEL$1;
	int64 TYPE_IS_COMPATIBLE$1;
	int64 CONST_MATCHES$1;
	struct $8FBSYMBOL* PARAM_SUBTYPE$1;
	struct $8FBSYMBOL* ARG_SUBTYPE$1;
	struct $8FBSYMBOL* ARRAY$1;
	*CONSTONLY_DIFF$1 = 0ll;
	if( ARG_EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$521;
	{
		if( (*(int64*)((uint8*)PARAM$1 + 8ll) & 2097152ll) == 0ll ) goto label$523;
		{
			fb$result$1 = 48ll;
			goto label$519;
		}
		goto label$522;
		label$523:;
		{
			fb$result$1 = 0ll;
			goto label$519;
		}
		label$522:;
	}
	label$521:;
	label$520:;
	PARAM_DTYPE$1 = *(int64*)((uint8*)PARAM$1 + 48ll);
	PARAM_SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll);
	PARAM_PTRCNT$1 = ((*(int64*)((uint8*)PARAM$1 + 48ll) & 511ll) & 480ll) >> 5ll;
	ARG_DTYPE$1 = *(int64*)((uint8*)ARG_EXPR$1 + 8ll);
	ARG_SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)ARG_EXPR$1 + 16ll);
	{
		$12FB_PARAMMODE TMP$114$2;
		TMP$114$2 = *($12FB_PARAMMODE*)((uint8*)PARAM$1 + 88ll);
		if( TMP$114$2 != 3ll ) goto label$525;
		label$526:;
		{
			if( ARG_MODE$1 == 3ll ) goto label$528;
			{
				fb$result$1 = 0ll;
				goto label$519;
			}
			label$528:;
			label$527:;
			if( PARAM_DTYPE$1 == ARG_DTYPE$1 ) goto label$530;
			{
				fb$result$1 = 0ll;
				goto label$519;
			}
			label$530:;
			label$529:;
			if( PARAM_SUBTYPE$1 == ARG_SUBTYPE$1 ) goto label$532;
			{
				fb$result$1 = 0ll;
				goto label$519;
			}
			label$532:;
			label$531:;
			ARRAY$1 = *(struct $8FBSYMBOL**)((uint8*)ARG_EXPR$1 + 24ll);
			if( *(int64*)((uint8*)PARAM$1 + 112ll) <= 0ll ) goto label$534;
			{
				if( ((int64)-(*(int64*)((uint8*)PARAM$1 + 112ll) != *(int64*)((uint8*)ARRAY$1 + 96ll)) & (int64)-(*(int64*)((uint8*)ARRAY$1 + 96ll) > 0ll)) == 0ll ) goto label$536;
				{
					fb$result$1 = 0ll;
					goto label$519;
				}
				label$536:;
				label$535:;
			}
			label$534:;
			label$533:;
			fb$result$1 = 48ll;
			goto label$519;
		}
		goto label$524;
		label$525:;
		if( TMP$114$2 != 2ll ) goto label$537;
		label$538:;
		{
			if( ARG_MODE$1 != 1ll ) goto label$540;
			{
				int64 TMP$115$4;
				int64 TMP$116$4;
				if( (ARG_DTYPE$1 & 480ll) == 0ll ) goto label$541;
				TMP$115$4 = 22ll;
				goto label$955;
				label$541:;
				TMP$115$4 = ARG_DTYPE$1 & 31ll;
				label$955:;
				if( (ARG_DTYPE$1 & 480ll) == 0ll ) goto label$542;
				TMP$116$4 = 22ll;
				goto label$956;
				label$542:;
				TMP$116$4 = ARG_DTYPE$1 & 31ll;
				label$956:;
				if( ((int64)-(*(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$115$4 * 56ll)) != 0ll) | (int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$116$4 * 56ll)) + 8ll) != *(int64*)((uint8*)&ENV$ + 472ll))) == 0ll ) goto label$544;
				{
					fb$result$1 = 0ll;
					goto label$519;
				}
				label$544:;
				label$543:;
				PARAM_DTYPE$1 = ((PARAM_DTYPE$1 & 31ll) | ((PARAM_DTYPE$1 & 480ll) + 32ll)) | ((PARAM_DTYPE$1 & 261632ll) << 1ll);
				PARAM_PTRCNT$1 = PARAM_PTRCNT$1 + 1ll;
			}
			label$540:;
			label$539:;
		}
		label$537:;
		label$524:;
	}
	if( ARG_MODE$1 != 3ll ) goto label$546;
	{
		fb$result$1 = 0ll;
		goto label$519;
	}
	label$546:;
	label$545:;
	static int64 CAST_REC_CNT$1 = 0ll;
	static int64 CTOR_REC_CNT$1 = 0ll;
	if( (PARAM_DTYPE$1 & 511ll) != (ARG_DTYPE$1 & 511ll) ) goto label$548;
	{
		TYPE_IS_COMPATIBLE$1 = 0ll;
		BASELEVEL$1 = 0ll;
		if( PARAM_SUBTYPE$1 != ARG_SUBTYPE$1 ) goto label$550;
		{
			TYPE_IS_COMPATIBLE$1 = -1ll;
		}
		goto label$549;
		label$550:;
		if( (PARAM_DTYPE$1 & 31ll) != 18ll ) goto label$551;
		{
			int64 vr$58 = SYMBGETUDTBASELEVEL( ARG_SUBTYPE$1, PARAM_SUBTYPE$1 );
			BASELEVEL$1 = vr$58;
			TYPE_IS_COMPATIBLE$1 = (int64)-(BASELEVEL$1 > 0ll);
		}
		label$551:;
		label$549:;
		if( TYPE_IS_COMPATIBLE$1 == 0ll ) goto label$553;
		{
			if( ((int64)-((*(int64*)((uint8*)PARENT$1 + 16ll) & 32ll) != 0ll) & ~(int64)-((*(int64*)((uint8*)PARAM$1 + 16ll) & 33554432ll) != 0ll)) == 0ll ) goto label$555;
			{
				fb$result$1 = 48ll - BASELEVEL$1;
				goto label$519;
			}
			label$555:;
			label$554:;
			if( (PARAM_DTYPE$1 & 261632ll) != (ARG_DTYPE$1 & 261632ll) ) goto label$557;
			{
				fb$result$1 = 48ll - BASELEVEL$1;
				goto label$519;
			}
			label$557:;
			label$556:;
			int64 vr$77 = SYMBCHECKCONSTASSIGN( PARAM_DTYPE$1, ARG_DTYPE$1, PARAM_SUBTYPE$1, ARG_SUBTYPE$1, *($12FB_PARAMMODE*)((uint8*)PARAM$1 + 88ll), &CONST_MATCHES$1 );
			if( vr$77 == 0ll ) goto label$559;
			{
				*CONSTONLY_DIFF$1 = -1ll;
				fb$result$1 = 24ll - BASELEVEL$1;
				goto label$519;
			}
			label$559:;
			label$558:;
			fb$result$1 = 0ll;
			goto label$519;
		}
		label$553:;
		label$552:;
		if( (PARAM_DTYPE$1 & 480ll) == 0ll ) goto label$561;
		{
			int64 vr$83 = ASTPTRCHECK( PARAM_DTYPE$1, PARAM_SUBTYPE$1, ARG_EXPR$1, -1ll );
			if( vr$83 == 0ll ) goto label$563;
			{
				fb$result$1 = 48ll;
				goto label$519;
			}
			label$563:;
			label$562:;
			fb$result$1 = 0ll;
			goto label$519;
		}
		label$561:;
		label$560:;
	}
	label$548:;
	label$547:;
	{
		if( PARAM_DTYPE$1 != 18ll ) goto label$565;
		label$566:;
		{
			if( CTOR_REC_CNT$1 != 0ll ) goto label$568;
			{
				int64 ERR_NUM$4;
				struct $8FBSYMBOL* PROC$4;
				CTOR_REC_CNT$1 = CTOR_REC_CNT$1 + 1ll;
				struct $8FBSYMBOL* vr$89 = SYMBFINDCTOROVLPROC( PARAM_SUBTYPE$1, ARG_EXPR$1, ARG_MODE$1, ($9FB_ERRMSG*)&ERR_NUM$4 );
				PROC$4 = vr$89;
				CTOR_REC_CNT$1 = CTOR_REC_CNT$1 + -1ll;
				if( PROC$4 == (struct $8FBSYMBOL*)0ull ) goto label$570;
				{
					fb$result$1 = 6ll;
					goto label$519;
				}
				label$570:;
				label$569:;
			}
			label$568:;
			label$567:;
			if( CAST_REC_CNT$1 != 0ll ) goto label$572;
			{
				int64 ERR_NUM$4;
				struct $8FBSYMBOL* PROC$4;
				CAST_REC_CNT$1 = CAST_REC_CNT$1 + 1ll;
				struct $8FBSYMBOL* vr$95 = SYMBFINDCASTOVLPROC( PARAM_DTYPE$1, PARAM_SUBTYPE$1, ARG_EXPR$1, ($9FB_ERRMSG*)&ERR_NUM$4 );
				PROC$4 = vr$95;
				CAST_REC_CNT$1 = CAST_REC_CNT$1 + -1ll;
				if( PROC$4 == (struct $8FBSYMBOL*)0ull ) goto label$574;
				{
					fb$result$1 = 6ll;
					goto label$519;
				}
				label$574:;
				label$573:;
			}
			label$572:;
			label$571:;
			fb$result$1 = 0ll;
			goto label$519;
		}
		goto label$564;
		label$565:;
		if( PARAM_DTYPE$1 != 9ll ) goto label$575;
		label$576:;
		{
			fb$result$1 = 0ll;
			goto label$519;
		}
		goto label$564;
		label$575:;
		{
			{
				if( ARG_DTYPE$1 != 18ll ) goto label$579;
				label$580:;
				{
					if( CAST_REC_CNT$1 != 0ll ) goto label$582;
					{
						int64 ERR_NUM$6;
						struct $8FBSYMBOL* PROC$6;
						CAST_REC_CNT$1 = CAST_REC_CNT$1 + 1ll;
						struct $8FBSYMBOL* vr$104 = SYMBFINDCASTOVLPROC( *(int64*)((uint8*)PARAM$1 + 48ll), PARAM_SUBTYPE$1, ARG_EXPR$1, ($9FB_ERRMSG*)&ERR_NUM$6 );
						PROC$6 = vr$104;
						CAST_REC_CNT$1 = CAST_REC_CNT$1 + -1ll;
						if( PROC$6 == (struct $8FBSYMBOL*)0ull ) goto label$584;
						{
							fb$result$1 = 6ll;
							goto label$519;
						}
						label$584:;
						label$583:;
					}
					label$582:;
					label$581:;
					fb$result$1 = 0ll;
					goto label$519;
				}
				label$579:;
				label$578:;
			}
		}
		label$577:;
		label$564:;
	}
	int64 vr$110 = HCALCTYPESDIFF( *(int64*)((uint8*)PARAM$1 + 48ll), PARAM_SUBTYPE$1, PARAM_PTRCNT$1, *(int64*)((uint8*)ARG_EXPR$1 + 8ll), ARG_SUBTYPE$1, ARG_EXPR$1, *($12FB_PARAMMODE*)((uint8*)PARAM$1 + 88ll) );
	fb$result$1 = vr$110;
	label$519:;
	return fb$result$1;
}

static int64 HCHECKCASTOVL( struct $8FBSYMBOL* PROC$1, int64 TO_DTYPE$1, struct $8FBSYMBOL* TO_SUBTYPE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$694:;
	int64 PROC_DTYPE$1;
	struct $8FBSYMBOL* PROC_SUBTYPE$1;
	PROC_DTYPE$1 = *(int64*)((uint8*)PROC$1 + 48ll);
	PROC_SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 56ll);
	if( (PROC_DTYPE$1 & 511ll) != (TO_DTYPE$1 & 511ll) ) goto label$697;
	{
		if( PROC_SUBTYPE$1 != TO_SUBTYPE$1 ) goto label$699;
		{
			fb$result$1 = 48ll;
			goto label$695;
		}
		label$699:;
		label$698:;
		if( (PROC_DTYPE$1 & 480ll) == 0ll ) goto label$701;
		{
			fb$result$1 = 0ll;
			goto label$695;
		}
		label$701:;
		label$700:;
	}
	label$697:;
	label$696:;
	{
		int64 TMP$124$2;
		int64 TMP$125$2;
		if( (PROC_DTYPE$1 & 480ll) == 0ll ) goto label$702;
		TMP$124$2 = 22ll;
		goto label$957;
		label$702:;
		TMP$124$2 = PROC_DTYPE$1 & 31ll;
		label$957:;
		TMP$125$2 = TMP$124$2;
		if( TMP$125$2 == 18ll ) goto label$705;
		label$706:;
		if( TMP$125$2 != 9ll ) goto label$704;
		label$705:;
		{
			fb$result$1 = 0ll;
			goto label$695;
		}
		goto label$703;
		label$704:;
		{
			{
				int64 TMP$126$4;
				int64 TMP$127$4;
				if( (TO_DTYPE$1 & 480ll) == 0ll ) goto label$708;
				TMP$126$4 = 22ll;
				goto label$958;
				label$708:;
				TMP$126$4 = TO_DTYPE$1 & 31ll;
				label$958:;
				TMP$127$4 = TMP$126$4;
				if( TMP$127$4 != 18ll ) goto label$710;
				label$711:;
				{
					fb$result$1 = 0ll;
					goto label$695;
				}
				label$710:;
				label$709:;
			}
		}
		label$707:;
		label$703:;
	}
	int64 vr$22 = HCALCTYPESDIFF( PROC_DTYPE$1, PROC_SUBTYPE$1, ((*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) & 480ll) >> 5ll, TO_DTYPE$1, TO_SUBTYPE$1, (struct $7ASTNODE*)0ull, 0ll );
	fb$result$1 = vr$22;
	label$695:;
	return fb$result$1;
}

static void HDELPARAMS( struct $8FBSYMBOL* PROC$1 )
{
	label$751:;
	struct $8FBSYMBOL* PARAM$1;
	struct $8FBSYMBOL* NXT$1;
	PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 128ll);
	label$753:;
	if( PARAM$1 == (struct $8FBSYMBOL*)0ull ) goto label$754;
	{
		NXT$1 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 296ll);
		SYMBFREESYMBOL( PARAM$1 );
		PARAM$1 = NXT$1;
	}
	goto label$753;
	label$754:;
	label$752:;
}

static struct $20FB_GLOBCTORLIST_ITEM* HADDTOGLOBCTORLIST( struct $15FB_GLOBCTORLIST* LIST$1, struct $8FBSYMBOL* PROC$1 )
{
	struct $20FB_GLOBCTORLIST_ITEM* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$759:;
	struct $20FB_GLOBCTORLIST_ITEM* N$1;
	void* vr$3 = LISTNEWNODE( (struct $5TLIST*)((uint8*)LIST$1 + 16ll) );
	N$1 = (struct $20FB_GLOBCTORLIST_ITEM*)vr$3;
	if( *(struct $20FB_GLOBCTORLIST_ITEM**)((uint8*)LIST$1 + 8ll) == (struct $20FB_GLOBCTORLIST_ITEM*)0ull ) goto label$762;
	{
		*(struct $20FB_GLOBCTORLIST_ITEM**)((uint8*)*(struct $20FB_GLOBCTORLIST_ITEM**)((uint8*)LIST$1 + 8ll) + 8ll) = N$1;
	}
	goto label$761;
	label$762:;
	{
		*(struct $20FB_GLOBCTORLIST_ITEM**)LIST$1 = N$1;
	}
	label$761:;
	*(struct $20FB_GLOBCTORLIST_ITEM**)((uint8*)N$1 + 8ll) = (struct $20FB_GLOBCTORLIST_ITEM*)0ull;
	*(struct $20FB_GLOBCTORLIST_ITEM**)((uint8*)LIST$1 + 8ll) = N$1;
	*(struct $8FBSYMBOL**)N$1 = PROC$1;
	fb$result$1 = N$1;
	label$760:;
	return fb$result$1;
}

static int64 HAREMETHODSCOMPATIBLE( struct $8FBSYMBOL* V$1, struct $8FBSYMBOL* O$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$775:;
	struct $8FBSYMBOL* VPARAM$1;
	struct $8FBSYMBOL* OPARAM$1;
	if( ((int64)-(*(int64*)((uint8*)V$1 + 48ll) != *(int64*)((uint8*)O$1 + 48ll)) | (int64)-(*(struct $8FBSYMBOL**)((uint8*)V$1 + 56ll) != *(struct $8FBSYMBOL**)((uint8*)O$1 + 56ll))) == 0ll ) goto label$778;
	{
		fb$result$1 = 224ll;
		goto label$776;
	}
	label$778:;
	label$777:;
	if( (int64)-((*(int64*)((uint8*)V$1 + 8ll) & 33554432ll) != 0ll) == (int64)-((*(int64*)((uint8*)O$1 + 8ll) & 33554432ll) != 0ll) ) goto label$780;
	{
		fb$result$1 = 224ll;
		goto label$776;
	}
	label$780:;
	label$779:;
	int64 vr$16 = SYMBAREPROCMODESEQUAL( V$1, O$1 );
	if( vr$16 != 0ll ) goto label$782;
	{
		fb$result$1 = 225ll;
		goto label$776;
	}
	label$782:;
	label$781:;
	if( (int64)-((*(int64*)((uint8*)V$1 + 8ll) & 1048576ll) != 0ll) == (int64)-((*(int64*)((uint8*)O$1 + 8ll) & 1048576ll) != 0ll) ) goto label$784;
	{
		if( (*(int64*)((uint8*)V$1 + 8ll) & 1048576ll) == 0ll ) goto label$786;
		{
			fb$result$1 = 228ll;
			goto label$776;
		}
		label$786:;
		label$785:;
		fb$result$1 = 229ll;
		goto label$776;
	}
	label$784:;
	label$783:;
	if( (int64)*(int16*)((uint8*)V$1 + 112ll) == (int64)*(int16*)((uint8*)O$1 + 112ll) ) goto label$788;
	{
		fb$result$1 = 230ll;
		goto label$776;
	}
	label$788:;
	label$787:;
	VPARAM$1 = *(struct $8FBSYMBOL**)((uint8*)V$1 + 128ll);
	OPARAM$1 = *(struct $8FBSYMBOL**)((uint8*)O$1 + 128ll);
	VPARAM$1 = *(struct $8FBSYMBOL**)((uint8*)VPARAM$1 + 296ll);
	OPARAM$1 = *(struct $8FBSYMBOL**)((uint8*)OPARAM$1 + 296ll);
	label$789:;
	if( VPARAM$1 == (struct $8FBSYMBOL*)0ull ) goto label$790;
	{
		int64 vr$38 = SYMBPARAMISSAME( VPARAM$1, OPARAM$1 );
		if( vr$38 != 0ll ) goto label$792;
		{
			fb$result$1 = 230ll;
			goto label$776;
		}
		label$792:;
		label$791:;
		VPARAM$1 = *(struct $8FBSYMBOL**)((uint8*)VPARAM$1 + 296ll);
		OPARAM$1 = *(struct $8FBSYMBOL**)((uint8*)OPARAM$1 + 296ll);
	}
	goto label$789;
	label$790:;
	fb$result$1 = 0ll;
	label$776:;
	return fb$result$1;
}

static void HSUBORFUNCTOSTR( FBSTRING* S$1, struct $8FBSYMBOL* PROC$1 )
{
	label$825:;
	if( (*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) != 0ll ) goto label$828;
	{
		FBSTRING TMP$131$2;
		__builtin_memset( &TMP$131$2, 0, 24ll );
		FBSTRING* vr$5 = fb_StrConcat( &TMP$131$2, (void*)S$1, -1ll, (void*)"sub", 4ll );
		FBSTRING* vr$6 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$5, -1ll, 0 );
	}
	goto label$827;
	label$828:;
	{
		FBSTRING TMP$133$2;
		__builtin_memset( &TMP$133$2, 0, 24ll );
		FBSTRING* vr$9 = fb_StrConcat( &TMP$133$2, (void*)S$1, -1ll, (void*)"function", 9ll );
		FBSTRING* vr$10 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$9, -1ll, 0 );
	}
	label$827:;
	label$826:;
}

static void HPROCMODETOSTR( FBSTRING* S$1, struct $8FBSYMBOL* PROC$1 )
{
	label$829:;
	if( ((int64)-((*(int64*)((uint8*)PROC$1 + 8ll) & 4096ll) != 0ll) | (int64)-((*(int64*)((uint8*)PROC$1 + 8ll) & 8192ll) != 0ll)) == 0ll ) goto label$832;
	{
		{
			$11FB_FUNCMODE TMP$134$3;
			TMP$134$3 = *($11FB_FUNCMODE*)((uint8*)PROC$1 + 144ll);
			if( TMP$134$3 == 1ll ) goto label$835;
			label$836:;
			if( TMP$134$3 != 2ll ) goto label$834;
			label$835:;
			{
				FBSTRING TMP$136$4;
				__builtin_memset( &TMP$136$4, 0, 24ll );
				FBSTRING* vr$13 = fb_StrConcat( &TMP$136$4, (void*)S$1, -1ll, (void*)" stdcall", 9ll );
				FBSTRING* vr$14 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$13, -1ll, 0 );
			}
			goto label$833;
			label$834:;
			if( TMP$134$3 != 4ll ) goto label$837;
			label$838:;
			{
				FBSTRING TMP$138$4;
				__builtin_memset( &TMP$138$4, 0, 24ll );
				FBSTRING* vr$18 = fb_StrConcat( &TMP$138$4, (void*)S$1, -1ll, (void*)" pascal", 8ll );
				FBSTRING* vr$19 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$18, -1ll, 0 );
			}
			label$837:;
			label$833:;
		}
	}
	goto label$831;
	label$832:;
	{
		{
			$11FB_FUNCMODE TMP$139$3;
			TMP$139$3 = *($11FB_FUNCMODE*)((uint8*)PROC$1 + 144ll);
			if( TMP$139$3 == 1ll ) goto label$841;
			label$842:;
			if( TMP$139$3 != 2ll ) goto label$840;
			label$841:;
			{
				{
					$11FB_FUNCMODE TMP$140$5;
					TMP$140$5 = *($11FB_FUNCMODE*)((uint8*)&ENV$ + 432ll);
					if( TMP$140$5 == 1ll ) goto label$845;
					label$846:;
					if( TMP$140$5 != 2ll ) goto label$844;
					label$845:;
					{
					}
					goto label$843;
					label$844:;
					{
						FBSTRING TMP$141$6;
						__builtin_memset( &TMP$141$6, 0, 24ll );
						FBSTRING* vr$27 = fb_StrConcat( &TMP$141$6, (void*)S$1, -1ll, (void*)" stdcall", 9ll );
						FBSTRING* vr$28 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$27, -1ll, 0 );
					}
					label$847:;
					label$843:;
				}
			}
			goto label$839;
			label$840:;
			if( TMP$139$3 != 4ll ) goto label$848;
			label$849:;
			{
				if( *(int64*)((uint8*)&ENV$ + 432ll) == 4ll ) goto label$851;
				{
					FBSTRING TMP$142$5;
					__builtin_memset( &TMP$142$5, 0, 24ll );
					FBSTRING* vr$33 = fb_StrConcat( &TMP$142$5, (void*)S$1, -1ll, (void*)" pascal", 8ll );
					FBSTRING* vr$34 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$33, -1ll, 0 );
				}
				label$851:;
				label$850:;
			}
			goto label$839;
			label$848:;
			if( TMP$139$3 != 3ll ) goto label$852;
			label$853:;
			{
				if( *(int64*)((uint8*)&ENV$ + 432ll) == 3ll ) goto label$855;
				{
					FBSTRING TMP$144$5;
					__builtin_memset( &TMP$144$5, 0, 24ll );
					FBSTRING* vr$39 = fb_StrConcat( &TMP$144$5, (void*)S$1, -1ll, (void*)" cdecl", 7ll );
					FBSTRING* vr$40 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$39, -1ll, 0 );
				}
				label$855:;
				label$854:;
			}
			label$852:;
			label$839:;
		}
	}
	label$831:;
	label$830:;
}

static void HPARAMSTOSTR( FBSTRING* S$1, struct $8FBSYMBOL* PROC$1 )
{
	FBSTRING TMP$150$1;
	FBSTRING TMP$163$1;
	label$864:;
	__builtin_memset( &TMP$150$1, 0, 24ll );
	FBSTRING* vr$2 = fb_StrConcat( &TMP$150$1, (void*)S$1, -1ll, (void*)"(", 2ll );
	FBSTRING* vr$3 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$2, -1ll, 0 );
	struct $8FBSYMBOL* PARAM$1;
	PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 128ll);
	if( ((int64)-(PARAM$1 != (struct $8FBSYMBOL*)0ull) & (int64)-((*(int64*)((uint8*)PROC$1 + 8ll) & 2048ll) != 0ll)) == 0ll ) goto label$867;
	{
		PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 296ll);
	}
	label$867:;
	label$866:;
	label$868:;
	if( PARAM$1 == (struct $8FBSYMBOL*)0ull ) goto label$869;
	{
		$12FB_PARAMMODE PARAMMODE$2;
		PARAMMODE$2 = *($12FB_PARAMMODE*)((uint8*)PARAM$1 + 88ll);
		{
			if( PARAMMODE$2 == 1ll ) goto label$872;
			label$873:;
			if( PARAMMODE$2 == 2ll ) goto label$872;
			label$874:;
			if( PARAMMODE$2 != 3ll ) goto label$871;
			label$872:;
			{
				FBSTRING TMP$157$4;
				FBSTRING TMP$158$4;
				{
					if( PARAMMODE$2 == 1ll ) goto label$877;
					label$878:;
					if( PARAMMODE$2 != 2ll ) goto label$876;
					label$877:;
					{
						int64 vr$22 = SYMBGETDEFAULTPARAMMODE( *(int64*)((uint8*)PARAM$1 + 48ll), *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll) );
						if( ((int64)-(*(int64*)((uint8*)&ENV$ + 272ll) == 0ll) & (int64)-(vr$22 != PARAMMODE$2)) == 0ll ) goto label$880;
						{
							if( PARAMMODE$2 != 1ll ) goto label$882;
							{
								FBSTRING TMP$152$8;
								__builtin_memset( &TMP$152$8, 0, 24ll );
								FBSTRING* vr$29 = fb_StrConcat( &TMP$152$8, (void*)S$1, -1ll, (void*)"byval ", 7ll );
								FBSTRING* vr$30 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$29, -1ll, 0 );
							}
							goto label$881;
							label$882:;
							{
								FBSTRING TMP$154$8;
								__builtin_memset( &TMP$154$8, 0, 24ll );
								FBSTRING* vr$33 = fb_StrConcat( &TMP$154$8, (void*)S$1, -1ll, (void*)"byref ", 7ll );
								FBSTRING* vr$34 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$33, -1ll, 0 );
							}
							label$881:;
						}
						label$880:;
						label$879:;
					}
					goto label$875;
					label$876:;
					if( PARAMMODE$2 != 3ll ) goto label$883;
					label$884:;
					{
						FBSTRING TMP$155$6;
						FBSTRING* vr$37 = HDUMPDYNAMICARRAYDIMENSIONS( *(int64*)((uint8*)PARAM$1 + 112ll) );
						__builtin_memset( &TMP$155$6, 0, 24ll );
						FBSTRING* vr$40 = fb_StrConcat( &TMP$155$6, (void*)S$1, -1ll, (void*)vr$37, -1ll );
						FBSTRING* vr$41 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$40, -1ll, 0 );
					}
					label$883:;
					label$875:;
				}
				FBSTRING* vr$44 = SYMBTYPETOSTR( *(int64*)((uint8*)PARAM$1 + 48ll), *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll), 0ll );
				__builtin_memset( &TMP$157$4, 0, 24ll );
				FBSTRING* vr$47 = fb_StrConcat( &TMP$157$4, (void*)"as ", 4ll, (void*)vr$44, -1ll );
				__builtin_memset( &TMP$158$4, 0, 24ll );
				FBSTRING* vr$50 = fb_StrConcat( &TMP$158$4, (void*)S$1, -1ll, (void*)vr$47, -1ll );
				FBSTRING* vr$51 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$50, -1ll, 0 );
			}
			goto label$870;
			label$871:;
			if( PARAMMODE$2 != 4ll ) goto label$885;
			label$886:;
			{
				FBSTRING TMP$160$4;
				__builtin_memset( &TMP$160$4, 0, 24ll );
				FBSTRING* vr$55 = fb_StrConcat( &TMP$160$4, (void*)S$1, -1ll, (void*)"...", 4ll );
				FBSTRING* vr$56 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$55, -1ll, 0 );
			}
			label$885:;
			label$870:;
		}
		PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 296ll);
		if( PARAM$1 == (struct $8FBSYMBOL*)0ull ) goto label$888;
		{
			FBSTRING TMP$161$3;
			__builtin_memset( &TMP$161$3, 0, 24ll );
			FBSTRING* vr$61 = fb_StrConcat( &TMP$161$3, (void*)S$1, -1ll, (void*)", ", 3ll );
			FBSTRING* vr$62 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$61, -1ll, 0 );
		}
		label$888:;
		label$887:;
	}
	goto label$868;
	label$869:;
	__builtin_memset( &TMP$163$1, 0, 24ll );
	FBSTRING* vr$65 = fb_StrConcat( &TMP$163$1, (void*)S$1, -1ll, (void*)")", 2ll );
	FBSTRING* vr$66 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$65, -1ll, 0 );
	label$865:;
}

static void HRESULTTOSTR( FBSTRING* S$1, struct $8FBSYMBOL* PROC$1 )
{
	label$889:;
	if( (*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) == 0ll ) goto label$892;
	{
		FBSTRING TMP$167$2;
		FBSTRING TMP$168$2;
		if( (*(int64*)((uint8*)PROC$1 + 8ll) & 33554432ll) == 0ll ) goto label$894;
		{
			FBSTRING TMP$165$3;
			__builtin_memset( &TMP$165$3, 0, 24ll );
			FBSTRING* vr$8 = fb_StrConcat( &TMP$165$3, (void*)S$1, -1ll, (void*)" byref", 7ll );
			FBSTRING* vr$9 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$8, -1ll, 0 );
		}
		label$894:;
		label$893:;
		FBSTRING* vr$12 = SYMBTYPETOSTR( *(int64*)((uint8*)PROC$1 + 48ll), *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 56ll), 0ll );
		__builtin_memset( &TMP$167$2, 0, 24ll );
		FBSTRING* vr$15 = fb_StrConcat( &TMP$167$2, (void*)" as ", 5ll, (void*)vr$12, -1ll );
		__builtin_memset( &TMP$168$2, 0, 24ll );
		FBSTRING* vr$18 = fb_StrConcat( &TMP$168$2, (void*)S$1, -1ll, (void*)vr$15, -1ll );
		FBSTRING* vr$19 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$18, -1ll, 0 );
	}
	label$892:;
	label$891:;
	label$890:;
}

// Total compilation time: 0.05661092756781727 seconds.
