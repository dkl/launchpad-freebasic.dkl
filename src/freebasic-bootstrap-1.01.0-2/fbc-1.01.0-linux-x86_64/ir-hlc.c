// Compilation of fbc-1.01.0/src/compiler/ir-hlc.bas started at 14:16:41 on 02-28-2015

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
struct $12SECTIONENTRY {
	FBSTRING TEXT;
	int64 OLD;
	int64 INDENT;
};
__FB_STATIC_ASSERT( sizeof( struct $12SECTIONENTRY ) == 40 );
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
struct $8IRHLCCTX {
	struct $12SECTIONENTRY SECTIONS[129];
	int64 SECTION;
	int64 SECTIONGOSUBLEVEL;
	struct $5TLIST CALLARGS;
	int64 LINENUM;
	FBSTRING ESCAPEDINPUTFILENAME;
	uint64 USEDBUILTINS;
	struct $5TLIST ANONSTACK;
	FBSTRING VARINI;
	int64 VARINISCOPELEVEL;
	FBSTRING FBCTINF;
	FBSTRING EXPORTS;
	FBSTRING ASM_LINE;
	int64 ASM_I;
	FBSTRING ASM_OUTPUT;
	FBSTRING ASM_INPUT;
	struct $5TLIST EXPRNODES;
	FBSTRING EXPRTEXT;
	struct $5TLIST EXPRCACHE;
	int64 GLOBALVARPASS;
};
__FB_STATIC_ASSERT( sizeof( struct $8IRHLCCTX ) == 5664 );
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
typedef int64 $13FB_COMPTARGET;
typedef int64 $16EMITPROC_OPTIONS;
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
struct $8EXPRNODE;
struct $8EXPRNODE {
	int64 CLASS;
	int64 DTYPE;
	struct $8FBSYMBOL* SUBTYPE;
	struct $8EXPRNODE* L;
	struct $8EXPRNODE* R;
	union {
		uint8* TEXT;
		union $7FBVALUE VAL;
		struct $8FBSYMBOL* SYM;
		int64 OP;
	};
};
__FB_STATIC_ASSERT( sizeof( struct $8EXPRNODE ) == 48 );
struct $13EXPRCACHENODE {
	int64 VREGID;
	struct $8EXPRNODE* EXPR;
};
__FB_STATIC_ASSERT( sizeof( struct $13EXPRCACHENODE ) == 16 );
struct $9IRCALLARG {
	struct $8FBSYMBOL* PARAM;
	struct $6IRVREG* VR;
	int64 LEVEL;
};
__FB_STATIC_ASSERT( sizeof( struct $9IRCALLARG ) == 24 );
int32 fb_FileOpen( FBSTRING*, uint32, uint32, uint32, int32, int32 );
int32 fb_FileClose( int32 );
int32 fb_FilePutStrLarge( int32, int64, void*, int64 );
int32 fb_FileFree( void );
int32 fb_FileKill( FBSTRING* );
void free( void* );
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
FBSTRING* fb_TRIM( FBSTRING* );
FBSTRING* fb_HEXEx_l( uint64, int32 );
FBSTRING* fb_LEFT( FBSTRING*, int64 );
FBSTRING* fb_RIGHT( FBSTRING*, int64 );
FBSTRING* fb_Time( void );
FBSTRING* fb_Date( void );
static void fb_ctor__irzhlc( void ) __attribute__(( constructor ));
void LISTINIT( struct $5TLIST*, int64, int64, $10LIST_FLAGS );
void LISTEND( struct $5TLIST* );
void* LISTNEWNODE( struct $5TLIST* );
void LISTDELNODE( struct $5TLIST*, void* );
void* LISTGETHEAD( struct $5TLIST* );
void* LISTGETTAIL( struct $5TLIST* );
void* LISTGETPREV( void* );
void* LISTGETNEXT( void* );
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
typedef int64 $12FB_ERRMSGOPT;
void ERRREPORTEX( int64, uint8*, int64, $12FB_ERRMSGOPT, uint8* );
int64 FBIS64BIT( void );
int64 FBGETCPUFAMILY( void );
int64 TYPECALCNATURALALIGN( int64, struct $8FBSYMBOL* );
void _Z21SYMBGETREALPARAMDTYPEP8FBSYMBOLRlRS0_( struct $8FBSYMBOL*, int64*, struct $8FBSYMBOL** );
int64 SYMBPROCRETURNSONSTACK( struct $8FBSYMBOL* );
int64 SYMBCALCPROCPARAMSLEN( struct $8FBSYMBOL* );
int64 SYMBHASDTOR( struct $8FBSYMBOL* );
int64 SYMBISDATADESC( struct $8FBSYMBOL* );
int64 TYPETOUNSIGNED( int64 );
uint8* SYMBUNIQUEID( void );
uint8* SYMBGETMANGLEDNAME( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBUDTGETFIRSTFIELD( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBUDTGETNEXTFIELD( struct $8FBSYMBOL* );
void SYMBFOREACHGLOBAL( int64, tmp$40 );
int64 HFILEEXISTS( uint8* );
FBSTRING* HFLOATTOHEX_C99( double );
uint8* ZSTRDUP( uint8* );
uint8* HUNESCAPE( uint8* );
uint32* HUNESCAPEW( uint32* );
FBSTRING* HREPLACE( uint8*, uint8*, uint8* );
int64 HCHARNEEDSESCAPING( int64, int64 );
int64 HISVALIDHEXDIGIT( int64 );
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
static void _ZN12SECTIONENTRYC1Ev( struct $12SECTIONENTRY* );
static void _ZN12SECTIONENTRYaSERKS_( struct $12SECTIONENTRY*, struct $12SECTIONENTRY* );
static void _ZN12SECTIONENTRYD1Ev( struct $12SECTIONENTRY* );
static void _ZN8IRHLCCTXC1Ev( struct $8IRHLCCTX* );
static void _ZN8IRHLCCTXaSERKS_( struct $8IRHLCCTX*, struct $8IRHLCCTX* );
static void _ZN8IRHLCCTXD1Ev( struct $8IRHLCCTX* );
static FBSTRING* HEMITTYPE( int64, struct $8FBSYMBOL* );
static void HEMITSTRUCT( struct $8FBSYMBOL*, int64 );
static void _EMITDBG( int64, struct $8FBSYMBOL*, int64 );
static void EXPRFREENODE( struct $8EXPRNODE* );
static void _INIT( void );
static void _END( void );
static void SECTIONBEGIN( void );
static void SECTIONWRITELINE( FBSTRING* );
static void SECTIONINDENT( void );
static void SECTIONUNINDENT( void );
static int64 SECTIONINSIDEPROC( void );
static void SECTIONEND( void );
static int64 SECTIONGOSUB( int64 );
static void SECTIONRETURN( int64 );
static void HWRITELINE( FBSTRING*, int64 );
static void HUPDATECURRENTFILENAME( uint8* );
static void HWRITESTATICASSERT( FBSTRING* );
static void HAPPENDCTORATTRIB( FBSTRING*, struct $8FBSYMBOL*, int64 );
static FBSTRING* HGETMANGLEDNAMEFORASM( struct $8FBSYMBOL*, int64 );
static int64 HNEEDALIAS( struct $8FBSYMBOL* );
static FBSTRING* HEMITPROCHEADER( struct $8FBSYMBOL*, $16EMITPROC_OPTIONS );
static FBSTRING* HGETUDTTAG( struct $8FBSYMBOL* );
static FBSTRING* HGETUDTID( struct $8FBSYMBOL* );
static FBSTRING* HGETUDTNAME( struct $8FBSYMBOL* );
static void HEMITUDT( struct $8FBSYMBOL*, int64 );
static FBSTRING* HEMITARRAYDECL( struct $8FBSYMBOL* );
static void HEMITVARDECL( int64, struct $8FBSYMBOL*, uint8* );
static void HMAYBEEMITLOCALVAR( struct $8FBSYMBOL* );
static void HALLOCGLOBALVAR( struct $8FBSYMBOL* );
static void HMAYBEEMITGLOBALVAR( struct $8FBSYMBOL* );
static void HMAYBEEMITGLOBALVAREXCEPTDATASTMT( struct $8FBSYMBOL* );
static void HMAYBEEMITPROCPROTO( struct $8FBSYMBOL* );
static void HEMITFIELDTYPES( struct $8FBSYMBOL* );
static struct $8FBSYMBOL** HFINDPARENTANONALREADYONSTACK( struct $8FBSYMBOL* );
static void HPUSHANONPARENTS( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static void HPOPANONPARENTS( struct $8FBSYMBOL** );
static void HEMITSTRUCTWITHFIELDS( struct $8FBSYMBOL* );
static void HWRITEX86F2I( FBSTRING*, int64, int64 );
static void HWRITEGENERICF2I( FBSTRING*, int64, int64 );
static void HWRITEF2I( FBSTRING*, int64, int64 );
static void HMAYBEEMITPROCEXPORT( struct $8FBSYMBOL* );
static int64 _EMITBEGIN( void );
static void _EMITEND( double );
static int64 _GETOPTIONVALUE( $14IR_OPTIONVALUE );
static int64 _SUPPORTSOP( int64, int64 );
static void _PROCBEGIN( struct $8FBSYMBOL* );
static void _PROCEND( struct $8FBSYMBOL* );
static void _SCOPEBEGIN( struct $8FBSYMBOL* );
static void _SCOPEEND( struct $8FBSYMBOL* );
static void _PROCALLOCSTATICVARS( struct $8FBSYMBOL* );
static void _SETVREGDATATYPE( struct $6IRVREG*, int64, struct $8FBSYMBOL* );
static struct $8EXPRNODE* EXPRNEW( int64, int64, struct $8FBSYMBOL* );
static void EXPRFREETREE( struct $8EXPRNODE* );
static struct $8EXPRNODE* EXPRNEWTEXT( int64, struct $8FBSYMBOL*, uint8* );
static struct $8EXPRNODE* EXPRNEWIMMI( int64, int64 );
static struct $8EXPRNODE* EXPRNEWIMMF( double, int64 );
static int64 SYMBISCARRAY( struct $8FBSYMBOL* );
static struct $8EXPRNODE* EXPRNEWCAST( int64, struct $8FBSYMBOL*, struct $8EXPRNODE* );
static struct $8EXPRNODE* EXPRNEWSYM( struct $8FBSYMBOL* );
static int64 TYPECBOP( int64, int64, int64 );
static struct $8EXPRNODE* EXPRNEWUOP( int64, struct $8EXPRNODE* );
static struct $8EXPRNODE* EXPRNEWBOP( int64, struct $8EXPRNODE*, struct $8EXPRNODE* );
static void EXPRCACHE( int64, struct $8EXPRNODE* );
static struct $8EXPRNODE* EXPRLOOKUP( int64 );
static FBSTRING* HEMITINT( int64, int64 );
static FBSTRING* HEMITFLOAT( int64, double );
static void HBUILDSTRLIT( FBSTRING*, uint8*, int64 );
static void HBUILDWSTRLIT( FBSTRING*, uint32*, int64 );
static uint8* HBOPTOSTR( int64 );
static uint8* HUOPTOSTR( int64, int64, int64* );
static void HEXPRFLUSH( struct $8EXPRNODE*, int64 );
static FBSTRING* EXPRFLUSH( struct $8EXPRNODE*, int64 );
static struct $8EXPRNODE* EXPRNEWOFFSET( struct $8FBSYMBOL*, int64 );
static struct $8EXPRNODE* EXPRNEWVREG( struct $6IRVREG*, int64 );
static void _EMITLABEL( struct $8FBSYMBOL* );
static void EXPRSTORE( struct $6IRVREG*, struct $8EXPRNODE*, int64 );
static void _EMITBOP( int64, struct $6IRVREG*, struct $6IRVREG*, struct $6IRVREG*, struct $8FBSYMBOL* );
static void _EMITUOP( int64, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCONVERT( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSTORE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSPILLREGS( void );
static void _EMITLOAD( struct $6IRVREG* );
static void _EMITLOADRES( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITADDR( int64, struct $6IRVREG*, struct $6IRVREG* );
static void HDOCALL( FBSTRING*, int64, struct $6IRVREG*, int64 );
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
static void _EMITPUSHARG( struct $8FBSYMBOL*, struct $6IRVREG*, int64, int64 );
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
extern struct $7IR_VTBL IRHLC_VTBL$;
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
static struct $8IRHLCCTX CTX$;
static uint8* DTYPENAME$[24] = { (uint8*)"void", (uint8*)"int8", (uint8*)"uint8", (uint8*)0ull, (uint8*)"int16", (uint8*)"uint16", (uint8*)0ull, (uint8*)0ull, (uint8*)0ull, (uint8*)0ull, (uint8*)"int32", (uint8*)"uint32", (uint8*)"int64", (uint8*)"uint64", (uint8*)"float", (uint8*)"double", (uint8*)"FBSTRING", (uint8*)0ull, (uint8*)0ull, (uint8*)0ull, (uint8*)0ull, (uint8*)"void", (uint8*)0ull };
struct $7IR_VTBL IRHLC_VTBL$ = { (tmp$35)&_INIT, (tmp$35)&_END, (tmp$36)&_EMITBEGIN, (tmp$37)&_EMITEND, (tmp$38)&_GETOPTIONVALUE, (tmp$39)&_SUPPORTSOP, (tmp$40)&_PROCBEGIN, (tmp$40)&_PROCEND, (tmp$41)0ull, (tmp$41)0ull, (tmp$42)0ull, (tmp$40)&_SCOPEBEGIN, (tmp$40)&_SCOPEEND, (tmp$40)&_PROCALLOCSTATICVARS, (tmp$43)&_EMITCONVERT, (tmp$40)&_EMITLABEL, (tmp$40)&_EMITLABEL, (tmp$44)0ull, (tmp$41)&_EMITPROCBEGIN, (tmp$45)&_EMITPROCEND, (tmp$46)&_EMITPUSHARG, (tmp$35)&_EMITASMBEGIN, (tmp$47)&_EMITASMTEXT, (tmp$40)&_EMITASMSYMB, (tmp$35)&_EMITASMEND, (tmp$47)&_EMITCOMMENT, (tmp$48)&_EMITBOP, (tmp$49)&_EMITUOP, (tmp$43)&_EMITSTORE, (tmp$35)&_EMITSPILLREGS, (tmp$50)&_EMITLOAD, (tmp$43)&_EMITLOADRES, (tmp$51)0ull, (tmp$49)&_EMITADDR, (tmp$52)&_EMITCALL, (tmp$53)&_EMITCALLPTR, (tmp$44)0ull, (tmp$50)&_EMITJUMPPTR, (tmp$54)&_EMITBRANCH, (tmp$55)&_EMITJMPTB, (tmp$56)&_EMITMEM, (tmp$40)&_EMITSCOPEBEGIN, (tmp$40)&_EMITSCOPEEND, (tmp$40)&_EMITDECL, (tmp$57)&_EMITDBG, (tmp$40)&_EMITVARINIBEGIN, (tmp$40)&_EMITVARINIEND, (tmp$58)&_EMITVARINII, (tmp$59)&_EMITVARINIF, (tmp$60)&_EMITVARINIOFS, (tmp$61)&_EMITVARINISTR, (tmp$62)&_EMITVARINIWSTR, (tmp$63)&_EMITVARINIPAD, (tmp$35)&_EMITVARINISCOPEBEGIN, (tmp$35)&_EMITVARINISCOPEEND, (tmp$35)&_EMITFBCTINFBEGIN, (tmp$47)&_EMITFBCTINFSTRING, (tmp$35)&_EMITFBCTINFEND, (tmp$64)&IRHLALLOCVREG, (tmp$65)&IRHLALLOCVRIMM, (tmp$66)&IRHLALLOCVRIMMF, (tmp$67)&IRHLALLOCVRVAR, (tmp$68)&IRHLALLOCVRIDX, (tmp$69)&IRHLALLOCVRPTR, (tmp$67)&IRHLALLOCVROFS, (tmp$70)&_SETVREGDATATYPE, (tmp$71)0ull, (tmp$49)0ull, (tmp$43)0ull, (tmp$44)0ull };
struct $5FBENV ENV$ __attribute__((common));

__attribute__(( constructor )) static void fb_ctor__irzhlc( void )
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

static void _ZN12SECTIONENTRYC1Ev( struct $12SECTIONENTRY* THIS$1 )
{
	__builtin_memset( (FBSTRING*)THIS$1, 0, 24ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 24ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 32ll), 0, 8ll );
	label$10:;
	label$11:;
}

static void _ZN12SECTIONENTRYaSERKS_( struct $12SECTIONENTRY* THIS$1, struct $12SECTIONENTRY* __FB_RHS__$1 )
{
	label$12:;
	FBSTRING* vr$4 = fb_StrAssign( (void*)THIS$1, -1ll, (void*)__FB_RHS__$1, -1ll, 0 );
	*(int64*)((uint8*)THIS$1 + 24ll) = *(int64*)((uint8*)__FB_RHS__$1 + 24ll);
	*(int64*)((uint8*)THIS$1 + 32ll) = *(int64*)((uint8*)__FB_RHS__$1 + 32ll);
	label$13:;
}

static void _ZN12SECTIONENTRYD1Ev( struct $12SECTIONENTRY* THIS$1 )
{
	label$16:;
	label$17:;
	fb_StrDelete( (FBSTRING*)THIS$1 );
}

static void _ZN8IRHLCCTXC1Ev( struct $8IRHLCCTX* THIS$1 )
{
	int64 TMP$88$1;
	struct $12SECTIONENTRY* TMP$89$1;
	TMP$89$1 = (struct $12SECTIONENTRY*)THIS$1;
	TMP$88$1 = 0ll;
	label$20:;
	_ZN12SECTIONENTRYC1Ev( TMP$89$1 );
	TMP$89$1 = (struct $12SECTIONENTRY*)((uint8*)TMP$89$1 + 40ll);
	TMP$88$1 = TMP$88$1 + 1ll;
	if( TMP$88$1 != 129ll ) goto label$20;
	__builtin_memset( (int64*)((uint8*)THIS$1 + 5160ll), 0, 8ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 5168ll), 0, 8ll );
	__builtin_memset( (struct $5TLIST*)((uint8*)THIS$1 + 5176ll), 0, 64ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 5240ll), 0, 8ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 5248ll), 0, 24ll );
	__builtin_memset( (uint64*)((uint8*)THIS$1 + 5272ll), 0, 8ll );
	__builtin_memset( (struct $5TLIST*)((uint8*)THIS$1 + 5280ll), 0, 64ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 5344ll), 0, 24ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 5368ll), 0, 8ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 5376ll), 0, 24ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 5400ll), 0, 24ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 5424ll), 0, 24ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 5448ll), 0, 8ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 5456ll), 0, 24ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 5480ll), 0, 24ll );
	__builtin_memset( (struct $5TLIST*)((uint8*)THIS$1 + 5504ll), 0, 64ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 5568ll), 0, 24ll );
	__builtin_memset( (struct $5TLIST*)((uint8*)THIS$1 + 5592ll), 0, 64ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 5656ll), 0, 8ll );
	label$18:;
	label$19:;
}

static void _ZN8IRHLCCTXaSERKS_( struct $8IRHLCCTX* THIS$1, struct $8IRHLCCTX* __FB_RHS__$1 )
{
	int64 TMP$90$1;
	struct $12SECTIONENTRY* TMP$91$1;
	struct $12SECTIONENTRY* TMP$92$1;
	label$21:;
	TMP$91$1 = (struct $12SECTIONENTRY*)THIS$1;
	TMP$92$1 = (struct $12SECTIONENTRY*)__FB_RHS__$1;
	TMP$90$1 = 0ll;
	label$23:;
	_ZN12SECTIONENTRYaSERKS_( TMP$91$1, TMP$92$1 );
	TMP$91$1 = (struct $12SECTIONENTRY*)((uint8*)TMP$91$1 + 40ll);
	TMP$92$1 = (struct $12SECTIONENTRY*)((uint8*)TMP$92$1 + 40ll);
	TMP$90$1 = TMP$90$1 + 1ll;
	if( TMP$90$1 != 129ll ) goto label$23;
	*(int64*)((uint8*)THIS$1 + 5160ll) = *(int64*)((uint8*)__FB_RHS__$1 + 5160ll);
	*(int64*)((uint8*)THIS$1 + 5168ll) = *(int64*)((uint8*)__FB_RHS__$1 + 5168ll);
	__builtin_memcpy( (struct $5TLIST*)((uint8*)THIS$1 + 5176ll), (struct $5TLIST*)((uint8*)__FB_RHS__$1 + 5176ll), 64 );
	*(int64*)((uint8*)THIS$1 + 5240ll) = *(int64*)((uint8*)__FB_RHS__$1 + 5240ll);
	FBSTRING* vr$22 = fb_StrAssign( (void*)((uint8*)THIS$1 + 5248ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 5248ll), -1ll, 0 );
	*(uint64*)((uint8*)THIS$1 + 5272ll) = *(uint64*)((uint8*)__FB_RHS__$1 + 5272ll);
	__builtin_memcpy( (struct $5TLIST*)((uint8*)THIS$1 + 5280ll), (struct $5TLIST*)((uint8*)__FB_RHS__$1 + 5280ll), 64 );
	FBSTRING* vr$33 = fb_StrAssign( (void*)((uint8*)THIS$1 + 5344ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 5344ll), -1ll, 0 );
	*(int64*)((uint8*)THIS$1 + 5368ll) = *(int64*)((uint8*)__FB_RHS__$1 + 5368ll);
	FBSTRING* vr$40 = fb_StrAssign( (void*)((uint8*)THIS$1 + 5376ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 5376ll), -1ll, 0 );
	FBSTRING* vr$45 = fb_StrAssign( (void*)((uint8*)THIS$1 + 5400ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 5400ll), -1ll, 0 );
	FBSTRING* vr$50 = fb_StrAssign( (void*)((uint8*)THIS$1 + 5424ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 5424ll), -1ll, 0 );
	*(int64*)((uint8*)THIS$1 + 5448ll) = *(int64*)((uint8*)__FB_RHS__$1 + 5448ll);
	FBSTRING* vr$57 = fb_StrAssign( (void*)((uint8*)THIS$1 + 5456ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 5456ll), -1ll, 0 );
	FBSTRING* vr$62 = fb_StrAssign( (void*)((uint8*)THIS$1 + 5480ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 5480ll), -1ll, 0 );
	__builtin_memcpy( (struct $5TLIST*)((uint8*)THIS$1 + 5504ll), (struct $5TLIST*)((uint8*)__FB_RHS__$1 + 5504ll), 64 );
	FBSTRING* vr$71 = fb_StrAssign( (void*)((uint8*)THIS$1 + 5568ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 5568ll), -1ll, 0 );
	__builtin_memcpy( (struct $5TLIST*)((uint8*)THIS$1 + 5592ll), (struct $5TLIST*)((uint8*)__FB_RHS__$1 + 5592ll), 64 );
	*(int64*)((uint8*)THIS$1 + 5656ll) = *(int64*)((uint8*)__FB_RHS__$1 + 5656ll);
	label$22:;
}

static void _ZN8IRHLCCTXD1Ev( struct $8IRHLCCTX* THIS$1 )
{
	int64 TMP$95$1;
	struct $12SECTIONENTRY* TMP$96$1;
	label$27:;
	label$28:;
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 5568ll) );
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 5480ll) );
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 5456ll) );
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 5424ll) );
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 5400ll) );
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 5376ll) );
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 5344ll) );
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 5248ll) );
	TMP$96$1 = (struct $12SECTIONENTRY*)((uint8*)THIS$1 + 5120ll);
	TMP$95$1 = 0ll;
	label$29:;
	_ZN12SECTIONENTRYD1Ev( TMP$96$1 );
	TMP$96$1 = (struct $12SECTIONENTRY*)((uint8*)TMP$96$1 + -40ll);
	TMP$95$1 = TMP$95$1 + 1ll;
	if( TMP$95$1 != 129ll ) goto label$29;
}

static void _INIT( void )
{
	label$30:;
	IRHLINIT(  );
	LISTINIT( (struct $5TLIST*)((uint8*)&CTX$ + 5176ll), 32ll, 24ll, 6ll );
	LISTINIT( (struct $5TLIST*)((uint8*)&CTX$ + 5280ll), 8ll, 8ll, 6ll );
	LISTINIT( (struct $5TLIST*)((uint8*)&CTX$ + 5504ll), 32ll, 48ll, 7ll );
	LISTINIT( (struct $5TLIST*)((uint8*)&CTX$ + 5592ll), 8ll, 16ll, 6ll );
	*($6IR_OPT*)((uint8*)&IR$ + 568ll) = *(int64*)((uint8*)&IR$ + 568ll) | 131074ll;
	int64 vr$5 = FBIS64BIT(  );
	if( vr$5 == 0ll ) goto label$33;
	{
		*(uint8**)((uint8*)DTYPENAME$ + 56ll) = *(uint8**)((uint8*)DTYPENAME$ + 96ll);
		*(uint8**)((uint8*)DTYPENAME$ + 64ll) = *(uint8**)((uint8*)DTYPENAME$ + 104ll);
	}
	goto label$32;
	label$33:;
	{
		*(uint8**)((uint8*)DTYPENAME$ + 56ll) = *(uint8**)((uint8*)DTYPENAME$ + 80ll);
		*(uint8**)((uint8*)DTYPENAME$ + 64ll) = *(uint8**)((uint8*)DTYPENAME$ + 88ll);
	}
	label$32:;
	label$31:;
}

static void _END( void )
{
	label$34:;
	LISTEND( (struct $5TLIST*)((uint8*)&CTX$ + 5592ll) );
	LISTEND( (struct $5TLIST*)((uint8*)&CTX$ + 5504ll) );
	LISTEND( (struct $5TLIST*)((uint8*)&CTX$ + 5280ll) );
	LISTEND( (struct $5TLIST*)((uint8*)&CTX$ + 5176ll) );
	IRHLEND(  );
	label$35:;
}

static void SECTIONBEGIN( void )
{
	label$36:;
	*(int64*)((uint8*)&CTX$ + 5160ll) = *(int64*)((uint8*)&CTX$ + 5160ll) + 1ll;
	{
		struct $12SECTIONENTRY* TMP$110$2;
		TMP$110$2 = (struct $12SECTIONENTRY*)((uint8*)&CTX$ + (*(int64*)((uint8*)&CTX$ + 5160ll) * 40ll));
		*(int64*)((uint8*)TMP$110$2 + 24ll) = -1ll;
		if( *(int64*)((uint8*)&CTX$ + 5160ll) <= 0ll ) goto label$39;
		{
			*(int64*)((uint8*)TMP$110$2 + 32ll) = *(int64*)((uint8*)((uint8*)&CTX$ + (*(int64*)((uint8*)&CTX$ + 5160ll) * 40ll)) + -8ll);
		}
		goto label$38;
		label$39:;
		{
			*(int64*)((uint8*)TMP$110$2 + 32ll) = 0ll;
		}
		label$38:;
	}
	label$37:;
}

static void SECTIONWRITELINE( FBSTRING* S$1 )
{
	label$40:;
	{
		FBSTRING TMP$117$2;
		struct $12SECTIONENTRY* TMP$111$2;
		TMP$111$2 = (struct $12SECTIONENTRY*)((uint8*)&CTX$ + (*(int64*)((uint8*)&CTX$ + 5160ll) * 40ll));
		if( *(int64*)((uint8*)TMP$111$2 + 24ll) == 0ll ) goto label$43;
		{
			if( *(int64*)((uint8*)TMP$111$2 + 32ll) <= 0ll ) goto label$45;
			{
				FBSTRING TMP$113$4;
				FBSTRING* vr$7 = fb_StrAllocTempDescZEx( (uint8*)"\x09", 1ll );
				FBSTRING* vr$9 = fb_StrFill2( *(int64*)((uint8*)TMP$111$2 + 32ll), vr$7 );
				FBSTRING* vr$12 = fb_StrAssign( (void*)TMP$111$2, -1ll, (void*)vr$9, -1ll, 0 );
				__builtin_memset( &TMP$113$4, 0, 24ll );
				FBSTRING* vr$17 = fb_StrConcat( &TMP$113$4, (void*)TMP$111$2, -1ll, (void*)S$1, -1ll );
				FBSTRING* vr$20 = fb_StrAssign( (void*)TMP$111$2, -1ll, (void*)vr$17, -1ll, 0 );
			}
			goto label$44;
			label$45:;
			{
				FBSTRING* vr$23 = fb_StrAssign( (void*)TMP$111$2, -1ll, (void*)S$1, -1ll, 0 );
			}
			label$44:;
			*(int64*)((uint8*)TMP$111$2 + 24ll) = 0ll;
		}
		goto label$42;
		label$43:;
		{
			FBSTRING TMP$115$3;
			if( *(int64*)((uint8*)TMP$111$2 + 32ll) <= 0ll ) goto label$47;
			{
				FBSTRING TMP$114$4;
				FBSTRING* vr$27 = fb_StrAllocTempDescZEx( (uint8*)"\x09", 1ll );
				FBSTRING* vr$29 = fb_StrFill2( *(int64*)((uint8*)TMP$111$2 + 32ll), vr$27 );
				__builtin_memset( &TMP$114$4, 0, 24ll );
				FBSTRING* vr$34 = fb_StrConcat( &TMP$114$4, (void*)TMP$111$2, -1ll, (void*)vr$29, -1ll );
				FBSTRING* vr$37 = fb_StrAssign( (void*)TMP$111$2, -1ll, (void*)vr$34, -1ll, 0 );
			}
			label$47:;
			label$46:;
			__builtin_memset( &TMP$115$3, 0, 24ll );
			FBSTRING* vr$42 = fb_StrConcat( &TMP$115$3, (void*)TMP$111$2, -1ll, (void*)S$1, -1ll );
			FBSTRING* vr$45 = fb_StrAssign( (void*)TMP$111$2, -1ll, (void*)vr$42, -1ll, 0 );
		}
		label$42:;
		__builtin_memset( &TMP$117$2, 0, 24ll );
		FBSTRING* vr$50 = fb_StrConcat( &TMP$117$2, (void*)TMP$111$2, -1ll, (void*)"\x0A", 2ll );
		FBSTRING* vr$53 = fb_StrAssign( (void*)TMP$111$2, -1ll, (void*)vr$50, -1ll, 0 );
	}
	label$41:;
}

static void SECTIONINDENT( void )
{
	label$48:;
	*(int64*)((uint8*)((uint8*)&CTX$ + (*(int64*)((uint8*)&CTX$ + 5160ll) * 40ll)) + 32ll) = *(int64*)((uint8*)((uint8*)&CTX$ + (*(int64*)((uint8*)&CTX$ + 5160ll) * 40ll)) + 32ll) + 1ll;
	label$49:;
}

static void SECTIONUNINDENT( void )
{
	label$50:;
	*(int64*)((uint8*)((uint8*)&CTX$ + (*(int64*)((uint8*)&CTX$ + 5160ll) * 40ll)) + 32ll) = *(int64*)((uint8*)((uint8*)&CTX$ + (*(int64*)((uint8*)&CTX$ + 5160ll) * 40ll)) + 32ll) + -1ll;
	label$51:;
}

static int64 SECTIONINSIDEPROC( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$52:;
	fb$result$1 = (int64)-(*(int64*)((uint8*)&CTX$ + 5160ll) >= 2ll);
	label$53:;
	return fb$result$1;
}

static void SECTIONEND( void )
{
	label$54:;
	struct $12SECTIONENTRY* PARENT$1;
	struct $12SECTIONENTRY* CHILD$1;
	if( *(int64*)((uint8*)&CTX$ + 5160ll) <= 0ll ) goto label$57;
	{
		PARENT$1 = (struct $12SECTIONENTRY*)((uint8*)((uint8*)&CTX$ + (*(int64*)((uint8*)&CTX$ + 5160ll) * 40ll)) + -40ll);
		CHILD$1 = (struct $12SECTIONENTRY*)((uint8*)&CTX$ + (*(int64*)((uint8*)&CTX$ + 5160ll) * 40ll));
		if( *(int64*)((uint8*)CHILD$1 + 24ll) != 0ll ) goto label$59;
		{
			if( *(int64*)((uint8*)PARENT$1 + 24ll) == 0ll ) goto label$61;
			{
				FBSTRING* vr$15 = fb_StrAssign( (void*)PARENT$1, -1ll, (void*)CHILD$1, -1ll, 0 );
				*(int64*)((uint8*)PARENT$1 + 24ll) = 0ll;
			}
			goto label$60;
			label$61:;
			{
				FBSTRING TMP$118$4;
				__builtin_memset( &TMP$118$4, 0, 24ll );
				FBSTRING* vr$23 = fb_StrConcat( &TMP$118$4, (void*)PARENT$1, -1ll, (void*)CHILD$1, -1ll );
				FBSTRING* vr$26 = fb_StrAssign( (void*)PARENT$1, -1ll, (void*)vr$23, -1ll, 0 );
			}
			label$60:;
		}
		label$59:;
		label$58:;
	}
	label$57:;
	label$56:;
	*(int64*)((uint8*)&CTX$ + 5160ll) = *(int64*)((uint8*)&CTX$ + 5160ll) + -1ll;
	label$55:;
}

static int64 SECTIONGOSUB( int64 SECTION$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$62:;
	fb$result$1 = *(int64*)((uint8*)&CTX$ + 5160ll);
	*(int64*)((uint8*)&CTX$ + 5160ll) = SECTION$1;
	*(int64*)((uint8*)&CTX$ + 5168ll) = *(int64*)((uint8*)&CTX$ + 5168ll) + 1ll;
	label$63:;
	return fb$result$1;
}

static void SECTIONRETURN( int64 SECTION$1 )
{
	label$64:;
	*(int64*)((uint8*)&CTX$ + 5168ll) = *(int64*)((uint8*)&CTX$ + 5168ll) + -1ll;
	*(int64*)((uint8*)&CTX$ + 5160ll) = SECTION$1;
	label$65:;
}

static void HWRITELINE( FBSTRING* S$1, int64 NOLINE$1 )
{
	label$66:;
	static FBSTRING LN$1;
	if( (*(int64*)((uint8*)&ENV$ + 288ll) & (int64)-(NOLINE$1 == 0ll)) == 0ll ) goto label$69;
	{
		FBSTRING* vr$3 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)"#line ", 7ll, 0 );
		FBSTRING* vr$4 = fb_LongintToStr( *(int64*)((uint8*)&CTX$ + 5240ll) );
		FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$4, -1ll, 0 );
		FBSTRING* vr$6 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" \x22", 3ll, 0 );
		FBSTRING* vr$8 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)((uint8*)&CTX$ + 5248ll), -1ll, 0 );
		FBSTRING* vr$9 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22", 2ll, 0 );
		SECTIONWRITELINE( &LN$1 );
	}
	label$69:;
	label$68:;
	SECTIONWRITELINE( S$1 );
	label$67:;
}

static void HUPDATECURRENTFILENAME( uint8* FILENAME$1 )
{
	label$70:;
	FBSTRING* vr$0 = HREPLACE( FILENAME$1, (uint8*)"\x5C", (uint8*)"\x5C\x5C" );
	FBSTRING* vr$2 = fb_StrAssign( (void*)((uint8*)&CTX$ + 5248ll), -1ll, (void*)vr$0, -1ll, 0 );
	label$71:;
}

static void HWRITESTATICASSERT( FBSTRING* EXPR$1 )
{
	FBSTRING TMP$128$1;
	FBSTRING TMP$129$1;
	FBSTRING TMP$130$1;
	label$72:;
	int64 SECTION$1;
	if( (*(uint64*)((uint8*)&CTX$ + 5272ll) & 16ull) != 0ull ) goto label$75;
	{
		FBSTRING TMP$125$2;
		*(uint64*)((uint8*)&CTX$ + 5272ll) = *(uint64*)((uint8*)&CTX$ + 5272ll) | 16ull;
		int64 vr$3 = SECTIONGOSUB( 0ll );
		SECTION$1 = vr$3;
		__builtin_memset( &TMP$125$2, 0, 24ll );
		FBSTRING* vr$6 = fb_StrAssign( (void*)&TMP$125$2, -1ll, (void*)"#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]", 85ll, 0 );
		HWRITELINE( &TMP$125$2, -1ll );
		fb_StrDelete( &TMP$125$2 );
		SECTIONRETURN( SECTION$1 );
	}
	label$75:;
	label$74:;
	__builtin_memset( &TMP$130$1, 0, 24ll );
	__builtin_memset( &TMP$128$1, 0, 24ll );
	FBSTRING* vr$12 = fb_StrConcat( &TMP$128$1, (void*)"__FB_STATIC_ASSERT( ", 21ll, (void*)EXPR$1, -1ll );
	__builtin_memset( &TMP$129$1, 0, 24ll );
	FBSTRING* vr$15 = fb_StrConcat( &TMP$129$1, (void*)vr$12, -1ll, (void*)" );", 4ll );
	FBSTRING* vr$17 = fb_StrAssign( (void*)&TMP$130$1, -1ll, (void*)vr$15, -1ll, 0 );
	HWRITELINE( &TMP$130$1, 0ll );
	fb_StrDelete( &TMP$130$1 );
	label$73:;
}

static void HAPPENDCTORATTRIB( FBSTRING* LN$1, struct $8FBSYMBOL* PROC$1, int64 IN_FRONT$1 )
{
	label$76:;
	int64 PRIORITY$1;
	if( (*(int64*)((uint8*)PROC$1 + 16ll) & 196608ll) == 0ll ) goto label$79;
	{
		FBSTRING TMP$134$2;
		FBSTRING TMP$145$2;
		if( IN_FRONT$1 != 0ll ) goto label$81;
		{
			FBSTRING TMP$132$3;
			__builtin_memset( &TMP$132$3, 0, 24ll );
			FBSTRING* vr$6 = fb_StrConcat( &TMP$132$3, (void*)LN$1, -1ll, (void*)" ", 2ll );
			FBSTRING* vr$7 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$6, -1ll, 0 );
		}
		label$81:;
		label$80:;
		__builtin_memset( &TMP$134$2, 0, 24ll );
		FBSTRING* vr$10 = fb_StrConcat( &TMP$134$2, (void*)LN$1, -1ll, (void*)"__attribute__(( ", 17ll );
		FBSTRING* vr$11 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$10, -1ll, 0 );
		if( (*(int64*)((uint8*)PROC$1 + 16ll) & 65536ll) == 0ll ) goto label$83;
		{
			FBSTRING TMP$136$3;
			__builtin_memset( &TMP$136$3, 0, 24ll );
			FBSTRING* vr$17 = fb_StrConcat( &TMP$136$3, (void*)LN$1, -1ll, (void*)"constructor", 12ll );
			FBSTRING* vr$18 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$17, -1ll, 0 );
		}
		goto label$82;
		label$83:;
		{
			FBSTRING TMP$138$3;
			__builtin_memset( &TMP$138$3, 0, 24ll );
			FBSTRING* vr$21 = fb_StrConcat( &TMP$138$3, (void*)LN$1, -1ll, (void*)"destructor", 11ll );
			FBSTRING* vr$22 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$21, -1ll, 0 );
		}
		label$82:;
		PRIORITY$1 = *(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 112ll);
		if( PRIORITY$1 == 0ll ) goto label$85;
		{
			FBSTRING TMP$141$3;
			FBSTRING TMP$142$3;
			FBSTRING TMP$143$3;
			FBSTRING* vr$26 = fb_LongintToStr( PRIORITY$1 );
			__builtin_memset( &TMP$141$3, 0, 24ll );
			FBSTRING* vr$29 = fb_StrConcat( &TMP$141$3, (void*)"( ", 3ll, (void*)vr$26, -1ll );
			__builtin_memset( &TMP$142$3, 0, 24ll );
			FBSTRING* vr$32 = fb_StrConcat( &TMP$142$3, (void*)vr$29, -1ll, (void*)" )", 3ll );
			__builtin_memset( &TMP$143$3, 0, 24ll );
			FBSTRING* vr$35 = fb_StrConcat( &TMP$143$3, (void*)LN$1, -1ll, (void*)vr$32, -1ll );
			FBSTRING* vr$36 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$35, -1ll, 0 );
		}
		label$85:;
		label$84:;
		__builtin_memset( &TMP$145$2, 0, 24ll );
		FBSTRING* vr$39 = fb_StrConcat( &TMP$145$2, (void*)LN$1, -1ll, (void*)" ))", 4ll );
		FBSTRING* vr$40 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$39, -1ll, 0 );
		if( IN_FRONT$1 == 0ll ) goto label$87;
		{
			FBSTRING TMP$146$3;
			__builtin_memset( &TMP$146$3, 0, 24ll );
			FBSTRING* vr$44 = fb_StrConcat( &TMP$146$3, (void*)LN$1, -1ll, (void*)" ", 2ll );
			FBSTRING* vr$45 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$44, -1ll, 0 );
		}
		label$87:;
		label$86:;
	}
	label$79:;
	label$78:;
	label$77:;
}

static FBSTRING* HGETMANGLEDNAMEFORASM( struct $8FBSYMBOL* SYM$1, int64 UNDERSCORE_PREFIX$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$88:;
	FBSTRING MANGLED$1;
	__builtin_memset( &MANGLED$1, 0, 24ll );
	uint8* vr$2 = SYMBGETMANGLEDNAME( SYM$1 );
	fb_StrAssign( (void*)&MANGLED$1, -1ll, (void*)vr$2, 0ll, 0 );
	if( (UNDERSCORE_PREFIX$1 & *(int64*)((uint8*)&ENV$ + 464ll)) == 0ll ) goto label$91;
	{
		FBSTRING TMP$148$2;
		__builtin_memset( &TMP$148$2, 0, 24ll );
		FBSTRING* vr$9 = fb_StrConcat( &TMP$148$2, (void*)"_", 2ll, (void*)&MANGLED$1, -1ll );
		FBSTRING* vr$11 = fb_StrAssign( (void*)&MANGLED$1, -1ll, (void*)vr$9, -1ll, 0 );
	}
	label$91:;
	label$90:;
	int64 vr$12 = FBGETCPUFAMILY(  );
	if( ((int64)-(vr$12 == 0ll) & (int64)-(*(int64*)SYM$1 == 3ll)) == 0ll ) goto label$93;
	{
		if( *(int64*)((uint8*)SYM$1 + 144ll) != 1ll ) goto label$95;
		{
			FBSTRING* vr$21 = fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)"@", 2ll, 0 );
			int64 vr$22 = SYMBCALCPROCPARAMSLEN( SYM$1 );
			FBSTRING* vr$23 = fb_LongintToStr( vr$22 );
			FBSTRING* vr$25 = fb_StrConcatAssign( (void*)&MANGLED$1, -1ll, (void*)vr$23, -1ll, 0 );
		}
		label$95:;
		label$94:;
	}
	label$93:;
	label$92:;
	FBSTRING* vr$28 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&MANGLED$1, -1ll, 0 );
	fb_StrDelete( &MANGLED$1 );
	label$89:;
	FBSTRING* vr$31 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$31;
}

static int64 HNEEDALIAS( struct $8FBSYMBOL* PROC$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$96:;
	fb$result$1 = 0ll;
	int64 vr$1 = FBGETCPUFAMILY(  );
	if( vr$1 == 0ll ) goto label$99;
	{
		goto label$97;
	}
	label$99:;
	label$98:;
	{
		$13FB_COMPTARGET TMP$150$2;
		TMP$150$2 = *($13FB_COMPTARGET*)((uint8*)&ENV$ + 216ll);
		if( TMP$150$2 == 0ll ) goto label$102;
		label$103:;
		if( TMP$150$2 == 1ll ) goto label$102;
		label$104:;
		if( TMP$150$2 != 4ll ) goto label$101;
		label$102:;
		{
		}
		goto label$100;
		label$101:;
		{
			goto label$97;
		}
		label$105:;
		label$100:;
	}
	{
		$11FB_FUNCMODE TMP$151$2;
		TMP$151$2 = *($11FB_FUNCMODE*)((uint8*)PROC$1 + 144ll);
		if( TMP$151$2 == 2ll ) goto label$108;
		label$109:;
		if( TMP$151$2 != 4ll ) goto label$107;
		label$108:;
		{
			fb$result$1 = -1ll;
		}
		goto label$106;
		label$107:;
		if( TMP$151$2 != 1ll ) goto label$110;
		label$111:;
		{
			int64 vr$10 = SYMBPROCRETURNSONSTACK( PROC$1 );
			fb$result$1 = vr$10;
		}
		label$110:;
		label$106:;
	}
	label$97:;
	return fb$result$1;
}

static FBSTRING* HEMITPROCHEADER( struct $8FBSYMBOL* PROC$1, $16EMITPROC_OPTIONS OPTIONS$1 )
{
	FBSTRING TMP$153$1;
	struct $8FBSYMBOL* TMP$165$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$112:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	FBSTRING MANGLED$1;
	__builtin_memset( &MANGLED$1, 0, 24ll );
	int64 DTYPE$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	if( OPTIONS$1 != 0ll ) goto label$115;
	{
		HAPPENDCTORATTRIB( &LN$1, PROC$1, -1ll );
	}
	label$115:;
	label$114:;
	if( (OPTIONS$1 & 2ll) != 0ll ) goto label$117;
	{
		if( (*(int64*)((uint8*)PROC$1 + 8ll) & 64ll) == 0ll ) goto label$119;
		{
			FBSTRING* vr$11 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"static ", 8ll, 0 );
		}
		label$119:;
		label$118:;
	}
	label$117:;
	label$116:;
	FBSTRING* vr$15 = HEMITTYPE( *(int64*)((uint8*)PROC$1 + 152ll) & 511ll, *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 160ll) );
	__builtin_memset( &TMP$153$1, 0, 24ll );
	FBSTRING* vr$19 = fb_StrConcat( &TMP$153$1, (void*)&LN$1, -1ll, (void*)vr$15, -1ll );
	FBSTRING* vr$21 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$19, -1ll, 0 );
	int64 vr$22 = FBGETCPUFAMILY(  );
	if( vr$22 != 0ll ) goto label$121;
	{
		{
			$11FB_FUNCMODE TMP$154$3;
			TMP$154$3 = *($11FB_FUNCMODE*)((uint8*)PROC$1 + 144ll);
			if( TMP$154$3 == 1ll ) goto label$124;
			label$125:;
			if( TMP$154$3 == 2ll ) goto label$124;
			label$126:;
			if( TMP$154$3 != 4ll ) goto label$123;
			label$124:;
			{
				{
					$13FB_COMPTARGET TMP$155$5;
					TMP$155$5 = *($13FB_COMPTARGET*)((uint8*)&ENV$ + 216ll);
					if( TMP$155$5 == 0ll ) goto label$129;
					label$130:;
					if( TMP$155$5 != 4ll ) goto label$128;
					label$129:;
					{
						FBSTRING* vr$31 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" __stdcall", 11ll, 0 );
					}
					goto label$127;
					label$128:;
					{
						FBSTRING* vr$33 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" __attribute__((stdcall))", 26ll, 0 );
					}
					label$131:;
					label$127:;
				}
			}
			label$123:;
			label$122:;
		}
	}
	label$121:;
	label$120:;
	FBSTRING* vr$35 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" ", 2ll, 0 );
	uint8* vr$36 = SYMBGETMANGLEDNAME( PROC$1 );
	fb_StrAssign( (void*)&MANGLED$1, -1ll, (void*)vr$36, 0ll, 0 );
	if( (OPTIONS$1 & 2ll) == 0ll ) goto label$133;
	{
		FBSTRING* vr$41 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"(*", 3ll, 0 );
		FBSTRING* vr$44 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)&MANGLED$1, -1ll, 0 );
		FBSTRING* vr$46 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)")", 2ll, 0 );
	}
	goto label$132;
	label$133:;
	{
		FBSTRING* vr$49 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)&MANGLED$1, -1ll, 0 );
	}
	label$132:;
	FBSTRING* vr$51 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"( ", 3ll, 0 );
	struct $8FBSYMBOL* HIDDEN$1;
	HIDDEN$1 = (struct $8FBSYMBOL*)0ull;
	int64 vr$52 = SYMBPROCRETURNSONSTACK( PROC$1 );
	if( vr$52 == 0ll ) goto label$135;
	{
		if( (OPTIONS$1 & 1ll) == 0ll ) goto label$137;
		{
			FBSTRING TMP$160$3;
			HIDDEN$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 56ll);
			FBSTRING* vr$70 = HEMITTYPE( (((*(int64*)((uint8*)HIDDEN$1 + 48ll) & 511ll) & 31ll) | (((*(int64*)((uint8*)HIDDEN$1 + 48ll) & 511ll) & 480ll) + 32ll)) | (((*(int64*)((uint8*)HIDDEN$1 + 48ll) & 511ll) & 261632ll) << 1ll), HIDDEN$1 );
			__builtin_memset( &TMP$160$3, 0, 24ll );
			FBSTRING* vr$74 = fb_StrConcat( &TMP$160$3, (void*)&LN$1, -1ll, (void*)vr$70, -1ll );
			FBSTRING* vr$76 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$74, -1ll, 0 );
		}
		goto label$136;
		label$137:;
		{
			FBSTRING TMP$161$3;
			FBSTRING TMP$162$3;
			FBSTRING TMP$163$3;
			HIDDEN$1 = *(struct $8FBSYMBOL**)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll);
			FBSTRING* vr$93 = HEMITTYPE( (((*(int64*)((uint8*)HIDDEN$1 + 48ll) & 511ll) & 31ll) | (((*(int64*)((uint8*)HIDDEN$1 + 48ll) & 511ll) & 480ll) + 32ll)) | (((*(int64*)((uint8*)HIDDEN$1 + 48ll) & 511ll) & 261632ll) << 1ll), *(struct $8FBSYMBOL**)((uint8*)HIDDEN$1 + 56ll) );
			__builtin_memset( &TMP$161$3, 0, 24ll );
			FBSTRING* vr$97 = fb_StrConcat( &TMP$161$3, (void*)&LN$1, -1ll, (void*)vr$93, -1ll );
			FBSTRING* vr$99 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$97, -1ll, 0 );
			uint8* vr$100 = SYMBGETMANGLEDNAME( HIDDEN$1 );
			__builtin_memset( &TMP$162$3, 0, 24ll );
			FBSTRING* vr$103 = fb_StrConcat( &TMP$162$3, (void*)" ", 2ll, (void*)vr$100, 0ll );
			__builtin_memset( &TMP$163$3, 0, 24ll );
			FBSTRING* vr$107 = fb_StrConcat( &TMP$163$3, (void*)&LN$1, -1ll, (void*)vr$103, -1ll );
			FBSTRING* vr$109 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$107, -1ll, 0 );
		}
		label$136:;
		if( (int64)*(int16*)((uint8*)PROC$1 + 112ll) <= 0ll ) goto label$139;
		{
			FBSTRING* vr$114 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", ", 3ll, 0 );
		}
		label$139:;
		label$138:;
	}
	label$135:;
	label$134:;
	struct $8FBSYMBOL* PARAM$1;
	if( *(int64*)((uint8*)PROC$1 + 144ll) != 4ll ) goto label$140;
	TMP$165$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 136ll);
	goto label$1037;
	label$140:;
	TMP$165$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 128ll);
	label$1037:;
	PARAM$1 = TMP$165$1;
	if( ((int64)-(HIDDEN$1 == (struct $8FBSYMBOL*)0ull) & (int64)-(PARAM$1 == (struct $8FBSYMBOL*)0ull)) == 0ll ) goto label$142;
	{
		FBSTRING* vr$124 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"void", 5ll, 0 );
	}
	label$142:;
	label$141:;
	label$143:;
	if( PARAM$1 == (struct $8FBSYMBOL*)0ull ) goto label$144;
	{
		struct $8FBSYMBOL* TMP$170$2;
		if( *(int64*)((uint8*)PARAM$1 + 88ll) != 4ll ) goto label$146;
		{
			FBSTRING* vr$129 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"...", 4ll, 0 );
		}
		goto label$145;
		label$146:;
		{
			if( (*(int64*)((uint8*)PARAM$1 + 16ll) & 524288ll) == 0ll ) goto label$148;
			{
				FBSTRING* vr$134 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"char**", 7ll, 0 );
			}
			goto label$147;
			label$148:;
			{
				_Z21SYMBGETREALPARAMDTYPEP8FBSYMBOLRlRS0_( PARAM$1, &DTYPE$1, &SUBTYPE$1 );
				FBSTRING* vr$137 = HEMITTYPE( DTYPE$1, SUBTYPE$1 );
				FBSTRING* vr$139 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$137, -1ll, 0 );
			}
			label$147:;
			if( (OPTIONS$1 & 1ll) != 0ll ) goto label$150;
			{
				FBSTRING TMP$168$4;
				FBSTRING TMP$169$4;
				uint8* vr$143 = SYMBGETMANGLEDNAME( *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 96ll) );
				__builtin_memset( &TMP$168$4, 0, 24ll );
				FBSTRING* vr$146 = fb_StrConcat( &TMP$168$4, (void*)" ", 2ll, (void*)vr$143, 0ll );
				__builtin_memset( &TMP$169$4, 0, 24ll );
				FBSTRING* vr$150 = fb_StrConcat( &TMP$169$4, (void*)&LN$1, -1ll, (void*)vr$146, -1ll );
				FBSTRING* vr$152 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$150, -1ll, 0 );
			}
			label$150:;
			label$149:;
		}
		label$145:;
		if( *(int64*)((uint8*)PROC$1 + 144ll) != 4ll ) goto label$151;
		TMP$170$2 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 288ll);
		goto label$1038;
		label$151:;
		TMP$170$2 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 296ll);
		label$1038:;
		PARAM$1 = TMP$170$2;
		if( PARAM$1 == (struct $8FBSYMBOL*)0ull ) goto label$153;
		{
			FBSTRING* vr$159 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)", ", 3ll, 0 );
		}
		label$153:;
		label$152:;
	}
	goto label$143;
	label$144:;
	FBSTRING* vr$161 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" )", 3ll, 0 );
	if( ((int64)-((OPTIONS$1 & 2ll) == 0ll) & (int64)-((OPTIONS$1 & 1ll) != 0ll)) == 0ll ) goto label$155;
	{
		int64 vr$168 = HNEEDALIAS( PROC$1 );
		if( vr$168 == 0ll ) goto label$157;
		{
			FBSTRING* vr$171 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" asm(\x22", 7ll, 0 );
			FBSTRING* vr$172 = HGETMANGLEDNAMEFORASM( PROC$1, -1ll );
			FBSTRING* vr$174 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$172, -1ll, 0 );
			FBSTRING* vr$176 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"\x22)", 3ll, 0 );
		}
		label$157:;
		label$156:;
		HAPPENDCTORATTRIB( &LN$1, PROC$1, 0ll );
	}
	label$155:;
	label$154:;
	FBSTRING* vr$180 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&LN$1, -1ll, 0 );
	fb_StrDelete( &MANGLED$1 );
	fb_StrDelete( &LN$1 );
	label$113:;
	FBSTRING* vr$184 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$184;
}

static FBSTRING* HGETUDTTAG( struct $8FBSYMBOL* SYM$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$158:;
	if( *(int64*)SYM$1 != 10ll ) goto label$161;
	{
		if( ((int64)*(int16*)((uint8*)SYM$1 + 200ll) & 1ll) == 0ll ) goto label$163;
		{
			fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"union ", 7ll, 0 );
		}
		goto label$162;
		label$163:;
		{
			fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"struct ", 8ll, 0 );
		}
		label$162:;
	}
	label$161:;
	label$160:;
	label$159:;
	FBSTRING* vr$10 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$10;
}

static FBSTRING* HGETUDTID( struct $8FBSYMBOL* SYM$1 )
{
	FBSTRING TMP$176$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$164:;
	uint8* vr$1 = SYMBGETMANGLEDNAME( SYM$1 );
	__builtin_memset( &TMP$176$1, 0, 24ll );
	FBSTRING* vr$4 = fb_StrConcat( &TMP$176$1, (void*)"$", 2ll, (void*)vr$1, 0ll );
	FBSTRING* vr$6 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$4, -1ll, 0 );
	label$165:;
	FBSTRING* vr$8 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$8;
}

static FBSTRING* HGETUDTNAME( struct $8FBSYMBOL* SYM$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$166:;
	FBSTRING* vr$1 = HGETUDTTAG( SYM$1 );
	FBSTRING* vr$3 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$1, -1ll, 0 );
	FBSTRING* vr$4 = HGETUDTID( SYM$1 );
	FBSTRING* vr$6 = fb_StrConcatAssign( (void*)&fb$result$1, -1ll, (void*)vr$4, -1ll, 0 );
	label$167:;
	FBSTRING* vr$8 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$8;
}

static void HEMITUDT( struct $8FBSYMBOL* S$1, int64 IS_PTR$1 )
{
	label$168:;
	int64 SECTION$1;
	if( S$1 != (struct $8FBSYMBOL*)0ull ) goto label$171;
	{
		goto label$169;
	}
	label$171:;
	label$170:;
	if( (*(int64*)((uint8*)S$1 + 16ll) & 67108864ll) == 0ll ) goto label$173;
	{
		goto label$169;
	}
	label$173:;
	label$172:;
	if( (*(int64*)((uint8*)S$1 + 8ll) & 128ll) == 0ll ) goto label$175;
	{
		SECTION$1 = (int64)*(uint16*)((uint8*)S$1 + 64ll) + 1ll;
		if( (int64)*(uint16*)((uint8*)S$1 + 64ll) != 0ll ) goto label$177;
		{
			SECTION$1 = SECTION$1 + 1ll;
		}
		label$177:;
		label$176:;
		if( SECTION$1 <= *(int64*)((uint8*)&CTX$ + 5160ll) ) goto label$179;
		{
			SECTION$1 = *(int64*)((uint8*)&CTX$ + 5160ll);
		}
		label$179:;
		label$178:;
	}
	goto label$174;
	label$175:;
	{
		SECTION$1 = 0ll;
	}
	label$174:;
	int64 vr$15 = SECTIONGOSUB( SECTION$1 );
	SECTION$1 = vr$15;
	{
		uint64 TMP$177$2;
		TMP$177$2 = *(uint64*)S$1;
		goto label$181;
		label$182:;
		{
			FBSTRING TMP$180$3;
			FBSTRING TMP$181$3;
			FBSTRING TMP$182$3;
			FBSTRING TMP$183$3;
			FBSTRING TMP$184$3;
			*($12FB_SYMBSTATS*)((uint8*)S$1 + 16ll) = *(int64*)((uint8*)S$1 + 16ll) | 67108864ll;
			__builtin_memset( &TMP$184$3, 0, 24ll );
			FBSTRING* vr$21 = HGETUDTNAME( S$1 );
			FBSTRING* vr$22 = HEMITTYPE( 9ll, (struct $8FBSYMBOL*)0ull );
			__builtin_memset( &TMP$180$3, 0, 24ll );
			FBSTRING* vr$25 = fb_StrConcat( &TMP$180$3, (void*)"typedef ", 9ll, (void*)vr$22, -1ll );
			__builtin_memset( &TMP$181$3, 0, 24ll );
			FBSTRING* vr$28 = fb_StrConcat( &TMP$181$3, (void*)vr$25, -1ll, (void*)" ", 2ll );
			__builtin_memset( &TMP$182$3, 0, 24ll );
			FBSTRING* vr$31 = fb_StrConcat( &TMP$182$3, (void*)vr$28, -1ll, (void*)vr$21, -1ll );
			__builtin_memset( &TMP$183$3, 0, 24ll );
			FBSTRING* vr$34 = fb_StrConcat( &TMP$183$3, (void*)vr$31, -1ll, (void*)";", 2ll );
			FBSTRING* vr$36 = fb_StrAssign( (void*)&TMP$184$3, -1ll, (void*)vr$34, -1ll, 0 );
			HWRITELINE( &TMP$184$3, 0ll );
			fb_StrDelete( &TMP$184$3 );
		}
		goto label$180;
		label$183:;
		{
			HEMITSTRUCT( S$1, IS_PTR$1 );
		}
		goto label$180;
		label$184:;
		{
			if( (*(int64*)((uint8*)S$1 + 16ll) & 16384ll) == 0ll ) goto label$186;
			{
				FBSTRING TMP$185$4;
				FBSTRING TMP$186$4;
				FBSTRING TMP$187$4;
				__builtin_memset( &TMP$187$4, 0, 24ll );
				FBSTRING* vr$43 = HEMITPROCHEADER( S$1, 3ll );
				__builtin_memset( &TMP$185$4, 0, 24ll );
				FBSTRING* vr$46 = fb_StrConcat( &TMP$185$4, (void*)"typedef ", 9ll, (void*)vr$43, -1ll );
				__builtin_memset( &TMP$186$4, 0, 24ll );
				FBSTRING* vr$49 = fb_StrConcat( &TMP$186$4, (void*)vr$46, -1ll, (void*)";", 2ll );
				FBSTRING* vr$51 = fb_StrAssign( (void*)&TMP$187$4, -1ll, (void*)vr$49, -1ll, 0 );
				HWRITELINE( &TMP$187$4, 0ll );
				fb_StrDelete( &TMP$187$4 );
				*($12FB_SYMBSTATS*)((uint8*)S$1 + 16ll) = *(int64*)((uint8*)S$1 + 16ll) | 67108864ll;
			}
			label$186:;
			label$185:;
		}
		goto label$180;
		label$181:;
		static const void* tmp$646[8ll] = {
			&&label$184,
			&&label$180,
			&&label$180,
			&&label$180,
			&&label$180,
			&&label$180,
			&&label$182,
			&&label$183,
		};
		if( TMP$177$2 < 3ll ) goto label$180;
		if( TMP$177$2 > 10ll ) goto label$180;
		goto *tmp$646[TMP$177$2 - 3ll];
		label$180:;
	}
	SECTIONRETURN( SECTION$1 );
	label$169:;
}

static FBSTRING* HEMITARRAYDECL( struct $8FBSYMBOL* SYM$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$187:;
	FBSTRING S$1;
	__builtin_memset( &S$1, 0, 24ll );
	{
		$12FB_SYMBCLASS TMP$188$2;
		TMP$188$2 = *($12FB_SYMBCLASS*)SYM$1;
		if( TMP$188$2 == 1ll ) goto label$191;
		label$192:;
		if( TMP$188$2 != 12ll ) goto label$190;
		label$191:;
		{
			if( (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 65540ll) != 0ll) != 0ll ) goto label$194;
			{
				{
					int64 I$5;
					I$5 = 0ll;
					int64 TMP$189$5;
					TMP$189$5 = *(int64*)((uint8*)SYM$1 + 96ll) + -1ll;
					goto label$195;
					label$198:;
					{
						FBSTRING TMP$192$6;
						FBSTRING TMP$193$6;
						FBSTRING TMP$194$6;
						FBSTRING* vr$19 = fb_LongintToStr( (*(int64*)((uint8*)((uint8*)*(struct $10FBARRAYDIM**)((uint8*)SYM$1 + 104ll) + (I$5 << 4ll)) + 8ll) - *(int64*)((uint8*)*(struct $10FBARRAYDIM**)((uint8*)SYM$1 + 104ll) + (I$5 << 4ll))) + 1ll );
						__builtin_memset( &TMP$192$6, 0, 24ll );
						FBSTRING* vr$22 = fb_StrConcat( &TMP$192$6, (void*)"[", 2ll, (void*)vr$19, -1ll );
						__builtin_memset( &TMP$193$6, 0, 24ll );
						FBSTRING* vr$25 = fb_StrConcat( &TMP$193$6, (void*)vr$22, -1ll, (void*)"]", 2ll );
						__builtin_memset( &TMP$194$6, 0, 24ll );
						FBSTRING* vr$29 = fb_StrConcat( &TMP$194$6, (void*)&S$1, -1ll, (void*)vr$25, -1ll );
						FBSTRING* vr$31 = fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$29, -1ll, 0 );
					}
					label$196:;
					I$5 = I$5 + 1ll;
					label$195:;
					if( I$5 <= TMP$189$5 ) goto label$198;
					label$197:;
				}
			}
			label$194:;
			label$193:;
		}
		label$190:;
		label$189:;
	}
	int64 LENGTH$1;
	LENGTH$1 = 0ll;
	{
		int64 TMP$195$2;
		TMP$195$2 = *(int64*)((uint8*)SYM$1 + 48ll) & 511ll;
		if( TMP$195$2 == 17ll ) goto label$201;
		label$202:;
		if( TMP$195$2 != 3ll ) goto label$200;
		label$201:;
		{
			LENGTH$1 = *(int64*)((uint8*)SYM$1 + 72ll);
		}
		goto label$199;
		label$200:;
		if( TMP$195$2 != 6ll ) goto label$203;
		label$204:;
		{
			LENGTH$1 = *(int64*)((uint8*)SYM$1 + 72ll) / *(int64*)((uint8*)SYMB_DTYPETB$ + 344ll);
		}
		label$203:;
		label$199:;
	}
	if( LENGTH$1 <= 0ll ) goto label$206;
	{
		FBSTRING* vr$44 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"[", 2ll, 0 );
		FBSTRING* vr$45 = fb_LongintToStr( LENGTH$1 );
		FBSTRING* vr$47 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)vr$45, -1ll, 0 );
		FBSTRING* vr$49 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"]", 2ll, 0 );
	}
	label$206:;
	label$205:;
	FBSTRING* vr$52 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&S$1, -1ll, 0 );
	fb_StrDelete( &S$1 );
	label$188:;
	FBSTRING* vr$55 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$55;
}

static void HEMITVARDECL( int64 USE_EXTERN$1, struct $8FBSYMBOL* SYM$1, uint8* VARINI$1 )
{
	FBSTRING TMP$197$1;
	FBSTRING TMP$198$1;
	FBSTRING TMP$199$1;
	label$207:;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	if( USE_EXTERN$1 == 0ll ) goto label$210;
	{
		FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"extern ", 8ll, 0 );
	}
	goto label$209;
	label$210:;
	if( ((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 2ll) != 0ll) & (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 56ll) == 0ll)) == 0ll ) goto label$211;
	{
		FBSTRING* vr$13 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"static ", 8ll, 0 );
	}
	label$211:;
	label$209:;
	FBSTRING* vr$17 = HEMITTYPE( *(int64*)((uint8*)SYM$1 + 48ll) & 511ll, *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll) );
	__builtin_memset( &TMP$197$1, 0, 24ll );
	FBSTRING* vr$21 = fb_StrConcat( &TMP$197$1, (void*)&LN$1, -1ll, (void*)vr$17, -1ll );
	FBSTRING* vr$23 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$21, -1ll, 0 );
	uint8* vr$24 = SYMBGETMANGLEDNAME( SYM$1 );
	__builtin_memset( &TMP$198$1, 0, 24ll );
	FBSTRING* vr$27 = fb_StrConcat( &TMP$198$1, (void*)" ", 2ll, (void*)vr$24, 0ll );
	__builtin_memset( &TMP$199$1, 0, 24ll );
	FBSTRING* vr$31 = fb_StrConcat( &TMP$199$1, (void*)&LN$1, -1ll, (void*)vr$27, -1ll );
	FBSTRING* vr$33 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$31, -1ll, 0 );
	FBSTRING* vr$34 = HEMITARRAYDECL( SYM$1 );
	FBSTRING* vr$36 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$34, -1ll, 0 );
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 512ll) == 0ll ) goto label$213;
	{
		FBSTRING* vr$41 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" __attribute__((dllimport))", 28ll, 0 );
	}
	label$213:;
	label$212:;
	if( ((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 8ll) != 0ll) & ~USE_EXTERN$1) == 0ll ) goto label$215;
	{
		FBSTRING* vr$49 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" __attribute__((common))", 25ll, 0 );
	}
	label$215:;
	label$214:;
	if( VARINI$1 == (uint8*)0ull ) goto label$217;
	{
		FBSTRING TMP$203$2;
		FBSTRING TMP$204$2;
		__builtin_memset( &TMP$203$2, 0, 24ll );
		FBSTRING* vr$53 = fb_StrConcat( &TMP$203$2, (void*)" = ", 4ll, (void*)VARINI$1, 0ll );
		__builtin_memset( &TMP$204$2, 0, 24ll );
		FBSTRING* vr$57 = fb_StrConcat( &TMP$204$2, (void*)&LN$1, -1ll, (void*)vr$53, -1ll );
		FBSTRING* vr$59 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$57, -1ll, 0 );
	}
	label$217:;
	label$216:;
	FBSTRING* vr$61 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)";", 2ll, 0 );
	HWRITELINE( &LN$1, 0ll );
	fb_StrDelete( &LN$1 );
	label$208:;
}

static void HMAYBEEMITLOCALVAR( struct $8FBSYMBOL* SYM$1 )
{
	label$218:;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 65540ll) == 0ll ) goto label$221;
	{
		goto label$219;
	}
	label$221:;
	label$220:;
	if( ((int64)-(*(struct $7ASTNODE**)((uint8*)SYM$1 + 88ll) != (struct $7ASTNODE*)0ull) & (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 2ll) != 0ll)) == 0ll ) goto label$223;
	{
		IRHLFLUSHSTATICINITIALIZER( SYM$1 );
	}
	goto label$222;
	label$223:;
	{
		HEMITVARDECL( 0ll, SYM$1, (uint8*)0ull );
	}
	label$222:;
	label$219:;
}

static void HALLOCGLOBALVAR( struct $8FBSYMBOL* SYM$1 )
{
	label$224:;
	if( *(struct $7ASTNODE**)((uint8*)SYM$1 + 88ll) == (struct $7ASTNODE*)0ull ) goto label$227;
	{
		if( ~((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 32ll) != 0ll) | (int64)-((*(int64*)((uint8*)SYM$1 + 16ll) & 2ll) != 0ll)) == 0ll ) goto label$229;
		{
			goto label$225;
		}
		label$229:;
		label$228:;
		IRHLFLUSHSTATICINITIALIZER( SYM$1 );
	}
	goto label$226;
	label$227:;
	{
		HEMITVARDECL( 0ll, SYM$1, (uint8*)0ull );
	}
	label$226:;
	label$225:;
}

static void HMAYBEEMITGLOBALVAR( struct $8FBSYMBOL* SYM$1 )
{
	label$230:;
	if( (((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 524288ll) != 0ll) | ((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 16ll) != 0ll) & ~(int64)-((*(int64*)((uint8*)SYM$1 + 16ll) & 2ll) != 0ll))) | (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 65540ll) != 0ll)) == 0ll ) goto label$233;
	{
		goto label$231;
	}
	label$233:;
	label$232:;
	{
		int64 TMP$205$2;
		TMP$205$2 = *(int64*)((uint8*)&CTX$ + 5656ll);
		if( TMP$205$2 != 1ll ) goto label$235;
		label$236:;
		{
			if( (*(int64*)((uint8*)SYM$1 + 8ll) & 56ll) == 0ll ) goto label$238;
			{
				HEMITVARDECL( -1ll, SYM$1, (uint8*)0ull );
			}
			goto label$237;
			label$238:;
			{
				HALLOCGLOBALVAR( SYM$1 );
			}
			label$237:;
		}
		goto label$234;
		label$235:;
		if( TMP$205$2 != 2ll ) goto label$239;
		label$240:;
		{
			if( (*(int64*)((uint8*)SYM$1 + 8ll) & 40ll) == 0ll ) goto label$242;
			{
				HALLOCGLOBALVAR( SYM$1 );
			}
			label$242:;
			label$241:;
		}
		label$239:;
		label$234:;
	}
	label$231:;
}

static void HMAYBEEMITGLOBALVAREXCEPTDATASTMT( struct $8FBSYMBOL* SYM$1 )
{
	label$243:;
	int64 vr$0 = SYMBISDATADESC( SYM$1 );
	if( vr$0 == 0ll ) goto label$246;
	{
		goto label$244;
	}
	label$246:;
	label$245:;
	HMAYBEEMITGLOBALVAR( SYM$1 );
	label$244:;
}

static void HMAYBEEMITPROCPROTO( struct $8FBSYMBOL* S$1 )
{
	FBSTRING TMP$206$1;
	FBSTRING TMP$207$1;
	label$247:;
	int64 SECTION$1;
	if( ((int64)-((*(int64*)((uint8*)S$1 + 16ll) & 16384ll) != 0ll) | ~(int64)-((*(int64*)((uint8*)S$1 + 16ll) & 2ll) != 0ll)) == 0ll ) goto label$250;
	{
		goto label$248;
	}
	label$250:;
	label$249:;
	uint8* vr$9 = SYMBGETMANGLEDNAME( S$1 );
	if( vr$9 != (uint8*)0ull ) goto label$252;
	{
		goto label$248;
	}
	label$252:;
	label$251:;
	int64 vr$11 = SECTIONGOSUB( 0ll );
	SECTION$1 = vr$11;
	__builtin_memset( &TMP$207$1, 0, 24ll );
	FBSTRING* vr$13 = HEMITPROCHEADER( S$1, 1ll );
	__builtin_memset( &TMP$206$1, 0, 24ll );
	FBSTRING* vr$16 = fb_StrConcat( &TMP$206$1, (void*)vr$13, -1ll, (void*)";", 2ll );
	FBSTRING* vr$18 = fb_StrAssign( (void*)&TMP$207$1, -1ll, (void*)vr$16, -1ll, 0 );
	HWRITELINE( &TMP$207$1, 0ll );
	fb_StrDelete( &TMP$207$1 );
	SECTIONRETURN( SECTION$1 );
	label$248:;
}

static void HEMITFIELDTYPES( struct $8FBSYMBOL* UDT$1 )
{
	label$253:;
	struct $8FBSYMBOL* FLD$1;
	struct $8FBSYMBOL* vr$0 = SYMBUDTGETFIRSTFIELD( UDT$1 );
	FLD$1 = vr$0;
	label$255:;
	if( FLD$1 == (struct $8FBSYMBOL*)0ull ) goto label$256;
	{
		HEMITUDT( *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 56ll), (int64)-(((*(int64*)((uint8*)FLD$1 + 48ll) & 511ll) & 480ll) != 0ll) );
		struct $8FBSYMBOL* vr$7 = SYMBUDTGETNEXTFIELD( FLD$1 );
		FLD$1 = vr$7;
	}
	goto label$255;
	label$256:;
	label$254:;
}

static struct $8FBSYMBOL** HFINDPARENTANONALREADYONSTACK( struct $8FBSYMBOL* FLD$1 )
{
	struct $8FBSYMBOL** fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$257:;
	struct $8FBSYMBOL** ANONNODE$1;
	struct $8FBSYMBOL* PARENT$1;
	PARENT$1 = *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 280ll);
	label$259:;
	{
		void* vr$3 = LISTGETTAIL( (struct $5TLIST*)((uint8*)&CTX$ + 5280ll) );
		ANONNODE$1 = (struct $8FBSYMBOL**)vr$3;
		label$262:;
		if( ANONNODE$1 == (struct $8FBSYMBOL**)0ull ) goto label$263;
		{
			if( *ANONNODE$1 != PARENT$1 ) goto label$265;
			{
				fb$result$1 = ANONNODE$1;
				goto label$258;
			}
			label$265:;
			label$264:;
			void* vr$7 = LISTGETPREV( (void*)ANONNODE$1 );
			ANONNODE$1 = (struct $8FBSYMBOL**)vr$7;
		}
		goto label$262;
		label$263:;
		PARENT$1 = *(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 280ll);
	}
	label$261:;
	if( PARENT$1 != (struct $8FBSYMBOL*)0ull ) goto label$259;
	label$260:;
	fb$result$1 = (struct $8FBSYMBOL**)0ull;
	label$258:;
	return fb$result$1;
}

static void HPUSHANONPARENTS( struct $8FBSYMBOL* BASEPARENT$1, struct $8FBSYMBOL* PARENT$1 )
{
	label$266:;
	if( PARENT$1 != BASEPARENT$1 ) goto label$269;
	{
		goto label$267;
	}
	label$269:;
	label$268:;
	HPUSHANONPARENTS( BASEPARENT$1, *(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 280ll) );
	if( ((int64)*(int16*)((uint8*)PARENT$1 + 200ll) & 1ll) == 0ll ) goto label$271;
	{
		FBSTRING TMP$209$2;
		__builtin_memset( &TMP$209$2, 0, 24ll );
		FBSTRING* vr$8 = fb_StrAssign( (void*)&TMP$209$2, -1ll, (void*)"union {", 8ll, 0 );
		HWRITELINE( &TMP$209$2, -1ll );
		fb_StrDelete( &TMP$209$2 );
	}
	goto label$270;
	label$271:;
	{
		FBSTRING TMP$211$2;
		__builtin_memset( &TMP$211$2, 0, 24ll );
		FBSTRING* vr$13 = fb_StrAssign( (void*)&TMP$211$2, -1ll, (void*)"struct {", 9ll, 0 );
		HWRITELINE( &TMP$211$2, -1ll );
		fb_StrDelete( &TMP$211$2 );
	}
	label$270:;
	SECTIONINDENT(  );
	void* vr$17 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&CTX$ + 5280ll) );
	*(struct $8FBSYMBOL**)vr$17 = PARENT$1;
	label$267:;
}

static void HPOPANONPARENTS( struct $8FBSYMBOL** ANONNODE$1 )
{
	label$272:;
	label$274:;
	void* vr$1 = LISTGETTAIL( (struct $5TLIST*)((uint8*)&CTX$ + 5280ll) );
	if( (uint64)vr$1 == (uint64)ANONNODE$1 ) goto label$275;
	{
		FBSTRING TMP$213$2;
		SECTIONUNINDENT(  );
		__builtin_memset( &TMP$213$2, 0, 24ll );
		FBSTRING* vr$5 = fb_StrAssign( (void*)&TMP$213$2, -1ll, (void*)"};", 3ll, 0 );
		HWRITELINE( &TMP$213$2, -1ll );
		fb_StrDelete( &TMP$213$2 );
		void* vr$9 = LISTGETTAIL( (struct $5TLIST*)((uint8*)&CTX$ + 5280ll) );
		LISTDELNODE( (struct $5TLIST*)((uint8*)&CTX$ + 5280ll), vr$9 );
	}
	goto label$274;
	label$275:;
	label$273:;
}

static void HEMITSTRUCTWITHFIELDS( struct $8FBSYMBOL* S$1 )
{
	label$276:;
	int64 SKIP$1;
	int64 DTYPE$1;
	int64 ALIGN$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	struct $8FBSYMBOL* FLD$1;
	struct $8FBSYMBOL** ANONNODE$1;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	struct $8FBSYMBOL* vr$1 = SYMBUDTGETFIRSTFIELD( S$1 );
	FLD$1 = vr$1;
	label$278:;
	if( FLD$1 == (struct $8FBSYMBOL*)0ull ) goto label$279;
	{
		if( *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 280ll) != S$1 ) goto label$281;
		{
			HPOPANONPARENTS( (struct $8FBSYMBOL**)0ull );
		}
		goto label$280;
		label$281:;
		{
			struct $8FBSYMBOL* TMP$214$3;
			struct $8FBSYMBOL** vr$5 = HFINDPARENTANONALREADYONSTACK( FLD$1 );
			ANONNODE$1 = vr$5;
			HPOPANONPARENTS( ANONNODE$1 );
			if( ANONNODE$1 == (struct $8FBSYMBOL**)0ull ) goto label$282;
			TMP$214$3 = *ANONNODE$1;
			goto label$1039;
			label$282:;
			TMP$214$3 = S$1;
			label$1039:;
			HPUSHANONPARENTS( TMP$214$3, *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 280ll) );
		}
		label$280:;
		SKIP$1 = (int64)-((*(int64*)((uint8*)FLD$1 + 8ll) & 4ll) != 0ll);
		if( SKIP$1 != 0ll ) goto label$284;
		{
			FBSTRING TMP$215$3;
			FBSTRING TMP$216$3;
			DTYPE$1 = *(int64*)((uint8*)FLD$1 + 48ll) & 511ll;
			SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 56ll);
			FBSTRING* vr$16 = HEMITTYPE( DTYPE$1, SUBTYPE$1 );
			FBSTRING* vr$18 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$16, -1ll, 0 );
			__builtin_memset( &TMP$215$3, 0, 24ll );
			FBSTRING* vr$22 = fb_StrConcat( &TMP$215$3, (void*)" ", 2ll, *(void**)((uint8*)FLD$1 + 24ll), 0ll );
			__builtin_memset( &TMP$216$3, 0, 24ll );
			FBSTRING* vr$26 = fb_StrConcat( &TMP$216$3, (void*)&LN$1, -1ll, (void*)vr$22, -1ll );
			FBSTRING* vr$28 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$26, -1ll, 0 );
			FBSTRING* vr$29 = HEMITARRAYDECL( FLD$1 );
			FBSTRING* vr$31 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$29, -1ll, 0 );
			ALIGN$1 = (int64)*(uint8*)((uint8*)S$1 + 203ll);
			if( ALIGN$1 <= 0ll ) goto label$286;
			{
				int64 TMP$217$4;
				int64 vr$35 = TYPECALCNATURALALIGN( DTYPE$1, SUBTYPE$1 );
				SKIP$1 = (int64)-(ALIGN$1 >= vr$35);
				if( (DTYPE$1 & 480ll) == 0ll ) goto label$287;
				TMP$217$4 = 22ll;
				goto label$1040;
				label$287:;
				TMP$217$4 = DTYPE$1 & 31ll;
				label$1040:;
				if( TMP$217$4 != 18ll ) goto label$289;
				{
					SKIP$1 = SKIP$1 | (int64)-(ALIGN$1 >= (int64)*(uint8*)((uint8*)SUBTYPE$1 + 203ll));
				}
				label$289:;
				label$288:;
				if( SKIP$1 != 0ll ) goto label$291;
				{
					FBSTRING* vr$47 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" __attribute__((packed, aligned(", 33ll, 0 );
					FBSTRING* vr$48 = fb_LongintToStr( ALIGN$1 );
					FBSTRING* vr$50 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$48, -1ll, 0 );
					FBSTRING* vr$52 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)")))", 4ll, 0 );
				}
				label$291:;
				label$290:;
			}
			label$286:;
			label$285:;
			FBSTRING* vr$54 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)";", 2ll, 0 );
			HWRITELINE( &LN$1, -1ll );
		}
		label$284:;
		label$283:;
		struct $8FBSYMBOL* vr$56 = SYMBUDTGETNEXTFIELD( FLD$1 );
		FLD$1 = vr$56;
	}
	goto label$278;
	label$279:;
	HPOPANONPARENTS( (struct $8FBSYMBOL**)0ull );
	fb_StrDelete( &LN$1 );
	label$277:;
}

static void HEMITSTRUCT( struct $8FBSYMBOL* S$1, int64 IS_PTR$1 )
{
	FBSTRING TMP$229$1;
	FBSTRING TMP$232$1;
	FBSTRING TMP$233$1;
	FBSTRING TMP$234$1;
	FBSTRING TMP$235$1;
	FBSTRING TMP$236$1;
	label$292:;
	int64 EMIT_FIELDS$1;
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	if( (*(int64*)((uint8*)S$1 + 16ll) & 134217728ll) == 0ll ) goto label$295;
	{
		if( IS_PTR$1 == 0ll ) goto label$297;
		{
			if( (int64)-((*(int64*)((uint8*)S$1 + 16ll) & 2ll) != 0ll) != 0ll ) goto label$299;
			{
				FBSTRING TMP$220$4;
				FBSTRING TMP$221$4;
				*($12FB_SYMBSTATS*)((uint8*)S$1 + 16ll) = *(int64*)((uint8*)S$1 + 16ll) | 2ll;
				__builtin_memset( &TMP$221$4, 0, 24ll );
				FBSTRING* vr$13 = HGETUDTNAME( S$1 );
				__builtin_memset( &TMP$220$4, 0, 24ll );
				FBSTRING* vr$16 = fb_StrConcat( &TMP$220$4, (void*)vr$13, -1ll, (void*)";", 2ll );
				FBSTRING* vr$18 = fb_StrAssign( (void*)&TMP$221$4, -1ll, (void*)vr$16, -1ll, 0 );
				HWRITELINE( &TMP$221$4, 0ll );
				fb_StrDelete( &TMP$221$4 );
			}
			label$299:;
			label$298:;
			fb_StrDelete( &LN$1 );
			goto label$293;
		}
		label$297:;
		label$296:;
	}
	label$295:;
	label$294:;
	*($12FB_SYMBSTATS*)((uint8*)S$1 + 16ll) = *(int64*)((uint8*)S$1 + 16ll) | 134217728ll;
	EMIT_FIELDS$1 = ~(int64)-(((int64)*(int16*)((uint8*)S$1 + 200ll) & 32768ll) != 0ll);
	if( EMIT_FIELDS$1 == 0ll ) goto label$301;
	{
		HEMITFIELDTYPES( S$1 );
	}
	label$301:;
	label$300:;
	if( (*(int64*)((uint8*)S$1 + 16ll) & 67108864ll) == 0ll ) goto label$303;
	{
		fb_StrDelete( &LN$1 );
		goto label$293;
	}
	label$303:;
	label$302:;
	*($12FB_SYMBSTATS*)((uint8*)S$1 + 16ll) = *(int64*)((uint8*)S$1 + 16ll) | 67108864ll;
	FBSTRING* vr$38 = HGETUDTTAG( S$1 );
	FBSTRING* vr$40 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$38, -1ll, 0 );
	if( ((int64)-(*(int64*)((uint8*)&ENV$ + 216ll) == 0ll) & (int64)-((int64)*(uint8*)((uint8*)S$1 + 203ll) > 0ll)) == 0ll ) goto label$305;
	{
		FBSTRING* vr$48 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)"__attribute__((gcc_struct)) ", 29ll, 0 );
	}
	label$305:;
	label$304:;
	FBSTRING* vr$49 = HGETUDTID( S$1 );
	FBSTRING* vr$51 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$49, -1ll, 0 );
	FBSTRING* vr$53 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" {", 3ll, 0 );
	HWRITELINE( &LN$1, -1ll );
	SECTIONINDENT(  );
	if( EMIT_FIELDS$1 == 0ll ) goto label$307;
	{
		HEMITSTRUCTWITHFIELDS( S$1 );
	}
	goto label$306;
	label$307:;
	{
		FBSTRING TMP$226$2;
		FBSTRING TMP$227$2;
		FBSTRING TMP$228$2;
		__builtin_memset( &TMP$228$2, 0, 24ll );
		FBSTRING* vr$58 = fb_LongintToStr( *(int64*)((uint8*)S$1 + 72ll) );
		__builtin_memset( &TMP$226$2, 0, 24ll );
		FBSTRING* vr$61 = fb_StrConcat( &TMP$226$2, (void*)"uint8 __fb_struct_body[", 24ll, (void*)vr$58, -1ll );
		__builtin_memset( &TMP$227$2, 0, 24ll );
		FBSTRING* vr$64 = fb_StrConcat( &TMP$227$2, (void*)vr$61, -1ll, (void*)"];", 3ll );
		FBSTRING* vr$66 = fb_StrAssign( (void*)&TMP$228$2, -1ll, (void*)vr$64, -1ll, 0 );
		HWRITELINE( &TMP$228$2, -1ll );
		fb_StrDelete( &TMP$228$2 );
	}
	label$306:;
	SECTIONUNINDENT(  );
	__builtin_memset( &TMP$229$1, 0, 24ll );
	FBSTRING* vr$71 = fb_StrAssign( (void*)&TMP$229$1, -1ll, (void*)"};", 3ll, 0 );
	HWRITELINE( &TMP$229$1, -1ll );
	fb_StrDelete( &TMP$229$1 );
	*($12FB_SYMBSTATS*)((uint8*)S$1 + 16ll) = *(int64*)((uint8*)S$1 + 16ll) & -134217729ll;
	__builtin_memset( &TMP$236$1, 0, 24ll );
	FBSTRING* vr$79 = fb_ULongintToStr( *(uint64*)((uint8*)S$1 + 72ll) );
	FBSTRING* vr$80 = HGETUDTID( S$1 );
	FBSTRING* vr$81 = HGETUDTTAG( S$1 );
	__builtin_memset( &TMP$232$1, 0, 24ll );
	FBSTRING* vr$84 = fb_StrConcat( &TMP$232$1, (void*)"sizeof( ", 9ll, (void*)vr$81, -1ll );
	__builtin_memset( &TMP$233$1, 0, 24ll );
	FBSTRING* vr$87 = fb_StrConcat( &TMP$233$1, (void*)vr$84, -1ll, (void*)vr$80, -1ll );
	__builtin_memset( &TMP$234$1, 0, 24ll );
	FBSTRING* vr$90 = fb_StrConcat( &TMP$234$1, (void*)vr$87, -1ll, (void*)" ) == ", 7ll );
	__builtin_memset( &TMP$235$1, 0, 24ll );
	FBSTRING* vr$93 = fb_StrConcat( &TMP$235$1, (void*)vr$90, -1ll, (void*)vr$79, -1ll );
	FBSTRING* vr$95 = fb_StrAssign( (void*)&TMP$236$1, -1ll, (void*)vr$93, -1ll, 0 );
	HWRITESTATICASSERT( &TMP$236$1 );
	fb_StrDelete( &TMP$236$1 );
	fb_StrDelete( &LN$1 );
	label$293:;
}

static void HWRITEX86F2I( FBSTRING* FNAME$1, int64 RTYPE$1, int64 PTYPE$1 )
{
	FBSTRING TMP$240$1;
	FBSTRING TMP$244$1;
	FBSTRING TMP$245$1;
	FBSTRING TMP$246$1;
	FBSTRING TMP$247$1;
	FBSTRING TMP$248$1;
	FBSTRING TMP$249$1;
	FBSTRING TMP$250$1;
	FBSTRING TMP$252$1;
	FBSTRING TMP$255$1;
	FBSTRING TMP$256$1;
	FBSTRING TMP$257$1;
	FBSTRING TMP$259$1;
	FBSTRING TMP$262$1;
	FBSTRING TMP$263$1;
	FBSTRING TMP$264$1;
	FBSTRING TMP$267$1;
	FBSTRING TMP$268$1;
	FBSTRING TMP$269$1;
	FBSTRING TMP$271$1;
	FBSTRING TMP$273$1;
	FBSTRING TMP$275$1;
	FBSTRING TMP$277$1;
	FBSTRING TMP$279$1;
	label$308:;
	FBSTRING RTYPE_STR$1;
	__builtin_memset( &RTYPE_STR$1, 0, 24ll );
	FBSTRING RTYPE_SUFFIX$1;
	__builtin_memset( &RTYPE_SUFFIX$1, 0, 24ll );
	if( RTYPE$1 != 10ll ) goto label$311;
	{
		fb_StrAssign( (void*)&RTYPE_STR$1, -1ll, (void*)"int32", 6ll, 0 );
		fb_StrAssign( (void*)&RTYPE_SUFFIX$1, -1ll, (void*)"l", 2ll, 0 );
	}
	goto label$310;
	label$311:;
	{
		fb_StrAssign( (void*)&RTYPE_STR$1, -1ll, (void*)"int64", 6ll, 0 );
		fb_StrAssign( (void*)&RTYPE_SUFFIX$1, -1ll, (void*)"q", 2ll, 0 );
	}
	label$310:;
	FBSTRING PTYPE_STR$1;
	__builtin_memset( &PTYPE_STR$1, 0, 24ll );
	FBSTRING PTYPE_SUFFIX$1;
	__builtin_memset( &PTYPE_SUFFIX$1, 0, 24ll );
	if( PTYPE$1 != 14ll ) goto label$313;
	{
		fb_StrAssign( (void*)&PTYPE_STR$1, -1ll, (void*)"float", 6ll, 0 );
		fb_StrAssign( (void*)&PTYPE_SUFFIX$1, -1ll, (void*)"s", 2ll, 0 );
	}
	goto label$312;
	label$313:;
	{
		fb_StrAssign( (void*)&PTYPE_STR$1, -1ll, (void*)"double", 7ll, 0 );
		fb_StrAssign( (void*)&PTYPE_SUFFIX$1, -1ll, (void*)"l", 2ll, 0 );
	}
	label$312:;
	if( *(int64*)((uint8*)&ENV$ + 264ll) != 0ll ) goto label$315;
	{
		fb_StrAssign( (void*)&RTYPE_SUFFIX$1, -1ll, (void*)"", 1ll, 0 );
		fb_StrAssign( (void*)&PTYPE_SUFFIX$1, -1ll, (void*)"", 1ll, 0 );
	}
	label$315:;
	label$314:;
	__builtin_memset( &TMP$240$1, 0, 24ll );
	FBSTRING* vr$19 = fb_StrAssign( (void*)&TMP$240$1, -1ll, (void*)"", 1ll, 0 );
	HWRITELINE( &TMP$240$1, -1ll );
	fb_StrDelete( &TMP$240$1 );
	__builtin_memset( &TMP$250$1, 0, 24ll );
	__builtin_memset( &TMP$244$1, 0, 24ll );
	FBSTRING* vr$27 = fb_StrConcat( &TMP$244$1, (void*)"static inline ", 15ll, (void*)&RTYPE_STR$1, -1ll );
	__builtin_memset( &TMP$245$1, 0, 24ll );
	FBSTRING* vr$30 = fb_StrConcat( &TMP$245$1, (void*)vr$27, -1ll, (void*)" fb_", 5ll );
	__builtin_memset( &TMP$246$1, 0, 24ll );
	FBSTRING* vr$33 = fb_StrConcat( &TMP$246$1, (void*)vr$30, -1ll, (void*)FNAME$1, -1ll );
	__builtin_memset( &TMP$247$1, 0, 24ll );
	FBSTRING* vr$36 = fb_StrConcat( &TMP$247$1, (void*)vr$33, -1ll, (void*)"( ", 3ll );
	__builtin_memset( &TMP$248$1, 0, 24ll );
	FBSTRING* vr$39 = fb_StrConcat( &TMP$248$1, (void*)vr$36, -1ll, (void*)&PTYPE_STR$1, -1ll );
	__builtin_memset( &TMP$249$1, 0, 24ll );
	FBSTRING* vr$42 = fb_StrConcat( &TMP$249$1, (void*)vr$39, -1ll, (void*)" value )", 9ll );
	FBSTRING* vr$44 = fb_StrAssign( (void*)&TMP$250$1, -1ll, (void*)vr$42, -1ll, 0 );
	HWRITELINE( &TMP$250$1, -1ll );
	fb_StrDelete( &TMP$250$1 );
	__builtin_memset( &TMP$252$1, 0, 24ll );
	FBSTRING* vr$49 = fb_StrAssign( (void*)&TMP$252$1, -1ll, (void*)"{", 2ll, 0 );
	HWRITELINE( &TMP$252$1, -1ll );
	fb_StrDelete( &TMP$252$1 );
	SECTIONINDENT(  );
	__builtin_memset( &TMP$257$1, 0, 24ll );
	__builtin_memset( &TMP$255$1, 0, 24ll );
	FBSTRING* vr$56 = fb_StrConcat( &TMP$255$1, (void*)"volatile ", 10ll, (void*)&RTYPE_STR$1, -1ll );
	__builtin_memset( &TMP$256$1, 0, 24ll );
	FBSTRING* vr$59 = fb_StrConcat( &TMP$256$1, (void*)vr$56, -1ll, (void*)" result;", 9ll );
	FBSTRING* vr$61 = fb_StrAssign( (void*)&TMP$257$1, -1ll, (void*)vr$59, -1ll, 0 );
	HWRITELINE( &TMP$257$1, -1ll );
	fb_StrDelete( &TMP$257$1 );
	__builtin_memset( &TMP$259$1, 0, 24ll );
	FBSTRING* vr$66 = fb_StrAssign( (void*)&TMP$259$1, -1ll, (void*)"__asm__(", 9ll, 0 );
	HWRITELINE( &TMP$259$1, -1ll );
	fb_StrDelete( &TMP$259$1 );
	SECTIONINDENT(  );
	__builtin_memset( &TMP$264$1, 0, 24ll );
	__builtin_memset( &TMP$262$1, 0, 24ll );
	FBSTRING* vr$73 = fb_StrConcat( &TMP$262$1, (void*)"\x22" "fld", 5ll, (void*)&PTYPE_SUFFIX$1, -1ll );
	__builtin_memset( &TMP$263$1, 0, 24ll );
	FBSTRING* vr$76 = fb_StrConcat( &TMP$263$1, (void*)vr$73, -1ll, (void*)" %1;\x22", 6ll );
	FBSTRING* vr$78 = fb_StrAssign( (void*)&TMP$264$1, -1ll, (void*)vr$76, -1ll, 0 );
	HWRITELINE( &TMP$264$1, -1ll );
	fb_StrDelete( &TMP$264$1 );
	__builtin_memset( &TMP$269$1, 0, 24ll );
	__builtin_memset( &TMP$267$1, 0, 24ll );
	FBSTRING* vr$85 = fb_StrConcat( &TMP$267$1, (void*)"\x22" "fistp", 7ll, (void*)&RTYPE_SUFFIX$1, -1ll );
	__builtin_memset( &TMP$268$1, 0, 24ll );
	FBSTRING* vr$88 = fb_StrConcat( &TMP$268$1, (void*)vr$85, -1ll, (void*)" %0;\x22", 6ll );
	FBSTRING* vr$90 = fb_StrAssign( (void*)&TMP$269$1, -1ll, (void*)vr$88, -1ll, 0 );
	HWRITELINE( &TMP$269$1, -1ll );
	fb_StrDelete( &TMP$269$1 );
	__builtin_memset( &TMP$271$1, 0, 24ll );
	FBSTRING* vr$95 = fb_StrAssign( (void*)&TMP$271$1, -1ll, (void*)":\x22=m\x22 (result)", 15ll, 0 );
	HWRITELINE( &TMP$271$1, -1ll );
	fb_StrDelete( &TMP$271$1 );
	__builtin_memset( &TMP$273$1, 0, 24ll );
	FBSTRING* vr$100 = fb_StrAssign( (void*)&TMP$273$1, -1ll, (void*)":\x22m\x22 (value)", 13ll, 0 );
	HWRITELINE( &TMP$273$1, -1ll );
	fb_StrDelete( &TMP$273$1 );
	SECTIONUNINDENT(  );
	__builtin_memset( &TMP$275$1, 0, 24ll );
	FBSTRING* vr$105 = fb_StrAssign( (void*)&TMP$275$1, -1ll, (void*)");", 3ll, 0 );
	HWRITELINE( &TMP$275$1, -1ll );
	fb_StrDelete( &TMP$275$1 );
	__builtin_memset( &TMP$277$1, 0, 24ll );
	FBSTRING* vr$110 = fb_StrAssign( (void*)&TMP$277$1, -1ll, (void*)"return result;", 15ll, 0 );
	HWRITELINE( &TMP$277$1, -1ll );
	fb_StrDelete( &TMP$277$1 );
	SECTIONUNINDENT(  );
	__builtin_memset( &TMP$279$1, 0, 24ll );
	FBSTRING* vr$115 = fb_StrAssign( (void*)&TMP$279$1, -1ll, (void*)"}", 2ll, 0 );
	HWRITELINE( &TMP$279$1, -1ll );
	fb_StrDelete( &TMP$279$1 );
	fb_StrDelete( &PTYPE_SUFFIX$1 );
	fb_StrDelete( &PTYPE_STR$1 );
	fb_StrDelete( &RTYPE_SUFFIX$1 );
	fb_StrDelete( &RTYPE_STR$1 );
	label$309:;
}

static void HWRITEGENERICF2I( FBSTRING* FNAME$1, int64 RTYPE$1, int64 PTYPE$1 )
{
	FBSTRING TMP$286$1;
	FBSTRING TMP$287$1;
	FBSTRING TMP$288$1;
	FBSTRING TMP$289$1;
	FBSTRING TMP$290$1;
	FBSTRING TMP$291$1;
	FBSTRING TMP$292$1;
	label$316:;
	FBSTRING RESULTTYPE$1;
	__builtin_memset( &RESULTTYPE$1, 0, 24ll );
	FBSTRING CALLNAME$1;
	__builtin_memset( &CALLNAME$1, 0, 24ll );
	if( RTYPE$1 != 10ll ) goto label$319;
	{
		fb_StrAssign( (void*)&RESULTTYPE$1, -1ll, (void*)"int32", 6ll, 0 );
	}
	goto label$318;
	label$319:;
	{
		fb_StrAssign( (void*)&RESULTTYPE$1, -1ll, (void*)"int64", 6ll, 0 );
	}
	label$318:;
	if( PTYPE$1 != 14ll ) goto label$321;
	{
		fb_StrAssign( (void*)&CALLNAME$1, -1ll, (void*)"nearbyintf", 11ll, 0 );
	}
	goto label$320;
	label$321:;
	{
		fb_StrAssign( (void*)&CALLNAME$1, -1ll, (void*)"nearbyint", 10ll, 0 );
	}
	label$320:;
	__builtin_memset( &TMP$292$1, 0, 24ll );
	__builtin_memset( &TMP$286$1, 0, 24ll );
	FBSTRING* vr$13 = fb_StrConcat( &TMP$286$1, (void*)"#define fb_", 12ll, (void*)FNAME$1, -1ll );
	__builtin_memset( &TMP$287$1, 0, 24ll );
	FBSTRING* vr$16 = fb_StrConcat( &TMP$287$1, (void*)vr$13, -1ll, (void*)"( value ) ((", 13ll );
	__builtin_memset( &TMP$288$1, 0, 24ll );
	FBSTRING* vr$19 = fb_StrConcat( &TMP$288$1, (void*)vr$16, -1ll, (void*)&RESULTTYPE$1, -1ll );
	__builtin_memset( &TMP$289$1, 0, 24ll );
	FBSTRING* vr$22 = fb_StrConcat( &TMP$289$1, (void*)vr$19, -1ll, (void*)")__builtin_", 12ll );
	__builtin_memset( &TMP$290$1, 0, 24ll );
	FBSTRING* vr$25 = fb_StrConcat( &TMP$290$1, (void*)vr$22, -1ll, (void*)&CALLNAME$1, -1ll );
	__builtin_memset( &TMP$291$1, 0, 24ll );
	FBSTRING* vr$28 = fb_StrConcat( &TMP$291$1, (void*)vr$25, -1ll, (void*)"( value ))", 11ll );
	FBSTRING* vr$30 = fb_StrAssign( (void*)&TMP$292$1, -1ll, (void*)vr$28, -1ll, 0 );
	HWRITELINE( &TMP$292$1, -1ll );
	fb_StrDelete( &TMP$292$1 );
	fb_StrDelete( &CALLNAME$1 );
	fb_StrDelete( &RESULTTYPE$1 );
	label$317:;
}

static void HWRITEF2I( FBSTRING* FNAME$1, int64 RTYPE$1, int64 PTYPE$1 )
{
	label$322:;
	int64 vr$0 = FBGETCPUFAMILY(  );
	if( vr$0 != 0ll ) goto label$325;
	{
		HWRITEX86F2I( FNAME$1, RTYPE$1, PTYPE$1 );
	}
	goto label$324;
	label$325:;
	{
		HWRITEGENERICF2I( FNAME$1, RTYPE$1, PTYPE$1 );
	}
	label$324:;
	label$323:;
}

static void HMAYBEEMITPROCEXPORT( struct $8FBSYMBOL* PROC$1 )
{
	label$326:;
	if( (int64)-((*(int64*)((uint8*)PROC$1 + 8ll) & 256ll) != 0ll) != 0ll ) goto label$329;
	{
		goto label$327;
	}
	label$329:;
	label$328:;
	FBSTRING* vr$5 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5400ll), -1ll, (void*)"\x09\x22", 3ll, 0 );
	FBSTRING* vr$7 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5400ll), -1ll, (void*)"\x5Ct.ascii ", 10ll, 0 );
	FBSTRING* vr$9 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5400ll), -1ll, (void*)"\x5C\x22 -export:\x5C\x5C\x5C\x22", 16ll, 0 );
	FBSTRING* vr$10 = HGETMANGLEDNAMEFORASM( PROC$1, 0ll );
	FBSTRING* vr$12 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5400ll), -1ll, (void*)vr$10, -1ll, 0 );
	FBSTRING* vr$14 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5400ll), -1ll, (void*)"\x5C\x5C\x5C\x22\x5C\x22", 7ll, 0 );
	FBSTRING* vr$16 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5400ll), -1ll, (void*)"\x5Cn", 3ll, 0 );
	FBSTRING* vr$18 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5400ll), -1ll, (void*)"\x22\x0A", 3ll, 0 );
	label$327:;
}

static int64 _EMITBEGIN( void )
{
	FBSTRING TMP$302$1;
	FBSTRING TMP$303$1;
	FBSTRING TMP$304$1;
	FBSTRING TMP$305$1;
	FBSTRING TMP$306$1;
	FBSTRING TMP$307$1;
	FBSTRING TMP$308$1;
	FBSTRING TMP$310$1;
	FBSTRING TMP$312$1;
	FBSTRING TMP$314$1;
	FBSTRING TMP$316$1;
	FBSTRING TMP$318$1;
	FBSTRING TMP$320$1;
	FBSTRING TMP$322$1;
	FBSTRING TMP$324$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$330:;
	int64 vr$2 = HFILEEXISTS( (uint8*)((uint8*)&ENV$ + 784ll) );
	if( vr$2 == 0ll ) goto label$333;
	{
		FBSTRING* vr$5 = fb_StrAllocTempDescZ( (uint8*)((uint8*)&ENV$ + 784ll) );
		fb_FileKill( vr$5 );
	}
	label$333:;
	label$332:;
	int32 vr$6 = fb_FileFree(  );
	*(int64*)((uint8*)&ENV$ + 776ll) = (int64)vr$6;
	FBSTRING* vr$10 = fb_StrAllocTempDescZ( (uint8*)((uint8*)&ENV$ + 784ll) );
	int32 vr$11 = fb_FileOpen( vr$10, 0u, 3u, 0u, (int32)*(int64*)((uint8*)&ENV$ + 776ll), 0 );
	if( (int64)vr$11 == 0ll ) goto label$335;
	{
		fb$result$1 = 0ll;
		goto label$331;
	}
	label$335:;
	label$334:;
	*(int64*)((uint8*)&CTX$ + 5160ll) = -1ll;
	*(int64*)((uint8*)&CTX$ + 5168ll) = 0ll;
	*(int64*)((uint8*)&CTX$ + 5240ll) = 0ll;
	*(uint64*)((uint8*)&CTX$ + 5272ll) = 0ull;
	*(int64*)((uint8*)&CTX$ + 5656ll) = 0ll;
	HUPDATECURRENTFILENAME( (uint8*)((uint8*)&ENV$ + 488ll) );
	SECTIONBEGIN(  );
	if( *(int64*)((uint8*)&ENV$ + 288ll) == 0ll ) goto label$337;
	{
		_EMITDBG( 108ll, (struct $8FBSYMBOL*)0ull, 0ll );
	}
	label$337:;
	label$336:;
	__builtin_memset( &TMP$307$1, 0, 24ll );
	FBSTRING* vr$17 = fb_Date(  );
	FBSTRING* vr$18 = fb_Time(  );
	__builtin_memset( &TMP$302$1, 0, 24ll );
	FBSTRING* vr$22 = fb_StrConcat( &TMP$302$1, (void*)"// Compilation of ", 19ll, (void*)((uint8*)&ENV$ + 488ll), 261ll );
	__builtin_memset( &TMP$303$1, 0, 24ll );
	FBSTRING* vr$25 = fb_StrConcat( &TMP$303$1, (void*)vr$22, -1ll, (void*)" started at ", 13ll );
	__builtin_memset( &TMP$304$1, 0, 24ll );
	FBSTRING* vr$28 = fb_StrConcat( &TMP$304$1, (void*)vr$25, -1ll, (void*)vr$18, -1ll );
	__builtin_memset( &TMP$305$1, 0, 24ll );
	FBSTRING* vr$31 = fb_StrConcat( &TMP$305$1, (void*)vr$28, -1ll, (void*)" on ", 5ll );
	__builtin_memset( &TMP$306$1, 0, 24ll );
	FBSTRING* vr$34 = fb_StrConcat( &TMP$306$1, (void*)vr$31, -1ll, (void*)vr$17, -1ll );
	FBSTRING* vr$36 = fb_StrAssign( (void*)&TMP$307$1, -1ll, (void*)vr$34, -1ll, 0 );
	HWRITELINE( &TMP$307$1, -1ll );
	fb_StrDelete( &TMP$307$1 );
	__builtin_memset( &TMP$308$1, 0, 24ll );
	FBSTRING* vr$41 = fb_StrAssign( (void*)&TMP$308$1, -1ll, (void*)"", 1ll, 0 );
	HWRITELINE( &TMP$308$1, -1ll );
	fb_StrDelete( &TMP$308$1 );
	__builtin_memset( &TMP$310$1, 0, 24ll );
	FBSTRING* vr$46 = fb_StrAssign( (void*)&TMP$310$1, -1ll, (void*)"typedef   signed char       int8;", 34ll, 0 );
	HWRITELINE( &TMP$310$1, -1ll );
	fb_StrDelete( &TMP$310$1 );
	__builtin_memset( &TMP$312$1, 0, 24ll );
	FBSTRING* vr$51 = fb_StrAssign( (void*)&TMP$312$1, -1ll, (void*)"typedef unsigned char      uint8;", 34ll, 0 );
	HWRITELINE( &TMP$312$1, -1ll );
	fb_StrDelete( &TMP$312$1 );
	__builtin_memset( &TMP$314$1, 0, 24ll );
	FBSTRING* vr$56 = fb_StrAssign( (void*)&TMP$314$1, -1ll, (void*)"typedef   signed short      int16;", 35ll, 0 );
	HWRITELINE( &TMP$314$1, -1ll );
	fb_StrDelete( &TMP$314$1 );
	__builtin_memset( &TMP$316$1, 0, 24ll );
	FBSTRING* vr$61 = fb_StrAssign( (void*)&TMP$316$1, -1ll, (void*)"typedef unsigned short     uint16;", 35ll, 0 );
	HWRITELINE( &TMP$316$1, -1ll );
	fb_StrDelete( &TMP$316$1 );
	__builtin_memset( &TMP$318$1, 0, 24ll );
	FBSTRING* vr$66 = fb_StrAssign( (void*)&TMP$318$1, -1ll, (void*)"typedef   signed int        int32;", 35ll, 0 );
	HWRITELINE( &TMP$318$1, -1ll );
	fb_StrDelete( &TMP$318$1 );
	__builtin_memset( &TMP$320$1, 0, 24ll );
	FBSTRING* vr$71 = fb_StrAssign( (void*)&TMP$320$1, -1ll, (void*)"typedef unsigned int       uint32;", 35ll, 0 );
	HWRITELINE( &TMP$320$1, -1ll );
	fb_StrDelete( &TMP$320$1 );
	__builtin_memset( &TMP$322$1, 0, 24ll );
	FBSTRING* vr$76 = fb_StrAssign( (void*)&TMP$322$1, -1ll, (void*)"typedef   signed long long  int64;", 35ll, 0 );
	HWRITELINE( &TMP$322$1, -1ll );
	fb_StrDelete( &TMP$322$1 );
	__builtin_memset( &TMP$324$1, 0, 24ll );
	FBSTRING* vr$81 = fb_StrAssign( (void*)&TMP$324$1, -1ll, (void*)"typedef unsigned long long uint64;", 35ll, 0 );
	HWRITELINE( &TMP$324$1, -1ll );
	fb_StrDelete( &TMP$324$1 );
	int64 vr$84 = FBIS64BIT(  );
	if( vr$84 == 0ll ) goto label$339;
	{
		FBSTRING TMP$326$2;
		__builtin_memset( &TMP$326$2, 0, 24ll );
		FBSTRING* vr$88 = fb_StrAssign( (void*)&TMP$326$2, -1ll, (void*)"typedef struct { char *data; int64 len; int64 size; } FBSTRING;", 64ll, 0 );
		HWRITELINE( &TMP$326$2, -1ll );
		fb_StrDelete( &TMP$326$2 );
	}
	goto label$338;
	label$339:;
	{
		FBSTRING TMP$328$2;
		__builtin_memset( &TMP$328$2, 0, 24ll );
		FBSTRING* vr$93 = fb_StrAssign( (void*)&TMP$328$2, -1ll, (void*)"typedef struct { char *data; int32 len; int32 size; } FBSTRING;", 64ll, 0 );
		HWRITELINE( &TMP$328$2, -1ll );
		fb_StrDelete( &TMP$328$2 );
	}
	label$338:;
	SECTIONBEGIN(  );
	fb$result$1 = -1ll;
	label$331:;
	return fb$result$1;
}

static void _EMITEND( double TOTTIME$1 )
{
	FBSTRING TMP$343$1;
	FBSTRING TMP$344$1;
	FBSTRING TMP$345$1;
	label$340:;
	int64 SECTION$1;
	HUPDATECURRENTFILENAME( (uint8*)((uint8*)&ENV$ + 488ll) );
	int64 vr$1 = SECTIONGOSUB( 0ll );
	SECTION$1 = vr$1;
	if( (*(uint64*)((uint8*)&CTX$ + 5272ll) & 1ull) == 0ull ) goto label$343;
	{
		FBSTRING TMP$330$2;
		__builtin_memset( &TMP$330$2, 0, 24ll );
		FBSTRING* vr$6 = fb_StrAssign( (void*)&TMP$330$2, -1ll, (void*)"F2I", 4ll, 0 );
		HWRITEF2I( &TMP$330$2, 10ll, 14ll );
		fb_StrDelete( &TMP$330$2 );
	}
	label$343:;
	label$342:;
	if( (*(uint64*)((uint8*)&CTX$ + 5272ll) & 2ull) == 0ull ) goto label$345;
	{
		FBSTRING TMP$332$2;
		__builtin_memset( &TMP$332$2, 0, 24ll );
		FBSTRING* vr$13 = fb_StrAssign( (void*)&TMP$332$2, -1ll, (void*)"F2L", 4ll, 0 );
		HWRITEF2I( &TMP$332$2, 12ll, 14ll );
		fb_StrDelete( &TMP$332$2 );
	}
	label$345:;
	label$344:;
	if( (*(uint64*)((uint8*)&CTX$ + 5272ll) & 4ull) == 0ull ) goto label$347;
	{
		FBSTRING TMP$334$2;
		__builtin_memset( &TMP$334$2, 0, 24ll );
		FBSTRING* vr$20 = fb_StrAssign( (void*)&TMP$334$2, -1ll, (void*)"D2I", 4ll, 0 );
		HWRITEF2I( &TMP$334$2, 10ll, 15ll );
		fb_StrDelete( &TMP$334$2 );
	}
	label$347:;
	label$346:;
	if( (*(uint64*)((uint8*)&CTX$ + 5272ll) & 8ull) == 0ull ) goto label$349;
	{
		FBSTRING TMP$336$2;
		__builtin_memset( &TMP$336$2, 0, 24ll );
		FBSTRING* vr$27 = fb_StrAssign( (void*)&TMP$336$2, -1ll, (void*)"D2L", 4ll, 0 );
		HWRITEF2I( &TMP$336$2, 12ll, 15ll );
		fb_StrDelete( &TMP$336$2 );
	}
	label$349:;
	label$348:;
	SYMBFOREACHGLOBAL( 3ll, (tmp$40)&HMAYBEEMITPROCPROTO );
	*(int64*)((uint8*)&CTX$ + 5656ll) = 1ll;
	SYMBFOREACHGLOBAL( 1ll, (tmp$40)&HMAYBEEMITGLOBALVAREXCEPTDATASTMT );
	IRFOREACHDATASTMT( (tmp$40)&HMAYBEEMITGLOBALVAR );
	*(int64*)((uint8*)&CTX$ + 5656ll) = 2ll;
	SYMBFOREACHGLOBAL( 1ll, (tmp$40)&HMAYBEEMITGLOBALVAREXCEPTDATASTMT );
	IRFOREACHDATASTMT( (tmp$40)&HMAYBEEMITGLOBALVAR );
	SECTIONRETURN( SECTION$1 );
	if( (*(int64*)((uint8*)&ENV$ + 368ll) & (*(int64*)((uint8*)&ENV$ + 448ll) & 4ll)) == 0ll ) goto label$351;
	{
		SYMBFOREACHGLOBAL( 3ll, (tmp$40)&HMAYBEEMITPROCEXPORT );
		int64 vr$34 = fb_StrLen( (void*)((uint8*)&CTX$ + 5400ll), -1ll );
		if( vr$34 <= 0ll ) goto label$353;
		{
			FBSTRING TMP$338$3;
			FBSTRING TMP$339$3;
			FBSTRING TMP$340$3;
			__builtin_memset( &TMP$340$3, 0, 24ll );
			__builtin_memset( &TMP$338$3, 0, 24ll );
			FBSTRING* vr$40 = fb_StrConcat( &TMP$338$3, (void*)"\x0A__asm__( \x0A\x09\x22.section .drectve\x5Cn\x22\x0A", 35ll, (void*)((uint8*)&CTX$ + 5400ll), -1ll );
			__builtin_memset( &TMP$339$3, 0, 24ll );
			FBSTRING* vr$43 = fb_StrConcat( &TMP$339$3, (void*)vr$40, -1ll, (void*)");", 3ll );
			FBSTRING* vr$45 = fb_StrAssign( (void*)&TMP$340$3, -1ll, (void*)vr$43, -1ll, 0 );
			HWRITELINE( &TMP$340$3, -1ll );
			fb_StrDelete( &TMP$340$3 );
		}
		label$353:;
		label$352:;
		fb_StrAssign( (void*)((uint8*)&CTX$ + 5400ll), -1ll, (void*)"", 1ll, 0 );
	}
	label$351:;
	label$350:;
	SECTIONEND(  );
	__builtin_memset( &TMP$345$1, 0, 24ll );
	FBSTRING* vr$50 = fb_DoubleToStr( TOTTIME$1 );
	__builtin_memset( &TMP$343$1, 0, 24ll );
	FBSTRING* vr$53 = fb_StrConcat( &TMP$343$1, (void*)"\x0A// Total compilation time: ", 29ll, (void*)vr$50, -1ll );
	__builtin_memset( &TMP$344$1, 0, 24ll );
	FBSTRING* vr$56 = fb_StrConcat( &TMP$344$1, (void*)vr$53, -1ll, (void*)" seconds.", 10ll );
	FBSTRING* vr$58 = fb_StrAssign( (void*)&TMP$345$1, -1ll, (void*)vr$56, -1ll, 0 );
	HWRITELINE( &TMP$345$1, -1ll );
	fb_StrDelete( &TMP$345$1 );
	if( *(int64*)((uint8*)&CTX$ + 24ll) != 0ll ) goto label$355;
	{
		int32 vr$64 = fb_FilePutStrLarge( (int32)*(int64*)((uint8*)&ENV$ + 776ll), 0ll, (void*)&CTX$, -1ll );
		if( (int64)vr$64 == 0ll ) goto label$357;
		{
		}
		label$357:;
		label$356:;
	}
	label$355:;
	label$354:;
	SECTIONEND(  );
	int32 vr$68 = fb_FileClose( (int32)*(int64*)((uint8*)&ENV$ + 776ll) );
	if( (int64)vr$68 == 0ll ) goto label$359;
	{
	}
	label$359:;
	label$358:;
	*(int64*)((uint8*)&ENV$ + 776ll) = 0ll;
	label$341:;
}

static int64 _GETOPTIONVALUE( $14IR_OPTIONVALUE OPT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$360:;
	{
		if( OPT$1 != 1ll ) goto label$363;
		label$364:;
		{
			fb$result$1 = 0ll;
			goto label$361;
		}
		goto label$362;
		label$363:;
		{
			ERRREPORTEX( 21ll, (uint8*)"_GETOPTIONVALUE", 0ll, 1ll, (uint8*)0ull );
		}
		label$365:;
		label$362:;
	}
	label$361:;
	return fb$result$1;
}

static int64 _SUPPORTSOP( int64 OP$1, int64 DTYPE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$366:;
	{
		uint64 TMP$347$2;
		TMP$347$2 = (uint64)OP$1;
		goto label$369;
		label$370:;
		{
			fb$result$1 = 0ll;
		}
		goto label$368;
		label$371:;
		{
			fb$result$1 = -1ll;
		}
		goto label$368;
		label$369:;
		static const void* tmp$647[16ll] = {
			&&label$370,
			&&label$371,
			&&label$371,
			&&label$371,
			&&label$371,
			&&label$371,
			&&label$371,
			&&label$371,
			&&label$371,
			&&label$370,
			&&label$370,
			&&label$371,
			&&label$371,
			&&label$371,
			&&label$370,
			&&label$370,
		};
		if( TMP$347$2 < 57ll ) goto label$371;
		if( TMP$347$2 > 72ll ) goto label$371;
		goto *tmp$647[TMP$347$2 - 57ll];
		label$368:;
	}
	label$367:;
	return fb$result$1;
}

static void _PROCBEGIN( struct $8FBSYMBOL* PROC$1 )
{
	label$372:;
	*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 32ll) = *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16712ll);
	label$373:;
}

static void _PROCEND( struct $8FBSYMBOL* PROC$1 )
{
	label$374:;
	*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 40ll) = *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16712ll);
	label$375:;
}

static void _SCOPEBEGIN( struct $8FBSYMBOL* S$1 )
{
	label$376:;
	label$377:;
}

static void _SCOPEEND( struct $8FBSYMBOL* S$1 )
{
	label$378:;
	label$379:;
}

static void _PROCALLOCSTATICVARS( struct $8FBSYMBOL* SYM$1 )
{
	label$380:;
	struct $8FBSYMBOL* DESC$1;
	int64 SECTION$1;
	int64 vr$0 = SECTIONGOSUB( 0ll );
	SECTION$1 = vr$0;
	label$382:;
	if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$383;
	{
		{
			$12FB_SYMBCLASS TMP$348$3;
			TMP$348$3 = *($12FB_SYMBCLASS*)SYM$1;
			if( TMP$348$3 != 15ll ) goto label$385;
			label$386:;
			{
				_PROCALLOCSTATICVARS( *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 104ll) );
			}
			goto label$384;
			label$385:;
			if( TMP$348$3 != 1ll ) goto label$387;
			label$388:;
			{
				int64 vr$9 = SYMBHASDTOR( SYM$1 );
				if( ((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 2ll) != 0ll) & vr$9) == 0ll ) goto label$390;
				{
					HMAYBEEMITLOCALVAR( SYM$1 );
					DESC$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 128ll);
					if( DESC$1 == (struct $8FBSYMBOL*)0ull ) goto label$392;
					{
						HMAYBEEMITLOCALVAR( DESC$1 );
					}
					label$392:;
					label$391:;
				}
				label$390:;
				label$389:;
			}
			label$387:;
			label$384:;
		}
		SYM$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 296ll);
	}
	goto label$382;
	label$383:;
	SECTIONRETURN( SECTION$1 );
	label$381:;
}

static void _SETVREGDATATYPE( struct $6IRVREG* VREG$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	label$393:;
	if( VREG$1 == (struct $6IRVREG*)0ull ) goto label$396;
	{
		*($11FB_DATATYPE*)((uint8*)VREG$1 + 8ll) = DTYPE$1;
		*(struct $8FBSYMBOL**)((uint8*)VREG$1 + 16ll) = SUBTYPE$1;
	}
	label$396:;
	label$395:;
	label$394:;
}

static FBSTRING* HEMITTYPE( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$397:;
	FBSTRING S$1;
	__builtin_memset( &S$1, 0, 24ll );
	int64 PTRCOUNT$1;
	PTRCOUNT$1 = (DTYPE$1 & 480ll) >> 5ll;
	DTYPE$1 = DTYPE$1 & 31ll;
	{
		uint64 TMP$349$2;
		TMP$349$2 = (uint64)DTYPE$1;
		goto label$400;
		label$401:;
		{
			if( SUBTYPE$1 == (struct $8FBSYMBOL*)0ull ) goto label$403;
			{
				HEMITUDT( SUBTYPE$1, (int64)-(PTRCOUNT$1 > 0ll) );
				FBSTRING* vr$7 = HGETUDTNAME( SUBTYPE$1 );
				FBSTRING* vr$9 = fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$7, -1ll, 0 );
			}
			goto label$402;
			label$403:;
			if( DTYPE$1 != 9ll ) goto label$404;
			{
				int64 TMP$350$4;
				if( (DTYPE$1 & 480ll) == 0ll ) goto label$405;
				TMP$350$4 = 22ll;
				goto label$1041;
				label$405:;
				TMP$350$4 = DTYPE$1 & 31ll;
				label$1041:;
				fb_StrAssign( (void*)&S$1, -1ll, *(void**)((uint8*)DTYPENAME$ + (*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$350$4 * 56ll)) + 32ll) << 3ll)), 0ll, 0 );
			}
			goto label$402;
			label$404:;
			{
				fb_StrAssign( (void*)&S$1, -1ll, *(void**)DTYPENAME$, 0ll, 0 );
			}
			label$402:;
		}
		goto label$399;
		label$406:;
		{
			PTRCOUNT$1 = PTRCOUNT$1 + -1ll;
			HEMITUDT( SUBTYPE$1, (int64)-(PTRCOUNT$1 > 0ll) );
			uint8* vr$20 = SYMBGETMANGLEDNAME( SUBTYPE$1 );
			fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$20, 0ll, 0 );
		}
		goto label$399;
		label$407:;
		{
			int64 TMP$351$3;
			if( (DTYPE$1 & 480ll) == 0ll ) goto label$408;
			TMP$351$3 = 22ll;
			goto label$1042;
			label$408:;
			TMP$351$3 = DTYPE$1 & 31ll;
			label$1042:;
			fb_StrAssign( (void*)&S$1, -1ll, *(void**)((uint8*)DTYPENAME$ + (*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$351$3 * 56ll)) + 32ll) << 3ll)), 0ll, 0 );
		}
		goto label$399;
		label$409:;
		{
			fb_StrAssign( (void*)&S$1, -1ll, *(void**)((uint8*)DTYPENAME$ + 16ll), 0ll, 0 );
		}
		goto label$399;
		label$410:;
		{
			fb_StrAssign( (void*)&S$1, -1ll, *(void**)((uint8*)DTYPENAME$ + (DTYPE$1 << 3ll)), 0ll, 0 );
		}
		goto label$399;
		label$400:;
		static const void* tmp$648[18ll] = {
			&&label$407,
			&&label$410,
			&&label$410,
			&&label$407,
			&&label$410,
			&&label$410,
			&&label$401,
			&&label$410,
			&&label$410,
			&&label$410,
			&&label$410,
			&&label$410,
			&&label$410,
			&&label$410,
			&&label$409,
			&&label$401,
			&&label$410,
			&&label$406,
		};
		if( TMP$349$2 < 3ll ) goto label$410;
		if( TMP$349$2 > 20ll ) goto label$410;
		goto *tmp$648[TMP$349$2 - 3ll];
		label$399:;
	}
	if( PTRCOUNT$1 <= 0ll ) goto label$412;
	{
		FBSTRING* vr$32 = fb_StrAllocTempDescZEx( (uint8*)"*", 1ll );
		FBSTRING* vr$33 = fb_StrFill2( PTRCOUNT$1, vr$32 );
		FBSTRING* vr$35 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)vr$33, -1ll, 0 );
	}
	label$412:;
	label$411:;
	FBSTRING* vr$38 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&S$1, -1ll, 0 );
	fb_StrDelete( &S$1 );
	label$398:;
	FBSTRING* vr$41 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$41;
}

static struct $8EXPRNODE* EXPRNEW( int64 CLASS_$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	struct $8EXPRNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$413:;
	struct $8EXPRNODE* N$1;
	void* vr$2 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&CTX$ + 5504ll) );
	N$1 = (struct $8EXPRNODE*)vr$2;
	*(int64*)N$1 = CLASS_$1;
	*(int64*)((uint8*)N$1 + 8ll) = DTYPE$1;
	*(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll) = SUBTYPE$1;
	fb$result$1 = N$1;
	label$414:;
	return fb$result$1;
}

static void EXPRFREENODE( struct $8EXPRNODE* N$1 )
{
	label$415:;
	if( *(int64*)N$1 != 0ll ) goto label$418;
	{
		if( *(uint8**)((uint8*)N$1 + 40ll) == (uint8*)0ull ) goto label$420;
		{
			free( *(void**)((uint8*)N$1 + 40ll) );
		}
		label$420:;
		label$419:;
	}
	label$418:;
	label$417:;
	LISTDELNODE( (struct $5TLIST*)((uint8*)&CTX$ + 5504ll), (void*)N$1 );
	label$416:;
}

static void EXPRFREETREE( struct $8EXPRNODE* N$1 )
{
	label$421:;
	if( *(struct $8EXPRNODE**)((uint8*)N$1 + 24ll) == (struct $8EXPRNODE*)0ull ) goto label$424;
	{
		EXPRFREETREE( *(struct $8EXPRNODE**)((uint8*)N$1 + 24ll) );
	}
	label$424:;
	label$423:;
	if( *(struct $8EXPRNODE**)((uint8*)N$1 + 32ll) == (struct $8EXPRNODE*)0ull ) goto label$426;
	{
		EXPRFREETREE( *(struct $8EXPRNODE**)((uint8*)N$1 + 32ll) );
	}
	label$426:;
	label$425:;
	EXPRFREENODE( N$1 );
	label$422:;
}

static struct $8EXPRNODE* EXPRNEWTEXT( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, uint8* S$1 )
{
	struct $8EXPRNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$427:;
	struct $8EXPRNODE* N$1;
	struct $8EXPRNODE* vr$1 = EXPRNEW( 0ll, DTYPE$1, SUBTYPE$1 );
	N$1 = vr$1;
	uint8* vr$2 = ZSTRDUP( S$1 );
	*(uint8**)((uint8*)N$1 + 40ll) = vr$2;
	fb$result$1 = N$1;
	label$428:;
	return fb$result$1;
}

static struct $8EXPRNODE* EXPRNEWIMMI( int64 I$1, int64 DTYPE$1 )
{
	int64 TMP$353$1;
	struct $8EXPRNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$429:;
	struct $8EXPRNODE* N$1;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$431;
	TMP$353$1 = 22ll;
	goto label$1043;
	label$431:;
	TMP$353$1 = DTYPE$1 & 31ll;
	label$1043:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$353$1 * 56ll)) + 8ll) != 8ll ) goto label$433;
	{
		int64 TMP$354$2;
		$11FB_DATATYPE TMP$355$2;
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$434;
		TMP$354$2 = 22ll;
		goto label$1044;
		label$434:;
		TMP$354$2 = DTYPE$1 & 31ll;
		label$1044:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$354$2 * 56ll)) + 16ll) == 0ll ) goto label$435;
		TMP$355$2 = 12ll;
		goto label$1045;
		label$435:;
		TMP$355$2 = 13ll;
		label$1045:;
		DTYPE$1 = TMP$355$2;
	}
	goto label$432;
	label$433:;
	{
		int64 TMP$356$2;
		$11FB_DATATYPE TMP$357$2;
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$436;
		TMP$356$2 = 22ll;
		goto label$1046;
		label$436:;
		TMP$356$2 = DTYPE$1 & 31ll;
		label$1046:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$356$2 * 56ll)) + 16ll) == 0ll ) goto label$437;
		TMP$357$2 = 10ll;
		goto label$1047;
		label$437:;
		TMP$357$2 = 11ll;
		label$1047:;
		DTYPE$1 = TMP$357$2;
	}
	label$432:;
	struct $8EXPRNODE* vr$16 = EXPRNEW( 1ll, DTYPE$1, (struct $8FBSYMBOL*)0ull );
	N$1 = vr$16;
	*(int64*)((uint8*)N$1 + 40ll) = I$1;
	fb$result$1 = N$1;
	label$430:;
	return fb$result$1;
}

static struct $8EXPRNODE* EXPRNEWIMMF( double F$1, int64 DTYPE$1 )
{
	struct $8EXPRNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$438:;
	struct $8EXPRNODE* N$1;
	struct $8EXPRNODE* vr$1 = EXPRNEW( 1ll, DTYPE$1, (struct $8FBSYMBOL*)0ull );
	N$1 = vr$1;
	*(double*)((uint8*)N$1 + 40ll) = F$1;
	fb$result$1 = N$1;
	label$439:;
	return fb$result$1;
}

static int64 SYMBISCARRAY( struct $8FBSYMBOL* SYM$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$440:;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 327680ll) == 0ll ) goto label$443;
	{
		fb$result$1 = 0ll;
		goto label$441;
	}
	label$443:;
	label$442:;
	{
		$12FB_SYMBCLASS TMP$358$2;
		TMP$358$2 = *($12FB_SYMBCLASS*)SYM$1;
		if( TMP$358$2 == 1ll ) goto label$446;
		label$447:;
		if( TMP$358$2 != 12ll ) goto label$445;
		label$446:;
		{
			if( (*(int64*)((uint8*)SYM$1 + 8ll) & 4ll) == 0ll ) goto label$449;
			{
				fb$result$1 = 0ll;
				goto label$441;
			}
			label$449:;
			label$448:;
			if( *(int64*)((uint8*)SYM$1 + 96ll) == 0ll ) goto label$451;
			{
				fb$result$1 = -1ll;
				goto label$441;
			}
			label$451:;
			label$450:;
		}
		label$445:;
		label$444:;
	}
	{
		int64 TMP$359$2;
		TMP$359$2 = *(int64*)((uint8*)SYM$1 + 48ll) & 511ll;
		if( TMP$359$2 == 17ll ) goto label$454;
		label$455:;
		if( TMP$359$2 == 3ll ) goto label$454;
		label$456:;
		if( TMP$359$2 != 6ll ) goto label$453;
		label$454:;
		{
			fb$result$1 = -1ll;
			goto label$441;
		}
		label$453:;
		label$452:;
	}
	fb$result$1 = 0ll;
	goto label$441;
	label$441:;
	return fb$result$1;
}

static struct $8EXPRNODE* EXPRNEWCAST( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, struct $8EXPRNODE* L$1 )
{
	int64 TMP$360$1;
	int64 TMP$361$1;
	int64 TMP$362$1;
	int64 TMP$363$1;
	int64 TMP$364$1;
	int64 TMP$365$1;
	struct $8EXPRNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$457:;
	struct $8EXPRNODE* N$1;
	if( ((int64)-(DTYPE$1 == *(int64*)((uint8*)L$1 + 8ll)) & (int64)-(SUBTYPE$1 == *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll))) == 0ll ) goto label$460;
	{
		fb$result$1 = L$1;
		goto label$458;
	}
	label$460:;
	label$459:;
	if( (*(int64*)((uint8*)L$1 + 8ll) & 480ll) == 0ll ) goto label$461;
	TMP$360$1 = 22ll;
	goto label$1048;
	label$461:;
	TMP$360$1 = *(int64*)((uint8*)L$1 + 8ll) & 31ll;
	label$1048:;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$462;
	TMP$361$1 = 22ll;
	goto label$1049;
	label$462:;
	TMP$361$1 = DTYPE$1 & 31ll;
	label$1049:;
	if( (*(int64*)((uint8*)L$1 + 8ll) & 480ll) == 0ll ) goto label$463;
	TMP$362$1 = 22ll;
	goto label$1050;
	label$463:;
	TMP$362$1 = *(int64*)((uint8*)L$1 + 8ll) & 31ll;
	label$1050:;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$464;
	TMP$363$1 = 22ll;
	goto label$1051;
	label$464:;
	TMP$363$1 = DTYPE$1 & 31ll;
	label$1051:;
	if( (*(int64*)((uint8*)L$1 + 8ll) & 480ll) == 0ll ) goto label$465;
	TMP$364$1 = 22ll;
	goto label$1052;
	label$465:;
	TMP$364$1 = *(int64*)((uint8*)L$1 + 8ll) & 31ll;
	label$1052:;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$466;
	TMP$365$1 = 22ll;
	goto label$1053;
	label$466:;
	TMP$365$1 = DTYPE$1 & 31ll;
	label$1053:;
	if( (((((int64)-(*(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$360$1 * 56ll)) == *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$361$1 * 56ll))) & (int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$362$1 * 56ll)) + 16ll) == *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$363$1 * 56ll)) + 16ll))) & ~(int64)-((*(int64*)((uint8*)L$1 + 8ll) & 480ll) != 0ll)) & ~(int64)-((DTYPE$1 & 480ll) != 0ll)) & (int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$364$1 * 56ll)) + 8ll) == *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$365$1 * 56ll)) + 8ll))) == 0ll ) goto label$468;
	{
		fb$result$1 = L$1;
		goto label$458;
	}
	label$468:;
	label$467:;
	if( *(int64*)L$1 != 3ll ) goto label$470;
	{
		if( ((int64)-(((DTYPE$1 & 480ll) >> 5ll) > 0ll) & (int64)-(((*(int64*)((uint8*)L$1 + 8ll) & 480ll) >> 5ll) > 0ll)) == 0ll ) goto label$472;
		{
			*(int64*)((uint8*)L$1 + 8ll) = DTYPE$1;
			*(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) = SUBTYPE$1;
			fb$result$1 = L$1;
			goto label$458;
		}
		label$472:;
		label$471:;
	}
	label$470:;
	label$469:;
	struct $8EXPRNODE* vr$65 = EXPRNEW( 3ll, DTYPE$1, SUBTYPE$1 );
	N$1 = vr$65;
	*(struct $8EXPRNODE**)((uint8*)N$1 + 24ll) = L$1;
	fb$result$1 = N$1;
	label$458:;
	return fb$result$1;
}

static struct $8EXPRNODE* EXPRNEWSYM( struct $8FBSYMBOL* SYM$1 )
{
	struct $8EXPRNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$473:;
	struct $8EXPRNODE* N$1;
	int64 DTYPE$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	if( *(int64*)SYM$1 != 7ll ) goto label$476;
	{
		struct $8EXPRNODE* vr$3 = EXPRNEW( 2ll, 32ll, (struct $8FBSYMBOL*)0ull );
		N$1 = vr$3;
		*(struct $8FBSYMBOL**)((uint8*)N$1 + 40ll) = SYM$1;
	}
	goto label$475;
	label$476:;
	if( *(int64*)SYM$1 != 3ll ) goto label$477;
	{
		struct $8EXPRNODE* vr$7 = EXPRNEW( 2ll, 52ll, SYM$1 );
		N$1 = vr$7;
		*(struct $8FBSYMBOL**)((uint8*)N$1 + 40ll) = SYM$1;
	}
	goto label$475;
	label$477:;
	int64 vr$9 = SYMBISCARRAY( SYM$1 );
	if( vr$9 == 0ll ) goto label$478;
	{
		struct $8EXPRNODE* vr$11 = EXPRNEW( 2ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		N$1 = vr$11;
		*(struct $8FBSYMBOL**)((uint8*)N$1 + 40ll) = SYM$1;
		struct $8EXPRNODE* vr$27 = EXPRNEWCAST( (((*(int64*)((uint8*)SYM$1 + 48ll) & 511ll) & 31ll) | (((*(int64*)((uint8*)SYM$1 + 48ll) & 511ll) & 480ll) + 32ll)) | (((*(int64*)((uint8*)SYM$1 + 48ll) & 511ll) & 261632ll) << 1ll), *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll), N$1 );
		N$1 = vr$27;
	}
	goto label$475;
	label$478:;
	if( (((int64)-(*(int64*)SYM$1 == 1ll) | (int64)-(*(int64*)SYM$1 == 4ll)) & (int64)-((*(int64*)((uint8*)SYM$1 + 16ll) & 524288ll) != 0ll)) == 0ll ) goto label$479;
	{
		struct $8EXPRNODE* vr$38 = EXPRNEW( 2ll, 65ll, (struct $8FBSYMBOL*)0ull );
		N$1 = vr$38;
		*(struct $8FBSYMBOL**)((uint8*)N$1 + 40ll) = SYM$1;
	}
	goto label$475;
	label$479:;
	{
		DTYPE$1 = *(int64*)((uint8*)SYM$1 + 48ll) & 511ll;
		SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll);
		if( ((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 262144ll) != 0ll) | (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 512ll) != 0ll)) == 0ll ) goto label$481;
		{
			DTYPE$1 = ((DTYPE$1 & 31ll) | ((DTYPE$1 & 480ll) + 32ll)) | ((DTYPE$1 & 261632ll) << 1ll);
		}
		label$481:;
		label$480:;
		struct $8EXPRNODE* vr$58 = EXPRNEW( 2ll, DTYPE$1, SUBTYPE$1 );
		N$1 = vr$58;
		*(struct $8FBSYMBOL**)((uint8*)N$1 + 40ll) = SYM$1;
	}
	label$475:;
	fb$result$1 = N$1;
	label$474:;
	return fb$result$1;
}

static int64 TYPECBOP( int64 OP$1, int64 A$1, int64 B$1 )
{
	int64 TMP$366$1;
	int64 TMP$367$1;
	int64 TMP$368$1;
	int64 TMP$371$1;
	int64 TMP$374$1;
	int64 TMP$375$1;
	int64 TMP$376$1;
	int64 TMP$377$1;
	int64 TMP$382$1;
	int64 TMP$383$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$482:;
	{
		if( OP$1 == 45ll ) goto label$486;
		label$487:;
		if( OP$1 == 48ll ) goto label$486;
		label$488:;
		if( OP$1 == 46ll ) goto label$486;
		label$489:;
		if( OP$1 == 47ll ) goto label$486;
		label$490:;
		if( OP$1 == 49ll ) goto label$486;
		label$491:;
		if( OP$1 != 50ll ) goto label$485;
		label$486:;
		{
			fb$result$1 = 10ll;
			goto label$483;
		}
		label$485:;
		label$484:;
	}
	if( (A$1 & 480ll) == 0ll ) goto label$492;
	TMP$366$1 = 22ll;
	goto label$1054;
	label$492:;
	TMP$366$1 = A$1 & 31ll;
	label$1054:;
	A$1 = TMP$366$1;
	if( (B$1 & 480ll) == 0ll ) goto label$493;
	TMP$367$1 = 22ll;
	goto label$1055;
	label$493:;
	TMP$367$1 = B$1 & 31ll;
	label$1055:;
	B$1 = TMP$367$1;
	if( ((int64)-(A$1 == 15ll) | (int64)-(B$1 == 15ll)) == 0ll ) goto label$495;
	{
		fb$result$1 = 15ll;
		goto label$483;
	}
	label$495:;
	label$494:;
	if( ((int64)-(A$1 == 14ll) | (int64)-(B$1 == 14ll)) == 0ll ) goto label$497;
	{
		fb$result$1 = 14ll;
		goto label$483;
	}
	label$497:;
	label$496:;
	if( (A$1 & 480ll) == 0ll ) goto label$498;
	TMP$368$1 = 22ll;
	goto label$1056;
	label$498:;
	TMP$368$1 = A$1 & 31ll;
	label$1056:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$368$1 * 56ll)) + 8ll) > 4ll ) goto label$500;
	{
		int64 TMP$369$2;
		$11FB_DATATYPE TMP$370$2;
		if( (A$1 & 480ll) == 0ll ) goto label$501;
		TMP$369$2 = 22ll;
		goto label$1057;
		label$501:;
		TMP$369$2 = A$1 & 31ll;
		label$1057:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$369$2 * 56ll)) + 16ll) == 0ll ) goto label$502;
		TMP$370$2 = 10ll;
		goto label$1058;
		label$502:;
		TMP$370$2 = 11ll;
		label$1058:;
		A$1 = TMP$370$2;
	}
	label$500:;
	label$499:;
	if( (B$1 & 480ll) == 0ll ) goto label$503;
	TMP$371$1 = 22ll;
	goto label$1059;
	label$503:;
	TMP$371$1 = B$1 & 31ll;
	label$1059:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$371$1 * 56ll)) + 8ll) > 4ll ) goto label$505;
	{
		int64 TMP$372$2;
		$11FB_DATATYPE TMP$373$2;
		if( (B$1 & 480ll) == 0ll ) goto label$506;
		TMP$372$2 = 22ll;
		goto label$1060;
		label$506:;
		TMP$372$2 = B$1 & 31ll;
		label$1060:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$372$2 * 56ll)) + 16ll) == 0ll ) goto label$507;
		TMP$373$2 = 10ll;
		goto label$1061;
		label$507:;
		TMP$373$2 = 11ll;
		label$1061:;
		B$1 = TMP$373$2;
	}
	label$505:;
	label$504:;
	if( (A$1 & 480ll) == 0ll ) goto label$508;
	TMP$374$1 = 22ll;
	goto label$1062;
	label$508:;
	TMP$374$1 = A$1 & 31ll;
	label$1062:;
	if( (B$1 & 480ll) == 0ll ) goto label$509;
	TMP$375$1 = 22ll;
	goto label$1063;
	label$509:;
	TMP$375$1 = B$1 & 31ll;
	label$1063:;
	if( ~(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$374$1 * 56ll)) + 16ll) & *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$375$1 * 56ll)) + 16ll)) == 0ll ) goto label$511;
	{
		int64 vr$52 = TYPETOUNSIGNED( A$1 );
		A$1 = vr$52;
		int64 vr$53 = TYPETOUNSIGNED( B$1 );
		B$1 = vr$53;
	}
	label$511:;
	label$510:;
	if( (A$1 & 480ll) == 0ll ) goto label$512;
	TMP$376$1 = 22ll;
	goto label$1064;
	label$512:;
	TMP$376$1 = A$1 & 31ll;
	label$1064:;
	if( (B$1 & 480ll) == 0ll ) goto label$513;
	TMP$377$1 = 22ll;
	goto label$1065;
	label$513:;
	TMP$377$1 = B$1 & 31ll;
	label$1065:;
	if( ((int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$376$1 * 56ll)) + 8ll) == 8ll) | (int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$377$1 * 56ll)) + 8ll) == 8ll)) == 0ll ) goto label$515;
	{
		int64 TMP$378$2;
		$11FB_DATATYPE TMP$379$2;
		int64 TMP$380$2;
		$11FB_DATATYPE TMP$381$2;
		if( (A$1 & 480ll) == 0ll ) goto label$516;
		TMP$378$2 = 22ll;
		goto label$1066;
		label$516:;
		TMP$378$2 = A$1 & 31ll;
		label$1066:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$378$2 * 56ll)) + 16ll) == 0ll ) goto label$517;
		TMP$379$2 = 12ll;
		goto label$1067;
		label$517:;
		TMP$379$2 = 13ll;
		label$1067:;
		A$1 = TMP$379$2;
		if( (B$1 & 480ll) == 0ll ) goto label$518;
		TMP$380$2 = 22ll;
		goto label$1068;
		label$518:;
		TMP$380$2 = B$1 & 31ll;
		label$1068:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$380$2 * 56ll)) + 16ll) == 0ll ) goto label$519;
		TMP$381$2 = 12ll;
		goto label$1069;
		label$519:;
		TMP$381$2 = 13ll;
		label$1069:;
		B$1 = TMP$381$2;
	}
	label$515:;
	label$514:;
	if( (A$1 & 480ll) == 0ll ) goto label$520;
	TMP$382$1 = 22ll;
	goto label$1070;
	label$520:;
	TMP$382$1 = A$1 & 31ll;
	label$1070:;
	if( (B$1 & 480ll) == 0ll ) goto label$521;
	TMP$383$1 = 22ll;
	goto label$1071;
	label$521:;
	TMP$383$1 = B$1 & 31ll;
	label$1071:;
	if( ~(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$382$1 * 56ll)) + 16ll) & *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$383$1 * 56ll)) + 16ll)) == 0ll ) goto label$523;
	{
		int64 vr$87 = TYPETOUNSIGNED( A$1 );
		A$1 = vr$87;
		int64 vr$88 = TYPETOUNSIGNED( B$1 );
		B$1 = vr$88;
	}
	label$523:;
	label$522:;
	fb$result$1 = A$1;
	label$483:;
	return fb$result$1;
}

static struct $8EXPRNODE* EXPRNEWUOP( int64 OP$1, struct $8EXPRNODE* L$1 )
{
	struct $8EXPRNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$524:;
	struct $8EXPRNODE* N$1;
	int64 DTYPE$1;
	int64 SOLVED_OUT$1;
	SOLVED_OUT$1 = 0ll;
	{
		uint64 TMP$384$2;
		TMP$384$2 = (uint64)OP$1;
		goto label$527;
		label$528:;
		{
			if( *(int64*)L$1 != 4ll ) goto label$530;
			{
				SOLVED_OUT$1 = (int64)-(*(int64*)((uint8*)L$1 + 40ll) == 76ll);
			}
			label$530:;
			label$529:;
			DTYPE$1 = *(int64*)((uint8*)L$1 + 8ll);
			DTYPE$1 = ((DTYPE$1 & 31ll) | ((DTYPE$1 & 480ll) + 32ll)) | ((DTYPE$1 & 261632ll) << 1ll);
		}
		goto label$526;
		label$531:;
		{
			if( *(int64*)L$1 != 4ll ) goto label$533;
			{
				SOLVED_OUT$1 = (int64)-(*(int64*)((uint8*)L$1 + 40ll) == 22ll);
			}
			label$533:;
			label$532:;
			DTYPE$1 = *(int64*)((uint8*)L$1 + 8ll);
			DTYPE$1 = ((DTYPE$1 & 31ll) | ((DTYPE$1 & 480ll) + -32ll)) | (((DTYPE$1 & 261632ll) >> 1ll) & 261632ll);
		}
		goto label$526;
		label$534:;
		{
			if( *(int64*)L$1 != 4ll ) goto label$536;
			{
				SOLVED_OUT$1 = (int64)-(*(int64*)((uint8*)L$1 + 40ll) == OP$1);
			}
			label$536:;
			label$535:;
			int64 vr$32 = TYPECBOP( OP$1, *(int64*)((uint8*)L$1 + 8ll), *(int64*)((uint8*)L$1 + 8ll) );
			DTYPE$1 = vr$32;
		}
		goto label$526;
		label$537:;
		{
			DTYPE$1 = *(int64*)((uint8*)L$1 + 8ll);
		}
		goto label$526;
		label$538:;
		{
		}
		goto label$526;
		label$527:;
		static const void* tmp$649[55ll] = {
			&&label$528,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$534,
			&&label$538,
			&&label$534,
			&&label$538,
			&&label$537,
			&&label$538,
			&&label$537,
			&&label$537,
			&&label$537,
			&&label$537,
			&&label$537,
			&&label$537,
			&&label$538,
			&&label$537,
			&&label$538,
			&&label$538,
			&&label$537,
			&&label$537,
			&&label$537,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$538,
			&&label$531,
		};
		if( TMP$384$2 < 22ll ) goto label$538;
		if( TMP$384$2 > 76ll ) goto label$538;
		goto *tmp$649[TMP$384$2 - 22ll];
		label$526:;
	}
	if( SOLVED_OUT$1 == 0ll ) goto label$540;
	{
		N$1 = *(struct $8EXPRNODE**)((uint8*)L$1 + 24ll);
		EXPRFREENODE( L$1 );
		fb$result$1 = N$1;
		goto label$525;
	}
	label$540:;
	label$539:;
	struct $8EXPRNODE* vr$37 = EXPRNEW( 4ll, DTYPE$1, *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) );
	N$1 = vr$37;
	*(struct $8EXPRNODE**)((uint8*)N$1 + 24ll) = L$1;
	*(int64*)((uint8*)N$1 + 40ll) = OP$1;
	fb$result$1 = N$1;
	label$525:;
	return fb$result$1;
}

static struct $8EXPRNODE* EXPRNEWBOP( int64 OP$1, struct $8EXPRNODE* L$1, struct $8EXPRNODE* R$1 )
{
	struct $8EXPRNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$541:;
	struct $8EXPRNODE* N$1;
	int64 DTYPE$1;
	int64 vr$3 = TYPECBOP( OP$1, *(int64*)((uint8*)L$1 + 8ll), *(int64*)((uint8*)R$1 + 8ll) );
	DTYPE$1 = vr$3;
	struct $8EXPRNODE* vr$4 = EXPRNEW( 5ll, DTYPE$1, (struct $8FBSYMBOL*)0ull );
	N$1 = vr$4;
	*(struct $8EXPRNODE**)((uint8*)N$1 + 24ll) = L$1;
	*(struct $8EXPRNODE**)((uint8*)N$1 + 32ll) = R$1;
	*(int64*)((uint8*)N$1 + 40ll) = OP$1;
	fb$result$1 = N$1;
	label$542:;
	return fb$result$1;
}

static void EXPRCACHE( int64 VREGID$1, struct $8EXPRNODE* EXPR$1 )
{
	label$543:;
	struct $13EXPRCACHENODE* ENTRY$1;
	void* vr$1 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&CTX$ + 5592ll) );
	ENTRY$1 = (struct $13EXPRCACHENODE*)vr$1;
	*(int64*)ENTRY$1 = VREGID$1;
	*(struct $8EXPRNODE**)((uint8*)ENTRY$1 + 8ll) = EXPR$1;
	label$544:;
}

static struct $8EXPRNODE* EXPRLOOKUP( int64 VREGID$1 )
{
	struct $8EXPRNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$545:;
	struct $13EXPRCACHENODE* ENTRY$1;
	void* vr$2 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&CTX$ + 5592ll) );
	ENTRY$1 = (struct $13EXPRCACHENODE*)vr$2;
	label$547:;
	if( ENTRY$1 == (struct $13EXPRCACHENODE*)0ull ) goto label$548;
	{
		if( *(int64*)ENTRY$1 != VREGID$1 ) goto label$550;
		{
			goto label$548;
		}
		label$550:;
		label$549:;
		void* vr$6 = LISTGETNEXT( (void*)ENTRY$1 );
		ENTRY$1 = (struct $13EXPRCACHENODE*)vr$6;
	}
	goto label$547;
	label$548:;
	if( ENTRY$1 == (struct $13EXPRCACHENODE*)0ull ) goto label$552;
	{
		fb$result$1 = *(struct $8EXPRNODE**)((uint8*)ENTRY$1 + 8ll);
		LISTDELNODE( (struct $5TLIST*)((uint8*)&CTX$ + 5592ll), (void*)ENTRY$1 );
	}
	goto label$551;
	label$552:;
	{
		fb$result$1 = (struct $8EXPRNODE*)0ull;
	}
	label$551:;
	label$546:;
	return fb$result$1;
}

static FBSTRING* HEMITINT( int64 DTYPE$1, int64 VALUE$1 )
{
	int64 TMP$385$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$553:;
	FBSTRING S$1;
	__builtin_memset( &S$1, 0, 24ll );
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$555;
	TMP$385$1 = 22ll;
	goto label$1072;
	label$555:;
	TMP$385$1 = DTYPE$1 & 31ll;
	label$1072:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$385$1 * 56ll)) + 16ll) == 0ll ) goto label$557;
	{
		int64 TMP$386$2;
		FBSTRING* vr$7 = fb_LongintToStr( VALUE$1 );
		FBSTRING* vr$9 = fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$7, -1ll, 0 );
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$558;
		TMP$386$2 = 22ll;
		goto label$1073;
		label$558:;
		TMP$386$2 = DTYPE$1 & 31ll;
		label$1073:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$386$2 * 56ll)) + 8ll) != 8ll ) goto label$560;
		{
			if( VALUE$1 != -9223372036854775808ull ) goto label$562;
			{
				FBSTRING* vr$17 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"u", 2ll, 0 );
			}
			label$562:;
			label$561:;
			FBSTRING* vr$19 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"ll", 3ll, 0 );
		}
		goto label$559;
		label$560:;
		{
			if( VALUE$1 != -2147483648ll ) goto label$564;
			{
				FBSTRING* vr$22 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"u", 2ll, 0 );
			}
			label$564:;
			label$563:;
		}
		label$559:;
	}
	goto label$556;
	label$557:;
	{
		int64 TMP$389$2;
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$565;
		TMP$389$2 = 22ll;
		goto label$1074;
		label$565:;
		TMP$389$2 = DTYPE$1 & 31ll;
		label$1074:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$389$2 * 56ll)) + 8ll) != 8ll ) goto label$567;
		{
			FBSTRING* vr$28 = fb_ULongintToStr( (uint64)VALUE$1 );
			FBSTRING* vr$30 = fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$28, -1ll, 0 );
			FBSTRING* vr$32 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"ull", 4ll, 0 );
		}
		goto label$566;
		label$567:;
		{
			FBSTRING* vr$34 = fb_UIntToStr( (uint32)VALUE$1 );
			FBSTRING* vr$36 = fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$34, -1ll, 0 );
			FBSTRING* vr$38 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"u", 2ll, 0 );
		}
		label$566:;
	}
	label$556:;
	FBSTRING* vr$41 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&S$1, -1ll, 0 );
	fb_StrDelete( &S$1 );
	label$554:;
	FBSTRING* vr$44 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$44;
}

static FBSTRING* HEMITFLOAT( int64 DTYPE$1, double VALUE$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$568:;
	FBSTRING S$1;
	__builtin_memset( &S$1, 0, 24ll );
	uint32 EXPVAL$1;
	EXPVAL$1 = *(uint32*)((uint8*)&VALUE$1 + 4ll);
	{
		if( (int64)EXPVAL$1 == 2146435072ll ) goto label$572;
		label$573:;
		if( (int64)EXPVAL$1 != 4293918720ll ) goto label$571;
		label$572:;
		{
			if( DTYPE$1 != 15ll ) goto label$575;
			{
				if( ((int64)EXPVAL$1 & 2147483648ll) == 0ll ) goto label$577;
				{
					FBSTRING* vr$12 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"(-__builtin_inf())", 19ll, 0 );
				}
				goto label$576;
				label$577:;
				{
					FBSTRING* vr$14 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"__builtin_inf()", 16ll, 0 );
				}
				label$576:;
			}
			goto label$574;
			label$575:;
			{
				if( ((int64)EXPVAL$1 & 2147483648ll) == 0ll ) goto label$579;
				{
					FBSTRING* vr$19 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"(-__builtin_inff())", 20ll, 0 );
				}
				goto label$578;
				label$579:;
				{
					FBSTRING* vr$21 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"__builtin_inff()", 17ll, 0 );
				}
				label$578:;
			}
			label$574:;
		}
		goto label$570;
		label$571:;
		if( (int64)EXPVAL$1 == 2146959360ll ) goto label$581;
		label$582:;
		if( (int64)EXPVAL$1 != 4294443008ll ) goto label$580;
		label$581:;
		{
			if( DTYPE$1 != 15ll ) goto label$584;
			{
				if( ((int64)EXPVAL$1 & 2147483648ll) == 0ll ) goto label$586;
				{
					FBSTRING* vr$31 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"(-__builtin_nan( \x22\x22 ))", 23ll, 0 );
				}
				goto label$585;
				label$586:;
				{
					FBSTRING* vr$33 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"__builtin_nan( \x22\x22 )", 20ll, 0 );
				}
				label$585:;
			}
			goto label$583;
			label$584:;
			{
				if( ((int64)EXPVAL$1 & 2147483648ll) == 0ll ) goto label$588;
				{
					FBSTRING* vr$38 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"(-__builtin_nanf( \x22\x22 ))", 24ll, 0 );
				}
				goto label$587;
				label$588:;
				{
					FBSTRING* vr$40 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"__builtin_nanf( \x22\x22 )", 21ll, 0 );
				}
				label$587:;
			}
			label$583:;
		}
		goto label$570;
		label$580:;
		{
			FBSTRING* vr$41 = HFLOATTOHEX_C99( VALUE$1 );
			FBSTRING* vr$43 = fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$41, -1ll, 0 );
			if( DTYPE$1 != 14ll ) goto label$591;
			{
				FBSTRING* vr$46 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"f", 2ll, 0 );
			}
			label$591:;
			label$590:;
		}
		label$589:;
		label$570:;
	}
	FBSTRING* vr$49 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&S$1, -1ll, 0 );
	fb_StrDelete( &S$1 );
	label$569:;
	FBSTRING* vr$52 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$52;
}

static void HBUILDSTRLIT( FBSTRING* LN$1, uint8* Z$1, int64 LENGTH$1 )
{
	FBSTRING TMP$400$1;
	FBSTRING TMP$419$1;
	label$592:;
	int64 CH$1;
	__builtin_memset( &TMP$400$1, 0, 24ll );
	FBSTRING* vr$2 = fb_StrConcat( &TMP$400$1, (void*)LN$1, -1ll, (void*)"\x22", 2ll );
	FBSTRING* vr$3 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$2, -1ll, 0 );
	{
		int64 I$2;
		I$2 = 0ll;
		int64 TMP$401$2;
		TMP$401$2 = LENGTH$1 + -2ll;
		goto label$594;
		label$597:;
		{
			CH$1 = (int64)*(uint8*)((uint8*)Z$1 + I$2);
			int64 vr$7 = HCHARNEEDSESCAPING( CH$1, 34ll );
			if( vr$7 == 0ll ) goto label$599;
			{
				FBSTRING TMP$403$4;
				FBSTRING TMP$404$4;
				FBSTRING* vr$9 = fb_HEXEx_l( (uint64)CH$1, 2 );
				__builtin_memset( &TMP$403$4, 0, 24ll );
				FBSTRING* vr$12 = fb_StrConcat( &TMP$403$4, (void*)"\x5Cx", 3ll, (void*)vr$9, -1ll );
				__builtin_memset( &TMP$404$4, 0, 24ll );
				FBSTRING* vr$15 = fb_StrConcat( &TMP$404$4, (void*)LN$1, -1ll, (void*)vr$12, -1ll );
				FBSTRING* vr$16 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$15, -1ll, 0 );
				int64 vr$19 = HISVALIDHEXDIGIT( (int64)*(uint8*)((uint8*)((uint8*)Z$1 + I$2) + 1ll) );
				if( vr$19 == 0ll ) goto label$601;
				{
					FBSTRING TMP$406$5;
					__builtin_memset( &TMP$406$5, 0, 24ll );
					FBSTRING* vr$23 = fb_StrConcat( &TMP$406$5, (void*)LN$1, -1ll, (void*)"\x22 \x22", 4ll );
					FBSTRING* vr$24 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$23, -1ll, 0 );
				}
				label$601:;
				label$600:;
			}
			goto label$598;
			label$599:;
			if( (uint64)CH$1 != 63ull ) goto label$602;
			{
				FBSTRING TMP$408$4;
				__builtin_memset( &TMP$408$4, 0, 24ll );
				FBSTRING* vr$28 = fb_StrConcat( &TMP$408$4, (void*)LN$1, -1ll, (void*)"?", 2ll );
				FBSTRING* vr$29 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$28, -1ll, 0 );
				if( (uint64)(int64)*(uint8*)((uint8*)((uint8*)Z$1 + I$2) + 1ll) != 63ull ) goto label$604;
				{
					{
						uint8 TMP$409$6;
						TMP$409$6 = *(uint8*)((uint8*)((uint8*)Z$1 + I$2) + 2ll);
						if( (uint64)(int64)TMP$409$6 == 61ull ) goto label$607;
						label$608:;
						if( (uint64)(int64)TMP$409$6 == 47ull ) goto label$607;
						label$609:;
						if( (uint64)(int64)TMP$409$6 == 39ull ) goto label$607;
						label$610:;
						if( (uint64)(int64)TMP$409$6 == 40ull ) goto label$607;
						label$611:;
						if( (uint64)(int64)TMP$409$6 == 41ull ) goto label$607;
						label$612:;
						if( (uint64)(int64)TMP$409$6 == 33ull ) goto label$607;
						label$613:;
						if( (uint64)(int64)TMP$409$6 == 60ull ) goto label$607;
						label$614:;
						if( (uint64)(int64)TMP$409$6 == 62ull ) goto label$607;
						label$615:;
						if( (uint64)(int64)TMP$409$6 != 45ull ) goto label$606;
						label$607:;
						{
							FBSTRING TMP$417$7;
							__builtin_memset( &TMP$417$7, 0, 24ll );
							FBSTRING* vr$54 = fb_StrConcat( &TMP$417$7, (void*)LN$1, -1ll, (void*)"\x22 \x22", 4ll );
							FBSTRING* vr$55 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$54, -1ll, 0 );
						}
						label$606:;
						label$605:;
					}
				}
				label$604:;
				label$603:;
			}
			goto label$598;
			label$602:;
			{
				FBSTRING TMP$418$4;
				FBSTRING* vr$56 = fb_CHR( 1, CH$1 );
				__builtin_memset( &TMP$418$4, 0, 24ll );
				FBSTRING* vr$59 = fb_StrConcat( &TMP$418$4, (void*)LN$1, -1ll, (void*)vr$56, -1ll );
				FBSTRING* vr$60 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$59, -1ll, 0 );
			}
			label$598:;
		}
		label$595:;
		I$2 = I$2 + 1ll;
		label$594:;
		if( I$2 <= TMP$401$2 ) goto label$597;
		label$596:;
	}
	__builtin_memset( &TMP$419$1, 0, 24ll );
	FBSTRING* vr$65 = fb_StrConcat( &TMP$419$1, (void*)LN$1, -1ll, (void*)"\x22", 2ll );
	FBSTRING* vr$66 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$65, -1ll, 0 );
	label$593:;
}

static void HBUILDWSTRLIT( FBSTRING* LN$1, uint32* W$1, int64 LENGTH$1 )
{
	FBSTRING TMP$421$1;
	FBSTRING TMP$431$1;
	label$616:;
	int64 CH$1;
	int64 WCHARSIZE$1;
	__builtin_memset( &TMP$421$1, 0, 24ll );
	FBSTRING* vr$2 = fb_StrConcat( &TMP$421$1, (void*)LN$1, -1ll, (void*)"L\x22", 3ll );
	FBSTRING* vr$3 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$2, -1ll, 0 );
	WCHARSIZE$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + 344ll);
	{
		int64 I$2;
		I$2 = 0ll;
		int64 TMP$422$2;
		TMP$422$2 = LENGTH$1 + -2ll;
		goto label$618;
		label$621:;
		{
			CH$1 = (int64)*(uint32*)((uint8*)W$1 + (I$2 << 2ll));
			int64 vr$8 = HCHARNEEDSESCAPING( CH$1, 34ll );
			if( vr$8 == 0ll ) goto label$623;
			{
				FBSTRING TMP$423$4;
				FBSTRING TMP$424$4;
				FBSTRING* vr$12 = fb_HEXEx_l( (uint64)CH$1, (int32)(WCHARSIZE$1 << 1ll) );
				__builtin_memset( &TMP$423$4, 0, 24ll );
				FBSTRING* vr$15 = fb_StrConcat( &TMP$423$4, (void*)"\x5Cx", 3ll, (void*)vr$12, -1ll );
				__builtin_memset( &TMP$424$4, 0, 24ll );
				FBSTRING* vr$18 = fb_StrConcat( &TMP$424$4, (void*)LN$1, -1ll, (void*)vr$15, -1ll );
				FBSTRING* vr$19 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$18, -1ll, 0 );
				int64 vr$23 = HISVALIDHEXDIGIT( (int64)*(uint32*)((uint8*)((uint8*)W$1 + (I$2 << 2ll)) + 4ll) );
				if( vr$23 == 0ll ) goto label$625;
				{
					FBSTRING TMP$426$5;
					__builtin_memset( &TMP$426$5, 0, 24ll );
					FBSTRING* vr$27 = fb_StrConcat( &TMP$426$5, (void*)LN$1, -1ll, (void*)"\x22 L\x22", 5ll );
					FBSTRING* vr$28 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$27, -1ll, 0 );
				}
				label$625:;
				label$624:;
			}
			goto label$622;
			label$623:;
			if( (uint64)CH$1 != 63ull ) goto label$626;
			{
				FBSTRING TMP$427$4;
				__builtin_memset( &TMP$427$4, 0, 24ll );
				FBSTRING* vr$32 = fb_StrConcat( &TMP$427$4, (void*)LN$1, -1ll, (void*)"?", 2ll );
				FBSTRING* vr$33 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$32, -1ll, 0 );
				if( (uint64)(int64)*(uint32*)((uint8*)((uint8*)W$1 + (I$2 << 2ll)) + 4ll) != 63ull ) goto label$628;
				{
					{
						uint32 TMP$428$6;
						TMP$428$6 = *(uint32*)((uint8*)((uint8*)W$1 + (I$2 << 2ll)) + 8ll);
						if( (uint64)(int64)TMP$428$6 == 61ull ) goto label$631;
						label$632:;
						if( (uint64)(int64)TMP$428$6 == 47ull ) goto label$631;
						label$633:;
						if( (uint64)(int64)TMP$428$6 == 39ull ) goto label$631;
						label$634:;
						if( (uint64)(int64)TMP$428$6 == 40ull ) goto label$631;
						label$635:;
						if( (uint64)(int64)TMP$428$6 == 41ull ) goto label$631;
						label$636:;
						if( (uint64)(int64)TMP$428$6 == 33ull ) goto label$631;
						label$637:;
						if( (uint64)(int64)TMP$428$6 == 60ull ) goto label$631;
						label$638:;
						if( (uint64)(int64)TMP$428$6 == 62ull ) goto label$631;
						label$639:;
						if( (uint64)(int64)TMP$428$6 != 45ull ) goto label$630;
						label$631:;
						{
							FBSTRING TMP$429$7;
							__builtin_memset( &TMP$429$7, 0, 24ll );
							FBSTRING* vr$60 = fb_StrConcat( &TMP$429$7, (void*)LN$1, -1ll, (void*)"\x22 L\x22", 5ll );
							FBSTRING* vr$61 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$60, -1ll, 0 );
						}
						label$630:;
						label$629:;
					}
				}
				label$628:;
				label$627:;
			}
			goto label$622;
			label$626:;
			{
				FBSTRING TMP$430$4;
				FBSTRING* vr$62 = fb_CHR( 1, CH$1 );
				__builtin_memset( &TMP$430$4, 0, 24ll );
				FBSTRING* vr$65 = fb_StrConcat( &TMP$430$4, (void*)LN$1, -1ll, (void*)vr$62, -1ll );
				FBSTRING* vr$66 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$65, -1ll, 0 );
			}
			label$622:;
		}
		label$619:;
		I$2 = I$2 + 1ll;
		label$618:;
		if( I$2 <= TMP$422$2 ) goto label$621;
		label$620:;
	}
	__builtin_memset( &TMP$431$1, 0, 24ll );
	FBSTRING* vr$71 = fb_StrConcat( &TMP$431$1, (void*)LN$1, -1ll, (void*)"\x22", 2ll );
	FBSTRING* vr$72 = fb_StrAssign( (void*)LN$1, -1ll, (void*)vr$71, -1ll, 0 );
	label$617:;
}

static uint8* HBOPTOSTR( int64 OP$1 )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$640:;
	{
		uint64 TMP$432$2;
		TMP$432$2 = (uint64)OP$1;
		goto label$643;
		label$644:;
		{
			fb$result$1 = (uint8*)" + ";
		}
		goto label$642;
		label$645:;
		{
			fb$result$1 = (uint8*)" - ";
		}
		goto label$642;
		label$646:;
		{
			fb$result$1 = (uint8*)" * ";
		}
		goto label$642;
		label$647:;
		{
			fb$result$1 = (uint8*)" / ";
		}
		goto label$642;
		label$648:;
		{
			fb$result$1 = (uint8*)" / ";
		}
		goto label$642;
		label$649:;
		{
			fb$result$1 = (uint8*)" % ";
		}
		goto label$642;
		label$650:;
		{
			fb$result$1 = (uint8*)" << ";
		}
		goto label$642;
		label$651:;
		{
			fb$result$1 = (uint8*)" >> ";
		}
		goto label$642;
		label$652:;
		{
			fb$result$1 = (uint8*)" & ";
		}
		goto label$642;
		label$653:;
		{
			fb$result$1 = (uint8*)" | ";
		}
		goto label$642;
		label$654:;
		{
			fb$result$1 = (uint8*)" ^ ";
		}
		goto label$642;
		label$655:;
		{
			fb$result$1 = (uint8*)" == ";
		}
		goto label$642;
		label$656:;
		{
			fb$result$1 = (uint8*)" > ";
		}
		goto label$642;
		label$657:;
		{
			fb$result$1 = (uint8*)" < ";
		}
		goto label$642;
		label$658:;
		{
			fb$result$1 = (uint8*)" != ";
		}
		goto label$642;
		label$659:;
		{
			fb$result$1 = (uint8*)" >= ";
		}
		goto label$642;
		label$660:;
		{
			fb$result$1 = (uint8*)" <= ";
		}
		goto label$642;
		label$643:;
		static const void* tmp$650[23ll] = {
			&&label$644,
			&&label$645,
			&&label$646,
			&&label$647,
			&&label$648,
			&&label$649,
			&&label$652,
			&&label$653,
			&&label$642,
			&&label$642,
			&&label$654,
			&&label$642,
			&&label$642,
			&&label$650,
			&&label$651,
			&&label$642,
			&&label$642,
			&&label$655,
			&&label$656,
			&&label$657,
			&&label$658,
			&&label$659,
			&&label$660,
		};
		if( TMP$432$2 < 28ll ) goto label$642;
		if( TMP$432$2 > 50ll ) goto label$642;
		goto *tmp$650[TMP$432$2 - 28ll];
		label$642:;
	}
	label$641:;
	return fb$result$1;
}

static uint8* HUOPTOSTR( int64 OP$1, int64 DTYPE$1, int64* IS_BUILTIN$1 )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$661:;
	*IS_BUILTIN$1 = 0ll;
	{
		if( OP$1 != 22ll ) goto label$664;
		label$665:;
		{
			fb$result$1 = (uint8*)"&";
		}
		goto label$663;
		label$664:;
		if( OP$1 != 76ll ) goto label$666;
		label$667:;
		{
			fb$result$1 = (uint8*)"*";
		}
		goto label$663;
		label$666:;
		if( OP$1 != 54ll ) goto label$668;
		label$669:;
		{
			fb$result$1 = (uint8*)"-";
		}
		goto label$663;
		label$668:;
		if( OP$1 != 52ll ) goto label$670;
		label$671:;
		{
			fb$result$1 = (uint8*)"~";
		}
		goto label$663;
		label$670:;
		if( OP$1 != 56ll ) goto label$672;
		label$673:;
		{
			*IS_BUILTIN$1 = -1ll;
			{
				int64 TMP$451$4;
				uint64 TMP$452$4;
				if( (DTYPE$1 & 480ll) == 0ll ) goto label$674;
				TMP$451$4 = 22ll;
				goto label$1075;
				label$674:;
				TMP$451$4 = DTYPE$1 & 31ll;
				label$1075:;
				TMP$452$4 = *(uint64*)(((uint8*)SYMB_DTYPETB$ + (TMP$451$4 * 56ll)) + 40ll);
				goto label$676;
				label$677:;
				{
					fb$result$1 = (uint8*)"__builtin_fabsf";
				}
				goto label$675;
				label$678:;
				{
					fb$result$1 = (uint8*)"__builtin_fabs";
				}
				goto label$675;
				label$679:;
				{
					fb$result$1 = (uint8*)"__builtin_llabs";
				}
				goto label$675;
				label$680:;
				{
					fb$result$1 = (uint8*)"__builtin_abs";
				}
				goto label$675;
				label$676:;
				static const void* tmp$651[4ll] = {
					&&label$679,
					&&label$679,
					&&label$677,
					&&label$678,
				};
				if( TMP$452$4 < 6ll ) goto label$680;
				if( TMP$452$4 > 9ll ) goto label$680;
				goto *tmp$651[TMP$452$4 - 6ll];
				label$675:;
			}
		}
		goto label$663;
		label$672:;
		{
			*IS_BUILTIN$1 = -1ll;
			if( DTYPE$1 != 14ll ) goto label$683;
			{
				{
					uint64 TMP$457$5;
					TMP$457$5 = (uint64)OP$1;
					goto label$685;
					label$686:;
					{
						fb$result$1 = (uint8*)"__builtin_sinf";
					}
					goto label$684;
					label$687:;
					{
						fb$result$1 = (uint8*)"__builtin_asinf";
					}
					goto label$684;
					label$688:;
					{
						fb$result$1 = (uint8*)"__builtin_cosf";
					}
					goto label$684;
					label$689:;
					{
						fb$result$1 = (uint8*)"__builtin_acosf";
					}
					goto label$684;
					label$690:;
					{
						fb$result$1 = (uint8*)"__builtin_tanf";
					}
					goto label$684;
					label$691:;
					{
						fb$result$1 = (uint8*)"__builtin_atanf";
					}
					goto label$684;
					label$692:;
					{
						fb$result$1 = (uint8*)"__builtin_sqrtf";
					}
					goto label$684;
					label$693:;
					{
						fb$result$1 = (uint8*)"__builtin_logf";
					}
					goto label$684;
					label$694:;
					{
						fb$result$1 = (uint8*)"__builtin_expf";
					}
					goto label$684;
					label$695:;
					{
						fb$result$1 = (uint8*)"__builtin_floorf";
					}
					goto label$684;
					label$696:;
					{
					}
					goto label$684;
					label$685:;
					static const void* tmp$652[13ll] = {
						&&label$686,
						&&label$687,
						&&label$688,
						&&label$689,
						&&label$690,
						&&label$691,
						&&label$696,
						&&label$692,
						&&label$696,
						&&label$696,
						&&label$693,
						&&label$694,
						&&label$695,
					};
					if( TMP$457$5 < 58ll ) goto label$696;
					if( TMP$457$5 > 70ll ) goto label$696;
					goto *tmp$652[TMP$457$5 - 58ll];
					label$684:;
				}
			}
			goto label$682;
			label$683:;
			{
				{
					uint64 TMP$468$5;
					TMP$468$5 = (uint64)OP$1;
					goto label$698;
					label$699:;
					{
						fb$result$1 = (uint8*)"__builtin_sin";
					}
					goto label$697;
					label$700:;
					{
						fb$result$1 = (uint8*)"__builtin_asin";
					}
					goto label$697;
					label$701:;
					{
						fb$result$1 = (uint8*)"__builtin_cos";
					}
					goto label$697;
					label$702:;
					{
						fb$result$1 = (uint8*)"__builtin_acos";
					}
					goto label$697;
					label$703:;
					{
						fb$result$1 = (uint8*)"__builtin_tan";
					}
					goto label$697;
					label$704:;
					{
						fb$result$1 = (uint8*)"__builtin_atan";
					}
					goto label$697;
					label$705:;
					{
						fb$result$1 = (uint8*)"__builtin_sqrt";
					}
					goto label$697;
					label$706:;
					{
						fb$result$1 = (uint8*)"__builtin_log";
					}
					goto label$697;
					label$707:;
					{
						fb$result$1 = (uint8*)"__builtin_exp";
					}
					goto label$697;
					label$708:;
					{
						fb$result$1 = (uint8*)"__builtin_floor";
					}
					goto label$697;
					label$709:;
					{
					}
					goto label$697;
					label$698:;
					static const void* tmp$653[13ll] = {
						&&label$699,
						&&label$700,
						&&label$701,
						&&label$702,
						&&label$703,
						&&label$704,
						&&label$709,
						&&label$705,
						&&label$709,
						&&label$709,
						&&label$706,
						&&label$707,
						&&label$708,
					};
					if( TMP$468$5 < 58ll ) goto label$709;
					if( TMP$468$5 > 70ll ) goto label$709;
					goto *tmp$653[TMP$468$5 - 58ll];
					label$697:;
				}
			}
			label$682:;
		}
		label$681:;
		label$663:;
	}
	label$662:;
	return fb$result$1;
}

static void HEXPRFLUSH( struct $8EXPRNODE* N$1, int64 NEED_PARENS$1 )
{
	label$710:;
	struct $8EXPRNODE* L$1;
	struct $8FBSYMBOL* SYM$1;
	int64 IS_BUILTIN$1;
	{
		uint64 TMP$479$2;
		TMP$479$2 = *(uint64*)N$1;
		goto label$713;
		label$714:;
		{
			FBSTRING TMP$480$3;
			__builtin_memset( &TMP$480$3, 0, 24ll );
			FBSTRING* vr$5 = fb_StrConcat( &TMP$480$3, (void*)((uint8*)&CTX$ + 5568ll), -1ll, *(void**)((uint8*)N$1 + 40ll), 0ll );
			FBSTRING* vr$7 = fb_StrAssign( (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)vr$5, -1ll, 0 );
		}
		goto label$712;
		label$715:;
		{
			int64 TMP$481$3;
			if( (*(int64*)((uint8*)N$1 + 8ll) & 480ll) == 0ll ) goto label$716;
			TMP$481$3 = 22ll;
			goto label$1076;
			label$716:;
			TMP$481$3 = *(int64*)((uint8*)N$1 + 8ll) & 31ll;
			label$1076:;
			if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$481$3 * 56ll)) != 1ll ) goto label$718;
			{
				FBSTRING TMP$482$4;
				FBSTRING* vr$17 = HEMITFLOAT( *(int64*)((uint8*)N$1 + 8ll), *(double*)((uint8*)N$1 + 40ll) );
				__builtin_memset( &TMP$482$4, 0, 24ll );
				FBSTRING* vr$21 = fb_StrConcat( &TMP$482$4, (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)vr$17, -1ll );
				FBSTRING* vr$23 = fb_StrAssign( (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)vr$21, -1ll, 0 );
			}
			goto label$717;
			label$718:;
			{
				FBSTRING TMP$483$4;
				FBSTRING* vr$26 = HEMITINT( *(int64*)((uint8*)N$1 + 8ll), *(int64*)((uint8*)N$1 + 40ll) );
				__builtin_memset( &TMP$483$4, 0, 24ll );
				FBSTRING* vr$30 = fb_StrConcat( &TMP$483$4, (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)vr$26, -1ll );
				FBSTRING* vr$32 = fb_StrAssign( (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)vr$30, -1ll, 0 );
			}
			label$717:;
		}
		goto label$712;
		label$719:;
		{
			SYM$1 = *(struct $8FBSYMBOL**)((uint8*)N$1 + 40ll);
			if( (*(int64*)((uint8*)SYM$1 + 8ll) & 524288ll) == 0ll ) goto label$721;
			{
				if( (*(int64*)((uint8*)SYM$1 + 48ll) & 511ll) != 6ll ) goto label$723;
				{
					uint32* vr$43 = HUNESCAPEW( *(uint32**)((uint8*)SYM$1 + 88ll) );
					HBUILDWSTRLIT( (FBSTRING*)((uint8*)&CTX$ + 5568ll), vr$43, *(int64*)((uint8*)SYM$1 + 72ll) / *(int64*)((uint8*)SYMB_DTYPETB$ + 344ll) );
				}
				goto label$722;
				label$723:;
				{
					uint8* vr$47 = HUNESCAPE( *(uint8**)((uint8*)SYM$1 + 88ll) );
					HBUILDSTRLIT( (FBSTRING*)((uint8*)&CTX$ + 5568ll), vr$47, *(int64*)((uint8*)SYM$1 + 72ll) );
				}
				label$722:;
			}
			goto label$720;
			label$721:;
			{
				FBSTRING TMP$485$4;
				if( *(int64*)SYM$1 != 7ll ) goto label$725;
				{
					FBSTRING* vr$52 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)"&&", 3ll, 0 );
				}
				goto label$724;
				label$725:;
				if( *(int64*)SYM$1 != 3ll ) goto label$726;
				{
					FBSTRING* vr$56 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)"&", 2ll, 0 );
				}
				label$726:;
				label$724:;
				uint8* vr$57 = SYMBGETMANGLEDNAME( SYM$1 );
				__builtin_memset( &TMP$485$4, 0, 24ll );
				FBSTRING* vr$61 = fb_StrConcat( &TMP$485$4, (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)vr$57, 0ll );
				FBSTRING* vr$63 = fb_StrAssign( (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)vr$61, -1ll, 0 );
			}
			label$720:;
		}
		goto label$712;
		label$727:;
		{
			FBSTRING TMP$486$3;
			FBSTRING TMP$487$3;
			FBSTRING TMP$488$3;
			FBSTRING* vr$66 = HEMITTYPE( *(int64*)((uint8*)N$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll) );
			__builtin_memset( &TMP$486$3, 0, 24ll );
			FBSTRING* vr$69 = fb_StrConcat( &TMP$486$3, (void*)"(", 2ll, (void*)vr$66, -1ll );
			__builtin_memset( &TMP$487$3, 0, 24ll );
			FBSTRING* vr$72 = fb_StrConcat( &TMP$487$3, (void*)vr$69, -1ll, (void*)")", 2ll );
			__builtin_memset( &TMP$488$3, 0, 24ll );
			FBSTRING* vr$76 = fb_StrConcat( &TMP$488$3, (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)vr$72, -1ll );
			FBSTRING* vr$78 = fb_StrAssign( (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)vr$76, -1ll, 0 );
			HEXPRFLUSH( *(struct $8EXPRNODE**)((uint8*)N$1 + 24ll), -1ll );
		}
		goto label$712;
		label$728:;
		{
			FBSTRING TMP$489$3;
			uint8* vr$83 = HUOPTOSTR( *(int64*)((uint8*)N$1 + 40ll), *(int64*)((uint8*)N$1 + 8ll), &IS_BUILTIN$1 );
			__builtin_memset( &TMP$489$3, 0, 24ll );
			FBSTRING* vr$87 = fb_StrConcat( &TMP$489$3, (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)vr$83, 0ll );
			FBSTRING* vr$89 = fb_StrAssign( (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)vr$87, -1ll, 0 );
			NEED_PARENS$1 = (int64)-(*(int64*)*(struct $8EXPRNODE**)((uint8*)N$1 + 24ll) == 4ll) | IS_BUILTIN$1;
			if( NEED_PARENS$1 == 0ll ) goto label$730;
			{
				FBSTRING* vr$96 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)"(", 2ll, 0 );
				if( IS_BUILTIN$1 == 0ll ) goto label$732;
				{
					FBSTRING* vr$99 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)" ", 2ll, 0 );
				}
				label$732:;
				label$731:;
			}
			label$730:;
			label$729:;
			HEXPRFLUSH( *(struct $8EXPRNODE**)((uint8*)N$1 + 24ll), -1ll );
			if( NEED_PARENS$1 == 0ll ) goto label$734;
			{
				if( IS_BUILTIN$1 == 0ll ) goto label$736;
				{
					FBSTRING* vr$104 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)" ", 2ll, 0 );
				}
				label$736:;
				label$735:;
				FBSTRING* vr$106 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)")", 2ll, 0 );
			}
			label$734:;
			label$733:;
		}
		goto label$712;
		label$737:;
		{
			{
				int64 TMP$490$4;
				TMP$490$4 = *(int64*)((uint8*)N$1 + 40ll);
				if( TMP$490$4 != 64ll ) goto label$739;
				label$740:;
				{
					if( *(int64*)((uint8*)N$1 + 8ll) != 14ll ) goto label$742;
					{
						FBSTRING* vr$112 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)"__builtin_atan2f", 17ll, 0 );
					}
					goto label$741;
					label$742:;
					{
						FBSTRING* vr$114 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)"__builtin_atan2", 16ll, 0 );
					}
					label$741:;
					FBSTRING* vr$116 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)"(", 2ll, 0 );
					HEXPRFLUSH( *(struct $8EXPRNODE**)((uint8*)N$1 + 24ll), 0ll );
					FBSTRING* vr$119 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)", ", 3ll, 0 );
					HEXPRFLUSH( *(struct $8EXPRNODE**)((uint8*)N$1 + 32ll), 0ll );
					FBSTRING* vr$122 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)")", 2ll, 0 );
				}
				goto label$738;
				label$739:;
				{
					FBSTRING TMP$493$5;
					if( NEED_PARENS$1 == 0ll ) goto label$745;
					{
						FBSTRING* vr$125 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)"(", 2ll, 0 );
					}
					label$745:;
					label$744:;
					HEXPRFLUSH( *(struct $8EXPRNODE**)((uint8*)N$1 + 24ll), -1ll );
					uint8* vr$128 = HBOPTOSTR( *(int64*)((uint8*)N$1 + 40ll) );
					__builtin_memset( &TMP$493$5, 0, 24ll );
					FBSTRING* vr$132 = fb_StrConcat( &TMP$493$5, (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)vr$128, 0ll );
					FBSTRING* vr$134 = fb_StrAssign( (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)vr$132, -1ll, 0 );
					HEXPRFLUSH( *(struct $8EXPRNODE**)((uint8*)N$1 + 32ll), -1ll );
					if( NEED_PARENS$1 == 0ll ) goto label$747;
					{
						FBSTRING* vr$138 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)")", 2ll, 0 );
					}
					label$747:;
					label$746:;
				}
				label$743:;
				label$738:;
			}
		}
		goto label$712;
		label$713:;
		static const void* tmp$654[6ll] = {
			&&label$714,
			&&label$715,
			&&label$719,
			&&label$727,
			&&label$728,
			&&label$737,
		};
		if( TMP$479$2 > 5ll ) goto label$712;
		goto *tmp$654[TMP$479$2 - 0ll];
		label$712:;
	}
	label$711:;
}

static FBSTRING* EXPRFLUSH( struct $8EXPRNODE* N$1, int64 NEED_PARENS$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$748:;
	HEXPRFLUSH( N$1, NEED_PARENS$1 );
	FBSTRING* vr$3 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)((uint8*)&CTX$ + 5568ll), -1ll, 0 );
	fb_StrAssign( (void*)((uint8*)&CTX$ + 5568ll), -1ll, (void*)"", 1ll, 0 );
	EXPRFREETREE( N$1 );
	label$749:;
	FBSTRING* vr$6 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$6;
}

static struct $8EXPRNODE* EXPRNEWOFFSET( struct $8FBSYMBOL* SYM$1, int64 OFS$1 )
{
	struct $8EXPRNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$750:;
	struct $8EXPRNODE* L$1;
	struct $8EXPRNODE* vr$1 = EXPRNEWSYM( SYM$1 );
	L$1 = vr$1;
	int64 vr$5 = SYMBISCARRAY( SYM$1 );
	if( ((((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 512ll) != 0ll) | vr$5) | (int64)-(*(int64*)SYM$1 == 3ll)) | (int64)-(*(int64*)SYM$1 == 7ll)) != 0ll ) goto label$753;
	{
		struct $8EXPRNODE* vr$14 = EXPRNEWUOP( 22ll, L$1 );
		L$1 = vr$14;
	}
	label$753:;
	label$752:;
	if( OFS$1 == 0ll ) goto label$755;
	{
		struct $8EXPRNODE* vr$16 = EXPRNEWCAST( 34ll, (struct $8FBSYMBOL*)0ull, L$1 );
		L$1 = vr$16;
		struct $8EXPRNODE* vr$17 = EXPRNEWIMMI( OFS$1, 7ll );
		struct $8EXPRNODE* vr$18 = EXPRNEWBOP( 28ll, L$1, vr$17 );
		L$1 = vr$18;
	}
	label$755:;
	label$754:;
	fb$result$1 = L$1;
	label$751:;
	return fb$result$1;
}

static struct $8EXPRNODE* EXPRNEWVREG( struct $6IRVREG* VREG$1, int64 IS_LVALUE$1 )
{
	struct $8EXPRNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$756:;
	struct $8EXPRNODE* L$1;
	int64 DTYPE$1;
	int64 HAVE_OFFSET$1;
	{
		uint64 TMP$494$2;
		TMP$494$2 = *(uint64*)VREG$1;
		goto label$759;
		label$760:;
		{
			if( *(struct $8FBSYMBOL**)((uint8*)VREG$1 + 56ll) != (struct $8FBSYMBOL*)0ull ) goto label$762;
			{
				if( *(struct $6IRVREG**)((uint8*)VREG$1 + 80ll) == (struct $6IRVREG*)0ull ) goto label$764;
				{
					struct $8EXPRNODE* vr$7 = EXPRNEWVREG( *(struct $6IRVREG**)((uint8*)VREG$1 + 80ll), 0ll );
					L$1 = vr$7;
					if( *(int64*)((uint8*)VREG$1 + 64ll) == 0ll ) goto label$766;
					{
						struct $8EXPRNODE* vr$10 = EXPRNEWCAST( 34ll, (struct $8FBSYMBOL*)0ull, L$1 );
						L$1 = vr$10;
						struct $8EXPRNODE* vr$12 = EXPRNEWIMMI( *(int64*)((uint8*)VREG$1 + 64ll), 7ll );
						struct $8EXPRNODE* vr$13 = EXPRNEWBOP( 28ll, L$1, vr$12 );
						L$1 = vr$13;
					}
					label$766:;
					label$765:;
				}
				goto label$763;
				label$764:;
				{
					struct $8EXPRNODE* vr$15 = EXPRNEWIMMI( *(int64*)((uint8*)VREG$1 + 64ll), 7ll );
					L$1 = vr$15;
				}
				label$763:;
				struct $8EXPRNODE* vr$27 = EXPRNEWCAST( ((*(int64*)((uint8*)VREG$1 + 8ll) & 31ll) | ((*(int64*)((uint8*)VREG$1 + 8ll) & 480ll) + 32ll)) | ((*(int64*)((uint8*)VREG$1 + 8ll) & 261632ll) << 1ll), *(struct $8FBSYMBOL**)((uint8*)VREG$1 + 16ll), L$1 );
				L$1 = vr$27;
				struct $8EXPRNODE* vr$28 = EXPRNEWUOP( 76ll, L$1 );
				L$1 = vr$28;
				goto label$758;
			}
			label$762:;
			label$761:;
			HAVE_OFFSET$1 = (int64)-(*(int64*)((uint8*)VREG$1 + 64ll) != 0ll) | (int64)-(*(struct $6IRVREG**)((uint8*)VREG$1 + 80ll) != (struct $6IRVREG*)0ull);
			int64 DO_DEREF$3;
			int64 vr$35 = SYMBISCARRAY( *(struct $8FBSYMBOL**)((uint8*)VREG$1 + 56ll) );
			DO_DEREF$3 = HAVE_OFFSET$1 | vr$35;
			struct $8EXPRNODE* vr$38 = EXPRNEWSYM( *(struct $8FBSYMBOL**)((uint8*)VREG$1 + 56ll) );
			L$1 = vr$38;
			int64 SYMDTYPE$3;
			SYMDTYPE$3 = *(int64*)((uint8*)L$1 + 8ll);
			struct $8FBSYMBOL* SYMSUBTYPE$3;
			SYMSUBTYPE$3 = *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll);
			if( ((int64)-(*(int64*)((uint8*)VREG$1 + 8ll) != SYMDTYPE$3) | (int64)-(*(struct $8FBSYMBOL**)((uint8*)VREG$1 + 16ll) != SYMSUBTYPE$3)) == 0ll ) goto label$768;
			{
				int64 TMP$495$4;
				int64 TMP$496$4;
				if( (*(int64*)((uint8*)VREG$1 + 8ll) & 480ll) == 0ll ) goto label$769;
				TMP$495$4 = 22ll;
				goto label$1077;
				label$769:;
				TMP$495$4 = *(int64*)((uint8*)VREG$1 + 8ll) & 31ll;
				label$1077:;
				if( (SYMDTYPE$3 & 480ll) == 0ll ) goto label$770;
				TMP$496$4 = 22ll;
				goto label$1078;
				label$770:;
				TMP$496$4 = SYMDTYPE$3 & 31ll;
				label$1078:;
				DO_DEREF$3 = DO_DEREF$3 | (int64)-(*(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$495$4 * 56ll)) != *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$496$4 * 56ll)));
				{
					int64 TMP$497$5;
					int64 TMP$498$5;
					if( (*(int64*)((uint8*)VREG$1 + 8ll) & 480ll) == 0ll ) goto label$771;
					TMP$497$5 = 22ll;
					goto label$1079;
					label$771:;
					TMP$497$5 = *(int64*)((uint8*)VREG$1 + 8ll) & 31ll;
					label$1079:;
					TMP$498$5 = TMP$497$5;
					if( TMP$498$5 == 16ll ) goto label$774;
					label$775:;
					if( TMP$498$5 != 18ll ) goto label$773;
					label$774:;
					{
						DO_DEREF$3 = -1ll;
					}
					goto label$772;
					label$773:;
					{
						{
							int64 TMP$499$7;
							int64 TMP$500$7;
							if( (SYMDTYPE$3 & 480ll) == 0ll ) goto label$777;
							TMP$499$7 = 22ll;
							goto label$1080;
							label$777:;
							TMP$499$7 = SYMDTYPE$3 & 31ll;
							label$1080:;
							TMP$500$7 = TMP$499$7;
							if( TMP$500$7 == 16ll ) goto label$780;
							label$781:;
							if( TMP$500$7 != 18ll ) goto label$779;
							label$780:;
							{
								DO_DEREF$3 = -1ll;
							}
							label$779:;
							label$778:;
						}
					}
					label$776:;
					label$772:;
				}
			}
			label$768:;
			label$767:;
			if( DO_DEREF$3 != 0ll ) goto label$783;
			{
				goto label$758;
			}
			label$783:;
			label$782:;
			if( (int64)-((SYMDTYPE$3 & 480ll) != 0ll) != 0ll ) goto label$785;
			{
				struct $8EXPRNODE* vr$75 = EXPRNEWUOP( 22ll, L$1 );
				L$1 = vr$75;
			}
			label$785:;
			label$784:;
			if( HAVE_OFFSET$1 == 0ll ) goto label$787;
			{
				struct $8EXPRNODE* vr$77 = EXPRNEWCAST( 34ll, (struct $8FBSYMBOL*)0ull, L$1 );
				L$1 = vr$77;
				if( *(struct $6IRVREG**)((uint8*)VREG$1 + 80ll) == (struct $6IRVREG*)0ull ) goto label$789;
				{
					struct $8EXPRNODE* vr$81 = EXPRNEWVREG( *(struct $6IRVREG**)((uint8*)VREG$1 + 80ll), 0ll );
					struct $8EXPRNODE* vr$82 = EXPRNEWBOP( 28ll, L$1, vr$81 );
					L$1 = vr$82;
				}
				label$789:;
				label$788:;
				if( *(int64*)((uint8*)VREG$1 + 64ll) == 0ll ) goto label$791;
				{
					struct $8EXPRNODE* vr$86 = EXPRNEWIMMI( *(int64*)((uint8*)VREG$1 + 64ll), 7ll );
					struct $8EXPRNODE* vr$87 = EXPRNEWBOP( 28ll, L$1, vr$86 );
					L$1 = vr$87;
				}
				label$791:;
				label$790:;
			}
			label$787:;
			label$786:;
			struct $8EXPRNODE* vr$99 = EXPRNEWCAST( ((*(int64*)((uint8*)VREG$1 + 8ll) & 31ll) | ((*(int64*)((uint8*)VREG$1 + 8ll) & 480ll) + 32ll)) | ((*(int64*)((uint8*)VREG$1 + 8ll) & 261632ll) << 1ll), *(struct $8FBSYMBOL**)((uint8*)VREG$1 + 16ll), L$1 );
			L$1 = vr$99;
			struct $8EXPRNODE* vr$100 = EXPRNEWUOP( 76ll, L$1 );
			L$1 = vr$100;
		}
		goto label$758;
		label$792:;
		{
			struct $8EXPRNODE* vr$103 = EXPRNEWOFFSET( *(struct $8FBSYMBOL**)((uint8*)VREG$1 + 56ll), *(int64*)((uint8*)VREG$1 + 64ll) );
			L$1 = vr$103;
		}
		goto label$758;
		label$793:;
		{
			int64 TMP$501$3;
			DTYPE$1 = *(int64*)((uint8*)VREG$1 + 8ll);
			if( (DTYPE$1 & 480ll) == 0ll ) goto label$794;
			TMP$501$3 = 22ll;
			goto label$1081;
			label$794:;
			TMP$501$3 = DTYPE$1 & 31ll;
			label$1081:;
			if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$501$3 * 56ll)) != 1ll ) goto label$796;
			{
				struct $8EXPRNODE* vr$111 = EXPRNEWIMMF( *(double*)((uint8*)VREG$1 + 48ll), DTYPE$1 );
				L$1 = vr$111;
			}
			goto label$795;
			label$796:;
			{
				struct $8EXPRNODE* vr$113 = EXPRNEWIMMI( *(int64*)((uint8*)VREG$1 + 48ll), DTYPE$1 );
				L$1 = vr$113;
			}
			label$795:;
		}
		goto label$758;
		label$797:;
		{
			struct $8EXPRNODE* vr$115 = EXPRLOOKUP( *(int64*)((uint8*)VREG$1 + 24ll) );
			L$1 = vr$115;
			if( L$1 != (struct $8EXPRNODE*)0ull ) goto label$799;
			{
				FBSTRING TMP$503$4;
				FBSTRING TMP$504$4;
				__builtin_memset( &TMP$504$4, 0, 24ll );
				FBSTRING* vr$119 = fb_LongintToStr( *(int64*)((uint8*)VREG$1 + 24ll) );
				__builtin_memset( &TMP$503$4, 0, 24ll );
				FBSTRING* vr$122 = fb_StrConcat( &TMP$503$4, (void*)"vr$", 4ll, (void*)vr$119, -1ll );
				FBSTRING* vr$124 = fb_StrAssign( (void*)&TMP$504$4, -1ll, (void*)vr$122, -1ll, 0 );
				struct $8EXPRNODE* vr$127 = EXPRNEWTEXT( *(int64*)((uint8*)VREG$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VREG$1 + 16ll), *(uint8**)&TMP$504$4 );
				L$1 = vr$127;
				fb_StrDelete( &TMP$504$4 );
			}
			label$799:;
			label$798:;
		}
		goto label$758;
		label$759:;
		static const void* tmp$655[6ll] = {
			&&label$793,
			&&label$760,
			&&label$760,
			&&label$760,
			&&label$797,
			&&label$792,
		};
		if( TMP$494$2 > 5ll ) goto label$758;
		goto *tmp$655[TMP$494$2 - 0ll];
		label$758:;
	}
	if( IS_LVALUE$1 != 0ll ) goto label$801;
	{
		struct $8EXPRNODE* vr$132 = EXPRNEWCAST( *(int64*)((uint8*)VREG$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VREG$1 + 16ll), L$1 );
		L$1 = vr$132;
	}
	label$801:;
	label$800:;
	fb$result$1 = L$1;
	label$757:;
	return fb$result$1;
}

static void _EMITLABEL( struct $8FBSYMBOL* LABEL$1 )
{
	label$802:;
	int64 vr$0 = SECTIONINSIDEPROC(  );
	if( vr$0 == 0ll ) goto label$805;
	{
		FBSTRING TMP$506$2;
		FBSTRING TMP$507$2;
		__builtin_memset( &TMP$507$2, 0, 24ll );
		uint8* vr$3 = SYMBGETMANGLEDNAME( LABEL$1 );
		__builtin_memset( &TMP$506$2, 0, 24ll );
		FBSTRING* vr$6 = fb_StrConcat( &TMP$506$2, (void*)vr$3, 0ll, (void*)":;", 3ll );
		FBSTRING* vr$8 = fb_StrAssign( (void*)&TMP$507$2, -1ll, (void*)vr$6, -1ll, 0 );
		HWRITELINE( &TMP$507$2, 0ll );
		fb_StrDelete( &TMP$507$2 );
	}
	label$805:;
	label$804:;
	label$803:;
}

static void EXPRSTORE( struct $6IRVREG* VR$1, struct $8EXPRNODE* R$1, int64 HAS_SIDEFX$1 )
{
	label$806:;
	static FBSTRING LN$1;
	static FBSTRING TEMPVAR$1;
	struct $8EXPRNODE* L$1;
	if( *(int64*)VR$1 != 4ll ) goto label$809;
	{
		if( HAS_SIDEFX$1 == 0ll ) goto label$811;
		{
			FBSTRING TMP$508$3;
			FBSTRING* vr$4 = fb_LongintToStr( *(int64*)((uint8*)VR$1 + 24ll) );
			__builtin_memset( &TMP$508$3, 0, 24ll );
			FBSTRING* vr$7 = fb_StrConcat( &TMP$508$3, (void*)"vr$", 4ll, (void*)vr$4, -1ll );
			FBSTRING* vr$8 = fb_StrAssign( (void*)&TEMPVAR$1, -1ll, (void*)vr$7, -1ll, 0 );
			FBSTRING* vr$11 = HEMITTYPE( *(int64*)((uint8*)VR$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VR$1 + 16ll) );
			FBSTRING* vr$12 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$11, -1ll, 0 );
			FBSTRING* vr$13 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" ", 2ll, 0 );
			FBSTRING* vr$14 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)&TEMPVAR$1, -1ll, 0 );
			FBSTRING* vr$15 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" = ", 4ll, 0 );
			FBSTRING* vr$16 = EXPRFLUSH( R$1, 0ll );
			FBSTRING* vr$17 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$16, -1ll, 0 );
			FBSTRING* vr$18 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)";", 2ll, 0 );
			HWRITELINE( &LN$1, 0ll );
			struct $8EXPRNODE* vr$21 = EXPRNEWTEXT( *(int64*)((uint8*)VR$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VR$1 + 16ll), *(uint8**)&TEMPVAR$1 );
			R$1 = vr$21;
		}
		goto label$810;
		label$811:;
		{
			struct $8EXPRNODE* vr$24 = EXPRNEWCAST( *(int64*)((uint8*)VR$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VR$1 + 16ll), R$1 );
			R$1 = vr$24;
		}
		label$810:;
		EXPRCACHE( *(int64*)((uint8*)VR$1 + 24ll), R$1 );
	}
	goto label$808;
	label$809:;
	{
		struct $8EXPRNODE* vr$26 = EXPRNEWVREG( VR$1, -1ll );
		L$1 = vr$26;
		struct $8EXPRNODE* vr$29 = EXPRNEWCAST( *(int64*)((uint8*)VR$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VR$1 + 16ll), R$1 );
		R$1 = vr$29;
		if( ((int64)-((*(int64*)((uint8*)L$1 + 8ll) & 480ll) != 0ll) | (int64)-((*(int64*)((uint8*)R$1 + 8ll) & 480ll) != 0ll)) == 0ll ) goto label$813;
		{
			struct $8EXPRNODE* vr$40 = EXPRNEWCAST( *(int64*)((uint8*)L$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll), R$1 );
			R$1 = vr$40;
		}
		label$813:;
		label$812:;
		FBSTRING* vr$41 = EXPRFLUSH( L$1, 0ll );
		FBSTRING* vr$42 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$41, -1ll, 0 );
		FBSTRING* vr$43 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)" = ", 4ll, 0 );
		FBSTRING* vr$44 = EXPRFLUSH( R$1, 0ll );
		FBSTRING* vr$45 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)vr$44, -1ll, 0 );
		FBSTRING* vr$46 = fb_StrConcatAssign( (void*)&LN$1, -1ll, (void*)";", 2ll, 0 );
		HWRITELINE( &LN$1, 0ll );
	}
	label$808:;
	label$807:;
}

static void _EMITBOP( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* V2$1, struct $6IRVREG* VR$1, struct $8FBSYMBOL* EX$1 )
{
	label$814:;
	struct $8EXPRNODE* L$1;
	struct $8EXPRNODE* R$1;
	struct $8EXPRNODE* vr$0 = EXPRNEWVREG( V1$1, 0ll );
	L$1 = vr$0;
	struct $8EXPRNODE* vr$1 = EXPRNEWVREG( V2$1, 0ll );
	R$1 = vr$1;
	{
		uint64 TMP$509$2;
		TMP$509$2 = (uint64)OP$1;
		goto label$817;
		label$818:;
		{
			if( VR$1 != (struct $6IRVREG*)0ull ) goto label$820;
			{
				FBSTRING TMP$512$4;
				static FBSTRING S$4;
				fb_StrAssign( (void*)&S$4, -1ll, (void*)"if( ", 5ll, 0 );
				struct $8EXPRNODE* vr$3 = EXPRNEWBOP( OP$1, L$1, R$1 );
				FBSTRING* vr$4 = EXPRFLUSH( vr$3, 0ll );
				FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&S$4, -1ll, (void*)vr$4, -1ll, 0 );
				FBSTRING* vr$6 = fb_StrConcatAssign( (void*)&S$4, -1ll, (void*)" ) goto ", 9ll, 0 );
				uint8* vr$7 = SYMBGETMANGLEDNAME( EX$1 );
				__builtin_memset( &TMP$512$4, 0, 24ll );
				FBSTRING* vr$10 = fb_StrConcat( &TMP$512$4, (void*)&S$4, -1ll, (void*)vr$7, 0ll );
				FBSTRING* vr$11 = fb_StrAssign( (void*)&S$4, -1ll, (void*)vr$10, -1ll, 0 );
				FBSTRING* vr$12 = fb_StrConcatAssign( (void*)&S$4, -1ll, (void*)";", 2ll, 0 );
				HWRITELINE( &S$4, 0ll );
				goto label$815;
			}
			label$820:;
			label$819:;
		}
		goto label$816;
		label$817:;
		static const void* tmp$656[6ll] = {
			&&label$818,
			&&label$818,
			&&label$818,
			&&label$818,
			&&label$818,
			&&label$818,
		};
		if( TMP$509$2 < 45ll ) goto label$816;
		if( TMP$509$2 > 50ll ) goto label$816;
		goto *tmp$656[TMP$509$2 - 45ll];
		label$816:;
	}
	if( VR$1 != (struct $6IRVREG*)0ull ) goto label$822;
	{
		VR$1 = V1$1;
	}
	label$822:;
	label$821:;
	{
		uint64 TMP$513$2;
		TMP$513$2 = (uint64)OP$1;
		goto label$824;
		label$825:;
		{
			struct $8EXPRNODE* vr$14 = EXPRNEWBOP( OP$1, L$1, R$1 );
			struct $8EXPRNODE* vr$15 = EXPRNEWUOP( 54ll, vr$14 );
			L$1 = vr$15;
		}
		goto label$823;
		label$826:;
		{
			int64 IS_PTR_ARITH$3;
			IS_PTR_ARITH$3 = (int64)-(OP$1 == 28ll) | (int64)-(OP$1 == 29ll);
			if( (IS_PTR_ARITH$3 & (int64)-((*(int64*)((uint8*)V1$1 + 8ll) & 480ll) != 0ll)) == 0ll ) goto label$828;
			{
				struct $8EXPRNODE* vr$24 = EXPRNEWCAST( 34ll, (struct $8FBSYMBOL*)0ull, L$1 );
				L$1 = vr$24;
			}
			label$828:;
			label$827:;
			if( (IS_PTR_ARITH$3 & (int64)-((*(int64*)((uint8*)V2$1 + 8ll) & 480ll) != 0ll)) == 0ll ) goto label$830;
			{
				struct $8EXPRNODE* vr$30 = EXPRNEWCAST( 34ll, (struct $8FBSYMBOL*)0ull, R$1 );
				R$1 = vr$30;
			}
			label$830:;
			label$829:;
			if( OP$1 != 31ll ) goto label$832;
			{
				struct $8EXPRNODE* vr$32 = EXPRNEWCAST( 15ll, (struct $8FBSYMBOL*)0ull, L$1 );
				L$1 = vr$32;
				struct $8EXPRNODE* vr$33 = EXPRNEWCAST( 15ll, (struct $8FBSYMBOL*)0ull, R$1 );
				R$1 = vr$33;
			}
			label$832:;
			label$831:;
			struct $8EXPRNODE* vr$34 = EXPRNEWBOP( OP$1, L$1, R$1 );
			L$1 = vr$34;
		}
		goto label$823;
		label$833:;
		{
			struct $8EXPRNODE* vr$35 = EXPRNEWBOP( 38ll, L$1, R$1 );
			struct $8EXPRNODE* vr$36 = EXPRNEWUOP( 52ll, vr$35 );
			L$1 = vr$36;
		}
		goto label$823;
		label$834:;
		{
			struct $8EXPRNODE* vr$37 = EXPRNEWUOP( 52ll, L$1 );
			struct $8EXPRNODE* vr$38 = EXPRNEWBOP( 35ll, vr$37, R$1 );
			L$1 = vr$38;
		}
		goto label$823;
		label$824:;
		static const void* tmp$657[23ll] = {
			&&label$826,
			&&label$826,
			&&label$826,
			&&label$826,
			&&label$826,
			&&label$826,
			&&label$826,
			&&label$826,
			&&label$823,
			&&label$823,
			&&label$826,
			&&label$833,
			&&label$834,
			&&label$826,
			&&label$826,
			&&label$823,
			&&label$823,
			&&label$825,
			&&label$825,
			&&label$825,
			&&label$825,
			&&label$825,
			&&label$825,
		};
		if( TMP$513$2 < 28ll ) goto label$823;
		if( TMP$513$2 > 50ll ) goto label$823;
		goto *tmp$657[TMP$513$2 - 28ll];
		label$823:;
	}
	EXPRSTORE( VR$1, L$1, 0ll );
	label$815:;
}

static void _EMITUOP( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* VR$1 )
{
	label$835:;
	if( VR$1 != (struct $6IRVREG*)0ull ) goto label$838;
	{
		VR$1 = V1$1;
	}
	label$838:;
	label$837:;
	struct $8EXPRNODE* vr$1 = EXPRNEWVREG( V1$1, 0ll );
	struct $8EXPRNODE* vr$2 = EXPRNEWUOP( OP$1, vr$1 );
	EXPRSTORE( VR$1, vr$2, 0ll );
	label$836:;
}

static void _EMITCONVERT( struct $6IRVREG* V1$1, struct $6IRVREG* V2$1 )
{
	int64 TMP$514$1;
	int64 TMP$515$1;
	label$839:;
	int64 DTYPE$1;
	struct $8EXPRNODE* EXPR$1;
	FBSTRING S$1;
	__builtin_memset( &S$1, 0, 24ll );
	struct $8EXPRNODE* vr$1 = EXPRNEWVREG( V2$1, 0ll );
	EXPR$1 = vr$1;
	if( (*(int64*)((uint8*)V2$1 + 8ll) & 480ll) == 0ll ) goto label$841;
	TMP$514$1 = 22ll;
	goto label$1082;
	label$841:;
	TMP$514$1 = *(int64*)((uint8*)V2$1 + 8ll) & 31ll;
	label$1082:;
	if( (*(int64*)((uint8*)V1$1 + 8ll) & 480ll) == 0ll ) goto label$842;
	TMP$515$1 = 22ll;
	goto label$1083;
	label$842:;
	TMP$515$1 = *(int64*)((uint8*)V1$1 + 8ll) & 31ll;
	label$1083:;
	if( ((int64)-(*(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$514$1 * 56ll)) == 1ll) & (int64)-(*(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$515$1 * 56ll)) == 0ll)) == 0ll ) goto label$844;
	{
		int64 TMP$516$2;
		if( (*(int64*)((uint8*)V1$1 + 8ll) & 480ll) == 0ll ) goto label$845;
		TMP$516$2 = 22ll;
		goto label$1084;
		label$845:;
		TMP$516$2 = *(int64*)((uint8*)V1$1 + 8ll) & 31ll;
		label$1084:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$516$2 * 56ll)) + 40ll) >= 5ll ) goto label$847;
		{
			if( *(int64*)((uint8*)V2$1 + 8ll) != 14ll ) goto label$849;
			{
				fb_StrAssign( (void*)&S$1, -1ll, (void*)"fb_F2I", 7ll, 0 );
				*(uint64*)((uint8*)&CTX$ + 5272ll) = *(uint64*)((uint8*)&CTX$ + 5272ll) | 1ull;
			}
			goto label$848;
			label$849:;
			{
				fb_StrAssign( (void*)&S$1, -1ll, (void*)"fb_D2I", 7ll, 0 );
				*(uint64*)((uint8*)&CTX$ + 5272ll) = *(uint64*)((uint8*)&CTX$ + 5272ll) | 4ull;
			}
			label$848:;
			DTYPE$1 = 10ll;
		}
		goto label$846;
		label$847:;
		{
			if( *(int64*)((uint8*)V2$1 + 8ll) != 14ll ) goto label$851;
			{
				fb_StrAssign( (void*)&S$1, -1ll, (void*)"fb_F2L", 7ll, 0 );
				*(uint64*)((uint8*)&CTX$ + 5272ll) = *(uint64*)((uint8*)&CTX$ + 5272ll) | 2ull;
			}
			goto label$850;
			label$851:;
			{
				fb_StrAssign( (void*)&S$1, -1ll, (void*)"fb_D2L", 7ll, 0 );
				*(uint64*)((uint8*)&CTX$ + 5272ll) = *(uint64*)((uint8*)&CTX$ + 5272ll) | 8ull;
			}
			label$850:;
			DTYPE$1 = 12ll;
		}
		label$846:;
		FBSTRING* vr$38 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"( ", 3ll, 0 );
		FBSTRING* vr$39 = EXPRFLUSH( EXPR$1, 0ll );
		FBSTRING* vr$41 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)vr$39, -1ll, 0 );
		FBSTRING* vr$43 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)" )", 3ll, 0 );
		struct $8EXPRNODE* vr$44 = EXPRNEWTEXT( DTYPE$1, (struct $8FBSYMBOL*)0ull, *(uint8**)&S$1 );
		EXPR$1 = vr$44;
	}
	label$844:;
	label$843:;
	EXPRSTORE( V1$1, EXPR$1, 0ll );
	fb_StrDelete( &S$1 );
	label$840:;
}

static void _EMITSTORE( struct $6IRVREG* V1$1, struct $6IRVREG* V2$1 )
{
	label$852:;
	struct $8EXPRNODE* vr$0 = EXPRNEWVREG( V2$1, 0ll );
	EXPRSTORE( V1$1, vr$0, 0ll );
	label$853:;
}

static void _EMITSPILLREGS( void )
{
	label$854:;
	label$855:;
}

static void _EMITLOAD( struct $6IRVREG* V1$1 )
{
	label$856:;
	label$857:;
}

static void _EMITLOADRES( struct $6IRVREG* V1$1, struct $6IRVREG* VR$1 )
{
	FBSTRING TMP$522$1;
	FBSTRING TMP$523$1;
	FBSTRING TMP$524$1;
	label$858:;
	_EMITSTORE( VR$1, V1$1 );
	__builtin_memset( &TMP$524$1, 0, 24ll );
	struct $8EXPRNODE* vr$1 = EXPRNEWVREG( VR$1, 0ll );
	FBSTRING* vr$2 = EXPRFLUSH( vr$1, 0ll );
	__builtin_memset( &TMP$522$1, 0, 24ll );
	FBSTRING* vr$5 = fb_StrConcat( &TMP$522$1, (void*)"return ", 8ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$523$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$523$1, (void*)vr$5, -1ll, (void*)";", 2ll );
	FBSTRING* vr$10 = fb_StrAssign( (void*)&TMP$524$1, -1ll, (void*)vr$8, -1ll, 0 );
	HWRITELINE( &TMP$524$1, 0ll );
	fb_StrDelete( &TMP$524$1 );
	label$859:;
}

static void _EMITADDR( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* VR$1 )
{
	label$860:;
	struct $8EXPRNODE* L$1;
	L$1 = (struct $8EXPRNODE*)0ull;
	{
		if( OP$1 != 22ll ) goto label$863;
		label$864:;
		{
			if( ((int64)-(*(int64*)V1$1 == 1ll) & (int64)-(*(struct $8FBSYMBOL**)((uint8*)V1$1 + 56ll) != (struct $8FBSYMBOL*)0ull)) == 0ll ) goto label$866;
			{
				if( *(int64*)*(struct $8FBSYMBOL**)((uint8*)V1$1 + 56ll) != 7ll ) goto label$868;
				{
					struct $8EXPRNODE* vr$11 = EXPRNEWSYM( *(struct $8FBSYMBOL**)((uint8*)V1$1 + 56ll) );
					L$1 = vr$11;
					struct $8EXPRNODE* vr$14 = EXPRNEWCAST( *(int64*)((uint8*)VR$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VR$1 + 16ll), L$1 );
					L$1 = vr$14;
					goto label$862;
				}
				label$868:;
				label$867:;
			}
			label$866:;
			label$865:;
			struct $8EXPRNODE* vr$15 = EXPRNEWVREG( V1$1, -1ll );
			struct $8EXPRNODE* vr$16 = EXPRNEWUOP( 22ll, vr$15 );
			L$1 = vr$16;
		}
		goto label$862;
		label$863:;
		if( OP$1 != 76ll ) goto label$869;
		label$870:;
		{
			struct $8EXPRNODE* vr$18 = EXPRNEWVREG( V1$1, 0ll );
			L$1 = vr$18;
		}
		label$869:;
		label$862:;
	}
	EXPRSTORE( VR$1, L$1, 0ll );
	label$861:;
}

static void HDOCALL( FBSTRING* S$1, int64 BYTESTOPOP$1, struct $6IRVREG* VR$1, int64 LEVEL$1 )
{
	FBSTRING TMP$525$1;
	int64 TMP$526$1;
	FBSTRING TMP$530$1;
	label$871:;
	struct $9IRCALLARG* ARG$1;
	int64 DTYPE$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	__builtin_memset( &TMP$525$1, 0, 24ll );
	FBSTRING* vr$2 = fb_StrConcat( &TMP$525$1, (void*)S$1, -1ll, (void*)"( ", 3ll );
	FBSTRING* vr$3 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$2, -1ll, 0 );
	void* vr$5 = LISTGETTAIL( (struct $5TLIST*)((uint8*)&CTX$ + 5176ll) );
	ARG$1 = (struct $9IRCALLARG*)vr$5;
	label$873:;
	if( ARG$1 == (struct $9IRCALLARG*)0ull ) goto label$875;
	TMP$526$1 = (int64)-((struct $9IRCALLARG*)(int64)-(*(int64*)((uint8*)ARG$1 + 16ll) == LEVEL$1) != (struct $9IRCALLARG*)0ull);
	goto label$1085;
	label$875:;
	TMP$526$1 = 0ll;
	label$1085:;
	if( TMP$526$1 == 0ll ) goto label$874;
	{
		int64 TMP$527$2;
		FBSTRING TMP$528$2;
		struct $9IRCALLARG* PREV$2;
		void* vr$11 = LISTGETPREV( (void*)ARG$1 );
		PREV$2 = (struct $9IRCALLARG*)vr$11;
		struct $8EXPRNODE* EXPR$2;
		struct $8EXPRNODE* vr$13 = EXPRNEWVREG( *(struct $6IRVREG**)((uint8*)ARG$1 + 8ll), 0ll );
		EXPR$2 = vr$13;
		if( *(struct $8FBSYMBOL**)ARG$1 == (struct $8FBSYMBOL*)0ull ) goto label$876;
		TMP$527$2 = (int64)-((struct $8FBSYMBOL*)(int64)-(*(int64*)((uint8*)*(struct $8FBSYMBOL**)ARG$1 + 88ll) != 4ll) != (struct $8FBSYMBOL*)0ull);
		goto label$1086;
		label$876:;
		TMP$527$2 = 0ll;
		label$1086:;
		if( TMP$527$2 == 0ll ) goto label$878;
		{
			_Z21SYMBGETREALPARAMDTYPEP8FBSYMBOLRlRS0_( *(struct $8FBSYMBOL**)ARG$1, &DTYPE$1, &SUBTYPE$1 );
			struct $8EXPRNODE* vr$24 = EXPRNEWCAST( DTYPE$1, SUBTYPE$1, EXPR$2 );
			EXPR$2 = vr$24;
		}
		label$878:;
		label$877:;
		FBSTRING* vr$25 = EXPRFLUSH( EXPR$2, 0ll );
		__builtin_memset( &TMP$528$2, 0, 24ll );
		FBSTRING* vr$28 = fb_StrConcat( &TMP$528$2, (void*)S$1, -1ll, (void*)vr$25, -1ll );
		FBSTRING* vr$29 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$28, -1ll, 0 );
		LISTDELNODE( (struct $5TLIST*)((uint8*)&CTX$ + 5176ll), (void*)ARG$1 );
		if( PREV$2 == (struct $9IRCALLARG*)0ull ) goto label$880;
		{
			if( *(int64*)((uint8*)PREV$2 + 16ll) != LEVEL$1 ) goto label$882;
			{
				FBSTRING TMP$529$4;
				__builtin_memset( &TMP$529$4, 0, 24ll );
				FBSTRING* vr$36 = fb_StrConcat( &TMP$529$4, (void*)S$1, -1ll, (void*)", ", 3ll );
				FBSTRING* vr$37 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$36, -1ll, 0 );
			}
			label$882:;
			label$881:;
		}
		label$880:;
		label$879:;
		ARG$1 = PREV$2;
	}
	goto label$873;
	label$874:;
	__builtin_memset( &TMP$530$1, 0, 24ll );
	FBSTRING* vr$40 = fb_StrConcat( &TMP$530$1, (void*)S$1, -1ll, (void*)" )", 3ll );
	FBSTRING* vr$41 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$40, -1ll, 0 );
	if( VR$1 != (struct $6IRVREG*)0ull ) goto label$884;
	{
		FBSTRING TMP$531$2;
		__builtin_memset( &TMP$531$2, 0, 24ll );
		FBSTRING* vr$45 = fb_StrConcat( &TMP$531$2, (void*)S$1, -1ll, (void*)";", 2ll );
		FBSTRING* vr$46 = fb_StrAssign( (void*)S$1, -1ll, (void*)vr$45, -1ll, 0 );
		HWRITELINE( S$1, 0ll );
	}
	goto label$883;
	label$884:;
	{
		struct $8EXPRNODE* vr$50 = EXPRNEWTEXT( *(int64*)((uint8*)VR$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VR$1 + 16ll), *(uint8**)S$1 );
		EXPRSTORE( VR$1, vr$50, -1ll );
	}
	label$883:;
	label$872:;
}

static void _EMITCALL( struct $8FBSYMBOL* PROC$1, int64 BYTESTOPOP$1, struct $6IRVREG* VR$1, int64 LEVEL$1 )
{
	label$885:;
	static FBSTRING S$1;
	uint8* vr$0 = SYMBGETMANGLEDNAME( PROC$1 );
	fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$0, 0ll, 0 );
	HDOCALL( &S$1, BYTESTOPOP$1, VR$1, LEVEL$1 );
	label$886:;
}

static void _EMITCALLPTR( struct $8FBSYMBOL* PROC$1, struct $6IRVREG* V1$1, struct $6IRVREG* VR$1, int64 BYTESTOPOP$1, int64 LEVEL$1 )
{
	label$887:;
	static FBSTRING S$1;
	FBSTRING* vr$0 = fb_StrAssign( (void*)&S$1, -1ll, (void*)"(", 2ll, 0 );
	struct $8EXPRNODE* vr$1 = EXPRNEWVREG( V1$1, 0ll );
	FBSTRING* vr$2 = EXPRFLUSH( vr$1, 0ll );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)vr$2, -1ll, 0 );
	FBSTRING* vr$4 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)")", 2ll, 0 );
	HDOCALL( &S$1, BYTESTOPOP$1, VR$1, LEVEL$1 );
	label$888:;
}

static void _EMITJUMPPTR( struct $6IRVREG* V1$1 )
{
	FBSTRING TMP$533$1;
	FBSTRING TMP$534$1;
	FBSTRING TMP$535$1;
	label$889:;
	__builtin_memset( &TMP$535$1, 0, 24ll );
	struct $8EXPRNODE* vr$1 = EXPRNEWVREG( V1$1, 0ll );
	FBSTRING* vr$2 = EXPRFLUSH( vr$1, -1ll );
	__builtin_memset( &TMP$533$1, 0, 24ll );
	FBSTRING* vr$5 = fb_StrConcat( &TMP$533$1, (void*)"goto *", 7ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$534$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$534$1, (void*)vr$5, -1ll, (void*)";", 2ll );
	FBSTRING* vr$10 = fb_StrAssign( (void*)&TMP$535$1, -1ll, (void*)vr$8, -1ll, 0 );
	HWRITELINE( &TMP$535$1, 0ll );
	fb_StrDelete( &TMP$535$1 );
	label$890:;
}

static void _EMITBRANCH( int64 OP$1, struct $8FBSYMBOL* LABEL$1 )
{
	FBSTRING TMP$537$1;
	FBSTRING TMP$538$1;
	FBSTRING TMP$539$1;
	label$891:;
	__builtin_memset( &TMP$539$1, 0, 24ll );
	uint8* vr$1 = SYMBGETMANGLEDNAME( LABEL$1 );
	__builtin_memset( &TMP$537$1, 0, 24ll );
	FBSTRING* vr$4 = fb_StrConcat( &TMP$537$1, (void*)"goto ", 6ll, (void*)vr$1, 0ll );
	__builtin_memset( &TMP$538$1, 0, 24ll );
	FBSTRING* vr$7 = fb_StrConcat( &TMP$538$1, (void*)vr$4, -1ll, (void*)";", 2ll );
	FBSTRING* vr$9 = fb_StrAssign( (void*)&TMP$539$1, -1ll, (void*)vr$7, -1ll, 0 );
	HWRITELINE( &TMP$539$1, 0ll );
	fb_StrDelete( &TMP$539$1 );
	label$892:;
}

static void _EMITJMPTB( struct $6IRVREG* V1$1, struct $8FBSYMBOL* TBSYM$1, uint64* VALUES$1, struct $8FBSYMBOL** LABELS$1, int64 LABELCOUNT$1, struct $8FBSYMBOL* DEFLABEL$1, uint64 MINVAL$1, uint64 MAXVAL$1 )
{
	FBSTRING TMP$549$1;
	FBSTRING TMP$550$1;
	FBSTRING TMP$551$1;
	FBSTRING TMP$552$1;
	FBSTRING TMP$553$1;
	FBSTRING TMP$559$1;
	FBSTRING TMP$565$1;
	FBSTRING TMP$566$1;
	FBSTRING TMP$567$1;
	FBSTRING TMP$568$1;
	FBSTRING TMP$569$1;
	FBSTRING TMP$570$1;
	FBSTRING TMP$571$1;
	FBSTRING TMP$572$1;
	FBSTRING TMP$573$1;
	FBSTRING TMP$574$1;
	label$893:;
	FBSTRING TB$1;
	__builtin_memset( &TB$1, 0, 24ll );
	FBSTRING TEMP$1;
	__builtin_memset( &TEMP$1, 0, 24ll );
	FBSTRING LN$1;
	__builtin_memset( &LN$1, 0, 24ll );
	struct $8FBSYMBOL* LABEL$1;
	struct $8EXPRNODE* L$1;
	int64 I$1;
	struct $8EXPRNODE* vr$3 = EXPRNEWVREG( V1$1, 0ll );
	FBSTRING* vr$4 = EXPRFLUSH( vr$3, 0ll );
	FBSTRING* vr$6 = fb_StrAssign( (void*)&TEMP$1, -1ll, (void*)vr$4, -1ll, 0 );
	if( LABELCOUNT$1 > 0ll ) goto label$896;
	{
		FBSTRING TMP$540$2;
		FBSTRING TMP$541$2;
		FBSTRING TMP$542$2;
		FBSTRING TMP$544$2;
		FBSTRING TMP$545$2;
		FBSTRING TMP$546$2;
		__builtin_memset( &TMP$542$2, 0, 24ll );
		uint8* vr$9 = SYMBGETMANGLEDNAME( DEFLABEL$1 );
		__builtin_memset( &TMP$540$2, 0, 24ll );
		FBSTRING* vr$12 = fb_StrConcat( &TMP$540$2, (void*)"goto ", 6ll, (void*)vr$9, 0ll );
		__builtin_memset( &TMP$541$2, 0, 24ll );
		FBSTRING* vr$15 = fb_StrConcat( &TMP$541$2, (void*)vr$12, -1ll, (void*)";", 2ll );
		FBSTRING* vr$17 = fb_StrAssign( (void*)&TMP$542$2, -1ll, (void*)vr$15, -1ll, 0 );
		HWRITELINE( &TMP$542$2, -1ll );
		fb_StrDelete( &TMP$542$2 );
		__builtin_memset( &TMP$546$2, 0, 24ll );
		__builtin_memset( &TMP$544$2, 0, 24ll );
		FBSTRING* vr$24 = fb_StrConcat( &TMP$544$2, (void*)"(void)", 7ll, (void*)&TEMP$1, -1ll );
		__builtin_memset( &TMP$545$2, 0, 24ll );
		FBSTRING* vr$27 = fb_StrConcat( &TMP$545$2, (void*)vr$24, -1ll, (void*)";", 2ll );
		FBSTRING* vr$29 = fb_StrAssign( (void*)&TMP$546$2, -1ll, (void*)vr$27, -1ll, 0 );
		HWRITELINE( &TMP$546$2, -1ll );
		fb_StrDelete( &TMP$546$2 );
		fb_StrDelete( &LN$1 );
		fb_StrDelete( &TEMP$1 );
		fb_StrDelete( &TB$1 );
		goto label$894;
	}
	label$896:;
	label$895:;
	uint8* vr$35 = SYMBUNIQUEID(  );
	fb_StrAssign( (void*)&TB$1, -1ll, (void*)vr$35, 0ll, 0 );
	struct $8EXPRNODE* vr$39 = EXPRNEWIMMI( (int64)((MAXVAL$1 - MINVAL$1) + 1ull), 7ll );
	L$1 = vr$39;
	__builtin_memset( &TMP$553$1, 0, 24ll );
	FBSTRING* vr$41 = EXPRFLUSH( L$1, 0ll );
	__builtin_memset( &TMP$549$1, 0, 24ll );
	FBSTRING* vr$45 = fb_StrConcat( &TMP$549$1, (void*)"static const void* ", 20ll, (void*)&TB$1, -1ll );
	__builtin_memset( &TMP$550$1, 0, 24ll );
	FBSTRING* vr$48 = fb_StrConcat( &TMP$550$1, (void*)vr$45, -1ll, (void*)"[", 2ll );
	__builtin_memset( &TMP$551$1, 0, 24ll );
	FBSTRING* vr$51 = fb_StrConcat( &TMP$551$1, (void*)vr$48, -1ll, (void*)vr$41, -1ll );
	__builtin_memset( &TMP$552$1, 0, 24ll );
	FBSTRING* vr$54 = fb_StrConcat( &TMP$552$1, (void*)vr$51, -1ll, (void*)"] = {", 6ll );
	FBSTRING* vr$56 = fb_StrAssign( (void*)&TMP$553$1, -1ll, (void*)vr$54, -1ll, 0 );
	HWRITELINE( &TMP$553$1, -1ll );
	fb_StrDelete( &TMP$553$1 );
	SECTIONINDENT(  );
	I$1 = 0ll;
	{
		uint64 VALUE$2;
		VALUE$2 = MINVAL$1;
		uint64 TMP$554$2;
		TMP$554$2 = MAXVAL$1;
		goto label$897;
		label$900:;
		{
			FBSTRING TMP$556$3;
			FBSTRING TMP$557$3;
			FBSTRING TMP$558$3;
			if( VALUE$2 != *(uint64*)((uint8*)VALUES$1 + (I$1 << 3ll)) ) goto label$902;
			{
				LABEL$1 = *(struct $8FBSYMBOL**)((uint8*)LABELS$1 + (I$1 << 3ll));
				I$1 = I$1 + 1ll;
			}
			goto label$901;
			label$902:;
			{
				LABEL$1 = DEFLABEL$1;
			}
			label$901:;
			__builtin_memset( &TMP$558$3, 0, 24ll );
			uint8* vr$66 = SYMBGETMANGLEDNAME( LABEL$1 );
			__builtin_memset( &TMP$556$3, 0, 24ll );
			FBSTRING* vr$69 = fb_StrConcat( &TMP$556$3, (void*)"&&", 3ll, (void*)vr$66, 0ll );
			__builtin_memset( &TMP$557$3, 0, 24ll );
			FBSTRING* vr$72 = fb_StrConcat( &TMP$557$3, (void*)vr$69, -1ll, (void*)",", 2ll );
			FBSTRING* vr$74 = fb_StrAssign( (void*)&TMP$558$3, -1ll, (void*)vr$72, -1ll, 0 );
			HWRITELINE( &TMP$558$3, -1ll );
			fb_StrDelete( &TMP$558$3 );
		}
		label$898:;
		VALUE$2 = VALUE$2 + 1ull;
		label$897:;
		if( VALUE$2 <= TMP$554$2 ) goto label$900;
		label$899:;
	}
	SECTIONUNINDENT(  );
	__builtin_memset( &TMP$559$1, 0, 24ll );
	FBSTRING* vr$81 = fb_StrAssign( (void*)&TMP$559$1, -1ll, (void*)"};", 3ll, 0 );
	HWRITELINE( &TMP$559$1, -1ll );
	fb_StrDelete( &TMP$559$1 );
	if( MINVAL$1 <= 0ull ) goto label$904;
	{
		FBSTRING TMP$560$2;
		FBSTRING TMP$561$2;
		FBSTRING TMP$562$2;
		FBSTRING TMP$563$2;
		FBSTRING TMP$564$2;
		struct $8EXPRNODE* vr$85 = EXPRNEWTEXT( 8ll, (struct $8FBSYMBOL*)0ull, *(uint8**)&TEMP$1 );
		L$1 = vr$85;
		struct $8EXPRNODE* vr$86 = EXPRNEWIMMI( (int64)MINVAL$1, 7ll );
		struct $8EXPRNODE* vr$87 = EXPRNEWBOP( 47ll, L$1, vr$86 );
		L$1 = vr$87;
		__builtin_memset( &TMP$564$2, 0, 24ll );
		uint8* vr$89 = SYMBGETMANGLEDNAME( DEFLABEL$1 );
		FBSTRING* vr$90 = EXPRFLUSH( L$1, 0ll );
		__builtin_memset( &TMP$560$2, 0, 24ll );
		FBSTRING* vr$93 = fb_StrConcat( &TMP$560$2, (void*)"if( ", 5ll, (void*)vr$90, -1ll );
		__builtin_memset( &TMP$561$2, 0, 24ll );
		FBSTRING* vr$96 = fb_StrConcat( &TMP$561$2, (void*)vr$93, -1ll, (void*)" ) goto ", 9ll );
		__builtin_memset( &TMP$562$2, 0, 24ll );
		FBSTRING* vr$99 = fb_StrConcat( &TMP$562$2, (void*)vr$96, -1ll, (void*)vr$89, 0ll );
		__builtin_memset( &TMP$563$2, 0, 24ll );
		FBSTRING* vr$102 = fb_StrConcat( &TMP$563$2, (void*)vr$99, -1ll, (void*)";", 2ll );
		FBSTRING* vr$104 = fb_StrAssign( (void*)&TMP$564$2, -1ll, (void*)vr$102, -1ll, 0 );
		HWRITELINE( &TMP$564$2, -1ll );
		fb_StrDelete( &TMP$564$2 );
	}
	label$904:;
	label$903:;
	struct $8EXPRNODE* vr$107 = EXPRNEWTEXT( 8ll, (struct $8FBSYMBOL*)0ull, *(uint8**)&TEMP$1 );
	L$1 = vr$107;
	struct $8EXPRNODE* vr$108 = EXPRNEWIMMI( (int64)MAXVAL$1, 7ll );
	struct $8EXPRNODE* vr$109 = EXPRNEWBOP( 46ll, L$1, vr$108 );
	L$1 = vr$109;
	__builtin_memset( &TMP$569$1, 0, 24ll );
	uint8* vr$111 = SYMBGETMANGLEDNAME( DEFLABEL$1 );
	FBSTRING* vr$112 = EXPRFLUSH( L$1, 0ll );
	__builtin_memset( &TMP$565$1, 0, 24ll );
	FBSTRING* vr$115 = fb_StrConcat( &TMP$565$1, (void*)"if( ", 5ll, (void*)vr$112, -1ll );
	__builtin_memset( &TMP$566$1, 0, 24ll );
	FBSTRING* vr$118 = fb_StrConcat( &TMP$566$1, (void*)vr$115, -1ll, (void*)" ) goto ", 9ll );
	__builtin_memset( &TMP$567$1, 0, 24ll );
	FBSTRING* vr$121 = fb_StrConcat( &TMP$567$1, (void*)vr$118, -1ll, (void*)vr$111, 0ll );
	__builtin_memset( &TMP$568$1, 0, 24ll );
	FBSTRING* vr$124 = fb_StrConcat( &TMP$568$1, (void*)vr$121, -1ll, (void*)";", 2ll );
	FBSTRING* vr$126 = fb_StrAssign( (void*)&TMP$569$1, -1ll, (void*)vr$124, -1ll, 0 );
	HWRITELINE( &TMP$569$1, -1ll );
	fb_StrDelete( &TMP$569$1 );
	struct $8EXPRNODE* vr$129 = EXPRNEWTEXT( 8ll, (struct $8FBSYMBOL*)0ull, *(uint8**)&TEMP$1 );
	L$1 = vr$129;
	struct $8EXPRNODE* vr$130 = EXPRNEWIMMI( (int64)MINVAL$1, 7ll );
	struct $8EXPRNODE* vr$131 = EXPRNEWBOP( 29ll, L$1, vr$130 );
	L$1 = vr$131;
	__builtin_memset( &TMP$574$1, 0, 24ll );
	FBSTRING* vr$133 = EXPRFLUSH( L$1, 0ll );
	__builtin_memset( &TMP$570$1, 0, 24ll );
	FBSTRING* vr$137 = fb_StrConcat( &TMP$570$1, (void*)"goto *", 7ll, (void*)&TB$1, -1ll );
	__builtin_memset( &TMP$571$1, 0, 24ll );
	FBSTRING* vr$140 = fb_StrConcat( &TMP$571$1, (void*)vr$137, -1ll, (void*)"[", 2ll );
	__builtin_memset( &TMP$572$1, 0, 24ll );
	FBSTRING* vr$143 = fb_StrConcat( &TMP$572$1, (void*)vr$140, -1ll, (void*)vr$133, -1ll );
	__builtin_memset( &TMP$573$1, 0, 24ll );
	FBSTRING* vr$146 = fb_StrConcat( &TMP$573$1, (void*)vr$143, -1ll, (void*)"];", 3ll );
	FBSTRING* vr$148 = fb_StrAssign( (void*)&TMP$574$1, -1ll, (void*)vr$146, -1ll, 0 );
	HWRITELINE( &TMP$574$1, -1ll );
	fb_StrDelete( &TMP$574$1 );
	fb_StrDelete( &LN$1 );
	fb_StrDelete( &TEMP$1 );
	fb_StrDelete( &TB$1 );
	label$894:;
}

static void _EMITMEM( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* V2$1, int64 BYTES$1 )
{
	label$905:;
	{
		if( OP$1 != 106ll ) goto label$908;
		label$909:;
		{
			FBSTRING TMP$577$3;
			FBSTRING TMP$578$3;
			FBSTRING TMP$579$3;
			FBSTRING TMP$580$3;
			FBSTRING TMP$581$3;
			__builtin_memset( &TMP$581$3, 0, 24ll );
			struct $8EXPRNODE* vr$2 = EXPRNEWVREG( V2$1, 0ll );
			FBSTRING* vr$3 = EXPRFLUSH( vr$2, 0ll );
			struct $8EXPRNODE* vr$4 = EXPRNEWVREG( V1$1, 0ll );
			FBSTRING* vr$5 = EXPRFLUSH( vr$4, 0ll );
			__builtin_memset( &TMP$577$3, 0, 24ll );
			FBSTRING* vr$8 = fb_StrConcat( &TMP$577$3, (void*)"__builtin_memset( ", 19ll, (void*)vr$5, -1ll );
			__builtin_memset( &TMP$578$3, 0, 24ll );
			FBSTRING* vr$11 = fb_StrConcat( &TMP$578$3, (void*)vr$8, -1ll, (void*)", 0, ", 6ll );
			__builtin_memset( &TMP$579$3, 0, 24ll );
			FBSTRING* vr$14 = fb_StrConcat( &TMP$579$3, (void*)vr$11, -1ll, (void*)vr$3, -1ll );
			__builtin_memset( &TMP$580$3, 0, 24ll );
			FBSTRING* vr$17 = fb_StrConcat( &TMP$580$3, (void*)vr$14, -1ll, (void*)" );", 4ll );
			FBSTRING* vr$19 = fb_StrAssign( (void*)&TMP$581$3, -1ll, (void*)vr$17, -1ll, 0 );
			HWRITELINE( &TMP$581$3, 0ll );
			fb_StrDelete( &TMP$581$3 );
		}
		goto label$907;
		label$908:;
		if( OP$1 != 104ll ) goto label$910;
		label$911:;
		{
			FBSTRING TMP$583$3;
			FBSTRING TMP$584$3;
			FBSTRING TMP$585$3;
			FBSTRING TMP$586$3;
			FBSTRING TMP$587$3;
			FBSTRING TMP$588$3;
			FBSTRING TMP$589$3;
			__builtin_memset( &TMP$589$3, 0, 24ll );
			FBSTRING* vr$24 = fb_ULongintToStr( (uint64)BYTES$1 );
			struct $8EXPRNODE* vr$25 = EXPRNEWVREG( V2$1, 0ll );
			FBSTRING* vr$26 = EXPRFLUSH( vr$25, 0ll );
			struct $8EXPRNODE* vr$27 = EXPRNEWVREG( V1$1, 0ll );
			FBSTRING* vr$28 = EXPRFLUSH( vr$27, 0ll );
			__builtin_memset( &TMP$583$3, 0, 24ll );
			FBSTRING* vr$31 = fb_StrConcat( &TMP$583$3, (void*)"__builtin_memcpy( ", 19ll, (void*)vr$28, -1ll );
			__builtin_memset( &TMP$584$3, 0, 24ll );
			FBSTRING* vr$34 = fb_StrConcat( &TMP$584$3, (void*)vr$31, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$585$3, 0, 24ll );
			FBSTRING* vr$37 = fb_StrConcat( &TMP$585$3, (void*)vr$34, -1ll, (void*)vr$26, -1ll );
			__builtin_memset( &TMP$586$3, 0, 24ll );
			FBSTRING* vr$40 = fb_StrConcat( &TMP$586$3, (void*)vr$37, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$587$3, 0, 24ll );
			FBSTRING* vr$43 = fb_StrConcat( &TMP$587$3, (void*)vr$40, -1ll, (void*)vr$24, -1ll );
			__builtin_memset( &TMP$588$3, 0, 24ll );
			FBSTRING* vr$46 = fb_StrConcat( &TMP$588$3, (void*)vr$43, -1ll, (void*)" );", 4ll );
			FBSTRING* vr$48 = fb_StrAssign( (void*)&TMP$589$3, -1ll, (void*)vr$46, -1ll, 0 );
			HWRITELINE( &TMP$589$3, 0ll );
			fb_StrDelete( &TMP$589$3 );
		}
		label$910:;
		label$907:;
	}
	label$906:;
}

static void _EMITDECL( struct $8FBSYMBOL* SYM$1 )
{
	label$912:;
	struct $8FBSYMBOL* ARRAY$1;
	int64 vr$3 = SYMBHASDTOR( SYM$1 );
	if( ((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 2ll) != 0ll) & vr$3) == 0ll ) goto label$915;
	{
		goto label$913;
	}
	label$915:;
	label$914:;
	ARRAY$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 144ll);
	if( ARRAY$1 == (struct $8FBSYMBOL*)0ull ) goto label$917;
	{
		int64 vr$11 = SYMBHASDTOR( ARRAY$1 );
		if( ((int64)-((*(int64*)((uint8*)ARRAY$1 + 8ll) & 2ll) != 0ll) & vr$11) == 0ll ) goto label$919;
		{
			goto label$913;
		}
		label$919:;
		label$918:;
	}
	label$917:;
	label$916:;
	HMAYBEEMITLOCALVAR( SYM$1 );
	label$913:;
}

static void _EMITDBG( int64 OP$1, struct $8FBSYMBOL* PROC$1, int64 EX$1 )
{
	label$920:;
	if( OP$1 != 108ll ) goto label$923;
	{
		*(int64*)((uint8*)&CTX$ + 5240ll) = EX$1;
	}
	label$923:;
	label$922:;
	label$921:;
}

static void _EMITCOMMENT( uint8* TEXT$1 )
{
	label$924:;
	int64 LENGTH$1;
	static FBSTRING S$1;
	fb_StrAssign( (void*)&S$1, -1ll, (void*)TEXT$1, 0ll, 0 );
	FBSTRING* vr$0 = fb_TRIM( &S$1 );
	FBSTRING* vr$1 = fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$0, -1ll, 0 );
	int64 vr$2 = fb_StrLen( (void*)&S$1, -1ll );
	LENGTH$1 = vr$2;
	if( LENGTH$1 <= 0ll ) goto label$927;
	{
		FBSTRING TMP$592$2;
		FBSTRING TMP$593$2;
		if( (uint64)(int64)*(uint8*)((uint8*)((uint8*)*(uint8**)&S$1 + LENGTH$1) + -1ll) != 92ull ) goto label$929;
		{
			FBSTRING* vr$7 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"not_an_escape", 14ll, 0 );
		}
		label$929:;
		label$928:;
		__builtin_memset( &TMP$593$2, 0, 24ll );
		__builtin_memset( &TMP$592$2, 0, 24ll );
		FBSTRING* vr$11 = fb_StrConcat( &TMP$592$2, (void*)"// ", 4ll, (void*)&S$1, -1ll );
		FBSTRING* vr$13 = fb_StrAssign( (void*)&TMP$593$2, -1ll, (void*)vr$11, -1ll, 0 );
		HWRITELINE( &TMP$593$2, -1ll );
		fb_StrDelete( &TMP$593$2 );
	}
	label$927:;
	label$926:;
	label$925:;
}

static void _EMITASMBEGIN( void )
{
	label$930:;
	fb_StrAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)"__asm__", 8ll, 0 );
	int64 vr$1 = SECTIONINSIDEPROC(  );
	if( vr$1 == 0ll ) goto label$933;
	{
		FBSTRING* vr$4 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)" __volatile__", 14ll, 0 );
	}
	label$933:;
	label$932:;
	FBSTRING* vr$6 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)"( ", 3ll, 0 );
	if( *(int64*)((uint8*)&ENV$ + 264ll) != 0ll ) goto label$935;
	{
		FBSTRING* vr$9 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)"\x22", 2ll, 0 );
		int64 vr$10 = SECTIONINSIDEPROC(  );
		if( vr$10 == 0ll ) goto label$937;
		{
			FBSTRING* vr$13 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)"\x5Ct", 3ll, 0 );
		}
		label$937:;
		label$936:;
		*(int64*)((uint8*)&CTX$ + 5448ll) = 0ll;
		fb_StrAssign( (void*)((uint8*)&CTX$ + 5456ll), -1ll, (void*)"", 1ll, 0 );
		fb_StrAssign( (void*)((uint8*)&CTX$ + 5480ll), -1ll, (void*)"", 1ll, 0 );
	}
	label$935:;
	label$934:;
	label$931:;
}

static void _EMITASMTEXT( uint8* TEXT$1 )
{
	FBSTRING TMP$597$1;
	label$938:;
	__builtin_memset( &TMP$597$1, 0, 24ll );
	FBSTRING* vr$3 = fb_StrConcat( &TMP$597$1, (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)TEXT$1, 0ll );
	FBSTRING* vr$5 = fb_StrAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)vr$3, -1ll, 0 );
	label$939:;
}

static void _EMITASMSYMB( struct $8FBSYMBOL* SYM$1 )
{
	label$940:;
	FBSTRING ID$1;
	__builtin_memset( &ID$1, 0, 24ll );
	int64 vr$1 = SECTIONINSIDEPROC(  );
	if( vr$1 != 0ll ) goto label$943;
	{
		FBSTRING* vr$3 = HGETMANGLEDNAMEFORASM( SYM$1, -1ll );
		FBSTRING* vr$5 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)vr$3, -1ll, 0 );
		fb_StrDelete( &ID$1 );
		goto label$941;
	}
	label$943:;
	label$942:;
	uint8* vr$7 = SYMBGETMANGLEDNAME( SYM$1 );
	fb_StrAssign( (void*)&ID$1, -1ll, (void*)vr$7, 0ll, 0 );
	if( *(int64*)((uint8*)&ENV$ + 264ll) != 0ll ) goto label$945;
	{
		FBSTRING* vr$11 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)"%", 2ll, 0 );
		FBSTRING* vr$12 = fb_LongintToStr( *(int64*)((uint8*)&CTX$ + 5448ll) );
		FBSTRING* vr$14 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)vr$12, -1ll, 0 );
		*(int64*)((uint8*)&CTX$ + 5448ll) = *(int64*)((uint8*)&CTX$ + 5448ll) + 1ll;
		int64 vr$17 = fb_StrLen( (void*)((uint8*)&CTX$ + 5456ll), -1ll );
		if( vr$17 <= 0ll ) goto label$947;
		{
			FBSTRING* vr$20 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5456ll), -1ll, (void*)", ", 3ll, 0 );
			FBSTRING* vr$22 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5480ll), -1ll, (void*)", ", 3ll, 0 );
		}
		label$947:;
		label$946:;
		FBSTRING* vr$24 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5456ll), -1ll, (void*)"\x22=m\x22 (", 7ll, 0 );
		FBSTRING* vr$27 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5456ll), -1ll, (void*)&ID$1, -1ll, 0 );
		FBSTRING* vr$29 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5456ll), -1ll, (void*)")", 2ll, 0 );
		FBSTRING* vr$31 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5480ll), -1ll, (void*)"\x22m\x22 (", 6ll, 0 );
		FBSTRING* vr$34 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5480ll), -1ll, (void*)&ID$1, -1ll, 0 );
		FBSTRING* vr$36 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5480ll), -1ll, (void*)")", 2ll, 0 );
	}
	goto label$944;
	label$945:;
	{
		FBSTRING* vr$39 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)&ID$1, -1ll, 0 );
	}
	label$944:;
	fb_StrDelete( &ID$1 );
	label$941:;
}

static void _EMITASMEND( void )
{
	label$948:;
	if( *(int64*)((uint8*)&ENV$ + 264ll) != 0ll ) goto label$951;
	{
		int64 vr$1 = SECTIONINSIDEPROC(  );
		if( vr$1 == 0ll ) goto label$953;
		{
			FBSTRING* vr$4 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)"\x5Cn", 3ll, 0 );
		}
		label$953:;
		label$952:;
		FBSTRING* vr$6 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)"\x22", 2ll, 0 );
		int64 vr$7 = SECTIONINSIDEPROC(  );
		if( vr$7 == 0ll ) goto label$955;
		{
			FBSTRING* vr$10 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)" : ", 4ll, 0 );
			FBSTRING* vr$13 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)((uint8*)&CTX$ + 5456ll), -1ll, 0 );
			FBSTRING* vr$15 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)" : ", 4ll, 0 );
			FBSTRING* vr$18 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)((uint8*)&CTX$ + 5480ll), -1ll, 0 );
			FBSTRING* vr$20 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)" : \x22" "cc\x22, \x22memory\x22", 18ll, 0 );
			FBSTRING* vr$22 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)", \x22" "eax\x22, \x22" "ebx\x22, \x22" "ecx\x22, \x22" "edx\x22, \x22" "esp\x22, \x22" "edi\x22, \x22" "esi\x22", 50ll, 0 );
			if( *(int64*)((uint8*)&ENV$ + 232ll) != 1ll ) goto label$957;
			{
				FBSTRING* vr$25 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)", \x22mm0\x22, \x22mm1\x22, \x22mm2\x22, \x22mm3\x22, \x22mm4\x22, \x22mm5\x22, \x22mm6\x22, \x22mm7\x22", 57ll, 0 );
				FBSTRING* vr$27 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)", \x22xmm0\x22, \x22xmm1\x22, \x22xmm2\x22, \x22xmm3\x22, \x22xmm4\x22, \x22xmm5\x22, \x22xmm6\x22, \x22xmm7\x22", 65ll, 0 );
			}
			label$957:;
			label$956:;
		}
		label$955:;
		label$954:;
	}
	label$951:;
	label$950:;
	FBSTRING* vr$29 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5424ll), -1ll, (void*)" );", 4ll, 0 );
	HWRITELINE( (FBSTRING*)((uint8*)&CTX$ + 5424ll), 0ll );
	label$949:;
}

static void _EMITVARINIBEGIN( struct $8FBSYMBOL* SYM$1 )
{
	label$958:;
	fb_StrAssign( (void*)((uint8*)&CTX$ + 5344ll), -1ll, (void*)"", 1ll, 0 );
	*(int64*)((uint8*)&CTX$ + 5368ll) = 0ll;
	label$959:;
}

static void _EMITVARINIEND( struct $8FBSYMBOL* SYM$1 )
{
	label$960:;
	HEMITVARDECL( 0ll, SYM$1, *(uint8**)((uint8*)&CTX$ + 5344ll) );
	fb_StrAssign( (void*)((uint8*)&CTX$ + 5344ll), -1ll, (void*)"", 1ll, 0 );
	label$961:;
}

static void HVARINISEPARATOR( void )
{
	label$962:;
	if( *(int64*)((uint8*)&CTX$ + 5368ll) <= 0ll ) goto label$965;
	{
		FBSTRING* vr$2 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5344ll), -1ll, (void*)", ", 3ll, 0 );
	}
	label$965:;
	label$964:;
	label$963:;
}

static void _EMITVARINII( struct $8FBSYMBOL* SYM$1, int64 VALUE$1 )
{
	label$966:;
	int64 DTYPE$1;
	DTYPE$1 = *(int64*)((uint8*)SYM$1 + 48ll) & 511ll;
	struct $8EXPRNODE* L$1;
	struct $8EXPRNODE* vr$2 = EXPRNEWIMMI( VALUE$1, DTYPE$1 );
	L$1 = vr$2;
	struct $8EXPRNODE* vr$4 = EXPRNEWCAST( DTYPE$1, *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll), L$1 );
	L$1 = vr$4;
	FBSTRING* vr$5 = EXPRFLUSH( L$1, 0ll );
	FBSTRING* vr$7 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5344ll), -1ll, (void*)vr$5, -1ll, 0 );
	HVARINISEPARATOR(  );
	label$967:;
}

static void _EMITVARINIF( struct $8FBSYMBOL* SYM$1, double VALUE$1 )
{
	label$968:;
	int64 DTYPE$1;
	DTYPE$1 = *(int64*)((uint8*)SYM$1 + 48ll) & 511ll;
	struct $8EXPRNODE* L$1;
	struct $8EXPRNODE* vr$2 = EXPRNEWIMMF( VALUE$1, DTYPE$1 );
	L$1 = vr$2;
	struct $8EXPRNODE* vr$4 = EXPRNEWCAST( DTYPE$1, *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll), L$1 );
	L$1 = vr$4;
	FBSTRING* vr$5 = EXPRFLUSH( L$1, 0ll );
	FBSTRING* vr$7 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5344ll), -1ll, (void*)vr$5, -1ll, 0 );
	HVARINISEPARATOR(  );
	label$969:;
}

static void _EMITVARINIOFS( struct $8FBSYMBOL* SYM$1, struct $8FBSYMBOL* RHS$1, int64 OFS$1 )
{
	label$970:;
	struct $8EXPRNODE* L$1;
	struct $8EXPRNODE* vr$0 = EXPRNEWOFFSET( RHS$1, OFS$1 );
	L$1 = vr$0;
	struct $8EXPRNODE* vr$4 = EXPRNEWCAST( *(int64*)((uint8*)SYM$1 + 48ll) & 511ll, *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll), L$1 );
	L$1 = vr$4;
	FBSTRING* vr$5 = EXPRFLUSH( L$1, 0ll );
	FBSTRING* vr$7 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5344ll), -1ll, (void*)vr$5, -1ll, 0 );
	HVARINISEPARATOR(  );
	label$971:;
}

static void _EMITVARINISTR( int64 VARLENGTH$1, uint8* LITERAL$1, int64 LITLENGTH$1 )
{
	label$972:;
	if( LITLENGTH$1 <= VARLENGTH$1 ) goto label$975;
	{
		LITLENGTH$1 = VARLENGTH$1;
	}
	label$975:;
	label$974:;
	uint8* vr$2 = HUNESCAPE( LITERAL$1 );
	HBUILDSTRLIT( (FBSTRING*)((uint8*)&CTX$ + 5344ll), vr$2, LITLENGTH$1 + 1ll );
	HVARINISEPARATOR(  );
	label$973:;
}

static void _EMITVARINIWSTR( int64 VARLENGTH$1, uint32* LITERAL$1, int64 LITLENGTH$1 )
{
	label$976:;
	uint64 CH$1;
	int64 WCHARSIZE$1;
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5344ll), -1ll, (void*)"{ ", 3ll, 0 );
	uint32* vr$2 = HUNESCAPEW( LITERAL$1 );
	LITERAL$1 = vr$2;
	WCHARSIZE$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + 344ll);
	if( LITLENGTH$1 <= VARLENGTH$1 ) goto label$979;
	{
		LITLENGTH$1 = VARLENGTH$1;
	}
	label$979:;
	label$978:;
	{
		int64 I$2;
		I$2 = 0ll;
		int64 TMP$607$2;
		TMP$607$2 = LITLENGTH$1 + -1ll;
		goto label$980;
		label$983:;
		{
			if( I$2 <= 0ll ) goto label$985;
			{
				FBSTRING* vr$7 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5344ll), -1ll, (void*)", ", 3ll, 0 );
			}
			label$985:;
			label$984:;
			FBSTRING* vr$9 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5344ll), -1ll, (void*)"L'", 3ll, 0 );
			CH$1 = (uint64)*(uint32*)((uint8*)LITERAL$1 + (I$2 << 2ll));
			int64 vr$13 = HCHARNEEDSESCAPING( (int64)CH$1, 39ll );
			if( vr$13 == 0ll ) goto label$987;
			{
				FBSTRING* vr$16 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5344ll), -1ll, (void*)"\x5Cx", 3ll, 0 );
				FBSTRING* vr$19 = fb_HEXEx_l( CH$1, (int32)(WCHARSIZE$1 << 1ll) );
				FBSTRING* vr$21 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5344ll), -1ll, (void*)vr$19, -1ll, 0 );
			}
			goto label$986;
			label$987:;
			{
				FBSTRING* vr$22 = fb_CHR( 1, (int64)CH$1 );
				FBSTRING* vr$24 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5344ll), -1ll, (void*)vr$22, -1ll, 0 );
			}
			label$986:;
			FBSTRING* vr$26 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5344ll), -1ll, (void*)"'", 2ll, 0 );
		}
		label$981:;
		I$2 = I$2 + 1ll;
		label$980:;
		if( I$2 <= TMP$607$2 ) goto label$983;
		label$982:;
	}
	FBSTRING* vr$30 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5344ll), -1ll, (void*)" }", 3ll, 0 );
	HVARINISEPARATOR(  );
	label$977:;
}

static void _EMITVARINIPAD( int64 BYTES$1 )
{
	label$988:;
	label$989:;
}

static void _EMITVARINISCOPEBEGIN( void )
{
	label$990:;
	*(int64*)((uint8*)&CTX$ + 5368ll) = *(int64*)((uint8*)&CTX$ + 5368ll) + 1ll;
	FBSTRING* vr$2 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5344ll), -1ll, (void*)"{ ", 3ll, 0 );
	label$991:;
}

static void _EMITVARINISCOPEEND( void )
{
	label$992:;
	FBSTRING* vr$1 = fb_RIGHT( (FBSTRING*)((uint8*)&CTX$ + 5344ll), 2ll );
	int32 vr$2 = fb_StrCompare( (void*)vr$1, -1ll, (void*)", ", 3ll );
	if( (int64)vr$2 != 0ll ) goto label$995;
	{
		int64 vr$6 = fb_StrLen( (void*)((uint8*)&CTX$ + 5344ll), -1ll );
		FBSTRING* vr$9 = fb_LEFT( (FBSTRING*)((uint8*)&CTX$ + 5344ll), vr$6 + -2ll );
		FBSTRING* vr$11 = fb_StrAssign( (void*)((uint8*)&CTX$ + 5344ll), -1ll, (void*)vr$9, -1ll, 0 );
	}
	label$995:;
	label$994:;
	FBSTRING* vr$13 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5344ll), -1ll, (void*)" }", 3ll, 0 );
	*(int64*)((uint8*)&CTX$ + 5368ll) = *(int64*)((uint8*)&CTX$ + 5368ll) + -1ll;
	HVARINISEPARATOR(  );
	label$993:;
}

static void _EMITFBCTINFBEGIN( void )
{
	FBSTRING TMP$610$1;
	label$996:;
	__builtin_memset( &TMP$610$1, 0, 24ll );
	FBSTRING* vr$2 = fb_StrAssign( (void*)&TMP$610$1, -1ll, (void*)"", 1ll, 0 );
	HWRITELINE( &TMP$610$1, -1ll );
	fb_StrDelete( &TMP$610$1 );
	fb_StrAssign( (void*)((uint8*)&CTX$ + 5376ll), -1ll, (void*)"static const char ", 19ll, 0 );
	FBSTRING* vr$7 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5376ll), -1ll, (void*)"__attribute__((used, section(\x22.fbctinf\x22))) ", 44ll, 0 );
	FBSTRING* vr$9 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5376ll), -1ll, (void*)"__fbctinf[] = \x22", 16ll, 0 );
	label$997:;
}

static void _EMITFBCTINFSTRING( uint8* S$1 )
{
	FBSTRING TMP$618$1;
	FBSTRING TMP$619$1;
	label$998:;
	__builtin_memset( &TMP$618$1, 0, 24ll );
	FBSTRING* vr$2 = fb_StrConcat( &TMP$618$1, (void*)S$1, 0ll, (void*)"\x5C" "0", 3ll );
	__builtin_memset( &TMP$619$1, 0, 24ll );
	FBSTRING* vr$6 = fb_StrConcat( &TMP$619$1, (void*)((uint8*)&CTX$ + 5376ll), -1ll, (void*)vr$2, -1ll );
	FBSTRING* vr$8 = fb_StrAssign( (void*)((uint8*)&CTX$ + 5376ll), -1ll, (void*)vr$6, -1ll, 0 );
	label$999:;
}

static void _EMITFBCTINFEND( void )
{
	label$1000:;
	FBSTRING* vr$1 = fb_RIGHT( (FBSTRING*)((uint8*)&CTX$ + 5376ll), 2ll );
	int32 vr$2 = fb_StrCompare( (void*)vr$1, -1ll, (void*)"\x5C" "0", 3ll );
	if( (int64)vr$2 != 0ll ) goto label$1003;
	{
		int64 vr$6 = fb_StrLen( (void*)((uint8*)&CTX$ + 5376ll), -1ll );
		FBSTRING* vr$9 = fb_LEFT( (FBSTRING*)((uint8*)&CTX$ + 5376ll), vr$6 + -2ll );
		FBSTRING* vr$11 = fb_StrAssign( (void*)((uint8*)&CTX$ + 5376ll), -1ll, (void*)vr$9, -1ll, 0 );
	}
	label$1003:;
	label$1002:;
	FBSTRING* vr$13 = fb_StrConcatAssign( (void*)((uint8*)&CTX$ + 5376ll), -1ll, (void*)"\x22;", 3ll, 0 );
	HWRITELINE( (FBSTRING*)((uint8*)&CTX$ + 5376ll), -1ll );
	label$1001:;
}

static void _EMITPROCBEGIN( struct $8FBSYMBOL* PROC$1, struct $8FBSYMBOL* INITLABEL$1 )
{
	FBSTRING TMP$621$1;
	FBSTRING TMP$634$1;
	FBSTRING TMP$635$1;
	label$1004:;
	uint8* INCFILE$1;
	INCFILE$1 = *(uint8**)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 48ll);
	if( INCFILE$1 != (uint8*)0ull ) goto label$1007;
	{
		INCFILE$1 = (uint8*)((uint8*)&ENV$ + 488ll);
	}
	label$1007:;
	label$1006:;
	HUPDATECURRENTFILENAME( INCFILE$1 );
	IRHLEMITPROCBEGIN(  );
	FBSTRING MANGLED$1;
	__builtin_memset( &MANGLED$1, 0, 24ll );
	__builtin_memset( &TMP$621$1, 0, 24ll );
	FBSTRING* vr$7 = fb_StrAssign( (void*)&TMP$621$1, -1ll, (void*)"", 1ll, 0 );
	HWRITELINE( &TMP$621$1, -1ll );
	fb_StrDelete( &TMP$621$1 );
	if( *(int64*)((uint8*)&ENV$ + 288ll) == 0ll ) goto label$1009;
	{
		_EMITDBG( 108ll, PROC$1, *(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 32ll) );
	}
	label$1009:;
	label$1008:;
	if( (*(int64*)((uint8*)PROC$1 + 8ll) & 268435456ll) == 0ll ) goto label$1011;
	{
		FBSTRING TMP$624$2;
		FBSTRING TMP$625$2;
		FBSTRING TMP$626$2;
		FBSTRING TMP$629$2;
		FBSTRING TMP$630$2;
		FBSTRING TMP$631$2;
		FBSTRING* vr$16 = HGETMANGLEDNAMEFORASM( PROC$1, -1ll );
		FBSTRING* vr$18 = fb_StrAssign( (void*)&MANGLED$1, -1ll, (void*)vr$16, -1ll, 0 );
		__builtin_memset( &TMP$626$2, 0, 24ll );
		__builtin_memset( &TMP$624$2, 0, 24ll );
		FBSTRING* vr$23 = fb_StrConcat( &TMP$624$2, (void*)"__asm__( \x22.globl ", 18ll, (void*)&MANGLED$1, -1ll );
		__builtin_memset( &TMP$625$2, 0, 24ll );
		FBSTRING* vr$26 = fb_StrConcat( &TMP$625$2, (void*)vr$23, -1ll, (void*)"\x22 );", 5ll );
		FBSTRING* vr$28 = fb_StrAssign( (void*)&TMP$626$2, -1ll, (void*)vr$26, -1ll, 0 );
		HWRITELINE( &TMP$626$2, 0ll );
		fb_StrDelete( &TMP$626$2 );
		__builtin_memset( &TMP$631$2, 0, 24ll );
		__builtin_memset( &TMP$629$2, 0, 24ll );
		FBSTRING* vr$35 = fb_StrConcat( &TMP$629$2, (void*)"__asm__( \x22", 11ll, (void*)&MANGLED$1, -1ll );
		__builtin_memset( &TMP$630$2, 0, 24ll );
		FBSTRING* vr$38 = fb_StrConcat( &TMP$630$2, (void*)vr$35, -1ll, (void*)":\x22 );", 6ll );
		FBSTRING* vr$40 = fb_StrAssign( (void*)&TMP$631$2, -1ll, (void*)vr$38, -1ll, 0 );
		HWRITELINE( &TMP$631$2, 0ll );
		fb_StrDelete( &TMP$631$2 );
		fb_StrDelete( &MANGLED$1 );
		goto label$1005;
	}
	label$1011:;
	label$1010:;
	SECTIONBEGIN(  );
	int64 vr$44 = HNEEDALIAS( PROC$1 );
	if( vr$44 == 0ll ) goto label$1013;
	{
		FBSTRING TMP$632$2;
		FBSTRING TMP$633$2;
		__builtin_memset( &TMP$633$2, 0, 24ll );
		FBSTRING* vr$47 = HEMITPROCHEADER( PROC$1, 1ll );
		__builtin_memset( &TMP$632$2, 0, 24ll );
		FBSTRING* vr$50 = fb_StrConcat( &TMP$632$2, (void*)vr$47, -1ll, (void*)";", 2ll );
		FBSTRING* vr$52 = fb_StrAssign( (void*)&TMP$633$2, -1ll, (void*)vr$50, -1ll, 0 );
		HWRITELINE( &TMP$633$2, 0ll );
		fb_StrDelete( &TMP$633$2 );
	}
	label$1013:;
	label$1012:;
	__builtin_memset( &TMP$634$1, 0, 24ll );
	FBSTRING* vr$56 = HEMITPROCHEADER( PROC$1, 0ll );
	FBSTRING* vr$58 = fb_StrAssign( (void*)&TMP$634$1, -1ll, (void*)vr$56, -1ll, 0 );
	HWRITELINE( &TMP$634$1, 0ll );
	fb_StrDelete( &TMP$634$1 );
	__builtin_memset( &TMP$635$1, 0, 24ll );
	FBSTRING* vr$63 = fb_StrAssign( (void*)&TMP$635$1, -1ll, (void*)"{", 2ll, 0 );
	HWRITELINE( &TMP$635$1, 0ll );
	fb_StrDelete( &TMP$635$1 );
	SECTIONINDENT(  );
	fb_StrDelete( &MANGLED$1 );
	label$1005:;
}

static void _EMITPROCEND( struct $8FBSYMBOL* PROC$1, struct $8FBSYMBOL* INITLABEL$1, struct $8FBSYMBOL* EXITLABEL$1 )
{
	FBSTRING TMP$643$1;
	label$1014:;
	FBSTRING MANGLED$1;
	__builtin_memset( &MANGLED$1, 0, 24ll );
	struct $13EXPRCACHENODE* CACHENODE$1;
	if( (*(int64*)((uint8*)PROC$1 + 8ll) & 268435456ll) == 0ll ) goto label$1017;
	{
		if( *(int64*)((uint8*)&ENV$ + 216ll) != 2ll ) goto label$1019;
		{
			FBSTRING TMP$638$3;
			FBSTRING TMP$639$3;
			FBSTRING TMP$640$3;
			FBSTRING TMP$641$3;
			FBSTRING TMP$642$3;
			FBSTRING* vr$5 = HGETMANGLEDNAMEFORASM( PROC$1, -1ll );
			FBSTRING* vr$7 = fb_StrAssign( (void*)&MANGLED$1, -1ll, (void*)vr$5, -1ll, 0 );
			__builtin_memset( &TMP$642$3, 0, 24ll );
			__builtin_memset( &TMP$638$3, 0, 24ll );
			FBSTRING* vr$13 = fb_StrConcat( &TMP$638$3, (void*)"__asm__( \x22.size ", 17ll, (void*)&MANGLED$1, -1ll );
			__builtin_memset( &TMP$639$3, 0, 24ll );
			FBSTRING* vr$16 = fb_StrConcat( &TMP$639$3, (void*)vr$13, -1ll, (void*)", .-", 5ll );
			__builtin_memset( &TMP$640$3, 0, 24ll );
			FBSTRING* vr$19 = fb_StrConcat( &TMP$640$3, (void*)vr$16, -1ll, (void*)&MANGLED$1, -1ll );
			__builtin_memset( &TMP$641$3, 0, 24ll );
			FBSTRING* vr$22 = fb_StrConcat( &TMP$641$3, (void*)vr$19, -1ll, (void*)"\x22 );", 5ll );
			FBSTRING* vr$24 = fb_StrAssign( (void*)&TMP$642$3, -1ll, (void*)vr$22, -1ll, 0 );
			HWRITELINE( &TMP$642$3, -1ll );
			fb_StrDelete( &TMP$642$3 );
		}
		label$1019:;
		label$1018:;
		fb_StrDelete( &MANGLED$1 );
		goto label$1015;
	}
	label$1017:;
	label$1016:;
	SECTIONUNINDENT(  );
	__builtin_memset( &TMP$643$1, 0, 24ll );
	FBSTRING* vr$30 = fb_StrAssign( (void*)&TMP$643$1, -1ll, (void*)"}", 2ll, 0 );
	HWRITELINE( &TMP$643$1, 0ll );
	fb_StrDelete( &TMP$643$1 );
	SECTIONEND(  );
	label$1020:;
	{
		void* vr$34 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&CTX$ + 5592ll) );
		CACHENODE$1 = (struct $13EXPRCACHENODE*)vr$34;
		if( CACHENODE$1 != (struct $13EXPRCACHENODE*)0ull ) goto label$1024;
		{
			goto label$1021;
		}
		label$1024:;
		label$1023:;
		EXPRFREETREE( *(struct $8EXPRNODE**)((uint8*)CACHENODE$1 + 8ll) );
		LISTDELNODE( (struct $5TLIST*)((uint8*)&CTX$ + 5592ll), (void*)CACHENODE$1 );
	}
	label$1022:;
	goto label$1020;
	label$1021:;
	IRHLEMITPROCEND(  );
	fb_StrDelete( &MANGLED$1 );
	label$1015:;
}

static void _EMITPUSHARG( struct $8FBSYMBOL* PARAM$1, struct $6IRVREG* VR$1, int64 UDTLEN$1, int64 LEVEL$1 )
{
	label$1025:;
	struct $9IRCALLARG* ARG$1;
	void* vr$1 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&CTX$ + 5176ll) );
	ARG$1 = (struct $9IRCALLARG*)vr$1;
	*(struct $8FBSYMBOL**)ARG$1 = PARAM$1;
	*(struct $6IRVREG**)((uint8*)ARG$1 + 8ll) = VR$1;
	*(int64*)((uint8*)ARG$1 + 16ll) = LEVEL$1;
	label$1026:;
}

static void _EMITSCOPEBEGIN( struct $8FBSYMBOL* S$1 )
{
	FBSTRING TMP$644$1;
	label$1027:;
	SECTIONBEGIN(  );
	__builtin_memset( &TMP$644$1, 0, 24ll );
	FBSTRING* vr$2 = fb_StrAssign( (void*)&TMP$644$1, -1ll, (void*)"{", 2ll, 0 );
	HWRITELINE( &TMP$644$1, -1ll );
	fb_StrDelete( &TMP$644$1 );
	SECTIONINDENT(  );
	label$1028:;
}

static void _EMITSCOPEEND( struct $8FBSYMBOL* S$1 )
{
	FBSTRING TMP$645$1;
	label$1029:;
	SECTIONUNINDENT(  );
	__builtin_memset( &TMP$645$1, 0, 24ll );
	FBSTRING* vr$2 = fb_StrAssign( (void*)&TMP$645$1, -1ll, (void*)"}", 2ll, 0 );
	HWRITELINE( &TMP$645$1, -1ll );
	fb_StrDelete( &TMP$645$1 );
	SECTIONEND(  );
	label$1030:;
}

__attribute__(( constructor )) static void _GLOBAL__I( void )
{
	label$1032:;
	_ZN8IRHLCCTXC1Ev( &CTX$ );
	label$1033:;
}

__attribute__(( destructor )) static void _GLOBAL__D( void )
{
	label$1035:;
	_ZN8IRHLCCTXD1Ev( &CTX$ );
	label$1036:;
}

// Total compilation time: 0.05520693259313703 seconds.
