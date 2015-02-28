// Compilation of fbc-1.01.0/src/compiler/parser-proc.bas started at 15:27:42 on 02-28-2015

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
typedef int64 $10FB_PROCOPT;
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
typedef int64 $16FB_SYMBLOOKUPOPT;
typedef int64 $9FB_ERRMSG;
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
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
int32 fb_StrCompare( void*, int64, void*, int64 );
FBSTRING* fb_StrAllocTempDescZ( uint8* );
int64 fb_StrLen( void*, int64 );
FBSTRING* fb_TRIM( FBSTRING* );
int32 fb_VALINT( FBSTRING* );
FBSTRING* fb_StrUcase2( FBSTRING*, int32 );
static void fb_ctor__parserzproc( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
typedef int64 $12FB_ERRMSGOPT;
void ERRREPORTEX( int64, uint8*, int64, $12FB_ERRMSGOPT, uint8* );
void ERRREPORT( int64, int64, uint8* );
void ERRREPORTWARN( int64, uint8*, $12FB_ERRMSGOPT );
void ERRREPORTPARAM( struct $8FBSYMBOL*, int64, uint8*, int64 );
void ERRREPORTPARAMWARN( struct $8FBSYMBOL*, int64, uint8*, int64 );
typedef int64 $11FB_LANG_OPT;
void ERRREPORTNOTALLOWED( $11FB_LANG_OPT, int64, uint8* );
void FBSETOPTION( int64, int64 );
int64 ASTISEQUALPARAMINIT( struct $7ASTNODE*, struct $7ASTNODE* );
void ASTPROCBEGIN( struct $8FBSYMBOL*, int64 );
int64 ASTPROCEND( int64 );
struct $10FBSYMCHAIN* SYMBLOOKUPAT( struct $8FBSYMBOL*, uint8*, int64, int64 );
struct $8FBSYMBOL* SYMBFINDBYCLASS( struct $10FBSYMCHAIN*, int64 );
struct $8FBSYMBOL* SYMBFINDOVERLOADPROC( struct $8FBSYMBOL*, struct $8FBSYMBOL*, $16FB_SYMBLOOKUPOPT );
struct $8FBSYMBOL* SYMBFINDOPOVLPROC( $6AST_OP, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBFINDCTORPROC( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
void SYMBPROCCHECKOVERRIDDEN( struct $8FBSYMBOL*, int64 );
struct $8FBSYMBOL* SYMBPROCGETOVERRIDDEN( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBGETPROCRESULT( struct $8FBSYMBOL* );
typedef int64 $10FB_SYMBOPT;
struct $8FBSYMBOL* SYMBADDPROC( struct $8FBSYMBOL*, uint8*, uint8*, int64, struct $8FBSYMBOL*, int64, int64, $10FB_SYMBOPT );
struct $8FBSYMBOL* SYMBADDOPERATOR( struct $8FBSYMBOL*, $6AST_OP, uint8*, int64, struct $8FBSYMBOL*, int64, int64, $10FB_SYMBOPT );
struct $8FBSYMBOL* SYMBADDCTOR( struct $8FBSYMBOL*, uint8*, int64, int64, $10FB_SYMBOPT );
struct $8FBSYMBOL* SYMBPREADDPROC( uint8* );
void SYMBPROCALLOCEXT( struct $8FBSYMBOL* );
void SYMBFREESYMBOL( struct $8FBSYMBOL* );
void SYMBNESTBEGIN( struct $8FBSYMBOL*, int64 );
void SYMBNESTEND( int64 );
uint8* SYMBUNIQUELABEL( void );
void SYMBSETNAME( struct $8FBSYMBOL*, uint8* );
int64 SYMBGETDEFTYPE( uint8* );
struct $8FBSYMBOL* SYMBGETCOMPCTORHEAD( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBGETCOMPDTOR( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBGETCOMPOPOVLHEAD( struct $8FBSYMBOL*, $6AST_OP );
struct $20FB_GLOBCTORLIST_ITEM;
struct $20FB_GLOBCTORLIST_ITEM {
	struct $8FBSYMBOL* SYM;
	struct $20FB_GLOBCTORLIST_ITEM* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $20FB_GLOBCTORLIST_ITEM ) == 16 );
struct $20FB_GLOBCTORLIST_ITEM* SYMBADDGLOBALCTOR( struct $8FBSYMBOL* );
struct $20FB_GLOBCTORLIST_ITEM* SYMBADDGLOBALDTOR( struct $8FBSYMBOL* );
int64 HMATCH( int64 );
void FBADDLIB( uint8* );
typedef int64 $8LEXCHECK;
int64 LEXGETTOKEN( $8LEXCHECK );
int64 LEXGETCLASS( $8LEXCHECK );
uint8* LEXGETTEXT( void );
void LEXSKIPTOKEN( $8LEXCHECK );
typedef int64 $14FB_SYMBTYPEOPT;
int64 CSYMBOLTYPE( int64*, struct $8FBSYMBOL**, int64*, $14FB_SYMBTYPEOPT );
typedef int64 $8FB_IDOPT;
struct $8FBSYMBOL* CPARENTID( $8FB_IDOPT );
struct $8FBSYMBOL* CPROCHEADER( $13FB_SYMBATTRIB, int64*, $10FB_PROCOPT, int64 );
void CPARAMETERS( struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64, int64 );
struct $13FB_CMPSTMTSTK* CCOMPSTMTPUSH( $8FB_TOKEN, $15FB_CMPSTMT_MASK );
struct $13FB_CMPSTMTSTK* CCOMPSTMTGETTOS( $8FB_TOKEN, int64 );
void CCOMPSTMTPOP( struct $13FB_CMPSTMTSTK* );
int64 CCOMPSTMTISALLOWED( $15FB_CMPSTMT_MASK );
void HDISALLOWSTATICATTRIB( int64* );
void HDISALLOWVIRTUALCTOR( int64* );
void HDISALLOWABSTRACTDTOR( int64* );
void HDISALLOWCONSTCTORDTOR( int64, int64* );
int64 COPERATOR( int64 );
uint8* CALIASATTRIBUTE( void );
void CLIBATTRIBUTE( void );
void CMETHODATTRIBUTES( struct $8FBSYMBOL*, int64* );
void CPROCRETTYPE( int64, struct $8FBSYMBOL*, int64, int64*, struct $8FBSYMBOL** );
$21FB_PROC_RETURN_METHOD CPROCRETURNMETHOD( $11FB_DATATYPE );
$11FB_FUNCMODE CPROCCALLINGCONV( $11FB_FUNCMODE );
void CBYREFATTRIBUTE( int64*, int64 );
void HSKIPUNTIL( int64, int64, $8LEXCHECK, int64 );
void HSKIPCOMPOUND( int64, int64, $8LEXCHECK );
void HCOMPLAINIFABSTRACTCLASS( int64, struct $8FBSYMBOL* );
static void HPARAMERROR( struct $8FBSYMBOL*, int64, int64 );
static void HCHECKPROTOTYPE( struct $8FBSYMBOL*, struct $8FBSYMBOL*, uint8*, int64, struct $8FBSYMBOL*, int64 );
static void HCHECKATTRIBS( struct $8FBSYMBOL*, $13FB_SYMBATTRIB );
static int64 HCHECKIDTOKEN( int64 );
static struct $8FBSYMBOL* HGETID( struct $8FBSYMBOL*, uint8*, int64*, int64 );
static void CNAKEDATTRIBUTE( int64* );
static void COVERRIDEATTRIBUTE( struct $8FBSYMBOL* );
static void HCHECKATTRIB( int64*, int64, int64 );
static int64 HCHECKOPOVLPARAMS( struct $8FBSYMBOL*, int64, struct $8FBSYMBOL* );
static int64 HCHECKISSELFCLONEBYVAL( struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
static void HCHECKPROPPARAMS( struct $8FBSYMBOL*, int64 );
static void HSETUDTPROPERTYFLAGS( struct $8FBSYMBOL*, int64, int64 );
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

uint8* CALIASATTRIBUTE( void )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$10:;
	static uint8 ALIASID$1[129];
	int64 vr$1 = LEXGETTOKEN( 0ll );
	if( vr$1 != 383ll ) goto label$13;
	{
		LEXSKIPTOKEN( 0ll );
		int64 vr$3 = LEXGETCLASS( 0ll );
		if( vr$3 != 4ll ) goto label$15;
		{
			uint8* vr$5 = LEXGETTEXT(  );
			fb_StrAssign( (void*)ALIASID$1, 129ll, (void*)vr$5, 0ll, 0 );
			LEXSKIPTOKEN( 0ll );
			int64 vr$6 = fb_StrLen( (void*)ALIASID$1, 129ll );
			if( vr$6 <= 0ll ) goto label$17;
			{
				fb$result$1 = (uint8*)ALIASID$1;
			}
			goto label$16;
			label$17:;
			{
				ERRREPORT( 303ll, 0ll, (uint8*)0ull );
			}
			label$16:;
		}
		goto label$14;
		label$15:;
		{
			ERRREPORT( 17ll, 0ll, (uint8*)0ull );
		}
		label$14:;
	}
	label$13:;
	label$12:;
	label$11:;
	return fb$result$1;
}

void CLIBATTRIBUTE( void )
{
	label$18:;
	uint8* LIBNAME$1;
	int64 vr$0 = LEXGETTOKEN( 0ll );
	if( vr$0 != 384ll ) goto label$21;
	{
		LEXSKIPTOKEN( 0ll );
		int64 vr$2 = LEXGETCLASS( 0ll );
		if( vr$2 != 4ll ) goto label$23;
		{
			uint8* vr$4 = LEXGETTEXT(  );
			LIBNAME$1 = vr$4;
			int64 vr$5 = fb_StrLen( (void*)LIBNAME$1, 0ll );
			if( vr$5 <= 0ll ) goto label$25;
			{
				FBADDLIB( LIBNAME$1 );
			}
			goto label$24;
			label$25:;
			{
				ERRREPORT( 304ll, 0ll, (uint8*)0ull );
			}
			label$24:;
			LEXSKIPTOKEN( 0ll );
		}
		goto label$22;
		label$23:;
		{
			ERRREPORT( 17ll, 0ll, (uint8*)0ull );
		}
		label$22:;
	}
	label$21:;
	label$20:;
	label$19:;
}

void CMETHODATTRIBUTES( struct $8FBSYMBOL* PARENT$1, int64* ATTRIB$1 )
{
	label$26:;
	int64 vr$0 = HMATCH( 307ll );
	if( vr$0 == 0ll ) goto label$29;
	{
		*ATTRIB$1 = *ATTRIB$1 | 2ll;
		goto label$27;
	}
	label$29:;
	label$28:;
	int64 vr$5 = HMATCH( 335ll );
	if( vr$5 == 0ll ) goto label$31;
	{
		*ATTRIB$1 = *ATTRIB$1 | 1048576ll;
	}
	label$31:;
	label$30:;
	{
		int64 TMP$86$2;
		int64 vr$10 = LEXGETTOKEN( 0ll );
		TMP$86$2 = vr$10;
		if( TMP$86$2 != 355ll ) goto label$33;
		label$34:;
		{
			*ATTRIB$1 = *ATTRIB$1 | 1610612736ll;
			if( PARENT$1 == (struct $8FBSYMBOL*)0ull ) goto label$36;
			{
				if( (int64)-((*(int64*)((uint8*)PARENT$1 + 16ll) & 4194304ll) != 0ll) != 0ll ) goto label$38;
				{
					ERRREPORT( 221ll, 0ll, (uint8*)0ull );
					*ATTRIB$1 = *ATTRIB$1 & -1610612737ll;
				}
				label$38:;
				label$37:;
			}
			label$36:;
			label$35:;
			LEXSKIPTOKEN( 0ll );
		}
		goto label$32;
		label$33:;
		if( TMP$86$2 != 354ll ) goto label$39;
		label$40:;
		{
			*ATTRIB$1 = *ATTRIB$1 | 536870912ll;
			if( PARENT$1 == (struct $8FBSYMBOL*)0ull ) goto label$42;
			{
				if( (int64)-((*(int64*)((uint8*)PARENT$1 + 16ll) & 4194304ll) != 0ll) != 0ll ) goto label$44;
				{
					ERRREPORT( 220ll, 0ll, (uint8*)0ull );
					*ATTRIB$1 = *ATTRIB$1 & -536870913ll;
				}
				label$44:;
				label$43:;
			}
			label$42:;
			label$41:;
			LEXSKIPTOKEN( 0ll );
		}
		label$39:;
		label$32:;
	}
	label$27:;
}

void CPROCRETTYPE( int64 ATTRIB$1, struct $8FBSYMBOL* PROC$1, int64 IS_PROTO$1, int64* DTYPE$1, struct $8FBSYMBOL** SUBTYPE$1 )
{
	int64 TMP$93$1;
	label$136:;
	int64 OPTIONS$1;
	LEXSKIPTOKEN( 0ll );
	OPTIONS$1 = 1ll;
	if( (ATTRIB$1 & 33554432ll) == 0ll ) goto label$139;
	{
		if( IS_PROTO$1 == 0ll ) goto label$141;
		{
			OPTIONS$1 = OPTIONS$1 | 2ll;
		}
		label$141:;
		label$140:;
		OPTIONS$1 = OPTIONS$1 & -2ll;
	}
	label$139:;
	label$138:;
	TMP$93$1 = 0ll;
	int64 vr$6 = CSYMBOLTYPE( DTYPE$1, SUBTYPE$1, &TMP$93$1, OPTIONS$1 );
	if( vr$6 != 0ll ) goto label$143;
	{
		ERRREPORT( 14ll, 0ll, (uint8*)0ull );
		*DTYPE$1 = 7ll;
		*SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
	}
	goto label$142;
	label$143:;
	{
		{
			int64 TMP$94$3;
			TMP$94$3 = *DTYPE$1 & 511ll;
			if( TMP$94$3 == 17ll ) goto label$146;
			label$147:;
			if( TMP$94$3 == 3ll ) goto label$146;
			label$148:;
			if( TMP$94$3 != 6ll ) goto label$145;
			label$146:;
			{
				if( ((int64)-((ATTRIB$1 & 33554432ll) == 0ll) | (int64)-((*DTYPE$1 & 511ll) == 17ll)) == 0ll ) goto label$150;
				{
					ERRREPORT( 54ll, 0ll, (uint8*)0ull );
					*DTYPE$1 = 16ll;
					*SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
				}
				label$150:;
				label$149:;
			}
			goto label$144;
			label$145:;
			if( TMP$94$3 != 0ll ) goto label$151;
			label$152:;
			{
				ERRREPORT( 24ll, 0ll, (uint8*)0ull );
				*DTYPE$1 = ((*DTYPE$1 & 31ll) | ((*DTYPE$1 & 480ll) + 32ll)) | ((*DTYPE$1 & 261632ll) << 1ll);
				*SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
			}
			label$151:;
			label$144:;
		}
		if( (ATTRIB$1 & 33554432ll) != 0ll ) goto label$154;
		{
			HCOMPLAINIFABSTRACTCLASS( *DTYPE$1, *SUBTYPE$1 );
		}
		label$154:;
		label$153:;
	}
	label$142:;
	$21FB_PROC_RETURN_METHOD vr$42 = CPROCRETURNMETHOD( *($11FB_DATATYPE*)DTYPE$1 );
	*($21FB_PROC_RETURN_METHOD*)((uint8*)PROC$1 + 168ll) = vr$42;
	label$137:;
}

$21FB_PROC_RETURN_METHOD CPROCRETURNMETHOD( $11FB_DATATYPE DTYPE$1 )
{
	int64 TMP$95$1;
	$21FB_PROC_RETURN_METHOD fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$155:;
	FBSTRING RETURNMETHOD$1;
	__builtin_memset( &RETURNMETHOD$1, 0, 24ll );
	fb$result$1 = 2ll;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$157;
	TMP$95$1 = 22ll;
	goto label$171;
	label$157:;
	TMP$95$1 = DTYPE$1 & 31ll;
	label$171:;
	if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$95$1 * 56ll)) == 1ll ) goto label$159;
	{
		fb_StrDelete( &RETURNMETHOD$1 );
		goto label$156;
		label$159:;
	}
	int64 vr$8 = LEXGETTOKEN( 0ll );
	if( vr$8 != 343ll ) goto label$161;
	{
		LEXSKIPTOKEN( 0ll );
		int64 vr$10 = LEXGETTOKEN( 0ll );
		if( vr$10 == 40ll ) goto label$163;
		{
			ERRREPORT( 6ll, 0ll, (uint8*)0ull );
		}
		goto label$162;
		label$163:;
		{
			LEXSKIPTOKEN( 0ll );
		}
		label$162:;
		int64 vr$12 = LEXGETCLASS( 0ll );
		if( vr$12 == 4ll ) goto label$165;
		{
			ERRREPORT( 17ll, 0ll, (uint8*)0ull );
		}
		goto label$164;
		label$165:;
		{
			uint8* vr$14 = LEXGETTEXT(  );
			FBSTRING* vr$15 = fb_StrAllocTempDescZ( vr$14 );
			FBSTRING* vr$16 = fb_StrUcase2( vr$15, 0 );
			FBSTRING* vr$17 = fb_TRIM( vr$16 );
			FBSTRING* vr$19 = fb_StrAssign( (void*)&RETURNMETHOD$1, -1ll, (void*)vr$17, -1ll, 0 );
			int32 vr$21 = fb_StrCompare( (void*)&RETURNMETHOD$1, -1ll, (void*)"SSE", 4ll );
			if( (int64)vr$21 != 0ll ) goto label$167;
			{
				fb$result$1 = 1ll;
			}
			goto label$166;
			label$167:;
			int32 vr$25 = fb_StrCompare( (void*)&RETURNMETHOD$1, -1ll, (void*)"FPU", 4ll );
			if( (int64)vr$25 != 0ll ) goto label$168;
			{
				fb$result$1 = 0ll;
			}
			label$168:;
			label$166:;
			LEXSKIPTOKEN( 0ll );
		}
		label$164:;
		int64 vr$28 = LEXGETTOKEN( 0ll );
		if( vr$28 == 41ll ) goto label$170;
		{
			ERRREPORT( 7ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
		}
		goto label$169;
		label$170:;
		{
			LEXSKIPTOKEN( 0ll );
		}
		label$169:;
	}
	label$161:;
	label$160:;
	fb_StrDelete( &RETURNMETHOD$1 );
	label$156:;
	return fb$result$1;
}

$11FB_FUNCMODE CPROCCALLINGCONV( $11FB_FUNCMODE DEFAULT$1 )
{
	$11FB_FUNCMODE fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$172:;
	if( DEFAULT$1 != -1ll ) goto label$175;
	{
		DEFAULT$1 = *($11FB_FUNCMODE*)((uint8*)&ENV$ + 432ll);
	}
	label$175:;
	label$174:;
	{
		uint64 TMP$98$2;
		int64 vr$2 = LEXGETTOKEN( 0ll );
		TMP$98$2 = (uint64)vr$2;
		goto label$177;
		label$178:;
		{
			fb$result$1 = 3ll;
			LEXSKIPTOKEN( 0ll );
		}
		goto label$176;
		label$179:;
		{
			fb$result$1 = *($11FB_FUNCMODE*)((uint8*)&ENV$ + 440ll);
			LEXSKIPTOKEN( 0ll );
		}
		goto label$176;
		label$180:;
		{
			fb$result$1 = 4ll;
			LEXSKIPTOKEN( 0ll );
		}
		goto label$176;
		label$181:;
		{
			{
				uint64 TMP$99$4;
				TMP$99$4 = *(uint64*)((uint8*)&PARSER$ + 192ll);
				goto label$183;
				label$184:;
				{
					fb$result$1 = DEFAULT$1;
				}
				goto label$182;
				label$185:;
				{
					fb$result$1 = 3ll;
				}
				goto label$182;
				label$186:;
				{
					fb$result$1 = *($11FB_FUNCMODE*)((uint8*)&ENV$ + 440ll);
				}
				goto label$182;
				label$187:;
				{
					fb$result$1 = 2ll;
				}
				goto label$182;
				label$183:;
				static const void* tmp$100[5ll] = {
					&&label$184,
					&&label$185,
					&&label$186,
					&&label$187,
					&&label$185,
				};
				if( TMP$99$4 > 4ll ) goto label$182;
				goto *tmp$100[TMP$99$4 - 0ll];
				label$182:;
			}
		}
		goto label$176;
		label$177:;
		static const void* tmp$101[3ll] = {
			&&label$180,
			&&label$178,
			&&label$179,
		};
		if( TMP$98$2 < 380ll ) goto label$181;
		if( TMP$98$2 > 382ll ) goto label$181;
		goto *tmp$101[TMP$98$2 - 380ll];
		label$176:;
	}
	label$173:;
	return fb$result$1;
}

void CBYREFATTRIBUTE( int64* ATTRIB$1, int64 IS_FUNC$1 )
{
	label$200:;
	int64 vr$0 = LEXGETTOKEN( 0ll );
	if( vr$0 != 320ll ) goto label$203;
	{
		if( IS_FUNC$1 != 0ll ) goto label$205;
		{
			ERRREPORT( 17ll, 0ll, (uint8*)0ull );
		}
		label$205:;
		label$204:;
		LEXSKIPTOKEN( 0ll );
		*ATTRIB$1 = *ATTRIB$1 | 33554432ll;
	}
	label$203:;
	label$202:;
	label$201:;
}

struct $8FBSYMBOL* CPROCHEADER( $13FB_SYMBATTRIB ATTRIB$1, int64* IS_NESTED$1, $10FB_PROCOPT OPTIONS$1, int64 TK$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$398:;
	static uint8 ID$1[129];
	uint8* PALIAS$1;
	struct $8FBSYMBOL* HEAD_PROC$1;
	struct $8FBSYMBOL* PROC$1;
	struct $8FBSYMBOL* PARENT$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	struct $8FBSYMBOL* PARAM$1;
	int64 DTYPE$1;
	int64 IS_OUTSIDE$1;
	int64 IS_MEMBERPROC$1;
	int64 MODE$1;
	int64 STATS$1;
	int64 OP$1;
	int64 IS_GET$1;
	int64 IS_INDEXED$1;
	int64 PRIORITY$1;
	int64 IDOPT$1;
	*IS_NESTED$1 = 0ll;
	IS_OUTSIDE$1 = 0ll;
	IS_MEMBERPROC$1 = 0ll;
	IS_GET$1 = 0ll;
	IS_INDEXED$1 = 0ll;
	DTYPE$1 = 2147483648ll;
	SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
	STATS$1 = 0ll;
	PRIORITY$1 = 0ll;
	{
		if( TK$1 == 347ll ) goto label$402;
		label$403:;
		if( TK$1 != 348ll ) goto label$401;
		label$402:;
		{
			ATTRIB$1 = ATTRIB$1 | 2048ll;
			if( TK$1 != 347ll ) goto label$405;
			{
				ATTRIB$1 = ATTRIB$1 | 5120ll;
			}
			goto label$404;
			label$405:;
			{
				ATTRIB$1 = ATTRIB$1 | 8192ll;
			}
			label$404:;
		}
		goto label$400;
		label$401:;
		if( TK$1 != 349ll ) goto label$406;
		label$407:;
		{
			ATTRIB$1 = ATTRIB$1 | 17408ll;
		}
		goto label$400;
		label$406:;
		if( TK$1 != 350ll ) goto label$408;
		label$409:;
		{
			ATTRIB$1 = ATTRIB$1 | 35840ll;
		}
		label$408:;
		label$400:;
	}
	if( (OPTIONS$1 & 2ll) == 0ll ) goto label$411;
	{
		PARENT$1 = (struct $8FBSYMBOL*)0ull;
	}
	goto label$410;
	label$411:;
	{
		IDOPT$1 = 22ll;
		{
			if( TK$1 != 349ll ) goto label$413;
			label$414:;
			{
				IDOPT$1 = IDOPT$1 | 8ll;
			}
			goto label$412;
			label$413:;
			if( TK$1 == 347ll ) goto label$416;
			label$417:;
			if( TK$1 != 348ll ) goto label$415;
			label$416:;
			{
				IDOPT$1 = IDOPT$1 | 1ll;
			}
			label$415:;
			label$412:;
		}
		struct $8FBSYMBOL* vr$19 = CPARENTID( IDOPT$1 );
		PARENT$1 = vr$19;
	}
	label$410:;
	if( PARENT$1 == (struct $8FBSYMBOL*)0ull ) goto label$419;
	{
		if( (OPTIONS$1 & 1ll) == 0ll ) goto label$421;
		{
			ERRREPORT( 157ll, 0ll, (uint8*)0ull );
			PARENT$1 = (struct $8FBSYMBOL*)0ull;
		}
		goto label$420;
		label$421:;
		{
			IS_OUTSIDE$1 = -1ll;
		}
		label$420:;
	}
	goto label$418;
	label$419:;
	{
		if( *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll) == (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll) ) goto label$423;
		{
			PARENT$1 = *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll);
		}
		label$423:;
		label$422:;
	}
	label$418:;
	if( PARENT$1 == (struct $8FBSYMBOL*)0ull ) goto label$425;
	{
		IS_MEMBERPROC$1 = (int64)-(*(int64*)PARENT$1 == 10ll);
	}
	label$425:;
	label$424:;
	if( IS_MEMBERPROC$1 == 0ll ) goto label$427;
	{
		if( ((int64)-((OPTIONS$1 & 1ll) != 0ll) & (int64)-((ATTRIB$1 & 2ll) == 0ll)) == 0ll ) goto label$429;
		{
			ATTRIB$1 = ATTRIB$1 | 2048ll;
		}
		label$429:;
		label$428:;
	}
	goto label$426;
	label$427:;
	{
		{
			if( TK$1 == 347ll ) goto label$432;
			label$433:;
			if( TK$1 == 348ll ) goto label$432;
			label$434:;
			if( TK$1 != 350ll ) goto label$431;
			label$432:;
			{
				if( PARENT$1 != (struct $8FBSYMBOL*)0ull ) goto label$436;
				{
					ERRREPORT( 159ll, 0ll, (uint8*)0ull );
				}
				goto label$435;
				label$436:;
				if( (int64)-(*(int64*)PARENT$1 == 10ll) != 0ll ) goto label$437;
				{
					ERRREPORT( 167ll, 0ll, (uint8*)0ull );
				}
				label$437:;
				label$435:;
				if( (OPTIONS$1 & 1ll) == 0ll ) goto label$439;
				{
					HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				}
				goto label$438;
				label$439:;
				{
					HSKIPCOMPOUND( TK$1, -1ll, 0ll );
				}
				label$438:;
				goto label$399;
			}
			label$431:;
			label$430:;
		}
		HCHECKATTRIB( (int64*)&ATTRIB$1, 2ll, 257ll );
		HCHECKATTRIB( (int64*)&ATTRIB$1, 1048576ll, 258ll );
		HCHECKATTRIB( (int64*)&ATTRIB$1, 1073741824ll, 259ll );
		HCHECKATTRIB( (int64*)&ATTRIB$1, 536870912ll, 260ll );
	}
	label$426:;
	{
		if( TK$1 == 347ll ) goto label$442;
		label$443:;
		if( TK$1 != 348ll ) goto label$441;
		label$442:;
		{
			struct $8FBSYMBOL* vr$51 = SYMBPREADDPROC( (uint8*)0ull );
			PROC$1 = vr$51;
		}
		goto label$440;
		label$441:;
		if( TK$1 != 349ll ) goto label$444;
		label$445:;
		{
			int64 vr$53 = COPERATOR( -1ll );
			OP$1 = vr$53;
			{
				if( OP$1 == -1ll ) goto label$448;
				label$449:;
				if( OP$1 == 36ll ) goto label$448;
				label$450:;
				if( OP$1 == 9ll ) goto label$448;
				label$451:;
				if( OP$1 == 37ll ) goto label$448;
				label$452:;
				if( OP$1 != 10ll ) goto label$447;
				label$448:;
				{
					ERRREPORT( 156ll, 0ll, (uint8*)0ull );
					OP$1 = 28ll;
				}
				label$447:;
				label$446:;
			}
			if( (*(int64*)(((uint8*)AST_OPTB$ + (OP$1 << 5ll)) + 8ll) & 1ll) == 0ll ) goto label$454;
			{
				if( IS_MEMBERPROC$1 != 0ll ) goto label$456;
				{
					ERRREPORT( 151ll, -1ll, (uint8*)0ull );
					OP$1 = 28ll;
				}
				label$456:;
				label$455:;
			}
			goto label$453;
			label$454:;
			{
				if( IS_MEMBERPROC$1 == 0ll ) goto label$458;
				{
					ERRREPORT( 152ll, -1ll, (uint8*)" (TODO)" );
				}
				label$458:;
				label$457:;
			}
			label$453:;
			{
				uint64 TMP$123$4;
				TMP$123$4 = (uint64)OP$1;
				goto label$460;
				label$461:;
				{
					if( (ATTRIB$1 & 1610612736ll) == 0ll ) goto label$463;
					{
						ERRREPORT( 232ll, -1ll, (uint8*)0ull );
						ATTRIB$1 = ATTRIB$1 & -1610612737ll;
					}
					label$463:;
					label$462:;
					if( (ATTRIB$1 & 1048576ll) == 0ll ) goto label$465;
					{
						ERRREPORT( 233ll, -1ll, (uint8*)0ull );
						ATTRIB$1 = ATTRIB$1 & -1048577ll;
					}
					label$465:;
					label$464:;
					ATTRIB$1 = ATTRIB$1 | 2ll;
					ATTRIB$1 = ATTRIB$1 & -2049ll;
				}
				goto label$459;
				label$466:;
				{
					if( IS_MEMBERPROC$1 == 0ll ) goto label$468;
					{
						if( (ATTRIB$1 & 2ll) == 0ll ) goto label$470;
						{
							ERRREPORT( 231ll, -1ll, (uint8*)0ull );
							ATTRIB$1 = ATTRIB$1 & -3ll;
						}
						label$470:;
						label$469:;
						ATTRIB$1 = ATTRIB$1 | 2048ll;
					}
					label$468:;
					label$467:;
				}
				goto label$459;
				label$460:;
				static const void* tmp$127[4ll] = {
					&&label$461,
					&&label$461,
					&&label$461,
					&&label$461,
				};
				if( TMP$123$4 < 18ll ) goto label$466;
				if( TMP$123$4 > 21ll ) goto label$466;
				goto *tmp$127[TMP$123$4 - 18ll];
				label$459:;
			}
			struct $8FBSYMBOL* vr$77 = SYMBPREADDPROC( (uint8*)0ull );
			PROC$1 = vr$77;
		}
		goto label$440;
		label$444:;
		{
			struct $8FBSYMBOL* vr$82 = HGETID( PARENT$1, (uint8*)ID$1, &DTYPE$1, (int64)-(TK$1 == 345ll) | (int64)-(TK$1 == 350ll) );
			HEAD_PROC$1 = vr$82;
			struct $8FBSYMBOL* vr$83 = SYMBPREADDPROC( (uint8*)ID$1 );
			PROC$1 = vr$83;
		}
		label$471:;
		label$440:;
	}
	CNAKEDATTRIBUTE( (int64*)&ATTRIB$1 );
	{
		if( TK$1 == 347ll ) goto label$474;
		label$475:;
		if( TK$1 != 348ll ) goto label$473;
		label$474:;
		{
			MODE$1 = 3ll;
		}
		goto label$472;
		label$473:;
		{
			MODE$1 = -1ll;
		}
		label$476:;
		label$472:;
	}
	$11FB_FUNCMODE vr$87 = CPROCCALLINGCONV( MODE$1 );
	MODE$1 = vr$87;
	int64 vr$88 = LEXGETTOKEN( 0ll );
	if( vr$88 != 385ll ) goto label$478;
	{
		if( (int64)-((*(int64*)((uint8*)&ENV$ + 1152ll) & 16ll) != 0ll) != 0ll ) goto label$480;
		{
			ERRREPORTNOTALLOWED( 16ll, 145ll, (uint8*)0ull );
		}
		goto label$479;
		label$480:;
		{
			ATTRIB$1 = ATTRIB$1 | 1024ll;
		}
		label$479:;
		LEXSKIPTOKEN( 0ll );
	}
	label$478:;
	label$477:;
	if( (OPTIONS$1 & 1ll) == 0ll ) goto label$482;
	{
		CLIBATTRIBUTE(  );
	}
	label$482:;
	label$481:;
	uint8* vr$96 = CALIASATTRIBUTE(  );
	PALIAS$1 = vr$96;
	if( ((int64)-((OPTIONS$1 & 1ll) == 0ll) & (int64)-(PARENT$1 != (struct $8FBSYMBOL*)0ull)) == 0ll ) goto label$484;
	{
		if( PARENT$1 == *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll) ) goto label$486;
		{
			SYMBNESTBEGIN( PARENT$1, -1ll );
			*IS_NESTED$1 = -1ll;
		}
		label$486:;
		label$485:;
	}
	label$484:;
	label$483:;
	*($13FB_SYMBATTRIB*)((uint8*)PROC$1 + 8ll) = ATTRIB$1;
	CPARAMETERS( PARENT$1, PROC$1, MODE$1, (int64)-((OPTIONS$1 & 1ll) != 0ll) );
	{
		if( TK$1 != 348ll ) goto label$488;
		label$489:;
		{
			if( (int64)*(int16*)((uint8*)PROC$1 + 112ll) <= 1ll ) goto label$491;
			{
				ERRREPORT( 158ll, 0ll, (uint8*)0ull );
			}
			label$491:;
			label$490:;
			DTYPE$1 = 0ll;
			SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
		}
		goto label$487;
		label$488:;
		if( TK$1 != 347ll ) goto label$492;
		label$493:;
		{
			int64 vr$112 = HCHECKISSELFCLONEBYVAL( PARENT$1, PROC$1, OPTIONS$1 );
			if( vr$112 == 0ll ) goto label$495;
			{
				ERRREPORT( 270ll, -1ll, (uint8*)0ull );
				goto label$399;
			}
			label$495:;
			label$494:;
			if( *(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 136ll) + 88ll) != 4ll ) goto label$497;
			{
				HPARAMERROR( PROC$1, 0ll, 142ll );
				PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 136ll);
				*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 136ll) = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 288ll);
				if( *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 288ll) == (struct $8FBSYMBOL*)0ull ) goto label$499;
				{
					*(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 288ll) + 296ll) = (struct $8FBSYMBOL*)0ull;
				}
				label$499:;
				label$498:;
				*(int16*)((uint8*)PROC$1 + 112ll) = (int16)((int64)*(int16*)((uint8*)PROC$1 + 112ll) + -1ll);
				SYMBFREESYMBOL( PARAM$1 );
			}
			label$497:;
			label$496:;
			DTYPE$1 = 0ll;
			SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
		}
		goto label$487;
		label$492:;
		if( TK$1 != 349ll ) goto label$500;
		label$501:;
		{
			{
				if( OP$1 != 29ll ) goto label$503;
				label$504:;
				{
					if( (int64)*(int16*)((uint8*)PROC$1 + 112ll) != 1ll ) goto label$506;
					{
						OP$1 = 54ll;
					}
					label$506:;
					label$505:;
				}
				goto label$502;
				label$503:;
				if( OP$1 != 28ll ) goto label$507;
				label$508:;
				{
					if( (int64)*(int16*)((uint8*)PROC$1 + 112ll) != 1ll ) goto label$510;
					{
						OP$1 = 53ll;
					}
					label$510:;
					label$509:;
				}
				goto label$502;
				label$507:;
				if( OP$1 != 30ll ) goto label$511;
				label$512:;
				{
					if( (int64)*(int16*)((uint8*)PROC$1 + 112ll) != 1ll ) goto label$514;
					{
						OP$1 = 76ll;
					}
					label$514:;
					label$513:;
				}
				label$511:;
				label$502:;
			}
			if( (*(int64*)(((uint8*)AST_OPTB$ + (OP$1 << 5ll)) + 8ll) & 4ll) == 0ll ) goto label$516;
			{
				DTYPE$1 = 0ll;
			}
			goto label$515;
			label$516:;
			{
				CBYREFATTRIBUTE( (int64*)&ATTRIB$1, -1ll );
				int64 vr$146 = LEXGETTOKEN( 0ll );
				if( vr$146 != 375ll ) goto label$518;
				{
					CPROCRETTYPE( ATTRIB$1, PROC$1, (int64)-((OPTIONS$1 & 1ll) != 0ll), &DTYPE$1, &SUBTYPE$1 );
				}
				goto label$517;
				label$518:;
				{
					ERRREPORT( 67ll, 0ll, (uint8*)0ull );
					DTYPE$1 = 7ll;
				}
				label$517:;
			}
			label$515:;
			*($11FB_DATATYPE*)((uint8*)PROC$1 + 48ll) = DTYPE$1;
			*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 56ll) = SUBTYPE$1;
			SYMBPROCALLOCEXT( PROC$1 );
			*($6AST_OP*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 80ll) = OP$1;
			if( OP$1 != 0ll ) goto label$520;
			{
				int64 vr$157 = HCHECKISSELFCLONEBYVAL( PARENT$1, PROC$1, OPTIONS$1 );
				if( vr$157 == 0ll ) goto label$522;
				{
					ERRREPORT( 270ll, -1ll, (uint8*)0ull );
					goto label$399;
				}
				label$522:;
				label$521:;
			}
			label$520:;
			label$519:;
			int64 vr$159 = HCHECKOPOVLPARAMS( PARENT$1, OP$1, PROC$1 );
			if( vr$159 != 0ll ) goto label$524;
			{
				goto label$399;
			}
			label$524:;
			label$523:;
		}
		goto label$487;
		label$500:;
		if( TK$1 != 350ll ) goto label$525;
		label$526:;
		{
			CBYREFATTRIBUTE( (int64*)&ATTRIB$1, -1ll );
			int64 vr$163 = LEXGETTOKEN( 0ll );
			if( vr$163 != 375ll ) goto label$528;
			{
				CPROCRETTYPE( ATTRIB$1, PROC$1, (int64)-((OPTIONS$1 & 1ll) != 0ll), &DTYPE$1, &SUBTYPE$1 );
				IS_INDEXED$1 = (int64)-((int64)*(int16*)((uint8*)PROC$1 + 112ll) == 2ll);
				IS_GET$1 = -1ll;
			}
			goto label$527;
			label$528:;
			{
				if( (ATTRIB$1 & 33554432ll) == 0ll ) goto label$530;
				{
					ERRREPORT( 67ll, 0ll, (uint8*)0ull );
					ATTRIB$1 = ATTRIB$1 & -33554433ll;
				}
				label$530:;
				label$529:;
				DTYPE$1 = 0ll;
				IS_INDEXED$1 = (int64)-((int64)*(int16*)((uint8*)PROC$1 + 112ll) == 3ll);
			}
			label$527:;
			*($11FB_DATATYPE*)((uint8*)PROC$1 + 48ll) = DTYPE$1;
			*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 56ll) = SUBTYPE$1;
			HCHECKPROPPARAMS( PROC$1, IS_GET$1 );
		}
		goto label$487;
		label$525:;
		{
			if( IS_MEMBERPROC$1 == 0ll ) goto label$533;
			{
				int64 TMP$124$4;
				if( (int64)-((int64)*(int16*)((uint8*)PROC$1 + 112ll) <= 0ll) != 0ll ) goto label$534;
				TMP$124$4 = (int64)-((int64)-(*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 136ll) + 88ll) != 4ll) != 0ll);
				goto label$644;
				label$534:;
				TMP$124$4 = -1ll;
				label$644:;
				if( TMP$124$4 == 0ll ) goto label$536;
				{
					ATTRIB$1 = ATTRIB$1 | 1024ll;
				}
				label$536:;
				label$535:;
			}
			label$533:;
			label$532:;
			CBYREFATTRIBUTE( (int64*)&ATTRIB$1, (int64)-(TK$1 == 346ll) );
			int64 vr$193 = LEXGETTOKEN( 0ll );
			if( vr$193 != 375ll ) goto label$538;
			{
				if( ((int64)-(DTYPE$1 != 2147483648ll) | (int64)-(TK$1 == 345ll)) == 0ll ) goto label$540;
				{
					ERRREPORT( 17ll, 0ll, (uint8*)0ull );
				}
				label$540:;
				label$539:;
				CPROCRETTYPE( ATTRIB$1, PROC$1, (int64)-((OPTIONS$1 & 1ll) != 0ll), &DTYPE$1, &SUBTYPE$1 );
			}
			goto label$537;
			label$538:;
			{
				if( TK$1 != 346ll ) goto label$542;
				{
					if( (*(int64*)((uint8*)&ENV$ + 1152ll) & 4194304ll) == 0ll ) goto label$544;
					{
						if( DTYPE$1 != 2147483648ll ) goto label$546;
						{
							int64 vr$207 = SYMBGETDEFTYPE( (uint8*)ID$1 );
							DTYPE$1 = vr$207;
						}
						label$546:;
						label$545:;
					}
					goto label$543;
					label$544:;
					{
						ERRREPORTNOTALLOWED( 4194304ll, 146ll, (uint8*)0ull );
						DTYPE$1 = 7ll;
					}
					label$543:;
				}
				goto label$541;
				label$542:;
				{
					DTYPE$1 = 0ll;
				}
				label$541:;
			}
			label$537:;
		}
		label$531:;
		label$487:;
	}
	if( (OPTIONS$1 & 1ll) == 0ll ) goto label$548;
	{
		{
			if( TK$1 == 347ll ) goto label$551;
			label$552:;
			if( TK$1 != 348ll ) goto label$550;
			label$551:;
			{
				struct $8FBSYMBOL* vr$212 = SYMBADDCTOR( PROC$1, PALIAS$1, ATTRIB$1, MODE$1, 0ll );
				PROC$1 = vr$212;
			}
			goto label$549;
			label$550:;
			if( TK$1 != 349ll ) goto label$553;
			label$554:;
			{
				struct $8FBSYMBOL* vr$214 = SYMBADDOPERATOR( PROC$1, OP$1, PALIAS$1, DTYPE$1, SUBTYPE$1, ATTRIB$1, MODE$1, 0ll );
				PROC$1 = vr$214;
			}
			goto label$549;
			label$553:;
			{
				struct $8FBSYMBOL* vr$215 = SYMBADDPROC( PROC$1, (uint8*)ID$1, PALIAS$1, DTYPE$1, SUBTYPE$1, ATTRIB$1, MODE$1, 0ll );
				PROC$1 = vr$215;
			}
			label$555:;
			label$549:;
		}
		if( PROC$1 != (struct $8FBSYMBOL*)0ull ) goto label$557;
		{
			ERRREPORT( 4ll, 0ll, (uint8*)0ull );
			goto label$399;
		}
		label$557:;
		label$556:;
		if( ((int64)-((OPTIONS$1 & 2ll) != 0ll) & (int64)-(TK$1 != 347ll)) == 0ll ) goto label$559;
		{
			COVERRIDEATTRIBUTE( PROC$1 );
		}
		label$559:;
		label$558:;
		if( TK$1 != 350ll ) goto label$561;
		{
			HSETUDTPROPERTYFLAGS( PARENT$1, IS_INDEXED$1, IS_GET$1 );
		}
		label$561:;
		label$560:;
		fb$result$1 = PROC$1;
		goto label$399;
	}
	label$548:;
	label$547:;
	{
		int64 TMP$125$2;
		int64 vr$223 = LEXGETTOKEN( 0ll );
		TMP$125$2 = vr$223;
		if( TMP$125$2 == 347ll ) goto label$564;
		label$565:;
		if( TMP$125$2 != 348ll ) goto label$563;
		label$564:;
		{
			if( ((int64)-((ATTRIB$1 & 2048ll) != 0ll) | (int64)-(TK$1 == 346ll)) == 0ll ) goto label$567;
			{
				ERRREPORT( 17ll, -1ll, (uint8*)0ull );
			}
			goto label$566;
			label$567:;
			if( (int64)*(int16*)((uint8*)PROC$1 + 112ll) == 0ll ) goto label$568;
			{
				ERRREPORT( 1ll, -1ll, (uint8*)0ull );
			}
			goto label$566;
			label$568:;
			{
				int64 vr$234 = LEXGETTOKEN( 0ll );
				if( vr$234 != 347ll ) goto label$570;
				{
					STATS$1 = STATS$1 | 65536ll;
				}
				goto label$569;
				label$570:;
				{
					STATS$1 = STATS$1 | 131072ll;
				}
				label$569:;
			}
			label$566:;
			LEXSKIPTOKEN( 0ll );
			int64 vr$238 = LEXGETCLASS( 0ll );
			if( vr$238 != 3ll ) goto label$572;
			{
				if( *(int64*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 16ll) == 7ll ) goto label$574;
				{
					ERRREPORT( 188ll, 0ll, (uint8*)0ull );
					LEXSKIPTOKEN( 0ll );
				}
				goto label$573;
				label$574:;
				{
					uint8* vr$243 = LEXGETTEXT(  );
					FBSTRING* vr$244 = fb_StrAllocTempDescZ( vr$243 );
					int32 vr$245 = fb_VALINT( vr$244 );
					PRIORITY$1 = (int64)vr$245;
					if( ((int64)-(PRIORITY$1 < 101ll) | (int64)-(PRIORITY$1 > 65535ll)) == 0ll ) goto label$576;
					{
						ERRREPORT( 188ll, 0ll, (uint8*)0ull );
						LEXSKIPTOKEN( 0ll );
					}
					goto label$575;
					label$576:;
					{
						PRIORITY$1 = PRIORITY$1 & 65535ll;
						LEXSKIPTOKEN( 0ll );
					}
					label$575:;
				}
				label$573:;
			}
			label$572:;
			label$571:;
		}
		label$563:;
		label$562:;
	}
	int64 vr$252 = HMATCH( 307ll );
	if( vr$252 == 0ll ) goto label$578;
	{
		ATTRIB$1 = ATTRIB$1 | 2097152ll;
	}
	label$578:;
	label$577:;
	int64 vr$255 = LEXGETTOKEN( 0ll );
	if( vr$255 != 341ll ) goto label$580;
	{
		if( (STATS$1 & 196608ll) == 0ll ) goto label$582;
		{
			ERRREPORT( 17ll, 0ll, (uint8*)0ull );
		}
		label$582:;
		label$581:;
		if( (ATTRIB$1 & 64ll) == 0ll ) goto label$584;
		{
			ERRREPORT( 17ll, 0ll, (uint8*)0ull );
			ATTRIB$1 = ATTRIB$1 & -65ll;
		}
		label$584:;
		label$583:;
		LEXSKIPTOKEN( 0ll );
		FBSETOPTION( 22ll, -1ll );
		ATTRIB$1 = ATTRIB$1 | 288ll;
	}
	label$580:;
	label$579:;
	{
		if( TK$1 != 347ll ) goto label$586;
		label$587:;
		{
			struct $8FBSYMBOL* vr$264 = SYMBGETCOMPCTORHEAD( PARENT$1 );
			HEAD_PROC$1 = vr$264;
		}
		goto label$585;
		label$586:;
		if( TK$1 != 348ll ) goto label$588;
		label$589:;
		{
			struct $8FBSYMBOL* vr$266 = SYMBGETCOMPDTOR( PARENT$1 );
			HEAD_PROC$1 = vr$266;
		}
		goto label$585;
		label$588:;
		if( TK$1 != 349ll ) goto label$590;
		label$591:;
		{
			struct $8FBSYMBOL* vr$268 = SYMBGETCOMPOPOVLHEAD( PARENT$1, OP$1 );
			HEAD_PROC$1 = vr$268;
		}
		label$590:;
		label$585:;
	}
	if( HEAD_PROC$1 != (struct $8FBSYMBOL*)0ull ) goto label$593;
	{
		if( IS_OUTSIDE$1 == 0ll ) goto label$595;
		{
			ERRREPORT( 157ll, 0ll, (uint8*)0ull );
		}
		label$595:;
		label$594:;
		{
			if( TK$1 == 347ll ) goto label$598;
			label$599:;
			if( TK$1 != 348ll ) goto label$597;
			label$598:;
			{
				struct $8FBSYMBOL* vr$273 = SYMBADDCTOR( PROC$1, PALIAS$1, ATTRIB$1, MODE$1, 4ll );
				HEAD_PROC$1 = vr$273;
			}
			goto label$596;
			label$597:;
			if( TK$1 != 349ll ) goto label$600;
			label$601:;
			{
				struct $8FBSYMBOL* vr$275 = SYMBADDOPERATOR( PROC$1, OP$1, PALIAS$1, DTYPE$1, SUBTYPE$1, ATTRIB$1, MODE$1, 4ll );
				HEAD_PROC$1 = vr$275;
			}
			goto label$596;
			label$600:;
			{
				struct $8FBSYMBOL* vr$276 = SYMBADDPROC( PROC$1, (uint8*)ID$1, PALIAS$1, DTYPE$1, SUBTYPE$1, ATTRIB$1, MODE$1, 4ll );
				HEAD_PROC$1 = vr$276;
			}
			label$602:;
			label$596:;
		}
		if( HEAD_PROC$1 != (struct $8FBSYMBOL*)0ull ) goto label$604;
		{
			ERRREPORT( 4ll, -1ll, (uint8*)0ull );
			uint8* vr$278 = SYMBUNIQUELABEL(  );
			struct $8FBSYMBOL* vr$279 = SYMBADDPROC( PROC$1, vr$278, (uint8*)0ull, DTYPE$1, SUBTYPE$1, ATTRIB$1, MODE$1, 4ll );
			PROC$1 = vr$279;
		}
		goto label$603;
		label$604:;
		{
			PROC$1 = HEAD_PROC$1;
		}
		label$603:;
	}
	goto label$592;
	label$593:;
	{
		if( (int64)-((*(int64*)((uint8*)HEAD_PROC$1 + 8ll) & 32768ll) != 0ll) == (int64)-(TK$1 == 350ll) ) goto label$606;
		{
			ERRREPORT( 4ll, -1ll, (uint8*)0ull );
			uint8* vr$285 = SYMBUNIQUELABEL(  );
			struct $8FBSYMBOL* vr$286 = SYMBADDPROC( PROC$1, vr$285, (uint8*)0ull, DTYPE$1, SUBTYPE$1, ATTRIB$1, MODE$1, 4ll );
			fb$result$1 = vr$286;
			goto label$399;
		}
		label$606:;
		label$605:;
		if( (*(int64*)((uint8*)HEAD_PROC$1 + 8ll) & 1024ll) <= 0ll ) goto label$608;
		{
			{
				if( TK$1 != 347ll ) goto label$610;
				label$611:;
				{
					struct $8FBSYMBOL* vr$291 = SYMBFINDCTORPROC( HEAD_PROC$1, PROC$1 );
					HEAD_PROC$1 = vr$291;
				}
				goto label$609;
				label$610:;
				if( TK$1 != 349ll ) goto label$612;
				label$613:;
				{
					struct $8FBSYMBOL* vr$293 = SYMBFINDOPOVLPROC( OP$1, HEAD_PROC$1, PROC$1 );
					HEAD_PROC$1 = vr$293;
				}
				goto label$609;
				label$612:;
				{
					$16FB_SYMBLOOKUPOPT TMP$126$5;
					if( IS_GET$1 == 0ll ) goto label$615;
					TMP$126$5 = 1ll;
					goto label$645;
					label$615:;
					TMP$126$5 = 0ll;
					label$645:;
					struct $8FBSYMBOL* vr$295 = SYMBFINDOVERLOADPROC( HEAD_PROC$1, PROC$1, TMP$126$5 );
					HEAD_PROC$1 = vr$295;
				}
				label$614:;
				label$609:;
			}
			ATTRIB$1 = ATTRIB$1 | 1024ll;
		}
		label$608:;
		label$607:;
		if( HEAD_PROC$1 != (struct $8FBSYMBOL*)0ull ) goto label$617;
		{
			if( IS_OUTSIDE$1 == 0ll ) goto label$619;
			{
				ERRREPORT( 157ll, 0ll, (uint8*)0ull );
			}
			label$619:;
			label$618:;
			{
				if( TK$1 == 347ll ) goto label$622;
				label$623:;
				if( TK$1 != 348ll ) goto label$621;
				label$622:;
				{
					struct $8FBSYMBOL* vr$301 = SYMBADDCTOR( PROC$1, PALIAS$1, ATTRIB$1, MODE$1, 4ll );
					HEAD_PROC$1 = vr$301;
				}
				goto label$620;
				label$621:;
				if( TK$1 != 349ll ) goto label$624;
				label$625:;
				{
					struct $8FBSYMBOL* vr$303 = SYMBADDOPERATOR( PROC$1, OP$1, PALIAS$1, DTYPE$1, SUBTYPE$1, ATTRIB$1, MODE$1, 4ll );
					HEAD_PROC$1 = vr$303;
				}
				goto label$620;
				label$624:;
				{
					struct $8FBSYMBOL* vr$304 = SYMBADDPROC( PROC$1, (uint8*)ID$1, PALIAS$1, DTYPE$1, SUBTYPE$1, ATTRIB$1, MODE$1, 4ll );
					HEAD_PROC$1 = vr$304;
				}
				label$626:;
				label$620:;
			}
			if( HEAD_PROC$1 != (struct $8FBSYMBOL*)0ull ) goto label$628;
			{
				ERRREPORT( 4ll, -1ll, (uint8*)0ull );
				uint8* vr$306 = SYMBUNIQUELABEL(  );
				struct $8FBSYMBOL* vr$307 = SYMBADDPROC( PROC$1, vr$306, (uint8*)0ull, DTYPE$1, SUBTYPE$1, ATTRIB$1, MODE$1, 4ll );
				fb$result$1 = vr$307;
				goto label$399;
			}
			label$628:;
			label$627:;
			PROC$1 = HEAD_PROC$1;
		}
		goto label$616;
		label$617:;
		{
			if( (*(int64*)((uint8*)HEAD_PROC$1 + 16ll) & 8ll) == 0ll ) goto label$630;
			{
				ERRREPORT( 4ll, -1ll, (uint8*)0ull );
				uint8* vr$311 = SYMBUNIQUELABEL(  );
				struct $8FBSYMBOL* vr$312 = SYMBADDPROC( PROC$1, vr$311, (uint8*)0ull, DTYPE$1, SUBTYPE$1, ATTRIB$1, MODE$1, 4ll );
				fb$result$1 = vr$312;
				goto label$399;
			}
			label$630:;
			label$629:;
			HCHECKPROTOTYPE( HEAD_PROC$1, PROC$1, PALIAS$1, DTYPE$1, SUBTYPE$1, MODE$1 );
			PROC$1 = HEAD_PROC$1;
			HCHECKATTRIBS( PROC$1, ATTRIB$1 );
			if( (STATS$1 & 196608ll) == 0ll ) goto label$632;
			{
				if( (*(int64*)((uint8*)PROC$1 + 8ll) & 2048ll) == 0ll ) goto label$634;
				{
					ERRREPORT( 17ll, -1ll, (uint8*)0ull );
				}
				label$634:;
				label$633:;
			}
			label$632:;
			label$631:;
			*($12FB_SYMBSTATS*)((uint8*)PROC$1 + 16ll) = *(int64*)((uint8*)PROC$1 + 16ll) | 8ll;
		}
		label$616:;
	}
	label$592:;
	if( (STATS$1 & 65536ll) == 0ll ) goto label$636;
	{
		if( (*(int64*)((uint8*)PROC$1 + 8ll) & 201326592ll) == 0ll ) goto label$638;
		{
			ERRREPORT( 204ll, -1ll, (uint8*)0ull );
		}
		label$638:;
		label$637:;
		SYMBADDGLOBALCTOR( PROC$1 );
		SYMBPROCALLOCEXT( PROC$1 );
		*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 112ll) = PRIORITY$1;
	}
	goto label$635;
	label$636:;
	if( (STATS$1 & 131072ll) == 0ll ) goto label$639;
	{
		if( (*(int64*)((uint8*)PROC$1 + 8ll) & 201326592ll) == 0ll ) goto label$641;
		{
			ERRREPORT( 205ll, -1ll, (uint8*)0ull );
		}
		label$641:;
		label$640:;
		SYMBADDGLOBALDTOR( PROC$1 );
		SYMBPROCALLOCEXT( PROC$1 );
		*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 112ll) = PRIORITY$1;
	}
	label$639:;
	label$635:;
	if( TK$1 != 350ll ) goto label$643;
	{
		HSETUDTPROPERTYFLAGS( PARENT$1, IS_INDEXED$1, IS_GET$1 );
	}
	label$643:;
	label$642:;
	fb$result$1 = PROC$1;
	label$399:;
	return fb$result$1;
}

void HDISALLOWSTATICATTRIB( int64* ATTRIB$1 )
{
	label$646:;
	if( (*ATTRIB$1 & 2ll) == 0ll ) goto label$649;
	{
		ERRREPORT( 212ll, 0ll, (uint8*)0ull );
		*ATTRIB$1 = *ATTRIB$1 & -3ll;
	}
	label$649:;
	label$648:;
	label$647:;
}

void HDISALLOWVIRTUALCTOR( int64* ATTRIB$1 )
{
	label$650:;
	if( (*ATTRIB$1 & 1610612736ll) == 0ll ) goto label$653;
	{
		if( (*ATTRIB$1 & 1073741824ll) == 0ll ) goto label$655;
		{
			ERRREPORT( 209ll, 0ll, (uint8*)0ull );
		}
		goto label$654;
		label$655:;
		{
			ERRREPORT( 210ll, 0ll, (uint8*)0ull );
		}
		label$654:;
		*ATTRIB$1 = *ATTRIB$1 & -1073742035ll;
	}
	label$653:;
	label$652:;
	label$651:;
}

void HDISALLOWABSTRACTDTOR( int64* ATTRIB$1 )
{
	label$656:;
	if( (*ATTRIB$1 & 1073741824ll) == 0ll ) goto label$659;
	{
		ERRREPORT( 211ll, 0ll, (uint8*)0ull );
		*ATTRIB$1 = *ATTRIB$1 & -1073741825ll;
	}
	label$659:;
	label$658:;
	label$657:;
}

void HDISALLOWCONSTCTORDTOR( int64 TK$1, int64* ATTRIB$1 )
{
	label$660:;
	if( (*ATTRIB$1 & 1048576ll) == 0ll ) goto label$663;
	{
		$9FB_ERRMSG TMP$128$2;
		if( TK$1 != 347ll ) goto label$664;
		TMP$128$2 = 313ll;
		goto label$665;
		label$664:;
		TMP$128$2 = 314ll;
		label$665:;
		ERRREPORT( TMP$128$2, 0ll, (uint8*)0ull );
		*ATTRIB$1 = *ATTRIB$1 & -1048577ll;
	}
	label$663:;
	label$662:;
	label$661:;
}

void CPROCSTMTBEGIN( int64 ATTRIB$1 )
{
	label$666:;
	int64 TKN$1;
	int64 IS_NESTED$1;
	struct $8FBSYMBOL* PROC$1;
	struct $13FB_CMPSTMTSTK* STK$1;
	if( (ATTRIB$1 & 96ll) != 0ll ) goto label$669;
	{
		if( *(int64*)((uint8*)&ENV$ + 1232ll) == 0ll ) goto label$671;
		{
			ATTRIB$1 = ATTRIB$1 | 32ll;
		}
		goto label$670;
		label$671:;
		{
			ATTRIB$1 = ATTRIB$1 | 64ll;
		}
		label$670:;
	}
	label$669:;
	label$668:;
	CMETHODATTRIBUTES( (struct $8FBSYMBOL*)0ull, &ATTRIB$1 );
	int64 vr$6 = LEXGETTOKEN( 0ll );
	TKN$1 = vr$6;
	{
		uint64 TMP$129$2;
		TMP$129$2 = (uint64)TKN$1;
		goto label$673;
		label$674:;
		{
		}
		goto label$672;
		label$675:;
		{
			if( (int64)-((*(int64*)((uint8*)&ENV$ + 1152ll) & 64ll) != 0ll) != 0ll ) goto label$677;
			{
				ERRREPORTNOTALLOWED( 64ll, 145ll, (uint8*)0ull );
			}
			goto label$676;
			label$677:;
			{
				ATTRIB$1 = ATTRIB$1 | 4096ll;
			}
			label$676:;
			HDISALLOWSTATICATTRIB( &ATTRIB$1 );
			HDISALLOWVIRTUALCTOR( &ATTRIB$1 );
			HDISALLOWCONSTCTORDTOR( TKN$1, &ATTRIB$1 );
		}
		goto label$672;
		label$678:;
		{
			if( (int64)-((*(int64*)((uint8*)&ENV$ + 1152ll) & 64ll) != 0ll) != 0ll ) goto label$680;
			{
				ERRREPORTNOTALLOWED( 64ll, 145ll, (uint8*)0ull );
			}
			goto label$679;
			label$680:;
			{
				ATTRIB$1 = ATTRIB$1 | 8192ll;
			}
			label$679:;
			HDISALLOWSTATICATTRIB( &ATTRIB$1 );
			HDISALLOWABSTRACTDTOR( &ATTRIB$1 );
			HDISALLOWCONSTCTORDTOR( TKN$1, &ATTRIB$1 );
		}
		goto label$672;
		label$681:;
		{
			if( (int64)-((*(int64*)((uint8*)&ENV$ + 1152ll) & 32ll) != 0ll) != 0ll ) goto label$683;
			{
				ERRREPORTNOTALLOWED( 32ll, 145ll, (uint8*)0ull );
			}
			label$683:;
			label$682:;
		}
		goto label$672;
		label$684:;
		{
			if( (int64)-((*(int64*)((uint8*)&ENV$ + 1152ll) & 64ll) != 0ll) != 0ll ) goto label$686;
			{
				ERRREPORTNOTALLOWED( 64ll, 145ll, (uint8*)0ull );
			}
			label$686:;
			label$685:;
			HDISALLOWSTATICATTRIB( &ATTRIB$1 );
		}
		goto label$672;
		label$687:;
		{
			ERRREPORT( 17ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
			goto label$667;
		}
		goto label$672;
		label$673:;
		static const void* tmp$130[6ll] = {
			&&label$674,
			&&label$674,
			&&label$675,
			&&label$678,
			&&label$681,
			&&label$684,
		};
		if( TMP$129$2 < 345ll ) goto label$687;
		if( TMP$129$2 > 350ll ) goto label$687;
		goto *tmp$130[TMP$129$2 - 345ll];
		label$672:;
	}
	int64 vr$28 = CCOMPSTMTISALLOWED( 2ll );
	if( vr$28 != 0ll ) goto label$689;
	{
		HSKIPCOMPOUND( TKN$1, -1ll, 0ll );
		goto label$667;
	}
	label$689:;
	label$688:;
	LEXSKIPTOKEN( 0ll );
	struct $8FBSYMBOL* vr$31 = CPROCHEADER( ATTRIB$1, &IS_NESTED$1, 0ll, TKN$1 );
	PROC$1 = vr$31;
	if( PROC$1 != (struct $8FBSYMBOL*)0ull ) goto label$691;
	{
		if( IS_NESTED$1 == 0ll ) goto label$693;
		{
			SYMBNESTEND( -1ll );
		}
		label$693:;
		label$692:;
		HSKIPCOMPOUND( TKN$1, -1ll, 0ll );
		goto label$667;
	}
	label$691:;
	label$690:;
	if( (*(int64*)((uint8*)PROC$1 + 8ll) & 1073741824ll) == 0ll ) goto label$695;
	{
		ERRREPORT( 223ll, 0ll, (uint8*)0ull );
	}
	label$695:;
	label$694:;
	ASTPROCBEGIN( PROC$1, 0ll );
	struct $13FB_CMPSTMTSTK* vr$37 = CCOMPSTMTPUSH( 346ll, 33ll );
	STK$1 = vr$37;
	*($8FB_TOKEN*)((uint8*)STK$1 + 24ll) = TKN$1;
	*(int64*)((uint8*)STK$1 + 32ll) = IS_NESTED$1;
	*(struct $8FBSYMBOL**)((uint8*)STK$1 + 40ll) = *(struct $8FBSYMBOL**)((uint8*)*(struct $7ASTNODE**)((uint8*)&AST$ + 80ll) + 72ll);
	label$667:;
}

void CPROCSTMTEND( void )
{
	label$696:;
	struct $13FB_CMPSTMTSTK* STK$1;
	struct $8FBSYMBOL* PROC_RES$1;
	struct $13FB_CMPSTMTSTK* vr$0 = CCOMPSTMTGETTOS( 346ll, -1ll );
	STK$1 = vr$0;
	if( STK$1 != (struct $13FB_CMPSTMTSTK*)0ull ) goto label$699;
	{
		HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
		goto label$697;
	}
	label$699:;
	label$698:;
	LEXSKIPTOKEN( 0ll );
	int64 vr$3 = HMATCH( *(int64*)((uint8*)STK$1 + 24ll) );
	if( vr$3 != 0ll ) goto label$701;
	{
		{
			$8FB_TOKEN TMP$131$3;
			TMP$131$3 = *($8FB_TOKEN*)((uint8*)STK$1 + 24ll);
			if( TMP$131$3 != 345ll ) goto label$703;
			label$704:;
			{
				ERRREPORT( 124ll, 0ll, (uint8*)0ull );
			}
			goto label$702;
			label$703:;
			if( TMP$131$3 != 346ll ) goto label$705;
			label$706:;
			{
				ERRREPORT( 125ll, 0ll, (uint8*)0ull );
			}
			goto label$702;
			label$705:;
			if( TMP$131$3 != 347ll ) goto label$707;
			label$708:;
			{
				ERRREPORT( 126ll, 0ll, (uint8*)0ull );
			}
			goto label$702;
			label$707:;
			if( TMP$131$3 != 348ll ) goto label$709;
			label$710:;
			{
				ERRREPORT( 127ll, 0ll, (uint8*)0ull );
			}
			goto label$702;
			label$709:;
			if( TMP$131$3 != 349ll ) goto label$711;
			label$712:;
			{
				ERRREPORT( 128ll, 0ll, (uint8*)0ull );
			}
			goto label$702;
			label$711:;
			if( TMP$131$3 != 350ll ) goto label$713;
			label$714:;
			{
				ERRREPORT( 129ll, 0ll, (uint8*)0ull );
			}
			label$713:;
			label$702:;
		}
	}
	label$701:;
	label$700:;
	struct $8FBSYMBOL* vr$12 = SYMBGETPROCRESULT( *(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) );
	PROC_RES$1 = vr$12;
	if( PROC_RES$1 == (struct $8FBSYMBOL*)0ull ) goto label$716;
	{
		if( (int64)-((*(int64*)((uint8*)PROC_RES$1 + 16ll) & 2ll) != 0ll) != 0ll ) goto label$718;
		{
			if( (int64)-((*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 8ll) & 268435456ll) != 0ll) != 0ll ) goto label$720;
			{
				if( (*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 8ll) & 33554432ll) == 0ll ) goto label$722;
				{
					ERRREPORT( 315ll, 0ll, (uint8*)0ull );
				}
				goto label$721;
				label$722:;
				{
					ERRREPORTWARN( 13ll, (uint8*)0ull, 1ll );
				}
				label$721:;
			}
			label$720:;
			label$719:;
		}
		label$718:;
		label$717:;
	}
	label$716:;
	label$715:;
	ASTPROCEND( 0ll );
	if( *(int64*)((uint8*)STK$1 + 32ll) == 0ll ) goto label$724;
	{
		SYMBNESTEND( -1ll );
	}
	label$724:;
	label$723:;
	CCOMPSTMTPOP( STK$1 );
	label$697:;
}

__attribute__(( constructor )) static void fb_ctor__parserzproc( void )
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

static void HPARAMERROR( struct $8FBSYMBOL* PROC$1, int64 ARGNUM$1, int64 ERRNUM$1 )
{
	label$45:;
	ERRREPORTPARAM( PROC$1, ARGNUM$1, (uint8*)0ull, ERRNUM$1 );
	label$46:;
}

static void HCHECKPROTOTYPE( struct $8FBSYMBOL* PROTO$1, struct $8FBSYMBOL* PROC$1, uint8* PALIAS$1, int64 PROC_DTYPE$1, struct $8FBSYMBOL* PROC_SUBTYPE$1, int64 MODE$1 )
{
	label$47:;
	struct $8FBSYMBOL* PARAM$1;
	struct $8FBSYMBOL* PROTO_PARAM$1;
	int64 PARAMS$1;
	int64 PROTO_PARAMS$1;
	int64 I$1;
	if( ((int64)-(PALIAS$1 != (uint8*)0ull) & (int64)-((*(int64*)((uint8*)PROTO$1 + 16ll) & 512ll) != 0ll)) == 0ll ) goto label$50;
	{
		int32 vr$7 = fb_StrCompare( (void*)PALIAS$1, 0ll, *(void**)((uint8*)PROTO$1 + 32ll), 0ll );
		if( (int64)vr$7 == 0ll ) goto label$52;
		{
			FBSTRING TMP$88$3;
			FBSTRING TMP$89$3;
			FBSTRING TMP$90$3;
			__builtin_memset( &TMP$90$3, 0, 24ll );
			__builtin_memset( &TMP$88$3, 0, 24ll );
			FBSTRING* vr$13 = fb_StrConcat( &TMP$88$3, (void*)"\x22", 2ll, (void*)PALIAS$1, 0ll );
			__builtin_memset( &TMP$89$3, 0, 24ll );
			FBSTRING* vr$16 = fb_StrConcat( &TMP$89$3, (void*)vr$13, -1ll, (void*)"\x22", 2ll );
			FBSTRING* vr$18 = fb_StrAssign( (void*)&TMP$90$3, -1ll, (void*)vr$16, -1ll, 0 );
			ERRREPORTEX( 310ll, *(uint8**)&TMP$90$3, 0ll, 1ll, (uint8*)0ull );
			fb_StrDelete( &TMP$90$3 );
		}
		label$52:;
		label$51:;
	}
	label$50:;
	label$49:;
	if( ((int64)-(*(int64*)((uint8*)PROTO$1 + 48ll) != PROC_DTYPE$1) | (int64)-(*(struct $8FBSYMBOL**)((uint8*)PROTO$1 + 56ll) != PROC_SUBTYPE$1)) == 0ll ) goto label$54;
	{
		ERRREPORT( 20ll, -1ll, (uint8*)0ull );
	}
	label$54:;
	label$53:;
	if( ((int64)-(*(int64*)((uint8*)PROC$1 + 168ll) != 2ll) & (int64)-(*(int64*)((uint8*)PROTO$1 + 168ll) != *(int64*)((uint8*)PROC$1 + 168ll))) == 0ll ) goto label$56;
	{
		ERRREPORTWARN( 28ll, (uint8*)0ull, 1ll );
	}
	label$56:;
	label$55:;
	if( *(int64*)((uint8*)PROTO$1 + 144ll) == MODE$1 ) goto label$58;
	{
		ERRREPORT( 40ll, -1ll, (uint8*)0ull );
	}
	label$58:;
	label$57:;
	PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 128ll);
	PARAMS$1 = (int64)*(int16*)((uint8*)PROC$1 + 112ll);
	if( (*(int64*)((uint8*)PROC$1 + 8ll) & 2048ll) == 0ll ) goto label$60;
	{
		PARAMS$1 = PARAMS$1 + -1ll;
		PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 296ll);
	}
	label$60:;
	label$59:;
	PROTO_PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PROTO$1 + 128ll);
	PROTO_PARAMS$1 = (int64)*(int16*)((uint8*)PROTO$1 + 112ll);
	if( (*(int64*)((uint8*)PROTO$1 + 8ll) & 2048ll) == 0ll ) goto label$62;
	{
		PROTO_PARAMS$1 = PROTO_PARAMS$1 + -1ll;
		PROTO_PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PROTO_PARAM$1 + 296ll);
	}
	label$62:;
	label$61:;
	if( PROTO_PARAMS$1 == PARAMS$1 ) goto label$64;
	{
		ERRREPORT( 1ll, -1ll, (uint8*)0ull );
	}
	label$64:;
	label$63:;
	I$1 = 1ll;
	label$65:;
	if( ((int64)-(I$1 <= PROTO_PARAMS$1) & (int64)-(I$1 <= PARAMS$1)) == 0ll ) goto label$66;
	{
		int64 TMP$91$2;
		int64 DTYPE$2;
		DTYPE$2 = *(int64*)((uint8*)PROTO_PARAM$1 + 48ll);
		if( (DTYPE$2 & 480ll) == 0ll ) goto label$67;
		TMP$91$2 = 22ll;
		goto label$725;
		label$67:;
		TMP$91$2 = DTYPE$2 & 31ll;
		label$725:;
		if( TMP$91$2 != 0ll ) goto label$69;
		{
			*($11FB_DATATYPE*)((uint8*)PROTO_PARAM$1 + 48ll) = *($11FB_DATATYPE*)((uint8*)PARAM$1 + 48ll);
			*(struct $8FBSYMBOL**)((uint8*)PROTO_PARAM$1 + 56ll) = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll);
		}
		goto label$68;
		label$69:;
		{
			if( *(int64*)((uint8*)PARAM$1 + 48ll) == DTYPE$2 ) goto label$71;
			{
				HPARAMERROR( PROC$1, I$1, 57ll );
			}
			goto label$70;
			label$71:;
			if( *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll) == *(struct $8FBSYMBOL**)((uint8*)PROTO_PARAM$1 + 56ll) ) goto label$72;
			{
				HPARAMERROR( PROC$1, I$1, 57ll );
			}
			label$72:;
			label$70:;
		}
		label$68:;
		if( *(int64*)((uint8*)PARAM$1 + 88ll) == *(int64*)((uint8*)PROTO_PARAM$1 + 88ll) ) goto label$74;
		{
			HPARAMERROR( PROC$1, I$1, 57ll );
		}
		label$74:;
		label$73:;
		if( *(int64*)((uint8*)PARAM$1 + 88ll) != 3ll ) goto label$76;
		{
			if( *(int64*)((uint8*)PARAM$1 + 112ll) == *(int64*)((uint8*)PROTO_PARAM$1 + 112ll) ) goto label$78;
			{
				HPARAMERROR( PROC$1, I$1, 57ll );
			}
			label$78:;
			label$77:;
		}
		label$76:;
		label$75:;
		if( *(int64*)((uint8*)PARAM$1 + 88ll) == 4ll ) goto label$80;
		{
			SYMBSETNAME( PROTO_PARAM$1, *(uint8**)((uint8*)PARAM$1 + 24ll) );
			if( (*(int64*)((uint8*)PARAM$1 + 8ll) & 268435456ll) == 0ll ) goto label$82;
			{
				*($13FB_SYMBATTRIB*)((uint8*)PROTO_PARAM$1 + 8ll) = *(int64*)((uint8*)PROTO_PARAM$1 + 8ll) | 268435456ll;
			}
			goto label$81;
			label$82:;
			{
				*($13FB_SYMBATTRIB*)((uint8*)PROTO_PARAM$1 + 8ll) = *(int64*)((uint8*)PROTO_PARAM$1 + 8ll) & -268435457ll;
			}
			label$81:;
		}
		label$80:;
		label$79:;
		if( ((int64)-((*(int64*)((uint8*)PROTO_PARAM$1 + 8ll) & 2097152ll) != 0ll) & (int64)-((*(int64*)((uint8*)PARAM$1 + 8ll) & 2097152ll) != 0ll)) == 0ll ) goto label$84;
		{
			int64 vr$100 = ASTISEQUALPARAMINIT( *(struct $7ASTNODE**)((uint8*)PROTO_PARAM$1 + 104ll), *(struct $7ASTNODE**)((uint8*)PARAM$1 + 104ll) );
			if( vr$100 != 0ll ) goto label$86;
			{
				ERRREPORTPARAMWARN( PROC$1, I$1, (uint8*)0ull, 36ll );
			}
			label$86:;
			label$85:;
		}
		label$84:;
		label$83:;
		PROTO_PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PROTO_PARAM$1 + 296ll);
		PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 296ll);
		I$1 = I$1 + 1ll;
	}
	goto label$65;
	label$66:;
	label$48:;
}

static void HCHECKATTRIBS( struct $8FBSYMBOL* PROTO$1, $13FB_SYMBATTRIB ATTRIB$1 )
{
	label$87:;
	if( (int64)-((ATTRIB$1 & 33554432ll) != 0ll) == (int64)-((*(int64*)((uint8*)PROTO$1 + 8ll) & 33554432ll) != 0ll) ) goto label$90;
	{
		ERRREPORT( 20ll, -1ll, (uint8*)0ull );
		if( (*(int64*)((uint8*)PROTO$1 + 8ll) & 33554432ll) == 0ll ) goto label$92;
		{
			ATTRIB$1 = ATTRIB$1 | 33554432ll;
		}
		goto label$91;
		label$92:;
		{
			ATTRIB$1 = ATTRIB$1 & -33554433ll;
		}
		label$91:;
	}
	label$90:;
	label$89:;
	if( ((ATTRIB$1 & 2ll) & ~(int64)-((*(int64*)((uint8*)PROTO$1 + 8ll) & 2ll) != 0ll)) == 0ll ) goto label$94;
	{
		ERRREPORT( 216ll, 0ll, (uint8*)0ull );
	}
	label$94:;
	label$93:;
	if( ((ATTRIB$1 & 1048576ll) & ~(int64)-((*(int64*)((uint8*)PROTO$1 + 8ll) & 1048576ll) != 0ll)) == 0ll ) goto label$96;
	{
		ERRREPORT( 217ll, 0ll, (uint8*)0ull );
	}
	label$96:;
	label$95:;
	if( ((ATTRIB$1 & 1073741824ll) & ~(int64)-((*(int64*)((uint8*)PROTO$1 + 8ll) & 1073741824ll) != 0ll)) == 0ll ) goto label$98;
	{
		ERRREPORT( 219ll, 0ll, (uint8*)0ull );
	}
	goto label$97;
	label$98:;
	if( ((ATTRIB$1 & 536870912ll) & ~(int64)-((*(int64*)((uint8*)PROTO$1 + 8ll) & 536870912ll) != 0ll)) == 0ll ) goto label$99;
	{
		ERRREPORT( 218ll, 0ll, (uint8*)0ull );
	}
	label$99:;
	label$97:;
	*($13FB_SYMBATTRIB*)((uint8*)PROTO$1 + 8ll) = *(int64*)((uint8*)PROTO$1 + 8ll) | ATTRIB$1;
	label$88:;
}

static int64 HCHECKIDTOKEN( int64 HAS_PARENT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$100:;
	fb$result$1 = 0ll;
	{
		uint64 TMP$92$2;
		int64 vr$1 = LEXGETCLASS( 0ll );
		TMP$92$2 = (uint64)vr$1;
		goto label$103;
		label$104:;
		{
			if( (*(int64*)((uint8*)&ENV$ + 1152ll) & 524288ll) == 0ll ) goto label$106;
			{
				if( (int64)-(*(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll) == (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll)) != 0ll ) goto label$108;
				{
					if( *(int64*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 4144ll) <= 0ll ) goto label$110;
					{
						ERRREPORT( 89ll, 0ll, (uint8*)0ull );
					}
					label$110:;
					label$109:;
				}
				label$108:;
				label$107:;
			}
			label$106:;
			label$105:;
		}
		goto label$102;
		label$111:;
		{
			if( *(int64*)((uint8*)&ENV$ + 272ll) == 3ll ) goto label$113;
			{
				if( (~HAS_PARENT$1 | (int64)-(*(uint64*)((uint8*)&PARSER$ + 184ll) > 0ull)) == 0ll ) goto label$115;
				{
					ERRREPORT( 4ll, 0ll, (uint8*)0ull );
					goto label$101;
				}
				label$115:;
				label$114:;
			}
			label$113:;
			label$112:;
		}
		goto label$102;
		label$116:;
		{
			if( *(int64*)((uint8*)&ENV$ + 272ll) == 3ll ) goto label$118;
			{
				ERRREPORT( 4ll, 0ll, (uint8*)0ull );
				goto label$101;
			}
			label$118:;
			label$117:;
		}
		goto label$102;
		label$119:;
		{
			ERRREPORT( 14ll, 0ll, (uint8*)0ull );
			goto label$101;
		}
		goto label$102;
		label$103:;
		static const void* tmp$132[6ll] = {
			&&label$104,
			&&label$116,
			&&label$111,
			&&label$119,
			&&label$119,
			&&label$116,
		};
		if( TMP$92$2 > 5ll ) goto label$119;
		goto *tmp$132[TMP$92$2 - 0ll];
		label$102:;
	}
	fb$result$1 = -1ll;
	label$101:;
	return fb$result$1;
}

static struct $8FBSYMBOL* HGETID( struct $8FBSYMBOL* PARENT$1, uint8* ID$1, int64* DTYPE$1, int64 IS_SUB$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$120:;
	struct $10FBSYMCHAIN* CHAIN_$1;
	struct $8FBSYMBOL* SYM$1;
	fb$result$1 = (struct $8FBSYMBOL*)0ull;
	if( PARENT$1 != (struct $8FBSYMBOL*)0ull ) goto label$123;
	{
		CHAIN_$1 = *(struct $10FBSYMCHAIN**)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 4136ll);
	}
	goto label$122;
	label$123:;
	{
		uint8* vr$4 = LEXGETTEXT(  );
		struct $10FBSYMCHAIN* vr$5 = SYMBLOOKUPAT( PARENT$1, vr$4, 0ll, 0ll );
		CHAIN_$1 = vr$5;
	}
	label$122:;
	if( CHAIN_$1 == (struct $10FBSYMCHAIN*)0ull ) goto label$125;
	{
		struct $8FBSYMBOL* vr$7 = SYMBFINDBYCLASS( CHAIN_$1, 3ll );
		SYM$1 = vr$7;
	}
	goto label$124;
	label$125:;
	{
		SYM$1 = (struct $8FBSYMBOL*)0ull;
	}
	label$124:;
	int64 vr$9 = HCHECKIDTOKEN( (int64)-(PARENT$1 != (struct $8FBSYMBOL*)0ull) );
	if( vr$9 != 0ll ) goto label$127;
	{
		uint8* vr$11 = SYMBUNIQUELABEL(  );
		fb_StrAssign( (void*)ID$1, 0ll, (void*)vr$11, 0ll, 0 );
		*DTYPE$1 = 2147483648ll;
		HSKIPUNTIL( 40ll, 0ll, 0ll, 0ll );
		goto label$121;
	}
	label$127:;
	label$126:;
	uint8* vr$13 = LEXGETTEXT(  );
	fb_StrAssign( (void*)ID$1, 0ll, (void*)vr$13, 0ll, 0 );
	*DTYPE$1 = *(int64*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 16ll);
	if( IS_SUB$1 == 0ll ) goto label$129;
	{
		if( *DTYPE$1 == 2147483648ll ) goto label$131;
		{
			ERRREPORT( 25ll, 0ll, (uint8*)0ull );
			*DTYPE$1 = 2147483648ll;
		}
		label$131:;
		label$130:;
	}
	label$129:;
	label$128:;
	if( *DTYPE$1 == 2147483648ll ) goto label$133;
	{
		if( (int64)-((*(int64*)((uint8*)&ENV$ + 1152ll) & 8388608ll) != 0ll) != 0ll ) goto label$135;
		{
			ERRREPORTNOTALLOWED( 8388608ll, 147ll, (uint8*)0ull );
		}
		label$135:;
		label$134:;
	}
	label$133:;
	label$132:;
	LEXSKIPTOKEN( 0ll );
	fb$result$1 = SYM$1;
	label$121:;
	return fb$result$1;
}

static void CNAKEDATTRIBUTE( int64* ATTRIB$1 )
{
	label$188:;
	uint8* vr$0 = LEXGETTEXT(  );
	FBSTRING* vr$1 = fb_StrAllocTempDescZ( vr$0 );
	FBSTRING* vr$2 = fb_StrUcase2( vr$1, 0 );
	int32 vr$3 = fb_StrCompare( (void*)vr$2, -1ll, (void*)"NAKED", 6ll );
	if( (int64)vr$3 != 0ll ) goto label$191;
	{
		LEXSKIPTOKEN( 0ll );
		*ATTRIB$1 = *ATTRIB$1 | 268435456ll;
	}
	label$191:;
	label$190:;
	label$189:;
}

static void COVERRIDEATTRIBUTE( struct $8FBSYMBOL* PROC$1 )
{
	label$192:;
	SYMBPROCCHECKOVERRIDDEN( PROC$1, 0ll );
	int64 vr$0 = LEXGETTOKEN( 0ll );
	if( vr$0 != 257ll ) goto label$195;
	{
		goto label$193;
	}
	label$195:;
	label$194:;
	uint8* vr$2 = LEXGETTEXT(  );
	FBSTRING* vr$3 = fb_StrAllocTempDescZ( vr$2 );
	FBSTRING* vr$4 = fb_StrUcase2( vr$3, 0 );
	int32 vr$5 = fb_StrCompare( (void*)vr$4, -1ll, (void*)"OVERRIDE", 9ll );
	if( (int64)vr$5 != 0ll ) goto label$197;
	{
		struct $8FBSYMBOL* vr$8 = SYMBPROCGETOVERRIDDEN( PROC$1 );
		if( vr$8 != (struct $8FBSYMBOL*)0ull ) goto label$199;
		{
			ERRREPORT( 222ll, 0ll, (uint8*)0ull );
		}
		label$199:;
		label$198:;
		LEXSKIPTOKEN( 0ll );
	}
	label$197:;
	label$196:;
	label$193:;
}

static void HCHECKATTRIB( int64* ATTRIB$1, int64 ATTR$1, int64 ERRMSG$1 )
{
	label$206:;
	if( (*ATTRIB$1 & ATTR$1) == 0ll ) goto label$209;
	{
		ERRREPORT( ERRMSG$1, -1ll, (uint8*)0ull );
		*ATTRIB$1 = *ATTRIB$1 & ~ATTR$1;
	}
	label$209:;
	label$208:;
	label$207:;
}

static int64 HCHECKOPOVLPARAMS( struct $8FBSYMBOL* PARENT$1, int64 OP$1, struct $8FBSYMBOL* PROC$1 )
{
	int64 TMP$107$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$210:;
	int64 FOUND_MISMATCH$1;
	int64 IS_METHOD$1;
	IS_METHOD$1 = (int64)-((*(int64*)((uint8*)PROC$1 + 8ll) & 2048ll) != 0ll);
	fb$result$1 = 0ll;
	int64 MIN_PARAMS$1;
	int64 MAX_PARAMS$1;
	{
		uint64 TMP$104$2;
		TMP$104$2 = *(uint64*)((uint8*)AST_OPTB$ + (OP$1 << 5ll));
		goto label$213;
		label$214:;
		{
			int64 TMP$105$3;
			if( (*(int64*)(((uint8*)AST_OPTB$ + (OP$1 << 5ll)) + 8ll) & 1ll) == 0ll ) goto label$215;
			TMP$105$3 = 0ll;
			goto label$726;
			label$215:;
			TMP$105$3 = 1ll;
			label$726:;
			MIN_PARAMS$1 = TMP$105$3;
			MAX_PARAMS$1 = MIN_PARAMS$1;
		}
		goto label$212;
		label$216:;
		{
			MIN_PARAMS$1 = 0ll;
			MAX_PARAMS$1 = MIN_PARAMS$1;
		}
		goto label$212;
		label$217:;
		{
			MIN_PARAMS$1 = 1ll;
			MAX_PARAMS$1 = MIN_PARAMS$1;
		}
		goto label$212;
		label$218:;
		{
			if( (*(int64*)(((uint8*)AST_OPTB$ + (OP$1 << 5ll)) + 8ll) & 1ll) == 0ll ) goto label$220;
			{
				MIN_PARAMS$1 = 0ll;
				MAX_PARAMS$1 = 1ll;
				if( OP$1 != 26ll ) goto label$222;
				{
					MIN_PARAMS$1 = MIN_PARAMS$1 + 1ll;
					MAX_PARAMS$1 = MAX_PARAMS$1 + 1ll;
				}
				label$222:;
				label$221:;
			}
			goto label$219;
			label$220:;
			{
				MIN_PARAMS$1 = 2ll;
				MAX_PARAMS$1 = MIN_PARAMS$1;
			}
			label$219:;
		}
		goto label$212;
		label$223:;
		{
			int64 TMP$106$3;
			if( (*(int64*)(((uint8*)AST_OPTB$ + (OP$1 << 5ll)) + 8ll) & 1ll) == 0ll ) goto label$224;
			TMP$106$3 = 1ll;
			goto label$727;
			label$224:;
			TMP$106$3 = 2ll;
			label$727:;
			MIN_PARAMS$1 = TMP$106$3;
			MAX_PARAMS$1 = MIN_PARAMS$1;
		}
		goto label$212;
		label$213:;
		static const void* tmp$133[13ll] = {
			&&label$217,
			&&label$223,
			&&label$214,
			&&label$216,
			&&label$214,
			&&label$223,
			&&label$223,
			&&label$223,
			&&label$223,
			&&label$223,
			&&label$217,
			&&label$223,
			&&label$218,
		};
		if( TMP$104$2 < 2ll ) goto label$223;
		if( TMP$104$2 > 14ll ) goto label$223;
		goto *tmp$133[TMP$104$2 - 2ll];
		label$212:;
	}
	int64 PARAMS$1;
	PARAMS$1 = (int64)*(int16*)((uint8*)PROC$1 + 112ll);
	int64 REAL_PARAMS$1;
	if( IS_METHOD$1 == 0ll ) goto label$225;
	TMP$107$1 = 1ll;
	goto label$728;
	label$225:;
	TMP$107$1 = 0ll;
	label$728:;
	REAL_PARAMS$1 = PARAMS$1 - TMP$107$1;
	if( ((int64)-(REAL_PARAMS$1 < MIN_PARAMS$1) | (int64)-(REAL_PARAMS$1 > MAX_PARAMS$1)) == 0ll ) goto label$227;
	{
		ERRREPORT( 1ll, -1ll, (uint8*)0ull );
		goto label$211;
	}
	label$227:;
	label$226:;
	if( PARAMS$1 <= 0ll ) goto label$229;
	{
		struct $8FBSYMBOL* PARAM$2;
		PARAM$2 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 128ll);
		if( *(int64*)((uint8*)PARAM$2 + 88ll) != 4ll ) goto label$231;
		{
			HPARAMERROR( PROC$1, 1ll, 142ll );
			goto label$211;
		}
		label$231:;
		label$230:;
		if( (*(int64*)((uint8*)PARAM$2 + 8ll) & 2097152ll) == 0ll ) goto label$233;
		{
			HPARAMERROR( PROC$1, 1ll, 144ll );
			goto label$211;
		}
		label$233:;
		label$232:;
		{
			uint64 TMP$108$3;
			TMP$108$3 = *(uint64*)((uint8*)AST_OPTB$ + (OP$1 << 5ll));
			goto label$235;
			label$236:;
			{
				{
					int64 TMP$109$5;
					TMP$109$5 = *(int64*)((uint8*)PARAM$2 + 48ll) & 511ll;
					if( TMP$109$5 == 18ll ) goto label$239;
					label$240:;
					if( TMP$109$5 != 9ll ) goto label$238;
					label$239:;
					{
					}
					goto label$237;
					label$238:;
					{
						HPARAMERROR( PROC$1, 1ll, 136ll );
						goto label$211;
					}
					label$241:;
					label$237:;
				}
			}
			goto label$234;
			label$242:;
			{
				if( PARAMS$1 <= 1ll ) goto label$244;
				{
					struct $8FBSYMBOL* NXTPARAM$5;
					NXTPARAM$5 = *(struct $8FBSYMBOL**)((uint8*)PARAM$2 + 296ll);
					if( *(int64*)((uint8*)NXTPARAM$5 + 88ll) != 4ll ) goto label$246;
					{
						HPARAMERROR( PROC$1, 2ll, 142ll );
						goto label$211;
					}
					label$246:;
					label$245:;
					if( (*(int64*)((uint8*)NXTPARAM$5 + 8ll) & 2097152ll) == 0ll ) goto label$248;
					{
						HPARAMERROR( PROC$1, 2ll, 144ll );
						goto label$211;
					}
					label$248:;
					label$247:;
					{
						int64 TMP$110$6;
						TMP$110$6 = *(int64*)((uint8*)PARAM$2 + 48ll) & 511ll;
						if( TMP$110$6 == 18ll ) goto label$251;
						label$252:;
						if( TMP$110$6 != 9ll ) goto label$250;
						label$251:;
						{
						}
						goto label$249;
						label$250:;
						{
							{
								int64 TMP$111$8;
								TMP$111$8 = *(int64*)((uint8*)NXTPARAM$5 + 48ll) & 511ll;
								if( TMP$111$8 == 18ll ) goto label$256;
								label$257:;
								if( TMP$111$8 != 9ll ) goto label$255;
								label$256:;
								{
								}
								goto label$254;
								label$255:;
								{
									HPARAMERROR( PROC$1, 2ll, 136ll );
									goto label$211;
								}
								label$258:;
								label$254:;
							}
						}
						label$253:;
						label$249:;
					}
				}
				label$244:;
				label$243:;
			}
			goto label$234;
			label$259:;
			{
				{
					if( OP$1 == 18ll ) goto label$262;
					label$263:;
					if( OP$1 != 19ll ) goto label$261;
					label$262:;
					{
						int64 TMP$112$6;
						if( ((*(int64*)((uint8*)PARAM$2 + 48ll) & 511ll) & 480ll) == 0ll ) goto label$264;
						TMP$112$6 = 22ll;
						goto label$729;
						label$264:;
						TMP$112$6 = (*(int64*)((uint8*)PARAM$2 + 48ll) & 511ll) & 31ll;
						label$729:;
						if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$112$6 * 56ll)) != 0ll ) goto label$266;
						{
							int64 IS_INTEGER$7;
							IS_INTEGER$7 = -1ll;
							if( ((*(int64*)((uint8*)PARAM$2 + 48ll) & 511ll) & 480ll) == 0ll ) goto label$268;
							{
								IS_INTEGER$7 = 0ll;
							}
							label$268:;
							label$267:;
							{
								int64 TMP$113$8;
								TMP$113$8 = *(int64*)((uint8*)PARAM$2 + 48ll) & 511ll;
								if( TMP$113$8 == 3ll ) goto label$271;
								label$272:;
								if( TMP$113$8 != 6ll ) goto label$270;
								label$271:;
								{
									IS_INTEGER$7 = 0ll;
								}
								label$270:;
								label$269:;
							}
							if( IS_INTEGER$7 != 0ll ) goto label$274;
							{
								HPARAMERROR( PROC$1, 1ll, 234ll );
								goto label$211;
							}
							label$274:;
							label$273:;
						}
						goto label$265;
						label$266:;
						{
							HPARAMERROR( PROC$1, 1ll, 234ll );
							goto label$211;
						}
						label$265:;
					}
					goto label$260;
					label$261:;
					{
						int64 TMP$114$6;
						if( ((*(int64*)((uint8*)PARAM$2 + 48ll) & 511ll) & 480ll) == 0ll ) goto label$276;
						TMP$114$6 = 22ll;
						goto label$730;
						label$276:;
						TMP$114$6 = (*(int64*)((uint8*)PARAM$2 + 48ll) & 511ll) & 31ll;
						label$730:;
						if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$114$6 * 56ll)) != 0ll ) goto label$278;
						{
							if( (int64)-(((*(int64*)((uint8*)PARAM$2 + 48ll) & 511ll) & 480ll) != 0ll) != 0ll ) goto label$280;
							{
								HPARAMERROR( PROC$1, 1ll, 235ll );
								goto label$211;
							}
							label$280:;
							label$279:;
						}
						goto label$277;
						label$278:;
						{
							HPARAMERROR( PROC$1, 1ll, 235ll );
							goto label$211;
						}
						label$277:;
					}
					label$275:;
					label$260:;
				}
			}
			goto label$234;
			label$281:;
			{
				{
					uint64 TMP$115$5;
					TMP$115$5 = (uint64)OP$1;
					goto label$283;
					label$284:;
					{
						if( PARAMS$1 <= 1ll ) goto label$286;
						{
							struct $8FBSYMBOL* NXTPARAM$7;
							NXTPARAM$7 = *(struct $8FBSYMBOL**)((uint8*)PARAM$2 + 296ll);
							if( *(int64*)((uint8*)NXTPARAM$7 + 88ll) != 4ll ) goto label$288;
							{
								HPARAMERROR( PROC$1, 2ll, 142ll );
								goto label$211;
							}
							label$288:;
							label$287:;
							if( (*(int64*)((uint8*)NXTPARAM$7 + 8ll) & 2097152ll) == 0ll ) goto label$290;
							{
								HPARAMERROR( PROC$1, 2ll, 144ll );
								goto label$211;
							}
							label$290:;
							label$289:;
							{
								int64 TMP$116$8;
								TMP$116$8 = *(int64*)((uint8*)PARAM$2 + 48ll) & 511ll;
								if( TMP$116$8 == 18ll ) goto label$293;
								label$294:;
								if( TMP$116$8 != 9ll ) goto label$292;
								label$293:;
								{
								}
								goto label$291;
								label$292:;
								{
									{
										int64 TMP$117$10;
										TMP$117$10 = *(int64*)((uint8*)NXTPARAM$7 + 48ll) & 511ll;
										if( TMP$117$10 == 18ll ) goto label$298;
										label$299:;
										if( TMP$117$10 != 9ll ) goto label$297;
										label$298:;
										{
										}
										goto label$296;
										label$297:;
										{
											HPARAMERROR( PROC$1, 2ll, 136ll );
											goto label$211;
										}
										label$300:;
										label$296:;
									}
								}
								label$295:;
								label$291:;
							}
						}
						label$286:;
						label$285:;
					}
					goto label$282;
					label$301:;
					{
						if( (*(int64*)(((uint8*)AST_OPTB$ + (OP$1 << 5ll)) + 8ll) & 1ll) == 0ll ) goto label$303;
						{
							if( PARAMS$1 <= 1ll ) goto label$305;
							{
								if( IS_METHOD$1 == 0ll ) goto label$307;
								{
									PARAM$2 = *(struct $8FBSYMBOL**)((uint8*)PARAM$2 + 296ll);
								}
								label$307:;
								label$306:;
								if( ((int64)-(PARAM$2 == (struct $8FBSYMBOL*)0ull) | (int64)-(PARENT$1 == (struct $8FBSYMBOL*)0ull)) == 0ll ) goto label$309;
								{
									HPARAMERROR( PROC$1, 1ll, 141ll );
									goto label$211;
								}
								label$309:;
								label$308:;
								if( *(int64*)((uint8*)PARAM$2 + 88ll) != 4ll ) goto label$311;
								{
									HPARAMERROR( PROC$1, 1ll, 142ll );
									goto label$211;
								}
								label$311:;
								label$310:;
								if( (*(int64*)((uint8*)PARAM$2 + 8ll) & 2097152ll) == 0ll ) goto label$313;
								{
									HPARAMERROR( PROC$1, 1ll, 144ll );
									goto label$211;
								}
								label$313:;
								label$312:;
								if( ((int64)-((*(int64*)((uint8*)PARAM$2 + 48ll) & 511ll) != (*(int64*)((uint8*)PARENT$1 + 48ll) & 511ll)) | (int64)-(*(struct $8FBSYMBOL**)((uint8*)PARAM$2 + 56ll) != PARENT$1)) == 0ll ) goto label$315;
								{
									HPARAMERROR( PROC$1, 1ll, 141ll );
									goto label$211;
								}
								label$315:;
								label$314:;
							}
							label$305:;
							label$304:;
						}
						label$303:;
						label$302:;
					}
					goto label$282;
					label$316:;
					{
					}
					goto label$282;
					label$283:;
					static const void* tmp$134[27ll] = {
						&&label$301,
						&&label$301,
						&&label$301,
						&&label$316,
						&&label$316,
						&&label$316,
						&&label$316,
						&&label$316,
						&&label$316,
						&&label$316,
						&&label$316,
						&&label$316,
						&&label$316,
						&&label$316,
						&&label$316,
						&&label$316,
						&&label$316,
						&&label$316,
						&&label$316,
						&&label$316,
						&&label$316,
						&&label$284,
						&&label$284,
						&&label$284,
						&&label$284,
						&&label$284,
						&&label$284,
					};
					if( TMP$115$5 < 24ll ) goto label$316;
					if( TMP$115$5 > 50ll ) goto label$316;
					goto *tmp$134[TMP$115$5 - 24ll];
					label$282:;
				}
			}
			goto label$234;
			label$235:;
			static const void* tmp$135[12ll] = {
				&&label$242,
				&&label$236,
				&&label$236,
				&&label$236,
				&&label$234,
				&&label$234,
				&&label$234,
				&&label$234,
				&&label$234,
				&&label$259,
				&&label$234,
				&&label$281,
			};
			if( TMP$108$3 < 3ll ) goto label$234;
			if( TMP$108$3 > 14ll ) goto label$234;
			goto *tmp$135[TMP$108$3 - 3ll];
			label$234:;
		}
	}
	label$229:;
	label$228:;
	FOUND_MISMATCH$1 = 0ll;
	{
		$13AST_NODECLASS TMP$118$2;
		TMP$118$2 = *($13AST_NODECLASS*)((uint8*)AST_OPTB$ + (OP$1 << 5ll));
		if( TMP$118$2 != 5ll ) goto label$318;
		label$319:;
		{
			if( *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 56ll) != PARENT$1 ) goto label$321;
			{
				ERRREPORT( 139ll, -1ll, (uint8*)0ull );
				goto label$211;
			}
			label$321:;
			label$320:;
			FOUND_MISMATCH$1 = (int64)-((*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) == 0ll);
		}
		goto label$317;
		label$318:;
		if( TMP$118$2 != 4ll ) goto label$322;
		label$323:;
		{
			FOUND_MISMATCH$1 = (int64)-((*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) == 0ll);
		}
		goto label$317;
		label$322:;
		if( TMP$118$2 != 2ll ) goto label$324;
		label$325:;
		{
			FOUND_MISMATCH$1 = (int64)-((*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) != 0ll);
		}
		goto label$317;
		label$324:;
		if( TMP$118$2 != 6ll ) goto label$326;
		label$327:;
		{
			{
				if( OP$1 != 22ll ) goto label$329;
				label$330:;
				{
					FOUND_MISMATCH$1 = ~(int64)-(((*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) & 480ll) != 0ll);
				}
				goto label$328;
				label$329:;
				if( OP$1 != 77ll ) goto label$331;
				label$332:;
				{
					FOUND_MISMATCH$1 = (int64)-((*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) != 18ll);
				}
				goto label$328;
				label$331:;
				{
					FOUND_MISMATCH$1 = (int64)-((*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) == 0ll);
				}
				label$333:;
				label$328:;
			}
		}
		goto label$317;
		label$326:;
		if( TMP$118$2 != 12ll ) goto label$334;
		label$335:;
		{
			{
				if( OP$1 == 18ll ) goto label$338;
				label$339:;
				if( OP$1 != 19ll ) goto label$337;
				label$338:;
				{
					FOUND_MISMATCH$1 = ~(int64)-(((*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) & 480ll) != 0ll);
				}
				goto label$336;
				label$337:;
				{
					FOUND_MISMATCH$1 = (int64)-((*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) != 0ll);
				}
				label$340:;
				label$336:;
			}
		}
		goto label$317;
		label$334:;
		if( TMP$118$2 != 3ll ) goto label$341;
		label$342:;
		{
			{
				uint64 TMP$119$4;
				TMP$119$4 = (uint64)OP$1;
				goto label$344;
				label$345:;
				{
					FOUND_MISMATCH$1 = (int64)-((*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) != 7ll);
				}
				goto label$343;
				label$346:;
				{
					FOUND_MISMATCH$1 = (int64)-((*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) == 0ll);
				}
				goto label$343;
				label$347:;
				{
					if( (*(int64*)(((uint8*)AST_OPTB$ + (OP$1 << 5ll)) + 8ll) & 1ll) == 0ll ) goto label$349;
					{
						FOUND_MISMATCH$1 = (int64)-((*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) != 0ll);
					}
					goto label$348;
					label$349:;
					{
						FOUND_MISMATCH$1 = (int64)-((*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) == 0ll);
					}
					label$348:;
				}
				goto label$343;
				label$344:;
				static const void* tmp$136[28ll] = {
					&&label$346,
					&&label$347,
					&&label$347,
					&&label$347,
					&&label$347,
					&&label$347,
					&&label$347,
					&&label$347,
					&&label$347,
					&&label$347,
					&&label$347,
					&&label$347,
					&&label$347,
					&&label$347,
					&&label$347,
					&&label$347,
					&&label$347,
					&&label$347,
					&&label$347,
					&&label$347,
					&&label$347,
					&&label$347,
					&&label$345,
					&&label$345,
					&&label$345,
					&&label$345,
					&&label$345,
					&&label$345,
				};
				if( TMP$119$4 < 23ll ) goto label$347;
				if( TMP$119$4 > 50ll ) goto label$347;
				goto *tmp$136[TMP$119$4 - 23ll];
				label$343:;
			}
		}
		goto label$317;
		label$341:;
		if( TMP$118$2 != 14ll ) goto label$350;
		label$351:;
		{
			if( (*(int64*)(((uint8*)AST_OPTB$ + (OP$1 << 5ll)) + 8ll) & 1ll) == 0ll ) goto label$353;
			{
				if( OP$1 != 26ll ) goto label$355;
				{
					FOUND_MISMATCH$1 = (int64)-((*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) != 7ll);
				}
				goto label$354;
				label$355:;
				{
					FOUND_MISMATCH$1 = (int64)-((*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) != 0ll);
				}
				label$354:;
			}
			goto label$352;
			label$353:;
			{
				FOUND_MISMATCH$1 = (int64)-((*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) == 0ll);
			}
			label$352:;
		}
		label$350:;
		label$317:;
	}
	if( FOUND_MISMATCH$1 == 0ll ) goto label$357;
	{
		ERRREPORT( 140ll, -1ll, (uint8*)0ull );
		goto label$211;
	}
	label$357:;
	label$356:;
	fb$result$1 = -1ll;
	label$211:;
	return fb$result$1;
}

static int64 HCHECKISSELFCLONEBYVAL( struct $8FBSYMBOL* PARENT$1, struct $8FBSYMBOL* PROC$1, int64 OPTIONS$1 )
{
	int64 TMP$120$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$358:;
	fb$result$1 = 0ll;
	struct $8FBSYMBOL* PARAM$1;
	PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 128ll);
	if( (OPTIONS$1 & 1ll) == 0ll ) goto label$361;
	{
		PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 296ll);
	}
	label$361:;
	label$360:;
	if( PARAM$1 != (struct $8FBSYMBOL*)0ull ) goto label$363;
	{
		goto label$359;
	}
	label$363:;
	label$362:;
	if( (*(int64*)((uint8*)PARAM$1 + 48ll) & 511ll) == 18ll ) goto label$365;
	{
		goto label$359;
	}
	label$365:;
	label$364:;
	if( *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll) == PARENT$1 ) goto label$367;
	{
		goto label$359;
	}
	label$367:;
	label$366:;
	if( *(int64*)((uint8*)PARAM$1 + 88ll) == 1ll ) goto label$369;
	{
		goto label$359;
	}
	label$369:;
	label$368:;
	if( ((*(int64*)((uint8*)PARAM$1 + 48ll) & 511ll) & 480ll) == 0ll ) goto label$370;
	TMP$120$1 = 22ll;
	goto label$731;
	label$370:;
	TMP$120$1 = (*(int64*)((uint8*)PARAM$1 + 48ll) & 511ll) & 31ll;
	label$731:;
	if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$120$1 * 56ll)) != 0ll ) goto label$372;
	{
		if( ((*(int64*)((uint8*)PARAM$1 + 48ll) & 511ll) & 480ll) == 0ll ) goto label$374;
		{
			goto label$359;
		}
		label$374:;
		label$373:;
	}
	label$372:;
	label$371:;
	PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 296ll);
	label$375:;
	if( PARAM$1 == (struct $8FBSYMBOL*)0ull ) goto label$376;
	{
		if( (int64)-((*(int64*)((uint8*)PARAM$1 + 8ll) & 2097152ll) != 0ll) != 0ll ) goto label$378;
		{
			goto label$359;
		}
		label$378:;
		label$377:;
		PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 296ll);
	}
	goto label$375;
	label$376:;
	fb$result$1 = -1ll;
	label$359:;
	return fb$result$1;
}

static void HCHECKPROPPARAMS( struct $8FBSYMBOL* PROC$1, int64 IS_GET$1 )
{
	label$379:;
	int64 MIN_PARAMS$1;
	int64 MAX_PARAMS$1;
	int64 I$1;
	struct $8FBSYMBOL* PARAM$1;
	if( IS_GET$1 == 0ll ) goto label$382;
	{
		MIN_PARAMS$1 = 0ll;
		MAX_PARAMS$1 = 1ll;
	}
	goto label$381;
	label$382:;
	{
		MIN_PARAMS$1 = 1ll;
		MAX_PARAMS$1 = 2ll;
	}
	label$381:;
	if( ((int64)-((int64)*(int16*)((uint8*)PROC$1 + 112ll) < (MIN_PARAMS$1 + 1ll)) | (int64)-((int64)*(int16*)((uint8*)PROC$1 + 112ll) > (MAX_PARAMS$1 + 1ll))) == 0ll ) goto label$384;
	{
		$9FB_ERRMSG TMP$121$2;
		if( IS_GET$1 == 0ll ) goto label$385;
		TMP$121$2 = 189ll;
		goto label$732;
		label$385:;
		TMP$121$2 = 190ll;
		label$732:;
		ERRREPORT( TMP$121$2, -1ll, (uint8*)0ull );
	}
	label$384:;
	label$383:;
	PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 128ll);
	I$1 = 0ll;
	label$386:;
	if( PARAM$1 == (struct $8FBSYMBOL*)0ull ) goto label$387;
	{
		if( (*(int64*)((uint8*)PARAM$1 + 8ll) & 2097152ll) == 0ll ) goto label$389;
		{
			HPARAMERROR( PROC$1, I$1 + 1ll, 144ll );
		}
		label$389:;
		label$388:;
		I$1 = I$1 + 1ll;
		PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 296ll);
	}
	goto label$386;
	label$387:;
	label$380:;
}

static void HSETUDTPROPERTYFLAGS( struct $8FBSYMBOL* PARENT$1, int64 IS_INDEXED$1, int64 IS_GET$1 )
{
	label$390:;
	if( IS_INDEXED$1 == 0ll ) goto label$393;
	{
		if( IS_GET$1 != 0ll ) goto label$395;
		{
			*(int16*)((uint8*)PARENT$1 + 200ll) = (int16)((int64)*(int16*)((uint8*)PARENT$1 + 200ll) | 1024ll);
		}
		goto label$394;
		label$395:;
		{
			*(int16*)((uint8*)PARENT$1 + 200ll) = (int16)((int64)*(int16*)((uint8*)PARENT$1 + 200ll) | 512ll);
		}
		label$394:;
	}
	goto label$392;
	label$393:;
	{
		if( IS_GET$1 != 0ll ) goto label$397;
		{
			*(int16*)((uint8*)PARENT$1 + 200ll) = (int16)((int64)*(int16*)((uint8*)PARENT$1 + 200ll) | 256ll);
		}
		goto label$396;
		label$397:;
		{
			*(int16*)((uint8*)PARENT$1 + 200ll) = (int16)((int64)*(int16*)((uint8*)PARENT$1 + 200ll) | 128ll);
		}
		label$396:;
	}
	label$392:;
	label$391:;
}

// Total compilation time: 0.05223195895086974 seconds.
