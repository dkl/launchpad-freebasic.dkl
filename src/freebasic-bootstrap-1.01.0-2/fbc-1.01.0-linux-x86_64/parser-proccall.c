// Compilation of fbc-1.01.0/src/compiler/parser-proccall.bas started at 14:16:43 on 02-28-2015

typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
typedef int64 $12FB_PARAMMODE;
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
typedef int64 $12FB_PARSEROPT;
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
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
FBSTRING* fb_StrInit( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__parserzproccall( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRREPORT( int64, int64, uint8* );
typedef int64 $11FB_LANG_OPT;
void ERRREPORTNOTALLOWED( $11FB_LANG_OPT, int64, uint8* );
void ASTDELTREE( struct $7ASTNODE* );
struct $7ASTNODE* ASTADD( struct $7ASTNODE* );
struct $7ASTNODE* ASTFINDFIRSTCODE( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWASSIGN( struct $7ASTNODE*, struct $7ASTNODE*, $9AST_OPOPT );
typedef int64 $11AST_CONVOPT;
struct $7ASTNODE* ASTNEWCONV( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, $11AST_CONVOPT, int64* );
struct $7ASTNODE* ASTSKIPNOCONVCAST( struct $7ASTNODE* );
struct $7ASTNODE* ASTREMOVENOCONVCAST( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWCONSTI( int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWADDROF( struct $7ASTNODE* );
struct $8FBSYMBOL* ASTGETSTRLITSYMBOL( struct $7ASTNODE* );
struct $7ASTNODE* ASTTYPEINIBEGIN( int64, struct $8FBSYMBOL*, int64, int64 );
void ASTTYPEINIEND( struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTTYPEINIADDCTORCALL( struct $7ASTNODE*, struct $8FBSYMBOL*, struct $7ASTNODE*, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTBUILDVARFIELD( struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* ASTBUILDPROCRESULTVAR( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTPATCHCTORCALL( struct $7ASTNODE*, struct $7ASTNODE* );
struct $7ASTNODE* ASTCALLCTORTOCALL( struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDIMPLICITCTORCALLEX( struct $8FBSYMBOL*, struct $7ASTNODE*, $12FB_PARAMMODE, int64* );
int64 ASTISACCESSTOLOCAL( struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDBYREFRESULTDEREF( struct $7ASTNODE* );
int64 ASTISBYREFRESULTDEREF( struct $7ASTNODE* );
struct $7ASTNODE* ASTREMOVEBYREFRESULTDEREF( struct $7ASTNODE* );
struct $7ASTNODE* ASTIGNORECALLRESULT( struct $7ASTNODE* );
struct $8FBSYMBOL* SYMBGETPROCRESULT( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBADDPROCPARAM( struct $8FBSYMBOL*, uint8*, int64, struct $8FBSYMBOL*, int64, int64, $13FB_SYMBATTRIB );
typedef int64 $10FB_SYMBOPT;
struct $8FBSYMBOL* SYMBADDPROC( struct $8FBSYMBOL*, uint8*, uint8*, int64, struct $8FBSYMBOL*, int64, int64, $10FB_SYMBOPT );
struct $8FBSYMBOL* SYMBPREADDPROC( uint8* );
int64 SYMBISPROCOVERLOADOF( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
int64 SYMBHASCTOR( struct $8FBSYMBOL* );
int64 SYMBHASDEFCTOR( struct $8FBSYMBOL* );
int64 SYMBISARRAY( struct $8FBSYMBOL* );
int64 SYMBGETDEFTYPE( uint8* );
struct $8FBSYMBOL* SYMBGETCOMPCTORHEAD( struct $8FBSYMBOL* );
int64 SYMBVARCHECKACCESS( struct $8FBSYMBOL* );
struct $11FB_CALL_ARG* SYMBALLOCOVLCALLARG( struct $5TLIST*, struct $16FB_CALL_ARG_LIST*, int64 );
int64 HMATCH( int64 );
typedef int64 $8LEXCHECK;
int64 LEXGETTOKEN( $8LEXCHECK );
int64 LEXGETCLASS( $8LEXCHECK );
uint8* LEXGETTEXT( void );
void LEXSKIPTOKEN( $8LEXCHECK );
int64 LEXGETLOOKAHEAD( int64, $8LEXCHECK );
typedef int64 $9FB_INIOPT;
struct $7ASTNODE* CINITIALIZER( struct $8FBSYMBOL*, $9FB_INIOPT, int64, struct $8FBSYMBOL* );
typedef int64 $8FB_IDOPT;
struct $10FBSYMCHAIN* CIDENTIFIER( struct $8FBSYMBOL**, $8FB_IDOPT );
int64 CQUIRKSTMT( $8FB_TOKEN );
int64 CCOMPSTMTISALLOWED( $15FB_CMPSTMT_MASK );
int64 CASSIGNMENTORPTRCALLEX( struct $7ASTNODE* );
int64 HISASSIGNTOKEN( int64 );
struct $7ASTNODE* CEXPRESSION( void );
struct $7ASTNODE* _Z11CVARIABLEEXP8FBSYMBOLl( struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* _Z11CVARIABLEEXP10FBSYMCHAINl( struct $10FBSYMCHAIN*, int64 );
struct $7ASTNODE* CWITHVARIABLE( int64 );
struct $7ASTNODE* CIMPLICITDATAMEMBER( struct $8FBSYMBOL*, struct $10FBSYMCHAIN*, int64, $12FB_PARSEROPT );
typedef int64 $13FB_VAREXPROPT;
struct $7ASTNODE* CVARORDEREF( $13FB_VAREXPROPT );
struct $7ASTNODE* CCONSTANT( struct $8FBSYMBOL* );
struct $7ASTNODE* CPROCARGLIST( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $7ASTNODE*, struct $16FB_CALL_ARG_LIST*, $12FB_PARSEROPT );
void HMETHODCALLADDINSTPTROVLARG( struct $8FBSYMBOL*, struct $7ASTNODE*, struct $16FB_CALL_ARG_LIST*, $12FB_PARSEROPT* );
int64 CMAYBEIGNORECALLRESULT( struct $7ASTNODE* );
struct $7ASTNODE* CPROCCALL( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $7ASTNODE*, struct $7ASTNODE*, int64, $12FB_PARSEROPT );
struct $7ASTNODE* CCTORCALL( struct $8FBSYMBOL* );
struct $7ASTNODE* CSTRIDXORMEMBERDEREF( struct $7ASTNODE* );
void CASSIGNMENT( struct $7ASTNODE* );
$12FB_PARAMMODE CBYDESCARRAYARGPARENS( struct $7ASTNODE* );
int64 CASSIGNFUNCTRESULT( int64 );
void COPERATORDELETE( void );
void HSKIPUNTIL( int64, int64, $8LEXCHECK, int64 );
static void HCTORCHAIN( void );
static void HBASEINIT( void );
static int64 HBASEMEMBERACCESS( void );
int64 HFORWARDCALL( void );
static int64 HLOOKSLIKEENDOFSTATEMENT( void );
static int64 HPROCSYMBOL( struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64, $12FB_PARSEROPT );
static int64 HVARSYMBOL( struct $8FBSYMBOL*, int64 );
static int64 HASSIGNORCALL_QB( struct $10FBSYMCHAIN*, int64 );
static int64 HASSIGNORPTRCALL( struct $7ASTNODE*, int64 );
static int64 HASSIGNORCALL( struct $8FBSYMBOL*, struct $10FBSYMCHAIN*, int64, $12FB_PARSEROPT );
static int64 HPROCCALLORASSIGN_QB( void );
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
struct $23AST_DTORLIST_SCOPESTACK {
	int64* COOKIES;
	int64 COUNT;
	int64 ROOM;
};
__FB_STATIC_ASSERT( sizeof( struct $23AST_DTORLIST_SCOPESTACK ) == 24 );
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

$12FB_PARAMMODE CBYDESCARRAYARGPARENS( struct $7ASTNODE* ARG$1 )
{
	$12FB_PARAMMODE fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$10:;
	fb$result$1 = -1ll;
	int64 vr$1 = LEXGETTOKEN( 0ll );
	if( vr$1 != 40ll ) goto label$13;
	{
		int64 vr$3 = LEXGETLOOKAHEAD( 1ll, 0ll );
		if( vr$3 != 41ll ) goto label$15;
		{
			if( *(struct $8FBSYMBOL**)((uint8*)ARG$1 + 24ll) == (struct $8FBSYMBOL*)0ull ) goto label$17;
			{
				int64 vr$8 = SYMBISARRAY( *(struct $8FBSYMBOL**)((uint8*)ARG$1 + 24ll) );
				if( vr$8 == 0ll ) goto label$19;
				{
					LEXSKIPTOKEN( 0ll );
					LEXSKIPTOKEN( 0ll );
					fb$result$1 = 3ll;
				}
				label$19:;
				label$18:;
			}
			label$17:;
			label$16:;
		}
		label$15:;
		label$14:;
	}
	label$13:;
	label$12:;
	label$11:;
	return fb$result$1;
}

int64 CASSIGNFUNCTRESULT( int64 IS_RETURN$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$20:;
	struct $8FBSYMBOL* RES$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	struct $7ASTNODE* RHS$1;
	struct $7ASTNODE* EXPR$1;
	int64 HAS_CTOR$1;
	int64 HAS_DEFCTOR$1;
	int64 ASSIGNOPTIONS$1;
	fb$result$1 = 0ll;
	struct $8FBSYMBOL* vr$1 = SYMBGETPROCRESULT( *(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) );
	RES$1 = vr$1;
	if( RES$1 != (struct $8FBSYMBOL*)0ull ) goto label$23;
	{
		ERRREPORT( 17ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
		fb$result$1 = -1ll;
		goto label$21;
	}
	label$23:;
	label$22:;
	int64 vr$3 = SYMBHASCTOR( *(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) );
	HAS_CTOR$1 = vr$3;
	int64 vr$4 = SYMBHASDEFCTOR( *(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) );
	HAS_DEFCTOR$1 = vr$4;
	int64 RETURNS_BYREF$1;
	RETURNS_BYREF$1 = (int64)-((*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 8ll) & 33554432ll) != 0ll);
	if( IS_RETURN$1 == 0ll ) goto label$25;
	{
		if( (*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 200ll) + 96ll) & 2ll) == 0ll ) goto label$27;
		{
			if( (HAS_DEFCTOR$1 & ~RETURNS_BYREF$1) == 0ll ) goto label$29;
			{
				ERRREPORT( 177ll, 0ll, (uint8*)0ull );
			}
			label$29:;
			label$28:;
		}
		label$27:;
		label$26:;
		*($12FB_PROCSTATS*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 200ll) + 96ll) = *(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 200ll) + 96ll) | 1ll;
	}
	goto label$24;
	label$25:;
	{
		if( (*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 200ll) + 96ll) & 1ll) == 0ll ) goto label$31;
		{
			if( (HAS_DEFCTOR$1 & ~RETURNS_BYREF$1) == 0ll ) goto label$33;
			{
				ERRREPORT( 178ll, 0ll, (uint8*)0ull );
			}
			label$33:;
			label$32:;
		}
		label$31:;
		label$30:;
		*($12FB_PROCSTATS*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 200ll) + 96ll) = *(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 200ll) + 96ll) | 2ll;
	}
	label$24:;
	*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 304ll) = *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 56ll);
	*(int64*)((uint8*)&PARSER$ + 296ll) = *(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 48ll) & 511ll;
	int64 vr$36 = HMATCH( 319ll );
	if( (RETURNS_BYREF$1 & ~vr$36) == 0ll ) goto label$35;
	{
		struct $7ASTNODE* vr$40 = CVARORDEREF( 4ll );
		RHS$1 = vr$40;
		if( RHS$1 == (struct $7ASTNODE*)0ull ) goto label$37;
		{
			int64 vr$42 = ASTISACCESSTOLOCAL( RHS$1 );
			if( vr$42 == 0ll ) goto label$39;
			{
				ERRREPORT( 271ll, 0ll, (uint8*)0ull );
			}
			label$39:;
			label$38:;
			struct $8FBSYMBOL* vr$47 = ASTGETSTRLITSYMBOL( RHS$1 );
			if( ((int64)-((*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 48ll) & 511ll) == 16ll) & (int64)-(vr$47 != (struct $8FBSYMBOL*)0ull)) == 0ll ) goto label$41;
			{
				ERRREPORT( 24ll, 0ll, (uint8*)0ull );
				ASTDELTREE( RHS$1 );
				RHS$1 = (struct $7ASTNODE*)0ull;
			}
			goto label$40;
			label$41:;
			{
				struct $7ASTNODE* vr$51 = ASTNEWADDROF( RHS$1 );
				RHS$1 = vr$51;
			}
			label$40:;
		}
		label$37:;
		label$36:;
	}
	goto label$34;
	label$35:;
	{
		struct $7ASTNODE* vr$52 = CEXPRESSION(  );
		RHS$1 = vr$52;
	}
	label$34:;
	*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 304ll) = (struct $8FBSYMBOL*)0ull;
	*(int64*)((uint8*)&PARSER$ + 296ll) = 2147483648ll;
	if( RHS$1 != (struct $7ASTNODE*)0ull ) goto label$43;
	{
		ERRREPORT( 9ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
		fb$result$1 = -1ll;
		goto label$21;
	}
	label$43:;
	label$42:;
	*($12FB_SYMBSTATS*)((uint8*)RES$1 + 16ll) = *(int64*)((uint8*)RES$1 + 16ll) | 2ll;
	ASSIGNOPTIONS$1 = 0ll;
	if( IS_RETURN$1 == 0ll ) goto label$45;
	{
		if( HAS_CTOR$1 == 0ll ) goto label$47;
		{
			int64 IS_CTORCALL$3;
			$12FB_PARAMMODE vr$60 = CBYDESCARRAYARGPARENS( RHS$1 );
			struct $7ASTNODE* vr$61 = ASTBUILDIMPLICITCTORCALLEX( RES$1, RHS$1, vr$60, &IS_CTORCALL$3 );
			RHS$1 = vr$61;
			if( RHS$1 != (struct $7ASTNODE*)0ull ) goto label$49;
			{
				goto label$21;
			}
			label$49:;
			label$48:;
			if( IS_CTORCALL$3 == 0ll ) goto label$51;
			{
				struct $7ASTNODE* vr$64 = ASTBUILDPROCRESULTVAR( *(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll), RES$1 );
				struct $7ASTNODE* vr$65 = ASTPATCHCTORCALL( RHS$1, vr$64 );
				ASTADD( vr$65 );
				fb$result$1 = -1ll;
				goto label$21;
			}
			label$51:;
			label$50:;
		}
		label$47:;
		label$46:;
		ASSIGNOPTIONS$1 = 64ll;
	}
	label$45:;
	label$44:;
	struct $7ASTNODE* vr$66 = ASTBUILDPROCRESULTVAR( *(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll), RES$1 );
	struct $7ASTNODE* vr$67 = ASTNEWASSIGN( vr$66, RHS$1, ASSIGNOPTIONS$1 );
	EXPR$1 = vr$67;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$53;
	{
		ASTDELTREE( RHS$1 );
		ERRREPORT( 180ll, 0ll, (uint8*)0ull );
	}
	goto label$52;
	label$53:;
	{
		ASTADD( EXPR$1 );
	}
	label$52:;
	fb$result$1 = -1ll;
	label$21:;
	return fb$result$1;
}

void HMETHODCALLADDINSTPTROVLARG( struct $8FBSYMBOL* PROC$1, struct $7ASTNODE* THISEXPR$1, struct $16FB_CALL_ARG_LIST* ARG_LIST$1, $12FB_PARSEROPT* OPTIONS$1 )
{
	int64 TMP$86$1;
	label$54:;
	if( THISEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$57;
	{
		goto label$55;
	}
	label$57:;
	label$56:;
	struct $11FB_CALL_ARG* ARG$1;
	struct $11FB_CALL_ARG* vr$2 = SYMBALLOCOVLCALLARG( (struct $5TLIST*)((uint8*)&PARSER$ + 216ll), ARG_LIST$1, 0ll );
	ARG$1 = vr$2;
	struct $8FBSYMBOL* PARENT$1;
	PARENT$1 = *(struct $8FBSYMBOL**)*(struct $10FBSYMBOLTB**)((uint8*)PROC$1 + 272ll);
	if( *(struct $8FBSYMBOL**)((uint8*)THISEXPR$1 + 16ll) == PARENT$1 ) goto label$59;
	{
		struct $7ASTNODE* vr$9 = ASTNEWCONV( *(int64*)((uint8*)PARENT$1 + 48ll) & 511ll, PARENT$1, THISEXPR$1, 0ll, (int64*)0ull );
		THISEXPR$1 = vr$9;
	}
	label$59:;
	label$58:;
	*(struct $7ASTNODE**)ARG$1 = THISEXPR$1;
	if( *(int64*)THISEXPR$1 != 16ll ) goto label$60;
	TMP$86$1 = 1ll;
	goto label$61;
	label$60:;
	TMP$86$1 = -1ll;
	label$61:;
	*($12FB_PARAMMODE*)((uint8*)ARG$1 + 8ll) = TMP$86$1;
	*OPTIONS$1 = *(int64*)OPTIONS$1 | 64ll;
	label$55:;
}

int64 CMAYBEIGNORECALLRESULT( struct $7ASTNODE* EXPR$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$72:;
	struct $7ASTNODE* T$1;
	struct $7ASTNODE* vr$1 = ASTSKIPNOCONVCAST( EXPR$1 );
	T$1 = vr$1;
	if( *(int64*)T$1 != 9ll ) goto label$75;
	{
		struct $7ASTNODE* vr$4 = ASTREMOVENOCONVCAST( EXPR$1 );
		struct $7ASTNODE* vr$5 = ASTIGNORECALLRESULT( vr$4 );
		ASTADD( vr$5 );
		fb$result$1 = -1ll;
	}
	goto label$74;
	label$75:;
	int64 vr$6 = ASTISBYREFRESULTDEREF( T$1 );
	int64 vr$7 = HLOOKSLIKEENDOFSTATEMENT(  );
	if( (vr$6 & vr$7) == 0ll ) goto label$76;
	{
		struct $7ASTNODE* vr$10 = ASTREMOVENOCONVCAST( EXPR$1 );
		struct $7ASTNODE* vr$11 = ASTREMOVEBYREFRESULTDEREF( vr$10 );
		struct $7ASTNODE* vr$12 = ASTIGNORECALLRESULT( vr$11 );
		ASTADD( vr$12 );
		fb$result$1 = -1ll;
	}
	goto label$74;
	label$76:;
	{
		fb$result$1 = 0ll;
	}
	label$74:;
	label$73:;
	return fb$result$1;
}

struct $7ASTNODE* CPROCCALL( struct $8FBSYMBOL* BASE_PARENT$1, struct $8FBSYMBOL* SYM$1, struct $7ASTNODE* PTREXPR$1, struct $7ASTNODE* THISEXPR$1, int64 CHECKPRNTS$1, $12FB_PARSEROPT OPTIONS$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$77:;
	int64 IS_PROPSET$1;
	IS_PROPSET$1 = 0ll;
	struct $7ASTNODE* PROCEXPR$1;
	struct $16FB_CALL_ARG_LIST ARG_LIST$1;
	*(int64*)&ARG_LIST$1 = 0ll;
	*(struct $11FB_CALL_ARG**)((uint8*)&ARG_LIST$1 + 8ll) = (struct $11FB_CALL_ARG*)0ull;
	*(struct $11FB_CALL_ARG**)((uint8*)&ARG_LIST$1 + 16ll) = (struct $11FB_CALL_ARG*)0ull;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	HMETHODCALLADDINSTPTROVLARG( SYM$1, THISEXPR$1, &ARG_LIST$1, &OPTIONS$1 );
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 32768ll) == 0ll ) goto label$80;
	{
		int64 IS_INDEXED$2;
		IS_INDEXED$2 = 0ll;
		int64 vr$10 = LEXGETTOKEN( 0ll );
		if( vr$10 != 40ll ) goto label$82;
		{
			IS_INDEXED$2 = -1ll;
			LEXSKIPTOKEN( 0ll );
			struct $7ASTNODE* EXPR$3;
			struct $7ASTNODE* vr$12 = CEXPRESSION(  );
			EXPR$3 = vr$12;
			if( EXPR$3 != (struct $7ASTNODE*)0ull ) goto label$84;
			{
				ERRREPORT( 9ll, 0ll, (uint8*)0ull );
				struct $7ASTNODE* vr$14 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				EXPR$3 = vr$14;
			}
			label$84:;
			label$83:;
			struct $11FB_CALL_ARG* ARG$3;
			struct $11FB_CALL_ARG* vr$17 = SYMBALLOCOVLCALLARG( (struct $5TLIST*)((uint8*)&PARSER$ + 216ll), &ARG_LIST$1, 0ll );
			ARG$3 = vr$17;
			*(struct $7ASTNODE**)ARG$3 = EXPR$3;
			*($12FB_PARAMMODE*)((uint8*)ARG$3 + 8ll) = -1ll;
			int64 vr$20 = LEXGETTOKEN( 0ll );
			if( vr$20 == 41ll ) goto label$86;
			{
				ERRREPORT( 7ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
			}
			goto label$85;
			label$86:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$85:;
		}
		label$82:;
		label$81:;
		int64 vr$22 = LEXGETTOKEN( 0ll );
		int64 vr$23 = HISASSIGNTOKEN( vr$22 );
		if( vr$23 == 0ll ) goto label$88;
		{
			if( IS_INDEXED$2 == 0ll ) goto label$90;
			{
				if( (int64)-(((int64)*(int16*)((uint8*)*(struct $8FBSYMBOL**)*(struct $10FBSYMBOLTB**)((uint8*)SYM$1 + 272ll) + 200ll) & 1024ll) != 0ll) != 0ll ) goto label$92;
				{
					ERRREPORT( 196ll, -1ll, (uint8*)0ull );
					goto label$78;
				}
				label$92:;
				label$91:;
			}
			goto label$89;
			label$90:;
			{
				if( (int64)-(((int64)*(int16*)((uint8*)*(struct $8FBSYMBOL**)*(struct $10FBSYMBOLTB**)((uint8*)SYM$1 + 272ll) + 200ll) & 256ll) != 0ll) != 0ll ) goto label$94;
				{
					ERRREPORT( 194ll, 0ll, (uint8*)0ull );
					goto label$78;
				}
				label$94:;
				label$93:;
			}
			label$89:;
			LEXSKIPTOKEN( 0ll );
			IS_PROPSET$1 = -1ll;
		}
		goto label$87;
		label$88:;
		{
			OPTIONS$1 = OPTIONS$1 | 128ll;
			if( IS_INDEXED$2 == 0ll ) goto label$96;
			{
				if( (int64)-(((int64)*(int16*)((uint8*)*(struct $8FBSYMBOL**)*(struct $10FBSYMBOLTB**)((uint8*)SYM$1 + 272ll) + 200ll) & 512ll) != 0ll) != 0ll ) goto label$98;
				{
					ERRREPORT( 195ll, -1ll, (uint8*)0ull );
					goto label$78;
				}
				label$98:;
				label$97:;
			}
			goto label$95;
			label$96:;
			{
				if( (int64)-(((int64)*(int16*)((uint8*)*(struct $8FBSYMBOL**)*(struct $10FBSYMBOLTB**)((uint8*)SYM$1 + 272ll) + 200ll) & 128ll) != 0ll) != 0ll ) goto label$100;
				{
					ERRREPORT( 193ll, 0ll, (uint8*)0ull );
					goto label$78;
				}
				label$100:;
				label$99:;
			}
			label$95:;
		}
		label$87:;
		CHECKPRNTS$1 = 0ll;
	}
	goto label$79;
	label$80:;
	{
		if( CHECKPRNTS$1 != -1ll ) goto label$102;
		{
			if( (int64)*(int16*)((uint8*)SYM$1 + 112ll) != 0ll ) goto label$104;
			{
				CHECKPRNTS$1 = 0ll;
			}
			label$104:;
			label$103:;
		}
		goto label$101;
		label$102:;
		if( PTREXPR$1 == (struct $7ASTNODE*)0ull ) goto label$105;
		{
			CHECKPRNTS$1 = -1ll;
		}
		label$105:;
		label$101:;
	}
	label$79:;
	if( CHECKPRNTS$1 == 0ll ) goto label$107;
	{
		int64 vr$62 = HMATCH( 40ll );
		if( vr$62 != 0ll ) goto label$109;
		{
			ERRREPORT( 6ll, 0ll, (uint8*)0ull );
		}
		label$109:;
		label$108:;
	}
	label$107:;
	label$106:;
	*(int64*)((uint8*)&PARSER$ + 280ll) = 0ll;
	if( ~CHECKPRNTS$1 == 0ll ) goto label$111;
	{
		*($12FB_PARSEROPT*)((uint8*)&PARSER$ + 288ll) = *(int64*)((uint8*)&PARSER$ + 288ll) | 1ll;
	}
	goto label$110;
	label$111:;
	{
		*($12FB_PARSEROPT*)((uint8*)&PARSER$ + 288ll) = *(int64*)((uint8*)&PARSER$ + 288ll) & -2ll;
	}
	label$110:;
	struct $7ASTNODE* vr$69 = CPROCARGLIST( BASE_PARENT$1, SYM$1, PTREXPR$1, &ARG_LIST$1, OPTIONS$1 );
	PROCEXPR$1 = vr$69;
	if( PROCEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$113;
	{
		HSKIPUNTIL( 41ll, 0ll, 0ll, 0ll );
		goto label$78;
	}
	label$113:;
	label$112:;
	if( (CHECKPRNTS$1 | (int64)-(*(int64*)((uint8*)&PARSER$ + 280ll) > 0ll)) == 0ll ) goto label$115;
	{
		*(int64*)((uint8*)&PARSER$ + 280ll) = *(int64*)((uint8*)&PARSER$ + 280ll) + -1ll;
		int64 vr$75 = HMATCH( 41ll );
		if( vr$75 != 0ll ) goto label$117;
		{
			ERRREPORT( 7ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
		}
		goto label$116;
		label$117:;
		if( *(int64*)((uint8*)&PARSER$ + 280ll) <= 0ll ) goto label$118;
		{
			label$119:;
			if( *(int64*)((uint8*)&PARSER$ + 280ll) <= 0ll ) goto label$120;
			{
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
				*(int64*)((uint8*)&PARSER$ + 280ll) = *(int64*)((uint8*)&PARSER$ + 280ll) + -1ll;
			}
			goto label$119;
			label$120:;
		}
		label$118:;
		label$116:;
	}
	label$115:;
	label$114:;
	goto label$122;
	{
		*($12FB_PARSEROPT*)((uint8*)&PARSER$ + 288ll) = *(int64*)((uint8*)&PARSER$ + 288ll) | 1ll;
	}
	goto label$121;
	label$122:;
	{
		*($12FB_PARSEROPT*)((uint8*)&PARSER$ + 288ll) = *(int64*)((uint8*)&PARSER$ + 288ll) & -2ll;
	}
	label$121:;
	if( IS_PROPSET$1 != 0ll ) goto label$124;
	{
		struct $7ASTNODE* vr$83 = ASTBUILDBYREFRESULTDEREF( PROCEXPR$1 );
		PROCEXPR$1 = vr$83;
		struct $7ASTNODE* vr$84 = CSTRIDXORMEMBERDEREF( PROCEXPR$1 );
		PROCEXPR$1 = vr$84;
		if( PROCEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$126;
		{
			goto label$78;
		}
		label$126:;
		label$125:;
	}
	label$124:;
	label$123:;
	int64 vr$86 = CMAYBEIGNORECALLRESULT( PROCEXPR$1 );
	if( vr$86 == 0ll ) goto label$128;
	{
		fb$result$1 = (struct $7ASTNODE*)0ull;
	}
	goto label$127;
	label$128:;
	{
		fb$result$1 = PROCEXPR$1;
	}
	label$127:;
	label$78:;
	return fb$result$1;
}

int64 CPROCCALLORASSIGN( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$249:;
	struct $10FBSYMCHAIN* CHAIN_$1;
	struct $8FBSYMBOL* BASE_PARENT$1;
	struct $7ASTNODE* EXPR$1;
	fb$result$1 = 0ll;
	if( *(int64*)((uint8*)&ENV$ + 272ll) != 3ll ) goto label$252;
	{
		int64 vr$2 = HPROCCALLORASSIGN_QB(  );
		fb$result$1 = vr$2;
		goto label$250;
	}
	label$252:;
	label$251:;
	{
		uint64 TMP$94$2;
		int64 vr$3 = LEXGETCLASS( 0ll );
		TMP$94$2 = (uint64)vr$3;
		goto label$254;
		label$255:;
		{
			struct $10FBSYMCHAIN* vr$5 = CIDENTIFIER( &BASE_PARENT$1, 50ll );
			CHAIN_$1 = vr$5;
			int64 vr$6 = HASSIGNORCALL( BASE_PARENT$1, CHAIN_$1, 0ll, 0ll );
			fb$result$1 = vr$6;
			goto label$250;
		}
		goto label$253;
		label$256:;
		{
			{
				uint64 TMP$95$4;
				int64 vr$7 = LEXGETTOKEN( 0ll );
				TMP$95$4 = (uint64)vr$7;
				goto label$258;
				label$259:;
				{
					if( *(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) != *(struct $8FBSYMBOL**)((uint8*)&ENV$ + 1136ll) ) goto label$261;
					{
						ERRREPORT( 253ll, 0ll, (uint8*)0ull );
						HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
						fb$result$1 = -1ll;
						goto label$250;
					}
					label$261:;
					label$260:;
					if( (*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 8ll) & 16384ll) == 0ll ) goto label$263;
					{
						ERRREPORT( 156ll, 0ll, (uint8*)0ull );
					}
					goto label$262;
					label$263:;
					if( (*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 8ll) & 32768ll) == 0ll ) goto label$264;
					{
						ERRREPORT( 191ll, 0ll, (uint8*)0ull );
					}
					label$264:;
					label$262:;
					LEXSKIPTOKEN( 0ll );
					LEXSKIPTOKEN( 0ll );
					int64 vr$15 = CASSIGNFUNCTRESULT( 0ll );
					fb$result$1 = vr$15;
					goto label$250;
				}
				goto label$257;
				label$265:;
				{
					if( (int64)-((*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 8ll) & 16384ll) != 0ll) != 0ll ) goto label$267;
					{
						ERRREPORT( 143ll, 0ll, (uint8*)0ull );
						HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
						fb$result$1 = -1ll;
						goto label$250;
					}
					label$267:;
					label$266:;
					LEXSKIPTOKEN( 0ll );
					LEXSKIPTOKEN( 0ll );
					int64 vr$20 = CASSIGNFUNCTRESULT( 0ll );
					fb$result$1 = vr$20;
					goto label$250;
				}
				goto label$257;
				label$268:;
				{
					if( *(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) != *(struct $8FBSYMBOL**)((uint8*)&ENV$ + 1136ll) ) goto label$270;
					{
						ERRREPORT( 192ll, 0ll, (uint8*)0ull );
						HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
						fb$result$1 = -1ll;
						goto label$250;
					}
					goto label$269;
					label$270:;
					{
						if( (int64)-((*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 8ll) & 32768ll) != 0ll) != 0ll ) goto label$272;
						{
							ERRREPORT( 192ll, 0ll, (uint8*)0ull );
						}
						label$272:;
						label$271:;
					}
					label$269:;
					LEXSKIPTOKEN( 0ll );
					LEXSKIPTOKEN( 0ll );
					int64 vr$26 = CASSIGNFUNCTRESULT( 0ll );
					fb$result$1 = vr$26;
					goto label$250;
				}
				goto label$257;
				label$273:;
				{
					HCTORCHAIN(  );
					fb$result$1 = -1ll;
					goto label$250;
				}
				goto label$257;
				label$274:;
				{
					int64 vr$27 = LEXGETLOOKAHEAD( 1ll, 0ll );
					if( vr$27 != 46ll ) goto label$276;
					{
						int64 vr$29 = HBASEMEMBERACCESS(  );
						fb$result$1 = vr$29;
						goto label$250;
					}
					goto label$275;
					label$276:;
					{
						HBASEINIT(  );
						fb$result$1 = -1ll;
						goto label$250;
					}
					label$275:;
				}
				goto label$257;
				label$277:;
				{
					if( (int64)-((*(int64*)((uint8*)&ENV$ + 1152ll) & 131072ll) != 0ll) != 0ll ) goto label$279;
					{
						ERRREPORTNOTALLOWED( 131072ll, 145ll, (uint8*)0ull );
						HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
						fb$result$1 = -1ll;
						goto label$250;
					}
					label$279:;
					label$278:;
					int64 vr$33 = CCOMPSTMTISALLOWED( 1ll );
					if( vr$33 != 0ll ) goto label$281;
					{
						HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
						fb$result$1 = -1ll;
						goto label$250;
					}
					label$281:;
					label$280:;
					LEXSKIPTOKEN( 0ll );
					struct $10FBSYMCHAIN* vr$36 = CIDENTIFIER( &BASE_PARENT$1, 34ll );
					CHAIN_$1 = vr$36;
					if( CHAIN_$1 == (struct $10FBSYMCHAIN*)0ull ) goto label$283;
					{
						int64 vr$38 = HASSIGNORCALL( BASE_PARENT$1, CHAIN_$1, -1ll, 0ll );
						fb$result$1 = vr$38;
						goto label$250;
					}
					label$283:;
					label$282:;
					ERRREPORT( 14ll, 0ll, (uint8*)0ull );
					fb$result$1 = -1ll;
					goto label$250;
				}
				goto label$257;
				label$258:;
				static const void* tmp$96[47ll] = {
					&&label$259,
					&&label$273,
					&&label$257,
					&&label$265,
					&&label$268,
					&&label$257,
					&&label$257,
					&&label$274,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$257,
					&&label$277,
				};
				if( TMP$95$4 < 346ll ) goto label$257;
				if( TMP$95$4 > 392ll ) goto label$257;
				goto *tmp$96[TMP$95$4 - 346ll];
				label$257:;
			}
		}
		goto label$253;
		label$284:;
		{
			int64 vr$39 = LEXGETTOKEN( 0ll );
			if( vr$39 != 387ll ) goto label$286;
			{
				COPERATORDELETE(  );
				fb$result$1 = -1ll;
				goto label$250;
			}
			label$286:;
			label$285:;
		}
		goto label$253;
		label$287:;
		{
			int64 vr$41 = LEXGETTOKEN( 0ll );
			if( vr$41 != 46ll ) goto label$289;
			{
				if( *(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 104ll) == (struct $13FB_CMPSTMTSTK*)0ull ) goto label$291;
				{
					int64 vr$44 = LEXGETLOOKAHEAD( 1ll, 64ll );
					if( vr$44 == 46ll ) goto label$293;
					{
						struct $7ASTNODE* vr$48 = CWITHVARIABLE( (int64)-((*(int64*)((uint8*)&PARSER$ + 288ll) & 2ll) != 0ll) );
						EXPR$1 = vr$48;
						if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$295;
						{
							goto label$250;
						}
						label$295:;
						label$294:;
						int64 vr$50 = CASSIGNMENTORPTRCALLEX( EXPR$1 );
						fb$result$1 = vr$50;
						goto label$250;
					}
					label$293:;
					label$292:;
				}
				label$291:;
				label$290:;
				struct $10FBSYMCHAIN* vr$52 = CIDENTIFIER( &BASE_PARENT$1, 50ll );
				CHAIN_$1 = vr$52;
				if( CHAIN_$1 == (struct $10FBSYMCHAIN*)0ull ) goto label$297;
				{
					int64 vr$54 = HASSIGNORCALL( BASE_PARENT$1, CHAIN_$1, 0ll, 0ll );
					fb$result$1 = vr$54;
					goto label$250;
				}
				label$297:;
				label$296:;
			}
			label$289:;
			label$288:;
		}
		goto label$253;
		label$254:;
		static const void* tmp$97[7ll] = {
			&&label$255,
			&&label$256,
			&&label$255,
			&&label$253,
			&&label$253,
			&&label$284,
			&&label$287,
		};
		if( TMP$94$2 > 6ll ) goto label$253;
		goto *tmp$97[TMP$94$2 - 0ll];
		label$253:;
	}
	label$250:;
	return fb$result$1;
}

int64 HFORWARDCALL( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$331:;
	fb$result$1 = 0ll;
	{
		int64 TMP$98$2;
		int64 vr$1 = LEXGETCLASS( 0ll );
		TMP$98$2 = vr$1;
		if( TMP$98$2 != 0ll ) goto label$334;
		label$335:;
		{
			if( (*(int64*)((uint8*)&ENV$ + 1152ll) & 524288ll) == 0ll ) goto label$337;
			{
				if( (int64)-(*(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll) == (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll)) != 0ll ) goto label$339;
				{
					if( *(int64*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 4144ll) <= 0ll ) goto label$341;
					{
						ERRREPORT( 89ll, 0ll, (uint8*)0ull );
					}
					label$341:;
					label$340:;
				}
				label$339:;
				label$338:;
			}
			label$337:;
			label$336:;
		}
		goto label$333;
		label$334:;
		{
			ERRREPORT( 14ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( 40ll, 0ll, 0ll, 0ll );
			goto label$332;
		}
		label$342:;
		label$333:;
	}
	FBSTRING ID$1;
	uint8* vr$11 = LEXGETTEXT(  );
	FBSTRING* vr$13 = fb_StrInit( (void*)&ID$1, -1ll, (void*)vr$11, 0ll, 0 );
	if( *(int64*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 16ll) == 2147483648ll ) goto label$344;
	{
		ERRREPORT( 17ll, 0ll, (uint8*)0ull );
	}
	label$344:;
	label$343:;
	LEXSKIPTOKEN( 0ll );
	struct $8FBSYMBOL* PROC$1;
	struct $8FBSYMBOL* vr$17 = SYMBPREADDPROC( *(uint8**)&ID$1 );
	PROC$1 = vr$17;
	int64 CHECK_PRNT$1;
	CHECK_PRNT$1 = 0ll;
	int64 vr$18 = LEXGETTOKEN( 0ll );
	if( vr$18 != 40ll ) goto label$346;
	{
		LEXSKIPTOKEN( 0ll );
		CHECK_PRNT$1 = -1ll;
	}
	label$346:;
	label$345:;
	struct $16FB_CALL_ARG_LIST ARG_LIST$1;
	*(int64*)&ARG_LIST$1 = 0ll;
	*(struct $11FB_CALL_ARG**)((uint8*)&ARG_LIST$1 + 8ll) = (struct $11FB_CALL_ARG*)0ull;
	*(struct $11FB_CALL_ARG**)((uint8*)&ARG_LIST$1 + 16ll) = (struct $11FB_CALL_ARG*)0ull;
	label$347:;
	{
		int64 TMP$100$2;
		struct $7ASTNODE* EXPR$2;
		struct $7ASTNODE* vr$24 = CEXPRESSION(  );
		EXPR$2 = vr$24;
		if( EXPR$2 != (struct $7ASTNODE*)0ull ) goto label$351;
		{
			goto label$348;
		}
		label$351:;
		label$350:;
		$12FB_PARAMMODE MODE$2;
		MODE$2 = 2ll;
		int64 vr$26 = LEXGETTOKEN( 0ll );
		if( vr$26 != 40ll ) goto label$353;
		{
			int64 vr$28 = LEXGETLOOKAHEAD( 1ll, 0ll );
			if( vr$28 != 41ll ) goto label$355;
			{
				LEXSKIPTOKEN( 0ll );
				LEXSKIPTOKEN( 0ll );
				MODE$2 = 3ll;
			}
			label$355:;
			label$354:;
		}
		label$353:;
		label$352:;
		int64 DTYPE$2;
		DTYPE$2 = 0ll;
		{
			int64 TMP$99$3;
			TMP$99$3 = *(int64*)((uint8*)EXPR$2 + 8ll) & 511ll;
			if( TMP$99$3 == 16ll ) goto label$358;
			label$359:;
			if( TMP$99$3 == 17ll ) goto label$358;
			label$360:;
			if( TMP$99$3 == 3ll ) goto label$358;
			label$361:;
			if( TMP$99$3 != 6ll ) goto label$357;
			label$358:;
			{
				DTYPE$2 = 16ll;
			}
			label$357:;
			label$356:;
		}
		if( MODE$2 != 3ll ) goto label$362;
		TMP$100$2 = -1ll;
		goto label$375;
		label$362:;
		TMP$100$2 = 0ll;
		label$375:;
		struct $8FBSYMBOL* vr$37 = SYMBADDPROCPARAM( PROC$1, (uint8*)0ull, DTYPE$2, (struct $8FBSYMBOL*)0ull, TMP$100$2, MODE$2, 0ll );
		if( vr$37 != (struct $8FBSYMBOL*)0ull ) goto label$364;
		{
			goto label$348;
		}
		label$364:;
		label$363:;
		struct $11FB_CALL_ARG* ARG$2;
		struct $11FB_CALL_ARG* vr$41 = SYMBALLOCOVLCALLARG( (struct $5TLIST*)((uint8*)&PARSER$ + 216ll), &ARG_LIST$1, 0ll );
		ARG$2 = vr$41;
		*(struct $7ASTNODE**)ARG$2 = EXPR$2;
		*($12FB_PARAMMODE*)((uint8*)ARG$2 + 8ll) = -1ll;
		int64 vr$44 = LEXGETTOKEN( 0ll );
		if( vr$44 == 44ll ) goto label$366;
		{
			goto label$348;
		}
		label$366:;
		label$365:;
		LEXSKIPTOKEN( 0ll );
	}
	label$349:;
	goto label$347;
	label$348:;
	if( CHECK_PRNT$1 == 0ll ) goto label$368;
	{
		int64 vr$47 = LEXGETTOKEN( 0ll );
		if( vr$47 == 41ll ) goto label$370;
		{
			ERRREPORT( 7ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
		}
		goto label$369;
		label$370:;
		{
			LEXSKIPTOKEN( 0ll );
		}
		label$369:;
	}
	label$368:;
	label$367:;
	struct $8FBSYMBOL* vr$49 = SYMBADDPROC( PROC$1, *(uint8**)&ID$1, (uint8*)0ull, 0ll, (struct $8FBSYMBOL*)0ull, 0ll, *(int64*)((uint8*)&ENV$ + 432ll), 0ll );
	PROC$1 = vr$49;
	if( PROC$1 != (struct $8FBSYMBOL*)0ull ) goto label$372;
	{
		ERRREPORT( 4ll, -1ll, (uint8*)0ull );
		fb_StrDelete( &ID$1 );
		goto label$332;
	}
	label$372:;
	label$371:;
	struct $7ASTNODE* PROCEXPR$1;
	struct $7ASTNODE* vr$53 = CPROCARGLIST( (struct $8FBSYMBOL*)0ull, PROC$1, (struct $7ASTNODE*)0ull, &ARG_LIST$1, 32ll );
	PROCEXPR$1 = vr$53;
	if( PROCEXPR$1 == (struct $7ASTNODE*)0ull ) goto label$374;
	{
		ASTADD( PROCEXPR$1 );
	}
	label$374:;
	label$373:;
	fb$result$1 = -1ll;
	fb_StrDelete( &ID$1 );
	label$332:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__parserzproccall( void )
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

static int64 HLOOKSLIKEENDOFSTATEMENT( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$62:;
	{
		int64 TMP$87$2;
		int64 vr$1 = LEXGETTOKEN( 0ll );
		TMP$87$2 = vr$1;
		if( TMP$87$2 == 258ll ) goto label$66;
		label$67:;
		if( TMP$87$2 == 257ll ) goto label$66;
		label$68:;
		if( TMP$87$2 == 256ll ) goto label$66;
		label$69:;
		if( TMP$87$2 == 259ll ) goto label$66;
		label$70:;
		if( TMP$87$2 != 260ll ) goto label$65;
		label$66:;
		{
			fb$result$1 = -1ll;
		}
		goto label$64;
		label$65:;
		{
			fb$result$1 = 0ll;
		}
		label$71:;
		label$64:;
	}
	label$63:;
	return fb$result$1;
}

static int64 HPROCSYMBOL( struct $8FBSYMBOL* BASE_PARENT$1, struct $8FBSYMBOL* SYM$1, int64 ISCALL$1, $12FB_PARSEROPT OPTIONS$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$129:;
	int64 DO_CALL$1;
	fb$result$1 = 0ll;
	int64 vr$1 = CCOMPSTMTISALLOWED( 1ll );
	if( vr$1 != 0ll ) goto label$132;
	{
		HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
		fb$result$1 = -1ll;
		goto label$130;
	}
	label$132:;
	label$131:;
	LEXSKIPTOKEN( 0ll );
	int64 vr$3 = LEXGETTOKEN( 0ll );
	int64 vr$4 = HISASSIGNTOKEN( vr$3 );
	DO_CALL$1 = ~vr$4;
	if( DO_CALL$1 != 0ll ) goto label$134;
	{
		if( (*(int64*)((uint8*)SYM$1 + 8ll) & 32768ll) == 0ll ) goto label$136;
		{
			DO_CALL$1 = -1ll;
			if( (*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 8ll) & 32768ll) == 0ll ) goto label$138;
			{
				if( (int64)*(int16*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 112ll) != 1ll ) goto label$140;
				{
					int64 vr$16 = SYMBISPROCOVERLOADOF( *(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll), SYM$1 );
					if( vr$16 == 0ll ) goto label$142;
					{
						DO_CALL$1 = 0ll;
					}
					label$142:;
					label$141:;
				}
				label$140:;
				label$139:;
			}
			label$138:;
			label$137:;
		}
		label$136:;
		label$135:;
	}
	label$134:;
	label$133:;
	if( DO_CALL$1 == 0ll ) goto label$144;
	{
		struct $7ASTNODE* EXPR$2;
		struct $7ASTNODE* vr$19 = CPROCCALL( BASE_PARENT$1, SYM$1, (struct $7ASTNODE*)0ull, (struct $7ASTNODE*)0ull, 0ll, OPTIONS$1 );
		EXPR$2 = vr$19;
		if( EXPR$2 == (struct $7ASTNODE*)0ull ) goto label$146;
		{
			CASSIGNMENT( EXPR$2 );
		}
		label$146:;
		label$145:;
		fb$result$1 = -1ll;
		goto label$130;
	}
	label$144:;
	label$143:;
	if( ISCALL$1 == 0ll ) goto label$148;
	{
		ERRREPORT( 17ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
		fb$result$1 = -1ll;
		goto label$130;
	}
	label$148:;
	label$147:;
	int64 vr$22 = SYMBISPROCOVERLOADOF( *(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll), SYM$1 );
	if( vr$22 != 0ll ) goto label$150;
	{
		ERRREPORT( 316ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
		fb$result$1 = -1ll;
		goto label$130;
	}
	label$150:;
	label$149:;
	LEXSKIPTOKEN( 0ll );
	int64 vr$24 = CASSIGNFUNCTRESULT( 0ll );
	fb$result$1 = vr$24;
	label$130:;
	return fb$result$1;
}

static int64 HVARSYMBOL( struct $8FBSYMBOL* SYM$1, int64 ISCALL$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$151:;
	struct $7ASTNODE* EXPR$1;
	fb$result$1 = 0ll;
	struct $7ASTNODE* vr$1 = _Z11CVARIABLEEXP8FBSYMBOLl( SYM$1, -1ll );
	EXPR$1 = vr$1;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$154;
	{
		goto label$152;
	}
	label$154:;
	label$153:;
	if( ISCALL$1 == 0ll ) goto label$156;
	{
		if( (int64)-(*(int64*)EXPR$1 == 9ll) != 0ll ) goto label$158;
		{
			ASTDELTREE( EXPR$1 );
			ERRREPORT( 17ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
			fb$result$1 = -1ll;
			goto label$152;
		}
		label$158:;
		label$157:;
	}
	label$156:;
	label$155:;
	int64 vr$7 = CASSIGNMENTORPTRCALLEX( EXPR$1 );
	fb$result$1 = vr$7;
	label$152:;
	return fb$result$1;
}

static int64 HASSIGNORCALL_QB( struct $10FBSYMCHAIN* CHAIN_$1, int64 ISCALL$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$159:;
	fb$result$1 = 0ll;
	uint8* ID$1;
	uint8* vr$1 = LEXGETTEXT(  );
	ID$1 = vr$1;
	int64 SUFFIX$1;
	SUFFIX$1 = *(int64*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 16ll);
	int64 DEFDTYPE$1;
	int64 vr$4 = SYMBGETDEFTYPE( ID$1 );
	DEFDTYPE$1 = vr$4;
	label$161:;
	if( CHAIN_$1 == (struct $10FBSYMCHAIN*)0ull ) goto label$162;
	{
		struct $8FBSYMBOL* SYM$2;
		SYM$2 = *(struct $8FBSYMBOL**)CHAIN_$1;
		struct $8FBSYMBOL* VAR_SYM$2;
		VAR_SYM$2 = (struct $8FBSYMBOL*)0ull;
		if( SUFFIX$1 != 2147483648ll ) goto label$164;
		{
			label$165:;
			{
				int64 IS_MATCH$4;
				IS_MATCH$4 = -1ll;
				if( (*(int64*)((uint8*)SYM$2 + 8ll) & 268435456ll) == 0ll ) goto label$169;
				{
					if( *(int64*)SYM$2 != 1ll ) goto label$171;
					{
						if( DEFDTYPE$1 != 16ll ) goto label$173;
						{
							{
								uint64 TMP$88$8;
								TMP$88$8 = (uint64)(*(int64*)((uint8*)SYM$2 + 48ll) & 511ll);
								goto label$175;
								label$176:;
								{
								}
								goto label$174;
								label$177:;
								{
									IS_MATCH$4 = 0ll;
								}
								goto label$174;
								label$175:;
								static const void* tmp$101[15ll] = {
									&&label$176,
									&&label$177,
									&&label$177,
									&&label$177,
									&&label$177,
									&&label$177,
									&&label$177,
									&&label$177,
									&&label$177,
									&&label$177,
									&&label$177,
									&&label$177,
									&&label$177,
									&&label$176,
									&&label$176,
								};
								if( TMP$88$8 < 3ll ) goto label$177;
								if( TMP$88$8 > 17ll ) goto label$177;
								goto *tmp$101[TMP$88$8 - 3ll];
								label$174:;
							}
						}
						goto label$172;
						label$173:;
						{
							IS_MATCH$4 = (int64)-((*(int64*)((uint8*)SYM$2 + 48ll) & 511ll) == DEFDTYPE$1);
						}
						label$172:;
					}
					label$171:;
					label$170:;
				}
				label$169:;
				label$168:;
				if( IS_MATCH$4 == 0ll ) goto label$179;
				{
					{
						uint64 TMP$89$6;
						TMP$89$6 = *(uint64*)SYM$2;
						goto label$181;
						label$182:;
						{
							if( (*(int64*)((uint8*)SYM$2 + 16ll) & 32ll) == 0ll ) goto label$184;
							{
								IS_MATCH$4 = (int64)-((int64)-((*(int64*)((uint8*)SYM$2 + 8ll) & 268435456ll) != 0ll) == 0ll);
							}
							label$184:;
							label$183:;
							if( IS_MATCH$4 == 0ll ) goto label$186;
							{
								int64 vr$29 = HPROCSYMBOL( (struct $8FBSYMBOL*)0ull, SYM$2, ISCALL$1, 0ll );
								fb$result$1 = vr$29;
								goto label$160;
							}
							label$186:;
							label$185:;
						}
						goto label$180;
						label$187:;
						{
							if( VAR_SYM$2 != (struct $8FBSYMBOL*)0ull ) goto label$189;
							{
								int64 vr$31 = SYMBVARCHECKACCESS( SYM$2 );
								if( vr$31 == 0ll ) goto label$191;
								{
									VAR_SYM$2 = SYM$2;
								}
								label$191:;
								label$190:;
							}
							label$189:;
							label$188:;
						}
						goto label$180;
						label$192:;
						{
							if( (int64)-((*(int64*)((uint8*)SYM$2 + 8ll) & 268435456ll) != 0ll) != 0ll ) goto label$194;
							{
								int64 vr$38 = CQUIRKSTMT( *($8FB_TOKEN*)((uint8*)SYM$2 + 88ll) );
								fb$result$1 = vr$38;
								goto label$160;
							}
							label$194:;
							label$193:;
						}
						goto label$180;
						label$181:;
						static const void* tmp$102[6ll] = {
							&&label$187,
							&&label$180,
							&&label$182,
							&&label$180,
							&&label$180,
							&&label$192,
						};
						if( TMP$89$6 < 1ll ) goto label$180;
						if( TMP$89$6 > 6ll ) goto label$180;
						goto *tmp$102[TMP$89$6 - 1ll];
						label$180:;
					}
				}
				label$179:;
				label$178:;
				SYM$2 = *(struct $8FBSYMBOL**)((uint8*)SYM$2 + 264ll);
			}
			label$167:;
			if( SYM$2 != (struct $8FBSYMBOL*)0ull ) goto label$165;
			label$166:;
		}
		goto label$163;
		label$164:;
		{
			label$195:;
			{
				int64 IS_MATCH$4;
				if( SUFFIX$1 != 16ll ) goto label$199;
				{
					{
						uint64 TMP$90$6;
						TMP$90$6 = (uint64)(*(int64*)((uint8*)SYM$2 + 48ll) & 511ll);
						goto label$201;
						label$202:;
						{
							IS_MATCH$4 = -1ll;
						}
						goto label$200;
						label$203:;
						{
							IS_MATCH$4 = 0ll;
						}
						goto label$200;
						label$201:;
						static const void* tmp$103[15ll] = {
							&&label$202,
							&&label$203,
							&&label$203,
							&&label$203,
							&&label$203,
							&&label$203,
							&&label$203,
							&&label$203,
							&&label$203,
							&&label$203,
							&&label$203,
							&&label$203,
							&&label$203,
							&&label$202,
							&&label$202,
						};
						if( TMP$90$6 < 3ll ) goto label$203;
						if( TMP$90$6 > 17ll ) goto label$203;
						goto *tmp$103[TMP$90$6 - 3ll];
						label$200:;
					}
				}
				goto label$198;
				label$199:;
				{
					IS_MATCH$4 = (int64)-((*(int64*)((uint8*)SYM$2 + 48ll) & 511ll) == SUFFIX$1);
				}
				label$198:;
				if( IS_MATCH$4 == 0ll ) goto label$205;
				{
					{
						uint64 TMP$91$6;
						TMP$91$6 = *(uint64*)SYM$2;
						goto label$207;
						label$208:;
						{
							int64 vr$49 = HPROCSYMBOL( (struct $8FBSYMBOL*)0ull, SYM$2, ISCALL$1, 0ll );
							fb$result$1 = vr$49;
							goto label$160;
						}
						goto label$206;
						label$209:;
						{
							int64 vr$50 = SYMBVARCHECKACCESS( SYM$2 );
							if( vr$50 == 0ll ) goto label$211;
							{
								VAR_SYM$2 = SYM$2;
							}
							label$211:;
							label$210:;
						}
						goto label$206;
						label$212:;
						{
							int64 vr$53 = CQUIRKSTMT( *($8FB_TOKEN*)((uint8*)SYM$2 + 88ll) );
							fb$result$1 = vr$53;
							goto label$160;
						}
						goto label$206;
						label$207:;
						static const void* tmp$104[6ll] = {
							&&label$209,
							&&label$206,
							&&label$208,
							&&label$206,
							&&label$206,
							&&label$212,
						};
						if( TMP$91$6 < 1ll ) goto label$206;
						if( TMP$91$6 > 6ll ) goto label$206;
						goto *tmp$104[TMP$91$6 - 1ll];
						label$206:;
					}
				}
				label$205:;
				label$204:;
				SYM$2 = *(struct $8FBSYMBOL**)((uint8*)SYM$2 + 264ll);
			}
			label$197:;
			if( SYM$2 != (struct $8FBSYMBOL*)0ull ) goto label$195;
			label$196:;
		}
		label$163:;
		if( VAR_SYM$2 == (struct $8FBSYMBOL*)0ull ) goto label$214;
		{
			int64 vr$57 = HVARSYMBOL( VAR_SYM$2, ISCALL$1 );
			fb$result$1 = vr$57;
			goto label$160;
		}
		label$214:;
		label$213:;
		CHAIN_$1 = *(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$1 + 8ll);
	}
	goto label$161;
	label$162:;
	label$160:;
	return fb$result$1;
}

static int64 HASSIGNORPTRCALL( struct $7ASTNODE* EXPR$1, int64 ISCALL$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$215:;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$218;
	{
		goto label$216;
	}
	label$218:;
	label$217:;
	if( ISCALL$1 == 0ll ) goto label$220;
	{
		if( (int64)-(*(int64*)EXPR$1 == 9ll) != 0ll ) goto label$222;
		{
			ASTDELTREE( EXPR$1 );
			ERRREPORT( 17ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
			fb$result$1 = -1ll;
			goto label$216;
		}
		label$222:;
		label$221:;
	}
	label$220:;
	label$219:;
	int64 vr$6 = CASSIGNMENTORPTRCALLEX( EXPR$1 );
	fb$result$1 = vr$6;
	label$216:;
	return fb$result$1;
}

static int64 HASSIGNORCALL( struct $8FBSYMBOL* BASE_PARENT$1, struct $10FBSYMCHAIN* CHAIN_$1, int64 ISCALL$1, $12FB_PARSEROPT OPTIONS$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$223:;
	fb$result$1 = 0ll;
	label$225:;
	if( CHAIN_$1 == (struct $10FBSYMCHAIN*)0ull ) goto label$226;
	{
		struct $8FBSYMBOL* SYM$2;
		SYM$2 = *(struct $8FBSYMBOL**)CHAIN_$1;
		label$227:;
		{
			{
				uint64 TMP$92$4;
				TMP$92$4 = *(uint64*)SYM$2;
				goto label$231;
				label$232:;
				{
					int64 vr$4 = HPROCSYMBOL( BASE_PARENT$1, SYM$2, ISCALL$1, OPTIONS$1 );
					fb$result$1 = vr$4;
					goto label$224;
				}
				goto label$230;
				label$233:;
				{
					struct $7ASTNODE* vr$5 = _Z11CVARIABLEEXP10FBSYMCHAINl( CHAIN_$1, -1ll );
					int64 vr$6 = HASSIGNORPTRCALL( vr$5, ISCALL$1 );
					fb$result$1 = vr$6;
					goto label$224;
				}
				goto label$230;
				label$234:;
				{
					struct $7ASTNODE* vr$7 = CIMPLICITDATAMEMBER( BASE_PARENT$1, CHAIN_$1, -1ll, OPTIONS$1 );
					int64 vr$8 = HASSIGNORPTRCALL( vr$7, ISCALL$1 );
					fb$result$1 = vr$8;
					goto label$224;
				}
				goto label$230;
				label$235:;
				{
					struct $7ASTNODE* vr$9 = CCONSTANT( SYM$2 );
					int64 vr$10 = HASSIGNORPTRCALL( vr$9, ISCALL$1 );
					fb$result$1 = vr$10;
					goto label$224;
				}
				goto label$230;
				label$236:;
				{
					int64 vr$12 = CQUIRKSTMT( *($8FB_TOKEN*)((uint8*)SYM$2 + 88ll) );
					fb$result$1 = vr$12;
					goto label$224;
				}
				goto label$230;
				label$231:;
				static const void* tmp$105[12ll] = {
					&&label$233,
					&&label$235,
					&&label$232,
					&&label$230,
					&&label$230,
					&&label$236,
					&&label$230,
					&&label$230,
					&&label$230,
					&&label$230,
					&&label$230,
					&&label$234,
				};
				if( TMP$92$4 < 1ll ) goto label$230;
				if( TMP$92$4 > 12ll ) goto label$230;
				goto *tmp$105[TMP$92$4 - 1ll];
				label$230:;
			}
			SYM$2 = *(struct $8FBSYMBOL**)((uint8*)SYM$2 + 264ll);
		}
		label$229:;
		if( SYM$2 != (struct $8FBSYMBOL*)0ull ) goto label$227;
		label$228:;
		CHAIN_$1 = *(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$1 + 8ll);
	}
	goto label$225;
	label$226:;
	label$224:;
	return fb$result$1;
}

static int64 HPROCCALLORASSIGN_QB( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$237:;
	fb$result$1 = 0ll;
	{
		uint64 TMP$93$2;
		int64 vr$1 = LEXGETCLASS( 0ll );
		TMP$93$2 = (uint64)vr$1;
		goto label$240;
		label$241:;
		{
			int64 vr$4 = HASSIGNORCALL_QB( *(struct $10FBSYMCHAIN**)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 4136ll), 0ll );
			fb$result$1 = vr$4;
			goto label$238;
		}
		goto label$239;
		label$242:;
		{
			int64 vr$5 = LEXGETTOKEN( 0ll );
			if( vr$5 == 392ll ) goto label$244;
			{
				int64 vr$9 = HASSIGNORCALL_QB( *(struct $10FBSYMCHAIN**)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 4136ll), 0ll );
				fb$result$1 = vr$9;
				goto label$238;
			}
			label$244:;
			label$243:;
			int64 vr$10 = CCOMPSTMTISALLOWED( 1ll );
			if( vr$10 != 0ll ) goto label$246;
			{
				HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				goto label$238;
			}
			label$246:;
			label$245:;
			LEXSKIPTOKEN( 0ll );
			if( *(struct $10FBSYMCHAIN**)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 4136ll) != (struct $10FBSYMCHAIN*)0ull ) goto label$248;
			{
				int64 vr$15 = HFORWARDCALL(  );
				fb$result$1 = vr$15;
				goto label$238;
			}
			goto label$247;
			label$248:;
			{
				int64 vr$18 = HASSIGNORCALL_QB( *(struct $10FBSYMCHAIN**)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 4136ll), -1ll );
				fb$result$1 = vr$18;
				goto label$238;
			}
			label$247:;
		}
		goto label$239;
		label$240:;
		static const void* tmp$106[6ll] = {
			&&label$241,
			&&label$242,
			&&label$241,
			&&label$239,
			&&label$239,
			&&label$241,
		};
		if( TMP$93$2 > 5ll ) goto label$239;
		goto *tmp$106[TMP$93$2 - 0ll];
		label$239:;
	}
	label$238:;
	return fb$result$1;
}

static void HCTORCHAIN( void )
{
	label$298:;
	struct $8FBSYMBOL* PROC$1;
	struct $8FBSYMBOL* PARENT$1;
	struct $8FBSYMBOL* THIS_$1;
	struct $8FBSYMBOL* CTOR_HEAD$1;
	struct $7ASTNODE* THIS_EXPR$1;
	if( (int64)-((*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 8ll) & 4096ll) != 0ll) != 0ll ) goto label$301;
	{
		ERRREPORT( 164ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
		goto label$299;
	}
	label$301:;
	label$300:;
	PARENT$1 = *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 232ll);
	struct $7ASTNODE* vr$6 = ASTFINDFIRSTCODE( *(struct $7ASTNODE**)((uint8*)&AST$ + 80ll) );
	if( ((int64)-(vr$6 != (struct $7ASTNODE*)0ull) | (int64)-(*(struct $7ASTNODE**)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 200ll) + 128ll) != (struct $7ASTNODE*)0ull)) == 0ll ) goto label$303;
	{
		ERRREPORT( 168ll, 0ll, (uint8*)0ull );
	}
	label$303:;
	label$302:;
	*($12FB_SYMBSTATS*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 16ll) = *(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 16ll) | 4ll;
	LEXSKIPTOKEN( 0ll );
	struct $7ASTNODE* vr$18 = ASTBUILDVARFIELD( *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 128ll) + 96ll), (struct $8FBSYMBOL*)0ull, 0ll );
	struct $8FBSYMBOL* vr$19 = SYMBGETCOMPCTORHEAD( PARENT$1 );
	CPROCCALL( (struct $8FBSYMBOL*)0ull, vr$19, (struct $7ASTNODE*)0ull, vr$18, 0ll, 0ll );
	label$299:;
}

static void HBASEINIT( void )
{
	label$304:;
	struct $8FBSYMBOL* PARENT$1;
	struct $8FBSYMBOL* BASE_$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	struct $7ASTNODE* INITREE$1;
	struct $7ASTNODE* CTORCALL$1;
	if( (int64)-((*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 8ll) & 4096ll) != 0ll) != 0ll ) goto label$307;
	{
		ERRREPORT( 164ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
		goto label$305;
	}
	label$307:;
	label$306:;
	BASE_$1 = *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 232ll) + 168ll);
	if( BASE_$1 != (struct $8FBSYMBOL*)0ull ) goto label$309;
	{
		ERRREPORT( 294ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
		goto label$305;
	}
	label$309:;
	label$308:;
	struct $7ASTNODE* vr$8 = ASTFINDFIRSTCODE( *(struct $7ASTNODE**)((uint8*)&AST$ + 80ll) );
	if( ((int64)-(vr$8 != (struct $7ASTNODE*)0ull) | (int64)-(*(struct $7ASTNODE**)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 200ll) + 128ll) != (struct $7ASTNODE*)0ull)) == 0ll ) goto label$311;
	{
		ERRREPORT( 169ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
		goto label$305;
	}
	label$311:;
	label$310:;
	LEXSKIPTOKEN( 0ll );
	SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)BASE_$1 + 56ll);
	INITREE$1 = (struct $7ASTNODE*)0ull;
	struct $8FBSYMBOL* vr$16 = SYMBGETCOMPCTORHEAD( SUBTYPE$1 );
	if( vr$16 == (struct $8FBSYMBOL*)0ull ) goto label$313;
	{
		struct $7ASTNODE* vr$18 = CCTORCALL( SUBTYPE$1 );
		CTORCALL$1 = vr$18;
		if( CTORCALL$1 == (struct $7ASTNODE*)0ull ) goto label$315;
		{
			if( *(int64*)CTORCALL$1 != 10ll ) goto label$317;
			{
				struct $7ASTNODE* vr$22 = ASTCALLCTORTOCALL( CTORCALL$1 );
				CTORCALL$1 = vr$22;
				struct $7ASTNODE* vr$23 = ASTTYPEINIBEGIN( 18ll, SUBTYPE$1, -1ll, 0ll );
				INITREE$1 = vr$23;
				ASTTYPEINIADDCTORCALL( INITREE$1, BASE_$1, CTORCALL$1, 2147483648ll, (struct $8FBSYMBOL*)0ull );
				ASTTYPEINIEND( INITREE$1, -1ll );
			}
			goto label$316;
			label$317:;
			{
				ASTDELTREE( CTORCALL$1 );
				CTORCALL$1 = (struct $7ASTNODE*)0ull;
			}
			label$316:;
		}
		label$315:;
		label$314:;
	}
	goto label$312;
	label$313:;
	{
		struct $7ASTNODE* vr$24 = CINITIALIZER( BASE_$1, 1ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		INITREE$1 = vr$24;
	}
	label$312:;
	*(struct $7ASTNODE**)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 200ll) + 128ll) = INITREE$1;
	label$305:;
}

static int64 HBASEMEMBERACCESS( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$318:;
	struct $8FBSYMBOL* PROC$1;
	PROC$1 = *(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll);
	if( (int64)-((*(int64*)((uint8*)PROC$1 + 8ll) & 2048ll) != 0ll) != 0ll ) goto label$321;
	{
		ERRREPORT( 293ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
		fb$result$1 = -1ll;
		goto label$319;
	}
	label$321:;
	label$320:;
	struct $8FBSYMBOL* PARENT$1;
	PARENT$1 = *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)PROC$1 + 232ll);
	struct $8FBSYMBOL* BASE_$1;
	BASE_$1 = *(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 168ll);
	label$322:;
	{
		if( BASE_$1 != (struct $8FBSYMBOL*)0ull ) goto label$326;
		{
			ERRREPORT( 294ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
			fb$result$1 = -1ll;
			goto label$319;
		}
		label$326:;
		label$325:;
		LEXSKIPTOKEN( 64ll );
		LEXSKIPTOKEN( 0ll );
		int64 vr$9 = LEXGETTOKEN( 0ll );
		if( vr$9 == 353ll ) goto label$328;
		{
			goto label$323;
		}
		label$328:;
		label$327:;
		int64 vr$11 = LEXGETLOOKAHEAD( 1ll, 0ll );
		if( vr$11 == 46ll ) goto label$330;
		{
			ERRREPORT( 119ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
			fb$result$1 = -1ll;
			goto label$319;
		}
		label$330:;
		label$329:;
		BASE_$1 = *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)BASE_$1 + 56ll) + 168ll);
	}
	label$324:;
	goto label$322;
	label$323:;
	struct $10FBSYMCHAIN CHAIN_$1;
	*(struct $8FBSYMBOL**)&CHAIN_$1 = BASE_$1;
	*(struct $10FBSYMCHAIN**)((uint8*)&CHAIN_$1 + 8ll) = (struct $10FBSYMCHAIN*)0ull;
	*(int64*)((uint8*)&CHAIN_$1 + 16ll) = 0ll;
	__builtin_memset( (void*)((uint8*)&CHAIN_$1 + 24ll), 0, 24ll );
	int64 vr$23 = HASSIGNORCALL( *(struct $8FBSYMBOL**)((uint8*)BASE_$1 + 56ll), &CHAIN_$1, 0ll, 2048ll );
	fb$result$1 = vr$23;
	label$319:;
	return fb$result$1;
}

// Total compilation time: 0.04431498586200178 seconds.
