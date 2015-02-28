// Compilation of fbc-1.01.0/src/compiler/parser-decl-symbtype.bas started at 14:16:42 on 02-28-2015

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
typedef int64 $14FB_SYMBTYPEOPT;
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
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__parserzdeclzsymbtype( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRREPORT( int64, int64, uint8* );
void ASTDELTREE( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWCONSTI( int64, int64, struct $8FBSYMBOL* );
int64 ASTCONSTFLUSHTOINT( struct $7ASTNODE* );
struct $7ASTNODE* ASTREMOVENIDXARRAY( struct $7ASTNODE* );
int64 ASTSIZEOF( struct $7ASTNODE* );
struct $8FBSYMBOL* SYMBADDPROCPTR( struct $8FBSYMBOL*, int64, struct $8FBSYMBOL*, int64, int64 );
struct $8FBSYMBOL* SYMBPREADDPROC( uint8* );
int64 TYPETOUNSIGNED( int64 );
int64 HMATCH( int64 );
typedef int64 $8LEXCHECK;
int64 LEXGETTOKEN( $8LEXCHECK );
void LEXSKIPTOKEN( $8LEXCHECK );
int64 LEXGETLOOKAHEADCLASS( int64, $8LEXCHECK );
int64 LEXGETLOOKAHEAD( int64, $8LEXCHECK );
struct $7ASTNODE* CTYPEOREXPRESSION( int64, int64*, struct $8FBSYMBOL**, int64* );
void CTYPEOF( int64*, struct $8FBSYMBOL**, int64* );
int64 CSYMBOLTYPE( int64*, struct $8FBSYMBOL**, int64*, $14FB_SYMBTYPEOPT );
typedef int64 $8FB_IDOPT;
struct $10FBSYMCHAIN* CIDENTIFIER( struct $8FBSYMBOL**, $8FB_IDOPT );
void CPARAMETERS( struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64, int64 );
struct $7ASTNODE* CEXPRESSIONWITHNIDXARRAY( int64 );
struct $7ASTNODE* CEQINPARENSONLYEXPR( void );
struct $7ASTNODE* CGTINPARENSONLYEXPR( void );
void CPROCRETTYPE( int64, struct $8FBSYMBOL*, int64, int64*, struct $8FBSYMBOL** );
$11FB_FUNCMODE CPROCCALLINGCONV( $11FB_FUNCMODE );
void CBYREFATTRIBUTE( int64*, int64 );
int64 CCONSTINTEXPR( struct $7ASTNODE*, int64 );
void HSKIPUNTIL( int64, int64, $8LEXCHECK, int64 );
$11FB_DATATYPE HINTEGERTYPEFROMBITSIZE( int64, int64 );
static struct $8FBSYMBOL* CSYMBOLTYPEFUNCPTR( int64 );
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

int64 CCONSTINTEXPR( struct $7ASTNODE* EXPR$1, int64 DEFAULTVALUE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$10:;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$13;
	{
		ERRREPORT( 9ll, 0ll, (uint8*)0ull );
		struct $7ASTNODE* vr$2 = ASTNEWCONSTI( DEFAULTVALUE$1, 7ll, (struct $8FBSYMBOL*)0ull );
		EXPR$1 = vr$2;
	}
	label$13:;
	label$12:;
	if( (int64)-(*(int64*)EXPR$1 == 16ll) != 0ll ) goto label$15;
	{
		ERRREPORT( 11ll, 0ll, (uint8*)0ull );
		ASTDELTREE( EXPR$1 );
		struct $7ASTNODE* vr$6 = ASTNEWCONSTI( DEFAULTVALUE$1, 7ll, (struct $8FBSYMBOL*)0ull );
		EXPR$1 = vr$6;
	}
	label$15:;
	label$14:;
	int64 vr$7 = ASTCONSTFLUSHTOINT( EXPR$1 );
	fb$result$1 = vr$7;
	label$11:;
	return fb$result$1;
}

struct $7ASTNODE* CTYPEOREXPRESSION( int64 IS_LEN$1, int64* DTYPE$1, struct $8FBSYMBOL** SUBTYPE$1, int64* LGT$1 )
{
	int64 TMP$86$1;
	int64 TMP$87$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$24:;
	struct $7ASTNODE* EXPR$1;
	int64 MAYBE_TYPE$1;
	MAYBE_TYPE$1 = -1ll;
	int64 vr$1 = LEXGETLOOKAHEADCLASS( 1ll, 0ll );
	if( (int64)-(vr$1 == 5ll) == 0ll ) goto label$26;
	int64 vr$4 = LEXGETLOOKAHEAD( 1ll, 0ll );
	TMP$86$1 = (int64)-((int64)-(vr$4 != 42ll) != 0ll);
	goto label$49;
	label$26:;
	TMP$86$1 = 0ll;
	label$49:;
	if( TMP$86$1 == 0ll ) goto label$27;
	int64 vr$8 = LEXGETLOOKAHEAD( 1ll, 0ll );
	TMP$87$1 = (int64)-((int64)-(vr$8 != 301ll) != 0ll);
	goto label$50;
	label$27:;
	TMP$87$1 = 0ll;
	label$50:;
	if( TMP$87$1 == 0ll ) goto label$29;
	{
		MAYBE_TYPE$1 = 0ll;
	}
	goto label$28;
	label$29:;
	{
		{
			int64 TMP$88$3;
			int64 vr$12 = LEXGETLOOKAHEAD( 1ll, 0ll );
			TMP$88$3 = vr$12;
			if( TMP$88$3 != 91ll ) goto label$31;
			label$32:;
			{
				MAYBE_TYPE$1 = 0ll;
			}
			goto label$30;
			label$31:;
			if( TMP$88$3 != 40ll ) goto label$33;
			label$34:;
			{
				{
					int64 TMP$89$5;
					int64 vr$15 = LEXGETTOKEN( 0ll );
					TMP$89$5 = vr$15;
					if( TMP$89$5 == 376ll ) goto label$37;
					label$38:;
					if( TMP$89$5 == 345ll ) goto label$37;
					label$39:;
					if( TMP$89$5 != 346ll ) goto label$36;
					label$37:;
					{
					}
					goto label$35;
					label$36:;
					{
						MAYBE_TYPE$1 = 0ll;
					}
					label$40:;
					label$35:;
				}
			}
			label$33:;
			label$30:;
		}
	}
	label$28:;
	if( ((MAYBE_TYPE$1 & IS_LEN$1) & (int64)-(*(int64*)((uint8*)&ENV$ + 272ll) == 3ll)) == 0ll ) goto label$42;
	{
		MAYBE_TYPE$1 = 0ll;
	}
	label$42:;
	label$41:;
	if( MAYBE_TYPE$1 == 0ll ) goto label$44;
	{
		int64 vr$24 = CSYMBOLTYPE( DTYPE$1, SUBTYPE$1, LGT$1, 0ll );
		if( vr$24 == 0ll ) goto label$46;
		{
			fb$result$1 = (struct $7ASTNODE*)0ull;
			goto label$25;
		}
		label$46:;
		label$45:;
	}
	label$44:;
	label$43:;
	struct $7ASTNODE* vr$26 = CEXPRESSIONWITHNIDXARRAY( -1ll );
	EXPR$1 = vr$26;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$48;
	{
		ERRREPORT( 9ll, 0ll, (uint8*)0ull );
		struct $7ASTNODE* vr$28 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		EXPR$1 = vr$28;
	}
	label$48:;
	label$47:;
	fb$result$1 = EXPR$1;
	label$25:;
	return fb$result$1;
}

void CTYPEOF( int64* DTYPE$1, struct $8FBSYMBOL** SUBTYPE$1, int64* LGT$1 )
{
	label$51:;
	struct $7ASTNODE* EXPR$1;
	struct $7ASTNODE* vr$0 = CTYPEOREXPRESSION( 0ll, DTYPE$1, SUBTYPE$1, LGT$1 );
	EXPR$1 = vr$0;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$54;
	{
		goto label$52;
	}
	label$54:;
	label$53:;
	struct $7ASTNODE* vr$2 = ASTREMOVENIDXARRAY( EXPR$1 );
	EXPR$1 = vr$2;
	*DTYPE$1 = *(int64*)((uint8*)EXPR$1 + 8ll);
	*SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 16ll);
	int64 vr$7 = ASTSIZEOF( EXPR$1 );
	*LGT$1 = vr$7;
	ASTDELTREE( EXPR$1 );
	label$52:;
}

$11FB_DATATYPE HINTEGERTYPEFROMBITSIZE( int64 BITSIZE$1, int64 IS_UNSIGNED$1 )
{
	$11FB_DATATYPE fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$55:;
	$11FB_DATATYPE DTYPE$1;
	__builtin_memset( &DTYPE$1, 0, 8ll );
	{
		if( BITSIZE$1 != 8ll ) goto label$58;
		label$59:;
		{
			DTYPE$1 = 1ll;
		}
		goto label$57;
		label$58:;
		if( BITSIZE$1 != 16ll ) goto label$60;
		label$61:;
		{
			DTYPE$1 = 4ll;
		}
		goto label$57;
		label$60:;
		if( BITSIZE$1 != 32ll ) goto label$62;
		label$63:;
		{
			DTYPE$1 = 10ll;
		}
		goto label$57;
		label$62:;
		if( BITSIZE$1 != 64ll ) goto label$64;
		label$65:;
		{
			DTYPE$1 = 12ll;
		}
		goto label$57;
		label$64:;
		{
			ERRREPORT( 309ll, -1ll, (uint8*)0ull );
			DTYPE$1 = 7ll;
		}
		label$66:;
		label$57:;
	}
	if( IS_UNSIGNED$1 == 0ll ) goto label$68;
	{
		int64 vr$7 = TYPETOUNSIGNED( DTYPE$1 );
		DTYPE$1 = vr$7;
	}
	label$68:;
	label$67:;
	fb$result$1 = DTYPE$1;
	goto label$56;
	label$56:;
	return fb$result$1;
}

int64 CSYMBOLTYPE( int64* DTYPE$1, struct $8FBSYMBOL** SUBTYPE$1, int64* LGT$1, $14FB_SYMBTYPEOPT OPTIONS$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$69:;
	int64 ISUNSIGNED$1;
	int64 ISFUNCTION$1;
	fb$result$1 = 0ll;
	*LGT$1 = 0ll;
	*DTYPE$1 = 2147483648ll;
	*SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
	int64 IS_CONST$1;
	IS_CONST$1 = 0ll;
	int64 PTR_CNT$1;
	PTR_CNT$1 = 0ll;
	int64 vr$4 = LEXGETTOKEN( 0ll );
	if( vr$4 != 376ll ) goto label$72;
	{
		LEXSKIPTOKEN( 0ll );
		int64 vr$6 = HMATCH( 40ll );
		if( vr$6 != 0ll ) goto label$74;
		{
			ERRREPORT( 6ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
		}
		label$74:;
		label$73:;
		CTYPEOF( DTYPE$1, SUBTYPE$1, LGT$1 );
		int64 vr$8 = HMATCH( 41ll );
		if( vr$8 != 0ll ) goto label$76;
		{
			ERRREPORT( 7ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
		}
		label$76:;
		label$75:;
	}
	goto label$71;
	label$72:;
	{
		int64 vr$10 = LEXGETTOKEN( 0ll );
		if( vr$10 != 335ll ) goto label$78;
		{
			LEXSKIPTOKEN( 0ll );
			IS_CONST$1 = -1ll;
		}
		label$78:;
		label$77:;
		int64 vr$12 = HMATCH( 374ll );
		ISUNSIGNED$1 = vr$12;
		{
			uint64 TMP$90$3;
			int64 vr$13 = LEXGETTOKEN( 0ll );
			TMP$90$3 = (uint64)vr$13;
			goto label$80;
			label$81:;
			{
				LEXSKIPTOKEN( 0ll );
				*DTYPE$1 = 0ll;
			}
			goto label$79;
			label$82:;
			{
				LEXSKIPTOKEN( 0ll );
				*DTYPE$1 = 1ll;
			}
			goto label$79;
			label$83:;
			{
				LEXSKIPTOKEN( 0ll );
				*DTYPE$1 = 2ll;
			}
			goto label$79;
			label$84:;
			{
				LEXSKIPTOKEN( 0ll );
				*DTYPE$1 = 4ll;
			}
			goto label$79;
			label$85:;
			{
				LEXSKIPTOKEN( 0ll );
				*DTYPE$1 = 5ll;
			}
			goto label$79;
			label$86:;
			{
				LEXSKIPTOKEN( 0ll );
				int64 vr$19 = HMATCH( 301ll );
				if( vr$19 == 0ll ) goto label$88;
				{
					struct $7ASTNODE* vr$21 = CGTINPARENSONLYEXPR(  );
					int64 vr$22 = CCONSTINTEXPR( vr$21, 0ll );
					*LGT$1 = vr$22;
					$11FB_DATATYPE vr$25 = HINTEGERTYPEFROMBITSIZE( *LGT$1, 0ll );
					*DTYPE$1 = vr$25;
					int64 vr$27 = HMATCH( 300ll );
					if( vr$27 != 0ll ) goto label$90;
					{
						ERRREPORT( 308ll, -1ll, (uint8*)0ull );
					}
					label$90:;
					label$89:;
				}
				goto label$87;
				label$88:;
				{
					*DTYPE$1 = *(int64*)((uint8*)&ENV$ + 1160ll);
				}
				label$87:;
			}
			goto label$79;
			label$91:;
			{
				LEXSKIPTOKEN( 0ll );
				int64 vr$30 = HMATCH( 301ll );
				if( vr$30 == 0ll ) goto label$93;
				{
					struct $7ASTNODE* vr$32 = CGTINPARENSONLYEXPR(  );
					int64 vr$33 = CCONSTINTEXPR( vr$32, 0ll );
					*LGT$1 = vr$33;
					$11FB_DATATYPE vr$36 = HINTEGERTYPEFROMBITSIZE( *LGT$1, -1ll );
					*DTYPE$1 = vr$36;
					int64 vr$38 = HMATCH( 300ll );
					if( vr$38 != 0ll ) goto label$95;
					{
						ERRREPORT( 308ll, -1ll, (uint8*)0ull );
					}
					label$95:;
					label$94:;
				}
				goto label$92;
				label$93:;
				{
					*DTYPE$1 = 8ll;
				}
				label$92:;
			}
			goto label$79;
			label$96:;
			{
				LEXSKIPTOKEN( 0ll );
				*DTYPE$1 = 10ll;
			}
			goto label$79;
			label$97:;
			{
				LEXSKIPTOKEN( 0ll );
				*DTYPE$1 = 11ll;
			}
			goto label$79;
			label$98:;
			{
				LEXSKIPTOKEN( 0ll );
				*DTYPE$1 = 12ll;
			}
			goto label$79;
			label$99:;
			{
				LEXSKIPTOKEN( 0ll );
				*DTYPE$1 = 13ll;
			}
			goto label$79;
			label$100:;
			{
				LEXSKIPTOKEN( 0ll );
				*DTYPE$1 = 14ll;
			}
			goto label$79;
			label$101:;
			{
				LEXSKIPTOKEN( 0ll );
				*DTYPE$1 = 15ll;
			}
			goto label$79;
			label$102:;
			{
				LEXSKIPTOKEN( 0ll );
				*DTYPE$1 = 16ll;
			}
			goto label$79;
			label$103:;
			{
				LEXSKIPTOKEN( 0ll );
				*DTYPE$1 = 3ll;
			}
			goto label$79;
			label$104:;
			{
				LEXSKIPTOKEN( 0ll );
				*DTYPE$1 = 6ll;
			}
			goto label$79;
			label$105:;
			{
				int64 vr$50 = LEXGETTOKEN( 0ll );
				ISFUNCTION$1 = (int64)-(vr$50 == 346ll);
				LEXSKIPTOKEN( 0ll );
				*DTYPE$1 = 52ll;
				PTR_CNT$1 = PTR_CNT$1 + 1ll;
				struct $8FBSYMBOL* vr$54 = CSYMBOLTYPEFUNCPTR( ISFUNCTION$1 );
				*SUBTYPE$1 = vr$54;
				if( *SUBTYPE$1 != (struct $8FBSYMBOL*)0ull ) goto label$107;
				{
					goto label$70;
				}
				label$107:;
				label$106:;
			}
			goto label$79;
			label$80:;
			static const void* tmp$105[27ll] = {
				&&label$105,
				&&label$105,
				&&label$79,
				&&label$79,
				&&label$79,
				&&label$79,
				&&label$79,
				&&label$79,
				&&label$79,
				&&label$79,
				&&label$79,
				&&label$82,
				&&label$83,
				&&label$84,
				&&label$85,
				&&label$86,
				&&label$91,
				&&label$96,
				&&label$97,
				&&label$98,
				&&label$99,
				&&label$100,
				&&label$101,
				&&label$102,
				&&label$103,
				&&label$104,
				&&label$81,
			};
			if( TMP$90$3 < 345ll ) goto label$79;
			if( TMP$90$3 > 371ll ) goto label$79;
			goto *tmp$105[TMP$90$3 - 345ll];
			label$79:;
		}
		if( *DTYPE$1 == 2147483648ll ) goto label$109;
		{
			{
				int64 TMP$91$4;
				TMP$91$4 = *DTYPE$1 & 511ll;
				if( TMP$91$4 == 3ll ) goto label$112;
				label$113:;
				if( TMP$91$4 != 6ll ) goto label$111;
				label$112:;
				{
					*LGT$1 = 0ll;
				}
				goto label$110;
				label$111:;
				{
					int64 TMP$92$5;
					if( (*DTYPE$1 & 480ll) == 0ll ) goto label$115;
					TMP$92$5 = 22ll;
					goto label$206;
					label$115:;
					TMP$92$5 = *DTYPE$1 & 31ll;
					label$206:;
					*LGT$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$92$5 * 56ll)) + 8ll);
				}
				label$114:;
				label$110:;
			}
		}
		goto label$108;
		label$109:;
		{
			struct $10FBSYMCHAIN* CHAIN_$3;
			CHAIN_$3 = (struct $10FBSYMCHAIN*)0ull;
			struct $8FBSYMBOL* BASE_PARENT$3;
			int64 CHECK_ID$3;
			CHECK_ID$3 = -1ll;
			if( *(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 104ll) == (struct $13FB_CMPSTMTSTK*)0ull ) goto label$117;
			{
				int64 vr$73 = LEXGETTOKEN( 0ll );
				if( vr$73 != 46ll ) goto label$119;
				{
					int64 vr$75 = LEXGETLOOKAHEAD( 1ll, 64ll );
					CHECK_ID$3 = (int64)-(vr$75 == 46ll);
				}
				label$119:;
				label$118:;
			}
			label$117:;
			label$116:;
			if( CHECK_ID$3 == 0ll ) goto label$121;
			{
				struct $10FBSYMCHAIN* vr$79 = CIDENTIFIER( &BASE_PARENT$3, 50ll );
				CHAIN_$3 = vr$79;
			}
			label$121:;
			label$120:;
			if( CHAIN_$3 == (struct $10FBSYMCHAIN*)0ull ) goto label$123;
			{
				label$124:;
				{
					struct $8FBSYMBOL* SYM$5;
					SYM$5 = *(struct $8FBSYMBOL**)CHAIN_$3;
					label$127:;
					{
						{
							$12FB_SYMBCLASS TMP$93$7;
							TMP$93$7 = *($12FB_SYMBCLASS*)SYM$5;
							if( TMP$93$7 != 10ll ) goto label$131;
							label$132:;
							{
								LEXSKIPTOKEN( 0ll );
								*DTYPE$1 = 18ll;
								*SUBTYPE$1 = SYM$5;
								*LGT$1 = *(int64*)((uint8*)SYM$5 + 72ll);
								goto label$125;
							}
							goto label$130;
							label$131:;
							if( TMP$93$7 != 9ll ) goto label$133;
							label$134:;
							{
								LEXSKIPTOKEN( 0ll );
								*DTYPE$1 = 9ll;
								*SUBTYPE$1 = SYM$5;
								*LGT$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + 512ll);
								goto label$125;
							}
							goto label$130;
							label$133:;
							if( TMP$93$7 != 13ll ) goto label$135;
							label$136:;
							{
								LEXSKIPTOKEN( 0ll );
								*DTYPE$1 = *(int64*)((uint8*)SYM$5 + 48ll);
								*SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$5 + 56ll);
								*LGT$1 = *(int64*)((uint8*)SYM$5 + 72ll);
								PTR_CNT$1 = PTR_CNT$1 + ((*DTYPE$1 & 480ll) >> 5ll);
								goto label$125;
							}
							label$135:;
							label$130:;
						}
						SYM$5 = *(struct $8FBSYMBOL**)((uint8*)SYM$5 + 264ll);
					}
					label$129:;
					if( SYM$5 != (struct $8FBSYMBOL*)0ull ) goto label$127;
					label$128:;
					CHAIN_$3 = *(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$3 + 8ll);
				}
				label$126:;
				if( CHAIN_$3 != (struct $10FBSYMCHAIN*)0ull ) goto label$124;
				label$125:;
			}
			label$123:;
			label$122:;
		}
		label$108:;
		if( *DTYPE$1 != 2147483648ll ) goto label$138;
		{
			if( ISUNSIGNED$1 == 0ll ) goto label$140;
			{
				ERRREPORT( 17ll, 0ll, (uint8*)0ull );
			}
			label$140:;
			label$139:;
			if( IS_CONST$1 == 0ll ) goto label$142;
			{
				*DTYPE$1 = 512ll;
			}
			label$142:;
			label$141:;
			fb$result$1 = 0ll;
			goto label$70;
		}
		label$138:;
		label$137:;
		if( ISUNSIGNED$1 == 0ll ) goto label$144;
		{
			{
				int64 TMP$94$4;
				uint64 TMP$95$4;
				if( (*DTYPE$1 & 480ll) == 0ll ) goto label$145;
				TMP$94$4 = 22ll;
				goto label$207;
				label$145:;
				TMP$94$4 = *DTYPE$1 & 31ll;
				label$207:;
				TMP$95$4 = (uint64)TMP$94$4;
				goto label$147;
				label$148:;
				{
					*DTYPE$1 = 2ll;
				}
				goto label$146;
				label$149:;
				{
					*DTYPE$1 = 5ll;
				}
				goto label$146;
				label$150:;
				{
					*DTYPE$1 = 8ll;
				}
				goto label$146;
				label$151:;
				{
					*DTYPE$1 = 11ll;
				}
				goto label$146;
				label$152:;
				{
					*DTYPE$1 = 13ll;
				}
				goto label$146;
				label$153:;
				{
					ERRREPORT( 17ll, -1ll, (uint8*)0ull );
				}
				goto label$146;
				label$147:;
				static const void* tmp$106[12ll] = {
					&&label$148,
					&&label$153,
					&&label$153,
					&&label$149,
					&&label$153,
					&&label$153,
					&&label$150,
					&&label$153,
					&&label$153,
					&&label$151,
					&&label$153,
					&&label$152,
				};
				if( TMP$95$4 < 1ll ) goto label$153;
				if( TMP$95$4 > 12ll ) goto label$153;
				goto *tmp$106[TMP$95$4 - 1ll];
				label$146:;
			}
		}
		label$144:;
		label$143:;
	}
	label$71:;
	int64 vr$123 = LEXGETTOKEN( 0ll );
	if( vr$123 != 42ll ) goto label$155;
	{
		LEXSKIPTOKEN( 0ll );
		struct $7ASTNODE* vr$125 = CEQINPARENSONLYEXPR(  );
		int64 vr$126 = CCONSTINTEXPR( vr$125, 0ll );
		*LGT$1 = vr$126;
		{
			int64 TMP$96$3;
			uint64 TMP$97$3;
			if( (*DTYPE$1 & 480ll) == 0ll ) goto label$156;
			TMP$96$3 = 22ll;
			goto label$208;
			label$156:;
			TMP$96$3 = *DTYPE$1 & 31ll;
			label$208:;
			TMP$97$3 = (uint64)TMP$96$3;
			goto label$158;
			label$159:;
			{
				*LGT$1 = *(int64*)LGT$1 + 1ll;
				if( *(int64*)LGT$1 > 1ll ) goto label$161;
				{
					ERRREPORT( 17ll, -1ll, (uint8*)0ull );
					*LGT$1 = 2ll;
				}
				label$161:;
				label$160:;
				*DTYPE$1 = 17ll;
			}
			goto label$157;
			label$162:;
			{
				int64 TMP$98$4;
				if( *(int64*)LGT$1 >= 1ll ) goto label$164;
				{
					ERRREPORT( 17ll, -1ll, (uint8*)0ull );
					*LGT$1 = 1ll;
				}
				label$164:;
				label$163:;
				if( (*DTYPE$1 & 480ll) == 0ll ) goto label$165;
				TMP$98$4 = 22ll;
				goto label$209;
				label$165:;
				TMP$98$4 = *DTYPE$1 & 31ll;
				label$209:;
				if( TMP$98$4 != 6ll ) goto label$167;
				{
					*LGT$1 = *(int64*)LGT$1 * *(int64*)((uint8*)SYMB_DTYPETB$ + 344ll);
				}
				label$167:;
				label$166:;
			}
			goto label$157;
			label$168:;
			{
				ERRREPORT( 17ll, -1ll, (uint8*)0ull );
			}
			goto label$157;
			label$158:;
			static const void* tmp$107[14ll] = {
				&&label$162,
				&&label$168,
				&&label$168,
				&&label$162,
				&&label$168,
				&&label$168,
				&&label$168,
				&&label$168,
				&&label$168,
				&&label$168,
				&&label$168,
				&&label$168,
				&&label$168,
				&&label$159,
			};
			if( TMP$97$3 < 3ll ) goto label$168;
			if( TMP$97$3 > 16ll ) goto label$168;
			goto *tmp$107[TMP$97$3 - 3ll];
			label$157:;
		}
		if( IS_CONST$1 == 0ll ) goto label$170;
		{
			*DTYPE$1 = *DTYPE$1 | 512ll;
		}
		label$170:;
		label$169:;
	}
	goto label$154;
	label$155:;
	{
		if( IS_CONST$1 == 0ll ) goto label$172;
		{
			*DTYPE$1 = *DTYPE$1 | 512ll;
		}
		label$172:;
		label$171:;
		label$173:;
		{
			{
				uint64 TMP$99$4;
				int64 vr$160 = LEXGETTOKEN( 0ll );
				TMP$99$4 = (uint64)vr$160;
				goto label$177;
				label$178:;
				{
					LEXSKIPTOKEN( 0ll );
					{
						int64 TMP$100$6;
						int64 vr$161 = LEXGETTOKEN( 0ll );
						TMP$100$6 = vr$161;
						if( TMP$100$6 == 372ll ) goto label$181;
						label$182:;
						if( TMP$100$6 != 373ll ) goto label$180;
						label$181:;
						{
							if( PTR_CNT$1 < 8ll ) goto label$184;
							{
								ERRREPORT( 273ll, 0ll, (uint8*)0ull );
							}
							goto label$183;
							label$184:;
							{
								*DTYPE$1 = (((*DTYPE$1 & 31ll) | ((*DTYPE$1 & 480ll) + 32ll)) | ((*DTYPE$1 & 261632ll) << 1ll)) | 512ll;
								PTR_CNT$1 = PTR_CNT$1 + 1ll;
							}
							label$183:;
							LEXSKIPTOKEN( 0ll );
						}
						goto label$179;
						label$180:;
						{
							ERRREPORT( 272ll, 0ll, (uint8*)0ull );
							goto label$174;
						}
						label$185:;
						label$179:;
					}
				}
				goto label$176;
				label$186:;
				{
					if( PTR_CNT$1 < 8ll ) goto label$188;
					{
						ERRREPORT( 273ll, 0ll, (uint8*)0ull );
					}
					goto label$187;
					label$188:;
					{
						*DTYPE$1 = ((*DTYPE$1 & 31ll) | ((*DTYPE$1 & 480ll) + 32ll)) | ((*DTYPE$1 & 261632ll) << 1ll);
						PTR_CNT$1 = PTR_CNT$1 + 1ll;
					}
					label$187:;
					LEXSKIPTOKEN( 0ll );
				}
				goto label$176;
				label$189:;
				{
					goto label$174;
				}
				goto label$176;
				label$177:;
				static const void* tmp$108[39ll] = {
					&&label$178,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$189,
					&&label$186,
					&&label$186,
				};
				if( TMP$99$4 < 335ll ) goto label$189;
				if( TMP$99$4 > 373ll ) goto label$189;
				goto *tmp$108[TMP$99$4 - 335ll];
				label$176:;
			}
		}
		label$175:;
		goto label$173;
		label$174:;
	}
	label$154:;
	if( PTR_CNT$1 <= 0ll ) goto label$191;
	{
		int64 TMP$101$2;
		if( (*DTYPE$1 & 480ll) == 0ll ) goto label$192;
		TMP$101$2 = 22ll;
		goto label$210;
		label$192:;
		TMP$101$2 = *DTYPE$1 & 31ll;
		label$210:;
		*LGT$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$101$2 * 56ll)) + 8ll);
	}
	goto label$190;
	label$191:;
	{
		int64 TMP$102$2;
		if( (*DTYPE$1 & 480ll) == 0ll ) goto label$193;
		TMP$102$2 = 22ll;
		goto label$211;
		label$193:;
		TMP$102$2 = *DTYPE$1 & 31ll;
		label$211:;
		if( TMP$102$2 != 21ll ) goto label$195;
		{
			if( (OPTIONS$1 & 2ll) != 0ll ) goto label$197;
			{
				ERRREPORT( 70ll, -1ll, (uint8*)0ull );
				*DTYPE$1 = 32ll;
				*SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
			}
			label$197:;
			label$196:;
		}
		goto label$194;
		label$195:;
		if( *(int64*)LGT$1 > 0ll ) goto label$198;
		{
			{
				int64 TMP$103$4;
				TMP$103$4 = *DTYPE$1 & 511ll;
				if( TMP$103$4 == 3ll ) goto label$201;
				label$202:;
				if( TMP$103$4 != 6ll ) goto label$200;
				label$201:;
				{
					int64 TMP$104$5;
					if( (OPTIONS$1 & 1ll) == 0ll ) goto label$204;
					{
						ERRREPORT( 28ll, 0ll, (uint8*)0ull );
						*DTYPE$1 = ((*DTYPE$1 & 31ll) | ((*DTYPE$1 & 480ll) + 32ll)) | ((*DTYPE$1 & 261632ll) << 1ll);
					}
					label$204:;
					label$203:;
					if( (*DTYPE$1 & 480ll) == 0ll ) goto label$205;
					TMP$104$5 = 22ll;
					goto label$212;
					label$205:;
					TMP$104$5 = *DTYPE$1 & 31ll;
					label$212:;
					*LGT$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$104$5 * 56ll)) + 8ll);
				}
				label$200:;
				label$199:;
			}
		}
		label$198:;
		label$194:;
	}
	label$190:;
	fb$result$1 = -1ll;
	label$70:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__parserzdeclzsymbtype( void )
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

static struct $8FBSYMBOL* CSYMBOLTYPEFUNCPTR( int64 IS_FUNC$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$16:;
	int64 DTYPE$1;
	int64 MODE$1;
	int64 ATTRIB$1;
	struct $8FBSYMBOL* PROC$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	fb$result$1 = (struct $8FBSYMBOL*)0ull;
	ATTRIB$1 = 0ll;
	SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
	$11FB_FUNCMODE vr$1 = CPROCCALLINGCONV( -1ll );
	MODE$1 = vr$1;
	struct $8FBSYMBOL* vr$2 = SYMBPREADDPROC( (uint8*)0ull );
	PROC$1 = vr$2;
	CPARAMETERS( (struct $8FBSYMBOL*)0ull, PROC$1, MODE$1, -1ll );
	CBYREFATTRIBUTE( &ATTRIB$1, IS_FUNC$1 );
	int64 vr$4 = LEXGETTOKEN( 0ll );
	if( vr$4 != 375ll ) goto label$19;
	{
		if( IS_FUNC$1 != 0ll ) goto label$21;
		{
			ERRREPORT( 17ll, 0ll, (uint8*)0ull );
			DTYPE$1 = 0ll;
		}
		goto label$20;
		label$21:;
		{
			CPROCRETTYPE( ATTRIB$1, PROC$1, -1ll, &DTYPE$1, &SUBTYPE$1 );
		}
		label$20:;
	}
	goto label$18;
	label$19:;
	{
		if( IS_FUNC$1 == 0ll ) goto label$23;
		{
			ERRREPORT( 67ll, 0ll, (uint8*)0ull );
			DTYPE$1 = 7ll;
		}
		goto label$22;
		label$23:;
		{
			DTYPE$1 = 0ll;
		}
		label$22:;
	}
	label$18:;
	struct $8FBSYMBOL* vr$10 = SYMBADDPROCPTR( PROC$1, DTYPE$1, SUBTYPE$1, ATTRIB$1, MODE$1 );
	fb$result$1 = vr$10;
	label$17:;
	return fb$result$1;
}

// Total compilation time: 0.0386899922741577 seconds.
