// Compilation of FreeBASIC-1.01.0-source/src/compiler/parser-identifier.bas started at 16:30:12 on 02-28-2015

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
typedef int64 $8FB_IDOPT;
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
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__parserzidentifier( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRREPORT( int64, int64, uint8* );
void ERRREPORTUNDEF( int64, uint8* );
struct $10FBSYMCHAIN* SYMBLOOKUPAT( struct $8FBSYMBOL*, uint8*, int64, int64 );
int64 SYMBCHECKACCESS( struct $8FBSYMBOL* );
typedef int64 $8LEXCHECK;
int64 LEXGETTOKEN( $8LEXCHECK );
int64 LEXGETCLASS( $8LEXCHECK );
uint8* LEXGETTEXT( void );
void LEXSKIPTOKEN( $8LEXCHECK );
int64 LEXGETLOOKAHEAD( int64, $8LEXCHECK );
struct $8FBSYMBOL* CPARENTID( $8FB_IDOPT );
static void HSKIPSYMBOL( void );
static struct $10FBSYMCHAIN* HGLOBALID( $8FB_IDOPT );
static int64 HISSTRUCTALLOWED( struct $8FBSYMBOL*, $8FB_IDOPT );
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

struct $10FBSYMCHAIN* CIDENTIFIER( struct $8FBSYMBOL** BASE_PARENT$1, $8FB_IDOPT OPTIONS$1 )
{
	struct $10FBSYMCHAIN* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$46:;
	struct $10FBSYMCHAIN* CHAIN_$1;
	struct $8FBSYMBOL* PARENT$1;
	*BASE_PARENT$1 = (struct $8FBSYMBOL*)0ull;
	CHAIN_$1 = *(struct $10FBSYMCHAIN**)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 4136ll);
	if( (int64)-((*(int64*)((uint8*)&ENV$ + 1152ll) & 4ll) != 0ll) != 0ll ) goto label$49;
	{
		fb$result$1 = CHAIN_$1;
		goto label$47;
	}
	label$49:;
	label$48:;
	if( CHAIN_$1 != (struct $10FBSYMCHAIN*)0ull ) goto label$51;
	{
		int64 vr$8 = LEXGETTOKEN( 0ll );
		if( vr$8 == 46ll ) goto label$53;
		{
			fb$result$1 = (struct $10FBSYMCHAIN*)0ull;
			goto label$47;
		}
		label$53:;
		label$52:;
		struct $10FBSYMCHAIN* vr$10 = HGLOBALID( OPTIONS$1 );
		CHAIN_$1 = vr$10;
		if( CHAIN_$1 != (struct $10FBSYMCHAIN*)0ull ) goto label$55;
		{
			if( (OPTIONS$1 & 2ll) == 0ll ) goto label$57;
			{
				uint8* vr$14 = LEXGETTEXT(  );
				ERRREPORTUNDEF( 8ll, vr$14 );
			}
			goto label$56;
			label$57:;
			{
				HSKIPSYMBOL(  );
			}
			label$56:;
			fb$result$1 = (struct $10FBSYMCHAIN*)0ull;
			goto label$47;
		}
		label$55:;
		label$54:;
	}
	label$51:;
	label$50:;
	PARENT$1 = (struct $8FBSYMBOL*)0ull;
	label$58:;
	{
		struct $8FBSYMBOL* SYM$2;
		SYM$2 = *(struct $8FBSYMBOL**)CHAIN_$1;
		{
			uint64 TMP$87$3;
			TMP$87$3 = *(uint64*)SYM$2;
			goto label$62;
			label$63:;
			{
			}
			goto label$61;
			label$64:;
			{
				int64 vr$17 = HISSTRUCTALLOWED( SYM$2, OPTIONS$1 );
				if( vr$17 != 0ll ) goto label$66;
				{
					goto label$59;
				}
				label$66:;
				label$65:;
			}
			goto label$61;
			label$67:;
			{
				{
					int64 TMP$88$5;
					TMP$88$5 = *(int64*)((uint8*)SYM$2 + 48ll) & 511ll;
					if( TMP$88$5 != 18ll ) goto label$69;
					label$70:;
					{
						SYM$2 = *(struct $8FBSYMBOL**)((uint8*)SYM$2 + 56ll);
						int64 vr$23 = HISSTRUCTALLOWED( SYM$2, OPTIONS$1 );
						if( vr$23 != 0ll ) goto label$72;
						{
							goto label$59;
						}
						label$72:;
						label$71:;
					}
					goto label$68;
					label$69:;
					if( TMP$88$5 != 9ll ) goto label$73;
					label$74:;
					{
						SYM$2 = *(struct $8FBSYMBOL**)((uint8*)SYM$2 + 56ll);
					}
					goto label$68;
					label$73:;
					{
						goto label$59;
					}
					label$75:;
					label$68:;
				}
			}
			goto label$61;
			label$76:;
			{
				goto label$59;
			}
			goto label$61;
			label$62:;
			static const void* tmp$92[6ll] = {
				&&label$63,
				&&label$63,
				&&label$64,
				&&label$63,
				&&label$76,
				&&label$67,
			};
			if( TMP$87$3 < 8ll ) goto label$76;
			if( TMP$87$3 > 13ll ) goto label$76;
			goto *tmp$92[TMP$87$3 - 8ll];
			label$61:;
		}
		if( PARENT$1 == (struct $8FBSYMBOL*)0ull ) goto label$78;
		{
			int64 vr$28 = SYMBCHECKACCESS( SYM$2 );
			if( vr$28 != 0ll ) goto label$80;
			{
				if( (OPTIONS$1 & 2ll) == 0ll ) goto label$82;
				{
					ERRREPORT( 201ll, 0ll, (uint8*)0ull );
				}
				label$82:;
				label$81:;
			}
			label$80:;
			label$79:;
		}
		label$78:;
		label$77:;
		int64 vr$32 = LEXGETLOOKAHEAD( 1ll, 64ll );
		if( vr$32 == 46ll ) goto label$84;
		{
			if( *(int64*)SYM$2 != 8ll ) goto label$86;
			{
				if( (OPTIONS$1 & 2ll) == 0ll ) goto label$88;
				{
					LEXSKIPTOKEN( 64ll );
					ERRREPORT( 119ll, 0ll, (uint8*)0ull );
				}
				label$88:;
				label$87:;
			}
			label$86:;
			label$85:;
			goto label$59;
		}
		label$84:;
		label$83:;
		if( *(int64*)SYM$2 != 9ll ) goto label$90;
		{
			if( (int64)-(*(int64*)((uint8*)SYM$2 + 128ll) != 0ll) != 0ll ) goto label$92;
			{
				if( (OPTIONS$1 & 2ll) == 0ll ) goto label$94;
				{
					ERRREPORT( 256ll, 0ll, (uint8*)0ull );
				}
				label$94:;
				label$93:;
				goto label$59;
			}
			label$92:;
			label$91:;
		}
		label$90:;
		label$89:;
		LEXSKIPTOKEN( 64ll );
		LEXSKIPTOKEN( 64ll );
		PARENT$1 = SYM$2;
		if( *BASE_PARENT$1 != (struct $8FBSYMBOL*)0ull ) goto label$96;
		{
			*BASE_PARENT$1 = PARENT$1;
		}
		label$96:;
		label$95:;
		{
			uint64 TMP$89$3;
			int64 vr$48 = LEXGETCLASS( 0ll );
			TMP$89$3 = (uint64)vr$48;
			goto label$98;
			label$99:;
			{
			}
			goto label$97;
			label$100:;
			{
				if( (OPTIONS$1 & 8ll) == 0ll ) goto label$102;
				{
					goto label$59;
				}
				label$102:;
				label$101:;
				if( (OPTIONS$1 & 2ll) == 0ll ) goto label$104;
				{
					ERRREPORT( 14ll, 0ll, (uint8*)0ull );
				}
				label$104:;
				label$103:;
				fb$result$1 = (struct $10FBSYMCHAIN*)0ull;
				goto label$47;
			}
			goto label$97;
			label$105:;
			{
				int64 vr$53 = LEXGETTOKEN( 0ll );
				if( vr$53 != 91ll ) goto label$107;
				{
					if( (OPTIONS$1 & 8ll) == 0ll ) goto label$109;
					{
						goto label$59;
					}
					label$109:;
					label$108:;
				}
				label$107:;
				label$106:;
				if( (OPTIONS$1 & 2ll) == 0ll ) goto label$111;
				{
					ERRREPORT( 14ll, 0ll, (uint8*)0ull );
				}
				label$111:;
				label$110:;
				fb$result$1 = (struct $10FBSYMCHAIN*)0ull;
				goto label$47;
			}
			goto label$97;
			label$98:;
			static const void* tmp$93[6ll] = {
				&&label$99,
				&&label$100,
				&&label$99,
				&&label$105,
				&&label$105,
				&&label$100,
			};
			if( TMP$89$3 > 5ll ) goto label$105;
			goto *tmp$93[TMP$89$3 - 0ll];
			label$97:;
		}
		uint8* vr$59 = LEXGETTEXT(  );
		struct $10FBSYMCHAIN* vr$60 = SYMBLOOKUPAT( PARENT$1, vr$59, 0ll, -1ll );
		CHAIN_$1 = vr$60;
		if( CHAIN_$1 != (struct $10FBSYMCHAIN*)0ull ) goto label$113;
		{
			if( (OPTIONS$1 & 2ll) == 0ll ) goto label$115;
			{
				uint8* vr$64 = LEXGETTEXT(  );
				ERRREPORTUNDEF( 8ll, vr$64 );
			}
			goto label$114;
			label$115:;
			{
				HSKIPSYMBOL(  );
			}
			label$114:;
			fb$result$1 = (struct $10FBSYMCHAIN*)0ull;
			goto label$47;
		}
		label$113:;
		label$112:;
		if( (OPTIONS$1 & 32ll) == 0ll ) goto label$117;
		{
			{
				$12FB_SYMBCLASS TMP$90$4;
				TMP$90$4 = *($12FB_SYMBCLASS*)PARENT$1;
				if( TMP$90$4 == 10ll ) goto label$120;
				label$121:;
				if( TMP$90$4 != 11ll ) goto label$119;
				label$120:;
				{
					struct $10FBSYMCHAIN* ITER$5;
					ITER$5 = CHAIN_$1;
					label$122:;
					{
						struct $8FBSYMBOL* SYM$6;
						SYM$6 = *(struct $8FBSYMBOL**)ITER$5;
						label$125:;
						{
							if( *(int64*)SYM$6 != 12ll ) goto label$129;
							{
								ERRREPORT( 208ll, 0ll, (uint8*)0ull );
								goto label$123;
							}
							label$129:;
							label$128:;
							SYM$6 = *(struct $8FBSYMBOL**)((uint8*)SYM$6 + 264ll);
						}
						label$127:;
						if( SYM$6 != (struct $8FBSYMBOL*)0ull ) goto label$125;
						label$126:;
						ITER$5 = *(struct $10FBSYMCHAIN**)((uint8*)ITER$5 + 8ll);
					}
					label$124:;
					if( ITER$5 != (struct $10FBSYMCHAIN*)0ull ) goto label$122;
					label$123:;
				}
				label$119:;
				label$118:;
			}
		}
		label$117:;
		label$116:;
	}
	label$60:;
	goto label$58;
	label$59:;
	if( (OPTIONS$1 & 2ll) == 0ll ) goto label$131;
	{
		if( (OPTIONS$1 & 4ll) == 0ll ) goto label$133;
		{
			if( *BASE_PARENT$1 == (struct $8FBSYMBOL*)0ull ) goto label$135;
			{
				if( *(struct $8FBSYMBOL**)*(struct $10FBSYMBOLTB**)((uint8*)*BASE_PARENT$1 + 272ll) == *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll) ) goto label$137;
				{
					ERRREPORT( 130ll, 0ll, (uint8*)0ull );
					fb$result$1 = (struct $10FBSYMCHAIN*)0ull;
					goto label$47;
				}
				label$137:;
				label$136:;
			}
			label$135:;
			label$134:;
		}
		goto label$132;
		label$133:;
		{
			if( CHAIN_$1 == (struct $10FBSYMCHAIN*)0ull ) goto label$139;
			{
				if( *(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$1 + 8ll) == (struct $10FBSYMCHAIN*)0ull ) goto label$141;
				{
					if( *(int64*)((uint8*)CHAIN_$1 + 16ll) == 0ll ) goto label$143;
					{
						int64 TMP$91$6;
						struct $8FBSYMBOL* NS$6;
						NS$6 = *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)*(struct $8FBSYMBOL**)CHAIN_$1 + 232ll);
						struct $8FBSYMBOL* NS2$6;
						NS2$6 = *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)*(struct $8FBSYMBOL**)*(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$1 + 8ll) + 232ll);
						if( PARENT$1 == (struct $8FBSYMBOL*)0ull ) goto label$144;
						TMP$91$6 = (int64)-(NS$6 != PARENT$1);
						goto label$147;
						label$144:;
						TMP$91$6 = (int64)-(NS$6 != NS2$6);
						label$147:;
						if( TMP$91$6 == 0ll ) goto label$146;
						{
							ERRREPORT( 254ll, 0ll, (uint8*)0ull );
						}
						label$146:;
						label$145:;
					}
					label$143:;
					label$142:;
				}
				label$141:;
				label$140:;
			}
			label$139:;
			label$138:;
		}
		label$132:;
	}
	label$131:;
	label$130:;
	fb$result$1 = CHAIN_$1;
	label$47:;
	return fb$result$1;
}

struct $8FBSYMBOL* CPARENTID( $8FB_IDOPT OPTIONS$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$148:;
	struct $10FBSYMCHAIN* CHAIN_$1;
	struct $8FBSYMBOL* SYM$1;
	struct $8FBSYMBOL* PARENT$1;
	struct $8FBSYMBOL* BASE_PARENT$1;
	if( (int64)-((*(int64*)((uint8*)&ENV$ + 1152ll) & 4ll) != 0ll) != 0ll ) goto label$151;
	{
		fb$result$1 = (struct $8FBSYMBOL*)0ull;
		goto label$149;
	}
	label$151:;
	label$150:;
	CHAIN_$1 = *(struct $10FBSYMCHAIN**)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 4136ll);
	if( CHAIN_$1 != (struct $10FBSYMCHAIN*)0ull ) goto label$153;
	{
		int64 vr$7 = LEXGETTOKEN( 0ll );
		if( vr$7 != 46ll ) goto label$155;
		{
			struct $10FBSYMCHAIN* vr$9 = HGLOBALID( 2ll );
			CHAIN_$1 = vr$9;
		}
		label$155:;
		label$154:;
	}
	label$153:;
	label$152:;
	SYM$1 = (struct $8FBSYMBOL*)0ull;
	PARENT$1 = (struct $8FBSYMBOL*)0ull;
	BASE_PARENT$1 = (struct $8FBSYMBOL*)0ull;
	label$156:;
	if( CHAIN_$1 == (struct $10FBSYMCHAIN*)0ull ) goto label$157;
	{
		SYM$1 = *(struct $8FBSYMBOL**)CHAIN_$1;
		{
			uint64 TMP$94$3;
			TMP$94$3 = *(uint64*)SYM$1;
			goto label$159;
			label$160:;
			{
			}
			goto label$158;
			label$161:;
			{
				int64 vr$13 = HISSTRUCTALLOWED( SYM$1, OPTIONS$1 );
				if( vr$13 != 0ll ) goto label$163;
				{
					SYM$1 = PARENT$1;
					goto label$157;
				}
				label$163:;
				label$162:;
			}
			goto label$158;
			label$164:;
			{
				{
					int64 TMP$95$5;
					TMP$95$5 = *(int64*)((uint8*)SYM$1 + 48ll) & 511ll;
					if( TMP$95$5 != 18ll ) goto label$166;
					label$167:;
					{
						SYM$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll);
						int64 vr$19 = HISSTRUCTALLOWED( SYM$1, OPTIONS$1 );
						if( vr$19 != 0ll ) goto label$169;
						{
							SYM$1 = PARENT$1;
							goto label$157;
						}
						label$169:;
						label$168:;
					}
					goto label$165;
					label$166:;
					if( TMP$95$5 != 9ll ) goto label$170;
					label$171:;
					{
						SYM$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll);
					}
					goto label$165;
					label$170:;
					{
						SYM$1 = PARENT$1;
						goto label$157;
					}
					label$172:;
					label$165:;
				}
			}
			goto label$158;
			label$173:;
			{
				SYM$1 = PARENT$1;
				goto label$157;
			}
			goto label$158;
			label$159:;
			static const void* tmp$98[6ll] = {
				&&label$160,
				&&label$160,
				&&label$161,
				&&label$160,
				&&label$173,
				&&label$164,
			};
			if( TMP$94$3 < 8ll ) goto label$173;
			if( TMP$94$3 > 13ll ) goto label$173;
			goto *tmp$98[TMP$94$3 - 8ll];
			label$158:;
		}
		if( PARENT$1 == (struct $8FBSYMBOL*)0ull ) goto label$175;
		{
			int64 vr$24 = SYMBCHECKACCESS( SYM$1 );
			if( vr$24 != 0ll ) goto label$177;
			{
				ERRREPORT( 201ll, 0ll, (uint8*)0ull );
			}
			label$177:;
			label$176:;
		}
		label$175:;
		label$174:;
		int64 vr$26 = LEXGETLOOKAHEAD( 1ll, 64ll );
		if( vr$26 == 46ll ) goto label$179;
		{
			LEXSKIPTOKEN( 64ll );
			if( (OPTIONS$1 & 1ll) == 0ll ) goto label$181;
			{
				goto label$157;
			}
			label$181:;
			label$180:;
			ERRREPORT( 119ll, 0ll, (uint8*)0ull );
			goto label$157;
		}
		label$179:;
		label$178:;
		if( *(int64*)SYM$1 != 9ll ) goto label$183;
		{
			if( (int64)-(*(int64*)((uint8*)SYM$1 + 128ll) != 0ll) != 0ll ) goto label$185;
			{
				ERRREPORT( 256ll, 0ll, (uint8*)0ull );
				goto label$157;
			}
			label$185:;
			label$184:;
		}
		label$183:;
		label$182:;
		LEXSKIPTOKEN( 64ll );
		LEXSKIPTOKEN( 64ll );
		PARENT$1 = SYM$1;
		if( BASE_PARENT$1 != (struct $8FBSYMBOL*)0ull ) goto label$187;
		{
			BASE_PARENT$1 = PARENT$1;
		}
		label$187:;
		label$186:;
		{
			uint64 TMP$96$3;
			int64 vr$36 = LEXGETCLASS( 0ll );
			TMP$96$3 = (uint64)vr$36;
			goto label$189;
			label$190:;
			{
			}
			goto label$188;
			label$191:;
			{
				if( (OPTIONS$1 & 8ll) == 0ll ) goto label$193;
				{
					goto label$157;
				}
				label$193:;
				label$192:;
				ERRREPORT( 14ll, 0ll, (uint8*)0ull );
				goto label$157;
			}
			goto label$188;
			label$194:;
			{
				int64 vr$39 = LEXGETTOKEN( 0ll );
				if( vr$39 != 91ll ) goto label$196;
				{
					if( (OPTIONS$1 & 8ll) == 0ll ) goto label$198;
					{
						goto label$157;
					}
					label$198:;
					label$197:;
				}
				label$196:;
				label$195:;
				ERRREPORT( 14ll, 0ll, (uint8*)0ull );
				goto label$157;
			}
			goto label$188;
			label$189:;
			static const void* tmp$99[6ll] = {
				&&label$190,
				&&label$191,
				&&label$190,
				&&label$194,
				&&label$194,
				&&label$191,
			};
			if( TMP$96$3 > 5ll ) goto label$194;
			goto *tmp$99[TMP$96$3 - 0ll];
			label$188:;
		}
		uint8* vr$43 = LEXGETTEXT(  );
		struct $10FBSYMCHAIN* vr$44 = SYMBLOOKUPAT( SYM$1, vr$43, 0ll, -1ll );
		CHAIN_$1 = vr$44;
	}
	goto label$156;
	label$157:;
	if( (OPTIONS$1 & 2ll) == 0ll ) goto label$200;
	{
		if( (OPTIONS$1 & 4ll) == 0ll ) goto label$202;
		{
			if( BASE_PARENT$1 == (struct $8FBSYMBOL*)0ull ) goto label$204;
			{
				if( *(struct $8FBSYMBOL**)*(struct $10FBSYMBOLTB**)((uint8*)BASE_PARENT$1 + 272ll) == *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll) ) goto label$206;
				{
					ERRREPORT( 130ll, 0ll, (uint8*)0ull );
					fb$result$1 = (struct $8FBSYMBOL*)0ull;
					goto label$149;
				}
				label$206:;
				label$205:;
			}
			label$204:;
			label$203:;
		}
		goto label$201;
		label$202:;
		{
			if( CHAIN_$1 == (struct $10FBSYMCHAIN*)0ull ) goto label$208;
			{
				if( *(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$1 + 8ll) == (struct $10FBSYMCHAIN*)0ull ) goto label$210;
				{
					if( *(int64*)((uint8*)CHAIN_$1 + 16ll) == 0ll ) goto label$212;
					{
						int64 TMP$97$6;
						struct $8FBSYMBOL* NS$6;
						NS$6 = *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)*(struct $8FBSYMBOL**)CHAIN_$1 + 232ll);
						struct $8FBSYMBOL* NS2$6;
						NS2$6 = *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)*(struct $8FBSYMBOL**)*(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$1 + 8ll) + 232ll);
						if( PARENT$1 == (struct $8FBSYMBOL*)0ull ) goto label$213;
						TMP$97$6 = (int64)-(NS$6 != PARENT$1);
						goto label$216;
						label$213:;
						TMP$97$6 = (int64)-(NS$6 != NS2$6);
						label$216:;
						if( TMP$97$6 == 0ll ) goto label$215;
						{
							ERRREPORT( 254ll, 0ll, (uint8*)0ull );
						}
						label$215:;
						label$214:;
					}
					label$212:;
					label$211:;
				}
				label$210:;
				label$209:;
			}
			label$208:;
			label$207:;
		}
		label$201:;
	}
	label$200:;
	label$199:;
	fb$result$1 = SYM$1;
	label$149:;
	return fb$result$1;
}

void CCURRENTPARENTID( void )
{
	label$217:;
	struct $8FBSYMBOL* S$1;
	struct $8FBSYMBOL* vr$0 = CPARENTID( 0ll );
	S$1 = vr$0;
	if( S$1 != (struct $8FBSYMBOL*)0ull ) goto label$220;
	{
		goto label$218;
	}
	label$220:;
	label$219:;
	{
		$12FB_SYMBCLASS TMP$100$2;
		TMP$100$2 = *($12FB_SYMBCLASS*)S$1;
		if( TMP$100$2 != 8ll ) goto label$222;
		label$223:;
		{
			if( S$1 == *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll) ) goto label$225;
			{
				ERRREPORT( 130ll, 0ll, (uint8*)0ull );
			}
			label$225:;
			label$224:;
		}
		goto label$221;
		label$222:;
		if( TMP$100$2 != 11ll ) goto label$226;
		label$227:;
		{
			if( S$1 == *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll) ) goto label$229;
			{
				ERRREPORT( 157ll, 0ll, (uint8*)0ull );
			}
			label$229:;
			label$228:;
		}
		label$226:;
		label$221:;
	}
	label$218:;
}

__attribute__(( constructor )) static void fb_ctor__parserzidentifier( void )
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

static void HSKIPSYMBOL( void )
{
	label$10:;
	label$12:;
	{
		LEXSKIPTOKEN( 64ll );
		int64 vr$0 = LEXGETTOKEN( 0ll );
		if( vr$0 == 46ll ) goto label$16;
		{
			goto label$13;
		}
		label$16:;
		label$15:;
		{
			uint64 TMP$85$3;
			int64 vr$2 = LEXGETCLASS( 0ll );
			TMP$85$3 = (uint64)vr$2;
			goto label$18;
			label$19:;
			{
			}
			goto label$17;
			label$20:;
			{
				goto label$13;
			}
			goto label$17;
			label$18:;
			static const void* tmp$101[3ll] = {
				&&label$19,
				&&label$19,
				&&label$19,
			};
			if( TMP$85$3 > 2ll ) goto label$20;
			goto *tmp$101[TMP$85$3 - 0ll];
			label$17:;
		}
	}
	label$14:;
	goto label$12;
	label$13:;
	label$11:;
}

static struct $10FBSYMCHAIN* HGLOBALID( $8FB_IDOPT OPTIONS$1 )
{
	struct $10FBSYMCHAIN* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$21:;
	fb$result$1 = (struct $10FBSYMCHAIN*)0ull;
	int64 vr$1 = LEXGETLOOKAHEAD( 1ll, 64ll );
	if( vr$1 != 46ll ) goto label$24;
	{
		LEXSKIPTOKEN( 64ll );
	}
	goto label$23;
	label$24:;
	{
		if( *(struct $13FB_CMPSTMTSTK**)((uint8*)&PARSER$ + 104ll) == (struct $13FB_CMPSTMTSTK*)0ull ) goto label$26;
		{
			goto label$22;
		}
		label$26:;
		label$25:;
	}
	label$23:;
	if( (OPTIONS$1 & 4ll) == 0ll ) goto label$28;
	{
		if( (int64)-(*(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 197008ll) == (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll)) != 0ll ) goto label$30;
		{
			ERRREPORT( 130ll, 0ll, (uint8*)0ull );
		}
		label$30:;
		label$29:;
	}
	label$28:;
	label$27:;
	LEXSKIPTOKEN( 64ll );
	{
		int64 TMP$86$2;
		int64 vr$9 = LEXGETCLASS( 0ll );
		TMP$86$2 = vr$9;
		if( TMP$86$2 == 0ll ) goto label$33;
		label$34:;
		if( TMP$86$2 != 2ll ) goto label$32;
		label$33:;
		{
		}
		goto label$31;
		label$32:;
		{
			if( (OPTIONS$1 & 2ll) == 0ll ) goto label$37;
			{
				ERRREPORT( 14ll, 0ll, (uint8*)0ull );
			}
			label$37:;
			label$36:;
			goto label$22;
		}
		label$35:;
		label$31:;
	}
	uint8* vr$14 = LEXGETTEXT(  );
	struct $10FBSYMCHAIN* vr$16 = SYMBLOOKUPAT( (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll), vr$14, 0ll, -1ll );
	fb$result$1 = vr$16;
	label$22:;
	return fb$result$1;
}

static int64 HISSTRUCTALLOWED( struct $8FBSYMBOL* SYM$1, $8FB_IDOPT OPTIONS$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$38:;
	if( (OPTIONS$1 & 16ll) != 0ll ) goto label$41;
	{
		fb$result$1 = 0ll;
		goto label$39;
	}
	label$41:;
	label$40:;
	if( (int64)-((*(int64*)((uint8*)SYM$1 + 16ll) & 262144ll) != 0ll) != 0ll ) goto label$43;
	{
		fb$result$1 = 0ll;
		goto label$39;
	}
	label$43:;
	label$42:;
	if( (OPTIONS$1 & 64ll) == 0ll ) goto label$45;
	{
		fb$result$1 = (int64)-(((int64)*(int16*)((uint8*)SYM$1 + 200ll) & 16384ll) != 0ll);
		goto label$39;
	}
	label$45:;
	label$44:;
	fb$result$1 = -1ll;
	label$39:;
	return fb$result$1;
}

// Total compilation time: 0.03557190345600247 seconds.
