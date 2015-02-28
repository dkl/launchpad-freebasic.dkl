// Compilation of fbc-1.01.0/src/compiler/symb-comp.bas started at 15:27:44 on 02-28-2015

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
struct $18SYMBDEFAULTMEMBERS {
	struct $8FBSYMBOL* DEFCTOR;
	struct $8FBSYMBOL* DTOR;
	struct $8FBSYMBOL* COPYCTOR;
	struct $8FBSYMBOL* COPYCTORCONST;
	struct $8FBSYMBOL* COPYLETOPCONST;
};
__FB_STATIC_ASSERT( sizeof( struct $18SYMBDEFAULTMEMBERS ) == 40 );
struct $11FB_SYMBNEST {
	struct $8FBSYMBOL* SYM;
	struct $10FBSYMBOLTB* SYMTB;
	struct $8FBHASHTB* HASHTB;
	struct $8FBSYMBOL* NS;
};
__FB_STATIC_ASSERT( sizeof( struct $11FB_SYMBNEST ) == 32 );
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
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
int32 fb_StrCompare( void*, int64, void*, int64 );
static void fb_ctor__symbzcomp( void ) __attribute__(( constructor ));
void* XCALLOCATE( int32 );
void* LISTNEWNODE( struct $5TLIST* );
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRREPORT( int64, int64, uint8* );
int64 STACKNEW( struct $6TSTACK*, int64, int64, int64 );
int64 STACKFREE( struct $6TSTACK* );
void* STACKPUSH( struct $6TSTACK* );
void STACKPOP( struct $6TSTACK* );
void* STACKGETTOS( struct $6TSTACK* );
void ASTPROCBEGIN( struct $8FBSYMBOL*, int64 );
int64 ASTPROCEND( int64 );
struct $7ASTNODE* ASTADD( struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDBRANCH( struct $7ASTNODE*, struct $8FBSYMBOL*, int64, int64 );
struct $7ASTNODE* ASTNEWASSIGN( struct $7ASTNODE*, struct $7ASTNODE*, $9AST_OPOPT );
typedef int64 $11AST_CONVOPT;
struct $7ASTNODE* ASTNEWCONV( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, $11AST_CONVOPT, int64* );
struct $7ASTNODE* ASTNEWBOP( int64, struct $7ASTNODE*, struct $7ASTNODE*, struct $8FBSYMBOL*, $9AST_OPOPT );
struct $7ASTNODE* ASTNEWCONSTI( int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWVAR( struct $8FBSYMBOL*, int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWDEREF( struct $7ASTNODE*, int64, struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* ASTNEWADDROF( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWBRANCH( int64, struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWLABEL( struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* ASTNEWMEM( int64, struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTTYPEINIBEGIN( int64, struct $8FBSYMBOL*, int64, int64 );
void ASTTYPEINIEND( struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTTYPEINIADDASSIGN( struct $7ASTNODE*, struct $7ASTNODE*, struct $8FBSYMBOL*, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTTYPEINISCOPEBEGIN( struct $7ASTNODE*, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTTYPEINISCOPEEND( struct $7ASTNODE*, struct $8FBSYMBOL* );
void ASTTYPEINICOPYELEMENTS( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
void ASTTYPEINIREPLACEELEMENT( struct $7ASTNODE*, int64, struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDVARDEREF( struct $8FBSYMBOL* );
struct $7ASTNODE* ASTBUILDVARINC( struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEl( struct $8FBSYMBOL*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* _Z19ASTBUILDDEREFADDROFP7ASTNODExlP8FBSYMBOLS2_( struct $7ASTNODE*, int64, int64, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTBUILDVARFIELD( struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* ASTBUILDFORBEGIN( struct $7ASTNODE*, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64, int64 );
struct $7ASTNODE* ASTBUILDFOREND( struct $7ASTNODE*, struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDPROCADDROF( struct $8FBSYMBOL* );
void SYMBPROCCHECKOVERRIDDEN( struct $8FBSYMBOL*, int64 );
int64 SYMBPROCGETVTABLEINDEX( struct $8FBSYMBOL* );
typedef int64 $10FB_SYMBOPT;
struct $8FBSYMBOL* SYMBADDLABEL( uint8*, $10FB_SYMBOPT );
struct $8FBSYMBOL* SYMBADDVAR( uint8*, uint8*, int64, struct $8FBSYMBOL*, int64, int64, struct $7FBARRAYI10FBARRAYDIME*, int64, $10FB_SYMBOPT );
struct $8FBSYMBOL* SYMBADDTEMPVAR( int64, struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBSTRUCTBEGIN( struct $10FBSYMBOLTB*, struct $8FBHASHTB*, struct $8FBSYMBOL*, uint8*, uint8*, int64, int64, struct $8FBSYMBOL*, int64, int64 );
struct $8FBSYMBOL* SYMBADDFIELD( struct $8FBSYMBOL*, uint8*, int64, struct $7FBARRAYI10FBARRAYDIME*, int64, struct $8FBSYMBOL*, int64, int64, int64 );
void SYMBSTRUCTEND( struct $8FBSYMBOL*, int64 );
struct $8FBSYMBOL* SYMBADDPROCPARAM( struct $8FBSYMBOL*, uint8*, int64, struct $8FBSYMBOL*, int64, int64, $13FB_SYMBATTRIB );
struct $8FBSYMBOL* SYMBADDOPERATOR( struct $8FBSYMBOL*, $6AST_OP, uint8*, int64, struct $8FBSYMBOL*, int64, int64, $10FB_SYMBOPT );
struct $8FBSYMBOL* SYMBADDCTOR( struct $8FBSYMBOL*, uint8*, int64, int64, $10FB_SYMBOPT );
struct $8FBSYMBOL* SYMBPREADDPROC( uint8* );
void SYMBADDPROCINSTANCEPTR( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBALLOCSTRCONST( uint8*, int64 );
void SYMBHASHLISTADD( struct $8FBHASHTB* );
void SYMBHASHLISTADDBEFORE( struct $8FBHASHTB*, struct $8FBHASHTB* );
void SYMBHASHLISTDEL( struct $8FBHASHTB* );
void SYMBNESTBEGIN( struct $8FBSYMBOL*, int64 );
void SYMBNESTEND( int64 );
uint8* SYMBGETMANGLEDNAME( struct $8FBSYMBOL* );
void SYMBUDTALLOCEXT( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBGETCOMPCTORHEAD( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBGETCOMPDEFCTOR( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBGETCOMPDTOR( struct $8FBSYMBOL* );
void SYMBCHECKCOMPLETOP( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBUDTGETFIRSTFIELD( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBUDTGETNEXTINITABLEFIELD( struct $8FBSYMBOL* );
void SYMBHASHLISTINSERTNAMESPACE( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
void SYMBHASHLISTREMOVENAMESPACE( struct $8FBSYMBOL* );
struct $7ASTNODE* RTLARRAYREDIMTO( struct $7ASTNODE*, struct $7ASTNODE*, int64, struct $8FBSYMBOL* );
static struct $8FBSYMBOL* SYMBGETCOMPCOPYCTOR( struct $8FBSYMBOL* );
static struct $8FBSYMBOL* HDECLAREPROC( struct $8FBSYMBOL*, $6AST_OP, int64, $13FB_SYMBATTRIB );
static void HSETMINIMUMVTABLESIZE( struct $8FBSYMBOL* );
static void HBUILDRTTI( struct $8FBSYMBOL* );
static void HBUILDVTABLE( struct $8FBSYMBOL* );
static void HPROCBEGIN( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static void HPROCEND( void );
static void HADDCTORBODY( struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
static void HASSIGNDYNAMICARRAY( struct $8FBSYMBOL*, struct $7ASTNODE*, struct $7ASTNODE* );
static void HASSIGNLIST( struct $8FBSYMBOL*, struct $7ASTNODE*, struct $7ASTNODE* );
static struct $8FBSYMBOL* HCOPYUNIONFIELDS( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static void HADDLETOPBODY( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static int64 HHASBYREFSELFPARAM( struct $8FBSYMBOL*, int64, struct $8FBSYMBOL* );
static void HINSERTNESTED( struct $8FBSYMBOL*, struct $8FBHASHTB*, struct $8FBSYMBOL* );
static void HREMOVENESTED( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static void HINSERTIMPORTED( struct $8FBSYMBOL* );
static void HREMOVEIMPORTED( struct $8FBSYMBOL* );
void SYMBCOMPDELFROMIMPORTLIST( struct $8FBSYMBOL* );
void SYMBCOMPDELFROMEXPORTLIST( struct $8FBSYMBOL* );
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

void SYMBCOMPINIT( void )
{
	label$10:;
	{
		int64 I$2;
		I$2 = 0ll;
		label$15:;
		{
			*(struct $8FBSYMBOL**)((uint8*)((uint8*)&SYMB$ + (I$2 << 3ll)) + 198168ll) = (struct $8FBSYMBOL*)0ull;
		}
		label$13:;
		I$2 = I$2 + 1ll;
		label$12:;
		if( I$2 <= 115ll ) goto label$15;
		label$14:;
	}
	STACKNEW( (struct $6TSTACK*)((uint8*)&SYMB$ + 197032ll), 16ll, 32ll, 0ll );
	label$11:;
}

void SYMBCOMPEND( void )
{
	label$16:;
	STACKFREE( (struct $6TSTACK*)((uint8*)&SYMB$ + 197032ll) );
	label$17:;
}

void SYMBUDTALLOCEXT( struct $8FBSYMBOL* UDT$1 )
{
	label$18:;
	if( *(struct $12FB_STRUCTEXT**)((uint8*)UDT$1 + 224ll) != (struct $12FB_STRUCTEXT*)0ull ) goto label$21;
	{
		void* vr$2 = XCALLOCATE( 312 );
		*(struct $12FB_STRUCTEXT**)((uint8*)UDT$1 + 224ll) = (struct $12FB_STRUCTEXT*)vr$2;
	}
	label$21:;
	label$20:;
	label$19:;
}

void SYMBUDTDECLAREDEFAULTMEMBERS( struct $18SYMBDEFAULTMEMBERS* DEFAULT$1, struct $8FBSYMBOL* UDT$1 )
{
	label$87:;
	int64 MISSING_BASE_DEFCTOR$1;
	if( *(struct $8FBSYMBOL**)((uint8*)UDT$1 + 168ll) == (struct $8FBSYMBOL*)0ull ) goto label$90;
	{
		struct $8FBSYMBOL* vr$4 = SYMBGETCOMPDEFCTOR( *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)UDT$1 + 168ll) + 56ll) );
		struct $8FBSYMBOL* vr$8 = SYMBGETCOMPCTORHEAD( *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)UDT$1 + 168ll) + 56ll) );
		MISSING_BASE_DEFCTOR$1 = (int64)-(vr$4 == (struct $8FBSYMBOL*)0ull) & (int64)-(vr$8 != (struct $8FBSYMBOL*)0ull);
	}
	goto label$89;
	label$90:;
	{
		MISSING_BASE_DEFCTOR$1 = 0ll;
	}
	label$89:;
	*(struct $8FBSYMBOL**)DEFAULT$1 = (struct $8FBSYMBOL*)0ull;
	*(struct $8FBSYMBOL**)((uint8*)DEFAULT$1 + 16ll) = (struct $8FBSYMBOL*)0ull;
	*(struct $8FBSYMBOL**)((uint8*)DEFAULT$1 + 24ll) = (struct $8FBSYMBOL*)0ull;
	*(struct $8FBSYMBOL**)((uint8*)DEFAULT$1 + 32ll) = (struct $8FBSYMBOL*)0ull;
	*(struct $8FBSYMBOL**)((uint8*)DEFAULT$1 + 8ll) = (struct $8FBSYMBOL*)0ull;
	struct $8FBSYMBOL* vr$25 = SYMBGETCOMPCTORHEAD( UDT$1 );
	if( (((int64)-(((int64)*(int16*)((uint8*)UDT$1 + 200ll) & 8ll) != 0ll) | (int64)-(((int64)*(int16*)((uint8*)UDT$1 + 200ll) & 4096ll) != 0ll)) & (int64)-(vr$25 == (struct $8FBSYMBOL*)0ull)) == 0ll ) goto label$92;
	{
		if( MISSING_BASE_DEFCTOR$1 == 0ll ) goto label$94;
		{
			ERRREPORT( 185ll, 0ll, (uint8*)0ull );
		}
		goto label$93;
		label$94:;
		{
			struct $8FBSYMBOL* vr$30 = HDECLAREPROC( UDT$1, -1ll, 2147483648ll, 5120ll );
			*(struct $8FBSYMBOL**)DEFAULT$1 = vr$30;
		}
		label$93:;
	}
	label$92:;
	label$91:;
	if( ((int64)*(int16*)((uint8*)UDT$1 + 200ll) & 8ll) == 0ll ) goto label$96;
	{
		SYMBUDTALLOCEXT( UDT$1 );
		if( *(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)UDT$1 + 224ll) + 48ll) != (struct $8FBSYMBOL*)0ull ) goto label$98;
		{
			struct $8FBSYMBOL* vr$39 = HDECLAREPROC( UDT$1, 0ll, 530ll, 17408ll );
			*(struct $8FBSYMBOL**)((uint8*)DEFAULT$1 + 32ll) = vr$39;
			SYMBPROCCHECKOVERRIDDEN( *(struct $8FBSYMBOL**)((uint8*)DEFAULT$1 + 32ll), -1ll );
		}
		label$98:;
		label$97:;
		if( *(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)UDT$1 + 224ll) + 24ll) != (struct $8FBSYMBOL*)0ull ) goto label$100;
		{
			if( MISSING_BASE_DEFCTOR$1 == 0ll ) goto label$102;
			{
				ERRREPORT( 187ll, 0ll, (uint8*)0ull );
			}
			goto label$101;
			label$102:;
			{
				struct $8FBSYMBOL* vr$46 = HDECLAREPROC( UDT$1, -1ll, 530ll, 5120ll );
				*(struct $8FBSYMBOL**)((uint8*)DEFAULT$1 + 24ll) = vr$46;
			}
			label$101:;
		}
		label$100:;
		label$99:;
		if( ((int64)-(*(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)UDT$1 + 224ll) + 40ll) != (struct $8FBSYMBOL*)0ull) & (int64)-(*(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)UDT$1 + 224ll) + 16ll) == (struct $8FBSYMBOL*)0ull)) == 0ll ) goto label$104;
		{
			if( MISSING_BASE_DEFCTOR$1 == 0ll ) goto label$106;
			{
				ERRREPORT( 186ll, 0ll, (uint8*)0ull );
			}
			goto label$105;
			label$106:;
			{
				struct $8FBSYMBOL* vr$57 = HDECLAREPROC( UDT$1, -1ll, 18ll, 5120ll );
				*(struct $8FBSYMBOL**)((uint8*)DEFAULT$1 + 16ll) = vr$57;
			}
			label$105:;
		}
		label$104:;
		label$103:;
	}
	label$96:;
	label$95:;
	if( ((int64)*(int16*)((uint8*)UDT$1 + 200ll) & 16ll) == 0ll ) goto label$108;
	{
		SYMBUDTALLOCEXT( UDT$1 );
		if( *(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)UDT$1 + 224ll) + 32ll) != (struct $8FBSYMBOL*)0ull ) goto label$110;
		{
			struct $8FBSYMBOL* vr$66 = HDECLAREPROC( UDT$1, -1ll, 2147483648ll, 8192ll );
			*(struct $8FBSYMBOL**)((uint8*)DEFAULT$1 + 8ll) = vr$66;
			SYMBPROCCHECKOVERRIDDEN( *(struct $8FBSYMBOL**)((uint8*)DEFAULT$1 + 8ll), -1ll );
		}
		label$110:;
		label$109:;
	}
	label$108:;
	label$107:;
	label$88:;
}

void SYMBUDTIMPLEMENTDEFAULTMEMBERS( struct $18SYMBDEFAULTMEMBERS* DEFAULT$1, struct $8FBSYMBOL* UDT$1 )
{
	label$111:;
	if( (*(int64*)((uint8*)UDT$1 + 16ll) & 4194304ll) == 0ll ) goto label$114;
	{
		SYMBUDTALLOCEXT( UDT$1 );
		HSETMINIMUMVTABLESIZE( UDT$1 );
		if( UDT$1 == *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 199160ll) ) goto label$116;
		{
			HBUILDRTTI( UDT$1 );
			HBUILDVTABLE( UDT$1 );
		}
		label$116:;
		label$115:;
	}
	label$114:;
	label$113:;
	if( *(struct $8FBSYMBOL**)DEFAULT$1 == (struct $8FBSYMBOL*)0ull ) goto label$118;
	{
		HADDCTORBODY( UDT$1, *(struct $8FBSYMBOL**)DEFAULT$1, 0ll );
	}
	label$118:;
	label$117:;
	if( *(struct $8FBSYMBOL**)((uint8*)DEFAULT$1 + 32ll) == (struct $8FBSYMBOL*)0ull ) goto label$120;
	{
		HADDLETOPBODY( UDT$1, *(struct $8FBSYMBOL**)((uint8*)DEFAULT$1 + 32ll) );
	}
	label$120:;
	label$119:;
	if( *(struct $8FBSYMBOL**)((uint8*)DEFAULT$1 + 24ll) == (struct $8FBSYMBOL*)0ull ) goto label$122;
	{
		HADDCTORBODY( UDT$1, *(struct $8FBSYMBOL**)((uint8*)DEFAULT$1 + 24ll), -1ll );
	}
	label$122:;
	label$121:;
	if( *(struct $8FBSYMBOL**)((uint8*)DEFAULT$1 + 16ll) == (struct $8FBSYMBOL*)0ull ) goto label$124;
	{
		HADDCTORBODY( UDT$1, *(struct $8FBSYMBOL**)((uint8*)DEFAULT$1 + 16ll), -1ll );
	}
	label$124:;
	label$123:;
	if( *(struct $8FBSYMBOL**)((uint8*)DEFAULT$1 + 8ll) == (struct $8FBSYMBOL*)0ull ) goto label$126;
	{
		HADDCTORBODY( UDT$1, *(struct $8FBSYMBOL**)((uint8*)DEFAULT$1 + 8ll), 0ll );
	}
	label$126:;
	label$125:;
	label$112:;
}

int64 SYMBCOMPISTRIVIAL( struct $8FBSYMBOL* SYM$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$137:;
	struct $8FBSYMBOL* vr$1 = SYMBGETCOMPCOPYCTOR( SYM$1 );
	struct $8FBSYMBOL* vr$3 = SYMBGETCOMPDTOR( SYM$1 );
	fb$result$1 = ((int64)-(vr$1 == (struct $8FBSYMBOL*)0ull) & (int64)-(vr$3 == (struct $8FBSYMBOL*)0ull)) & ~(int64)-((*(int64*)((uint8*)SYM$1 + 16ll) & 4194304ll) != 0ll);
	label$138:;
	return fb$result$1;
}

void SYMBSETCOMPCTORHEAD( struct $8FBSYMBOL* SYM$1, struct $8FBSYMBOL* PROC$1 )
{
	label$139:;
	if( *(int64*)SYM$1 != 10ll ) goto label$142;
	{
		SYMBUDTALLOCEXT( SYM$1 );
		if( *(struct $8FBSYMBOL**)*(struct $12FB_STRUCTEXT**)((uint8*)SYM$1 + 224ll) != (struct $8FBSYMBOL*)0ull ) goto label$144;
		{
			*(struct $8FBSYMBOL**)*(struct $12FB_STRUCTEXT**)((uint8*)SYM$1 + 224ll) = PROC$1;
		}
		label$144:;
		label$143:;
	}
	label$142:;
	label$141:;
	label$140:;
}

void SYMBCHECKCOMPCTOR( struct $8FBSYMBOL* SYM$1, struct $8FBSYMBOL* PROC$1 )
{
	label$145:;
	if( *(int64*)SYM$1 != 10ll ) goto label$148;
	{
		{
			int16 TMP$80$3;
			TMP$80$3 = *(int16*)((uint8*)PROC$1 + 112ll);
			if( (int64)TMP$80$3 != 1ll ) goto label$150;
			label$151:;
			{
				*(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)SYM$1 + 224ll) + 8ll) = PROC$1;
			}
			goto label$149;
			label$150:;
			if( (int64)TMP$80$3 != 2ll ) goto label$152;
			label$153:;
			{
				if( *(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)SYM$1 + 224ll) + 16ll) != (struct $8FBSYMBOL*)0ull ) goto label$155;
				{
					int64 vr$12 = HHASBYREFSELFPARAM( PROC$1, 18ll, SYM$1 );
					if( vr$12 == 0ll ) goto label$157;
					{
						*(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)SYM$1 + 224ll) + 16ll) = PROC$1;
					}
					label$157:;
					label$156:;
				}
				label$155:;
				label$154:;
				if( *(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)SYM$1 + 224ll) + 24ll) != (struct $8FBSYMBOL*)0ull ) goto label$159;
				{
					int64 vr$19 = HHASBYREFSELFPARAM( PROC$1, 530ll, SYM$1 );
					if( vr$19 == 0ll ) goto label$161;
					{
						*(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)SYM$1 + 224ll) + 24ll) = PROC$1;
					}
					label$161:;
					label$160:;
				}
				label$159:;
				label$158:;
			}
			label$152:;
			label$149:;
		}
		if( *(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)SYM$1 + 224ll) + 8ll) != (struct $8FBSYMBOL*)0ull ) goto label$163;
		{
			if( (int64)*(int16*)((uint8*)PROC$1 + 114ll) != ((int64)*(int16*)((uint8*)PROC$1 + 112ll) + -1ll) ) goto label$165;
			{
				*(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)SYM$1 + 224ll) + 8ll) = PROC$1;
			}
			label$165:;
			label$164:;
		}
		label$163:;
		label$162:;
	}
	label$148:;
	label$147:;
	label$146:;
}

void SYMBSETCOMPDTOR( struct $8FBSYMBOL* SYM$1, struct $8FBSYMBOL* PROC$1 )
{
	label$166:;
	if( *(int64*)SYM$1 != 10ll ) goto label$169;
	{
		SYMBUDTALLOCEXT( SYM$1 );
		if( *(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)SYM$1 + 224ll) + 32ll) != (struct $8FBSYMBOL*)0ull ) goto label$171;
		{
			*(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)SYM$1 + 224ll) + 32ll) = PROC$1;
		}
		label$171:;
		label$170:;
	}
	label$169:;
	label$168:;
	label$167:;
}

struct $8FBSYMBOL* SYMBGETCOMPCTORHEAD( struct $8FBSYMBOL* SYM$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$172:;
	if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$175;
	{
		if( *(int64*)SYM$1 != 10ll ) goto label$177;
		{
			if( *(struct $12FB_STRUCTEXT**)((uint8*)SYM$1 + 224ll) == (struct $12FB_STRUCTEXT*)0ull ) goto label$179;
			{
				fb$result$1 = *(struct $8FBSYMBOL**)*(struct $12FB_STRUCTEXT**)((uint8*)SYM$1 + 224ll);
			}
			label$179:;
			label$178:;
		}
		label$177:;
		label$176:;
	}
	label$175:;
	label$174:;
	label$173:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBGETCOMPDEFCTOR( struct $8FBSYMBOL* SYM$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$180:;
	if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$183;
	{
		if( *(int64*)SYM$1 != 10ll ) goto label$185;
		{
			if( *(struct $12FB_STRUCTEXT**)((uint8*)SYM$1 + 224ll) == (struct $12FB_STRUCTEXT*)0ull ) goto label$187;
			{
				fb$result$1 = *(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)SYM$1 + 224ll) + 8ll);
			}
			label$187:;
			label$186:;
		}
		label$185:;
		label$184:;
	}
	label$183:;
	label$182:;
	label$181:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBGETCOMPDTOR( struct $8FBSYMBOL* SYM$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$192:;
	if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$195;
	{
		if( *(int64*)SYM$1 != 10ll ) goto label$197;
		{
			if( *(struct $12FB_STRUCTEXT**)((uint8*)SYM$1 + 224ll) == (struct $12FB_STRUCTEXT*)0ull ) goto label$199;
			{
				fb$result$1 = *(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)SYM$1 + 224ll) + 32ll);
			}
			label$199:;
			label$198:;
		}
		label$197:;
		label$196:;
	}
	label$195:;
	label$194:;
	label$193:;
	return fb$result$1;
}

void SYMBCHECKCOMPLETOP( struct $8FBSYMBOL* SYM$1, struct $8FBSYMBOL* PROC$1 )
{
	label$200:;
	if( *(int64*)SYM$1 != 10ll ) goto label$203;
	{
		int64 vr$2 = HHASBYREFSELFPARAM( PROC$1, 18ll, SYM$1 );
		if( vr$2 == 0ll ) goto label$205;
		{
			SYMBUDTALLOCEXT( SYM$1 );
			*(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)SYM$1 + 224ll) + 40ll) = PROC$1;
		}
		label$205:;
		label$204:;
		int64 vr$6 = HHASBYREFSELFPARAM( PROC$1, 530ll, SYM$1 );
		if( vr$6 == 0ll ) goto label$207;
		{
			SYMBUDTALLOCEXT( SYM$1 );
			*(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)SYM$1 + 224ll) + 48ll) = PROC$1;
		}
		label$207:;
		label$206:;
	}
	label$203:;
	label$202:;
	label$201:;
}

int64 SYMBCOMPHASCOPYLETOPS( struct $8FBSYMBOL* UDT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$208:;
	if( *(struct $12FB_STRUCTEXT**)((uint8*)UDT$1 + 224ll) == (struct $12FB_STRUCTEXT*)0ull ) goto label$211;
	{
		fb$result$1 = (int64)-(*(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)UDT$1 + 224ll) + 40ll) != (struct $8FBSYMBOL*)0ull) | (int64)-(*(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)UDT$1 + 224ll) + 48ll) != (struct $8FBSYMBOL*)0ull);
	}
	label$211:;
	label$210:;
	label$209:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBGETCOMPOPOVLHEAD( struct $8FBSYMBOL* SYM$1, $6AST_OP OP$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$212:;
	if( (*(int64*)(((uint8*)AST_OPTB$ + (OP$1 << 5ll)) + 8ll) & 1ll) == 0ll ) goto label$215;
	{
		{
			$12FB_SYMBCLASS TMP$81$3;
			TMP$81$3 = *($12FB_SYMBCLASS*)SYM$1;
			if( TMP$81$3 != 10ll ) goto label$217;
			label$218:;
			{
				if( *(struct $12FB_STRUCTEXT**)((uint8*)SYM$1 + 224ll) != (struct $12FB_STRUCTEXT*)0ull ) goto label$220;
				{
					fb$result$1 = (struct $8FBSYMBOL*)0ull;
					goto label$213;
				}
				label$220:;
				label$219:;
				fb$result$1 = *(struct $8FBSYMBOL**)((uint8*)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)SYM$1 + 224ll) + (OP$1 << 3ll)) + 56ll);
			}
			goto label$216;
			label$217:;
			if( TMP$81$3 != 9ll ) goto label$221;
			label$222:;
			{
				fb$result$1 = (struct $8FBSYMBOL*)0ull;
			}
			goto label$216;
			label$221:;
			if( TMP$81$3 != 11ll ) goto label$223;
			label$224:;
			{
			}
			label$223:;
			label$216:;
		}
	}
	goto label$214;
	label$215:;
	{
		fb$result$1 = *(struct $8FBSYMBOL**)((uint8*)((uint8*)&SYMB$ + (OP$1 << 3ll)) + 198168ll);
	}
	label$214:;
	label$213:;
	return fb$result$1;
}

void SYMBSETCOMPOPOVLHEAD( struct $8FBSYMBOL* SYM$1, struct $8FBSYMBOL* PROC$1 )
{
	label$225:;
	$6AST_OP OP$1;
	OP$1 = *($6AST_OP*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 80ll);
	if( (*(int64*)(((uint8*)AST_OPTB$ + (OP$1 << 5ll)) + 8ll) & 1ll) == 0ll ) goto label$228;
	{
		if( *(int64*)SYM$1 != 10ll ) goto label$230;
		{
			SYMBUDTALLOCEXT( SYM$1 );
			*(struct $8FBSYMBOL**)((uint8*)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)SYM$1 + 224ll) + (OP$1 << 3ll)) + 56ll) = PROC$1;
		}
		label$230:;
		label$229:;
		if( OP$1 != 0ll ) goto label$232;
		{
			SYMBCHECKCOMPLETOP( SYM$1, PROC$1 );
		}
		label$232:;
		label$231:;
	}
	goto label$227;
	label$228:;
	{
		*(struct $8FBSYMBOL**)((uint8*)((uint8*)&SYMB$ + (OP$1 << 3ll)) + 198168ll) = PROC$1;
	}
	label$227:;
	label$226:;
}

int64 SYMBCOMPADDVIRTUAL( struct $8FBSYMBOL* UDT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$233:;
	SYMBUDTALLOCEXT( UDT$1 );
	HSETMINIMUMVTABLESIZE( UDT$1 );
	fb$result$1 = *(int64*)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)UDT$1 + 224ll) + 280ll);
	*(int64*)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)UDT$1 + 224ll) + 280ll) = *(int64*)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)UDT$1 + 224ll) + 280ll) + 1ll;
	label$234:;
	return fb$result$1;
}

int64 SYMBCOMPGETABSTRACTCOUNT( struct $8FBSYMBOL* UDT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$235:;
	if( *(struct $12FB_STRUCTEXT**)((uint8*)UDT$1 + 224ll) == (struct $12FB_STRUCTEXT*)0ull ) goto label$238;
	{
		fb$result$1 = *(int64*)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)UDT$1 + 224ll) + 304ll);
	}
	label$238:;
	label$237:;
	label$236:;
	return fb$result$1;
}

void SYMBNESTBEGIN( struct $8FBSYMBOL* SYM$1, int64 INSERT_CHAIN$1 )
{
	label$273:;
	struct $11FB_SYMBNEST* N$1;
	struct $8FBHASHTB* HASHTB$1;
	struct $10FBSYMBOLTB* SYMBTB$1;
	void* vr$1 = STACKPUSH( (struct $6TSTACK*)((uint8*)&SYMB$ + 197032ll) );
	N$1 = (struct $11FB_SYMBNEST*)vr$1;
	*(struct $8FBSYMBOL**)N$1 = SYM$1;
	*(struct $10FBSYMBOLTB**)((uint8*)N$1 + 8ll) = *(struct $10FBSYMBOLTB**)((uint8*)&SYMB$ + 197024ll);
	*(struct $8FBHASHTB**)((uint8*)N$1 + 16ll) = *(struct $8FBHASHTB**)((uint8*)&SYMB$ + 197016ll);
	if( *(int64*)SYM$1 != 3ll ) goto label$276;
	{
		SYMBTB$1 = (struct $10FBSYMBOLTB*)((uint8*)SYM$1 + 88ll);
		HASHTB$1 = (struct $8FBHASHTB*)0ull;
	}
	goto label$275;
	label$276:;
	{
		SYMBTB$1 = (struct $10FBSYMBOLTB*)((uint8*)SYM$1 + 88ll);
		HASHTB$1 = (struct $8FBHASHTB*)((uint8*)SYM$1 + 112ll);
	}
	label$275:;
	*(struct $10FBSYMBOLTB**)((uint8*)&SYMB$ + 197024ll) = SYMBTB$1;
	if( HASHTB$1 == (struct $8FBHASHTB*)0ull ) goto label$278;
	{
		*(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) = *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll);
		*(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll) = SYM$1;
		*(struct $8FBHASHTB**)((uint8*)&SYMB$ + 197016ll) = HASHTB$1;
		if( *(struct $13FBNAMESPC_EXT**)((uint8*)SYM$1 + 160ll) != (struct $13FBNAMESPC_EXT*)0ull ) goto label$280;
		{
			void* vr$18 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&SYMB$ + 197256ll) );
			*(struct $13FBNAMESPC_EXT**)((uint8*)SYM$1 + 160ll) = (struct $13FBNAMESPC_EXT*)vr$18;
		}
		label$280:;
		label$279:;
		*(int64*)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)SYM$1 + 160ll) + 32ll) = *(int64*)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)SYM$1 + 160ll) + 32ll) + 1ll;
		if( *(int64*)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)SYM$1 + 160ll) + 32ll) == 1ll ) goto label$282;
		{
			SYMBHASHLISTREMOVENAMESPACE( SYM$1 );
		}
		label$282:;
		label$281:;
		SYMBHASHLISTADD( HASHTB$1 );
		if( INSERT_CHAIN$1 == 0ll ) goto label$284;
		{
			HINSERTNESTED( SYM$1, HASHTB$1, *(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) );
		}
		label$284:;
		label$283:;
		HINSERTIMPORTED( SYM$1 );
	}
	label$278:;
	label$277:;
	label$274:;
}

void SYMBNESTEND( int64 REMOVE_CHAIN$1 )
{
	label$285:;
	struct $11FB_SYMBNEST* N$1;
	struct $8FBHASHTB* HASHTB$1;
	struct $8FBSYMBOL* SYM$1;
	void* vr$1 = STACKGETTOS( (struct $6TSTACK*)((uint8*)&SYMB$ + 197032ll) );
	N$1 = (struct $11FB_SYMBNEST*)vr$1;
	SYM$1 = *(struct $8FBSYMBOL**)N$1;
	if( *(int64*)SYM$1 != 3ll ) goto label$288;
	{
		HASHTB$1 = (struct $8FBHASHTB*)0ull;
	}
	goto label$287;
	label$288:;
	{
		HASHTB$1 = (struct $8FBHASHTB*)((uint8*)SYM$1 + 112ll);
	}
	label$287:;
	*(struct $10FBSYMBOLTB**)((uint8*)&SYMB$ + 197024ll) = *(struct $10FBSYMBOLTB**)((uint8*)N$1 + 8ll);
	if( HASHTB$1 == (struct $8FBHASHTB*)0ull ) goto label$290;
	{
		HREMOVEIMPORTED( SYM$1 );
		if( REMOVE_CHAIN$1 == 0ll ) goto label$292;
		{
			HREMOVENESTED( SYM$1, *(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) );
		}
		label$292:;
		label$291:;
		*(int64*)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)SYM$1 + 160ll) + 32ll) = *(int64*)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)SYM$1 + 160ll) + 32ll) + -1ll;
		SYMBHASHLISTDEL( HASHTB$1 );
		if( *(int64*)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)SYM$1 + 160ll) + 32ll) == 0ll ) goto label$294;
		{
			SYMBHASHLISTINSERTNAMESPACE( SYM$1, *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 96ll) );
		}
		label$294:;
		label$293:;
		*(struct $8FBHASHTB**)((uint8*)&SYMB$ + 197016ll) = *(struct $8FBHASHTB**)((uint8*)N$1 + 16ll);
		*(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll) = *(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll);
	}
	label$290:;
	label$289:;
	STACKPOP( (struct $6TSTACK*)((uint8*)&SYMB$ + 197032ll) );
	label$286:;
}

void SYMBCOMPADDTOIMPORTLIST( struct $8FBSYMBOL* IMP_$1 )
{
	label$295:;
	struct $8FBSYMBOL* NS$1;
	NS$1 = *(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 112ll);
	if( *(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) != (struct $13FBNAMESPC_EXT*)0ull ) goto label$298;
	{
		void* vr$4 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&SYMB$ + 197256ll) );
		*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) = (struct $13FBNAMESPC_EXT*)vr$4;
	}
	label$298:;
	label$297:;
	if( *(struct $8FBSYMBOL**)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) + 8ll) == (struct $8FBSYMBOL*)0ull ) goto label$300;
	{
		*(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) + 8ll) + 104ll) = IMP_$1;
	}
	goto label$299;
	label$300:;
	{
		*(struct $8FBSYMBOL**)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) = IMP_$1;
	}
	label$299:;
	*(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 96ll) = *(struct $8FBSYMBOL**)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) + 8ll);
	*(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 104ll) = (struct $8FBSYMBOL*)0ull;
	*(struct $8FBSYMBOL**)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) + 8ll) = IMP_$1;
	label$296:;
}

void SYMBCOMPDELFROMIMPORTLIST( struct $8FBSYMBOL* IMP_$1 )
{
	label$301:;
	struct $8FBSYMBOL* NS$1;
	NS$1 = *(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 112ll);
	if( *(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 96ll) != (struct $8FBSYMBOL*)0ull ) goto label$304;
	{
		*(struct $8FBSYMBOL**)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) = *(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 104ll);
	}
	goto label$303;
	label$304:;
	{
		*(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 96ll) + 104ll) = *(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 104ll);
	}
	label$303:;
	if( *(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 104ll) != (struct $8FBSYMBOL*)0ull ) goto label$306;
	{
		*(struct $8FBSYMBOL**)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) + 8ll) = *(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 96ll);
	}
	goto label$305;
	label$306:;
	{
		*(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 104ll) + 96ll) = *(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 96ll);
	}
	label$305:;
	label$302:;
}

void SYMBCOMPADDTOEXPORTLIST( struct $8FBSYMBOL* IMP_$1 )
{
	label$307:;
	struct $8FBSYMBOL* NS$1;
	NS$1 = *(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 88ll);
	if( *(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) != (struct $13FBNAMESPC_EXT*)0ull ) goto label$310;
	{
		void* vr$4 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&SYMB$ + 197256ll) );
		*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) = (struct $13FBNAMESPC_EXT*)vr$4;
	}
	label$310:;
	label$309:;
	if( *(struct $8FBSYMBOL**)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) + 24ll) == (struct $8FBSYMBOL*)0ull ) goto label$312;
	{
		*(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) + 24ll) + 128ll) = IMP_$1;
	}
	goto label$311;
	label$312:;
	{
		*(struct $8FBSYMBOL**)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) + 16ll) = IMP_$1;
	}
	label$311:;
	*(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 120ll) = *(struct $8FBSYMBOL**)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) + 24ll);
	*(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 128ll) = (struct $8FBSYMBOL*)0ull;
	*(struct $8FBSYMBOL**)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) + 24ll) = IMP_$1;
	label$308:;
}

void SYMBCOMPDELFROMEXPORTLIST( struct $8FBSYMBOL* IMP_$1 )
{
	label$313:;
	struct $8FBSYMBOL* NS$1;
	NS$1 = *(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 88ll);
	if( *(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 120ll) != (struct $8FBSYMBOL*)0ull ) goto label$316;
	{
		*(struct $8FBSYMBOL**)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) + 16ll) = *(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 128ll);
	}
	goto label$315;
	label$316:;
	{
		*(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 120ll) + 128ll) = *(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 128ll);
	}
	label$315:;
	if( *(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 128ll) != (struct $8FBSYMBOL*)0ull ) goto label$318;
	{
		*(struct $8FBSYMBOL**)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) + 24ll) = *(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 120ll);
	}
	goto label$317;
	label$318:;
	{
		*(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 128ll) + 120ll) = *(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 120ll);
	}
	label$317:;
	label$314:;
}

void SYMBCOMPDELIMPORTLIST( struct $8FBSYMBOL* SYM$1 )
{
	label$319:;
	if( *(struct $13FBNAMESPC_EXT**)((uint8*)SYM$1 + 160ll) != (struct $13FBNAMESPC_EXT*)0ull ) goto label$322;
	{
		goto label$320;
	}
	label$322:;
	label$321:;
	struct $8FBSYMBOL* EXP_$1;
	EXP_$1 = *(struct $8FBSYMBOL**)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)SYM$1 + 160ll) + 16ll);
	label$323:;
	if( EXP_$1 == (struct $8FBSYMBOL*)0ull ) goto label$324;
	{
		SYMBCOMPDELFROMIMPORTLIST( EXP_$1 );
		struct $8FBSYMBOL* NXT$2;
		NXT$2 = *(struct $8FBSYMBOL**)((uint8*)EXP_$1 + 128ll);
		SYMBCOMPDELFROMEXPORTLIST( EXP_$1 );
		*(struct $8FBSYMBOL**)((uint8*)EXP_$1 + 88ll) = (struct $8FBSYMBOL*)0ull;
		EXP_$1 = NXT$2;
	}
	goto label$323;
	label$324:;
	label$320:;
}

void SYMBCOMPRTTIINIT( void )
{
	label$325:;
	struct $8FBSYMBOL* RTTITYPE$1;
	struct $8FBSYMBOL* OBJTYPE$1;
	struct $8FBSYMBOL* OBJRTTI$1;
	struct $8FBSYMBOL* CTOR$1;
	static struct $10FBARRAYDIM DTB$1[1];
	struct $8FBARRAY1I10FBARRAYDIME {
		struct $10FBARRAYDIM* DATA;
		struct $10FBARRAYDIM* PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I10FBARRAYDIME ) == 64 );
	static struct $8FBARRAY1I10FBARRAYDIME tmp$82$1 = { (struct $10FBARRAYDIM*)DTB$1, (struct $10FBARRAYDIM*)DTB$1, 16ll, 16ll, 1ll, { { 1ll, 0ll, 0ll } } };
	struct $8FBSYMBOL* vr$0 = SYMBSTRUCTBEGIN( (struct $10FBSYMBOLTB*)0ull, (struct $8FBHASHTB*)0ull, (struct $8FBSYMBOL*)0ull, (uint8*)"fb_RTTI$", (uint8*)"fb_RTTI$", 0ll, 0ll, (struct $8FBSYMBOL*)0ull, 0ll, 0ll );
	RTTITYPE$1 = vr$0;
	*(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 199152ll) = RTTITYPE$1;
	SYMBADDFIELD( RTTITYPE$1, (uint8*)"stdlibvtable", 0ll, (struct $7FBARRAYI10FBARRAYDIME*)&tmp$82$1, 32ll, (struct $8FBSYMBOL*)0ull, 0ll, 0ll, 0ll );
	SYMBADDFIELD( RTTITYPE$1, (uint8*)"id", 0ll, (struct $7FBARRAYI10FBARRAYDIME*)&tmp$82$1, 35ll, (struct $8FBSYMBOL*)0ull, 0ll, 0ll, 0ll );
	SYMBADDFIELD( RTTITYPE$1, (uint8*)"rttibase", 0ll, (struct $7FBARRAYI10FBARRAYDIME*)&tmp$82$1, 50ll, RTTITYPE$1, 0ll, 0ll, 0ll );
	SYMBSTRUCTEND( RTTITYPE$1, 0ll );
	uint8* PTYPENAME$1;
	if( *(int64*)((uint8*)&ENV$ + 272ll) != 3ll ) goto label$328;
	{
		PTYPENAME$1 = (uint8*)"__OBJECT";
	}
	goto label$327;
	label$328:;
	{
		PTYPENAME$1 = (uint8*)"OBJECT";
	}
	label$327:;
	struct $8FBSYMBOL* vr$2 = SYMBSTRUCTBEGIN( (struct $10FBSYMBOLTB*)0ull, (struct $8FBHASHTB*)0ull, (struct $8FBSYMBOL*)0ull, PTYPENAME$1, (uint8*)"fb_Object$", 0ll, 0ll, (struct $8FBSYMBOL*)0ull, 0ll, 0ll );
	OBJTYPE$1 = vr$2;
	*(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 199160ll) = OBJTYPE$1;
	*($12FB_SYMBSTATS*)((uint8*)OBJTYPE$1 + 16ll) = *(int64*)((uint8*)OBJTYPE$1 + 16ll) | 4194304ll;
	*($12FB_SYMBSTATS*)((uint8*)OBJTYPE$1 + 16ll) = *(int64*)((uint8*)OBJTYPE$1 + 16ll) | 262144ll;
	SYMBNESTBEGIN( OBJTYPE$1, 0ll );
	SYMBADDFIELD( OBJTYPE$1, (uint8*)"vptr$", 0ll, (struct $7FBARRAYI10FBARRAYDIME*)&tmp$82$1, 32ll, (struct $8FBSYMBOL*)0ull, 0ll, 0ll, 0ll );
	struct $8FBSYMBOL* vr$9 = SYMBPREADDPROC( (uint8*)0ull );
	CTOR$1 = vr$9;
	SYMBADDPROCINSTANCEPTR( OBJTYPE$1, CTOR$1 );
	SYMBADDCTOR( CTOR$1, (uint8*)0ull, 7168ll, 3ll, 0ll );
	struct $8FBSYMBOL* vr$10 = SYMBPREADDPROC( (uint8*)0ull );
	CTOR$1 = vr$10;
	SYMBADDPROCINSTANCEPTR( OBJTYPE$1, CTOR$1 );
	SYMBADDPROCPARAM( CTOR$1, (uint8*)"__FB_RHS__", 530ll, OBJTYPE$1, 0ll, 2ll, 0ll );
	SYMBADDCTOR( CTOR$1, (uint8*)0ull, 7168ll, 3ll, 0ll );
	SYMBSTRUCTEND( OBJTYPE$1, -1ll );
	struct $8FBSYMBOL* vr$11 = SYMBADDVAR( (uint8*)0ull, (uint8*)"__fb_ZTS6Object", 18ll, *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 199152ll), 0ll, 0ll, (struct $7FBARRAYI10FBARRAYDIME*)&tmp$82$1, 17ll, 1ll );
	OBJRTTI$1 = vr$11;
	SYMBUDTALLOCEXT( OBJTYPE$1 );
	*(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)OBJTYPE$1 + 224ll) + 296ll) = OBJRTTI$1;
	label$326:;
}

void SYMBCOMPRTTIEND( void )
{
	label$329:;
	label$330:;
}

__attribute__(( constructor )) static void fb_ctor__symbzcomp( void )
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

static struct $8FBSYMBOL* HDECLAREPROC( struct $8FBSYMBOL* UDT$1, $6AST_OP OP$1, int64 RHSDTYPE$1, $13FB_SYMBATTRIB ATTRIB$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$22:;
	struct $8FBSYMBOL* PROC$1;
	SYMBNESTBEGIN( UDT$1, -1ll );
	struct $8FBSYMBOL* vr$1 = SYMBPREADDPROC( (uint8*)0ull );
	PROC$1 = vr$1;
	SYMBADDPROCINSTANCEPTR( UDT$1, PROC$1 );
	if( RHSDTYPE$1 == 2147483648ll ) goto label$25;
	{
		SYMBADDPROCPARAM( PROC$1, (uint8*)"__FB_RHS__", RHSDTYPE$1, UDT$1, 0ll, 2ll, 0ll );
	}
	label$25:;
	label$24:;
	ATTRIB$1 = ATTRIB$1 | 2048ll;
	ATTRIB$1 = ATTRIB$1 | 64ll;
	if( OP$1 != -1ll ) goto label$27;
	{
		struct $8FBSYMBOL* vr$6 = SYMBADDCTOR( PROC$1, (uint8*)0ull, ATTRIB$1, 3ll, 4ll );
		PROC$1 = vr$6;
	}
	goto label$26;
	label$27:;
	{
		struct $8FBSYMBOL* vr$7 = SYMBADDOPERATOR( PROC$1, OP$1, (uint8*)0ull, 0ll, (struct $8FBSYMBOL*)0ull, ATTRIB$1, 3ll, 4ll );
		PROC$1 = vr$7;
	}
	label$26:;
	SYMBNESTEND( -1ll );
	fb$result$1 = PROC$1;
	label$23:;
	return fb$result$1;
}

static void HSETMINIMUMVTABLESIZE( struct $8FBSYMBOL* UDT$1 )
{
	label$28:;
	if( *(int64*)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)UDT$1 + 224ll) + 280ll) != 0ll ) goto label$31;
	{
		*(int64*)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)UDT$1 + 224ll) + 280ll) = 2ll;
	}
	label$31:;
	label$30:;
	label$29:;
}

static void HBUILDRTTI( struct $8FBSYMBOL* UDT$1 )
{
	label$32:;
	static struct $10FBARRAYDIM DTB$1[1];
	struct $8FBARRAY1I10FBARRAYDIME {
		struct $10FBARRAYDIM* DATA;
		struct $10FBARRAYDIM* PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I10FBARRAYDIME ) == 64 );
	static struct $8FBARRAY1I10FBARRAYDIME tmp$78$1 = { (struct $10FBARRAYDIM*)DTB$1, (struct $10FBARRAYDIM*)DTB$1, 16ll, 16ll, 1ll, { { 1ll, 0ll, 0ll } } };
	struct $7ASTNODE* INITREE$1;
	struct $7ASTNODE* RTTIBASE$1;
	struct $8FBSYMBOL* RTTI$1;
	struct $8FBSYMBOL* FLD$1;
	SYMBNESTBEGIN( UDT$1, -1ll );
	struct $8FBSYMBOL* vr$0 = SYMBADDVAR( (uint8*)0ull, (uint8*)0ull, 18ll, *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 199152ll), 0ll, 0ll, (struct $7FBARRAYI10FBARRAYDIME*)&tmp$78$1, 1048579ll, 1ll );
	RTTI$1 = vr$0;
	*($12FB_SYMBSTATS*)((uint8*)RTTI$1 + 16ll) = *(int64*)((uint8*)RTTI$1 + 16ll) | 256ll;
	SYMBNESTEND( -1ll );
	*(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)UDT$1 + 224ll) + 296ll) = RTTI$1;
	struct $7ASTNODE* vr$6 = ASTTYPEINIBEGIN( 18ll, *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 199152ll), 0ll, 0ll );
	INITREE$1 = vr$6;
	ASTTYPEINISCOPEBEGIN( INITREE$1, RTTI$1 );
	struct $8FBSYMBOL* vr$7 = SYMBUDTGETFIRSTFIELD( *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 199152ll) );
	FLD$1 = vr$7;
	struct $7ASTNODE* vr$8 = ASTNEWCONSTI( 0ll, 32ll, (struct $8FBSYMBOL*)0ull );
	ASTTYPEINIADDASSIGN( INITREE$1, vr$8, FLD$1, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	struct $8FBSYMBOL* vr$9 = SYMBUDTGETNEXTINITABLEFIELD( FLD$1 );
	FLD$1 = vr$9;
	uint8* vr$10 = SYMBGETMANGLEDNAME( UDT$1 );
	struct $8FBSYMBOL* vr$11 = SYMBALLOCSTRCONST( vr$10, -1ll );
	struct $7ASTNODE* vr$12 = ASTNEWVAR( vr$11, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$13 = ASTNEWADDROF( vr$12 );
	ASTTYPEINIADDASSIGN( INITREE$1, vr$13, FLD$1, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	struct $8FBSYMBOL* vr$14 = SYMBUDTGETNEXTINITABLEFIELD( FLD$1 );
	FLD$1 = vr$14;
	if( *(struct $8FBSYMBOL**)((uint8*)UDT$1 + 168ll) == (struct $8FBSYMBOL*)0ull ) goto label$35;
	{
		struct $7ASTNODE* vr$21 = ASTNEWVAR( *(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)UDT$1 + 168ll) + 56ll) + 224ll) + 296ll), 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$22 = ASTNEWADDROF( vr$21 );
		RTTIBASE$1 = vr$22;
	}
	goto label$34;
	label$35:;
	{
		struct $7ASTNODE* vr$23 = ASTNEWCONSTI( 0ll, 32ll, (struct $8FBSYMBOL*)0ull );
		RTTIBASE$1 = vr$23;
	}
	label$34:;
	ASTTYPEINIADDASSIGN( INITREE$1, RTTIBASE$1, FLD$1, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	ASTTYPEINISCOPEEND( INITREE$1, RTTI$1 );
	ASTTYPEINIEND( INITREE$1, -1ll );
	*(struct $7ASTNODE**)((uint8*)RTTI$1 + 88ll) = INITREE$1;
	label$33:;
}

static void HBUILDVTABLE( struct $8FBSYMBOL* UDT$1 )
{
	label$36:;
	static struct $10FBARRAYDIM DTB$1[1];
	struct $8FBARRAY1I10FBARRAYDIME {
		struct $10FBARRAYDIM* DATA;
		struct $10FBARRAYDIM* PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I10FBARRAYDIME ) == 64 );
	static struct $8FBARRAY1I10FBARRAYDIME tmp$79$1 = { (struct $10FBARRAYDIM*)DTB$1, (struct $10FBARRAYDIM*)DTB$1, 16ll, 16ll, 1ll, { { 1ll, 0ll, 0ll } } };
	struct $7ASTNODE* INITREE$1;
	struct $7ASTNODE* BASEVTABLEINITREE$1;
	struct $8FBSYMBOL* MEMBER$1;
	struct $8FBSYMBOL* RTTI$1;
	struct $8FBSYMBOL* VTABLE$1;
	int64 I$1;
	int64 BASEVTABLEELEMENTS$1;
	SYMBNESTBEGIN( UDT$1, -1ll );
	*(int64*)((uint8*)DTB$1 + 8ll) = *(int64*)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)UDT$1 + 224ll) + 280ll) + -1ll;
	struct $8FBSYMBOL* vr$3 = SYMBADDVAR( (uint8*)0ull, (uint8*)0ull, 32ll, (struct $8FBSYMBOL*)0ull, 0ll, 1ll, (struct $7FBARRAYI10FBARRAYDIME*)&tmp$79$1, 1048579ll, 1ll );
	VTABLE$1 = vr$3;
	*($12FB_SYMBSTATS*)((uint8*)VTABLE$1 + 16ll) = *(int64*)((uint8*)VTABLE$1 + 16ll) | 1024ll;
	SYMBNESTEND( -1ll );
	BASEVTABLEELEMENTS$1 = *(int64*)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)UDT$1 + 168ll) + 56ll) + 224ll) + 280ll);
	if( BASEVTABLEELEMENTS$1 <= 2ll ) goto label$39;
	{
		BASEVTABLEINITREE$1 = *(struct $7ASTNODE**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)UDT$1 + 168ll) + 56ll) + 224ll) + 288ll) + 88ll);
	}
	goto label$38;
	label$39:;
	{
		BASEVTABLEINITREE$1 = (struct $7ASTNODE*)0ull;
	}
	label$38:;
	struct $7ASTNODE* vr$17 = ASTTYPEINIBEGIN( 32ll, (struct $8FBSYMBOL*)0ull, 0ll, 0ll );
	INITREE$1 = vr$17;
	ASTTYPEINISCOPEBEGIN( INITREE$1, VTABLE$1 );
	struct $7ASTNODE* vr$18 = ASTNEWCONSTI( 0ll, 32ll, (struct $8FBSYMBOL*)0ull );
	ASTTYPEINIADDASSIGN( INITREE$1, vr$18, VTABLE$1, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	RTTI$1 = *(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)UDT$1 + 224ll) + 296ll);
	struct $7ASTNODE* vr$21 = ASTNEWVAR( RTTI$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$22 = ASTNEWADDROF( vr$21 );
	ASTTYPEINIADDASSIGN( INITREE$1, vr$22, VTABLE$1, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	I$1 = 2ll;
	if( BASEVTABLEINITREE$1 == (struct $7ASTNODE*)0ull ) goto label$41;
	{
		ASTTYPEINICOPYELEMENTS( INITREE$1, BASEVTABLEINITREE$1, 2ll );
		I$1 = (I$1 + BASEVTABLEELEMENTS$1) + -2ll;
	}
	label$41:;
	label$40:;
	label$42:;
	if( I$1 > *(int64*)((uint8*)DTB$1 + 8ll) ) goto label$43;
	{
		struct $7ASTNODE* vr$27 = ASTNEWCONSTI( 0ll, 32ll, (struct $8FBSYMBOL*)0ull );
		ASTTYPEINIADDASSIGN( INITREE$1, vr$27, VTABLE$1, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		I$1 = I$1 + 1ll;
	}
	goto label$42;
	label$43:;
	ASTTYPEINISCOPEEND( INITREE$1, VTABLE$1 );
	ASTTYPEINIEND( INITREE$1, -1ll );
	*(struct $7ASTNODE**)((uint8*)VTABLE$1 + 88ll) = INITREE$1;
	MEMBER$1 = *(struct $8FBSYMBOL**)((uint8*)UDT$1 + 96ll);
	label$44:;
	if( MEMBER$1 == (struct $8FBSYMBOL*)0ull ) goto label$45;
	{
		if( *(int64*)MEMBER$1 != 3ll ) goto label$47;
		{
			int64 vr$34 = SYMBPROCGETVTABLEINDEX( MEMBER$1 );
			I$1 = vr$34;
			if( ((int64)-(I$1 > 0ll) & ~(int64)-((*(int64*)((uint8*)MEMBER$1 + 8ll) & 1073741824ll) != 0ll)) == 0ll ) goto label$49;
			{
				struct $7ASTNODE* vr$42 = ASTBUILDPROCADDROF( MEMBER$1 );
				ASTTYPEINIREPLACEELEMENT( INITREE$1, I$1, vr$42 );
			}
			label$49:;
			label$48:;
		}
		label$47:;
		label$46:;
		MEMBER$1 = *(struct $8FBSYMBOL**)((uint8*)MEMBER$1 + 296ll);
	}
	goto label$44;
	label$45:;
	*(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)UDT$1 + 224ll) + 288ll) = VTABLE$1;
	label$37:;
}

static void HPROCBEGIN( struct $8FBSYMBOL* UDT$1, struct $8FBSYMBOL* PROC$1 )
{
	label$50:;
	SYMBNESTBEGIN( UDT$1, -1ll );
	ASTPROCBEGIN( PROC$1, 0ll );
	label$51:;
}

static void HPROCEND( void )
{
	label$52:;
	ASTPROCEND( 0ll );
	SYMBNESTEND( -1ll );
	label$53:;
}

static void HADDCTORBODY( struct $8FBSYMBOL* UDT$1, struct $8FBSYMBOL* PROC$1, int64 IS_COPYCTOR$1 )
{
	label$54:;
	HPROCBEGIN( UDT$1, PROC$1 );
	if( IS_COPYCTOR$1 == 0ll ) goto label$57;
	{
		struct $7ASTNODE* vr$3 = ASTBUILDVARFIELD( *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 136ll) + 96ll), (struct $8FBSYMBOL*)0ull, 0ll );
		struct $7ASTNODE* vr$6 = ASTBUILDVARFIELD( *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 128ll) + 96ll), (struct $8FBSYMBOL*)0ull, 0ll );
		struct $7ASTNODE* vr$7 = ASTNEWASSIGN( vr$6, vr$3, 0ll );
		ASTADD( vr$7 );
	}
	label$57:;
	label$56:;
	HPROCEND(  );
	*($12FB_SYMBSTATS*)((uint8*)UDT$1 + 16ll) = *(int64*)((uint8*)UDT$1 + 16ll) | 8388608ll;
	label$55:;
}

static void HASSIGNDYNAMICARRAY( struct $8FBSYMBOL* FLD$1, struct $7ASTNODE* DSTEXPR$1, struct $7ASTNODE* SRCEXPR$1 )
{
	label$60:;
	int64 DTYPE$1;
	struct $8FBSYMBOL* DST$1;
	struct $8FBSYMBOL* SRC$1;
	struct $8FBSYMBOL* LIMIT$1;
	struct $8FBSYMBOL* LOOPLABEL$1;
	struct $8FBSYMBOL* EXITLABEL$1;
	DTYPE$1 = *(int64*)((uint8*)FLD$1 + 48ll);
	struct $7ASTNODE* vr$2 = RTLARRAYREDIMTO( DSTEXPR$1, SRCEXPR$1, DTYPE$1, *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 56ll) );
	ASTADD( vr$2 );
	DTYPE$1 = ((DTYPE$1 & 31ll) | ((DTYPE$1 & 480ll) + 32ll)) | ((DTYPE$1 & 261632ll) << 1ll);
	struct $8FBSYMBOL* vr$10 = SYMBADDLABEL( (uint8*)0ull, 4ll );
	LOOPLABEL$1 = vr$10;
	struct $8FBSYMBOL* vr$11 = SYMBADDLABEL( (uint8*)0ull, 4ll );
	EXITLABEL$1 = vr$11;
	struct $8FBSYMBOL* vr$13 = SYMBADDTEMPVAR( DTYPE$1, *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 56ll) );
	DST$1 = vr$13;
	struct $8FBSYMBOL* vr$15 = SYMBADDTEMPVAR( DTYPE$1, *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 56ll) );
	SRC$1 = vr$15;
	struct $8FBSYMBOL* vr$17 = SYMBADDTEMPVAR( DTYPE$1, *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 56ll) );
	LIMIT$1 = vr$17;
	struct $7ASTNODE* vr$19 = _Z19ASTBUILDDEREFADDROFP7ASTNODExlP8FBSYMBOLS2_( DSTEXPR$1, *(int64*)((uint8*)&SYMB$ + 199104ll), DTYPE$1, *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 56ll), (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$20 = _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEl( DST$1, vr$19, 64ll );
	ASTADD( vr$20 );
	struct $7ASTNODE* vr$22 = _Z19ASTBUILDDEREFADDROFP7ASTNODExlP8FBSYMBOLS2_( SRCEXPR$1, *(int64*)((uint8*)&SYMB$ + 199104ll), DTYPE$1, *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 56ll), (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$23 = _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEl( SRC$1, vr$22, 64ll );
	ASTADD( vr$23 );
	struct $7ASTNODE* vr$24 = _Z19ASTBUILDDEREFADDROFP7ASTNODExlP8FBSYMBOLS2_( SRCEXPR$1, *(int64*)((uint8*)&SYMB$ + 199112ll), 8ll, (struct $8FBSYMBOL*)0ull, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$25 = ASTNEWVAR( SRC$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$26 = ASTNEWBOP( 28ll, vr$25, vr$24, (struct $8FBSYMBOL*)0ull, 1ll );
	struct $7ASTNODE* vr$27 = _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEl( LIMIT$1, vr$26, 64ll );
	ASTADD( vr$27 );
	struct $7ASTNODE* vr$28 = ASTNEWLABEL( LOOPLABEL$1, -1ll );
	ASTADD( vr$28 );
	struct $7ASTNODE* vr$29 = ASTNEWVAR( LIMIT$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$30 = ASTNEWVAR( SRC$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$31 = ASTNEWBOP( 49ll, vr$30, vr$29, (struct $8FBSYMBOL*)0ull, 1ll );
	struct $7ASTNODE* vr$32 = ASTBUILDBRANCH( vr$31, EXITLABEL$1, -1ll, 0ll );
	ASTADD( vr$32 );
	struct $7ASTNODE* vr$33 = ASTBUILDVARDEREF( SRC$1 );
	struct $7ASTNODE* vr$34 = ASTBUILDVARDEREF( DST$1 );
	struct $7ASTNODE* vr$35 = ASTNEWASSIGN( vr$34, vr$33, 0ll );
	ASTADD( vr$35 );
	struct $7ASTNODE* vr$36 = ASTBUILDVARINC( DST$1, 1ll );
	ASTADD( vr$36 );
	struct $7ASTNODE* vr$37 = ASTBUILDVARINC( SRC$1, 1ll );
	ASTADD( vr$37 );
	struct $7ASTNODE* vr$38 = ASTNEWBRANCH( 97ll, LOOPLABEL$1, (struct $7ASTNODE*)0ull );
	ASTADD( vr$38 );
	struct $7ASTNODE* vr$39 = ASTNEWLABEL( EXITLABEL$1, -1ll );
	ASTADD( vr$39 );
	label$61:;
}

static void HASSIGNLIST( struct $8FBSYMBOL* FLD$1, struct $7ASTNODE* DSTEXPR$1, struct $7ASTNODE* SRCEXPR$1 )
{
	label$62:;
	static struct $8FBSYMBOL* CNT$1;
	static struct $8FBSYMBOL* LABEL$1;
	static struct $8FBSYMBOL* DST$1;
	static struct $8FBSYMBOL* SRC$1;
	static struct $8FBSYMBOL* SUBTYPE$1;
	SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 56ll);
	struct $8FBSYMBOL* vr$1 = SYMBADDTEMPVAR( 7ll, (struct $8FBSYMBOL*)0ull );
	CNT$1 = vr$1;
	struct $8FBSYMBOL* vr$2 = SYMBADDLABEL( (uint8*)0ull, 4ll );
	LABEL$1 = vr$2;
	struct $8FBSYMBOL* vr$16 = SYMBADDTEMPVAR( (((*(int64*)((uint8*)FLD$1 + 48ll) & 511ll) & 31ll) | (((*(int64*)((uint8*)FLD$1 + 48ll) & 511ll) & 480ll) + 32ll)) | (((*(int64*)((uint8*)FLD$1 + 48ll) & 511ll) & 261632ll) << 1ll), SUBTYPE$1 );
	DST$1 = vr$16;
	struct $8FBSYMBOL* vr$30 = SYMBADDTEMPVAR( (((*(int64*)((uint8*)FLD$1 + 48ll) & 511ll) & 31ll) | (((*(int64*)((uint8*)FLD$1 + 48ll) & 511ll) & 480ll) + 32ll)) | (((*(int64*)((uint8*)FLD$1 + 48ll) & 511ll) & 261632ll) << 1ll), SUBTYPE$1 );
	SRC$1 = vr$30;
	struct $7ASTNODE* vr$31 = ASTNEWADDROF( DSTEXPR$1 );
	struct $7ASTNODE* vr$32 = _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEl( DST$1, vr$31, 64ll );
	ASTADD( vr$32 );
	struct $7ASTNODE* vr$33 = ASTNEWADDROF( SRCEXPR$1 );
	struct $7ASTNODE* vr$34 = _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEl( SRC$1, vr$33, 64ll );
	ASTADD( vr$34 );
	struct $7ASTNODE* vr$35 = ASTBUILDFORBEGIN( (struct $7ASTNODE*)0ull, CNT$1, LABEL$1, 0ll, -1ll );
	ASTADD( vr$35 );
	struct $7ASTNODE* vr$36 = ASTBUILDVARDEREF( SRC$1 );
	struct $7ASTNODE* vr$37 = ASTBUILDVARDEREF( DST$1 );
	struct $7ASTNODE* vr$38 = ASTNEWASSIGN( vr$37, vr$36, 0ll );
	ASTADD( vr$38 );
	struct $7ASTNODE* vr$39 = ASTBUILDVARINC( DST$1, 1ll );
	ASTADD( vr$39 );
	struct $7ASTNODE* vr$40 = ASTBUILDVARINC( SRC$1, 1ll );
	ASTADD( vr$40 );
	struct $7ASTNODE* vr$42 = ASTNEWCONSTI( *(int64*)((uint8*)FLD$1 + 120ll), 7ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$43 = ASTBUILDFOREND( (struct $7ASTNODE*)0ull, CNT$1, LABEL$1, vr$42 );
	ASTADD( vr$43 );
	label$63:;
}

static struct $8FBSYMBOL* HCOPYUNIONFIELDS( struct $8FBSYMBOL* THIS_$1, struct $8FBSYMBOL* RHS$1, struct $8FBSYMBOL* BASE_FLD$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$64:;
	struct $8FBSYMBOL* FLD$1;
	int64 BYTES$1;
	int64 LGT$1;
	int64 BASE_OFS$1;
	FLD$1 = BASE_FLD$1;
	BYTES$1 = 0ll;
	BASE_OFS$1 = *(int64*)((uint8*)BASE_FLD$1 + 80ll);
	label$66:;
	{
		LGT$1 = ((*(int64*)((uint8*)FLD$1 + 72ll) * *(int64*)((uint8*)FLD$1 + 120ll)) + *(int64*)((uint8*)FLD$1 + 80ll)) - BASE_OFS$1;
		if( LGT$1 <= BYTES$1 ) goto label$70;
		{
			BYTES$1 = LGT$1;
		}
		label$70:;
		label$69:;
		FLD$1 = *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 296ll);
		if( FLD$1 != (struct $8FBSYMBOL*)0ull ) goto label$72;
		{
			goto label$67;
		}
		label$72:;
		label$71:;
	}
	label$68:;
	if( (*(int64*)((uint8*)FLD$1 + 16ll) & 16777216ll) != 0ll ) goto label$66;
	label$67:;
	struct $7ASTNODE* vr$14 = ASTBUILDVARFIELD( RHS$1, BASE_FLD$1, 0ll );
	struct $7ASTNODE* vr$15 = ASTBUILDVARFIELD( THIS_$1, BASE_FLD$1, 0ll );
	struct $7ASTNODE* vr$16 = ASTNEWMEM( 104ll, vr$15, vr$14, BYTES$1 );
	ASTADD( vr$16 );
	fb$result$1 = FLD$1;
	label$65:;
	return fb$result$1;
}

static void HADDLETOPBODY( struct $8FBSYMBOL* UDT$1, struct $8FBSYMBOL* LETPROC$1 )
{
	label$73:;
	struct $8FBSYMBOL* FLD$1;
	struct $8FBSYMBOL* THIS_$1;
	struct $8FBSYMBOL* RHS$1;
	struct $7ASTNODE* DSTEXPR$1;
	struct $7ASTNODE* SRCEXPR$1;
	int64 DO_COPY$1;
	HPROCBEGIN( UDT$1, LETPROC$1 );
	THIS_$1 = *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)LETPROC$1 + 128ll) + 96ll);
	RHS$1 = *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)LETPROC$1 + 136ll) + 96ll);
	FLD$1 = *(struct $8FBSYMBOL**)((uint8*)UDT$1 + 96ll);
	label$75:;
	if( FLD$1 == (struct $8FBSYMBOL*)0ull ) goto label$76;
	{
		DO_COPY$1 = (int64)-(*(int64*)FLD$1 == 12ll) & ~(int64)-((*(int64*)((uint8*)FLD$1 + 8ll) & 8388608ll) != 0ll);
		if( *(struct $8FBSYMBOL**)((uint8*)UDT$1 + 168ll) == (struct $8FBSYMBOL*)0ull ) goto label$78;
		{
			DO_COPY$1 = DO_COPY$1 & ((int64)-(FLD$1 != *(struct $8FBSYMBOL**)((uint8*)UDT$1 + 168ll)) | (int64)-(*(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)UDT$1 + 168ll) + 56ll) != *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 199160ll)));
		}
		label$78:;
		label$77:;
		if( DO_COPY$1 == 0ll ) goto label$80;
		{
			if( (*(int64*)((uint8*)FLD$1 + 16ll) & 16777216ll) == 0ll ) goto label$82;
			{
				struct $8FBSYMBOL* vr$26 = HCOPYUNIONFIELDS( THIS_$1, RHS$1, FLD$1 );
				FLD$1 = vr$26;
				goto label$75;
			}
			label$82:;
			label$81:;
			struct $7ASTNODE* vr$27 = ASTBUILDVARFIELD( THIS_$1, FLD$1, 0ll );
			DSTEXPR$1 = vr$27;
			struct $7ASTNODE* vr$28 = ASTBUILDVARFIELD( RHS$1, FLD$1, 0ll );
			SRCEXPR$1 = vr$28;
			if( (*(int64*)((uint8*)FLD$1 + 8ll) & 4ll) == 0ll ) goto label$84;
			{
				HASSIGNDYNAMICARRAY( FLD$1, DSTEXPR$1, SRCEXPR$1 );
			}
			goto label$83;
			label$84:;
			{
				if( *(int64*)((uint8*)FLD$1 + 96ll) != 0ll ) goto label$86;
				{
					struct $7ASTNODE* vr$34 = ASTNEWASSIGN( DSTEXPR$1, SRCEXPR$1, 0ll );
					ASTADD( vr$34 );
				}
				goto label$85;
				label$86:;
				{
					HASSIGNLIST( FLD$1, DSTEXPR$1, SRCEXPR$1 );
				}
				label$85:;
			}
			label$83:;
		}
		label$80:;
		label$79:;
		FLD$1 = *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 296ll);
	}
	goto label$75;
	label$76:;
	HPROCEND(  );
	*($12FB_SYMBSTATS*)((uint8*)UDT$1 + 16ll) = *(int64*)((uint8*)UDT$1 + 16ll) | 8388608ll;
	label$74:;
}

static int64 HHASBYREFSELFPARAM( struct $8FBSYMBOL* PROC$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$127:;
	struct $8FBSYMBOL* PARAM$1;
	fb$result$1 = 0ll;
	PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 136ll);
	if( *(int64*)((uint8*)PARAM$1 + 88ll) == 2ll ) goto label$130;
	{
		goto label$128;
	}
	label$130:;
	label$129:;
	if( *(int64*)((uint8*)PARAM$1 + 48ll) != ((DTYPE$1 & -512ll) | 21ll) ) goto label$132;
	{
		if( *(uint64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll) + 248ll) != *(uint64*)((uint8*)SUBTYPE$1 + 248ll) ) goto label$134;
		{
			int32 vr$17 = fb_StrCompare( *(void**)*(struct $8HASHITEM**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll) + 240ll), 0ll, *(void**)*(struct $8HASHITEM**)((uint8*)SUBTYPE$1 + 240ll), 0ll );
			if( (int64)vr$17 != 0ll ) goto label$136;
			{
				fb$result$1 = -1ll;
				goto label$128;
			}
			label$136:;
			label$135:;
		}
		label$134:;
		label$133:;
	}
	label$132:;
	label$131:;
	fb$result$1 = (int64)-(*(int64*)((uint8*)PARAM$1 + 48ll) == DTYPE$1) & (int64)-(*(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll) == SUBTYPE$1);
	label$128:;
	return fb$result$1;
}

static struct $8FBSYMBOL* SYMBGETCOMPCOPYCTOR( struct $8FBSYMBOL* SYM$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$188:;
	if( *(struct $12FB_STRUCTEXT**)((uint8*)SYM$1 + 224ll) == (struct $12FB_STRUCTEXT*)0ull ) goto label$191;
	{
		fb$result$1 = *(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)SYM$1 + 224ll) + 16ll);
	}
	label$191:;
	label$190:;
	label$189:;
	return fb$result$1;
}

static void HINSERTNESTED( struct $8FBSYMBOL* SYM$1, struct $8FBHASHTB* LASTTB$1, struct $8FBSYMBOL* BASE_NS$1 )
{
	label$239:;
	struct $8FBHASHTB* HASHTB$1;
	struct $8FBSYMBOL* NS$1;
	NS$1 = *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)SYM$1 + 232ll);
	label$241:;
	if( NS$1 == BASE_NS$1 ) goto label$242;
	{
		HASHTB$1 = (struct $8FBHASHTB*)((uint8*)NS$1 + 112ll);
		if( *(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) != (struct $13FBNAMESPC_EXT*)0ull ) goto label$244;
		{
			void* vr$8 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&SYMB$ + 197256ll) );
			*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) = (struct $13FBNAMESPC_EXT*)vr$8;
		}
		label$244:;
		label$243:;
		*(int64*)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) + 32ll) = *(int64*)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) + 32ll) + 1ll;
		if( *(int64*)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) + 32ll) == 1ll ) goto label$246;
		{
			SYMBHASHLISTREMOVENAMESPACE( NS$1 );
		}
		label$246:;
		label$245:;
		SYMBHASHLISTADDBEFORE( LASTTB$1, HASHTB$1 );
		LASTTB$1 = HASHTB$1;
		NS$1 = *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)NS$1 + 232ll);
	}
	goto label$241;
	label$242:;
	label$240:;
}

static void HREMOVENESTED( struct $8FBSYMBOL* SYM$1, struct $8FBSYMBOL* BASE_NS$1 )
{
	label$247:;
	struct $8FBSYMBOL* NS$1;
	NS$1 = *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)SYM$1 + 232ll);
	label$249:;
	if( NS$1 == BASE_NS$1 ) goto label$250;
	{
		*(int64*)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) + 32ll) = *(int64*)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) + 32ll) + -1ll;
		SYMBHASHLISTDEL( (struct $8FBHASHTB*)((uint8*)NS$1 + 112ll) );
		if( *(int64*)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$1 + 160ll) + 32ll) == 0ll ) goto label$252;
		{
			SYMBHASHLISTINSERTNAMESPACE( NS$1, *(struct $8FBSYMBOL**)((uint8*)NS$1 + 96ll) );
		}
		label$252:;
		label$251:;
		NS$1 = *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)NS$1 + 232ll);
	}
	goto label$249;
	label$250:;
	label$248:;
}

static void HINSERTIMPORTED( struct $8FBSYMBOL* SYM$1 )
{
	label$253:;
	if( *(struct $13FBNAMESPC_EXT**)((uint8*)SYM$1 + 160ll) != (struct $13FBNAMESPC_EXT*)0ull ) goto label$256;
	{
		goto label$254;
	}
	label$256:;
	label$255:;
	struct $8FBSYMBOL* IMP_$1;
	IMP_$1 = *(struct $8FBSYMBOL**)*(struct $13FBNAMESPC_EXT**)((uint8*)SYM$1 + 160ll);
	label$257:;
	if( IMP_$1 == (struct $8FBSYMBOL*)0ull ) goto label$258;
	{
		struct $8FBSYMBOL* NS$2;
		NS$2 = *(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 88ll);
		if( NS$2 == (struct $8FBSYMBOL*)0ull ) goto label$260;
		{
			*(int64*)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$2 + 160ll) + 32ll) = *(int64*)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$2 + 160ll) + 32ll) + 1ll;
			if( *(int64*)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$2 + 160ll) + 32ll) != 1ll ) goto label$262;
			{
				SYMBHASHLISTINSERTNAMESPACE( NS$2, *(struct $8FBSYMBOL**)((uint8*)NS$2 + 96ll) );
			}
			label$262:;
			label$261:;
		}
		label$260:;
		label$259:;
		IMP_$1 = *(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 104ll);
	}
	goto label$257;
	label$258:;
	label$254:;
}

static void HREMOVEIMPORTED( struct $8FBSYMBOL* SYM$1 )
{
	label$263:;
	if( *(struct $13FBNAMESPC_EXT**)((uint8*)SYM$1 + 160ll) != (struct $13FBNAMESPC_EXT*)0ull ) goto label$266;
	{
		goto label$264;
	}
	label$266:;
	label$265:;
	struct $8FBSYMBOL* IMP_$1;
	IMP_$1 = *(struct $8FBSYMBOL**)*(struct $13FBNAMESPC_EXT**)((uint8*)SYM$1 + 160ll);
	label$267:;
	if( IMP_$1 == (struct $8FBSYMBOL*)0ull ) goto label$268;
	{
		struct $8FBSYMBOL* NS$2;
		NS$2 = *(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 88ll);
		if( NS$2 == (struct $8FBSYMBOL*)0ull ) goto label$270;
		{
			*(int64*)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$2 + 160ll) + 32ll) = *(int64*)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$2 + 160ll) + 32ll) + -1ll;
			if( *(int64*)((uint8*)*(struct $13FBNAMESPC_EXT**)((uint8*)NS$2 + 160ll) + 32ll) != 0ll ) goto label$272;
			{
				SYMBHASHLISTREMOVENAMESPACE( NS$2 );
			}
			label$272:;
			label$271:;
		}
		label$270:;
		label$269:;
		IMP_$1 = *(struct $8FBSYMBOL**)((uint8*)IMP_$1 + 104ll);
	}
	goto label$267;
	label$268:;
	label$264:;
}

// Total compilation time: 0.04487993195652962 seconds.
