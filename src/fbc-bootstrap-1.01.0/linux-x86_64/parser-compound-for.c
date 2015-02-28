// Compilation of FreeBASIC-1.01.0-source/src/compiler/parser-compound-for.bas started at 16:30:11 on 02-28-2015

typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
typedef int64 $9FOR_FLAGS;
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
typedef int64 $9FB_ERRMSG;
struct $11FB_CALL_ARG;
struct $11FB_CALL_ARG {
	struct $7ASTNODE* EXPR;
	$12FB_PARAMMODE MODE;
	struct $11FB_CALL_ARG* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $11FB_CALL_ARG ) == 24 );
struct $16__FB_ARRAYDIMTB$ {
	int64 ELEMENTS;
	int64 LBOUND;
	int64 UBOUND;
};
__FB_STATIC_ASSERT( sizeof( struct $16__FB_ARRAYDIMTB$ ) == 24 );
FBSTRING* fb_StrInit( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
FBSTRING* fb_StrConcatAssign( void*, int64, void*, int64, int32 );
static void fb_ctor__parserzcompoundzfor( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRREPORT( int64, int64, uint8* );
typedef int64 $12FB_ERRMSGOPT;
void ERRREPORTWARN( int64, uint8*, $12FB_ERRMSGOPT );
void ASTDELNODE( struct $7ASTNODE* );
void ASTDELTREE( struct $7ASTNODE* );
struct $7ASTNODE* ASTSCOPEBEGIN( void );
void ASTSCOPEEND( struct $7ASTNODE* );
struct $7ASTNODE* ASTADD( struct $7ASTNODE* );
void ASTADDUNSCOPED( struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDBRANCH( struct $7ASTNODE*, struct $8FBSYMBOL*, int64, int64 );
struct $7ASTNODE* ASTNEWASSIGN( struct $7ASTNODE*, struct $7ASTNODE*, $9AST_OPOPT );
typedef int64 $11AST_CONVOPT;
struct $7ASTNODE* ASTNEWCONV( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, $11AST_CONVOPT, int64* );
struct $7ASTNODE* ASTNEWBOP( int64, struct $7ASTNODE*, struct $7ASTNODE*, struct $8FBSYMBOL*, $9AST_OPOPT );
struct $7ASTNODE* ASTNEWSELFBOP( int64, struct $7ASTNODE*, struct $7ASTNODE*, struct $8FBSYMBOL*, $9AST_OPOPT );
int64 ASTCONSTGEZERO( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWCONST( union $7FBVALUE*, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWCONSTI( int64, int64, struct $8FBSYMBOL* );
int64 ASTCONSTFLUSHTOINT( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWVAR( struct $8FBSYMBOL*, int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWBRANCH( int64, struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWLINK( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTNEWLABEL( struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* ASTNEWDECL( struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEll( struct $8FBSYMBOL*, struct $7ASTNODE*, int64, int64 );
struct $7ASTNODE* ASTBUILDCALL( struct $8FBSYMBOL*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE* );
typedef int64 $16FB_SYMBLOOKUPOPT;
struct $8FBSYMBOL* SYMBFINDCLOSESTOVLPROC( struct $8FBSYMBOL*, int64, struct $11FB_CALL_ARG*, $9FB_ERRMSG*, $16FB_SYMBLOOKUPOPT );
typedef int64 $10FB_SYMBOPT;
struct $8FBSYMBOL* SYMBADDLABEL( uint8*, $10FB_SYMBOPT );
struct $8FBSYMBOL* SYMBADDTEMPVAR( int64, struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBADDIMPLICITVAR( int64, struct $8FBSYMBOL*, int64 );
int64 SYMBCALCDEREFLEN( int64, struct $8FBSYMBOL* );
int64 SYMBHASCTOR( struct $8FBSYMBOL* );
int64 TYPETOSIGNED( int64 );
int64 TYPETOUNSIGNED( int64 );
struct $8FBSYMBOL* SYMBGETCOMPOPOVLHEAD( struct $8FBSYMBOL*, $6AST_OP );
typedef int64 $8LEXCHECK;
int64 LEXGETTOKEN( $8LEXCHECK );
int64 LEXGETCLASS( $8LEXCHECK );
void LEXSKIPTOKEN( $8LEXCHECK );
int64 LEXGETLOOKAHEAD( int64, $8LEXCHECK );
typedef int64 $9FB_INIOPT;
struct $7ASTNODE* CINITIALIZER( struct $8FBSYMBOL*, $9FB_INIOPT, int64, struct $8FBSYMBOL* );
typedef int64 $8FB_IDOPT;
struct $10FBSYMCHAIN* CIDENTIFIER( struct $8FBSYMBOL**, $8FB_IDOPT );
struct $13FB_CMPSTMTSTK* CCOMPSTMTPUSH( $8FB_TOKEN, $15FB_CMPSTMT_MASK );
struct $13FB_CMPSTMTSTK* CCOMPSTMTGETTOS( $8FB_TOKEN, int64 );
void CCOMPSTMTPOP( struct $13FB_CMPSTMTSTK* );
int64 CASSIGNTOKEN( void );
struct $7ASTNODE* CEXPRESSION( void );
struct $7ASTNODE* CVARIABLE( struct $10FBSYMCHAIN*, int64 );
void HSKIPUNTIL( int64, int64, $8LEXCHECK, int64 );
struct $8FBSYMBOL* CVARDECL( int64, int64, int64, int64 );
static struct $7ASTNODE* HUDTCALLOPOVL( struct $8FBSYMBOL*, $6AST_OP, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE* );
static void HFLUSHBOP( int64, struct $17FB_CMPSTMT_FORELM*, struct $17FB_CMPSTMT_FORELM*, struct $8FBSYMBOL* );
static void HFLUSHSELFBOP( int64, struct $17FB_CMPSTMT_FORELM*, struct $17FB_CMPSTMT_FORELM* );
static struct $7ASTNODE* HELMTOEXPR( struct $17FB_CMPSTMT_FORELM* );
static void HUDTFOR( struct $13FB_CMPSTMTSTK* );
static void HUDTSTEP( struct $13FB_CMPSTMTSTK* );
static void HUDTNEXT( struct $13FB_CMPSTMTSTK* );
static void HSCALARSTEP( struct $13FB_CMPSTMTSTK* );
static void HSCALARNEXT( struct $13FB_CMPSTMTSTK* );
static struct $8FBSYMBOL* HADDIMPLICITVAR( int64, struct $8FBSYMBOL* );
static struct $8FBSYMBOL* HSTORETEMP( int64, struct $8FBSYMBOL*, struct $7ASTNODE* );
static struct $7ASTNODE* HSTEPEXPRESSION( int64, struct $8FBSYMBOL*, struct $17FB_CMPSTMT_FORELM* );
static int64 HCALLCTOR( struct $8FBSYMBOL* );
static void HFORASSIGN( struct $13FB_CMPSTMTSTK*, int64*, int64, struct $8FBSYMBOL*, $9FOR_FLAGS, struct $7ASTNODE* );
static void HFORTO( struct $13FB_CMPSTMTSTK*, int64*, int64, struct $8FBSYMBOL*, $9FOR_FLAGS );
static void HFORSTEP( struct $13FB_CMPSTMTSTK*, int64*, int64, struct $8FBSYMBOL*, $9FOR_FLAGS );
static void HFORSTMTCLOSE( struct $13FB_CMPSTMTSTK* );
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
struct $5FBENV ENV$ __attribute__((common));

void CFORSTMTBEGIN( void )
{
	label$149:;
	$9FOR_FLAGS FLAGS$1;
	FLAGS$1 = 0ll;
	struct $8FBSYMBOL* SYM$1;
	LEXSKIPTOKEN( 0ll );
	struct $10FBSYMCHAIN* CHAIN_$1;
	struct $8FBSYMBOL* BASE_PARENT$1;
	struct $10FBSYMCHAIN* vr$1 = CIDENTIFIER( &BASE_PARENT$1, 38ll );
	CHAIN_$1 = vr$1;
	struct $7ASTNODE* OUTERSCOPENODE$1;
	struct $7ASTNODE* vr$2 = ASTSCOPEBEGIN(  );
	OUTERSCOPENODE$1 = vr$2;
	if( OUTERSCOPENODE$1 != (struct $7ASTNODE*)0ull ) goto label$152;
	{
		ERRREPORT( 27ll, 0ll, (uint8*)0ull );
	}
	label$152:;
	label$151:;
	struct $7ASTNODE* IDEXPR$1;
	struct $7ASTNODE* EXPR$1;
	int64 vr$4 = LEXGETLOOKAHEAD( 1ll, 0ll );
	if( vr$4 != 375ll ) goto label$154;
	{
		int64 vr$6 = LEXGETTOKEN( 0ll );
		struct $8FBSYMBOL* vr$7 = CVARDECL( 0ll, 0ll, vr$6, -1ll );
		SYM$1 = vr$7;
		if( SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$156;
		{
			struct $8FBSYMBOL* vr$9 = SYMBADDTEMPVAR( 7ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$10 = ASTNEWVAR( vr$9, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			IDEXPR$1 = vr$10;
		}
		goto label$155;
		label$156:;
		{
			FLAGS$1 = FLAGS$1 | 4ll;
			struct $7ASTNODE* vr$12 = ASTNEWVAR( SYM$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			IDEXPR$1 = vr$12;
		}
		label$155:;
	}
	goto label$153;
	label$154:;
	int64 vr$13 = LEXGETLOOKAHEAD( 1ll, 0ll );
	if( vr$13 != 40ll ) goto label$157;
	{
		ERRREPORT( 51ll, -1ll, (uint8*)0ull );
		HSKIPUNTIL( 41ll, 0ll, 0ll, 0ll );
		struct $8FBSYMBOL* vr$15 = SYMBADDTEMPVAR( 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$16 = ASTNEWVAR( vr$15, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		IDEXPR$1 = vr$16;
	}
	goto label$153;
	label$157:;
	{
		struct $7ASTNODE* vr$17 = CVARIABLE( CHAIN_$1, -1ll );
		IDEXPR$1 = vr$17;
		if( IDEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$159;
		{
			ERRREPORT( 14ll, 0ll, (uint8*)0ull );
			struct $8FBSYMBOL* vr$19 = SYMBADDTEMPVAR( 7ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$20 = ASTNEWVAR( vr$19, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			IDEXPR$1 = vr$20;
		}
		label$159:;
		label$158:;
		if( (int64)-(*(int64*)IDEXPR$1 == 17ll) != 0ll ) goto label$161;
		{
			ERRREPORT( 51ll, -1ll, (uint8*)0ull );
			ASTDELTREE( IDEXPR$1 );
			struct $8FBSYMBOL* vr$24 = SYMBADDTEMPVAR( 7ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$25 = ASTNEWVAR( vr$24, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			IDEXPR$1 = vr$25;
		}
		label$161:;
		label$160:;
	}
	label$153:;
	int64 DTYPE$1;
	DTYPE$1 = *(int64*)((uint8*)IDEXPR$1 + 8ll) & 511ll;
	struct $8FBSYMBOL* SUBTYPE$1;
	SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)IDEXPR$1 + 16ll);
	if( (*(int64*)((uint8*)IDEXPR$1 + 8ll) & 512ll) == 0ll ) goto label$163;
	{
		ERRREPORT( 118ll, 0ll, (uint8*)0ull );
	}
	label$163:;
	label$162:;
	{
		uint64 TMP$91$2;
		TMP$91$2 = (uint64)DTYPE$1;
		goto label$165;
		label$166:;
		{
		}
		goto label$164;
		label$167:;
		{
			FLAGS$1 = FLAGS$1 | 1ll;
			int64 vr$34 = SYMBHASCTOR( *(struct $8FBSYMBOL**)((uint8*)IDEXPR$1 + 24ll) );
			if( vr$34 == 0ll ) goto label$169;
			{
				FLAGS$1 = FLAGS$1 | 2ll;
			}
			label$169:;
			label$168:;
		}
		goto label$164;
		label$170:;
		{
			if( (int64)-((DTYPE$1 & 480ll) != 0ll) != 0ll ) goto label$172;
			{
				ERRREPORT( 51ll, -1ll, (uint8*)0ull );
				ASTDELTREE( IDEXPR$1 );
				struct $8FBSYMBOL* vr$40 = SYMBADDTEMPVAR( 7ll, (struct $8FBSYMBOL*)0ull );
				struct $7ASTNODE* vr$41 = ASTNEWVAR( vr$40, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
				IDEXPR$1 = vr$41;
				DTYPE$1 = *(int64*)((uint8*)IDEXPR$1 + 8ll) & 511ll;
			}
			label$172:;
			label$171:;
		}
		goto label$164;
		label$165:;
		static const void* tmp$93[18ll] = {
			&&label$166,
			&&label$166,
			&&label$166,
			&&label$166,
			&&label$166,
			&&label$166,
			&&label$166,
			&&label$166,
			&&label$166,
			&&label$166,
			&&label$166,
			&&label$166,
			&&label$166,
			&&label$166,
			&&label$166,
			&&label$170,
			&&label$170,
			&&label$167,
		};
		if( TMP$91$2 < 1ll ) goto label$170;
		if( TMP$91$2 > 18ll ) goto label$170;
		goto *tmp$93[TMP$91$2 - 1ll];
		label$164:;
	}
	struct $13FB_CMPSTMTSTK* STK$1;
	struct $13FB_CMPSTMTSTK* vr$44 = CCOMPSTMTPUSH( 281ll, 1ll );
	STK$1 = vr$44;
	*(struct $8FBSYMBOL**)((uint8*)STK$1 + 32ll) = *(struct $8FBSYMBOL**)((uint8*)IDEXPR$1 + 24ll);
	*(int64*)((uint8*)STK$1 + 48ll) = DTYPE$1;
	int64 ISCONST$1;
	ISCONST$1 = 0ll;
	HFORASSIGN( STK$1, &ISCONST$1, DTYPE$1, SUBTYPE$1, FLAGS$1, IDEXPR$1 );
	HFORTO( STK$1, &ISCONST$1, DTYPE$1, SUBTYPE$1, FLAGS$1 );
	HFORSTEP( STK$1, &ISCONST$1, DTYPE$1, SUBTYPE$1, FLAGS$1 );
	struct $8FBSYMBOL* IL$1;
	struct $8FBSYMBOL* TL$1;
	struct $8FBSYMBOL* EL$1;
	struct $8FBSYMBOL* CL$1;
	struct $8FBSYMBOL* vr$51 = SYMBADDLABEL( (uint8*)0ull, 0ll );
	TL$1 = vr$51;
	struct $8FBSYMBOL* vr$52 = SYMBADDLABEL( (uint8*)0ull, 0ll );
	CL$1 = vr$52;
	struct $8FBSYMBOL* vr$53 = SYMBADDLABEL( (uint8*)0ull, 0ll );
	EL$1 = vr$53;
	*(struct $8FBSYMBOL**)((uint8*)STK$1 + 152ll) = EL$1;
	if( (FLAGS$1 & 1ll) == 0ll ) goto label$174;
	{
		HUDTFOR( STK$1 );
	}
	label$174:;
	label$173:;
	if( ISCONST$1 != 3ll ) goto label$176;
	{
		$6AST_OP TMP$92$2;
		struct $7ASTNODE* vr$61 = ASTNEWCONST( (union $7FBVALUE*)((uint8*)STK$1 + 64ll), *(int64*)((uint8*)STK$1 + 72ll), (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$65 = ASTNEWCONST( (union $7FBVALUE*)((uint8*)STK$1 + 40ll), *(int64*)((uint8*)STK$1 + 48ll), (struct $8FBSYMBOL*)0ull );
		if( *(int64*)((uint8*)STK$1 + 112ll) == 0ll ) goto label$177;
		TMP$92$2 = 50ll;
		goto label$180;
		label$177:;
		TMP$92$2 = 49ll;
		label$180:;
		struct $7ASTNODE* vr$68 = ASTNEWBOP( TMP$92$2, vr$65, vr$61, (struct $8FBSYMBOL*)0ull, 1ll );
		EXPR$1 = vr$68;
		int64 vr$69 = ASTCONSTFLUSHTOINT( EXPR$1 );
		if( vr$69 != 0ll ) goto label$179;
		{
			struct $7ASTNODE* vr$71 = ASTNEWBRANCH( 97ll, EL$1, (struct $7ASTNODE*)0ull );
			ASTADD( vr$71 );
		}
		label$179:;
		label$178:;
	}
	goto label$175;
	label$176:;
	{
		struct $7ASTNODE* vr$72 = ASTNEWBRANCH( 97ll, TL$1, (struct $7ASTNODE*)0ull );
		ASTADD( vr$72 );
	}
	label$175:;
	struct $8FBSYMBOL* vr$73 = SYMBADDLABEL( (uint8*)0ull, 4ll );
	IL$1 = vr$73;
	struct $7ASTNODE* vr$74 = ASTNEWLABEL( IL$1, -1ll );
	ASTADD( vr$74 );
	struct $7ASTNODE* vr$75 = ASTSCOPEBEGIN(  );
	*(struct $7ASTNODE**)((uint8*)STK$1 + 16ll) = vr$75;
	*(struct $7ASTNODE**)((uint8*)STK$1 + 24ll) = OUTERSCOPENODE$1;
	*(struct $8FBSYMBOL**)((uint8*)STK$1 + 128ll) = TL$1;
	*(struct $8FBSYMBOL**)((uint8*)STK$1 + 136ll) = IL$1;
	*(struct $8FBSYMBOL**)((uint8*)STK$1 + 144ll) = CL$1;
	label$150:;
}

void CFORSTMTEND( void )
{
	label$213:;
	struct $13FB_CMPSTMTSTK* STK$1;
	LEXSKIPTOKEN( 0ll );
	label$215:;
	{
		struct $13FB_CMPSTMTSTK* vr$0 = CCOMPSTMTGETTOS( 281ll, -1ll );
		STK$1 = vr$0;
		if( STK$1 != (struct $13FB_CMPSTMTSTK*)0ull ) goto label$219;
		{
			HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
			goto label$214;
		}
		label$219:;
		label$218:;
		HFORSTMTCLOSE( STK$1 );
		int64 vr$2 = LEXGETCLASS( 0ll );
		if( vr$2 == 0ll ) goto label$221;
		{
			CCOMPSTMTPOP( STK$1 );
			goto label$216;
		}
		label$221:;
		label$220:;
		struct $10FBSYMCHAIN* CHAIN_$2;
		struct $8FBSYMBOL* BASE_PARENT$2;
		struct $10FBSYMCHAIN* vr$5 = CIDENTIFIER( &BASE_PARENT$2, 38ll );
		CHAIN_$2 = vr$5;
		struct $7ASTNODE* IDEXPR$2;
		struct $7ASTNODE* vr$6 = CVARIABLE( CHAIN_$2, -1ll );
		IDEXPR$2 = vr$6;
		if( IDEXPR$2 != (struct $7ASTNODE*)0ull ) goto label$223;
		{
			ERRREPORT( 14ll, 0ll, (uint8*)0ull );
		}
		goto label$222;
		label$223:;
		{
			if( *(struct $8FBSYMBOL**)((uint8*)IDEXPR$2 + 24ll) == *(struct $8FBSYMBOL**)((uint8*)STK$1 + 32ll) ) goto label$225;
			{
				ERRREPORT( 282ll, 0ll, (uint8*)0ull );
			}
			label$225:;
			label$224:;
			if( (*(int64*)((uint8*)&ENV$ + 352ll) & 8ll) == 0ll ) goto label$227;
			{
				ERRREPORTWARN( 26ll, *(uint8**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)IDEXPR$2 + 24ll) + 24ll), 1ll );
			}
			label$227:;
			label$226:;
			ASTDELTREE( IDEXPR$2 );
		}
		label$222:;
		CCOMPSTMTPOP( STK$1 );
		int64 vr$15 = LEXGETTOKEN( 0ll );
		if( vr$15 == 44ll ) goto label$229;
		{
			goto label$216;
		}
		label$229:;
		label$228:;
		LEXSKIPTOKEN( 0ll );
	}
	label$217:;
	goto label$215;
	label$216:;
	label$214:;
}

__attribute__(( constructor )) static void fb_ctor__parserzcompoundzfor( void )
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

static struct $7ASTNODE* HELMTOEXPR( struct $17FB_CMPSTMT_FORELM* V$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$10:;
	if( *(struct $8FBSYMBOL**)V$1 == (struct $8FBSYMBOL*)0ull ) goto label$13;
	{
		struct $7ASTNODE* vr$4 = ASTNEWVAR( *(struct $8FBSYMBOL**)V$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		fb$result$1 = vr$4;
	}
	goto label$12;
	label$13:;
	{
		struct $7ASTNODE* vr$8 = ASTNEWCONST( (union $7FBVALUE*)((uint8*)V$1 + 8ll), *(int64*)((uint8*)V$1 + 16ll), (struct $8FBSYMBOL*)0ull );
		fb$result$1 = vr$8;
	}
	label$12:;
	label$11:;
	return fb$result$1;
}

static void HUDTFOR( struct $13FB_CMPSTMTSTK* STK$1 )
{
	label$14:;
	struct $7ASTNODE* PROC$1;
	struct $7ASTNODE* STEP_EXPR$1;
	STEP_EXPR$1 = (struct $7ASTNODE*)0ull;
	if( *(int64*)((uint8*)STK$1 + 168ll) == 0ll ) goto label$17;
	{
		struct $7ASTNODE* vr$4 = HELMTOEXPR( (struct $17FB_CMPSTMT_FORELM*)((uint8*)STK$1 + 80ll) );
		STEP_EXPR$1 = vr$4;
	}
	label$17:;
	label$16:;
	struct $7ASTNODE* vr$7 = HELMTOEXPR( (struct $17FB_CMPSTMT_FORELM*)((uint8*)STK$1 + 32ll) );
	struct $7ASTNODE* vr$10 = HUDTCALLOPOVL( *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)STK$1 + 32ll) + 56ll), 24ll, vr$7, STEP_EXPR$1, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$10;
	if( PROC$1 == (struct $7ASTNODE*)0ull ) goto label$19;
	{
		ASTADD( PROC$1 );
	}
	label$19:;
	label$18:;
	label$15:;
}

static void HUDTSTEP( struct $13FB_CMPSTMTSTK* STK$1 )
{
	label$20:;
	struct $7ASTNODE* PROC$1;
	struct $7ASTNODE* STEP_EXPR$1;
	STEP_EXPR$1 = (struct $7ASTNODE*)0ull;
	if( *(int64*)((uint8*)STK$1 + 168ll) == 0ll ) goto label$23;
	{
		struct $7ASTNODE* vr$4 = HELMTOEXPR( (struct $17FB_CMPSTMT_FORELM*)((uint8*)STK$1 + 80ll) );
		STEP_EXPR$1 = vr$4;
	}
	label$23:;
	label$22:;
	struct $7ASTNODE* vr$7 = HELMTOEXPR( (struct $17FB_CMPSTMT_FORELM*)((uint8*)STK$1 + 32ll) );
	struct $7ASTNODE* vr$10 = HUDTCALLOPOVL( *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)STK$1 + 32ll) + 56ll), 25ll, vr$7, STEP_EXPR$1, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$10;
	if( PROC$1 == (struct $7ASTNODE*)0ull ) goto label$25;
	{
		ASTADD( PROC$1 );
	}
	label$25:;
	label$24:;
	label$21:;
}

static void HUDTNEXT( struct $13FB_CMPSTMTSTK* STK$1 )
{
	label$26:;
	struct $7ASTNODE* PROC$1;
	struct $7ASTNODE* STEP_EXPR$1;
	STEP_EXPR$1 = (struct $7ASTNODE*)0ull;
	if( *(int64*)((uint8*)STK$1 + 168ll) == 0ll ) goto label$29;
	{
		struct $7ASTNODE* vr$4 = HELMTOEXPR( (struct $17FB_CMPSTMT_FORELM*)((uint8*)STK$1 + 80ll) );
		STEP_EXPR$1 = vr$4;
	}
	label$29:;
	label$28:;
	struct $7ASTNODE* vr$7 = HELMTOEXPR( (struct $17FB_CMPSTMT_FORELM*)((uint8*)STK$1 + 56ll) );
	struct $7ASTNODE* vr$10 = HELMTOEXPR( (struct $17FB_CMPSTMT_FORELM*)((uint8*)STK$1 + 32ll) );
	struct $7ASTNODE* vr$13 = HUDTCALLOPOVL( *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)STK$1 + 32ll) + 56ll), 26ll, vr$10, vr$7, STEP_EXPR$1 );
	PROC$1 = vr$13;
	if( PROC$1 == (struct $7ASTNODE*)0ull ) goto label$31;
	{
		struct $7ASTNODE* vr$16 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$17 = ASTNEWBOP( 48ll, PROC$1, vr$16, *(struct $8FBSYMBOL**)((uint8*)STK$1 + 136ll), 0ll );
		ASTADD( vr$17 );
	}
	label$31:;
	label$30:;
	label$27:;
}

static void HSCALARSTEP( struct $13FB_CMPSTMTSTK* STK$1 )
{
	label$32:;
	HFLUSHSELFBOP( 1ll, (struct $17FB_CMPSTMT_FORELM*)((uint8*)STK$1 + 32ll), (struct $17FB_CMPSTMT_FORELM*)((uint8*)STK$1 + 80ll) );
	label$33:;
}

static void HSCALARNEXT( struct $13FB_CMPSTMTSTK* STK$1 )
{
	label$34:;
	if( *(struct $8FBSYMBOL**)((uint8*)STK$1 + 104ll) != (struct $8FBSYMBOL*)0ull ) goto label$37;
	{
		$6AST_OP TMP$85$2;
		if( *(int64*)((uint8*)STK$1 + 112ll) == 0ll ) goto label$38;
		TMP$85$2 = 50ll;
		goto label$230;
		label$38:;
		TMP$85$2 = 49ll;
		label$230:;
		HFLUSHBOP( TMP$85$2, (struct $17FB_CMPSTMT_FORELM*)((uint8*)STK$1 + 32ll), (struct $17FB_CMPSTMT_FORELM*)((uint8*)STK$1 + 56ll), *(struct $8FBSYMBOL**)((uint8*)STK$1 + 136ll) );
	}
	goto label$36;
	label$37:;
	{
		struct $8FBSYMBOL* CL$2;
		struct $8FBSYMBOL* vr$9 = SYMBADDLABEL( (uint8*)0ull, 4ll );
		CL$2 = vr$9;
		struct $7ASTNODE* vr$10 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$13 = HELMTOEXPR( (struct $17FB_CMPSTMT_FORELM*)((uint8*)STK$1 + 104ll) );
		struct $7ASTNODE* vr$14 = ASTNEWBOP( 48ll, vr$13, vr$10, CL$2, 0ll );
		ASTADD( vr$14 );
		HFLUSHBOP( 49ll, (struct $17FB_CMPSTMT_FORELM*)((uint8*)STK$1 + 32ll), (struct $17FB_CMPSTMT_FORELM*)((uint8*)STK$1 + 56ll), *(struct $8FBSYMBOL**)((uint8*)STK$1 + 136ll) );
		struct $7ASTNODE* vr$21 = ASTNEWBRANCH( 97ll, *(struct $8FBSYMBOL**)((uint8*)STK$1 + 152ll), (struct $7ASTNODE*)0ull );
		ASTADD( vr$21 );
		struct $7ASTNODE* vr$22 = ASTNEWLABEL( CL$2, 0ll );
		ASTADD( vr$22 );
		HFLUSHBOP( 50ll, (struct $17FB_CMPSTMT_FORELM*)((uint8*)STK$1 + 32ll), (struct $17FB_CMPSTMT_FORELM*)((uint8*)STK$1 + 56ll), *(struct $8FBSYMBOL**)((uint8*)STK$1 + 136ll) );
	}
	label$36:;
	label$35:;
}

static struct $8FBSYMBOL* HADDIMPLICITVAR( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$39:;
	struct $8FBSYMBOL* S$1;
	int64 OPTIONS$1;
	OPTIONS$1 = 0ll;
	if( (int64)-((*(int64*)((uint8*)&ENV$ + 1152ll) & 2ll) != 0ll) != 0ll ) goto label$42;
	{
		OPTIONS$1 = OPTIONS$1 | 2ll;
	}
	label$42:;
	label$41:;
	struct $8FBSYMBOL* vr$5 = SYMBADDIMPLICITVAR( DTYPE$1, SUBTYPE$1, OPTIONS$1 );
	S$1 = vr$5;
	if( (OPTIONS$1 & 2ll) == 0ll ) goto label$44;
	{
		struct $7ASTNODE* vr$8 = ASTNEWDECL( S$1, -1ll );
		ASTADDUNSCOPED( vr$8 );
	}
	goto label$43;
	label$44:;
	{
		struct $7ASTNODE* vr$9 = ASTNEWDECL( S$1, 0ll );
		ASTADD( vr$9 );
	}
	label$43:;
	fb$result$1 = S$1;
	label$40:;
	return fb$result$1;
}

static struct $8FBSYMBOL* HSTORETEMP( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, struct $7ASTNODE* EXPR$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$45:;
	int64 OPTIONS$1;
	OPTIONS$1 = 0ll;
	if( (int64)-((*(int64*)((uint8*)&ENV$ + 1152ll) & 2ll) != 0ll) != 0ll ) goto label$48;
	{
		OPTIONS$1 = OPTIONS$1 | 2ll;
	}
	label$48:;
	label$47:;
	struct $8FBSYMBOL* S$1;
	struct $8FBSYMBOL* vr$5 = SYMBADDIMPLICITVAR( DTYPE$1, SUBTYPE$1, OPTIONS$1 );
	S$1 = vr$5;
	struct $7ASTNODE* DECLNODE$1;
	DECLNODE$1 = (struct $7ASTNODE*)0ull;
	if( (OPTIONS$1 & 2ll) == 0ll ) goto label$50;
	{
		struct $7ASTNODE* vr$8 = ASTNEWDECL( S$1, -1ll );
		ASTADDUNSCOPED( vr$8 );
	}
	goto label$49;
	label$50:;
	{
		struct $7ASTNODE* vr$9 = ASTNEWDECL( S$1, 0ll );
		DECLNODE$1 = vr$9;
	}
	label$49:;
	struct $7ASTNODE* vr$10 = ASTNEWVAR( S$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$11 = ASTNEWASSIGN( vr$10, EXPR$1, 0ll );
	EXPR$1 = vr$11;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$52;
	{
		{
			int64 TMP$86$3;
			uint64 TMP$87$3;
			if( (DTYPE$1 & 480ll) == 0ll ) goto label$53;
			TMP$86$3 = 22ll;
			goto label$231;
			label$53:;
			TMP$86$3 = DTYPE$1 & 31ll;
			label$231:;
			TMP$87$3 = (uint64)TMP$86$3;
			goto label$55;
			label$56:;
			{
				ERRREPORT( 24ll, 0ll, (uint8*)0ull );
			}
			goto label$54;
			label$57:;
			{
				ERRREPORT( 197ll, -1ll, *(uint8**)((uint8*)AST_OPTB$ + 16ll) );
			}
			goto label$54;
			label$55:;
			static const void* tmp$103[1ll] = {
				&&label$56,
			};
			if( TMP$87$3 < 18ll ) goto label$57;
			if( TMP$87$3 > 18ll ) goto label$57;
			goto *tmp$103[TMP$87$3 - 18ll];
			label$54:;
		}
	}
	label$52:;
	label$51:;
	struct $7ASTNODE* vr$16 = ASTNEWLINK( DECLNODE$1, EXPR$1, -1ll );
	ASTADD( vr$16 );
	fb$result$1 = S$1;
	label$46:;
	return fb$result$1;
}

static void HFLUSHBOP( int64 OP$1, struct $17FB_CMPSTMT_FORELM* LHS$1, struct $17FB_CMPSTMT_FORELM* RHS$1, struct $8FBSYMBOL* EX$1 )
{
	label$58:;
	struct $7ASTNODE* LHS_EXPR$1;
	struct $7ASTNODE* RHS_EXPR$1;
	struct $7ASTNODE* EXPR$1;
	struct $7ASTNODE* vr$0 = HELMTOEXPR( LHS$1 );
	LHS_EXPR$1 = vr$0;
	struct $7ASTNODE* vr$1 = HELMTOEXPR( RHS$1 );
	RHS_EXPR$1 = vr$1;
	struct $7ASTNODE* vr$2 = ASTNEWBOP( OP$1, LHS_EXPR$1, RHS_EXPR$1, EX$1, 0ll );
	EXPR$1 = vr$2;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$61;
	{
		ERRREPORT( 197ll, -1ll, *(uint8**)(((uint8*)AST_OPTB$ + (OP$1 << 5ll)) + 16ll) );
		goto label$59;
	}
	label$61:;
	label$60:;
	if( *(int64*)((uint8*)LHS$1 + 16ll) != 18ll ) goto label$63;
	{
		struct $7ASTNODE* vr$7 = ASTBUILDBRANCH( EXPR$1, EX$1, -1ll, 0ll );
		EXPR$1 = vr$7;
		if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$65;
		{
			ERRREPORT( 197ll, -1ll, *(uint8**)(((uint8*)AST_OPTB$ + (OP$1 << 5ll)) + 16ll) );
			goto label$59;
		}
		label$65:;
		label$64:;
	}
	label$63:;
	label$62:;
	ASTADD( EXPR$1 );
	label$59:;
}

static struct $7ASTNODE* HSTEPEXPRESSION( int64 LHS_DTYPE$1, struct $8FBSYMBOL* LHS_SUBTYPE$1, struct $17FB_CMPSTMT_FORELM* RHS$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$66:;
	int64 LENGTH$1;
	if( (LHS_DTYPE$1 & 480ll) == 0ll ) goto label$69;
	{
		int64 vr$3 = SYMBCALCDEREFLEN( LHS_DTYPE$1, LHS_SUBTYPE$1 );
		LENGTH$1 = vr$3;
		if( LENGTH$1 > 0ll ) goto label$71;
		{
			ERRREPORT( 70ll, 0ll, (uint8*)0ull );
			LENGTH$1 = 1ll;
		}
		label$71:;
		label$70:;
		if( *(struct $8FBSYMBOL**)RHS$1 == (struct $8FBSYMBOL*)0ull ) goto label$73;
		{
			struct $7ASTNODE* vr$7 = ASTNEWCONSTI( LENGTH$1, 7ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$9 = ASTNEWVAR( *(struct $8FBSYMBOL**)RHS$1, 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$10 = ASTNEWBOP( 30ll, vr$9, vr$7, (struct $8FBSYMBOL*)0ull, 1ll );
			fb$result$1 = vr$10;
		}
		goto label$72;
		label$73:;
		{
			struct $7ASTNODE* vr$13 = ASTNEWCONSTI( *(int64*)((uint8*)RHS$1 + 8ll) * LENGTH$1, 7ll, (struct $8FBSYMBOL*)0ull );
			fb$result$1 = vr$13;
		}
		label$72:;
	}
	goto label$68;
	label$69:;
	{
		struct $7ASTNODE* vr$14 = HELMTOEXPR( RHS$1 );
		fb$result$1 = vr$14;
	}
	label$68:;
	label$67:;
	return fb$result$1;
}

static void HFLUSHSELFBOP( int64 OP$1, struct $17FB_CMPSTMT_FORELM* LHS$1, struct $17FB_CMPSTMT_FORELM* RHS$1 )
{
	label$74:;
	struct $7ASTNODE* LHS_EXPR$1;
	struct $7ASTNODE* RHS_EXPR$1;
	struct $7ASTNODE* EXPR$1;
	struct $7ASTNODE* vr$1 = ASTNEWVAR( *(struct $8FBSYMBOL**)LHS$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	LHS_EXPR$1 = vr$1;
	struct $7ASTNODE* vr$5 = HSTEPEXPRESSION( *(int64*)((uint8*)LHS$1 + 16ll), *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)LHS$1 + 56ll), RHS$1 );
	RHS_EXPR$1 = vr$5;
	struct $7ASTNODE* vr$6 = ASTNEWSELFBOP( OP$1, LHS_EXPR$1, RHS_EXPR$1, (struct $8FBSYMBOL*)0ull, 1ll );
	EXPR$1 = vr$6;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$77;
	{
		ERRREPORT( 197ll, -1ll, *(uint8**)(((uint8*)AST_OPTB$ + (OP$1 << 5ll)) + 16ll) );
		goto label$75;
	}
	label$77:;
	label$76:;
	ASTADD( EXPR$1 );
	label$75:;
}

static int64 HCALLCTOR( struct $8FBSYMBOL* SYM$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$78:;
	struct $7ASTNODE* EXPR$1;
	struct $7ASTNODE* vr$1 = CINITIALIZER( SYM$1, 1ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	EXPR$1 = vr$1;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$81;
	{
		goto label$79;
	}
	label$81:;
	label$80:;
	struct $7ASTNODE* vr$3 = _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEll( SYM$1, EXPR$1, 0ll, 64ll );
	EXPR$1 = vr$3;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$83;
	{
		goto label$79;
	}
	label$83:;
	label$82:;
	ASTADD( EXPR$1 );
	fb$result$1 = -1ll;
	label$79:;
	return fb$result$1;
}

static void HFORASSIGN( struct $13FB_CMPSTMTSTK* STK$1, int64* ISCONST$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, $9FOR_FLAGS FLAGS$1, struct $7ASTNODE* IDEXPR$1 )
{
	label$84:;
	int64 vr$0 = CASSIGNTOKEN(  );
	if( vr$0 != 0ll ) goto label$87;
	{
		ERRREPORT( 10ll, 0ll, (uint8*)0ull );
	}
	label$87:;
	label$86:;
	if( ((int64)-((FLAGS$1 & 2ll) == 0ll) | (int64)-((FLAGS$1 & 4ll) == 0ll)) == 0ll ) goto label$89;
	{
		struct $7ASTNODE* EXPR$2;
		struct $7ASTNODE* vr$8 = CEXPRESSION(  );
		EXPR$2 = vr$8;
		if( EXPR$2 != (struct $7ASTNODE*)0ull ) goto label$91;
		{
			ERRREPORT( 9ll, 0ll, (uint8*)0ull );
			struct $7ASTNODE* vr$10 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
			EXPR$2 = vr$10;
		}
		label$91:;
		label$90:;
		if( ((int64)-(*(int64*)EXPR$2 == 16ll) & (int64)-((FLAGS$1 & 1ll) == 0ll)) == 0ll ) goto label$93;
		{
			struct $7ASTNODE* vr$17 = ASTNEWCONV( DTYPE$1, SUBTYPE$1, EXPR$2, 0ll, (int64*)0ull );
			EXPR$2 = vr$17;
			if( EXPR$2 != (struct $7ASTNODE*)0ull ) goto label$95;
			{
				ERRREPORT( 24ll, 0ll, (uint8*)0ull );
				struct $7ASTNODE* vr$19 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				EXPR$2 = vr$19;
			}
			label$95:;
			label$94:;
			__builtin_memcpy( (union $7FBVALUE*)((uint8*)STK$1 + 40ll), (union $7FBVALUE*)((uint8*)EXPR$2 + 40ll), 8 );
			*ISCONST$1 = *ISCONST$1 + 1ll;
		}
		label$93:;
		label$92:;
		struct $7ASTNODE* vr$27 = ASTNEWASSIGN( IDEXPR$1, EXPR$2, 0ll );
		EXPR$2 = vr$27;
		if( EXPR$2 != (struct $7ASTNODE*)0ull ) goto label$97;
		{
			if( (FLAGS$1 & 1ll) == 0ll ) goto label$99;
			{
				ERRREPORT( 24ll, 0ll, (uint8*)0ull );
			}
			goto label$98;
			label$99:;
			{
				ERRREPORT( 197ll, -1ll, (uint8*)"let" );
			}
			label$98:;
		}
		goto label$96;
		label$97:;
		{
			ASTADD( EXPR$2 );
		}
		label$96:;
	}
	goto label$88;
	label$89:;
	{
		int64 vr$32 = HCALLCTOR( *(struct $8FBSYMBOL**)((uint8*)STK$1 + 32ll) );
		if( vr$32 != 0ll ) goto label$101;
		{
			ERRREPORT( 9ll, 0ll, (uint8*)0ull );
		}
		label$101:;
		label$100:;
	}
	label$88:;
	label$85:;
}

static void HFORTO( struct $13FB_CMPSTMTSTK* STK$1, int64* ISCONST$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, $9FOR_FLAGS FLAGS$1 )
{
	label$102:;
	int64 vr$0 = LEXGETTOKEN( 0ll );
	if( vr$0 == 284ll ) goto label$105;
	{
		ERRREPORT( 12ll, 0ll, (uint8*)0ull );
	}
	goto label$104;
	label$105:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$104:;
	if( (FLAGS$1 & 2ll) != 0ll ) goto label$107;
	{
		struct $7ASTNODE* EXPR$2;
		struct $7ASTNODE* vr$4 = CEXPRESSION(  );
		EXPR$2 = vr$4;
		if( EXPR$2 != (struct $7ASTNODE*)0ull ) goto label$109;
		{
			ERRREPORT( 9ll, 0ll, (uint8*)0ull );
			struct $7ASTNODE* vr$6 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
			EXPR$2 = vr$6;
		}
		label$109:;
		label$108:;
		if( ((int64)-(*(int64*)EXPR$2 == 16ll) & (int64)-((FLAGS$1 & 1ll) == 0ll)) == 0ll ) goto label$111;
		{
			struct $7ASTNODE* vr$13 = ASTNEWCONV( DTYPE$1, SUBTYPE$1, EXPR$2, 0ll, (int64*)0ull );
			EXPR$2 = vr$13;
			if( EXPR$2 != (struct $7ASTNODE*)0ull ) goto label$113;
			{
				ERRREPORT( 24ll, 0ll, (uint8*)0ull );
				struct $7ASTNODE* vr$15 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				EXPR$2 = vr$15;
			}
			label$113:;
			label$112:;
			*(struct $8FBSYMBOL**)((uint8*)STK$1 + 56ll) = (struct $8FBSYMBOL*)0ull;
			*(int64*)((uint8*)STK$1 + 72ll) = DTYPE$1;
			__builtin_memcpy( (union $7FBVALUE*)((uint8*)STK$1 + 64ll), (union $7FBVALUE*)((uint8*)EXPR$2 + 40ll), 8 );
			ASTDELNODE( EXPR$2 );
			*ISCONST$1 = *ISCONST$1 + 1ll;
		}
		goto label$110;
		label$111:;
		{
			struct $8FBSYMBOL* vr$25 = HSTORETEMP( DTYPE$1, SUBTYPE$1, EXPR$2 );
			*(struct $8FBSYMBOL**)((uint8*)STK$1 + 56ll) = vr$25;
			*(int64*)((uint8*)STK$1 + 72ll) = *(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)STK$1 + 56ll) + 48ll) & 511ll;
		}
		label$110:;
	}
	goto label$106;
	label$107:;
	{
		struct $8FBSYMBOL* vr$31 = HADDIMPLICITVAR( DTYPE$1, SUBTYPE$1 );
		*(struct $8FBSYMBOL**)((uint8*)STK$1 + 56ll) = vr$31;
		*(int64*)((uint8*)STK$1 + 72ll) = *(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)STK$1 + 56ll) + 48ll) & 511ll;
		int64 vr$38 = HCALLCTOR( *(struct $8FBSYMBOL**)((uint8*)STK$1 + 56ll) );
		if( vr$38 != 0ll ) goto label$115;
		{
			ERRREPORT( 24ll, 0ll, (uint8*)0ull );
		}
		label$115:;
		label$114:;
	}
	label$106:;
	label$103:;
}

static void HFORSTEP( struct $13FB_CMPSTMTSTK* STK$1, int64* ISCONST$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, $9FOR_FLAGS FLAGS$1 )
{
	int64 TMP$90$1;
	label$116:;
	*(int64*)((uint8*)STK$1 + 168ll) = 0ll;
	int64 vr$1 = LEXGETTOKEN( 0ll );
	if( vr$1 != 282ll ) goto label$119;
	{
		LEXSKIPTOKEN( 0ll );
		*(int64*)((uint8*)STK$1 + 168ll) = -1ll;
	}
	label$119:;
	label$118:;
	int64 ISCOMPLEX$1;
	ISCOMPLEX$1 = 0ll;
	if( (FLAGS$1 & 2ll) != 0ll ) goto label$121;
	{
		struct $7ASTNODE* EXPR$2;
		if( *(int64*)((uint8*)STK$1 + 168ll) == 0ll ) goto label$123;
		{
			struct $7ASTNODE* vr$8 = CEXPRESSION(  );
			EXPR$2 = vr$8;
			if( EXPR$2 != (struct $7ASTNODE*)0ull ) goto label$125;
			{
				ERRREPORT( 9ll, 0ll, (uint8*)0ull );
				struct $7ASTNODE* vr$10 = ASTNEWCONSTI( 1ll, 7ll, (struct $8FBSYMBOL*)0ull );
				EXPR$2 = vr$10;
			}
			label$125:;
			label$124:;
		}
		goto label$122;
		label$123:;
		{
			struct $7ASTNODE* vr$11 = ASTNEWCONSTI( 1ll, 7ll, (struct $8FBSYMBOL*)0ull );
			EXPR$2 = vr$11;
		}
		label$122:;
		if( (FLAGS$1 & 1ll) != 0ll ) goto label$127;
		{
			int64 TMP$89$3;
			if( (*(int64*)((uint8*)EXPR$2 + 8ll) & 480ll) == 0ll ) goto label$128;
			TMP$89$3 = 22ll;
			goto label$232;
			label$128:;
			TMP$89$3 = *(int64*)((uint8*)EXPR$2 + 8ll) & 31ll;
			label$232:;
			if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$89$3 * 56ll)) + 16ll) == 0ll ) goto label$130;
			{
				int64 vr$21 = TYPETOSIGNED( DTYPE$1 );
				DTYPE$1 = vr$21;
			}
			goto label$129;
			label$130:;
			{
				int64 vr$22 = TYPETOUNSIGNED( DTYPE$1 );
				DTYPE$1 = vr$22;
			}
			label$129:;
		}
		label$127:;
		label$126:;
		if( ((int64)-(*(int64*)EXPR$2 == 16ll) & (int64)-((FLAGS$1 & 1ll) == 0ll)) == 0ll ) goto label$132;
		{
			struct $7ASTNODE* vr$29 = ASTNEWCONV( DTYPE$1, SUBTYPE$1, EXPR$2, 0ll, (int64*)0ull );
			EXPR$2 = vr$29;
			if( EXPR$2 != (struct $7ASTNODE*)0ull ) goto label$134;
			{
				ERRREPORT( 24ll, 0ll, (uint8*)0ull );
				struct $7ASTNODE* vr$31 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				EXPR$2 = vr$31;
			}
			label$134:;
			label$133:;
			int64 vr$32 = ASTCONSTGEZERO( EXPR$2 );
			*(int64*)((uint8*)STK$1 + 112ll) = vr$32;
			*(struct $8FBSYMBOL**)((uint8*)STK$1 + 80ll) = (struct $8FBSYMBOL*)0ull;
			if( (DTYPE$1 & 480ll) == 0ll ) goto label$136;
			{
				*(int64*)((uint8*)STK$1 + 96ll) = 10ll;
			}
			goto label$135;
			label$136:;
			{
				*(int64*)((uint8*)STK$1 + 96ll) = DTYPE$1;
			}
			label$135:;
			__builtin_memcpy( (union $7FBVALUE*)((uint8*)STK$1 + 88ll), (union $7FBVALUE*)((uint8*)EXPR$2 + 40ll), 8 );
			ASTDELNODE( EXPR$2 );
			*ISCONST$1 = *ISCONST$1 + 1ll;
		}
		goto label$131;
		label$132:;
		{
			ISCOMPLEX$1 = -1ll;
			int64 TMP_DTYPE$3;
			TMP_DTYPE$3 = DTYPE$1;
			struct $8FBSYMBOL* TMP_SUBTYPE$3;
			TMP_SUBTYPE$3 = SUBTYPE$1;
			if( (DTYPE$1 & 480ll) == 0ll ) goto label$138;
			{
				TMP_DTYPE$3 = 10ll;
				TMP_SUBTYPE$3 = (struct $8FBSYMBOL*)0ull;
			}
			label$138:;
			label$137:;
			struct $8FBSYMBOL* vr$48 = HSTORETEMP( TMP_DTYPE$3, TMP_SUBTYPE$3, EXPR$2 );
			*(struct $8FBSYMBOL**)((uint8*)STK$1 + 80ll) = vr$48;
			*(int64*)((uint8*)STK$1 + 96ll) = *(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)STK$1 + 80ll) + 48ll) & 511ll;
		}
		label$131:;
	}
	goto label$120;
	label$121:;
	{
		ISCOMPLEX$1 = -1ll;
		if( *(int64*)((uint8*)STK$1 + 168ll) == 0ll ) goto label$140;
		{
			struct $8FBSYMBOL* vr$56 = HADDIMPLICITVAR( DTYPE$1, SUBTYPE$1 );
			*(struct $8FBSYMBOL**)((uint8*)STK$1 + 80ll) = vr$56;
			*(int64*)((uint8*)STK$1 + 96ll) = *(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)STK$1 + 80ll) + 48ll) & 511ll;
			int64 vr$63 = HCALLCTOR( *(struct $8FBSYMBOL**)((uint8*)STK$1 + 80ll) );
			if( vr$63 != 0ll ) goto label$142;
			{
				ERRREPORT( 24ll, 0ll, (uint8*)0ull );
			}
			label$142:;
			label$141:;
		}
		label$140:;
		label$139:;
	}
	label$120:;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$143;
	TMP$90$1 = 22ll;
	goto label$233;
	label$143:;
	TMP$90$1 = DTYPE$1 & 31ll;
	label$233:;
	if( ((int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$90$1 * 56ll)) + 16ll) == 0ll) & (int64)-((FLAGS$1 & 1ll) == 0ll)) == 0ll ) goto label$145;
	{
		*(struct $8FBSYMBOL**)((uint8*)STK$1 + 104ll) = (struct $8FBSYMBOL*)0ull;
		*(int64*)((uint8*)STK$1 + 120ll) = 7ll;
		*(int64*)((uint8*)STK$1 + 112ll) = -1ll;
	}
	goto label$144;
	label$145:;
	if( (ISCOMPLEX$1 & (int64)-((FLAGS$1 & 1ll) == 0ll)) == 0ll ) goto label$146;
	{
		struct $17FB_CMPSTMT_FORELM CMP$2;
		__builtin_memset( &CMP$2, 0, 24ll );
		*(int64*)((uint8*)&CMP$2 + 16ll) = *(int64*)((uint8*)STK$1 + 96ll);
		struct $8FBSYMBOL* vr$83 = HADDIMPLICITVAR( 7ll, (struct $8FBSYMBOL*)0ull );
		*(struct $8FBSYMBOL**)((uint8*)STK$1 + 104ll) = vr$83;
		*(int64*)((uint8*)STK$1 + 120ll) = 7ll;
		struct $7ASTNODE* RHS$2;
		struct $7ASTNODE* vr$87 = HELMTOEXPR( &CMP$2 );
		struct $7ASTNODE* vr$90 = HELMTOEXPR( (struct $17FB_CMPSTMT_FORELM*)((uint8*)STK$1 + 80ll) );
		struct $7ASTNODE* vr$91 = ASTNEWBOP( 49ll, vr$90, vr$87, (struct $8FBSYMBOL*)0ull, 1ll );
		RHS$2 = vr$91;
		if( RHS$2 != (struct $7ASTNODE*)0ull ) goto label$148;
		{
			ERRREPORT( 24ll, 0ll, (uint8*)0ull );
			struct $7ASTNODE* vr$93 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
			RHS$2 = vr$93;
		}
		label$148:;
		label$147:;
		struct $7ASTNODE* vr$95 = ASTNEWVAR( *(struct $8FBSYMBOL**)((uint8*)STK$1 + 104ll), 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$96 = ASTNEWASSIGN( vr$95, RHS$2, 0ll );
		ASTADD( vr$96 );
	}
	goto label$144;
	label$146:;
	{
		*(struct $8FBSYMBOL**)((uint8*)STK$1 + 104ll) = (struct $8FBSYMBOL*)0ull;
	}
	label$144:;
	label$117:;
}

static struct $7ASTNODE* HUDTCALLOPOVL( struct $8FBSYMBOL* PARENT$1, $6AST_OP OP$1, struct $7ASTNODE* INST_EXPR$1, struct $7ASTNODE* SECOND_ARG$1, struct $7ASTNODE* THIRD_ARG$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$181:;
	struct $8FBSYMBOL* SYM$1;
	struct $8FBSYMBOL* vr$1 = SYMBGETCOMPOPOVLHEAD( PARENT$1, OP$1 );
	SYM$1 = vr$1;
	if( SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$184;
	{
		ERRREPORT( 197ll, -1ll, *(uint8**)(((uint8*)AST_OPTB$ + (OP$1 << 5ll)) + 16ll) );
		fb$result$1 = (struct $7ASTNODE*)0ull;
		goto label$182;
	}
	label$184:;
	label$183:;
	$9FB_ERRMSG ERR_NUM$1;
	if( SECOND_ARG$1 != (struct $7ASTNODE*)0ull ) goto label$186;
	{
		struct $8FBSYMBOL* vr$6 = SYMBFINDCLOSESTOVLPROC( SYM$1, 0ll, (struct $11FB_CALL_ARG*)0ull, &ERR_NUM$1, 0ll );
		SYM$1 = vr$6;
	}
	goto label$185;
	label$186:;
	{
		struct $11FB_CALL_ARG ARGS$2[2];
		struct $8FBARRAY1I11FB_CALL_ARGE {
			struct $11FB_CALL_ARG* DATA;
			struct $11FB_CALL_ARG* PTR;
			int64 SIZE;
			int64 ELEMENT_LEN;
			int64 DIMENSIONS;
			struct $16__FB_ARRAYDIMTB$ DIMTB[1];
		};
		__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I11FB_CALL_ARGE ) == 64 );
		struct $8FBARRAY1I11FB_CALL_ARGE tmp$94$2;
		*(struct $11FB_CALL_ARG**)&tmp$94$2 = (struct $11FB_CALL_ARG*)ARGS$2;
		*(struct $11FB_CALL_ARG**)((uint8*)&tmp$94$2 + 8ll) = (struct $11FB_CALL_ARG*)ARGS$2;
		*(int64*)((uint8*)&tmp$94$2 + 16ll) = 48ll;
		*(int64*)((uint8*)&tmp$94$2 + 24ll) = 24ll;
		*(int64*)((uint8*)&tmp$94$2 + 32ll) = 1ll;
		*(int64*)((uint8*)&tmp$94$2 + 40ll) = 2ll;
		*(int64*)((uint8*)&tmp$94$2 + 48ll) = 0ll;
		*(int64*)((uint8*)&tmp$94$2 + 56ll) = 1ll;
		int64 PARAMS$2;
		PARAMS$2 = 1ll;
		{
			struct $11FB_CALL_ARG* TMP$95$3;
			TMP$95$3 = (struct $11FB_CALL_ARG*)ARGS$2;
			*(struct $7ASTNODE**)TMP$95$3 = SECOND_ARG$1;
			*($12FB_PARAMMODE*)((uint8*)TMP$95$3 + 8ll) = -1ll;
			*(struct $11FB_CALL_ARG**)((uint8*)TMP$95$3 + 16ll) = (struct $11FB_CALL_ARG*)0ull;
		}
		if( OP$1 != 26ll ) goto label$188;
		{
			if( THIRD_ARG$1 == (struct $7ASTNODE*)0ull ) goto label$190;
			{
				*(struct $11FB_CALL_ARG**)((uint8*)ARGS$2 + 16ll) = (struct $11FB_CALL_ARG*)((uint8*)ARGS$2 + 24ll);
				PARAMS$2 = PARAMS$2 + 1ll;
				{
					struct $11FB_CALL_ARG* TMP$96$5;
					TMP$96$5 = (struct $11FB_CALL_ARG*)((uint8*)ARGS$2 + 24ll);
					*(struct $7ASTNODE**)TMP$96$5 = THIRD_ARG$1;
					*($12FB_PARAMMODE*)((uint8*)TMP$96$5 + 8ll) = -1ll;
					*(struct $11FB_CALL_ARG**)((uint8*)TMP$96$5 + 16ll) = (struct $11FB_CALL_ARG*)0ull;
				}
			}
			label$190:;
			label$189:;
		}
		label$188:;
		label$187:;
		struct $8FBSYMBOL* vr$37 = SYMBFINDCLOSESTOVLPROC( SYM$1, PARAMS$2, (struct $11FB_CALL_ARG*)ARGS$2, &ERR_NUM$1, 0ll );
		SYM$1 = vr$37;
	}
	label$185:;
	if( SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$192;
	{
		if( ERR_NUM$1 == 0ll ) goto label$194;
		{
			ERRREPORT( ERR_NUM$1, -1ll, (uint8*)0ull );
		}
		goto label$193;
		label$194:;
		{
			FBSTRING TMP$98$3;
			FBSTRING OP_VERSION$3;
			__builtin_memset( &TMP$98$3, 0, 24ll );
			FBSTRING* vr$43 = fb_StrConcat( &TMP$98$3, *(void**)(((uint8*)AST_OPTB$ + (OP$1 << 5ll)) + 16ll), 0ll, (void*)" (with", 7ll );
			FBSTRING* vr$45 = fb_StrInit( (void*)&OP_VERSION$3, -1ll, (void*)vr$43, -1ll, 0 );
			{
				uint64 TMP$99$4;
				TMP$99$4 = (uint64)OP$1;
				goto label$196;
				label$197:;
				{
					if( SECOND_ARG$1 != (struct $7ASTNODE*)0ull ) goto label$199;
					{
						FBSTRING* vr$48 = fb_StrConcatAssign( (void*)&OP_VERSION$3, -1ll, (void*)"out", 4ll, 0 );
					}
					label$199:;
					label$198:;
				}
				goto label$195;
				label$200:;
				{
					if( THIRD_ARG$1 != (struct $7ASTNODE*)0ull ) goto label$202;
					{
						FBSTRING* vr$51 = fb_StrConcatAssign( (void*)&OP_VERSION$3, -1ll, (void*)"out", 4ll, 0 );
					}
					label$202:;
					label$201:;
				}
				goto label$195;
				label$196:;
				static const void* tmp$104[3ll] = {
					&&label$197,
					&&label$197,
					&&label$200,
				};
				if( TMP$99$4 < 24ll ) goto label$195;
				if( TMP$99$4 > 26ll ) goto label$195;
				goto *tmp$104[TMP$99$4 - 24ll];
				label$195:;
			}
			FBSTRING* vr$53 = fb_StrConcatAssign( (void*)&OP_VERSION$3, -1ll, (void*)" step)", 7ll, 0 );
			ERRREPORT( 197ll, -1ll, *(uint8**)&OP_VERSION$3 );
			fb_StrDelete( &OP_VERSION$3 );
		}
		label$193:;
		fb$result$1 = (struct $7ASTNODE*)0ull;
		goto label$182;
	}
	label$192:;
	label$191:;
	struct $7ASTNODE* vr$55 = ASTBUILDCALL( SYM$1, INST_EXPR$1, SECOND_ARG$1, THIRD_ARG$1 );
	fb$result$1 = vr$55;
	label$182:;
	return fb$result$1;
}

static void HFORSTMTCLOSE( struct $13FB_CMPSTMTSTK* STK$1 )
{
	label$203:;
	if( *(struct $7ASTNODE**)((uint8*)STK$1 + 16ll) == (struct $7ASTNODE*)0ull ) goto label$206;
	{
		ASTSCOPEEND( *(struct $7ASTNODE**)((uint8*)STK$1 + 16ll) );
	}
	label$206:;
	label$205:;
	struct $7ASTNODE* vr$4 = ASTNEWLABEL( *(struct $8FBSYMBOL**)((uint8*)STK$1 + 144ll), -1ll );
	ASTADD( vr$4 );
	{
		int64 TMP$102$2;
		TMP$102$2 = *(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)STK$1 + 32ll) + 48ll) & 511ll;
		if( TMP$102$2 != 18ll ) goto label$208;
		label$209:;
		{
			HUDTSTEP( STK$1 );
			struct $7ASTNODE* vr$10 = ASTNEWLABEL( *(struct $8FBSYMBOL**)((uint8*)STK$1 + 128ll), -1ll );
			ASTADD( vr$10 );
			HUDTNEXT( STK$1 );
		}
		goto label$207;
		label$208:;
		{
			HSCALARSTEP( STK$1 );
			struct $7ASTNODE* vr$12 = ASTNEWLABEL( *(struct $8FBSYMBOL**)((uint8*)STK$1 + 128ll), -1ll );
			ASTADD( vr$12 );
			HSCALARNEXT( STK$1 );
		}
		label$210:;
		label$207:;
	}
	struct $7ASTNODE* vr$14 = ASTNEWLABEL( *(struct $8FBSYMBOL**)((uint8*)STK$1 + 152ll), -1ll );
	ASTADD( vr$14 );
	if( *(struct $7ASTNODE**)((uint8*)STK$1 + 24ll) == (struct $7ASTNODE*)0ull ) goto label$212;
	{
		ASTSCOPEEND( *(struct $7ASTNODE**)((uint8*)STK$1 + 24ll) );
	}
	label$212:;
	label$211:;
	label$204:;
}

// Total compilation time: 0.04919998242985457 seconds.
