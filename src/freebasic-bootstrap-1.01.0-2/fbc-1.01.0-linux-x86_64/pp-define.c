// Compilation of fbc-1.01.0/src/compiler/pp-define.bas started at 14:16:44 on 02-28-2015

typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
struct $7TLISTTB;
struct $7TLISTTB {
	struct $7TLISTTB* NEXT;
	void* NODETB;
	int64 NODES;
};
#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]
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
struct $9LEXPP_ARG {
	union {
		struct $8DZSTRING TEXT;
		struct $8DWSTRING TEXTW;
	};
};
__FB_STATIC_ASSERT( sizeof( struct $9LEXPP_ARG ) == 24 );
struct $11LEXPP_ARGTB {
	struct $9LEXPP_ARG TB[32];
};
__FB_STATIC_ASSERT( sizeof( struct $11LEXPP_ARGTB ) == 768 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
void fb_WstrDelete( uint32* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
uint32* fb_WstrConcat( uint32*, uint32* );
int32 fb_StrCompare( void*, int64, void*, int64 );
int32 fb_WstrCompare( uint32*, uint32* );
FBSTRING* fb_StrConcatAssign( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAllocTempDescZ( uint8* );
FBSTRING* fb_WstrToStr( uint32* );
uint32* fb_StrToWstr( uint8* );
int64 fb_StrLen( void*, int64 );
int64 fb_WstrLen( uint32* );
FBSTRING* fb_TRIM( FBSTRING* );
uint32* fb_WstrTrim( uint32* );
FBSTRING* fb_StrUcase2( FBSTRING*, int32 );
static void fb_ctor__ppzdefine( void ) __attribute__(( constructor ));
void LISTINIT( struct $5TLIST*, int64, int64, $10LIST_FLAGS );
void LISTEND( struct $5TLIST* );
void* LISTNEWNODE( struct $5TLIST* );
void LISTDELNODE( struct $5TLIST*, void* );
void* HASHLOOKUP( struct $5THASH*, uint8* );
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
typedef int64 $12FB_ERRMSGOPT;
void ERRREPORTEX( int64, uint8*, int64, $12FB_ERRMSGOPT, uint8* );
void ERRREPORT( int64, int64, uint8* );
struct $8FBSYMBOL* SYMBADDDEFINE( uint8*, uint8*, int64, int64, tmp$26, $15FB_DEFINE_FLAGS );
struct $8FBSYMBOL* SYMBADDDEFINEW( uint8*, uint32*, int64, int64, tmp$26, $15FB_DEFINE_FLAGS );
struct $8FBSYMBOL* SYMBADDDEFINEMACRO( uint8*, struct $9FB_DEFTOK*, int64, struct $11FB_DEFPARAM*, $15FB_DEFINE_FLAGS );
struct $11FB_DEFPARAM* SYMBADDDEFINEPARAM( struct $11FB_DEFPARAM*, uint8* );
struct $9FB_DEFTOK* SYMBADDDEFINETOK( struct $9FB_DEFTOK*, $14FB_DEFTOK_TYPE );
struct $9FB_DEFTOK* SYMBDELDEFINETOK( struct $9FB_DEFTOK* );
uint8* SYMBUNIQUELABEL( void );
int64 HISVALIDSYMBOLNAME( uint8* );
void ZSTRASSIGN( uint8**, uint8* );
void ZSTRCONCATASSIGN( uint8**, uint8* );
void WSTRASSIGN( uint32**, uint32* );
FBSTRING* HREPLACE( uint8*, uint8*, uint8* );
uint32* HREPLACEW( uint32*, uint32*, uint32* );
void DZSTRZERO( struct $8DZSTRING* );
void DZSTRASSIGN( struct $8DZSTRING*, uint8* );
void DZSTRASSIGNW( struct $8DZSTRING*, uint32* );
void DZSTRCONCATASSIGN( struct $8DZSTRING*, uint8* );
void DZSTRCONCATASSIGNW( struct $8DZSTRING*, uint32* );
void DWSTRZERO( struct $8DWSTRING* );
void DWSTRASSIGN( struct $8DWSTRING*, uint32* );
void DWSTRASSIGNA( struct $8DWSTRING*, uint8* );
void DWSTRCONCATASSIGN( struct $8DWSTRING*, uint32* );
void DWSTRCONCATASSIGNA( struct $8DWSTRING*, uint8* );
typedef int64 $8LEXCHECK;
int64 LEXGETTOKEN( $8LEXCHECK );
int64 LEXGETCLASS( $8LEXCHECK );
uint8* LEXGETTEXT( void );
void LEXEATTOKEN( uint8*, $8LEXCHECK );
void LEXSKIPTOKEN( $8LEXCHECK );
int64 LEXGETLOOKAHEAD( int64, $8LEXCHECK );
void LEXNEXTTOKEN( struct $7FBTOKEN*, $8LEXCHECK );
uint64 LEXCURRENTCHAR( int64 );
uint64 LEXEATCHAR( void );
typedef int64 $8FB_IDOPT;
struct $10FBSYMCHAIN* CIDENTIFIER( struct $8FBSYMBOL**, $8FB_IDOPT );
void HSKIPUNTIL( int64, int64, $8LEXCHECK, int64 );
uint8* PPREADLITERAL( int64 );
uint32* PPREADLITERALW( int64 );
static void HREPORTMACROERROR( struct $8FBSYMBOL*, int64 );
static int64 ISMACROALLOWED( struct $8FBSYMBOL* );
static int64 HLOADMACRO( struct $8FBSYMBOL* );
static int64 HLOADDEFINE( struct $8FBSYMBOL* );
static int64 HLOADMACROW( struct $8FBSYMBOL* );
static int64 HLOADDEFINEW( struct $8FBSYMBOL* );
static struct $9FB_DEFTOK* HRTRIMMACROTEXT( struct $9FB_DEFTOK*, struct $9FB_DEFTOK* );
static struct $9FB_DEFTOK* HREADMACROTEXT( int64, struct $11FB_DEFPARAM*, int64 );
static void HREADDEFINETEXT( struct $8FBSYMBOL*, uint8*, int64, int64 );
static int64 HMATCHPARAMELLIPSIS( void );
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
struct $6PP_CTX {
	struct $8FBSYMBOL KWDNS;
	struct $5TLIST ARGTBLIST;
	int64 LEVEL;
	int64 SKIPPING;
};
__FB_STATIC_ASSERT( sizeof( struct $6PP_CTX ) == 384 );
extern struct $6PP_CTX PP$;
struct $5FBENV ENV$ __attribute__((common));

void PPDEFINEINIT( void )
{
	label$10:;
	LISTINIT( (struct $5TLIST*)((uint8*)&PP$ + 304ll), 8ll, 768ll, 6ll );
	label$11:;
}

void PPDEFINEEND( void )
{
	label$12:;
	LISTEND( (struct $5TLIST*)((uint8*)&PP$ + 304ll) );
	label$13:;
}

int64 PPDEFINELOAD( struct $8FBSYMBOL* S$1, struct $8FBSYMBOL* CURRMACRO$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$210:;
	if( S$1 != CURRMACRO$1 ) goto label$213;
	{
		ERRREPORT( 88ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( -1ll, 0ll, 62ll, 0ll );
		fb$result$1 = -1ll;
		goto label$211;
	}
	label$213:;
	label$212:;
	if( *(int64*)((uint8*)&ENV$ + 768ll) != 0ll ) goto label$215;
	{
		int64 vr$3 = HLOADDEFINE( S$1 );
		fb$result$1 = vr$3;
	}
	goto label$214;
	label$215:;
	{
		int64 vr$4 = HLOADDEFINEW( S$1 );
		fb$result$1 = vr$4;
	}
	label$214:;
	if( *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16752ll) <= 0ll ) goto label$217;
	{
		if( *(struct $8FBSYMBOL**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16736ll) != (struct $8FBSYMBOL*)0ull ) goto label$219;
		{
			*(struct $8FBSYMBOL**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16736ll) = S$1;
		}
		label$219:;
		label$218:;
	}
	label$217:;
	label$216:;
	*(uint64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16696ll) = 18446744073709551615ull;
	label$211:;
	return fb$result$1;
}

void PPDEFINE( int64 ISMULTILINE$1 )
{
	label$319:;
	static uint8 DEFNAME$1[129];
	int64 PARAMS$1;
	int64 ISARGLESS$1;
	int64 FLAGS$1;
	int64 IS_VARIADIC$1;
	struct $11FB_DEFPARAM* PARAMHEAD$1;
	struct $11FB_DEFPARAM* LASTPARAM$1;
	struct $8FBSYMBOL* SYM$1;
	struct $10FBSYMCHAIN* CHAIN_$1;
	struct $8FBSYMBOL* BASE_PARENT$1;
	struct $9FB_DEFTOK* TOKHEAD$1;
	struct $10FBSYMCHAIN* vr$1 = CIDENTIFIER( &BASE_PARENT$1, 38ll );
	CHAIN_$1 = vr$1;
	FLAGS$1 = 62ll;
	if( ISMULTILINE$1 == 0ll ) goto label$322;
	{
		FLAGS$1 = FLAGS$1 & -5ll;
	}
	label$322:;
	label$321:;
	LEXEATTOKEN( (uint8*)DEFNAME$1, FLAGS$1 );
	int64 vr$4 = HISVALIDSYMBOLNAME( (uint8*)DEFNAME$1 );
	if( vr$4 != 0ll ) goto label$324;
	{
		ERRREPORT( 14ll, 0ll, (uint8*)0ull );
		goto label$320;
	}
	label$324:;
	label$323:;
	int64 vr$6 = LEXGETTOKEN( FLAGS$1 );
	if( vr$6 != 46ll ) goto label$326;
	{
		ERRREPORT( 89ll, 0ll, (uint8*)0ull );
	}
	label$326:;
	label$325:;
	if( CHAIN_$1 == (struct $10FBSYMCHAIN*)0ull ) goto label$328;
	{
		SYM$1 = *(struct $8FBSYMBOL**)CHAIN_$1;
		if( (int64)-(*(int64*)SYM$1 == 5ll) != 0ll ) goto label$330;
		{
			ERRREPORTEX( 4ll, (uint8*)DEFNAME$1, 0ll, 1ll, (uint8*)0ull );
			uint8* vr$13 = SYMBUNIQUELABEL(  );
			fb_StrAssign( (void*)DEFNAME$1, 129ll, (void*)vr$13, 0ll, 0 );
		}
		label$330:;
		label$329:;
	}
	goto label$327;
	label$328:;
	{
		SYM$1 = (struct $8FBSYMBOL*)0ull;
	}
	label$327:;
	PARAMS$1 = 0ll;
	PARAMHEAD$1 = (struct $11FB_DEFPARAM*)0ull;
	ISARGLESS$1 = 0ll;
	IS_VARIADIC$1 = 0ll;
	int64 vr$14 = LEXGETTOKEN( FLAGS$1 );
	if( vr$14 != 40ll ) goto label$332;
	{
		LEXSKIPTOKEN( 34ll );
		int64 vr$16 = LEXGETTOKEN( 34ll );
		if( vr$16 == 41ll ) goto label$334;
		{
			LASTPARAM$1 = (struct $11FB_DEFPARAM*)0ull;
			label$335:;
			{
				{
					uint64 TMP$135$5;
					int64 vr$18 = LEXGETCLASS( 0ll );
					TMP$135$5 = (uint64)vr$18;
					goto label$339;
					label$340:;
					{
						uint8* vr$19 = LEXGETTEXT(  );
						struct $11FB_DEFPARAM* vr$20 = SYMBADDDEFINEPARAM( LASTPARAM$1, vr$19 );
						LASTPARAM$1 = vr$20;
					}
					goto label$338;
					label$341:;
					{
						ERRREPORT( 14ll, 0ll, (uint8*)0ull );
						uint8* vr$21 = SYMBUNIQUELABEL(  );
						struct $11FB_DEFPARAM* vr$22 = SYMBADDDEFINEPARAM( LASTPARAM$1, vr$21 );
						LASTPARAM$1 = vr$22;
					}
					goto label$338;
					label$339:;
					static const void* tmp$137[3ll] = {
						&&label$340,
						&&label$340,
						&&label$340,
					};
					if( TMP$135$5 > 2ll ) goto label$341;
					goto *tmp$137[TMP$135$5 - 0ll];
					label$338:;
				}
				if( LASTPARAM$1 != (struct $11FB_DEFPARAM*)0ull ) goto label$343;
				{
					ERRREPORT( 4ll, 0ll, (uint8*)0ull );
				}
				label$343:;
				label$342:;
				LEXSKIPTOKEN( 34ll );
				PARAMS$1 = PARAMS$1 + 1ll;
				if( PARAMS$1 < 32ll ) goto label$345;
				{
					ERRREPORT( 78ll, 0ll, (uint8*)0ull );
					HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
					goto label$320;
				}
				label$345:;
				label$344:;
				if( PARAMHEAD$1 != (struct $11FB_DEFPARAM*)0ull ) goto label$347;
				{
					PARAMHEAD$1 = LASTPARAM$1;
				}
				label$347:;
				label$346:;
				int64 vr$27 = LEXGETTOKEN( 34ll );
				if( vr$27 == 44ll ) goto label$349;
				{
					goto label$336;
				}
				label$349:;
				label$348:;
				LEXSKIPTOKEN( 34ll );
			}
			label$337:;
			goto label$335;
			label$336:;
			int64 vr$29 = HMATCHPARAMELLIPSIS(  );
			IS_VARIADIC$1 = vr$29;
		}
		goto label$333;
		label$334:;
		{
			ISARGLESS$1 = -1ll;
		}
		label$333:;
		int64 vr$30 = LEXGETTOKEN( 62ll );
		if( vr$30 == 41ll ) goto label$351;
		{
			ERRREPORT( 7ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( 41ll, -1ll, 62ll, 0ll );
		}
		goto label$350;
		label$351:;
		{
			LEXSKIPTOKEN( 58ll );
		}
		label$350:;
	}
	goto label$331;
	label$332:;
	{
		if( ISMULTILINE$1 != 0ll ) goto label$353;
		{
			int64 vr$33 = LEXGETTOKEN( 62ll );
			if( vr$33 != 32ll ) goto label$355;
			{
				LEXSKIPTOKEN( 58ll );
			}
			label$355:;
			label$354:;
		}
		label$353:;
		label$352:;
	}
	label$331:;
	if( PARAMS$1 != 0ll ) goto label$357;
	{
		HREADDEFINETEXT( SYM$1, (uint8*)DEFNAME$1, ISARGLESS$1, ISMULTILINE$1 );
		goto label$320;
	}
	label$357:;
	label$356:;
	if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$359;
	{
		ERRREPORTEX( 4ll, (uint8*)DEFNAME$1, 0ll, 1ll, (uint8*)0ull );
	}
	goto label$358;
	label$359:;
	{
		$15FB_DEFINE_FLAGS TMP$136$2;
		struct $9FB_DEFTOK* vr$37 = HREADMACROTEXT( PARAMS$1, PARAMHEAD$1, ISMULTILINE$1 );
		TOKHEAD$1 = vr$37;
		if( IS_VARIADIC$1 == 0ll ) goto label$360;
		TMP$136$2 = 4ll;
		goto label$361;
		label$360:;
		TMP$136$2 = 0ll;
		label$361:;
		SYMBADDDEFINEMACRO( (uint8*)DEFNAME$1, TOKHEAD$1, PARAMS$1, PARAMHEAD$1, TMP$136$2 );
	}
	label$358:;
	label$320:;
}

__attribute__(( constructor )) static void fb_ctor__ppzdefine( void )
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

static void HREPORTMACROERROR( struct $8FBSYMBOL* S$1, int64 ERRNUM$1 )
{
	FBSTRING TMP$87$1;
	FBSTRING TMP$88$1;
	label$14:;
	__builtin_memset( &TMP$88$1, 0, 24ll );
	__builtin_memset( &TMP$87$1, 0, 24ll );
	FBSTRING* vr$4 = fb_StrConcat( &TMP$87$1, (void*)"expanding: ", 12ll, *(void**)((uint8*)S$1 + 24ll), 0ll );
	FBSTRING* vr$6 = fb_StrAssign( (void*)&TMP$88$1, -1ll, (void*)vr$4, -1ll, 0 );
	ERRREPORTEX( ERRNUM$1, *(uint8**)&TMP$88$1, 0ll, 1ll, (uint8*)0ull );
	fb_StrDelete( &TMP$88$1 );
	label$15:;
}

static int64 ISMACROALLOWED( struct $8FBSYMBOL* S$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$16:;
	if( *(int64*)((uint8*)&PP$ + 376ll) != 0ll ) goto label$19;
	{
		if( (*(int64*)((uint8*)S$1 + 120ll) & 2ll) == 0ll ) goto label$21;
		{
			if( *(int64*)((uint8*)&ENV$ + 208ll) != 1ll ) goto label$23;
			{
				ERRREPORT( 285ll, 0ll, (uint8*)0ull );
				fb$result$1 = 0ll;
				goto label$17;
			}
			label$23:;
			label$22:;
		}
		label$21:;
		label$20:;
	}
	label$19:;
	label$18:;
	fb$result$1 = -1ll;
	goto label$17;
	label$17:;
	return fb$result$1;
}

static int64 HLOADMACRO( struct $8FBSYMBOL* S$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$24:;
	struct $11FB_DEFPARAM* PARAM$1;
	struct $11FB_DEFPARAM* NEXTPARAM$1;
	struct $9FB_DEFTOK* DT$1;
	struct $7FBTOKEN T$1;
	struct $11LEXPP_ARGTB* ARGTB$1;
	int64 PRNTCNT$1;
	int64 NUM$1;
	int64 REACHED_VARARG$1;
	int64 IS_VARIADIC$1;
	uint8* ARGTEXT$1;
	static FBSTRING TEXT$1;
	fb$result$1 = -1ll;
	uint64 vr$1 = LEXCURRENTCHAR( -1ll );
	if( vr$1 == 40ull ) goto label$27;
	{
		goto label$25;
	}
	label$27:;
	label$26:;
	int64 vr$3 = ISMACROALLOWED( S$1 );
	if( vr$3 != 0ll ) goto label$29;
	{
		goto label$25;
	}
	label$29:;
	label$28:;
	LEXEATCHAR(  );
	PARAM$1 = *(struct $11FB_DEFPARAM**)((uint8*)S$1 + 96ll);
	if( PARAM$1 == (struct $11FB_DEFPARAM*)0ull ) goto label$31;
	{
		void* vr$8 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&PP$ + 304ll) );
		ARGTB$1 = (struct $11LEXPP_ARGTB*)vr$8;
	}
	goto label$30;
	label$31:;
	{
		ARGTB$1 = (struct $11LEXPP_ARGTB*)0ull;
	}
	label$30:;
	PRNTCNT$1 = 1ll;
	REACHED_VARARG$1 = 0ll;
	IS_VARIADIC$1 = (int64)-((*(int64*)((uint8*)S$1 + 120ll) & 4ll) != 0ll);
	NUM$1 = 0ll;
	label$32:;
	{
		if( ARGTB$1 == (struct $11LEXPP_ARGTB*)0ull ) goto label$36;
		{
			DZSTRZERO( (struct $8DZSTRING*)((uint8*)ARGTB$1 + (NUM$1 * 24ll)) );
		}
		label$36:;
		label$35:;
		NEXTPARAM$1 = *(struct $11FB_DEFPARAM**)((uint8*)PARAM$1 + 16ll);
		if( NEXTPARAM$1 != (struct $11FB_DEFPARAM*)0ull ) goto label$38;
		{
			REACHED_VARARG$1 = IS_VARIADIC$1;
		}
		label$38:;
		label$37:;
		label$39:;
		{
			LEXNEXTTOKEN( &T$1, 92ll );
			{
				uint64 TMP$89$4;
				TMP$89$4 = *(uint64*)&T$1;
				goto label$43;
				label$44:;
				{
					PRNTCNT$1 = PRNTCNT$1 + 1ll;
				}
				goto label$42;
				label$45:;
				{
					PRNTCNT$1 = PRNTCNT$1 + -1ll;
					if( PRNTCNT$1 != 0ll ) goto label$47;
					{
						goto label$40;
					}
					label$47:;
					label$46:;
				}
				goto label$42;
				label$48:;
				{
					if( PRNTCNT$1 != 1ll ) goto label$50;
					{
						if( REACHED_VARARG$1 != 0ll ) goto label$52;
						{
							goto label$40;
						}
						label$52:;
						label$51:;
					}
					label$50:;
					label$49:;
				}
				goto label$42;
				label$53:;
				{
					HREPORTMACROERROR( S$1, 7ll );
					PRNTCNT$1 = 0ll;
					goto label$40;
				}
				goto label$42;
				label$43:;
				static const void* tmp$138[218ll] = {
					&&label$44,
					&&label$45,
					&&label$42,
					&&label$42,
					&&label$48,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$42,
					&&label$53,
					&&label$53,
				};
				if( TMP$89$4 < 40ll ) goto label$42;
				if( TMP$89$4 > 257ll ) goto label$42;
				goto *tmp$138[TMP$89$4 - 40ll];
				label$42:;
			}
			if( ARGTB$1 == (struct $11LEXPP_ARGTB*)0ull ) goto label$55;
			{
				if( *(int64*)((uint8*)&T$1 + 16ll) == 6ll ) goto label$57;
				{
					DZSTRCONCATASSIGN( (struct $8DZSTRING*)((uint8*)ARGTB$1 + (NUM$1 * 24ll)), (uint8*)((uint8*)&T$1 + 24ll) );
				}
				goto label$56;
				label$57:;
				{
					DZSTRCONCATASSIGNW( (struct $8DZSTRING*)((uint8*)ARGTB$1 + (NUM$1 * 24ll)), (uint32*)((uint8*)&T$1 + 24ll) );
				}
				label$56:;
			}
			label$55:;
			label$54:;
		}
		label$41:;
		goto label$39;
		label$40:;
		if( ARGTB$1 == (struct $11LEXPP_ARGTB*)0ull ) goto label$59;
		{
			{
				struct $9LEXPP_ARG* TMP$90$4;
				TMP$90$4 = (struct $9LEXPP_ARG*)((uint8*)ARGTB$1 + (NUM$1 * 24ll));
				if( *(uint8**)TMP$90$4 == (uint8*)0ull ) goto label$61;
				{
					int64 vr$46 = fb_StrLen( *(void**)TMP$90$4, 0ll );
					if( ((int64)-((int64)*(uint8*)*(uint8**)TMP$90$4 == 32ll) | (int64)-((int64)*(uint8*)((uint8*)((uint8*)*(uint8**)TMP$90$4 + vr$46) + -1ll) == 32ll)) == 0ll ) goto label$63;
					{
						FBSTRING TMP$91$6;
						__builtin_memset( &TMP$91$6, 0, 24ll );
						FBSTRING* vr$54 = fb_StrAllocTempDescZ( *(uint8**)TMP$90$4 );
						FBSTRING* vr$55 = fb_TRIM( vr$54 );
						FBSTRING* vr$57 = fb_StrAssign( (void*)&TMP$91$6, -1ll, (void*)vr$55, -1ll, 0 );
						DZSTRASSIGN( (struct $8DZSTRING*)TMP$90$4, *(uint8**)&TMP$91$6 );
						fb_StrDelete( &TMP$91$6 );
					}
					label$63:;
					label$62:;
				}
				label$61:;
				label$60:;
			}
		}
		label$59:;
		label$58:;
		if( PRNTCNT$1 != 0ll ) goto label$65;
		{
			if( NEXTPARAM$1 == (struct $11FB_DEFPARAM*)0ull ) goto label$67;
			{
				if( ((int64)-(*(struct $11FB_DEFPARAM**)((uint8*)NEXTPARAM$1 + 16ll) != (struct $11FB_DEFPARAM*)0ull) | ~IS_VARIADIC$1) == 0ll ) goto label$69;
				{
					HREPORTMACROERROR( S$1, 1ll );
				}
				label$69:;
				label$68:;
				label$70:;
				{
					NUM$1 = NUM$1 + 1ll;
					DZSTRZERO( (struct $8DZSTRING*)((uint8*)ARGTB$1 + (NUM$1 * 24ll)) );
				}
				label$72:;
				if( NUM$1 < (*(int64*)((uint8*)S$1 + 88ll) + -1ll) ) goto label$70;
				label$71:;
			}
			label$67:;
			label$66:;
			goto label$33;
		}
		label$65:;
		label$64:;
		if( NEXTPARAM$1 != (struct $11FB_DEFPARAM*)0ull ) goto label$74;
		{
			HREPORTMACROERROR( S$1, 1ll );
			HSKIPUNTIL( 41ll, -1ll, 62ll, 0ll );
			goto label$33;
		}
		label$74:;
		label$73:;
		PARAM$1 = NEXTPARAM$1;
		NUM$1 = NUM$1 + 1ll;
	}
	label$34:;
	goto label$32;
	label$33:;
	fb_StrAssign( (void*)&TEXT$1, -1ll, (void*)"", 1ll, 0 );
	if( ARGTB$1 == (struct $11LEXPP_ARGTB*)0ull ) goto label$76;
	{
		DT$1 = *(struct $9FB_DEFTOK**)((uint8*)S$1 + 104ll);
		label$77:;
		if( DT$1 == (struct $9FB_DEFTOK*)0ull ) goto label$78;
		{
			{
				uint64 TMP$92$4;
				TMP$92$4 = *(uint64*)DT$1;
				goto label$80;
				label$81:;
				{
					ARGTEXT$1 = *(uint8**)((uint8*)ARGTB$1 + (*(int64*)((uint8*)DT$1 + 8ll) * 24ll));
					if( ARGTEXT$1 == (uint8*)0ull ) goto label$83;
					{
						FBSTRING TMP$93$6;
						__builtin_memset( &TMP$93$6, 0, 24ll );
						FBSTRING* vr$87 = fb_StrConcat( &TMP$93$6, (void*)&TEXT$1, -1ll, (void*)ARGTEXT$1, 0ll );
						FBSTRING* vr$88 = fb_StrAssign( (void*)&TEXT$1, -1ll, (void*)vr$87, -1ll, 0 );
					}
					label$83:;
					label$82:;
				}
				goto label$79;
				label$84:;
				{
					ARGTEXT$1 = *(uint8**)((uint8*)ARGTB$1 + (*(int64*)((uint8*)DT$1 + 8ll) * 24ll));
					if( ARGTEXT$1 == (uint8*)0ull ) goto label$86;
					{
						FBSTRING* vr$93 = fb_StrConcatAssign( (void*)&TEXT$1, -1ll, (void*)"$\x22", 3ll, 0 );
						FBSTRING* vr$94 = HREPLACE( ARGTEXT$1, (uint8*)"\x22", (uint8*)"\x22\x22" );
						FBSTRING* vr$95 = fb_StrConcatAssign( (void*)&TEXT$1, -1ll, (void*)vr$94, -1ll, 0 );
						FBSTRING* vr$96 = fb_StrConcatAssign( (void*)&TEXT$1, -1ll, (void*)"\x22", 2ll, 0 );
					}
					goto label$85;
					label$86:;
					{
						FBSTRING* vr$97 = fb_StrConcatAssign( (void*)&TEXT$1, -1ll, (void*)"\x22\x22", 3ll, 0 );
					}
					label$85:;
				}
				goto label$79;
				label$87:;
				{
					FBSTRING TMP$99$5;
					__builtin_memset( &TMP$99$5, 0, 24ll );
					FBSTRING* vr$101 = fb_StrConcat( &TMP$99$5, (void*)&TEXT$1, -1ll, *(void**)((uint8*)DT$1 + 8ll), 0ll );
					FBSTRING* vr$102 = fb_StrAssign( (void*)&TEXT$1, -1ll, (void*)vr$101, -1ll, 0 );
				}
				goto label$79;
				label$88:;
				{
					FBSTRING TMP$100$5;
					FBSTRING* vr$104 = fb_WstrToStr( *(uint32**)((uint8*)DT$1 + 8ll) );
					__builtin_memset( &TMP$100$5, 0, 24ll );
					FBSTRING* vr$107 = fb_StrConcat( &TMP$100$5, (void*)&TEXT$1, -1ll, (void*)vr$104, -1ll );
					FBSTRING* vr$108 = fb_StrAssign( (void*)&TEXT$1, -1ll, (void*)vr$107, -1ll, 0 );
				}
				goto label$79;
				label$80:;
				static const void* tmp$139[4ll] = {
					&&label$81,
					&&label$84,
					&&label$87,
					&&label$88,
				};
				if( TMP$92$4 > 3ll ) goto label$79;
				goto *tmp$139[TMP$92$4 - 0ll];
				label$79:;
			}
			DT$1 = *(struct $9FB_DEFTOK**)((uint8*)DT$1 + 24ll);
		}
		goto label$77;
		label$78:;
		label$89:;
		if( NUM$1 <= 0ll ) goto label$90;
		{
			NUM$1 = NUM$1 + -1ll;
			DZSTRASSIGN( (struct $8DZSTRING*)((uint8*)ARGTB$1 + (NUM$1 * 24ll)), (uint8*)0ull );
		}
		goto label$89;
		label$90:;
		LISTDELNODE( (struct $5TLIST*)((uint8*)&PP$ + 304ll), (void*)ARGTB$1 );
	}
	label$76:;
	label$75:;
	if( *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16752ll) != 0ll ) goto label$92;
	{
		DZSTRASSIGN( (struct $8DZSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16768ll), *(uint8**)&TEXT$1 );
	}
	goto label$91;
	label$92:;
	{
		FBSTRING TMP$101$2;
		FBSTRING TMP$102$2;
		__builtin_memset( &TMP$102$2, 0, 24ll );
		__builtin_memset( &TMP$101$2, 0, 24ll );
		FBSTRING* vr$124 = fb_StrConcat( &TMP$101$2, (void*)&TEXT$1, -1ll, *(void**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16760ll), 0ll );
		FBSTRING* vr$126 = fb_StrAssign( (void*)&TMP$102$2, -1ll, (void*)vr$124, -1ll, 0 );
		DZSTRASSIGN( (struct $8DZSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16768ll), *(uint8**)&TMP$102$2 );
		fb_StrDelete( &TMP$102$2 );
	}
	label$91:;
	int64 vr$130 = fb_StrLen( (void*)&TEXT$1, -1ll );
	fb$result$1 = vr$130;
	label$25:;
	return fb$result$1;
}

static int64 HLOADDEFINE( struct $8FBSYMBOL* S$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$93:;
	static FBSTRING TEXT$1;
	int64 LGT$1;
	fb$result$1 = 0ll;
	if( *(int64*)((uint8*)S$1 + 88ll) <= 0ll ) goto label$96;
	{
		int64 vr$3 = HLOADMACRO( S$1 );
		LGT$1 = vr$3;
		if( LGT$1 != -1ll ) goto label$98;
		{
			goto label$94;
		}
		label$98:;
		label$97:;
	}
	goto label$95;
	label$96:;
	{
		if( *(tmp$26*)((uint8*)S$1 + 128ll) == (tmp$26)0ull ) goto label$100;
		{
			if( (int64)-((*(int64*)((uint8*)S$1 + 120ll) & 1ll) != 0ll) != 0ll ) goto label$102;
			{
				FBSTRING TMP$103$4;
				FBSTRING TMP$104$4;
				FBSTRING* vr$11 = (*(tmp$26*)((uint8*)S$1 + 128ll))(  );
				__builtin_memset( &TMP$103$4, 0, 24ll );
				FBSTRING* vr$15 = fb_StrConcat( &TMP$103$4, (void*)"$\x22", 3ll, (void*)vr$11, -1ll );
				__builtin_memset( &TMP$104$4, 0, 24ll );
				FBSTRING* vr$18 = fb_StrConcat( &TMP$104$4, (void*)vr$15, -1ll, (void*)"\x22", 2ll );
				FBSTRING* vr$19 = fb_StrAssign( (void*)&TEXT$1, -1ll, (void*)vr$18, -1ll, 0 );
			}
			goto label$101;
			label$102:;
			{
				FBSTRING* vr$20 = (*(tmp$26*)((uint8*)S$1 + 128ll))(  );
				FBSTRING* vr$22 = fb_StrAssign( (void*)&TEXT$1, -1ll, (void*)vr$20, -1ll, 0 );
			}
			label$101:;
			if( *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16752ll) != 0ll ) goto label$104;
			{
				DZSTRASSIGN( (struct $8DZSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16768ll), *(uint8**)&TEXT$1 );
			}
			goto label$103;
			label$104:;
			{
				FBSTRING TMP$105$4;
				FBSTRING TMP$106$4;
				__builtin_memset( &TMP$106$4, 0, 24ll );
				__builtin_memset( &TMP$105$4, 0, 24ll );
				FBSTRING* vr$31 = fb_StrConcat( &TMP$105$4, (void*)&TEXT$1, -1ll, *(void**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16760ll), 0ll );
				FBSTRING* vr$33 = fb_StrAssign( (void*)&TMP$106$4, -1ll, (void*)vr$31, -1ll, 0 );
				DZSTRASSIGN( (struct $8DZSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16768ll), *(uint8**)&TMP$106$4 );
				fb_StrDelete( &TMP$106$4 );
			}
			label$103:;
			int64 vr$37 = fb_StrLen( (void*)&TEXT$1, -1ll );
			LGT$1 = vr$37;
		}
		goto label$99;
		label$100:;
		{
			if( *(int64*)((uint8*)S$1 + 112ll) == 0ll ) goto label$106;
			{
				uint64 vr$40 = LEXCURRENTCHAR( -1ll );
				if( vr$40 == 40ull ) goto label$108;
				{
					goto label$94;
				}
				label$108:;
				label$107:;
				LEXEATCHAR(  );
				uint64 vr$42 = LEXCURRENTCHAR( -1ll );
				if( vr$42 == 41ull ) goto label$110;
				{
					ERRREPORT( 7ll, 0ll, (uint8*)0ull );
				}
				goto label$109;
				label$110:;
				{
					LEXEATCHAR(  );
				}
				label$109:;
			}
			label$106:;
			label$105:;
			if( (*(int64*)((uint8*)S$1 + 48ll) & 511ll) == 6ll ) goto label$112;
			{
				if( *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16752ll) != 0ll ) goto label$114;
				{
					DZSTRASSIGN( (struct $8DZSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16768ll), *(uint8**)((uint8*)S$1 + 104ll) );
				}
				goto label$113;
				label$114:;
				{
					FBSTRING TMP$107$5;
					FBSTRING TMP$108$5;
					__builtin_memset( &TMP$108$5, 0, 24ll );
					__builtin_memset( &TMP$107$5, 0, 24ll );
					FBSTRING* vr$57 = fb_StrConcat( &TMP$107$5, *(void**)((uint8*)S$1 + 104ll), 0ll, *(void**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16760ll), 0ll );
					FBSTRING* vr$59 = fb_StrAssign( (void*)&TMP$108$5, -1ll, (void*)vr$57, -1ll, 0 );
					DZSTRASSIGN( (struct $8DZSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16768ll), *(uint8**)&TMP$108$5 );
					fb_StrDelete( &TMP$108$5 );
				}
				label$113:;
			}
			goto label$111;
			label$112:;
			{
				if( *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16752ll) != 0ll ) goto label$116;
				{
					DZSTRASSIGNW( (struct $8DZSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16768ll), *(uint32**)((uint8*)S$1 + 104ll) );
				}
				goto label$115;
				label$116:;
				{
					FBSTRING TMP$109$5;
					FBSTRING TMP$110$5;
					__builtin_memset( &TMP$110$5, 0, 24ll );
					FBSTRING* vr$71 = fb_WstrToStr( *(uint32**)((uint8*)S$1 + 104ll) );
					__builtin_memset( &TMP$109$5, 0, 24ll );
					FBSTRING* vr$74 = fb_StrConcat( &TMP$109$5, (void*)vr$71, -1ll, *(void**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16760ll), 0ll );
					FBSTRING* vr$76 = fb_StrAssign( (void*)&TMP$110$5, -1ll, (void*)vr$74, -1ll, 0 );
					DZSTRASSIGN( (struct $8DZSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16768ll), *(uint8**)&TMP$110$5 );
					fb_StrDelete( &TMP$110$5 );
				}
				label$115:;
			}
			label$111:;
			LGT$1 = *(int64*)((uint8*)S$1 + 72ll);
		}
		label$99:;
	}
	label$95:;
	*(uint8**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16760ll) = *(uint8**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16768ll);
	*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16752ll) = *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16752ll) + LGT$1;
	*(uint64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16696ll) = 18446744073709551615ull;
	fb$result$1 = -1ll;
	label$94:;
	return fb$result$1;
}

static int64 HLOADMACROW( struct $8FBSYMBOL* S$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$117:;
	struct $11FB_DEFPARAM* PARAM$1;
	struct $11FB_DEFPARAM* NEXTPARAM$1;
	struct $9FB_DEFTOK* DT$1;
	struct $7FBTOKEN T$1;
	struct $11LEXPP_ARGTB* ARGTB$1;
	int64 PRNTCNT$1;
	int64 LGT$1;
	int64 NUM$1;
	int64 REACHED_VARARG$1;
	int64 IS_VARIADIC$1;
	uint32* ARGTEXT$1;
	static struct $8DWSTRING TEXT$1;
	fb$result$1 = -1ll;
	uint64 vr$1 = LEXCURRENTCHAR( -1ll );
	if( vr$1 == 40ull ) goto label$120;
	{
		goto label$118;
	}
	label$120:;
	label$119:;
	int64 vr$3 = ISMACROALLOWED( S$1 );
	if( vr$3 != 0ll ) goto label$122;
	{
		goto label$118;
	}
	label$122:;
	label$121:;
	LEXEATCHAR(  );
	PARAM$1 = *(struct $11FB_DEFPARAM**)((uint8*)S$1 + 96ll);
	if( PARAM$1 == (struct $11FB_DEFPARAM*)0ull ) goto label$124;
	{
		void* vr$8 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&PP$ + 304ll) );
		ARGTB$1 = (struct $11LEXPP_ARGTB*)vr$8;
	}
	goto label$123;
	label$124:;
	{
		ARGTB$1 = (struct $11LEXPP_ARGTB*)0ull;
	}
	label$123:;
	PRNTCNT$1 = 1ll;
	REACHED_VARARG$1 = 0ll;
	IS_VARIADIC$1 = (int64)-((*(int64*)((uint8*)S$1 + 120ll) & 4ll) != 0ll);
	NUM$1 = 0ll;
	label$125:;
	{
		if( ARGTB$1 == (struct $11LEXPP_ARGTB*)0ull ) goto label$129;
		{
			DWSTRZERO( (struct $8DWSTRING*)((uint8*)ARGTB$1 + (NUM$1 * 24ll)) );
		}
		label$129:;
		label$128:;
		NEXTPARAM$1 = *(struct $11FB_DEFPARAM**)((uint8*)PARAM$1 + 16ll);
		if( NEXTPARAM$1 != (struct $11FB_DEFPARAM*)0ull ) goto label$131;
		{
			REACHED_VARARG$1 = IS_VARIADIC$1;
		}
		label$131:;
		label$130:;
		label$132:;
		{
			LEXNEXTTOKEN( &T$1, 92ll );
			{
				uint64 TMP$111$4;
				TMP$111$4 = *(uint64*)&T$1;
				goto label$136;
				label$137:;
				{
					PRNTCNT$1 = PRNTCNT$1 + 1ll;
				}
				goto label$135;
				label$138:;
				{
					PRNTCNT$1 = PRNTCNT$1 + -1ll;
					if( PRNTCNT$1 != 0ll ) goto label$140;
					{
						goto label$133;
					}
					label$140:;
					label$139:;
				}
				goto label$135;
				label$141:;
				{
					if( PRNTCNT$1 != 1ll ) goto label$143;
					{
						if( REACHED_VARARG$1 != 0ll ) goto label$145;
						{
							goto label$133;
						}
						label$145:;
						label$144:;
					}
					label$143:;
					label$142:;
				}
				goto label$135;
				label$146:;
				{
					HREPORTMACROERROR( S$1, 7ll );
					PRNTCNT$1 = 0ll;
					goto label$133;
				}
				goto label$135;
				label$136:;
				static const void* tmp$140[218ll] = {
					&&label$137,
					&&label$138,
					&&label$135,
					&&label$135,
					&&label$141,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$135,
					&&label$146,
					&&label$146,
				};
				if( TMP$111$4 < 40ll ) goto label$135;
				if( TMP$111$4 > 257ll ) goto label$135;
				goto *tmp$140[TMP$111$4 - 40ll];
				label$135:;
			}
			if( ARGTB$1 == (struct $11LEXPP_ARGTB*)0ull ) goto label$148;
			{
				if( *(int64*)((uint8*)&T$1 + 16ll) == 6ll ) goto label$150;
				{
					DWSTRCONCATASSIGNA( (struct $8DWSTRING*)((uint8*)ARGTB$1 + (NUM$1 * 24ll)), (uint8*)((uint8*)&T$1 + 24ll) );
				}
				goto label$149;
				label$150:;
				{
					DWSTRCONCATASSIGN( (struct $8DWSTRING*)((uint8*)ARGTB$1 + (NUM$1 * 24ll)), (uint32*)((uint8*)&T$1 + 24ll) );
				}
				label$149:;
			}
			label$148:;
			label$147:;
		}
		label$134:;
		goto label$132;
		label$133:;
		if( ARGTB$1 == (struct $11LEXPP_ARGTB*)0ull ) goto label$152;
		{
			{
				struct $9LEXPP_ARG* TMP$112$4;
				TMP$112$4 = (struct $9LEXPP_ARG*)((uint8*)ARGTB$1 + (NUM$1 * 24ll));
				if( *(uint32**)TMP$112$4 == (uint32*)0ull ) goto label$154;
				{
					int64 vr$46 = fb_WstrLen( *(uint32**)TMP$112$4 );
					if( ((int64)-((int64)*(uint32*)*(uint32**)TMP$112$4 == 32ll) | (int64)-((int64)*(uint32*)((uint8*)((uint8*)*(uint32**)TMP$112$4 + (vr$46 << 2ll)) + -4ll) == 32ll)) == 0ll ) goto label$156;
					{
						uint32* TMP$113$6;
						uint32* vr$54 = fb_WstrTrim( *(uint32**)TMP$112$4 );
						TMP$113$6 = vr$54;
						DWSTRASSIGN( (struct $8DWSTRING*)TMP$112$4, TMP$113$6 );
						fb_WstrDelete( TMP$113$6 );
					}
					label$156:;
					label$155:;
				}
				label$154:;
				label$153:;
			}
		}
		label$152:;
		label$151:;
		if( PRNTCNT$1 != 0ll ) goto label$158;
		{
			if( NEXTPARAM$1 == (struct $11FB_DEFPARAM*)0ull ) goto label$160;
			{
				if( ((int64)-(*(struct $11FB_DEFPARAM**)((uint8*)NEXTPARAM$1 + 16ll) != (struct $11FB_DEFPARAM*)0ull) | ~IS_VARIADIC$1) == 0ll ) goto label$162;
				{
					HREPORTMACROERROR( S$1, 1ll );
				}
				label$162:;
				label$161:;
				label$163:;
				{
					NUM$1 = NUM$1 + 1ll;
					DWSTRZERO( (struct $8DWSTRING*)((uint8*)ARGTB$1 + (NUM$1 * 24ll)) );
				}
				label$165:;
				if( NUM$1 < (*(int64*)((uint8*)S$1 + 88ll) + -1ll) ) goto label$163;
				label$164:;
			}
			label$160:;
			label$159:;
			goto label$126;
		}
		label$158:;
		label$157:;
		if( NEXTPARAM$1 != (struct $11FB_DEFPARAM*)0ull ) goto label$167;
		{
			HREPORTMACROERROR( S$1, 1ll );
			HSKIPUNTIL( 41ll, -1ll, 62ll, 0ll );
			goto label$126;
		}
		label$167:;
		label$166:;
		PARAM$1 = NEXTPARAM$1;
		NUM$1 = NUM$1 + 1ll;
	}
	label$127:;
	goto label$125;
	label$126:;
	DWSTRASSIGN( &TEXT$1, (uint32*)0ull );
	if( ARGTB$1 == (struct $11LEXPP_ARGTB*)0ull ) goto label$169;
	{
		DT$1 = *(struct $9FB_DEFTOK**)((uint8*)S$1 + 104ll);
		label$170:;
		if( DT$1 == (struct $9FB_DEFTOK*)0ull ) goto label$171;
		{
			{
				uint64 TMP$114$4;
				TMP$114$4 = *(uint64*)DT$1;
				goto label$173;
				label$174:;
				{
					ARGTEXT$1 = *(uint32**)((uint8*)ARGTB$1 + (*(int64*)((uint8*)DT$1 + 8ll) * 24ll));
					if( ARGTEXT$1 == (uint32*)0ull ) goto label$176;
					{
						DWSTRCONCATASSIGN( &TEXT$1, ARGTEXT$1 );
					}
					label$176:;
					label$175:;
				}
				goto label$172;
				label$177:;
				{
					ARGTEXT$1 = *(uint32**)((uint8*)ARGTB$1 + (*(int64*)((uint8*)DT$1 + 8ll) * 24ll));
					if( ARGTEXT$1 == (uint32*)0ull ) goto label$179;
					{
						DWSTRCONCATASSIGN( &TEXT$1, (uint32*)L"$\x00000022" );
						uint32* vr$85 = HREPLACEW( ARGTEXT$1, (uint32*)L"\x00000022", (uint32*)L"\x00000022\x00000022" );
						DWSTRCONCATASSIGN( &TEXT$1, vr$85 );
						DWSTRCONCATASSIGN( &TEXT$1, (uint32*)L"\x00000022" );
					}
					label$179:;
					label$178:;
				}
				goto label$172;
				label$180:;
				{
					DWSTRCONCATASSIGNA( &TEXT$1, *(uint8**)((uint8*)DT$1 + 8ll) );
				}
				goto label$172;
				label$181:;
				{
					DWSTRCONCATASSIGN( &TEXT$1, *(uint32**)((uint8*)DT$1 + 8ll) );
				}
				goto label$172;
				label$173:;
				static const void* tmp$141[4ll] = {
					&&label$174,
					&&label$177,
					&&label$180,
					&&label$181,
				};
				if( TMP$114$4 > 3ll ) goto label$172;
				goto *tmp$141[TMP$114$4 - 0ll];
				label$172:;
			}
			DT$1 = *(struct $9FB_DEFTOK**)((uint8*)DT$1 + 24ll);
		}
		goto label$170;
		label$171:;
		label$182:;
		if( NUM$1 <= 0ll ) goto label$183;
		{
			NUM$1 = NUM$1 + -1ll;
			DWSTRASSIGN( (struct $8DWSTRING*)((uint8*)ARGTB$1 + (NUM$1 * 24ll)), (uint32*)0ull );
		}
		goto label$182;
		label$183:;
		LISTDELNODE( (struct $5TLIST*)((uint8*)&PP$ + 304ll), (void*)ARGTB$1 );
	}
	label$169:;
	label$168:;
	if( *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16752ll) != 0ll ) goto label$185;
	{
		DWSTRASSIGN( (struct $8DWSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16768ll), *(uint32**)&TEXT$1 );
	}
	goto label$184;
	label$185:;
	{
		uint32* TMP$118$2;
		uint32* vr$100 = fb_WstrConcat( *(uint32**)&TEXT$1, *(uint32**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16760ll) );
		TMP$118$2 = vr$100;
		DWSTRASSIGN( (struct $8DWSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16768ll), TMP$118$2 );
		fb_WstrDelete( TMP$118$2 );
	}
	label$184:;
	int64 vr$103 = fb_WstrLen( *(uint32**)&TEXT$1 );
	fb$result$1 = vr$103;
	label$118:;
	return fb$result$1;
}

static int64 HLOADDEFINEW( struct $8FBSYMBOL* S$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$186:;
	static struct $8DWSTRING TEXT$1;
	int64 LGT$1;
	fb$result$1 = 0ll;
	if( *(int64*)((uint8*)S$1 + 88ll) <= 0ll ) goto label$189;
	{
		int64 vr$3 = HLOADMACROW( S$1 );
		LGT$1 = vr$3;
		if( LGT$1 != -1ll ) goto label$191;
		{
			goto label$187;
		}
		label$191:;
		label$190:;
	}
	goto label$188;
	label$189:;
	{
		if( *(tmp$26*)((uint8*)S$1 + 128ll) == (tmp$26)0ull ) goto label$193;
		{
			if( (int64)-((*(int64*)((uint8*)S$1 + 120ll) & 1ll) != 0ll) != 0ll ) goto label$195;
			{
				FBSTRING TMP$119$4;
				FBSTRING TMP$120$4;
				FBSTRING TMP$121$4;
				__builtin_memset( &TMP$121$4, 0, 24ll );
				FBSTRING* vr$12 = (*(tmp$26*)((uint8*)S$1 + 128ll))(  );
				__builtin_memset( &TMP$119$4, 0, 24ll );
				FBSTRING* vr$16 = fb_StrConcat( &TMP$119$4, (void*)"$\x22", 3ll, (void*)vr$12, -1ll );
				__builtin_memset( &TMP$120$4, 0, 24ll );
				FBSTRING* vr$19 = fb_StrConcat( &TMP$120$4, (void*)vr$16, -1ll, (void*)"\x22", 2ll );
				FBSTRING* vr$21 = fb_StrAssign( (void*)&TMP$121$4, -1ll, (void*)vr$19, -1ll, 0 );
				DWSTRASSIGNA( &TEXT$1, *(uint8**)&TMP$121$4 );
				fb_StrDelete( &TMP$121$4 );
			}
			goto label$194;
			label$195:;
			{
				FBSTRING TMP$122$4;
				__builtin_memset( &TMP$122$4, 0, 24ll );
				FBSTRING* vr$24 = (*(tmp$26*)((uint8*)S$1 + 128ll))(  );
				FBSTRING* vr$27 = fb_StrAssign( (void*)&TMP$122$4, -1ll, (void*)vr$24, -1ll, 0 );
				DWSTRASSIGNA( &TEXT$1, *(uint8**)&TMP$122$4 );
				fb_StrDelete( &TMP$122$4 );
			}
			label$194:;
			if( *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16752ll) != 0ll ) goto label$197;
			{
				DWSTRASSIGN( (struct $8DWSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16768ll), *(uint32**)&TEXT$1 );
			}
			goto label$196;
			label$197:;
			{
				uint32* TMP$123$4;
				uint32* vr$34 = fb_WstrConcat( *(uint32**)&TEXT$1, *(uint32**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16760ll) );
				TMP$123$4 = vr$34;
				DWSTRASSIGN( (struct $8DWSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16768ll), TMP$123$4 );
				fb_WstrDelete( TMP$123$4 );
			}
			label$196:;
			int64 vr$37 = fb_WstrLen( *(uint32**)&TEXT$1 );
			LGT$1 = vr$37;
		}
		goto label$192;
		label$193:;
		{
			if( *(int64*)((uint8*)S$1 + 112ll) == 0ll ) goto label$199;
			{
				uint64 vr$40 = LEXCURRENTCHAR( -1ll );
				if( vr$40 == 40ull ) goto label$201;
				{
					goto label$187;
				}
				label$201:;
				label$200:;
				LEXEATCHAR(  );
				uint64 vr$42 = LEXCURRENTCHAR( -1ll );
				if( vr$42 == 41ull ) goto label$203;
				{
					ERRREPORT( 7ll, 0ll, (uint8*)0ull );
				}
				goto label$202;
				label$203:;
				{
					LEXEATCHAR(  );
				}
				label$202:;
			}
			label$199:;
			label$198:;
			if( (*(int64*)((uint8*)S$1 + 48ll) & 511ll) == 6ll ) goto label$205;
			{
				if( *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16752ll) != 0ll ) goto label$207;
				{
					DWSTRASSIGNA( (struct $8DWSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16768ll), *(uint8**)((uint8*)S$1 + 104ll) );
				}
				goto label$206;
				label$207:;
				{
					uint32* TMP$124$5;
					uint32* TMP$125$5;
					uint32* vr$54 = fb_StrToWstr( *(uint8**)((uint8*)S$1 + 104ll) );
					TMP$124$5 = vr$54;
					uint32* vr$55 = fb_WstrConcat( TMP$124$5, *(uint32**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16760ll) );
					TMP$125$5 = vr$55;
					DWSTRASSIGN( (struct $8DWSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16768ll), TMP$125$5 );
					fb_WstrDelete( TMP$125$5 );
					fb_WstrDelete( TMP$124$5 );
				}
				label$206:;
			}
			goto label$204;
			label$205:;
			{
				if( *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16752ll) != 0ll ) goto label$209;
				{
					DWSTRASSIGN( (struct $8DWSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16768ll), *(uint32**)((uint8*)S$1 + 104ll) );
				}
				goto label$208;
				label$209:;
				{
					uint32* TMP$126$5;
					uint32* vr$65 = fb_WstrConcat( *(uint32**)((uint8*)S$1 + 104ll), *(uint32**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16760ll) );
					TMP$126$5 = vr$65;
					DWSTRASSIGN( (struct $8DWSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16768ll), TMP$126$5 );
					fb_WstrDelete( TMP$126$5 );
				}
				label$208:;
			}
			label$204:;
			LGT$1 = *(int64*)((uint8*)S$1 + 72ll);
		}
		label$192:;
	}
	label$188:;
	*(uint32**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16760ll) = *(uint32**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16768ll);
	*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16752ll) = *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16752ll) + LGT$1;
	fb$result$1 = -1ll;
	label$187:;
	return fb$result$1;
}

static struct $9FB_DEFTOK* HRTRIMMACROTEXT( struct $9FB_DEFTOK* TOKHEAD$1, struct $9FB_DEFTOK* TOKTAIL$1 )
{
	struct $9FB_DEFTOK* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$220:;
	label$222:;
	if( TOKTAIL$1 == (struct $9FB_DEFTOK*)0ull ) goto label$223;
	{
		if( *(int64*)TOKTAIL$1 == 2ll ) goto label$225;
		{
			goto label$223;
		}
		label$225:;
		label$224:;
		{
			uint64 TMP$127$3;
			TMP$127$3 = (uint64)*(uint8*)*(uint8**)((uint8*)TOKTAIL$1 + 8ll);
			goto label$227;
			label$228:;
			{
				struct $9FB_DEFTOK* vr$7 = SYMBDELDEFINETOK( TOKTAIL$1 );
				TOKTAIL$1 = vr$7;
			}
			goto label$226;
			label$229:;
			{
				goto label$223;
			}
			goto label$226;
			label$227:;
			static const void* tmp$142[24ll] = {
				&&label$228,
				&&label$228,
				&&label$229,
				&&label$229,
				&&label$229,
				&&label$229,
				&&label$229,
				&&label$229,
				&&label$229,
				&&label$229,
				&&label$229,
				&&label$229,
				&&label$229,
				&&label$229,
				&&label$229,
				&&label$229,
				&&label$229,
				&&label$229,
				&&label$229,
				&&label$229,
				&&label$229,
				&&label$229,
				&&label$229,
				&&label$228,
			};
			if( TMP$127$3 < 9ll ) goto label$229;
			if( TMP$127$3 > 32ll ) goto label$229;
			goto *tmp$142[TMP$127$3 - 9ll];
			label$226:;
		}
	}
	goto label$222;
	label$223:;
	if( TOKTAIL$1 != (struct $9FB_DEFTOK*)0ull ) goto label$231;
	{
		fb$result$1 = (struct $9FB_DEFTOK*)0ull;
	}
	goto label$230;
	label$231:;
	{
		fb$result$1 = TOKHEAD$1;
	}
	label$230:;
	label$221:;
	return fb$result$1;
}

static struct $9FB_DEFTOK* HREADMACROTEXT( int64 ARGS$1, struct $11FB_DEFPARAM* PARAMHEAD$1, int64 ISMULTILINE$1 )
{
	struct $9FB_DEFTOK* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$232:;
	static uint8 ARG$1[129];
	struct $11FB_DEFPARAM* PARAM$1;
	struct $9FB_DEFTOK* TOKTAIL$1;
	TOKTAIL$1 = (struct $9FB_DEFTOK*)0ull;
	struct $9FB_DEFTOK* TOKHEAD$1;
	TOKHEAD$1 = (struct $9FB_DEFTOK*)0ull;
	int64 ADDQUOTES$1;
	int64 NESTEDCNT$1;
	NESTEDCNT$1 = 0ll;
	label$234:;
	{
		ADDQUOTES$1 = 0ll;
		{
			uint64 TMP$128$3;
			int64 vr$1 = LEXGETTOKEN( 62ll );
			TMP$128$3 = (uint64)vr$1;
			goto label$238;
			label$239:;
			{
				if( ISMULTILINE$1 == 0ll ) goto label$241;
				{
					ERRREPORT( 133ll, 0ll, (uint8*)0ull );
				}
				label$241:;
				label$240:;
				goto label$235;
			}
			goto label$237;
			label$242:;
			{
				if( ISMULTILINE$1 != 0ll ) goto label$244;
				{
					goto label$235;
				}
				label$244:;
				label$243:;
				if( TOKHEAD$1 == (struct $9FB_DEFTOK*)0ull ) goto label$246;
				{
					struct $9FB_DEFTOK* vr$5 = SYMBADDDEFINETOK( TOKTAIL$1, 2ll );
					TOKTAIL$1 = vr$5;
					ZSTRASSIGN( (uint8**)((uint8*)TOKTAIL$1 + 8ll), (uint8*)"\x0A" );
				}
				label$246:;
				label$245:;
				LEXSKIPTOKEN( 62ll );
				goto label$236;
			}
			goto label$237;
			label$247:;
			{
				if( ISMULTILINE$1 != 0ll ) goto label$249;
				{
					goto label$235;
				}
				label$249:;
				label$248:;
				label$250:;
				{
					LEXSKIPTOKEN( 62ll );
					{
						int64 TMP$130$6;
						int64 vr$9 = LEXGETTOKEN( 62ll );
						TMP$130$6 = vr$9;
						if( TMP$130$6 == 257ll ) goto label$255;
						label$256:;
						if( TMP$130$6 != 256ll ) goto label$254;
						label$255:;
						{
							goto label$251;
						}
						label$254:;
						label$253:;
					}
				}
				label$252:;
				goto label$250;
				label$251:;
				goto label$236;
			}
			goto label$237;
			label$257:;
			{
				{
					int64 TMP$131$5;
					int64 vr$12 = LEXGETLOOKAHEAD( 1ll, 314ll );
					TMP$131$5 = vr$12;
					if( TMP$131$5 != 35ll ) goto label$259;
					label$260:;
					{
						LEXSKIPTOKEN( 62ll );
						LEXSKIPTOKEN( 62ll );
						goto label$236;
					}
					goto label$258;
					label$259:;
					if( TMP$131$5 != 274ll ) goto label$261;
					label$262:;
					{
						if( ISMULTILINE$1 == 0ll ) goto label$264;
						{
							NESTEDCNT$1 = NESTEDCNT$1 + 1ll;
						}
						label$264:;
						label$263:;
					}
					goto label$258;
					label$261:;
					if( TMP$131$5 != 275ll ) goto label$265;
					label$266:;
					{
						if( ISMULTILINE$1 == 0ll ) goto label$268;
						{
							if( NESTEDCNT$1 != 0ll ) goto label$270;
							{
								LEXSKIPTOKEN( 62ll );
								LEXSKIPTOKEN( 0ll );
								struct $9FB_DEFTOK* vr$20 = HRTRIMMACROTEXT( TOKHEAD$1, TOKTAIL$1 );
								TOKHEAD$1 = vr$20;
								goto label$235;
							}
							label$270:;
							label$269:;
							NESTEDCNT$1 = NESTEDCNT$1 + -1ll;
						}
						label$268:;
						label$267:;
					}
					goto label$258;
					label$265:;
					if( TMP$131$5 != 265ll ) goto label$271;
					label$272:;
					{
						LEXSKIPTOKEN( 62ll );
						ADDQUOTES$1 = -1ll;
					}
					label$271:;
					label$258:;
				}
			}
			goto label$237;
			label$273:;
			{
				if( TOKHEAD$1 == (struct $9FB_DEFTOK*)0ull ) goto label$275;
				{
					struct $9FB_DEFTOK* vr$24 = SYMBADDDEFINETOK( TOKTAIL$1, 2ll );
					TOKTAIL$1 = vr$24;
					ZSTRASSIGN( (uint8**)((uint8*)TOKTAIL$1 + 8ll), (uint8*)" " );
				}
				label$275:;
				label$274:;
				LEXSKIPTOKEN( 62ll );
				goto label$236;
			}
			goto label$237;
			label$238:;
			static const void* tmp$143[252ll] = {
				&&label$273,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$273,
				&&label$237,
				&&label$237,
				&&label$257,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$237,
				&&label$239,
				&&label$242,
				&&label$237,
				&&label$247,
				&&label$247,
			};
			if( TMP$128$3 < 9ll ) goto label$237;
			if( TMP$128$3 > 260ll ) goto label$237;
			goto *tmp$143[TMP$128$3 - 9ll];
			label$237:;
		}
		{
			uint64 TMP$133$3;
			int64 vr$27 = LEXGETCLASS( 62ll );
			TMP$133$3 = (uint64)vr$27;
			goto label$277;
			label$278:;
			{
				if( *(int64*)((uint8*)&ENV$ + 768ll) != 0ll ) goto label$280;
				{
					struct $9FB_DEFTOK* vr$29 = SYMBADDDEFINETOK( TOKTAIL$1, 2ll );
					TOKTAIL$1 = vr$29;
					if( TOKHEAD$1 != (struct $9FB_DEFTOK*)0ull ) goto label$282;
					{
						TOKHEAD$1 = TOKTAIL$1;
					}
					label$282:;
					label$281:;
					uint8* vr$31 = LEXGETTEXT(  );
					ZSTRASSIGN( (uint8**)((uint8*)TOKTAIL$1 + 8ll), vr$31 );
				}
				goto label$279;
				label$280:;
				{
					struct $9FB_DEFTOK* vr$34 = SYMBADDDEFINETOK( TOKTAIL$1, 3ll );
					TOKTAIL$1 = vr$34;
					if( TOKHEAD$1 != (struct $9FB_DEFTOK*)0ull ) goto label$284;
					{
						TOKHEAD$1 = TOKTAIL$1;
					}
					label$284:;
					label$283:;
					WSTRASSIGN( (uint32**)((uint8*)TOKTAIL$1 + 8ll), (uint32*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 24ll) );
				}
				label$279:;
				LEXSKIPTOKEN( 62ll );
			}
			goto label$276;
			label$285:;
			{
				struct $9FB_DEFTOK* vr$41 = SYMBADDDEFINETOK( TOKTAIL$1, 2ll );
				TOKTAIL$1 = vr$41;
				if( TOKHEAD$1 != (struct $9FB_DEFTOK*)0ull ) goto label$287;
				{
					TOKHEAD$1 = TOKTAIL$1;
				}
				label$287:;
				label$286:;
				uint8* vr$43 = LEXGETTEXT(  );
				FBSTRING* vr$44 = fb_StrAllocTempDescZ( vr$43 );
				FBSTRING* vr$45 = fb_StrUcase2( vr$44, 0 );
				fb_StrAssign( (void*)ARG$1, 129ll, (void*)vr$45, -1ll, 0 );
				void* vr$47 = HASHLOOKUP( (struct $5THASH*)((uint8*)&SYMB$ + 197464ll), (uint8*)ARG$1 );
				PARAM$1 = (struct $11FB_DEFPARAM*)vr$47;
				if( PARAM$1 == (struct $11FB_DEFPARAM*)0ull ) goto label$289;
				{
					if( ADDQUOTES$1 != 0ll ) goto label$291;
					{
						*($14FB_DEFTOK_TYPE*)TOKTAIL$1 = 0ll;
					}
					goto label$290;
					label$291:;
					{
						*($14FB_DEFTOK_TYPE*)TOKTAIL$1 = 1ll;
					}
					label$290:;
					*(int64*)((uint8*)TOKTAIL$1 + 8ll) = *(int64*)((uint8*)PARAM$1 + 8ll);
				}
				goto label$288;
				label$289:;
				{
					if( ADDQUOTES$1 == 0ll ) goto label$293;
					{
						ZSTRASSIGN( (uint8**)((uint8*)TOKTAIL$1 + 8ll), (uint8*)"#" );
						uint8* vr$57 = LEXGETTEXT(  );
						ZSTRCONCATASSIGN( (uint8**)((uint8*)TOKTAIL$1 + 8ll), vr$57 );
					}
					goto label$292;
					label$293:;
					{
						uint8* vr$60 = LEXGETTEXT(  );
						ZSTRASSIGN( (uint8**)((uint8*)TOKTAIL$1 + 8ll), vr$60 );
					}
					label$292:;
				}
				label$288:;
				LEXSKIPTOKEN( 62ll );
			}
			goto label$276;
			label$294:;
			{
				struct $9FB_DEFTOK* vr$63 = SYMBADDDEFINETOK( TOKTAIL$1, 2ll );
				TOKTAIL$1 = vr$63;
				if( TOKHEAD$1 != (struct $9FB_DEFTOK*)0ull ) goto label$296;
				{
					TOKHEAD$1 = TOKTAIL$1;
				}
				label$296:;
				label$295:;
				uint8* vr$65 = LEXGETTEXT(  );
				ZSTRASSIGN( (uint8**)((uint8*)TOKTAIL$1 + 8ll), vr$65 );
				LEXSKIPTOKEN( 62ll );
			}
			goto label$276;
			label$277:;
			static const void* tmp$144[5ll] = {
				&&label$285,
				&&label$285,
				&&label$285,
				&&label$294,
				&&label$278,
			};
			if( TMP$133$3 > 4ll ) goto label$294;
			goto *tmp$144[TMP$133$3 - 0ll];
			label$276:;
		}
	}
	label$236:;
	goto label$234;
	label$235:;
	fb$result$1 = TOKHEAD$1;
	label$233:;
	return fb$result$1;
}

static void HREADDEFINETEXT( struct $8FBSYMBOL* SYM$1, uint8* DEFNAME$1, int64 ISARGLESS$1, int64 ISMULTILINE$1 )
{
	label$297:;
	uint8* TEXT$1;
	uint32* TEXTW$1;
	if( *(int64*)((uint8*)&ENV$ + 768ll) != 0ll ) goto label$300;
	{
		uint8* vr$1 = PPREADLITERAL( ISMULTILINE$1 );
		TEXT$1 = vr$1;
		if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$302;
		{
			if( ((int64)-(*(int64*)((uint8*)SYM$1 + 88ll) > 0ll) | (int64)-((*(int64*)((uint8*)SYM$1 + 48ll) & 511ll) != 3ll)) == 0ll ) goto label$304;
			{
				ERRREPORTEX( 4ll, DEFNAME$1, 0ll, 1ll, (uint8*)0ull );
			}
			goto label$303;
			label$304:;
			int32 vr$11 = fb_StrCompare( *(void**)((uint8*)SYM$1 + 104ll), 0ll, (void*)TEXT$1, 0ll );
			if( (int64)vr$11 == 0ll ) goto label$305;
			{
				ERRREPORTEX( 4ll, DEFNAME$1, 0ll, 1ll, (uint8*)0ull );
			}
			label$305:;
			label$303:;
		}
		goto label$301;
		label$302:;
		{
			int64 vr$14 = fb_StrLen( (void*)TEXT$1, 0ll );
			SYMBADDDEFINE( DEFNAME$1, TEXT$1, vr$14, ISARGLESS$1, (tmp$26)0ull, 0ll );
		}
		label$301:;
	}
	goto label$299;
	label$300:;
	{
		uint32* vr$15 = PPREADLITERALW( ISMULTILINE$1 );
		TEXTW$1 = vr$15;
		if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$307;
		{
			if( ((int64)-(*(int64*)((uint8*)SYM$1 + 88ll) > 0ll) | (int64)-((*(int64*)((uint8*)SYM$1 + 48ll) & 511ll) != 6ll)) == 0ll ) goto label$309;
			{
				ERRREPORTEX( 4ll, DEFNAME$1, 0ll, 1ll, (uint8*)0ull );
			}
			goto label$308;
			label$309:;
			int32 vr$25 = fb_WstrCompare( *(uint32**)((uint8*)SYM$1 + 104ll), TEXTW$1 );
			if( (int64)vr$25 == 0ll ) goto label$310;
			{
				ERRREPORTEX( 4ll, DEFNAME$1, 0ll, 1ll, (uint8*)0ull );
			}
			label$310:;
			label$308:;
		}
		goto label$306;
		label$307:;
		{
			int64 vr$28 = fb_WstrLen( TEXTW$1 );
			SYMBADDDEFINEW( DEFNAME$1, TEXTW$1, vr$28, ISARGLESS$1, (tmp$26)0ull, 0ll );
		}
		label$306:;
	}
	label$299:;
	label$298:;
}

static int64 HMATCHPARAMELLIPSIS( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$311:;
	fb$result$1 = 0ll;
	int64 vr$1 = LEXGETTOKEN( 34ll );
	if( vr$1 != 46ll ) goto label$314;
	{
		int64 vr$3 = LEXGETLOOKAHEAD( 1ll, 34ll );
		if( vr$3 != 46ll ) goto label$316;
		{
			int64 vr$5 = LEXGETLOOKAHEAD( 2ll, 34ll );
			if( vr$5 != 46ll ) goto label$318;
			{
				LEXSKIPTOKEN( 34ll );
				LEXSKIPTOKEN( 34ll );
				LEXSKIPTOKEN( 34ll );
				fb$result$1 = -1ll;
			}
			label$318:;
			label$317:;
		}
		label$316:;
		label$315:;
	}
	label$314:;
	label$313:;
	label$312:;
	return fb$result$1;
}

// Total compilation time: 0.03562008857261389 seconds.
