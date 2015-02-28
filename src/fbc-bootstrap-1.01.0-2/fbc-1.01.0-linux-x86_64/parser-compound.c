// Compilation of fbc-1.01.0/src/compiler/parser-compound.bas started at 15:27:40 on 02-28-2015

typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
typedef int64 $15FB_CMPSTMT_MASK;
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
typedef int64 $9FB_ERRMSG;
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
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__parserzcompound( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRREPORT( int64, int64, uint8* );
void* STACKPUSH( struct $6TSTACK* );
void STACKPOP( struct $6TSTACK* );
void* STACKGETTOS( struct $6TSTACK* );
void ASTSCOPEBREAK( struct $8FBSYMBOL* );
int64 SYMBHASCTOR( struct $8FBSYMBOL* );
typedef int64 $8LEXCHECK;
int64 LEXGETTOKEN( $8LEXCHECK );
void LEXSKIPTOKEN( $8LEXCHECK );
int64 LEXGETLOOKAHEADCLASS( int64, $8LEXCHECK );
int64 LEXGETLOOKAHEAD( int64, $8LEXCHECK );
int64 CCOMPSTMTCHECK( void );
int64 CCOMPSTMTISALLOWED( $15FB_CMPSTMT_MASK );
void CIFSTMTBEGIN( void );
void CIFSTMTNEXT( void );
void CIFSTMTEND( void );
void CFORSTMTBEGIN( void );
void CFORSTMTEND( void );
void CDOSTMTBEGIN( void );
void CDOSTMTEND( void );
void CWHILESTMTBEGIN( void );
void CWHILESTMTEND( void );
void CSELECTSTMTBEGIN( void );
void CSELECTSTMTNEXT( void );
void CSELECTSTMTEND( void );
void CPROCSTMTEND( void );
void CEXITSTATEMENT( void );
void CENDSTATEMENT( void );
void CCONTINUESTATEMENT( void );
void CWITHSTMTBEGIN( void );
void CWITHSTMTEND( void );
void CSCOPESTMTBEGIN( void );
void CSCOPESTMTEND( void );
void CNAMESPACESTMTBEGIN( void );
void CNAMESPACESTMTEND( void );
void CUSINGSTMT( void );
void CEXTERNSTMTBEGIN( void );
void CEXTERNSTMTEND( void );
struct $7ASTNODE* CEXPRESSION( void );
void HSKIPUNTIL( int64, int64, $8LEXCHECK, int64 );
void HSKIPCOMPOUND( int64, int64, $8LEXCHECK );
int64 RTLEXITAPP( struct $7ASTNODE* );
void PARSERSELECTSTMTINIT( void );
void PARSERSELECTSTMTEND( void );
void PARSERSELCONSTSTMTINIT( void );
void PARSERSELCONSTSTMTEND( void );
static void CCOMPOUNDEND( void );
static int64 HCHECKFORCTORRESULT( void );
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

void PARSERCOMPOUNDSTMTSETCTX( void )
{
	label$10:;
	*(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 64ll) = (struct $13FB_CMPSTMTSTK*)0ull;
	*(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 72ll) = (struct $13FB_CMPSTMTSTK*)0ull;
	*(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 80ll) = (struct $13FB_CMPSTMTSTK*)0ull;
	*(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 88ll) = (struct $13FB_CMPSTMTSTK*)0ull;
	*(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 96ll) = (struct $13FB_CMPSTMTSTK*)0ull;
	*(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 104ll) = (struct $13FB_CMPSTMTSTK*)0ull;
	label$11:;
}

void PARSERCOMPOUNDSTMTINIT( void )
{
	label$12:;
	PARSERSELECTSTMTINIT(  );
	PARSERSELCONSTSTMTINIT(  );
	label$13:;
}

void PARSERCOMPOUNDSTMTEND( void )
{
	label$14:;
	PARSERSELCONSTSTMTEND(  );
	PARSERSELECTSTMTEND(  );
	label$15:;
}

int64 CCOMPOUNDSTMT( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$16:;
	if( *(int64*)((uint8*)&ENV$ + 272ll) != 3ll ) goto label$19;
	{
		if( *(int64*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 16ll) == 2147483648ll ) goto label$21;
		{
			fb$result$1 = 0ll;
			goto label$17;
		}
		label$21:;
		label$20:;
	}
	label$19:;
	label$18:;
	{
		uint64 TMP$86$2;
		int64 vr$5 = LEXGETTOKEN( 0ll );
		TMP$86$2 = (uint64)vr$5;
		goto label$23;
		label$24:;
		{
			int64 vr$6 = CCOMPSTMTISALLOWED( 1ll );
			if( vr$6 != 0ll ) goto label$26;
			{
				HSKIPCOMPOUND( 266ll, 266ll, 0ll );
				goto label$17;
			}
			label$26:;
			label$25:;
			CIFSTMTBEGIN(  );
		}
		goto label$22;
		label$27:;
		{
			int64 vr$8 = CCOMPSTMTISALLOWED( 1ll );
			if( vr$8 != 0ll ) goto label$29;
			{
				HSKIPCOMPOUND( 281ll, 283ll, 0ll );
				goto label$17;
			}
			label$29:;
			label$28:;
			CFORSTMTBEGIN(  );
		}
		goto label$22;
		label$30:;
		{
			int64 vr$10 = CCOMPSTMTISALLOWED( 1ll );
			if( vr$10 != 0ll ) goto label$32;
			{
				HSKIPCOMPOUND( 278ll, 279ll, 0ll );
				goto label$17;
			}
			label$32:;
			label$31:;
			CDOSTMTBEGIN(  );
		}
		goto label$22;
		label$33:;
		{
			int64 vr$12 = CCOMPSTMTISALLOWED( 1ll );
			if( vr$12 != 0ll ) goto label$35;
			{
				HSKIPCOMPOUND( 273ll, 275ll, 0ll );
				goto label$17;
			}
			label$35:;
			label$34:;
			CWHILESTMTBEGIN(  );
		}
		goto label$22;
		label$36:;
		{
			int64 vr$14 = CCOMPSTMTISALLOWED( 1ll );
			if( vr$14 != 0ll ) goto label$38;
			{
				HSKIPCOMPOUND( 270ll, 270ll, 0ll );
				goto label$17;
			}
			label$38:;
			label$37:;
			CSELECTSTMTBEGIN(  );
		}
		goto label$22;
		label$39:;
		{
			int64 vr$16 = CCOMPSTMTISALLOWED( 1ll );
			if( vr$16 != 0ll ) goto label$41;
			{
				HSKIPCOMPOUND( 280ll, 280ll, 0ll );
				goto label$17;
			}
			label$41:;
			label$40:;
			CWITHSTMTBEGIN(  );
		}
		goto label$22;
		label$42:;
		{
			int64 vr$18 = CCOMPSTMTISALLOWED( 1ll );
			if( vr$18 != 0ll ) goto label$44;
			{
				HSKIPCOMPOUND( 285ll, 285ll, 0ll );
				goto label$17;
			}
			label$44:;
			label$43:;
			CSCOPESTMTBEGIN(  );
		}
		goto label$22;
		label$45:;
		{
			CNAMESPACESTMTBEGIN(  );
		}
		goto label$22;
		label$46:;
		{
			CEXTERNSTMTBEGIN(  );
		}
		goto label$22;
		label$47:;
		{
			CIFSTMTNEXT(  );
		}
		goto label$22;
		label$48:;
		{
			CSELECTSTMTNEXT(  );
		}
		goto label$22;
		label$49:;
		{
			CDOSTMTEND(  );
		}
		goto label$22;
		label$50:;
		{
			CFORSTMTEND(  );
		}
		goto label$22;
		label$51:;
		{
			CWHILESTMTEND(  );
		}
		goto label$22;
		label$52:;
		{
			CEXITSTATEMENT(  );
		}
		goto label$22;
		label$53:;
		{
			CCONTINUESTATEMENT(  );
		}
		goto label$22;
		label$54:;
		{
			int64 vr$20 = LEXGETLOOKAHEADCLASS( 1ll, 0ll );
			if( vr$20 == 1ll ) goto label$56;
			{
				int64 vr$22 = CCOMPSTMTISALLOWED( 1ll );
				if( vr$22 != 0ll ) goto label$58;
				{
					HSKIPCOMPOUND( -1ll, -1ll, 0ll );
					goto label$17;
				}
				label$58:;
				label$57:;
				CENDSTATEMENT(  );
			}
			goto label$55;
			label$56:;
			{
				CCOMPOUNDEND(  );
			}
			label$55:;
		}
		goto label$22;
		label$59:;
		{
			CIFSTMTEND(  );
		}
		goto label$22;
		label$60:;
		{
			CUSINGSTMT(  );
		}
		goto label$22;
		label$61:;
		{
			fb$result$1 = 0ll;
			goto label$17;
		}
		goto label$22;
		label$23:;
		static const void* tmp$87[75ll] = {
			&&label$24,
			&&label$61,
			&&label$47,
			&&label$47,
			&&label$36,
			&&label$48,
			&&label$61,
			&&label$33,
			&&label$61,
			&&label$51,
			&&label$53,
			&&label$52,
			&&label$30,
			&&label$49,
			&&label$39,
			&&label$27,
			&&label$61,
			&&label$50,
			&&label$61,
			&&label$42,
			&&label$45,
			&&label$60,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$46,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$59,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$54,
		};
		if( TMP$86$2 < 266ll ) goto label$61;
		if( TMP$86$2 > 340ll ) goto label$61;
		goto *tmp$87[TMP$86$2 - 266ll];
		label$22:;
	}
	fb$result$1 = -1ll;
	label$17:;
	return fb$result$1;
}

void CENDSTATEMENT( void )
{
	label$62:;
	struct $7ASTNODE* ERRLEVEL$1;
	LEXSKIPTOKEN( 0ll );
	{
		uint64 TMP$88$2;
		int64 vr$0 = LEXGETTOKEN( 0ll );
		TMP$88$2 = (uint64)vr$0;
		goto label$65;
		label$66:;
		{
			ERRLEVEL$1 = (struct $7ASTNODE*)0ull;
		}
		goto label$64;
		label$67:;
		{
			struct $7ASTNODE* vr$1 = CEXPRESSION(  );
			ERRLEVEL$1 = vr$1;
		}
		goto label$64;
		label$65:;
		static const void* tmp$89[85ll] = {
			&&label$66,
			&&label$66,
			&&label$66,
			&&label$66,
			&&label$66,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$66,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$66,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$66,
		};
		if( TMP$88$2 < 256ll ) goto label$67;
		if( TMP$88$2 > 340ll ) goto label$67;
		goto *tmp$89[TMP$88$2 - 256ll];
		label$64:;
	}
	RTLEXITAPP( ERRLEVEL$1 );
	label$63:;
}

void CEXITSTATEMENT( void )
{
	label$74:;
	struct $8FBSYMBOL* LABEL$1;
	LABEL$1 = (struct $8FBSYMBOL*)0ull;
	LEXSKIPTOKEN( 0ll );
	int64 TK$1;
	int64 vr$0 = LEXGETTOKEN( 0ll );
	TK$1 = vr$0;
	{
		uint64 TMP$90$2;
		TMP$90$2 = (uint64)TK$1;
		goto label$77;
		label$78:;
		{
			if( *(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 64ll) != (struct $13FB_CMPSTMTSTK*)0ull ) goto label$80;
			{
				ERRREPORT( 238ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				goto label$75;
			}
			label$80:;
			label$79:;
			LEXSKIPTOKEN( 0ll );
			struct $13FB_CMPSTMTSTK* STK$3;
			STK$3 = *(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 64ll);
			label$81:;
			int64 vr$2 = LEXGETTOKEN( 0ll );
			if( vr$2 != 44ll ) goto label$82;
			{
				LEXSKIPTOKEN( 0ll );
				int64 vr$4 = LEXGETTOKEN( 0ll );
				if( vr$4 == 281ll ) goto label$84;
				{
					ERRREPORT( 242ll, 0ll, (uint8*)0ull );
					HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
					goto label$75;
				}
				label$84:;
				label$83:;
				STK$3 = *(struct $13FB_CMPSTMTSTK**)((uint8*)STK$3 + 160ll);
				if( STK$3 != (struct $13FB_CMPSTMTSTK*)0ull ) goto label$86;
				{
					ERRREPORT( 246ll, 0ll, (uint8*)0ull );
					HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
					goto label$75;
				}
				label$86:;
				label$85:;
				LEXSKIPTOKEN( 0ll );
			}
			goto label$81;
			label$82:;
			LABEL$1 = *(struct $8FBSYMBOL**)((uint8*)STK$3 + 152ll);
		}
		goto label$76;
		label$87:;
		{
			if( *(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 72ll) != (struct $13FB_CMPSTMTSTK*)0ull ) goto label$89;
			{
				ERRREPORT( 239ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				goto label$75;
			}
			label$89:;
			label$88:;
			LEXSKIPTOKEN( 0ll );
			struct $13FB_CMPSTMTSTK* STK$3;
			STK$3 = *(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 72ll);
			label$90:;
			int64 vr$10 = LEXGETTOKEN( 0ll );
			if( vr$10 != 44ll ) goto label$91;
			{
				LEXSKIPTOKEN( 0ll );
				int64 vr$12 = LEXGETTOKEN( 0ll );
				if( vr$12 == 278ll ) goto label$93;
				{
					ERRREPORT( 243ll, 0ll, (uint8*)0ull );
					HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
					goto label$75;
				}
				label$93:;
				label$92:;
				STK$3 = *(struct $13FB_CMPSTMTSTK**)((uint8*)STK$3 + 56ll);
				if( STK$3 != (struct $13FB_CMPSTMTSTK*)0ull ) goto label$95;
				{
					ERRREPORT( 247ll, 0ll, (uint8*)0ull );
					HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
					goto label$75;
				}
				label$95:;
				label$94:;
				LEXSKIPTOKEN( 0ll );
			}
			goto label$90;
			label$91:;
			LABEL$1 = *(struct $8FBSYMBOL**)((uint8*)STK$3 + 48ll);
		}
		goto label$76;
		label$96:;
		{
			if( *(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 80ll) != (struct $13FB_CMPSTMTSTK*)0ull ) goto label$98;
			{
				ERRREPORT( 240ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				goto label$75;
			}
			label$98:;
			label$97:;
			LEXSKIPTOKEN( 0ll );
			struct $13FB_CMPSTMTSTK* STK$3;
			STK$3 = *(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 80ll);
			label$99:;
			int64 vr$18 = LEXGETTOKEN( 0ll );
			if( vr$18 != 44ll ) goto label$100;
			{
				LEXSKIPTOKEN( 0ll );
				int64 vr$20 = LEXGETTOKEN( 0ll );
				if( vr$20 == 273ll ) goto label$102;
				{
					ERRREPORT( 244ll, 0ll, (uint8*)0ull );
					HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
					goto label$75;
				}
				label$102:;
				label$101:;
				STK$3 = *(struct $13FB_CMPSTMTSTK**)((uint8*)STK$3 + 40ll);
				if( STK$3 != (struct $13FB_CMPSTMTSTK*)0ull ) goto label$104;
				{
					ERRREPORT( 248ll, 0ll, (uint8*)0ull );
					HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
					goto label$75;
				}
				label$104:;
				label$103:;
				LEXSKIPTOKEN( 0ll );
			}
			goto label$99;
			label$100:;
			LABEL$1 = *(struct $8FBSYMBOL**)((uint8*)STK$3 + 32ll);
		}
		goto label$76;
		label$105:;
		{
			if( *(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 88ll) != (struct $13FB_CMPSTMTSTK*)0ull ) goto label$107;
			{
				ERRREPORT( 241ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				goto label$75;
			}
			label$107:;
			label$106:;
			LEXSKIPTOKEN( 0ll );
			struct $13FB_CMPSTMTSTK* STK$3;
			STK$3 = *(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 88ll);
			label$108:;
			int64 vr$26 = LEXGETTOKEN( 0ll );
			if( vr$26 != 44ll ) goto label$109;
			{
				LEXSKIPTOKEN( 0ll );
				int64 vr$28 = LEXGETTOKEN( 0ll );
				if( vr$28 == 270ll ) goto label$111;
				{
					ERRREPORT( 245ll, 0ll, (uint8*)0ull );
					HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
					goto label$75;
				}
				label$111:;
				label$110:;
				STK$3 = *(struct $13FB_CMPSTMTSTK**)((uint8*)STK$3 + 96ll);
				if( STK$3 != (struct $13FB_CMPSTMTSTK*)0ull ) goto label$113;
				{
					ERRREPORT( 249ll, 0ll, (uint8*)0ull );
					HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
					goto label$75;
				}
				label$113:;
				label$112:;
				LEXSKIPTOKEN( 0ll );
			}
			goto label$108;
			label$109:;
			LABEL$1 = *(struct $8FBSYMBOL**)((uint8*)STK$3 + 88ll);
		}
		goto label$76;
		label$114:;
		{
			if( *(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 96ll) == (struct $13FB_CMPSTMTSTK*)0ull ) goto label$116;
			{
				LABEL$1 = *(struct $8FBSYMBOL**)((uint8*)*(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 96ll) + 40ll);
			}
			label$116:;
			label$115:;
			if( LABEL$1 != (struct $8FBSYMBOL*)0ull ) goto label$118;
			{
				int64 ERRMSG$4;
				__builtin_memset( &ERRMSG$4, 0, 8ll );
				{
					uint64 TMP$91$5;
					TMP$91$5 = (uint64)TK$1;
					goto label$120;
					label$121:;
					{
						ERRMSG$4 = 252ll;
					}
					goto label$119;
					label$122:;
					{
						ERRMSG$4 = 192ll;
					}
					goto label$119;
					label$123:;
					{
						ERRMSG$4 = 143ll;
					}
					goto label$119;
					label$124:;
					{
						ERRMSG$4 = 164ll;
					}
					goto label$119;
					label$125:;
					{
						ERRMSG$4 = 165ll;
					}
					goto label$119;
					label$126:;
					{
						ERRMSG$4 = 253ll;
					}
					goto label$119;
					label$120:;
					static const void* tmp$93[6ll] = {
						&&label$121,
						&&label$126,
						&&label$124,
						&&label$125,
						&&label$123,
						&&label$122,
					};
					if( TMP$91$5 < 345ll ) goto label$126;
					if( TMP$91$5 > 350ll ) goto label$126;
					goto *tmp$93[TMP$91$5 - 345ll];
					label$119:;
				}
				ERRREPORT( ERRMSG$4, 0ll, (uint8*)0ull );
				HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				goto label$75;
			}
			label$118:;
			label$117:;
			$9FB_ERRMSG ERRNUM$3;
			ERRNUM$3 = 0ll;
			{
				uint64 TMP$92$4;
				int64 vr$37 = LEXGETTOKEN( 0ll );
				TMP$92$4 = (uint64)vr$37;
				goto label$128;
				label$129:;
				{
					if( (*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 48ll) & 511ll) != 0ll ) goto label$131;
					{
						if( (*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 8ll) & 61440ll) == 0ll ) goto label$133;
						{
							ERRNUM$3 = 252ll;
						}
						label$133:;
						label$132:;
					}
					goto label$130;
					label$131:;
					{
						ERRNUM$3 = 252ll;
					}
					label$130:;
				}
				goto label$127;
				label$134:;
				{
					if( (*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 48ll) & 511ll) == 0ll ) goto label$136;
					{
						if( (*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 8ll) & 61440ll) == 0ll ) goto label$138;
						{
							ERRNUM$3 = 253ll;
						}
						goto label$137;
						label$138:;
						{
							int64 vr$50 = HCHECKFORCTORRESULT(  );
							ERRNUM$3 = vr$50;
						}
						label$137:;
					}
					goto label$135;
					label$136:;
					{
						ERRNUM$3 = 253ll;
					}
					label$135:;
				}
				goto label$127;
				label$139:;
				{
					if( (*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 8ll) & 32768ll) == 0ll ) goto label$141;
					{
						int64 vr$54 = HCHECKFORCTORRESULT(  );
						ERRNUM$3 = vr$54;
					}
					goto label$140;
					label$141:;
					{
						ERRNUM$3 = 192ll;
					}
					label$140:;
				}
				goto label$127;
				label$142:;
				{
					if( (*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 8ll) & 16384ll) == 0ll ) goto label$144;
					{
						int64 vr$58 = HCHECKFORCTORRESULT(  );
						ERRNUM$3 = vr$58;
					}
					goto label$143;
					label$144:;
					{
						ERRNUM$3 = 143ll;
					}
					label$143:;
				}
				goto label$127;
				label$145:;
				{
					if( (int64)-((*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 8ll) & 4096ll) != 0ll) != 0ll ) goto label$147;
					{
						ERRNUM$3 = 164ll;
					}
					label$147:;
					label$146:;
				}
				goto label$127;
				label$148:;
				{
					if( (int64)-((*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 8ll) & 8192ll) != 0ll) != 0ll ) goto label$150;
					{
						ERRNUM$3 = 165ll;
					}
					label$150:;
					label$149:;
				}
				goto label$127;
				label$128:;
				static const void* tmp$94[6ll] = {
					&&label$129,
					&&label$134,
					&&label$145,
					&&label$148,
					&&label$142,
					&&label$139,
				};
				if( TMP$92$4 < 345ll ) goto label$127;
				if( TMP$92$4 > 350ll ) goto label$127;
				goto *tmp$94[TMP$92$4 - 345ll];
				label$127:;
			}
			if( ERRNUM$3 == 0ll ) goto label$152;
			{
				ERRREPORT( ERRNUM$3, 0ll, (uint8*)0ull );
				HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				goto label$75;
			}
			label$152:;
			label$151:;
			LEXSKIPTOKEN( 0ll );
		}
		goto label$76;
		label$153:;
		{
			ERRREPORT( 250ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
			goto label$75;
		}
		goto label$76;
		label$77:;
		static const void* tmp$95[81ll] = {
			&&label$105,
			&&label$153,
			&&label$153,
			&&label$96,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$87,
			&&label$153,
			&&label$153,
			&&label$78,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$153,
			&&label$114,
			&&label$114,
			&&label$114,
			&&label$114,
			&&label$114,
			&&label$114,
		};
		if( TMP$90$2 < 270ll ) goto label$153;
		if( TMP$90$2 > 350ll ) goto label$153;
		goto *tmp$95[TMP$90$2 - 270ll];
		label$76:;
	}
	ASTSCOPEBREAK( LABEL$1 );
	label$75:;
}

void CCONTINUESTATEMENT( void )
{
	label$154:;
	struct $8FBSYMBOL* LABEL$1;
	LABEL$1 = (struct $8FBSYMBOL*)0ull;
	LEXSKIPTOKEN( 0ll );
	{
		uint64 TMP$96$2;
		int64 vr$0 = LEXGETTOKEN( 0ll );
		TMP$96$2 = (uint64)vr$0;
		goto label$157;
		label$158:;
		{
			if( *(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 64ll) != (struct $13FB_CMPSTMTSTK*)0ull ) goto label$160;
			{
				ERRREPORT( 238ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				goto label$155;
			}
			label$160:;
			label$159:;
			LEXSKIPTOKEN( 0ll );
			struct $13FB_CMPSTMTSTK* STK$3;
			STK$3 = *(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 64ll);
			label$161:;
			int64 vr$2 = LEXGETTOKEN( 0ll );
			if( vr$2 != 44ll ) goto label$162;
			{
				LEXSKIPTOKEN( 0ll );
				int64 vr$4 = LEXGETTOKEN( 0ll );
				if( vr$4 == 281ll ) goto label$164;
				{
					ERRREPORT( 242ll, 0ll, (uint8*)0ull );
					HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
					goto label$155;
				}
				label$164:;
				label$163:;
				STK$3 = *(struct $13FB_CMPSTMTSTK**)((uint8*)STK$3 + 160ll);
				if( STK$3 != (struct $13FB_CMPSTMTSTK*)0ull ) goto label$166;
				{
					ERRREPORT( 246ll, 0ll, (uint8*)0ull );
					HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
					goto label$155;
				}
				label$166:;
				label$165:;
				LEXSKIPTOKEN( 0ll );
			}
			goto label$161;
			label$162:;
			LABEL$1 = *(struct $8FBSYMBOL**)((uint8*)STK$3 + 144ll);
		}
		goto label$156;
		label$167:;
		{
			if( *(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 72ll) != (struct $13FB_CMPSTMTSTK*)0ull ) goto label$169;
			{
				ERRREPORT( 239ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				goto label$155;
			}
			label$169:;
			label$168:;
			LEXSKIPTOKEN( 0ll );
			struct $13FB_CMPSTMTSTK* STK$3;
			STK$3 = *(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 72ll);
			label$170:;
			int64 vr$10 = LEXGETTOKEN( 0ll );
			if( vr$10 != 44ll ) goto label$171;
			{
				LEXSKIPTOKEN( 0ll );
				int64 vr$12 = LEXGETTOKEN( 0ll );
				if( vr$12 == 278ll ) goto label$173;
				{
					ERRREPORT( 243ll, 0ll, (uint8*)0ull );
					HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
					goto label$155;
				}
				label$173:;
				label$172:;
				STK$3 = *(struct $13FB_CMPSTMTSTK**)((uint8*)STK$3 + 56ll);
				if( STK$3 != (struct $13FB_CMPSTMTSTK*)0ull ) goto label$175;
				{
					ERRREPORT( 247ll, 0ll, (uint8*)0ull );
					HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
					goto label$155;
				}
				label$175:;
				label$174:;
				LEXSKIPTOKEN( 0ll );
			}
			goto label$170;
			label$171:;
			LABEL$1 = *(struct $8FBSYMBOL**)((uint8*)STK$3 + 40ll);
		}
		goto label$156;
		label$176:;
		{
			if( *(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 80ll) != (struct $13FB_CMPSTMTSTK*)0ull ) goto label$178;
			{
				ERRREPORT( 240ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				goto label$155;
			}
			label$178:;
			label$177:;
			LEXSKIPTOKEN( 0ll );
			struct $13FB_CMPSTMTSTK* STK$3;
			STK$3 = *(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 80ll);
			label$179:;
			int64 vr$18 = LEXGETTOKEN( 0ll );
			if( vr$18 != 44ll ) goto label$180;
			{
				LEXSKIPTOKEN( 0ll );
				int64 vr$20 = LEXGETTOKEN( 0ll );
				if( vr$20 == 273ll ) goto label$182;
				{
					ERRREPORT( 244ll, 0ll, (uint8*)0ull );
					HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
					goto label$155;
				}
				label$182:;
				label$181:;
				STK$3 = *(struct $13FB_CMPSTMTSTK**)((uint8*)STK$3 + 40ll);
				if( STK$3 != (struct $13FB_CMPSTMTSTK*)0ull ) goto label$184;
				{
					ERRREPORT( 248ll, 0ll, (uint8*)0ull );
					HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
					goto label$155;
				}
				label$184:;
				label$183:;
				LEXSKIPTOKEN( 0ll );
			}
			goto label$179;
			label$180:;
			LABEL$1 = *(struct $8FBSYMBOL**)((uint8*)STK$3 + 24ll);
		}
		goto label$156;
		label$185:;
		{
			ERRREPORT( 251ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
			goto label$155;
		}
		goto label$156;
		label$157:;
		static const void* tmp$97[9ll] = {
			&&label$176,
			&&label$185,
			&&label$185,
			&&label$185,
			&&label$185,
			&&label$167,
			&&label$185,
			&&label$185,
			&&label$158,
		};
		if( TMP$96$2 < 273ll ) goto label$185;
		if( TMP$96$2 > 281ll ) goto label$185;
		goto *tmp$97[TMP$96$2 - 273ll];
		label$156:;
	}
	ASTSCOPEBREAK( LABEL$1 );
	label$155:;
}

int64 CCOMPSTMTCHECK( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$199:;
	int64 ERRMSG$1;
	__builtin_memset( &ERRMSG$1, 0, 8ll );
	struct $13FB_CMPSTMTSTK* STK$1;
	__builtin_memset( &STK$1, 0, 8ll );
	void* vr$4 = STACKGETTOS( (struct $6TSTACK*)&PARSER$ );
	STK$1 = (struct $13FB_CMPSTMTSTK*)vr$4;
	if( STK$1 != (struct $13FB_CMPSTMTSTK*)0ull ) goto label$202;
	{
		fb$result$1 = -1ll;
		goto label$200;
	}
	label$202:;
	label$201:;
	{
		uint64 TMP$99$2;
		TMP$99$2 = *(uint64*)STK$1;
		goto label$204;
		label$205:;
		{
			ERRMSG$1 = 32ll;
		}
		goto label$203;
		label$206:;
		{
			ERRMSG$1 = 35ll;
		}
		goto label$203;
		label$207:;
		{
			ERRMSG$1 = 94ll;
		}
		goto label$203;
		label$208:;
		{
			ERRMSG$1 = 59ll;
		}
		goto label$203;
		label$209:;
		{
			ERRMSG$1 = 120ll;
		}
		goto label$203;
		label$210:;
		{
			ERRMSG$1 = 123ll;
		}
		goto label$203;
		label$211:;
		{
			{
				uint64 TMP$100$4;
				TMP$100$4 = *(uint64*)((uint8*)STK$1 + 24ll);
				goto label$213;
				label$214:;
				{
					ERRMSG$1 = 124ll;
				}
				goto label$212;
				label$215:;
				{
					ERRMSG$1 = 125ll;
				}
				goto label$212;
				label$216:;
				{
					ERRMSG$1 = 126ll;
				}
				goto label$212;
				label$217:;
				{
					ERRMSG$1 = 127ll;
				}
				goto label$212;
				label$218:;
				{
					ERRMSG$1 = 128ll;
				}
				goto label$212;
				label$219:;
				{
					ERRMSG$1 = 129ll;
				}
				goto label$212;
				label$213:;
				static const void* tmp$101[6ll] = {
					&&label$214,
					&&label$215,
					&&label$216,
					&&label$217,
					&&label$218,
					&&label$219,
				};
				if( TMP$100$4 < 345ll ) goto label$212;
				if( TMP$100$4 > 350ll ) goto label$212;
				goto *tmp$101[TMP$100$4 - 345ll];
				label$212:;
			}
		}
		goto label$203;
		label$220:;
		{
			ERRMSG$1 = 29ll;
		}
		goto label$203;
		label$221:;
		{
			ERRMSG$1 = 30ll;
		}
		goto label$203;
		label$222:;
		{
			ERRMSG$1 = 13ll;
		}
		goto label$203;
		label$204:;
		static const void* tmp$102[81ll] = {
			&&label$205,
			&&label$203,
			&&label$203,
			&&label$203,
			&&label$206,
			&&label$203,
			&&label$203,
			&&label$221,
			&&label$203,
			&&label$203,
			&&label$203,
			&&label$203,
			&&label$220,
			&&label$203,
			&&label$208,
			&&label$222,
			&&label$203,
			&&label$203,
			&&label$203,
			&&label$207,
			&&label$209,
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
			&&label$203,
			&&label$203,
			&&label$203,
			&&label$203,
			&&label$203,
			&&label$203,
			&&label$203,
			&&label$210,
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
			&&label$203,
			&&label$203,
			&&label$203,
			&&label$211,
		};
		if( TMP$99$2 < 266ll ) goto label$203;
		if( TMP$99$2 > 346ll ) goto label$203;
		goto *tmp$102[TMP$99$2 - 266ll];
		label$203:;
	}
	ERRREPORT( ERRMSG$1, 0ll, (uint8*)0ull );
	fb$result$1 = 0ll;
	label$200:;
	return fb$result$1;
}

struct $13FB_CMPSTMTSTK* CCOMPSTMTPUSH( $8FB_TOKEN ID$1, $15FB_CMPSTMT_MASK ALLOWMASK$1 )
{
	struct $13FB_CMPSTMTSTK* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$223:;
	static struct $13FB_CMPSTMTSTK* STK$1;
	void* vr$2 = STACKPUSH( (struct $6TSTACK*)&PARSER$ );
	STK$1 = (struct $13FB_CMPSTMTSTK*)vr$2;
	*(int64*)STK$1 = ID$1;
	*($15FB_CMPSTMT_MASK*)((uint8*)STK$1 + 8ll) = ALLOWMASK$1;
	*(struct $7ASTNODE**)((uint8*)STK$1 + 16ll) = (struct $7ASTNODE*)0ull;
	{
		uint64 TMP$103$2;
		TMP$103$2 = (uint64)ID$1;
		goto label$226;
		label$227:;
		{
			*(struct $13FB_CMPSTMTSTK**)((uint8*)STK$1 + 56ll) = *(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 72ll);
			*(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 72ll) = STK$1;
		}
		goto label$225;
		label$228:;
		{
			*(struct $13FB_CMPSTMTSTK**)((uint8*)STK$1 + 160ll) = *(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 64ll);
			*(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 64ll) = STK$1;
		}
		goto label$225;
		label$229:;
		{
			*(struct $13FB_CMPSTMTSTK**)((uint8*)STK$1 + 96ll) = *(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 88ll);
			*(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 88ll) = STK$1;
		}
		goto label$225;
		label$230:;
		{
			*(struct $13FB_CMPSTMTSTK**)((uint8*)STK$1 + 40ll) = *(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 80ll);
			*(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 80ll) = STK$1;
		}
		goto label$225;
		label$231:;
		{
			*(struct $13FB_CMPSTMTSTK**)((uint8*)STK$1 + 48ll) = *(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 96ll);
			*(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 96ll) = STK$1;
		}
		goto label$225;
		label$232:;
		{
			*(struct $13FB_CMPSTMTSTK**)((uint8*)STK$1 + 40ll) = *(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 104ll);
			*(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 104ll) = STK$1;
		}
		goto label$225;
		label$226:;
		static const void* tmp$104[77ll] = {
			&&label$229,
			&&label$225,
			&&label$225,
			&&label$230,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$227,
			&&label$225,
			&&label$232,
			&&label$228,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$225,
			&&label$231,
		};
		if( TMP$103$2 < 270ll ) goto label$225;
		if( TMP$103$2 > 346ll ) goto label$225;
		goto *tmp$104[TMP$103$2 - 270ll];
		label$225:;
	}
	*($8FB_TOKEN*)((uint8*)&PARSER$ + 48ll) = ID$1;
	fb$result$1 = STK$1;
	label$224:;
	return fb$result$1;
}

struct $13FB_CMPSTMTSTK* CCOMPSTMTGETTOS( $8FB_TOKEN FORID$1, int64 SHOWERROR$1 )
{
	struct $13FB_CMPSTMTSTK* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$233:;
	static struct $13FB_CMPSTMTSTK* STK$1;
	static int64 ISERROR$1;
	void* vr$2 = STACKGETTOS( (struct $6TSTACK*)&PARSER$ );
	STK$1 = (struct $13FB_CMPSTMTSTK*)vr$2;
	ISERROR$1 = (int64)-(STK$1 == (struct $13FB_CMPSTMTSTK*)0ull);
	if( ISERROR$1 != 0ll ) goto label$236;
	{
		ISERROR$1 = (int64)-(*(int64*)STK$1 != FORID$1);
	}
	label$236:;
	label$235:;
	if( ISERROR$1 == 0ll ) goto label$238;
	{
		if( SHOWERROR$1 == 0ll ) goto label$240;
		{
			if( STK$1 == (struct $13FB_CMPSTMTSTK*)0ull ) goto label$242;
			{
				CCOMPSTMTCHECK(  );
			}
			goto label$241;
			label$242:;
			{
				static int64 ERRMSG$4;
				{
					uint64 TMP$105$5;
					TMP$105$5 = (uint64)FORID$1;
					goto label$244;
					label$245:;
					{
						ERRMSG$4 = 105ll;
					}
					goto label$243;
					label$246:;
					{
						ERRMSG$4 = 114ll;
					}
					goto label$243;
					label$247:;
					{
						ERRMSG$4 = 106ll;
					}
					goto label$243;
					label$248:;
					{
						ERRMSG$4 = 109ll;
					}
					goto label$243;
					label$249:;
					{
						ERRMSG$4 = 112ll;
					}
					goto label$243;
					label$250:;
					{
						ERRMSG$4 = 110ll;
					}
					goto label$243;
					label$251:;
					{
						ERRMSG$4 = 107ll;
					}
					goto label$243;
					label$252:;
					{
						ERRMSG$4 = 108ll;
					}
					goto label$243;
					label$253:;
					{
						ERRMSG$4 = 111ll;
					}
					goto label$243;
					label$254:;
					{
						ERRMSG$4 = 113ll;
					}
					goto label$243;
					label$244:;
					static const void* tmp$106[81ll] = {
						&&label$248,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$250,
						&&label$243,
						&&label$243,
						&&label$251,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$245,
						&&label$243,
						&&label$252,
						&&label$247,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$249,
						&&label$254,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$246,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$243,
						&&label$253,
					};
					if( TMP$105$5 < 266ll ) goto label$243;
					if( TMP$105$5 > 346ll ) goto label$243;
					goto *tmp$106[TMP$105$5 - 266ll];
					label$243:;
				}
				ERRREPORT( ERRMSG$4, 0ll, (uint8*)0ull );
			}
			label$241:;
		}
		label$240:;
		label$239:;
		fb$result$1 = (struct $13FB_CMPSTMTSTK*)0ull;
	}
	goto label$237;
	label$238:;
	{
		fb$result$1 = STK$1;
	}
	label$237:;
	label$234:;
	return fb$result$1;
}

void CCOMPSTMTPOP( struct $13FB_CMPSTMTSTK* STK$1 )
{
	label$255:;
	{
		uint64 TMP$107$2;
		TMP$107$2 = *(uint64*)STK$1;
		goto label$258;
		label$259:;
		{
			*(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 72ll) = *(struct $13FB_CMPSTMTSTK**)((uint8*)STK$1 + 56ll);
		}
		goto label$257;
		label$260:;
		{
			*(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 64ll) = *(struct $13FB_CMPSTMTSTK**)((uint8*)STK$1 + 160ll);
		}
		goto label$257;
		label$261:;
		{
			*(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 88ll) = *(struct $13FB_CMPSTMTSTK**)((uint8*)STK$1 + 96ll);
		}
		goto label$257;
		label$262:;
		{
			*(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 80ll) = *(struct $13FB_CMPSTMTSTK**)((uint8*)STK$1 + 40ll);
		}
		goto label$257;
		label$263:;
		{
			*(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 96ll) = *(struct $13FB_CMPSTMTSTK**)((uint8*)STK$1 + 48ll);
		}
		goto label$257;
		label$264:;
		{
			*(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 104ll) = *(struct $13FB_CMPSTMTSTK**)((uint8*)STK$1 + 40ll);
		}
		goto label$257;
		label$258:;
		static const void* tmp$108[77ll] = {
			&&label$261,
			&&label$257,
			&&label$257,
			&&label$262,
			&&label$257,
			&&label$257,
			&&label$257,
			&&label$257,
			&&label$259,
			&&label$257,
			&&label$264,
			&&label$260,
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
			&&label$263,
		};
		if( TMP$107$2 < 270ll ) goto label$257;
		if( TMP$107$2 > 346ll ) goto label$257;
		goto *tmp$108[TMP$107$2 - 270ll];
		label$257:;
	}
	STACKPOP( (struct $6TSTACK*)&PARSER$ );
	void* vr$9 = STACKGETTOS( (struct $6TSTACK*)&PARSER$ );
	STK$1 = (struct $13FB_CMPSTMTSTK*)vr$9;
	if( STK$1 == (struct $13FB_CMPSTMTSTK*)0ull ) goto label$266;
	{
		*($8FB_TOKEN*)((uint8*)&PARSER$ + 48ll) = *($8FB_TOKEN*)STK$1;
	}
	goto label$265;
	label$266:;
	{
		*($8FB_TOKEN*)((uint8*)&PARSER$ + 48ll) = 0ll;
	}
	label$265:;
	label$256:;
}

int64 CCOMPSTMTISALLOWED( $15FB_CMPSTMT_MASK ALLOWMASK$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$267:;
	struct $13FB_CMPSTMTSTK* STK$1;
	int64 ERRMSG$1;
	void* vr$2 = STACKGETTOS( (struct $6TSTACK*)&PARSER$ );
	STK$1 = (struct $13FB_CMPSTMTSTK*)vr$2;
	if( STK$1 != (struct $13FB_CMPSTMTSTK*)0ull ) goto label$270;
	{
		fb$result$1 = -1ll;
		goto label$268;
	}
	label$270:;
	label$269:;
	if( (*(int64*)((uint8*)STK$1 + 8ll) & ALLOWMASK$1) == 0ll ) goto label$272;
	{
		fb$result$1 = -1ll;
		goto label$268;
	}
	label$272:;
	label$271:;
	if( (int64)-(*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) == *(struct $8FBSYMBOL**)((uint8*)&ENV$ + 1136ll)) != 0ll ) goto label$274;
	{
		ERRMSG$1 = 60ll;
	}
	goto label$273;
	label$274:;
	{
		if( *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll) != (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll) ) goto label$276;
		{
			if( *(int64*)STK$1 != 270ll ) goto label$278;
			{
				ERRMSG$1 = 61ll;
			}
			goto label$277;
			label$278:;
			{
				ERRMSG$1 = 95ll;
			}
			label$277:;
		}
		goto label$275;
		label$276:;
		{
			ERRMSG$1 = 121ll;
		}
		label$275:;
	}
	label$273:;
	ERRREPORT( ERRMSG$1, 0ll, (uint8*)0ull );
	fb$result$1 = 0ll;
	label$268:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__parserzcompound( void )
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

static int64 HCHECKFORCTORRESULT( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$68:;
	if( (*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 200ll) + 96ll) & 1ll) == 0ll ) goto label$71;
	{
		int64 vr$5 = SYMBHASCTOR( *(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) );
		if( (vr$5 & ~(int64)-((*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 8ll) & 33554432ll) != 0ll)) == 0ll ) goto label$73;
		{
			fb$result$1 = 179ll;
			goto label$69;
		}
		label$73:;
		label$72:;
	}
	label$71:;
	label$70:;
	*($12FB_PROCSTATS*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 200ll) + 96ll) = *(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 200ll) + 96ll) | 2ll;
	fb$result$1 = 0ll;
	label$69:;
	return fb$result$1;
}

static void CCOMPOUNDEND( void )
{
	label$186:;
	{
		uint64 TMP$98$2;
		int64 vr$0 = LEXGETLOOKAHEAD( 1ll, 0ll );
		TMP$98$2 = (uint64)vr$0;
		goto label$189;
		label$190:;
		{
			CIFSTMTEND(  );
		}
		goto label$188;
		label$191:;
		{
			CSELECTSTMTEND(  );
		}
		goto label$188;
		label$192:;
		{
			CPROCSTMTEND(  );
		}
		goto label$188;
		label$193:;
		{
			CSCOPESTMTEND(  );
		}
		goto label$188;
		label$194:;
		{
			CWITHSTMTEND(  );
		}
		goto label$188;
		label$195:;
		{
			CNAMESPACESTMTEND(  );
		}
		goto label$188;
		label$196:;
		{
			CEXTERNSTMTEND(  );
		}
		goto label$188;
		label$197:;
		{
			CENDSTATEMENT(  );
		}
		goto label$188;
		label$198:;
		{
			ERRREPORT( 33ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
		}
		goto label$188;
		label$189:;
		static const void* tmp$109[85ll] = {
			&&label$190,
			&&label$198,
			&&label$197,
			&&label$198,
			&&label$191,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$194,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$193,
			&&label$195,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$196,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$197,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$197,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$198,
			&&label$192,
			&&label$192,
			&&label$192,
			&&label$192,
			&&label$192,
			&&label$192,
		};
		if( TMP$98$2 < 266ll ) goto label$198;
		if( TMP$98$2 > 350ll ) goto label$198;
		goto *tmp$109[TMP$98$2 - 266ll];
		label$188:;
	}
	label$187:;
}

// Total compilation time: 0.04370791302062571 seconds.
