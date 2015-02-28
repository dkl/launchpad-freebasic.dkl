// Compilation of FreeBASIC-1.01.0-source/src/compiler/parser-decl-proc-params.bas started at 16:30:12 on 02-28-2015

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
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
typedef int64 $9FB_ERRMSG;
struct $16__FB_ARRAYDIMTB$ {
	int64 ELEMENTS;
	int64 LBOUND;
	int64 UBOUND;
};
__FB_STATIC_ASSERT( sizeof( struct $16__FB_ARRAYDIMTB$ ) == 24 );
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
struct $7FBARRAYIP7ASTNODEE {
	struct $7ASTNODE** DATA;
	struct $7ASTNODE** PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYIP7ASTNODEE ) == 232 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__parserzdeclzproczparams( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRREPORT( int64, int64, uint8* );
typedef int64 $12FB_ERRMSGOPT;
void ERRREPORTWARN( int64, uint8*, $12FB_ERRMSGOPT );
void ERRREPORTPARAM( struct $8FBSYMBOL*, int64, uint8*, int64 );
void ERRREPORTPARAMWARN( struct $8FBSYMBOL*, int64, uint8*, int64 );
typedef int64 $11FB_LANG_OPT;
void ERRREPORTNOTALLOWED( $11FB_LANG_OPT, int64, uint8* );
void ASTDELTREE( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWCONSTI( int64, int64, struct $8FBSYMBOL* );
void ASTFORGETBITFIELDS( struct $7ASTNODE* );
int64 ASTTYPEINIUSESLOCALS( struct $7ASTNODE*, int64 );
struct $8FBSYMBOL* SYMBADDPROCPARAM( struct $8FBSYMBOL*, uint8*, int64, struct $8FBSYMBOL*, int64, int64, $13FB_SYMBATTRIB );
void SYMBMAKEPARAMOPTIONAL( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $7ASTNODE* );
void SYMBADDPROCINSTANCEPTR( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
int64 SYMBGETDEFTYPE( uint8* );
int64 SYMBGETDEFAULTPARAMMODE( int64, struct $8FBSYMBOL* );
int64 HMATCH( int64 );
typedef int64 $8LEXCHECK;
int64 LEXGETTOKEN( $8LEXCHECK );
int64 LEXGETCLASS( $8LEXCHECK );
uint8* LEXGETTEXT( void );
void LEXSKIPTOKEN( $8LEXCHECK );
int64 LEXGETLOOKAHEAD( int64, $8LEXCHECK );
void CARRAYDECL( int64*, int64*, struct $7FBARRAYIP7ASTNODEE* );
typedef int64 $9FB_INIOPT;
struct $7ASTNODE* CINITIALIZER( struct $8FBSYMBOL*, $9FB_INIOPT, int64, struct $8FBSYMBOL* );
typedef int64 $14FB_SYMBTYPEOPT;
int64 CSYMBOLTYPE( int64*, struct $8FBSYMBOL**, int64*, $14FB_SYMBTYPEOPT );
int64 CASSIGNTOKEN( void );
void HSKIPUNTIL( int64, int64, $8LEXCHECK, int64 );
void HCOMPLAINIFABSTRACTCLASS( int64, struct $8FBSYMBOL* );
static struct $8FBSYMBOL* HPARAMDECL( struct $8FBSYMBOL*, int64, int64 );
static void HPARAMERROR( struct $8FBSYMBOL*, uint8*, $9FB_ERRMSG, int64 );
static void HPARAMWARNING( struct $8FBSYMBOL*, uint8*, $9FB_ERRMSG, int64 );
static struct $7ASTNODE* HOPTIONALEXPR( struct $8FBSYMBOL*, uint8*, struct $8FBSYMBOL* );
static struct $8FBSYMBOL* HMOCKPARAM( struct $8FBSYMBOL*, int64 );
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
struct $5FBENV ENV$ __attribute__((common));

void CPARAMETERS( struct $8FBSYMBOL* PARENT$1, struct $8FBSYMBOL* PROC$1, int64 PROCMODE$1, int64 ISPROTO$1 )
{
	label$10:;
	int64 LENGTH$1;
	LENGTH$1 = 0ll;
	if( (*(int64*)((uint8*)PROC$1 + 8ll) & 2048ll) == 0ll ) goto label$13;
	{
		SYMBADDPROCINSTANCEPTR( PARENT$1, PROC$1 );
		LENGTH$1 = LENGTH$1 + *(int64*)((uint8*)&ENV$ + 472ll);
	}
	label$13:;
	label$12:;
	int64 vr$4 = LEXGETTOKEN( 0ll );
	if( vr$4 == 40ll ) goto label$15;
	{
		goto label$11;
	}
	label$15:;
	label$14:;
	LEXSKIPTOKEN( 0ll );
	int64 vr$6 = LEXGETTOKEN( 0ll );
	if( vr$6 != 41ll ) goto label$17;
	{
		LEXSKIPTOKEN( 0ll );
		goto label$11;
	}
	label$17:;
	label$16:;
	label$18:;
	{
		struct $8FBSYMBOL* PARAM$2;
		struct $8FBSYMBOL* vr$8 = HPARAMDECL( PROC$1, PROCMODE$1, ISPROTO$1 );
		PARAM$2 = vr$8;
		if( PARAM$2 != (struct $8FBSYMBOL*)0ull ) goto label$22;
		{
			goto label$19;
		}
		label$22:;
		label$21:;
		LENGTH$1 = LENGTH$1 + *(int64*)((uint8*)PARAM$2 + 72ll);
		if( *(int64*)((uint8*)PARAM$2 + 88ll) != 4ll ) goto label$24;
		{
			goto label$19;
		}
		label$24:;
		label$23:;
		int64 vr$14 = LEXGETTOKEN( 0ll );
		if( vr$14 == 44ll ) goto label$26;
		{
			goto label$19;
		}
		label$26:;
		label$25:;
		LEXSKIPTOKEN( 0ll );
	}
	label$20:;
	goto label$18;
	label$19:;
	int64 vr$16 = LEXGETTOKEN( 0ll );
	if( vr$16 == 41ll ) goto label$28;
	{
		ERRREPORT( 7ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
	}
	goto label$27;
	label$28:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$27:;
	if( LENGTH$1 <= (*(int64*)((uint8*)&ENV$ + 472ll) << 6ll) ) goto label$30;
	{
		ERRREPORTWARN( 18ll, *(uint8**)((uint8*)PROC$1 + 24ll), 1ll );
	}
	label$30:;
	label$29:;
	label$11:;
}

__attribute__(( constructor )) static void fb_ctor__parserzdeclzproczparams( void )
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

static void HPARAMERROR( struct $8FBSYMBOL* PROC$1, uint8* PID$1, $9FB_ERRMSG MSGNUM$1, int64 DELTA$1 )
{
	label$31:;
	ERRREPORTPARAM( PROC$1, (int64)*(int16*)((uint8*)PROC$1 + 112ll) + DELTA$1, PID$1, MSGNUM$1 );
	label$32:;
}

static void HPARAMWARNING( struct $8FBSYMBOL* PROC$1, uint8* PID$1, $9FB_ERRMSG MSGNUM$1, int64 DELTA$1 )
{
	label$33:;
	ERRREPORTPARAMWARN( PROC$1, (int64)*(int16*)((uint8*)PROC$1 + 112ll) + DELTA$1, PID$1, MSGNUM$1 );
	label$34:;
}

static struct $7ASTNODE* HOPTIONALEXPR( struct $8FBSYMBOL* PROC$1, uint8* PID$1, struct $8FBSYMBOL* PARAM$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$35:;
	struct $7ASTNODE* EXPR$1;
	int64 INIOPTIONS$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	if( *(int64*)((uint8*)PARAM$1 + 88ll) == 1ll ) goto label$38;
	{
		if( *(int64*)((uint8*)PARAM$1 + 88ll) == 2ll ) goto label$40;
		{
			goto label$36;
		}
		label$40:;
		label$39:;
	}
	label$38:;
	label$37:;
	{
		int64 TMP$85$2;
		TMP$85$2 = *(int64*)((uint8*)PARAM$1 + 48ll) & 511ll;
		if( TMP$85$2 == 0ll ) goto label$43;
		label$44:;
		if( TMP$85$2 != 21ll ) goto label$42;
		label$43:;
		{
			ERRREPORT( 70ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( 41ll, 0ll, 0ll, -1ll );
			struct $7ASTNODE* vr$9 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
			fb$result$1 = vr$9;
			goto label$36;
		}
		label$42:;
		label$41:;
	}
	struct $7ASTNODE* vr$10 = CINITIALIZER( PARAM$1, 1ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	EXPR$1 = vr$10;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$46;
	{
		goto label$36;
	}
	label$46:;
	label$45:;
	ASTFORGETBITFIELDS( EXPR$1 );
	int64 vr$12 = ASTTYPEINIUSESLOCALS( EXPR$1, 12582912ll );
	if( vr$12 == 0ll ) goto label$48;
	{
		HPARAMERROR( PROC$1, PID$1, 271ll, 0ll );
		ASTDELTREE( EXPR$1 );
		EXPR$1 = (struct $7ASTNODE*)0ull;
	}
	label$48:;
	label$47:;
	fb$result$1 = EXPR$1;
	label$36:;
	return fb$result$1;
}

static struct $8FBSYMBOL* HMOCKPARAM( struct $8FBSYMBOL* PROC$1, int64 PMODE$1 )
{
	int64 TMP$86$1;
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$49:;
	int64 DTYPE$1;
	if( PMODE$1 != -1ll ) goto label$52;
	{
		PMODE$1 = *(int64*)((uint8*)&ENV$ + 1216ll);
	}
	label$52:;
	label$51:;
	if( PMODE$1 != 4ll ) goto label$54;
	{
		DTYPE$1 = 2147483648ll;
	}
	goto label$53;
	label$54:;
	{
		DTYPE$1 = 7ll;
	}
	label$53:;
	if( PMODE$1 != 3ll ) goto label$55;
	TMP$86$1 = -1ll;
	goto label$169;
	label$55:;
	TMP$86$1 = 0ll;
	label$169:;
	struct $8FBSYMBOL* vr$4 = SYMBADDPROCPARAM( PROC$1, (uint8*)0ull, DTYPE$1, (struct $8FBSYMBOL*)0ull, TMP$86$1, PMODE$1, 0ll );
	fb$result$1 = vr$4;
	label$50:;
	return fb$result$1;
}

static struct $8FBSYMBOL* HPARAMDECL( struct $8FBSYMBOL* PROC$1, int64 PROC_MODE$1, int64 ISPROTO$1 )
{
	uint8* TMP$96$1;
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$56:;
	static uint8 IDTB$1[8][129];
	struct $8FBARRAY1IcE {
		uint8* DATA;
		uint8* PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1IcE ) == 64 );
	static struct $8FBARRAY1IcE tmp$87$1 = { (uint8*)IDTB$1, (uint8*)IDTB$1, 1032ll, 129ll, 1ll, { { 8ll, 0ll, 7ll } } };
	static int64 RECLEVEL$1 = 0ll;
	uint8* ID$1;
	struct $7ASTNODE* OPTEXPR$1;
	int64 DTYPE$1;
	int64 MODE$1;
	int64 ATTRIB$1;
	int64 DIMENSIONS$1;
	int64 READID$1;
	int64 DOTPOS$1;
	int64 DOSKIP$1;
	int64 DONTINIT$1;
	int64 USE_DEFAULT$1;
	int64 HAVE_BOUNDS$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	struct $8FBSYMBOL* PARAM$1;
	static struct $7ASTNODE* EXPRTB$1[8][2];
	struct $8FBARRAY2IP7ASTNODEE {
		struct $7ASTNODE** DATA;
		struct $7ASTNODE** PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[2];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY2IP7ASTNODEE ) == 88 );
	static struct $8FBARRAY2IP7ASTNODEE tmp$88$1 = { (struct $7ASTNODE**)EXPRTB$1, (struct $7ASTNODE**)EXPRTB$1, 128ll, 8ll, 2ll, { { 8ll, 0ll, 7ll }, { 2ll, 0ll, 1ll } } };
	fb$result$1 = (struct $8FBSYMBOL*)0ull;
	ATTRIB$1 = 0ll;
	int64 vr$1 = LEXGETTOKEN( 0ll );
	if( vr$1 != 46ll ) goto label$59;
	{
		int64 vr$3 = LEXGETLOOKAHEAD( 1ll, 0ll );
		if( vr$3 != 46ll ) goto label$61;
		{
			LEXSKIPTOKEN( 0ll );
			LEXSKIPTOKEN( 0ll );
			int64 vr$5 = LEXGETTOKEN( 0ll );
			if( vr$5 == 46ll ) goto label$63;
			{
				HPARAMERROR( PROC$1, (uint8*)"...", 58ll, 1ll );
				HSKIPUNTIL( 41ll, 0ll, 0ll, 0ll );
				HMOCKPARAM( PROC$1, 4ll );
			}
			goto label$62;
			label$63:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$62:;
			if( (int64)*(int16*)((uint8*)PROC$1 + 112ll) != 0ll ) goto label$65;
			{
				HPARAMERROR( PROC$1, (uint8*)"...", 312ll, 1ll );
				struct $8FBSYMBOL* vr$10 = HMOCKPARAM( PROC$1, 4ll );
				fb$result$1 = vr$10;
				goto label$57;
			}
			label$65:;
			label$64:;
			if( PROC_MODE$1 == 3ll ) goto label$67;
			{
				HPARAMERROR( PROC$1, (uint8*)"...", 311ll, 1ll );
				struct $8FBSYMBOL* vr$12 = HMOCKPARAM( PROC$1, 4ll );
				fb$result$1 = vr$12;
				goto label$57;
			}
			label$67:;
			label$66:;
			struct $8FBSYMBOL* vr$13 = SYMBADDPROCPARAM( PROC$1, (uint8*)0ull, 2147483648ll, (struct $8FBSYMBOL*)0ull, 0ll, 4ll, 0ll );
			fb$result$1 = vr$13;
			goto label$57;
		}
		goto label$60;
		label$61:;
		{
			HPARAMERROR( PROC$1, (uint8*)"...", 58ll, 1ll );
			HSKIPUNTIL( 41ll, 0ll, 0ll, 0ll );
			struct $8FBSYMBOL* vr$14 = HMOCKPARAM( PROC$1, 4ll );
			fb$result$1 = vr$14;
			goto label$57;
		}
		label$60:;
	}
	label$59:;
	label$58:;
	{
		int64 TMP$90$2;
		int64 vr$15 = LEXGETTOKEN( 0ll );
		TMP$90$2 = vr$15;
		if( TMP$90$2 != 319ll ) goto label$69;
		label$70:;
		{
			MODE$1 = 1ll;
			LEXSKIPTOKEN( 0ll );
		}
		goto label$68;
		label$69:;
		if( TMP$90$2 != 320ll ) goto label$71;
		label$72:;
		{
			MODE$1 = 2ll;
			LEXSKIPTOKEN( 0ll );
		}
		goto label$68;
		label$71:;
		{
			MODE$1 = -1ll;
		}
		label$73:;
		label$68:;
	}
	{
		int64 TMP$91$2;
		int64 vr$18 = LEXGETCLASS( 0ll );
		TMP$91$2 = vr$18;
		if( TMP$91$2 != 0ll ) goto label$75;
		label$76:;
		{
			READID$1 = -1ll;
		}
		goto label$74;
		label$75:;
		if( TMP$91$2 == 1ll ) goto label$78;
		label$79:;
		if( TMP$91$2 != 2ll ) goto label$77;
		label$78:;
		{
			if( ISPROTO$1 != 0ll ) goto label$81;
			{
				uint8* vr$23 = LEXGETTEXT(  );
				HPARAMERROR( PROC$1, vr$23, 58ll, 1ll );
				HSKIPUNTIL( 44ll, 0ll, 0ll, 0ll );
				struct $8FBSYMBOL* vr$24 = HMOCKPARAM( PROC$1, MODE$1 );
				fb$result$1 = vr$24;
				goto label$57;
			}
			label$81:;
			label$80:;
			int64 vr$25 = LEXGETTOKEN( 0ll );
			READID$1 = (int64)-(vr$25 != 375ll);
		}
		goto label$74;
		label$77:;
		{
			int64 vr$27 = LEXGETTOKEN( 0ll );
			if( ((int64)-(vr$27 != 40ll) | (int64)-(ISPROTO$1 == 0ll)) == 0ll ) goto label$84;
			{
				uint8* vr$32 = LEXGETTEXT(  );
				HPARAMERROR( PROC$1, vr$32, 58ll, 1ll );
				HSKIPUNTIL( 44ll, 0ll, 0ll, 0ll );
				struct $8FBSYMBOL* vr$33 = HMOCKPARAM( PROC$1, MODE$1 );
				fb$result$1 = vr$33;
				goto label$57;
			}
			label$84:;
			label$83:;
			READID$1 = 0ll;
		}
		label$82:;
		label$74:;
	}
	if( RECLEVEL$1 < 8ll ) goto label$86;
	{
		ERRREPORT( 27ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( 44ll, 0ll, 0ll, 0ll );
		struct $8FBSYMBOL* vr$35 = HMOCKPARAM( PROC$1, MODE$1 );
		fb$result$1 = vr$35;
		goto label$57;
	}
	label$86:;
	label$85:;
	ID$1 = (uint8*)((uint8*)IDTB$1 + (RECLEVEL$1 * 129ll));
	fb_StrAssign( (void*)ID$1, 0ll, (void*)"", 1ll, 0 );
	if( READID$1 == 0ll ) goto label$88;
	{
		uint8* vr$39 = LEXGETTEXT(  );
		fb_StrAssign( (void*)ID$1, 0ll, (void*)vr$39, 0ll, 0 );
		DOTPOS$1 = *(int64*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 4144ll);
		DTYPE$1 = *(int64*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 16ll);
		if( DTYPE$1 == 2147483648ll ) goto label$90;
		{
			if( (int64)-((*(int64*)((uint8*)&ENV$ + 1152ll) & 8388608ll) != 0ll) != 0ll ) goto label$92;
			{
				ERRREPORTNOTALLOWED( 8388608ll, 147ll, (uint8*)0ull );
			}
			label$92:;
			label$91:;
		}
		label$90:;
		label$89:;
		LEXSKIPTOKEN( 0ll );
	}
	goto label$87;
	label$88:;
	{
		DTYPE$1 = 2147483648ll;
	}
	label$87:;
	DIMENSIONS$1 = 0ll;
	HAVE_BOUNDS$1 = 0ll;
	int64 vr$48 = LEXGETTOKEN( 0ll );
	if( vr$48 != 40ll ) goto label$94;
	{
		LEXSKIPTOKEN( 0ll );
		if( MODE$1 == -1ll ) goto label$96;
		{
			HPARAMERROR( PROC$1, ID$1, 58ll, 1ll );
		}
		label$96:;
		label$95:;
		MODE$1 = 3ll;
		int64 vr$51 = LEXGETTOKEN( 0ll );
		if( vr$51 != 41ll ) goto label$98;
		{
			DIMENSIONS$1 = -1ll;
		}
		goto label$97;
		label$98:;
		{
			CARRAYDECL( &DIMENSIONS$1, &HAVE_BOUNDS$1, (struct $7FBARRAYIP7ASTNODEE*)&tmp$88$1 );
			if( HAVE_BOUNDS$1 == 0ll ) goto label$100;
			{
				HPARAMERROR( PROC$1, ID$1, 58ll, 1ll );
			}
			label$100:;
			label$99:;
		}
		label$97:;
		int64 vr$56 = HMATCH( 41ll );
		if( vr$56 != 0ll ) goto label$102;
		{
			ERRREPORT( 7ll, 0ll, (uint8*)0ull );
		}
		label$102:;
		label$101:;
	}
	label$94:;
	label$93:;
	USE_DEFAULT$1 = 0ll;
	if( MODE$1 != -1ll ) goto label$104;
	{
		MODE$1 = *(int64*)((uint8*)&ENV$ + 1216ll);
		USE_DEFAULT$1 = -1ll;
		if( (*(int64*)((uint8*)&ENV$ + 352ll) & 2ll) == 0ll ) goto label$106;
		{
			HPARAMWARNING( PROC$1, ID$1, 15ll, 1ll );
		}
		label$106:;
		label$105:;
	}
	label$104:;
	label$103:;
	DOSKIP$1 = 0ll;
	int64 vr$61 = LEXGETTOKEN( 0ll );
	if( vr$61 != 375ll ) goto label$108;
	{
		int64 TMP$92$2;
		LEXSKIPTOKEN( 0ll );
		if( DTYPE$1 == 2147483648ll ) goto label$110;
		{
			HPARAMERROR( PROC$1, ID$1, 58ll, 1ll );
			goto label$57;
		}
		label$110:;
		label$109:;
		RECLEVEL$1 = RECLEVEL$1 + 1ll;
		int64 OPTIONS$2;
		OPTIONS$2 = 1ll;
		if( MODE$1 != 2ll ) goto label$112;
		{
			if( ISPROTO$1 == 0ll ) goto label$114;
			{
				OPTIONS$2 = OPTIONS$2 | 2ll;
			}
			label$114:;
			label$113:;
			OPTIONS$2 = OPTIONS$2 & -2ll;
		}
		label$112:;
		label$111:;
		TMP$92$2 = 0ll;
		int64 vr$72 = CSYMBOLTYPE( &DTYPE$1, &SUBTYPE$1, &TMP$92$2, OPTIONS$2 );
		if( vr$72 != 0ll ) goto label$116;
		{
			HPARAMERROR( PROC$1, ID$1, 58ll, 1ll );
			DTYPE$1 = 7ll;
			SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
			DOSKIP$1 = -1ll;
		}
		label$116:;
		label$115:;
		if( MODE$1 != 1ll ) goto label$118;
		{
			HCOMPLAINIFABSTRACTCLASS( DTYPE$1, SUBTYPE$1 );
		}
		label$118:;
		label$117:;
		RECLEVEL$1 = RECLEVEL$1 + -1ll;
	}
	goto label$107;
	label$108:;
	{
		if( (int64)-((*(int64*)((uint8*)&ENV$ + 1152ll) & 4194304ll) != 0ll) != 0ll ) goto label$120;
		{
			ERRREPORTNOTALLOWED( 4194304ll, 146ll, (uint8*)0ull );
			DOSKIP$1 = -1ll;
		}
		goto label$119;
		label$120:;
		{
			if( READID$1 != 0ll ) goto label$122;
			{
				HPARAMERROR( PROC$1, (uint8*)0ull, 58ll, 1ll );
				DOSKIP$1 = -1ll;
			}
			label$122:;
			label$121:;
		}
		label$119:;
		SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
		ATTRIB$1 = ATTRIB$1 | 268435456ll;
	}
	label$107:;
	if( *(int64*)((uint8*)&ENV$ + 272ll) != 0ll ) goto label$124;
	{
		if( USE_DEFAULT$1 == 0ll ) goto label$126;
		{
			int64 vr$83 = SYMBGETDEFAULTPARAMMODE( DTYPE$1, SUBTYPE$1 );
			MODE$1 = vr$83;
		}
		label$126:;
		label$125:;
	}
	label$124:;
	label$123:;
	if( DTYPE$1 != 2147483648ll ) goto label$128;
	{
		int64 vr$85 = SYMBGETDEFTYPE( ID$1 );
		DTYPE$1 = vr$85;
	}
	label$128:;
	label$127:;
	if( DOSKIP$1 == 0ll ) goto label$130;
	{
		HSKIPUNTIL( 44ll, 0ll, 0ll, 0ll );
	}
	label$130:;
	label$129:;
	{
		int64 TMP$93$2;
		uint64 TMP$94$2;
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$131;
		TMP$93$2 = 22ll;
		goto label$170;
		label$131:;
		TMP$93$2 = DTYPE$1 & 31ll;
		label$170:;
		TMP$94$2 = (uint64)TMP$93$2;
		goto label$133;
		label$134:;
		{
			int64 TMP$95$3;
			if( (DTYPE$1 & 480ll) == 0ll ) goto label$135;
			TMP$95$3 = 22ll;
			goto label$171;
			label$135:;
			TMP$95$3 = DTYPE$1 & 31ll;
			label$171:;
			if( ((int64)-(MODE$1 == 1ll) | (int64)-(TMP$95$3 == 17ll)) == 0ll ) goto label$137;
			{
				HPARAMERROR( PROC$1, ID$1, 58ll, 1ll );
				DTYPE$1 = ((DTYPE$1 & 31ll) | ((DTYPE$1 & 480ll) + 32ll)) | ((DTYPE$1 & 261632ll) << 1ll);
			}
			label$137:;
			label$136:;
		}
		goto label$132;
		label$138:;
		{
			if( ISPROTO$1 != 0ll ) goto label$140;
			{
				HPARAMERROR( PROC$1, ID$1, 58ll, 1ll );
				DTYPE$1 = ((DTYPE$1 & 31ll) | ((DTYPE$1 & 480ll) + 32ll)) | ((DTYPE$1 & 261632ll) << 1ll);
			}
			goto label$139;
			label$140:;
			{
				if( MODE$1 != 1ll ) goto label$142;
				{
					HPARAMERROR( PROC$1, ID$1, 58ll, 1ll );
					DTYPE$1 = ((DTYPE$1 & 31ll) | ((DTYPE$1 & 480ll) + 32ll)) | ((DTYPE$1 & 261632ll) << 1ll);
				}
				label$142:;
				label$141:;
			}
			label$139:;
		}
		goto label$132;
		label$143:;
		{
			if( ISPROTO$1 != 0ll ) goto label$145;
			{
				if( DOTPOS$1 <= 0ll ) goto label$147;
				{
					HPARAMERROR( PROC$1, ID$1, 58ll, 1ll );
				}
				label$147:;
				label$146:;
			}
			label$145:;
			label$144:;
		}
		goto label$132;
		label$133:;
		static const void* tmp$97[19ll] = {
			&&label$138,
			&&label$132,
			&&label$132,
			&&label$134,
			&&label$132,
			&&label$132,
			&&label$134,
			&&label$132,
			&&label$132,
			&&label$132,
			&&label$132,
			&&label$132,
			&&label$132,
			&&label$132,
			&&label$132,
			&&label$132,
			&&label$132,
			&&label$134,
			&&label$143,
		};
		if( TMP$94$2 > 18ll ) goto label$132;
		goto *tmp$97[TMP$94$2 - 0ll];
		label$132:;
	}
	OPTEXPR$1 = (struct $7ASTNODE*)0ull;
	DONTINIT$1 = 0ll;
	if( ISPROTO$1 == 0ll ) goto label$148;
	TMP$96$1 = (uint8*)0ull;
	goto label$172;
	label$148:;
	TMP$96$1 = ID$1;
	label$172:;
	struct $8FBSYMBOL* vr$123 = SYMBADDPROCPARAM( PROC$1, TMP$96$1, DTYPE$1, SUBTYPE$1, DIMENSIONS$1, MODE$1, ATTRIB$1 );
	PARAM$1 = vr$123;
	if( PARAM$1 != (struct $8FBSYMBOL*)0ull ) goto label$150;
	{
		goto label$57;
	}
	label$150:;
	label$149:;
	if( ISPROTO$1 != 0ll ) goto label$152;
	{
		if( *(int64*)((uint8*)PARAM$1 + 72ll) <= (*(int64*)((uint8*)&ENV$ + 472ll) << 2ll) ) goto label$154;
		{
			if( (*(int64*)((uint8*)&ENV$ + 352ll) & 4ll) == 0ll ) goto label$156;
			{
				HPARAMWARNING( PROC$1, ID$1, 17ll, 0ll );
			}
			label$156:;
			label$155:;
		}
		label$154:;
		label$153:;
	}
	label$152:;
	label$151:;
	int64 vr$131 = CASSIGNTOKEN(  );
	if( vr$131 == 0ll ) goto label$158;
	{
		if( MODE$1 != 3ll ) goto label$160;
		{
			int64 vr$134 = LEXGETTOKEN( 0ll );
			if( vr$134 != 371ll ) goto label$162;
			{
				LEXSKIPTOKEN( 0ll );
				DONTINIT$1 = -1ll;
			}
			goto label$161;
			label$162:;
			{
				HPARAMERROR( PROC$1, ID$1, 58ll, 0ll );
				HSKIPUNTIL( 44ll, 0ll, 0ll, 0ll );
			}
			label$161:;
		}
		goto label$159;
		label$160:;
		{
			struct $7ASTNODE* vr$136 = HOPTIONALEXPR( PROC$1, ID$1, PARAM$1 );
			OPTEXPR$1 = vr$136;
			if( OPTEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$164;
			{
				HPARAMERROR( PROC$1, ID$1, 58ll, 0ll );
				HSKIPUNTIL( 44ll, 0ll, 0ll, 0ll );
			}
			label$164:;
			label$163:;
		}
		label$159:;
	}
	label$158:;
	label$157:;
	if( DONTINIT$1 == 0ll ) goto label$166;
	{
		*($12FB_SYMBSTATS*)((uint8*)PARAM$1 + 16ll) = *(int64*)((uint8*)PARAM$1 + 16ll) | 2048ll;
	}
	label$166:;
	label$165:;
	if( OPTEXPR$1 == (struct $7ASTNODE*)0ull ) goto label$168;
	{
		SYMBMAKEPARAMOPTIONAL( PROC$1, PARAM$1, OPTEXPR$1 );
	}
	label$168:;
	label$167:;
	fb$result$1 = PARAM$1;
	label$57:;
	return fb$result$1;
}

// Total compilation time: 0.03247807326260954 seconds.
