// Compilation of fbc-1.01.0/src/compiler/edbg_stab.bas started at 15:27:39 on 02-28-2015

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
typedef void (*tmp$102)( int64, int64 );
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
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
FBSTRING* fb_StrConcatAssign( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAllocTempResult( FBSTRING* );
FBSTRING* fb_LongintToStr( int64 );
FBSTRING* fb_ULongintToStr( uint64 );
static void fb_ctor__edbg_stab( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
FBSTRING* FBGETENTRYPOINT( void );
typedef int64 $10FB_SYMBOPT;
struct $8FBSYMBOL* SYMBADDLABEL( uint8*, $10FB_SYMBOPT );
uint8* SYMBUNIQUELABEL( void );
uint8* SYMBGETMANGLEDNAME( struct $8FBSYMBOL* );
uint8* SYMBGETDBGNAME( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBUDTGETFIRSTFIELD( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBUDTGETNEXTFIELD( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBGETENUMFIRSTELM( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBGETENUMNEXTELM( struct $8FBSYMBOL* );
int64 PATHISABSOLUTE( uint8* );
FBSTRING* HCURDIR( void );
uint8* HESCAPE( uint8* );
void EMITWRITESTR( uint8*, int64 );
void EDBGEMITLINE( struct $8FBSYMBOL*, int64, struct $8FBSYMBOL* );
void EDBGEMITPROCARG( struct $8FBSYMBOL* );
void EDBGEMITLOCALVAR( struct $8FBSYMBOL*, int64 );
void EDBGINCLUDE( uint8* );
static void HDECLUDT( struct $8FBSYMBOL*, int64 );
static void HDECLENUM( struct $8FBSYMBOL* );
static FBSTRING* HDECLPOINTER( int64* );
static FBSTRING* HGETDATATYPE( struct $8FBSYMBOL*, int64 );
static void HEMITSTABS( int64, uint8*, int64, int64, uint8* );
static uint8* HMAKESTABN( int64, int64, int64, uint8* );
static void HEMITSTABN( int64, int64, int64, uint8* );
static void HEMITSTABD( int64, int64, int64 );
static void HLABEL( uint8* );
static void HDECLARGS( struct $8FBSYMBOL* );
static void HDECLLOCALVARS( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
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
typedef int64 (*tmp$84)( struct $8REGCLASS*, struct $6IRVREG*, struct $6IRVREG*, uint64 );
typedef int64 (*tmp$85)( struct $8REGCLASS*, int64, struct $6IRVREG*, struct $6IRVREG* );
typedef void (*tmp$86)( struct $8REGCLASS*, int64 );
typedef int64 (*tmp$87)( struct $8REGCLASS*, int64 );
typedef void (*tmp$88)( struct $8REGCLASS*, int64, struct $6IRVREG*, struct $6IRVREG* );
typedef int64 (*tmp$89)( struct $8REGCLASS* );
typedef struct $6IRVREG* (*tmp$90)( struct $8REGCLASS*, int64, struct $6IRVREG** );
typedef void (*tmp$91)( struct $8REGCLASS* );
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
	tmp$84 ENSURE;
	tmp$84 _ALLOCATE;
	tmp$85 ALLOCATEREG;
	tmp$86 FREE;
	tmp$87 ISFREE;
	tmp$88 SETOWNER;
	tmp$89 GETMAXREGS;
	tmp$89 GETFIRST;
	tmp$87 GETNEXT;
	tmp$90 GETVREG;
	tmp$87 GETREALREG;
	tmp$91 CLEAR;
	tmp$91 DUMP;
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
typedef int64 (*tmp$99)( uint8* );
typedef int64 (*tmp$39)( int64, int64 );
typedef void (*tmp$100)( int64, int64, int64*, int64* );
typedef uint8* (*tmp$42)( void );
typedef void (*tmp$40)( struct $8FBSYMBOL* );
typedef void (*tmp$41)( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef void (*tmp$101)( struct $8FBSYMBOL*, int64, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef uint8* (*tmp$103)( int64 );
typedef uint8* (*tmp$104)( int64, int64 );
struct $9EMIT_VTBL {
	tmp$36 INIT;
	tmp$35 END;
	tmp$38 GETOPTIONVALUE;
	tmp$36 OPEN;
	tmp$37 CLOSE;
	tmp$99 ISKEYWORD;
	tmp$39 ISREGPRESERVED;
	tmp$39 GETFREEPRESERVEDREG;
	tmp$100 GETRESULTREG;
	tmp$42 PROCGETFRAMEREGNAME;
	tmp$40 PROCBEGIN;
	tmp$40 PROCEND;
	tmp$41 PROCHEADER;
	tmp$101 PROCFOOTER;
	tmp$41 PROCALLOCARG;
	tmp$41 PROCALLOCLOCAL;
	tmp$40 PROCALLOCSTATICVARS;
	tmp$40 SCOPEBEGIN;
	tmp$40 SCOPEEND;
	tmp$102 SETSECTION;
	tmp$103 GETTYPESTRING;
	tmp$104 GETSECTIONSTRING;
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
static struct $8FBARRAY1IPvE tmp$105$;
struct $7EDBGCTX {
	uint64 TYPECNT;
	struct $8FBSYMBOL* LABEL;
	int64 LNUM;
	int64 POS;
	int64 ISNEWLINE;
	int64 FIRSTLINE;
	int64 LASTLINE;
	uint8 FILENAME[261];
	uint8* INCFILE;
};
__FB_STATIC_ASSERT( sizeof( struct $7EDBGCTX ) == 328 );
static struct $7EDBGCTX CTX$;
static int64 REMAPTB$[24] = { 7ll, 2ll, 3ll, 4ll, 5ll, 6ll, 6ll, 1ll, 8ll, 1ll, 1ll, 8ll, 9ll, 10ll, 11ll, 12ll, 13ll, 14ll };
static uint8* STABSTB$[15] = { (uint8*)"integer:t1=-1", (uint8*)"void:t7=-11", (uint8*)"byte:t2=-6", (uint8*)"ubyte:t3=-5", (uint8*)"char:t4=-2", (uint8*)"short:t5=-3", (uint8*)"ushort:t6=-7", (uint8*)"uinteger:t8=-8", (uint8*)"longint:t9=-31", (uint8*)"ulongint:t10=-32", (uint8*)"single:t11=-12", (uint8*)"double:t12=-13", (uint8*)"string:t13=s12data:15,0,32;len:1,32,32;size:1,64,32;;", (uint8*)"fixstr:t14=-2", (uint8*)"pchar:t15=*4;" };
struct $5FBENV ENV$ __attribute__((common));

void EDBGINIT( void )
{
	label$10:;
	*(int64*)((uint8*)REMAPTB$ + 48ll) = *(int64*)((uint8*)REMAPTB$ + (*(int64*)((uint8*)&ENV$ + 424ll) << 3ll));
	label$11:;
}

void EDBGEMITHEADER( uint8* FILENAME$1 )
{
	FBSTRING TMP$136$1;
	FBSTRING TMP$137$1;
	FBSTRING TMP$138$1;
	label$22:;
	FBSTRING LNAME$1;
	__builtin_memset( &LNAME$1, 0, 24ll );
	if( *(int64*)((uint8*)&ENV$ + 288ll) != 0ll ) goto label$25;
	{
		fb_StrDelete( &LNAME$1 );
		goto label$23;
	}
	label$25:;
	label$24:;
	*(uint64*)&CTX$ = 1ull;
	*(struct $8FBSYMBOL**)((uint8*)&CTX$ + 8ll) = (struct $8FBSYMBOL*)0ull;
	*(uint8**)((uint8*)&CTX$ + 320ll) = (uint8*)0ull;
	fb_StrAssign( (void*)((uint8*)&CTX$ + 56ll), 261ll, (void*)FILENAME$1, 0ll, 0 );
	uint8* vr$4 = SYMBUNIQUELABEL(  );
	fb_StrAssign( (void*)&LNAME$1, -1ll, (void*)vr$4, 0ll, 0 );
	__builtin_memset( &TMP$138$1, 0, 24ll );
	uint8* vr$7 = HESCAPE( FILENAME$1 );
	__builtin_memset( &TMP$136$1, 0, 24ll );
	FBSTRING* vr$10 = fb_StrConcat( &TMP$136$1, (void*)".file \x22", 8ll, (void*)vr$7, 0ll );
	__builtin_memset( &TMP$137$1, 0, 24ll );
	FBSTRING* vr$13 = fb_StrConcat( &TMP$137$1, (void*)vr$10, -1ll, (void*)"\x22", 2ll );
	FBSTRING* vr$15 = fb_StrAssign( (void*)&TMP$138$1, -1ll, (void*)vr$13, -1ll, 0 );
	EMITWRITESTR( *(uint8**)&TMP$138$1, -1ll );
	fb_StrDelete( &TMP$138$1 );
	int64 vr$17 = PATHISABSOLUTE( FILENAME$1 );
	if( vr$17 != 0ll ) goto label$27;
	{
		FBSTRING TMP$139$2;
		FBSTRING TMP$140$2;
		__builtin_memset( &TMP$140$2, 0, 24ll );
		FBSTRING* vr$20 = HCURDIR(  );
		__builtin_memset( &TMP$139$2, 0, 24ll );
		FBSTRING* vr$23 = fb_StrConcat( &TMP$139$2, (void*)vr$20, -1ll, (void*)"/", 2ll );
		FBSTRING* vr$25 = fb_StrAssign( (void*)&TMP$140$2, -1ll, (void*)vr$23, -1ll, 0 );
		HEMITSTABS( 100ll, *(uint8**)&TMP$140$2, 0ll, 0ll, *(uint8**)&LNAME$1 );
		fb_StrDelete( &TMP$140$2 );
	}
	label$27:;
	label$26:;
	HEMITSTABS( 100ll, FILENAME$1, 0ll, 0ll, *(uint8**)&LNAME$1 );
	(*(tmp$102*)((uint8*)&EMIT$ + 480ll))( 3ll, 0ll );
	HLABEL( *(uint8**)&LNAME$1 );
	{
		int64 I$2;
		I$2 = 0ll;
		label$31:;
		{
			HEMITSTABS( 128ll, *(uint8**)((uint8*)STABSTB$ + (I$2 << 3ll)), 0ll, 0ll, (uint8*)"0" );
			*(uint64*)&CTX$ = *(uint64*)&CTX$ + 1ull;
		}
		label$29:;
		I$2 = I$2 + 1ll;
		label$28:;
		if( I$2 <= 14ll ) goto label$31;
		label$30:;
	}
	EMITWRITESTR( (uint8*)"", 0ll );
	HEMITSTABS( 130ll, FILENAME$1, 0ll, 0ll, (uint8*)"0" );
	fb_StrDelete( &LNAME$1 );
	label$23:;
}

void EDBGEMITFOOTER( void )
{
	label$32:;
	static FBSTRING LNAME$1;
	if( *(int64*)((uint8*)&ENV$ + 288ll) != 0ll ) goto label$35;
	{
		goto label$33;
	}
	label$35:;
	label$34:;
	(*(tmp$102*)((uint8*)&EMIT$ + 480ll))( 3ll, 0ll );
	uint8* vr$1 = SYMBUNIQUELABEL(  );
	fb_StrAssign( (void*)&LNAME$1, -1ll, (void*)vr$1, 0ll, 0 );
	HEMITSTABS( 100ll, (uint8*)"", 0ll, 0ll, *(uint8**)&LNAME$1 );
	HLABEL( *(uint8**)&LNAME$1 );
	label$33:;
}

void EDBGLINEBEGIN( struct $8FBSYMBOL* PROC$1, int64 LNUM$1, int64 POS_$1 )
{
	label$36:;
	if( *(int64*)((uint8*)&ENV$ + 288ll) != 0ll ) goto label$39;
	{
		goto label$37;
	}
	label$39:;
	label$38:;
	if( *(int64*)((uint8*)&CTX$ + 16ll) <= 0ll ) goto label$41;
	{
		*(int64*)((uint8*)&CTX$ + 24ll) = POS_$1 - *(int64*)((uint8*)&CTX$ + 24ll);
		if( *(int64*)((uint8*)&CTX$ + 24ll) <= 0ll ) goto label$43;
		{
			EDBGEMITLINE( PROC$1, *(int64*)((uint8*)&CTX$ + 16ll), *(struct $8FBSYMBOL**)((uint8*)&CTX$ + 8ll) );
			*(int64*)((uint8*)&CTX$ + 32ll) = -1ll;
		}
		label$43:;
		label$42:;
	}
	label$41:;
	label$40:;
	*(int64*)((uint8*)&CTX$ + 24ll) = POS_$1;
	*(int64*)((uint8*)&CTX$ + 16ll) = LNUM$1;
	if( *(int64*)((uint8*)&CTX$ + 32ll) == 0ll ) goto label$45;
	{
		struct $8FBSYMBOL* vr$5 = SYMBADDLABEL( (uint8*)0ull, 4ll );
		*(struct $8FBSYMBOL**)((uint8*)&CTX$ + 8ll) = vr$5;
		uint8* vr$6 = SYMBGETMANGLEDNAME( *(struct $8FBSYMBOL**)((uint8*)&CTX$ + 8ll) );
		HLABEL( vr$6 );
		*(int64*)((uint8*)&CTX$ + 32ll) = 0ll;
	}
	label$45:;
	label$44:;
	label$37:;
}

void EDBGLINEEND( struct $8FBSYMBOL* PROC$1, int64 LNUM$1, int64 POS_$1 )
{
	label$46:;
	if( *(int64*)((uint8*)&ENV$ + 288ll) != 0ll ) goto label$49;
	{
		goto label$47;
	}
	label$49:;
	label$48:;
	if( *(int64*)((uint8*)&CTX$ + 16ll) <= 0ll ) goto label$51;
	{
		*(int64*)((uint8*)&CTX$ + 24ll) = POS_$1 - *(int64*)((uint8*)&CTX$ + 24ll);
		if( *(int64*)((uint8*)&CTX$ + 24ll) <= 0ll ) goto label$53;
		{
			EDBGEMITLINE( PROC$1, *(int64*)((uint8*)&CTX$ + 16ll), *(struct $8FBSYMBOL**)((uint8*)&CTX$ + 8ll) );
			*(int64*)((uint8*)&CTX$ + 32ll) = -1ll;
		}
		label$53:;
		label$52:;
		*(int64*)((uint8*)&CTX$ + 16ll) = 0ll;
	}
	label$51:;
	label$50:;
	label$47:;
}

void EDBGEMITLINE( struct $8FBSYMBOL* PROC$1, int64 LNUM$1, struct $8FBSYMBOL* LABEL$1 )
{
	FBSTRING TMP$142$1;
	FBSTRING TMP$143$1;
	FBSTRING TMP$144$1;
	label$54:;
	static uint8* S$1;
	if( *(int64*)((uint8*)&ENV$ + 288ll) != 0ll ) goto label$57;
	{
		goto label$55;
	}
	label$57:;
	label$56:;
	if( *(int64*)((uint8*)&CTX$ + 40ll) != -1ll ) goto label$59;
	{
		*(int64*)((uint8*)&CTX$ + 40ll) = LNUM$1;
	}
	label$59:;
	label$58:;
	*(int64*)((uint8*)&CTX$ + 48ll) = LNUM$1;
	__builtin_memset( &TMP$144$1, 0, 24ll );
	uint8* vr$3 = SYMBGETMANGLEDNAME( PROC$1 );
	uint8* vr$4 = SYMBGETMANGLEDNAME( LABEL$1 );
	__builtin_memset( &TMP$142$1, 0, 24ll );
	FBSTRING* vr$7 = fb_StrConcat( &TMP$142$1, (void*)vr$4, 0ll, (void*)"-", 2ll );
	__builtin_memset( &TMP$143$1, 0, 24ll );
	FBSTRING* vr$10 = fb_StrConcat( &TMP$143$1, (void*)vr$7, -1ll, (void*)vr$3, 0ll );
	FBSTRING* vr$12 = fb_StrAssign( (void*)&TMP$144$1, -1ll, (void*)vr$10, -1ll, 0 );
	uint8* vr$13 = HMAKESTABN( 68ll, 0ll, LNUM$1, *(uint8**)&TMP$144$1 );
	S$1 = vr$13;
	fb_StrDelete( &TMP$144$1 );
	EMITWRITESTR( S$1, 0ll );
	label$55:;
}

void EDBGEMITLINEFLUSH( struct $8FBSYMBOL* PROC$1, int64 LNUM$1, struct $8FBSYMBOL* LABEL$1 )
{
	FBSTRING TMP$145$1;
	FBSTRING TMP$146$1;
	FBSTRING TMP$147$1;
	label$60:;
	if( *(int64*)((uint8*)&ENV$ + 288ll) != 0ll ) goto label$63;
	{
		goto label$61;
	}
	label$63:;
	label$62:;
	__builtin_memset( &TMP$147$1, 0, 24ll );
	uint8* vr$2 = SYMBGETMANGLEDNAME( PROC$1 );
	uint8* vr$3 = SYMBGETMANGLEDNAME( LABEL$1 );
	__builtin_memset( &TMP$145$1, 0, 24ll );
	FBSTRING* vr$6 = fb_StrConcat( &TMP$145$1, (void*)vr$3, 0ll, (void*)"-", 2ll );
	__builtin_memset( &TMP$146$1, 0, 24ll );
	FBSTRING* vr$9 = fb_StrConcat( &TMP$146$1, (void*)vr$6, -1ll, (void*)vr$2, 0ll );
	FBSTRING* vr$11 = fb_StrAssign( (void*)&TMP$147$1, -1ll, (void*)vr$9, -1ll, 0 );
	HEMITSTABN( 68ll, 0ll, LNUM$1, *(uint8**)&TMP$147$1 );
	fb_StrDelete( &TMP$147$1 );
	label$61:;
}

void EDBGSCOPEBEGIN( struct $8FBSYMBOL* S$1 )
{
	label$64:;
	if( *(int64*)((uint8*)&ENV$ + 288ll) != 0ll ) goto label$67;
	{
		goto label$65;
	}
	label$67:;
	label$66:;
	*(int64*)((uint8*)S$1 + 120ll) = *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16712ll);
	struct $8FBSYMBOL* vr$3 = SYMBADDLABEL( (uint8*)0ull, 4ll );
	*(struct $8FBSYMBOL**)((uint8*)S$1 + 136ll) = vr$3;
	label$65:;
}

void EDBGSCOPEEND( struct $8FBSYMBOL* S$1 )
{
	label$68:;
	if( *(int64*)((uint8*)&ENV$ + 288ll) != 0ll ) goto label$71;
	{
		goto label$69;
	}
	label$71:;
	label$70:;
	*(int64*)((uint8*)S$1 + 128ll) = *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16712ll);
	struct $8FBSYMBOL* vr$3 = SYMBADDLABEL( (uint8*)0ull, 4ll );
	*(struct $8FBSYMBOL**)((uint8*)S$1 + 144ll) = vr$3;
	label$69:;
}

void EDBGEMITSCOPEINI( struct $8FBSYMBOL* S$1 )
{
	label$72:;
	if( *(int64*)((uint8*)&ENV$ + 288ll) != 0ll ) goto label$75;
	{
		goto label$73;
	}
	label$75:;
	label$74:;
	uint8* vr$2 = SYMBGETMANGLEDNAME( *(struct $8FBSYMBOL**)((uint8*)S$1 + 136ll) );
	HLABEL( vr$2 );
	label$73:;
}

void EDBGEMITSCOPEEND( struct $8FBSYMBOL* S$1 )
{
	label$76:;
	if( *(int64*)((uint8*)&ENV$ + 288ll) != 0ll ) goto label$79;
	{
		goto label$77;
	}
	label$79:;
	label$78:;
	uint8* vr$2 = SYMBGETMANGLEDNAME( *(struct $8FBSYMBOL**)((uint8*)S$1 + 144ll) );
	HLABEL( vr$2 );
	label$77:;
}

void EDBGPROCBEGIN( struct $8FBSYMBOL* PROC$1 )
{
	label$80:;
	*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 32ll) = *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16712ll);
	label$81:;
}

void EDBGPROCEND( struct $8FBSYMBOL* PROC$1 )
{
	label$82:;
	*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 40ll) = *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16712ll);
	label$83:;
}

void EDBGPROCEMITBEGIN( struct $8FBSYMBOL* PROC$1 )
{
	label$84:;
	*(int64*)((uint8*)&CTX$ + 40ll) = -1ll;
	*(int64*)((uint8*)&CTX$ + 48ll) = -1ll;
	label$85:;
}

void EDBGEMITPROCHEADER( struct $8FBSYMBOL* PROC$1 )
{
	label$94:;
	static FBSTRING DESC$1;
	static FBSTRING PROCNAME$1;
	if( *(int64*)((uint8*)&ENV$ + 288ll) != 0ll ) goto label$97;
	{
		goto label$95;
	}
	label$97:;
	label$96:;
	EDBGINCLUDE( *(uint8**)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 48ll) );
	if( (*(int64*)((uint8*)PROC$1 + 16ll) & 4096ll) == 0ll ) goto label$99;
	{
		FBSTRING TMP$148$2;
		uint8* vr$6 = SYMBGETMANGLEDNAME( PROC$1 );
		__builtin_memset( &TMP$148$2, 0, 24ll );
		FBSTRING* vr$8 = FBGETENTRYPOINT(  );
		FBSTRING* vr$10 = fb_StrAssign( (void*)&TMP$148$2, -1ll, (void*)vr$8, -1ll, 0 );
		HEMITSTABS( 42ll, *(uint8**)&TMP$148$2, 0ll, 1ll, vr$6 );
		fb_StrDelete( &TMP$148$2 );
		HEMITSTABD( 68ll, 0ll, 1ll );
		*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 32ll) = 1ll;
		*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 40ll) = *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16712ll);
		FBSTRING* vr$17 = FBGETENTRYPOINT(  );
		FBSTRING* vr$18 = fb_StrAssign( (void*)&DESC$1, -1ll, (void*)vr$17, -1ll, 0 );
	}
	goto label$98;
	label$99:;
	{
		uint8* vr$19 = SYMBGETDBGNAME( PROC$1 );
		fb_StrAssign( (void*)&DESC$1, -1ll, (void*)vr$19, 0ll, 0 );
	}
	label$98:;
	uint8* vr$20 = SYMBGETMANGLEDNAME( PROC$1 );
	fb_StrAssign( (void*)&PROCNAME$1, -1ll, (void*)vr$20, 0ll, 0 );
	if( (*(int64*)((uint8*)PROC$1 + 8ll) & 32ll) == 0ll ) goto label$101;
	{
		FBSTRING* vr$24 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)":F", 3ll, 0 );
	}
	goto label$100;
	label$101:;
	{
		FBSTRING* vr$25 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)":f", 3ll, 0 );
	}
	label$100:;
	FBSTRING* vr$26 = HGETDATATYPE( PROC$1, 0ll );
	FBSTRING* vr$27 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)vr$26, -1ll, 0 );
	HEMITSTABS( 36ll, *(uint8**)&DESC$1, 0ll, *(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 32ll), *(uint8**)&PROCNAME$1 );
	HDECLARGS( PROC$1 );
	*(int64*)((uint8*)&CTX$ + 32ll) = -1ll;
	*(int64*)((uint8*)&CTX$ + 16ll) = 0ll;
	*(int64*)((uint8*)&CTX$ + 24ll) = 0ll;
	*(struct $8FBSYMBOL**)((uint8*)&CTX$ + 8ll) = (struct $8FBSYMBOL*)0ull;
	label$95:;
}

void EDBGEMITPROCFOOTER( struct $8FBSYMBOL* PROC$1, struct $8FBSYMBOL* INITLABEL$1, struct $8FBSYMBOL* EXITLABEL$1 )
{
	FBSTRING TMP$158$1;
	FBSTRING TMP$159$1;
	FBSTRING TMP$160$1;
	label$123:;
	static FBSTRING PROCNAME$1;
	static FBSTRING LNAME$1;
	if( *(int64*)((uint8*)&ENV$ + 288ll) != 0ll ) goto label$126;
	{
		goto label$124;
	}
	label$126:;
	label$125:;
	uint8* vr$1 = SYMBGETMANGLEDNAME( PROC$1 );
	fb_StrAssign( (void*)&PROCNAME$1, -1ll, (void*)vr$1, 0ll, 0 );
	HDECLLOCALVARS( PROC$1, PROC$1, INITLABEL$1, EXITLABEL$1 );
	uint8* vr$2 = SYMBUNIQUELABEL(  );
	fb_StrAssign( (void*)&LNAME$1, -1ll, (void*)vr$2, 0ll, 0 );
	HLABEL( *(uint8**)&LNAME$1 );
	__builtin_memset( &TMP$160$1, 0, 24ll );
	__builtin_memset( &TMP$158$1, 0, 24ll );
	FBSTRING* vr$6 = fb_StrConcat( &TMP$158$1, (void*)&LNAME$1, -1ll, (void*)"-", 2ll );
	__builtin_memset( &TMP$159$1, 0, 24ll );
	FBSTRING* vr$9 = fb_StrConcat( &TMP$159$1, (void*)vr$6, -1ll, (void*)&PROCNAME$1, -1ll );
	FBSTRING* vr$11 = fb_StrAssign( (void*)&TMP$160$1, -1ll, (void*)vr$9, -1ll, 0 );
	HEMITSTABS( 36ll, (uint8*)"", 0ll, 0ll, *(uint8**)&TMP$160$1 );
	fb_StrDelete( &TMP$160$1 );
	*(int64*)((uint8*)&CTX$ + 32ll) = -1ll;
	*(int64*)((uint8*)&CTX$ + 16ll) = 0ll;
	*(int64*)((uint8*)&CTX$ + 24ll) = 0ll;
	*(struct $8FBSYMBOL**)((uint8*)&CTX$ + 8ll) = (struct $8FBSYMBOL*)0ull;
	label$124:;
}

void EDBGEMITGLOBALVAR( struct $8FBSYMBOL* SYM$1, int64 SECTION$1 )
{
	label$176:;
	int64 T$1;
	int64 ATTRIB$1;
	FBSTRING DESC$1;
	__builtin_memset( &DESC$1, 0, 24ll );
	if( *(int64*)((uint8*)&ENV$ + 288ll) != 0ll ) goto label$179;
	{
		fb_StrDelete( &DESC$1 );
		goto label$177;
	}
	label$179:;
	label$178:;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 128ll) == 0ll ) goto label$181;
	{
		fb_StrDelete( &DESC$1 );
		goto label$177;
	}
	label$181:;
	label$180:;
	{
		if( SECTION$1 != 0ll ) goto label$183;
		label$184:;
		{
			T$1 = 36ll;
		}
		goto label$182;
		label$183:;
		if( SECTION$1 != 2ll ) goto label$185;
		label$186:;
		{
			T$1 = 40ll;
		}
		goto label$182;
		label$185:;
		{
			T$1 = 38ll;
		}
		label$187:;
		label$182:;
	}
	uint8* vr$9 = SYMBGETDBGNAME( SYM$1 );
	fb_StrAssign( (void*)&DESC$1, -1ll, (void*)vr$9, 0ll, 0 );
	if( ((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 32ll) != 0ll) | (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 8ll) != 0ll)) == 0ll ) goto label$189;
	{
		FBSTRING* vr$20 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)":G", 3ll, 0 );
	}
	goto label$188;
	label$189:;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 2ll) == 0ll ) goto label$190;
	{
		FBSTRING* vr$25 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)":S", 3ll, 0 );
	}
	goto label$188;
	label$190:;
	{
		FBSTRING* vr$27 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)":", 2ll, 0 );
	}
	label$188:;
	FBSTRING* vr$28 = HGETDATATYPE( SYM$1, 0ll );
	FBSTRING* vr$30 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)vr$28, -1ll, 0 );
	uint8* vr$31 = SYMBGETMANGLEDNAME( SYM$1 );
	HEMITSTABS( T$1, *(uint8**)&DESC$1, 0ll, 0ll, vr$31 );
	fb_StrDelete( &DESC$1 );
	label$177:;
}

void EDBGEMITLOCALVAR( struct $8FBSYMBOL* SYM$1, int64 ISSTATIC$1 )
{
	label$191:;
	int64 T$1;
	FBSTRING DESC$1;
	__builtin_memset( &DESC$1, 0, 24ll );
	FBSTRING VALUE$1;
	__builtin_memset( &VALUE$1, 0, 24ll );
	if( *(int64*)((uint8*)&ENV$ + 288ll) != 0ll ) goto label$194;
	{
		fb_StrDelete( &VALUE$1 );
		fb_StrDelete( &DESC$1 );
		goto label$192;
	}
	label$194:;
	label$193:;
	fb_StrAssign( (void*)&DESC$1, -1ll, *(void**)((uint8*)SYM$1 + 24ll), 0ll, 0 );
	if( ISSTATIC$1 == 0ll ) goto label$196;
	{
		if( (int64)-((*(int64*)((uint8*)SYM$1 + 16ll) & 2ll) != 0ll) != 0ll ) goto label$198;
		{
			fb_StrDelete( &VALUE$1 );
			fb_StrDelete( &DESC$1 );
			goto label$192;
		}
		label$198:;
		label$197:;
		if( *(struct $7ASTNODE**)((uint8*)SYM$1 + 88ll) == (struct $7ASTNODE*)0ull ) goto label$200;
		{
			T$1 = 38ll;
		}
		goto label$199;
		label$200:;
		{
			T$1 = 40ll;
		}
		label$199:;
		FBSTRING* vr$17 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)":V", 3ll, 0 );
		uint8* vr$18 = SYMBGETMANGLEDNAME( SYM$1 );
		fb_StrAssign( (void*)&VALUE$1, -1ll, (void*)vr$18, 0ll, 0 );
	}
	goto label$195;
	label$196:;
	{
		T$1 = 128ll;
		FBSTRING* vr$21 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)":", 2ll, 0 );
		FBSTRING* vr$23 = fb_LongintToStr( *(int64*)((uint8*)SYM$1 + 80ll) );
		FBSTRING* vr$25 = fb_StrAssign( (void*)&VALUE$1, -1ll, (void*)vr$23, -1ll, 0 );
	}
	label$195:;
	FBSTRING* vr$26 = HGETDATATYPE( SYM$1, 0ll );
	FBSTRING* vr$28 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)vr$26, -1ll, 0 );
	HEMITSTABS( T$1, *(uint8**)&DESC$1, 0ll, 0ll, *(uint8**)&VALUE$1 );
	fb_StrDelete( &VALUE$1 );
	fb_StrDelete( &DESC$1 );
	label$192:;
}

void EDBGEMITPROCARG( struct $8FBSYMBOL* SYM$1 )
{
	FBSTRING TMP$202$1;
	FBSTRING TMP$205$1;
	label$201:;
	FBSTRING DESC$1;
	__builtin_memset( &DESC$1, 0, 24ll );
	if( *(int64*)((uint8*)&ENV$ + 288ll) != 0ll ) goto label$204;
	{
		fb_StrDelete( &DESC$1 );
		goto label$202;
	}
	label$204:;
	label$203:;
	__builtin_memset( &TMP$202$1, 0, 24ll );
	FBSTRING* vr$6 = fb_StrConcat( &TMP$202$1, *(void**)((uint8*)SYM$1 + 24ll), 0ll, (void*)":", 2ll );
	FBSTRING* vr$8 = fb_StrAssign( (void*)&DESC$1, -1ll, (void*)vr$6, -1ll, 0 );
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 131072ll) == 0ll ) goto label$206;
	{
		FBSTRING* vr$13 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)"p", 2ll, 0 );
	}
	goto label$205;
	label$206:;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 262144ll) == 0ll ) goto label$207;
	{
		FBSTRING* vr$18 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)"v", 2ll, 0 );
	}
	goto label$205;
	label$207:;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 65536ll) == 0ll ) goto label$208;
	{
		FBSTRING* vr$23 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)"v", 2ll, 0 );
	}
	label$208:;
	label$205:;
	FBSTRING* vr$24 = HGETDATATYPE( SYM$1, 0ll );
	FBSTRING* vr$26 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)vr$24, -1ll, 0 );
	__builtin_memset( &TMP$205$1, 0, 24ll );
	FBSTRING* vr$29 = fb_LongintToStr( *(int64*)((uint8*)SYM$1 + 80ll) );
	FBSTRING* vr$31 = fb_StrAssign( (void*)&TMP$205$1, -1ll, (void*)vr$29, -1ll, 0 );
	HEMITSTABS( 160ll, *(uint8**)&DESC$1, 0ll, 0ll, *(uint8**)&TMP$205$1 );
	fb_StrDelete( &TMP$205$1 );
	fb_StrDelete( &DESC$1 );
	label$202:;
}

void EDBGINCLUDE( uint8* INCFILE$1 )
{
	label$209:;
	FBSTRING LNAME$1;
	__builtin_memset( &LNAME$1, 0, 24ll );
	if( INCFILE$1 != *(uint8**)((uint8*)&CTX$ + 320ll) ) goto label$212;
	{
		fb_StrDelete( &LNAME$1 );
		goto label$210;
	}
	label$212:;
	label$211:;
	if( *(uint8**)((uint8*)&CTX$ + 320ll) == (uint8*)0ull ) goto label$214;
	{
		HEMITSTABS( 162ll, (uint8*)"", 0ll, 0ll, (uint8*)"0" );
		if( INCFILE$1 != (uint8*)0ull ) goto label$216;
		{
			(*(tmp$102*)((uint8*)&EMIT$ + 480ll))( 3ll, 0ll );
			uint8* vr$5 = SYMBUNIQUELABEL(  );
			fb_StrAssign( (void*)&LNAME$1, -1ll, (void*)vr$5, 0ll, 0 );
			HEMITSTABS( 132ll, (uint8*)((uint8*)&CTX$ + 56ll), 0ll, 0ll, *(uint8**)&LNAME$1 );
			HLABEL( *(uint8**)&LNAME$1 );
		}
		label$216:;
		label$215:;
	}
	label$214:;
	label$213:;
	*(uint8**)((uint8*)&CTX$ + 320ll) = INCFILE$1;
	if( INCFILE$1 == (uint8*)0ull ) goto label$218;
	{
		HEMITSTABS( 130ll, INCFILE$1, 0ll, 0ll, (uint8*)"0" );
		(*(tmp$102*)((uint8*)&EMIT$ + 480ll))( 3ll, 0ll );
		uint8* vr$9 = SYMBUNIQUELABEL(  );
		fb_StrAssign( (void*)&LNAME$1, -1ll, (void*)vr$9, 0ll, 0 );
		HEMITSTABS( 132ll, INCFILE$1, 0ll, 0ll, *(uint8**)&LNAME$1 );
		HLABEL( *(uint8**)&LNAME$1 );
	}
	label$218:;
	label$217:;
	fb_StrDelete( &LNAME$1 );
	label$210:;
}

__attribute__(( constructor )) static void fb_ctor__edbg_stab( void )
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

static void HEMITSTABS( int64 _TYPE$1, uint8* _STRING$1, int64 _OTHER$1, int64 _DESC$1, uint8* _VALUE$1 )
{
	FBSTRING TMP$126$1;
	FBSTRING TMP$129$1;
	label$12:;
	static FBSTRING OSTR$1;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)".stabs \x22", 9ll, 0 );
	uint8* vr$0 = HESCAPE( _STRING$1 );
	__builtin_memset( &TMP$126$1, 0, 24ll );
	FBSTRING* vr$3 = fb_StrConcat( &TMP$126$1, (void*)&OSTR$1, -1ll, (void*)vr$0, 0ll );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$3, -1ll, 0 );
	FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)"\x22,", 3ll, 0 );
	FBSTRING* vr$6 = fb_LongintToStr( _TYPE$1 );
	FBSTRING* vr$7 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)vr$6, -1ll, 0 );
	FBSTRING* vr$8 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)",", 2ll, 0 );
	FBSTRING* vr$9 = fb_LongintToStr( _OTHER$1 );
	FBSTRING* vr$10 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)vr$9, -1ll, 0 );
	FBSTRING* vr$11 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)",", 2ll, 0 );
	FBSTRING* vr$12 = fb_LongintToStr( _DESC$1 );
	FBSTRING* vr$13 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)vr$12, -1ll, 0 );
	FBSTRING* vr$14 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)",", 2ll, 0 );
	__builtin_memset( &TMP$129$1, 0, 24ll );
	FBSTRING* vr$17 = fb_StrConcat( &TMP$129$1, (void*)&OSTR$1, -1ll, (void*)_VALUE$1, 0ll );
	FBSTRING* vr$18 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$17, -1ll, 0 );
	EMITWRITESTR( *(uint8**)&OSTR$1, -1ll );
	label$13:;
}

static uint8* HMAKESTABN( int64 _TYPE$1, int64 _OTHER$1, int64 _DESC$1, uint8* _VALUE$1 )
{
	FBSTRING TMP$131$1;
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$14:;
	static FBSTRING OSTR$1;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)".stabn ", 8ll, 0 );
	FBSTRING* vr$1 = fb_LongintToStr( _TYPE$1 );
	FBSTRING* vr$2 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)vr$1, -1ll, 0 );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)",", 2ll, 0 );
	FBSTRING* vr$4 = fb_LongintToStr( _OTHER$1 );
	FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)vr$4, -1ll, 0 );
	FBSTRING* vr$6 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)",", 2ll, 0 );
	FBSTRING* vr$7 = fb_LongintToStr( _DESC$1 );
	FBSTRING* vr$8 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)vr$7, -1ll, 0 );
	FBSTRING* vr$9 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)",", 2ll, 0 );
	__builtin_memset( &TMP$131$1, 0, 24ll );
	FBSTRING* vr$12 = fb_StrConcat( &TMP$131$1, (void*)&OSTR$1, -1ll, (void*)_VALUE$1, 0ll );
	FBSTRING* vr$13 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$12, -1ll, 0 );
	fb$result$1 = *(uint8**)&OSTR$1;
	label$15:;
	return fb$result$1;
}

static void HEMITSTABN( int64 _TYPE$1, int64 _OTHER$1, int64 _DESC$1, uint8* _VALUE$1 )
{
	label$16:;
	uint8* vr$0 = HMAKESTABN( _TYPE$1, _OTHER$1, _DESC$1, _VALUE$1 );
	EMITWRITESTR( vr$0, -1ll );
	label$17:;
}

static void HEMITSTABD( int64 _TYPE$1, int64 _OTHER$1, int64 _DESC$1 )
{
	label$18:;
	static FBSTRING OSTR$1;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)".stabd ", 8ll, 0 );
	FBSTRING* vr$0 = fb_LongintToStr( _TYPE$1 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)vr$0, -1ll, 0 );
	FBSTRING* vr$2 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)",", 2ll, 0 );
	FBSTRING* vr$3 = fb_LongintToStr( _OTHER$1 );
	FBSTRING* vr$4 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)vr$3, -1ll, 0 );
	FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)",", 2ll, 0 );
	FBSTRING* vr$6 = fb_LongintToStr( _DESC$1 );
	FBSTRING* vr$7 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)vr$6, -1ll, 0 );
	EMITWRITESTR( *(uint8**)&OSTR$1, -1ll );
	label$19:;
}

static void HLABEL( uint8* LABEL$1 )
{
	label$20:;
	static FBSTRING OSTR$1;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)LABEL$1, 0ll, 0 );
	FBSTRING* vr$0 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)":", 2ll, 0 );
	EMITWRITESTR( *(uint8**)&OSTR$1, 0ll );
	label$21:;
}

static void HDECLARGS( struct $8FBSYMBOL* PROC$1 )
{
	label$86:;
	struct $8FBSYMBOL* S$1;
	S$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 96ll);
	label$88:;
	if( S$1 == (struct $8FBSYMBOL*)0ull ) goto label$89;
	{
		if( *(int64*)S$1 != 1ll ) goto label$91;
		{
			if( (*(int64*)((uint8*)S$1 + 8ll) & 458752ll) == 0ll ) goto label$93;
			{
				EDBGEMITPROCARG( S$1 );
			}
			label$93:;
			label$92:;
		}
		label$91:;
		label$90:;
		S$1 = *(struct $8FBSYMBOL**)((uint8*)S$1 + 296ll);
	}
	goto label$88;
	label$89:;
	label$87:;
}

static void HDECLLOCALVARS( struct $8FBSYMBOL* PROC$1, struct $8FBSYMBOL* BLK$1, struct $8FBSYMBOL* INILABEL$1, struct $8FBSYMBOL* ENDLABEL$1 )
{
	FBSTRING TMP$152$1;
	FBSTRING TMP$153$1;
	FBSTRING TMP$154$1;
	FBSTRING TMP$155$1;
	FBSTRING TMP$156$1;
	FBSTRING TMP$157$1;
	label$102:;
	struct $8FBSYMBOL* SHEAD$1;
	__builtin_memset( &SHEAD$1, 0, 8ll );
	struct $8FBSYMBOL* S$1;
	__builtin_memset( &S$1, 0, 8ll );
	static int64 SCOPECNT$1;
	if( *(int64*)BLK$1 != 3ll ) goto label$105;
	{
		SHEAD$1 = *(struct $8FBSYMBOL**)((uint8*)BLK$1 + 96ll);
	}
	goto label$104;
	label$105:;
	{
		SHEAD$1 = *(struct $8FBSYMBOL**)((uint8*)BLK$1 + 104ll);
	}
	label$104:;
	SCOPECNT$1 = 0ll;
	S$1 = SHEAD$1;
	label$106:;
	if( S$1 == (struct $8FBSYMBOL*)0ull ) goto label$107;
	{
		{
			$12FB_SYMBCLASS TMP$151$3;
			TMP$151$3 = *($12FB_SYMBCLASS*)S$1;
			if( TMP$151$3 != 1ll ) goto label$109;
			label$110:;
			{
				if( (*(int64*)((uint8*)S$1 + 8ll) & 21430276ll) != 0ll ) goto label$112;
				{
					if( (int64)-((*(int64*)((uint8*)S$1 + 16ll) & 16ll) != 0ll) != 0ll ) goto label$114;
					{
						EDBGEMITLOCALVAR( S$1, (int64)-((*(int64*)((uint8*)S$1 + 8ll) & 2ll) != 0ll) );
					}
					label$114:;
					label$113:;
				}
				label$112:;
				label$111:;
			}
			goto label$108;
			label$109:;
			if( TMP$151$3 != 15ll ) goto label$115;
			label$116:;
			{
				SCOPECNT$1 = SCOPECNT$1 + 1ll;
			}
			label$115:;
			label$108:;
		}
		S$1 = *(struct $8FBSYMBOL**)((uint8*)S$1 + 296ll);
	}
	goto label$106;
	label$107:;
	__builtin_memset( &TMP$154$1, 0, 24ll );
	uint8* vr$23 = SYMBGETMANGLEDNAME( PROC$1 );
	uint8* vr$24 = SYMBGETMANGLEDNAME( INILABEL$1 );
	__builtin_memset( &TMP$152$1, 0, 24ll );
	FBSTRING* vr$27 = fb_StrConcat( &TMP$152$1, (void*)vr$24, 0ll, (void*)"-", 2ll );
	__builtin_memset( &TMP$153$1, 0, 24ll );
	FBSTRING* vr$30 = fb_StrConcat( &TMP$153$1, (void*)vr$27, -1ll, (void*)vr$23, 0ll );
	FBSTRING* vr$32 = fb_StrAssign( (void*)&TMP$154$1, -1ll, (void*)vr$30, -1ll, 0 );
	HEMITSTABN( 192ll, 0ll, 0ll, *(uint8**)&TMP$154$1 );
	fb_StrDelete( &TMP$154$1 );
	if( SCOPECNT$1 <= 0ll ) goto label$118;
	{
		S$1 = SHEAD$1;
		label$119:;
		if( S$1 == (struct $8FBSYMBOL*)0ull ) goto label$120;
		{
			if( *(int64*)S$1 != 15ll ) goto label$122;
			{
				HDECLLOCALVARS( PROC$1, S$1, *(struct $8FBSYMBOL**)((uint8*)S$1 + 136ll), *(struct $8FBSYMBOL**)((uint8*)S$1 + 144ll) );
			}
			label$122:;
			label$121:;
			S$1 = *(struct $8FBSYMBOL**)((uint8*)S$1 + 296ll);
		}
		goto label$119;
		label$120:;
	}
	label$118:;
	label$117:;
	__builtin_memset( &TMP$157$1, 0, 24ll );
	uint8* vr$42 = SYMBGETMANGLEDNAME( PROC$1 );
	uint8* vr$43 = SYMBGETMANGLEDNAME( ENDLABEL$1 );
	__builtin_memset( &TMP$155$1, 0, 24ll );
	FBSTRING* vr$46 = fb_StrConcat( &TMP$155$1, (void*)vr$43, 0ll, (void*)"-", 2ll );
	__builtin_memset( &TMP$156$1, 0, 24ll );
	FBSTRING* vr$49 = fb_StrConcat( &TMP$156$1, (void*)vr$46, -1ll, (void*)vr$42, 0ll );
	FBSTRING* vr$51 = fb_StrAssign( (void*)&TMP$157$1, -1ll, (void*)vr$49, -1ll, 0 );
	HEMITSTABN( 224ll, 0ll, 0ll, *(uint8**)&TMP$157$1 );
	fb_StrDelete( &TMP$157$1 );
	label$103:;
}

static FBSTRING* HDECLPOINTER( int64* DTYPE$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$127:;
	static FBSTRING DESC$1;
	fb_StrAssign( (void*)&DESC$1, -1ll, (void*)"", 1ll, 0 );
	label$129:;
	if( (*DTYPE$1 & 480ll) == 0ll ) goto label$130;
	{
		*DTYPE$1 = ((*DTYPE$1 & 31ll) | ((*DTYPE$1 & 480ll) + -32ll)) | (((*DTYPE$1 & 261632ll) >> 1ll) & 261632ll);
		FBSTRING* vr$16 = fb_ULongintToStr( *(uint64*)&CTX$ );
		FBSTRING* vr$17 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)vr$16, -1ll, 0 );
		FBSTRING* vr$18 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)"=*", 3ll, 0 );
		*(uint64*)&CTX$ = *(uint64*)&CTX$ + 1ull;
	}
	goto label$129;
	label$130:;
	FBSTRING* vr$21 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&DESC$1, -1ll, 0 );
	label$128:;
	FBSTRING* vr$23 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$23;
}

static FBSTRING* HGETDATATYPE( struct $8FBSYMBOL* SYM$1, int64 REQUESTEDDIMTBELEMENTS$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$131:;
	int64 DTYPE$1;
	int64 DIMTBELEMENTS$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	FBSTRING DESC$1;
	__builtin_memset( &DESC$1, 0, 24ll );
	if( SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$134;
	{
		FBSTRING* vr$3 = fb_LongintToStr( *(int64*)REMAPTB$ );
		fb_StrInit( (void*)&fb$result$1, -1ll, (void*)vr$3, -1ll, 0 );
		fb_StrDelete( &DESC$1 );
		goto label$132;
	}
	label$134:;
	label$133:;
	DIMTBELEMENTS$1 = 0ll;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 65536ll) == 0ll ) goto label$136;
	{
		DTYPE$1 = 18ll;
		SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 136ll);
		DIMTBELEMENTS$1 = *(int64*)((uint8*)SYM$1 + 96ll);
	}
	goto label$135;
	label$136:;
	{
		DTYPE$1 = *(int64*)((uint8*)SYM$1 + 48ll) & 511ll;
		SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll);
		if( ((int64)-(*(int64*)SYM$1 == 1ll) | (int64)-(*(int64*)SYM$1 == 12ll)) == 0ll ) goto label$138;
		{
			if( *(int64*)((uint8*)SYM$1 + 96ll) <= 0ll ) goto label$140;
			{
				FBSTRING* vr$22 = fb_ULongintToStr( *(uint64*)&CTX$ );
				FBSTRING* vr$24 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)vr$22, -1ll, 0 );
				FBSTRING* vr$26 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)"=", 2ll, 0 );
				*(uint64*)&CTX$ = *(uint64*)&CTX$ + 1ull;
				if( REQUESTEDDIMTBELEMENTS$1 <= 0ll ) goto label$142;
				{
					FBSTRING* vr$30 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)"ar1;", 5ll, 0 );
					FBSTRING* vr$32 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)"0;", 3ll, 0 );
					FBSTRING* vr$34 = fb_LongintToStr( REQUESTEDDIMTBELEMENTS$1 + -1ll );
					FBSTRING* vr$36 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)vr$34, -1ll, 0 );
					FBSTRING* vr$38 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)";", 2ll, 0 );
				}
				goto label$141;
				label$142:;
				{
					{
						int64 I$6;
						I$6 = 0ll;
						int64 TMP$166$6;
						TMP$166$6 = *(int64*)((uint8*)SYM$1 + 96ll) + -1ll;
						goto label$143;
						label$146:;
						{
							FBSTRING TMP$167$7;
							FBSTRING TMP$168$7;
							FBSTRING TMP$169$7;
							FBSTRING TMP$170$7;
							FBSTRING* vr$42 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)"ar1;", 5ll, 0 );
							FBSTRING* vr$46 = fb_LongintToStr( *(int64*)((uint8*)*(struct $10FBARRAYDIM**)((uint8*)SYM$1 + 104ll) + (I$6 << 4ll)) );
							__builtin_memset( &TMP$167$7, 0, 24ll );
							FBSTRING* vr$49 = fb_StrConcat( &TMP$167$7, (void*)vr$46, -1ll, (void*)";", 2ll );
							__builtin_memset( &TMP$168$7, 0, 24ll );
							FBSTRING* vr$53 = fb_StrConcat( &TMP$168$7, (void*)&DESC$1, -1ll, (void*)vr$49, -1ll );
							FBSTRING* vr$55 = fb_StrAssign( (void*)&DESC$1, -1ll, (void*)vr$53, -1ll, 0 );
							FBSTRING* vr$59 = fb_LongintToStr( *(int64*)((uint8*)((uint8*)*(struct $10FBARRAYDIM**)((uint8*)SYM$1 + 104ll) + (I$6 << 4ll)) + 8ll) );
							__builtin_memset( &TMP$169$7, 0, 24ll );
							FBSTRING* vr$62 = fb_StrConcat( &TMP$169$7, (void*)vr$59, -1ll, (void*)";", 2ll );
							__builtin_memset( &TMP$170$7, 0, 24ll );
							FBSTRING* vr$66 = fb_StrConcat( &TMP$170$7, (void*)&DESC$1, -1ll, (void*)vr$62, -1ll );
							FBSTRING* vr$68 = fb_StrAssign( (void*)&DESC$1, -1ll, (void*)vr$66, -1ll, 0 );
						}
						label$144:;
						I$6 = I$6 + 1ll;
						label$143:;
						if( I$6 <= TMP$166$6 ) goto label$146;
						label$145:;
					}
				}
				label$141:;
			}
			label$140:;
			label$139:;
			if( (*(int64*)((uint8*)SYM$1 + 8ll) & 8388608ll) == 0ll ) goto label$148;
			{
				DIMTBELEMENTS$1 = *(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)SYM$1 + 144ll) + 96ll);
			}
			label$148:;
			label$147:;
		}
		label$138:;
		label$137:;
	}
	label$135:;
	if( DIMTBELEMENTS$1 >= 0ll ) goto label$150;
	{
		DIMTBELEMENTS$1 = 1ll;
	}
	label$150:;
	label$149:;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$152;
	{
		FBSTRING* vr$80 = HDECLPOINTER( &DTYPE$1 );
		FBSTRING* vr$82 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)vr$80, -1ll, 0 );
	}
	label$152:;
	label$151:;
	DTYPE$1 = DTYPE$1 & -513ll;
	{
		uint64 TMP$171$2;
		TMP$171$2 = (uint64)DTYPE$1;
		goto label$154;
		label$155:;
		{
			FBSTRING TMP$172$3;
			if( *(int64*)((uint8*)SUBTYPE$1 + 216ll) != -1ll ) goto label$157;
			{
				HDECLUDT( SUBTYPE$1, DIMTBELEMENTS$1 );
			}
			label$157:;
			label$156:;
			FBSTRING* vr$87 = fb_LongintToStr( *(int64*)((uint8*)SUBTYPE$1 + 216ll) );
			__builtin_memset( &TMP$172$3, 0, 24ll );
			FBSTRING* vr$91 = fb_StrConcat( &TMP$172$3, (void*)&DESC$1, -1ll, (void*)vr$87, -1ll );
			FBSTRING* vr$93 = fb_StrAssign( (void*)&DESC$1, -1ll, (void*)vr$91, -1ll, 0 );
		}
		goto label$153;
		label$158:;
		{
			FBSTRING TMP$173$3;
			if( *(int64*)((uint8*)SUBTYPE$1 + 176ll) != -1ll ) goto label$160;
			{
				HDECLENUM( SUBTYPE$1 );
			}
			label$160:;
			label$159:;
			FBSTRING* vr$97 = fb_LongintToStr( *(int64*)((uint8*)SUBTYPE$1 + 176ll) );
			__builtin_memset( &TMP$173$3, 0, 24ll );
			FBSTRING* vr$101 = fb_StrConcat( &TMP$173$3, (void*)&DESC$1, -1ll, (void*)vr$97, -1ll );
			FBSTRING* vr$103 = fb_StrAssign( (void*)&DESC$1, -1ll, (void*)vr$101, -1ll, 0 );
		}
		goto label$153;
		label$161:;
		{
			FBSTRING* vr$104 = fb_ULongintToStr( *(uint64*)&CTX$ );
			FBSTRING* vr$106 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)vr$104, -1ll, 0 );
			FBSTRING* vr$108 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)"=f", 3ll, 0 );
			*(uint64*)&CTX$ = *(uint64*)&CTX$ + 1ull;
			FBSTRING* vr$110 = HGETDATATYPE( SUBTYPE$1, 0ll );
			FBSTRING* vr$112 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)vr$110, -1ll, 0 );
		}
		goto label$153;
		label$162:;
		{
			FBSTRING* vr$113 = fb_LongintToStr( *(int64*)REMAPTB$ );
			FBSTRING* vr$115 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)vr$113, -1ll, 0 );
		}
		goto label$153;
		label$163:;
		{
			FBSTRING* vr$117 = fb_LongintToStr( *(int64*)((uint8*)REMAPTB$ + (DTYPE$1 << 3ll)) );
			FBSTRING* vr$119 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)vr$117, -1ll, 0 );
		}
		goto label$153;
		label$154:;
		static const void* tmp$206[13ll] = {
			&&label$158,
			&&label$163,
			&&label$163,
			&&label$163,
			&&label$163,
			&&label$163,
			&&label$163,
			&&label$163,
			&&label$163,
			&&label$155,
			&&label$163,
			&&label$161,
			&&label$162,
		};
		if( TMP$171$2 < 9ll ) goto label$163;
		if( TMP$171$2 > 21ll ) goto label$163;
		goto *tmp$206[TMP$171$2 - 9ll];
		label$153:;
	}
	FBSTRING* vr$122 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&DESC$1, -1ll, 0 );
	fb_StrDelete( &DESC$1 );
	label$132:;
	FBSTRING* vr$125 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$125;
}

static void HDECLUDT( struct $8FBSYMBOL* SYM$1, int64 DIMTBELEMENTS$1 )
{
	FBSTRING TMP$177$1;
	FBSTRING TMP$178$1;
	FBSTRING TMP$179$1;
	FBSTRING TMP$180$1;
	label$164:;
	struct $8FBSYMBOL* FLD$1;
	FBSTRING DESC$1;
	__builtin_memset( &DESC$1, 0, 24ll );
	*(int64*)((uint8*)SYM$1 + 216ll) = *(int64*)&CTX$;
	*(uint64*)&CTX$ = *(uint64*)&CTX$ + 1ull;
	uint8* vr$3 = SYMBGETDBGNAME( SYM$1 );
	fb_StrAssign( (void*)&DESC$1, -1ll, (void*)vr$3, 0ll, 0 );
	FBSTRING* vr$6 = fb_LongintToStr( *(int64*)((uint8*)SYM$1 + 72ll) );
	FBSTRING* vr$8 = fb_LongintToStr( *(int64*)((uint8*)SYM$1 + 216ll) );
	__builtin_memset( &TMP$177$1, 0, 24ll );
	FBSTRING* vr$11 = fb_StrConcat( &TMP$177$1, (void*)":Tt", 4ll, (void*)vr$8, -1ll );
	__builtin_memset( &TMP$178$1, 0, 24ll );
	FBSTRING* vr$14 = fb_StrConcat( &TMP$178$1, (void*)vr$11, -1ll, (void*)"=s", 3ll );
	__builtin_memset( &TMP$179$1, 0, 24ll );
	FBSTRING* vr$17 = fb_StrConcat( &TMP$179$1, (void*)vr$14, -1ll, (void*)vr$6, -1ll );
	__builtin_memset( &TMP$180$1, 0, 24ll );
	FBSTRING* vr$21 = fb_StrConcat( &TMP$180$1, (void*)&DESC$1, -1ll, (void*)vr$17, -1ll );
	FBSTRING* vr$23 = fb_StrAssign( (void*)&DESC$1, -1ll, (void*)vr$21, -1ll, 0 );
	struct $8FBSYMBOL* vr$24 = SYMBUDTGETFIRSTFIELD( SYM$1 );
	FLD$1 = vr$24;
	label$166:;
	if( FLD$1 == (struct $8FBSYMBOL*)0ull ) goto label$167;
	{
		if( (int64)-((*(int64*)((uint8*)FLD$1 + 8ll) & 4ll) != 0ll) != 0ll ) goto label$169;
		{
			FBSTRING TMP$181$3;
			FBSTRING TMP$182$3;
			FBSTRING TMP$183$3;
			int64 TMP$184$3;
			FBSTRING TMP$185$3;
			FBSTRING TMP$186$3;
			int64 TMP$187$3;
			FBSTRING TMP$188$3;
			FBSTRING TMP$189$3;
			FBSTRING* vr$30 = HGETDATATYPE( FLD$1, DIMTBELEMENTS$1 );
			__builtin_memset( &TMP$181$3, 0, 24ll );
			FBSTRING* vr$34 = fb_StrConcat( &TMP$181$3, *(void**)((uint8*)FLD$1 + 24ll), 0ll, (void*)":", 2ll );
			__builtin_memset( &TMP$182$3, 0, 24ll );
			FBSTRING* vr$37 = fb_StrConcat( &TMP$182$3, (void*)vr$34, -1ll, (void*)vr$30, -1ll );
			__builtin_memset( &TMP$183$3, 0, 24ll );
			FBSTRING* vr$41 = fb_StrConcat( &TMP$183$3, (void*)&DESC$1, -1ll, (void*)vr$37, -1ll );
			FBSTRING* vr$43 = fb_StrAssign( (void*)&DESC$1, -1ll, (void*)vr$41, -1ll, 0 );
			if( *(int64*)((uint8*)FLD$1 + 184ll) <= 0ll ) goto label$170;
			TMP$184$3 = *(int64*)((uint8*)FLD$1 + 176ll);
			goto label$219;
			label$170:;
			TMP$184$3 = 0ll;
			label$219:;
			FBSTRING* vr$50 = fb_LongintToStr( (*(int64*)((uint8*)FLD$1 + 80ll) << 3ll) + TMP$184$3 );
			__builtin_memset( &TMP$185$3, 0, 24ll );
			FBSTRING* vr$53 = fb_StrConcat( &TMP$185$3, (void*)",", 2ll, (void*)vr$50, -1ll );
			__builtin_memset( &TMP$186$3, 0, 24ll );
			FBSTRING* vr$57 = fb_StrConcat( &TMP$186$3, (void*)&DESC$1, -1ll, (void*)vr$53, -1ll );
			FBSTRING* vr$59 = fb_StrAssign( (void*)&DESC$1, -1ll, (void*)vr$57, -1ll, 0 );
			if( *(int64*)((uint8*)FLD$1 + 184ll) <= 0ll ) goto label$171;
			TMP$187$3 = *(int64*)((uint8*)FLD$1 + 184ll);
			goto label$220;
			label$171:;
			TMP$187$3 = (*(int64*)((uint8*)FLD$1 + 72ll) * *(int64*)((uint8*)FLD$1 + 120ll)) << 3ll;
			label$220:;
			FBSTRING* vr$67 = fb_LongintToStr( TMP$187$3 );
			__builtin_memset( &TMP$188$3, 0, 24ll );
			FBSTRING* vr$70 = fb_StrConcat( &TMP$188$3, (void*)",", 2ll, (void*)vr$67, -1ll );
			__builtin_memset( &TMP$189$3, 0, 24ll );
			FBSTRING* vr$74 = fb_StrConcat( &TMP$189$3, (void*)&DESC$1, -1ll, (void*)vr$70, -1ll );
			FBSTRING* vr$76 = fb_StrAssign( (void*)&DESC$1, -1ll, (void*)vr$74, -1ll, 0 );
			FBSTRING* vr$78 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)";", 2ll, 0 );
		}
		label$169:;
		label$168:;
		struct $8FBSYMBOL* vr$79 = SYMBUDTGETNEXTFIELD( FLD$1 );
		FLD$1 = vr$79;
	}
	goto label$166;
	label$167:;
	FBSTRING* vr$81 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)";", 2ll, 0 );
	HEMITSTABS( 128ll, *(uint8**)&DESC$1, 0ll, 0ll, (uint8*)"0" );
	fb_StrDelete( &DESC$1 );
	label$165:;
}

static void HDECLENUM( struct $8FBSYMBOL* SYM$1 )
{
	FBSTRING TMP$192$1;
	FBSTRING TMP$193$1;
	FBSTRING TMP$194$1;
	label$172:;
	struct $8FBSYMBOL* E$1;
	__builtin_memset( &E$1, 0, 8ll );
	FBSTRING DESC$1;
	__builtin_memset( &DESC$1, 0, 24ll );
	*(int64*)((uint8*)SYM$1 + 176ll) = *(int64*)&CTX$;
	*(uint64*)&CTX$ = *(uint64*)&CTX$ + 1ull;
	uint8* vr$4 = SYMBGETDBGNAME( SYM$1 );
	fb_StrAssign( (void*)&DESC$1, -1ll, (void*)vr$4, 0ll, 0 );
	FBSTRING* vr$7 = fb_LongintToStr( *(int64*)((uint8*)SYM$1 + 176ll) );
	__builtin_memset( &TMP$192$1, 0, 24ll );
	FBSTRING* vr$10 = fb_StrConcat( &TMP$192$1, (void*)":T", 3ll, (void*)vr$7, -1ll );
	__builtin_memset( &TMP$193$1, 0, 24ll );
	FBSTRING* vr$13 = fb_StrConcat( &TMP$193$1, (void*)vr$10, -1ll, (void*)"=e", 3ll );
	__builtin_memset( &TMP$194$1, 0, 24ll );
	FBSTRING* vr$17 = fb_StrConcat( &TMP$194$1, (void*)&DESC$1, -1ll, (void*)vr$13, -1ll );
	FBSTRING* vr$19 = fb_StrAssign( (void*)&DESC$1, -1ll, (void*)vr$17, -1ll, 0 );
	struct $8FBSYMBOL* vr$20 = SYMBGETENUMFIRSTELM( SYM$1 );
	E$1 = vr$20;
	label$174:;
	if( E$1 == (struct $8FBSYMBOL*)0ull ) goto label$175;
	{
		FBSTRING TMP$195$2;
		FBSTRING TMP$196$2;
		FBSTRING TMP$197$2;
		FBSTRING TMP$198$2;
		FBSTRING* vr$23 = fb_LongintToStr( *(int64*)((uint8*)E$1 + 88ll) );
		__builtin_memset( &TMP$195$2, 0, 24ll );
		FBSTRING* vr$27 = fb_StrConcat( &TMP$195$2, *(void**)((uint8*)E$1 + 24ll), 0ll, (void*)":", 2ll );
		__builtin_memset( &TMP$196$2, 0, 24ll );
		FBSTRING* vr$30 = fb_StrConcat( &TMP$196$2, (void*)vr$27, -1ll, (void*)vr$23, -1ll );
		__builtin_memset( &TMP$197$2, 0, 24ll );
		FBSTRING* vr$33 = fb_StrConcat( &TMP$197$2, (void*)vr$30, -1ll, (void*)",", 2ll );
		__builtin_memset( &TMP$198$2, 0, 24ll );
		FBSTRING* vr$37 = fb_StrConcat( &TMP$198$2, (void*)&DESC$1, -1ll, (void*)vr$33, -1ll );
		FBSTRING* vr$39 = fb_StrAssign( (void*)&DESC$1, -1ll, (void*)vr$37, -1ll, 0 );
		struct $8FBSYMBOL* vr$40 = SYMBGETENUMNEXTELM( E$1 );
		E$1 = vr$40;
	}
	goto label$174;
	label$175:;
	FBSTRING* vr$42 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)";", 2ll, 0 );
	HEMITSTABS( 128ll, *(uint8**)&DESC$1, 0ll, 0ll, (uint8*)"0" );
	fb_StrDelete( &DESC$1 );
	label$173:;
}

// Total compilation time: 0.03769796469714493 seconds.
