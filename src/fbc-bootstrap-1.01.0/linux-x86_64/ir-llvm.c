// Compilation of FreeBASIC-1.01.0-source/src/compiler/ir-llvm.bas started at 16:30:11 on 02-28-2015

typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
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
struct $13IRLLVMCONTEXT {
	int64 INDENT;
	struct $5TLIST CALLARGS;
	int64 LINENUM;
	FBSTRING VARINI;
	int64 VARINISCOPELEVEL;
	FBSTRING CTORS;
	FBSTRING DTORS;
	int64 CTORCOUNT;
	int64 DTORCOUNT;
	FBSTRING FBCTINF;
	int64 FBCTINF_LEN;
	FBSTRING ASM_LINE;
	int64 SECTION;
	FBSTRING HEAD_TXT;
	FBSTRING BODY_TXT;
	FBSTRING FOOT_TXT;
};
__FB_STATIC_ASSERT( sizeof( struct $13IRLLVMCONTEXT ) == 312 );
typedef int64 $6IR_OPT;
typedef int64 $12FB_SYMBCLASS;
typedef int64 $13FB_SYMBATTRIB;
typedef int64 $12FB_SYMBSTATS;
struct $9FB_SYMBID {
	uint8* NAME;
	uint8* ALIAS;
	uint8* MANGLED;
};
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
typedef void (*tmp$40)( struct $8FBSYMBOL* );
typedef int64 $14IR_OPTIONVALUE;
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
typedef int64 $15IRVREGTYPE_ENUM;
typedef int64 $12IR_REGFAMILY;
struct $6IRVREG;
struct $9IRTACVREG;
struct $9IRTACVREG {
	struct $6IRVREG* VREG;
	struct $6IRVREG* PARENT;
	struct $9IRTACVREG* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $9IRTACVREG ) == 24 );
struct $13IRTACVREG_GRP {
	struct $9IRTACVREG REG;
	struct $9IRTACVREG IDX;
	struct $9IRTACVREG AUX;
};
__FB_STATIC_ASSERT( sizeof( struct $13IRTACVREG_GRP ) == 72 );
struct $5IRTAC {
	int64 POS;
	$6AST_OP OP;
	struct $13IRTACVREG_GRP VR;
	struct $13IRTACVREG_GRP V1;
	struct $13IRTACVREG_GRP V2;
	struct $8FBSYMBOL* EX1;
	int64 EX2;
};
__FB_STATIC_ASSERT( sizeof( struct $5IRTAC ) == 248 );
struct $6IRVREG {
	$15IRVREGTYPE_ENUM TYP;
	$11FB_DATATYPE DTYPE;
	struct $8FBSYMBOL* SUBTYPE;
	int64 REG;
	$12IR_REGFAMILY REGFAMILY;
	int64 VECTOR;
	union $7FBVALUE VALUE;
	struct $8FBSYMBOL* SYM;
	int64 OFS;
	int64 MULT;
	struct $6IRVREG* VIDX;
	struct $6IRVREG* VAUX;
	struct $9IRTACVREG* TACVHEAD;
	struct $9IRTACVREG* TACVTAIL;
	struct $5IRTAC* TACLAST;
};
__FB_STATIC_ASSERT( sizeof( struct $6IRVREG ) == 120 );
struct $9IRCALLARG {
	struct $6IRVREG* VR;
	int64 LEVEL;
};
__FB_STATIC_ASSERT( sizeof( struct $9IRCALLARG ) == 16 );
int32 fb_FileOpen( FBSTRING*, uint32, uint32, uint32, int32, int32 );
int32 fb_FileClose( int32 );
int32 fb_FilePutStrLarge( int32, int64, void*, int64 );
int32 fb_FileFree( void );
int32 fb_FileKill( FBSTRING* );
FBSTRING* fb_StrInit( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
int32 fb_StrCompare( void*, int64, void*, int64 );
FBSTRING* fb_StrConcatAssign( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAllocTempResult( FBSTRING* );
FBSTRING* fb_StrAllocTempDescZ( uint8* );
FBSTRING* fb_StrAllocTempDescZEx( uint8*, int64 );
FBSTRING* fb_UIntToStr( uint32 );
FBSTRING* fb_LongintToStr( int64 );
FBSTRING* fb_ULongintToStr( uint64 );
FBSTRING* fb_DoubleToStr( double );
FBSTRING* fb_StrFill2( int64, FBSTRING* );
int64 fb_StrLen( void*, int64 );
FBSTRING* fb_CHR( int32, ... );
FBSTRING* fb_HEXEx_l( uint64, int32 );
FBSTRING* fb_LEFT( FBSTRING*, int64 );
FBSTRING* fb_RIGHT( FBSTRING*, int64 );
FBSTRING* fb_Time( void );
FBSTRING* fb_Date( void );
static void fb_ctor__irzllvm( void ) __attribute__(( constructor ));
void LISTINIT( struct $5TLIST*, int64, int64, $10LIST_FLAGS );
void LISTEND( struct $5TLIST* );
void* LISTNEWNODE( struct $5TLIST* );
void LISTDELNODE( struct $5TLIST*, void* );
void* LISTGETTAIL( struct $5TLIST* );
void* LISTGETPREV( void* );
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
typedef int64 $12FB_ERRMSGOPT;
void ERRREPORTEX( int64, uint8*, int64, $12FB_ERRMSGOPT, uint8* );
int64 FBIS64BIT( void );
int64 FBGETCPUFAMILY( void );
void _Z21SYMBGETREALPARAMDTYPElP8FBSYMBOLRlRS0_( int64, struct $8FBSYMBOL*, int64*, struct $8FBSYMBOL** );
void _Z21SYMBGETREALPARAMDTYPEP8FBSYMBOLRlRS0_( struct $8FBSYMBOL*, int64*, struct $8FBSYMBOL** );
int64 SYMBPROCRETURNSONSTACK( struct $8FBSYMBOL* );
int64 SYMBISDATADESC( struct $8FBSYMBOL* );
uint8* SYMBUNIQUEID( void );
uint8* SYMBUNIQUELABEL( void );
uint8* SYMBGETMANGLEDNAME( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBUDTGETFIRSTFIELD( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBUDTGETNEXTFIELD( struct $8FBSYMBOL* );
void SYMBFOREACHGLOBAL( int64, tmp$40 );
int64 HFILEEXISTS( uint8* );
uint8* HUNESCAPE( uint8* );
uint32* HUNESCAPEW( uint32* );
FBSTRING* HREPLACE( uint8*, uint8*, uint8* );
int64 HCHARNEEDSESCAPING( int64, int64 );
void IRHLINIT( void );
void IRHLEND( void );
void IRHLEMITPROCBEGIN( void );
void IRHLEMITPROCEND( void );
struct $6IRVREG* IRHLALLOCVREG( int64, struct $8FBSYMBOL* );
struct $6IRVREG* IRHLALLOCVRIMM( int64, struct $8FBSYMBOL*, int64 );
struct $6IRVREG* IRHLALLOCVRIMMF( int64, struct $8FBSYMBOL*, double );
struct $6IRVREG* IRHLALLOCVRVAR( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
struct $6IRVREG* IRHLALLOCVRIDX( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64, int64, struct $6IRVREG* );
struct $6IRVREG* IRHLALLOCVRPTR( int64, struct $8FBSYMBOL*, int64, struct $6IRVREG* );
struct $6IRVREG* IRHLALLOCVROFS( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
void IRFOREACHDATASTMT( tmp$40 );
void IRHLFLUSHSTATICINITIALIZER( struct $8FBSYMBOL* );
static void _ZN13IRLLVMCONTEXTC1Ev( struct $13IRLLVMCONTEXT* );
static void _ZN13IRLLVMCONTEXTaSERKS_( struct $13IRLLVMCONTEXT*, struct $13IRLLVMCONTEXT* );
static void _ZN13IRLLVMCONTEXTD1Ev( struct $13IRLLVMCONTEXT* );
static FBSTRING* HEMITTYPE( int64, struct $8FBSYMBOL* );
static void HEMITSTRUCT( struct $8FBSYMBOL* );
static void _EMITDBG( int64, struct $8FBSYMBOL*, int64 );
static FBSTRING* HVREGTOSTR( struct $6IRVREG* );
static void _EMITCONVERT( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSTORE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITBOP( int64, struct $6IRVREG*, struct $6IRVREG*, struct $6IRVREG*, struct $8FBSYMBOL* );
static void _INIT( void );
static void _END( void );
static void HWRITELINE( FBSTRING* );
static void HWRITELABEL( uint8* );
static FBSTRING* HEMITPARAMNAME( struct $8FBSYMBOL* );
static FBSTRING* HEMITPROCCALLCONV( struct $8FBSYMBOL* );
static FBSTRING* HEMITPROCHEADER( struct $8FBSYMBOL*, int64 );
static FBSTRING* HGETUDTNAME( struct $8FBSYMBOL* );
static void HEMITUDT( struct $8FBSYMBOL* );
static FBSTRING* HEMITARRAYDECL( struct $8FBSYMBOL* );
static void HBUILDSTRLIT( FBSTRING*, int64, uint8*, int64 );
static void HBUILDWSTRLIT( FBSTRING*, int64, uint32*, int64 );
static FBSTRING* HEMITSTRLITTYPE( int64 );
static FBSTRING* HEMITSYMTYPE( struct $8FBSYMBOL* );
static void HEMITVARIABLE( struct $8FBSYMBOL* );
static void HMAYBEEMITGLOBALVAR( struct $8FBSYMBOL* );
static void HMAYBEEMITPROCPROTO( struct $8FBSYMBOL* );
static void HEMITCTORDTORARRAYELEMENT( struct $8FBSYMBOL*, FBSTRING* );
static void HADDGLOBALCTORDTOR( struct $8FBSYMBOL* );
static int64 _EMITBEGIN( void );
static void _EMITEND( double );
static int64 _GETOPTIONVALUE( $14IR_OPTIONVALUE );
static int64 _SUPPORTSOP( int64, int64 );
static void _PROCBEGIN( struct $8FBSYMBOL* );
static void _PROCEND( struct $8FBSYMBOL* );
static void _PROCALLOCARG( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static void _PROCALLOCLOCAL( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static void _SCOPEBEGIN( struct $8FBSYMBOL* );
static void _SCOPEEND( struct $8FBSYMBOL* );
static void _PROCALLOCSTATICVARS( struct $8FBSYMBOL* );
static void _SETVREGDATATYPE( struct $6IRVREG*, int64, struct $8FBSYMBOL* );
static void HPREPAREADDRESS( struct $6IRVREG* );
static void HLOADVREG( struct $6IRVREG* );
static FBSTRING* HEMITINT( int64, struct $8FBSYMBOL*, int64 );
static FBSTRING* HEMITLONG( int64 );
static FBSTRING* HEMITFLOAT( double );
static void _EMITLABEL( struct $8FBSYMBOL* );
static uint8* HGETBOPCODE( int64, int64 );
static void HBUILTINUOP( int64, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITUOP( int64, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSPILLREGS( void );
static void _EMITLOAD( struct $6IRVREG* );
static void _EMITLOADRES( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITPUSHARG( struct $8FBSYMBOL*, struct $6IRVREG*, int64, int64 );
static void _EMITADDR( int64, struct $6IRVREG*, struct $6IRVREG* );
static void HDOCALL( uint8*, struct $8FBSYMBOL*, int64, struct $6IRVREG*, int64 );
static void _EMITCALL( struct $8FBSYMBOL*, int64, struct $6IRVREG*, int64 );
static void _EMITCALLPTR( struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG*, int64, int64 );
static void _EMITJUMPPTR( struct $6IRVREG* );
static void _EMITBRANCH( int64, struct $8FBSYMBOL* );
static void _EMITJMPTB( struct $6IRVREG*, struct $8FBSYMBOL*, uint64*, struct $8FBSYMBOL**, int64, struct $8FBSYMBOL*, uint64, uint64 );
static void _EMITMEM( int64, struct $6IRVREG*, struct $6IRVREG*, int64 );
static void _EMITDECL( struct $8FBSYMBOL* );
static void _EMITCOMMENT( uint8* );
static void _EMITASMBEGIN( void );
static void _EMITASMTEXT( uint8* );
static void _EMITASMSYMB( struct $8FBSYMBOL* );
static void _EMITASMEND( void );
static void _EMITVARINIBEGIN( struct $8FBSYMBOL* );
static void _EMITVARINIEND( struct $8FBSYMBOL* );
static void HVARINIELEMENTTYPE( int64, struct $8FBSYMBOL* );
static void HVARINISEPARATOR( void );
static void _EMITVARINII( struct $8FBSYMBOL*, int64 );
static void _EMITVARINIF( struct $8FBSYMBOL*, double );
static void _EMITVARINIOFS( struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
static void _EMITVARINISTR( int64, uint8*, int64 );
static void _EMITVARINIWSTR( int64, uint32*, int64 );
static void _EMITVARINIPAD( int64 );
static void _EMITVARINISCOPEBEGIN( void );
static void _EMITVARINISCOPEEND( void );
static void _EMITFBCTINFBEGIN( void );
static void _EMITFBCTINFSTRING( uint8* );
static void _EMITFBCTINFEND( void );
static void _EMITPROCBEGIN( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static void _EMITPROCEND( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static void _EMITSCOPEBEGIN( struct $8FBSYMBOL* );
static void _EMITSCOPEEND( struct $8FBSYMBOL* );
static void _GLOBAL__I( void ) __attribute__(( constructor ));
static void _GLOBAL__D( void ) __attribute__(( destructor ));
typedef void (*tmp$35)( void );
typedef int64 (*tmp$36)( void );
typedef void (*tmp$37)( double );
typedef int64 (*tmp$38)( $14IR_OPTIONVALUE );
typedef int64 (*tmp$39)( int64, int64 );
typedef void (*tmp$41)( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef uint8* (*tmp$42)( void );
typedef void (*tmp$43)( struct $6IRVREG*, struct $6IRVREG* );
typedef void (*tmp$44)( int64 );
typedef void (*tmp$45)( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef void (*tmp$46)( struct $8FBSYMBOL*, struct $6IRVREG*, int64, int64 );
typedef void (*tmp$47)( uint8* );
typedef void (*tmp$48)( int64, struct $6IRVREG*, struct $6IRVREG*, struct $6IRVREG*, struct $8FBSYMBOL* );
typedef void (*tmp$49)( int64, struct $6IRVREG*, struct $6IRVREG* );
typedef void (*tmp$50)( struct $6IRVREG* );
typedef void (*tmp$51)( int64, struct $6IRVREG* );
typedef void (*tmp$52)( struct $8FBSYMBOL*, int64, struct $6IRVREG*, int64 );
typedef void (*tmp$53)( struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG*, int64, int64 );
typedef void (*tmp$54)( int64, struct $8FBSYMBOL* );
typedef void (*tmp$55)( struct $6IRVREG*, struct $8FBSYMBOL*, uint64*, struct $8FBSYMBOL**, int64, struct $8FBSYMBOL*, uint64, uint64 );
typedef void (*tmp$56)( int64, struct $6IRVREG*, struct $6IRVREG*, int64 );
typedef void (*tmp$57)( int64, struct $8FBSYMBOL*, int64 );
typedef void (*tmp$58)( struct $8FBSYMBOL*, int64 );
typedef void (*tmp$59)( struct $8FBSYMBOL*, double );
typedef void (*tmp$60)( struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
typedef void (*tmp$61)( int64, uint8*, int64 );
typedef void (*tmp$62)( int64, uint32*, int64 );
typedef void (*tmp$63)( int64 );
typedef struct $6IRVREG* (*tmp$64)( int64, struct $8FBSYMBOL* );
typedef struct $6IRVREG* (*tmp$65)( int64, struct $8FBSYMBOL*, int64 );
typedef struct $6IRVREG* (*tmp$66)( int64, struct $8FBSYMBOL*, double );
typedef struct $6IRVREG* (*tmp$67)( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
typedef struct $6IRVREG* (*tmp$68)( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64, int64, struct $6IRVREG* );
typedef struct $6IRVREG* (*tmp$69)( int64, struct $8FBSYMBOL*, int64, struct $6IRVREG* );
typedef void (*tmp$70)( struct $6IRVREG*, int64, struct $8FBSYMBOL* );
typedef uint64 (*tmp$71)( struct $6IRVREG* );
struct $7IR_VTBL {
	tmp$35 INIT;
	tmp$35 END;
	tmp$36 EMITBEGIN;
	tmp$37 EMITEND;
	tmp$38 GETOPTIONVALUE;
	tmp$39 SUPPORTSOP;
	tmp$40 PROCBEGIN;
	tmp$40 PROCEND;
	tmp$41 PROCALLOCARG;
	tmp$41 PROCALLOCLOCAL;
	tmp$42 PROCGETFRAMEREGNAME;
	tmp$40 SCOPEBEGIN;
	tmp$40 SCOPEEND;
	tmp$40 PROCALLOCSTATICVARS;
	tmp$43 EMITCONVERT;
	tmp$40 EMITLABEL;
	tmp$40 EMITLABELNF;
	tmp$44 EMITRETURN;
	tmp$41 EMITPROCBEGIN;
	tmp$45 EMITPROCEND;
	tmp$46 EMITPUSHARG;
	tmp$35 EMITASMBEGIN;
	tmp$47 EMITASMTEXT;
	tmp$40 EMITASMSYMB;
	tmp$35 EMITASMEND;
	tmp$47 EMITCOMMENT;
	tmp$48 EMITBOP;
	tmp$49 EMITUOP;
	tmp$43 EMITSTORE;
	tmp$35 EMITSPILLREGS;
	tmp$50 EMITLOAD;
	tmp$43 EMITLOADRES;
	tmp$51 EMITSTACK;
	tmp$49 EMITADDR;
	tmp$52 EMITCALL;
	tmp$53 EMITCALLPTR;
	tmp$44 EMITSTACKALIGN;
	tmp$50 EMITJUMPPTR;
	tmp$54 EMITBRANCH;
	tmp$55 EMITJMPTB;
	tmp$56 EMITMEM;
	tmp$40 EMITSCOPEBEGIN;
	tmp$40 EMITSCOPEEND;
	tmp$40 EMITDECL;
	tmp$57 EMITDBG;
	tmp$40 EMITVARINIBEGIN;
	tmp$40 EMITVARINIEND;
	tmp$58 EMITVARINII;
	tmp$59 EMITVARINIF;
	tmp$60 EMITVARINIOFS;
	tmp$61 EMITVARINISTR;
	tmp$62 EMITVARINIWSTR;
	tmp$63 EMITVARINIPAD;
	tmp$35 EMITVARINISCOPEBEGIN;
	tmp$35 EMITVARINISCOPEEND;
	tmp$35 EMITFBCTINFBEGIN;
	tmp$47 EMITFBCTINFSTRING;
	tmp$35 EMITFBCTINFEND;
	tmp$64 ALLOCVREG;
	tmp$65 ALLOCVRIMM;
	tmp$66 ALLOCVRIMMF;
	tmp$67 ALLOCVRVAR;
	tmp$68 ALLOCVRIDX;
	tmp$69 ALLOCVRPTR;
	tmp$67 ALLOCVROFS;
	tmp$70 SETVREGDATATYPE;
	tmp$71 GETDISTANCE;
	tmp$49 LOADVR;
	tmp$43 STOREVR;
	tmp$44 XCHGTOS;
};
__FB_STATIC_ASSERT( sizeof( struct $7IR_VTBL ) == 560 );
extern struct $7IR_VTBL IRLLVM_VTBL$;
struct $5IRCTX {
	int64 INITED;
	struct $7IR_VTBL VTBL;
	$6IR_OPT OPTIONS;
};
__FB_STATIC_ASSERT( sizeof( struct $5IRCTX ) == 576 );
extern struct $5IRCTX IR$;
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
struct $7LEX_CTX {
	struct $9LEX_TKCTX CTXTB[17];
	struct $9LEX_TKCTX* CTX;
	int64 INSIDEMACRO;
};
__FB_STATIC_ASSERT( sizeof( struct $7LEX_CTX ) == 843760 );
extern struct $7LEX_CTX LEX$;
struct $7BUILTIN {
	uint8* DECL;
	int64 USED;
};
__FB_STATIC_ASSERT( sizeof( struct $7BUILTIN ) == 16 );
static struct $7BUILTIN BUILTINS$[18] = { { (uint8*)"declare void @llvm.memset.p0i8.i32(i8*, i8, i32, i32, i1) nounwind" }, { (uint8*)"declare void @llvm.memmove.p0i8.p0i8.i32(i8*, i8*, i32, i32, i1) nounwind" }, { (uint8*)"declare float  @llvm.sin.f32(float ) nounwind" }, { (uint8*)"declare double @llvm.sin.f64(double) nounwind" }, { (uint8*)"declare float  @llvm.cos.f32(float ) nounwind" }, { (uint8*)"declare double @llvm.cos.f64(double) nounwind" }, { (uint8*)"declare float  @llvm.exp.f32(float ) nounwind" }, { (uint8*)"declare double @llvm.exp.f64(double) nounwind" }, { (uint8*)"declare float  @llvm.log.f32(float ) nounwind" }, { (uint8*)"declare double @llvm.log.f64(double) nounwind" }, { (uint8*)"declare float  @llvm.sqrt.f32(float ) nounwind" }, { (uint8*)"declare double @llvm.sqrt.f64(double) nounwind" }, { (uint8*)"declare float  @llvm.floor.f32(float ) nounwind" }, { (uint8*)"declare double @llvm.floor.f64(double) nounwind" }, { (uint8*)"declare float  @llvm.fabs.f32(float ) nounwind" }, { (uint8*)"declare double @llvm.fabs.f64(double) nounwind" }, { (uint8*)"declare float  @llvm.nearbyint.f32(float ) nounwind" }, { (uint8*)"declare double @llvm.nearbyint.f64(double) nounwind" } };
static struct $13IRLLVMCONTEXT CTX$;
static uint8* DTYPENAME$[24] = { (uint8*)"i8", (uint8*)"i8", (uint8*)"i8", (uint8*)"i8", (uint8*)"i16", (uint8*)"i16", (uint8*)0ull, (uint8*)0ull, (uint8*)0ull, (uint8*)0ull, (uint8*)"i32", (uint8*)"i32", (uint8*)"i64", (uint8*)"i64", (uint8*)"float", (uint8*)"double", (uint8*)"%FBSTRING", (uint8*)"i8", (uint8*)0ull, (uint8*)0ull, (uint8*)0ull, (uint8*)"i8", (uint8*)0ull };
struct $7IR_VTBL IRLLVM_VTBL$ = { (tmp$35)&_INIT, (tmp$35)&_END, (tmp$36)&_EMITBEGIN, (tmp$37)&_EMITEND, (tmp$38)&_GETOPTIONVALUE, (tmp$39)&_SUPPORTSOP, (tmp$40)&_PROCBEGIN, (tmp$40)&_PROCEND, (tmp$41)&_PROCALLOCARG, (tmp$41)&_PROCALLOCLOCAL, (tmp$42)0ull, (tmp$40)&_SCOPEBEGIN, (tmp$40)&_SCOPEEND, (tmp$40)&_PROCALLOCSTATICVARS, (tmp$43)&_EMITCONVERT, (tmp$40)&_EMITLABEL, (tmp$40)&_EMITLABEL, (tmp$44)0ull, (tmp$41)&_EMITPROCBEGIN, (tmp$45)&_EMITPROCEND, (tmp$46)&_EMITPUSHARG, (tmp$35)&_EMITASMBEGIN, (tmp$47)&_EMITASMTEXT, (tmp$40)&_EMITASMSYMB, (tmp$35)&_EMITASMEND, (tmp$47)&_EMITCOMMENT, (tmp$48)&_EMITBOP, (tmp$49)&_EMITUOP, (tmp$43)&_EMITSTORE, (tmp$35)&_EMITSPILLREGS, (tmp$50)&_EMITLOAD, (tmp$43)&_EMITLOADRES, (tmp$51)0ull, (tmp$49)&_EMITADDR, (tmp$52)&_EMITCALL, (tmp$53)&_EMITCALLPTR, (tmp$44)0ull, (tmp$50)&_EMITJUMPPTR, (tmp$54)&_EMITBRANCH, (tmp$55)&_EMITJMPTB, (tmp$56)&_EMITMEM, (tmp$40)&_EMITSCOPEBEGIN, (tmp$40)&_EMITSCOPEEND, (tmp$40)&_EMITDECL, (tmp$57)&_EMITDBG, (tmp$40)&_EMITVARINIBEGIN, (tmp$40)&_EMITVARINIEND, (tmp$58)&_EMITVARINII, (tmp$59)&_EMITVARINIF, (tmp$60)&_EMITVARINIOFS, (tmp$61)&_EMITVARINISTR, (tmp$62)&_EMITVARINIWSTR, (tmp$63)&_EMITVARINIPAD, (tmp$35)&_EMITVARINISCOPEBEGIN, (tmp$35)&_EMITVARINISCOPEEND, (tmp$35)&_EMITFBCTINFBEGIN, (tmp$47)&_EMITFBCTINFSTRING, (tmp$35)&_EMITFBCTINFEND, (tmp$64)&IRHLALLOCVREG, (tmp$65)&IRHLALLOCVRIMM, (tmp$66)&IRHLALLOCVRIMMF, (tmp$67)&IRHLALLOCVRVAR, (tmp$68)&IRHLALLOCVRIDX, (tmp$69)&IRHLALLOCVRPTR, (tmp$67)&IRHLALLOCVROFS, (tmp$70)&_SETVREGDATATYPE, (tmp$71)0ull, (tmp$49)0ull, (tmp$43)0ull, (tmp$44)0ull };
struct $5FBENV ENV$ __attribute__((common));

__attribute__(( constructor )) static void fb_ctor__irzllvm( void )
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

static void _ZN13IRLLVMCONTEXTC1Ev( struct $13IRLLVMCONTEXT* THIS$1 )
{
	__builtin_memset( (int64*)THIS$1, 0, 8ll );
	__builtin_memset( (struct $5TLIST*)((uint8*)THIS$1 + 8ll), 0, 64ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 72ll), 0, 8ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 80ll), 0, 24ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 104ll), 0, 8ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 112ll), 0, 24ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 136ll), 0, 24ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 160ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 168ll), 0, 8ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 176ll), 0, 24ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 200ll), 0, 8ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 208ll), 0, 24ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 232ll), 0, 8ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 240ll), 0, 24ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 264ll), 0, 24ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 288ll), 0, 24ll );
	label$10:;
	label$11:;
}

static void _ZN13IRLLVMCONTEXTaSERKS_( struct $13IRLLVMCONTEXT* THIS$1, struct $13IRLLVMCONTEXT* __FB_RHS__$1 )
{
	label$12:;
	*(int64*)THIS$1 = *(int64*)__FB_RHS__$1;
	__builtin_memcpy( (struct $5TLIST*)((uint8*)THIS$1 + 8ll), (struct $5TLIST*)((uint8*)__FB_RHS__$1 + 8ll), 64 );
	*(int64*)((uint8*)THIS$1 + 72ll) = *(int64*)((uint8*)__FB_RHS__$1 + 72ll);
	FBSTRING* vr$12 = fb_StrAssign( (void*)((uint8*)THIS$1 + 80ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 80ll), -1ll, 0 );
	*(int64*)((uint8*)THIS$1 + 104ll) = *(int64*)((uint8*)__FB_RHS__$1 + 104ll);
	FBSTRING* vr$19 = fb_StrAssign( (void*)((uint8*)THIS$1 + 112ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 112ll), -1ll, 0 );
	FBSTRING* vr$24 = fb_StrAssign( (void*)((uint8*)THIS$1 + 136ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 136ll), -1ll, 0 );
	*(int64*)((uint8*)THIS$1 + 160ll) = *(int64*)((uint8*)__FB_RHS__$1 + 160ll);
	*(int64*)((uint8*)THIS$1 + 168ll) = *(int64*)((uint8*)__FB_RHS__$1 + 168ll);
	FBSTRING* vr$33 = fb_StrAssign( (void*)((uint8*)THIS$1 + 176ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 176ll), -1ll, 0 );
	*(int64*)((uint8*)THIS$1 + 200ll) = *(int64*)((uint8*)__FB_RHS__$1 + 200ll);
	FBSTRING* vr$40 = fb_StrAssign( (void*)((uint8*)THIS$1 + 208ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 208ll), -1ll, 0 );
	*(int64*)((uint8*)THIS$1 + 232ll) = *(int64*)((uint8*)__FB_RHS__$1 + 232ll);
	FBSTRING* vr$47 = fb_StrAssign( (void*)((uint8*)THIS$1 + 240ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 240ll), -1ll, 0 );
	FBSTRING* vr$52 = fb_StrAssign( (void*)((uint8*)THIS$1 + 264ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 264ll), -1ll, 0 );
	FBSTRING* vr$57 = fb_StrAssign( (void*)((uint8*)THIS$1 + 288ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 288ll), -1ll, 0 );
	label$13:;
}

static void _ZN13IRLLVMCONTEXTD1Ev( struct $13IRLLVMCONTEXT* THIS$1 )
{
	label$16:;
	label$17:;
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 288ll) );
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 264ll) );
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 240ll) );
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 208ll) );
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 176ll) );
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 136ll) );
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 112ll) );
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 80ll) );
}

static void _INIT( void )
{
	label$18:;
	IRHLINIT(  );
	LISTINIT( (struct $5TLIST*)((uint8*)&CTX$ + 8ll), 32ll, 16ll, 6ll );
	*($6IR_OPT*)((uint8*)&IR$ + 568ll) = *(int64*)((uint8*)&IR$ + 568ll) | 131586ll;
	int64 vr$2 = FBIS64BIT(  );
	if( vr$2 == 0ll ) goto label$21;
	{
		*(uint8**)((uint8*)DTYPENAME$ + 56ll) = *(uint8**)((uint8*)DTYPENAME$ + 96ll);
		*(uint8**)((uint8*)DTYPENAME$ + 64ll) = *(uint8**)((uint8*)DTYPENAME$ + 104ll);
	}
	goto label$20;
	label$21:;
	{
		*(uint8**)((uint8*)DTYPENAME$ + 56ll) = *(uint8**)((uint8*)DTYPENAME$ + 80ll);
		*(uint8**)((uint8*)DTYPENAME$ + 64ll) = *(uint8**)((uint8*)DTYPENAME$ + 88ll);
	}
	label$20:;
	label$19:;
}

static void _END( void )
{
	label$22:;
	LISTEND( (struct $5TLIST*)((uint8*)&CTX$ + 8ll) );
	IRHLEND(  );
	label$23:;
}

static void HWRITELINE( FBSTRING* LN$1 )
{
	FBSTRING TMP$117$1;
	label$24:;
	if( *(int64*)&CTX$ <= 0ll ) goto label$27;
	{
		FBSTRING TMP$115$2;
		FBSTRING* vr$1 = fb_StrAllocTempDescZEx( (uint8*)"\x09", 1ll );
		FBSTRING* vr$2 = fb_StrFill2( *(int64*)&CTX$, vr$1 );
		__builtin_memset( &TMP$115$2, 0, 24ll );
		FBSTRING* vr$5 = fb_StrConcat( &TMP$115$2, (void*)vr$2, -1ll, (void*)LN$1, -1ll );
		FBSTRING* vr$6 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$5, -1ll, 0 );
	}
	label$27:;
	label$26:;
	__builtin_memset( &TMP$117$1, 0, 24ll );
	FBSTRING* vr$9 = fb_StrConcat( &TMP$117$1, (void*)LN$1, -1ll, (void*)"\x0A", 2ll );
	FBSTRING* vr$10 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$9, -1ll, 0 );
	{
		uint64 TMP$118$2;
		TMP$118$2 = *(uint64*)((uint8*)&CTX$ + 232ll);
		goto label$29;
		label$30:;
		{
			FBSTRING TMP$119$3;
			__builtin_memset( &TMP$119$3, 0, 24ll );
			FBSTRING* vr$14 = fb_StrConcat( &TMP$119$3, (void*)((uint8*)&CTX$ + 240ll), -1ll, (void*)LN$1, -1ll );
			FBSTRING* vr$16 = fb_StrAssign( (void*)((uint8*)&CTX$ + 240ll), -1ll, (void*)vr$14, -1ll, 0 );
		}
		goto label$28;
		label$31:;
		{
			FBSTRING TMP$120$3;
			__builtin_memset( &TMP$120$3, 0, 24ll );
			FBSTRING* vr$20 = fb_StrConcat( &TMP$120$3, (void*)((uint8*)&CTX$ + 264ll), -1ll, (void*)LN$1, -1ll );
			FBSTRING* vr$22 = fb_StrAssign( (void*)((uint8*)&CTX$ + 264ll), -1ll, (void*)vr$20, -1ll, 0 );
		}
		goto label$28;
		label$32:;
		{
			FBSTRING TMP$121$3;
			__builtin_memset( &TMP$121$3, 0, 24ll );
			FBSTRING* vr$26 = fb_StrConcat( &TMP$121$3, (void*)((uint8*)&CTX$ + 288ll), -1ll, (void*)LN$1, -1ll );
			FBSTRING* vr$28 = fb_StrAssign( (void*)((uint8*)&CTX$ + 288ll), -1ll, (void*)vr$26, -1ll, 0 );
		}
		goto label$28;
		label$29:;
		static const void* tmp$468[3ll] = {
			&&label$30,
			&&label$31,
			&&label$32,
		};
		if( TMP$118$2 > 2ll ) goto label$28;
		goto *tmp$468[TMP$118$2 - 0ll];
		label$28:;
	}
	label$25:;
}

static void HWRITELABEL( uint8* ID$1 )
{
	FBSTRING TMP$123$1;
	FBSTRING TMP$124$1;
	label$33:;
	*(int64*)&CTX$ = *(int64*)&CTX$ + -1ll;
	__builtin_memset( &TMP$124$1, 0, 24ll );
	__builtin_memset( &TMP$123$1, 0, 24ll );
	FBSTRING* vr$4 = fb_StrConcat( &TMP$123$1, (void*)ID$1, 0ll, (void*)":", 2ll );
	FBSTRING* vr$6 = fb_StrAssign( (void*)&TMP$124$1, -1ll, (void*)vr$4, -1ll, 0 );
	HWRITELINE( &TMP$124$1 );
	fb_StrDelete( &TMP$124$1 );
	*(int64*)&CTX$ = *(int64*)&CTX$ + 1ll;
	label$34:;
}

static FBSTRING* HEMITPARAMNAME( struct $8FBSYMBOL* SYM$1 )
{
	FBSTRING TMP$126$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$35:;
	uint8* vr$1 = SYMBGETMANGLEDNAME( SYM$1 );
	__builtin_memset( &TMP$126$1, 0, 24ll );
	FBSTRING* vr$4 = fb_StrConcat( &TMP$126$1, (void*)vr$1, 0ll, (void*)"$", 2ll );
	FBSTRING* vr$6 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$4, -1ll, 0 );
	label$36:;
	FBSTRING* vr$8 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$8;
}

static FBSTRING* HEMITPROCCALLCONV( struct $8FBSYMBOL* PROC$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$37:;
	int64 vr$1 = FBGETCPUFAMILY(  );
	if( vr$1 == 0ll ) goto label$40;
	{
		goto label$38;
	}
	label$40:;
	label$39:;
	{
		uint64 TMP$127$2;
		TMP$127$2 = *(uint64*)((uint8*)PROC$1 + 144ll);
		goto label$42;
		label$43:;
		{
			fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"x86_stdcallcc ", 15ll, 0 );
		}
		goto label$41;
		label$42:;
		static const void* tmp$469[4ll] = {
			&&label$43,
			&&label$43,
			&&label$41,
			&&label$43,
		};
		if( TMP$127$2 < 1ll ) goto label$41;
		if( TMP$127$2 > 4ll ) goto label$41;
		goto *tmp$469[TMP$127$2 - 1ll];
		label$41:;
	}
	label$38:;
	FBSTRING* vr$6 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$6;
}

static FBSTRING* HEMITPROCHEADER( struct $8FBSYMBOL* PROC$1, int64 IS_PROTO$1 )
{
	FBSTRING TMP$129$1;
	FBSTRING TMP$131$1;
	struct $8FBSYMBOL* TMP$136$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$44:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	int64 DTYPE$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	FBSTRING* vr$2 = HEMITPROCCALLCONV( PROC$1 );
	FBSTRING* vr$4 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$2, -1ll, 0 );
	FBSTRING* vr$8 = HEMITTYPE( *(int64*)((uint8*)PROC$1 + 152ll) & 511ll, *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 160ll) );
	__builtin_memset( &TMP$129$1, 0, 24ll );
	FBSTRING* vr$12 = fb_StrConcat( &TMP$129$1, (void*)&LN$1, -1ll, (void*)vr$8, -1ll );
	FBSTRING* vr$14 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$12, -1ll, 0 );
	FBSTRING* vr$16 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" ", 2ll, 0 );
	uint8* vr$17 = SYMBGETMANGLEDNAME( PROC$1 );
	__builtin_memset( &TMP$131$1, 0, 24ll );
	FBSTRING* vr$21 = fb_StrConcat( &TMP$131$1, (void*)&LN$1, -1ll, (void*)vr$17, 0ll );
	FBSTRING* vr$23 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$21, -1ll, 0 );
	FBSTRING* vr$25 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"( ", 3ll, 0 );
	struct $8FBSYMBOL* HIDDEN$1;
	HIDDEN$1 = (struct $8FBSYMBOL*)0ull;
	int64 vr$26 = SYMBPROCRETURNSONSTACK( PROC$1 );
	if( vr$26 == 0ll ) goto label$47;
	{
		if( IS_PROTO$1 == 0ll ) goto label$49;
		{
			FBSTRING TMP$133$3;
			HIDDEN$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 56ll);
			FBSTRING* vr$43 = HEMITTYPE( (((*(int64*)((uint8*)HIDDEN$1 + 48ll) & 511ll) & 31ll) | (((*(int64*)((uint8*)HIDDEN$1 + 48ll) & 511ll) & 480ll) + 32ll)) | (((*(int64*)((uint8*)HIDDEN$1 + 48ll) & 511ll) & 261632ll) << 1ll), HIDDEN$1 );
			__builtin_memset( &TMP$133$3, 0, 24ll );
			FBSTRING* vr$47 = fb_StrConcat( &TMP$133$3, (void*)&LN$1, -1ll, (void*)vr$43, -1ll );
			FBSTRING* vr$49 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$47, -1ll, 0 );
		}
		goto label$48;
		label$49:;
		{
			FBSTRING TMP$134$3;
			HIDDEN$1 = *(struct $8FBSYMBOL**)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll);
			FBSTRING* vr$66 = HEMITTYPE( (((*(int64*)((uint8*)HIDDEN$1 + 48ll) & 511ll) & 31ll) | (((*(int64*)((uint8*)HIDDEN$1 + 48ll) & 511ll) & 480ll) + 32ll)) | (((*(int64*)((uint8*)HIDDEN$1 + 48ll) & 511ll) & 261632ll) << 1ll), *(struct $8FBSYMBOL**)((uint8*)HIDDEN$1 + 56ll) );
			__builtin_memset( &TMP$134$3, 0, 24ll );
			FBSTRING* vr$70 = fb_StrConcat( &TMP$134$3, (void*)&LN$1, -1ll, (void*)vr$66, -1ll );
			FBSTRING* vr$72 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$70, -1ll, 0 );
			FBSTRING* vr$74 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" ", 2ll, 0 );
			FBSTRING* vr$75 = HEMITPARAMNAME( HIDDEN$1 );
			FBSTRING* vr$77 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$75, -1ll, 0 );
		}
		label$48:;
		if( (int64)*(int16*)((uint8*)PROC$1 + 112ll) <= 0ll ) goto label$51;
		{
			FBSTRING* vr$82 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", ", 3ll, 0 );
		}
		label$51:;
		label$50:;
	}
	label$47:;
	label$46:;
	struct $8FBSYMBOL* PARAM$1;
	if( *(int64*)((uint8*)PROC$1 + 144ll) != 4ll ) goto label$52;
	TMP$136$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 136ll);
	goto label$661;
	label$52:;
	TMP$136$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 128ll);
	label$661:;
	PARAM$1 = TMP$136$1;
	label$53:;
	if( PARAM$1 == (struct $8FBSYMBOL*)0ull ) goto label$54;
	{
		struct $8FBSYMBOL* TMP$140$2;
		if( *(int64*)((uint8*)PARAM$1 + 88ll) != 4ll ) goto label$56;
		{
			FBSTRING* vr$91 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"...", 4ll, 0 );
		}
		goto label$55;
		label$56:;
		{
			_Z21SYMBGETREALPARAMDTYPEP8FBSYMBOLRlRS0_( PARAM$1, &DTYPE$1, &SUBTYPE$1 );
			FBSTRING* vr$94 = HEMITTYPE( DTYPE$1, SUBTYPE$1 );
			FBSTRING* vr$96 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$94, -1ll, 0 );
			if( IS_PROTO$1 != 0ll ) goto label$58;
			{
				FBSTRING TMP$138$4;
				FBSTRING TMP$139$4;
				FBSTRING* vr$99 = HEMITPARAMNAME( *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 96ll) );
				__builtin_memset( &TMP$138$4, 0, 24ll );
				FBSTRING* vr$102 = fb_StrConcat( &TMP$138$4, (void*)" ", 2ll, (void*)vr$99, -1ll );
				__builtin_memset( &TMP$139$4, 0, 24ll );
				FBSTRING* vr$106 = fb_StrConcat( &TMP$139$4, (void*)&LN$1, -1ll, (void*)vr$102, -1ll );
				FBSTRING* vr$108 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$106, -1ll, 0 );
			}
			label$58:;
			label$57:;
		}
		label$55:;
		if( *(int64*)((uint8*)PROC$1 + 144ll) != 4ll ) goto label$59;
		TMP$140$2 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 288ll);
		goto label$662;
		label$59:;
		TMP$140$2 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 296ll);
		label$662:;
		PARAM$1 = TMP$140$2;
		if( PARAM$1 == (struct $8FBSYMBOL*)0ull ) goto label$61;
		{
			FBSTRING* vr$115 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", ", 3ll, 0 );
		}
		label$61:;
		label$60:;
	}
	goto label$53;
	label$54:;
	FBSTRING* vr$117 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" )", 3ll, 0 );
	FBSTRING* vr$119 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" nounwind", 10ll, 0 );
	if( (*(int64*)((uint8*)PROC$1 + 8ll) & 268435456ll) == 0ll ) goto label$63;
	{
		FBSTRING* vr$124 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" naked", 7ll, 0 );
	}
	label$63:;
	label$62:;
	FBSTRING* vr$127 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&LN$1, -1ll, 0 );
	fb_StrDelete( &LN$1 );
	label$45:;
	FBSTRING* vr$130 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$130;
}

static FBSTRING* HGETUDTNAME( struct $8FBSYMBOL* SYM$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$64:;
	struct $8FBSYMBOL* NS$1;
	NS$1 = *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)SYM$1 + 232ll);
	FBSTRING S$1;
	FBSTRING* vr$4 = fb_StrInit( (void*)&S$1, -1ll, (void*)"%", 2ll, 0 );
	label$66:;
	if( NS$1 == (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll) ) goto label$67;
	{
		FBSTRING TMP$145$2;
		__builtin_memset( &TMP$145$2, 0, 24ll );
		FBSTRING* vr$11 = fb_StrConcat( &TMP$145$2, (void*)&S$1, -1ll, *(void**)((uint8*)NS$1 + 24ll), 0ll );
		FBSTRING* vr$13 = fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$11, -1ll, 0 );
		FBSTRING* vr$15 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)".", 2ll, 0 );
		NS$1 = *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)NS$1 + 232ll);
	}
	goto label$66;
	label$67:;
	if( *(uint8**)((uint8*)SYM$1 + 32ll) == (uint8*)0ull ) goto label$69;
	{
		FBSTRING TMP$146$2;
		__builtin_memset( &TMP$146$2, 0, 24ll );
		FBSTRING* vr$24 = fb_StrConcat( &TMP$146$2, (void*)&S$1, -1ll, *(void**)((uint8*)SYM$1 + 32ll), 0ll );
		FBSTRING* vr$26 = fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$24, -1ll, 0 );
	}
	goto label$68;
	label$69:;
	{
		FBSTRING TMP$147$2;
		__builtin_memset( &TMP$147$2, 0, 24ll );
		FBSTRING* vr$31 = fb_StrConcat( &TMP$147$2, (void*)&S$1, -1ll, *(void**)((uint8*)SYM$1 + 24ll), 0ll );
		FBSTRING* vr$33 = fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$31, -1ll, 0 );
	}
	label$68:;
	FBSTRING* vr$36 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&S$1, -1ll, 0 );
	fb_StrDelete( &S$1 );
	label$65:;
	FBSTRING* vr$39 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$39;
}

static void HEMITUDT( struct $8FBSYMBOL* S$1 )
{
	label$70:;
	if( S$1 != (struct $8FBSYMBOL*)0ull ) goto label$73;
	{
		goto label$71;
	}
	label$73:;
	label$72:;
	if( (*(int64*)((uint8*)S$1 + 16ll) & 67108864ll) == 0ll ) goto label$75;
	{
		goto label$71;
	}
	label$75:;
	label$74:;
	int64 OLDSECTION$1;
	OLDSECTION$1 = *(int64*)((uint8*)&CTX$ + 232ll);
	if( (int64)-((*(int64*)((uint8*)S$1 + 8ll) & 128ll) != 0ll) != 0ll ) goto label$77;
	{
		*(int64*)((uint8*)&CTX$ + 232ll) = 0ll;
	}
	label$77:;
	label$76:;
	{
		uint64 TMP$148$2;
		TMP$148$2 = *(uint64*)S$1;
		goto label$79;
		label$80:;
		{
			FBSTRING TMP$150$3;
			FBSTRING TMP$151$3;
			FBSTRING TMP$152$3;
			*($12FB_SYMBSTATS*)((uint8*)S$1 + 16ll) = *(int64*)((uint8*)S$1 + 16ll) | 67108864ll;
			__builtin_memset( &TMP$152$3, 0, 24ll );
			FBSTRING* vr$13 = HEMITTYPE( 9ll, (struct $8FBSYMBOL*)0ull );
			FBSTRING* vr$14 = HGETUDTNAME( S$1 );
			__builtin_memset( &TMP$150$3, 0, 24ll );
			FBSTRING* vr$17 = fb_StrConcat( &TMP$150$3, (void*)vr$14, -1ll, (void*)" = type ", 9ll );
			__builtin_memset( &TMP$151$3, 0, 24ll );
			FBSTRING* vr$20 = fb_StrConcat( &TMP$151$3, (void*)vr$17, -1ll, (void*)vr$13, -1ll );
			FBSTRING* vr$22 = fb_StrAssign( (void*)&TMP$152$3, -1ll, (void*)vr$20, -1ll, 0 );
			HWRITELINE( &TMP$152$3 );
			fb_StrDelete( &TMP$152$3 );
		}
		goto label$78;
		label$81:;
		{
			HEMITSTRUCT( S$1 );
		}
		goto label$78;
		label$82:;
		{
			if( (*(int64*)((uint8*)S$1 + 16ll) & 16384ll) == 0ll ) goto label$84;
			{
				FBSTRING TMP$155$4;
				FBSTRING TMP$156$4;
				FBSTRING TMP$157$4;
				__builtin_memset( &TMP$157$4, 0, 24ll );
				FBSTRING* vr$29 = HEMITPROCHEADER( S$1, -1ll );
				__builtin_memset( &TMP$155$4, 0, 24ll );
				FBSTRING* vr$32 = fb_StrConcat( &TMP$155$4, (void*)"typedef ", 9ll, (void*)vr$29, -1ll );
				__builtin_memset( &TMP$156$4, 0, 24ll );
				FBSTRING* vr$35 = fb_StrConcat( &TMP$156$4, (void*)vr$32, -1ll, (void*)"*", 2ll );
				FBSTRING* vr$37 = fb_StrAssign( (void*)&TMP$157$4, -1ll, (void*)vr$35, -1ll, 0 );
				HWRITELINE( &TMP$157$4 );
				fb_StrDelete( &TMP$157$4 );
				*($12FB_SYMBSTATS*)((uint8*)S$1 + 16ll) = *(int64*)((uint8*)S$1 + 16ll) | 67108864ll;
			}
			label$84:;
			label$83:;
		}
		goto label$78;
		label$79:;
		static const void* tmp$470[8ll] = {
			&&label$82,
			&&label$78,
			&&label$78,
			&&label$78,
			&&label$78,
			&&label$78,
			&&label$80,
			&&label$81,
		};
		if( TMP$148$2 < 3ll ) goto label$78;
		if( TMP$148$2 > 10ll ) goto label$78;
		goto *tmp$470[TMP$148$2 - 3ll];
		label$78:;
	}
	*(int64*)((uint8*)&CTX$ + 232ll) = OLDSECTION$1;
	label$71:;
}

static FBSTRING* HEMITARRAYDECL( struct $8FBSYMBOL* SYM$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$85:;
	FBSTRING S$1;
	__builtin_memset( &S$1, 0, 24ll );
	{
		$12FB_SYMBCLASS TMP$158$2;
		TMP$158$2 = *($12FB_SYMBCLASS*)SYM$1;
		if( TMP$158$2 == 1ll ) goto label$89;
		label$90:;
		if( TMP$158$2 != 12ll ) goto label$88;
		label$89:;
		{
			if( (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 65540ll) != 0ll) != 0ll ) goto label$92;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$159$5;
					TMP$159$5 = *(int64*)((uint8*)SYM$1 + 96ll) + -1ll;
					goto label$93;
					label$96:;
					{
						FBSTRING TMP$162$6;
						FBSTRING TMP$163$6;
						FBSTRING TMP$164$6;
						FBSTRING* vr$19 = fb_LongintToStr( (*(int64*)((uint8*)((uint8*)*(struct $10FBARRAYDIM**)((uint8*)SYM$1 + 104ll) + (I$5 << 4ll)) + 8ll) - *(int64*)((uint8*)*(struct $10FBARRAYDIM**)((uint8*)SYM$1 + 104ll) + (I$5 << 4ll))) + 1ll );
						__builtin_memset( &TMP$162$6, 0, 24ll );
						FBSTRING* vr$22 = fb_StrConcat( &TMP$162$6, (void*)"[", 2ll, (void*)vr$19, -1ll );
						__builtin_memset( &TMP$163$6, 0, 24ll );
						FBSTRING* vr$25 = fb_StrConcat( &TMP$163$6, (void*)vr$22, -1ll, (void*)"]", 2ll );
						__builtin_memset( &TMP$164$6, 0, 24ll );
						FBSTRING* vr$29 = fb_StrConcat( &TMP$164$6, (void*)&S$1, -1ll, (void*)vr$25, -1ll );
						FBSTRING* vr$31 = fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$29, -1ll, 0 );
					}
					label$94:;
					I$5 = I$5 + 1ll;
					label$93:;
					if( I$5 <= TMP$159$5 ) goto label$96;
					label$95:;
				}
			}
			label$92:;
			label$91:;
		}
		label$88:;
		label$87:;
	}
	int64 LENGTH$1;
	LENGTH$1 = 0ll;
	{
		int64 TMP$165$2;
		TMP$165$2 = *(int64*)((uint8*)SYM$1 + 48ll) & 511ll;
		if( TMP$165$2 == 17ll ) goto label$99;
		label$100:;
		if( TMP$165$2 != 3ll ) goto label$98;
		label$99:;
		{
			LENGTH$1 = *(int64*)((uint8*)SYM$1 + 72ll);
		}
		goto label$97;
		label$98:;
		if( TMP$165$2 != 6ll ) goto label$101;
		label$102:;
		{
			LENGTH$1 = *(int64*)((uint8*)SYM$1 + 72ll) / *(int64*)((uint8*)SYMB_DTYPETB$ + 344ll);
		}
		label$101:;
		label$97:;
	}
	if( LENGTH$1 <= 0ll ) goto label$104;
	{
		FBSTRING* vr$44 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"[", 2ll, 0 );
		FBSTRING* vr$45 = fb_LongintToStr( LENGTH$1 );
		FBSTRING* vr$47 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)vr$45, -1ll, 0 );
		FBSTRING* vr$49 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"]", 2ll, 0 );
	}
	label$104:;
	label$103:;
	FBSTRING* vr$52 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&S$1, -1ll, 0 );
	fb_StrDelete( &S$1 );
	label$86:;
	FBSTRING* vr$55 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$55;
}

static void HBUILDSTRLIT( FBSTRING* LN$1, int64 WANTEDLENGTH$1, uint8* Z$1, int64 LENGTH$1 )
{
	label$105:;
	int64 CH$1;
	if( LENGTH$1 <= WANTEDLENGTH$1 ) goto label$108;
	{
		LENGTH$1 = WANTEDLENGTH$1;
	}
	label$108:;
	label$107:;
	{
		int64 I$2;
		I$2 = 0ll;
		int64 TMP$166$2;
		TMP$166$2 = LENGTH$1 + -1ll;
		goto label$109;
		label$112:;
		{
			CH$1 = (int64)*(uint8*)((uint8*)Z$1 + I$2);
			int64 vr$4 = HCHARNEEDSESCAPING( CH$1, 34ll );
			if( vr$4 == 0ll ) goto label$114;
			{
				FBSTRING TMP$169$4;
				FBSTRING TMP$170$4;
				FBSTRING* vr$6 = fb_HEXEx_l( (uint64)CH$1, 2 );
				__builtin_memset( &TMP$169$4, 0, 24ll );
				FBSTRING* vr$9 = fb_StrConcat( &TMP$169$4, (void*)"\x5C", 2ll, (void*)vr$6, -1ll );
				__builtin_memset( &TMP$170$4, 0, 24ll );
				FBSTRING* vr$12 = fb_StrConcat( &TMP$170$4, (void*)LN$1, -1ll, (void*)vr$9, -1ll );
				FBSTRING* vr$13 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$12, -1ll, 0 );
			}
			goto label$113;
			label$114:;
			{
				FBSTRING TMP$171$4;
				FBSTRING* vr$14 = fb_CHR( 1, CH$1 );
				__builtin_memset( &TMP$171$4, 0, 24ll );
				FBSTRING* vr$17 = fb_StrConcat( &TMP$171$4, (void*)LN$1, -1ll, (void*)vr$14, -1ll );
				FBSTRING* vr$18 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$17, -1ll, 0 );
			}
			label$113:;
		}
		label$110:;
		I$2 = I$2 + 1ll;
		label$109:;
		if( I$2 <= TMP$166$2 ) goto label$112;
		label$111:;
	}
	label$115:;
	if( LENGTH$1 >= WANTEDLENGTH$1 ) goto label$116;
	{
		FBSTRING TMP$173$2;
		__builtin_memset( &TMP$173$2, 0, 24ll );
		FBSTRING* vr$24 = fb_StrConcat( &TMP$173$2, (void*)LN$1, -1ll, (void*)"\x5C" "00", 4ll );
		FBSTRING* vr$25 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$24, -1ll, 0 );
		LENGTH$1 = LENGTH$1 + 1ll;
	}
	goto label$115;
	label$116:;
	label$106:;
}

static void HBUILDWSTRLIT( FBSTRING* LN$1, int64 WANTEDLENGTH$1, uint32* W$1, int64 LENGTH$1 )
{
	label$117:;
	uint64 CH$1;
	uint64 WCHARSIZE$1;
	WCHARSIZE$1 = *(uint64*)((uint8*)SYMB_DTYPETB$ + 344ll);
	if( LENGTH$1 <= WANTEDLENGTH$1 ) goto label$120;
	{
		LENGTH$1 = WANTEDLENGTH$1;
	}
	label$120:;
	label$119:;
	{
		int64 I$2;
		I$2 = 0ll;
		int64 TMP$174$2;
		TMP$174$2 = LENGTH$1 + -1ll;
		goto label$121;
		label$124:;
		{
			CH$1 = (uint64)*(uint32*)((uint8*)W$1 + (I$2 << 2ll));
			int64 vr$5 = HCHARNEEDSESCAPING( (int64)CH$1, 34ll );
			if( vr$5 == 0ll ) goto label$126;
			{
				if( WCHARSIZE$1 < 1ull ) goto label$128;
				{
					FBSTRING TMP$175$5;
					FBSTRING TMP$176$5;
					FBSTRING* vr$9 = fb_HEXEx_l( CH$1 & 255ull, 2 );
					__builtin_memset( &TMP$175$5, 0, 24ll );
					FBSTRING* vr$12 = fb_StrConcat( &TMP$175$5, (void*)"\x5C", 2ll, (void*)vr$9, -1ll );
					__builtin_memset( &TMP$176$5, 0, 24ll );
					FBSTRING* vr$15 = fb_StrConcat( &TMP$176$5, (void*)LN$1, -1ll, (void*)vr$12, -1ll );
					FBSTRING* vr$16 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$15, -1ll, 0 );
				}
				label$128:;
				label$127:;
				if( WCHARSIZE$1 < 2ull ) goto label$130;
				{
					FBSTRING TMP$177$5;
					FBSTRING TMP$178$5;
					FBSTRING* vr$20 = fb_HEXEx_l( (CH$1 >> 8ll) & 255ull, 2 );
					__builtin_memset( &TMP$177$5, 0, 24ll );
					FBSTRING* vr$23 = fb_StrConcat( &TMP$177$5, (void*)"\x5C", 2ll, (void*)vr$20, -1ll );
					__builtin_memset( &TMP$178$5, 0, 24ll );
					FBSTRING* vr$26 = fb_StrConcat( &TMP$178$5, (void*)LN$1, -1ll, (void*)vr$23, -1ll );
					FBSTRING* vr$27 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$26, -1ll, 0 );
				}
				label$130:;
				label$129:;
				if( WCHARSIZE$1 < 4ull ) goto label$132;
				{
					FBSTRING TMP$179$5;
					FBSTRING TMP$180$5;
					FBSTRING TMP$181$5;
					FBSTRING TMP$182$5;
					FBSTRING* vr$31 = fb_HEXEx_l( (CH$1 >> 16ll) & 255ull, 2 );
					__builtin_memset( &TMP$179$5, 0, 24ll );
					FBSTRING* vr$34 = fb_StrConcat( &TMP$179$5, (void*)"\x5C", 2ll, (void*)vr$31, -1ll );
					__builtin_memset( &TMP$180$5, 0, 24ll );
					FBSTRING* vr$37 = fb_StrConcat( &TMP$180$5, (void*)LN$1, -1ll, (void*)vr$34, -1ll );
					FBSTRING* vr$38 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$37, -1ll, 0 );
					FBSTRING* vr$41 = fb_HEXEx_l( (CH$1 >> 24ll) & 255ull, 2 );
					__builtin_memset( &TMP$181$5, 0, 24ll );
					FBSTRING* vr$44 = fb_StrConcat( &TMP$181$5, (void*)"\x5C", 2ll, (void*)vr$41, -1ll );
					__builtin_memset( &TMP$182$5, 0, 24ll );
					FBSTRING* vr$47 = fb_StrConcat( &TMP$182$5, (void*)LN$1, -1ll, (void*)vr$44, -1ll );
					FBSTRING* vr$48 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$47, -1ll, 0 );
				}
				label$132:;
				label$131:;
			}
			goto label$125;
			label$126:;
			{
				FBSTRING TMP$183$4;
				FBSTRING* vr$49 = fb_CHR( 1, (int64)CH$1 );
				__builtin_memset( &TMP$183$4, 0, 24ll );
				FBSTRING* vr$52 = fb_StrConcat( &TMP$183$4, (void*)LN$1, -1ll, (void*)vr$49, -1ll );
				FBSTRING* vr$53 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$52, -1ll, 0 );
				{
					int64 J$5;
					J$5 = 2ll;
					int64 TMP$184$5;
					TMP$184$5 = (int64)WCHARSIZE$1;
					goto label$133;
					label$136:;
					{
						FBSTRING TMP$185$6;
						__builtin_memset( &TMP$185$6, 0, 24ll );
						FBSTRING* vr$56 = fb_StrConcat( &TMP$185$6, (void*)LN$1, -1ll, (void*)"\x5C" "00", 4ll );
						FBSTRING* vr$57 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$56, -1ll, 0 );
					}
					label$134:;
					J$5 = J$5 + 1ll;
					label$133:;
					if( J$5 <= TMP$184$5 ) goto label$136;
					label$135:;
				}
			}
			label$125:;
		}
		label$122:;
		I$2 = I$2 + 1ll;
		label$121:;
		if( I$2 <= TMP$174$2 ) goto label$124;
		label$123:;
	}
	label$137:;
	if( LENGTH$1 >= WANTEDLENGTH$1 ) goto label$138;
	{
		{
			int64 J$3;
			J$3 = 1ll;
			int64 TMP$186$3;
			TMP$186$3 = (int64)WCHARSIZE$1;
			goto label$139;
			label$142:;
			{
				FBSTRING TMP$187$4;
				__builtin_memset( &TMP$187$4, 0, 24ll );
				FBSTRING* vr$65 = fb_StrConcat( &TMP$187$4, (void*)LN$1, -1ll, (void*)"\x5C" "00", 4ll );
				FBSTRING* vr$66 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$65, -1ll, 0 );
			}
			label$140:;
			J$3 = J$3 + 1ll;
			label$139:;
			if( J$3 <= TMP$186$3 ) goto label$142;
			label$141:;
		}
		LENGTH$1 = LENGTH$1 + 1ll;
	}
	goto label$137;
	label$138:;
	label$118:;
}

static FBSTRING* HEMITSTRLITTYPE( int64 LENGTH$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$143:;
	FBSTRING* vr$2 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"[", 2ll, 0 );
	FBSTRING* vr$3 = fb_LongintToStr( LENGTH$1 );
	FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&fb$result$1, -1ll, (void*)vr$3, -1ll, 0 );
	FBSTRING* vr$7 = fb_StrConcatAssign( (void*)&fb$result$1, -1ll, (void*)" x i8]", 7ll, 0 );
	label$144:;
	FBSTRING* vr$9 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$9;
}

static FBSTRING* HEMITSYMTYPE( struct $8FBSYMBOL* SYM$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$145:;
	{
		int64 TMP$189$2;
		TMP$189$2 = *(int64*)((uint8*)SYM$1 + 48ll) & 511ll;
		if( TMP$189$2 == 17ll ) goto label$149;
		label$150:;
		if( TMP$189$2 == 3ll ) goto label$149;
		label$151:;
		if( TMP$189$2 != 6ll ) goto label$148;
		label$149:;
		{
			FBSTRING* vr$7 = HEMITSTRLITTYPE( *(int64*)((uint8*)SYM$1 + 72ll) );
			FBSTRING* vr$9 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$7, -1ll, 0 );
		}
		goto label$147;
		label$148:;
		{
			FBSTRING* vr$13 = HEMITTYPE( *(int64*)((uint8*)SYM$1 + 48ll) & 511ll, *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll) );
			FBSTRING* vr$15 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$13, -1ll, 0 );
		}
		label$152:;
		label$147:;
	}
	label$146:;
	FBSTRING* vr$17 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$17;
}

static void HEMITVARIABLE( struct $8FBSYMBOL* SYM$1 )
{
	label$153:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	int64 IS_GLOBAL$1;
	int64 LENGTH$1;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 524288ll) == 0ll ) goto label$156;
	{
		if( (int64)-((*(int64*)((uint8*)SYM$1 + 16ll) & 2ll) != 0ll) != 0ll ) goto label$158;
		{
			fb_StrDelete( &LN$1 );
			goto label$154;
		}
		label$158:;
		label$157:;
		{
			int64 TMP$190$3;
			TMP$190$3 = *(int64*)((uint8*)SYM$1 + 48ll) & 511ll;
			if( TMP$190$3 == 3ll ) goto label$161;
			label$162:;
			if( TMP$190$3 != 6ll ) goto label$160;
			label$161:;
			{
				FBSTRING TMP$192$4;
				uint8* vr$13 = SYMBGETMANGLEDNAME( SYM$1 );
				__builtin_memset( &TMP$192$4, 0, 24ll );
				FBSTRING* vr$16 = fb_StrConcat( &TMP$192$4, (void*)vr$13, 0ll, (void*)" = ", 4ll );
				FBSTRING* vr$18 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$16, -1ll, 0 );
				FBSTRING* vr$20 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"private constant ", 18ll, 0 );
				FBSTRING* vr$21 = HEMITSYMTYPE( SYM$1 );
				FBSTRING* vr$23 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$21, -1ll, 0 );
				FBSTRING* vr$25 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" c\x22", 4ll, 0 );
				if( (*(int64*)((uint8*)SYM$1 + 48ll) & 511ll) != 6ll ) goto label$164;
				{
					LENGTH$1 = *(int64*)((uint8*)SYM$1 + 72ll) / *(int64*)((uint8*)SYMB_DTYPETB$ + 344ll);
					uint32* vr$32 = HUNESCAPEW( *(uint32**)((uint8*)SYM$1 + 88ll) );
					HBUILDWSTRLIT( &LN$1, LENGTH$1, vr$32, LENGTH$1 );
				}
				goto label$163;
				label$164:;
				{
					LENGTH$1 = *(int64*)((uint8*)SYM$1 + 72ll);
					uint8* vr$36 = HUNESCAPE( *(uint8**)((uint8*)SYM$1 + 88ll) );
					HBUILDSTRLIT( &LN$1, LENGTH$1, vr$36, LENGTH$1 );
				}
				label$163:;
				FBSTRING* vr$39 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22", 2ll, 0 );
				HWRITELINE( &LN$1 );
			}
			goto label$159;
			label$160:;
			{
			}
			label$165:;
			label$159:;
		}
		fb_StrDelete( &LN$1 );
		goto label$154;
	}
	label$156:;
	label$155:;
	if( ((int64)-(*(struct $7ASTNODE**)((uint8*)SYM$1 + 88ll) != (struct $7ASTNODE*)0ull) & ((int64)-((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 128ll) != 0ll) == 0ll) | (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 2ll) != 0ll))) == 0ll ) goto label$167;
	{
		if( (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 128ll) != 0ll) != 0ll ) goto label$169;
		{
			if( (int64)-((*(int64*)((uint8*)SYM$1 + 16ll) & 2ll) != 0ll) != 0ll ) goto label$171;
			{
				if( (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 32ll) != 0ll) != 0ll ) goto label$173;
				{
					fb_StrDelete( &LN$1 );
					goto label$154;
				}
				label$173:;
				label$172:;
			}
			label$171:;
			label$170:;
		}
		label$169:;
		label$168:;
		IRHLFLUSHSTATICINITIALIZER( SYM$1 );
		fb_StrDelete( &LN$1 );
		goto label$154;
	}
	label$167:;
	label$166:;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 65540ll) == 0ll ) goto label$175;
	{
		fb_StrDelete( &LN$1 );
		goto label$154;
	}
	label$175:;
	label$174:;
	IS_GLOBAL$1 = *(int64*)((uint8*)SYM$1 + 8ll) & 59ll;
	uint8* vr$74 = SYMBGETMANGLEDNAME( SYM$1 );
	fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$74, 0ll, 0 );
	FBSTRING* vr$77 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" = ", 4ll, 0 );
	if( IS_GLOBAL$1 == 0ll ) goto label$177;
	{
		FBSTRING* vr$80 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"global", 7ll, 0 );
	}
	goto label$176;
	label$177:;
	{
		FBSTRING* vr$82 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"alloca", 7ll, 0 );
	}
	label$176:;
	FBSTRING* vr$84 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" ", 2ll, 0 );
	FBSTRING* vr$85 = HEMITSYMTYPE( SYM$1 );
	FBSTRING* vr$87 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$85, -1ll, 0 );
	if( IS_GLOBAL$1 == 0ll ) goto label$179;
	{
		FBSTRING* vr$90 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" zeroinitializer", 17ll, 0 );
	}
	label$179:;
	label$178:;
	HWRITELINE( &LN$1 );
	fb_StrDelete( &LN$1 );
	label$154:;
}

static void HMAYBEEMITGLOBALVAR( struct $8FBSYMBOL* SYM$1 )
{
	label$180:;
	int64 vr$0 = SYMBISDATADESC( SYM$1 );
	if( vr$0 != 0ll ) goto label$183;
	{
		HEMITVARIABLE( SYM$1 );
	}
	label$183:;
	label$182:;
	label$181:;
}

static void HMAYBEEMITPROCPROTO( struct $8FBSYMBOL* S$1 )
{
	FBSTRING TMP$199$1;
	FBSTRING TMP$200$1;
	label$184:;
	if( ((int64)-((*(int64*)((uint8*)S$1 + 16ll) & 16384ll) != 0ll) | ~(int64)-((*(int64*)((uint8*)S$1 + 16ll) & 2ll) != 0ll)) == 0ll ) goto label$187;
	{
		goto label$185;
	}
	label$187:;
	label$186:;
	uint8* vr$9 = SYMBGETMANGLEDNAME( S$1 );
	if( vr$9 != (uint8*)0ull ) goto label$189;
	{
		goto label$185;
	}
	label$189:;
	label$188:;
	if( (*(int64*)((uint8*)S$1 + 16ll) & 128ll) == 0ll ) goto label$191;
	{
		goto label$185;
	}
	label$191:;
	label$190:;
	int64 OLDSECTION$1;
	OLDSECTION$1 = *(int64*)((uint8*)&CTX$ + 232ll);
	*(int64*)((uint8*)&CTX$ + 232ll) = 0ll;
	__builtin_memset( &TMP$200$1, 0, 24ll );
	FBSTRING* vr$15 = HEMITPROCHEADER( S$1, -1ll );
	__builtin_memset( &TMP$199$1, 0, 24ll );
	FBSTRING* vr$18 = fb_StrConcat( &TMP$199$1, (void*)"declare ", 9ll, (void*)vr$15, -1ll );
	FBSTRING* vr$20 = fb_StrAssign( (void*)&TMP$200$1, -1ll, (void*)vr$18, -1ll, 0 );
	HWRITELINE( &TMP$200$1 );
	fb_StrDelete( &TMP$200$1 );
	*(int64*)((uint8*)&CTX$ + 232ll) = OLDSECTION$1;
	label$185:;
}

static void HEMITSTRUCT( struct $8FBSYMBOL* S$1 )
{
	label$192:;
	struct $8FBSYMBOL* FLD$1;
	if( (*(int64*)((uint8*)S$1 + 16ll) & 134217728ll) == 0ll ) goto label$195;
	{
		goto label$193;
	}
	label$195:;
	label$194:;
	*($12FB_SYMBSTATS*)((uint8*)S$1 + 16ll) = *(int64*)((uint8*)S$1 + 16ll) | 134217728ll;
	struct $8FBSYMBOL* vr$6 = SYMBUDTGETFIRSTFIELD( S$1 );
	FLD$1 = vr$6;
	label$196:;
	if( FLD$1 == (struct $8FBSYMBOL*)0ull ) goto label$197;
	{
		HEMITUDT( *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 56ll) );
		struct $8FBSYMBOL* vr$9 = SYMBUDTGETNEXTFIELD( FLD$1 );
		FLD$1 = vr$9;
	}
	goto label$196;
	label$197:;
	if( (*(int64*)((uint8*)S$1 + 16ll) & 67108864ll) == 0ll ) goto label$199;
	{
		goto label$193;
	}
	label$199:;
	label$198:;
	*($12FB_SYMBSTATS*)((uint8*)S$1 + 16ll) = *(int64*)((uint8*)S$1 + 16ll) | 67108864ll;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	if( *(uint8**)((uint8*)S$1 + 24ll) == (uint8*)0ull ) goto label$201;
	{
		FBSTRING* vr$19 = HGETUDTNAME( S$1 );
		FBSTRING* vr$21 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$19, -1ll, 0 );
	}
	goto label$200;
	label$201:;
	{
		FBSTRING TMP$201$2;
		FBSTRING TMP$202$2;
		uint8* vr$22 = SYMBUNIQUEID(  );
		__builtin_memset( &TMP$201$2, 0, 24ll );
		FBSTRING* vr$25 = fb_StrConcat( &TMP$201$2, (void*)"%", 2ll, (void*)vr$22, 0ll );
		__builtin_memset( &TMP$202$2, 0, 24ll );
		FBSTRING* vr$29 = fb_StrConcat( &TMP$202$2, (void*)&LN$1, -1ll, (void*)vr$25, -1ll );
		FBSTRING* vr$31 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$29, -1ll, 0 );
	}
	label$200:;
	FBSTRING* vr$33 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" = type { ", 11ll, 0 );
	FBSTRING ATTRIB$1;
	FBSTRING* vr$35 = fb_StrInit( (void*)&ATTRIB$1, -1ll, (void*)"", 1ll, 0 );
	if( (int64)*(uint8*)((uint8*)S$1 + 203ll) <= 0ll ) goto label$203;
	{
		if( (int64)*(uint8*)((uint8*)S$1 + 203ll) != 1ll ) goto label$205;
		{
			fb_StrAssign( (void*)&ATTRIB$1, -1ll, (void*)" __attribute__((packed))", 25ll, 0 );
		}
		goto label$204;
		label$205:;
		{
			FBSTRING TMP$207$3;
			FBSTRING TMP$208$3;
			FBSTRING* vr$45 = fb_UIntToStr( (uint32)*(uint8*)((uint8*)S$1 + 203ll) );
			__builtin_memset( &TMP$207$3, 0, 24ll );
			FBSTRING* vr$48 = fb_StrConcat( &TMP$207$3, (void*)" __attribute__((aligned (", 26ll, (void*)vr$45, -1ll );
			__builtin_memset( &TMP$208$3, 0, 24ll );
			FBSTRING* vr$51 = fb_StrConcat( &TMP$208$3, (void*)vr$48, -1ll, (void*)")))", 4ll );
			FBSTRING* vr$53 = fb_StrAssign( (void*)&ATTRIB$1, -1ll, (void*)vr$51, -1ll, 0 );
		}
		label$204:;
	}
	label$203:;
	label$202:;
	struct $8FBSYMBOL* vr$54 = SYMBUDTGETFIRSTFIELD( S$1 );
	FLD$1 = vr$54;
	label$206:;
	if( FLD$1 == (struct $8FBSYMBOL*)0ull ) goto label$207;
	{
		if( (int64)-((*(int64*)((uint8*)FLD$1 + 8ll) & 4ll) != 0ll) != 0ll ) goto label$209;
		{
			FBSTRING* vr$60 = HEMITSYMTYPE( FLD$1 );
			FBSTRING* vr$62 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$60, -1ll, 0 );
			FBSTRING* vr$63 = HEMITARRAYDECL( FLD$1 );
			FBSTRING* vr$65 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$63, -1ll, 0 );
			FBSTRING* vr$68 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)&ATTRIB$1, -1ll, 0 );
		}
		label$209:;
		label$208:;
		struct $8FBSYMBOL* vr$69 = SYMBUDTGETNEXTFIELD( FLD$1 );
		FLD$1 = vr$69;
		if( FLD$1 == (struct $8FBSYMBOL*)0ull ) goto label$211;
		{
			FBSTRING* vr$72 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", ", 3ll, 0 );
		}
		label$211:;
		label$210:;
	}
	goto label$206;
	label$207:;
	FBSTRING* vr$74 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" }", 3ll, 0 );
	HWRITELINE( &LN$1 );
	*($12FB_SYMBSTATS*)((uint8*)S$1 + 16ll) = *(int64*)((uint8*)S$1 + 16ll) & -134217729ll;
	fb_StrDelete( &ATTRIB$1 );
	fb_StrDelete( &LN$1 );
	label$193:;
}

static void HEMITCTORDTORARRAYELEMENT( struct $8FBSYMBOL* PROC$1, FBSTRING* S$1 )
{
	FBSTRING TMP$212$1;
	FBSTRING TMP$213$1;
	FBSTRING TMP$215$1;
	FBSTRING TMP$216$1;
	FBSTRING TMP$217$1;
	label$212:;
	int64 vr$0 = fb_StrLen( (void*)S$1, -1ll );
	if( vr$0 <= 0ll ) goto label$215;
	{
		FBSTRING TMP$210$2;
		__builtin_memset( &TMP$210$2, 0, 24ll );
		FBSTRING* vr$4 = fb_StrConcat( &TMP$210$2, (void*)S$1, -1ll, (void*)", ", 3ll );
		FBSTRING* vr$5 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$4, -1ll, 0 );
	}
	label$215:;
	label$214:;
	__builtin_memset( &TMP$212$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$212$1, (void*)S$1, -1ll, (void*)"{ i32, void ()* } { i32 ", 25ll );
	FBSTRING* vr$9 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$8, -1ll, 0 );
	FBSTRING* vr$12 = fb_LongintToStr( *(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 112ll) );
	__builtin_memset( &TMP$213$1, 0, 24ll );
	FBSTRING* vr$15 = fb_StrConcat( &TMP$213$1, (void*)S$1, -1ll, (void*)vr$12, -1ll );
	FBSTRING* vr$16 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$15, -1ll, 0 );
	__builtin_memset( &TMP$215$1, 0, 24ll );
	FBSTRING* vr$19 = fb_StrConcat( &TMP$215$1, (void*)S$1, -1ll, (void*)", void ()* ", 12ll );
	FBSTRING* vr$20 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$19, -1ll, 0 );
	uint8* vr$21 = SYMBGETMANGLEDNAME( PROC$1 );
	__builtin_memset( &TMP$216$1, 0, 24ll );
	FBSTRING* vr$24 = fb_StrConcat( &TMP$216$1, (void*)S$1, -1ll, (void*)vr$21, 0ll );
	FBSTRING* vr$25 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$24, -1ll, 0 );
	__builtin_memset( &TMP$217$1, 0, 24ll );
	FBSTRING* vr$28 = fb_StrConcat( &TMP$217$1, (void*)S$1, -1ll, (void*)" }", 3ll );
	FBSTRING* vr$29 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$28, -1ll, 0 );
	label$213:;
}

static void HADDGLOBALCTORDTOR( struct $8FBSYMBOL* PROC$1 )
{
	label$216:;
	if( (*(int64*)((uint8*)PROC$1 + 16ll) & 16384ll) == 0ll ) goto label$219;
	{
		goto label$217;
	}
	label$219:;
	label$218:;
	if( (*(int64*)((uint8*)PROC$1 + 16ll) & 65536ll) == 0ll ) goto label$221;
	{
		*(int64*)((uint8*)&CTX$ + 160ll) = *(int64*)((uint8*)&CTX$ + 160ll) + 1ll;
		HEMITCTORDTORARRAYELEMENT( PROC$1, (FBSTRING*)((uint8*)&CTX$ + 112ll) );
	}
	goto label$220;
	label$221:;
	if( (*(int64*)((uint8*)PROC$1 + 16ll) & 131072ll) == 0ll ) goto label$222;
	{
		*(int64*)((uint8*)&CTX$ + 168ll) = *(int64*)((uint8*)&CTX$ + 168ll) + 1ll;
		HEMITCTORDTORARRAYELEMENT( PROC$1, (FBSTRING*)((uint8*)&CTX$ + 136ll) );
	}
	label$222:;
	label$220:;
	label$217:;
}

static int64 _EMITBEGIN( void )
{
	FBSTRING TMP$221$1;
	FBSTRING TMP$222$1;
	FBSTRING TMP$223$1;
	FBSTRING TMP$224$1;
	FBSTRING TMP$225$1;
	FBSTRING TMP$226$1;
	FBSTRING TMP$227$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$223:;
	int64 vr$2 = HFILEEXISTS( (uint8*)((uint8*)&ENV$ + 784ll) );
	if( vr$2 == 0ll ) goto label$226;
	{
		FBSTRING* vr$5 = fb_StrAllocTempDescZ( (uint8*)((uint8*)&ENV$ + 784ll) );
		fb_FileKill( vr$5 );
	}
	label$226:;
	label$225:;
	int32 vr$6 = fb_FileFree(  );
	*(int64*)((uint8*)&ENV$ + 776ll) = (int64)vr$6;
	FBSTRING* vr$10 = fb_StrAllocTempDescZ( (uint8*)((uint8*)&ENV$ + 784ll) );
	int32 vr$11 = fb_FileOpen( vr$10, 0u, 3u, 0u, (int32)*(int64*)((uint8*)&ENV$ + 776ll), 0 );
	if( (int64)vr$11 == 0ll ) goto label$228;
	{
		fb$result$1 = 0ll;
		goto label$224;
	}
	label$228:;
	label$227:;
	*(int64*)&CTX$ = 0ll;
	fb_StrAssign( (void*)((uint8*)&CTX$ + 112ll), -1ll, (void*)"", 1ll, 0 );
	fb_StrAssign( (void*)((uint8*)&CTX$ + 136ll), -1ll, (void*)"", 1ll, 0 );
	*(int64*)((uint8*)&CTX$ + 160ll) = 0ll;
	*(int64*)((uint8*)&CTX$ + 168ll) = 0ll;
	fb_StrAssign( (void*)((uint8*)&CTX$ + 240ll), -1ll, (void*)"", 1ll, 0 );
	fb_StrAssign( (void*)((uint8*)&CTX$ + 264ll), -1ll, (void*)"", 1ll, 0 );
	fb_StrAssign( (void*)((uint8*)&CTX$ + 288ll), -1ll, (void*)"", 1ll, 0 );
	*(int64*)((uint8*)&CTX$ + 72ll) = 0ll;
	*(int64*)((uint8*)&CTX$ + 232ll) = 0ll;
	{
		int64 I$2;
		I$2 = 0ll;
		label$232:;
		{
			*(int64*)(((uint8*)BUILTINS$ + (I$2 << 4ll)) + 8ll) = 0ll;
		}
		label$230:;
		I$2 = I$2 + 1ll;
		label$229:;
		if( I$2 <= 17ll ) goto label$232;
		label$231:;
	}
	if( *(int64*)((uint8*)&ENV$ + 288ll) == 0ll ) goto label$234;
	{
		_EMITDBG( 108ll, (struct $8FBSYMBOL*)0ull, 0ll );
	}
	label$234:;
	label$233:;
	__builtin_memset( &TMP$226$1, 0, 24ll );
	FBSTRING* vr$24 = fb_Date(  );
	FBSTRING* vr$25 = fb_Time(  );
	__builtin_memset( &TMP$221$1, 0, 24ll );
	FBSTRING* vr$29 = fb_StrConcat( &TMP$221$1, (void*)"; Compilation of ", 18ll, (void*)((uint8*)&ENV$ + 488ll), 261ll );
	__builtin_memset( &TMP$222$1, 0, 24ll );
	FBSTRING* vr$32 = fb_StrConcat( &TMP$222$1, (void*)vr$29, -1ll, (void*)" started at ", 13ll );
	__builtin_memset( &TMP$223$1, 0, 24ll );
	FBSTRING* vr$35 = fb_StrConcat( &TMP$223$1, (void*)vr$32, -1ll, (void*)vr$25, -1ll );
	__builtin_memset( &TMP$224$1, 0, 24ll );
	FBSTRING* vr$38 = fb_StrConcat( &TMP$224$1, (void*)vr$35, -1ll, (void*)" on ", 5ll );
	__builtin_memset( &TMP$225$1, 0, 24ll );
	FBSTRING* vr$41 = fb_StrConcat( &TMP$225$1, (void*)vr$38, -1ll, (void*)vr$24, -1ll );
	FBSTRING* vr$43 = fb_StrAssign( (void*)&TMP$226$1, -1ll, (void*)vr$41, -1ll, 0 );
	HWRITELINE( &TMP$226$1 );
	fb_StrDelete( &TMP$226$1 );
	__builtin_memset( &TMP$227$1, 0, 24ll );
	FBSTRING* vr$48 = fb_StrAssign( (void*)&TMP$227$1, -1ll, (void*)"", 1ll, 0 );
	HWRITELINE( &TMP$227$1 );
	fb_StrDelete( &TMP$227$1 );
	int64 vr$51 = FBIS64BIT(  );
	if( vr$51 == 0ll ) goto label$236;
	{
		FBSTRING TMP$229$2;
		__builtin_memset( &TMP$229$2, 0, 24ll );
		FBSTRING* vr$55 = fb_StrAssign( (void*)&TMP$229$2, -1ll, (void*)"%FBSTRING = type { i8*, i64, i64 }", 35ll, 0 );
		HWRITELINE( &TMP$229$2 );
		fb_StrDelete( &TMP$229$2 );
	}
	goto label$235;
	label$236:;
	{
		FBSTRING TMP$231$2;
		__builtin_memset( &TMP$231$2, 0, 24ll );
		FBSTRING* vr$60 = fb_StrAssign( (void*)&TMP$231$2, -1ll, (void*)"%FBSTRING = type { i8*, i32, i32 }", 35ll, 0 );
		HWRITELINE( &TMP$231$2 );
		fb_StrDelete( &TMP$231$2 );
	}
	label$235:;
	*(int64*)((uint8*)&CTX$ + 232ll) = 1ll;
	fb$result$1 = -1ll;
	label$224:;
	return fb$result$1;
}

static void _EMITEND( double TOTTIME$1 )
{
	FBSTRING TMP$233$1;
	FBSTRING TMP$234$1;
	FBSTRING TMP$248$1;
	FBSTRING TMP$251$1;
	FBSTRING TMP$252$1;
	FBSTRING TMP$253$1;
	label$237:;
	*(int64*)((uint8*)&CTX$ + 232ll) = 0ll;
	{
		int64 I$2;
		I$2 = 0ll;
		label$242:;
		{
			if( *(int64*)(((uint8*)BUILTINS$ + (I$2 << 4ll)) + 8ll) == 0ll ) goto label$244;
			{
				FBSTRING TMP$232$4;
				__builtin_memset( &TMP$232$4, 0, 24ll );
				FBSTRING* vr$5 = fb_StrAssign( (void*)&TMP$232$4, -1ll, *(void**)((uint8*)BUILTINS$ + (I$2 << 4ll)), 0ll, 0 );
				HWRITELINE( &TMP$232$4 );
				fb_StrDelete( &TMP$232$4 );
			}
			label$244:;
			label$243:;
		}
		label$240:;
		I$2 = I$2 + 1ll;
		label$239:;
		if( I$2 <= 17ll ) goto label$242;
		label$241:;
	}
	__builtin_memset( &TMP$233$1, 0, 24ll );
	FBSTRING* vr$12 = fb_StrAssign( (void*)&TMP$233$1, -1ll, (void*)"", 1ll, 0 );
	HWRITELINE( &TMP$233$1 );
	fb_StrDelete( &TMP$233$1 );
	SYMBFOREACHGLOBAL( 3ll, (tmp$40)&HMAYBEEMITPROCPROTO );
	__builtin_memset( &TMP$234$1, 0, 24ll );
	FBSTRING* vr$17 = fb_StrAssign( (void*)&TMP$234$1, -1ll, (void*)"", 1ll, 0 );
	HWRITELINE( &TMP$234$1 );
	fb_StrDelete( &TMP$234$1 );
	SYMBFOREACHGLOBAL( 1ll, (tmp$40)&HMAYBEEMITGLOBALVAR );
	IRFOREACHDATASTMT( (tmp$40)&HEMITVARIABLE );
	SYMBFOREACHGLOBAL( 3ll, (tmp$40)&HADDGLOBALCTORDTOR );
	if( *(int64*)((uint8*)&CTX$ + 160ll) <= 0ll ) goto label$246;
	{
		FBSTRING TMP$237$2;
		FBSTRING TMP$238$2;
		FBSTRING TMP$239$2;
		FBSTRING TMP$240$2;
		FBSTRING TMP$241$2;
		__builtin_memset( &TMP$241$2, 0, 24ll );
		__builtin_memset( &TMP$238$2, 0, 24ll );
		FBSTRING* vr$25 = fb_StrConcat( &TMP$238$2, (void*)" x { i32, void ()* }] [", 24ll, (void*)((uint8*)&CTX$ + 112ll), -1ll );
		__builtin_memset( &TMP$239$2, 0, 24ll );
		FBSTRING* vr$28 = fb_StrConcat( &TMP$239$2, (void*)vr$25, -1ll, (void*)"]", 2ll );
		FBSTRING* vr$29 = fb_LongintToStr( *(int64*)((uint8*)&CTX$ + 160ll) );
		__builtin_memset( &TMP$237$2, 0, 24ll );
		FBSTRING* vr$32 = fb_StrConcat( &TMP$237$2, (void*)"@llvm.global_ctors = appending global [", 40ll, (void*)vr$29, -1ll );
		__builtin_memset( &TMP$240$2, 0, 24ll );
		FBSTRING* vr$35 = fb_StrConcat( &TMP$240$2, (void*)vr$32, -1ll, (void*)vr$28, -1ll );
		FBSTRING* vr$37 = fb_StrAssign( (void*)&TMP$241$2, -1ll, (void*)vr$35, -1ll, 0 );
		HWRITELINE( &TMP$241$2 );
		fb_StrDelete( &TMP$241$2 );
	}
	label$246:;
	label$245:;
	if( *(int64*)((uint8*)&CTX$ + 168ll) <= 0ll ) goto label$248;
	{
		FBSTRING TMP$243$2;
		FBSTRING TMP$244$2;
		FBSTRING TMP$245$2;
		FBSTRING TMP$246$2;
		FBSTRING TMP$247$2;
		__builtin_memset( &TMP$247$2, 0, 24ll );
		__builtin_memset( &TMP$244$2, 0, 24ll );
		FBSTRING* vr$45 = fb_StrConcat( &TMP$244$2, (void*)" x { i32, void ()* }] [", 24ll, (void*)((uint8*)&CTX$ + 136ll), -1ll );
		__builtin_memset( &TMP$245$2, 0, 24ll );
		FBSTRING* vr$48 = fb_StrConcat( &TMP$245$2, (void*)vr$45, -1ll, (void*)"]", 2ll );
		FBSTRING* vr$49 = fb_LongintToStr( *(int64*)((uint8*)&CTX$ + 168ll) );
		__builtin_memset( &TMP$243$2, 0, 24ll );
		FBSTRING* vr$52 = fb_StrConcat( &TMP$243$2, (void*)"@llvm.global_dtors = appending global [", 40ll, (void*)vr$49, -1ll );
		__builtin_memset( &TMP$246$2, 0, 24ll );
		FBSTRING* vr$55 = fb_StrConcat( &TMP$246$2, (void*)vr$52, -1ll, (void*)vr$48, -1ll );
		FBSTRING* vr$57 = fb_StrAssign( (void*)&TMP$247$2, -1ll, (void*)vr$55, -1ll, 0 );
		HWRITELINE( &TMP$247$2 );
		fb_StrDelete( &TMP$247$2 );
	}
	label$248:;
	label$247:;
	*(int64*)((uint8*)&CTX$ + 232ll) = 2ll;
	__builtin_memset( &TMP$248$1, 0, 24ll );
	FBSTRING* vr$62 = fb_StrAssign( (void*)&TMP$248$1, -1ll, (void*)"", 1ll, 0 );
	HWRITELINE( &TMP$248$1 );
	fb_StrDelete( &TMP$248$1 );
	__builtin_memset( &TMP$253$1, 0, 24ll );
	FBSTRING* vr$66 = fb_DoubleToStr( TOTTIME$1 );
	__builtin_memset( &TMP$251$1, 0, 24ll );
	FBSTRING* vr$69 = fb_StrConcat( &TMP$251$1, (void*)"; Total compilation time: ", 27ll, (void*)vr$66, -1ll );
	__builtin_memset( &TMP$252$1, 0, 24ll );
	FBSTRING* vr$72 = fb_StrConcat( &TMP$252$1, (void*)vr$69, -1ll, (void*)" seconds. ", 11ll );
	FBSTRING* vr$74 = fb_StrAssign( (void*)&TMP$253$1, -1ll, (void*)vr$72, -1ll, 0 );
	HWRITELINE( &TMP$253$1 );
	fb_StrDelete( &TMP$253$1 );
	int32 vr$79 = fb_FilePutStrLarge( (int32)*(int64*)((uint8*)&ENV$ + 776ll), 0ll, (void*)((uint8*)&CTX$ + 240ll), -1ll );
	if( (int64)vr$79 == 0ll ) goto label$250;
	{
	}
	label$250:;
	label$249:;
	int32 vr$84 = fb_FilePutStrLarge( (int32)*(int64*)((uint8*)&ENV$ + 776ll), 0ll, (void*)((uint8*)&CTX$ + 264ll), -1ll );
	if( (int64)vr$84 == 0ll ) goto label$252;
	{
	}
	label$252:;
	label$251:;
	int32 vr$89 = fb_FilePutStrLarge( (int32)*(int64*)((uint8*)&ENV$ + 776ll), 0ll, (void*)((uint8*)&CTX$ + 288ll), -1ll );
	if( (int64)vr$89 == 0ll ) goto label$254;
	{
	}
	label$254:;
	label$253:;
	int32 vr$93 = fb_FileClose( (int32)*(int64*)((uint8*)&ENV$ + 776ll) );
	if( (int64)vr$93 == 0ll ) goto label$256;
	{
	}
	label$256:;
	label$255:;
	*(int64*)((uint8*)&ENV$ + 776ll) = 0ll;
	label$238:;
}

static int64 _GETOPTIONVALUE( $14IR_OPTIONVALUE OPT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$257:;
	{
		if( OPT$1 != 1ll ) goto label$260;
		label$261:;
		{
			fb$result$1 = 0ll;
			goto label$258;
		}
		goto label$259;
		label$260:;
		{
			ERRREPORTEX( 21ll, (uint8*)"_GETOPTIONVALUE", 0ll, 1ll, (uint8*)0ull );
		}
		label$262:;
		label$259:;
	}
	label$258:;
	return fb$result$1;
}

static int64 _SUPPORTSOP( int64 OP$1, int64 DTYPE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$263:;
	{
		uint64 TMP$255$2;
		TMP$255$2 = (uint64)OP$1;
		goto label$266;
		label$267:;
		{
			fb$result$1 = 0ll;
		}
		goto label$265;
		label$268:;
		{
			int64 TMP$256$3;
			if( (DTYPE$1 & 480ll) == 0ll ) goto label$269;
			TMP$256$3 = 22ll;
			goto label$663;
			label$269:;
			TMP$256$3 = DTYPE$1 & 31ll;
			label$663:;
			fb$result$1 = (int64)-(*(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$256$3 * 56ll)) == 1ll);
		}
		goto label$265;
		label$270:;
		{
			fb$result$1 = -1ll;
		}
		goto label$265;
		label$266:;
		static const void* tmp$471[17ll] = {
			&&label$268,
			&&label$267,
			&&label$270,
			&&label$267,
			&&label$270,
			&&label$267,
			&&label$267,
			&&label$267,
			&&label$270,
			&&label$270,
			&&label$267,
			&&label$267,
			&&label$270,
			&&label$270,
			&&label$270,
			&&label$267,
			&&label$267,
		};
		if( TMP$255$2 < 56ll ) goto label$270;
		if( TMP$255$2 > 72ll ) goto label$270;
		goto *tmp$471[TMP$255$2 - 56ll];
		label$265:;
	}
	label$264:;
	return fb$result$1;
}

static void _PROCBEGIN( struct $8FBSYMBOL* PROC$1 )
{
	label$271:;
	*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 32ll) = *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16712ll);
	label$272:;
}

static void _PROCEND( struct $8FBSYMBOL* PROC$1 )
{
	label$273:;
	*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 40ll) = *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16712ll);
	label$274:;
}

static void _PROCALLOCARG( struct $8FBSYMBOL* PROC$1, struct $8FBSYMBOL* SYM$1 )
{
	FBSTRING TMP$258$1;
	FBSTRING TMP$260$1;
	FBSTRING TMP$261$1;
	FBSTRING TMP$262$1;
	label$275:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	int64 PARAMMODE$1;
	struct $8FBSYMBOL* BYDESCREALSUBTYPE$1;
	BYDESCREALSUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 262144ll) == 0ll ) goto label$278;
	{
		PARAMMODE$1 = 2ll;
	}
	goto label$277;
	label$278:;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 65536ll) == 0ll ) goto label$279;
	{
		PARAMMODE$1 = 3ll;
		BYDESCREALSUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 136ll);
	}
	goto label$277;
	label$279:;
	{
		PARAMMODE$1 = 1ll;
	}
	label$277:;
	int64 DTYPE$1;
	DTYPE$1 = *(int64*)((uint8*)SYM$1 + 48ll) & 511ll;
	struct $8FBSYMBOL* SUBTYPE$1;
	SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll);
	_Z21SYMBGETREALPARAMDTYPElP8FBSYMBOLRlRS0_( PARAMMODE$1, BYDESCREALSUBTYPE$1, &DTYPE$1, &SUBTYPE$1 );
	uint8* vr$13 = SYMBGETMANGLEDNAME( SYM$1 );
	__builtin_memset( &TMP$258$1, 0, 24ll );
	FBSTRING* vr$16 = fb_StrConcat( &TMP$258$1, (void*)vr$13, 0ll, (void*)" = alloca ", 11ll );
	FBSTRING* vr$18 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$16, -1ll, 0 );
	FBSTRING* vr$19 = HEMITTYPE( DTYPE$1, SUBTYPE$1 );
	FBSTRING* vr$21 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$19, -1ll, 0 );
	HWRITELINE( &LN$1 );
	fb_StrAssign( (void*)&LN$1, -1ll, (void*)"store ", 7ll, 0 );
	FBSTRING* vr$24 = HEMITTYPE( DTYPE$1, SUBTYPE$1 );
	FBSTRING* vr$26 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$24, -1ll, 0 );
	FBSTRING* vr$28 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" ", 2ll, 0 );
	FBSTRING* vr$29 = HEMITPARAMNAME( SYM$1 );
	FBSTRING* vr$31 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$29, -1ll, 0 );
	FBSTRING* vr$33 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", ", 3ll, 0 );
	uint8* vr$34 = SYMBGETMANGLEDNAME( SYM$1 );
	FBSTRING* vr$42 = HEMITTYPE( ((DTYPE$1 & 31ll) | ((DTYPE$1 & 480ll) + 32ll)) | ((DTYPE$1 & 261632ll) << 1ll), SUBTYPE$1 );
	__builtin_memset( &TMP$260$1, 0, 24ll );
	FBSTRING* vr$45 = fb_StrConcat( &TMP$260$1, (void*)vr$42, -1ll, (void*)" ", 2ll );
	__builtin_memset( &TMP$261$1, 0, 24ll );
	FBSTRING* vr$48 = fb_StrConcat( &TMP$261$1, (void*)vr$45, -1ll, (void*)vr$34, 0ll );
	__builtin_memset( &TMP$262$1, 0, 24ll );
	FBSTRING* vr$52 = fb_StrConcat( &TMP$262$1, (void*)&LN$1, -1ll, (void*)vr$48, -1ll );
	FBSTRING* vr$54 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$52, -1ll, 0 );
	HWRITELINE( &LN$1 );
	fb_StrDelete( &LN$1 );
	label$276:;
}

static void _PROCALLOCLOCAL( struct $8FBSYMBOL* PROC$1, struct $8FBSYMBOL* SYM$1 )
{
	label$280:;
	HEMITVARIABLE( SYM$1 );
	label$281:;
}

static void _SCOPEBEGIN( struct $8FBSYMBOL* S$1 )
{
	label$282:;
	label$283:;
}

static void _SCOPEEND( struct $8FBSYMBOL* S$1 )
{
	label$284:;
	label$285:;
}

static void _PROCALLOCSTATICVARS( struct $8FBSYMBOL* HEAD_SYM$1 )
{
	label$286:;
	label$287:;
}

static void _SETVREGDATATYPE( struct $6IRVREG* V$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	label$288:;
	struct $6IRVREG* TEMP0$1;
	if( ((int64)-(*(int64*)((uint8*)V$1 + 8ll) != DTYPE$1) | (int64)-(*(struct $8FBSYMBOL**)((uint8*)V$1 + 16ll) != SUBTYPE$1)) == 0ll ) goto label$291;
	{
		struct $6IRVREG* vr$6 = IRHLALLOCVREG( DTYPE$1, SUBTYPE$1 );
		TEMP0$1 = vr$6;
		_EMITCONVERT( TEMP0$1, V$1 );
		__builtin_memcpy( V$1, TEMP0$1, 120 );
	}
	label$291:;
	label$290:;
	label$289:;
}

static void HPREPAREADDRESS( struct $6IRVREG* V$1 )
{
	label$292:;
	int64 DTYPE$1;
	int64 OFS$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	struct $6IRVREG* VIDX$1;
	struct $6IRVREG* TEMP0$1;
	DTYPE$1 = *(int64*)((uint8*)V$1 + 8ll);
	SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)V$1 + 16ll);
	OFS$1 = *(int64*)((uint8*)V$1 + 64ll);
	VIDX$1 = *(struct $6IRVREG**)((uint8*)V$1 + 80ll);
	{
		$15IRVREGTYPE_ENUM TMP$263$2;
		TMP$263$2 = *($15IRVREGTYPE_ENUM*)V$1;
		if( TMP$263$2 != 3ll ) goto label$295;
		label$296:;
		{
			__builtin_memcpy( V$1, VIDX$1, 120 );
		}
		goto label$294;
		label$295:;
		{
			*($15IRVREGTYPE_ENUM*)V$1 = 4ll;
			*($11FB_DATATYPE*)((uint8*)V$1 + 8ll) = ((*(int64*)((uint8*)V$1 + 8ll) & 31ll) | ((*(int64*)((uint8*)V$1 + 8ll) & 480ll) + 32ll)) | ((*(int64*)((uint8*)V$1 + 8ll) & 261632ll) << 1ll);
			*(int64*)((uint8*)V$1 + 24ll) = -1ll;
			*(int64*)((uint8*)V$1 + 64ll) = 0ll;
		}
		label$297:;
		label$294:;
	}
	if( ((int64)-(VIDX$1 != (struct $6IRVREG*)0ull) | (int64)-(OFS$1 != 0ll)) == 0ll ) goto label$299;
	{
		struct $6IRVREG* vr$24 = IRHLALLOCVREG( 7ll, (struct $8FBSYMBOL*)0ull );
		TEMP0$1 = vr$24;
		_EMITCONVERT( TEMP0$1, V$1 );
		if( OFS$1 == 0ll ) goto label$301;
		{
			struct $6IRVREG* vr$26 = IRHLALLOCVRIMM( 7ll, (struct $8FBSYMBOL*)0ull, OFS$1 );
			_EMITBOP( 28ll, TEMP0$1, vr$26, (struct $6IRVREG*)0ull, (struct $8FBSYMBOL*)0ull );
		}
		label$301:;
		label$300:;
		_SETVREGDATATYPE( TEMP0$1, ((DTYPE$1 & 31ll) | ((DTYPE$1 & 480ll) + 32ll)) | ((DTYPE$1 & 261632ll) << 1ll), SUBTYPE$1 );
		__builtin_memcpy( V$1, TEMP0$1, 120 );
	}
	label$299:;
	label$298:;
	label$293:;
}

static void HLOADVREG( struct $6IRVREG* V$1 )
{
	label$302:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	struct $6IRVREG* TEMP0$1;
	{
		$15IRVREGTYPE_ENUM TMP$264$2;
		TMP$264$2 = *($15IRVREGTYPE_ENUM*)V$1;
		if( TMP$264$2 == 4ll ) goto label$306;
		label$307:;
		if( TMP$264$2 != 0ll ) goto label$305;
		label$306:;
		{
		}
		goto label$304;
		label$305:;
		if( TMP$264$2 != 5ll ) goto label$308;
		label$309:;
		{
			if( *(int64*)((uint8*)V$1 + 64ll) == 0ll ) goto label$311;
			{
				struct $6IRVREG* vr$7 = IRHLALLOCVREG( 7ll, (struct $8FBSYMBOL*)0ull );
				TEMP0$1 = vr$7;
				_EMITCONVERT( TEMP0$1, V$1 );
				struct $6IRVREG* vr$9 = IRHLALLOCVRIMM( 7ll, (struct $8FBSYMBOL*)0ull, *(int64*)((uint8*)V$1 + 64ll) );
				_EMITBOP( 28ll, TEMP0$1, vr$9, (struct $6IRVREG*)0ull, (struct $8FBSYMBOL*)0ull );
				_SETVREGDATATYPE( TEMP0$1, *(int64*)((uint8*)V$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)V$1 + 16ll) );
				__builtin_memcpy( V$1, TEMP0$1, 120 );
			}
			label$311:;
			label$310:;
		}
		goto label$304;
		label$308:;
		{
			FBSTRING TMP$266$3;
			FBSTRING TMP$267$3;
			FBSTRING TMP$268$3;
			FBSTRING TMP$269$3;
			FBSTRING TMP$270$3;
			HPREPAREADDRESS( V$1 );
			struct $6IRVREG* vr$24 = IRHLALLOCVREG( ((*(int64*)((uint8*)V$1 + 8ll) & 31ll) | ((*(int64*)((uint8*)V$1 + 8ll) & 480ll) + -32ll)) | (((*(int64*)((uint8*)V$1 + 8ll) & 261632ll) >> 1ll) & 261632ll), *(struct $8FBSYMBOL**)((uint8*)V$1 + 16ll) );
			TEMP0$1 = vr$24;
			__builtin_memset( &TMP$270$3, 0, 24ll );
			FBSTRING* vr$26 = HVREGTOSTR( V$1 );
			FBSTRING* vr$29 = HEMITTYPE( *(int64*)((uint8*)V$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)V$1 + 16ll) );
			FBSTRING* vr$30 = HVREGTOSTR( TEMP0$1 );
			__builtin_memset( &TMP$266$3, 0, 24ll );
			FBSTRING* vr$33 = fb_StrConcat( &TMP$266$3, (void*)vr$30, -1ll, (void*)" = load ", 9ll );
			__builtin_memset( &TMP$267$3, 0, 24ll );
			FBSTRING* vr$36 = fb_StrConcat( &TMP$267$3, (void*)vr$33, -1ll, (void*)vr$29, -1ll );
			__builtin_memset( &TMP$268$3, 0, 24ll );
			FBSTRING* vr$39 = fb_StrConcat( &TMP$268$3, (void*)vr$36, -1ll, (void*)" ", 2ll );
			__builtin_memset( &TMP$269$3, 0, 24ll );
			FBSTRING* vr$42 = fb_StrConcat( &TMP$269$3, (void*)vr$39, -1ll, (void*)vr$26, -1ll );
			FBSTRING* vr$44 = fb_StrAssign( (void*)&TMP$270$3, -1ll, (void*)vr$42, -1ll, 0 );
			HWRITELINE( &TMP$270$3 );
			fb_StrDelete( &TMP$270$3 );
			__builtin_memcpy( V$1, TEMP0$1, 120 );
		}
		label$312:;
		label$304:;
	}
	fb_StrDelete( &LN$1 );
	label$303:;
}

static FBSTRING* HEMITTYPE( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$313:;
	FBSTRING S$1;
	__builtin_memset( &S$1, 0, 24ll );
	int64 PTRCOUNT$1;
	PTRCOUNT$1 = (DTYPE$1 & 480ll) >> 5ll;
	DTYPE$1 = DTYPE$1 & 31ll;
	{
		uint64 TMP$271$2;
		TMP$271$2 = (uint64)DTYPE$1;
		goto label$316;
		label$317:;
		{
			if( PTRCOUNT$1 != 0ll ) goto label$319;
			{
				fb_StrAssign( (void*)&S$1, -1ll, (void*)"void", 5ll, 0 );
			}
			goto label$318;
			label$319:;
			{
				fb_StrAssign( (void*)&S$1, -1ll, *(void**)DTYPENAME$, 0ll, 0 );
			}
			label$318:;
		}
		goto label$315;
		label$320:;
		{
			if( SUBTYPE$1 == (struct $8FBSYMBOL*)0ull ) goto label$322;
			{
				HEMITUDT( SUBTYPE$1 );
				FBSTRING* vr$9 = HGETUDTNAME( SUBTYPE$1 );
				FBSTRING* vr$11 = fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$9, -1ll, 0 );
			}
			goto label$321;
			label$322:;
			if( DTYPE$1 != 9ll ) goto label$323;
			{
				int64 TMP$273$4;
				if( (DTYPE$1 & 480ll) == 0ll ) goto label$324;
				TMP$273$4 = 22ll;
				goto label$664;
				label$324:;
				TMP$273$4 = DTYPE$1 & 31ll;
				label$664:;
				fb_StrAssign( (void*)&S$1, -1ll, *(void**)((uint8*)DTYPENAME$ + (*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$273$4 * 56ll)) + 32ll) << 3ll)), 0ll, 0 );
			}
			goto label$321;
			label$323:;
			{
				fb_StrAssign( (void*)&S$1, -1ll, *(void**)DTYPENAME$, 0ll, 0 );
			}
			label$321:;
		}
		goto label$315;
		label$325:;
		{
			PTRCOUNT$1 = PTRCOUNT$1 + -1ll;
			HEMITUDT( SUBTYPE$1 );
			uint8* vr$21 = SYMBGETMANGLEDNAME( SUBTYPE$1 );
			fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$21, 0ll, 0 );
		}
		goto label$315;
		label$326:;
		{
			int64 TMP$274$3;
			if( (DTYPE$1 & 480ll) == 0ll ) goto label$327;
			TMP$274$3 = 22ll;
			goto label$665;
			label$327:;
			TMP$274$3 = DTYPE$1 & 31ll;
			label$665:;
			fb_StrAssign( (void*)&S$1, -1ll, *(void**)((uint8*)DTYPENAME$ + (*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$274$3 * 56ll)) + 32ll) << 3ll)), 0ll, 0 );
		}
		goto label$315;
		label$328:;
		{
			fb_StrAssign( (void*)&S$1, -1ll, *(void**)((uint8*)DTYPENAME$ + 16ll), 0ll, 0 );
		}
		goto label$315;
		label$329:;
		{
			fb_StrAssign( (void*)&S$1, -1ll, *(void**)((uint8*)DTYPENAME$ + (DTYPE$1 << 3ll)), 0ll, 0 );
		}
		goto label$315;
		label$316:;
		static const void* tmp$472[21ll] = {
			&&label$317,
			&&label$329,
			&&label$329,
			&&label$326,
			&&label$329,
			&&label$329,
			&&label$326,
			&&label$329,
			&&label$329,
			&&label$320,
			&&label$329,
			&&label$329,
			&&label$329,
			&&label$329,
			&&label$329,
			&&label$329,
			&&label$329,
			&&label$328,
			&&label$320,
			&&label$329,
			&&label$325,
		};
		if( TMP$271$2 > 20ll ) goto label$329;
		goto *tmp$472[TMP$271$2 - 0ll];
		label$315:;
	}
	if( PTRCOUNT$1 <= 0ll ) goto label$331;
	{
		FBSTRING* vr$33 = fb_StrAllocTempDescZEx( (uint8*)"*", 1ll );
		FBSTRING* vr$34 = fb_StrFill2( PTRCOUNT$1, vr$33 );
		FBSTRING* vr$36 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)vr$34, -1ll, 0 );
	}
	label$331:;
	label$330:;
	FBSTRING* vr$39 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&S$1, -1ll, 0 );
	fb_StrDelete( &S$1 );
	label$314:;
	FBSTRING* vr$42 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$42;
}

static FBSTRING* HEMITINT( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, int64 VALUE$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$332:;
	FBSTRING S$1;
	__builtin_memset( &S$1, 0, 24ll );
	{
		if( DTYPE$1 == 7ll ) goto label$336;
		label$337:;
		if( DTYPE$1 == 8ll ) goto label$336;
		label$338:;
		if( DTYPE$1 == 10ll ) goto label$336;
		label$339:;
		if( DTYPE$1 == 11ll ) goto label$336;
		label$340:;
		if( DTYPE$1 != 9ll ) goto label$335;
		label$336:;
		{
			FBSTRING* vr$7 = fb_LongintToStr( VALUE$1 );
			FBSTRING* vr$9 = fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$7, -1ll, 0 );
		}
		goto label$334;
		label$335:;
		{
			if( (DTYPE$1 & 480ll) == 0ll ) goto label$343;
			{
				fb_StrAssign( (void*)&S$1, -1ll, (void*)"inttoptr ", 10ll, 0 );
			}
			goto label$342;
			label$343:;
			{
				fb_StrAssign( (void*)&S$1, -1ll, (void*)"trunc ", 7ll, 0 );
			}
			label$342:;
			FBSTRING* vr$15 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"(", 2ll, 0 );
			FBSTRING* vr$16 = HEMITTYPE( 7ll, (struct $8FBSYMBOL*)0ull );
			FBSTRING* vr$18 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)vr$16, -1ll, 0 );
			FBSTRING* vr$20 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)" ", 2ll, 0 );
			FBSTRING* vr$21 = fb_LongintToStr( VALUE$1 );
			FBSTRING* vr$23 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)vr$21, -1ll, 0 );
			FBSTRING* vr$25 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)" to ", 5ll, 0 );
			FBSTRING* vr$26 = HEMITTYPE( DTYPE$1, SUBTYPE$1 );
			FBSTRING* vr$28 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)vr$26, -1ll, 0 );
			FBSTRING* vr$30 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)")", 2ll, 0 );
		}
		label$341:;
		label$334:;
	}
	FBSTRING* vr$33 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&S$1, -1ll, 0 );
	fb_StrDelete( &S$1 );
	label$333:;
	FBSTRING* vr$36 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$36;
}

static FBSTRING* HEMITLONG( int64 VALUE$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$344:;
	FBSTRING* vr$1 = fb_LongintToStr( VALUE$1 );
	FBSTRING* vr$3 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$1, -1ll, 0 );
	label$345:;
	FBSTRING* vr$5 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$5;
}

static FBSTRING* HEMITFLOAT( double VALUE$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$346:;
	FBSTRING* vr$2 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"0x", 3ll, 0 );
	FBSTRING* vr$3 = fb_HEXEx_l( *(uint64*)&VALUE$1, 16 );
	FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&fb$result$1, -1ll, (void*)vr$3, -1ll, 0 );
	label$347:;
	FBSTRING* vr$7 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$7;
}

static FBSTRING* HVREGTOSTR( struct $6IRVREG* V$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$348:;
	FBSTRING S$1;
	__builtin_memset( &S$1, 0, 24ll );
	struct $8FBSYMBOL* SYM$1;
	{
		uint64 TMP$281$2;
		TMP$281$2 = *(uint64*)V$1;
		goto label$351;
		label$352:;
		{
			uint8* vr$4 = SYMBGETMANGLEDNAME( *(struct $8FBSYMBOL**)((uint8*)V$1 + 56ll) );
			fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$4, 0ll, 0 );
		}
		goto label$350;
		label$353:;
		{
			SYM$1 = *(struct $8FBSYMBOL**)((uint8*)V$1 + 56ll);
			if( (*(int64*)((uint8*)SYM$1 + 8ll) & 524288ll) == 0ll ) goto label$355;
			{
				FBSTRING TMP$284$4;
				FBSTRING TMP$285$4;
				fb_StrAssign( (void*)&S$1, -1ll, (void*)"bitcast (", 10ll, 0 );
				FBSTRING* vr$11 = HEMITSYMTYPE( SYM$1 );
				FBSTRING* vr$13 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)vr$11, -1ll, 0 );
				FBSTRING* vr$15 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"* ", 3ll, 0 );
				uint8* vr$16 = SYMBGETMANGLEDNAME( SYM$1 );
				__builtin_memset( &TMP$284$4, 0, 24ll );
				FBSTRING* vr$20 = fb_StrConcat( &TMP$284$4, (void*)&S$1, -1ll, (void*)vr$16, 0ll );
				FBSTRING* vr$22 = fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$20, -1ll, 0 );
				FBSTRING* vr$24 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)" to ", 5ll, 0 );
				FBSTRING* vr$38 = HEMITTYPE( (((*(int64*)((uint8*)SYM$1 + 48ll) & 511ll) & 31ll) | (((*(int64*)((uint8*)SYM$1 + 48ll) & 511ll) & 480ll) + 32ll)) | (((*(int64*)((uint8*)SYM$1 + 48ll) & 511ll) & 261632ll) << 1ll), (struct $8FBSYMBOL*)0ull );
				__builtin_memset( &TMP$285$4, 0, 24ll );
				FBSTRING* vr$42 = fb_StrConcat( &TMP$285$4, (void*)&S$1, -1ll, (void*)vr$38, -1ll );
				FBSTRING* vr$44 = fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$42, -1ll, 0 );
				FBSTRING* vr$46 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)")", 2ll, 0 );
			}
			goto label$354;
			label$355:;
			{
				uint8* vr$47 = SYMBGETMANGLEDNAME( SYM$1 );
				fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$47, 0ll, 0 );
			}
			label$354:;
		}
		goto label$350;
		label$356:;
		{
			int64 TMP$286$3;
			int64 TMP$287$3;
			if( (*(int64*)((uint8*)V$1 + 8ll) & 480ll) == 0ll ) goto label$357;
			TMP$286$3 = 22ll;
			goto label$666;
			label$357:;
			TMP$286$3 = *(int64*)((uint8*)V$1 + 8ll) & 31ll;
			label$666:;
			if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$286$3 * 56ll)) != 1ll ) goto label$359;
			{
				FBSTRING* vr$57 = HEMITFLOAT( *(double*)((uint8*)V$1 + 48ll) );
				FBSTRING* vr$59 = fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$57, -1ll, 0 );
			}
			goto label$358;
			label$359:;
			if( (*(int64*)((uint8*)V$1 + 8ll) & 480ll) == 0ll ) goto label$361;
			TMP$287$3 = 22ll;
			goto label$667;
			label$361:;
			TMP$287$3 = *(int64*)((uint8*)V$1 + 8ll) & 31ll;
			label$667:;
			if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$287$3 * 56ll)) + 8ll) != 8ll ) goto label$360;
			{
				FBSTRING* vr$68 = HEMITLONG( *(int64*)((uint8*)V$1 + 48ll) );
				FBSTRING* vr$70 = fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$68, -1ll, 0 );
			}
			goto label$358;
			label$360:;
			{
				FBSTRING* vr$74 = HEMITINT( *(int64*)((uint8*)V$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)V$1 + 16ll), *(int64*)((uint8*)V$1 + 48ll) );
				FBSTRING* vr$76 = fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$74, -1ll, 0 );
			}
			label$358:;
		}
		goto label$350;
		label$362:;
		{
			if( *(struct $8FBSYMBOL**)((uint8*)V$1 + 56ll) == (struct $8FBSYMBOL*)0ull ) goto label$364;
			{
				uint8* vr$80 = SYMBGETMANGLEDNAME( *(struct $8FBSYMBOL**)((uint8*)V$1 + 56ll) );
				fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$80, 0ll, 0 );
			}
			goto label$363;
			label$364:;
			{
				FBSTRING TMP$289$4;
				FBSTRING* vr$83 = fb_LongintToStr( *(int64*)((uint8*)V$1 + 24ll) );
				__builtin_memset( &TMP$289$4, 0, 24ll );
				FBSTRING* vr$86 = fb_StrConcat( &TMP$289$4, (void*)"%vr", 4ll, (void*)vr$83, -1ll );
				FBSTRING* vr$88 = fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$86, -1ll, 0 );
			}
			label$363:;
		}
		goto label$350;
		label$351:;
		static const void* tmp$473[6ll] = {
			&&label$356,
			&&label$352,
			&&label$352,
			&&label$352,
			&&label$362,
			&&label$353,
		};
		if( TMP$281$2 > 5ll ) goto label$350;
		goto *tmp$473[TMP$281$2 - 0ll];
		label$350:;
	}
	FBSTRING* vr$91 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&S$1, -1ll, 0 );
	fb_StrDelete( &S$1 );
	label$349:;
	FBSTRING* vr$94 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$94;
}

static void _EMITLABEL( struct $8FBSYMBOL* LABEL$1 )
{
	FBSTRING TMP$291$1;
	FBSTRING TMP$292$1;
	label$365:;
	__builtin_memset( &TMP$292$1, 0, 24ll );
	uint8* vr$1 = SYMBGETMANGLEDNAME( LABEL$1 );
	__builtin_memset( &TMP$291$1, 0, 24ll );
	FBSTRING* vr$4 = fb_StrConcat( &TMP$291$1, (void*)"br label %", 11ll, (void*)vr$1, 0ll );
	FBSTRING* vr$6 = fb_StrAssign( (void*)&TMP$292$1, -1ll, (void*)vr$4, -1ll, 0 );
	HWRITELINE( &TMP$292$1 );
	fb_StrDelete( &TMP$292$1 );
	uint8* vr$9 = SYMBGETMANGLEDNAME( LABEL$1 );
	HWRITELABEL( vr$9 );
	label$366:;
}

static uint8* HGETBOPCODE( int64 OP$1, int64 DTYPE$1 )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$367:;
	{
		uint64 TMP$293$2;
		TMP$293$2 = (uint64)OP$1;
		goto label$370;
		label$371:;
		{
			int64 TMP$294$3;
			if( (DTYPE$1 & 480ll) == 0ll ) goto label$372;
			TMP$294$3 = 22ll;
			goto label$668;
			label$372:;
			TMP$294$3 = DTYPE$1 & 31ll;
			label$668:;
			if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$294$3 * 56ll)) != 1ll ) goto label$374;
			{
				fb$result$1 = (uint8*)"fadd";
			}
			goto label$373;
			label$374:;
			{
				fb$result$1 = (uint8*)"add";
			}
			label$373:;
		}
		goto label$369;
		label$375:;
		{
			int64 TMP$297$3;
			if( (DTYPE$1 & 480ll) == 0ll ) goto label$376;
			TMP$297$3 = 22ll;
			goto label$669;
			label$376:;
			TMP$297$3 = DTYPE$1 & 31ll;
			label$669:;
			if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$297$3 * 56ll)) != 1ll ) goto label$378;
			{
				fb$result$1 = (uint8*)"fsub";
			}
			goto label$377;
			label$378:;
			{
				fb$result$1 = (uint8*)"sub";
			}
			label$377:;
		}
		goto label$369;
		label$379:;
		{
			int64 TMP$300$3;
			if( (DTYPE$1 & 480ll) == 0ll ) goto label$380;
			TMP$300$3 = 22ll;
			goto label$670;
			label$380:;
			TMP$300$3 = DTYPE$1 & 31ll;
			label$670:;
			if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$300$3 * 56ll)) != 1ll ) goto label$382;
			{
				fb$result$1 = (uint8*)"fmul";
			}
			goto label$381;
			label$382:;
			{
				fb$result$1 = (uint8*)"mul";
			}
			label$381:;
		}
		goto label$369;
		label$383:;
		{
			fb$result$1 = (uint8*)"fdiv";
		}
		goto label$369;
		label$384:;
		{
			fb$result$1 = (uint8*)"sdiv";
		}
		goto label$369;
		label$385:;
		{
			int64 TMP$305$3;
			if( (DTYPE$1 & 480ll) == 0ll ) goto label$386;
			TMP$305$3 = 22ll;
			goto label$671;
			label$386:;
			TMP$305$3 = DTYPE$1 & 31ll;
			label$671:;
			if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$305$3 * 56ll)) != 1ll ) goto label$388;
			{
				fb$result$1 = (uint8*)"frem";
			}
			goto label$387;
			label$388:;
			{
				fb$result$1 = (uint8*)"srem";
			}
			label$387:;
		}
		goto label$369;
		label$389:;
		{
			fb$result$1 = (uint8*)"shl";
		}
		goto label$369;
		label$390:;
		{
			fb$result$1 = (uint8*)"ashr";
		}
		goto label$369;
		label$391:;
		{
			fb$result$1 = (uint8*)"and";
		}
		goto label$369;
		label$392:;
		{
			fb$result$1 = (uint8*)"or";
		}
		goto label$369;
		label$393:;
		{
			fb$result$1 = (uint8*)"xor";
		}
		goto label$369;
		label$394:;
		{
			fb$result$1 = (uint8*)"icmp eq";
		}
		goto label$369;
		label$395:;
		{
			fb$result$1 = (uint8*)"icmp ne";
		}
		goto label$369;
		label$396:;
		{
			fb$result$1 = (uint8*)"icmp sgt";
		}
		goto label$369;
		label$397:;
		{
			fb$result$1 = (uint8*)"icmp slt";
		}
		goto label$369;
		label$398:;
		{
			fb$result$1 = (uint8*)"icmp sge";
		}
		goto label$369;
		label$399:;
		{
			fb$result$1 = (uint8*)"icmp sle";
		}
		goto label$369;
		label$400:;
		{
			fb$result$1 = (uint8*)"eqv";
		}
		goto label$369;
		label$401:;
		{
			fb$result$1 = (uint8*)"imp";
		}
		goto label$369;
		label$370:;
		static const void* tmp$474[23ll] = {
			&&label$371,
			&&label$375,
			&&label$379,
			&&label$383,
			&&label$384,
			&&label$385,
			&&label$391,
			&&label$392,
			&&label$369,
			&&label$369,
			&&label$393,
			&&label$400,
			&&label$401,
			&&label$389,
			&&label$390,
			&&label$369,
			&&label$369,
			&&label$394,
			&&label$396,
			&&label$397,
			&&label$395,
			&&label$398,
			&&label$399,
		};
		if( TMP$293$2 < 28ll ) goto label$369;
		if( TMP$293$2 > 50ll ) goto label$369;
		goto *tmp$474[TMP$293$2 - 28ll];
		label$369:;
	}
	label$368:;
	return fb$result$1;
}

static void _EMITBOP( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* V2$1, struct $6IRVREG* VR$1, struct $8FBSYMBOL* EX$1 )
{
	FBSTRING TMP$327$1;
	FBSTRING TMP$328$1;
	label$402:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	FBSTRING FALSELABEL$1;
	__builtin_memset( &FALSELABEL$1, 0, 24ll );
	struct $6IRVREG* VRESULT$1;
	struct $6IRVREG* VTEMP$1;
	int64 IS_COMPARISON$1;
	{
		if( OP$1 == 45ll ) goto label$406;
		label$407:;
		if( OP$1 == 48ll ) goto label$406;
		label$408:;
		if( OP$1 == 46ll ) goto label$406;
		label$409:;
		if( OP$1 == 47ll ) goto label$406;
		label$410:;
		if( OP$1 == 49ll ) goto label$406;
		label$411:;
		if( OP$1 != 50ll ) goto label$405;
		label$406:;
		{
			IS_COMPARISON$1 = -1ll;
		}
		goto label$404;
		label$405:;
		{
			IS_COMPARISON$1 = 0ll;
		}
		label$412:;
		label$404:;
	}
	if( (IS_COMPARISON$1 & (int64)-(VR$1 == (struct $6IRVREG*)0ull)) == 0ll ) goto label$414;
	{
		FBSTRING TMP$321$2;
		FBSTRING TMP$322$2;
		FBSTRING TMP$325$2;
		FBSTRING TMP$326$2;
		HLOADVREG( V1$1 );
		HLOADVREG( V2$1 );
		_SETVREGDATATYPE( V2$1, *(int64*)((uint8*)V1$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)V1$1 + 16ll) );
		struct $6IRVREG* vr$13 = IRHLALLOCVREG( 7ll, (struct $8FBSYMBOL*)0ull );
		VRESULT$1 = vr$13;
		FBSTRING* vr$14 = HVREGTOSTR( VRESULT$1 );
		FBSTRING* vr$16 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$14, -1ll, 0 );
		FBSTRING* vr$18 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" = ", 4ll, 0 );
		uint8* vr$20 = HGETBOPCODE( OP$1, *(int64*)((uint8*)V1$1 + 8ll) );
		__builtin_memset( &TMP$321$2, 0, 24ll );
		FBSTRING* vr$24 = fb_StrConcat( &TMP$321$2, (void*)&LN$1, -1ll, (void*)vr$20, 0ll );
		FBSTRING* vr$26 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$24, -1ll, 0 );
		FBSTRING* vr$28 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" ", 2ll, 0 );
		FBSTRING* vr$31 = HEMITTYPE( *(int64*)((uint8*)V1$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)V1$1 + 16ll) );
		__builtin_memset( &TMP$322$2, 0, 24ll );
		FBSTRING* vr$35 = fb_StrConcat( &TMP$322$2, (void*)&LN$1, -1ll, (void*)vr$31, -1ll );
		FBSTRING* vr$37 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$35, -1ll, 0 );
		FBSTRING* vr$39 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" ", 2ll, 0 );
		FBSTRING* vr$40 = HVREGTOSTR( V1$1 );
		FBSTRING* vr$42 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$40, -1ll, 0 );
		FBSTRING* vr$44 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", ", 3ll, 0 );
		FBSTRING* vr$45 = HVREGTOSTR( V2$1 );
		FBSTRING* vr$47 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$45, -1ll, 0 );
		HWRITELINE( &LN$1 );
		uint8* vr$49 = SYMBUNIQUELABEL(  );
		fb_StrAssign( (void*)&FALSELABEL$1, -1ll, (void*)vr$49, 0ll, 0 );
		FBSTRING* vr$52 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)"br i1 ", 7ll, 0 );
		FBSTRING* vr$53 = HVREGTOSTR( VRESULT$1 );
		FBSTRING* vr$55 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$53, -1ll, 0 );
		FBSTRING* vr$57 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", ", 3ll, 0 );
		uint8* vr$58 = SYMBGETMANGLEDNAME( EX$1 );
		__builtin_memset( &TMP$325$2, 0, 24ll );
		FBSTRING* vr$61 = fb_StrConcat( &TMP$325$2, (void*)"label %", 8ll, (void*)vr$58, 0ll );
		__builtin_memset( &TMP$326$2, 0, 24ll );
		FBSTRING* vr$65 = fb_StrConcat( &TMP$326$2, (void*)&LN$1, -1ll, (void*)vr$61, -1ll );
		FBSTRING* vr$67 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$65, -1ll, 0 );
		FBSTRING* vr$69 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", ", 3ll, 0 );
		FBSTRING* vr$71 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"label %", 8ll, 0 );
		FBSTRING* vr$74 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)&FALSELABEL$1, -1ll, 0 );
		HWRITELINE( &LN$1 );
		HWRITELABEL( *(uint8**)&FALSELABEL$1 );
		fb_StrDelete( &FALSELABEL$1 );
		fb_StrDelete( &LN$1 );
		goto label$403;
	}
	label$414:;
	label$413:;
	if( VR$1 == (struct $6IRVREG*)0ull ) goto label$416;
	{
		VRESULT$1 = VR$1;
	}
	goto label$415;
	label$416:;
	{
		struct $6IRVREG* vr$81 = IRHLALLOCVREG( *(int64*)((uint8*)V1$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)V1$1 + 16ll) );
		VRESULT$1 = vr$81;
	}
	label$415:;
	HLOADVREG( V1$1 );
	HLOADVREG( V2$1 );
	_SETVREGDATATYPE( V1$1, *(int64*)((uint8*)VRESULT$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VRESULT$1 + 16ll) );
	_SETVREGDATATYPE( V2$1, *(int64*)((uint8*)VRESULT$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VRESULT$1 + 16ll) );
	FBSTRING* vr$86 = HVREGTOSTR( VRESULT$1 );
	FBSTRING* vr$88 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$86, -1ll, 0 );
	FBSTRING* vr$90 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" = ", 4ll, 0 );
	uint8* vr$92 = HGETBOPCODE( OP$1, *(int64*)((uint8*)VRESULT$1 + 8ll) );
	__builtin_memset( &TMP$327$1, 0, 24ll );
	FBSTRING* vr$96 = fb_StrConcat( &TMP$327$1, (void*)&LN$1, -1ll, (void*)vr$92, 0ll );
	FBSTRING* vr$98 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$96, -1ll, 0 );
	FBSTRING* vr$100 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" ", 2ll, 0 );
	FBSTRING* vr$103 = HEMITTYPE( *(int64*)((uint8*)VRESULT$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VRESULT$1 + 16ll) );
	__builtin_memset( &TMP$328$1, 0, 24ll );
	FBSTRING* vr$107 = fb_StrConcat( &TMP$328$1, (void*)&LN$1, -1ll, (void*)vr$103, -1ll );
	FBSTRING* vr$109 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$107, -1ll, 0 );
	FBSTRING* vr$111 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" ", 2ll, 0 );
	FBSTRING* vr$112 = HVREGTOSTR( V1$1 );
	FBSTRING* vr$114 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$112, -1ll, 0 );
	FBSTRING* vr$116 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$117 = HVREGTOSTR( V2$1 );
	FBSTRING* vr$119 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$117, -1ll, 0 );
	HWRITELINE( &LN$1 );
	if( IS_COMPARISON$1 == 0ll ) goto label$418;
	{
		FBSTRING TMP$331$2;
		struct $6IRVREG* vr$124 = IRHLALLOCVREG( *(int64*)((uint8*)VRESULT$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VRESULT$1 + 16ll) );
		VTEMP$1 = vr$124;
		FBSTRING* vr$125 = HVREGTOSTR( VTEMP$1 );
		FBSTRING* vr$127 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$125, -1ll, 0 );
		FBSTRING* vr$129 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" = sext ", 9ll, 0 );
		FBSTRING* vr$131 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"i1 ", 4ll, 0 );
		FBSTRING* vr$132 = HVREGTOSTR( VRESULT$1 );
		FBSTRING* vr$134 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$132, -1ll, 0 );
		FBSTRING* vr$136 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" to ", 5ll, 0 );
		FBSTRING* vr$139 = HEMITTYPE( *(int64*)((uint8*)VRESULT$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VRESULT$1 + 16ll) );
		__builtin_memset( &TMP$331$2, 0, 24ll );
		FBSTRING* vr$143 = fb_StrConcat( &TMP$331$2, (void*)&LN$1, -1ll, (void*)vr$139, -1ll );
		FBSTRING* vr$145 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$143, -1ll, 0 );
		HWRITELINE( &LN$1 );
		__builtin_memcpy( VRESULT$1, VTEMP$1, 120 );
	}
	label$418:;
	label$417:;
	if( VR$1 != (struct $6IRVREG*)0ull ) goto label$420;
	{
		if( *(int64*)V1$1 != 4ll ) goto label$422;
		{
			__builtin_memcpy( V1$1, VRESULT$1, 120 );
		}
		goto label$421;
		label$422:;
		{
			_EMITSTORE( V1$1, VRESULT$1 );
		}
		label$421:;
	}
	label$420:;
	label$419:;
	fb_StrDelete( &FALSELABEL$1 );
	fb_StrDelete( &LN$1 );
	label$403:;
}

static void HBUILTINUOP( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* VR$1 )
{
	label$423:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	HLOADVREG( V1$1 );
	FBSTRING* vr$1 = HVREGTOSTR( VR$1 );
	FBSTRING* vr$3 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$1, -1ll, 0 );
	FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" = call ", 9ll, 0 );
	if( *(int64*)((uint8*)V1$1 + 8ll) != 14ll ) goto label$426;
	{
		FBSTRING* vr$9 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"float @llvm.", 13ll, 0 );
		{
			if( OP$1 != 56ll ) goto label$428;
			label$429:;
			{
				*(int64*)((uint8*)BUILTINS$ + 232ll) = -1ll;
				FBSTRING* vr$12 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"fabs", 5ll, 0 );
			}
			goto label$427;
			label$428:;
			if( OP$1 != 58ll ) goto label$430;
			label$431:;
			{
				*(int64*)((uint8*)BUILTINS$ + 40ll) = -1ll;
				FBSTRING* vr$15 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"sin", 4ll, 0 );
			}
			goto label$427;
			label$430:;
			if( OP$1 != 60ll ) goto label$432;
			label$433:;
			{
				*(int64*)((uint8*)BUILTINS$ + 72ll) = -1ll;
				FBSTRING* vr$18 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"cos", 4ll, 0 );
			}
			goto label$427;
			label$432:;
			if( OP$1 != 69ll ) goto label$434;
			label$435:;
			{
				*(int64*)((uint8*)BUILTINS$ + 104ll) = -1ll;
				FBSTRING* vr$21 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"exp", 4ll, 0 );
			}
			goto label$427;
			label$434:;
			if( OP$1 != 68ll ) goto label$436;
			label$437:;
			{
				*(int64*)((uint8*)BUILTINS$ + 136ll) = -1ll;
				FBSTRING* vr$24 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"log", 4ll, 0 );
			}
			goto label$427;
			label$436:;
			if( OP$1 != 65ll ) goto label$438;
			label$439:;
			{
				*(int64*)((uint8*)BUILTINS$ + 168ll) = -1ll;
				FBSTRING* vr$27 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"sqrt", 5ll, 0 );
			}
			goto label$427;
			label$438:;
			if( OP$1 != 70ll ) goto label$440;
			label$441:;
			{
				*(int64*)((uint8*)BUILTINS$ + 200ll) = -1ll;
				FBSTRING* vr$30 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"floor", 6ll, 0 );
			}
			goto label$427;
			label$440:;
			{
			}
			label$442:;
			label$427:;
		}
		FBSTRING* vr$32 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)".f32(float ", 12ll, 0 );
	}
	goto label$425;
	label$426:;
	{
		FBSTRING* vr$34 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"double @llvm.", 14ll, 0 );
		{
			if( OP$1 != 56ll ) goto label$444;
			label$445:;
			{
				*(int64*)((uint8*)BUILTINS$ + 248ll) = -1ll;
				FBSTRING* vr$37 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"fabs", 5ll, 0 );
			}
			goto label$443;
			label$444:;
			if( OP$1 != 58ll ) goto label$446;
			label$447:;
			{
				*(int64*)((uint8*)BUILTINS$ + 56ll) = -1ll;
				FBSTRING* vr$40 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"sin", 4ll, 0 );
			}
			goto label$443;
			label$446:;
			if( OP$1 != 60ll ) goto label$448;
			label$449:;
			{
				*(int64*)((uint8*)BUILTINS$ + 88ll) = -1ll;
				FBSTRING* vr$43 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"cos", 4ll, 0 );
			}
			goto label$443;
			label$448:;
			if( OP$1 != 69ll ) goto label$450;
			label$451:;
			{
				*(int64*)((uint8*)BUILTINS$ + 120ll) = -1ll;
				FBSTRING* vr$46 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"exp", 4ll, 0 );
			}
			goto label$443;
			label$450:;
			if( OP$1 != 68ll ) goto label$452;
			label$453:;
			{
				*(int64*)((uint8*)BUILTINS$ + 152ll) = -1ll;
				FBSTRING* vr$49 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"log", 4ll, 0 );
			}
			goto label$443;
			label$452:;
			if( OP$1 != 65ll ) goto label$454;
			label$455:;
			{
				*(int64*)((uint8*)BUILTINS$ + 184ll) = -1ll;
				FBSTRING* vr$52 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"sqrt", 5ll, 0 );
			}
			goto label$443;
			label$454:;
			if( OP$1 != 70ll ) goto label$456;
			label$457:;
			{
				*(int64*)((uint8*)BUILTINS$ + 216ll) = -1ll;
				FBSTRING* vr$55 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"floor", 6ll, 0 );
			}
			goto label$443;
			label$456:;
			{
			}
			label$458:;
			label$443:;
		}
		FBSTRING* vr$57 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)".f64(double ", 13ll, 0 );
	}
	label$425:;
	FBSTRING* vr$58 = HVREGTOSTR( V1$1 );
	FBSTRING* vr$60 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$58, -1ll, 0 );
	FBSTRING* vr$62 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)")", 2ll, 0 );
	HWRITELINE( &LN$1 );
	fb_StrDelete( &LN$1 );
	label$424:;
}

static void _EMITUOP( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* VR$1 )
{
	label$459:;
	struct $6IRVREG* V2$1;
	struct $6IRVREG* VRESULT$1;
	{
		if( OP$1 != 54ll ) goto label$462;
		label$463:;
		{
			if( VR$1 == (struct $6IRVREG*)0ull ) goto label$465;
			{
				VRESULT$1 = VR$1;
			}
			goto label$464;
			label$465:;
			{
				struct $6IRVREG* vr$4 = IRHLALLOCVREG( *(int64*)((uint8*)V1$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)V1$1 + 16ll) );
				VRESULT$1 = vr$4;
			}
			label$464:;
			struct $6IRVREG* vr$5 = IRHLALLOCVRIMM( 7ll, (struct $8FBSYMBOL*)0ull, 0ll );
			V2$1 = vr$5;
			_EMITBOP( 29ll, V2$1, V1$1, VRESULT$1, (struct $8FBSYMBOL*)0ull );
			if( VR$1 != (struct $6IRVREG*)0ull ) goto label$467;
			{
				if( *(int64*)V1$1 != 4ll ) goto label$469;
				{
					__builtin_memcpy( V1$1, VRESULT$1, 120 );
				}
				goto label$468;
				label$469:;
				{
					_EMITSTORE( V1$1, VRESULT$1 );
				}
				label$468:;
			}
			label$467:;
			label$466:;
		}
		goto label$461;
		label$462:;
		if( OP$1 != 52ll ) goto label$470;
		label$471:;
		{
			struct $6IRVREG* vr$10 = IRHLALLOCVRIMM( 7ll, (struct $8FBSYMBOL*)0ull, -1ll );
			V2$1 = vr$10;
			_EMITBOP( 38ll, V1$1, V2$1, VR$1, (struct $8FBSYMBOL*)0ull );
		}
		goto label$461;
		label$470:;
		{
			HBUILTINUOP( OP$1, V1$1, VR$1 );
		}
		label$472:;
		label$461:;
	}
	label$460:;
}

static void _EMITCONVERT( struct $6IRVREG* V1$1, struct $6IRVREG* V2$1 )
{
	int64 TMP$344$1;
	int64 TMP$345$1;
	int64 TMP$348$1;
	FBSTRING TMP$372$1;
	FBSTRING TMP$373$1;
	FBSTRING TMP$374$1;
	FBSTRING TMP$375$1;
	FBSTRING TMP$376$1;
	label$473:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	int64 LDTYPE$1;
	int64 RDTYPE$1;
	int64 LPTR$1;
	int64 RPTR$1;
	uint8* OP$1;
	struct $6IRVREG* V0$1;
	if( (*(int64*)((uint8*)V2$1 + 8ll) & 480ll) == 0ll ) goto label$475;
	TMP$344$1 = 22ll;
	goto label$672;
	label$475:;
	TMP$344$1 = *(int64*)((uint8*)V2$1 + 8ll) & 31ll;
	label$672:;
	if( (*(int64*)((uint8*)V1$1 + 8ll) & 480ll) == 0ll ) goto label$476;
	TMP$345$1 = 22ll;
	goto label$673;
	label$476:;
	TMP$345$1 = *(int64*)((uint8*)V1$1 + 8ll) & 31ll;
	label$673:;
	if( ((int64)-(*(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$344$1 * 56ll)) == 1ll) & (int64)-(*(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$345$1 * 56ll)) == 0ll)) == 0ll ) goto label$478;
	{
		struct $6IRVREG* vr$19 = IRHLALLOCVREG( *(int64*)((uint8*)V2$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)V2$1 + 16ll) );
		V0$1 = vr$19;
		HLOADVREG( V2$1 );
		FBSTRING* vr$20 = HVREGTOSTR( V0$1 );
		FBSTRING* vr$22 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$20, -1ll, 0 );
		FBSTRING* vr$24 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" = call ", 9ll, 0 );
		if( *(int64*)((uint8*)V2$1 + 8ll) != 14ll ) goto label$480;
		{
			*(int64*)((uint8*)BUILTINS$ + 264ll) = -1ll;
			FBSTRING* vr$28 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"float @llvm.nearbyint.f32(float ", 33ll, 0 );
		}
		goto label$479;
		label$480:;
		{
			*(int64*)((uint8*)BUILTINS$ + 280ll) = -1ll;
			FBSTRING* vr$30 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"double @llvm.nearbyint.f64(double ", 35ll, 0 );
		}
		label$479:;
		FBSTRING* vr$31 = HVREGTOSTR( V2$1 );
		FBSTRING* vr$33 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$31, -1ll, 0 );
		FBSTRING* vr$35 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)")", 2ll, 0 );
		HWRITELINE( &LN$1 );
		__builtin_memcpy( V2$1, V0$1, 120 );
	}
	label$478:;
	label$477:;
	LDTYPE$1 = *(int64*)((uint8*)V1$1 + 8ll);
	RDTYPE$1 = *(int64*)((uint8*)V2$1 + 8ll);
	if( (LDTYPE$1 & 480ll) == 0ll ) goto label$481;
	TMP$348$1 = 22ll;
	goto label$674;
	label$481:;
	TMP$348$1 = LDTYPE$1 & 31ll;
	label$674:;
	if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$348$1 * 56ll)) != 1ll ) goto label$483;
	{
		int64 TMP$349$2;
		if( (RDTYPE$1 & 480ll) == 0ll ) goto label$484;
		TMP$349$2 = 22ll;
		goto label$675;
		label$484:;
		TMP$349$2 = RDTYPE$1 & 31ll;
		label$675:;
		if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$349$2 * 56ll)) != 1ll ) goto label$486;
		{
			int64 TMP$350$3;
			int64 TMP$351$3;
			if( (LDTYPE$1 & 480ll) == 0ll ) goto label$487;
			TMP$350$3 = 22ll;
			goto label$676;
			label$487:;
			TMP$350$3 = LDTYPE$1 & 31ll;
			label$676:;
			if( (RDTYPE$1 & 480ll) == 0ll ) goto label$488;
			TMP$351$3 = 22ll;
			goto label$677;
			label$488:;
			TMP$351$3 = RDTYPE$1 & 31ll;
			label$677:;
			if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$350$3 * 56ll)) + 8ll) >= *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$351$3 * 56ll)) + 8ll) ) goto label$490;
			{
				OP$1 = (uint8*)"fptrunc";
			}
			goto label$489;
			label$490:;
			{
				OP$1 = (uint8*)"fpext";
			}
			label$489:;
		}
		goto label$485;
		label$486:;
		{
			int64 TMP$354$3;
			if( (RDTYPE$1 & 480ll) == 0ll ) goto label$491;
			TMP$354$3 = 22ll;
			goto label$678;
			label$491:;
			TMP$354$3 = RDTYPE$1 & 31ll;
			label$678:;
			if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$354$3 * 56ll)) + 16ll) == 0ll ) goto label$493;
			{
				OP$1 = (uint8*)"sitofp";
			}
			goto label$492;
			label$493:;
			{
				OP$1 = (uint8*)"uitofp";
			}
			label$492:;
		}
		label$485:;
	}
	goto label$482;
	label$483:;
	{
		int64 TMP$357$2;
		if( (RDTYPE$1 & 480ll) == 0ll ) goto label$494;
		TMP$357$2 = 22ll;
		goto label$679;
		label$494:;
		TMP$357$2 = RDTYPE$1 & 31ll;
		label$679:;
		if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$357$2 * 56ll)) != 1ll ) goto label$496;
		{
			int64 TMP$358$3;
			if( (LDTYPE$1 & 480ll) == 0ll ) goto label$497;
			TMP$358$3 = 22ll;
			goto label$680;
			label$497:;
			TMP$358$3 = LDTYPE$1 & 31ll;
			label$680:;
			if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$358$3 * 56ll)) + 16ll) == 0ll ) goto label$499;
			{
				OP$1 = (uint8*)"fptosi";
			}
			goto label$498;
			label$499:;
			{
				OP$1 = (uint8*)"fptoui";
			}
			label$498:;
		}
		goto label$495;
		label$496:;
		{
			if( (LDTYPE$1 & 480ll) == 0ll ) goto label$501;
			{
				if( (RDTYPE$1 & 480ll) == 0ll ) goto label$503;
				{
					OP$1 = (uint8*)"bitcast";
				}
				goto label$502;
				label$503:;
				{
					OP$1 = (uint8*)"inttoptr";
				}
				label$502:;
			}
			goto label$500;
			label$501:;
			{
				if( (RDTYPE$1 & 480ll) == 0ll ) goto label$505;
				{
					OP$1 = (uint8*)"ptrtoint";
				}
				goto label$504;
				label$505:;
				{
					int64 TMP$364$5;
					int64 TMP$365$5;
					if( (LDTYPE$1 & 480ll) == 0ll ) goto label$506;
					TMP$364$5 = 22ll;
					goto label$681;
					label$506:;
					TMP$364$5 = LDTYPE$1 & 31ll;
					label$681:;
					if( (RDTYPE$1 & 480ll) == 0ll ) goto label$507;
					TMP$365$5 = 22ll;
					goto label$682;
					label$507:;
					TMP$365$5 = RDTYPE$1 & 31ll;
					label$682:;
					if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$364$5 * 56ll)) + 8ll) != *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$365$5 * 56ll)) + 8ll) ) goto label$509;
					{
						OP$1 = (uint8*)"bitcast";
					}
					goto label$508;
					label$509:;
					{
						int64 TMP$366$6;
						int64 TMP$367$6;
						if( (LDTYPE$1 & 480ll) == 0ll ) goto label$510;
						TMP$366$6 = 22ll;
						goto label$683;
						label$510:;
						TMP$366$6 = LDTYPE$1 & 31ll;
						label$683:;
						if( (RDTYPE$1 & 480ll) == 0ll ) goto label$511;
						TMP$367$6 = 22ll;
						goto label$684;
						label$511:;
						TMP$367$6 = RDTYPE$1 & 31ll;
						label$684:;
						if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$366$6 * 56ll)) + 8ll) >= *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$367$6 * 56ll)) + 8ll) ) goto label$513;
						{
							OP$1 = (uint8*)"trunc";
						}
						goto label$512;
						label$513:;
						{
							int64 TMP$369$7;
							if( (LDTYPE$1 & 480ll) == 0ll ) goto label$514;
							TMP$369$7 = 22ll;
							goto label$685;
							label$514:;
							TMP$369$7 = LDTYPE$1 & 31ll;
							label$685:;
							if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$369$7 * 56ll)) + 16ll) == 0ll ) goto label$516;
							{
								OP$1 = (uint8*)"sext";
							}
							goto label$515;
							label$516:;
							{
								OP$1 = (uint8*)"zext";
							}
							label$515:;
						}
						label$512:;
					}
					label$508:;
				}
				label$504:;
			}
			label$500:;
		}
		label$495:;
	}
	label$482:;
	if( *(int64*)V1$1 != 4ll ) goto label$518;
	{
		V0$1 = V1$1;
	}
	goto label$517;
	label$518:;
	{
		struct $6IRVREG* vr$106 = IRHLALLOCVREG( *(int64*)((uint8*)V1$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)V1$1 + 16ll) );
		V0$1 = vr$106;
	}
	label$517:;
	HLOADVREG( V2$1 );
	_SETVREGDATATYPE( V2$1, *(int64*)((uint8*)V2$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)V2$1 + 16ll) );
	FBSTRING* vr$109 = HVREGTOSTR( V0$1 );
	__builtin_memset( &TMP$372$1, 0, 24ll );
	FBSTRING* vr$112 = fb_StrConcat( &TMP$372$1, (void*)vr$109, -1ll, (void*)" = ", 4ll );
	__builtin_memset( &TMP$373$1, 0, 24ll );
	FBSTRING* vr$115 = fb_StrConcat( &TMP$373$1, (void*)vr$112, -1ll, (void*)OP$1, 0ll );
	__builtin_memset( &TMP$374$1, 0, 24ll );
	FBSTRING* vr$118 = fb_StrConcat( &TMP$374$1, (void*)vr$115, -1ll, (void*)" ", 2ll );
	FBSTRING* vr$120 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$118, -1ll, 0 );
	FBSTRING* vr$123 = HEMITTYPE( *(int64*)((uint8*)V2$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)V2$1 + 16ll) );
	__builtin_memset( &TMP$375$1, 0, 24ll );
	FBSTRING* vr$127 = fb_StrConcat( &TMP$375$1, (void*)&LN$1, -1ll, (void*)vr$123, -1ll );
	FBSTRING* vr$129 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$127, -1ll, 0 );
	FBSTRING* vr$131 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" ", 2ll, 0 );
	FBSTRING* vr$132 = HVREGTOSTR( V2$1 );
	FBSTRING* vr$134 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$132, -1ll, 0 );
	FBSTRING* vr$136 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" to ", 5ll, 0 );
	FBSTRING* vr$139 = HEMITTYPE( *(int64*)((uint8*)V1$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)V1$1 + 16ll) );
	__builtin_memset( &TMP$376$1, 0, 24ll );
	FBSTRING* vr$143 = fb_StrConcat( &TMP$376$1, (void*)&LN$1, -1ll, (void*)vr$139, -1ll );
	FBSTRING* vr$145 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$143, -1ll, 0 );
	HWRITELINE( &LN$1 );
	if( (int64)-(*(int64*)V1$1 == 4ll) != 0ll ) goto label$520;
	{
		_EMITSTORE( V1$1, V0$1 );
	}
	label$520:;
	label$519:;
	fb_StrDelete( &LN$1 );
	label$474:;
}

static void _EMITSTORE( struct $6IRVREG* L$1, struct $6IRVREG* R$1 )
{
	FBSTRING TMP$377$1;
	FBSTRING TMP$378$1;
	FBSTRING TMP$379$1;
	FBSTRING TMP$380$1;
	label$521:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	HLOADVREG( R$1 );
	_SETVREGDATATYPE( R$1, *(int64*)((uint8*)L$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) );
	HPREPAREADDRESS( L$1 );
	fb_StrAssign( (void*)&LN$1, -1ll, (void*)"store ", 7ll, 0 );
	FBSTRING* vr$16 = HEMITTYPE( ((*(int64*)((uint8*)L$1 + 8ll) & 31ll) | ((*(int64*)((uint8*)L$1 + 8ll) & 480ll) + -32ll)) | (((*(int64*)((uint8*)L$1 + 8ll) & 261632ll) >> 1ll) & 261632ll), *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) );
	__builtin_memset( &TMP$377$1, 0, 24ll );
	FBSTRING* vr$19 = fb_StrConcat( &TMP$377$1, (void*)vr$16, -1ll, (void*)" ", 2ll );
	__builtin_memset( &TMP$378$1, 0, 24ll );
	FBSTRING* vr$23 = fb_StrConcat( &TMP$378$1, (void*)&LN$1, -1ll, (void*)vr$19, -1ll );
	FBSTRING* vr$25 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$23, -1ll, 0 );
	FBSTRING* vr$26 = HVREGTOSTR( R$1 );
	FBSTRING* vr$28 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$26, -1ll, 0 );
	FBSTRING* vr$30 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$33 = HEMITTYPE( *(int64*)((uint8*)L$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) );
	__builtin_memset( &TMP$379$1, 0, 24ll );
	FBSTRING* vr$36 = fb_StrConcat( &TMP$379$1, (void*)vr$33, -1ll, (void*)" ", 2ll );
	__builtin_memset( &TMP$380$1, 0, 24ll );
	FBSTRING* vr$40 = fb_StrConcat( &TMP$380$1, (void*)&LN$1, -1ll, (void*)vr$36, -1ll );
	FBSTRING* vr$42 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$40, -1ll, 0 );
	FBSTRING* vr$43 = HVREGTOSTR( L$1 );
	FBSTRING* vr$45 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$43, -1ll, 0 );
	HWRITELINE( &LN$1 );
	fb_StrDelete( &LN$1 );
	label$522:;
}

static void _EMITSPILLREGS( void )
{
	label$523:;
	label$524:;
}

static void _EMITLOAD( struct $6IRVREG* V1$1 )
{
	label$525:;
	label$526:;
}

static void _EMITLOADRES( struct $6IRVREG* V1$1, struct $6IRVREG* VR$1 )
{
	FBSTRING TMP$382$1;
	FBSTRING TMP$383$1;
	FBSTRING TMP$384$1;
	FBSTRING TMP$385$1;
	label$527:;
	HLOADVREG( V1$1 );
	_SETVREGDATATYPE( V1$1, *(int64*)((uint8*)VR$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VR$1 + 16ll) );
	__builtin_memset( &TMP$385$1, 0, 24ll );
	FBSTRING* vr$3 = HVREGTOSTR( V1$1 );
	FBSTRING* vr$6 = HEMITTYPE( *(int64*)((uint8*)VR$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VR$1 + 16ll) );
	__builtin_memset( &TMP$382$1, 0, 24ll );
	FBSTRING* vr$9 = fb_StrConcat( &TMP$382$1, (void*)"ret ", 5ll, (void*)vr$6, -1ll );
	__builtin_memset( &TMP$383$1, 0, 24ll );
	FBSTRING* vr$12 = fb_StrConcat( &TMP$383$1, (void*)vr$9, -1ll, (void*)" ", 2ll );
	__builtin_memset( &TMP$384$1, 0, 24ll );
	FBSTRING* vr$15 = fb_StrConcat( &TMP$384$1, (void*)vr$12, -1ll, (void*)vr$3, -1ll );
	FBSTRING* vr$17 = fb_StrAssign( (void*)&TMP$385$1, -1ll, (void*)vr$15, -1ll, 0 );
	HWRITELINE( &TMP$385$1 );
	fb_StrDelete( &TMP$385$1 );
	label$528:;
}

static void _EMITPUSHARG( struct $8FBSYMBOL* PARAM$1, struct $6IRVREG* VR$1, int64 UDTLEN$1, int64 LEVEL$1 )
{
	label$529:;
	struct $9IRCALLARG* ARG$1;
	void* vr$1 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&CTX$ + 8ll) );
	ARG$1 = (struct $9IRCALLARG*)vr$1;
	*(struct $6IRVREG**)ARG$1 = VR$1;
	*(int64*)((uint8*)ARG$1 + 8ll) = LEVEL$1;
	label$530:;
}

static void _EMITADDR( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* VR$1 )
{
	label$531:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	{
		if( OP$1 != 22ll ) goto label$534;
		label$535:;
		{
			HPREPAREADDRESS( V1$1 );
			_SETVREGDATATYPE( V1$1, *(int64*)((uint8*)VR$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VR$1 + 16ll) );
		}
		goto label$533;
		label$534:;
		if( OP$1 != 76ll ) goto label$536;
		label$537:;
		{
			HLOADVREG( V1$1 );
		}
		label$536:;
		label$533:;
	}
	__builtin_memcpy( VR$1, V1$1, 120 );
	fb_StrDelete( &LN$1 );
	label$532:;
}

static void HDOCALL( uint8* PNAME$1, struct $8FBSYMBOL* PROC$1, int64 BYTESTOPOP$1, struct $6IRVREG* VR$1, int64 LEVEL$1 )
{
	FBSTRING TMP$390$1;
	FBSTRING TMP$391$1;
	int64 TMP$392$1;
	label$538:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	struct $9IRCALLARG* ARG$1;
	struct $9IRCALLARG* PREV$1;
	struct $6IRVREG* VARG$1;
	struct $6IRVREG* V0$1;
	if( VR$1 != (struct $6IRVREG*)0ull ) goto label$541;
	{
		if( (*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) == 0ll ) goto label$543;
		{
			struct $6IRVREG* vr$8 = IRHLALLOCVREG( *(int64*)((uint8*)PROC$1 + 152ll) & 511ll, *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 160ll) );
			VR$1 = vr$8;
		}
		label$543:;
		label$542:;
	}
	label$541:;
	label$540:;
	if( VR$1 == (struct $6IRVREG*)0ull ) goto label$545;
	{
		FBSTRING TMP$386$2;
		FBSTRING TMP$387$2;
		if( *(int64*)VR$1 != 4ll ) goto label$547;
		{
			V0$1 = VR$1;
		}
		goto label$546;
		label$547:;
		{
			struct $6IRVREG* vr$14 = IRHLALLOCVREG( *(int64*)((uint8*)VR$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VR$1 + 16ll) );
			V0$1 = vr$14;
		}
		label$546:;
		FBSTRING* vr$15 = HVREGTOSTR( V0$1 );
		FBSTRING* vr$17 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$15, -1ll, 0 );
		FBSTRING* vr$19 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" = call ", 9ll, 0 );
		FBSTRING* vr$20 = HEMITPROCCALLCONV( PROC$1 );
		FBSTRING* vr$22 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$20, -1ll, 0 );
		FBSTRING* vr$25 = HEMITTYPE( *(int64*)((uint8*)V0$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)V0$1 + 16ll) );
		__builtin_memset( &TMP$386$2, 0, 24ll );
		FBSTRING* vr$28 = fb_StrConcat( &TMP$386$2, (void*)vr$25, -1ll, (void*)" ", 2ll );
		__builtin_memset( &TMP$387$2, 0, 24ll );
		FBSTRING* vr$32 = fb_StrConcat( &TMP$387$2, (void*)&LN$1, -1ll, (void*)vr$28, -1ll );
		FBSTRING* vr$34 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$32, -1ll, 0 );
	}
	goto label$544;
	label$545:;
	{
		FBSTRING* vr$36 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)"call ", 6ll, 0 );
		FBSTRING* vr$37 = HEMITPROCCALLCONV( PROC$1 );
		FBSTRING* vr$39 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$37, -1ll, 0 );
		FBSTRING* vr$41 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"void ", 6ll, 0 );
	}
	label$544:;
	__builtin_memset( &TMP$390$1, 0, 24ll );
	FBSTRING* vr$44 = fb_StrConcat( &TMP$390$1, (void*)PNAME$1, 0ll, (void*)"( ", 3ll );
	__builtin_memset( &TMP$391$1, 0, 24ll );
	FBSTRING* vr$48 = fb_StrConcat( &TMP$391$1, (void*)&LN$1, -1ll, (void*)vr$44, -1ll );
	FBSTRING* vr$50 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$48, -1ll, 0 );
	void* vr$52 = LISTGETTAIL( (struct $5TLIST*)((uint8*)&CTX$ + 8ll) );
	ARG$1 = (struct $9IRCALLARG*)vr$52;
	label$548:;
	if( ARG$1 == (struct $9IRCALLARG*)0ull ) goto label$550;
	TMP$392$1 = (int64)-((struct $9IRCALLARG*)(int64)-(*(int64*)((uint8*)ARG$1 + 8ll) == LEVEL$1) != (struct $9IRCALLARG*)0ull);
	goto label$686;
	label$550:;
	TMP$392$1 = 0ll;
	label$686:;
	if( TMP$392$1 == 0ll ) goto label$549;
	{
		FBSTRING TMP$393$2;
		void* vr$58 = LISTGETPREV( (void*)ARG$1 );
		PREV$1 = (struct $9IRCALLARG*)vr$58;
		VARG$1 = *(struct $6IRVREG**)ARG$1;
		HLOADVREG( VARG$1 );
		FBSTRING* vr$62 = HEMITTYPE( *(int64*)((uint8*)VARG$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VARG$1 + 16ll) );
		__builtin_memset( &TMP$393$2, 0, 24ll );
		FBSTRING* vr$66 = fb_StrConcat( &TMP$393$2, (void*)&LN$1, -1ll, (void*)vr$62, -1ll );
		FBSTRING* vr$68 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$66, -1ll, 0 );
		FBSTRING* vr$70 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" ", 2ll, 0 );
		FBSTRING* vr$71 = HVREGTOSTR( VARG$1 );
		FBSTRING* vr$73 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$71, -1ll, 0 );
		LISTDELNODE( (struct $5TLIST*)((uint8*)&CTX$ + 8ll), (void*)ARG$1 );
		if( PREV$1 == (struct $9IRCALLARG*)0ull ) goto label$552;
		{
			if( *(int64*)((uint8*)PREV$1 + 8ll) != LEVEL$1 ) goto label$554;
			{
				FBSTRING* vr$79 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", ", 3ll, 0 );
			}
			label$554:;
			label$553:;
		}
		label$552:;
		label$551:;
		ARG$1 = PREV$1;
	}
	goto label$548;
	label$549:;
	FBSTRING* vr$81 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" )", 3ll, 0 );
	HWRITELINE( &LN$1 );
	if( VR$1 == (struct $6IRVREG*)0ull ) goto label$556;
	{
		if( (int64)-(*(int64*)VR$1 == 4ll) != 0ll ) goto label$558;
		{
			_EMITSTORE( VR$1, V0$1 );
		}
		label$558:;
		label$557:;
	}
	label$556:;
	label$555:;
	fb_StrDelete( &LN$1 );
	label$539:;
}

static void _EMITCALL( struct $8FBSYMBOL* PROC$1, int64 BYTESTOPOP$1, struct $6IRVREG* VR$1, int64 LEVEL$1 )
{
	label$559:;
	uint8* vr$0 = SYMBGETMANGLEDNAME( PROC$1 );
	HDOCALL( vr$0, PROC$1, BYTESTOPOP$1, VR$1, LEVEL$1 );
	label$560:;
}

static void _EMITCALLPTR( struct $8FBSYMBOL* PROC$1, struct $6IRVREG* V1$1, struct $6IRVREG* VR$1, int64 BYTESTOPOP$1, int64 LEVEL$1 )
{
	FBSTRING TMP$394$1;
	label$561:;
	HLOADVREG( V1$1 );
	__builtin_memset( &TMP$394$1, 0, 24ll );
	FBSTRING* vr$1 = HVREGTOSTR( V1$1 );
	FBSTRING* vr$3 = fb_StrAssign( (void*)&TMP$394$1, -1ll, (void*)vr$1, -1ll, 0 );
	HDOCALL( *(uint8**)&TMP$394$1, PROC$1, BYTESTOPOP$1, VR$1, LEVEL$1 );
	fb_StrDelete( &TMP$394$1 );
	label$562:;
}

static void _EMITJUMPPTR( struct $6IRVREG* V1$1 )
{
	FBSTRING TMP$396$1;
	FBSTRING TMP$397$1;
	label$563:;
	HLOADVREG( V1$1 );
	__builtin_memset( &TMP$397$1, 0, 24ll );
	FBSTRING* vr$1 = HVREGTOSTR( V1$1 );
	__builtin_memset( &TMP$396$1, 0, 24ll );
	FBSTRING* vr$4 = fb_StrConcat( &TMP$396$1, (void*)"goto *", 7ll, (void*)vr$1, -1ll );
	FBSTRING* vr$6 = fb_StrAssign( (void*)&TMP$397$1, -1ll, (void*)vr$4, -1ll, 0 );
	HWRITELINE( &TMP$397$1 );
	fb_StrDelete( &TMP$397$1 );
	label$564:;
}

static void _EMITBRANCH( int64 OP$1, struct $8FBSYMBOL* LABEL$1 )
{
	FBSTRING TMP$398$1;
	FBSTRING TMP$399$1;
	label$565:;
	__builtin_memset( &TMP$399$1, 0, 24ll );
	uint8* vr$1 = SYMBGETMANGLEDNAME( LABEL$1 );
	__builtin_memset( &TMP$398$1, 0, 24ll );
	FBSTRING* vr$4 = fb_StrConcat( &TMP$398$1, (void*)"br label %", 11ll, (void*)vr$1, 0ll );
	FBSTRING* vr$6 = fb_StrAssign( (void*)&TMP$399$1, -1ll, (void*)vr$4, -1ll, 0 );
	HWRITELINE( &TMP$399$1 );
	fb_StrDelete( &TMP$399$1 );
	uint8* vr$9 = SYMBUNIQUELABEL(  );
	HWRITELABEL( vr$9 );
	label$566:;
}

static void _EMITJMPTB( struct $6IRVREG* V1$1, struct $8FBSYMBOL* TBSYM$1, uint64* VALUES$1, struct $8FBSYMBOL** LABELS$1, int64 LABELCOUNT$1, struct $8FBSYMBOL* DEFLABEL$1, uint64 MINVAL$1, uint64 MAXVAL$1 )
{
	FBSTRING TMP$401$1;
	FBSTRING TMP$402$1;
	FBSTRING TMP$403$1;
	FBSTRING TMP$404$1;
	FBSTRING TMP$405$1;
	FBSTRING TMP$412$1;
	label$567:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	HLOADVREG( V1$1 );
	fb_StrAssign( (void*)&LN$1, -1ll, (void*)"switch ", 8ll, 0 );
	FBSTRING* vr$4 = HEMITTYPE( *(int64*)((uint8*)V1$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)V1$1 + 16ll) );
	__builtin_memset( &TMP$401$1, 0, 24ll );
	FBSTRING* vr$7 = fb_StrConcat( &TMP$401$1, (void*)vr$4, -1ll, (void*)" ", 2ll );
	__builtin_memset( &TMP$402$1, 0, 24ll );
	FBSTRING* vr$11 = fb_StrConcat( &TMP$402$1, (void*)&LN$1, -1ll, (void*)vr$7, -1ll );
	FBSTRING* vr$13 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$11, -1ll, 0 );
	FBSTRING* vr$14 = HVREGTOSTR( V1$1 );
	FBSTRING* vr$16 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$14, -1ll, 0 );
	FBSTRING* vr$18 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", ", 3ll, 0 );
	uint8* vr$19 = SYMBGETMANGLEDNAME( DEFLABEL$1 );
	__builtin_memset( &TMP$403$1, 0, 24ll );
	FBSTRING* vr$22 = fb_StrConcat( &TMP$403$1, (void*)"label %", 8ll, (void*)vr$19, 0ll );
	__builtin_memset( &TMP$404$1, 0, 24ll );
	FBSTRING* vr$25 = fb_StrConcat( &TMP$404$1, (void*)vr$22, -1ll, (void*)" ", 2ll );
	__builtin_memset( &TMP$405$1, 0, 24ll );
	FBSTRING* vr$29 = fb_StrConcat( &TMP$405$1, (void*)&LN$1, -1ll, (void*)vr$25, -1ll );
	FBSTRING* vr$31 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$29, -1ll, 0 );
	FBSTRING* vr$33 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"[", 2ll, 0 );
	HWRITELINE( &LN$1 );
	*(int64*)&CTX$ = *(int64*)&CTX$ + 1ll;
	{
		int64 I$2;
		I$2 = 0ll;
		int64 TMP$406$2;
		TMP$406$2 = LABELCOUNT$1 + -1ll;
		goto label$569;
		label$572:;
		{
			FBSTRING TMP$408$3;
			FBSTRING TMP$409$3;
			FBSTRING TMP$410$3;
			FBSTRING TMP$411$3;
			FBSTRING* vr$39 = fb_ULongintToStr( *(uint64*)((uint8*)VALUES$1 + (I$2 << 3ll)) );
			__builtin_memset( &TMP$408$3, 0, 24ll );
			FBSTRING* vr$42 = fb_StrConcat( &TMP$408$3, (void*)"i32 ", 5ll, (void*)vr$39, -1ll );
			__builtin_memset( &TMP$409$3, 0, 24ll );
			FBSTRING* vr$45 = fb_StrConcat( &TMP$409$3, (void*)vr$42, -1ll, (void*)", ", 3ll );
			FBSTRING* vr$47 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$45, -1ll, 0 );
			uint8* vr$50 = SYMBGETMANGLEDNAME( *(struct $8FBSYMBOL**)((uint8*)LABELS$1 + (I$2 << 3ll)) );
			__builtin_memset( &TMP$410$3, 0, 24ll );
			FBSTRING* vr$53 = fb_StrConcat( &TMP$410$3, (void*)"label %", 8ll, (void*)vr$50, 0ll );
			__builtin_memset( &TMP$411$3, 0, 24ll );
			FBSTRING* vr$57 = fb_StrConcat( &TMP$411$3, (void*)&LN$1, -1ll, (void*)vr$53, -1ll );
			FBSTRING* vr$59 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$57, -1ll, 0 );
			HWRITELINE( &LN$1 );
		}
		label$570:;
		I$2 = I$2 + 1ll;
		label$569:;
		if( I$2 <= TMP$406$2 ) goto label$572;
		label$571:;
	}
	*(int64*)&CTX$ = *(int64*)&CTX$ + -1ll;
	__builtin_memset( &TMP$412$1, 0, 24ll );
	FBSTRING* vr$66 = fb_StrAssign( (void*)&TMP$412$1, -1ll, (void*)"]", 2ll, 0 );
	HWRITELINE( &TMP$412$1 );
	fb_StrDelete( &TMP$412$1 );
	fb_StrDelete( &LN$1 );
	label$568:;
}

static void _EMITMEM( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* V2$1, int64 BYTES$1 )
{
	label$573:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	fb_StrAssign( (void*)&LN$1, -1ll, (void*)"call void ", 11ll, 0 );
	HLOADVREG( V1$1 );
	HLOADVREG( V2$1 );
	{
		if( OP$1 != 106ll ) goto label$576;
		label$577:;
		{
			*(int64*)((uint8*)BUILTINS$ + 8ll) = -1ll;
			_SETVREGDATATYPE( V1$1, 33ll, (struct $8FBSYMBOL*)0ull );
			_SETVREGDATATYPE( V2$1, 7ll, (struct $8FBSYMBOL*)0ull );
			FBSTRING* vr$4 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"@llvm.memset.p0i8.i32( ", 24ll, 0 );
			FBSTRING* vr$6 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"i8* ", 5ll, 0 );
			FBSTRING* vr$7 = HVREGTOSTR( V1$1 );
			FBSTRING* vr$9 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$7, -1ll, 0 );
			FBSTRING* vr$11 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", ", 3ll, 0 );
			FBSTRING* vr$13 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"i8 0, ", 7ll, 0 );
			FBSTRING* vr$15 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"i32 ", 5ll, 0 );
			FBSTRING* vr$16 = HVREGTOSTR( V2$1 );
			FBSTRING* vr$18 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$16, -1ll, 0 );
			FBSTRING* vr$20 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", ", 3ll, 0 );
		}
		goto label$575;
		label$576:;
		if( OP$1 != 104ll ) goto label$578;
		label$579:;
		{
			*(int64*)((uint8*)BUILTINS$ + 24ll) = -1ll;
			_SETVREGDATATYPE( V1$1, 33ll, (struct $8FBSYMBOL*)0ull );
			_SETVREGDATATYPE( V2$1, 33ll, (struct $8FBSYMBOL*)0ull );
			FBSTRING* vr$23 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"@llvm.memmove.p0i8.p0i8.i32( ", 30ll, 0 );
			FBSTRING* vr$25 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"i8* ", 5ll, 0 );
			FBSTRING* vr$26 = HVREGTOSTR( V1$1 );
			FBSTRING* vr$28 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$26, -1ll, 0 );
			FBSTRING* vr$30 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", ", 3ll, 0 );
			FBSTRING* vr$32 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"i8* ", 5ll, 0 );
			FBSTRING* vr$33 = HVREGTOSTR( V2$1 );
			FBSTRING* vr$35 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$33, -1ll, 0 );
			FBSTRING* vr$37 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", ", 3ll, 0 );
			FBSTRING* vr$39 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"i32 ", 5ll, 0 );
			FBSTRING* vr$40 = fb_ULongintToStr( (uint64)BYTES$1 );
			FBSTRING* vr$42 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$40, -1ll, 0 );
			FBSTRING* vr$44 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", ", 3ll, 0 );
		}
		label$578:;
		label$575:;
	}
	FBSTRING* vr$46 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"i32 1, i1 false )", 18ll, 0 );
	HWRITELINE( &LN$1 );
	fb_StrDelete( &LN$1 );
	label$574:;
}

static void _EMITDECL( struct $8FBSYMBOL* SYM$1 )
{
	label$580:;
	HEMITVARIABLE( SYM$1 );
	label$581:;
}

static void _EMITDBG( int64 OP$1, struct $8FBSYMBOL* PROC$1, int64 EX$1 )
{
	label$582:;
	if( OP$1 != 108ll ) goto label$585;
	{
		FBSTRING TMP$422$2;
		FBSTRING TMP$423$2;
		FBSTRING TMP$424$2;
		FBSTRING TMP$425$2;
		FBSTRING TMP$426$2;
		__builtin_memset( &TMP$426$2, 0, 24ll );
		FBSTRING* vr$3 = HREPLACE( (uint8*)((uint8*)&ENV$ + 488ll), (uint8*)"\x5C", (uint8*)"\x5C\x5C" );
		FBSTRING* vr$4 = fb_LongintToStr( EX$1 );
		__builtin_memset( &TMP$422$2, 0, 24ll );
		FBSTRING* vr$7 = fb_StrConcat( &TMP$422$2, (void*)"#line ", 7ll, (void*)vr$4, -1ll );
		__builtin_memset( &TMP$423$2, 0, 24ll );
		FBSTRING* vr$10 = fb_StrConcat( &TMP$423$2, (void*)vr$7, -1ll, (void*)" \x22", 3ll );
		__builtin_memset( &TMP$424$2, 0, 24ll );
		FBSTRING* vr$13 = fb_StrConcat( &TMP$424$2, (void*)vr$10, -1ll, (void*)vr$3, -1ll );
		__builtin_memset( &TMP$425$2, 0, 24ll );
		FBSTRING* vr$16 = fb_StrConcat( &TMP$425$2, (void*)vr$13, -1ll, (void*)"\x22", 2ll );
		FBSTRING* vr$18 = fb_StrAssign( (void*)&TMP$426$2, -1ll, (void*)vr$16, -1ll, 0 );
		HWRITELINE( &TMP$426$2 );
		fb_StrDelete( &TMP$426$2 );
		*(int64*)((uint8*)&CTX$ + 72ll) = EX$1;
	}
	label$585:;
	label$584:;
	label$583:;
}

static void _EMITCOMMENT( uint8* TEXT$1 )
{
	FBSTRING TMP$428$1;
	FBSTRING TMP$429$1;
	label$586:;
	__builtin_memset( &TMP$429$1, 0, 24ll );
	__builtin_memset( &TMP$428$1, 0, 24ll );
	FBSTRING* vr$3 = fb_StrConcat( &TMP$428$1, (void*)"; ", 3ll, (void*)TEXT$1, 0ll );
	FBSTRING* vr$5 = fb_StrAssign( (void*)&TMP$429$1, -1ll, (void*)vr$3, -1ll, 0 );
	HWRITELINE( &TMP$429$1 );
	fb_StrDelete( &TMP$429$1 );
	label$587:;
}

static void _EMITASMBEGIN( void )
{
	label$588:;
	fb_StrAssign( (void*)((uint8*)&CTX$ + 208ll), -1ll, (void*)"", 1ll, 0 );
	label$589:;
}

static void _EMITASMTEXT( uint8* TEXT$1 )
{
	FBSTRING TMP$430$1;
	label$590:;
	__builtin_memset( &TMP$430$1, 0, 24ll );
	FBSTRING* vr$3 = fb_StrConcat( &TMP$430$1, (void*)((uint8*)&CTX$ + 208ll), -1ll, (void*)TEXT$1, 0ll );
	FBSTRING* vr$5 = fb_StrAssign( (void*)((uint8*)&CTX$ + 208ll), -1ll, (void*)vr$3, -1ll, 0 );
	label$591:;
}

static void _EMITASMSYMB( struct $8FBSYMBOL* SYM$1 )
{
	FBSTRING TMP$431$1;
	label$592:;
	uint8* vr$0 = SYMBGETMANGLEDNAME( SYM$1 );
	__builtin_memset( &TMP$431$1, 0, 24ll );
	FBSTRING* vr$4 = fb_StrConcat( &TMP$431$1, (void*)((uint8*)&CTX$ + 208ll), -1ll, (void*)vr$0, 0ll );
	FBSTRING* vr$6 = fb_StrAssign( (void*)((uint8*)&CTX$ + 208ll), -1ll, (void*)vr$4, -1ll, 0 );
	if( *(int64*)((uint8*)SYM$1 + 80ll) <= 0ll ) goto label$595;
	{
		FBSTRING TMP$433$2;
		FBSTRING TMP$434$2;
		FBSTRING* vr$10 = fb_LongintToStr( *(int64*)((uint8*)SYM$1 + 80ll) );
		__builtin_memset( &TMP$433$2, 0, 24ll );
		FBSTRING* vr$13 = fb_StrConcat( &TMP$433$2, (void*)"+", 2ll, (void*)vr$10, -1ll );
		__builtin_memset( &TMP$434$2, 0, 24ll );
		FBSTRING* vr$17 = fb_StrConcat( &TMP$434$2, (void*)((uint8*)&CTX$ + 208ll), -1ll, (void*)vr$13, -1ll );
		FBSTRING* vr$19 = fb_StrAssign( (void*)((uint8*)&CTX$ + 208ll), -1ll, (void*)vr$17, -1ll, 0 );
	}
	goto label$594;
	label$595:;
	if( *(int64*)((uint8*)SYM$1 + 80ll) >= 0ll ) goto label$596;
	{
		FBSTRING TMP$435$2;
		FBSTRING* vr$23 = fb_LongintToStr( *(int64*)((uint8*)SYM$1 + 80ll) );
		__builtin_memset( &TMP$435$2, 0, 24ll );
		FBSTRING* vr$27 = fb_StrConcat( &TMP$435$2, (void*)((uint8*)&CTX$ + 208ll), -1ll, (void*)vr$23, -1ll );
		FBSTRING* vr$29 = fb_StrAssign( (void*)((uint8*)&CTX$ + 208ll), -1ll, (void*)vr$27, -1ll, 0 );
	}
	label$596:;
	label$594:;
	label$593:;
}

static void _EMITASMEND( void )
{
	label$597:;
	HWRITELINE( (FBSTRING*)((uint8*)&CTX$ + 208ll) );
	label$598:;
}

static void _EMITVARINIBEGIN( struct $8FBSYMBOL* SYM$1 )
{
	label$599:;
	uint8* vr$0 = SYMBGETMANGLEDNAME( SYM$1 );
	fb_StrAssign( (void*)((uint8*)&CTX$ + 80ll), -1ll, (void*)vr$0, 0ll, 0 );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 80ll), -1ll, (void*)" = global ", 11ll, 0 );
	FBSTRING* vr$4 = HEMITSYMTYPE( SYM$1 );
	FBSTRING* vr$6 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 80ll), -1ll, (void*)vr$4, -1ll, 0 );
	FBSTRING* vr$8 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 80ll), -1ll, (void*)" ", 2ll, 0 );
	*(int64*)((uint8*)&CTX$ + 104ll) = 0ll;
	label$600:;
}

static void _EMITVARINIEND( struct $8FBSYMBOL* SYM$1 )
{
	label$601:;
	HWRITELINE( (FBSTRING*)((uint8*)&CTX$ + 80ll) );
	fb_StrAssign( (void*)((uint8*)&CTX$ + 80ll), -1ll, (void*)"", 1ll, 0 );
	label$602:;
}

static void HVARINIELEMENTTYPE( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	label$603:;
	if( *(int64*)((uint8*)&CTX$ + 104ll) <= 0ll ) goto label$606;
	{
		FBSTRING* vr$1 = HEMITTYPE( DTYPE$1, SUBTYPE$1 );
		FBSTRING* vr$3 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 80ll), -1ll, (void*)vr$1, -1ll, 0 );
		FBSTRING* vr$5 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 80ll), -1ll, (void*)" ", 2ll, 0 );
	}
	label$606:;
	label$605:;
	label$604:;
}

static void HVARINISEPARATOR( void )
{
	label$607:;
	if( *(int64*)((uint8*)&CTX$ + 104ll) <= 0ll ) goto label$610;
	{
		FBSTRING* vr$2 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 80ll), -1ll, (void*)", ", 3ll, 0 );
	}
	label$610:;
	label$609:;
	label$608:;
}

static void _EMITVARINII( struct $8FBSYMBOL* SYM$1, int64 VALUE$1 )
{
	int64 TMP$437$1;
	label$611:;
	int64 DTYPE$1;
	DTYPE$1 = *(int64*)((uint8*)SYM$1 + 48ll) & 511ll;
	HVARINIELEMENTTYPE( DTYPE$1, *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll) );
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$613;
	TMP$437$1 = 22ll;
	goto label$687;
	label$613:;
	TMP$437$1 = DTYPE$1 & 31ll;
	label$687:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$437$1 * 56ll)) + 8ll) != 8ll ) goto label$615;
	{
		FBSTRING* vr$8 = HEMITLONG( VALUE$1 );
		FBSTRING* vr$10 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 80ll), -1ll, (void*)vr$8, -1ll, 0 );
	}
	goto label$614;
	label$615:;
	{
		FBSTRING TMP$438$2;
		FBSTRING* vr$12 = HEMITINT( DTYPE$1, *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll), VALUE$1 );
		__builtin_memset( &TMP$438$2, 0, 24ll );
		FBSTRING* vr$16 = fb_StrConcat( &TMP$438$2, (void*)((uint8*)&CTX$ + 80ll), -1ll, (void*)vr$12, -1ll );
		FBSTRING* vr$18 = fb_StrAssign( (void*)((uint8*)&CTX$ + 80ll), -1ll, (void*)vr$16, -1ll, 0 );
	}
	label$614:;
	HVARINISEPARATOR(  );
	label$612:;
}

static void _EMITVARINIF( struct $8FBSYMBOL* SYM$1, double VALUE$1 )
{
	label$616:;
	int64 DTYPE$1;
	DTYPE$1 = *(int64*)((uint8*)SYM$1 + 48ll) & 511ll;
	HVARINIELEMENTTYPE( DTYPE$1, *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll) );
	FBSTRING* vr$3 = HEMITFLOAT( VALUE$1 );
	FBSTRING* vr$5 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 80ll), -1ll, (void*)vr$3, -1ll, 0 );
	HVARINISEPARATOR(  );
	label$617:;
}

static void _EMITVARINIOFS( struct $8FBSYMBOL* SYM$1, struct $8FBSYMBOL* RHS$1, int64 OFS$1 )
{
	FBSTRING TMP$441$1;
	FBSTRING TMP$442$1;
	FBSTRING TMP$443$1;
	FBSTRING TMP$444$1;
	label$618:;
	FBSTRING* vr$0 = fb_LongintToStr( OFS$1 );
	uint8* vr$1 = SYMBGETMANGLEDNAME( RHS$1 );
	__builtin_memset( &TMP$441$1, 0, 24ll );
	FBSTRING* vr$4 = fb_StrConcat( &TMP$441$1, (void*)"TODO offset ", 13ll, (void*)vr$1, 0ll );
	__builtin_memset( &TMP$442$1, 0, 24ll );
	FBSTRING* vr$7 = fb_StrConcat( &TMP$442$1, (void*)vr$4, -1ll, (void*)" + ", 4ll );
	__builtin_memset( &TMP$443$1, 0, 24ll );
	FBSTRING* vr$10 = fb_StrConcat( &TMP$443$1, (void*)vr$7, -1ll, (void*)vr$0, -1ll );
	__builtin_memset( &TMP$444$1, 0, 24ll );
	FBSTRING* vr$14 = fb_StrConcat( &TMP$444$1, (void*)((uint8*)&CTX$ + 80ll), -1ll, (void*)vr$10, -1ll );
	FBSTRING* vr$16 = fb_StrAssign( (void*)((uint8*)&CTX$ + 80ll), -1ll, (void*)vr$14, -1ll, 0 );
	HVARINISEPARATOR(  );
	label$619:;
}

static void _EMITVARINISTR( int64 VARLENGTH$1, uint8* LITERAL$1, int64 LITLENGTH$1 )
{
	label$620:;
	if( *(int64*)((uint8*)&CTX$ + 104ll) <= 0ll ) goto label$623;
	{
		FBSTRING* vr$1 = HEMITSTRLITTYPE( VARLENGTH$1 );
		FBSTRING* vr$3 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 80ll), -1ll, (void*)vr$1, -1ll, 0 );
		FBSTRING* vr$5 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 80ll), -1ll, (void*)" ", 2ll, 0 );
	}
	label$623:;
	label$622:;
	FBSTRING* vr$7 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 80ll), -1ll, (void*)"c\x22", 3ll, 0 );
	uint8* vr$9 = HUNESCAPE( LITERAL$1 );
	HBUILDSTRLIT( (FBSTRING*)((uint8*)&CTX$ + 80ll), VARLENGTH$1 + 1ll, vr$9, LITLENGTH$1 + 1ll );
	FBSTRING* vr$13 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 80ll), -1ll, (void*)"\x22", 2ll, 0 );
	HVARINISEPARATOR(  );
	label$621:;
}

static void _EMITVARINIWSTR( int64 VARLENGTH$1, uint32* LITERAL$1, int64 LITLENGTH$1 )
{
	label$624:;
	if( *(int64*)((uint8*)&CTX$ + 104ll) <= 0ll ) goto label$627;
	{
		FBSTRING* vr$1 = HEMITSTRLITTYPE( VARLENGTH$1 );
		FBSTRING* vr$3 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 80ll), -1ll, (void*)vr$1, -1ll, 0 );
		FBSTRING* vr$5 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 80ll), -1ll, (void*)" ", 2ll, 0 );
	}
	label$627:;
	label$626:;
	FBSTRING* vr$7 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 80ll), -1ll, (void*)"c\x22", 3ll, 0 );
	uint32* vr$9 = HUNESCAPEW( LITERAL$1 );
	HBUILDWSTRLIT( (FBSTRING*)((uint8*)&CTX$ + 80ll), VARLENGTH$1 + 1ll, vr$9, LITLENGTH$1 + 1ll );
	FBSTRING* vr$13 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 80ll), -1ll, (void*)"\x22", 2ll, 0 );
	HVARINISEPARATOR(  );
	label$625:;
}

static void _EMITVARINIPAD( int64 BYTES$1 )
{
	label$628:;
	label$629:;
}

static void _EMITVARINISCOPEBEGIN( void )
{
	label$630:;
	*(int64*)((uint8*)&CTX$ + 104ll) = *(int64*)((uint8*)&CTX$ + 104ll) + 1ll;
	FBSTRING* vr$2 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 80ll), -1ll, (void*)"{ ", 3ll, 0 );
	label$631:;
}

static void _EMITVARINISCOPEEND( void )
{
	label$632:;
	FBSTRING* vr$1 = fb_RIGHT( (FBSTRING*)((uint8*)&CTX$ + 80ll), 2ll );
	int32 vr$2 = fb_StrCompare( (void*)vr$1, -1ll, (void*)", ", 3ll );
	if( (int64)vr$2 != 0ll ) goto label$635;
	{
		int64 vr$6 = fb_StrLen( (void*)((uint8*)&CTX$ + 80ll), -1ll );
		FBSTRING* vr$9 = fb_LEFT( (FBSTRING*)((uint8*)&CTX$ + 80ll), vr$6 + -2ll );
		FBSTRING* vr$11 = fb_StrAssign( (void*)((uint8*)&CTX$ + 80ll), -1ll, (void*)vr$9, -1ll, 0 );
	}
	label$635:;
	label$634:;
	FBSTRING* vr$13 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 80ll), -1ll, (void*)" }", 3ll, 0 );
	*(int64*)((uint8*)&CTX$ + 104ll) = *(int64*)((uint8*)&CTX$ + 104ll) + -1ll;
	HVARINISEPARATOR(  );
	label$633:;
}

static void _EMITFBCTINFBEGIN( void )
{
	FBSTRING TMP$447$1;
	label$636:;
	__builtin_memset( &TMP$447$1, 0, 24ll );
	FBSTRING* vr$2 = fb_StrAssign( (void*)&TMP$447$1, -1ll, (void*)"", 1ll, 0 );
	HWRITELINE( &TMP$447$1 );
	fb_StrDelete( &TMP$447$1 );
	label$637:;
}

static void _EMITFBCTINFSTRING( uint8* S$1 )
{
	FBSTRING TMP$448$1;
	FBSTRING TMP$449$1;
	label$638:;
	__builtin_memset( &TMP$448$1, 0, 24ll );
	FBSTRING* vr$2 = fb_StrConcat( &TMP$448$1, (void*)S$1, 0ll, (void*)"\x5C" "00", 4ll );
	__builtin_memset( &TMP$449$1, 0, 24ll );
	FBSTRING* vr$6 = fb_StrConcat( &TMP$449$1, (void*)((uint8*)&CTX$ + 176ll), -1ll, (void*)vr$2, -1ll );
	FBSTRING* vr$8 = fb_StrAssign( (void*)((uint8*)&CTX$ + 176ll), -1ll, (void*)vr$6, -1ll, 0 );
	int64 vr$9 = fb_StrLen( (void*)S$1, 0ll );
	*(int64*)((uint8*)&CTX$ + 200ll) = (*(int64*)((uint8*)&CTX$ + 200ll) + vr$9) + 1ll;
	label$639:;
}

static void _EMITFBCTINFEND( void )
{
	label$640:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	fb_StrAssign( (void*)&LN$1, -1ll, (void*)"@__fbctinf = internal constant ", 32ll, 0 );
	FBSTRING* vr$2 = HEMITSTRLITTYPE( *(int64*)((uint8*)&CTX$ + 200ll) );
	FBSTRING* vr$4 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$2, -1ll, 0 );
	FBSTRING* vr$6 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" c\x22", 4ll, 0 );
	FBSTRING* vr$9 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)((uint8*)&CTX$ + 176ll), -1ll, 0 );
	FBSTRING* vr$11 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22", 2ll, 0 );
	FBSTRING* vr$13 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", section \x22.fbctinf\x22", 21ll, 0 );
	HWRITELINE( &LN$1 );
	fb_StrAssign( (void*)&LN$1, -1ll, (void*)"@llvm.used = appending global [1 x i8*] ", 41ll, 0 );
	FBSTRING* vr$17 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"[", 2ll, 0 );
	FBSTRING* vr$19 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"i8* bitcast (", 14ll, 0 );
	FBSTRING* vr$20 = HEMITSTRLITTYPE( *(int64*)((uint8*)&CTX$ + 200ll) );
	FBSTRING* vr$22 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$20, -1ll, 0 );
	FBSTRING* vr$24 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"* @__fbctinf to i8*)", 21ll, 0 );
	FBSTRING* vr$26 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"]", 2ll, 0 );
	FBSTRING* vr$28 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", section \x22llvm.metadata\x22", 26ll, 0 );
	HWRITELINE( &LN$1 );
	fb_StrAssign( (void*)((uint8*)&CTX$ + 176ll), -1ll, (void*)"", 1ll, 0 );
	*(int64*)((uint8*)&CTX$ + 200ll) = 0ll;
	fb_StrDelete( &LN$1 );
	label$641:;
}

static void _EMITPROCBEGIN( struct $8FBSYMBOL* PROC$1, struct $8FBSYMBOL* INITLABEL$1 )
{
	FBSTRING TMP$458$1;
	FBSTRING TMP$463$1;
	label$642:;
	IRHLEMITPROCBEGIN(  );
	__builtin_memset( &TMP$458$1, 0, 24ll );
	FBSTRING* vr$2 = fb_StrAssign( (void*)&TMP$458$1, -1ll, (void*)"", 1ll, 0 );
	HWRITELINE( &TMP$458$1 );
	fb_StrDelete( &TMP$458$1 );
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	FBSTRING* vr$7 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"define ", 8ll, 0 );
	if( (*(int64*)((uint8*)PROC$1 + 8ll) & 256ll) == 0ll ) goto label$645;
	{
		FBSTRING* vr$12 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"dllexport ", 11ll, 0 );
	}
	goto label$644;
	label$645:;
	if( (*(int64*)((uint8*)PROC$1 + 8ll) & 64ll) == 0ll ) goto label$646;
	{
		FBSTRING* vr$17 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"private ", 9ll, 0 );
	}
	label$646:;
	label$644:;
	FBSTRING* vr$18 = HEMITPROCHEADER( PROC$1, 0ll );
	FBSTRING* vr$20 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$18, -1ll, 0 );
	HWRITELINE( &LN$1 );
	__builtin_memset( &TMP$463$1, 0, 24ll );
	FBSTRING* vr$24 = fb_StrAssign( (void*)&TMP$463$1, -1ll, (void*)"{", 2ll, 0 );
	HWRITELINE( &TMP$463$1 );
	fb_StrDelete( &TMP$463$1 );
	*(int64*)&CTX$ = *(int64*)&CTX$ + 1ll;
	fb_StrDelete( &LN$1 );
	label$643:;
}

static void _EMITPROCEND( struct $8FBSYMBOL* PROC$1, struct $8FBSYMBOL* INITLABEL$1, struct $8FBSYMBOL* EXITLABEL$1 )
{
	FBSTRING TMP$467$1;
	label$647:;
	if( (*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) != 0ll ) goto label$650;
	{
		FBSTRING TMP$465$2;
		__builtin_memset( &TMP$465$2, 0, 24ll );
		FBSTRING* vr$5 = fb_StrAssign( (void*)&TMP$465$2, -1ll, (void*)"ret void", 9ll, 0 );
		HWRITELINE( &TMP$465$2 );
		fb_StrDelete( &TMP$465$2 );
	}
	label$650:;
	label$649:;
	*(int64*)&CTX$ = *(int64*)&CTX$ + -1ll;
	__builtin_memset( &TMP$467$1, 0, 24ll );
	FBSTRING* vr$11 = fb_StrAssign( (void*)&TMP$467$1, -1ll, (void*)"}", 2ll, 0 );
	HWRITELINE( &TMP$467$1 );
	fb_StrDelete( &TMP$467$1 );
	IRHLEMITPROCEND(  );
	label$648:;
}

static void _EMITSCOPEBEGIN( struct $8FBSYMBOL* S$1 )
{
	label$651:;
	label$652:;
}

static void _EMITSCOPEEND( struct $8FBSYMBOL* S$1 )
{
	label$653:;
	label$654:;
}

__attribute__(( constructor )) static void _GLOBAL__I( void )
{
	label$656:;
	_ZN13IRLLVMCONTEXTC1Ev( &CTX$ );
	label$657:;
}

__attribute__(( destructor )) static void _GLOBAL__D( void )
{
	label$659:;
	_ZN13IRLLVMCONTEXTD1Ev( &CTX$ );
	label$660:;
}

// Total compilation time: 0.05399304011370987 seconds.
