// Compilation of fbc-1.01.0/src/compiler/parser-toplevel.bas started at 14:16:44 on 02-28-2015

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
typedef int64 $11FB_MANGLING;
typedef int64 $8FB_TOKEN;
typedef int64 $12FB_PARSEROPT;
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
typedef int64 $8LEXCHECK;
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__parserztoplevel( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRREPORT( int64, int64, uint8* );
int64 FBSHOULDCONTINUE( void );
struct $7ASTNODE* ASTADD( struct $7ASTNODE* );
struct $7ASTNODE* ASTADDAFTER( struct $7ASTNODE*, struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWCONSTZ( int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWLIT( uint8* );
struct $7ASTNODE* ASTNEWDBG( int64, int64 );
void DZSTRRESET( struct $8DZSTRING* );
int64 LEXGETTOKEN( $8LEXCHECK );
void LEXSKIPTOKEN( $8LEXCHECK );
int64 LEXGETLOOKAHEAD( int64, $8LEXCHECK );
int64 CLABEL( void );
int64 CCOMMENT( $8LEXCHECK );
void CSTATEMENT( void );
int64 CCOMPSTMTCHECK( void );
struct $7ASTNODE* CEXPRESSION( void );
void HSKIPUNTIL( int64, int64, $8LEXCHECK, int64 );
void PARSERCOMPOUNDSTMTINIT( void );
void PARSERCOMPOUNDSTMTEND( void );
void PARSERCOMPOUNDSTMTSETCTX( void );
void PARSERPROCCALLINIT( void );
void PARSERPROCCALLEND( void );
void PARSERLETINIT( void );
void PARSERLETEND( void );
static void HEMITCURRENTLINETEXT( void );
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
struct $6PP_CTX {
	struct $8FBSYMBOL KWDNS;
	struct $5TLIST ARGTBLIST;
	int64 LEVEL;
	int64 SKIPPING;
};
__FB_STATIC_ASSERT( sizeof( struct $6PP_CTX ) == 384 );
extern struct $6PP_CTX PP$;
struct $5FBENV ENV$ __attribute__((common));
struct $9PARSERCTX PARSER$;

void PARSERSETCTX( void )
{
	label$10:;
	*(uint64*)((uint8*)&PARSER$ + 184ll) = 0ull;
	*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) = (struct $8FBSYMBOL*)0ull;
	*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 208ll) = (struct $8FBSYMBOL*)0ull;
	*(int64*)((uint8*)&PARSER$ + 176ll) = 0ll;
	*($11FB_MANGLING*)((uint8*)&PARSER$ + 192ll) = 0ll;
	*(int64*)((uint8*)&PARSER$ + 56ll) = 0ll;
	*($8FB_TOKEN*)((uint8*)&PARSER$ + 48ll) = 0ll;
	*(int64*)((uint8*)&PARSER$ + 280ll) = 0ll;
	*($12FB_PARSEROPT*)((uint8*)&PARSER$ + 288ll) = 2ll;
	*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 304ll) = (struct $8FBSYMBOL*)0ull;
	*(int64*)((uint8*)&PARSER$ + 296ll) = 2147483648ll;
	PARSERCOMPOUNDSTMTSETCTX(  );
	label$11:;
}

void PARSERINIT( void )
{
	label$12:;
	PARSERCOMPOUNDSTMTINIT(  );
	PARSERPROCCALLINIT(  );
	PARSERLETINIT(  );
	label$13:;
}

void PARSEREND( void )
{
	label$14:;
	PARSERLETEND(  );
	PARSERPROCCALLEND(  );
	PARSERCOMPOUNDSTMTEND(  );
	label$15:;
}

void CPROGRAM( void )
{
	label$24:;
	int64 STARTLEVEL$1;
	STARTLEVEL$1 = *(int64*)((uint8*)&PP$ + 368ll);
	label$26:;
	{
		struct $7ASTNODE* vr$1 = ASTNEWDBG( 108ll, *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16712ll) );
		ASTADD( vr$1 );
		CLABEL(  );
		CSTATEMENT(  );
		CCOMMENT( 0ll );
		int64 vr$2 = FBSHOULDCONTINUE(  );
		if( vr$2 != 0ll ) goto label$30;
		{
			goto label$25;
		}
		label$30:;
		label$29:;
		if( *(int64*)((uint8*)&ENV$ + 288ll) == 0ll ) goto label$32;
		{
			if( *(int64*)((uint8*)&ENV$ + 1128ll) != 0ll ) goto label$34;
			{
				HEMITCURRENTLINETEXT(  );
			}
			label$34:;
			label$33:;
		}
		label$32:;
		label$31:;
		{
			int64 TMP$85$3;
			int64 vr$6 = LEXGETTOKEN( 0ll );
			TMP$85$3 = vr$6;
			if( TMP$85$3 != 257ll ) goto label$36;
			label$37:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			goto label$35;
			label$36:;
			if( TMP$85$3 != 256ll ) goto label$38;
			label$39:;
			{
			}
			goto label$35;
			label$38:;
			{
				ERRREPORT( 3ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 257ll, -1ll, 0ll, 0ll );
			}
			label$40:;
			label$35:;
		}
		int64 vr$9 = FBSHOULDCONTINUE(  );
		if( vr$9 != 0ll ) goto label$42;
		{
			goto label$25;
		}
		label$42:;
		label$41:;
		struct $7ASTNODE* vr$11 = ASTNEWDBG( 109ll, 0ll );
		ASTADD( vr$11 );
		*(int64*)((uint8*)&PARSER$ + 56ll) = *(int64*)((uint8*)&PARSER$ + 56ll) + 1ll;
	}
	label$28:;
	int64 vr$13 = LEXGETTOKEN( 0ll );
	if( vr$13 != 256ll ) goto label$26;
	label$27:;
	if( *(int64*)((uint8*)&PP$ + 368ll) == STARTLEVEL$1 ) goto label$44;
	{
		ERRREPORT( 289ll, 0ll, (uint8*)0ull );
	}
	label$44:;
	label$43:;
	LEXSKIPTOKEN( 0ll );
	if( *(int64*)((uint8*)&ENV$ + 1128ll) != 0ll ) goto label$46;
	{
		CCOMPSTMTCHECK(  );
	}
	label$46:;
	label$45:;
	label$25:;
}

void HSKIPUNTIL( int64 TOKEN$1, int64 DOEAT$1, $8LEXCHECK FLAGS$1, int64 STOP_ON_COMMA$1 )
{
	label$47:;
	int64 PRNTCNT$1;
	__builtin_memset( &PRNTCNT$1, 0, 8ll );
	PRNTCNT$1 = 0ll;
	label$49:;
	{
		{
			uint64 TMP$86$3;
			int64 vr$1 = LEXGETTOKEN( FLAGS$1 );
			TMP$86$3 = (uint64)vr$1;
			goto label$53;
			label$54:;
			{
				goto label$50;
			}
			goto label$52;
			label$55:;
			{
				if( TOKEN$1 == 257ll ) goto label$57;
				{
					goto label$50;
				}
				label$57:;
				label$56:;
			}
			goto label$52;
			label$58:;
			{
				goto label$48;
			}
			goto label$52;
			label$59:;
			{
				if( TOKEN$1 != 40ll ) goto label$61;
				{
					goto label$50;
				}
				label$61:;
				label$60:;
				PRNTCNT$1 = PRNTCNT$1 + 1ll;
			}
			goto label$52;
			label$62:;
			{
				PRNTCNT$1 = PRNTCNT$1 + 1ll;
			}
			goto label$52;
			label$63:;
			{
				if( PRNTCNT$1 <= 0ll ) goto label$65;
				{
					PRNTCNT$1 = PRNTCNT$1 + -1ll;
				}
				goto label$64;
				label$65:;
				{
					if( TOKEN$1 != 41ll ) goto label$67;
					{
						goto label$50;
					}
					label$67:;
					label$66:;
				}
				label$64:;
			}
			goto label$52;
			label$68:;
			{
				if( PRNTCNT$1 <= 0ll ) goto label$70;
				{
					PRNTCNT$1 = PRNTCNT$1 + -1ll;
				}
				goto label$69;
				label$70:;
				{
					if( TOKEN$1 != 125ll ) goto label$72;
					{
						goto label$50;
					}
					label$72:;
					label$71:;
				}
				label$69:;
			}
			goto label$52;
			label$73:;
			{
				if( ((int64)-(TOKEN$1 == 44ll) | STOP_ON_COMMA$1) == 0ll ) goto label$75;
				{
					if( PRNTCNT$1 != 0ll ) goto label$77;
					{
						goto label$50;
					}
					label$77:;
					label$76:;
				}
				label$75:;
				label$74:;
			}
			goto label$52;
			label$78:;
			{
				int64 vr$16 = LEXGETTOKEN( FLAGS$1 );
				if( vr$16 != TOKEN$1 ) goto label$80;
				{
					goto label$50;
				}
				label$80:;
				label$79:;
			}
			goto label$52;
			label$53:;
			static const void* tmp$87[221ll] = {
				&&label$59,
				&&label$63,
				&&label$78,
				&&label$78,
				&&label$73,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$62,
				&&label$78,
				&&label$68,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$78,
				&&label$58,
				&&label$54,
				&&label$55,
				&&label$55,
				&&label$55,
			};
			if( TMP$86$3 < 40ll ) goto label$78;
			if( TMP$86$3 > 260ll ) goto label$78;
			goto *tmp$87[TMP$86$3 - 40ll];
			label$52:;
		}
		LEXSKIPTOKEN( FLAGS$1 );
	}
	label$51:;
	goto label$49;
	label$50:;
	if( DOEAT$1 == 0ll ) goto label$82;
	{
		int64 vr$19 = LEXGETTOKEN( FLAGS$1 );
		if( TOKEN$1 != vr$19 ) goto label$84;
		{
			LEXSKIPTOKEN( FLAGS$1 );
		}
		label$84:;
		label$83:;
	}
	label$82:;
	label$81:;
	label$48:;
}

void HSKIPCOMPOUND( int64 FOR_TOKEN$1, int64 UNTIL_TOKEN$1, $8LEXCHECK FLAGS$1 )
{
	label$85:;
	int64 CNT$1;
	__builtin_memset( &CNT$1, 0, 8ll );
	int64 ISCOMMENT$1;
	__builtin_memset( &ISCOMMENT$1, 0, 8ll );
	if( UNTIL_TOKEN$1 != -1ll ) goto label$88;
	{
		UNTIL_TOKEN$1 = FOR_TOKEN$1;
	}
	label$88:;
	label$87:;
	CNT$1 = 0ll;
	ISCOMMENT$1 = 0ll;
	label$89:;
	{
		{
			int64 TMP$88$3;
			int64 vr$3 = LEXGETTOKEN( FLAGS$1 );
			TMP$88$3 = vr$3;
			if( TMP$88$3 != 256ll ) goto label$93;
			label$94:;
			{
				goto label$86;
			}
			goto label$92;
			label$93:;
			if( TMP$88$3 != 257ll ) goto label$95;
			label$96:;
			{
				ISCOMMENT$1 = 0ll;
			}
			goto label$92;
			label$95:;
			if( TMP$88$3 == 259ll ) goto label$98;
			label$99:;
			if( TMP$88$3 != 260ll ) goto label$97;
			label$98:;
			{
				ISCOMMENT$1 = -1ll;
			}
			goto label$92;
			label$97:;
			if( TMP$88$3 != 340ll ) goto label$100;
			label$101:;
			{
				if( ISCOMMENT$1 != 0ll ) goto label$103;
				{
					int64 vr$10 = LEXGETLOOKAHEAD( 1ll, FLAGS$1 );
					if( vr$10 != UNTIL_TOKEN$1 ) goto label$105;
					{
						LEXSKIPTOKEN( FLAGS$1 );
						if( CNT$1 <= 0ll ) goto label$107;
						{
							CNT$1 = CNT$1 + -1ll;
						}
						label$107:;
						label$106:;
						if( CNT$1 != 0ll ) goto label$109;
						{
							goto label$90;
						}
						label$109:;
						label$108:;
					}
					label$105:;
					label$104:;
				}
				label$103:;
				label$102:;
			}
			goto label$92;
			label$100:;
			if( TMP$88$3 != FOR_TOKEN$1 ) goto label$110;
			label$111:;
			{
				if( ISCOMMENT$1 != 0ll ) goto label$113;
				{
					CNT$1 = CNT$1 + 1ll;
				}
				label$113:;
				label$112:;
			}
			label$110:;
			label$92:;
		}
		LEXSKIPTOKEN( FLAGS$1 );
	}
	label$91:;
	goto label$89;
	label$90:;
	LEXSKIPTOKEN( FLAGS$1 );
	label$86:;
}

struct $7ASTNODE* HMATCHEXPR( int64 DTYPE$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$114:;
	struct $7ASTNODE* EXPR$1;
	__builtin_memset( &EXPR$1, 0, 8ll );
	struct $7ASTNODE* vr$2 = CEXPRESSION(  );
	EXPR$1 = vr$2;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$117;
	{
		ERRREPORT( 9ll, 0ll, (uint8*)0ull );
		if( DTYPE$1 != 2147483648ll ) goto label$119;
		{
			fb$result$1 = (struct $7ASTNODE*)0ull;
			goto label$115;
		}
		label$119:;
		label$118:;
		struct $7ASTNODE* vr$5 = ASTNEWCONSTZ( DTYPE$1, (struct $8FBSYMBOL*)0ull );
		EXPR$1 = vr$5;
	}
	label$117:;
	label$116:;
	fb$result$1 = EXPR$1;
	label$115:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__parserztoplevel( void )
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

static void HEMITCURRENTLINETEXT( void )
{
	label$16:;
	struct $7ASTNODE* N$1;
	N$1 = *(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)&AST$ + 80ll) + 120ll);
	label$18:;
	if( N$1 == (struct $7ASTNODE*)0ull ) goto label$19;
	{
		if( *(int64*)N$1 != 30ll ) goto label$21;
		{
			if( *(int64*)((uint8*)N$1 + 48ll) != 108ll ) goto label$23;
			{
				struct $7ASTNODE* vr$7 = ASTNEWLIT( *(uint8**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 49600ll) );
				ASTADDAFTER( vr$7, N$1 );
				goto label$19;
			}
			label$23:;
			label$22:;
		}
		label$21:;
		label$20:;
		N$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 128ll);
	}
	goto label$18;
	label$19:;
	DZSTRRESET( (struct $8DZSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 49600ll) );
	label$17:;
}

// Total compilation time: 0.03135498077608645 seconds.
