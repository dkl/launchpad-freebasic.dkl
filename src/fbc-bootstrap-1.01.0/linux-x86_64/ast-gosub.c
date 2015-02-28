// Compilation of FreeBASIC-1.01.0-source/src/compiler/ast-gosub.bas started at 16:30:08 on 02-28-2015

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
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__astzgosub( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
struct $7ASTNODE* ASTADD( struct $7ASTNODE* );
void ASTADDUNSCOPED( struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDBRANCH( struct $7ASTNODE*, struct $8FBSYMBOL*, int64, int64 );
struct $7ASTNODE* ASTNEWBOP( int64, struct $7ASTNODE*, struct $7ASTNODE*, struct $8FBSYMBOL*, $9AST_OPOPT );
struct $7ASTNODE* ASTNEWCONSTI( int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWVAR( struct $8FBSYMBOL*, int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWADDROF( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWBRANCH( int64, struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWSTACK( int64, struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWLABEL( struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* ASTNEWDECL( struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* ASTBUILDVARINC( struct $8FBSYMBOL*, int64 );
void ASTGOSUBADDINIT( struct $8FBSYMBOL* );
typedef int64 $10FB_SYMBOPT;
struct $8FBSYMBOL* SYMBADDLABEL( uint8*, $10FB_SYMBOPT );
struct $8FBSYMBOL* SYMBADDIMPLICITVAR( int64, struct $8FBSYMBOL*, int64 );
void SYMBPROCALLOCEXT( struct $8FBSYMBOL* );
void RTLERRORTHROW( struct $7ASTNODE*, int64, uint8* );
void RTLERRORSETNUM( struct $7ASTNODE* );
struct $7ASTNODE* RTLGOSUBPUSH( struct $7ASTNODE* );
struct $7ASTNODE* RTLGOSUBPOP( struct $7ASTNODE* );
int64 RTLGOSUBRETURN( struct $7ASTNODE* );
struct $7ASTNODE* RTLGOSUBEXIT( struct $7ASTNODE* );
struct $7ASTNODE* RTLSETJMP( struct $7ASTNODE* );
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
struct $5FBENV ENV$ __attribute__((common));

void ASTGOSUBADDINIT( struct $8FBSYMBOL* PROC$1 )
{
	label$10:;
	struct $10FBARRAYDIM DTB$1[1];
	struct $8FBARRAY1I10FBARRAYDIME {
		struct $10FBARRAYDIM* DATA;
		struct $10FBARRAYDIM* PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I10FBARRAYDIME ) == 64 );
	struct $8FBARRAY1I10FBARRAYDIME tmp$85$1;
	*(struct $10FBARRAYDIM**)&tmp$85$1 = (struct $10FBARRAYDIM*)DTB$1;
	*(struct $10FBARRAYDIM**)((uint8*)&tmp$85$1 + 8ll) = (struct $10FBARRAYDIM*)DTB$1;
	*(int64*)((uint8*)&tmp$85$1 + 16ll) = 16ll;
	*(int64*)((uint8*)&tmp$85$1 + 24ll) = 16ll;
	*(int64*)((uint8*)&tmp$85$1 + 32ll) = 1ll;
	*(int64*)((uint8*)&tmp$85$1 + 40ll) = 1ll;
	*(int64*)((uint8*)&tmp$85$1 + 48ll) = 0ll;
	*(int64*)((uint8*)&tmp$85$1 + 56ll) = 0ll;
	struct $8FBSYMBOL* SYM$1;
	struct $7ASTNODE* VAR_DECL$1;
	int64 DTYPE$1;
	SYMBPROCALLOCEXT( PROC$1 );
	if( (*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 96ll) & 4ll) == 0ll ) goto label$13;
	{
		goto label$11;
	}
	label$13:;
	label$12:;
	if( ((int64)-(*(int64*)((uint8*)&ENV$ + 208ll) == 0ll) & (int64)-(*(int64*)((uint8*)&ENV$ + 360ll) == 0ll)) == 0ll ) goto label$15;
	{
		DTYPE$1 = 7ll;
	}
	goto label$14;
	label$15:;
	{
		DTYPE$1 = 32ll;
	}
	label$14:;
	struct $8FBSYMBOL* vr$24 = SYMBADDIMPLICITVAR( DTYPE$1, (struct $8FBSYMBOL*)0ull, 2ll );
	SYM$1 = vr$24;
	struct $7ASTNODE* vr$25 = ASTNEWDECL( SYM$1, -1ll );
	VAR_DECL$1 = vr$25;
	*($12FB_SYMBSTATS*)((uint8*)SYM$1 + 16ll) = *(int64*)((uint8*)SYM$1 + 16ll) | 8ll;
	ASTADDUNSCOPED( VAR_DECL$1 );
	*(struct $8FBSYMBOL**)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 120ll) = SYM$1;
	*($12FB_PROCSTATS*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 96ll) = *(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 96ll) | 4ll;
	label$11:;
}

void ASTGOSUBADDJMP( struct $8FBSYMBOL* PROC$1, struct $8FBSYMBOL* L$1 )
{
	label$16:;
	struct $8FBSYMBOL* LABEL$1;
	ASTGOSUBADDINIT( PROC$1 );
	if( ((int64)-(*(int64*)((uint8*)&ENV$ + 208ll) == 0ll) & (int64)-(*(int64*)((uint8*)&ENV$ + 360ll) == 0ll)) == 0ll ) goto label$19;
	{
		struct $7ASTNODE* vr$6 = ASTBUILDVARINC( *(struct $8FBSYMBOL**)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 120ll), 1ll );
		ASTADD( vr$6 );
		struct $7ASTNODE* vr$7 = ASTNEWBRANCH( 98ll, L$1, (struct $7ASTNODE*)0ull );
		ASTADD( vr$7 );
	}
	goto label$18;
	label$19:;
	{
		struct $8FBSYMBOL* vr$8 = SYMBADDLABEL( (uint8*)0ull, 4ll );
		LABEL$1 = vr$8;
		struct $7ASTNODE* vr$9 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$12 = ASTNEWVAR( *(struct $8FBSYMBOL**)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 120ll), 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$13 = ASTNEWADDROF( vr$12 );
		struct $7ASTNODE* vr$14 = RTLGOSUBPUSH( vr$13 );
		struct $7ASTNODE* vr$15 = RTLSETJMP( vr$14 );
		struct $7ASTNODE* vr$16 = ASTNEWBOP( 45ll, vr$15, vr$9, (struct $8FBSYMBOL*)0ull, 1ll );
		struct $7ASTNODE* vr$17 = ASTBUILDBRANCH( vr$16, LABEL$1, 0ll, 0ll );
		ASTADD( vr$17 );
		struct $7ASTNODE* vr$18 = ASTNEWBRANCH( 97ll, L$1, (struct $7ASTNODE*)0ull );
		ASTADD( vr$18 );
		struct $7ASTNODE* vr$19 = ASTNEWLABEL( LABEL$1, -1ll );
		ASTADD( vr$19 );
	}
	label$18:;
	label$17:;
}

void ASTGOSUBADDJUMPPTR( struct $8FBSYMBOL* PROC$1, struct $7ASTNODE* JUMPTB$1, struct $8FBSYMBOL* EXITLABEL$1 )
{
	label$20:;
	struct $8FBSYMBOL* LABEL$1;
	ASTGOSUBADDINIT( PROC$1 );
	if( ((int64)-(*(int64*)((uint8*)&ENV$ + 208ll) == 0ll) & (int64)-(*(int64*)((uint8*)&ENV$ + 360ll) == 0ll)) == 0ll ) goto label$23;
	{
		struct $7ASTNODE* vr$6 = ASTBUILDVARINC( *(struct $8FBSYMBOL**)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 120ll), 1ll );
		ASTADD( vr$6 );
		struct $7ASTNODE* vr$7 = ASTNEWVAR( EXITLABEL$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$8 = ASTNEWADDROF( vr$7 );
		struct $7ASTNODE* vr$9 = ASTNEWSTACK( 87ll, vr$8 );
		ASTADD( vr$9 );
		ASTADD( JUMPTB$1 );
	}
	goto label$22;
	label$23:;
	{
		ASTGOSUBADDINIT( PROC$1 );
		struct $8FBSYMBOL* vr$10 = SYMBADDLABEL( (uint8*)0ull, 4ll );
		LABEL$1 = vr$10;
		struct $7ASTNODE* vr$11 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$14 = ASTNEWVAR( *(struct $8FBSYMBOL**)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 120ll), 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$15 = ASTNEWADDROF( vr$14 );
		struct $7ASTNODE* vr$16 = RTLGOSUBPUSH( vr$15 );
		struct $7ASTNODE* vr$17 = RTLSETJMP( vr$16 );
		struct $7ASTNODE* vr$18 = ASTNEWBOP( 45ll, vr$17, vr$11, (struct $8FBSYMBOL*)0ull, 1ll );
		struct $7ASTNODE* vr$19 = ASTBUILDBRANCH( vr$18, LABEL$1, 0ll, 0ll );
		ASTADD( vr$19 );
		ASTADD( JUMPTB$1 );
		struct $7ASTNODE* vr$20 = ASTNEWLABEL( LABEL$1, -1ll );
		ASTADD( vr$20 );
		struct $7ASTNODE* vr$21 = ASTNEWBRANCH( 97ll, EXITLABEL$1, (struct $7ASTNODE*)0ull );
		ASTADD( vr$21 );
	}
	label$22:;
	label$21:;
}

int64 ASTGOSUBADDRETURN( struct $8FBSYMBOL* PROC$1, struct $8FBSYMBOL* L$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$24:;
	struct $8FBSYMBOL* LABEL$1;
	ASTGOSUBADDINIT( PROC$1 );
	if( ((int64)-(*(int64*)((uint8*)&ENV$ + 208ll) == 0ll) & (int64)-(*(int64*)((uint8*)&ENV$ + 360ll) == 0ll)) == 0ll ) goto label$27;
	{
		struct $8FBSYMBOL* vr$5 = SYMBADDLABEL( (uint8*)0ull, 4ll );
		LABEL$1 = vr$5;
		struct $7ASTNODE* vr$6 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$9 = ASTNEWVAR( *(struct $8FBSYMBOL**)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 120ll), 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$10 = ASTNEWBOP( 48ll, vr$9, vr$6, (struct $8FBSYMBOL*)0ull, 1ll );
		struct $7ASTNODE* vr$11 = ASTBUILDBRANCH( vr$10, LABEL$1, 0ll, 0ll );
		ASTADD( vr$11 );
		struct $7ASTNODE* vr$14 = ASTBUILDVARINC( *(struct $8FBSYMBOL**)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 120ll), -1ll );
		ASTADD( vr$14 );
		if( L$1 != (struct $8FBSYMBOL*)0ull ) goto label$29;
		{
			struct $7ASTNODE* vr$16 = ASTNEWBRANCH( 100ll, (struct $8FBSYMBOL*)0ull, (struct $7ASTNODE*)0ull );
			ASTADD( vr$16 );
		}
		goto label$28;
		label$29:;
		{
			struct $7ASTNODE* vr$17 = ASTNEWCONSTI( *(int64*)((uint8*)&ENV$ + 472ll), 7ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$18 = ASTNEWSTACK( 88ll, vr$17 );
			ASTADD( vr$18 );
			struct $7ASTNODE* vr$19 = ASTNEWBRANCH( 97ll, L$1, (struct $7ASTNODE*)0ull );
			ASTADD( vr$19 );
		}
		label$28:;
		struct $7ASTNODE* vr$20 = ASTNEWLABEL( LABEL$1, -1ll );
		ASTADD( vr$20 );
		struct $7ASTNODE* vr$21 = ASTNEWCONSTI( 16ll, 7ll, (struct $8FBSYMBOL*)0ull );
		RTLERRORSETNUM( vr$21 );
		if( *(int64*)((uint8*)&ENV$ + 296ll) == 0ll ) goto label$31;
		{
			struct $7ASTNODE* vr$25 = ASTNEWCONSTI( 16ll, 7ll, (struct $8FBSYMBOL*)0ull );
			RTLERRORTHROW( vr$25, *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16712ll), (uint8*)((uint8*)&ENV$ + 488ll) );
		}
		label$31:;
		label$30:;
		fb$result$1 = -1ll;
	}
	goto label$26;
	label$27:;
	{
		if( L$1 != (struct $8FBSYMBOL*)0ull ) goto label$33;
		{
			struct $7ASTNODE* vr$29 = ASTNEWVAR( *(struct $8FBSYMBOL**)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 120ll), 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$30 = ASTNEWADDROF( vr$29 );
			int64 vr$31 = RTLGOSUBRETURN( vr$30 );
			fb$result$1 = vr$31;
		}
		goto label$32;
		label$33:;
		{
			struct $8FBSYMBOL* vr$32 = SYMBADDLABEL( (uint8*)0ull, 4ll );
			LABEL$1 = vr$32;
			struct $7ASTNODE* vr$33 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$36 = ASTNEWVAR( *(struct $8FBSYMBOL**)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 120ll), 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$37 = ASTNEWADDROF( vr$36 );
			struct $7ASTNODE* vr$38 = RTLGOSUBPOP( vr$37 );
			struct $7ASTNODE* vr$39 = ASTNEWBOP( 45ll, vr$38, vr$33, (struct $8FBSYMBOL*)0ull, 1ll );
			struct $7ASTNODE* vr$40 = ASTBUILDBRANCH( vr$39, LABEL$1, 0ll, 0ll );
			ASTADD( vr$40 );
			struct $7ASTNODE* vr$41 = ASTNEWBRANCH( 97ll, L$1, (struct $7ASTNODE*)0ull );
			ASTADD( vr$41 );
			struct $7ASTNODE* vr$42 = ASTNEWLABEL( LABEL$1, -1ll );
			ASTADD( vr$42 );
			struct $7ASTNODE* vr$43 = ASTNEWCONSTI( 16ll, 7ll, (struct $8FBSYMBOL*)0ull );
			RTLERRORSETNUM( vr$43 );
			if( *(int64*)((uint8*)&ENV$ + 296ll) == 0ll ) goto label$35;
			{
				struct $7ASTNODE* vr$47 = ASTNEWCONSTI( 16ll, 7ll, (struct $8FBSYMBOL*)0ull );
				RTLERRORTHROW( vr$47, *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16712ll), (uint8*)((uint8*)&ENV$ + 488ll) );
			}
			label$35:;
			label$34:;
			fb$result$1 = -1ll;
		}
		label$32:;
	}
	label$26:;
	label$25:;
	return fb$result$1;
}

void ASTGOSUBADDEXIT( struct $8FBSYMBOL* PROC$1 )
{
	label$36:;
	if( (*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 96ll) & 4ll) == 0ll ) goto label$39;
	{
		if( ((int64)-(*(int64*)((uint8*)&ENV$ + 208ll) == 0ll) & (int64)-(*(int64*)((uint8*)&ENV$ + 360ll) == 0ll)) != 0ll ) goto label$41;
		{
			struct $7ASTNODE* vr$10 = ASTNEWVAR( *(struct $8FBSYMBOL**)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 120ll), 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$11 = ASTNEWADDROF( vr$10 );
			struct $7ASTNODE* vr$12 = RTLGOSUBEXIT( vr$11 );
			ASTADD( vr$12 );
		}
		label$41:;
		label$40:;
	}
	label$39:;
	label$38:;
	label$37:;
}

__attribute__(( constructor )) static void fb_ctor__astzgosub( void )
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

// Total compilation time: 0.03662592731416225 seconds.