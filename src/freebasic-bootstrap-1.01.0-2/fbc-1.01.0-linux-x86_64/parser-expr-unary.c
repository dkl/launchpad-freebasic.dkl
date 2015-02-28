// Compilation of fbc-1.01.0/src/compiler/parser-expr-unary.bas started at 14:16:43 on 02-28-2015

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
typedef int64 $8FB_TOKEN;
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
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
typedef int64 $11AST_CONVOPT;
typedef int64 $9FB_ERRMSG;
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__parserzexprzunary( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
typedef int64 $12FB_ERRMSGOPT;
void ERRREPORTEX( int64, uint8*, int64, $12FB_ERRMSGOPT, uint8* );
void ERRREPORT( int64, int64, uint8* );
void ERRREPORTWARN( int64, uint8*, $12FB_ERRMSGOPT );
void ASTDELTREE( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWCONV( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, $11AST_CONVOPT, int64* );
struct $7ASTNODE* ASTSKIPNOCONVCAST( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWUOP( int64, struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWCONSTSTR( uint8* );
struct $7ASTNODE* ASTNEWCONSTI( int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWCONSTZ( int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWADDROF( struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDCALL( struct $8FBSYMBOL*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDPROCADDROF( struct $8FBSYMBOL* );
struct $7ASTNODE* ASTBUILDSTRPTR( struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDMULTIDEREF( int64, struct $7ASTNODE*, int64, struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBFINDBYCLASS( struct $10FBSYMCHAIN*, int64 );
typedef int64 $16FB_SYMBLOOKUPOPT;
struct $8FBSYMBOL* SYMBFINDOVERLOADPROC( struct $8FBSYMBOL*, struct $8FBSYMBOL*, $16FB_SYMBLOOKUPOPT );
struct $8FBSYMBOL* SYMBFINDSELFUOPOVLPROC( $6AST_OP, struct $7ASTNODE*, $9FB_ERRMSG* );
int64 SYMBISSTRING( int64 );
int64 SYMBCHECKACCESS( struct $8FBSYMBOL* );
uint8* SYMBGETFULLPROCNAME( struct $8FBSYMBOL* );
int64 HMATCH( int64 );
typedef int64 $8LEXCHECK;
int64 LEXGETTOKEN( $8LEXCHECK );
void LEXSKIPTOKEN( $8LEXCHECK );
int64 LEXGETLOOKAHEAD( int64, $8LEXCHECK );
typedef int64 $14FB_SYMBTYPEOPT;
int64 CSYMBOLTYPE( int64*, struct $8FBSYMBOL**, int64*, $14FB_SYMBTYPEOPT );
typedef int64 $8FB_IDOPT;
struct $10FBSYMCHAIN* CIDENTIFIER( struct $8FBSYMBOL**, $8FB_IDOPT );
struct $7ASTNODE* CEXPRESSION( void );
struct $7ASTNODE* CRELEXPRESSION( void );
struct $7ASTNODE* CEXPEXPRESSION( void );
struct $7ASTNODE* CHIGHESTPRECEXPR( struct $8FBSYMBOL*, struct $10FBSYMCHAIN* );
struct $7ASTNODE* CDEREFEXPRESSION( void );
struct $7ASTNODE* CADDROFEXPRESSION( void );
struct $7ASTNODE* CPARENTEXPRESSION( void );
struct $7ASTNODE* CATOM( struct $8FBSYMBOL*, struct $10FBSYMCHAIN* );
struct $7ASTNODE* CMEMBERACCESS( int64, struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* CMEMBERDEREF( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* CFUNCPTRORMEMBERDEREF( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, int64, int64 );
struct $7ASTNODE* CSTRIDXORMEMBERDEREF( struct $7ASTNODE* );
struct $7ASTNODE* COPERATORNEW( void );
void HSKIPUNTIL( int64, int64, $8LEXCHECK, int64 );
FBSTRING* PPTYPEOF( void );
static struct $7ASTNODE* HCAST( $11AST_CONVOPT );
static struct $7ASTNODE* HPPDEFINEDEXPR( void );
static struct $7ASTNODE* HPROCPTRBODY( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static struct $7ASTNODE* HVARPTRBODY( struct $8FBSYMBOL*, struct $10FBSYMCHAIN* );
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

struct $7ASTNODE* CNEGNOTEXPRESSION( void )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$16:;
	struct $7ASTNODE* NEGEXPR$1;
	{
		int64 TMP$85$2;
		int64 vr$1 = LEXGETTOKEN( 0ll );
		TMP$85$2 = vr$1;
		if( TMP$85$2 != 45ll ) goto label$19;
		label$20:;
		{
			LEXSKIPTOKEN( 0ll );
			struct $7ASTNODE* vr$3 = CEXPEXPRESSION(  );
			NEGEXPR$1 = vr$3;
			if( NEGEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$22;
			{
				ERRREPORT( 9ll, 0ll, (uint8*)0ull );
				struct $7ASTNODE* vr$5 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				NEGEXPR$1 = vr$5;
			}
			goto label$21;
			label$22:;
			{
				struct $7ASTNODE* vr$6 = ASTNEWUOP( 54ll, NEGEXPR$1 );
				NEGEXPR$1 = vr$6;
			}
			label$21:;
			if( NEGEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$24;
			{
				ERRREPORT( 20ll, 0ll, (uint8*)0ull );
				struct $7ASTNODE* vr$8 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				NEGEXPR$1 = vr$8;
			}
			label$24:;
			label$23:;
			fb$result$1 = NEGEXPR$1;
			goto label$17;
		}
		goto label$18;
		label$19:;
		if( TMP$85$2 != 43ll ) goto label$25;
		label$26:;
		{
			LEXSKIPTOKEN( 0ll );
			struct $7ASTNODE* vr$10 = CEXPEXPRESSION(  );
			NEGEXPR$1 = vr$10;
			if( NEGEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$28;
			{
				ERRREPORT( 9ll, 0ll, (uint8*)0ull );
				struct $7ASTNODE* vr$12 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				NEGEXPR$1 = vr$12;
			}
			goto label$27;
			label$28:;
			{
				struct $7ASTNODE* vr$13 = ASTNEWUOP( 53ll, NEGEXPR$1 );
				NEGEXPR$1 = vr$13;
			}
			label$27:;
			if( NEGEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$30;
			{
				ERRREPORT( 20ll, 0ll, (uint8*)0ull );
				struct $7ASTNODE* vr$15 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				NEGEXPR$1 = vr$15;
			}
			label$30:;
			label$29:;
			fb$result$1 = NEGEXPR$1;
			goto label$17;
		}
		goto label$18;
		label$25:;
		if( TMP$85$2 != 295ll ) goto label$31;
		label$32:;
		{
			LEXSKIPTOKEN( 0ll );
			struct $7ASTNODE* vr$17 = CRELEXPRESSION(  );
			NEGEXPR$1 = vr$17;
			if( NEGEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$34;
			{
				ERRREPORT( 9ll, 0ll, (uint8*)0ull );
				struct $7ASTNODE* vr$19 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				NEGEXPR$1 = vr$19;
			}
			goto label$33;
			label$34:;
			{
				struct $7ASTNODE* vr$20 = ASTNEWUOP( 52ll, NEGEXPR$1 );
				NEGEXPR$1 = vr$20;
			}
			label$33:;
			if( NEGEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$36;
			{
				ERRREPORT( 20ll, 0ll, (uint8*)0ull );
				struct $7ASTNODE* vr$22 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				NEGEXPR$1 = vr$22;
			}
			label$36:;
			label$35:;
			fb$result$1 = NEGEXPR$1;
			goto label$17;
		}
		label$31:;
		label$18:;
	}
	struct $7ASTNODE* vr$23 = CHIGHESTPRECEXPR( (struct $8FBSYMBOL*)0ull, (struct $10FBSYMCHAIN*)0ull );
	fb$result$1 = vr$23;
	label$17:;
	return fb$result$1;
}

struct $7ASTNODE* CSTRIDXORMEMBERDEREF( struct $7ASTNODE* EXPR$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$37:;
	struct $8FBSYMBOL* SUBTYPE$1;
	int64 DTYPE$1;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$40;
	{
		goto label$38;
		label$40:;
	}
	DTYPE$1 = *(int64*)((uint8*)EXPR$1 + 8ll);
	SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 16ll);
	{
		int64 TMP$86$2;
		uint64 TMP$87$2;
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$41;
		TMP$86$2 = 22ll;
		goto label$66;
		label$41:;
		TMP$86$2 = DTYPE$1 & 31ll;
		label$66:;
		TMP$87$2 = (uint64)TMP$86$2;
		goto label$43;
		label$44:;
		{
			int64 vr$7 = LEXGETTOKEN( 0ll );
			if( vr$7 != 91ll ) goto label$46;
			{
				struct $7ASTNODE* vr$9 = CMEMBERDEREF( DTYPE$1, SUBTYPE$1, EXPR$1, -1ll );
				EXPR$1 = vr$9;
			}
			label$46:;
			label$45:;
			fb$result$1 = EXPR$1;
			goto label$38;
		}
		goto label$42;
		label$47:;
		{
			{
				int64 TMP$88$4;
				int64 vr$10 = LEXGETTOKEN( 0ll );
				TMP$88$4 = vr$10;
				if( TMP$88$4 != 46ll ) goto label$49;
				label$50:;
				{
					LEXSKIPTOKEN( 64ll );
					struct $7ASTNODE* vr$12 = CMEMBERACCESS( DTYPE$1, SUBTYPE$1, EXPR$1 );
					EXPR$1 = vr$12;
					if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$52;
					{
						fb$result$1 = (struct $7ASTNODE*)0ull;
						goto label$38;
					}
					label$52:;
					label$51:;
					DTYPE$1 = *(int64*)((uint8*)EXPR$1 + 8ll);
					SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 16ll);
				}
				goto label$48;
				label$49:;
				if( TMP$88$4 == 397ll ) goto label$54;
				label$55:;
				if( TMP$88$4 != 91ll ) goto label$53;
				label$54:;
				{
					struct $7ASTNODE* vr$18 = CMEMBERDEREF( DTYPE$1, SUBTYPE$1, EXPR$1, -1ll );
					EXPR$1 = vr$18;
				}
				label$53:;
				label$48:;
			}
		}
		goto label$42;
		label$43:;
		static const void* tmp$90[16ll] = {
			&&label$44,
			&&label$42,
			&&label$42,
			&&label$44,
			&&label$42,
			&&label$42,
			&&label$42,
			&&label$42,
			&&label$42,
			&&label$42,
			&&label$42,
			&&label$42,
			&&label$42,
			&&label$44,
			&&label$44,
			&&label$47,
		};
		if( TMP$87$2 < 3ll ) goto label$42;
		if( TMP$87$2 > 18ll ) goto label$42;
		goto *tmp$90[TMP$87$2 - 3ll];
		label$42:;
	}
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$57;
	{
		int64 ISFUNCPTR$2;
		ISFUNCPTR$2 = 0ll;
		int64 ISFIELD$2;
		ISFIELD$2 = 0ll;
		{
			int64 TMP$89$3;
			int64 vr$21 = LEXGETTOKEN( 0ll );
			TMP$89$3 = vr$21;
			if( TMP$89$3 != 40ll ) goto label$59;
			label$60:;
			{
				ISFUNCPTR$2 = (int64)-((DTYPE$1 & 511ll) == 52ll);
				ISFIELD$2 = ISFUNCPTR$2;
			}
			goto label$58;
			label$59:;
			if( TMP$89$3 == 397ll ) goto label$62;
			label$63:;
			if( TMP$89$3 != 91ll ) goto label$61;
			label$62:;
			{
				ISFIELD$2 = -1ll;
			}
			label$61:;
			label$58:;
		}
		if( ISFIELD$2 == 0ll ) goto label$65;
		{
			struct $7ASTNODE* vr$28 = CFUNCPTRORMEMBERDEREF( DTYPE$1, SUBTYPE$1, EXPR$1, ISFUNCPTR$2, -1ll );
			EXPR$1 = vr$28;
		}
		label$65:;
		label$64:;
	}
	label$57:;
	label$56:;
	fb$result$1 = EXPR$1;
	label$38:;
	return fb$result$1;
}

struct $7ASTNODE* CHIGHESTPRECEXPR( struct $8FBSYMBOL* BASE_PARENT$1, struct $10FBSYMCHAIN* CHAIN_$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$67:;
	struct $7ASTNODE* EXPR$1;
	{
		int64 TMP$91$2;
		int64 vr$1 = LEXGETTOKEN( 0ll );
		TMP$91$2 = vr$1;
		if( TMP$91$2 != 64ll ) goto label$70;
		label$71:;
		{
			struct $7ASTNODE* vr$3 = CADDROFEXPRESSION(  );
			fb$result$1 = vr$3;
			goto label$68;
		}
		goto label$69;
		label$70:;
		if( TMP$91$2 != 42ll ) goto label$72;
		label$73:;
		{
			struct $7ASTNODE* vr$5 = CDEREFEXPRESSION(  );
			EXPR$1 = vr$5;
		}
		goto label$69;
		label$72:;
		if( TMP$91$2 != 40ll ) goto label$74;
		label$75:;
		{
			int64 IS_OPT$3;
			IS_OPT$3 = (int64)-((*(int64*)((uint8*)&PARSER$ + 288ll) & 1ll) != 0ll);
			struct $7ASTNODE* vr$9 = CPARENTEXPRESSION(  );
			EXPR$1 = vr$9;
			if( IS_OPT$3 == 0ll ) goto label$77;
			{
				fb$result$1 = EXPR$1;
				goto label$68;
			}
			label$77:;
			label$76:;
		}
		goto label$69;
		label$74:;
		{
			{
				uint64 TMP$92$4;
				int64 vr$11 = LEXGETTOKEN( 0ll );
				TMP$92$4 = (uint64)vr$11;
				goto label$80;
				label$81:;
				{
					struct $7ASTNODE* vr$12 = CADDROFEXPRESSION(  );
					fb$result$1 = vr$12;
					goto label$68;
				}
				goto label$79;
				label$82:;
				{
					LEXSKIPTOKEN( 0ll );
					struct $7ASTNODE* vr$13 = HCAST( 0ll );
					EXPR$1 = vr$13;
				}
				goto label$79;
				label$83:;
				{
					LEXSKIPTOKEN( 0ll );
					struct $7ASTNODE* vr$14 = HCAST( 4ll );
					EXPR$1 = vr$14;
				}
				goto label$79;
				label$84:;
				{
					struct $7ASTNODE* vr$15 = COPERATORNEW(  );
					EXPR$1 = vr$15;
				}
				goto label$79;
				label$85:;
				{
					if( (*(int64*)((uint8*)&PARSER$ + 288ll) & 1024ll) == 0ll ) goto label$87;
					{
						{
							int64 TMP$93$7;
							int64 vr$18 = LEXGETTOKEN( 0ll );
							TMP$93$7 = vr$18;
							if( TMP$93$7 != 376ll ) goto label$89;
							label$90:;
							{
								FBSTRING TMP$94$8;
								__builtin_memset( &TMP$94$8, 0, 24ll );
								FBSTRING* vr$21 = PPTYPEOF(  );
								FBSTRING* vr$23 = fb_StrAssign( (void*)&TMP$94$8, -1ll, (void*)vr$21, -1ll, 0 );
								struct $7ASTNODE* vr$24 = ASTNEWCONSTSTR( *(uint8**)&TMP$94$8 );
								fb$result$1 = vr$24;
								fb_StrDelete( &TMP$94$8 );
								goto label$68;
							}
							goto label$88;
							label$89:;
							if( TMP$93$7 != 315ll ) goto label$91;
							label$92:;
							{
								struct $7ASTNODE* vr$27 = HPPDEFINEDEXPR(  );
								fb$result$1 = vr$27;
								goto label$68;
							}
							label$91:;
							label$88:;
						}
					}
					label$87:;
					label$86:;
					struct $7ASTNODE* vr$28 = CATOM( BASE_PARENT$1, CHAIN_$1 );
					fb$result$1 = vr$28;
					goto label$68;
				}
				goto label$79;
				label$80:;
				static const void* tmp$95[28ll] = {
					&&label$84,
					&&label$85,
					&&label$85,
					&&label$85,
					&&label$85,
					&&label$85,
					&&label$85,
					&&label$81,
					&&label$81,
					&&label$81,
					&&label$81,
					&&label$85,
					&&label$85,
					&&label$85,
					&&label$85,
					&&label$85,
					&&label$85,
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
					&&label$82,
				};
				if( TMP$92$4 < 386ll ) goto label$85;
				if( TMP$92$4 > 413ll ) goto label$85;
				goto *tmp$95[TMP$92$4 - 386ll];
				label$79:;
			}
		}
		label$78:;
		label$69:;
	}
	struct $7ASTNODE* vr$29 = CSTRIDXORMEMBERDEREF( EXPR$1 );
	fb$result$1 = vr$29;
	label$68:;
	return fb$result$1;
}

struct $7ASTNODE* CDEREFEXPRESSION( void )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$128:;
	int64 DEREFCNT$1;
	struct $7ASTNODE* EXPR$1;
	int64 vr$1 = LEXGETTOKEN( 0ll );
	if( vr$1 == 42ll ) goto label$131;
	{
		fb$result$1 = (struct $7ASTNODE*)0ull;
		goto label$129;
	}
	label$131:;
	label$130:;
	DEREFCNT$1 = 0ll;
	label$132:;
	{
		LEXSKIPTOKEN( 0ll );
		DEREFCNT$1 = DEREFCNT$1 + 1ll;
	}
	label$134:;
	int64 vr$4 = LEXGETTOKEN( 0ll );
	if( vr$4 == 42ll ) goto label$132;
	label$133:;
	struct $7ASTNODE* vr$6 = CHIGHESTPRECEXPR( (struct $8FBSYMBOL*)0ull, (struct $10FBSYMCHAIN*)0ull );
	EXPR$1 = vr$6;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$136;
	{
		ERRREPORT( 9ll, 0ll, (uint8*)0ull );
		struct $7ASTNODE* vr$8 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		fb$result$1 = vr$8;
		goto label$129;
	}
	label$136:;
	label$135:;
	struct $7ASTNODE* vr$11 = ASTBUILDMULTIDEREF( DEREFCNT$1, EXPR$1, *(int64*)((uint8*)EXPR$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 16ll) );
	fb$result$1 = vr$11;
	label$129:;
	return fb$result$1;
}

struct $7ASTNODE* CADDROFEXPRESSION( void )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$174:;
	struct $7ASTNODE* EXPR$1;
	EXPR$1 = (struct $7ASTNODE*)0ull;
	int64 vr$1 = LEXGETTOKEN( 0ll );
	if( vr$1 != 64ll ) goto label$177;
	{
		LEXSKIPTOKEN( 0ll );
		int64 CHECK_ID$2;
		CHECK_ID$2 = -1ll;
		if( *(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 104ll) == (struct $13FB_CMPSTMTSTK*)0ull ) goto label$179;
		{
			int64 vr$4 = LEXGETTOKEN( 0ll );
			if( vr$4 != 46ll ) goto label$181;
			{
				int64 vr$6 = LEXGETLOOKAHEAD( 1ll, 64ll );
				CHECK_ID$2 = (int64)-(vr$6 == 46ll);
			}
			label$181:;
			label$180:;
		}
		label$179:;
		label$178:;
		struct $10FBSYMCHAIN* CHAIN_$2;
		CHAIN_$2 = (struct $10FBSYMCHAIN*)0ull;
		struct $8FBSYMBOL* SYM$2;
		SYM$2 = (struct $8FBSYMBOL*)0ull;
		struct $8FBSYMBOL* BASE_PARENT$2;
		BASE_PARENT$2 = (struct $8FBSYMBOL*)0ull;
		if( CHECK_ID$2 == 0ll ) goto label$183;
		{
			struct $10FBSYMCHAIN* vr$10 = CIDENTIFIER( &BASE_PARENT$2, 50ll );
			CHAIN_$2 = vr$10;
			struct $8FBSYMBOL* vr$11 = SYMBFINDBYCLASS( CHAIN_$2, 3ll );
			SYM$2 = vr$11;
		}
		label$183:;
		label$182:;
		if( SYM$2 == (struct $8FBSYMBOL*)0ull ) goto label$185;
		{
			LEXSKIPTOKEN( 0ll );
			struct $7ASTNODE* vr$13 = HPROCPTRBODY( BASE_PARENT$2, SYM$2 );
			fb$result$1 = vr$13;
			goto label$175;
		}
		goto label$184;
		label$185:;
		{
			struct $7ASTNODE* vr$14 = HVARPTRBODY( BASE_PARENT$2, CHAIN_$2 );
			fb$result$1 = vr$14;
			goto label$175;
		}
		label$184:;
	}
	label$177:;
	label$176:;
	{
		uint64 TMP$101$2;
		int64 vr$15 = LEXGETTOKEN( 0ll );
		TMP$101$2 = (uint64)vr$15;
		goto label$187;
		label$188:;
		{
			LEXSKIPTOKEN( 0ll );
			int64 vr$16 = HMATCH( 40ll );
			if( vr$16 != 0ll ) goto label$190;
			{
				ERRREPORT( 6ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
				struct $7ASTNODE* vr$18 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				fb$result$1 = vr$18;
				goto label$175;
			}
			label$190:;
			label$189:;
			struct $7ASTNODE* vr$19 = HVARPTRBODY( (struct $8FBSYMBOL*)0ull, (struct $10FBSYMCHAIN*)0ull );
			EXPR$1 = vr$19;
			int64 vr$20 = HMATCH( 41ll );
			if( vr$20 != 0ll ) goto label$192;
			{
				ERRREPORT( 7ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
			}
			label$192:;
			label$191:;
		}
		goto label$186;
		label$193:;
		{
			LEXSKIPTOKEN( 0ll );
			int64 vr$22 = HMATCH( 40ll );
			if( vr$22 != 0ll ) goto label$195;
			{
				ERRREPORT( 6ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
				struct $7ASTNODE* vr$24 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				fb$result$1 = vr$24;
				goto label$175;
			}
			label$195:;
			label$194:;
			struct $10FBSYMCHAIN* CHAIN_$3;
			struct $8FBSYMBOL* SYM$3;
			struct $8FBSYMBOL* BASE_PARENT$3;
			struct $10FBSYMCHAIN* vr$26 = CIDENTIFIER( &BASE_PARENT$3, 50ll );
			CHAIN_$3 = vr$26;
			struct $8FBSYMBOL* vr$27 = SYMBFINDBYCLASS( CHAIN_$3, 3ll );
			SYM$3 = vr$27;
			if( SYM$3 != (struct $8FBSYMBOL*)0ull ) goto label$197;
			{
				ERRREPORT( 8ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
				struct $7ASTNODE* vr$29 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				fb$result$1 = vr$29;
				goto label$175;
			}
			goto label$196;
			label$197:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$196:;
			struct $7ASTNODE* vr$30 = HPROCPTRBODY( BASE_PARENT$3, SYM$3 );
			EXPR$1 = vr$30;
			int64 vr$31 = HMATCH( 41ll );
			if( vr$31 != 0ll ) goto label$199;
			{
				ERRREPORT( 7ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
			}
			label$199:;
			label$198:;
		}
		goto label$186;
		label$200:;
		{
			LEXSKIPTOKEN( 0ll );
			int64 vr$33 = HMATCH( 40ll );
			if( vr$33 != 0ll ) goto label$202;
			{
				ERRREPORT( 6ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
				struct $7ASTNODE* vr$35 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				fb$result$1 = vr$35;
				goto label$175;
			}
			label$202:;
			label$201:;
			struct $7ASTNODE* vr$36 = CHIGHESTPRECEXPR( (struct $8FBSYMBOL*)0ull, (struct $10FBSYMCHAIN*)0ull );
			EXPR$1 = vr$36;
			if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$204;
			{
				ERRREPORT( 24ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
				struct $7ASTNODE* vr$38 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				fb$result$1 = vr$38;
				goto label$175;
			}
			label$204:;
			label$203:;
			int64 DTYPE$3;
			DTYPE$3 = *(int64*)((uint8*)EXPR$1 + 8ll) & 511ll;
			int64 vr$41 = SYMBISSTRING( DTYPE$3 );
			if( vr$41 != 0ll ) goto label$206;
			{
				ERRREPORT( 24ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
				ASTDELTREE( EXPR$1 );
				struct $7ASTNODE* vr$43 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				fb$result$1 = vr$43;
				goto label$175;
			}
			label$206:;
			label$205:;
			struct $7ASTNODE* T$3;
			struct $7ASTNODE* vr$44 = ASTSKIPNOCONVCAST( EXPR$1 );
			T$3 = vr$44;
			{
				uint64 TMP$102$4;
				TMP$102$4 = *(uint64*)T$3;
				goto label$208;
				label$209:;
				{
				}
				goto label$207;
				label$210:;
				{
					ERRREPORTEX( 24ll, (uint8*)"for STRPTR", 0ll, 1ll, (uint8*)0ull );
				}
				goto label$207;
				label$208:;
				static const void* tmp$104[20ll] = {
					&&label$209,
					&&label$209,
					&&label$209,
					&&label$209,
					&&label$210,
					&&label$210,
					&&label$210,
					&&label$210,
					&&label$210,
					&&label$210,
					&&label$210,
					&&label$210,
					&&label$210,
					&&label$210,
					&&label$210,
					&&label$210,
					&&label$210,
					&&label$210,
					&&label$210,
					&&label$209,
				};
				if( TMP$102$4 < 17ll ) goto label$210;
				if( TMP$102$4 > 36ll ) goto label$210;
				goto *tmp$104[TMP$102$4 - 17ll];
				label$207:;
			}
			if( DTYPE$3 != 16ll ) goto label$212;
			{
				struct $7ASTNODE* vr$47 = ASTBUILDSTRPTR( EXPR$1 );
				EXPR$1 = vr$47;
			}
			goto label$211;
			label$212:;
			{
				struct $7ASTNODE* vr$48 = ASTNEWADDROF( EXPR$1 );
				struct $7ASTNODE* vr$49 = ASTNEWCONV( 35ll, (struct $8FBSYMBOL*)0ull, vr$48, 0ll, (int64*)0ull );
				EXPR$1 = vr$49;
			}
			label$211:;
			int64 vr$50 = HMATCH( 41ll );
			if( vr$50 != 0ll ) goto label$214;
			{
				ERRREPORT( 7ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
			}
			label$214:;
			label$213:;
		}
		goto label$186;
		label$187:;
		static const void* tmp$105[4ll] = {
			&&label$188,
			&&label$200,
			&&label$193,
			&&label$200,
		};
		if( TMP$101$2 < 393ll ) goto label$186;
		if( TMP$101$2 > 396ll ) goto label$186;
		goto *tmp$105[TMP$101$2 - 393ll];
		label$186:;
	}
	struct $7ASTNODE* vr$52 = CSTRIDXORMEMBERDEREF( EXPR$1 );
	fb$result$1 = vr$52;
	label$175:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__parserzexprzunary( void )
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

static struct $7ASTNODE* HPPDEFINEDEXPR( void )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$10:;
	struct $8FBSYMBOL* BASE_PARENT$1;
	int64 IS_DEFINED$1;
	LEXSKIPTOKEN( 2ll );
	int64 vr$1 = LEXGETTOKEN( 0ll );
	if( vr$1 == 40ll ) goto label$13;
	{
		ERRREPORT( 6ll, 0ll, (uint8*)0ull );
	}
	goto label$12;
	label$13:;
	{
		LEXSKIPTOKEN( 2ll );
	}
	label$12:;
	struct $10FBSYMCHAIN* vr$4 = CIDENTIFIER( &BASE_PARENT$1, 0ll );
	IS_DEFINED$1 = (int64)-(vr$4 != (struct $10FBSYMCHAIN*)0ull);
	LEXSKIPTOKEN( 0ll );
	int64 vr$6 = HMATCH( 41ll );
	if( vr$6 != 0ll ) goto label$15;
	{
		ERRREPORT( 7ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
	}
	label$15:;
	label$14:;
	struct $7ASTNODE* vr$8 = ASTNEWCONSTI( IS_DEFINED$1, 7ll, (struct $8FBSYMBOL*)0ull );
	fb$result$1 = vr$8;
	label$11:;
	return fb$result$1;
}

static struct $7ASTNODE* HCAST( $11AST_CONVOPT OPTIONS$1 )
{
	int64 TMP$96$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$93:;
	int64 DTYPE$1;
	int64 ERRMSG$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	struct $7ASTNODE* EXPR$1;
	int64 vr$1 = LEXGETTOKEN( 0ll );
	if( vr$1 == 40ll ) goto label$96;
	{
		ERRREPORT( 6ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
		struct $7ASTNODE* vr$3 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		fb$result$1 = vr$3;
		goto label$94;
	}
	label$96:;
	label$95:;
	LEXSKIPTOKEN( 0ll );
	TMP$96$1 = 0ll;
	int64 vr$7 = CSYMBOLTYPE( &DTYPE$1, &SUBTYPE$1, &TMP$96$1, 1ll );
	if( vr$7 != 0ll ) goto label$98;
	{
		ERRREPORT( 17ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( 44ll, 0ll, 0ll, 0ll );
		if( (OPTIONS$1 & 4ll) == 0ll ) goto label$100;
		{
			DTYPE$1 = 32ll;
		}
		goto label$99;
		label$100:;
		{
			DTYPE$1 = 7ll;
		}
		label$99:;
		SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
	}
	label$98:;
	label$97:;
	{
		int64 TMP$97$2;
		uint64 TMP$98$2;
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$101;
		TMP$97$2 = 22ll;
		goto label$215;
		label$101:;
		TMP$97$2 = DTYPE$1 & 31ll;
		label$215:;
		TMP$98$2 = (uint64)TMP$97$2;
		goto label$103;
		label$104:;
		{
			ERRREPORT( 24ll, -1ll, (uint8*)0ull );
			if( (OPTIONS$1 & 4ll) == 0ll ) goto label$106;
			{
				DTYPE$1 = 32ll;
			}
			goto label$105;
			label$106:;
			{
				DTYPE$1 = 7ll;
			}
			label$105:;
			SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
		}
		goto label$102;
		label$107:;
		{
			if( (OPTIONS$1 & 4ll) == 0ll ) goto label$109;
			{
				if( (*(int64*)((uint8*)&ENV$ + 352ll) & 16ll) == 0ll ) goto label$111;
				{
					ERRREPORTWARN( 27ll, (uint8*)0ull, 1ll );
				}
				label$111:;
				label$110:;
			}
			label$109:;
			label$108:;
		}
		goto label$102;
		label$112:;
		{
			OPTIONS$1 = OPTIONS$1 | 4ll;
		}
		goto label$102;
		label$113:;
		{
			if( (OPTIONS$1 & 4ll) == 0ll ) goto label$115;
			{
				ERRREPORTWARN( 27ll, (uint8*)0ull, 1ll );
			}
			label$115:;
			label$114:;
		}
		goto label$102;
		label$103:;
		static const void* tmp$106[23ll] = {
			&&label$104,
			&&label$113,
			&&label$113,
			&&label$113,
			&&label$113,
			&&label$113,
			&&label$113,
			&&label$107,
			&&label$107,
			&&label$107,
			&&label$107,
			&&label$107,
			&&label$107,
			&&label$107,
			&&label$113,
			&&label$113,
			&&label$113,
			&&label$104,
			&&label$113,
			&&label$113,
			&&label$113,
			&&label$113,
			&&label$112,
		};
		if( TMP$98$2 > 22ll ) goto label$113;
		goto *tmp$106[TMP$98$2 - 0ll];
		label$102:;
	}
	int64 vr$23 = LEXGETTOKEN( 0ll );
	if( vr$23 == 44ll ) goto label$117;
	{
		ERRREPORT( 16ll, 0ll, (uint8*)0ull );
	}
	goto label$116;
	label$117:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$116:;
	struct $7ASTNODE* vr$25 = CEXPRESSION(  );
	EXPR$1 = vr$25;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$119;
	{
		ERRREPORT( 9ll, 0ll, (uint8*)0ull );
		struct $7ASTNODE* vr$27 = ASTNEWCONSTZ( DTYPE$1, SUBTYPE$1 );
		EXPR$1 = vr$27;
	}
	label$119:;
	label$118:;
	OPTIONS$1 = OPTIONS$1 | 2ll;
	struct $7ASTNODE* vr$30 = ASTNEWCONV( DTYPE$1, SUBTYPE$1, EXPR$1, OPTIONS$1, &ERRMSG$1 );
	EXPR$1 = vr$30;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$121;
	{
		if( ERRMSG$1 != 0ll ) goto label$123;
		{
			if( (OPTIONS$1 & 4ll) == 0ll ) goto label$125;
			{
				ERRMSG$1 = 28ll;
			}
			goto label$124;
			label$125:;
			{
				ERRMSG$1 = 20ll;
			}
			label$124:;
		}
		label$123:;
		label$122:;
		ERRREPORT( ERRMSG$1, -1ll, (uint8*)0ull );
		struct $7ASTNODE* vr$35 = ASTNEWCONSTZ( DTYPE$1, SUBTYPE$1 );
		EXPR$1 = vr$35;
	}
	label$121:;
	label$120:;
	int64 vr$36 = LEXGETTOKEN( 0ll );
	if( vr$36 == 41ll ) goto label$127;
	{
		ERRREPORT( 7ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
	}
	goto label$126;
	label$127:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$126:;
	fb$result$1 = EXPR$1;
	label$94:;
	return fb$result$1;
}

static struct $7ASTNODE* HPROCPTRBODY( struct $8FBSYMBOL* BASE_PARENT$1, struct $8FBSYMBOL* PROC$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$137:;
	struct $8FBSYMBOL* SYM$1;
	int64 vr$1 = LEXGETTOKEN( 0ll );
	if( vr$1 != 40ll ) goto label$140;
	{
		LEXSKIPTOKEN( 0ll );
		int64 vr$3 = HMATCH( 41ll );
		if( vr$3 != 0ll ) goto label$142;
		{
			ERRREPORT( 7ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
		}
		label$142:;
		label$141:;
	}
	label$140:;
	label$139:;
	if( (*(int64*)((uint8*)PROC$1 + 8ll) & 1024ll) == 0ll ) goto label$144;
	{
		if( *(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 304ll) == (struct $8FBSYMBOL*)0ull ) goto label$146;
		{
			if( *(int64*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 304ll) != 3ll ) goto label$148;
			{
				struct $8FBSYMBOL* vr$11 = SYMBFINDOVERLOADPROC( PROC$1, *(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 304ll), 0ll );
				SYM$1 = vr$11;
				if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$150;
				{
					PROC$1 = SYM$1;
				}
				label$150:;
				label$149:;
			}
			label$148:;
			label$147:;
		}
		label$146:;
		label$145:;
	}
	label$144:;
	label$143:;
	if( (*(int64*)((uint8*)PROC$1 + 8ll) & 2048ll) == 0ll ) goto label$152;
	{
		uint8* vr$16 = SYMBGETFULLPROCNAME( PROC$1 );
		ERRREPORTEX( 208ll, vr$16, 0ll, 1ll, (uint8*)0ull );
		struct $7ASTNODE* vr$17 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		fb$result$1 = vr$17;
		goto label$138;
	}
	label$152:;
	label$151:;
	int64 vr$18 = SYMBCHECKACCESS( PROC$1 );
	if( vr$18 != 0ll ) goto label$154;
	{
		uint8* vr$20 = SYMBGETFULLPROCNAME( PROC$1 );
		ERRREPORTEX( 201ll, vr$20, 0ll, 1ll, (uint8*)0ull );
	}
	label$154:;
	label$153:;
	tmp$28 CALLBACK$1;
	CALLBACK$1 = *(tmp$28*)((uint8*)PROC$1 + 176ll);
	if( CALLBACK$1 == (tmp$28)0ull ) goto label$156;
	{
		(CALLBACK$1)( PROC$1 );
	}
	label$156:;
	label$155:;
	struct $7ASTNODE* vr$23 = ASTBUILDPROCADDROF( PROC$1 );
	fb$result$1 = vr$23;
	label$138:;
	return fb$result$1;
}

static struct $7ASTNODE* HVARPTRBODY( struct $8FBSYMBOL* BASE_PARENT$1, struct $10FBSYMCHAIN* CHAIN_$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$157:;
	struct $7ASTNODE* EXPR$1;
	struct $7ASTNODE* vr$1 = CHIGHESTPRECEXPR( BASE_PARENT$1, CHAIN_$1 );
	EXPR$1 = vr$1;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$160;
	{
		ERRREPORT( 14ll, 0ll, (uint8*)0ull );
		struct $7ASTNODE* vr$3 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		fb$result$1 = vr$3;
		goto label$158;
	}
	label$160:;
	label$159:;
	struct $7ASTNODE* T$1;
	struct $7ASTNODE* vr$4 = ASTSKIPNOCONVCAST( EXPR$1 );
	T$1 = vr$4;
	{
		uint64 TMP$99$2;
		TMP$99$2 = *(uint64*)T$1;
		goto label$162;
		label$163:;
		{
		}
		goto label$161;
		label$164:;
		{
			if( *(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)T$1 + 24ll) + 184ll) <= 0ll ) goto label$166;
			{
				ERRREPORT( 24ll, 0ll, (uint8*)0ull );
				ASTDELTREE( EXPR$1 );
				struct $7ASTNODE* vr$9 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				fb$result$1 = vr$9;
				goto label$158;
			}
			label$166:;
			label$165:;
		}
		goto label$161;
		label$167:;
		{
			ERRREPORTEX( 24ll, (uint8*)"for @ or VARPTR", 0ll, 1ll, (uint8*)0ull );
			ASTDELTREE( EXPR$1 );
			struct $7ASTNODE* vr$10 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
			fb$result$1 = vr$10;
			goto label$158;
		}
		goto label$161;
		label$162:;
		static const void* tmp$107[27ll] = {
			&&label$163,
			&&label$167,
			&&label$167,
			&&label$167,
			&&label$167,
			&&label$167,
			&&label$167,
			&&label$163,
			&&label$163,
			&&label$164,
			&&label$163,
			&&label$167,
			&&label$167,
			&&label$167,
			&&label$167,
			&&label$167,
			&&label$167,
			&&label$167,
			&&label$167,
			&&label$167,
			&&label$167,
			&&label$167,
			&&label$167,
			&&label$167,
			&&label$167,
			&&label$167,
			&&label$163,
		};
		if( TMP$99$2 < 10ll ) goto label$167;
		if( TMP$99$2 > 36ll ) goto label$167;
		goto *tmp$107[TMP$99$2 - 10ll];
		label$161:;
	}
	{
		struct $8FBSYMBOL* PROC$2;
		$9FB_ERRMSG ERR_NUM$2;
		struct $8FBSYMBOL* vr$12 = SYMBFINDSELFUOPOVLPROC( 22ll, EXPR$1, &ERR_NUM$2 );
		PROC$2 = vr$12;
		if( PROC$2 == (struct $8FBSYMBOL*)0ull ) goto label$169;
		{
			struct $7ASTNODE* vr$14 = ASTBUILDCALL( PROC$2, EXPR$1, (struct $7ASTNODE*)0ull, (struct $7ASTNODE*)0ull );
			EXPR$1 = vr$14;
			if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$171;
			{
				struct $7ASTNODE* vr$16 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				EXPR$1 = vr$16;
			}
			label$171:;
			label$170:;
			fb$result$1 = EXPR$1;
			goto label$158;
		}
		goto label$168;
		label$169:;
		{
			if( ERR_NUM$2 == 0ll ) goto label$173;
			{
				struct $7ASTNODE* vr$18 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				fb$result$1 = vr$18;
				goto label$158;
			}
			label$173:;
			label$172:;
		}
		label$168:;
	}
	struct $7ASTNODE* vr$19 = ASTNEWADDROF( EXPR$1 );
	fb$result$1 = vr$19;
	label$158:;
	return fb$result$1;
}

// Total compilation time: 0.03373097721487284 seconds.
