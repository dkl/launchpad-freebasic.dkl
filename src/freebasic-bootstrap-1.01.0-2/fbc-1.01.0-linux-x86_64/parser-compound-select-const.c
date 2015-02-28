// Compilation of fbc-1.01.0/src/compiler/parser-compound-select-const.bas started at 14:16:42 on 02-28-2015

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
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__parserzcompoundzselectzconst( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRREPORT( int64, int64, uint8* );
void ASTDELTREE( struct $7ASTNODE* );
struct $7ASTNODE* ASTSCOPEBEGIN( void );
void ASTSCOPEEND( struct $7ASTNODE* );
struct $7ASTNODE* ASTADD( struct $7ASTNODE* );
void ASTADDUNSCOPED( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWASSIGN( struct $7ASTNODE*, struct $7ASTNODE*, $9AST_OPOPT );
typedef int64 $11AST_CONVOPT;
struct $7ASTNODE* ASTNEWCONV( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, $11AST_CONVOPT, int64* );
struct $7ASTNODE* ASTNEWCONSTI( int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWVAR( struct $8FBSYMBOL*, int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWBRANCH( int64, struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDJMPTB( struct $8FBSYMBOL*, uint64*, struct $8FBSYMBOL**, int64, struct $8FBSYMBOL*, uint64, uint64 );
struct $7ASTNODE* ASTNEWLINK( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTNEWLABEL( struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* ASTNEWDECL( struct $8FBSYMBOL*, int64 );
typedef int64 $10FB_SYMBOPT;
struct $8FBSYMBOL* SYMBADDLABEL( uint8*, $10FB_SYMBOPT );
struct $8FBSYMBOL* SYMBADDIMPLICITVAR( int64, struct $8FBSYMBOL*, int64 );
int64 HMATCH( int64 );
typedef int64 $8LEXCHECK;
int64 LEXGETTOKEN( $8LEXCHECK );
void LEXSKIPTOKEN( $8LEXCHECK );
struct $13FB_CMPSTMTSTK* CCOMPSTMTPUSH( $8FB_TOKEN, $15FB_CMPSTMT_MASK );
void CCOMPSTMTPOP( struct $13FB_CMPSTMTSTK* );
struct $7ASTNODE* CEXPRESSION( void );
int64 CCONSTINTEXPR( struct $7ASTNODE*, int64 );
static int64 HSELCONSTADDCASE( int64, uint64, struct $8FBSYMBOL* );
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
struct $9SELECTCTX {
	int64 BASE;
	uint64 CASEVALUES[8192];
	struct $8FBSYMBOL* CASELABELS[8192];
};
__FB_STATIC_ASSERT( sizeof( struct $9SELECTCTX ) == 131080 );
static struct $9SELECTCTX CTX$;
struct $5FBENV ENV$ __attribute__((common));

void PARSERSELCONSTSTMTINIT( void )
{
	label$10:;
	*(int64*)&CTX$ = 0ll;
	label$11:;
}

void PARSERSELCONSTSTMTEND( void )
{
	label$12:;
	label$13:;
}

void CSELCONSTSTMTBEGIN( void )
{
	int64 TMP$86$1;
	label$14:;
	struct $7ASTNODE* EXPR$1;
	__builtin_memset( &EXPR$1, 0, 8ll );
	struct $8FBSYMBOL* SYM$1;
	__builtin_memset( &SYM$1, 0, 8ll );
	struct $8FBSYMBOL* EL$1;
	__builtin_memset( &EL$1, 0, 8ll );
	struct $8FBSYMBOL* CL$1;
	__builtin_memset( &CL$1, 0, 8ll );
	struct $13FB_CMPSTMTSTK* STK$1;
	__builtin_memset( &STK$1, 0, 8ll );
	int64 OPTIONS$1;
	struct $7ASTNODE* OUTERSCOPENODE$1;
	struct $7ASTNODE* vr$5 = ASTSCOPEBEGIN(  );
	OUTERSCOPENODE$1 = vr$5;
	if( OUTERSCOPENODE$1 != (struct $7ASTNODE*)0ull ) goto label$17;
	{
		ERRREPORT( 27ll, 0ll, (uint8*)0ull );
	}
	label$17:;
	label$16:;
	struct $7ASTNODE* vr$7 = CEXPRESSION(  );
	EXPR$1 = vr$7;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$19;
	{
		ERRREPORT( 9ll, 0ll, (uint8*)0ull );
		struct $7ASTNODE* vr$9 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		EXPR$1 = vr$9;
	}
	label$19:;
	label$18:;
	if( ((*(int64*)((uint8*)EXPR$1 + 8ll) & 511ll) & 480ll) == 0ll ) goto label$20;
	TMP$86$1 = 22ll;
	goto label$40;
	label$20:;
	TMP$86$1 = (*(int64*)((uint8*)EXPR$1 + 8ll) & 511ll) & 31ll;
	label$40:;
	if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$86$1 * 56ll)) == 0ll ) goto label$22;
	{
		ASTDELTREE( EXPR$1 );
		EXPR$1 = (struct $7ASTNODE*)0ull;
	}
	goto label$21;
	label$22:;
	{
		{
			int64 TMP$87$3;
			TMP$87$3 = *(int64*)((uint8*)EXPR$1 + 8ll) & 511ll;
			if( TMP$87$3 == 3ll ) goto label$25;
			label$26:;
			if( TMP$87$3 != 6ll ) goto label$24;
			label$25:;
			{
				if( (int64)-(*(int64*)EXPR$1 == 20ll) != 0ll ) goto label$28;
				{
					ASTDELTREE( EXPR$1 );
					EXPR$1 = (struct $7ASTNODE*)0ull;
				}
				label$28:;
				label$27:;
			}
			label$24:;
			label$23:;
		}
	}
	label$21:;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$30;
	{
		ERRREPORT( 24ll, 0ll, (uint8*)0ull );
		struct $7ASTNODE* vr$27 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		EXPR$1 = vr$27;
	}
	label$30:;
	label$29:;
	if( (*(int64*)((uint8*)EXPR$1 + 8ll) & 511ll) == 8ll ) goto label$32;
	{
		int64 TMP$88$2;
		if( ((*(int64*)((uint8*)EXPR$1 + 8ll) & 511ll) & 480ll) == 0ll ) goto label$33;
		TMP$88$2 = 22ll;
		goto label$41;
		label$33:;
		TMP$88$2 = (*(int64*)((uint8*)EXPR$1 + 8ll) & 511ll) & 31ll;
		label$41:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$88$2 * 56ll)) + 8ll) > *(int64*)((uint8*)SYMB_DTYPETB$ + 456ll) ) goto label$35;
		{
			struct $7ASTNODE* vr$40 = ASTNEWCONV( 8ll, (struct $8FBSYMBOL*)0ull, EXPR$1, 0ll, (int64*)0ull );
			EXPR$1 = vr$40;
		}
		goto label$34;
		label$35:;
		{
			struct $7ASTNODE* vr$41 = ASTNEWCONV( 13ll, (struct $8FBSYMBOL*)0ull, EXPR$1, 0ll, (int64*)0ull );
			EXPR$1 = vr$41;
		}
		label$34:;
	}
	label$32:;
	label$31:;
	struct $8FBSYMBOL* vr$42 = SYMBADDLABEL( (uint8*)0ull, 0ll );
	EL$1 = vr$42;
	struct $8FBSYMBOL* vr$43 = SYMBADDLABEL( (uint8*)0ull, 0ll );
	CL$1 = vr$43;
	OPTIONS$1 = 0ll;
	if( (int64)-((*(int64*)((uint8*)&ENV$ + 1152ll) & 2ll) != 0ll) != 0ll ) goto label$37;
	{
		OPTIONS$1 = OPTIONS$1 | 2ll;
	}
	label$37:;
	label$36:;
	struct $8FBSYMBOL* vr$50 = SYMBADDIMPLICITVAR( *(int64*)((uint8*)EXPR$1 + 8ll) & 511ll, (struct $8FBSYMBOL*)0ull, OPTIONS$1 );
	SYM$1 = vr$50;
	*($12FB_SYMBSTATS*)((uint8*)SYM$1 + 16ll) = *(int64*)((uint8*)SYM$1 + 16ll) | 2048ll;
	if( (OPTIONS$1 & 2ll) == 0ll ) goto label$39;
	{
		struct $7ASTNODE* vr$56 = ASTNEWDECL( SYM$1, -1ll );
		ASTADDUNSCOPED( vr$56 );
		struct $7ASTNODE* vr$57 = ASTNEWVAR( SYM$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$58 = ASTNEWASSIGN( vr$57, EXPR$1, 0ll );
		ASTADD( vr$58 );
	}
	goto label$38;
	label$39:;
	{
		struct $7ASTNODE* vr$59 = ASTNEWVAR( SYM$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$60 = ASTNEWASSIGN( vr$59, EXPR$1, 64ll );
		struct $7ASTNODE* vr$61 = ASTNEWDECL( SYM$1, 0ll );
		struct $7ASTNODE* vr$62 = ASTNEWLINK( vr$61, vr$60, -1ll );
		ASTADD( vr$62 );
	}
	label$38:;
	struct $7ASTNODE* vr$63 = ASTNEWBRANCH( 97ll, CL$1, (struct $7ASTNODE*)0ull );
	ASTADD( vr$63 );
	struct $13FB_CMPSTMTSTK* vr$64 = CCOMPSTMTPUSH( 270ll, 0ll );
	STK$1 = vr$64;
	*(int64*)((uint8*)STK$1 + 24ll) = -1ll;
	*(struct $8FBSYMBOL**)((uint8*)STK$1 + 32ll) = SYM$1;
	*(int64*)((uint8*)STK$1 + 40ll) = 0ll;
	*(int64*)((uint8*)STK$1 + 48ll) = *(int64*)&CTX$;
	*(struct $8FBSYMBOL**)((uint8*)STK$1 + 56ll) = (struct $8FBSYMBOL*)0ull;
	*(uint64*)((uint8*)STK$1 + 64ll) = 4294967295ull;
	*(uint64*)((uint8*)STK$1 + 72ll) = 0ull;
	*(struct $8FBSYMBOL**)((uint8*)STK$1 + 80ll) = CL$1;
	*(struct $8FBSYMBOL**)((uint8*)STK$1 + 88ll) = EL$1;
	*(struct $7ASTNODE**)((uint8*)STK$1 + 104ll) = OUTERSCOPENODE$1;
	label$15:;
}

void CSELCONSTSTMTNEXT( struct $13FB_CMPSTMTSTK* STK$1 )
{
	label$55:;
	uint64 VALUE$1;
	__builtin_memset( &VALUE$1, 0, 8ll );
	uint64 TOVALUE$1;
	__builtin_memset( &TOVALUE$1, 0, 8ll );
	uint64 MAXVAL$1;
	__builtin_memset( &MAXVAL$1, 0, 8ll );
	uint64 MINVAL$1;
	__builtin_memset( &MINVAL$1, 0, 8ll );
	struct $8FBSYMBOL* LABEL$1;
	__builtin_memset( &LABEL$1, 0, 8ll );
	int64 SWTBASE$1;
	__builtin_memset( &SWTBASE$1, 0, 8ll );
	LEXSKIPTOKEN( 0ll );
	if( *(struct $7ASTNODE**)((uint8*)STK$1 + 16ll) == (struct $7ASTNODE*)0ull ) goto label$58;
	{
		ASTSCOPEEND( *(struct $7ASTNODE**)((uint8*)STK$1 + 16ll) );
	}
	label$58:;
	label$57:;
	if( *(int64*)((uint8*)STK$1 + 40ll) <= 0ll ) goto label$60;
	{
		struct $7ASTNODE* vr$12 = ASTNEWBRANCH( 97ll, *(struct $8FBSYMBOL**)((uint8*)STK$1 + 88ll), (struct $7ASTNODE*)0ull );
		ASTADD( vr$12 );
	}
	label$60:;
	label$59:;
	int64 vr$13 = LEXGETTOKEN( 0ll );
	if( vr$13 != 268ll ) goto label$62;
	{
		LEXSKIPTOKEN( 0ll );
		struct $8FBSYMBOL* vr$15 = SYMBADDLABEL( (uint8*)0ull, 4ll );
		*(struct $8FBSYMBOL**)((uint8*)STK$1 + 56ll) = vr$15;
		struct $7ASTNODE* vr$18 = ASTNEWLABEL( *(struct $8FBSYMBOL**)((uint8*)STK$1 + 56ll), -1ll );
		ASTADD( vr$18 );
		struct $7ASTNODE* vr$19 = ASTSCOPEBEGIN(  );
		*(struct $7ASTNODE**)((uint8*)STK$1 + 16ll) = vr$19;
		*(int64*)((uint8*)STK$1 + 40ll) = -1ll;
		goto label$56;
	}
	label$62:;
	label$61:;
	SWTBASE$1 = *(int64*)((uint8*)STK$1 + 48ll);
	struct $8FBSYMBOL* vr$23 = SYMBADDLABEL( (uint8*)0ull, 0ll );
	LABEL$1 = vr$23;
	label$63:;
	{
		struct $7ASTNODE* vr$24 = CEXPRESSION(  );
		int64 vr$25 = CCONSTINTEXPR( vr$24, 0ll );
		VALUE$1 = (uint64)vr$25;
		MINVAL$1 = *(uint64*)((uint8*)STK$1 + 64ll);
		MAXVAL$1 = *(uint64*)((uint8*)STK$1 + 72ll);
		int64 vr$28 = LEXGETTOKEN( 0ll );
		if( vr$28 != 284ll ) goto label$67;
		{
			LEXSKIPTOKEN( 0ll );
			struct $7ASTNODE* vr$30 = CEXPRESSION(  );
			int64 vr$31 = CCONSTINTEXPR( vr$30, 0ll );
			TOVALUE$1 = (uint64)vr$31;
			{
				uint64 TMP$90$4;
				TMP$90$4 = TOVALUE$1;
				goto label$68;
				label$71:;
				{
					if( VALUE$1 >= MINVAL$1 ) goto label$73;
					{
						MINVAL$1 = VALUE$1;
					}
					label$73:;
					label$72:;
					if( VALUE$1 <= MAXVAL$1 ) goto label$75;
					{
						MAXVAL$1 = VALUE$1;
					}
					label$75:;
					label$74:;
					if( (((int64)-(MINVAL$1 > MAXVAL$1) | (int64)-((MAXVAL$1 - MINVAL$1) > 4096ull)) | (int64)-((MINVAL$1 * *(uint64*)((uint8*)SYMB_DTYPETB$ + 400ll)) > 4294967292ull)) == 0ll ) goto label$77;
					{
						ERRREPORT( 68ll, 0ll, (uint8*)0ull );
						MINVAL$1 = *(uint64*)((uint8*)STK$1 + 64ll);
						MAXVAL$1 = *(uint64*)((uint8*)STK$1 + 72ll);
					}
					goto label$76;
					label$77:;
					{
						int64 vr$44 = HSELCONSTADDCASE( SWTBASE$1, VALUE$1, LABEL$1 );
						if( vr$44 != 0ll ) goto label$79;
						{
							ERRREPORT( 4ll, 0ll, (uint8*)0ull );
						}
						label$79:;
						label$78:;
					}
					label$76:;
				}
				label$69:;
				VALUE$1 = VALUE$1 + 1ull;
				label$68:;
				if( VALUE$1 <= TMP$90$4 ) goto label$71;
				label$70:;
			}
		}
		goto label$66;
		label$67:;
		{
			if( VALUE$1 >= MINVAL$1 ) goto label$81;
			{
				MINVAL$1 = VALUE$1;
			}
			label$81:;
			label$80:;
			if( VALUE$1 <= MAXVAL$1 ) goto label$83;
			{
				MAXVAL$1 = VALUE$1;
			}
			label$83:;
			label$82:;
			if( (((int64)-(MINVAL$1 > MAXVAL$1) | (int64)-((MAXVAL$1 - MINVAL$1) > 4096ull)) | (int64)-((MINVAL$1 * *(uint64*)((uint8*)SYMB_DTYPETB$ + 400ll)) > 4294967292ull)) == 0ll ) goto label$85;
			{
				ERRREPORT( 68ll, 0ll, (uint8*)0ull );
				MINVAL$1 = *(uint64*)((uint8*)STK$1 + 64ll);
				MAXVAL$1 = *(uint64*)((uint8*)STK$1 + 72ll);
			}
			goto label$84;
			label$85:;
			{
				int64 vr$60 = HSELCONSTADDCASE( SWTBASE$1, VALUE$1, LABEL$1 );
				if( vr$60 != 0ll ) goto label$87;
				{
					ERRREPORT( 4ll, 0ll, (uint8*)0ull );
				}
				label$87:;
				label$86:;
			}
			label$84:;
		}
		label$66:;
		*(uint64*)((uint8*)STK$1 + 64ll) = MINVAL$1;
		*(uint64*)((uint8*)STK$1 + 72ll) = MAXVAL$1;
	}
	label$65:;
	int64 vr$64 = HMATCH( 44ll );
	if( vr$64 != 0ll ) goto label$63;
	label$64:;
	struct $7ASTNODE* vr$66 = ASTNEWLABEL( LABEL$1, -1ll );
	ASTADD( vr$66 );
	struct $7ASTNODE* vr$67 = ASTSCOPEBEGIN(  );
	*(struct $7ASTNODE**)((uint8*)STK$1 + 16ll) = vr$67;
	*(int64*)((uint8*)STK$1 + 40ll) = *(int64*)((uint8*)STK$1 + 40ll) + 1ll;
	label$56:;
}

void CSELCONSTSTMTEND( struct $13FB_CMPSTMTSTK* STK$1 )
{
	label$88:;
	struct $8FBSYMBOL* DEFLABEL$1;
	LEXSKIPTOKEN( 0ll );
	LEXSKIPTOKEN( 0ll );
	DEFLABEL$1 = *(struct $8FBSYMBOL**)((uint8*)STK$1 + 56ll);
	if( DEFLABEL$1 != (struct $8FBSYMBOL*)0ull ) goto label$91;
	{
		DEFLABEL$1 = *(struct $8FBSYMBOL**)((uint8*)STK$1 + 88ll);
	}
	label$91:;
	label$90:;
	if( *(struct $7ASTNODE**)((uint8*)STK$1 + 16ll) == (struct $7ASTNODE*)0ull ) goto label$93;
	{
		ASTSCOPEEND( *(struct $7ASTNODE**)((uint8*)STK$1 + 16ll) );
	}
	label$93:;
	label$92:;
	struct $7ASTNODE* vr$7 = ASTNEWBRANCH( 97ll, *(struct $8FBSYMBOL**)((uint8*)STK$1 + 88ll), (struct $7ASTNODE*)0ull );
	ASTADD( vr$7 );
	struct $7ASTNODE* vr$9 = ASTNEWLABEL( *(struct $8FBSYMBOL**)((uint8*)STK$1 + 80ll), -1ll );
	ASTADD( vr$9 );
	struct $7ASTNODE* vr$23 = ASTBUILDJMPTB( *(struct $8FBSYMBOL**)((uint8*)STK$1 + 32ll), (uint64*)((uint8*)((uint8*)&CTX$ + (*(int64*)((uint8*)STK$1 + 48ll) << 3ll)) + 8ll), (struct $8FBSYMBOL**)((uint8*)((uint8*)&CTX$ + (*(int64*)((uint8*)STK$1 + 48ll) << 3ll)) + 65544ll), *(int64*)&CTX$ - *(int64*)((uint8*)STK$1 + 48ll), DEFLABEL$1, *(uint64*)((uint8*)STK$1 + 64ll), *(uint64*)((uint8*)STK$1 + 72ll) );
	ASTADD( vr$23 );
	*(int64*)&CTX$ = *(int64*)((uint8*)STK$1 + 48ll);
	struct $7ASTNODE* vr$26 = ASTNEWLABEL( *(struct $8FBSYMBOL**)((uint8*)STK$1 + 88ll), -1ll );
	ASTADD( vr$26 );
	if( *(struct $7ASTNODE**)((uint8*)STK$1 + 104ll) == (struct $7ASTNODE*)0ull ) goto label$95;
	{
		ASTSCOPEEND( *(struct $7ASTNODE**)((uint8*)STK$1 + 104ll) );
	}
	label$95:;
	label$94:;
	CCOMPSTMTPOP( STK$1 );
	label$89:;
}

__attribute__(( constructor )) static void fb_ctor__parserzcompoundzselectzconst( void )
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

static int64 HSELCONSTADDCASE( int64 SWTBASE$1, uint64 VALUE$1, struct $8FBSYMBOL* LABEL$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$42:;
	static int64 PROBE$1;
	static int64 HIGH$1;
	static int64 LOW$1;
	static int64 I$1;
	static uint64 V$1;
	if( *(int64*)&CTX$ < 8192ll ) goto label$45;
	{
		fb$result$1 = 0ll;
		goto label$43;
	}
	label$45:;
	label$44:;
	HIGH$1 = *(int64*)&CTX$ - SWTBASE$1;
	LOW$1 = -1ll;
	label$46:;
	if( (HIGH$1 - LOW$1) <= 1ll ) goto label$47;
	{
		PROBE$1 = (int64)((uint64)(HIGH$1 + LOW$1) >> 1ull);
		V$1 = *(uint64*)((uint8*)((uint8*)&CTX$ + ((SWTBASE$1 + PROBE$1) << 3ll)) + 8ll);
		if( V$1 >= VALUE$1 ) goto label$49;
		{
			LOW$1 = PROBE$1;
		}
		goto label$48;
		label$49:;
		if( V$1 <= VALUE$1 ) goto label$50;
		{
			HIGH$1 = PROBE$1;
		}
		goto label$48;
		label$50:;
		{
			goto label$43;
		}
		label$48:;
	}
	goto label$46;
	label$47:;
	{
		I$1 = *(int64*)&CTX$ + 1ll;
		int64 TMP$89$2;
		TMP$89$2 = (SWTBASE$1 + HIGH$1) + 1ll;
		goto label$51;
		label$54:;
		{
			*(uint64*)((uint8*)((uint8*)&CTX$ + (I$1 << 3ll)) + 8ll) = *(uint64*)((uint8*)&CTX$ + (I$1 << 3ll));
			*(struct $8FBSYMBOL**)((uint8*)((uint8*)&CTX$ + (I$1 << 3ll)) + 65544ll) = *(struct $8FBSYMBOL**)((uint8*)((uint8*)&CTX$ + (I$1 << 3ll)) + 65536ll);
		}
		label$52:;
		I$1 = I$1 + -1ll;
		label$51:;
		if( I$1 >= TMP$89$2 ) goto label$54;
		label$53:;
	}
	*(uint64*)((uint8*)((uint8*)&CTX$ + ((SWTBASE$1 + HIGH$1) << 3ll)) + 8ll) = VALUE$1;
	*(struct $8FBSYMBOL**)((uint8*)((uint8*)&CTX$ + ((SWTBASE$1 + HIGH$1) << 3ll)) + 65544ll) = LABEL$1;
	*(int64*)&CTX$ = *(int64*)&CTX$ + 1ll;
	fb$result$1 = -1ll;
	label$43:;
	return fb$result$1;
}

// Total compilation time: 0.03651692799758166 seconds.
