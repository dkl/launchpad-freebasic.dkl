// Compilation of fbc-1.01.0/src/compiler/parser-decl-var.bas started at 15:27:41 on 02-28-2015

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
typedef int64 $13FB_COMPTARGET;
struct $16__FB_ARRAYDIMTB$ {
	int64 ELEMENTS;
	int64 LBOUND;
	int64 UBOUND;
};
__FB_STATIC_ASSERT( sizeof( struct $16__FB_ARRAYDIMTB$ ) == 24 );
struct $7FBARRAYIP7ASTNODEE {
	struct $7ASTNODE** DATA;
	struct $7ASTNODE** PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYIP7ASTNODEE ) == 232 );
struct $7FBARRAYI10FBARRAYDIME {
	struct $10FBARRAYDIM* DATA;
	struct $10FBARRAYDIM* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYI10FBARRAYDIME ) == 232 );
typedef int64 $8FB_IDOPT;
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
struct $7FBTOKEN;
struct $7FBTOKEN {
	int64 ID;
	int64 CLASS;
	int64 DTYPE;
	union {
		uint8 TEXT[1025];
		uint32 TEXTW[1025];
	};
	int64 LEN;
	struct $10FBSYMCHAIN* SYM_CHAIN;
	union {
		int64 PRDPOS;
		int64 HASESC;
	};
	int64 AFTER_SPACE;
	struct $7FBTOKEN* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $7FBTOKEN ) == 4168 );
struct $8DZSTRING {
	uint8* DATA;
	int64 LEN;
	int64 SIZE;
};
__FB_STATIC_ASSERT( sizeof( struct $8DZSTRING ) == 24 );
struct $8DWSTRING {
	uint32* DATA;
	int64 LEN;
	int64 SIZE;
};
__FB_STATIC_ASSERT( sizeof( struct $8DWSTRING ) == 24 );
struct $9LEX_TKCTX {
	struct $7FBTOKEN TOKENTB[4];
	int64 K;
	struct $7FBTOKEN* HEAD;
	struct $7FBTOKEN* TAIL;
	uint64 CURRCHAR;
	uint64 LAHDCHAR;
	int64 LINENUM;
	int64 LASTTK_ID;
	int64 RECLEVEL;
	struct $8FBSYMBOL* CURRMACRO;
	struct $8FBSYMBOL* KWDNS;
	int64 DEFLEN;
	union {
		struct {
			uint8* DEFPTR;
			struct $8DZSTRING DEFTEXT;
		};
		struct {
			uint32* DEFPTRW;
			struct $8DWSTRING DEFTEXTW;
		};
	};
	int64 BUFFLEN;
	union {
		struct {
			uint8* BUFFPTR;
			uint8 BUFF[8193];
		};
		struct {
			uint32* BUFFPTRW;
			uint32 BUFFW[8193];
		};
	};
	int64 FILEPOS;
	int64 LASTFILEPOS;
	struct $8DZSTRING CURRLINE;
	int64 AFTER_SPACE;
};
__FB_STATIC_ASSERT( sizeof( struct $9LEX_TKCTX ) == 49632 );
typedef int64 $12FB_PARSEROPT;
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__parserzdeclzvar( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
typedef int64 $12FB_ERRMSGOPT;
void ERRREPORTEX( int64, uint8*, int64, $12FB_ERRMSGOPT, uint8* );
void ERRREPORT( int64, int64, uint8* );
void ERRREPORTWARN( int64, uint8*, $12FB_ERRMSGOPT );
typedef int64 $11FB_LANG_OPT;
void ERRREPORTNOTALLOWED( $11FB_LANG_OPT, int64, uint8* );
struct $7ASTNODE* ASTCLONETREE( struct $7ASTNODE* );
void ASTDELTREE( struct $7ASTNODE* );
struct $8FBSYMBOL* ASTPROCADDSTATICINSTANCE( struct $8FBSYMBOL* );
void ASTPROCADDGLOBALINSTANCE( struct $8FBSYMBOL*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTADD( struct $7ASTNODE* );
void ASTADDUNSCOPED( struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDBRANCH( struct $7ASTNODE*, struct $8FBSYMBOL*, int64, int64 );
typedef int64 $11AST_CONVOPT;
struct $7ASTNODE* ASTNEWCONV( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, $11AST_CONVOPT, int64* );
struct $7ASTNODE* ASTNEWBOP( int64, struct $7ASTNODE*, struct $7ASTNODE*, struct $8FBSYMBOL*, $9AST_OPOPT );
struct $7ASTNODE* ASTNEWCONSTI( int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWCONSTZ( int64, struct $8FBSYMBOL* );
int64 ASTCONSTFLUSHTOINT( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWVAR( struct $8FBSYMBOL*, int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWLINK( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTNEWLABEL( struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* ASTNEWDECL( struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* ASTNEWNIDXARRAY( struct $7ASTNODE* );
struct $7ASTNODE* ASTREMOVENIDXARRAY( struct $7ASTNODE* );
struct $7ASTNODE* ASTTYPEINIBEGIN( int64, struct $8FBSYMBOL*, int64, int64 );
void ASTTYPEINIEND( struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTTYPEINIADDASSIGN( struct $7ASTNODE*, struct $7ASTNODE*, struct $8FBSYMBOL*, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTTYPEINIADDCTORCALL( struct $7ASTNODE*, struct $8FBSYMBOL*, struct $7ASTNODE*, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEll( struct $8FBSYMBOL*, struct $7ASTNODE*, int64, int64 );
int64 ASTTYPEINIISCONST( struct $7ASTNODE* );
int64 ASTTYPEINIUSESLOCALS( struct $7ASTNODE*, int64 );
struct $7ASTNODE* _Z17ASTBUILDVARASSIGNP8FBSYMBOLll( struct $8FBSYMBOL*, int64, int64 );
struct $7ASTNODE* ASTBUILDVARFIELD( struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* _Z19ASTBUILDVARDTORCALLP8FBSYMBOLl( struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* ASTBUILDTYPEINICTORLIST( struct $8FBSYMBOL* );
struct $7ASTNODE* ASTBUILDPROCADDROF( struct $8FBSYMBOL* );
struct $7ASTNODE* ASTBUILDIMPLICITCTORCALLEX( struct $8FBSYMBOL*, struct $7ASTNODE*, $12FB_PARAMMODE, int64* );
struct $7ASTNODE* ASTBUILDARRAYDESCINITREE( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $10FBSYMCHAIN* SYMBLOOKUPAT( struct $8FBSYMBOL*, uint8*, int64, int64 );
struct $8FBSYMBOL* SYMBFINDBYCLASS( struct $10FBSYMCHAIN*, int64 );
struct $8FBSYMBOL* SYMBFINDVARBYSUFFIX( struct $10FBSYMCHAIN*, int64 );
struct $8FBSYMBOL* SYMBFINDVARBYDEFTYPE( struct $10FBSYMCHAIN*, int64 );
struct $8FBSYMBOL* SYMBFINDVARBYTYPE( struct $10FBSYMCHAIN*, int64 );
typedef int64 $10FB_SYMBOPT;
struct $8FBSYMBOL* SYMBADDLABEL( uint8*, $10FB_SYMBOPT );
void SYMBCHECKDYNAMICARRAYDIMENSIONS( struct $8FBSYMBOL*, int64 );
struct $8FBSYMBOL* SYMBADDVAR( uint8*, uint8*, int64, struct $8FBSYMBOL*, int64, int64, struct $7FBARRAYI10FBARRAYDIME*, int64, $10FB_SYMBOPT );
struct $8FBSYMBOL* SYMBADDPROCPTRFROMFUNCTION( struct $8FBSYMBOL* );
int64 SYMBARRAYHASUNKNOWNBOUNDS( struct $8FBSYMBOL* );
int64 SYMBCALCLEN( int64, struct $8FBSYMBOL* );
int64 SYMBCHECKARRAYSIZE( int64, struct $10FBARRAYDIM*, int64, int64 );
int64 SYMBHASCTOR( struct $8FBSYMBOL* );
int64 SYMBHASDEFCTOR( struct $8FBSYMBOL* );
int64 SYMBHASDTOR( struct $8FBSYMBOL* );
int64 SYMBGETVARHASDTOR( struct $8FBSYMBOL* );
int64 TYPEHASCTOR( int64, struct $8FBSYMBOL* );
int64 TYPEHASDTOR( int64, struct $8FBSYMBOL* );
uint8* SYMBUNIQUELABEL( void );
int64 SYMBGETDEFTYPE( uint8* );
struct $8FBSYMBOL* SYMBGETCOMPDEFCTOR( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBGETCOMPDTOR( struct $8FBSYMBOL* );
int64 SYMBCOMPGETABSTRACTCOUNT( struct $8FBSYMBOL* );
int64 SYMBCHECKACCESS( struct $8FBSYMBOL* );
int64 HMATCH( int64 );
typedef int64 $8LEXCHECK;
int64 LEXGETTOKEN( $8LEXCHECK );
int64 LEXGETCLASS( $8LEXCHECK );
uint8* LEXGETTEXT( void );
void LEXSKIPTOKEN( $8LEXCHECK );
int64 LEXGETLOOKAHEADCLASS( int64, $8LEXCHECK );
int64 LEXGETLOOKAHEAD( int64, $8LEXCHECK );
int64 HCHECKSCOPE( void );
void CARRAYDECL( int64*, int64*, struct $7FBARRAYIP7ASTNODEE* );
typedef int64 $9FB_INIOPT;
struct $7ASTNODE* CINITIALIZER( struct $8FBSYMBOL*, $9FB_INIOPT, int64, struct $8FBSYMBOL* );
typedef int64 $14FB_SYMBTYPEOPT;
int64 CSYMBOLTYPE( int64*, struct $8FBSYMBOL**, int64*, $14FB_SYMBTYPEOPT );
struct $8FBSYMBOL* CPARENTID( $8FB_IDOPT );
typedef int64 $15FB_CMPSTMT_MASK;
int64 CCOMPSTMTISALLOWED( $15FB_CMPSTMT_MASK );
int64 HISASSIGNTOKEN( int64 );
int64 CASSIGNTOKEN( void );
struct $7ASTNODE* CEXPRESSION( void );
struct $7ASTNODE* CEXPRESSIONWITHNIDXARRAY( int64 );
uint8* CALIASATTRIBUTE( void );
$12FB_PARAMMODE CBYDESCARRAYARGPARENS( struct $7ASTNODE* );
void HSKIPUNTIL( int64, int64, $8LEXCHECK, int64 );
void HMAYBECONVERTEXPRTB2DIMTB( int64*, int64, struct $7FBARRAYIP7ASTNODEE*, struct $7FBARRAYI10FBARRAYDIME* );
void HCOMPLAINABOUTELLIPSIS( int64, struct $7FBARRAYIP7ASTNODEE*, int64 );
struct $8FBSYMBOL* CVARDECL( int64, int64, int64, int64 );
void HCOMPLAINIFABSTRACTCLASS( int64, struct $8FBSYMBOL* );
void HCOMPLAINABOUTCONSTDYNAMICARRAY( struct $8FBSYMBOL* );
void HSYMBOLTYPE( int64*, struct $8FBSYMBOL**, int64* );
struct $7ASTNODE* RTLARRAYREDIM( struct $7ASTNODE*, int64, struct $7FBARRAYIP7ASTNODEE*, int64, int64 );
struct $7ASTNODE* RTLATEXIT( struct $7ASTNODE* );
static void CAUTOVARDECL( $13FB_SYMBATTRIB );
static int64 HEXPRTBISCONST( int64, struct $7FBARRAYIP7ASTNODEE* );
static int64 HCHECKEXTERNVAR( struct $8FBSYMBOL*, uint8*, int64, struct $8FBSYMBOL*, int64*, int64, struct $7FBARRAYI10FBARRAYDIME* );
static void HCHECKEXTERNVARANDRECOVER( struct $8FBSYMBOL*, uint8*, int64*, struct $8FBSYMBOL**, int64*, int64*, int64*, int64*, struct $7FBARRAYI10FBARRAYDIME* );
static struct $8FBSYMBOL* HADDVAR( struct $8FBSYMBOL*, struct $8FBSYMBOL*, uint8*, uint8*, int64*, struct $8FBSYMBOL**, int64*, int64, int64*, int64*, int64*, struct $7FBARRAYI10FBARRAYDIME*, int64 );
static int64 HCHECKFORIDTOKEN( struct $8FBSYMBOL* );
static struct $10FBSYMCHAIN* HGETID( struct $8FBSYMBOL*, uint8*, int64*, int64 );
static struct $8FBSYMBOL* HLOOKUPVAR( struct $10FBSYMCHAIN*, int64, int64, int64 );
static struct $8FBSYMBOL* HLOOKUPVARANDCHECKPARENT( struct $8FBSYMBOL*, struct $10FBSYMCHAIN*, int64, int64, int64, int64 );
static void HMAKEARRAYDIMTB( int64, struct $7FBARRAYIP7ASTNODEE*, struct $7FBARRAYI10FBARRAYDIME* );
static struct $7ASTNODE* HVARINITDEFAULT( struct $8FBSYMBOL*, int64, int64 );
static struct $7ASTNODE* HVARINIT( struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* HFLUSHDECL( struct $7ASTNODE* );
static struct $7ASTNODE* HWRAPINSTATICFLAG( struct $7ASTNODE* );
static struct $7ASTNODE* HCALLSTATICCTOR( struct $8FBSYMBOL*, struct $7ASTNODE*, struct $7ASTNODE*, int64 );
static struct $7ASTNODE* HCALLGLOBALCTOR( struct $8FBSYMBOL*, struct $7ASTNODE*, struct $7ASTNODE*, int64 );
static struct $7ASTNODE* HFLUSHINITIALIZER( struct $8FBSYMBOL*, struct $7ASTNODE*, struct $7ASTNODE*, int64 );
static struct $7ASTNODE* HIDXINPARENSONLYEXPR( void );
static struct $7ASTNODE* HCHECKDYNAMICARRAYEXPR( struct $7ASTNODE* );
static void HERRORDEFTYPENOTALLOWED( int64*, struct $8FBSYMBOL**, int64* );
static struct $7ASTNODE* HMAYBEBUILDFIELDACCESS( struct $8FBSYMBOL*, int64 );
static int64 HMATCHELLIPSIS( void );
static struct $7ASTNODE* HINTEXPR( struct $7ASTNODE* );
static void CARRAYDIMENSION( int64*, struct $7FBARRAYIP7ASTNODEE* );
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
struct $7LEX_CTX {
	struct $9LEX_TKCTX CTXTB[17];
	struct $9LEX_TKCTX* CTX;
	int64 INSIDEMACRO;
};
__FB_STATIC_ASSERT( sizeof( struct $7LEX_CTX ) == 843760 );
extern struct $7LEX_CTX LEX$;
typedef int64 $8FB_TOKEN;
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

void HCOMPLAINIFABSTRACTCLASS( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	label$10:;
	if( (DTYPE$1 & 511ll) != 18ll ) goto label$13;
	{
		int64 vr$2 = SYMBCOMPGETABSTRACTCOUNT( SUBTYPE$1 );
		if( vr$2 <= 0ll ) goto label$15;
		{
			ERRREPORT( 305ll, 0ll, (uint8*)0ull );
		}
		label$15:;
		label$14:;
	}
	label$13:;
	label$12:;
	label$11:;
}

void HCOMPLAINABOUTCONSTDYNAMICARRAY( struct $8FBSYMBOL* SYM$1 )
{
	label$16:;
	if( (*(int64*)((uint8*)SYM$1 + 48ll) & 512ll) == 0ll ) goto label$19;
	{
		ERRREPORT( 274ll, 0ll, (uint8*)0ull );
	}
	label$19:;
	label$18:;
	label$17:;
}

void HSYMBOLTYPE( int64* DTYPE$1, struct $8FBSYMBOL** SUBTYPE$1, int64* LGT$1 )
{
	label$20:;
	int64 vr$0 = CSYMBOLTYPE( DTYPE$1, SUBTYPE$1, LGT$1, 1ll );
	if( vr$0 != 0ll ) goto label$23;
	{
		int64 TMP$86$2;
		ERRREPORT( 14ll, 0ll, (uint8*)0ull );
		*DTYPE$1 = 7ll;
		*SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
		if( (*DTYPE$1 & 480ll) == 0ll ) goto label$24;
		TMP$86$2 = 22ll;
		goto label$28;
		label$24:;
		TMP$86$2 = *DTYPE$1 & 31ll;
		label$28:;
		*LGT$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$86$2 * 56ll)) + 8ll);
	}
	label$23:;
	label$22:;
	if( *DTYPE$1 != 0ll ) goto label$26;
	{
		int64 TMP$87$2;
		ERRREPORT( 24ll, 0ll, (uint8*)0ull );
		*DTYPE$1 = ((*DTYPE$1 & 31ll) | ((*DTYPE$1 & 480ll) + 32ll)) | ((*DTYPE$1 & 261632ll) << 1ll);
		*SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
		if( (*DTYPE$1 & 480ll) == 0ll ) goto label$27;
		TMP$87$2 = 22ll;
		goto label$29;
		label$27:;
		TMP$87$2 = *DTYPE$1 & 31ll;
		label$29:;
		*LGT$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$87$2 * 56ll)) + 8ll);
	}
	label$26:;
	label$25:;
	label$21:;
}

int64 HCHECKSCOPE( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$30:;
	if( *(uint64*)((uint8*)&PARSER$ + 184ll) <= 0ull ) goto label$33;
	{
		if( (int64)-(*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) == *(struct $8FBSYMBOL**)((uint8*)&ENV$ + 1136ll)) != 0ll ) goto label$35;
		{
			ERRREPORT( 60ll, 0ll, (uint8*)0ull );
		}
		goto label$34;
		label$35:;
		{
			ERRREPORT( 95ll, 0ll, (uint8*)0ull );
		}
		label$34:;
		fb$result$1 = 0ll;
	}
	goto label$32;
	label$33:;
	{
		fb$result$1 = -1ll;
	}
	label$32:;
	label$31:;
	return fb$result$1;
}

int64 CVARIABLEDECL( $13FB_SYMBATTRIB ATTRIB$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$36:;
	int64 DOPRESERVE$1;
	int64 TK$1;
	DOPRESERVE$1 = 0ll;
	int64 vr$1 = LEXGETTOKEN( 0ll );
	TK$1 = vr$1;
	{
		uint64 TMP$88$2;
		TMP$88$2 = (uint64)TK$1;
		goto label$39;
		label$40:;
		{
			int64 vr$2 = CCOMPSTMTISALLOWED( 1ll );
			if( vr$2 != 0ll ) goto label$42;
			{
				HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				fb$result$1 = -1ll;
				goto label$37;
			}
			label$42:;
			label$41:;
			if( (ATTRIB$1 & 96ll) == 0ll ) goto label$44;
			{
				ERRREPORT( 215ll, 0ll, (uint8*)0ull );
				ATTRIB$1 = ATTRIB$1 & -33ll;
			}
			label$44:;
			label$43:;
			LEXSKIPTOKEN( 0ll );
			ATTRIB$1 = ATTRIB$1 | 4ll;
			int64 vr$8 = HMATCH( 313ll );
			DOPRESERVE$1 = vr$8;
		}
		goto label$38;
		label$45:;
		{
			ATTRIB$1 = ATTRIB$1 | 10ll;
			ATTRIB$1 = ATTRIB$1 | 4ll;
			int64 vr$11 = HCHECKSCOPE(  );
			if( vr$11 != 0ll ) goto label$47;
			{
				ATTRIB$1 = ATTRIB$1 & -9ll;
			}
			label$47:;
			label$46:;
			if( (ATTRIB$1 & 96ll) == 0ll ) goto label$49;
			{
				ERRREPORT( 215ll, 0ll, (uint8*)0ull );
				ATTRIB$1 = ATTRIB$1 & -33ll;
			}
			label$49:;
			label$48:;
			LEXSKIPTOKEN( 0ll );
		}
		goto label$38;
		label$50:;
		{
			if( ATTRIB$1 != 0ll ) goto label$52;
			{
				int64 vr$18 = LEXGETLOOKAHEADCLASS( 1ll, 0ll );
				if( vr$18 != 4ll ) goto label$54;
				{
					fb$result$1 = 0ll;
					goto label$37;
				}
				label$54:;
				label$53:;
			}
			label$52:;
			label$51:;
			ATTRIB$1 = ATTRIB$1 | 16ll;
			ATTRIB$1 = ATTRIB$1 | 3ll;
			int64 vr$22 = HCHECKSCOPE(  );
			if( vr$22 != 0ll ) goto label$56;
			{
				ATTRIB$1 = ATTRIB$1 & -18ll;
			}
			label$56:;
			label$55:;
			if( (ATTRIB$1 & 96ll) == 0ll ) goto label$58;
			{
				ERRREPORT( 215ll, 0ll, (uint8*)0ull );
				ATTRIB$1 = ATTRIB$1 & -33ll;
			}
			label$58:;
			label$57:;
			LEXSKIPTOKEN( 0ll );
		}
		goto label$38;
		label$59:;
		{
			int64 vr$28 = CCOMPSTMTISALLOWED( 9ll );
			if( vr$28 != 0ll ) goto label$61;
			{
				HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				fb$result$1 = -1ll;
				goto label$37;
			}
			label$61:;
			label$60:;
			LEXSKIPTOKEN( 0ll );
			ATTRIB$1 = ATTRIB$1 | 2ll;
			int64 vr$31 = LEXGETTOKEN( 0ll );
			if( vr$31 != 309ll ) goto label$63;
			{
				CAUTOVARDECL( ATTRIB$1 );
				fb$result$1 = -1ll;
				goto label$37;
			}
			label$63:;
			label$62:;
		}
		goto label$38;
		label$64:;
		{
			CAUTOVARDECL( ATTRIB$1 );
			fb$result$1 = -1ll;
			goto label$37;
		}
		goto label$38;
		label$65:;
		{
			int64 vr$33 = CCOMPSTMTISALLOWED( 9ll );
			if( vr$33 != 0ll ) goto label$67;
			{
				HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				fb$result$1 = -1ll;
				goto label$37;
			}
			label$67:;
			label$66:;
			LEXSKIPTOKEN( 0ll );
		}
		goto label$38;
		label$39:;
		static const void* tmp$90[6ll] = {
			&&label$50,
			&&label$59,
			&&label$65,
			&&label$64,
			&&label$40,
			&&label$45,
		};
		if( TMP$88$2 < 306ll ) goto label$65;
		if( TMP$88$2 > 311ll ) goto label$65;
		goto *tmp$90[TMP$88$2 - 306ll];
		label$38:;
	}
	if( *(int64*)((uint8*)&ENV$ + 1248ll) == 0ll ) goto label$69;
	{
		ATTRIB$1 = ATTRIB$1 | 4ll;
	}
	label$69:;
	label$68:;
	if( (ATTRIB$1 & 16ll) != 0ll ) goto label$71;
	{
		int64 vr$39 = LEXGETTOKEN( 0ll );
		if( vr$39 != 312ll ) goto label$73;
		{
			int64 vr$41 = HCHECKSCOPE(  );
			if( vr$41 != 0ll ) goto label$75;
			{
				ATTRIB$1 = ATTRIB$1 | 2ll;
			}
			goto label$74;
			label$75:;
			{
				ATTRIB$1 = ATTRIB$1 | 3ll;
			}
			label$74:;
			LEXSKIPTOKEN( 0ll );
		}
		label$73:;
		label$72:;
	}
	goto label$70;
	label$71:;
	{
		int64 vr$45 = LEXGETTOKEN( 0ll );
		if( vr$45 != 342ll ) goto label$77;
		{
			LEXSKIPTOKEN( 0ll );
			{
				$13FB_COMPTARGET TMP$89$4;
				TMP$89$4 = *($13FB_COMPTARGET*)((uint8*)&ENV$ + 216ll);
				if( TMP$89$4 == 0ll ) goto label$80;
				label$81:;
				if( TMP$89$4 != 1ll ) goto label$79;
				label$80:;
				{
					ATTRIB$1 = ATTRIB$1 | 512ll;
				}
				label$79:;
				label$78:;
			}
		}
		label$77:;
		label$76:;
	}
	label$70:;
	if( (*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 8ll) & 2097152ll) == 0ll ) goto label$83;
	{
		ATTRIB$1 = ATTRIB$1 | 2ll;
	}
	label$83:;
	label$82:;
	CVARDECL( ATTRIB$1, DOPRESERVE$1, TK$1, 0ll );
	fb$result$1 = -1ll;
	label$37:;
	return fb$result$1;
}

void HMAYBECONVERTEXPRTB2DIMTB( int64* ATTRIB$1, int64 DIMENSIONS$1, struct $7FBARRAYIP7ASTNODEE* EXPRTB$1, struct $7FBARRAYI10FBARRAYDIME* DTB$1 )
{
	label$213:;
	int64 vr$0 = HEXPRTBISCONST( DIMENSIONS$1, (struct $7FBARRAYIP7ASTNODEE*)EXPRTB$1 );
	if( vr$0 == 0ll ) goto label$216;
	{
		if( (*ATTRIB$1 & 4ll) != 0ll ) goto label$218;
		{
			HMAKEARRAYDIMTB( DIMENSIONS$1, (struct $7FBARRAYIP7ASTNODEE*)EXPRTB$1, *(struct $7FBARRAYI10FBARRAYDIME**)&DTB$1 );
		}
		label$218:;
		label$217:;
	}
	goto label$215;
	label$216:;
	{
		*ATTRIB$1 = *ATTRIB$1 | 4ll;
	}
	label$215:;
	label$214:;
}

void HCOMPLAINABOUTELLIPSIS( int64 DIMENSIONS$1, struct $7FBARRAYIP7ASTNODEE* EXPRTB$1, int64 ERRMSG$1 )
{
	label$219:;
	{
		int64 I$2;
		I$2 = 0ll;
		int64 TMP$97$2;
		TMP$97$2 = DIMENSIONS$1 + -1ll;
		goto label$221;
		label$224:;
		{
			if( *(struct $7ASTNODE**)((uint8*)(((I$2 * *(int64*)((uint8*)EXPRTB$1 + 64ll)) << 3ll) + *(int64*)EXPRTB$1) + 8ll) != (struct $7ASTNODE*)0ull ) goto label$226;
			{
				ERRREPORT( ERRMSG$1, 0ll, (uint8*)0ull );
				struct $7ASTNODE* vr$7 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				*(struct $7ASTNODE**)((uint8*)(((I$2 * *(int64*)((uint8*)EXPRTB$1 + 64ll)) << 3ll) + *(int64*)EXPRTB$1) + 8ll) = vr$7;
			}
			label$226:;
			label$225:;
		}
		label$222:;
		I$2 = I$2 + 1ll;
		label$221:;
		if( I$2 <= TMP$97$2 ) goto label$224;
		label$223:;
	}
	label$220:;
}

struct $7ASTNODE* HFLUSHDECL( struct $7ASTNODE* VAR_DECL$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$273:;
	if( (*(int64*)((uint8*)&ENV$ + 1152ll) & 2ll) == 0ll ) goto label$276;
	{
		fb$result$1 = VAR_DECL$1;
	}
	goto label$275;
	label$276:;
	{
		ASTADDUNSCOPED( VAR_DECL$1 );
		fb$result$1 = (struct $7ASTNODE*)0ull;
	}
	label$275:;
	label$274:;
	return fb$result$1;
}

struct $8FBSYMBOL* CVARDECL( int64 BASEATTRIB$1, int64 DOPRESERVE$1, int64 TOKEN$1, int64 IS_FORDECL$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$340:;
	static uint8 ID$1[129];
	static struct $7ASTNODE* EXPRTB$1[8][2];
	struct $8FBARRAY2IP7ASTNODEE {
		struct $7ASTNODE** DATA;
		struct $7ASTNODE** PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[2];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY2IP7ASTNODEE ) == 88 );
	static struct $8FBARRAY2IP7ASTNODEE tmp$100$1 = { (struct $7ASTNODE**)EXPRTB$1, (struct $7ASTNODE**)EXPRTB$1, 128ll, 8ll, 2ll, { { 8ll, 0ll, 7ll }, { 2ll, 0ll, 1ll } } };
	static struct $10FBARRAYDIM DTB$1[8];
	struct $8FBARRAY1I10FBARRAYDIME {
		struct $10FBARRAYDIM* DATA;
		struct $10FBARRAYDIM* PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I10FBARRAYDIME ) == 64 );
	static struct $8FBARRAY1I10FBARRAYDIME tmp$101$1 = { (struct $10FBARRAYDIM*)DTB$1, (struct $10FBARRAYDIM*)DTB$1, 128ll, 16ll, 1ll, { { 8ll, 0ll, 7ll } } };
	struct $10FBSYMCHAIN* CHAIN_$1;
	struct $8FBSYMBOL* SYM$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	struct $8FBSYMBOL* PARENT$1;
	struct $7ASTNODE* VAREXPR$1;
	struct $7ASTNODE* INITREE$1;
	struct $7ASTNODE* REDIMCALL$1;
	int64 ADDSUFFIX$1;
	int64 IS_MULTDECL$1;
	int64 HAVE_BOUNDS$1;
	int64 IS_TYPELESS$1;
	int64 IS_DECLARED$1;
	int64 IS_REDIM$1;
	int64 DTYPE$1;
	int64 MAYBE_EXPR$1;
	int64 LGT$1;
	int64 DIMENSIONS$1;
	int64 SUFFIX$1;
	uint8* PALIAS$1;
	struct $7ASTNODE* ASSIGN_INITREE$1;
	$8FB_IDOPT OPTIONS$1;
	fb$result$1 = (struct $8FBSYMBOL*)0ull;
	if( (int64)-(*(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll) == (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll)) != 0ll ) goto label$343;
	{
		if( *(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) != *(struct $8FBSYMBOL**)((uint8*)&ENV$ + 1136ll) ) goto label$345;
		{
			BASEATTRIB$1 = BASEATTRIB$1 | 3ll;
		}
		label$345:;
		label$344:;
	}
	label$343:;
	label$342:;
	IS_MULTDECL$1 = 0ll;
	int64 vr$6 = LEXGETTOKEN( 0ll );
	if( vr$6 != 375ll ) goto label$347;
	{
		LEXSKIPTOKEN( 0ll );
		HSYMBOLTYPE( &DTYPE$1, &SUBTYPE$1, &LGT$1 );
		HCOMPLAINIFABSTRACTCLASS( DTYPE$1, SUBTYPE$1 );
		ADDSUFFIX$1 = 0ll;
		IS_MULTDECL$1 = -1ll;
	}
	label$347:;
	label$346:;
	label$348:;
	{
		int64 TMP$102$2;
		int64 ATTRIB$2;
		ATTRIB$2 = BASEATTRIB$1;
		IS_REDIM$1 = (int64)-(TOKEN$1 == 310ll) & (int64)-((ATTRIB$2 & 1ll) == 0ll);
		if( IS_REDIM$1 == 0ll ) goto label$351;
		TMP$102$2 = 0ll;
		goto label$488;
		label$351:;
		TMP$102$2 = 4ll;
		label$488:;
		struct $8FBSYMBOL* vr$17 = CPARENTID( TMP$102$2 | 114ll );
		PARENT$1 = vr$17;
		VAREXPR$1 = (struct $7ASTNODE*)0ull;
		if( (IS_REDIM$1 & (int64)-(PARENT$1 == (struct $8FBSYMBOL*)0ull)) == 0ll ) goto label$353;
		{
			MAYBE_EXPR$1 = 0ll;
			int64 vr$21 = LEXGETTOKEN( 0ll );
			if( vr$21 != 40ll ) goto label$355;
			{
				MAYBE_EXPR$1 = -1ll;
			}
			goto label$354;
			label$355:;
			{
				{
					int64 TMP$103$5;
					int64 vr$23 = LEXGETLOOKAHEAD( 1ll, 0ll );
					TMP$103$5 = vr$23;
					if( TMP$103$5 == 40ll ) goto label$358;
					label$359:;
					if( TMP$103$5 == 44ll ) goto label$358;
					label$360:;
					if( TMP$103$5 == 375ll ) goto label$358;
					label$361:;
					if( TMP$103$5 == 258ll ) goto label$358;
					label$362:;
					if( TMP$103$5 == 257ll ) goto label$358;
					label$363:;
					if( TMP$103$5 != 256ll ) goto label$357;
					label$358:;
					{
					}
					goto label$356;
					label$357:;
					{
						MAYBE_EXPR$1 = -1ll;
					}
					label$364:;
					label$356:;
				}
			}
			label$354:;
			if( MAYBE_EXPR$1 == 0ll ) goto label$366;
			{
				struct $7ASTNODE* vr$31 = HIDXINPARENSONLYEXPR(  );
				struct $7ASTNODE* vr$32 = HCHECKDYNAMICARRAYEXPR( vr$31 );
				VAREXPR$1 = vr$32;
			}
			label$366:;
			label$365:;
		}
		label$353:;
		label$352:;
		if( VAREXPR$1 == (struct $7ASTNODE*)0ull ) goto label$368;
		{
			CHAIN_$1 = (struct $10FBSYMCHAIN*)0ull;
			fb_StrAssign( (void*)ID$1, 129ll, *(void**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)VAREXPR$1 + 24ll) + 24ll), 0ll, 0 );
			SUFFIX$1 = 2147483648ll;
		}
		goto label$367;
		label$368:;
		{
			struct $10FBSYMCHAIN* vr$37 = HGETID( PARENT$1, (uint8*)ID$1, &SUFFIX$1, IS_REDIM$1 );
			CHAIN_$1 = vr$37;
		}
		label$367:;
		IS_TYPELESS$1 = 0ll;
		if( IS_MULTDECL$1 != 0ll ) goto label$370;
		{
			DTYPE$1 = SUFFIX$1;
			SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
			int64 vr$39 = SYMBCALCLEN( DTYPE$1, SUBTYPE$1 );
			LGT$1 = vr$39;
			ADDSUFFIX$1 = -1ll;
		}
		goto label$369;
		label$370:;
		{
			if( SUFFIX$1 == 2147483648ll ) goto label$372;
			{
				ERRREPORTEX( 17ll, (uint8*)ID$1, 0ll, 1ll, (uint8*)0ull );
				SUFFIX$1 = 2147483648ll;
			}
			label$372:;
			label$371:;
		}
		label$369:;
		DIMENSIONS$1 = 0ll;
		HAVE_BOUNDS$1 = 0ll;
		int64 vr$41 = LEXGETTOKEN( 0ll );
		if( ((int64)-(vr$41 == 40ll) & (int64)-(IS_FORDECL$1 == 0ll)) == 0ll ) goto label$374;
		{
			LEXSKIPTOKEN( 0ll );
			int64 vr$46 = LEXGETTOKEN( 0ll );
			if( vr$46 != 41ll ) goto label$376;
			{
				DIMENSIONS$1 = -1ll;
				ATTRIB$2 = ATTRIB$2 | 4ll;
			}
			goto label$375;
			label$376:;
			{
				CARRAYDECL( &DIMENSIONS$1, &HAVE_BOUNDS$1, (struct $7FBARRAYIP7ASTNODEE*)&tmp$100$1 );
				if( HAVE_BOUNDS$1 == 0ll ) goto label$378;
				{
					if( ((int64)-((ATTRIB$2 & 8ll) != 0ll) | ((int64)-((ATTRIB$2 & 16ll) != 0ll) & (int64)-((ATTRIB$2 & 4ll) != 0ll))) == 0ll ) goto label$380;
					{
						ERRREPORT( 135ll, 0ll, (uint8*)0ull );
						DIMENSIONS$1 = -1ll;
						HAVE_BOUNDS$1 = 0ll;
					}
					label$380:;
					label$379:;
				}
				goto label$377;
				label$378:;
				{
					ATTRIB$2 = ATTRIB$2 | 4ll;
				}
				label$377:;
			}
			label$375:;
			int64 vr$62 = LEXGETTOKEN( 0ll );
			if( vr$62 == 41ll ) goto label$382;
			{
				ERRREPORT( 7ll, 0ll, (uint8*)0ull );
			}
			goto label$381;
			label$382:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$381:;
		}
		goto label$373;
		label$374:;
		if( TOKEN$1 != 310ll ) goto label$383;
		{
			ERRREPORTEX( 62ll, (uint8*)ID$1, 0ll, 1ll, (uint8*)0ull );
			DIMENSIONS$1 = -1ll;
		}
		goto label$373;
		label$383:;
		{
			ATTRIB$2 = ATTRIB$2 & -5ll;
		}
		label$373:;
		IS_REDIM$1 = IS_REDIM$1 & HAVE_BOUNDS$1;
		PALIAS$1 = (uint8*)0ull;
		if( (ATTRIB$2 & 48ll) == 0ll ) goto label$385;
		{
			uint8* vr$69 = CALIASATTRIBUTE(  );
			PALIAS$1 = vr$69;
		}
		label$385:;
		label$384:;
		if( IS_MULTDECL$1 != 0ll ) goto label$387;
		{
			int64 vr$71 = LEXGETTOKEN( 0ll );
			if( vr$71 != 375ll ) goto label$389;
			{
				if( DTYPE$1 == 2147483648ll ) goto label$391;
				{
					ERRREPORT( 17ll, 0ll, (uint8*)0ull );
					DTYPE$1 = 2147483648ll;
				}
				label$391:;
				label$390:;
				LEXSKIPTOKEN( 0ll );
				HSYMBOLTYPE( &DTYPE$1, &SUBTYPE$1, &LGT$1 );
				HCOMPLAINIFABSTRACTCLASS( DTYPE$1, SUBTYPE$1 );
				ADDSUFFIX$1 = 0ll;
			}
			goto label$388;
			label$389:;
			if( DTYPE$1 != 2147483648ll ) goto label$392;
			{
				if( (*(int64*)((uint8*)&ENV$ + 1152ll) & 4194304ll) == 0ll ) goto label$394;
				{
					int64 vr$80 = SYMBGETDEFTYPE( (uint8*)ID$1 );
					DTYPE$1 = vr$80;
					SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
					int64 vr$81 = SYMBCALCLEN( DTYPE$1, SUBTYPE$1 );
					LGT$1 = vr$81;
				}
				label$394:;
				label$393:;
				if( IS_REDIM$1 == 0ll ) goto label$396;
				{
					IS_TYPELESS$1 = -1ll;
				}
				goto label$395;
				label$396:;
				{
					if( DTYPE$1 != 2147483648ll ) goto label$398;
					{
						HERRORDEFTYPENOTALLOWED( &DTYPE$1, &SUBTYPE$1, &LGT$1 );
					}
					label$398:;
					label$397:;
				}
				label$395:;
			}
			label$392:;
			label$388:;
		}
		label$387:;
		label$386:;
		if( VAREXPR$1 == (struct $7ASTNODE*)0ull ) goto label$400;
		{
			SYM$1 = *(struct $8FBSYMBOL**)((uint8*)VAREXPR$1 + 24ll);
		}
		goto label$399;
		label$400:;
		{
			struct $8FBSYMBOL* vr$90 = HLOOKUPVARANDCHECKPARENT( PARENT$1, CHAIN_$1, DTYPE$1, IS_TYPELESS$1, (int64)-(SUFFIX$1 != 2147483648ll), IS_REDIM$1 );
			SYM$1 = vr$90;
			if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$402;
			{
				if( *(int64*)SYM$1 != 12ll ) goto label$404;
				{
					struct $7ASTNODE* vr$94 = HMAYBEBUILDFIELDACCESS( SYM$1, IS_REDIM$1 );
					VAREXPR$1 = vr$94;
					if( VAREXPR$1 == (struct $7ASTNODE*)0ull ) goto label$406;
					{
						struct $7ASTNODE* vr$96 = ASTNEWNIDXARRAY( VAREXPR$1 );
						struct $7ASTNODE* vr$97 = HCHECKDYNAMICARRAYEXPR( vr$96 );
						VAREXPR$1 = vr$97;
					}
					goto label$405;
					label$406:;
					{
						SYM$1 = (struct $8FBSYMBOL*)0ull;
					}
					label$405:;
				}
				label$404:;
				label$403:;
			}
			label$402:;
			label$401:;
		}
		label$399:;
		if( IS_TYPELESS$1 == 0ll ) goto label$408;
		{
			if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$410;
			{
				DTYPE$1 = *(int64*)((uint8*)SYM$1 + 48ll) & 511ll;
				SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll);
				LGT$1 = *(int64*)((uint8*)SYM$1 + 72ll);
			}
			goto label$409;
			label$410:;
			if( (*(int64*)((uint8*)&ENV$ + 1152ll) & 4194304ll) == 0ll ) goto label$411;
			{
			}
			goto label$409;
			label$411:;
			{
				HERRORDEFTYPENOTALLOWED( &DTYPE$1, &SUBTYPE$1, &LGT$1 );
			}
			label$409:;
		}
		label$408:;
		label$407:;
		if( HAVE_BOUNDS$1 == 0ll ) goto label$413;
		{
			if( TOKEN$1 != 308ll ) goto label$415;
			{
				if( (ATTRIB$2 & 4ll) != 0ll ) goto label$417;
				{
					if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$419;
					{
						if( (*(int64*)((uint8*)SYM$1 + 8ll) & 8ll) == 0ll ) goto label$421;
						{
							if( *(int64*)((uint8*)SYM$1 + 96ll) == 0ll ) goto label$423;
							{
								ATTRIB$2 = ATTRIB$2 | 4ll;
								IS_REDIM$1 = -1ll;
							}
							label$423:;
							label$422:;
						}
						label$421:;
						label$420:;
					}
					label$419:;
					label$418:;
				}
				label$417:;
				label$416:;
			}
			label$415:;
			label$414:;
			HMAYBECONVERTEXPRTB2DIMTB( &ATTRIB$2, DIMENSIONS$1, (struct $7FBARRAYIP7ASTNODEE*)&tmp$100$1, (struct $7FBARRAYI10FBARRAYDIME*)&tmp$101$1 );
			if( (ATTRIB$2 & 4ll) == 0ll ) goto label$425;
			{
				HCOMPLAINABOUTELLIPSIS( DIMENSIONS$1, (struct $7FBARRAYIP7ASTNODEE*)&tmp$100$1, 75ll );
			}
			goto label$424;
			label$425:;
			{
				int64 vr$125 = SYMBCHECKARRAYSIZE( DIMENSIONS$1, (struct $10FBARRAYDIM*)DTB$1, LGT$1, (int64)-((ATTRIB$2 & 3ll) == 0ll) );
				if( vr$125 != 0ll ) goto label$427;
				{
					ERRREPORT( 49ll, 0ll, (uint8*)0ull );
					DIMENSIONS$1 = 1ll;
					*(int64*)DTB$1 = 0ll;
					*(int64*)((uint8*)DTB$1 + 8ll) = 0ll;
				}
				label$427:;
				label$426:;
			}
			label$424:;
		}
		goto label$412;
		label$413:;
		if( DIMENSIONS$1 != 0ll ) goto label$428;
		{
			if( ((int64)-((ATTRIB$2 & 3ll) == 0ll) & (int64)-(LGT$1 > *(int64*)((uint8*)&ENV$ + 408ll))) == 0ll ) goto label$430;
			{
				ERRREPORTWARN( 24ll, (uint8*)0ull, 1ll );
			}
			label$430:;
			label$429:;
		}
		label$428:;
		label$412:;
		if( (ATTRIB$2 & 8ll) == 0ll ) goto label$432;
		{
			int64 vr$135 = TYPEHASCTOR( DTYPE$1, SUBTYPE$1 );
			int64 vr$136 = TYPEHASDTOR( DTYPE$1, SUBTYPE$1 );
			if( (vr$135 | vr$136) == 0ll ) goto label$434;
			{
				ERRREPORT( 269ll, -1ll, (uint8*)0ull );
			}
			label$434:;
			label$433:;
		}
		label$432:;
		label$431:;
		if( (ATTRIB$2 & 4ll) == 0ll ) goto label$436;
		{
			if( (HAVE_BOUNDS$1 & (int64)-(TOKEN$1 != 310ll)) == 0ll ) goto label$438;
			{
				int64 vr$144 = CCOMPSTMTISALLOWED( 1ll );
				if( vr$144 != 0ll ) goto label$440;
				{
					HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
					goto label$341;
				}
				label$440:;
				label$439:;
			}
			label$438:;
			label$437:;
			if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$442;
			{
				HCOMPLAINABOUTCONSTDYNAMICARRAY( SYM$1 );
			}
			label$442:;
			label$441:;
		}
		label$436:;
		label$435:;
		struct $8FBSYMBOL* vr$153 = HADDVAR( SYM$1, PARENT$1, (uint8*)ID$1, PALIAS$1, &DTYPE$1, &SUBTYPE$1, &LGT$1, ADDSUFFIX$1, &ATTRIB$2, &DIMENSIONS$1, &HAVE_BOUNDS$1, (struct $7FBARRAYI10FBARRAYDIME*)&tmp$101$1, TOKEN$1 );
		SYM$1 = vr$153;
		int64 HAS_DEFCTOR$2;
		HAS_DEFCTOR$2 = 0ll;
		int64 HAS_DTOR$2;
		HAS_DTOR$2 = 0ll;
		if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$444;
		{
			int64 TMP$104$3;
			if( *(int64*)SYM$1 != 12ll ) goto label$445;
			TMP$104$3 = -1ll;
			goto label$489;
			label$445:;
			TMP$104$3 = (int64)-((*(int64*)((uint8*)SYM$1 + 16ll) & 8ll) != 0ll);
			label$489:;
			IS_DECLARED$1 = TMP$104$3;
			int64 vr$160 = SYMBHASDEFCTOR( SYM$1 );
			HAS_DEFCTOR$2 = vr$160;
			int64 vr$161 = SYMBHASDTOR( SYM$1 );
			HAS_DTOR$2 = vr$161;
		}
		goto label$443;
		label$444:;
		{
			IS_DECLARED$1 = 0ll;
		}
		label$443:;
		if( IS_FORDECL$1 != 0ll ) goto label$447;
		{
			ASSIGN_INITREE$1 = (struct $7ASTNODE*)0ull;
			int64 vr$163 = LEXGETTOKEN( 0ll );
			int64 vr$164 = HISASSIGNTOKEN( vr$163 );
			if( vr$164 == 0ll ) goto label$449;
			{
				struct $7ASTNODE* vr$166 = HVARINIT( SYM$1, IS_DECLARED$1 );
				INITREE$1 = vr$166;
				if( ((int64)-(INITREE$1 != (struct $7ASTNODE*)0ull) & (int64)-((int64)-((*(int64*)((uint8*)&ENV$ + 1152ll) & 2ll) != 0ll) == 0ll)) == 0ll ) goto label$451;
				{
					if( (*(int64*)((uint8*)SYM$1 + 8ll) & 11ll) != 0ll ) goto label$453;
					{
						ASSIGN_INITREE$1 = INITREE$1;
						struct $7ASTNODE* vr$176 = HVARINITDEFAULT( SYM$1, IS_DECLARED$1, HAS_DEFCTOR$2 );
						INITREE$1 = vr$176;
					}
					label$453:;
					label$452:;
				}
				label$451:;
				label$450:;
			}
			goto label$448;
			label$449:;
			{
				if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$455;
				{
					int64 vr$178 = SYMBARRAYHASUNKNOWNBOUNDS( SYM$1 );
					if( vr$178 == 0ll ) goto label$457;
					{
						ERRREPORT( 280ll, 0ll, (uint8*)0ull );
						HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
						goto label$341;
					}
					label$457:;
					label$456:;
				}
				label$455:;
				label$454:;
				struct $7ASTNODE* vr$180 = HVARINITDEFAULT( SYM$1, IS_DECLARED$1, HAS_DEFCTOR$2 );
				INITREE$1 = vr$180;
			}
			label$448:;
		}
		goto label$446;
		label$447:;
		{
			INITREE$1 = (struct $7ASTNODE*)0ull;
			ASSIGN_INITREE$1 = (struct $7ASTNODE*)0ull;
		}
		label$446:;
		if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$459;
		{
			if( TOKEN$1 == 306ll ) goto label$461;
			{
				if( IS_DECLARED$1 != 0ll ) goto label$463;
				{
					struct $8FBSYMBOL* DESC$5;
					DESC$5 = (struct $8FBSYMBOL*)0ull;
					struct $7ASTNODE* VAR_DECL$5;
					VAR_DECL$5 = (struct $7ASTNODE*)0ull;
					struct $7ASTNODE* vr$187 = ASTNEWDECL( SYM$1, (int64)-(INITREE$1 == (struct $7ASTNODE*)0ull) & ~IS_FORDECL$1 );
					VAR_DECL$5 = vr$187;
					DESC$5 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 128ll);
					if( DESC$5 == (struct $8FBSYMBOL*)0ull ) goto label$465;
					{
						struct $7ASTNODE* vr$192 = ASTNEWDECL( DESC$5, (int64)-(*(struct $7ASTNODE**)((uint8*)DESC$5 + 88ll) == (struct $7ASTNODE*)0ull) );
						struct $7ASTNODE* vr$193 = ASTNEWLINK( VAR_DECL$5, vr$192, -1ll );
						VAR_DECL$5 = vr$193;
					}
					label$465:;
					label$464:;
					if( ((int64)-((ATTRIB$2 & 4ll) != 0ll) | (int64)-(DIMENSIONS$1 > 0ll)) == 0ll ) goto label$467;
					{
						if( (*(int64*)((uint8*)SYM$1 + 8ll) & 11ll) != 0ll ) goto label$469;
						{
							struct $7ASTNODE* vr$202 = HFLUSHDECL( VAR_DECL$5 );
							VAR_DECL$5 = vr$202;
							if( DESC$5 == (struct $8FBSYMBOL*)0ull ) goto label$471;
							{
								struct $7ASTNODE* vr$205 = _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEll( DESC$5, *(struct $7ASTNODE**)((uint8*)DESC$5 + 88ll), 0ll, 64ll );
								struct $7ASTNODE* vr$206 = ASTNEWLINK( VAR_DECL$5, vr$205, -1ll );
								VAR_DECL$5 = vr$206;
								*(struct $7ASTNODE**)((uint8*)DESC$5 + 88ll) = (struct $7ASTNODE*)0ull;
							}
							label$471:;
							label$470:;
						}
						label$469:;
						label$468:;
					}
					label$467:;
					label$466:;
					*($12FB_SYMBSTATS*)((uint8*)SYM$1 + 16ll) = *(int64*)((uint8*)SYM$1 + 16ll) | 8ll;
					if( (*(int64*)((uint8*)&ENV$ + 1152ll) & 2ll) == 0ll ) goto label$473;
					{
						struct $7ASTNODE* vr$213 = HFLUSHINITIALIZER( SYM$1, VAR_DECL$5, INITREE$1, HAS_DTOR$2 );
						ASTADD( vr$213 );
					}
					goto label$472;
					label$473:;
					{
						struct $7ASTNODE* vr$214 = HFLUSHINITIALIZER( SYM$1, VAR_DECL$5, INITREE$1, HAS_DTOR$2 );
						ASTADDUNSCOPED( vr$214 );
						if( ASSIGN_INITREE$1 == (struct $7ASTNODE*)0ull ) goto label$475;
						{
							struct $7ASTNODE* ASSIGN_VARDECL$7;
							int64 vr$216 = SYMBGETVARHASDTOR( SYM$1 );
							if( vr$216 == 0ll ) goto label$477;
							{
								struct $7ASTNODE* vr$218 = _Z19ASTBUILDVARDTORCALLP8FBSYMBOLl( SYM$1, -1ll );
								ASTADD( vr$218 );
							}
							label$477:;
							label$476:;
							struct $7ASTNODE* vr$219 = _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEll( SYM$1, ASSIGN_INITREE$1, 0ll, 64ll );
							ASTADD( vr$219 );
						}
						label$475:;
						label$474:;
					}
					label$472:;
				}
				label$463:;
				label$462:;
				if( ((int64)-((ATTRIB$2 & 4ll) != 0ll) & HAVE_BOUNDS$1) == 0ll ) goto label$479;
				{
					if( VAREXPR$1 != (struct $7ASTNODE*)0ull ) goto label$481;
					{
						struct $7ASTNODE* vr$225 = ASTNEWVAR( SYM$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
						VAREXPR$1 = vr$225;
					}
					label$481:;
					label$480:;
					struct $7ASTNODE* vr$230 = RTLARRAYREDIM( VAREXPR$1, DIMENSIONS$1, (struct $7FBARRAYIP7ASTNODEE*)&tmp$100$1, DOPRESERVE$1, ~(int64)-((*(int64*)((uint8*)SYM$1 + 16ll) & 2048ll) != 0ll) );
					REDIMCALL$1 = vr$230;
					if( ((((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 2ll) != 0ll) & (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 128ll) != 0ll)) & (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 9ll) == 0ll)) & ~IS_DECLARED$1) == 0ll ) goto label$483;
					{
						struct $7ASTNODE* vr$245 = HWRAPINSTATICFLAG( REDIMCALL$1 );
						REDIMCALL$1 = vr$245;
					}
					label$483:;
					label$482:;
					ASTADD( REDIMCALL$1 );
					REDIMCALL$1 = (struct $7ASTNODE*)0ull;
				}
				label$479:;
				label$478:;
			}
			label$461:;
			label$460:;
		}
		label$459:;
		label$458:;
		if( IS_FORDECL$1 == 0ll ) goto label$485;
		{
			fb$result$1 = SYM$1;
			goto label$341;
		}
		label$485:;
		label$484:;
		int64 vr$247 = LEXGETTOKEN( 0ll );
		if( vr$247 == 44ll ) goto label$487;
		{
			goto label$349;
		}
		label$487:;
		label$486:;
		LEXSKIPTOKEN( 0ll );
	}
	label$350:;
	goto label$348;
	label$349:;
	label$341:;
	return fb$result$1;
}

void CARRAYDECL( int64* DIMENSIONS$1, int64* HAVE_BOUNDS$1, struct $7FBARRAYIP7ASTNODEE* EXPRTB$1 )
{
	label$525:;
	*DIMENSIONS$1 = 0ll;
	*HAVE_BOUNDS$1 = -1ll;
	label$527:;
	{
		if( *DIMENSIONS$1 < 8ll ) goto label$531;
		{
			ERRREPORT( 48ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( 41ll, 0ll, 0ll, 0ll );
			goto label$528;
		}
		label$531:;
		label$530:;
		int64 vr$4 = LEXGETTOKEN( 0ll );
		if( ((int64)-(vr$4 == 371ll) & ((int64)-(*DIMENSIONS$1 == 0ll) | (int64)-(*HAVE_BOUNDS$1 == 0ll))) == 0ll ) goto label$533;
		{
			*HAVE_BOUNDS$1 = 0ll;
			LEXSKIPTOKEN( 0ll );
		}
		goto label$532;
		label$533:;
		if( *HAVE_BOUNDS$1 != 0ll ) goto label$534;
		{
			ERRREPORT( 93ll, 0ll, (uint8*)0ull );
		}
		goto label$532;
		label$534:;
		{
			CARRAYDIMENSION( DIMENSIONS$1, (struct $7FBARRAYIP7ASTNODEE*)EXPRTB$1 );
		}
		label$532:;
		*DIMENSIONS$1 = *DIMENSIONS$1 + 1ll;
	}
	label$529:;
	int64 vr$19 = HMATCH( 44ll );
	if( vr$19 != 0ll ) goto label$527;
	label$528:;
	label$526:;
}

__attribute__(( constructor )) static void fb_ctor__parserzdeclzvar( void )
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

static int64 HEXPRTBISCONST( int64 DIMENSIONS$1, struct $7FBARRAYIP7ASTNODEE* EXPRTB$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$84:;
	{
		int64 I$2;
		I$2 = 0ll;
		int64 TMP$91$2;
		TMP$91$2 = DIMENSIONS$1 + -1ll;
		goto label$86;
		label$89:;
		{
			if( (int64)-(*(int64*)*(struct $7ASTNODE**)(((I$2 * *(int64*)((uint8*)EXPRTB$1 + 64ll)) << 3ll) + *(int64*)EXPRTB$1) == 16ll) != 0ll ) goto label$91;
			{
				fb$result$1 = 0ll;
				goto label$85;
			}
			goto label$90;
			label$91:;
			if( *(struct $7ASTNODE**)((uint8*)(((I$2 * *(int64*)((uint8*)EXPRTB$1 + 64ll)) << 3ll) + *(int64*)EXPRTB$1) + 8ll) != (struct $7ASTNODE*)0ull ) goto label$92;
			{
			}
			goto label$90;
			label$92:;
			if( (int64)-(*(int64*)*(struct $7ASTNODE**)((uint8*)(((I$2 * *(int64*)((uint8*)EXPRTB$1 + 64ll)) << 3ll) + *(int64*)EXPRTB$1) + 8ll) == 16ll) != 0ll ) goto label$93;
			{
				fb$result$1 = 0ll;
				goto label$85;
			}
			label$93:;
			label$90:;
		}
		label$87:;
		I$2 = I$2 + 1ll;
		label$86:;
		if( I$2 <= TMP$91$2 ) goto label$89;
		label$88:;
	}
	fb$result$1 = -1ll;
	label$85:;
	return fb$result$1;
}

static int64 HCHECKEXTERNVAR( struct $8FBSYMBOL* SYM$1, uint8* ID$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, int64* ATTRIB$1, int64 DIMENSIONS$1, struct $7FBARRAYI10FBARRAYDIME* DTB$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$94:;
	if( ((int64)-(DTYPE$1 != *(int64*)((uint8*)SYM$1 + 48ll)) | (int64)-(SUBTYPE$1 != *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll))) == 0ll ) goto label$97;
	{
		ERRREPORTEX( 20ll, ID$1, 0ll, 1ll, (uint8*)0ull );
		goto label$95;
	}
	label$97:;
	label$96:;
	if( (*ATTRIB$1 & 4ll) == (*(int64*)((uint8*)SYM$1 + 8ll) & 4ll) ) goto label$99;
	{
		ERRREPORTEX( 53ll, ID$1, 0ll, 1ll, (uint8*)0ull );
		goto label$95;
	}
	label$99:;
	label$98:;
	if( ((int64)-(DIMENSIONS$1 == -1ll) | (int64)-(*(int64*)((uint8*)SYM$1 + 96ll) == -1ll)) == 0ll ) goto label$101;
	{
		if( (int64)-(DIMENSIONS$1 != 0ll) == (int64)-(*(int64*)((uint8*)SYM$1 + 96ll) != 0ll) ) goto label$103;
		{
			ERRREPORTEX( 36ll, ID$1, 0ll, 1ll, (uint8*)0ull );
			goto label$95;
		}
		label$103:;
		label$102:;
		fb$result$1 = -1ll;
		goto label$95;
	}
	label$101:;
	label$100:;
	if( DIMENSIONS$1 == *(int64*)((uint8*)SYM$1 + 96ll) ) goto label$105;
	{
		ERRREPORTEX( 36ll, ID$1, 0ll, 1ll, (uint8*)0ull );
		goto label$95;
	}
	label$105:;
	label$104:;
	if( (*ATTRIB$1 & 4ll) != 0ll ) goto label$107;
	{
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$92$3;
			TMP$92$3 = DIMENSIONS$1 + -1ll;
			goto label$108;
			label$111:;
			{
				if( ((int64)-(*(int64*)((uint8*)*(struct $10FBARRAYDIM**)((uint8*)SYM$1 + 104ll) + (I$3 << 4ll)) != *(int64*)((I$3 << 4ll) + *(*(int64**)&DTB$1))) | ((int64)-(*(int64*)((uint8*)((uint8*)*(struct $10FBARRAYDIM**)((uint8*)SYM$1 + 104ll) + (I$3 << 4ll)) + 8ll) != *(int64*)((uint8*)((I$3 << 4ll) + *(*(int64**)&DTB$1)) + 8ll)) & (int64)-(*(int64*)((uint8*)((I$3 << 4ll) + *(*(int64**)&DTB$1)) + 8ll) != -9223372036854775808ull))) == 0ll ) goto label$113;
				{
					ERRREPORTEX( 37ll, ID$1, 0ll, 1ll, (uint8*)0ull );
				}
				label$113:;
				label$112:;
			}
			label$109:;
			I$3 = I$3 + 1ll;
			label$108:;
			if( I$3 <= TMP$92$3 ) goto label$111;
			label$110:;
		}
	}
	label$107:;
	label$106:;
	fb$result$1 = -1ll;
	label$95:;
	return fb$result$1;
}

static void HCHECKEXTERNVARANDRECOVER( struct $8FBSYMBOL* SYM$1, uint8* ID$1, int64* DTYPE$1, struct $8FBSYMBOL** SUBTYPE$1, int64* LGT$1, int64* ATTRIB$1, int64* DIMENSIONS$1, int64* HAVE_BOUNDS$1, struct $7FBARRAYI10FBARRAYDIME* DTB$1 )
{
	label$114:;
	int64 vr$3 = HCHECKEXTERNVAR( SYM$1, ID$1, *DTYPE$1, *SUBTYPE$1, ATTRIB$1, *DIMENSIONS$1, *(struct $7FBARRAYI10FBARRAYDIME**)&DTB$1 );
	if( vr$3 != 0ll ) goto label$117;
	{
		*DTYPE$1 = *(int64*)((uint8*)SYM$1 + 48ll);
		*SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll);
		*LGT$1 = *(int64*)((uint8*)SYM$1 + 72ll);
		*ATTRIB$1 = (*ATTRIB$1 & -5ll) | (*(int64*)((uint8*)SYM$1 + 8ll) & 4ll);
		*DIMENSIONS$1 = *(int64*)((uint8*)SYM$1 + 96ll);
		if( (*ATTRIB$1 & 4ll) == 0ll ) goto label$119;
		{
			*HAVE_BOUNDS$1 = 0ll;
		}
		goto label$118;
		label$119:;
		if( *DIMENSIONS$1 <= 0ll ) goto label$120;
		{
			*HAVE_BOUNDS$1 = -1ll;
			{
				int64 I$4;
				I$4 = 0ll;
				int64 TMP$93$4;
				TMP$93$4 = *DIMENSIONS$1 + -1ll;
				goto label$121;
				label$124:;
				{
					*(int64*)((I$4 << 4ll) + *(*(int64**)&DTB$1)) = *(int64*)((uint8*)*(struct $10FBARRAYDIM**)((uint8*)SYM$1 + 104ll) + (I$4 << 4ll));
					*(int64*)((uint8*)((I$4 << 4ll) + *(*(int64**)&DTB$1)) + 8ll) = *(int64*)((uint8*)((uint8*)*(struct $10FBARRAYDIM**)((uint8*)SYM$1 + 104ll) + (I$4 << 4ll)) + 8ll);
				}
				label$122:;
				I$4 = I$4 + 1ll;
				label$121:;
				if( I$4 <= TMP$93$4 ) goto label$124;
				label$123:;
			}
		}
		label$120:;
		label$118:;
	}
	label$117:;
	label$116:;
	label$115:;
}

static struct $8FBSYMBOL* HADDVAR( struct $8FBSYMBOL* SYM$1, struct $8FBSYMBOL* PARENT$1, uint8* ID$1, uint8* IDALIAS$1, int64* DTYPE$1, struct $8FBSYMBOL** SUBTYPE$1, int64* LGT$1, int64 ADDSUFFIX$1, int64* ATTRIB$1, int64* DIMENSIONS$1, int64* HAVE_BOUNDS$1, struct $7FBARRAYI10FBARRAYDIME* DTB$1, int64 TOKEN$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$125:;
	int64 IS_DECLARED$1;
	if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$128;
	{
		if( (((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 16ll) != 0ll) & (int64)-((*ATTRIB$1 & 16ll) == 0ll)) & (int64)-(*(uint64*)((uint8*)&PARSER$ + 184ll) == 0ull)) == 0ll ) goto label$130;
		{
			HCHECKEXTERNVARANDRECOVER( SYM$1, ID$1, DTYPE$1, SUBTYPE$1, LGT$1, ATTRIB$1, DIMENSIONS$1, HAVE_BOUNDS$1, *(struct $7FBARRAYI10FBARRAYDIME**)&DTB$1 );
			*($13FB_SYMBATTRIB*)((uint8*)SYM$1 + 8ll) = *(int64*)((uint8*)SYM$1 + 8ll) & -17ll;
			*($13FB_SYMBATTRIB*)((uint8*)SYM$1 + 8ll) = *(int64*)((uint8*)SYM$1 + 8ll) | 33ll;
			if( *DIMENSIONS$1 == 0ll ) goto label$132;
			{
				struct $8FBSYMBOL* DESC$4;
				DESC$4 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 128ll);
				*($13FB_SYMBATTRIB*)((uint8*)DESC$4 + 8ll) = *(int64*)((uint8*)DESC$4 + 8ll) & -17ll;
				*($13FB_SYMBATTRIB*)((uint8*)DESC$4 + 8ll) = *(int64*)((uint8*)DESC$4 + 8ll) | 1ll;
				if( (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 4ll) != 0ll) != 0ll ) goto label$134;
				{
					*($13FB_SYMBATTRIB*)((uint8*)DESC$4 + 8ll) = *(int64*)((uint8*)DESC$4 + 8ll) & -33ll;
				}
				goto label$133;
				label$134:;
				{
					*($13FB_SYMBATTRIB*)((uint8*)DESC$4 + 8ll) = *(int64*)((uint8*)DESC$4 + 8ll) | 32ll;
				}
				label$133:;
				struct $7ASTNODE* vr$37 = ASTBUILDARRAYDESCINITREE( DESC$4, SYM$1, (struct $7ASTNODE*)0ull );
				*(struct $7ASTNODE**)((uint8*)DESC$4 + 88ll) = vr$37;
			}
			label$132:;
			label$131:;
			IS_DECLARED$1 = -1ll;
		}
		goto label$129;
		label$130:;
		if( ((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 16ll) != 0ll) & (int64)-((*ATTRIB$1 & 16ll) != 0ll)) == 0ll ) goto label$135;
		{
			HCHECKEXTERNVARANDRECOVER( SYM$1, ID$1, DTYPE$1, SUBTYPE$1, LGT$1, ATTRIB$1, DIMENSIONS$1, HAVE_BOUNDS$1, *(struct $7FBARRAYI10FBARRAYDIME**)&DTB$1 );
			IS_DECLARED$1 = -1ll;
		}
		goto label$129;
		label$135:;
		if( ((((int64)-((*ATTRIB$1 & 4ll) != 0ll) & *HAVE_BOUNDS$1) & (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 65540ll) != 0ll)) & ((int64)-(TOKEN$1 == 310ll) | (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 8ll) != 0ll))) == 0ll ) goto label$136;
		{
			IS_DECLARED$1 = -1ll;
		}
		goto label$129;
		label$136:;
		{
			IS_DECLARED$1 = 0ll;
		}
		label$129:;
	}
	goto label$127;
	label$128:;
	{
		IS_DECLARED$1 = 0ll;
	}
	label$127:;
	if( IS_DECLARED$1 == 0ll ) goto label$138;
	{
		if( (*(int64*)((uint8*)SYM$1 + 8ll) & 4ll) == 0ll ) goto label$140;
		{
			SYMBCHECKDYNAMICARRAYDIMENSIONS( SYM$1, *DIMENSIONS$1 );
		}
		label$140:;
		label$139:;
	}
	goto label$137;
	label$138:;
	{
		int64 TMP$94$2;
		if( PARENT$1 == (struct $8FBSYMBOL*)0ull ) goto label$142;
		{
			ERRREPORTEX( 4ll, ID$1, 0ll, 1ll, (uint8*)0ull );
		}
		label$142:;
		label$141:;
		if( ADDSUFFIX$1 == 0ll ) goto label$144;
		{
			*ATTRIB$1 = *ATTRIB$1 | 268435456ll;
		}
		label$144:;
		label$143:;
		if( (*(int64*)((uint8*)&ENV$ + 1152ll) & 2ll) == 0ll ) goto label$145;
		TMP$94$2 = 0ll;
		goto label$585;
		label$145:;
		TMP$94$2 = 2ll;
		label$585:;
		struct $8FBSYMBOL* vr$80 = SYMBADDVAR( ID$1, IDALIAS$1, *DTYPE$1, *SUBTYPE$1, *LGT$1, *DIMENSIONS$1, *(struct $7FBARRAYI10FBARRAYDIME**)&DTB$1, *ATTRIB$1, TMP$94$2 );
		SYM$1 = vr$80;
	}
	label$137:;
	if( SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$147;
	{
		ERRREPORTEX( 4ll, ID$1, 0ll, 1ll, (uint8*)0ull );
	}
	label$147:;
	label$146:;
	fb$result$1 = SYM$1;
	label$126:;
	return fb$result$1;
}

static int64 HCHECKFORIDTOKEN( struct $8FBSYMBOL* PARENT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$148:;
	fb$result$1 = 0ll;
	{
		uint64 TMP$95$2;
		int64 vr$1 = LEXGETCLASS( 0ll );
		TMP$95$2 = (uint64)vr$1;
		goto label$151;
		label$152:;
		{
			if( (*(int64*)((uint8*)&ENV$ + 1152ll) & 524288ll) == 0ll ) goto label$154;
			{
				if( (int64)-(*(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll) == (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll)) != 0ll ) goto label$156;
				{
					if( *(int64*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 4144ll) <= 0ll ) goto label$158;
					{
						fb$result$1 = 89ll;
					}
					label$158:;
					label$157:;
				}
				label$156:;
				label$155:;
			}
			label$154:;
			label$153:;
		}
		goto label$150;
		label$159:;
		{
			if( *(int64*)((uint8*)&ENV$ + 272ll) == 3ll ) goto label$161;
			{
				if( ((int64)-(PARENT$1 == (struct $8FBSYMBOL*)0ull) | (int64)-(*(uint64*)((uint8*)&PARSER$ + 184ll) > 0ull)) == 0ll ) goto label$163;
				{
					fb$result$1 = 4ll;
				}
				label$163:;
				label$162:;
			}
			label$161:;
			label$160:;
		}
		goto label$150;
		label$164:;
		{
			if( *(int64*)((uint8*)&ENV$ + 272ll) == 3ll ) goto label$166;
			{
				fb$result$1 = 4ll;
			}
			goto label$165;
			label$166:;
			{
				if( *(int64*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 16ll) != 2147483648ll ) goto label$168;
				{
					fb$result$1 = 4ll;
				}
				label$168:;
				label$167:;
			}
			label$165:;
		}
		goto label$150;
		label$169:;
		{
			fb$result$1 = 14ll;
		}
		goto label$150;
		label$151:;
		static const void* tmp$111[6ll] = {
			&&label$152,
			&&label$164,
			&&label$159,
			&&label$169,
			&&label$169,
			&&label$164,
		};
		if( TMP$95$2 > 5ll ) goto label$169;
		goto *tmp$111[TMP$95$2 - 0ll];
		label$150:;
	}
	label$149:;
	return fb$result$1;
}

static struct $10FBSYMCHAIN* HGETID( struct $8FBSYMBOL* PARENT$1, uint8* ID$1, int64* SUFFIX$1, int64 IS_REDIM$1 )
{
	struct $10FBSYMCHAIN* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$170:;
	int64 ERRMSG$1;
	int64 vr$1 = HCHECKFORIDTOKEN( PARENT$1 );
	ERRMSG$1 = vr$1;
	if( ERRMSG$1 != 0ll ) goto label$173;
	{
		uint8* vr$3 = LEXGETTEXT(  );
		fb_StrAssign( (void*)ID$1, 0ll, (void*)vr$3, 0ll, 0 );
		*SUFFIX$1 = *(int64*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 16ll);
		if( *SUFFIX$1 == 2147483648ll ) goto label$175;
		{
			if( (int64)-((*(int64*)((uint8*)&ENV$ + 1152ll) & 8388608ll) != 0ll) != 0ll ) goto label$177;
			{
				ERRREPORTNOTALLOWED( 8388608ll, 147ll, (uint8*)0ull );
			}
			label$177:;
			label$176:;
		}
		label$175:;
		label$174:;
		if( PARENT$1 != (struct $8FBSYMBOL*)0ull ) goto label$179;
		{
			fb$result$1 = *(struct $10FBSYMCHAIN**)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 4136ll);
		}
		goto label$178;
		label$179:;
		{
			uint8* vr$15 = LEXGETTEXT(  );
			struct $10FBSYMCHAIN* vr$16 = SYMBLOOKUPAT( PARENT$1, vr$15, 0ll, IS_REDIM$1 );
			fb$result$1 = vr$16;
		}
		label$178:;
	}
	goto label$172;
	label$173:;
	{
		ERRREPORT( ERRMSG$1, 0ll, (uint8*)0ull );
		uint8* vr$17 = SYMBUNIQUELABEL(  );
		fb_StrAssign( (void*)ID$1, 0ll, (void*)vr$17, 0ll, 0 );
		*SUFFIX$1 = 2147483648ll;
		fb$result$1 = (struct $10FBSYMCHAIN*)0ull;
	}
	label$172:;
	LEXSKIPTOKEN( 0ll );
	label$171:;
	return fb$result$1;
}

static struct $8FBSYMBOL* HLOOKUPVAR( struct $10FBSYMCHAIN* CHAIN_$1, int64 DTYPE$1, int64 IS_TYPELESS$1, int64 HAS_SUFFIX$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$180:;
	struct $8FBSYMBOL* SYM$1;
	if( CHAIN_$1 != (struct $10FBSYMCHAIN*)0ull ) goto label$183;
	{
		goto label$181;
	}
	label$183:;
	label$182:;
	if( IS_TYPELESS$1 == 0ll ) goto label$185;
	{
		if( (*(int64*)((uint8*)&ENV$ + 1152ll) & 4194304ll) == 0ll ) goto label$187;
		{
			struct $8FBSYMBOL* vr$5 = SYMBFINDVARBYDEFTYPE( CHAIN_$1, DTYPE$1 );
			SYM$1 = vr$5;
		}
		goto label$186;
		label$187:;
		{
			struct $8FBSYMBOL* vr$6 = SYMBFINDBYCLASS( CHAIN_$1, 1ll );
			SYM$1 = vr$6;
			if( SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$189;
			{
				struct $8FBSYMBOL* vr$8 = SYMBFINDBYCLASS( CHAIN_$1, 12ll );
				SYM$1 = vr$8;
			}
			label$189:;
			label$188:;
		}
		label$186:;
	}
	goto label$184;
	label$185:;
	if( HAS_SUFFIX$1 == 0ll ) goto label$190;
	{
		struct $8FBSYMBOL* vr$10 = SYMBFINDVARBYSUFFIX( CHAIN_$1, DTYPE$1 );
		SYM$1 = vr$10;
	}
	goto label$184;
	label$190:;
	{
		struct $8FBSYMBOL* vr$11 = SYMBFINDVARBYTYPE( CHAIN_$1, DTYPE$1 );
		SYM$1 = vr$11;
	}
	label$184:;
	fb$result$1 = SYM$1;
	label$181:;
	return fb$result$1;
}

static struct $8FBSYMBOL* HLOOKUPVARANDCHECKPARENT( struct $8FBSYMBOL* PARENT$1, struct $10FBSYMCHAIN* CHAIN_$1, int64 DTYPE$1, int64 IS_TYPELESS$1, int64 HAS_SUFFIX$1, int64 IS_REDIM$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$191:;
	struct $8FBSYMBOL* SYM$1;
	struct $8FBSYMBOL* vr$1 = HLOOKUPVAR( CHAIN_$1, DTYPE$1, IS_TYPELESS$1, HAS_SUFFIX$1 );
	SYM$1 = vr$1;
	if( PARENT$1 == (struct $8FBSYMBOL*)0ull ) goto label$194;
	{
		if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$196;
		{
			if( (((int64)-((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 16ll) != 0ll) == 0ll) | (int64)-(*(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)SYM$1 + 232ll) != PARENT$1)) & ~IS_REDIM$1) == 0ll ) goto label$198;
			{
				ERRREPORT( 157ll, 0ll, (uint8*)0ull );
			}
			label$198:;
			label$197:;
		}
		goto label$195;
		label$196:;
		{
			ERRREPORT( 130ll, -1ll, (uint8*)0ull );
		}
		label$195:;
	}
	goto label$193;
	label$194:;
	{
		if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$200;
		{
			if( ((int64)-(*(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)SYM$1 + 232ll) != *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll)) & ~IS_REDIM$1) == 0ll ) goto label$202;
			{
				SYM$1 = (struct $8FBSYMBOL*)0ull;
			}
			label$202:;
			label$201:;
		}
		label$200:;
		label$199:;
	}
	label$193:;
	fb$result$1 = SYM$1;
	label$192:;
	return fb$result$1;
}

static void HMAKEARRAYDIMTB( int64 DIMENSIONS$1, struct $7FBARRAYIP7ASTNODEE* EXPRTB$1, struct $7FBARRAYI10FBARRAYDIME* DTB$1 )
{
	label$203:;
	{
		int64 I$2;
		I$2 = 0ll;
		int64 TMP$96$2;
		TMP$96$2 = DIMENSIONS$1 + -1ll;
		goto label$205;
		label$208:;
		{
			struct $7ASTNODE* EXPR$3;
			int64 vr$6 = ASTCONSTFLUSHTOINT( *(struct $7ASTNODE**)(((I$2 * *(int64*)((uint8*)EXPRTB$1 + 64ll)) << 3ll) + *(int64*)EXPRTB$1) );
			*(int64*)((I$2 << 4ll) + *(*(int64**)&DTB$1)) = vr$6;
			EXPR$3 = *(struct $7ASTNODE**)((uint8*)(((I$2 * *(int64*)((uint8*)EXPRTB$1 + 64ll)) << 3ll) + *(int64*)EXPRTB$1) + 8ll);
			if( EXPR$3 != (struct $7ASTNODE*)0ull ) goto label$210;
			{
				*(int64*)((uint8*)((I$2 << 4ll) + *(*(int64**)&DTB$1)) + 8ll) = -9223372036854775808ull;
			}
			goto label$209;
			label$210:;
			{
				int64 vr$19 = ASTCONSTFLUSHTOINT( EXPR$3 );
				*(int64*)((uint8*)((I$2 << 4ll) + *(*(int64**)&DTB$1)) + 8ll) = vr$19;
				if( ((int64)-(*(int64*)((uint8*)((I$2 << 4ll) + *(*(int64**)&DTB$1)) + 8ll) < *(int64*)((I$2 << 4ll) + *(*(int64**)&DTB$1))) | (int64)-(*(int64*)((uint8*)((I$2 << 4ll) + *(*(int64**)&DTB$1)) + 8ll) == -9223372036854775808ull)) == 0ll ) goto label$212;
				{
					ERRREPORT( 181ll, 0ll, (uint8*)0ull );
					*(int64*)((I$2 << 4ll) + *(*(int64**)&DTB$1)) = 0ll;
					*(int64*)((uint8*)((I$2 << 4ll) + *(*(int64**)&DTB$1)) + 8ll) = 0ll;
				}
				label$212:;
				label$211:;
			}
			label$209:;
		}
		label$206:;
		I$2 = I$2 + 1ll;
		label$205:;
		if( I$2 <= TMP$96$2 ) goto label$208;
		label$207:;
	}
	label$204:;
}

static struct $7ASTNODE* HVARINITDEFAULT( struct $8FBSYMBOL* SYM$1, int64 IS_DECLARED$1, int64 HAS_DEFCTOR$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$227:;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	if( SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$230;
	{
		goto label$228;
	}
	label$230:;
	label$229:;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 16ll) == 0ll ) goto label$232;
	{
		goto label$228;
	}
	label$232:;
	label$231:;
	if( (*(int64*)((uint8*)SYM$1 + 48ll) & 512ll) == 0ll ) goto label$234;
	{
		ERRREPORT( 236ll, 0ll, (uint8*)0ull );
		struct $7ASTNODE* vr$8 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		fb$result$1 = vr$8;
		goto label$228;
	}
	label$234:;
	label$233:;
	if( HAS_DEFCTOR$1 == 0ll ) goto label$236;
	{
		if( (~IS_DECLARED$1 & (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 12ll) == 0ll)) == 0ll ) goto label$238;
		{
			struct $8FBSYMBOL* vr$17 = SYMBGETCOMPDEFCTOR( *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll) );
			int64 vr$18 = SYMBCHECKACCESS( vr$17 );
			if( vr$18 != 0ll ) goto label$240;
			{
				ERRREPORT( 203ll, 0ll, (uint8*)0ull );
			}
			label$240:;
			label$239:;
			struct $7ASTNODE* vr$20 = ASTBUILDTYPEINICTORLIST( SYM$1 );
			fb$result$1 = vr$20;
		}
		label$238:;
		label$237:;
	}
	goto label$235;
	label$236:;
	{
		int64 vr$21 = SYMBHASCTOR( SYM$1 );
		if( vr$21 == 0ll ) goto label$242;
		{
			ERRREPORT( 182ll, 0ll, (uint8*)0ull );
		}
		label$242:;
		label$241:;
	}
	label$235:;
	label$228:;
	return fb$result$1;
}

static struct $7ASTNODE* HVARINIT( struct $8FBSYMBOL* SYM$1, int64 ISDECL$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$243:;
	int64 ATTRIB$1;
	int64 IGNOREATTRIBS$1;
	struct $7ASTNODE* INITREE$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$246;
	{
		ATTRIB$1 = *(int64*)((uint8*)SYM$1 + 8ll);
	}
	goto label$245;
	label$246:;
	{
		ATTRIB$1 = 0ll;
	}
	label$245:;
	if( (ISDECL$1 | (int64)-((ATTRIB$1 & 24ll) != 0ll)) == 0ll ) goto label$248;
	{
		ERRREPORT( 134ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( 257ll, 0ll, 0ll, 0ll );
		goto label$244;
	}
	label$248:;
	label$247:;
	if( (int64)-((*(int64*)((uint8*)&ENV$ + 1152ll) & 128ll) != 0ll) != 0ll ) goto label$250;
	{
		ERRREPORTNOTALLOWED( 128ll, 145ll, (uint8*)0ull );
		HSKIPUNTIL( 257ll, 0ll, 0ll, 0ll );
		goto label$244;
	}
	label$250:;
	label$249:;
	LEXSKIPTOKEN( 0ll );
	if( SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$252;
	{
		HSKIPUNTIL( 44ll, 0ll, 0ll, 0ll );
		goto label$244;
	}
	label$252:;
	label$251:;
	int64 vr$11 = LEXGETTOKEN( 0ll );
	if( vr$11 != 371ll ) goto label$254;
	{
		int64 vr$13 = SYMBARRAYHASUNKNOWNBOUNDS( SYM$1 );
		if( vr$13 == 0ll ) goto label$256;
		{
			ERRREPORT( 279ll, 0ll, (uint8*)0ull );
			goto label$244;
		}
		label$256:;
		label$255:;
		if( (*(int64*)((uint8*)SYM$1 + 48ll) & 511ll) != 16ll ) goto label$258;
		{
			ERRREPORT( 24ll, 0ll, (uint8*)0ull );
		}
		goto label$257;
		label$258:;
		{
			*($12FB_SYMBSTATS*)((uint8*)SYM$1 + 16ll) = *(int64*)((uint8*)SYM$1 + 16ll) | 2048ll;
		}
		label$257:;
		if( (*(int64*)((uint8*)SYM$1 + 48ll) & 512ll) == 0ll ) goto label$260;
		{
			ERRREPORT( 236ll, 0ll, (uint8*)0ull );
			struct $7ASTNODE* vr$24 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
			fb$result$1 = vr$24;
			goto label$244;
		}
		label$260:;
		label$259:;
		LEXSKIPTOKEN( 0ll );
		goto label$244;
	}
	label$254:;
	label$253:;
	struct $7ASTNODE* vr$25 = CINITIALIZER( SYM$1, 1ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	INITREE$1 = vr$25;
	if( INITREE$1 != (struct $7ASTNODE*)0ull ) goto label$262;
	{
		struct $7ASTNODE* vr$27 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		INITREE$1 = vr$27;
	}
	label$262:;
	label$261:;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 3ll) == 0ll ) goto label$264;
	{
		int64 vr$31 = SYMBHASCTOR( SYM$1 );
		if( vr$31 != 0ll ) goto label$266;
		{
			int64 vr$33 = ASTTYPEINIISCONST( INITREE$1 );
			if( vr$33 != 0ll ) goto label$268;
			{
				ERRREPORT( 11ll, 0ll, (uint8*)0ull );
				ASTDELTREE( INITREE$1 );
				goto label$244;
			}
			label$268:;
			label$267:;
		}
		label$266:;
		label$265:;
		IGNOREATTRIBS$1 = 12582912ll;
		if( (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 1ll) != 0ll) != 0ll ) goto label$270;
		{
			IGNOREATTRIBS$1 = IGNOREATTRIBS$1 | 2ll;
		}
		label$270:;
		label$269:;
		int64 vr$40 = ASTTYPEINIUSESLOCALS( INITREE$1, IGNOREATTRIBS$1 );
		if( vr$40 == 0ll ) goto label$272;
		{
			ERRREPORT( 271ll, 0ll, (uint8*)0ull );
			ASTDELTREE( INITREE$1 );
			goto label$244;
		}
		label$272:;
		label$271:;
	}
	label$264:;
	label$263:;
	fb$result$1 = INITREE$1;
	label$244:;
	return fb$result$1;
}

static struct $7ASTNODE* HWRAPINSTATICFLAG( struct $7ASTNODE* CODE$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$277:;
	struct $7ASTNODE* T$1;
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
	struct $8FBARRAY1I10FBARRAYDIME tmp$98$1;
	*(struct $10FBARRAYDIM**)&tmp$98$1 = (struct $10FBARRAYDIM*)DTB$1;
	*(struct $10FBARRAYDIM**)((uint8*)&tmp$98$1 + 8ll) = (struct $10FBARRAYDIM*)DTB$1;
	*(int64*)((uint8*)&tmp$98$1 + 16ll) = 16ll;
	*(int64*)((uint8*)&tmp$98$1 + 24ll) = 16ll;
	*(int64*)((uint8*)&tmp$98$1 + 32ll) = 1ll;
	*(int64*)((uint8*)&tmp$98$1 + 40ll) = 1ll;
	*(int64*)((uint8*)&tmp$98$1 + 48ll) = 0ll;
	*(int64*)((uint8*)&tmp$98$1 + 56ll) = 0ll;
	struct $8FBSYMBOL* FLAG$1;
	struct $8FBSYMBOL* LABEL$1;
	uint8* vr$18 = SYMBUNIQUELABEL(  );
	struct $8FBSYMBOL* vr$19 = SYMBADDVAR( vr$18, (uint8*)0ull, 7ll, (struct $8FBSYMBOL*)0ull, 0ll, 0ll, (struct $7FBARRAYI10FBARRAYDIME*)&tmp$98$1, 2ll, 0ll );
	FLAG$1 = vr$19;
	*($12FB_SYMBSTATS*)((uint8*)FLAG$1 + 16ll) = *(int64*)((uint8*)FLAG$1 + 16ll) | 16ll;
	struct $7ASTNODE* vr$23 = ASTNEWDECL( FLAG$1, -1ll );
	T$1 = vr$23;
	struct $8FBSYMBOL* vr$24 = SYMBADDLABEL( (uint8*)0ull, 4ll );
	LABEL$1 = vr$24;
	struct $7ASTNODE* vr$25 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$26 = ASTNEWVAR( FLAG$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$27 = ASTNEWBOP( 45ll, vr$26, vr$25, (struct $8FBSYMBOL*)0ull, 1ll );
	struct $7ASTNODE* vr$28 = ASTBUILDBRANCH( vr$27, LABEL$1, 0ll, 0ll );
	struct $7ASTNODE* vr$29 = ASTNEWLINK( T$1, vr$28, -1ll );
	T$1 = vr$29;
	struct $7ASTNODE* vr$30 = _Z17ASTBUILDVARASSIGNP8FBSYMBOLll( FLAG$1, 1ll, 0ll );
	struct $7ASTNODE* vr$31 = ASTNEWLINK( T$1, vr$30, -1ll );
	T$1 = vr$31;
	struct $7ASTNODE* vr$32 = ASTNEWLINK( T$1, CODE$1, -1ll );
	T$1 = vr$32;
	struct $7ASTNODE* vr$33 = ASTNEWLABEL( LABEL$1, -1ll );
	struct $7ASTNODE* vr$34 = ASTNEWLINK( T$1, vr$33, -1ll );
	fb$result$1 = vr$34;
	label$278:;
	return fb$result$1;
}

static struct $7ASTNODE* HCALLSTATICCTOR( struct $8FBSYMBOL* SYM$1, struct $7ASTNODE* VAR_DECL$1, struct $7ASTNODE* INITREE$1, int64 HAS_DTOR$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$279:;
	struct $7ASTNODE* T$1;
	struct $7ASTNODE* INITCODE$1;
	struct $8FBSYMBOL* PROC$1;
	struct $7ASTNODE* vr$1 = HFLUSHDECL( VAR_DECL$1 );
	T$1 = vr$1;
	INITCODE$1 = (struct $7ASTNODE*)0ull;
	if( INITREE$1 == (struct $7ASTNODE*)0ull ) goto label$282;
	{
		struct $7ASTNODE* vr$3 = _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEll( SYM$1, INITREE$1, 0ll, 64ll );
		INITCODE$1 = vr$3;
	}
	label$282:;
	label$281:;
	if( HAS_DTOR$1 == 0ll ) goto label$284;
	{
		struct $8FBSYMBOL* vr$5 = ASTPROCADDSTATICINSTANCE( SYM$1 );
		PROC$1 = vr$5;
		struct $7ASTNODE* vr$6 = ASTBUILDPROCADDROF( PROC$1 );
		struct $7ASTNODE* vr$7 = RTLATEXIT( vr$6 );
		struct $7ASTNODE* vr$8 = ASTNEWLINK( INITCODE$1, vr$7, -1ll );
		INITCODE$1 = vr$8;
	}
	label$284:;
	label$283:;
	if( INITCODE$1 == (struct $7ASTNODE*)0ull ) goto label$286;
	{
		struct $7ASTNODE* vr$10 = HWRAPINSTATICFLAG( INITCODE$1 );
		struct $7ASTNODE* vr$11 = ASTNEWLINK( T$1, vr$10, -1ll );
		T$1 = vr$11;
	}
	label$286:;
	label$285:;
	fb$result$1 = T$1;
	label$280:;
	return fb$result$1;
}

static struct $7ASTNODE* HCALLGLOBALCTOR( struct $8FBSYMBOL* SYM$1, struct $7ASTNODE* VAR_DECL$1, struct $7ASTNODE* INITREE$1, int64 HAS_DTOR$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$287:;
	struct $7ASTNODE* vr$1 = HFLUSHDECL( VAR_DECL$1 );
	VAR_DECL$1 = vr$1;
	if( ((int64)-(INITREE$1 == (struct $7ASTNODE*)0ull) & (int64)-(HAS_DTOR$1 == 0ll)) == 0ll ) goto label$290;
	{
		fb$result$1 = VAR_DECL$1;
		goto label$288;
	}
	label$290:;
	label$289:;
	ASTPROCADDGLOBALINSTANCE( SYM$1, INITREE$1, HAS_DTOR$1 );
	fb$result$1 = VAR_DECL$1;
	label$288:;
	return fb$result$1;
}

static struct $7ASTNODE* HFLUSHINITIALIZER( struct $8FBSYMBOL* SYM$1, struct $7ASTNODE* VAR_DECL$1, struct $7ASTNODE* INITREE$1, int64 HAS_DTOR$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$291:;
	if( HAS_DTOR$1 == 0ll ) goto label$294;
	{
		struct $8FBSYMBOL* vr$3 = SYMBGETCOMPDTOR( *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll) );
		int64 vr$4 = SYMBCHECKACCESS( vr$3 );
		if( vr$4 != 0ll ) goto label$296;
		{
			ERRREPORT( 205ll, 0ll, (uint8*)0ull );
		}
		label$296:;
		label$295:;
	}
	label$294:;
	label$293:;
	if( INITREE$1 != (struct $7ASTNODE*)0ull ) goto label$298;
	{
		if( (*(int64*)((uint8*)SYM$1 + 8ll) & 11ll) == 0ll ) goto label$300;
		{
			if( HAS_DTOR$1 == 0ll ) goto label$302;
			{
				if( (*(int64*)((uint8*)SYM$1 + 8ll) & 128ll) == 0ll ) goto label$304;
				{
					struct $7ASTNODE* vr$14 = HCALLSTATICCTOR( SYM$1, VAR_DECL$1, (struct $7ASTNODE*)0ull, -1ll );
					VAR_DECL$1 = vr$14;
				}
				goto label$303;
				label$304:;
				{
					struct $7ASTNODE* vr$15 = HCALLGLOBALCTOR( SYM$1, VAR_DECL$1, (struct $7ASTNODE*)0ull, -1ll );
					VAR_DECL$1 = vr$15;
				}
				label$303:;
			}
			label$302:;
			label$301:;
		}
		label$300:;
		label$299:;
		fb$result$1 = VAR_DECL$1;
		goto label$292;
	}
	label$298:;
	label$297:;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 11ll) != 0ll ) goto label$306;
	{
		struct $7ASTNODE* vr$19 = HFLUSHDECL( VAR_DECL$1 );
		VAR_DECL$1 = vr$19;
		struct $7ASTNODE* vr$20 = _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEll( SYM$1, INITREE$1, 0ll, 64ll );
		struct $7ASTNODE* vr$21 = ASTNEWLINK( VAR_DECL$1, vr$20, -1ll );
		fb$result$1 = vr$21;
		goto label$292;
	}
	label$306:;
	label$305:;
	int64 vr$22 = SYMBHASCTOR( SYM$1 );
	if( vr$22 != 0ll ) goto label$308;
	{
		*(struct $7ASTNODE**)((uint8*)SYM$1 + 88ll) = INITREE$1;
		if( HAS_DTOR$1 != 0ll ) goto label$310;
		{
			struct $7ASTNODE* vr$26 = HFLUSHDECL( VAR_DECL$1 );
			fb$result$1 = vr$26;
			goto label$292;
		}
		label$310:;
		label$309:;
		INITREE$1 = (struct $7ASTNODE*)0ull;
	}
	label$308:;
	label$307:;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 128ll) == 0ll ) goto label$312;
	{
		struct $7ASTNODE* vr$30 = HCALLSTATICCTOR( SYM$1, VAR_DECL$1, INITREE$1, HAS_DTOR$1 );
		fb$result$1 = vr$30;
	}
	goto label$311;
	label$312:;
	{
		struct $7ASTNODE* vr$31 = HCALLGLOBALCTOR( SYM$1, VAR_DECL$1, INITREE$1, HAS_DTOR$1 );
		fb$result$1 = vr$31;
	}
	label$311:;
	label$292:;
	return fb$result$1;
}

static struct $7ASTNODE* HIDXINPARENSONLYEXPR( void )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$313:;
	int64 OLD_IDXINPARENSONLY$1;
	OLD_IDXINPARENSONLY$1 = (int64)-((*(int64*)((uint8*)&PARSER$ + 288ll) & 4096ll) != 0ll);
	{
		*($12FB_PARSEROPT*)((uint8*)&PARSER$ + 288ll) = *(int64*)((uint8*)&PARSER$ + 288ll) | 4096ll;
	}
	goto label$315;
	label$316:;
	{
		*($12FB_PARSEROPT*)((uint8*)&PARSER$ + 288ll) = *(int64*)((uint8*)&PARSER$ + 288ll) & -4097ll;
	}
	label$315:;
	struct $7ASTNODE* vr$5 = CEXPRESSIONWITHNIDXARRAY( -1ll );
	fb$result$1 = vr$5;
	if( OLD_IDXINPARENSONLY$1 == 0ll ) goto label$318;
	{
		*($12FB_PARSEROPT*)((uint8*)&PARSER$ + 288ll) = *(int64*)((uint8*)&PARSER$ + 288ll) | 4096ll;
	}
	goto label$317;
	label$318:;
	{
		*($12FB_PARSEROPT*)((uint8*)&PARSER$ + 288ll) = *(int64*)((uint8*)&PARSER$ + 288ll) & -4097ll;
	}
	label$317:;
	label$314:;
	return fb$result$1;
}

static struct $7ASTNODE* HCHECKDYNAMICARRAYEXPR( struct $7ASTNODE* VAREXPR$1 )
{
	int64 TMP$99$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$319:;
	if( VAREXPR$1 == (struct $7ASTNODE*)0ull ) goto label$321;
	TMP$99$1 = (int64)-((struct $7ASTNODE*)(int64)-(*(int64*)VAREXPR$1 == 25ll) != (struct $7ASTNODE*)0ull);
	goto label$586;
	label$321:;
	TMP$99$1 = 0ll;
	label$586:;
	if( TMP$99$1 == 0ll ) goto label$323;
	{
		struct $7ASTNODE* vr$6 = ASTREMOVENIDXARRAY( VAREXPR$1 );
		VAREXPR$1 = vr$6;
		if( ((int64)-(*(int64*)VAREXPR$1 == 17ll) | (int64)-(*(int64*)VAREXPR$1 == 19ll)) == 0ll ) goto label$325;
		{
			if( ((int64)-(*(int64*)*(struct $8FBSYMBOL**)((uint8*)VAREXPR$1 + 24ll) == 1ll) | (int64)-(*(int64*)*(struct $8FBSYMBOL**)((uint8*)VAREXPR$1 + 24ll) == 12ll)) == 0ll ) goto label$327;
			{
				if( (*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)VAREXPR$1 + 24ll) + 8ll) & 65540ll) == 0ll ) goto label$329;
				{
					fb$result$1 = VAREXPR$1;
					goto label$320;
				}
				label$329:;
				label$328:;
			}
			label$327:;
			label$326:;
		}
		label$325:;
		label$324:;
	}
	label$323:;
	label$322:;
	ERRREPORT( 53ll, -1ll, (uint8*)0ull );
	ASTDELTREE( VAREXPR$1 );
	fb$result$1 = (struct $7ASTNODE*)0ull;
	label$320:;
	return fb$result$1;
}

static void HERRORDEFTYPENOTALLOWED( int64* DTYPE$1, struct $8FBSYMBOL** SUBTYPE$1, int64* LGT$1 )
{
	label$330:;
	ERRREPORTNOTALLOWED( 4194304ll, 146ll, (uint8*)0ull );
	*DTYPE$1 = 7ll;
	*SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
	int64 vr$4 = SYMBCALCLEN( *DTYPE$1, *SUBTYPE$1 );
	*LGT$1 = vr$4;
	label$331:;
}

static struct $7ASTNODE* HMAYBEBUILDFIELDACCESS( struct $8FBSYMBOL* FLD$1, int64 IS_REDIM$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$332:;
	struct $8FBSYMBOL* THISPARAM$1;
	if( IS_REDIM$1 != 0ll ) goto label$335;
	{
		goto label$333;
	}
	label$335:;
	label$334:;
	if( (int64)-((*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 8ll) & 2048ll) != 0ll) != 0ll ) goto label$337;
	{
		goto label$333;
	}
	label$337:;
	label$336:;
	THISPARAM$1 = *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 128ll);
	if( THISPARAM$1 != (struct $8FBSYMBOL*)0ull ) goto label$339;
	{
		goto label$333;
	}
	label$339:;
	label$338:;
	struct $7ASTNODE* vr$9 = ASTBUILDVARFIELD( *(struct $8FBSYMBOL**)((uint8*)THISPARAM$1 + 96ll), FLD$1, 0ll );
	fb$result$1 = vr$9;
	label$333:;
	return fb$result$1;
}

static int64 HMATCHELLIPSIS( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$490:;
	fb$result$1 = 0ll;
	int64 vr$1 = LEXGETTOKEN( 0ll );
	if( vr$1 != 46ll ) goto label$493;
	{
		int64 vr$3 = LEXGETLOOKAHEAD( 1ll, 0ll );
		if( vr$3 != 46ll ) goto label$495;
		{
			int64 vr$5 = LEXGETLOOKAHEAD( 2ll, 0ll );
			if( vr$5 != 46ll ) goto label$497;
			{
				{
					int64 TMP$105$5;
					int64 vr$7 = LEXGETLOOKAHEAD( 3ll, 0ll );
					TMP$105$5 = vr$7;
					if( TMP$105$5 == 44ll ) goto label$500;
					label$501:;
					if( TMP$105$5 == 41ll ) goto label$500;
					label$502:;
					if( TMP$105$5 != 284ll ) goto label$499;
					label$500:;
					{
						fb$result$1 = -1ll;
						LEXSKIPTOKEN( 0ll );
						LEXSKIPTOKEN( 0ll );
						LEXSKIPTOKEN( 0ll );
					}
					label$499:;
					label$498:;
				}
			}
			label$497:;
			label$496:;
		}
		label$495:;
		label$494:;
	}
	label$493:;
	label$492:;
	label$491:;
	return fb$result$1;
}

static struct $7ASTNODE* HINTEXPR( struct $7ASTNODE* DEFAULTEXPR$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$503:;
	struct $7ASTNODE* EXPR$1;
	struct $7ASTNODE* INTEXPR$1;
	struct $7ASTNODE* vr$1 = CEXPRESSION(  );
	EXPR$1 = vr$1;
	if( EXPR$1 == (struct $7ASTNODE*)0ull ) goto label$506;
	{
		struct $7ASTNODE* vr$3 = ASTNEWCONV( 7ll, (struct $8FBSYMBOL*)0ull, EXPR$1, 0ll, (int64*)0ull );
		INTEXPR$1 = vr$3;
		if( INTEXPR$1 == (struct $7ASTNODE*)0ull ) goto label$508;
		{
			EXPR$1 = INTEXPR$1;
		}
		goto label$507;
		label$508:;
		{
			ERRREPORT( 24ll, -1ll, (uint8*)0ull );
			ASTDELTREE( EXPR$1 );
			EXPR$1 = (struct $7ASTNODE*)0ull;
		}
		label$507:;
	}
	goto label$505;
	label$506:;
	{
		ERRREPORT( 9ll, 0ll, (uint8*)0ull );
		int64 vr$5 = LEXGETTOKEN( 0ll );
		if( vr$5 == 284ll ) goto label$510;
		{
			HSKIPUNTIL( 44ll, 0ll, 0ll, 0ll );
		}
		label$510:;
		label$509:;
	}
	label$505:;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$512;
	{
		if( DEFAULTEXPR$1 == (struct $7ASTNODE*)0ull ) goto label$514;
		{
			struct $7ASTNODE* vr$9 = ASTCLONETREE( DEFAULTEXPR$1 );
			EXPR$1 = vr$9;
		}
		goto label$513;
		label$514:;
		{
			struct $7ASTNODE* vr$10 = ASTNEWCONSTI( *(int64*)((uint8*)&ENV$ + 1208ll), 7ll, (struct $8FBSYMBOL*)0ull );
			EXPR$1 = vr$10;
		}
		label$513:;
	}
	label$512:;
	label$511:;
	fb$result$1 = EXPR$1;
	label$504:;
	return fb$result$1;
}

static void CARRAYDIMENSION( int64* DIMENSIONS$1, struct $7FBARRAYIP7ASTNODEE* EXPRTB$1 )
{
	label$515:;
	int64 vr$0 = HMATCHELLIPSIS(  );
	if( vr$0 == 0ll ) goto label$518;
	{
		*(struct $7ASTNODE**)(((*DIMENSIONS$1 * *(int64*)((uint8*)EXPRTB$1 + 64ll)) << 3ll) + *(int64*)EXPRTB$1) = (struct $7ASTNODE*)0ull;
	}
	goto label$517;
	label$518:;
	{
		struct $7ASTNODE* vr$8 = HINTEXPR( (struct $7ASTNODE*)0ull );
		*(struct $7ASTNODE**)(((*DIMENSIONS$1 * *(int64*)((uint8*)EXPRTB$1 + 64ll)) << 3ll) + *(int64*)EXPRTB$1) = vr$8;
	}
	label$517:;
	int64 vr$15 = LEXGETTOKEN( 0ll );
	if( vr$15 != 284ll ) goto label$520;
	{
		LEXSKIPTOKEN( 0ll );
		if( *(struct $7ASTNODE**)(((*DIMENSIONS$1 * *(int64*)((uint8*)EXPRTB$1 + 64ll)) << 3ll) + *(int64*)EXPRTB$1) != (struct $7ASTNODE*)0ull ) goto label$522;
		{
			ERRREPORT( 281ll, 0ll, (uint8*)0ull );
			struct $7ASTNODE* vr$24 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
			*(struct $7ASTNODE**)(((*DIMENSIONS$1 * *(int64*)((uint8*)EXPRTB$1 + 64ll)) << 3ll) + *(int64*)EXPRTB$1) = vr$24;
		}
		label$522:;
		label$521:;
		int64 vr$31 = HMATCHELLIPSIS(  );
		if( vr$31 == 0ll ) goto label$524;
		{
			*(struct $7ASTNODE**)((uint8*)(((*DIMENSIONS$1 * *(int64*)((uint8*)EXPRTB$1 + 64ll)) << 3ll) + *(int64*)EXPRTB$1) + 8ll) = (struct $7ASTNODE*)0ull;
		}
		goto label$523;
		label$524:;
		{
			struct $7ASTNODE* vr$45 = HINTEXPR( *(struct $7ASTNODE**)(((*DIMENSIONS$1 * *(int64*)((uint8*)EXPRTB$1 + 64ll)) << 3ll) + *(int64*)EXPRTB$1) );
			*(struct $7ASTNODE**)((uint8*)(((*DIMENSIONS$1 * *(int64*)((uint8*)EXPRTB$1 + 64ll)) << 3ll) + *(int64*)EXPRTB$1) + 8ll) = vr$45;
		}
		label$523:;
	}
	goto label$519;
	label$520:;
	{
		*(struct $7ASTNODE**)((uint8*)(((*DIMENSIONS$1 * *(int64*)((uint8*)EXPRTB$1 + 64ll)) << 3ll) + *(int64*)EXPRTB$1) + 8ll) = *(struct $7ASTNODE**)(((*DIMENSIONS$1 * *(int64*)((uint8*)EXPRTB$1 + 64ll)) << 3ll) + *(int64*)EXPRTB$1);
		struct $7ASTNODE* vr$64 = ASTNEWCONSTI( *(int64*)((uint8*)&ENV$ + 1208ll), 7ll, (struct $8FBSYMBOL*)0ull );
		*(struct $7ASTNODE**)(((*DIMENSIONS$1 * *(int64*)((uint8*)EXPRTB$1 + 64ll)) << 3ll) + *(int64*)EXPRTB$1) = vr$64;
	}
	label$519:;
	label$516:;
}

static void CAUTOVARDECL( $13FB_SYMBATTRIB ATTRIB$1 )
{
	label$535:;
	static struct $10FBARRAYDIM DTB$1[8];
	struct $8FBARRAY1I10FBARRAYDIME {
		struct $10FBARRAYDIM* DATA;
		struct $10FBARRAYDIM* PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I10FBARRAYDIME ) == 64 );
	static struct $8FBARRAY1I10FBARRAYDIME tmp$106$1 = { (struct $10FBARRAYDIM*)DTB$1, (struct $10FBARRAYDIM*)DTB$1, 128ll, 16ll, 1ll, { { 8ll, 0ll, 7ll } } };
	static uint8 ID$1[129];
	struct $8FBSYMBOL* PARENT$1;
	struct $8FBSYMBOL* SYM$1;
	if( (int64)-((*(int64*)((uint8*)&ENV$ + 1152ll) & 2048ll) != 0ll) != 0ll ) goto label$538;
	{
		ERRREPORTNOTALLOWED( 2048ll, 149ll, (uint8*)0ull );
		HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
		goto label$536;
	}
	label$538:;
	label$537:;
	int64 vr$3 = CCOMPSTMTISALLOWED( 9ll );
	if( vr$3 != 0ll ) goto label$540;
	{
		HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
		goto label$536;
	}
	label$540:;
	label$539:;
	LEXSKIPTOKEN( 0ll );
	int64 vr$5 = LEXGETTOKEN( 0ll );
	if( vr$5 != 312ll ) goto label$542;
	{
		int64 vr$7 = HCHECKSCOPE(  );
		if( vr$7 != 0ll ) goto label$544;
		{
			ATTRIB$1 = ATTRIB$1 | 2ll;
		}
		goto label$543;
		label$544:;
		{
			ATTRIB$1 = ATTRIB$1 | 3ll;
		}
		label$543:;
		LEXSKIPTOKEN( 0ll );
	}
	label$542:;
	label$541:;
	if( (*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 8ll) & 2097152ll) == 0ll ) goto label$546;
	{
		ATTRIB$1 = ATTRIB$1 | 2ll;
	}
	label$546:;
	label$545:;
	if( (int64)-(*(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll) == (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll)) != 0ll ) goto label$548;
	{
		if( *(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) != *(struct $8FBSYMBOL**)((uint8*)&ENV$ + 1136ll) ) goto label$550;
		{
			ATTRIB$1 = ATTRIB$1 | 3ll;
		}
		label$550:;
		label$549:;
	}
	label$548:;
	label$547:;
	label$551:;
	{
		int64 TMP$108$2;
		int64 TMP$109$2;
		int64 TMP$110$2;
		struct $8FBSYMBOL* vr$20 = CPARENTID( 118ll );
		PARENT$1 = vr$20;
		int64 SUFFIX$2;
		struct $10FBSYMCHAIN* CHAIN_$2;
		struct $10FBSYMCHAIN* vr$22 = HGETID( PARENT$1, (uint8*)ID$1, &SUFFIX$2, 0ll );
		CHAIN_$2 = vr$22;
		if( SUFFIX$2 == 2147483648ll ) goto label$555;
		{
			ERRREPORTEX( 17ll, (uint8*)ID$1, 0ll, 1ll, (uint8*)0ull );
		}
		label$555:;
		label$554:;
		int64 vr$24 = LEXGETTOKEN( 0ll );
		if( vr$24 != 40ll ) goto label$557;
		{
			ERRREPORT( 20ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
		}
		label$557:;
		label$556:;
		struct $8FBSYMBOL* vr$26 = HLOOKUPVARANDCHECKPARENT( PARENT$1, CHAIN_$2, 2147483648ll, -1ll, 0ll, 0ll );
		SYM$1 = vr$26;
		int64 vr$27 = CASSIGNTOKEN(  );
		if( vr$27 != 0ll ) goto label$559;
		{
			ERRREPORT( 10ll, 0ll, (uint8*)0ull );
		}
		label$559:;
		label$558:;
		struct $7ASTNODE* EXPR$2;
		struct $7ASTNODE* vr$29 = CEXPRESSION(  );
		EXPR$2 = vr$29;
		if( EXPR$2 != (struct $7ASTNODE*)0ull ) goto label$561;
		{
			ERRREPORT( 236ll, 0ll, (uint8*)0ull );
			struct $7ASTNODE* vr$31 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
			EXPR$2 = vr$31;
		}
		label$561:;
		label$560:;
		int64 DTYPE$2;
		DTYPE$2 = *(int64*)((uint8*)EXPR$2 + 8ll);
		struct $8FBSYMBOL* SUBTYPE$2;
		SUBTYPE$2 = *(struct $8FBSYMBOL**)((uint8*)EXPR$2 + 16ll);
		int64 HAS_CTOR$2;
		int64 HAS_DTOR$2;
		int64 vr$34 = TYPEHASCTOR( DTYPE$2, SUBTYPE$2 );
		HAS_CTOR$2 = vr$34;
		int64 vr$35 = TYPEHASDTOR( DTYPE$2, SUBTYPE$2 );
		HAS_DTOR$2 = vr$35;
		{
			uint64 TMP$107$3;
			TMP$107$3 = (uint64)(DTYPE$2 & 511ll);
			goto label$563;
			label$564:;
			{
				ERRREPORT( 24ll, -1ll, (uint8*)0ull );
				ASTDELTREE( EXPR$2 );
				struct $7ASTNODE* vr$37 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				EXPR$2 = vr$37;
				DTYPE$2 = 7ll;
				SUBTYPE$2 = (struct $8FBSYMBOL*)0ull;
			}
			goto label$562;
			label$565:;
			{
				DTYPE$2 = 16ll;
			}
			goto label$562;
			label$566:;
			{
				if( (int64)-((*(int64*)((uint8*)SUBTYPE$2 + 16ll) & 16384ll) != 0ll) != 0ll ) goto label$568;
				{
					struct $8FBSYMBOL* vr$42 = SYMBADDPROCPTRFROMFUNCTION( SUBTYPE$2 );
					SUBTYPE$2 = vr$42;
				}
				label$568:;
				label$567:;
			}
			goto label$562;
			label$563:;
			static const void* tmp$112[50ll] = {
				&&label$565,
				&&label$562,
				&&label$562,
				&&label$564,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$565,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$562,
				&&label$566,
			};
			if( TMP$107$3 < 3ll ) goto label$562;
			if( TMP$107$3 > 52ll ) goto label$562;
			goto *tmp$112[TMP$107$3 - 3ll];
			label$562:;
		}
		TMP$110$2 = 0ll;
		TMP$109$2 = 0ll;
		int64 vr$46 = SYMBCALCLEN( DTYPE$2, SUBTYPE$2 );
		TMP$108$2 = vr$46;
		struct $8FBSYMBOL* vr$50 = HADDVAR( SYM$1, PARENT$1, (uint8*)ID$1, (uint8*)0ull, &DTYPE$2, &SUBTYPE$2, &TMP$108$2, 0ll, (int64*)&ATTRIB$1, &TMP$109$2, &TMP$110$2, (struct $7FBARRAYI10FBARRAYDIME*)&tmp$106$1, 309ll );
		SYM$1 = vr$50;
		if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$570;
		{
			struct $7ASTNODE* INITREE$3;
			struct $7ASTNODE* vr$56 = ASTTYPEINIBEGIN( *(int64*)((uint8*)EXPR$2 + 8ll), SUBTYPE$2, (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 128ll) != 0ll), 0ll );
			INITREE$3 = vr$56;
			if( HAS_CTOR$2 != 0ll ) goto label$572;
			{
				ASTTYPEINIADDASSIGN( INITREE$3, EXPR$2, SYM$1, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			}
			goto label$571;
			label$572:;
			{
				int64 IS_CTORCALL$4;
				$12FB_PARAMMODE vr$59 = CBYDESCARRAYARGPARENS( EXPR$2 );
				struct $7ASTNODE* vr$60 = ASTBUILDIMPLICITCTORCALLEX( SYM$1, EXPR$2, vr$59, &IS_CTORCALL$4 );
				EXPR$2 = vr$60;
				if( EXPR$2 == (struct $7ASTNODE*)0ull ) goto label$574;
				{
					if( IS_CTORCALL$4 == 0ll ) goto label$576;
					{
						ASTTYPEINIADDCTORCALL( INITREE$3, SYM$1, EXPR$2, 2147483648ll, (struct $8FBSYMBOL*)0ull );
					}
					goto label$575;
					label$576:;
					{
						ASTTYPEINIADDASSIGN( INITREE$3, EXPR$2, SYM$1, 2147483648ll, (struct $8FBSYMBOL*)0ull );
					}
					label$575:;
				}
				label$574:;
				label$573:;
			}
			label$571:;
			if( (*(int64*)((uint8*)SYM$1 + 8ll) & 3ll) == 0ll ) goto label$578;
			{
				if( HAS_CTOR$2 != 0ll ) goto label$580;
				{
					int64 vr$67 = ASTTYPEINIISCONST( INITREE$3 );
					if( vr$67 != 0ll ) goto label$582;
					{
						ASTDELTREE( EXPR$2 );
						struct $7ASTNODE* vr$69 = ASTNEWCONSTZ( DTYPE$2, SUBTYPE$2 );
						EXPR$2 = vr$69;
						DTYPE$2 = 7ll;
						SUBTYPE$2 = (struct $8FBSYMBOL*)0ull;
						HAS_DTOR$2 = 0ll;
					}
					label$582:;
					label$581:;
				}
				label$580:;
				label$579:;
			}
			label$578:;
			label$577:;
			ASTTYPEINIEND( INITREE$3, -1ll );
			struct $7ASTNODE* VAR_DECL$3;
			struct $7ASTNODE* vr$70 = ASTNEWDECL( SYM$1, 0ll );
			VAR_DECL$3 = vr$70;
			*($12FB_SYMBSTATS*)((uint8*)SYM$1 + 16ll) = *(int64*)((uint8*)SYM$1 + 16ll) | 8ll;
			struct $7ASTNODE* vr$74 = HFLUSHINITIALIZER( SYM$1, VAR_DECL$3, INITREE$3, HAS_DTOR$2 );
			ASTADD( vr$74 );
		}
		label$570:;
		label$569:;
		int64 vr$75 = LEXGETTOKEN( 0ll );
		if( vr$75 == 44ll ) goto label$584;
		{
			goto label$552;
		}
		label$584:;
		label$583:;
		LEXSKIPTOKEN( 0ll );
	}
	label$553:;
	goto label$551;
	label$552:;
	label$536:;
}

// Total compilation time: 0.04831501364242285 seconds.
