// Compilation of fbc-1.01.0/src/compiler/parser-inlineasm.bas started at 14:16:43 on 02-28-2015

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
struct $10FBSYMCHAIN {
	struct $8FBSYMBOL* SYM;
	struct $10FBSYMCHAIN* NEXT;
	int64 ISIMPORT;
	struct $10FBSYMCHAIN* PREV;
	struct $8HASHITEM* ITEM;
	struct $10FBSYMCHAIN* IMP_NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $10FBSYMCHAIN ) == 48 );
typedef int64 (*tmp$100)( uint8* );
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
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
FBSTRING* fb_WstrAssignToA( void*, int64, uint32*, int32 );
void fb_StrDelete( FBSTRING* );
void fb_WstrDelete( uint32* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
uint32* fb_WstrConcatAW( void*, int64, uint32* );
FBSTRING* fb_StrAllocTempDescZ( uint8* );
FBSTRING* fb_StrLcase2( FBSTRING*, int32 );
static void fb_ctor__parserzinlineasm( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRREPORT( int64, int64, uint8* );
void ASTDELTREE( struct $7ASTNODE* );
struct $7ASTNODE* ASTADD( struct $7ASTNODE* );
FBSTRING* ASTCONSTFLUSHTOSTR( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWLIT( uint8* );
struct $9ASTASMTOK* ASTASMAPPENDTEXT( struct $9ASTASMTOK*, uint8* );
struct $9ASTASMTOK* ASTASMAPPENDSYMB( struct $9ASTASMTOK*, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWASM( struct $9ASTASMTOK* );
struct $7ASTNODE* ASTNEWDBG( int64, int64 );
struct $8FBSYMBOL* ASTGETSTRLITSYMBOL( struct $7ASTNODE* );
struct $8FBSYMBOL* SYMBFINDBYCLASS( struct $10FBSYMCHAIN*, int64 );
struct $8FBSYMBOL* SYMBGETPROCRESULT( struct $8FBSYMBOL* );
FBSTRING* SYMBGETCONSTVALUEASSTR( struct $8FBSYMBOL* );
int64 HMATCH( int64 );
void DZSTRRESET( struct $8DZSTRING* );
typedef int64 $8LEXCHECK;
int64 LEXGETTOKEN( $8LEXCHECK );
int64 LEXGETCLASS( $8LEXCHECK );
uint8* LEXGETTEXT( void );
void LEXSKIPTOKEN( $8LEXCHECK );
int64 CCOMMENT( $8LEXCHECK );
int64 CSTMTSEPARATOR( $8LEXCHECK );
typedef int64 $8FB_IDOPT;
struct $10FBSYMCHAIN* CIDENTIFIER( struct $8FBSYMBOL**, $8FB_IDOPT );
typedef int64 $15FB_CMPSTMT_MASK;
int64 CCOMPSTMTISALLOWED( $15FB_CMPSTMT_MASK );
typedef int64 $8FB_TOKEN;
struct $7ASTNODE* CTYPECONVEXPR( $8FB_TOKEN, int64 );
struct $7ASTNODE* CSTRLITERAL( int64 );
struct $7ASTNODE* CNUMLITERAL( int64 );
struct $7ASTNODE* CMATHFUNCT( $8FB_TOKEN, int64 );
void HSKIPUNTIL( int64, int64, $8LEXCHECK, int64 );
void HSKIPCOMPOUND( int64, int64, $8LEXCHECK );
void CASMCODE( void );
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
struct $8REGCLASS;
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
typedef int64 (*tmp$85)( struct $8REGCLASS*, struct $6IRVREG*, struct $6IRVREG*, uint64 );
typedef int64 (*tmp$86)( struct $8REGCLASS*, int64, struct $6IRVREG*, struct $6IRVREG* );
typedef void (*tmp$87)( struct $8REGCLASS*, int64 );
typedef int64 (*tmp$88)( struct $8REGCLASS*, int64 );
typedef void (*tmp$89)( struct $8REGCLASS*, int64, struct $6IRVREG*, struct $6IRVREG* );
typedef int64 (*tmp$90)( struct $8REGCLASS* );
typedef struct $6IRVREG* (*tmp$91)( struct $8REGCLASS*, int64, struct $6IRVREG** );
typedef void (*tmp$92)( struct $8REGCLASS* );
struct $7REG_REG;
struct $7REG_REG {
	int64 NUM;
	struct $7REG_REG* PREV;
};
__FB_STATIC_ASSERT( sizeof( struct $7REG_REG ) == 16 );
typedef int64 $12REG_SIZEMASK;
struct $10REG_REGCTX {
	struct $7REG_REG* FREETAIL;
	struct $7REG_REG* USEDTAIL;
	int64 FREETB;
	struct $7REG_REG REGTB[8];
	$12REG_SIZEMASK SIZETB[8];
	uint64 NEXTTB[8];
};
__FB_STATIC_ASSERT( sizeof( struct $10REG_REGCTX ) == 280 );
struct $10REG_STKCTX {
	int64 REGTB[8];
	int64 FREGS;
};
__FB_STATIC_ASSERT( sizeof( struct $10REG_STKCTX ) == 72 );
struct $8REGCLASS {
	tmp$85 ENSURE;
	tmp$85 _ALLOCATE;
	tmp$86 ALLOCATEREG;
	tmp$87 FREE;
	tmp$88 ISFREE;
	tmp$89 SETOWNER;
	tmp$90 GETMAXREGS;
	tmp$90 GETFIRST;
	tmp$88 GETNEXT;
	tmp$91 GETVREG;
	tmp$88 GETREALREG;
	tmp$92 CLEAR;
	tmp$92 DUMP;
	int64 CLASS;
	int64 ISSTACK;
	int64 REGS;
	struct $6IRVREG* VREGTB[8];
	struct $6IRVREG* VAUXPARENT[8];
	struct $10REG_REGCTX REGCTX;
	struct $10REG_STKCTX STKCTX;
};
__FB_STATIC_ASSERT( sizeof( struct $8REGCLASS ) == 608 );
struct $10TFLISTITEM;
struct $10TFLISTITEM {
	struct $10TFLISTITEM* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $10TFLISTITEM ) == 8 );
struct $6TFLIST {
	int64 TOTITEMS;
	int64 ITEMS;
	struct $10TFLISTITEM* ITEMTB;
	int64 INDEX;
	struct $10TFLISTITEM* LASTITEM;
	struct $5TLIST LIST;
	struct $7TLISTTB* LISTTB;
};
__FB_STATIC_ASSERT( sizeof( struct $6TFLIST ) == 112 );
typedef int64 $19EMIT_NODECLASS_ENUM;
struct $12EMIT_BOPNODE {
	int64 OP;
	struct $6IRVREG* DVREG;
	struct $6IRVREG* SVREG;
};
__FB_STATIC_ASSERT( sizeof( struct $12EMIT_BOPNODE ) == 24 );
struct $12EMIT_UOPNODE {
	int64 OP;
	struct $6IRVREG* DVREG;
};
__FB_STATIC_ASSERT( sizeof( struct $12EMIT_UOPNODE ) == 16 );
struct $12EMIT_RELNODE {
	int64 OP;
	struct $6IRVREG* RVREG;
	struct $8FBSYMBOL* LABEL;
	struct $6IRVREG* DVREG;
	struct $6IRVREG* SVREG;
};
__FB_STATIC_ASSERT( sizeof( struct $12EMIT_RELNODE ) == 40 );
struct $12EMIT_STKNODE {
	int64 OP;
	struct $6IRVREG* VREG;
	int64 EXTRA;
};
__FB_STATIC_ASSERT( sizeof( struct $12EMIT_STKNODE ) == 24 );
struct $12EMIT_BRCNODE {
	int64 OP;
	struct $6IRVREG* VREG;
	struct $8FBSYMBOL* SYM;
	int64 EXTRA;
};
__FB_STATIC_ASSERT( sizeof( struct $12EMIT_BRCNODE ) == 32 );
struct $12EMIT_SOPNODE {
	int64 OP;
	struct $8FBSYMBOL* SYM;
};
__FB_STATIC_ASSERT( sizeof( struct $12EMIT_SOPNODE ) == 16 );
struct $12EMIT_LITNODE {
	int64 ISASM;
	uint8* TEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $12EMIT_LITNODE ) == 16 );
struct $12EMIT_JTBNODE {
	struct $8FBSYMBOL* TBSYM;
	uint64* VALUES;
	struct $8FBSYMBOL** LABELS;
	int64 LABELCOUNT;
	struct $8FBSYMBOL* DEFLABEL;
	uint64 MINVAL;
	uint64 MAXVAL;
};
__FB_STATIC_ASSERT( sizeof( struct $12EMIT_JTBNODE ) == 56 );
struct $12EMIT_MEMNODE {
	int64 OP;
	struct $6IRVREG* DVREG;
	struct $6IRVREG* SVREG;
	int64 BYTES;
	int64 EXTRA;
};
__FB_STATIC_ASSERT( sizeof( struct $12EMIT_MEMNODE ) == 40 );
struct $12EMIT_DBGNODE {
	int64 OP;
	struct $8FBSYMBOL* SYM;
	int64 LNUM;
	int64 POS;
};
__FB_STATIC_ASSERT( sizeof( struct $12EMIT_DBGNODE ) == 32 );
struct $9EMIT_NODE {
	$19EMIT_NODECLASS_ENUM CLASS;
	union {
		struct $12EMIT_BOPNODE BOP;
		struct $12EMIT_UOPNODE UOP;
		struct $12EMIT_RELNODE REL;
		struct $12EMIT_STKNODE STK;
		struct $12EMIT_BRCNODE BRC;
		struct $12EMIT_SOPNODE SOP;
		struct $12EMIT_LITNODE LIT;
		struct $12EMIT_JTBNODE JTB;
		struct $12EMIT_MEMNODE MEM;
		struct $12EMIT_DBGNODE DBG;
	};
	int64 REGFREETB[2];
};
__FB_STATIC_ASSERT( sizeof( struct $9EMIT_NODE ) == 80 );
typedef int64 (*tmp$36)( void );
typedef void (*tmp$35)( void );
typedef int64 $14IR_OPTIONVALUE;
typedef int64 (*tmp$38)( $14IR_OPTIONVALUE );
typedef void (*tmp$37)( double );
typedef int64 (*tmp$39)( int64, int64 );
typedef void (*tmp$101)( int64, int64, int64*, int64* );
typedef uint8* (*tmp$42)( void );
typedef void (*tmp$40)( struct $8FBSYMBOL* );
typedef void (*tmp$41)( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef void (*tmp$102)( struct $8FBSYMBOL*, int64, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef void (*tmp$103)( int64, int64 );
typedef uint8* (*tmp$104)( int64 );
typedef uint8* (*tmp$105)( int64, int64 );
struct $9EMIT_VTBL {
	tmp$36 INIT;
	tmp$35 END;
	tmp$38 GETOPTIONVALUE;
	tmp$36 OPEN;
	tmp$37 CLOSE;
	tmp$100 ISKEYWORD;
	tmp$39 ISREGPRESERVED;
	tmp$39 GETFREEPRESERVEDREG;
	tmp$101 GETRESULTREG;
	tmp$42 PROCGETFRAMEREGNAME;
	tmp$40 PROCBEGIN;
	tmp$40 PROCEND;
	tmp$41 PROCHEADER;
	tmp$102 PROCFOOTER;
	tmp$41 PROCALLOCARG;
	tmp$41 PROCALLOCLOCAL;
	tmp$40 PROCALLOCSTATICVARS;
	tmp$40 SCOPEBEGIN;
	tmp$40 SCOPEEND;
	tmp$103 SETSECTION;
	tmp$104 GETTYPESTRING;
	tmp$105 GETSECTIONSTRING;
};
__FB_STATIC_ASSERT( sizeof( struct $9EMIT_VTBL ) == 176 );
struct $7EMITCTX {
	int64 INITED;
	int64 POS;
	struct $8REGCLASS* REGTB[2];
	struct $6TFLIST NODETB;
	struct $6TFLIST VREGTB;
	struct $9EMIT_NODE* CURNODE;
	int64 REGUSEDTB[2];
	int64 LASTSECTION;
	int64 LASTPRIORITY;
	int64 KEYINITED;
	struct $5THASH KEYHASH;
	struct $9EMIT_VTBL VTBL;
	void** OPFNTB;
};
__FB_STATIC_ASSERT( sizeof( struct $7EMITCTX ) == 512 );
extern struct $7EMITCTX EMIT$;
struct $8FBARRAY1IPvE {
	void** DATA;
	void** PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[1];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1IPvE ) == 64 );
static struct $8FBARRAY1IPvE tmp$106$;
struct $5FBENV ENV$ __attribute__((common));

void CASMCODE( void )
{
	label$10:;
	static uint8 TEXT$1[1025];
	struct $10FBSYMCHAIN* CHAIN_$1;
	struct $8FBSYMBOL* SYM$1;
	struct $7ASTNODE* EXPR$1;
	struct $9ASTASMTOK* HEAD$1;
	struct $9ASTASMTOK* TAIL$1;
	int64 DOSKIP$1;
	int64 THISTOK$1;
	HEAD$1 = (struct $9ASTASMTOK*)0ull;
	TAIL$1 = (struct $9ASTASMTOK*)0ull;
	label$12:;
	{
		int64 vr$0 = LEXGETTOKEN( 1028ll );
		THISTOK$1 = vr$0;
		{
			uint64 TMP$107$3;
			TMP$107$3 = (uint64)THISTOK$1;
			goto label$16;
			label$17:;
			{
				goto label$13;
			}
			goto label$15;
			label$16:;
			static const void* tmp$116[85ll] = {
				&&label$17,
				&&label$17,
				&&label$15,
				&&label$17,
				&&label$17,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$15,
				&&label$17,
			};
			if( TMP$107$3 < 256ll ) goto label$15;
			if( TMP$107$3 > 340ll ) goto label$15;
			goto *tmp$116[TMP$107$3 - 256ll];
			label$15:;
		}
		uint8* vr$1 = LEXGETTEXT(  );
		fb_StrAssign( (void*)TEXT$1, 1025ll, (void*)vr$1, 0ll, 0 );
		SYM$1 = (struct $8FBSYMBOL*)0ull;
		DOSKIP$1 = 0ll;
		{
			uint64 TMP$108$3;
			int64 vr$2 = LEXGETCLASS( 1028ll );
			TMP$108$3 = (uint64)vr$2;
			goto label$19;
			label$20:;
			{
				FBSTRING TMP$109$4;
				int64 TMP$110$4;
				if( THISTOK$1 != 462ll ) goto label$22;
				{
					struct $7ASTNODE* vr$4 = CMATHFUNCT( THISTOK$1, -1ll );
					EXPR$1 = vr$4;
					if( EXPR$1 == (struct $7ASTNODE*)0ull ) goto label$24;
					{
						if( *(int64*)EXPR$1 != 16ll ) goto label$26;
						{
							FBSTRING* vr$8 = ASTCONSTFLUSHTOSTR( EXPR$1 );
							fb_StrAssign( (void*)TEXT$1, 1025ll, (void*)vr$8, -1ll, 0 );
						}
						goto label$25;
						label$26:;
						{
							ERRREPORT( 11ll, 0ll, (uint8*)0ull );
							DOSKIP$1 = -1ll;
						}
						label$25:;
					}
					goto label$23;
					label$24:;
					{
						ERRREPORT( 17ll, 0ll, (uint8*)0ull );
						DOSKIP$1 = -1ll;
					}
					label$23:;
				}
				goto label$21;
				label$22:;
				if( (int64)-(*(int64*)((uint8*)&ENV$ + 208ll) == 1ll) != 0ll ) goto label$28;
				__builtin_memset( &TMP$109$4, 0, 24ll );
				FBSTRING* vr$12 = fb_StrAllocTempDescZ( (uint8*)TEXT$1 );
				FBSTRING* vr$13 = fb_StrLcase2( vr$12, 0 );
				FBSTRING* vr$15 = fb_StrAssign( (void*)&TMP$109$4, -1ll, (void*)vr$13, -1ll, 0 );
				int64 vr$16 = (*(tmp$100*)((uint8*)&EMIT$ + 368ll))( *(uint8**)&TMP$109$4 );
				TMP$110$4 = (int64)-((int64)-(vr$16 == 0ll) != 0ll);
				fb_StrDelete( &TMP$109$4 );
				goto label$74;
				label$28:;
				TMP$110$4 = -1ll;
				label$74:;
				if( TMP$110$4 == 0ll ) goto label$27;
				{
					struct $8FBSYMBOL* BASE_PARENT$5;
					struct $10FBSYMCHAIN* vr$22 = CIDENTIFIER( &BASE_PARENT$5, 34ll );
					CHAIN_$1 = vr$22;
					label$29:;
					if( CHAIN_$1 == (struct $10FBSYMCHAIN*)0ull ) goto label$30;
					{
						struct $8FBSYMBOL* S$6;
						S$6 = *(struct $8FBSYMBOL**)CHAIN_$1;
						label$31:;
						{
							{
								$12FB_SYMBCLASS TMP$111$8;
								TMP$111$8 = *($12FB_SYMBCLASS*)S$6;
								if( TMP$111$8 == 3ll ) goto label$36;
								label$37:;
								if( TMP$111$8 != 7ll ) goto label$35;
								label$36:;
								{
									SYM$1 = S$6;
									goto label$30;
								}
								goto label$34;
								label$35:;
								if( TMP$111$8 != 2ll ) goto label$38;
								label$39:;
								{
									FBSTRING* vr$29 = SYMBGETCONSTVALUEASSTR( S$6 );
									fb_StrAssign( (void*)TEXT$1, 1025ll, (void*)vr$29, -1ll, 0 );
									goto label$30;
								}
								goto label$34;
								label$38:;
								if( TMP$111$8 != 1ll ) goto label$40;
								label$41:;
								{
									struct $8FBSYMBOL* vr$31 = SYMBFINDBYCLASS( CHAIN_$1, 1ll );
									SYM$1 = vr$31;
									if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$43;
									{
										*($12FB_SYMBSTATS*)((uint8*)SYM$1 + 16ll) = *(int64*)((uint8*)SYM$1 + 16ll) | 2ll;
									}
									label$43:;
									label$42:;
									goto label$30;
								}
								label$40:;
								label$34:;
							}
							S$6 = *(struct $8FBSYMBOL**)((uint8*)S$6 + 264ll);
						}
						label$33:;
						if( S$6 != (struct $8FBSYMBOL*)0ull ) goto label$31;
						label$32:;
						CHAIN_$1 = *(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$1 + 8ll);
					}
					goto label$29;
					label$30:;
				}
				label$27:;
				label$21:;
			}
			goto label$18;
			label$44:;
			{
				struct $7ASTNODE* vr$39 = CNUMLITERAL( 0ll );
				EXPR$1 = vr$39;
				if( EXPR$1 == (struct $7ASTNODE*)0ull ) goto label$46;
				{
					FBSTRING* vr$41 = ASTCONSTFLUSHTOSTR( EXPR$1 );
					fb_StrAssign( (void*)TEXT$1, 1025ll, (void*)vr$41, -1ll, 0 );
				}
				label$46:;
				label$45:;
			}
			goto label$18;
			label$47:;
			{
				struct $7ASTNODE* vr$42 = CSTRLITERAL( 0ll );
				EXPR$1 = vr$42;
				if( EXPR$1 == (struct $7ASTNODE*)0ull ) goto label$49;
				{
					struct $8FBSYMBOL* LITSYM$5;
					struct $8FBSYMBOL* vr$44 = ASTGETSTRLITSYMBOL( EXPR$1 );
					LITSYM$5 = vr$44;
					if( LITSYM$5 == (struct $8FBSYMBOL*)0ull ) goto label$51;
					{
						FBSTRING TMP$115$6;
						fb_StrAssign( (void*)TEXT$1, 1025ll, (void*)"\x22", 2ll, 0 );
						if( (*(int64*)((uint8*)LITSYM$5 + 48ll) & 511ll) == 6ll ) goto label$53;
						{
							FBSTRING TMP$113$7;
							__builtin_memset( &TMP$113$7, 0, 24ll );
							FBSTRING* vr$52 = fb_StrConcat( &TMP$113$7, (void*)TEXT$1, 1025ll, *(void**)((uint8*)LITSYM$5 + 88ll), 0ll );
							fb_StrAssign( (void*)TEXT$1, 1025ll, (void*)vr$52, -1ll, 0 );
						}
						goto label$52;
						label$53:;
						{
							uint32* TMP$114$7;
							uint32* vr$54 = fb_WstrConcatAW( (void*)TEXT$1, 1025ll, *(uint32**)((uint8*)LITSYM$5 + 88ll) );
							TMP$114$7 = vr$54;
							fb_WstrAssignToA( (void*)TEXT$1, 1025ll, TMP$114$7, 0 );
							fb_WstrDelete( TMP$114$7 );
						}
						label$52:;
						__builtin_memset( &TMP$115$6, 0, 24ll );
						FBSTRING* vr$57 = fb_StrConcat( &TMP$115$6, (void*)TEXT$1, 1025ll, (void*)"\x22", 2ll );
						fb_StrAssign( (void*)TEXT$1, 1025ll, (void*)vr$57, -1ll, 0 );
					}
					label$51:;
					label$50:;
					ASTDELTREE( EXPR$1 );
				}
				label$49:;
				label$48:;
			}
			goto label$18;
			label$54:;
			{
				{
					if( THISTOK$1 != 346ll ) goto label$56;
					label$57:;
					{
						struct $8FBSYMBOL* vr$59 = SYMBGETPROCRESULT( *(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) );
						SYM$1 = vr$59;
						if( SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$59;
						{
							ERRREPORT( 17ll, 0ll, (uint8*)0ull );
							DOSKIP$1 = -1ll;
						}
						goto label$58;
						label$59:;
						{
							*($12FB_SYMBSTATS*)((uint8*)SYM$1 + 16ll) = *(int64*)((uint8*)SYM$1 + 16ll) | 2ll;
						}
						label$58:;
					}
					goto label$55;
					label$56:;
					if( THISTOK$1 != 402ll ) goto label$60;
					label$61:;
					{
						struct $7ASTNODE* vr$65 = CTYPECONVEXPR( THISTOK$1, -1ll );
						EXPR$1 = vr$65;
						if( EXPR$1 == (struct $7ASTNODE*)0ull ) goto label$63;
						{
							if( *(int64*)EXPR$1 != 16ll ) goto label$65;
							{
								FBSTRING* vr$69 = ASTCONSTFLUSHTOSTR( EXPR$1 );
								fb_StrAssign( (void*)TEXT$1, 1025ll, (void*)vr$69, -1ll, 0 );
							}
							goto label$64;
							label$65:;
							{
								ERRREPORT( 11ll, 0ll, (uint8*)0ull );
								DOSKIP$1 = -1ll;
							}
							label$64:;
						}
						goto label$62;
						label$63:;
						{
							ERRREPORT( 17ll, 0ll, (uint8*)0ull );
							DOSKIP$1 = -1ll;
						}
						label$62:;
					}
					label$60:;
					label$55:;
				}
			}
			goto label$18;
			label$19:;
			static const void* tmp$117[5ll] = {
				&&label$20,
				&&label$54,
				&&label$20,
				&&label$44,
				&&label$47,
			};
			if( TMP$108$3 > 4ll ) goto label$18;
			goto *tmp$117[TMP$108$3 - 0ll];
			label$18:;
		}
		if( DOSKIP$1 != 0ll ) goto label$67;
		{
			if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$69;
			{
				struct $9ASTASMTOK* vr$72 = ASTASMAPPENDSYMB( TAIL$1, SYM$1 );
				TAIL$1 = vr$72;
			}
			goto label$68;
			label$69:;
			{
				struct $9ASTASMTOK* vr$73 = ASTASMAPPENDTEXT( TAIL$1, (uint8*)TEXT$1 );
				TAIL$1 = vr$73;
			}
			label$68:;
			if( HEAD$1 != (struct $9ASTASMTOK*)0ull ) goto label$71;
			{
				HEAD$1 = TAIL$1;
			}
			label$71:;
			label$70:;
		}
		label$67:;
		label$66:;
		LEXSKIPTOKEN( 1028ll );
	}
	label$14:;
	goto label$12;
	label$13:;
	if( HEAD$1 == (struct $9ASTASMTOK*)0ull ) goto label$73;
	{
		struct $7ASTNODE* vr$76 = ASTNEWASM( HEAD$1 );
		ASTADD( vr$76 );
	}
	label$73:;
	label$72:;
	label$11:;
}

int64 CASMBLOCK( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$75:;
	int64 ISSINGLELINE$1;
	fb$result$1 = 0ll;
	int64 vr$1 = LEXGETTOKEN( 0ll );
	if( vr$1 == 344ll ) goto label$78;
	{
		goto label$76;
	}
	label$78:;
	label$77:;
	int64 vr$3 = CCOMPSTMTISALLOWED( 1ll );
	if( vr$3 != 0ll ) goto label$80;
	{
		HSKIPCOMPOUND( 344ll, -1ll, 0ll );
		goto label$76;
	}
	label$80:;
	label$79:;
	LEXSKIPTOKEN( 0ll );
	ISSINGLELINE$1 = 0ll;
	int64 vr$5 = CCOMMENT( 0ll );
	if( vr$5 == 0ll ) goto label$82;
	{
		if( *(int64*)((uint8*)&ENV$ + 288ll) == 0ll ) goto label$84;
		{
			if( *(int64*)((uint8*)&ENV$ + 1128ll) != 0ll ) goto label$86;
			{
				struct $7ASTNODE* vr$10 = ASTNEWLIT( *(uint8**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 49600ll) );
				ASTADD( vr$10 );
				DZSTRRESET( (struct $8DZSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 49600ll) );
			}
			label$86:;
			label$85:;
		}
		label$84:;
		label$83:;
		int64 vr$13 = CSTMTSEPARATOR( 0ll );
		if( vr$13 != 0ll ) goto label$88;
		{
			ERRREPORT( 3ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( 257ll, -1ll, 0ll, 0ll );
		}
		label$88:;
		label$87:;
	}
	goto label$81;
	label$82:;
	{
		int64 vr$15 = CSTMTSEPARATOR( 0ll );
		if( vr$15 != 0ll ) goto label$90;
		{
			ISSINGLELINE$1 = -1ll;
		}
		label$90:;
		label$89:;
	}
	label$81:;
	label$91:;
	{
		if( ISSINGLELINE$1 != 0ll ) goto label$95;
		{
			struct $7ASTNODE* vr$19 = ASTNEWDBG( 108ll, *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16712ll) );
			ASTADD( vr$19 );
		}
		label$95:;
		label$94:;
		CASMCODE(  );
		CCOMMENT( 1028ll );
		if( *(int64*)((uint8*)&ENV$ + 288ll) == 0ll ) goto label$97;
		{
			if( *(int64*)((uint8*)&ENV$ + 1128ll) != 0ll ) goto label$99;
			{
				struct $7ASTNODE* vr$23 = ASTNEWLIT( *(uint8**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 49600ll) );
				ASTADD( vr$23 );
				DZSTRRESET( (struct $8DZSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 49600ll) );
			}
			label$99:;
			label$98:;
		}
		label$97:;
		label$96:;
		{
			int64 TMP$118$3;
			int64 vr$26 = LEXGETTOKEN( 0ll );
			TMP$118$3 = vr$26;
			if( TMP$118$3 != 257ll ) goto label$101;
			label$102:;
			{
				if( ISSINGLELINE$1 == 0ll ) goto label$104;
				{
					goto label$92;
				}
				label$104:;
				label$103:;
				LEXSKIPTOKEN( 0ll );
			}
			goto label$100;
			label$101:;
			if( TMP$118$3 != 256ll ) goto label$105;
			label$106:;
			{
				goto label$92;
			}
			goto label$100;
			label$105:;
			if( TMP$118$3 != 340ll ) goto label$107;
			label$108:;
			{
				goto label$92;
			}
			goto label$100;
			label$107:;
			{
				ERRREPORT( 3ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 257ll, -1ll, 0ll, 0ll );
			}
			label$109:;
			label$100:;
		}
		if( ISSINGLELINE$1 != 0ll ) goto label$111;
		{
			struct $7ASTNODE* vr$32 = ASTNEWDBG( 109ll, 0ll );
			ASTADD( vr$32 );
		}
		label$111:;
		label$110:;
	}
	label$93:;
	goto label$91;
	label$92:;
	if( ISSINGLELINE$1 != 0ll ) goto label$113;
	{
		int64 vr$34 = HMATCH( 340ll );
		if( vr$34 != 0ll ) goto label$115;
		{
			ERRREPORT( 44ll, 0ll, (uint8*)0ull );
		}
		goto label$114;
		label$115:;
		int64 vr$36 = HMATCH( 344ll );
		if( vr$36 != 0ll ) goto label$116;
		{
			ERRREPORT( 44ll, 0ll, (uint8*)0ull );
		}
		label$116:;
		label$114:;
	}
	label$113:;
	label$112:;
	fb$result$1 = -1ll;
	label$76:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__parserzinlineasm( void )
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

// Total compilation time: 0.03366505075246096 seconds.
