// Compilation of FreeBASIC-1.01.0-source/src/compiler/parser-quirk-file.bas started at 16:30:13 on 02-28-2015

typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
typedef int64 $8FB_TOKEN;
typedef int64 $13AST_NODECLASS;
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
struct $7ASTNODE;
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
union $7FBVALUE {
	struct $8FBSYMBOL* S;
	int64 I;
	double F;
};
__FB_STATIC_ASSERT( sizeof( union $7FBVALUE ) == 8 );
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
typedef int64 $10FBOPENKIND;
FBSTRING* fb_StrInit( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
int32 fb_StrCompare( void*, int64, void*, int64 );
FBSTRING* fb_StrAllocTempDescZ( uint8* );
FBSTRING* fb_StrUcase2( FBSTRING*, int32 );
static void fb_ctor__parserzquirkzfile( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRREPORT( int64, int64, uint8* );
typedef int64 $12FB_ERRMSGOPT;
void ERRREPORTWARN( int64, uint8*, $12FB_ERRMSGOPT );
typedef int64 $11FB_LANG_OPT;
void ERRREPORTNOTALLOWED( $11FB_LANG_OPT, int64, uint8* );
struct $7ASTNODE* ASTCLONETREE( struct $7ASTNODE* );
void ASTDELTREE( struct $7ASTNODE* );
struct $7ASTNODE* ASTADD( struct $7ASTNODE* );
typedef int64 $11AST_CONVOPT;
struct $7ASTNODE* ASTNEWCONV( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, $11AST_CONVOPT, int64* );
struct $7ASTNODE* ASTNEWCONSTSTR( uint8* );
struct $7ASTNODE* ASTNEWCONSTI( int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWVAR( struct $8FBSYMBOL*, int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTREMSIDEFX( struct $7ASTNODE** );
struct $8FBSYMBOL* SYMBALLOCSTRCONST( uint8*, int64 );
int64 SYMBISARRAY( struct $8FBSYMBOL* );
int64 HMATCHTEXT( uint8* );
int64 HMATCH( int64 );
typedef int64 $8LEXCHECK;
int64 LEXGETTOKEN( $8LEXCHECK );
int64 LEXGETCLASS( $8LEXCHECK );
uint8* LEXGETTEXT( void );
void LEXSKIPTOKEN( $8LEXCHECK );
int64 LEXGETLOOKAHEAD( int64, $8LEXCHECK );
int64 CASSIGNTOKEN( void );
struct $7ASTNODE* CEXPRESSION( void );
typedef int64 $13FB_VAREXPROPT;
struct $7ASTNODE* CVARORDEREF( $13FB_VAREXPROPT );
void HSKIPUNTIL( int64, int64, $8LEXCHECK, int64 );
struct $7ASTNODE* HMATCHEXPR( int64 );
int64 RTLPRINT( struct $7ASTNODE*, int64, int64, struct $7ASTNODE*, int64 );
int64 RTLPRINTSPCTAB( struct $7ASTNODE*, struct $7ASTNODE*, int64, int64 );
int64 RTLWRITE( struct $7ASTNODE*, int64, struct $7ASTNODE* );
int64 RTLPRINTUSINGINIT( struct $7ASTNODE*, int64 );
int64 RTLPRINTUSINGEND( struct $7ASTNODE*, int64 );
int64 RTLPRINTUSING( struct $7ASTNODE*, struct $7ASTNODE*, int64, int64, int64 );
struct $7ASTNODE* RTLFILEOPEN( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, int64, $10FBOPENKIND );
struct $7ASTNODE* RTLFILEOPENSHORT( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* RTLFILERENAME( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* RTLFILECLOSE( struct $7ASTNODE*, int64 );
int64 RTLFILESEEK( struct $7ASTNODE*, struct $7ASTNODE* );
struct $7ASTNODE* RTLFILETELL( struct $7ASTNODE* );
struct $7ASTNODE* RTLFILEPUT( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* RTLFILEPUTARRAY( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* RTLFILEGET( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* RTLFILEGETARRAY( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* RTLFILESTRINPUT( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
int64 RTLFILELINEINPUT( int64, struct $7ASTNODE*, struct $7ASTNODE*, int64, int64 );
int64 RTLFILELINEINPUTWSTR( int64, struct $7ASTNODE*, struct $7ASTNODE*, int64, int64 );
int64 RTLFILEINPUT( int64, struct $7ASTNODE*, int64, int64 );
int64 RTLFILEINPUTGET( struct $7ASTNODE* );
int64 RTLFILELOCK( int64, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE* );
static struct $7ASTNODE* HFILECLOSE( int64 );
static struct $7ASTNODE* HFILEPUT( int64 );
static struct $7ASTNODE* HFILEGET( int64 );
static struct $7ASTNODE* HFILEOPEN( int64 );
static struct $7ASTNODE* HFILERENAME( int64 );
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

int64 CPRINTSTMT( $8FB_TOKEN TK$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$10:;
	struct $7ASTNODE* USINGEXPR$1;
	__builtin_memset( &USINGEXPR$1, 0, 8ll );
	struct $7ASTNODE* FILEXPR$1;
	__builtin_memset( &FILEXPR$1, 0, 8ll );
	struct $7ASTNODE* FILEXPRCOPY$1;
	__builtin_memset( &FILEXPRCOPY$1, 0, 8ll );
	struct $7ASTNODE* EXPR$1;
	__builtin_memset( &EXPR$1, 0, 8ll );
	int64 EXPRESSIONS$1;
	__builtin_memset( &EXPRESSIONS$1, 0, 8ll );
	int64 ISSEMICOLON$1;
	__builtin_memset( &ISSEMICOLON$1, 0, 8ll );
	int64 ISCOMMA$1;
	__builtin_memset( &ISCOMMA$1, 0, 8ll );
	int64 ISTAB$1;
	__builtin_memset( &ISTAB$1, 0, 8ll );
	int64 ISSPC$1;
	__builtin_memset( &ISSPC$1, 0, 8ll );
	int64 ISLPRINT$1;
	__builtin_memset( &ISLPRINT$1, 0, 8ll );
	fb$result$1 = 0ll;
	{
		if( TK$1 == 459ll ) goto label$14;
		label$15:;
		if( TK$1 != 63ll ) goto label$13;
		label$14:;
		{
			ISLPRINT$1 = 0ll;
		}
		goto label$12;
		label$13:;
		if( TK$1 != 460ll ) goto label$16;
		label$17:;
		{
			if( (int64)-((*(int64*)((uint8*)&ENV$ + 1152ll) & 33554432ll) != 0ll) != 0ll ) goto label$19;
			{
				ERRREPORTNOTALLOWED( 33554432ll, 145ll, (uint8*)0ull );
			}
			goto label$18;
			label$19:;
			{
				ISLPRINT$1 = -1ll;
			}
			label$18:;
		}
		goto label$12;
		label$16:;
		{
			goto label$11;
		}
		label$20:;
		label$12:;
	}
	LEXSKIPTOKEN( 0ll );
	if( ISLPRINT$1 == 0ll ) goto label$22;
	{
		struct $7ASTNODE* vr$18 = ASTNEWCONSTI( -1ll, 7ll, (struct $8FBSYMBOL*)0ull );
		FILEXPR$1 = vr$18;
	}
	goto label$21;
	label$22:;
	{
		int64 vr$19 = HMATCH( 35ll );
		if( vr$19 == 0ll ) goto label$24;
		{
			struct $7ASTNODE* vr$21 = HMATCHEXPR( 7ll );
			FILEXPR$1 = vr$21;
			if( FILEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$26;
			{
				goto label$11;
			}
			label$26:;
			label$25:;
			int64 vr$23 = LEXGETTOKEN( 0ll );
			if( vr$23 == 44ll ) goto label$28;
			{
				ERRREPORT( 16ll, 0ll, (uint8*)0ull );
			}
			goto label$27;
			label$28:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$27:;
		}
		goto label$23;
		label$24:;
		{
			struct $7ASTNODE* vr$25 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
			FILEXPR$1 = vr$25;
		}
		label$23:;
	}
	label$21:;
	if( (int64)-(*(int64*)FILEXPR$1 == 16ll) != 0ll ) goto label$30;
	{
		struct $7ASTNODE* vr$30 = ASTREMSIDEFX( &FILEXPR$1 );
		ASTADD( vr$30 );
	}
	label$30:;
	label$29:;
	USINGEXPR$1 = (struct $7ASTNODE*)0ull;
	EXPRESSIONS$1 = 0ll;
	label$31:;
	{
		int64 vr$31 = HMATCH( 287ll );
		if( vr$31 == 0ll ) goto label$35;
		{
			if( USINGEXPR$1 == (struct $7ASTNODE*)0ull ) goto label$37;
			{
				ERRREPORT( 3ll, 0ll, (uint8*)0ull );
				struct $7ASTNODE* vr$34 = ASTCLONETREE( FILEXPR$1 );
				FILEXPRCOPY$1 = vr$34;
				int64 vr$35 = RTLPRINTUSINGEND( FILEXPRCOPY$1, ISLPRINT$1 );
				if( vr$35 != 0ll ) goto label$39;
				{
					goto label$11;
				}
				label$39:;
				label$38:;
			}
			label$37:;
			label$36:;
			struct $7ASTNODE* vr$37 = HMATCHEXPR( 16ll );
			USINGEXPR$1 = vr$37;
			if( USINGEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$41;
			{
				goto label$11;
			}
			label$41:;
			label$40:;
			int64 vr$39 = HMATCH( 59ll );
			if( vr$39 != 0ll ) goto label$43;
			{
				ERRREPORT( 46ll, 0ll, (uint8*)0ull );
			}
			label$43:;
			label$42:;
			int64 vr$41 = RTLPRINTUSINGINIT( USINGEXPR$1, ISLPRINT$1 );
			if( vr$41 != 0ll ) goto label$45;
			{
				goto label$11;
			}
			label$45:;
			label$44:;
		}
		label$35:;
		label$34:;
		ISSPC$1 = 0ll;
		ISTAB$1 = 0ll;
		int64 vr$43 = HMATCH( 482ll );
		if( vr$43 == 0ll ) goto label$47;
		{
			ISSPC$1 = -1ll;
			int64 vr$45 = LEXGETTOKEN( 0ll );
			if( vr$45 == 40ll ) goto label$49;
			{
				ERRREPORT( 6ll, 0ll, (uint8*)0ull );
			}
			goto label$48;
			label$49:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$48:;
			struct $7ASTNODE* vr$47 = HMATCHEXPR( 7ll );
			EXPR$1 = vr$47;
			if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$51;
			{
				goto label$11;
			}
			label$51:;
			label$50:;
			int64 vr$49 = LEXGETTOKEN( 0ll );
			if( vr$49 == 41ll ) goto label$53;
			{
				ERRREPORT( 7ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
			}
			goto label$52;
			label$53:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$52:;
		}
		goto label$46;
		label$47:;
		int64 vr$51 = HMATCH( 483ll );
		if( vr$51 == 0ll ) goto label$54;
		{
			ISTAB$1 = -1ll;
			int64 vr$53 = LEXGETTOKEN( 0ll );
			if( vr$53 == 40ll ) goto label$56;
			{
				ERRREPORT( 6ll, 0ll, (uint8*)0ull );
			}
			goto label$55;
			label$56:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$55:;
			struct $7ASTNODE* vr$55 = HMATCHEXPR( 7ll );
			EXPR$1 = vr$55;
			if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$58;
			{
				goto label$11;
			}
			label$58:;
			label$57:;
			int64 vr$57 = LEXGETTOKEN( 0ll );
			if( vr$57 == 41ll ) goto label$60;
			{
				ERRREPORT( 7ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
			}
			goto label$59;
			label$60:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$59:;
		}
		goto label$46;
		label$54:;
		{
			struct $7ASTNODE* vr$59 = CEXPRESSION(  );
			EXPR$1 = vr$59;
		}
		label$46:;
		ISCOMMA$1 = 0ll;
		ISSEMICOLON$1 = 0ll;
		int64 vr$60 = HMATCH( 44ll );
		if( vr$60 == 0ll ) goto label$62;
		{
			if( USINGEXPR$1 == (struct $7ASTNODE*)0ull ) goto label$64;
			{
				ERRREPORT( 46ll, 0ll, (uint8*)0ull );
			}
			label$64:;
			label$63:;
			ISCOMMA$1 = -1ll;
		}
		goto label$61;
		label$62:;
		int64 vr$63 = HMATCH( 59ll );
		if( vr$63 == 0ll ) goto label$65;
		{
			ISSEMICOLON$1 = -1ll;
		}
		label$65:;
		label$61:;
		if( ((ISSPC$1 | ISTAB$1) & (int64)-(ISSEMICOLON$1 == 0ll)) == 0ll ) goto label$67;
		{
			ERRREPORT( 46ll, 0ll, (uint8*)0ull );
		}
		label$67:;
		label$66:;
		if( (((int64)-(ISCOMMA$1 == 0ll) & (int64)-(ISSEMICOLON$1 == 0ll)) & (int64)-(EXPR$1 == (struct $7ASTNODE*)0ull)) == 0ll ) goto label$69;
		{
			goto label$32;
		}
		label$69:;
		label$68:;
		if( (ISSPC$1 | ISTAB$1) == 0ll ) goto label$71;
		{
			struct $7ASTNODE* vr$77 = ASTCLONETREE( FILEXPR$1 );
			FILEXPRCOPY$1 = vr$77;
			int64 vr$78 = RTLPRINTSPCTAB( FILEXPRCOPY$1, EXPR$1, ISTAB$1, ISLPRINT$1 );
			if( vr$78 != 0ll ) goto label$73;
			{
				goto label$11;
			}
			label$73:;
			label$72:;
		}
		goto label$70;
		label$71:;
		{
			if( USINGEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$75;
			{
				struct $7ASTNODE* vr$81 = ASTCLONETREE( FILEXPR$1 );
				FILEXPRCOPY$1 = vr$81;
				int64 vr$82 = RTLPRINT( FILEXPRCOPY$1, ISCOMMA$1, ISSEMICOLON$1, EXPR$1, ISLPRINT$1 );
				if( vr$82 != 0ll ) goto label$77;
				{
					ERRREPORT( 24ll, 0ll, (uint8*)0ull );
				}
				label$77:;
				label$76:;
			}
			goto label$74;
			label$75:;
			{
				struct $7ASTNODE* vr$84 = ASTCLONETREE( FILEXPR$1 );
				FILEXPRCOPY$1 = vr$84;
				int64 vr$85 = RTLPRINTUSING( FILEXPRCOPY$1, EXPR$1, ISCOMMA$1, ISSEMICOLON$1, ISLPRINT$1 );
				if( vr$85 != 0ll ) goto label$79;
				{
					ERRREPORT( 24ll, 0ll, (uint8*)0ull );
				}
				label$79:;
				label$78:;
			}
			label$74:;
		}
		label$70:;
		EXPRESSIONS$1 = EXPRESSIONS$1 + 1ll;
	}
	label$33:;
	if( (ISCOMMA$1 | ISSEMICOLON$1) != 0ll ) goto label$31;
	label$32:;
	if( USINGEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$81;
	{
		if( EXPRESSIONS$1 != 0ll ) goto label$83;
		{
			struct $7ASTNODE* vr$92 = ASTCLONETREE( FILEXPR$1 );
			FILEXPRCOPY$1 = vr$92;
			int64 vr$93 = RTLPRINT( FILEXPRCOPY$1, 0ll, 0ll, (struct $7ASTNODE*)0ull, ISLPRINT$1 );
			if( vr$93 != 0ll ) goto label$85;
			{
				goto label$11;
			}
			label$85:;
			label$84:;
		}
		label$83:;
		label$82:;
	}
	goto label$80;
	label$81:;
	{
		struct $7ASTNODE* vr$95 = ASTCLONETREE( FILEXPR$1 );
		FILEXPRCOPY$1 = vr$95;
		int64 vr$96 = RTLPRINTUSINGEND( FILEXPRCOPY$1, ISLPRINT$1 );
		if( vr$96 != 0ll ) goto label$87;
		{
			goto label$11;
		}
		label$87:;
		label$86:;
	}
	label$80:;
	ASTDELTREE( FILEXPR$1 );
	fb$result$1 = -1ll;
	label$11:;
	return fb$result$1;
}

int64 CWRITESTMT( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$88:;
	struct $7ASTNODE* FILEXPR$1;
	__builtin_memset( &FILEXPR$1, 0, 8ll );
	struct $7ASTNODE* FILEXPRCOPY$1;
	__builtin_memset( &FILEXPRCOPY$1, 0, 8ll );
	struct $7ASTNODE* EXPR$1;
	__builtin_memset( &EXPR$1, 0, 8ll );
	int64 EXPRESSIONS$1;
	__builtin_memset( &EXPRESSIONS$1, 0, 8ll );
	int64 ISCOMMA$1;
	__builtin_memset( &ISCOMMA$1, 0, 8ll );
	fb$result$1 = 0ll;
	LEXSKIPTOKEN( 0ll );
	int64 vr$6 = HMATCH( 35ll );
	if( vr$6 == 0ll ) goto label$91;
	{
		struct $7ASTNODE* vr$8 = HMATCHEXPR( 7ll );
		FILEXPR$1 = vr$8;
		if( FILEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$93;
		{
			goto label$89;
		}
		label$93:;
		label$92:;
		int64 vr$10 = LEXGETTOKEN( 0ll );
		if( vr$10 == 44ll ) goto label$95;
		{
			ERRREPORT( 16ll, 0ll, (uint8*)0ull );
		}
		goto label$94;
		label$95:;
		{
			LEXSKIPTOKEN( 0ll );
		}
		label$94:;
	}
	goto label$90;
	label$91:;
	{
		struct $7ASTNODE* vr$12 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		FILEXPR$1 = vr$12;
	}
	label$90:;
	if( (int64)-(*(int64*)FILEXPR$1 == 16ll) != 0ll ) goto label$97;
	{
		struct $7ASTNODE* vr$17 = ASTREMSIDEFX( &FILEXPR$1 );
		ASTADD( vr$17 );
	}
	label$97:;
	label$96:;
	EXPRESSIONS$1 = 0ll;
	label$98:;
	{
		struct $7ASTNODE* vr$18 = CEXPRESSION(  );
		EXPR$1 = vr$18;
		if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$102;
		{
			EXPR$1 = (struct $7ASTNODE*)0ull;
		}
		label$102:;
		label$101:;
		ISCOMMA$1 = 0ll;
		int64 vr$20 = HMATCH( 44ll );
		if( vr$20 == 0ll ) goto label$104;
		{
			ISCOMMA$1 = -1ll;
		}
		label$104:;
		label$103:;
		struct $7ASTNODE* vr$22 = ASTCLONETREE( FILEXPR$1 );
		FILEXPRCOPY$1 = vr$22;
		if( ((int64)-(ISCOMMA$1 == 0ll) & (int64)-(EXPR$1 == (struct $7ASTNODE*)0ull)) == 0ll ) goto label$106;
		{
			if( EXPRESSIONS$1 != 0ll ) goto label$108;
			{
				RTLWRITE( FILEXPRCOPY$1, 0ll, (struct $7ASTNODE*)0ull );
			}
			label$108:;
			label$107:;
			goto label$99;
		}
		label$106:;
		label$105:;
		int64 vr$28 = RTLWRITE( FILEXPRCOPY$1, ISCOMMA$1, EXPR$1 );
		if( vr$28 != 0ll ) goto label$110;
		{
			ERRREPORT( 24ll, 0ll, (uint8*)0ull );
		}
		label$110:;
		label$109:;
		EXPRESSIONS$1 = EXPRESSIONS$1 + 1ll;
	}
	label$100:;
	if( ISCOMMA$1 != 0ll ) goto label$98;
	label$99:;
	ASTDELTREE( FILEXPR$1 );
	fb$result$1 = -1ll;
	label$89:;
	return fb$result$1;
}

int64 CLINEINPUTSTMT( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$111:;
	struct $7ASTNODE* EXPR$1;
	__builtin_memset( &EXPR$1, 0, 8ll );
	struct $7ASTNODE* DSTEXPR$1;
	__builtin_memset( &DSTEXPR$1, 0, 8ll );
	int64 ISFILE$1;
	__builtin_memset( &ISFILE$1, 0, 8ll );
	int64 ADDNEWLINE$1;
	__builtin_memset( &ADDNEWLINE$1, 0, 8ll );
	int64 ISSEP$1;
	__builtin_memset( &ISSEP$1, 0, 8ll );
	int64 ADDQUESTION$1;
	__builtin_memset( &ADDQUESTION$1, 0, 8ll );
	fb$result$1 = 0ll;
	int64 vr$7 = LEXGETLOOKAHEAD( 1ll, 0ll );
	if( vr$7 == 474ll ) goto label$114;
	{
		goto label$112;
	}
	label$114:;
	label$113:;
	LEXSKIPTOKEN( 0ll );
	LEXSKIPTOKEN( 0ll );
	int64 vr$9 = HMATCH( 59ll );
	ADDNEWLINE$1 = (int64)-(vr$9 == 0ll);
	ISFILE$1 = 0ll;
	int64 vr$11 = HMATCH( 35ll );
	if( vr$11 == 0ll ) goto label$116;
	{
		ISFILE$1 = -1ll;
	}
	label$116:;
	label$115:;
	struct $7ASTNODE* vr$13 = CEXPRESSION(  );
	EXPR$1 = vr$13;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$118;
	{
		if( ISFILE$1 == 0ll ) goto label$120;
		{
			ERRREPORT( 9ll, 0ll, (uint8*)0ull );
			struct $7ASTNODE* vr$16 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
			EXPR$1 = vr$16;
		}
		goto label$119;
		label$120:;
		{
			EXPR$1 = (struct $7ASTNODE*)0ull;
		}
		label$119:;
	}
	label$118:;
	label$117:;
	ISSEP$1 = -1ll;
	int64 vr$17 = HMATCH( 44ll );
	if( vr$17 != 0ll ) goto label$122;
	{
		int64 vr$19 = HMATCH( 59ll );
		if( vr$19 != 0ll ) goto label$124;
		{
			ISSEP$1 = 0ll;
			if( ((int64)-(EXPR$1 == (struct $7ASTNODE*)0ull) | ISFILE$1) == 0ll ) goto label$126;
			{
				ERRREPORT( 16ll, 0ll, (uint8*)0ull );
			}
			label$126:;
			label$125:;
		}
		goto label$123;
		label$124:;
		{
			ADDQUESTION$1 = -1ll;
		}
		label$123:;
	}
	goto label$121;
	label$122:;
	{
		ADDQUESTION$1 = 0ll;
	}
	label$121:;
	struct $7ASTNODE* vr$24 = CVARORDEREF( 0ll );
	DSTEXPR$1 = vr$24;
	if( DSTEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$128;
	{
		if( ((int64)-(EXPR$1 == (struct $7ASTNODE*)0ull) | ISFILE$1) == 0ll ) goto label$130;
		{
			ERRREPORT( 14ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
			fb$result$1 = -1ll;
			goto label$112;
		}
		goto label$129;
		label$130:;
		{
			DSTEXPR$1 = EXPR$1;
			EXPR$1 = (struct $7ASTNODE*)0ull;
		}
		label$129:;
	}
	goto label$127;
	label$128:;
	{
		if( ISSEP$1 != 0ll ) goto label$132;
		{
			ERRREPORT( 16ll, 0ll, (uint8*)0ull );
		}
		label$132:;
		label$131:;
	}
	label$127:;
	if( (*(int64*)((uint8*)DSTEXPR$1 + 8ll) & 512ll) == 0ll ) goto label$134;
	{
		ERRREPORT( 118ll, 0ll, (uint8*)0ull );
	}
	label$134:;
	label$133:;
	{
		int64 TMP$86$2;
		TMP$86$2 = *(int64*)((uint8*)DSTEXPR$1 + 8ll) & 511ll;
		if( TMP$86$2 == 16ll ) goto label$137;
		label$138:;
		if( TMP$86$2 == 17ll ) goto label$137;
		label$139:;
		if( TMP$86$2 != 3ll ) goto label$136;
		label$137:;
		{
			int64 vr$38 = RTLFILELINEINPUT( ISFILE$1, EXPR$1, DSTEXPR$1, ADDQUESTION$1, ADDNEWLINE$1 );
			fb$result$1 = vr$38;
		}
		goto label$135;
		label$136:;
		if( TMP$86$2 != 6ll ) goto label$140;
		label$141:;
		{
			int64 vr$40 = RTLFILELINEINPUTWSTR( ISFILE$1, EXPR$1, DSTEXPR$1, ADDQUESTION$1, ADDNEWLINE$1 );
			fb$result$1 = vr$40;
		}
		goto label$135;
		label$140:;
		{
			ASTDELTREE( DSTEXPR$1 );
			ERRREPORT( 24ll, 0ll, (uint8*)0ull );
			fb$result$1 = -1ll;
			goto label$112;
		}
		label$142:;
		label$135:;
	}
	label$112:;
	return fb$result$1;
}

int64 CINPUTSTMT( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$143:;
	struct $7ASTNODE* FILESTREXPR$1;
	__builtin_memset( &FILESTREXPR$1, 0, 8ll );
	struct $7ASTNODE* DSTEXPR$1;
	__builtin_memset( &DSTEXPR$1, 0, 8ll );
	int64 ISLAST$1;
	__builtin_memset( &ISLAST$1, 0, 8ll );
	int64 ISFILE$1;
	__builtin_memset( &ISFILE$1, 0, 8ll );
	int64 ADDNEWLINE$1;
	__builtin_memset( &ADDNEWLINE$1, 0, 8ll );
	int64 ADDQUESTION$1;
	__builtin_memset( &ADDQUESTION$1, 0, 8ll );
	fb$result$1 = 0ll;
	LEXSKIPTOKEN( 0ll );
	int64 vr$7 = HMATCH( 59ll );
	ADDNEWLINE$1 = (int64)-(vr$7 == 0ll);
	ADDQUESTION$1 = 0ll;
	int64 vr$9 = HMATCH( 35ll );
	if( vr$9 == 0ll ) goto label$146;
	{
		ISFILE$1 = -1ll;
		struct $7ASTNODE* vr$11 = HMATCHEXPR( 7ll );
		FILESTREXPR$1 = vr$11;
		if( FILESTREXPR$1 != (struct $7ASTNODE*)0ull ) goto label$148;
		{
			goto label$144;
		}
		label$148:;
		label$147:;
	}
	goto label$145;
	label$146:;
	{
		ISFILE$1 = 0ll;
		int64 vr$13 = LEXGETCLASS( 0ll );
		if( vr$13 != 4ll ) goto label$150;
		{
			uint8* vr$17 = LEXGETTEXT(  );
			struct $8FBSYMBOL* vr$18 = SYMBALLOCSTRCONST( vr$17, *(int64*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 4128ll) );
			struct $7ASTNODE* vr$19 = ASTNEWVAR( vr$18, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			FILESTREXPR$1 = vr$19;
			LEXSKIPTOKEN( 0ll );
		}
		goto label$149;
		label$150:;
		{
			FILESTREXPR$1 = (struct $7ASTNODE*)0ull;
			ADDQUESTION$1 = -1ll;
		}
		label$149:;
	}
	label$145:;
	if( (ISFILE$1 | (int64)-(FILESTREXPR$1 != (struct $7ASTNODE*)0ull)) == 0ll ) goto label$152;
	{
		int64 vr$23 = HMATCH( 44ll );
		if( vr$23 != 0ll ) goto label$154;
		{
			int64 vr$25 = HMATCH( 59ll );
			if( vr$25 != 0ll ) goto label$156;
			{
				ERRREPORT( 16ll, 0ll, (uint8*)0ull );
			}
			goto label$155;
			label$156:;
			{
				ADDQUESTION$1 = -1ll;
			}
			label$155:;
		}
		label$154:;
		label$153:;
	}
	label$152:;
	label$151:;
	int64 vr$27 = RTLFILEINPUT( ISFILE$1, FILESTREXPR$1, ADDQUESTION$1, ADDNEWLINE$1 );
	if( vr$27 != 0ll ) goto label$158;
	{
		goto label$144;
	}
	label$158:;
	label$157:;
	label$159:;
	{
		struct $7ASTNODE* vr$29 = CVARORDEREF( 0ll );
		DSTEXPR$1 = vr$29;
		if( DSTEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$163;
		{
			ERRREPORT( 14ll, 0ll, (uint8*)0ull );
			DSTEXPR$1 = (struct $7ASTNODE*)0ull;
			HSKIPUNTIL( 44ll, 0ll, 0ll, 0ll );
		}
		label$163:;
		label$162:;
		int64 vr$31 = HMATCH( 44ll );
		if( vr$31 == 0ll ) goto label$165;
		{
			ISLAST$1 = 0ll;
		}
		goto label$164;
		label$165:;
		{
			ISLAST$1 = -1ll;
		}
		label$164:;
		if( DSTEXPR$1 == (struct $7ASTNODE*)0ull ) goto label$167;
		{
			if( (*(int64*)((uint8*)DSTEXPR$1 + 8ll) & 512ll) == 0ll ) goto label$169;
			{
				ERRREPORT( 118ll, 0ll, (uint8*)0ull );
			}
			label$169:;
			label$168:;
			int64 vr$37 = RTLFILEINPUTGET( DSTEXPR$1 );
			if( vr$37 != 0ll ) goto label$171;
			{
				goto label$144;
			}
			label$171:;
			label$170:;
		}
		label$167:;
		label$166:;
	}
	label$161:;
	if( ISLAST$1 == 0ll ) goto label$159;
	label$160:;
	fb$result$1 = -1ll;
	label$144:;
	return fb$result$1;
}

int64 CFILESTMT( $8FB_TOKEN TK$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$490:;
	struct $7ASTNODE* FILENUM$1;
	__builtin_memset( &FILENUM$1, 0, 8ll );
	struct $7ASTNODE* EXPR1$1;
	__builtin_memset( &EXPR1$1, 0, 8ll );
	struct $7ASTNODE* EXPR2$1;
	__builtin_memset( &EXPR2$1, 0, 8ll );
	int64 ISLOCK$1;
	__builtin_memset( &ISLOCK$1, 0, 8ll );
	fb$result$1 = 0ll;
	{
		uint64 TMP$113$2;
		TMP$113$2 = (uint64)TK$1;
		goto label$493;
		label$494:;
		{
			LEXSKIPTOKEN( 0ll );
			struct $7ASTNODE* vr$5 = HFILEOPEN( 0ll );
			fb$result$1 = (int64)-(vr$5 != (struct $7ASTNODE*)0ull);
		}
		goto label$492;
		label$495:;
		{
			struct $7ASTNODE* vr$7 = HFILECLOSE( 0ll );
			fb$result$1 = (int64)-(vr$7 != (struct $7ASTNODE*)0ull);
		}
		goto label$492;
		label$496:;
		{
			LEXSKIPTOKEN( 0ll );
			HMATCH( 35ll );
			struct $7ASTNODE* vr$9 = HMATCHEXPR( 7ll );
			FILENUM$1 = vr$9;
			if( FILENUM$1 != (struct $7ASTNODE*)0ull ) goto label$498;
			{
				goto label$491;
			}
			label$498:;
			label$497:;
			int64 vr$11 = LEXGETTOKEN( 0ll );
			if( vr$11 == 44ll ) goto label$500;
			{
				ERRREPORT( 16ll, 0ll, (uint8*)0ull );
			}
			goto label$499;
			label$500:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$499:;
			struct $7ASTNODE* vr$13 = HMATCHEXPR( 7ll );
			EXPR1$1 = vr$13;
			if( EXPR1$1 != (struct $7ASTNODE*)0ull ) goto label$502;
			{
				goto label$491;
			}
			label$502:;
			label$501:;
			int64 vr$15 = RTLFILESEEK( FILENUM$1, EXPR1$1 );
			fb$result$1 = vr$15;
		}
		goto label$492;
		label$503:;
		{
			int64 vr$16 = LEXGETLOOKAHEAD( 1ll, 0ll );
			if( vr$16 == 35ll ) goto label$505;
			{
				goto label$491;
			}
			label$505:;
			label$504:;
			LEXSKIPTOKEN( 0ll );
			struct $7ASTNODE* vr$18 = HFILEPUT( 0ll );
			fb$result$1 = (int64)-(vr$18 != (struct $7ASTNODE*)0ull);
		}
		goto label$492;
		label$506:;
		{
			int64 vr$20 = LEXGETLOOKAHEAD( 1ll, 0ll );
			if( vr$20 == 35ll ) goto label$508;
			{
				goto label$491;
			}
			label$508:;
			label$507:;
			LEXSKIPTOKEN( 0ll );
			struct $7ASTNODE* vr$22 = HFILEGET( 0ll );
			fb$result$1 = (int64)-(vr$22 != (struct $7ASTNODE*)0ull);
		}
		goto label$492;
		label$509:;
		{
			if( TK$1 != 473ll ) goto label$511;
			{
				ISLOCK$1 = -1ll;
			}
			goto label$510;
			label$511:;
			{
				ISLOCK$1 = 0ll;
			}
			label$510:;
			LEXSKIPTOKEN( 0ll );
			HMATCH( 35ll );
			struct $7ASTNODE* vr$25 = HMATCHEXPR( 7ll );
			FILENUM$1 = vr$25;
			if( FILENUM$1 != (struct $7ASTNODE*)0ull ) goto label$513;
			{
				goto label$491;
			}
			label$513:;
			label$512:;
			int64 vr$27 = LEXGETTOKEN( 0ll );
			if( vr$27 == 44ll ) goto label$515;
			{
				ERRREPORT( 16ll, 0ll, (uint8*)0ull );
			}
			goto label$514;
			label$515:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$514:;
			struct $7ASTNODE* vr$29 = HMATCHEXPR( 7ll );
			EXPR1$1 = vr$29;
			if( EXPR1$1 != (struct $7ASTNODE*)0ull ) goto label$517;
			{
				goto label$491;
			}
			label$517:;
			label$516:;
			int64 vr$31 = HMATCH( 284ll );
			if( vr$31 == 0ll ) goto label$519;
			{
				struct $7ASTNODE* vr$33 = HMATCHEXPR( 7ll );
				EXPR2$1 = vr$33;
				if( EXPR2$1 != (struct $7ASTNODE*)0ull ) goto label$521;
				{
					goto label$491;
				}
				label$521:;
				label$520:;
			}
			goto label$518;
			label$519:;
			{
				struct $7ASTNODE* vr$35 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				EXPR2$1 = vr$35;
			}
			label$518:;
			int64 vr$36 = RTLFILELOCK( ISLOCK$1, FILENUM$1, EXPR1$1, EXPR2$1 );
			fb$result$1 = vr$36;
		}
		goto label$492;
		label$522:;
		{
			LEXSKIPTOKEN( 0ll );
			struct $7ASTNODE* vr$37 = HFILERENAME( 0ll );
			fb$result$1 = (int64)-(vr$37 != (struct $7ASTNODE*)0ull);
		}
		goto label$492;
		label$493:;
		static const void* tmp$114[21ll] = {
			&&label$494,
			&&label$495,
			&&label$496,
			&&label$503,
			&&label$506,
			&&label$492,
			&&label$492,
			&&label$509,
			&&label$492,
			&&label$492,
			&&label$492,
			&&label$492,
			&&label$492,
			&&label$492,
			&&label$492,
			&&label$522,
			&&label$492,
			&&label$492,
			&&label$492,
			&&label$492,
			&&label$509,
		};
		if( TMP$113$2 < 466ll ) goto label$492;
		if( TMP$113$2 > 486ll ) goto label$492;
		goto *tmp$114[TMP$113$2 - 466ll];
		label$492:;
	}
	label$491:;
	return fb$result$1;
}

struct $7ASTNODE* CFILEFUNCT( $8FB_TOKEN TK$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$523:;
	struct $7ASTNODE* FILENUM$1;
	__builtin_memset( &FILENUM$1, 0, 8ll );
	struct $7ASTNODE* EXPR$1;
	__builtin_memset( &EXPR$1, 0, 8ll );
	fb$result$1 = (struct $7ASTNODE*)0ull;
	{
		uint64 TMP$115$2;
		TMP$115$2 = (uint64)TK$1;
		goto label$526;
		label$527:;
		{
			LEXSKIPTOKEN( 0ll );
			int64 vr$3 = LEXGETTOKEN( 0ll );
			if( vr$3 == 40ll ) goto label$529;
			{
				ERRREPORT( 6ll, 0ll, (uint8*)0ull );
			}
			goto label$528;
			label$529:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$528:;
			struct $7ASTNODE* vr$5 = HMATCHEXPR( 7ll );
			FILENUM$1 = vr$5;
			if( FILENUM$1 != (struct $7ASTNODE*)0ull ) goto label$531;
			{
				goto label$524;
			}
			label$531:;
			label$530:;
			int64 vr$7 = LEXGETTOKEN( 0ll );
			if( vr$7 == 41ll ) goto label$533;
			{
				ERRREPORT( 7ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
			}
			goto label$532;
			label$533:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$532:;
			struct $7ASTNODE* vr$9 = RTLFILETELL( FILENUM$1 );
			fb$result$1 = vr$9;
		}
		goto label$525;
		label$534:;
		{
			LEXSKIPTOKEN( 0ll );
			int64 vr$10 = LEXGETTOKEN( 0ll );
			if( vr$10 == 40ll ) goto label$536;
			{
				ERRREPORT( 6ll, 0ll, (uint8*)0ull );
			}
			goto label$535;
			label$536:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$535:;
			struct $7ASTNODE* vr$12 = HMATCHEXPR( 7ll );
			EXPR$1 = vr$12;
			if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$538;
			{
				goto label$524;
			}
			label$538:;
			label$537:;
			int64 vr$14 = HMATCH( 44ll );
			if( vr$14 == 0ll ) goto label$540;
			{
				HMATCH( 35ll );
				struct $7ASTNODE* vr$16 = HMATCHEXPR( 7ll );
				FILENUM$1 = vr$16;
				if( FILENUM$1 != (struct $7ASTNODE*)0ull ) goto label$542;
				{
					goto label$524;
				}
				label$542:;
				label$541:;
			}
			goto label$539;
			label$540:;
			{
				struct $7ASTNODE* vr$18 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				FILENUM$1 = vr$18;
			}
			label$539:;
			int64 vr$19 = LEXGETTOKEN( 0ll );
			if( vr$19 == 41ll ) goto label$544;
			{
				ERRREPORT( 7ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
			}
			goto label$543;
			label$544:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$543:;
			struct $7ASTNODE* vr$21 = RTLFILESTRINPUT( EXPR$1, FILENUM$1, TK$1 );
			fb$result$1 = vr$21;
		}
		goto label$525;
		label$545:;
		{
			LEXSKIPTOKEN( 0ll );
			struct $7ASTNODE* vr$22 = HFILEOPEN( -1ll );
			fb$result$1 = vr$22;
		}
		goto label$525;
		label$546:;
		{
			struct $7ASTNODE* vr$23 = HFILECLOSE( -1ll );
			fb$result$1 = vr$23;
		}
		goto label$525;
		label$547:;
		{
			LEXSKIPTOKEN( 0ll );
			int64 vr$24 = LEXGETTOKEN( 0ll );
			if( vr$24 == 40ll ) goto label$549;
			{
				ERRREPORT( 6ll, 0ll, (uint8*)0ull );
			}
			goto label$548;
			label$549:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$548:;
			struct $7ASTNODE* vr$26 = HFILEPUT( -1ll );
			fb$result$1 = vr$26;
			int64 vr$27 = LEXGETTOKEN( 0ll );
			if( vr$27 == 41ll ) goto label$551;
			{
				ERRREPORT( 7ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
			}
			goto label$550;
			label$551:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$550:;
		}
		goto label$525;
		label$552:;
		{
			LEXSKIPTOKEN( 0ll );
			int64 vr$29 = LEXGETTOKEN( 0ll );
			if( vr$29 == 40ll ) goto label$554;
			{
				ERRREPORT( 6ll, 0ll, (uint8*)0ull );
			}
			goto label$553;
			label$554:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$553:;
			struct $7ASTNODE* vr$31 = HFILEGET( -1ll );
			fb$result$1 = vr$31;
			int64 vr$32 = LEXGETTOKEN( 0ll );
			if( vr$32 == 41ll ) goto label$556;
			{
				ERRREPORT( 7ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
			}
			goto label$555;
			label$556:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$555:;
		}
		goto label$525;
		label$557:;
		{
			LEXSKIPTOKEN( 0ll );
			struct $7ASTNODE* vr$34 = HFILERENAME( -1ll );
			fb$result$1 = vr$34;
		}
		goto label$525;
		label$526:;
		static const void* tmp$116[16ll] = {
			&&label$545,
			&&label$546,
			&&label$527,
			&&label$547,
			&&label$552,
			&&label$525,
			&&label$525,
			&&label$525,
			&&label$534,
			&&label$534,
			&&label$525,
			&&label$525,
			&&label$525,
			&&label$525,
			&&label$525,
			&&label$557,
		};
		if( TMP$115$2 < 466ll ) goto label$525;
		if( TMP$115$2 > 481ll ) goto label$525;
		goto *tmp$116[TMP$115$2 - 466ll];
		label$525:;
	}
	label$524:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__parserzquirkzfile( void )
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

static struct $7ASTNODE* HFILECLOSE( int64 ISFUNC$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$172:;
	int64 CNT$1;
	__builtin_memset( &CNT$1, 0, 8ll );
	struct $7ASTNODE* FILENUM$1;
	__builtin_memset( &FILENUM$1, 0, 8ll );
	struct $7ASTNODE* PROC$1;
	__builtin_memset( &PROC$1, 0, 8ll );
	fb$result$1 = (struct $7ASTNODE*)0ull;
	LEXSKIPTOKEN( 0ll );
	if( ISFUNC$1 == 0ll ) goto label$175;
	{
		int64 vr$5 = LEXGETTOKEN( 0ll );
		if( vr$5 == 40ll ) goto label$177;
		{
			ERRREPORT( 6ll, 0ll, (uint8*)0ull );
		}
		goto label$176;
		label$177:;
		{
			LEXSKIPTOKEN( 0ll );
		}
		label$176:;
	}
	label$175:;
	label$174:;
	CNT$1 = 0ll;
	label$178:;
	{
		HMATCH( 35ll );
		struct $7ASTNODE* vr$7 = CEXPRESSION(  );
		FILENUM$1 = vr$7;
		if( FILENUM$1 != (struct $7ASTNODE*)0ull ) goto label$182;
		{
			if( CNT$1 != 0ll ) goto label$184;
			{
			}
			goto label$183;
			label$184:;
			{
				ERRREPORT( 9ll, 0ll, (uint8*)0ull );
				struct $7ASTNODE* vr$10 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				FILENUM$1 = vr$10;
			}
			label$183:;
		}
		label$182:;
		label$181:;
		struct $7ASTNODE* vr$11 = RTLFILECLOSE( FILENUM$1, ISFUNC$1 );
		PROC$1 = vr$11;
		if( PROC$1 != (struct $7ASTNODE*)0ull ) goto label$186;
		{
			goto label$173;
		}
		label$186:;
		label$185:;
		if( ISFUNC$1 == 0ll ) goto label$188;
		{
			goto label$179;
		}
		label$188:;
		label$187:;
		CNT$1 = CNT$1 + 1ll;
	}
	label$180:;
	int64 vr$15 = HMATCH( 44ll );
	if( vr$15 != 0ll ) goto label$178;
	label$179:;
	if( ISFUNC$1 == 0ll ) goto label$190;
	{
		int64 vr$18 = LEXGETTOKEN( 0ll );
		if( vr$18 == 41ll ) goto label$192;
		{
			ERRREPORT( 7ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
		}
		goto label$191;
		label$192:;
		{
			LEXSKIPTOKEN( 0ll );
		}
		label$191:;
	}
	label$190:;
	label$189:;
	fb$result$1 = PROC$1;
	label$173:;
	return fb$result$1;
}

static struct $7ASTNODE* HFILEPUT( int64 ISFUNC$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$193:;
	struct $7ASTNODE* FILEEXPR$1;
	__builtin_memset( &FILEEXPR$1, 0, 8ll );
	struct $7ASTNODE* POSEXPR$1;
	__builtin_memset( &POSEXPR$1, 0, 8ll );
	struct $7ASTNODE* SRCEXPR$1;
	__builtin_memset( &SRCEXPR$1, 0, 8ll );
	struct $7ASTNODE* ELMEXPR$1;
	__builtin_memset( &ELMEXPR$1, 0, 8ll );
	int64 ISARRAY$1;
	__builtin_memset( &ISARRAY$1, 0, 8ll );
	struct $8FBSYMBOL* S$1;
	__builtin_memset( &S$1, 0, 8ll );
	fb$result$1 = (struct $7ASTNODE*)0ull;
	int64 vr$7 = LEXGETTOKEN( 0ll );
	if( vr$7 != 35ll ) goto label$196;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$196:;
	label$195:;
	struct $7ASTNODE* vr$9 = HMATCHEXPR( 7ll );
	FILEEXPR$1 = vr$9;
	if( FILEEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$198;
	{
		goto label$194;
	}
	label$198:;
	label$197:;
	int64 vr$11 = LEXGETTOKEN( 0ll );
	if( vr$11 == 44ll ) goto label$200;
	{
		ERRREPORT( 16ll, 0ll, (uint8*)0ull );
	}
	goto label$199;
	label$200:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$199:;
	struct $7ASTNODE* vr$13 = CEXPRESSION(  );
	POSEXPR$1 = vr$13;
	if( POSEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$202;
	{
		POSEXPR$1 = (struct $7ASTNODE*)0ull;
	}
	label$202:;
	label$201:;
	int64 vr$15 = LEXGETTOKEN( 0ll );
	if( vr$15 == 44ll ) goto label$204;
	{
		ERRREPORT( 16ll, 0ll, (uint8*)0ull );
	}
	goto label$203;
	label$204:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$203:;
	struct $7ASTNODE* vr$17 = HMATCHEXPR( 7ll );
	SRCEXPR$1 = vr$17;
	if( SRCEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$206;
	{
		goto label$194;
	}
	label$206:;
	label$205:;
	if( ((int64)-(*(int64*)SRCEXPR$1 == 16ll) | (int64)-(*(int64*)SRCEXPR$1 == 23ll)) == 0ll ) goto label$208;
	{
		ASTDELTREE( SRCEXPR$1 );
		ERRREPORT( 14ll, -1ll, (uint8*)0ull );
		if( ISFUNC$1 == 0ll ) goto label$210;
		{
			HSKIPUNTIL( 41ll, 0ll, 0ll, 0ll );
		}
		goto label$209;
		label$210:;
		{
			HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
		}
		label$209:;
		struct $7ASTNODE* vr$26 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		fb$result$1 = vr$26;
		goto label$194;
	}
	label$208:;
	label$207:;
	ISARRAY$1 = 0ll;
	int64 vr$27 = LEXGETTOKEN( 0ll );
	if( vr$27 != 40ll ) goto label$212;
	{
		int64 vr$29 = LEXGETLOOKAHEAD( 1ll, 0ll );
		if( vr$29 != 41ll ) goto label$214;
		{
			S$1 = *(struct $8FBSYMBOL**)((uint8*)SRCEXPR$1 + 24ll);
			if( S$1 == (struct $8FBSYMBOL*)0ull ) goto label$216;
			{
				int64 vr$33 = SYMBISARRAY( S$1 );
				ISARRAY$1 = vr$33;
				if( ISARRAY$1 == 0ll ) goto label$218;
				{
					if( (*(int64*)((uint8*)S$1 + 48ll) & 511ll) != 16ll ) goto label$220;
					{
						ASTDELTREE( SRCEXPR$1 );
						ERRREPORT( 24ll, -1ll, (uint8*)0ull );
						if( ISFUNC$1 == 0ll ) goto label$222;
						{
							HSKIPUNTIL( 41ll, 0ll, 0ll, 0ll );
						}
						goto label$221;
						label$222:;
						{
							HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
						}
						label$221:;
						struct $7ASTNODE* vr$39 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
						fb$result$1 = vr$39;
						goto label$194;
					}
					label$220:;
					label$219:;
					LEXSKIPTOKEN( 0ll );
					LEXSKIPTOKEN( 0ll );
				}
				label$218:;
				label$217:;
			}
			label$216:;
			label$215:;
		}
		label$214:;
		label$213:;
	}
	label$212:;
	label$211:;
	int64 vr$40 = HMATCH( 44ll );
	if( vr$40 == 0ll ) goto label$224;
	{
		if( ISARRAY$1 == 0ll ) goto label$226;
		{
			ERRREPORT( 276ll, 0ll, (uint8*)0ull );
			struct $7ASTNODE* vr$43 = CEXPRESSION(  );
			ELMEXPR$1 = vr$43;
			if( ELMEXPR$1 == (struct $7ASTNODE*)0ull ) goto label$228;
			{
				ASTDELTREE( ELMEXPR$1 );
				ELMEXPR$1 = (struct $7ASTNODE*)0ull;
			}
			label$228:;
			label$227:;
		}
		goto label$225;
		label$226:;
		{
			{
				int64 TMP$87$4;
				TMP$87$4 = *(int64*)((uint8*)SRCEXPR$1 + 8ll) & 511ll;
				if( TMP$87$4 == 16ll ) goto label$231;
				label$232:;
				if( TMP$87$4 != 17ll ) goto label$230;
				label$231:;
				{
					ERRREPORT( 276ll, 0ll, (uint8*)0ull );
					struct $7ASTNODE* vr$49 = CEXPRESSION(  );
					ELMEXPR$1 = vr$49;
					if( ELMEXPR$1 == (struct $7ASTNODE*)0ull ) goto label$234;
					{
						ASTDELTREE( ELMEXPR$1 );
						ELMEXPR$1 = (struct $7ASTNODE*)0ull;
					}
					label$234:;
					label$233:;
				}
				goto label$229;
				label$230:;
				{
					struct $7ASTNODE* vr$51 = CEXPRESSION(  );
					ELMEXPR$1 = vr$51;
					if( ELMEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$237;
					{
						ERRREPORT( 9ll, 0ll, (uint8*)0ull );
					}
					label$237:;
					label$236:;
				}
				label$235:;
				label$229:;
			}
		}
		label$225:;
		if( ELMEXPR$1 == (struct $7ASTNODE*)0ull ) goto label$239;
		{
			if( ((*(int64*)((uint8*)ELMEXPR$1 + 8ll) & 511ll) & 480ll) == 0ll ) goto label$241;
			{
				ERRREPORTWARN( 2ll, (uint8*)0ull, 1ll );
			}
			label$241:;
			label$240:;
			if( (*(int64*)((uint8*)ELMEXPR$1 + 8ll) & 511ll) == 7ll ) goto label$243;
			{
				struct $7ASTNODE* vr$61 = ASTNEWCONV( 7ll, (struct $8FBSYMBOL*)0ull, ELMEXPR$1, 0ll, (int64*)0ull );
				ELMEXPR$1 = vr$61;
				if( ELMEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$245;
				{
					ERRREPORT( 17ll, -1ll, (uint8*)0ull );
				}
				label$245:;
				label$244:;
			}
			label$243:;
			label$242:;
		}
		label$239:;
		label$238:;
	}
	goto label$223;
	label$224:;
	{
		ELMEXPR$1 = (struct $7ASTNODE*)0ull;
	}
	label$223:;
	if( ISARRAY$1 != 0ll ) goto label$247;
	{
		struct $7ASTNODE* vr$64 = RTLFILEPUT( FILEEXPR$1, POSEXPR$1, SRCEXPR$1, ELMEXPR$1, ISFUNC$1 );
		fb$result$1 = vr$64;
	}
	goto label$246;
	label$247:;
	{
		struct $7ASTNODE* vr$65 = RTLFILEPUTARRAY( FILEEXPR$1, POSEXPR$1, SRCEXPR$1, ISFUNC$1 );
		fb$result$1 = vr$65;
	}
	label$246:;
	label$194:;
	return fb$result$1;
}

static struct $7ASTNODE* HFILEGET( int64 ISFUNC$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$248:;
	struct $7ASTNODE* FILEEXPR$1;
	__builtin_memset( &FILEEXPR$1, 0, 8ll );
	struct $7ASTNODE* POSEXPR$1;
	__builtin_memset( &POSEXPR$1, 0, 8ll );
	struct $7ASTNODE* DSTEXPR$1;
	__builtin_memset( &DSTEXPR$1, 0, 8ll );
	struct $7ASTNODE* ELMEXPR$1;
	__builtin_memset( &ELMEXPR$1, 0, 8ll );
	struct $7ASTNODE* IOBEXPR$1;
	__builtin_memset( &IOBEXPR$1, 0, 8ll );
	int64 ISARRAY$1;
	__builtin_memset( &ISARRAY$1, 0, 8ll );
	struct $8FBSYMBOL* S$1;
	__builtin_memset( &S$1, 0, 8ll );
	fb$result$1 = (struct $7ASTNODE*)0ull;
	int64 vr$8 = LEXGETTOKEN( 0ll );
	if( vr$8 != 35ll ) goto label$251;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$251:;
	label$250:;
	struct $7ASTNODE* vr$10 = HMATCHEXPR( 7ll );
	FILEEXPR$1 = vr$10;
	if( FILEEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$253;
	{
		goto label$249;
	}
	label$253:;
	label$252:;
	int64 vr$12 = LEXGETTOKEN( 0ll );
	if( vr$12 == 44ll ) goto label$255;
	{
		ERRREPORT( 16ll, 0ll, (uint8*)0ull );
	}
	goto label$254;
	label$255:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$254:;
	struct $7ASTNODE* vr$14 = CEXPRESSION(  );
	POSEXPR$1 = vr$14;
	int64 vr$15 = LEXGETTOKEN( 0ll );
	if( vr$15 == 44ll ) goto label$257;
	{
		ERRREPORT( 16ll, 0ll, (uint8*)0ull );
	}
	goto label$256;
	label$257:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$256:;
	struct $7ASTNODE* vr$17 = CVARORDEREF( 0ll );
	DSTEXPR$1 = vr$17;
	if( DSTEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$259;
	{
		ERRREPORT( 14ll, 0ll, (uint8*)0ull );
		if( ISFUNC$1 == 0ll ) goto label$261;
		{
			HSKIPUNTIL( 41ll, 0ll, 0ll, 0ll );
		}
		goto label$260;
		label$261:;
		{
			HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
		}
		label$260:;
		struct $7ASTNODE* vr$20 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		fb$result$1 = vr$20;
		goto label$249;
	}
	label$259:;
	label$258:;
	ISARRAY$1 = 0ll;
	int64 vr$21 = LEXGETTOKEN( 0ll );
	if( vr$21 != 40ll ) goto label$263;
	{
		int64 vr$23 = LEXGETLOOKAHEAD( 1ll, 0ll );
		if( vr$23 != 41ll ) goto label$265;
		{
			S$1 = *(struct $8FBSYMBOL**)((uint8*)DSTEXPR$1 + 24ll);
			if( S$1 == (struct $8FBSYMBOL*)0ull ) goto label$267;
			{
				int64 vr$27 = SYMBISARRAY( S$1 );
				ISARRAY$1 = vr$27;
				if( ISARRAY$1 == 0ll ) goto label$269;
				{
					if( (*(int64*)((uint8*)S$1 + 48ll) & 511ll) != 16ll ) goto label$271;
					{
						ERRREPORT( 24ll, -1ll, (uint8*)0ull );
						if( ISFUNC$1 == 0ll ) goto label$273;
						{
							HSKIPUNTIL( 41ll, 0ll, 0ll, 0ll );
						}
						goto label$272;
						label$273:;
						{
							HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
						}
						label$272:;
						struct $7ASTNODE* vr$33 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
						fb$result$1 = vr$33;
						goto label$249;
					}
					label$271:;
					label$270:;
					LEXSKIPTOKEN( 0ll );
					LEXSKIPTOKEN( 0ll );
				}
				label$269:;
				label$268:;
			}
			label$267:;
			label$266:;
		}
		label$265:;
		label$264:;
	}
	label$263:;
	label$262:;
	int64 vr$34 = HMATCH( 44ll );
	if( vr$34 == 0ll ) goto label$275;
	{
		struct $7ASTNODE* vr$36 = CEXPRESSION(  );
		ELMEXPR$1 = vr$36;
		if( ISARRAY$1 == 0ll ) goto label$277;
		{
			if( ELMEXPR$1 == (struct $7ASTNODE*)0ull ) goto label$279;
			{
				ERRREPORT( 276ll, 0ll, (uint8*)0ull );
				ASTDELTREE( ELMEXPR$1 );
				ELMEXPR$1 = (struct $7ASTNODE*)0ull;
			}
			label$279:;
			label$278:;
		}
		goto label$276;
		label$277:;
		{
			if( ELMEXPR$1 == (struct $7ASTNODE*)0ull ) goto label$281;
			{
				{
					int64 TMP$88$5;
					TMP$88$5 = *(int64*)((uint8*)DSTEXPR$1 + 8ll) & 511ll;
					if( TMP$88$5 == 16ll ) goto label$284;
					label$285:;
					if( TMP$88$5 != 17ll ) goto label$283;
					label$284:;
					{
						ERRREPORT( 276ll, 0ll, (uint8*)0ull );
						ASTDELTREE( ELMEXPR$1 );
						ELMEXPR$1 = (struct $7ASTNODE*)0ull;
					}
					goto label$282;
					label$283:;
					{
						if( ((*(int64*)((uint8*)ELMEXPR$1 + 8ll) & 511ll) & 480ll) == 0ll ) goto label$288;
						{
							ERRREPORTWARN( 2ll, (uint8*)0ull, 1ll );
						}
						label$288:;
						label$287:;
						if( (*(int64*)((uint8*)ELMEXPR$1 + 8ll) & 511ll) == 7ll ) goto label$290;
						{
							struct $7ASTNODE* vr$51 = ASTNEWCONV( 7ll, (struct $8FBSYMBOL*)0ull, ELMEXPR$1, 0ll, (int64*)0ull );
							ELMEXPR$1 = vr$51;
							if( ELMEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$292;
							{
								ERRREPORT( 17ll, -1ll, (uint8*)0ull );
							}
							label$292:;
							label$291:;
						}
						label$290:;
						label$289:;
					}
					label$286:;
					label$282:;
				}
			}
			label$281:;
			label$280:;
		}
		label$276:;
	}
	goto label$274;
	label$275:;
	{
		ELMEXPR$1 = (struct $7ASTNODE*)0ull;
	}
	label$274:;
	int64 vr$53 = HMATCH( 44ll );
	if( vr$53 == 0ll ) goto label$294;
	{
		struct $7ASTNODE* vr$55 = CVARORDEREF( 0ll );
		IOBEXPR$1 = vr$55;
		if( IOBEXPR$1 == (struct $7ASTNODE*)0ull ) goto label$296;
		{
			S$1 = *(struct $8FBSYMBOL**)((uint8*)IOBEXPR$1 + 24ll);
			if( S$1 == (struct $8FBSYMBOL*)0ull ) goto label$298;
			{
				int64 TMP$89$4;
				int64 TMP$90$4;
				int64 DTYPE$4;
				DTYPE$4 = *(int64*)((uint8*)S$1 + 48ll) & 511ll;
				if( (DTYPE$4 & 480ll) == 0ll ) goto label$299;
				TMP$89$4 = 22ll;
				goto label$558;
				label$299:;
				TMP$89$4 = DTYPE$4 & 31ll;
				label$558:;
				if( (DTYPE$4 & 480ll) == 0ll ) goto label$300;
				TMP$90$4 = 22ll;
				goto label$559;
				label$300:;
				TMP$90$4 = DTYPE$4 & 31ll;
				label$559:;
				if( (((int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$89$4 * 56ll)) + 8ll) != *(int64*)((uint8*)&ENV$ + 472ll)) | (int64)-(*(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$90$4 * 56ll)) != 0ll)) | (int64)-((DTYPE$4 & 480ll) != 0ll)) == 0ll ) goto label$302;
				{
					ERRREPORT( 24ll, 0ll, (uint8*)0ull );
				}
				label$302:;
				label$301:;
			}
			label$298:;
			label$297:;
		}
		goto label$295;
		label$296:;
		{
			ERRREPORT( 14ll, 0ll, (uint8*)0ull );
		}
		label$295:;
	}
	goto label$293;
	label$294:;
	{
		IOBEXPR$1 = (struct $7ASTNODE*)0ull;
	}
	label$293:;
	if( (*(int64*)((uint8*)DSTEXPR$1 + 8ll) & 512ll) == 0ll ) goto label$304;
	{
		ERRREPORT( 118ll, 0ll, (uint8*)0ull );
	}
	label$304:;
	label$303:;
	if( IOBEXPR$1 == (struct $7ASTNODE*)0ull ) goto label$306;
	{
		if( (*(int64*)((uint8*)IOBEXPR$1 + 8ll) & 512ll) == 0ll ) goto label$308;
		{
			ERRREPORT( 118ll, 0ll, (uint8*)0ull );
		}
		label$308:;
		label$307:;
	}
	label$306:;
	label$305:;
	if( ISARRAY$1 != 0ll ) goto label$310;
	{
		struct $7ASTNODE* vr$84 = RTLFILEGET( FILEEXPR$1, POSEXPR$1, DSTEXPR$1, ELMEXPR$1, IOBEXPR$1, ISFUNC$1 );
		fb$result$1 = vr$84;
	}
	goto label$309;
	label$310:;
	{
		struct $7ASTNODE* vr$85 = RTLFILEGETARRAY( FILEEXPR$1, POSEXPR$1, DSTEXPR$1, IOBEXPR$1, ISFUNC$1 );
		fb$result$1 = vr$85;
	}
	label$309:;
	label$249:;
	return fb$result$1;
}

static struct $7ASTNODE* HFILEOPEN( int64 ISFUNC$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$311:;
	struct $7ASTNODE* FILENUM$1;
	__builtin_memset( &FILENUM$1, 0, 8ll );
	struct $7ASTNODE* FILENAME$1;
	__builtin_memset( &FILENAME$1, 0, 8ll );
	struct $7ASTNODE* FMODE$1;
	__builtin_memset( &FMODE$1, 0, 8ll );
	struct $7ASTNODE* FACCESS$1;
	__builtin_memset( &FACCESS$1, 0, 8ll );
	struct $7ASTNODE* FLOCK$1;
	__builtin_memset( &FLOCK$1, 0, 8ll );
	struct $7ASTNODE* FLEN$1;
	__builtin_memset( &FLEN$1, 0, 8ll );
	struct $7ASTNODE* FENCODING$1;
	__builtin_memset( &FENCODING$1, 0, 8ll );
	int64 SHORT_FORM$1;
	__builtin_memset( &SHORT_FORM$1, 0, 8ll );
	int64 FILE_MODE$1;
	__builtin_memset( &FILE_MODE$1, 0, 8ll );
	int64 ACCESS_MODE$1;
	__builtin_memset( &ACCESS_MODE$1, 0, 8ll );
	int64 LOCK_MODE$1;
	__builtin_memset( &LOCK_MODE$1, 0, 8ll );
	int64 RECORD_LEN$1;
	__builtin_memset( &RECORD_LEN$1, 0, 8ll );
	$10FBOPENKIND OPEN_KIND$1;
	__builtin_memset( &OPEN_KIND$1, 0, 8ll );
	fb$result$1 = (struct $7ASTNODE*)0ull;
	OPEN_KIND$1 = 0ll;
	SHORT_FORM$1 = 0ll;
	if( (int64)-(*(int64*)((uint8*)&ENV$ + 272ll) == 3ll) != 0ll ) goto label$314;
	{
		{
			FBSTRING TMP$91$3;
			uint8* vr$16 = LEXGETTEXT(  );
			FBSTRING* vr$17 = fb_StrAllocTempDescZ( vr$16 );
			FBSTRING* vr$18 = fb_StrUcase2( vr$17, 0 );
			FBSTRING* vr$20 = fb_StrInit( (void*)&TMP$91$3, -1ll, (void*)vr$18, -1ll, 0 );
			int32 vr$22 = fb_StrCompare( (void*)&TMP$91$3, -1ll, (void*)"CONS", 5ll );
			if( (int64)vr$22 != 0ll ) goto label$316;
			label$317:;
			{
				if( *(struct $10FBSYMCHAIN**)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 4136ll) != (struct $10FBSYMCHAIN*)0ull ) goto label$319;
				{
					LEXSKIPTOKEN( 0ll );
					OPEN_KIND$1 = 1ll;
				}
				label$319:;
				label$318:;
			}
			goto label$315;
			label$316:;
			int32 vr$29 = fb_StrCompare( (void*)&TMP$91$3, -1ll, (void*)"ERR", 4ll );
			if( (int64)vr$29 != 0ll ) goto label$320;
			label$321:;
			{
				LEXSKIPTOKEN( 0ll );
				OPEN_KIND$1 = 2ll;
			}
			goto label$315;
			label$320:;
			int32 vr$33 = fb_StrCompare( (void*)&TMP$91$3, -1ll, (void*)"PIPE", 5ll );
			if( (int64)vr$33 != 0ll ) goto label$322;
			label$323:;
			{
				if( *(struct $10FBSYMCHAIN**)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 4136ll) != (struct $10FBSYMCHAIN*)0ull ) goto label$325;
				{
					LEXSKIPTOKEN( 0ll );
					OPEN_KIND$1 = 3ll;
				}
				label$325:;
				label$324:;
			}
			goto label$315;
			label$322:;
			int32 vr$40 = fb_StrCompare( (void*)&TMP$91$3, -1ll, (void*)"SCRN", 5ll );
			if( (int64)vr$40 != 0ll ) goto label$326;
			label$327:;
			{
				if( *(struct $10FBSYMCHAIN**)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 4136ll) != (struct $10FBSYMCHAIN*)0ull ) goto label$329;
				{
					LEXSKIPTOKEN( 0ll );
					OPEN_KIND$1 = 4ll;
				}
				label$329:;
				label$328:;
			}
			goto label$315;
			label$326:;
			int32 vr$47 = fb_StrCompare( (void*)&TMP$91$3, -1ll, (void*)"LPT", 4ll );
			if( (int64)vr$47 != 0ll ) goto label$330;
			label$331:;
			{
				if( *(struct $10FBSYMCHAIN**)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 4136ll) != (struct $10FBSYMCHAIN*)0ull ) goto label$333;
				{
					LEXSKIPTOKEN( 0ll );
					OPEN_KIND$1 = 5ll;
				}
				label$333:;
				label$332:;
			}
			goto label$315;
			label$330:;
			int32 vr$54 = fb_StrCompare( (void*)&TMP$91$3, -1ll, (void*)"COM", 4ll );
			if( (int64)vr$54 != 0ll ) goto label$334;
			label$335:;
			{
				if( *(struct $10FBSYMCHAIN**)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 4136ll) != (struct $10FBSYMCHAIN*)0ull ) goto label$337;
				{
					LEXSKIPTOKEN( 0ll );
					OPEN_KIND$1 = 6ll;
				}
				label$337:;
				label$336:;
			}
			label$334:;
			label$315:;
			fb_StrDelete( &TMP$91$3 );
		}
	}
	label$314:;
	label$313:;
	if( ISFUNC$1 == 0ll ) goto label$339;
	{
		int64 vr$62 = LEXGETTOKEN( 0ll );
		if( vr$62 == 40ll ) goto label$341;
		{
			ERRREPORT( 6ll, 0ll, (uint8*)0ull );
		}
		goto label$340;
		label$341:;
		{
			LEXSKIPTOKEN( 0ll );
		}
		label$340:;
	}
	label$339:;
	label$338:;
	if( *(int64*)((uint8*)&ENV$ + 272ll) != 3ll ) goto label$343;
	{
		OPEN_KIND$1 = 7ll;
	}
	label$343:;
	label$342:;
	{
		uint64 TMP$98$2;
		TMP$98$2 = (uint64)OPEN_KIND$1;
		goto label$345;
		label$346:;
		{
			struct $7ASTNODE* vr$65 = HMATCHEXPR( 16ll );
			FILENAME$1 = vr$65;
			if( FILENAME$1 != (struct $7ASTNODE*)0ull ) goto label$348;
			{
				goto label$312;
			}
			label$348:;
			label$347:;
			if( ISFUNC$1 == 0ll ) goto label$350;
			{
				HMATCH( 44ll );
			}
			label$350:;
			label$349:;
			{
				if( OPEN_KIND$1 == 0ll ) goto label$353;
				label$354:;
				if( OPEN_KIND$1 != 7ll ) goto label$352;
				label$353:;
				{
					if( ISFUNC$1 == 0ll ) goto label$356;
					{
						{
							int64 TMP$99$7;
							int64 vr$71 = LEXGETTOKEN( 0ll );
							TMP$99$7 = vr$71;
							if( TMP$99$7 == 281ll ) goto label$359;
							label$360:;
							if( TMP$99$7 == 471ll ) goto label$359;
							label$361:;
							if( TMP$99$7 != 375ll ) goto label$358;
							label$359:;
							{
							}
							goto label$357;
							label$358:;
							{
								SHORT_FORM$1 = -1ll;
							}
							label$362:;
							label$357:;
						}
					}
					goto label$355;
					label$356:;
					{
						int64 vr$75 = HMATCH( 44ll );
						if( vr$75 == 0ll ) goto label$364;
						{
							SHORT_FORM$1 = -1ll;
						}
						label$364:;
						label$363:;
					}
					label$355:;
				}
				label$352:;
				label$351:;
			}
		}
		goto label$344;
		label$365:;
		{
			struct $7ASTNODE* vr$77 = ASTNEWCONSTSTR( (uint8*)"" );
			FILENAME$1 = vr$77;
		}
		goto label$344;
		label$345:;
		static const void* tmp$117[8ll] = {
			&&label$346,
			&&label$365,
			&&label$365,
			&&label$346,
			&&label$365,
			&&label$346,
			&&label$346,
			&&label$346,
		};
		if( TMP$98$2 > 7ll ) goto label$365;
		goto *tmp$117[TMP$98$2 - 0ll];
		label$344:;
	}
	if( SHORT_FORM$1 == 0ll ) goto label$367;
	{
		FMODE$1 = FILENAME$1;
		FILENAME$1 = (struct $7ASTNODE*)0ull;
		HMATCH( 35ll );
		struct $7ASTNODE* vr$79 = HMATCHEXPR( 7ll );
		FILENUM$1 = vr$79;
		if( FILENUM$1 != (struct $7ASTNODE*)0ull ) goto label$369;
		{
			goto label$312;
		}
		label$369:;
		label$368:;
		int64 vr$81 = LEXGETTOKEN( 0ll );
		if( vr$81 == 44ll ) goto label$371;
		{
			ERRREPORT( 16ll, 0ll, (uint8*)0ull );
		}
		goto label$370;
		label$371:;
		{
			LEXSKIPTOKEN( 0ll );
		}
		label$370:;
		struct $7ASTNODE* vr$83 = HMATCHEXPR( 16ll );
		FILENAME$1 = vr$83;
		if( FILENAME$1 != (struct $7ASTNODE*)0ull ) goto label$373;
		{
			goto label$312;
		}
		label$373:;
		label$372:;
		int64 vr$85 = HMATCH( 44ll );
		if( vr$85 == 0ll ) goto label$375;
		{
			int64 vr$87 = LEXGETTOKEN( 0ll );
			if( vr$87 == 44ll ) goto label$377;
			{
				struct $7ASTNODE* vr$89 = HMATCHEXPR( 7ll );
				FLEN$1 = vr$89;
				if( FLEN$1 != (struct $7ASTNODE*)0ull ) goto label$379;
				{
					goto label$312;
				}
				label$379:;
				label$378:;
			}
			label$377:;
			label$376:;
			int64 vr$91 = HMATCH( 44ll );
			if( vr$91 == 0ll ) goto label$381;
			{
				int64 vr$93 = LEXGETTOKEN( 0ll );
				if( vr$93 == 44ll ) goto label$383;
				{
					struct $7ASTNODE* vr$95 = HMATCHEXPR( 16ll );
					FACCESS$1 = vr$95;
					if( FACCESS$1 != (struct $7ASTNODE*)0ull ) goto label$385;
					{
						goto label$312;
					}
					label$385:;
					label$384:;
				}
				label$383:;
				label$382:;
				int64 vr$97 = HMATCH( 44ll );
				if( vr$97 == 0ll ) goto label$387;
				{
					struct $7ASTNODE* vr$99 = HMATCHEXPR( 16ll );
					FLOCK$1 = vr$99;
					if( FLOCK$1 != (struct $7ASTNODE*)0ull ) goto label$389;
					{
						goto label$312;
					}
					label$389:;
					label$388:;
				}
				label$387:;
				label$386:;
			}
			label$381:;
			label$380:;
		}
		label$375:;
		label$374:;
		if( FLEN$1 != (struct $7ASTNODE*)0ull ) goto label$391;
		{
			struct $7ASTNODE* vr$102 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
			FLEN$1 = vr$102;
		}
		label$391:;
		label$390:;
		if( FACCESS$1 != (struct $7ASTNODE*)0ull ) goto label$393;
		{
			struct $7ASTNODE* vr$104 = ASTNEWCONSTSTR( (uint8*)"" );
			FACCESS$1 = vr$104;
		}
		label$393:;
		label$392:;
		if( FLOCK$1 != (struct $7ASTNODE*)0ull ) goto label$395;
		{
			struct $7ASTNODE* vr$106 = ASTNEWCONSTSTR( (uint8*)"" );
			FLOCK$1 = vr$106;
		}
		label$395:;
		label$394:;
		if( ISFUNC$1 == 0ll ) goto label$397;
		{
			int64 vr$108 = LEXGETTOKEN( 0ll );
			if( vr$108 == 41ll ) goto label$399;
			{
				ERRREPORT( 7ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
			}
			goto label$398;
			label$399:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$398:;
		}
		label$397:;
		label$396:;
		struct $7ASTNODE* vr$110 = RTLFILEOPENSHORT( FILENAME$1, FMODE$1, FACCESS$1, FLOCK$1, FILENUM$1, FLEN$1, ISFUNC$1 );
		fb$result$1 = vr$110;
		goto label$312;
	}
	label$367:;
	label$366:;
	int64 vr$111 = HMATCH( 281ll );
	if( vr$111 == 0ll ) goto label$401;
	{
		{
			FBSTRING TMP$100$3;
			uint8* vr$113 = LEXGETTEXT(  );
			FBSTRING* vr$114 = fb_StrAllocTempDescZ( vr$113 );
			FBSTRING* vr$115 = fb_StrUcase2( vr$114, 0 );
			FBSTRING* vr$117 = fb_StrInit( (void*)&TMP$100$3, -1ll, (void*)vr$115, -1ll, 0 );
			int32 vr$119 = fb_StrCompare( (void*)&TMP$100$3, -1ll, (void*)"INPUT", 6ll );
			if( (int64)vr$119 != 0ll ) goto label$403;
			label$404:;
			{
				FILE_MODE$1 = 2ll;
			}
			goto label$402;
			label$403:;
			int32 vr$123 = fb_StrCompare( (void*)&TMP$100$3, -1ll, (void*)"OUTPUT", 7ll );
			if( (int64)vr$123 != 0ll ) goto label$405;
			label$406:;
			{
				FILE_MODE$1 = 3ll;
			}
			goto label$402;
			label$405:;
			int32 vr$127 = fb_StrCompare( (void*)&TMP$100$3, -1ll, (void*)"BINARY", 7ll );
			if( (int64)vr$127 != 0ll ) goto label$407;
			label$408:;
			{
				FILE_MODE$1 = 0ll;
			}
			goto label$402;
			label$407:;
			int32 vr$131 = fb_StrCompare( (void*)&TMP$100$3, -1ll, (void*)"RANDOM", 7ll );
			if( (int64)vr$131 != 0ll ) goto label$409;
			label$410:;
			{
				FILE_MODE$1 = 1ll;
			}
			goto label$402;
			label$409:;
			int32 vr$135 = fb_StrCompare( (void*)&TMP$100$3, -1ll, (void*)"APPEND", 7ll );
			if( (int64)vr$135 != 0ll ) goto label$411;
			label$412:;
			{
				FILE_MODE$1 = 4ll;
			}
			goto label$402;
			label$411:;
			{
				fb_StrDelete( &TMP$100$3 );
				goto label$312;
			}
			label$413:;
			label$402:;
			fb_StrDelete( &TMP$100$3 );
		}
		LEXSKIPTOKEN( 0ll );
	}
	goto label$400;
	label$401:;
	{
		FILE_MODE$1 = 1ll;
	}
	label$400:;
	struct $7ASTNODE* vr$140 = ASTNEWCONSTI( FILE_MODE$1, 7ll, (struct $8FBSYMBOL*)0ull );
	FMODE$1 = vr$140;
	if( ISFUNC$1 == 0ll ) goto label$415;
	{
		HMATCH( 44ll );
	}
	label$415:;
	label$414:;
	FENCODING$1 = (struct $7ASTNODE*)0ull;
	if( (int64)-(*(int64*)((uint8*)&ENV$ + 272ll) == 3ll) != 0ll ) goto label$417;
	{
		{
			if( FILE_MODE$1 == 2ll ) goto label$420;
			label$421:;
			if( FILE_MODE$1 == 3ll ) goto label$420;
			label$422:;
			if( FILE_MODE$1 != 4ll ) goto label$419;
			label$420:;
			{
				int64 vr$147 = HMATCH( 480ll );
				if( vr$147 == 0ll ) goto label$424;
				{
					struct $7ASTNODE* vr$149 = HMATCHEXPR( 16ll );
					FENCODING$1 = vr$149;
					if( FENCODING$1 != (struct $7ASTNODE*)0ull ) goto label$426;
					{
						goto label$312;
					}
					label$426:;
					label$425:;
					if( ISFUNC$1 == 0ll ) goto label$428;
					{
						HMATCH( 44ll );
					}
					label$428:;
					label$427:;
				}
				label$424:;
				label$423:;
			}
			label$419:;
			label$418:;
		}
	}
	label$417:;
	label$416:;
	int64 vr$152 = HMATCHTEXT( (uint8*)"ACCESS" );
	if( vr$152 == 0ll ) goto label$430;
	{
		{
			FBSTRING TMP$107$3;
			uint8* vr$154 = LEXGETTEXT(  );
			FBSTRING* vr$155 = fb_StrAllocTempDescZ( vr$154 );
			FBSTRING* vr$156 = fb_StrUcase2( vr$155, 0 );
			FBSTRING* vr$158 = fb_StrInit( (void*)&TMP$107$3, -1ll, (void*)vr$156, -1ll, 0 );
			int32 vr$160 = fb_StrCompare( (void*)&TMP$107$3, -1ll, (void*)"WRITE", 6ll );
			if( (int64)vr$160 != 0ll ) goto label$432;
			label$433:;
			{
				LEXSKIPTOKEN( 0ll );
				ACCESS_MODE$1 = 2ll;
			}
			goto label$431;
			label$432:;
			int32 vr$164 = fb_StrCompare( (void*)&TMP$107$3, -1ll, (void*)"READ", 5ll );
			if( (int64)vr$164 != 0ll ) goto label$434;
			label$435:;
			{
				LEXSKIPTOKEN( 0ll );
				int64 vr$167 = HMATCH( 472ll );
				if( vr$167 == 0ll ) goto label$437;
				{
					ACCESS_MODE$1 = 3ll;
				}
				goto label$436;
				label$437:;
				{
					ACCESS_MODE$1 = 1ll;
				}
				label$436:;
			}
			label$434:;
			label$431:;
			fb_StrDelete( &TMP$107$3 );
		}
	}
	goto label$429;
	label$430:;
	{
		ACCESS_MODE$1 = 0ll;
	}
	label$429:;
	struct $7ASTNODE* vr$170 = ASTNEWCONSTI( ACCESS_MODE$1, 7ll, (struct $8FBSYMBOL*)0ull );
	FACCESS$1 = vr$170;
	if( ISFUNC$1 == 0ll ) goto label$439;
	{
		HMATCH( 44ll );
	}
	label$439:;
	label$438:;
	int64 vr$172 = HMATCH( 312ll );
	if( vr$172 == 0ll ) goto label$441;
	{
		LOCK_MODE$1 = 0ll;
	}
	goto label$440;
	label$441:;
	int64 vr$174 = HMATCHTEXT( (uint8*)"LOCK" );
	if( vr$174 == 0ll ) goto label$442;
	{
		{
			FBSTRING TMP$111$3;
			uint8* vr$176 = LEXGETTEXT(  );
			FBSTRING* vr$177 = fb_StrAllocTempDescZ( vr$176 );
			FBSTRING* vr$178 = fb_StrUcase2( vr$177, 0 );
			FBSTRING* vr$180 = fb_StrInit( (void*)&TMP$111$3, -1ll, (void*)vr$178, -1ll, 0 );
			int32 vr$182 = fb_StrCompare( (void*)&TMP$111$3, -1ll, (void*)"WRITE", 6ll );
			if( (int64)vr$182 != 0ll ) goto label$444;
			label$445:;
			{
				LEXSKIPTOKEN( 0ll );
				LOCK_MODE$1 = 2ll;
			}
			goto label$443;
			label$444:;
			int32 vr$186 = fb_StrCompare( (void*)&TMP$111$3, -1ll, (void*)"READ", 5ll );
			if( (int64)vr$186 != 0ll ) goto label$446;
			label$447:;
			{
				LEXSKIPTOKEN( 0ll );
				int64 vr$189 = HMATCH( 472ll );
				if( vr$189 == 0ll ) goto label$449;
				{
					LOCK_MODE$1 = 3ll;
				}
				goto label$448;
				label$449:;
				{
					LOCK_MODE$1 = 1ll;
				}
				label$448:;
			}
			label$446:;
			label$443:;
			fb_StrDelete( &TMP$111$3 );
		}
	}
	goto label$440;
	label$442:;
	{
		LOCK_MODE$1 = 0ll;
	}
	label$440:;
	struct $7ASTNODE* vr$192 = ASTNEWCONSTI( LOCK_MODE$1, 7ll, (struct $8FBSYMBOL*)0ull );
	FLOCK$1 = vr$192;
	if( ISFUNC$1 == 0ll ) goto label$451;
	{
		HMATCH( 44ll );
	}
	label$451:;
	label$450:;
	int64 vr$194 = HMATCH( 375ll );
	if( vr$194 != 0ll ) goto label$453;
	{
		ERRREPORT( 5ll, 0ll, (uint8*)0ull );
	}
	label$453:;
	label$452:;
	HMATCH( 35ll );
	struct $7ASTNODE* vr$196 = HMATCHEXPR( 7ll );
	FILENUM$1 = vr$196;
	if( FILENUM$1 != (struct $7ASTNODE*)0ull ) goto label$455;
	{
		goto label$312;
	}
	label$455:;
	label$454:;
	if( ISFUNC$1 == 0ll ) goto label$457;
	{
		HMATCH( 44ll );
	}
	label$457:;
	label$456:;
	int64 vr$199 = HMATCHTEXT( (uint8*)"LEN" );
	if( vr$199 == 0ll ) goto label$459;
	{
		int64 vr$201 = CASSIGNTOKEN(  );
		if( vr$201 != 0ll ) goto label$461;
		{
			ERRREPORT( 10ll, 0ll, (uint8*)0ull );
			struct $7ASTNODE* vr$203 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
			FLEN$1 = vr$203;
		}
		goto label$460;
		label$461:;
		{
			struct $7ASTNODE* vr$204 = HMATCHEXPR( 7ll );
			FLEN$1 = vr$204;
			if( FLEN$1 != (struct $7ASTNODE*)0ull ) goto label$463;
			{
				goto label$312;
			}
			label$463:;
			label$462:;
		}
		label$460:;
	}
	goto label$458;
	label$459:;
	{
		struct $7ASTNODE* vr$206 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		FLEN$1 = vr$206;
	}
	label$458:;
	if( ISFUNC$1 == 0ll ) goto label$465;
	{
		int64 vr$208 = LEXGETTOKEN( 0ll );
		if( vr$208 == 41ll ) goto label$467;
		{
			ERRREPORT( 7ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
		}
		goto label$466;
		label$467:;
		{
			LEXSKIPTOKEN( 0ll );
		}
		label$466:;
	}
	label$465:;
	label$464:;
	struct $7ASTNODE* vr$210 = RTLFILEOPEN( FILENAME$1, FMODE$1, FACCESS$1, FLOCK$1, FILENUM$1, FLEN$1, FENCODING$1, ISFUNC$1, OPEN_KIND$1 );
	fb$result$1 = vr$210;
	label$312:;
	return fb$result$1;
}

static struct $7ASTNODE* HFILERENAME( int64 ISFUNC$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$468:;
	struct $7ASTNODE* FILENAME_OLD$1;
	__builtin_memset( &FILENAME_OLD$1, 0, 8ll );
	struct $7ASTNODE* FILENAME_NEW$1;
	__builtin_memset( &FILENAME_NEW$1, 0, 8ll );
	int64 MATCHPRNT$1;
	__builtin_memset( &MATCHPRNT$1, 0, 8ll );
	fb$result$1 = (struct $7ASTNODE*)0ull;
	if( ISFUNC$1 == 0ll ) goto label$471;
	{
		int64 vr$5 = LEXGETTOKEN( 0ll );
		if( vr$5 == 40ll ) goto label$473;
		{
			ERRREPORT( 6ll, 0ll, (uint8*)0ull );
		}
		goto label$472;
		label$473:;
		{
			LEXSKIPTOKEN( 0ll );
		}
		label$472:;
	}
	goto label$470;
	label$471:;
	{
		int64 vr$7 = HMATCH( 40ll );
		MATCHPRNT$1 = vr$7;
	}
	label$470:;
	struct $7ASTNODE* vr$8 = HMATCHEXPR( 16ll );
	FILENAME_OLD$1 = vr$8;
	if( FILENAME_OLD$1 != (struct $7ASTNODE*)0ull ) goto label$475;
	{
		goto label$469;
	}
	label$475:;
	label$474:;
	if( ISFUNC$1 == 0ll ) goto label$477;
	{
		int64 vr$11 = LEXGETTOKEN( 0ll );
		if( vr$11 == 44ll ) goto label$479;
		{
			ERRREPORT( 16ll, 0ll, (uint8*)0ull );
		}
		goto label$478;
		label$479:;
		{
			LEXSKIPTOKEN( 0ll );
		}
		label$478:;
	}
	goto label$476;
	label$477:;
	{
		int64 vr$13 = HMATCH( 375ll );
		if( vr$13 != 0ll ) goto label$481;
		{
			int64 vr$15 = HMATCH( 44ll );
			if( vr$15 != 0ll ) goto label$483;
			{
				ERRREPORT( 5ll, 0ll, (uint8*)0ull );
			}
			label$483:;
			label$482:;
		}
		label$481:;
		label$480:;
	}
	label$476:;
	struct $7ASTNODE* vr$17 = HMATCHEXPR( 16ll );
	FILENAME_NEW$1 = vr$17;
	if( FILENAME_NEW$1 != (struct $7ASTNODE*)0ull ) goto label$485;
	{
		goto label$469;
	}
	label$485:;
	label$484:;
	if( (ISFUNC$1 | MATCHPRNT$1) == 0ll ) goto label$487;
	{
		int64 vr$21 = LEXGETTOKEN( 0ll );
		if( vr$21 == 41ll ) goto label$489;
		{
			ERRREPORT( 7ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
		}
		goto label$488;
		label$489:;
		{
			LEXSKIPTOKEN( 0ll );
		}
		label$488:;
	}
	label$487:;
	label$486:;
	struct $7ASTNODE* vr$23 = RTLFILERENAME( FILENAME_NEW$1, FILENAME_OLD$1, ISFUNC$1 );
	fb$result$1 = vr$23;
	label$469:;
	return fb$result$1;
}

// Total compilation time: 0.05520001915283501 seconds.
