// Compilation of FreeBASIC-1.01.0-source/src/compiler/error.bas started at 16:30:10 on 02-28-2015

typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
struct $8HASHITEM;
struct $8HASHITEM {
	uint8* NAME;
	void* DATA;
	struct $8HASHITEM* PREV;
	struct $8HASHITEM* NEXT;
};
#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]
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
struct $16ERRPARAMLOCATION {
	struct $8FBSYMBOL* PROC;
	int64 TK;
	int64 PARAMNUM;
	uint8* PARAMID;
};
__FB_STATIC_ASSERT( sizeof( struct $16ERRPARAMLOCATION ) == 32 );
typedef int64 $12FB_ERRMSGOPT;
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
typedef int64 $11FB_LANG_OPT;
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
void fb_PrintVoid( int32, int32 );
void fb_PrintString( int32, FBSTRING*, int32 );
FBSTRING* fb_StrInit( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
int32 fb_StrCompare( void*, int64, void*, int64 );
FBSTRING* fb_StrConcatAssign( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAllocTempDescZ( uint8* );
FBSTRING* fb_StrAllocTempDescZEx( uint8*, int64 );
FBSTRING* fb_LongintToStr( int64 );
int64 fb_StrLen( void*, int64 );
FBSTRING* fb_LEFT( FBSTRING*, int64 );
static void fb_ctor__error( void ) __attribute__(( constructor ));
void LISTINIT( struct $5TLIST*, int64, int64, $10LIST_FLAGS );
void LISTEND( struct $5TLIST* );
void* LISTNEWNODE( struct $5TLIST* );
void LISTDELNODE( struct $5TLIST*, void* );
void* LISTGETTAIL( struct $5TLIST* );
void HASHINIT( struct $5THASH*, int64, int64 );
void HASHEND( struct $5THASH* );
uint64 HASHHASH( uint8* );
void* HASHLOOKUPEX( struct $5THASH*, uint8*, uint64 );
struct $8HASHITEM* HASHADD( struct $5THASH*, uint8*, void*, uint64 );
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRHIDEFURTHERERRORS( void );
void ERRPUSHPARAMLOCATION( struct $8FBSYMBOL*, int64, int64, uint8* );
void ERRPOPPARAMLOCATION( void );
void ERRREPORTEX( int64, uint8*, int64, $12FB_ERRMSGOPT, uint8* );
void ERRREPORTWARN( int64, uint8*, $12FB_ERRMSGOPT );
void ERRREPORTWARNEX( int64, uint8*, int64, $12FB_ERRMSGOPT );
typedef int64 $7FB_LANG;
$11FB_LANG_OPT FBGETLANGOPTIONS( $7FB_LANG );
FBSTRING* FBGETLANGNAME( $7FB_LANG );
uint8* SYMBKEYWORDGETTEXT( int64 );
uint8* SYMBGETMANGLEDNAME( struct $8FBSYMBOL* );
FBSTRING* SYMBPROCPTRTOSTR( struct $8FBSYMBOL* );
FBSTRING* SYMBMETHODTOSTR( struct $8FBSYMBOL* );
void ZSTRASSIGN( uint8**, uint8* );
typedef int64 $8LEXCHECK;
int64 LEXGETTOKEN( $8LEXCHECK );
uint8* LEXGETTEXT( void );
FBSTRING* LEXPEEKCURRENTLINE( FBSTRING*, int64 );
static uint8* HMAKEPARAMDESC( uint8* );
static int64 ERRHAVEPARAMLOCATION( void );
static void HPRINTERRMSG( int64, uint8*, $12FB_ERRMSGOPT, int64, int64, uint8* );
static uint8* HADDTOKEN( int64, int64, uint8* );
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
struct $9FB_ERRCTX {
	int64 INITED;
	int64 CNT;
	int64 HIDE_FURTHER_MESSAGES;
	int64 LASTLINE;
	int64 LASTSTMT;
	struct $5THASH UNDEFHASH;
	struct $5TLIST PARAMLOCATIONS;
};
__FB_STATIC_ASSERT( sizeof( struct $9FB_ERRCTX ) == 128 );
static struct $9FB_ERRCTX ERRCTX$;
struct $9FBWARNING {
	int64 LEVEL;
	uint8* TEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $9FBWARNING ) == 16 );
static struct $9FBWARNING WARNINGMSGS$[36] = { { 1ll, (uint8*)"Passing scalar as pointer" }, { 1ll, (uint8*)"Passing pointer to scalar" }, { 1ll, (uint8*)"Passing different pointer types" }, { 1ll, (uint8*)"Suspicious pointer assignment" }, { 0ll, (uint8*)"Implicit conversion" }, { 1ll, (uint8*)"Cannot export symbol without -export option" }, { 1ll, (uint8*)"Identifier's name too big, truncated" }, { 1ll, (uint8*)"Literal number too big, truncated" }, { 1ll, (uint8*)"Literal string too big, truncated" }, { 0ll, (uint8*)"UDT with pointer or var-len string fields" }, { 0ll, (uint8*)"Implicit variable allocation" }, { 0ll, (uint8*)"Missing closing quote in literal string" }, { 0ll, (uint8*)"Function result was not explicitly set" }, { 1ll, (uint8*)"Branch crossing local variable definition" }, { 0ll, (uint8*)"No explicit BYREF or BYVAL" }, { 0ll, (uint8*)"Possible escape sequence found in" }, { 0ll, (uint8*)"The type length is too large, consider passing BYREF" }, { 1ll, (uint8*)"The length of the parameters list is too large, consider passing UDT's BYREF" }, { 1ll, (uint8*)"The ANY initializer has no effect on UDT's with default constructors" }, { 2ll, (uint8*)"Object files or libraries with mixed multithreading (-mt) options" }, { 2ll, (uint8*)"Object files or libraries with mixed language (-lang) options" }, { 0ll, (uint8*)"Deleting ANY pointers is undefined" }, { 2ll, (uint8*)"Array too large for stack, consider making it var-len or SHARED" }, { 2ll, (uint8*)"Variable too large for stack, consider making it SHARED" }, { 0ll, (uint8*)"Overflow in constant conversion" }, { 0ll, (uint8*)"Variable following NEXT is meaningless" }, { 0ll, (uint8*)"Cast to non-pointer" }, { 0ll, (uint8*)"Return method mismatch" }, { 0ll, (uint8*)"Passing Pointer" }, { 0ll, (uint8*)"Command line option overrides directive" }, { 0ll, (uint8*)"Directive ignored after first pass" }, { 0ll, (uint8*)"'IF' statement found directly after multi-line 'ELSE'" }, { 0ll, (uint8*)"Shift value greater than or equal to number of bits in data type" }, { 0ll, (uint8*)"'=' parsed as equality operator in function argument, not assignment to BYREF function result" }, { 0ll, (uint8*)"Mixing signed/unsigned operands" }, { 0ll, (uint8*)"Mismatching parameter initializer" } };
static uint8* ERRORMSGS$[316] = { (uint8*)"Argument count mismatch", (uint8*)"Expected End-of-File", (uint8*)"Expected End-of-Line", (uint8*)"Duplicated definition", (uint8*)"Expected 'AS'", (uint8*)"Expected '('", (uint8*)"Expected ')'", (uint8*)"Undefined symbol", (uint8*)"Expected expression", (uint8*)"Expected '='", (uint8*)"Expected constant", (uint8*)"Expected 'TO'", (uint8*)"Expected 'NEXT'", (uint8*)"Expected identifier", (uint8*)"Expected '-'", (uint8*)"Expected ','", (uint8*)"Syntax error", (uint8*)"Element not defined", (uint8*)"Expected 'END TYPE' or 'END UNION'", (uint8*)"Type mismatch", (uint8*)"Internal!", (uint8*)"Parameter type mismatch", (uint8*)"File not found", (uint8*)"Invalid data types", (uint8*)"Invalid character", (uint8*)"File access error", (uint8*)"Recursion level too deep", (uint8*)"Expected pointer", (uint8*)"Expected 'LOOP'", (uint8*)"Expected 'WEND'", (uint8*)"Expected 'THEN'", (uint8*)"Expected 'END IF'", (uint8*)"Illegal 'END'", (uint8*)"Expected 'CASE'", (uint8*)"Expected 'END SELECT'", (uint8*)"Wrong number of dimensions", (uint8*)"Array boundaries do not match the original EXTERN declaration", (uint8*)"'SUB' or 'FUNCTION' without 'END SUB' or 'END FUNCTION'", (uint8*)"Expected 'END SUB' or 'END FUNCTION'", (uint8*)"Illegal parameter specification", (uint8*)"Variable not declared", (uint8*)"Variable required", (uint8*)"Illegal outside a compound statement", (uint8*)"Expected 'END ASM'", (uint8*)"Function not declared", (uint8*)"Expected ';'", (uint8*)"Undefined label", (uint8*)"Too many array dimensions", (uint8*)"Array too big", (uint8*)"User Defined Type too big", (uint8*)"Expected scalar counter", (uint8*)"Illegal outside a CONSTRUCTOR, DESTRUCTOR, FUNCTION, OPERATOR, PROPERTY or SUB block", (uint8*)"Expected var-len array", (uint8*)"Fixed-len strings cannot be returned from functions", (uint8*)"Array already dimensioned", (uint8*)"Illegal without the -ex option", (uint8*)"Type mismatch", (uint8*)"Illegal specification", (uint8*)"Expected 'END WITH'", (uint8*)"Illegal inside functions", (uint8*)"Statement in between SELECT and first CASE", (uint8*)"Expected array", (uint8*)"Expected '{'", (uint8*)"Expected '}'", (uint8*)"Expected ']'", (uint8*)"Too many expressions", (uint8*)"Expected explicit result type", (uint8*)"Range too large", (uint8*)"Forward references not allowed", (uint8*)"Incomplete type", (uint8*)"Array not dimensioned", (uint8*)"Array access, index expected", (uint8*)"Expected 'END ENUM'", (uint8*)"Var-len arrays cannot be initialized", (uint8*)"'...' ellipsis upper bound given for dynamic array (this is not supported)", (uint8*)"'...' ellipsis upper bound given for array field (this is not supported)", (uint8*)"Invalid bitfield", (uint8*)"Too many parameters", (uint8*)"Macro text too long", (uint8*)"Invalid command-line option", (uint8*)"Selected non-x86 CPU when compiling for DOS", (uint8*)"Selected -gen gas ASM backend for non-x86 CPU", (uint8*)"-asm att used for -gen gas, but -gen gas only supports -asm intel", (uint8*)"-pic used when making executable (only works when making a shared library)", (uint8*)"-pic used, but not supported by target system (only works for non-x86 Unixes)", (uint8*)"Var-len strings cannot be initialized", (uint8*)"Recursive TYPE or UNION not allowed", (uint8*)"Recursive DEFINE not allowed", (uint8*)"Identifier cannot include periods", (uint8*)"Executable not found", (uint8*)"Array out-of-bounds", (uint8*)"Missing command-line option for", (uint8*)"Expected 'ANY'", (uint8*)"Expected 'END SCOPE'", (uint8*)"Illegal inside a compound statement or scoped block", (uint8*)"UDT function results cannot be passed by reference", (uint8*)"Ambiguous call to overloaded function", (uint8*)"No matching overloaded function", (uint8*)"Division by zero", (uint8*)"Cannot pop stack, underflow", (uint8*)"UDT's containing var-len string fields cannot be initialized", (uint8*)"Branching to scope block containing local variables", (uint8*)"Branching to other functions or to module-level", (uint8*)"Branch crossing local array, var-len string or object definition", (uint8*)"LOOP without DO", (uint8*)"NEXT without FOR", (uint8*)"WEND without WHILE", (uint8*)"END WITH without WITH", (uint8*)"END IF without IF", (uint8*)"END SELECT without SELECT", (uint8*)"END SUB or FUNCTION without SUB or FUNCTION", (uint8*)"END SCOPE without SCOPE", (uint8*)"END NAMESPACE without NAMESPACE", (uint8*)"END EXTERN without EXTERN", (uint8*)"ELSEIF without IF", (uint8*)"ELSE without IF", (uint8*)"CASE without SELECT", (uint8*)"Cannot modify a constant", (uint8*)"Expected period ('.')", (uint8*)"Expected 'END NAMESPACE'", (uint8*)"Illegal inside a NAMESPACE block", (uint8*)"Symbols defined inside namespaces cannot be removed", (uint8*)"Expected 'END EXTERN'", (uint8*)"Expected 'END SUB'", (uint8*)"Expected 'END FUNCTION'", (uint8*)"Expected 'END CONSTRUCTOR'", (uint8*)"Expected 'END DESTRUCTOR'", (uint8*)"Expected 'END OPERATOR'", (uint8*)"Expected 'END PROPERTY'", (uint8*)"Declaration outside the original namespace", (uint8*)"No end of multi-line comment, expected \x22'/\x22", (uint8*)"Too many errors, exiting", (uint8*)"Expected 'ENDMACRO'", (uint8*)"EXTERN or COMMON variables cannot be initialized", (uint8*)"EXTERN or COMMON dynamic arrays cannot have initial bounds", (uint8*)"At least one parameter must be a user-defined type", (uint8*)"Parameter or result must be a user-defined type", (uint8*)"Both parameters can't be of the same type", (uint8*)"Parameter and result can't be of the same type", (uint8*)"Invalid result type for this operator", (uint8*)"Invalid parameter type, it must be the same as the parent TYPE/CLASS", (uint8*)"Vararg parameters are not allowed in overloaded functions", (uint8*)"Illegal outside an OPERATOR block", (uint8*)"Parameter cannot be optional", (uint8*)"Only valid in -lang", (uint8*)"Default types or suffixes are only valid in -lang", (uint8*)"Suffixes are only valid in -lang", (uint8*)"Implicit variables are only valid in -lang", (uint8*)"Auto variables are only valid in -lang", (uint8*)"Invalid array index", (uint8*)"Operator must be a member function", (uint8*)"Operator cannot be a member function", (uint8*)"Method declared in anonymous UDT", (uint8*)"Constant declared in anonymous UDT", (uint8*)"Static variable declared in anonymous UDT", (uint8*)"Expected operator", (uint8*)"Declaration outside the original namespace or class", (uint8*)"A destructor should not have any parameters", (uint8*)"Expected class or UDT identifier", (uint8*)"Var-len strings cannot be part of UNION's or nested TYPE's", (uint8*)"Dynamic arrays cannot be part of UNION's or nested TYPE's", (uint8*)"Fields with constructors cannot be part of UNION's or nested TYPE's", (uint8*)"Fields with destructors cannot be part of UNION's or nested TYPE's", (uint8*)"Illegal outside a CONSTRUCTOR block", (uint8*)"Illegal outside a DESTRUCTOR block", (uint8*)"UDT's with methods must have unique names", (uint8*)"Parent is not a class or UDT", (uint8*)"CONSTRUCTOR() chain call not at top of constructor", (uint8*)"BASE() initializer not at top of constructor", (uint8*)"REDIM on UDT with non-CDECL constructor", (uint8*)"REDIM on UDT with non-CDECL destructor", (uint8*)"REDIM on UDT with non-parameterless default constructor", (uint8*)"ERASE on UDT with non-CDECL constructor", (uint8*)"ERASE on UDT with non-CDECL destructor", (uint8*)"ERASE on UDT with non-parameterless default constructor", (uint8*)"This symbol cannot be undefined", (uint8*)"RETURN mixed with 'FUNCTION =' or EXIT FUNCTION (using both styles together is unsupported when returning objects with constructors)", (uint8*)"'FUNCTION =' or EXIT FUNCTION mixed with RETURN (using both styles together is unsupported when returning objects with constructors)", (uint8*)"Missing RETURN to copy-construct function result", (uint8*)"Invalid assignment/conversion", (uint8*)"Invalid array subscript", (uint8*)"TYPE or CLASS has no default constructor", (uint8*)"Function result TYPE has no default constructor", (uint8*)"Missing BASE() initializer (base UDT without default constructor requires manual initialization)", (uint8*)"Missing default constructor implementation (base UDT without default constructor requires manual initialization)", (uint8*)"Missing UDT.constructor(byref as UDT) implementation (base UDT without default constructor requires manual initialization)", (uint8*)"Missing UDT.constructor(byref as const UDT) implementation (base UDT without default constructor requires manual initialization)", (uint8*)"Invalid priority attribute", (uint8*)"PROPERTY GET should have no parameter, or just one if indexed", (uint8*)"PROPERTY SET should have one parameter, or just two if indexed", (uint8*)"Expected 'PROPERTY'", (uint8*)"Illegal outside a PROPERTY block", (uint8*)"PROPERTY has no GET method/accessor", (uint8*)"PROPERTY has no SET method/accessor", (uint8*)"PROPERTY has no indexed GET method/accessor", (uint8*)"PROPERTY has no indexed SET method/accessor", (uint8*)"Missing overloaded operator: ", (uint8*)"The NEW[] operator does not allow explicit calls to constructors", (uint8*)"The NEW[] operator only supports the { ANY } initialization", (uint8*)"The NEW operator cannot be used with fixed-length strings", (uint8*)"Illegal member access", (uint8*)"Expected ':'", (uint8*)"The default constructor has no public access", (uint8*)"Constructor has no public access", (uint8*)"Destructor has no public access", (uint8*)"Accessing base UDT's private default constructor", (uint8*)"Accessing base UDT's private destructor", (uint8*)"Illegal non-static member access", (uint8*)"Constructor declared ABSTRACT", (uint8*)"Constructor declared VIRTUAL", (uint8*)"Destructor declared ABSTRACT", (uint8*)"Member cannot be static", (uint8*)"Member isn't static", (uint8*)"Only static members can be accessed from static functions", (uint8*)"The PRIVATE and PUBLIC attributes are not allowed with REDIM, COMMON or EXTERN", (uint8*)"STATIC used here, but not the in the DECLARE statement", (uint8*)"CONST used here, but not the in the DECLARE statement", (uint8*)"VIRTUAL used here, but not the in the DECLARE statement", (uint8*)"ABSTRACT used here, but not the in the DECLARE statement", (uint8*)"Method declared VIRTUAL, but UDT does not extend OBJECT", (uint8*)"Method declared ABSTRACT, but UDT does not extend OBJECT", (uint8*)"Not overriding any virtual method", (uint8*)"Implemented body for an ABSTRACT method", (uint8*)"Override has different return type than overridden method", (uint8*)"Override has different calling convention than overridden method", (uint8*)"Implicit destructor override would have different calling convention", (uint8*)"Implicit LET operator override would have different calling convention", (uint8*)"Override is not a CONST member like the overridden method", (uint8*)"Override is a CONST member, but the overridden method is not", (uint8*)"Override has different parameters than overridden method", (uint8*)"This operator cannot be STATIC", (uint8*)"This operator is implicitly STATIC and cannot be VIRTUAL or ABSTRACT", (uint8*)"This operator is implicitly STATIC and cannot be CONST", (uint8*)"Parameter must be an integer", (uint8*)"Parameter must be a pointer", (uint8*)"Expected initializer", (uint8*)"Fields cannot be named as keywords in TYPE's that contain member functions or in CLASS'es", (uint8*)"Illegal outside a FOR compound statement", (uint8*)"Illegal outside a DO compound statement", (uint8*)"Illegal outside a WHILE compound statement", (uint8*)"Illegal outside a SELECT compound statement", (uint8*)"Expected 'FOR'", (uint8*)"Expected 'DO'", (uint8*)"Expected 'WHILE'", (uint8*)"Expected 'SELECT'", (uint8*)"No outer FOR compound statement found", (uint8*)"No outer DO compound statement found", (uint8*)"No outer WHILE compound statement found", (uint8*)"No outer SELECT compound statement found", (uint8*)"Expected 'CONSTRUCTOR', 'DESTRUCTOR', 'DO', 'FOR', 'FUNCTION', 'OPERATOR', 'PROPERTY', 'SELECT', 'SUB' or 'WHILE'", (uint8*)"Expected 'DO', 'FOR' or 'WHILE'", (uint8*)"Illegal outside a SUB block", (uint8*)"Illegal outside a FUNCTION block", (uint8*)"Ambiguous symbol access, explicit scope resolution required", (uint8*)"An ENUM, TYPE or UNION cannot be empty", (uint8*)"ENUM's declared inside EXTERN .. END EXTERN blocks don't open new scopes", (uint8*)"STATIC used on non-member procedure", (uint8*)"CONST used on non-member procedure", (uint8*)"ABSTRACT used on non-member procedure", (uint8*)"VIRTUAL used on non-member procedure", (uint8*)"Invalid initializer", (uint8*)"Objects with default [con|de]structors or methods are only allowed in the module level", (uint8*)"Static member variable in nested UDT (only allowed in toplevel UDTs)", (uint8*)"Symbol not a CLASS, ENUM, TYPE or UNION type", (uint8*)"Too many elements", (uint8*)"Only data members supported", (uint8*)"UNIONs are not allowed", (uint8*)"Arrays are not allowed", (uint8*)"COMMON variables cannot be object instances of CLASS/TYPE's with cons/destructors", (uint8*)"Cloning operators (LET, Copy constructors) can't take a byval arg of the parent's type", (uint8*)"Local symbols can't be referenced", (uint8*)"Expected 'PTR' or 'POINTER'", (uint8*)"Too many levels of pointer indirection", (uint8*)"Dynamic arrays can't be const", (uint8*)"Const UDT cannot invoke non-const method", (uint8*)"Elements must be empty for strings and arrays", (uint8*)"GOSUB disabled, use 'OPTION GOSUB' to enable", (uint8*)"Invalid -lang", (uint8*)"Can't use ANY as initializer in array with ellipsis bound", (uint8*)"Must have initializer with array with ellipsis bound", (uint8*)"Can't use ... as lower bound", (uint8*)"FOR/NEXT variable name mismatch", (uint8*)"Selected option requires an SSE FPU mode", (uint8*)"Expected relational operator ( =, >, <, <>, <=, >= )", (uint8*)"Unsupported statement in -gen gcc mode", (uint8*)"Too many labels", (uint8*)"Unsupported function", (uint8*)"Expected sub", (uint8*)"Expected '#ENDIF'", (uint8*)"Resource file given for target system that does not support them", (uint8*)"-o <file> option without corresponding input file", (uint8*)"Not extending a TYPE/UNION (a TYPE/UNION can only extend other TYPEs/UNIONs)", (uint8*)"Illegal outside a CLASS, TYPE or UNION method", (uint8*)"CLASS, TYPE or UNION not derived", (uint8*)"CLASS, TYPE or UNION has no constructor", (uint8*)"Symbol type has no Run-Time Type Info (RTTI)", (uint8*)"Types have no hierarchical relation", (uint8*)"Expected a CLASS, TYPE or UNION symbol type", (uint8*)"Casting derived UDT pointer from incompatible pointer type", (uint8*)"Casting derived UDT pointer from unrelated UDT pointer type", (uint8*)"Casting derived UDT pointer to incompatible pointer type", (uint8*)"Casting derived UDT pointer to unrelated UDT pointer type", (uint8*)"ALIAS name string is empty", (uint8*)"LIB name string is empty", (uint8*)"UDT has unimplemented abstract methods", (uint8*)"Non-virtual call to ABSTRACT method", (uint8*)"#ASSERT condition failed", (uint8*)"Expected '>'", (uint8*)"Invalid size", (uint8*)"ALIAS name here is different from ALIAS given in DECLARE prototype", (uint8*)"vararg parameters are only allowed in CDECL procedures", (uint8*)"the first parameter in a procedure may not be vararg", (uint8*)"CONST used on constructor (not needed)", (uint8*)"CONST used on destructor (not needed)", (uint8*)"Byref function result not set", (uint8*)"Function result assignment outside of the function" };
struct $5FBENV ENV$ __attribute__((common));

void ERRINIT( void )
{
	label$10:;
	*(int64*)&ERRCTX$ = *(int64*)&ERRCTX$ + 1ll;
	*(int64*)((uint8*)&ERRCTX$ + 8ll) = 0ll;
	*(int64*)((uint8*)&ERRCTX$ + 16ll) = 0ll;
	*(int64*)((uint8*)&ERRCTX$ + 24ll) = -1ll;
	*(int64*)((uint8*)&ERRCTX$ + 32ll) = -1ll;
	HASHINIT( (struct $5THASH*)((uint8*)&ERRCTX$ + 40ll), 64ll, -1ll );
	LISTINIT( (struct $5TLIST*)((uint8*)&ERRCTX$ + 64ll), 4ll, 32ll, 4294967295ll );
	label$11:;
}

void ERREND( void )
{
	label$12:;
	LISTEND( (struct $5TLIST*)((uint8*)&ERRCTX$ + 64ll) );
	HASHEND( (struct $5THASH*)((uint8*)&ERRCTX$ + 40ll) );
	*(int64*)&ERRCTX$ = *(int64*)&ERRCTX$ + -1ll;
	label$13:;
}

void ERRHIDEFURTHERERRORS( void )
{
	label$14:;
	*(int64*)((uint8*)&ERRCTX$ + 16ll) = -1ll;
	label$15:;
}

int64 ERRGETCOUNT( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$16:;
	fb$result$1 = *(int64*)((uint8*)&ERRCTX$ + 8ll);
	goto label$17;
	label$17:;
	return fb$result$1;
}

void ERRPUSHPARAMLOCATION( struct $8FBSYMBOL* PROC$1, int64 TK$1, int64 PARAMNUM$1, uint8* PARAMID$1 )
{
	label$18:;
	struct $16ERRPARAMLOCATION* L$1;
	if( PROC$1 == (struct $8FBSYMBOL*)0ull ) goto label$21;
	{
		if( (*(int64*)((uint8*)PROC$1 + 8ll) & 2048ll) == 0ll ) goto label$23;
		{
			if( PARAMNUM$1 <= 1ll ) goto label$25;
			{
				PARAMNUM$1 = PARAMNUM$1 + -1ll;
			}
			label$25:;
			label$24:;
		}
		label$23:;
		label$22:;
	}
	label$21:;
	label$20:;
	void* vr$7 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&ERRCTX$ + 64ll) );
	L$1 = (struct $16ERRPARAMLOCATION*)vr$7;
	*(struct $8FBSYMBOL**)L$1 = PROC$1;
	*(int64*)((uint8*)L$1 + 8ll) = TK$1;
	*(int64*)((uint8*)L$1 + 16ll) = PARAMNUM$1;
	*(uint8**)((uint8*)L$1 + 24ll) = PARAMID$1;
	label$19:;
}

void ERRPOPPARAMLOCATION( void )
{
	label$26:;
	void* vr$1 = LISTGETTAIL( (struct $5TLIST*)((uint8*)&ERRCTX$ + 64ll) );
	LISTDELNODE( (struct $5TLIST*)((uint8*)&ERRCTX$ + 64ll), vr$1 );
	label$27:;
}

void ERRREPORTEX( int64 ERRNUM$1, uint8* MSGEX$1, int64 LINENUM$1, $12FB_ERRMSGOPT OPTIONS$1, uint8* CUSTOMTEXT$1 )
{
	label$61:;
	if( *(int64*)((uint8*)&ERRCTX$ + 16ll) == 0ll ) goto label$64;
	{
		goto label$62;
	}
	label$64:;
	label$63:;
	if( *(int64*)&ERRCTX$ <= 0ll ) goto label$66;
	{
		uint8* vr$2 = HMAKEPARAMDESC( MSGEX$1 );
		MSGEX$1 = vr$2;
	}
	label$66:;
	label$65:;
	if( LINENUM$1 != 0ll ) goto label$68;
	{
		if( *(int64*)((uint8*)&PARSER$ + 56ll) != *(int64*)((uint8*)&ERRCTX$ + 32ll) ) goto label$70;
		{
			goto label$62;
		}
		label$70:;
		label$69:;
		if( *(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) == (struct $9LEX_TKCTX*)0ull ) goto label$72;
		{
			LINENUM$1 = *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16712ll);
		}
		label$72:;
		label$71:;
		*(int64*)((uint8*)&ERRCTX$ + 24ll) = LINENUM$1;
		*(int64*)((uint8*)&ERRCTX$ + 32ll) = *(int64*)((uint8*)&PARSER$ + 56ll);
	}
	label$68:;
	label$67:;
	HPRINTERRMSG( ERRNUM$1, MSGEX$1, OPTIONS$1, LINENUM$1, *(int64*)((uint8*)&ENV$ + 336ll), CUSTOMTEXT$1 );
	*(int64*)((uint8*)&ERRCTX$ + 8ll) = *(int64*)((uint8*)&ERRCTX$ + 8ll) + 1ll;
	if( *(int64*)((uint8*)&ERRCTX$ + 8ll) < *(int64*)((uint8*)&ENV$ + 344ll) ) goto label$74;
	{
		HPRINTERRMSG( 132ll, (uint8*)0ull, 0ll, LINENUM$1, 0ll, (uint8*)0ull );
		ERRHIDEFURTHERERRORS(  );
	}
	label$74:;
	label$73:;
	label$62:;
}

void ERRREPORT( int64 ERRNUM$1, int64 ISBEFORE$1, uint8* CUSTOMTEXT$1 )
{
	label$91:;
	uint8* MSGEX$1;
	int64 vr$0 = ERRHAVEPARAMLOCATION(  );
	if( vr$0 == 0ll ) goto label$94;
	{
		MSGEX$1 = (uint8*)0ull;
	}
	goto label$93;
	label$94:;
	{
		uint8* vr$2 = HADDTOKEN( ISBEFORE$1, 0ll, (uint8*)0ull );
		MSGEX$1 = vr$2;
	}
	label$93:;
	ERRREPORTEX( ERRNUM$1, MSGEX$1, 0ll, 1ll, CUSTOMTEXT$1 );
	label$92:;
}

void ERRREPORTWARNEX( int64 MSGNUM$1, uint8* MSGEX$1, int64 LINENUM$1, $12FB_ERRMSGOPT OPTIONS$1 )
{
	FBSTRING TMP$464$1;
	FBSTRING TMP$465$1;
	FBSTRING TMP$466$1;
	FBSTRING TMP$467$1;
	label$95:;
	if( ((int64)-(MSGNUM$1 < 1ll) | (int64)-(MSGNUM$1 >= 37ll)) == 0ll ) goto label$98;
	{
		goto label$96;
	}
	label$98:;
	label$97:;
	if( *(int64*)(((uint8*)WARNINGMSGS$ + (MSGNUM$1 << 4ll)) + -16ll) >= *(int64*)((uint8*)&ENV$ + 328ll) ) goto label$100;
	{
		goto label$96;
	}
	label$100:;
	label$99:;
	if( *(int64*)((uint8*)&ERRCTX$ + 16ll) == 0ll ) goto label$102;
	{
		goto label$96;
	}
	label$102:;
	label$101:;
	if( *(int64*)&ERRCTX$ <= 0ll ) goto label$104;
	{
		uint8* vr$8 = HMAKEPARAMDESC( MSGEX$1 );
		MSGEX$1 = vr$8;
	}
	label$104:;
	label$103:;
	int64 vr$10 = fb_StrLen( (void*)((uint8*)&ENV$ + 488ll), 261ll );
	if( vr$10 <= 0ll ) goto label$106;
	{
		FBSTRING* vr$13 = fb_StrAllocTempDescZ( (uint8*)((uint8*)&ENV$ + 488ll) );
		fb_PrintString( 0, vr$13, 0 );
	}
	goto label$105;
	label$106:;
	{
		if( MSGEX$1 == (uint8*)0ull ) goto label$108;
		{
			FBSTRING* vr$15 = fb_StrAllocTempDescZ( MSGEX$1 );
			fb_PrintString( 0, vr$15, 0 );
			MSGEX$1 = (uint8*)0ull;
		}
		label$108:;
		label$107:;
	}
	label$105:;
	if( LINENUM$1 <= 0ll ) goto label$110;
	{
		FBSTRING TMP$459$2;
		FBSTRING TMP$460$2;
		FBSTRING* vr$17 = fb_LongintToStr( LINENUM$1 );
		__builtin_memset( &TMP$459$2, 0, 24ll );
		FBSTRING* vr$20 = fb_StrConcat( &TMP$459$2, (void*)"(", 2ll, (void*)vr$17, -1ll );
		__builtin_memset( &TMP$460$2, 0, 24ll );
		FBSTRING* vr$23 = fb_StrConcat( &TMP$460$2, (void*)vr$20, -1ll, (void*)")", 2ll );
		fb_PrintString( 0, vr$23, 0 );
	}
	goto label$109;
	label$110:;
	{
		FBSTRING* vr$24 = fb_StrAllocTempDescZEx( (uint8*)"()", 2ll );
		fb_PrintString( 0, vr$24, 0 );
	}
	label$109:;
	FBSTRING* vr$26 = fb_LongintToStr( *(int64*)(((uint8*)WARNINGMSGS$ + (MSGNUM$1 << 4ll)) + -16ll) );
	FBSTRING* vr$27 = fb_LongintToStr( MSGNUM$1 );
	__builtin_memset( &TMP$464$1, 0, 24ll );
	FBSTRING* vr$30 = fb_StrConcat( &TMP$464$1, (void*)" warning ", 10ll, (void*)vr$27, -1ll );
	__builtin_memset( &TMP$465$1, 0, 24ll );
	FBSTRING* vr$33 = fb_StrConcat( &TMP$465$1, (void*)vr$30, -1ll, (void*)"(", 2ll );
	__builtin_memset( &TMP$466$1, 0, 24ll );
	FBSTRING* vr$36 = fb_StrConcat( &TMP$466$1, (void*)vr$33, -1ll, (void*)vr$26, -1ll );
	__builtin_memset( &TMP$467$1, 0, 24ll );
	FBSTRING* vr$39 = fb_StrConcat( &TMP$467$1, (void*)vr$36, -1ll, (void*)"): ", 4ll );
	fb_PrintString( 0, vr$39, 0 );
	FBSTRING* vr$41 = fb_StrAllocTempDescZ( *(uint8**)(((uint8*)WARNINGMSGS$ + (MSGNUM$1 << 4ll)) + -8ll) );
	fb_PrintString( 0, vr$41, 0 );
	if( MSGEX$1 == (uint8*)0ull ) goto label$112;
	{
		if( (OPTIONS$1 & 1ll) == 0ll ) goto label$114;
		{
			FBSTRING* vr$45 = fb_StrAllocTempDescZEx( (uint8*)", ", 2ll );
			fb_PrintString( 0, vr$45, 0 );
		}
		goto label$113;
		label$114:;
		if( (OPTIONS$1 & 2ll) == 0ll ) goto label$115;
		{
			FBSTRING* vr$48 = fb_StrAllocTempDescZEx( (uint8*)": ", 2ll );
			fb_PrintString( 0, vr$48, 0 );
		}
		goto label$113;
		label$115:;
		{
			FBSTRING* vr$49 = fb_StrAllocTempDescZEx( (uint8*)" ", 1ll );
			fb_PrintString( 0, vr$49, 0 );
		}
		label$113:;
		if( (OPTIONS$1 & 4ll) == 0ll ) goto label$117;
		{
			FBSTRING* vr$52 = fb_StrAllocTempDescZEx( (uint8*)"\x22", 1ll );
			fb_PrintString( 0, vr$52, 0 );
		}
		label$117:;
		label$116:;
		FBSTRING* vr$53 = fb_StrAllocTempDescZ( MSGEX$1 );
		fb_PrintString( 0, vr$53, 0 );
		if( (OPTIONS$1 & 4ll) == 0ll ) goto label$119;
		{
			FBSTRING* vr$56 = fb_StrAllocTempDescZEx( (uint8*)"\x22", 1ll );
			fb_PrintString( 0, vr$56, 0 );
		}
		label$119:;
		label$118:;
	}
	label$112:;
	label$111:;
	fb_PrintVoid( 0, 1 );
	label$96:;
}

void ERRREPORTWARN( int64 MSGNUM$1, uint8* MSGEX$1, $12FB_ERRMSGOPT OPTIONS$1 )
{
	label$120:;
	ERRREPORTWARNEX( MSGNUM$1, MSGEX$1, *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16712ll), OPTIONS$1 );
	label$121:;
}

void ERRREPORTNOTALLOWED( $11FB_LANG_OPT OPT$1, int64 ERRNUM$1, uint8* MSGEX$1 )
{
	FBSTRING TMP$469$1;
	label$122:;
	FBSTRING MSG$1;
	FBSTRING* vr$1 = fb_StrInit( (void*)&MSG$1, -1ll, (void*)"", 1ll, 0 );
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	int64 LANGS$1;
	__builtin_memset( &LANGS$1, 0, 8ll );
	LANGS$1 = 0ll;
	{
		I$1 = 0ll;
		label$127:;
		{
			$11FB_LANG_OPT vr$4 = FBGETLANGOPTIONS( I$1 );
			if( (vr$4 & OPT$1) == 0ll ) goto label$129;
			{
				if( LANGS$1 <= 0ll ) goto label$131;
				{
					FBSTRING* vr$9 = fb_StrConcatAssign( (void*)&MSG$1, -1ll, (void*)" or ", 5ll, 0 );
				}
				label$131:;
				label$130:;
				FBSTRING* vr$10 = FBGETLANGNAME( I$1 );
				FBSTRING* vr$12 = fb_StrConcatAssign( (void*)&MSG$1, -1ll, (void*)vr$10, -1ll, 0 );
				LANGS$1 = LANGS$1 + 1ll;
			}
			label$129:;
			label$128:;
		}
		label$125:;
		I$1 = I$1 + 1ll;
		label$124:;
		if( I$1 <= 3ll ) goto label$127;
		label$126:;
	}
	uint8* vr$17 = HADDTOKEN( 0ll, (int64)-(LANGS$1 > 0ll), MSGEX$1 );
	__builtin_memset( &TMP$469$1, 0, 24ll );
	FBSTRING* vr$21 = fb_StrConcat( &TMP$469$1, (void*)&MSG$1, -1ll, (void*)vr$17, 0ll );
	FBSTRING* vr$23 = fb_StrAssign( (void*)&MSG$1, -1ll, (void*)vr$21, -1ll, 0 );
	ERRREPORTEX( ERRNUM$1, *(uint8**)&MSG$1, 0ll, 0ll, (uint8*)0ull );
	fb_StrDelete( &MSG$1 );
	label$123:;
}

void ERRREPORTPARAM( struct $8FBSYMBOL* PROC$1, int64 PARAMNUM$1, uint8* PARAMID$1, int64 MSGNUM$1 )
{
	label$182:;
	ERRPUSHPARAMLOCATION( PROC$1, -1ll, PARAMNUM$1, PARAMID$1 );
	ERRREPORTEX( MSGNUM$1, (uint8*)0ull, 0ll, 1ll, (uint8*)0ull );
	ERRPOPPARAMLOCATION(  );
	label$183:;
}

void ERRREPORTPARAMWARN( struct $8FBSYMBOL* PROC$1, int64 PARAMNUM$1, uint8* PARAMID$1, int64 MSGNUM$1 )
{
	label$184:;
	ERRPUSHPARAMLOCATION( PROC$1, -1ll, PARAMNUM$1, PARAMID$1 );
	ERRREPORTWARN( MSGNUM$1, (uint8*)0ull, 1ll );
	ERRPOPPARAMLOCATION(  );
	label$185:;
}

void ERRREPORTUNDEF( int64 ERRNUM$1, uint8* ID$1 )
{
	label$186:;
	uint64 HASH$1;
	__builtin_memset( &HASH$1, 0, 8ll );
	uint8* ID_CPY$1;
	__builtin_memset( &ID_CPY$1, 0, 8ll );
	uint64 vr$2 = HASHHASH( ID$1 );
	HASH$1 = vr$2;
	void* vr$4 = HASHLOOKUPEX( (struct $5THASH*)((uint8*)&ERRCTX$ + 40ll), ID$1, HASH$1 );
	if( vr$4 == (void*)0ull ) goto label$189;
	{
		goto label$187;
	}
	label$189:;
	label$188:;
	ID_CPY$1 = (uint8*)0ull;
	ZSTRASSIGN( &ID_CPY$1, ID$1 );
	HASHADD( (struct $5THASH*)((uint8*)&ERRCTX$ + 40ll), ID_CPY$1, (void*)ID_CPY$1, HASH$1 );
	ERRREPORTEX( ERRNUM$1, ID$1, 0ll, 1ll, (uint8*)0ull );
	label$187:;
}

__attribute__(( constructor )) static void fb_ctor__error( void )
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

static int64 ERRHAVEPARAMLOCATION( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$28:;
	void* vr$2 = LISTGETTAIL( (struct $5TLIST*)((uint8*)&ERRCTX$ + 64ll) );
	fb$result$1 = (int64)-(vr$2 != (void*)0ull);
	label$29:;
	return fb$result$1;
}

static void HPRINTERRMSG( int64 ERRNUM$1, uint8* MSGEX$1, $12FB_ERRMSGOPT OPTIONS$1, int64 LINENUM$1, int64 SHOWERROR$1, uint8* CUSTOMTEXT$1 )
{
	label$30:;
	static uint8* MSG$1;
	static FBSTRING TOKEN_POS$1;
	if( ((int64)-(ERRNUM$1 < 1ll) | (int64)-(ERRNUM$1 >= 317ll)) == 0ll ) goto label$33;
	{
		MSG$1 = (uint8*)0ull;
	}
	goto label$32;
	label$33:;
	{
		MSG$1 = *(uint8**)(((uint8*)ERRORMSGS$ + (ERRNUM$1 << 3ll)) + -8ll);
	}
	label$32:;
	if( MSGEX$1 != (uint8*)0ull ) goto label$35;
	{
		MSGEX$1 = (uint8*)"";
	}
	label$35:;
	label$34:;
	int64 vr$7 = fb_StrLen( (void*)((uint8*)&ENV$ + 488ll), 261ll );
	if( vr$7 <= 0ll ) goto label$37;
	{
		FBSTRING* vr$10 = fb_StrAllocTempDescZ( (uint8*)((uint8*)&ENV$ + 488ll) );
		fb_PrintString( 0, vr$10, 0 );
		FBSTRING* vr$11 = fb_StrAllocTempDescZEx( (uint8*)"(", 1ll );
		fb_PrintString( 0, vr$11, 0 );
		if( LINENUM$1 <= 0ll ) goto label$39;
		{
			FBSTRING* vr$13 = fb_LongintToStr( LINENUM$1 );
			fb_PrintString( 0, vr$13, 0 );
		}
		label$39:;
		label$38:;
		FBSTRING* vr$14 = fb_StrAllocTempDescZEx( (uint8*)") ", 2ll );
		fb_PrintString( 0, vr$14, 0 );
	}
	label$37:;
	label$36:;
	FBSTRING* vr$15 = fb_StrAllocTempDescZEx( (uint8*)"error", 5ll );
	fb_PrintString( 0, vr$15, 0 );
	if( ERRNUM$1 < 0ll ) goto label$41;
	{
		FBSTRING TMP$446$2;
		FBSTRING TMP$447$2;
		FBSTRING TMP$448$2;
		FBSTRING* vr$17 = fb_LongintToStr( ERRNUM$1 );
		__builtin_memset( &TMP$446$2, 0, 24ll );
		FBSTRING* vr$20 = fb_StrConcat( &TMP$446$2, (void*)" ", 2ll, (void*)vr$17, -1ll );
		__builtin_memset( &TMP$447$2, 0, 24ll );
		FBSTRING* vr$23 = fb_StrConcat( &TMP$447$2, (void*)vr$20, -1ll, (void*)": ", 3ll );
		__builtin_memset( &TMP$448$2, 0, 24ll );
		FBSTRING* vr$26 = fb_StrConcat( &TMP$448$2, (void*)vr$23, -1ll, (void*)MSG$1, 0ll );
		fb_PrintString( 0, vr$26, 0 );
		if( CUSTOMTEXT$1 == (uint8*)0ull ) goto label$43;
		{
			FBSTRING* vr$28 = fb_StrAllocTempDescZ( CUSTOMTEXT$1 );
			fb_PrintString( 0, vr$28, 0 );
		}
		label$43:;
		label$42:;
		if( SHOWERROR$1 == 0ll ) goto label$45;
		{
			SHOWERROR$1 = (int64)-(LINENUM$1 > 0ll);
		}
		label$45:;
		label$44:;
		int64 vr$31 = fb_StrLen( (void*)MSGEX$1, 0ll );
		if( vr$31 <= 0ll ) goto label$47;
		{
			if( (OPTIONS$1 & 1ll) == 0ll ) goto label$49;
			{
				FBSTRING* vr$35 = fb_StrAllocTempDescZEx( (uint8*)", ", 2ll );
				fb_PrintString( 0, vr$35, 0 );
			}
			goto label$48;
			label$49:;
			if( (OPTIONS$1 & 2ll) == 0ll ) goto label$50;
			{
				FBSTRING* vr$38 = fb_StrAllocTempDescZEx( (uint8*)": ", 2ll );
				fb_PrintString( 0, vr$38, 0 );
			}
			goto label$48;
			label$50:;
			{
				FBSTRING* vr$39 = fb_StrAllocTempDescZEx( (uint8*)" ", 1ll );
				fb_PrintString( 0, vr$39, 0 );
			}
			label$48:;
			if( (OPTIONS$1 & 4ll) == 0ll ) goto label$52;
			{
				FBSTRING* vr$42 = fb_StrAllocTempDescZEx( (uint8*)"\x22", 1ll );
				fb_PrintString( 0, vr$42, 0 );
			}
			label$52:;
			label$51:;
			FBSTRING* vr$43 = fb_StrAllocTempDescZ( MSGEX$1 );
			fb_PrintString( 0, vr$43, 0 );
			if( (OPTIONS$1 & 4ll) == 0ll ) goto label$54;
			{
				FBSTRING* vr$46 = fb_StrAllocTempDescZEx( (uint8*)"\x22", 1ll );
				fb_PrintString( 0, vr$46, 0 );
			}
			label$54:;
			label$53:;
		}
		label$47:;
		label$46:;
		if( SHOWERROR$1 == 0ll ) goto label$56;
		{
			static FBSTRING LN$3;
			FBSTRING* vr$50 = LEXPEEKCURRENTLINE( &TOKEN_POS$1, (int64)-((*(int64*)((uint8*)&ENV$ + 1152ll) & 256ll) != 0ll) );
			FBSTRING* vr$51 = fb_StrAssign( (void*)&LN$3, -1ll, (void*)vr$50, -1ll, 0 );
			int64 vr$52 = fb_StrLen( (void*)&LN$3, -1ll );
			if( vr$52 <= 0ll ) goto label$58;
			{
				if( (*(int64*)((uint8*)&ENV$ + 1152ll) & 256ll) == 0ll ) goto label$60;
				{
					FBSTRING TMP$453$5;
					FBSTRING TMP$454$5;
					__builtin_memset( &TMP$453$5, 0, 24ll );
					FBSTRING* vr$58 = fb_StrConcat( &TMP$453$5, (void*)" in '", 6ll, (void*)&LN$3, -1ll );
					__builtin_memset( &TMP$454$5, 0, 24ll );
					FBSTRING* vr$61 = fb_StrConcat( &TMP$454$5, (void*)vr$58, -1ll, (void*)"'", 2ll );
					fb_PrintString( 0, vr$61, 1 );
				}
				goto label$59;
				label$60:;
				{
					fb_PrintVoid( 0, 1 );
					FBSTRING* vr$62 = LEXPEEKCURRENTLINE( &TOKEN_POS$1, 0ll );
					fb_PrintString( 0, vr$62, 1 );
					fb_PrintString( 0, &TOKEN_POS$1, 1 );
				}
				label$59:;
			}
			goto label$57;
			label$58:;
			{
				fb_PrintVoid( 0, 1 );
			}
			label$57:;
		}
		goto label$55;
		label$56:;
		{
			fb_PrintVoid( 0, 1 );
		}
		label$55:;
	}
	goto label$40;
	label$41:;
	{
		FBSTRING* vr$63 = fb_StrAllocTempDescZEx( (uint8*)": ", 2ll );
		fb_PrintString( 0, vr$63, 0 );
		FBSTRING* vr$64 = fb_StrAllocTempDescZ( MSGEX$1 );
		fb_PrintString( 0, vr$64, 1 );
	}
	label$40:;
	label$31:;
}

static uint8* HADDTOKEN( int64 ISBEFORE$1, int64 ADDCOMMA$1, uint8* MSGEX$1 )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$75:;
	static FBSTRING RES$1;
	static FBSTRING TOKEN$1;
	fb_StrAssign( (void*)&RES$1, -1ll, (void*)"", 1ll, 0 );
	if( MSGEX$1 != (uint8*)0ull ) goto label$78;
	{
		uint8* vr$2 = LEXGETTEXT(  );
		fb_StrAssign( (void*)&TOKEN$1, -1ll, (void*)vr$2, 0ll, 0 );
	}
	goto label$77;
	label$78:;
	{
		fb_StrAssign( (void*)&TOKEN$1, -1ll, (void*)MSGEX$1, 0ll, 0 );
	}
	label$77:;
	int64 vr$3 = fb_StrLen( (void*)&TOKEN$1, -1ll );
	if( vr$3 <= 0ll ) goto label$80;
	{
		{
			int64 TMP$455$3;
			int64 vr$5 = LEXGETTOKEN( 0ll );
			TMP$455$3 = vr$5;
			if( TMP$455$3 <= 32ll ) goto label$83;
			label$84:;
			if( TMP$455$3 == 257ll ) goto label$83;
			label$85:;
			if( TMP$455$3 != 256ll ) goto label$82;
			label$83:;
			{
			}
			goto label$81;
			label$82:;
			{
				if( ADDCOMMA$1 == 0ll ) goto label$88;
				{
					FBSTRING* vr$10 = fb_StrConcatAssign( (void*)&RES$1, -1ll, (void*)", ", 3ll, 0 );
				}
				label$88:;
				label$87:;
				if( ISBEFORE$1 == 0ll ) goto label$90;
				{
					FBSTRING* vr$12 = fb_StrConcatAssign( (void*)&RES$1, -1ll, (void*)"before '", 9ll, 0 );
				}
				goto label$89;
				label$90:;
				{
					FBSTRING* vr$13 = fb_StrConcatAssign( (void*)&RES$1, -1ll, (void*)"found '", 8ll, 0 );
				}
				label$89:;
				FBSTRING* vr$14 = fb_StrConcatAssign( (void*)&RES$1, -1ll, (void*)&TOKEN$1, -1ll, 0 );
				FBSTRING* vr$15 = fb_StrConcatAssign( (void*)&RES$1, -1ll, (void*)"'", 2ll, 0 );
			}
			label$86:;
			label$81:;
		}
	}
	label$80:;
	label$79:;
	fb$result$1 = *(uint8**)&RES$1;
	label$76:;
	return fb$result$1;
}

static uint8* HMAKEPARAMDESC( uint8* MSGEX$1 )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$132:;
	static FBSTRING DESC$1;
	struct $16ERRPARAMLOCATION* PARAMLOC$1;
	struct $8FBSYMBOL* PROC$1;
	uint8* PNAME$1;
	uint8* PID$1;
	int64 PNUM$1;
	int64 ADDPRNTS$1;
	void* vr$2 = LISTGETTAIL( (struct $5TLIST*)((uint8*)&ERRCTX$ + 64ll) );
	PARAMLOC$1 = (struct $16ERRPARAMLOCATION*)vr$2;
	if( PARAMLOC$1 != (struct $16ERRPARAMLOCATION*)0ull ) goto label$135;
	{
		fb$result$1 = MSGEX$1;
		goto label$133;
	}
	label$135:;
	label$134:;
	PROC$1 = *(struct $8FBSYMBOL**)PARAMLOC$1;
	PNUM$1 = *(int64*)((uint8*)PARAMLOC$1 + 16ll);
	PID$1 = *(uint8**)((uint8*)PARAMLOC$1 + 24ll);
	fb_StrAssign( (void*)&DESC$1, -1ll, (void*)"", 1ll, 0 );
	if( MSGEX$1 == (uint8*)0ull ) goto label$137;
	{
		FBSTRING TMP$470$2;
		__builtin_memset( &TMP$470$2, 0, 24ll );
		FBSTRING* vr$10 = fb_StrConcat( &TMP$470$2, (void*)MSGEX$1, 0ll, (void*)" ", 2ll );
		FBSTRING* vr$11 = fb_StrAssign( (void*)&DESC$1, -1ll, (void*)vr$10, -1ll, 0 );
	}
	label$137:;
	label$136:;
	if( PNUM$1 <= 0ll ) goto label$139;
	{
		FBSTRING* vr$13 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)"at parameter ", 14ll, 0 );
		FBSTRING* vr$14 = fb_LongintToStr( PNUM$1 );
		FBSTRING* vr$15 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)vr$14, -1ll, 0 );
		if( PID$1 != (uint8*)0ull ) goto label$141;
		{
			if( PROC$1 == (struct $8FBSYMBOL*)0ull ) goto label$143;
			{
				int64 TMP$472$4;
				struct $8FBSYMBOL* PARAM$4;
				PARAM$4 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 128ll);
				int64 CNT$4;
				if( (*(int64*)((uint8*)PROC$1 + 8ll) & 2048ll) == 0ll ) goto label$144;
				TMP$472$4 = 0ll;
				goto label$190;
				label$144:;
				TMP$472$4 = 1ll;
				label$190:;
				CNT$4 = TMP$472$4;
				label$145:;
				if( PARAM$4 == (struct $8FBSYMBOL*)0ull ) goto label$146;
				{
					if( CNT$4 != PNUM$1 ) goto label$148;
					{
						goto label$146;
					}
					label$148:;
					label$147:;
					CNT$4 = CNT$4 + 1ll;
					PARAM$4 = *(struct $8FBSYMBOL**)((uint8*)PARAM$4 + 296ll);
				}
				goto label$145;
				label$146:;
				if( PARAM$4 == (struct $8FBSYMBOL*)0ull ) goto label$150;
				{
					PID$1 = *(uint8**)((uint8*)PARAM$4 + 24ll);
				}
				label$150:;
				label$149:;
			}
			label$143:;
			label$142:;
		}
		label$141:;
		label$140:;
		if( PID$1 == (uint8*)0ull ) goto label$152;
		{
			int64 vr$29 = fb_StrLen( (void*)PID$1, 0ll );
			if( vr$29 <= 0ll ) goto label$154;
			{
				FBSTRING TMP$474$4;
				FBSTRING* vr$31 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)" (", 3ll, 0 );
				__builtin_memset( &TMP$474$4, 0, 24ll );
				FBSTRING* vr$34 = fb_StrConcat( &TMP$474$4, (void*)&DESC$1, -1ll, (void*)PID$1, 0ll );
				FBSTRING* vr$35 = fb_StrAssign( (void*)&DESC$1, -1ll, (void*)vr$34, -1ll, 0 );
				FBSTRING* vr$36 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)")", 2ll, 0 );
			}
			label$154:;
			label$153:;
		}
		label$152:;
		label$151:;
	}
	label$139:;
	label$138:;
	if( PROC$1 == (struct $8FBSYMBOL*)0ull ) goto label$156;
	{
		int64 SHOWNAME$2;
		SHOWNAME$2 = -1ll;
		PNAME$1 = (uint8*)0ull;
		if( (*(int64*)((uint8*)PROC$1 + 16ll) & 32ll) == 0ll ) goto label$158;
		{
			if( *(uint8**)((uint8*)PROC$1 + 24ll) == (uint8*)0ull ) goto label$160;
			{
				FBSTRING* vr$44 = fb_StrAllocTempDescZ( *(uint8**)((uint8*)PROC$1 + 24ll) );
				FBSTRING* vr$45 = fb_LEFT( vr$44, 3ll );
				int32 vr$46 = fb_StrCompare( (void*)vr$45, -1ll, (void*)"FB_", 4ll );
				if( (int64)vr$46 != 0ll ) goto label$162;
				{
					SHOWNAME$2 = 0ll;
				}
				label$162:;
				label$161:;
			}
			goto label$159;
			label$160:;
			{
				SHOWNAME$2 = 0ll;
			}
			label$159:;
		}
		goto label$157;
		label$158:;
		{
			static FBSTRING S$3;
			if( (*(int64*)((uint8*)PROC$1 + 16ll) & 16384ll) == 0ll ) goto label$164;
			{
				FBSTRING* vr$52 = SYMBPROCPTRTOSTR( PROC$1 );
				FBSTRING* vr$53 = fb_StrAssign( (void*)&S$3, -1ll, (void*)vr$52, -1ll, 0 );
				PNAME$1 = *(uint8**)&S$3;
			}
			goto label$163;
			label$164:;
			if( (*(int64*)((uint8*)PROC$1 + 8ll) & 28672ll) == 0ll ) goto label$165;
			{
				FBSTRING* vr$57 = SYMBMETHODTOSTR( PROC$1 );
				FBSTRING* vr$58 = fb_StrAssign( (void*)&S$3, -1ll, (void*)vr$57, -1ll, 0 );
				PNAME$1 = *(uint8**)&S$3;
			}
			label$165:;
			label$163:;
		}
		label$157:;
		if( SHOWNAME$2 == 0ll ) goto label$167;
		{
			if( PNAME$1 != (uint8*)0ull ) goto label$169;
			{
				ADDPRNTS$1 = -1ll;
				PNAME$1 = *(uint8**)((uint8*)PROC$1 + 24ll);
				if( PNAME$1 == (uint8*)0ull ) goto label$171;
				{
					int64 vr$63 = fb_StrLen( (void*)PNAME$1, 0ll );
					if( vr$63 != 0ll ) goto label$173;
					{
						uint8* vr$65 = SYMBGETMANGLEDNAME( PROC$1 );
						PNAME$1 = vr$65;
					}
					label$173:;
					label$172:;
				}
				label$171:;
				label$170:;
			}
			goto label$168;
			label$169:;
			{
				ADDPRNTS$1 = 0ll;
			}
			label$168:;
			if( PNAME$1 == (uint8*)0ull ) goto label$175;
			{
				FBSTRING TMP$477$4;
				if( PNUM$1 <= 0ll ) goto label$177;
				{
					FBSTRING* vr$68 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)" of ", 5ll, 0 );
				}
				label$177:;
				label$176:;
				__builtin_memset( &TMP$477$4, 0, 24ll );
				FBSTRING* vr$71 = fb_StrConcat( &TMP$477$4, (void*)&DESC$1, -1ll, (void*)PNAME$1, 0ll );
				FBSTRING* vr$72 = fb_StrAssign( (void*)&DESC$1, -1ll, (void*)vr$71, -1ll, 0 );
				if( ADDPRNTS$1 == 0ll ) goto label$179;
				{
					FBSTRING* vr$74 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)"()", 3ll, 0 );
				}
				label$179:;
				label$178:;
			}
			label$175:;
			label$174:;
		}
		label$167:;
		label$166:;
	}
	goto label$155;
	label$156:;
	{
		FBSTRING TMP$478$2;
		if( PNUM$1 <= 0ll ) goto label$181;
		{
			FBSTRING* vr$76 = fb_StrConcatAssign( (void*)&DESC$1, -1ll, (void*)" of ", 5ll, 0 );
		}
		label$181:;
		label$180:;
		uint8* vr$78 = SYMBKEYWORDGETTEXT( *(int64*)((uint8*)PARAMLOC$1 + 8ll) );
		__builtin_memset( &TMP$478$2, 0, 24ll );
		FBSTRING* vr$81 = fb_StrConcat( &TMP$478$2, (void*)&DESC$1, -1ll, (void*)vr$78, 0ll );
		FBSTRING* vr$82 = fb_StrAssign( (void*)&DESC$1, -1ll, (void*)vr$81, -1ll, 0 );
	}
	label$155:;
	fb$result$1 = *(uint8**)&DESC$1;
	label$133:;
	return fb$result$1;
}

// Total compilation time: 0.03947095945477486 seconds.
