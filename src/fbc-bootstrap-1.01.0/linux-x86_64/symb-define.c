// Compilation of FreeBASIC-1.01.0-source/src/compiler/symb-define.bas started at 16:30:15 on 02-28-2015

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
typedef FBSTRING* (*tmp$26)( void );
typedef int64 $15FB_DEFINE_FLAGS;
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
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
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
typedef int64 $7FB_LANG;
typedef int64 $10FB_BACKEND;
void free( void* );
FBSTRING* fb_StrInit( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
uint32* fb_WstrAssign( uint32*, int64, uint32* );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
FBSTRING* fb_StrAllocTempResult( FBSTRING* );
FBSTRING* fb_StrAllocTempDescZ( uint8* );
FBSTRING* fb_LongintToStr( int64 );
int64 fb_StrLen( void*, int64 );
FBSTRING* fb_StrUcase2( FBSTRING*, int32 );
FBSTRING* fb_Time( void );
FBSTRING* fb_Date( void );
static void fb_ctor__symbzdefine( void ) __attribute__(( constructor ));
void* XALLOCATE( int32 );
void LISTINIT( struct $5TLIST*, int64, int64, $10LIST_FLAGS );
void LISTEND( struct $5TLIST* );
void* LISTNEWNODE( struct $5TLIST* );
void LISTDELNODE( struct $5TLIST*, void* );
void HASHINIT( struct $5THASH*, int64, int64 );
void HASHEND( struct $5THASH* );
uint64 HASHHASH( uint8* );
void* HASHLOOKUPEX( struct $5THASH*, uint8*, uint64 );
struct $8HASHITEM* HASHADD( struct $5THASH*, uint8*, void*, uint64 );
void HASHDEL( struct $5THASH*, struct $8HASHITEM*, uint64 );
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
int64 FBGETOPTION( int64 );
int64 FBIS64BIT( void );
int64 FBGETCPUFAMILY( void );
FBSTRING* FBGETLANGNAME( $7FB_LANG );
struct $8FBSYMBOL* SYMBADDDEFINE( uint8*, uint8*, int64, int64, tmp$26, $15FB_DEFINE_FLAGS );
struct $9FB_DEFTOK* SYMBDELDEFINETOK( struct $9FB_DEFTOK* );
typedef int64 $10FB_SYMBOPT;
struct $8FBSYMBOL* SYMBNEWSYMBOL( $10FB_SYMBOPT, struct $8FBSYMBOL*, struct $10FBSYMBOLTB*, struct $8FBHASHTB*, $12FB_SYMBCLASS, uint8*, uint8*, int64, struct $8FBSYMBOL*, $13FB_SYMBATTRIB );
void SYMBFREESYMBOL( struct $8FBSYMBOL* );
uint8* SYMBGETFULLPROCNAME( struct $8FBSYMBOL* );
void HUCASE( uint8*, uint8* );
FBSTRING* FBGETINPUTFILEPARENTDIR( void );
double fb_Now( void );
FBSTRING* fb_StrFormat( double, FBSTRING* );
static FBSTRING* HDEFFILE_CB( void );
static FBSTRING* HDEFFPMODE_CB( void );
static FBSTRING* HDEFFPU_CB( void );
static FBSTRING* HDEFFUNCTION_CB( void );
static FBSTRING* HDEFLINE_CB( void );
static FBSTRING* HDEFDATE_CB( void );
static FBSTRING* HDEFDATEISO_CB( void );
static FBSTRING* HDEFTIME_CB( void );
static FBSTRING* HDEFMULTITHREAD_CB( void );
static FBSTRING* HDEFOPTBYVAL_CB( void );
static FBSTRING* HDEFOPTDYNAMIC_CB( void );
static FBSTRING* HDEFOPTESCAPE_CB( void );
static FBSTRING* HDEFOPTEXPLICIT_CB( void );
static FBSTRING* HDEFOPTPRIVATE_CB( void );
static FBSTRING* HDEFOPTGOSUB_CB( void );
static FBSTRING* HDEFOUTEXE_CB( void );
static FBSTRING* HDEFOUTLIB_CB( void );
static FBSTRING* HDEFOUTDLL_CB( void );
static FBSTRING* HDEFOUTOBJ_CB( void );
static FBSTRING* HDEFDEBUG_CB( void );
static FBSTRING* HDEFERR_CB( void );
static FBSTRING* HDEFLANG_CB( void );
static FBSTRING* HDEFBACKEND_CB( void );
static FBSTRING* HDEFPATH_CB( void );
static FBSTRING* HDEFGCC_CB( void );
static void HRESETDEFHASH( void );
static void HDELDEFINEPARAMS( struct $8FBSYMBOL* );
static void HDELDEFINETOKENS( struct $8FBSYMBOL* );
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
typedef int64 $13FB_COMPTARGET;
typedef int64 $10FB_CPUTYPE;
typedef int64 $10FB_FPUTYPE;
typedef int64 $9FB_FPMODE;
typedef int64 $17FB_VECTORIZELEVEL;
typedef int64 $12FB_ASMSYNTAX;
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
typedef int64 $8FB_TOKEN;
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
struct $7SYMBDEF {
	uint8* NAME;
	uint8* VALUE;
	int64 FLAGS;
	tmp$26 PROC;
};
__FB_STATIC_ASSERT( sizeof( struct $7SYMBDEF ) == 32 );
static struct $7SYMBDEF DEFTB$[34] = { { (uint8*)"__FB_VERSION__", (uint8*)"1.01.0", 0ll, (tmp$26)0ull }, { (uint8*)"__FB_BUILD_DATE__", (uint8*)"02-28-2015", 0ll, (tmp$26)0ull }, { (uint8*)"__FB_VER_MAJOR__", (uint8*)"1", 1ll, (tmp$26)0ull }, { (uint8*)"__FB_VER_MINOR__", (uint8*)"01", 1ll, (tmp$26)0ull }, { (uint8*)"__FB_VER_PATCH__", (uint8*)"0", 1ll, (tmp$26)0ull }, { (uint8*)"__FB_SIGNATURE__", (uint8*)"FreeBASIC 1.01.0", 0ll, (tmp$26)0ull }, { (uint8*)"__FB_MT__", (uint8*)0ull, 1ll, (tmp$26)&HDEFMULTITHREAD_CB }, { (uint8*)"__FILE__", (uint8*)0ull, 0ll, (tmp$26)&HDEFFILE_CB }, { (uint8*)"__FILE_NQ__", (uint8*)0ull, 1ll, (tmp$26)&HDEFFILE_CB }, { (uint8*)"__FUNCTION__", (uint8*)0ull, 0ll, (tmp$26)&HDEFFUNCTION_CB }, { (uint8*)"__FUNCTION_NQ__", (uint8*)0ull, 1ll, (tmp$26)&HDEFFUNCTION_CB }, { (uint8*)"__LINE__", (uint8*)0ull, 1ll, (tmp$26)&HDEFLINE_CB }, { (uint8*)"__DATE__", (uint8*)0ull, 0ll, (tmp$26)&HDEFDATE_CB }, { (uint8*)"__DATE_ISO__", (uint8*)0ull, 0ll, (tmp$26)&HDEFDATEISO_CB }, { (uint8*)"__TIME__", (uint8*)0ull, 0ll, (tmp$26)&HDEFTIME_CB }, { (uint8*)"__PATH__", (uint8*)0ull, 0ll, (tmp$26)&HDEFPATH_CB }, { (uint8*)"__FB_OPTION_BYVAL__", (uint8*)0ull, 1ll, (tmp$26)&HDEFOPTBYVAL_CB }, { (uint8*)"__FB_OPTION_DYNAMIC__", (uint8*)0ull, 1ll, (tmp$26)&HDEFOPTDYNAMIC_CB }, { (uint8*)"__FB_OPTION_ESCAPE__", (uint8*)0ull, 1ll, (tmp$26)&HDEFOPTESCAPE_CB }, { (uint8*)"__FB_OPTION_EXPLICIT__", (uint8*)0ull, 1ll, (tmp$26)&HDEFOPTEXPLICIT_CB }, { (uint8*)"__FB_OPTION_PRIVATE__", (uint8*)0ull, 1ll, (tmp$26)&HDEFOPTPRIVATE_CB }, { (uint8*)"__FB_OPTION_GOSUB__", (uint8*)0ull, 1ll, (tmp$26)&HDEFOPTGOSUB_CB }, { (uint8*)"__FB_OUT_EXE__", (uint8*)0ull, 1ll, (tmp$26)&HDEFOUTEXE_CB }, { (uint8*)"__FB_OUT_LIB__", (uint8*)0ull, 1ll, (tmp$26)&HDEFOUTLIB_CB }, { (uint8*)"__FB_OUT_DLL__", (uint8*)0ull, 1ll, (tmp$26)&HDEFOUTDLL_CB }, { (uint8*)"__FB_OUT_OBJ__", (uint8*)0ull, 1ll, (tmp$26)&HDEFOUTOBJ_CB }, { (uint8*)"__FB_DEBUG__", (uint8*)0ull, 1ll, (tmp$26)&HDEFDEBUG_CB }, { (uint8*)"__FB_ERR__", (uint8*)0ull, 1ll, (tmp$26)&HDEFERR_CB }, { (uint8*)"__FB_LANG__", (uint8*)0ull, 0ll, (tmp$26)&HDEFLANG_CB }, { (uint8*)"__FB_BACKEND__", (uint8*)0ull, 0ll, (tmp$26)&HDEFBACKEND_CB }, { (uint8*)"__FB_FPU__", (uint8*)0ull, 0ll, (tmp$26)&HDEFFPU_CB }, { (uint8*)"__FB_FPMODE__", (uint8*)0ull, 0ll, (tmp$26)&HDEFFPMODE_CB }, { (uint8*)"__FB_GCC__", (uint8*)0ull, 1ll, (tmp$26)&HDEFGCC_CB }, { (uint8*)0ull } };
struct $5FBENV ENV$ __attribute__((common));

void SYMBDEFINEINIT( int64 ISMAIN$1 )
{
	FBSTRING TMP$138$1;
	FBSTRING TMP$139$1;
	FBSTRING TMP$140$1;
	label$88:;
	FBSTRING VALUE$1;
	__builtin_memset( &VALUE$1, 0, 24ll );
	uint8* DEF$1;
	LISTINIT( (struct $5TLIST*)((uint8*)&SYMB$ + 197328ll), 500ll, 24ll, 6ll );
	LISTINIT( (struct $5TLIST*)((uint8*)&SYMB$ + 197392ll), 1000ll, 32ll, 6ll );
	{
		int64 I$2;
		I$2 = 0ll;
		label$93:;
		{
			if( *(uint8**)((uint8*)DEFTB$ + (I$2 << 5ll)) != (uint8*)0ull ) goto label$95;
			{
				goto label$92;
			}
			label$95:;
			label$94:;
			fb_StrAssign( (void*)&VALUE$1, -1ll, *(void**)(((uint8*)DEFTB$ + (I$2 << 5ll)) + 8ll), 0ll, 0 );
			if( *(uint8**)(((uint8*)DEFTB$ + (I$2 << 5ll)) + 8ll) == (uint8*)0ull ) goto label$97;
			{
				if( (int64)-((*(int64*)(((uint8*)DEFTB$ + (I$2 << 5ll)) + 16ll) & 1ll) != 0ll) != 0ll ) goto label$99;
				{
					FBSTRING TMP$134$5;
					FBSTRING TMP$135$5;
					__builtin_memset( &TMP$134$5, 0, 24ll );
					FBSTRING* vr$16 = fb_StrConcat( &TMP$134$5, (void*)"\x22", 2ll, (void*)&VALUE$1, -1ll );
					__builtin_memset( &TMP$135$5, 0, 24ll );
					FBSTRING* vr$19 = fb_StrConcat( &TMP$135$5, (void*)vr$16, -1ll, (void*)"\x22", 2ll );
					FBSTRING* vr$21 = fb_StrAssign( (void*)&VALUE$1, -1ll, (void*)vr$19, -1ll, 0 );
				}
				label$99:;
				label$98:;
			}
			label$97:;
			label$96:;
			int64 vr$25 = fb_StrLen( (void*)&VALUE$1, -1ll );
			SYMBADDDEFINE( *(uint8**)((uint8*)DEFTB$ + (I$2 << 5ll)), *(uint8**)&VALUE$1, vr$25, 0ll, *(tmp$26*)(((uint8*)DEFTB$ + (I$2 << 5ll)) + 24ll), *($15FB_DEFINE_FLAGS*)(((uint8*)DEFTB$ + (I$2 << 5ll)) + 16ll) );
		}
		label$91:;
		I$2 = I$2 + 1ll;
		label$90:;
		if( I$2 <= 33ll ) goto label$93;
		label$92:;
	}
	__builtin_memset( &TMP$140$1, 0, 24ll );
	FBSTRING* vr$30 = fb_StrAllocTempDescZ( *(uint8**)((uint8*)&ENV$ + 416ll) );
	FBSTRING* vr$31 = fb_StrUcase2( vr$30, 0 );
	__builtin_memset( &TMP$138$1, 0, 24ll );
	FBSTRING* vr$34 = fb_StrConcat( &TMP$138$1, (void*)"__FB_", 6ll, (void*)vr$31, -1ll );
	__builtin_memset( &TMP$139$1, 0, 24ll );
	FBSTRING* vr$37 = fb_StrConcat( &TMP$139$1, (void*)vr$34, -1ll, (void*)"__", 3ll );
	FBSTRING* vr$39 = fb_StrAssign( (void*)&TMP$140$1, -1ll, (void*)vr$37, -1ll, 0 );
	SYMBADDDEFINE( *(uint8**)&TMP$140$1, (uint8*)0ull, 0ll, 0ll, (tmp$26)0ull, 0ll );
	fb_StrDelete( &TMP$140$1 );
	if( (*(int64*)((uint8*)&ENV$ + 448ll) & 1ll) == 0ll ) goto label$101;
	{
		SYMBADDDEFINE( (uint8*)"__FB_UNIX__", (uint8*)0ull, 0ll, 0ll, (tmp$26)0ull, 0ll );
	}
	goto label$100;
	label$101:;
	{
		SYMBADDDEFINE( (uint8*)"__FB_PCOS__", (uint8*)0ull, 0ll, 0ll, (tmp$26)0ull, 0ll );
	}
	label$100:;
	int64 vr$43 = FBIS64BIT(  );
	if( vr$43 == 0ll ) goto label$103;
	{
		SYMBADDDEFINE( (uint8*)"__FB_64BIT__", (uint8*)0ull, 0ll, 0ll, (tmp$26)0ull, 0ll );
	}
	label$103:;
	label$102:;
	{
		int64 TMP$144$2;
		int64 vr$45 = FBGETCPUFAMILY(  );
		TMP$144$2 = vr$45;
		if( TMP$144$2 == 2ll ) goto label$106;
		label$107:;
		if( TMP$144$2 != 3ll ) goto label$105;
		label$106:;
		{
			SYMBADDDEFINE( (uint8*)"__FB_ARM__", (uint8*)0ull, 0ll, 0ll, (tmp$26)0ull, 0ll );
		}
		label$105:;
		label$104:;
	}
	if( ISMAIN$1 == 0ll ) goto label$109;
	{
		SYMBADDDEFINE( (uint8*)"__FB_MAIN__", (uint8*)0ull, 0ll, 0ll, (tmp$26)0ull, 0ll );
	}
	label$109:;
	label$108:;
	if( *(int64*)((uint8*)&ENV$ + 232ll) < 1ll ) goto label$111;
	{
		SYMBADDDEFINE( (uint8*)"__FB_SSE__", (uint8*)0ull, 0ll, 0ll, (tmp$26)0ull, 0ll );
	}
	label$111:;
	label$110:;
	FBSTRING* vr$50 = fb_LongintToStr( *(int64*)((uint8*)&ENV$ + 248ll) );
	FBSTRING* vr$52 = fb_StrAssign( (void*)&VALUE$1, -1ll, (void*)vr$50, -1ll, 0 );
	int64 vr$54 = fb_StrLen( (void*)&VALUE$1, -1ll );
	SYMBADDDEFINE( (uint8*)"__FB_VECTORIZE__", *(uint8**)&VALUE$1, vr$54, 0ll, (tmp$26)0ull, 0ll );
	*(int64*)((uint8*)&SYMB$ + 197456ll) = 0ll;
	HASHINIT( (struct $5THASH*)((uint8*)&SYMB$ + 197464ll), 32ll, 0ll );
	fb_StrDelete( &VALUE$1 );
	label$89:;
}

void SYMBDEFINEEND( void )
{
	label$112:;
	HASHEND( (struct $5THASH*)((uint8*)&SYMB$ + 197464ll) );
	*(int64*)((uint8*)&SYMB$ + 197456ll) = 0ll;
	LISTEND( (struct $5TLIST*)((uint8*)&SYMB$ + 197328ll) );
	LISTEND( (struct $5TLIST*)((uint8*)&SYMB$ + 197392ll) );
	label$113:;
}

struct $8FBSYMBOL* SYMBADDDEFINE( uint8* SYMBOL$1, uint8* TEXT$1, int64 LGT$1, int64 ISARGLESS$1, tmp$26 PROC$1, $15FB_DEFINE_FLAGS FLAGS$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$114:;
	struct $8FBSYMBOL* SYM$1;
	fb$result$1 = (struct $8FBSYMBOL*)0ull;
	struct $8FBSYMBOL* vr$2 = SYMBNEWSYMBOL( 32ll, (struct $8FBSYMBOL*)0ull, (struct $10FBSYMBOLTB*)0ull, (struct $8FBHASHTB*)((uint8*)&SYMB$ + 196816ll), 5ll, SYMBOL$1, (uint8*)0ull, 3ll, (struct $8FBSYMBOL*)0ull, 0ll );
	SYM$1 = vr$2;
	if( SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$117;
	{
		goto label$115;
	}
	label$117:;
	label$116:;
	void* vr$6 = XALLOCATE( (int32)(LGT$1 + 1ll) );
	*(uint8**)((uint8*)SYM$1 + 104ll) = (uint8*)vr$6;
	fb_StrAssign( *(void**)((uint8*)SYM$1 + 104ll), 0ll, (void*)TEXT$1, 0ll, 0 );
	*(int64*)((uint8*)SYM$1 + 72ll) = LGT$1;
	*(int64*)((uint8*)SYM$1 + 88ll) = 0ll;
	*(struct $11FB_DEFPARAM**)((uint8*)SYM$1 + 96ll) = (struct $11FB_DEFPARAM*)0ull;
	*(int64*)((uint8*)SYM$1 + 112ll) = ISARGLESS$1;
	*(tmp$26*)((uint8*)SYM$1 + 128ll) = PROC$1;
	*($15FB_DEFINE_FLAGS*)((uint8*)SYM$1 + 120ll) = FLAGS$1;
	fb$result$1 = SYM$1;
	label$115:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBADDDEFINEW( uint8* SYMBOL$1, uint32* TEXT$1, int64 LGT$1, int64 ISARGLESS$1, tmp$26 PROC$1, $15FB_DEFINE_FLAGS FLAGS$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$118:;
	struct $8FBSYMBOL* SYM$1;
	fb$result$1 = (struct $8FBSYMBOL*)0ull;
	struct $8FBSYMBOL* vr$2 = SYMBNEWSYMBOL( 32ll, (struct $8FBSYMBOL*)0ull, (struct $10FBSYMBOLTB*)0ull, (struct $8FBHASHTB*)((uint8*)&SYMB$ + 196816ll), 5ll, SYMBOL$1, (uint8*)0ull, 6ll, (struct $8FBSYMBOL*)0ull, 0ll );
	SYM$1 = vr$2;
	if( SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$121;
	{
		goto label$119;
	}
	label$121:;
	label$120:;
	void* vr$7 = XALLOCATE( (int32)((LGT$1 << 2ll) + 4ll) );
	*(uint32**)((uint8*)SYM$1 + 104ll) = (uint32*)vr$7;
	uint32* vr$10 = fb_WstrAssign( *(uint32**)((uint8*)SYM$1 + 104ll), 0ll, TEXT$1 );
	*(int64*)((uint8*)SYM$1 + 72ll) = LGT$1;
	*(int64*)((uint8*)SYM$1 + 88ll) = 0ll;
	*(struct $11FB_DEFPARAM**)((uint8*)SYM$1 + 96ll) = (struct $11FB_DEFPARAM*)0ull;
	*(int64*)((uint8*)SYM$1 + 112ll) = ISARGLESS$1;
	*(tmp$26*)((uint8*)SYM$1 + 128ll) = PROC$1;
	*($15FB_DEFINE_FLAGS*)((uint8*)SYM$1 + 120ll) = FLAGS$1;
	fb$result$1 = SYM$1;
	label$119:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBADDDEFINEMACRO( uint8* SYMBOL$1, struct $9FB_DEFTOK* TOKHEAD$1, int64 PARAMS$1, struct $11FB_DEFPARAM* PARAMHEAD$1, $15FB_DEFINE_FLAGS FLAGS$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$122:;
	struct $8FBSYMBOL* SYM$1;
	fb$result$1 = (struct $8FBSYMBOL*)0ull;
	struct $8FBSYMBOL* vr$2 = SYMBNEWSYMBOL( 32ll, (struct $8FBSYMBOL*)0ull, (struct $10FBSYMBOLTB*)0ull, (struct $8FBHASHTB*)((uint8*)&SYMB$ + 196816ll), 5ll, SYMBOL$1, (uint8*)0ull, 2147483648ll, (struct $8FBSYMBOL*)0ull, 0ll );
	SYM$1 = vr$2;
	if( SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$125;
	{
		goto label$123;
	}
	label$125:;
	label$124:;
	*(struct $9FB_DEFTOK**)((uint8*)SYM$1 + 104ll) = TOKHEAD$1;
	*(int64*)((uint8*)SYM$1 + 88ll) = PARAMS$1;
	*(struct $11FB_DEFPARAM**)((uint8*)SYM$1 + 96ll) = PARAMHEAD$1;
	*(int64*)((uint8*)SYM$1 + 112ll) = 0ll;
	*(tmp$26*)((uint8*)SYM$1 + 128ll) = (tmp$26)0ull;
	*($15FB_DEFINE_FLAGS*)((uint8*)SYM$1 + 120ll) = FLAGS$1;
	fb$result$1 = SYM$1;
	label$123:;
	return fb$result$1;
}

struct $11FB_DEFPARAM* SYMBADDDEFINEPARAM( struct $11FB_DEFPARAM* LASTPARAM$1, uint8* ID$1 )
{
	struct $11FB_DEFPARAM* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$132:;
	static struct $11FB_DEFPARAM* PARAM$1;
	static uint64 INDEX$1;
	fb$result$1 = (struct $11FB_DEFPARAM*)0ull;
	void* vr$2 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&SYMB$ + 197328ll) );
	PARAM$1 = (struct $11FB_DEFPARAM*)vr$2;
	if( LASTPARAM$1 == (struct $11FB_DEFPARAM*)0ull ) goto label$135;
	{
		*(struct $11FB_DEFPARAM**)((uint8*)LASTPARAM$1 + 16ll) = PARAM$1;
	}
	goto label$134;
	label$135:;
	{
		if( *(int64*)((uint8*)&SYMB$ + 197456ll) <= 0ll ) goto label$137;
		{
			HRESETDEFHASH(  );
		}
		label$137:;
		label$136:;
	}
	label$134:;
	int64 vr$6 = fb_StrLen( (void*)ID$1, 0ll );
	void* vr$9 = XALLOCATE( (int32)(vr$6 + 1ll) );
	*(uint8**)PARAM$1 = (uint8*)vr$9;
	HUCASE( ID$1, *(uint8**)PARAM$1 );
	uint64 vr$13 = HASHHASH( *(uint8**)PARAM$1 );
	INDEX$1 = vr$13;
	void* vr$16 = HASHLOOKUPEX( (struct $5THASH*)((uint8*)&SYMB$ + 197464ll), *(uint8**)PARAM$1, INDEX$1 );
	if( vr$16 == (void*)0ull ) goto label$139;
	{
		if( *(uint8**)PARAM$1 == (uint8*)0ull ) goto label$141;
		{
			free( *(void**)PARAM$1 );
		}
		label$141:;
		label$140:;
		LISTDELNODE( (struct $5TLIST*)((uint8*)&SYMB$ + 197328ll), (void*)PARAM$1 );
		fb$result$1 = (struct $11FB_DEFPARAM*)0ull;
		goto label$133;
	}
	label$139:;
	label$138:;
	struct $8HASHITEM* vr$24 = HASHADD( (struct $5THASH*)((uint8*)&SYMB$ + 197464ll), *(uint8**)PARAM$1, (void*)PARAM$1, INDEX$1 );
	*(struct $8HASHITEM**)((uint8*)((uint8*)((uint8*)&SYMB$ + 197328ll) + (*(int64*)((uint8*)&SYMB$ + 197456ll) << 4ll)) + 160ll) = vr$24;
	*(uint64*)((uint8*)((uint8*)((uint8*)&SYMB$ + 197328ll) + (*(int64*)((uint8*)&SYMB$ + 197456ll) << 4ll)) + 168ll) = INDEX$1;
	*(int64*)((uint8*)PARAM$1 + 8ll) = *(int64*)((uint8*)&SYMB$ + 197456ll);
	*(struct $11FB_DEFPARAM**)((uint8*)PARAM$1 + 16ll) = (struct $11FB_DEFPARAM*)0ull;
	*(int64*)((uint8*)&SYMB$ + 197456ll) = *(int64*)((uint8*)&SYMB$ + 197456ll) + 1ll;
	fb$result$1 = PARAM$1;
	label$133:;
	return fb$result$1;
}

struct $9FB_DEFTOK* SYMBADDDEFINETOK( struct $9FB_DEFTOK* LASTTOK$1, $14FB_DEFTOK_TYPE DTYPE$1 )
{
	struct $9FB_DEFTOK* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$142:;
	static struct $9FB_DEFTOK* T$1;
	fb$result$1 = (struct $9FB_DEFTOK*)0ull;
	void* vr$2 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&SYMB$ + 197392ll) );
	T$1 = (struct $9FB_DEFTOK*)vr$2;
	if( LASTTOK$1 == (struct $9FB_DEFTOK*)0ull ) goto label$145;
	{
		*(struct $9FB_DEFTOK**)((uint8*)LASTTOK$1 + 24ll) = T$1;
	}
	label$145:;
	label$144:;
	*(struct $9FB_DEFTOK**)((uint8*)T$1 + 16ll) = LASTTOK$1;
	*(struct $9FB_DEFTOK**)((uint8*)T$1 + 24ll) = (struct $9FB_DEFTOK*)0ull;
	*($14FB_DEFTOK_TYPE*)T$1 = DTYPE$1;
	{
		uint64 TMP$150$2;
		TMP$150$2 = (uint64)DTYPE$1;
		goto label$147;
		label$148:;
		{
			*(uint8**)((uint8*)T$1 + 8ll) = (uint8*)0ull;
		}
		goto label$146;
		label$149:;
		{
			*(uint32**)((uint8*)T$1 + 8ll) = (uint32*)0ull;
		}
		goto label$146;
		label$147:;
		static const void* tmp$151[2ll] = {
			&&label$148,
			&&label$149,
		};
		if( TMP$150$2 < 2ll ) goto label$146;
		if( TMP$150$2 > 3ll ) goto label$146;
		goto *tmp$151[TMP$150$2 - 2ll];
		label$146:;
	}
	fb$result$1 = T$1;
	label$143:;
	return fb$result$1;
}

struct $9FB_DEFTOK* SYMBDELDEFINETOK( struct $9FB_DEFTOK* TOK$1 )
{
	struct $9FB_DEFTOK* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$150:;
	if( *(struct $9FB_DEFTOK**)((uint8*)TOK$1 + 16ll) == (struct $9FB_DEFTOK*)0ull ) goto label$153;
	{
		*(struct $9FB_DEFTOK**)((uint8*)*(struct $9FB_DEFTOK**)((uint8*)TOK$1 + 16ll) + 24ll) = (struct $9FB_DEFTOK*)0ull;
		fb$result$1 = *(struct $9FB_DEFTOK**)((uint8*)TOK$1 + 16ll);
	}
	goto label$152;
	label$153:;
	{
		fb$result$1 = (struct $9FB_DEFTOK*)0ull;
	}
	label$152:;
	{
		$14FB_DEFTOK_TYPE TMP$152$2;
		TMP$152$2 = *($14FB_DEFTOK_TYPE*)TOK$1;
		if( TMP$152$2 != 2ll ) goto label$155;
		label$156:;
		{
			if( *(uint8**)((uint8*)TOK$1 + 8ll) == (uint8*)0ull ) goto label$158;
			{
				free( *(void**)((uint8*)TOK$1 + 8ll) );
			}
			label$158:;
			label$157:;
		}
		goto label$154;
		label$155:;
		if( TMP$152$2 != 3ll ) goto label$159;
		label$160:;
		{
			if( *(uint32**)((uint8*)TOK$1 + 8ll) == (uint32*)0ull ) goto label$162;
			{
				free( *(void**)((uint8*)TOK$1 + 8ll) );
			}
			label$162:;
			label$161:;
		}
		label$159:;
		label$154:;
	}
	LISTDELNODE( (struct $5TLIST*)((uint8*)&SYMB$ + 197392ll), (void*)TOK$1 );
	label$151:;
	return fb$result$1;
}

int64 SYMBDELDEFINE( struct $8FBSYMBOL* S$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$173:;
	fb$result$1 = 0ll;
	if( S$1 != (struct $8FBSYMBOL*)0ull ) goto label$176;
	{
		goto label$174;
	}
	label$176:;
	label$175:;
	if( *(int64*)((uint8*)S$1 + 88ll) != 0ll ) goto label$178;
	{
		if( (*(int64*)((uint8*)S$1 + 48ll) & 511ll) == 6ll ) goto label$180;
		{
			if( *(uint8**)((uint8*)S$1 + 104ll) == (uint8*)0ull ) goto label$182;
			{
				free( *(void**)((uint8*)S$1 + 104ll) );
			}
			label$182:;
			label$181:;
		}
		goto label$179;
		label$180:;
		{
			if( *(uint32**)((uint8*)S$1 + 104ll) == (uint32*)0ull ) goto label$184;
			{
				free( *(void**)((uint8*)S$1 + 104ll) );
			}
			label$184:;
			label$183:;
		}
		label$179:;
	}
	goto label$177;
	label$178:;
	{
		HDELDEFINETOKENS( S$1 );
	}
	label$177:;
	HDELDEFINEPARAMS( S$1 );
	SYMBFREESYMBOL( S$1 );
	fb$result$1 = -1ll;
	label$174:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__symbzdefine( void )
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

static FBSTRING* HDEFFILE_CB( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$10:;
	fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)((uint8*)&ENV$ + 488ll), 261ll, 0 );
	label$11:;
	FBSTRING* vr$4 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$4;
}

static FBSTRING* HDEFPATH_CB( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$12:;
	FBSTRING* vr$1 = FBGETINPUTFILEPARENTDIR(  );
	FBSTRING* vr$3 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$1, -1ll, 0 );
	label$13:;
	FBSTRING* vr$5 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$5;
}

static FBSTRING* HDEFFUNCTION_CB( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$14:;
	if( (*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 16ll) & 4096ll) == 0ll ) goto label$17;
	{
		fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"__FB_MAINPROC__", 16ll, 0 );
	}
	goto label$16;
	label$17:;
	if( (*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 16ll) & 8192ll) == 0ll ) goto label$18;
	{
		fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"__FB_MODLEVELPROC__", 20ll, 0 );
	}
	goto label$16;
	label$18:;
	{
		uint8* vr$9 = SYMBGETFULLPROCNAME( *(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) );
		fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$9, 0ll, 0 );
	}
	label$16:;
	label$15:;
	FBSTRING* vr$12 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$12;
}

static FBSTRING* HDEFLINE_CB( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$19:;
	FBSTRING* vr$2 = fb_LongintToStr( *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16712ll) );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$2, -1ll, 0 );
	label$20:;
	FBSTRING* vr$6 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$6;
}

static FBSTRING* HDEFDATE_CB( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$21:;
	FBSTRING* vr$1 = fb_Date(  );
	FBSTRING* vr$3 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$1, -1ll, 0 );
	label$22:;
	FBSTRING* vr$5 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$5;
}

static FBSTRING* HDEFDATEISO_CB( void )
{
	FBSTRING TMP$122$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$23:;
	__builtin_memset( &TMP$122$1, 0, 24ll );
	FBSTRING* vr$3 = fb_StrAssign( (void*)&TMP$122$1, -1ll, (void*)"yyyy-mm-dd", 11ll, 0 );
	double vr$5 = fb_Now(  );
	FBSTRING* vr$6 = fb_StrFormat( vr$5, &TMP$122$1 );
	FBSTRING* vr$8 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$6, -1ll, 0 );
	fb_StrDelete( &TMP$122$1 );
	label$24:;
	FBSTRING* vr$11 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$11;
}

static FBSTRING* HDEFTIME_CB( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$25:;
	FBSTRING* vr$1 = fb_Time(  );
	FBSTRING* vr$3 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$1, -1ll, 0 );
	label$26:;
	FBSTRING* vr$5 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$5;
}

static FBSTRING* HDEFMULTITHREAD_CB( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$27:;
	FBSTRING* vr$1 = fb_LongintToStr( *(int64*)((uint8*)&ENV$ + 384ll) );
	FBSTRING* vr$3 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$1, -1ll, 0 );
	label$28:;
	FBSTRING* vr$5 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$5;
}

static FBSTRING* HDEFOPTBYVAL_CB( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$29:;
	FBSTRING* vr$2 = fb_LongintToStr( (int64)-(*(int64*)((uint8*)&ENV$ + 1216ll) == 1ll) );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$2, -1ll, 0 );
	label$30:;
	FBSTRING* vr$6 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$6;
}

static FBSTRING* HDEFOPTDYNAMIC_CB( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$31:;
	FBSTRING* vr$2 = fb_LongintToStr( (int64)-(*(int64*)((uint8*)&ENV$ + 1248ll) == -1ll) );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$2, -1ll, 0 );
	label$32:;
	FBSTRING* vr$6 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$6;
}

static FBSTRING* HDEFOPTESCAPE_CB( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$33:;
	FBSTRING* vr$2 = fb_LongintToStr( (int64)-(*(int64*)((uint8*)&ENV$ + 1240ll) == -1ll) );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$2, -1ll, 0 );
	label$34:;
	FBSTRING* vr$6 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$6;
}

static FBSTRING* HDEFOPTEXPLICIT_CB( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$35:;
	FBSTRING* vr$2 = fb_LongintToStr( (int64)-(*(int64*)((uint8*)&ENV$ + 1224ll) == -1ll) );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$2, -1ll, 0 );
	label$36:;
	FBSTRING* vr$6 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$6;
}

static FBSTRING* HDEFOPTPRIVATE_CB( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$37:;
	FBSTRING* vr$2 = fb_LongintToStr( (int64)-(*(int64*)((uint8*)&ENV$ + 1232ll) == 0ll) );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$2, -1ll, 0 );
	label$38:;
	FBSTRING* vr$6 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$6;
}

static FBSTRING* HDEFOPTGOSUB_CB( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$39:;
	FBSTRING* vr$2 = fb_LongintToStr( (int64)-(*(int64*)((uint8*)&ENV$ + 1256ll) == -1ll) );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$2, -1ll, 0 );
	label$40:;
	FBSTRING* vr$6 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$6;
}

static FBSTRING* HDEFOUTEXE_CB( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$41:;
	FBSTRING* vr$2 = fb_LongintToStr( (int64)-(*(int64*)((uint8*)&ENV$ + 192ll) == 0ll) );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$2, -1ll, 0 );
	label$42:;
	FBSTRING* vr$6 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$6;
}

static FBSTRING* HDEFOUTLIB_CB( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$43:;
	FBSTRING* vr$2 = fb_LongintToStr( (int64)-(*(int64*)((uint8*)&ENV$ + 192ll) == 1ll) );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$2, -1ll, 0 );
	label$44:;
	FBSTRING* vr$6 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$6;
}

static FBSTRING* HDEFOUTDLL_CB( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$45:;
	FBSTRING* vr$2 = fb_LongintToStr( (int64)-(*(int64*)((uint8*)&ENV$ + 192ll) == 2ll) );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$2, -1ll, 0 );
	label$46:;
	FBSTRING* vr$6 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$6;
}

static FBSTRING* HDEFOUTOBJ_CB( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$47:;
	FBSTRING* vr$2 = fb_LongintToStr( (int64)-(*(int64*)((uint8*)&ENV$ + 192ll) == 3ll) );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$2, -1ll, 0 );
	label$48:;
	FBSTRING* vr$6 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$6;
}

static FBSTRING* HDEFDEBUG_CB( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$49:;
	FBSTRING* vr$1 = fb_LongintToStr( *(int64*)((uint8*)&ENV$ + 288ll) );
	FBSTRING* vr$3 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$1, -1ll, 0 );
	label$50:;
	FBSTRING* vr$5 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$5;
}

static FBSTRING* HDEFERR_CB( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$51:;
	int64 RES$1;
	RES$1 = 0ll;
	if( *(int64*)((uint8*)&ENV$ + 296ll) == 0ll ) goto label$54;
	{
		RES$1 = 1ll;
	}
	label$54:;
	label$53:;
	if( *(int64*)((uint8*)&ENV$ + 304ll) == 0ll ) goto label$56;
	{
		RES$1 = RES$1 | 2ll;
	}
	label$56:;
	label$55:;
	if( *(int64*)((uint8*)&ENV$ + 312ll) == 0ll ) goto label$58;
	{
		RES$1 = RES$1 | 4ll;
	}
	label$58:;
	label$57:;
	FBSTRING* vr$6 = fb_LongintToStr( RES$1 );
	FBSTRING* vr$8 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$6, -1ll, 0 );
	label$52:;
	FBSTRING* vr$10 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$10;
}

static FBSTRING* HDEFLANG_CB( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$59:;
	FBSTRING* vr$1 = FBGETLANGNAME( *($7FB_LANG*)((uint8*)&ENV$ + 272ll) );
	FBSTRING* vr$3 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$1, -1ll, 0 );
	label$60:;
	FBSTRING* vr$5 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$5;
}

static FBSTRING* HDEFBACKEND_CB( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$61:;
	{
		$10FB_BACKEND TMP$123$2;
		TMP$123$2 = *($10FB_BACKEND*)((uint8*)&ENV$ + 208ll);
		if( TMP$123$2 != 0ll ) goto label$64;
		label$65:;
		{
			fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"gas", 4ll, 0 );
		}
		goto label$63;
		label$64:;
		if( TMP$123$2 != 1ll ) goto label$66;
		label$67:;
		{
			fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"gcc", 4ll, 0 );
		}
		goto label$63;
		label$66:;
		if( TMP$123$2 != 2ll ) goto label$68;
		label$69:;
		{
			fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"llvm", 5ll, 0 );
		}
		label$68:;
		label$63:;
	}
	label$62:;
	FBSTRING* vr$8 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$8;
}

static FBSTRING* HDEFFPU_CB( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$70:;
	{
		int64 TMP$127$2;
		int64 vr$1 = FBGETOPTION( 5ll );
		TMP$127$2 = vr$1;
		if( TMP$127$2 != 0ll ) goto label$73;
		label$74:;
		{
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)"x87", 4ll, 0 );
			goto label$71;
		}
		goto label$72;
		label$73:;
		if( TMP$127$2 != 1ll ) goto label$75;
		label$76:;
		{
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)"sse", 4ll, 0 );
			goto label$71;
		}
		goto label$72;
		label$75:;
		{
		}
		label$77:;
		label$72:;
	}
	label$71:;
	FBSTRING* vr$7 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$7;
}

static FBSTRING* HDEFFPMODE_CB( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$78:;
	{
		int64 TMP$130$2;
		int64 vr$1 = FBGETOPTION( 6ll );
		TMP$130$2 = vr$1;
		if( TMP$130$2 != 0ll ) goto label$81;
		label$82:;
		{
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)"precise", 8ll, 0 );
			goto label$79;
		}
		goto label$80;
		label$81:;
		if( TMP$130$2 != 1ll ) goto label$83;
		label$84:;
		{
			fb_StrInit( (void*)&fb$result$1, -1ll, (void*)"fast", 5ll, 0 );
			goto label$79;
		}
		goto label$80;
		label$83:;
		{
		}
		label$85:;
		label$80:;
	}
	label$79:;
	FBSTRING* vr$7 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$7;
}

static FBSTRING* HDEFGCC_CB( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$86:;
	FBSTRING* vr$2 = fb_LongintToStr( (int64)-(*(int64*)((uint8*)&ENV$ + 208ll) == 1ll) );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$2, -1ll, 0 );
	label$87:;
	FBSTRING* vr$6 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$6;
}

static void HRESETDEFHASH( void )
{
	label$126:;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	{
		I$1 = 0ll;
		int64 TMP$149$2;
		TMP$149$2 = *(int64*)((uint8*)&SYMB$ + 197456ll) + -1ll;
		goto label$128;
		label$131:;
		{
			HASHDEL( (struct $5THASH*)((uint8*)&SYMB$ + 197464ll), *(struct $8HASHITEM**)((uint8*)((uint8*)((uint8*)&SYMB$ + 197328ll) + (I$1 << 4ll)) + 160ll), *(uint64*)((uint8*)((uint8*)((uint8*)&SYMB$ + 197328ll) + (I$1 << 4ll)) + 168ll) );
		}
		label$129:;
		I$1 = I$1 + 1ll;
		label$128:;
		if( I$1 <= TMP$149$2 ) goto label$131;
		label$130:;
	}
	*(int64*)((uint8*)&SYMB$ + 197456ll) = 0ll;
	label$127:;
}

static void HDELDEFINEPARAMS( struct $8FBSYMBOL* S$1 )
{
	label$163:;
	struct $11FB_DEFPARAM* PARAM$1;
	__builtin_memset( &PARAM$1, 0, 8ll );
	struct $11FB_DEFPARAM* NXT$1;
	__builtin_memset( &NXT$1, 0, 8ll );
	PARAM$1 = *(struct $11FB_DEFPARAM**)((uint8*)S$1 + 96ll);
	label$165:;
	if( PARAM$1 == (struct $11FB_DEFPARAM*)0ull ) goto label$166;
	{
		NXT$1 = *(struct $11FB_DEFPARAM**)((uint8*)PARAM$1 + 16ll);
		if( *(uint8**)PARAM$1 == (uint8*)0ull ) goto label$168;
		{
			free( *(void**)PARAM$1 );
		}
		label$168:;
		label$167:;
		LISTDELNODE( (struct $5TLIST*)((uint8*)&SYMB$ + 197328ll), (void*)PARAM$1 );
		PARAM$1 = NXT$1;
	}
	goto label$165;
	label$166:;
	label$164:;
}

static void HDELDEFINETOKENS( struct $8FBSYMBOL* S$1 )
{
	label$169:;
	struct $9FB_DEFTOK* TOK$1;
	__builtin_memset( &TOK$1, 0, 8ll );
	struct $9FB_DEFTOK* NXT$1;
	__builtin_memset( &NXT$1, 0, 8ll );
	TOK$1 = *(struct $9FB_DEFTOK**)((uint8*)S$1 + 104ll);
	label$171:;
	if( TOK$1 == (struct $9FB_DEFTOK*)0ull ) goto label$172;
	{
		NXT$1 = *(struct $9FB_DEFTOK**)((uint8*)TOK$1 + 24ll);
		SYMBDELDEFINETOK( TOK$1 );
		TOK$1 = NXT$1;
	}
	goto label$171;
	label$172:;
	label$170:;
}

// Total compilation time: 0.0352899874560535 seconds.
