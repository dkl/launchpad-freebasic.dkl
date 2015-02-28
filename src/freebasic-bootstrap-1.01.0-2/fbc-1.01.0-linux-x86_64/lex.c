// Compilation of fbc-1.01.0/src/compiler/lex.bas started at 14:16:41 on 02-28-2015

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
typedef int64 $8LEXCHECK;
typedef int64 $8FB_TOKEN;
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
void* fb_ErrorThrowAt( int32, uint8*, void*, void* );
int32 fb_FileGetStrLarge( int32, int64, void*, int64 );
int64 fb_FileTell( int32 );
int32 fb_FileSeekLarge( int32, int64 );
int32 fb_FileEof( int32 );
void fb_PrintString( int32, FBSTRING*, int32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
FBSTRING* fb_StrConcatAssign( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAllocTempResult( FBSTRING* );
FBSTRING* fb_StrAllocTempDescZEx( uint8*, int64 );
FBSTRING* fb_WstrToStr( uint32* );
FBSTRING* fb_StrMid( FBSTRING*, int64, int64 );
int64 fb_StrLen( void*, int64 );
FBSTRING* fb_CHR( int32, ... );
FBSTRING* fb_LEFT( FBSTRING*, int64 );
static void fb_ctor__lex( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
typedef int64 $12FB_ERRMSGOPT;
void ERRREPORTEX( int64, uint8*, int64, $12FB_ERRMSGOPT, uint8* );
void ERRREPORTWARN( int64, uint8*, $12FB_ERRMSGOPT );
struct $10FBSYMCHAIN* SYMBLOOKUP( uint8*, $8FB_TOKEN*, $10FB_TKCLASS*, int64 );
struct $10FBSYMCHAIN* SYMBLOOKUPAT( struct $8FBSYMBOL*, uint8*, int64, int64 );
int64 TYPETOUNSIGNED( int64 );
void DZSTRALLOCATE( struct $8DZSTRING*, int64 );
void DZSTRCONCATASSIGN( struct $8DZSTRING*, uint8* );
void DZSTRCONCATASSIGNC( struct $8DZSTRING*, uint64 );
void DWSTRALLOCATE( struct $8DWSTRING*, int64 );
int64 LEXGETTOKEN( $8LEXCHECK );
uint8* LEXGETTEXT( void );
void LEXPPONLYEMITTOKEN( void );
void LEXSKIPTOKEN( $8LEXCHECK );
void LEXREADLINE( uint64, uint8*, int64 );
void LEXNEXTTOKEN( struct $7FBTOKEN*, $8LEXCHECK );
uint64 LEXCURRENTCHAR( int64 );
uint64 LEXGETLOOKAHEADCHAR( int64 );
uint64 LEXEATCHAR( void );
void PPINIT( void );
void PPEND( void );
void PPCHECK( void );
int64 PPDEFINELOAD( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
void LEXREADUTF8( void );
void LEXREADUTF16LE( void );
void LEXREADUTF16BE( void );
void LEXREADUTF32LE( void );
void LEXREADUTF32BE( void );
static void HMULTILINECOMMENT( void );
static void HSKIPCHAR( void );
static void HCOLLECTCHARFORDEBUGOUTPUT( uint64 );
static uint64 HREADCHAR( void );
static void HREADIDENTIFIER( uint8*, int64*, int64*, $8LEXCHECK );
static uint64 HREADNONDECNUMBER( uint8**, int64*, int64*, $8LEXCHECK );
static void HREADFLOATNUMBER( uint8**, int64*, int64*, int64, $8LEXCHECK );
static void HREADNUMBER( uint8*, int64*, int64*, $8LEXCHECK );
static void HREADSTRING( struct $7FBTOKEN*, uint8*, $8LEXCHECK );
static void HREADWSTR( struct $7FBTOKEN*, uint32*, $8LEXCHECK );
static void HCHECKPERIODS( struct $7FBTOKEN*, $8LEXCHECK, struct $10FBSYMCHAIN* );
static void HMOVEKDOWN( void );
static FBSTRING* LEXGETSTRLITTEXT( int64 );
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
static FBSTRING PPONLY_LN$;
struct $5FBENV ENV$ __attribute__((common));
struct $7LEX_CTX LEX$;

void LEXPUSHCTX( void )
{
	label$10:;
	*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) = (struct $9LEX_TKCTX*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 49632ll);
	label$11:;
}

void LEXPOPCTX( void )
{
	label$12:;
	if( *(int64*)((uint8*)&ENV$ + 1128ll) != 0ll ) goto label$15;
	{
		DZSTRALLOCATE( (struct $8DZSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 49600ll), 0ll );
	}
	label$15:;
	label$14:;
	if( *(int64*)((uint8*)&ENV$ + 768ll) != 0ll ) goto label$17;
	{
		DZSTRALLOCATE( (struct $8DZSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16768ll), 0ll );
	}
	goto label$16;
	label$17:;
	{
		DWSTRALLOCATE( (struct $8DWSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16768ll), 0ll );
	}
	label$16:;
	*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) = (struct $9LEX_TKCTX*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + -49632ll);
	label$13:;
}

void LEXINIT( int64 ISINCLUDE$1 )
{
	label$18:;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	struct $7FBTOKEN* N$1;
	__builtin_memset( &N$1, 0, 8ll );
	if( *(int64*)((uint8*)&ENV$ + 1128ll) != 0ll ) goto label$21;
	{
		*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) = (struct $9LEX_TKCTX*)&LEX$;
	}
	label$21:;
	label$20:;
	*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16672ll) = 0ll;
	*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) = (struct $7FBTOKEN*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll);
	*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16688ll) = *(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll);
	N$1 = *(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll);
	{
		I$1 = 0ll;
		label$25:;
		{
			*(struct $7FBTOKEN**)((uint8*)N$1 + 4160ll) = (struct $7FBTOKEN*)((uint8*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + (I$1 * 4168ll)) + 4168ll);
			N$1 = *(struct $7FBTOKEN**)((uint8*)N$1 + 4160ll);
		}
		label$23:;
		I$1 = I$1 + 1ll;
		label$22:;
		if( I$1 <= 2ll ) goto label$25;
		label$24:;
	}
	*(struct $7FBTOKEN**)((uint8*)N$1 + 4160ll) = *(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll);
	{
		I$1 = 0ll;
		label$29:;
		{
			*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + (I$1 * 4168ll)) = -1ll;
		}
		label$27:;
		I$1 = I$1 + 1ll;
		label$26:;
		if( I$1 <= 3ll ) goto label$29;
		label$28:;
	}
	*(uint64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16696ll) = 18446744073709551615ull;
	*(uint64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16704ll) = 18446744073709551615ull;
	*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16712ll) = 1ll;
	*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16720ll) = -1ll;
	*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16728ll) = 0ll;
	*(struct $8FBSYMBOL**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16736ll) = (struct $8FBSYMBOL*)0ull;
	*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16792ll) = 0ll;
	*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16752ll) = 0ll;
	if( *(int64*)((uint8*)&ENV$ + 768ll) != 0ll ) goto label$31;
	{
		*(uint8**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16800ll) = (uint8*)0ull;
		*(uint8**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16760ll) = (uint8*)0ull;
		DZSTRALLOCATE( (struct $8DZSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16768ll), 0ll );
	}
	goto label$30;
	label$31:;
	{
		*(uint32**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16800ll) = (uint32*)0ull;
		*(uint32**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16760ll) = (uint32*)0ull;
		DWSTRALLOCATE( (struct $8DWSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16768ll), 0ll );
	}
	label$30:;
	*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 49584ll) = 0ll;
	*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 49592ll) = 0ll;
	if( *(int64*)((uint8*)&ENV$ + 1128ll) != 0ll ) goto label$33;
	{
		DZSTRALLOCATE( (struct $8DZSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 49600ll), 0ll );
		*(int64*)((uint8*)&LEX$ + 843752ll) = 0ll;
	}
	label$33:;
	label$32:;
	*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 49624ll) = 0ll;
	if( ISINCLUDE$1 != 0ll ) goto label$35;
	{
		PPINIT(  );
	}
	label$35:;
	label$34:;
	label$19:;
}

void LEXEND( void )
{
	label$36:;
	fb_StrAssign( (void*)&PPONLY_LN$, -1ll, (void*)"", 1ll, 0 );
	PPEND(  );
	label$37:;
}

uint64 LEXEATCHAR( void )
{
	uint64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$84:;
	fb$result$1 = *(uint64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16696ll);
	if( *(uint64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16704ll) != 18446744073709551615ull ) goto label$87;
	{
		HSKIPCHAR(  );
		*(uint64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16696ll) = 18446744073709551615ull;
	}
	goto label$86;
	label$87:;
	{
		*(uint64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16696ll) = *(uint64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16704ll);
		*(uint64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16704ll) = 18446744073709551615ull;
	}
	label$86:;
	label$85:;
	return fb$result$1;
}

uint64 LEXCURRENTCHAR( int64 SKIPWHITESPC$1 )
{
	uint64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$99:;
	if( *(uint64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16696ll) != 18446744073709551615ull ) goto label$102;
	{
		uint64 vr$3 = HREADCHAR(  );
		*(uint64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16696ll) = vr$3;
	}
	label$102:;
	label$101:;
	if( SKIPWHITESPC$1 == 0ll ) goto label$104;
	{
		label$105:;
		if( ((int64)-(*(uint64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16696ll) == 9ull) | (int64)-(*(uint64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16696ll) == 32ull)) == 0ll ) goto label$106;
		{
			*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 49624ll) = -1ll;
			LEXEATCHAR(  );
			uint64 vr$13 = HREADCHAR(  );
			*(uint64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16696ll) = vr$13;
		}
		goto label$105;
		label$106:;
	}
	label$104:;
	label$103:;
	fb$result$1 = *(uint64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16696ll);
	label$100:;
	return fb$result$1;
}

uint64 LEXGETLOOKAHEADCHAR( int64 SKIPWHITESPC$1 )
{
	uint64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$107:;
	if( *(uint64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16704ll) != 18446744073709551615ull ) goto label$110;
	{
		HSKIPCHAR(  );
		uint64 vr$3 = HREADCHAR(  );
		*(uint64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16704ll) = vr$3;
	}
	label$110:;
	label$109:;
	if( SKIPWHITESPC$1 == 0ll ) goto label$112;
	{
		label$113:;
		if( ((int64)-(*(uint64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16704ll) == 9ull) | (int64)-(*(uint64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16704ll) == 32ull)) == 0ll ) goto label$114;
		{
			*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 49624ll) = -1ll;
			HSKIPCHAR(  );
			uint64 vr$13 = HREADCHAR(  );
			*(uint64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16704ll) = vr$13;
		}
		goto label$113;
		label$114:;
	}
	label$112:;
	label$111:;
	fb$result$1 = *(uint64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16704ll);
	label$108:;
	return fb$result$1;
}

void LEXNEXTTOKEN( struct $7FBTOKEN* T$1, $8LEXCHECK FLAGS$1 )
{
	label$544:;
	uint64 CHAR$1;
	int64 ISLINECONT$1;
	int64 LGT$1;
	struct $10FBSYMCHAIN* CHAIN_$1;
	*(int64*)((uint8*)T$1 + 4152ll) = *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 49624ll);
	*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 49624ll) = 0ll;
	label$546:;
	*(uint8*)((uint8*)T$1 + 24ll) = (uint8)0u;
	*(int64*)((uint8*)T$1 + 4128ll) = 0ll;
	*(struct $10FBSYMCHAIN**)((uint8*)T$1 + 4136ll) = (struct $10FBSYMCHAIN*)0ull;
	ISLINECONT$1 = 0ll;
	label$547:;
	{
		uint64 vr$6 = LEXCURRENTCHAR( 0ll );
		CHAR$1 = vr$6;
		{
			uint64 TMP$115$3;
			TMP$115$3 = CHAR$1;
			goto label$551;
			label$552:;
			{
				*(int64*)T$1 = 256ll;
				*(int64*)((uint8*)T$1 + 8ll) = 6ll;
				*(int64*)((uint8*)T$1 + 16ll) = 2147483648ll;
				goto label$545;
			}
			goto label$550;
			label$553:;
			{
				if( ISLINECONT$1 == 0ll ) goto label$555;
				{
					LEXEATCHAR(  );
					goto label$549;
				}
				label$555:;
				label$554:;
				if( (FLAGS$1 & 1ll) != 0ll ) goto label$557;
				{
					{
						uint64 TMP$116$6;
						uint64 vr$13 = LEXGETLOOKAHEADCHAR( 0ll );
						TMP$116$6 = vr$13;
						goto label$559;
						label$560:;
						{
							goto label$561;
						}
						goto label$558;
						label$562:;
						{
							LEXEATCHAR(  );
							ISLINECONT$1 = -1ll;
							goto label$549;
						}
						goto label$558;
						label$559:;
						static const void* tmp$125[75ll] = {
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$562,
							&&label$562,
							&&label$562,
							&&label$562,
							&&label$562,
							&&label$562,
							&&label$562,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$562,
							&&label$562,
							&&label$562,
							&&label$562,
							&&label$560,
							&&label$562,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
							&&label$560,
						};
						if( TMP$116$6 < 48ll ) goto label$562;
						if( TMP$116$6 > 122ll ) goto label$562;
						goto *tmp$125[TMP$116$6 - 48ll];
						label$558:;
					}
				}
				goto label$556;
				label$557:;
				{
					goto label$548;
				}
				label$556:;
			}
			goto label$550;
			label$563:;
			{
				LEXEATCHAR(  );
				if( CHAR$1 != 13ull ) goto label$565;
				{
					uint64 vr$15 = LEXCURRENTCHAR( 0ll );
					if( vr$15 != 10ull ) goto label$567;
					{
						LEXEATCHAR(  );
					}
					label$567:;
					label$566:;
				}
				label$565:;
				label$564:;
				if( ISLINECONT$1 != 0ll ) goto label$569;
				{
					*(int64*)T$1 = 257ll;
					*(int64*)((uint8*)T$1 + 8ll) = 6ll;
					*(int64*)((uint8*)T$1 + 16ll) = 2147483648ll;
					*(int64*)((uint8*)T$1 + 4128ll) = 1ll;
					*(uint8*)((uint8*)T$1 + 24ll) = (uint8)10u;
					*(uint8*)((uint8*)T$1 + 25ll) = (uint8)0u;
					goto label$545;
				}
				goto label$568;
				label$569:;
				{
					*(int64*)((uint8*)T$1 + 4152ll) = -1ll;
					if( *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16752ll) != 0ll ) goto label$571;
					{
						*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16712ll) = *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16712ll) + 1ll;
					}
					label$571:;
					label$570:;
					ISLINECONT$1 = 0ll;
					goto label$549;
				}
				label$568:;
			}
			goto label$550;
			label$572:;
			{
				*(int64*)((uint8*)T$1 + 4152ll) = -1ll;
				if( ISLINECONT$1 != 0ll ) goto label$574;
				{
					if( (FLAGS$1 & 4ll) == 0ll ) goto label$576;
					{
						goto label$548;
					}
					label$576:;
					label$575:;
				}
				label$574:;
				label$573:;
				LEXEATCHAR(  );
			}
			goto label$550;
			label$577:;
			{
				if( ISLINECONT$1 != 0ll ) goto label$579;
				{
					goto label$548;
				}
				label$579:;
				label$578:;
				LEXEATCHAR(  );
			}
			goto label$550;
			label$551:;
			static const void* tmp$126[96ll] = {
				&&label$552,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$572,
				&&label$563,
				&&label$577,
				&&label$577,
				&&label$563,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$572,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$577,
				&&label$553,
			};
			if( TMP$115$3 > 95ll ) goto label$577;
			goto *tmp$126[TMP$115$3 - 0ll];
			label$550:;
		}
	}
	label$549:;
	goto label$547;
	label$548:;
	*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 49592ll) = (*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 49584ll) + (*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16800ll) - (int64)(uint8*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16808ll))) + -1ll;
	{
		uint64 TMP$117$2;
		TMP$117$2 = CHAR$1;
		goto label$581;
		label$582:;
		{
			if( (FLAGS$1 & 9ll) != 0ll ) goto label$584;
			{
				uint64 LACHAR$4;
				uint64 vr$45 = LEXGETLOOKAHEADCHAR( -1ll );
				LACHAR$4 = vr$45;
				if( ((int64)-(LACHAR$4 >= 48ull) & (int64)-(LACHAR$4 <= 57ull)) == 0ll ) goto label$586;
				{
					goto label$587;
				}
				label$586:;
				label$585:;
			}
			label$584:;
			label$583:;
			goto label$588;
		}
		goto label$580;
		label$589:;
		{
			{
				uint64 TMP$118$4;
				uint64 vr$50 = LEXGETLOOKAHEADCHAR( 0ll );
				TMP$118$4 = vr$50;
				if( TMP$118$4 == 72ull ) goto label$592;
				label$593:;
				if( TMP$118$4 == 104ull ) goto label$592;
				label$594:;
				if( TMP$118$4 == 79ull ) goto label$592;
				label$595:;
				if( TMP$118$4 == 111ull ) goto label$592;
				label$596:;
				if( TMP$118$4 == 66ull ) goto label$592;
				label$597:;
				if( TMP$118$4 != 98ull ) goto label$591;
				label$592:;
				{
					goto label$587;
				}
				label$591:;
				label$590:;
			}
			*(int64*)((uint8*)T$1 + 8ll) = 5ll;
			uint64 vr$58 = LEXEATCHAR(  );
			*(int64*)T$1 = (int64)vr$58;
			*(int64*)((uint8*)T$1 + 16ll) = *(int64*)T$1;
			*(int64*)((uint8*)T$1 + 4128ll) = 1ll;
			*(uint8*)((uint8*)T$1 + 24ll) = (uint8)CHAR$1;
			*(uint8*)((uint8*)T$1 + 25ll) = (uint8)0u;
		}
		goto label$580;
		label$598:;
		{
			label$587:;
			HREADNUMBER( (uint8*)((uint8*)T$1 + 24ll), (int64*)T$1, (int64*)((uint8*)T$1 + 4128ll), FLAGS$1 );
			*(int64*)((uint8*)T$1 + 8ll) = 3ll;
			*(int64*)((uint8*)T$1 + 16ll) = *(int64*)T$1;
		}
		goto label$580;
		label$599:;
		{
			label$561:;
			struct $8FBSYMBOL* CURRMACRO$3;
			CURRMACRO$3 = *(struct $8FBSYMBOL**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16736ll);
			*(int64*)((uint8*)T$1 + 4128ll) = 0ll;
			*(int64*)((uint8*)T$1 + 4144ll) = 0ll;
			HREADIDENTIFIER( (uint8*)((uint8*)T$1 + 24ll), (int64*)((uint8*)T$1 + 4128ll), (int64*)((uint8*)T$1 + 16ll), FLAGS$1 );
			if( (FLAGS$1 & 256ll) == 0ll ) goto label$601;
			{
				struct $10FBSYMCHAIN* vr$89 = SYMBLOOKUPAT( *(struct $8FBSYMBOL**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16744ll), (uint8*)((uint8*)T$1 + 24ll), 0ll, 0ll );
				*(struct $10FBSYMCHAIN**)((uint8*)T$1 + 4136ll) = vr$89;
				if( *(struct $10FBSYMCHAIN**)((uint8*)T$1 + 4136ll) != (struct $10FBSYMCHAIN*)0ull ) goto label$603;
				{
					*(int64*)T$1 = 265ll;
					*(int64*)((uint8*)T$1 + 8ll) = 0ll;
				}
				goto label$602;
				label$603:;
				{
					*(int64*)T$1 = *(int64*)((uint8*)*(struct $8FBSYMBOL**)*(struct $10FBSYMCHAIN**)((uint8*)T$1 + 4136ll) + 88ll);
					*(int64*)((uint8*)T$1 + 8ll) = *(int64*)((uint8*)*(struct $8FBSYMBOL**)*(struct $10FBSYMCHAIN**)((uint8*)T$1 + 4136ll) + 96ll);
				}
				label$602:;
				goto label$545;
			}
			label$601:;
			label$600:;
			if( (FLAGS$1 & 32ll) == 0ll ) goto label$605;
			{
				*(int64*)T$1 = 265ll;
				*(int64*)((uint8*)T$1 + 8ll) = 0ll;
				goto label$545;
			}
			label$605:;
			label$604:;
			struct $10FBSYMCHAIN* vr$113 = SYMBLOOKUP( (uint8*)((uint8*)T$1 + 24ll), ($8FB_TOKEN*)T$1, ($10FB_TKCLASS*)((uint8*)T$1 + 8ll), 0ll );
			*(struct $10FBSYMCHAIN**)((uint8*)T$1 + 4136ll) = vr$113;
			if( (FLAGS$1 & 2ll) == 0ll ) goto label$607;
			{
				goto label$545;
			}
			label$607:;
			label$606:;
			CHAIN_$1 = *(struct $10FBSYMCHAIN**)((uint8*)T$1 + 4136ll);
			if( CHAIN_$1 == (struct $10FBSYMCHAIN*)0ull ) goto label$609;
			{
				if( *(int64*)*(struct $8FBSYMBOL**)CHAIN_$1 != 5ll ) goto label$611;
				{
					int64 vr$123 = PPDEFINELOAD( *(struct $8FBSYMBOL**)CHAIN_$1, CURRMACRO$3 );
					if( vr$123 == 0ll ) goto label$613;
					{
						*(int64*)((uint8*)T$1 + 4152ll) = -1ll;
						goto label$546;
					}
					label$613:;
					label$612:;
				}
				label$611:;
				label$610:;
			}
			label$609:;
			label$608:;
			if( (*(int64*)((uint8*)&ENV$ + 1152ll) & 524288ll) == 0ll ) goto label$615;
			{
				if( (FLAGS$1 & 64ll) == 0ll ) goto label$617;
				{
					goto label$545;
				}
				label$617:;
				label$616:;
				HCHECKPERIODS( T$1, FLAGS$1, CHAIN_$1 );
			}
			label$615:;
			label$614:;
		}
		goto label$580;
		label$618:;
		{
			$8FB_TOKEN TMP$119$3;
			*(int64*)((uint8*)T$1 + 8ll) = 4ll;
			if( *(int64*)((uint8*)&ENV$ + 1240ll) == 0ll ) goto label$619;
			TMP$119$3 = 263ll;
			goto label$675;
			label$619:;
			TMP$119$3 = 262ll;
			label$675:;
			*(int64*)T$1 = TMP$119$3;
			*(int64*)((uint8*)T$1 + 16ll) = 2147483648ll;
			if( *(int64*)((uint8*)&ENV$ + 768ll) != 0ll ) goto label$621;
			{
				HREADSTRING( T$1, (uint8*)((uint8*)T$1 + 24ll), FLAGS$1 );
			}
			goto label$620;
			label$621:;
			{
				HREADWSTR( T$1, (uint32*)((uint8*)T$1 + 24ll), FLAGS$1 );
			}
			label$620:;
		}
		goto label$580;
		label$622:;
		{
			$8FB_TOKEN TMP$120$3;
			uint64 vr$139 = LEXGETLOOKAHEADCHAR( 0ll );
			if( vr$139 == 34ull ) goto label$624;
			{
				goto label$588;
			}
			label$624:;
			label$623:;
			LEXEATCHAR(  );
			*(int64*)((uint8*)T$1 + 8ll) = 4ll;
			if( CHAR$1 != 33ull ) goto label$625;
			TMP$120$3 = 263ll;
			goto label$676;
			label$625:;
			TMP$120$3 = 264ll;
			label$676:;
			*(int64*)T$1 = TMP$120$3;
			*(int64*)((uint8*)T$1 + 16ll) = 2147483648ll;
			if( *(int64*)((uint8*)&ENV$ + 768ll) != 0ll ) goto label$627;
			{
				uint8* PS$4;
				if( (FLAGS$1 & 16ll) != 0ll ) goto label$629;
				{
					PS$4 = (uint8*)((uint8*)T$1 + 24ll);
				}
				goto label$628;
				label$629:;
				{
					*(uint8*)((uint8*)T$1 + 24ll) = (uint8)CHAR$1;
					PS$4 = (uint8*)((uint8*)((uint8*)T$1 + 24ll) + 1ll);
				}
				label$628:;
				HREADSTRING( T$1, PS$4, FLAGS$1 );
			}
			goto label$626;
			label$627:;
			{
				uint32* PS$4;
				if( (FLAGS$1 & 16ll) != 0ll ) goto label$631;
				{
					PS$4 = (uint32*)((uint8*)T$1 + 24ll);
				}
				goto label$630;
				label$631:;
				{
					*(uint32*)((uint8*)T$1 + 24ll) = (uint32)CHAR$1;
					PS$4 = (uint32*)((uint8*)((uint8*)T$1 + 24ll) + 4ll);
				}
				label$630:;
				HREADWSTR( T$1, PS$4, FLAGS$1 );
			}
			label$626:;
		}
		goto label$580;
		label$632:;
		{
			label$588:;
			uint64 vr$164 = LEXEATCHAR(  );
			*(int64*)T$1 = (int64)vr$164;
			*(int64*)((uint8*)T$1 + 16ll) = *(int64*)T$1;
			*(int64*)((uint8*)T$1 + 4128ll) = 1ll;
			*(uint8*)((uint8*)T$1 + 24ll) = (uint8)CHAR$1;
			*(uint8*)((uint8*)T$1 + 25ll) = (uint8)0u;
			{
				uint64 TMP$121$4;
				TMP$121$4 = CHAR$1;
				goto label$634;
				label$635:;
				{
					*(int64*)((uint8*)T$1 + 8ll) = 5ll;
					{
						if( CHAR$1 != 60ull ) goto label$637;
						label$638:;
						{
							{
								uint64 TMP$122$8;
								uint64 vr$174 = LEXCURRENTCHAR( -1ll );
								TMP$122$8 = vr$174;
								if( TMP$122$8 != 61ull ) goto label$640;
								label$641:;
								{
									uint64 vr$176 = LEXEATCHAR(  );
									*(uint8*)((uint8*)((uint8*)T$1 + 24ll) + *(int64*)((uint8*)T$1 + 4128ll)) = (uint8)vr$176;
									*(uint8*)((uint8*)((uint8*)((uint8*)T$1 + 24ll) + *(int64*)((uint8*)T$1 + 4128ll)) + 1ll) = (uint8)0u;
									*(int64*)((uint8*)T$1 + 4128ll) = *(int64*)((uint8*)T$1 + 4128ll) + 1ll;
									*(int64*)T$1 = 303ll;
								}
								goto label$639;
								label$640:;
								if( TMP$122$8 != 62ull ) goto label$642;
								label$643:;
								{
									uint64 vr$191 = LEXEATCHAR(  );
									*(uint8*)((uint8*)((uint8*)T$1 + 24ll) + *(int64*)((uint8*)T$1 + 4128ll)) = (uint8)vr$191;
									*(uint8*)((uint8*)((uint8*)((uint8*)T$1 + 24ll) + *(int64*)((uint8*)T$1 + 4128ll)) + 1ll) = (uint8)0u;
									*(int64*)((uint8*)T$1 + 4128ll) = *(int64*)((uint8*)T$1 + 4128ll) + 1ll;
									*(int64*)T$1 = 302ll;
								}
								goto label$639;
								label$642:;
								{
									*(int64*)T$1 = 301ll;
								}
								label$644:;
								label$639:;
							}
						}
						goto label$636;
						label$637:;
						if( CHAR$1 != 62ull ) goto label$645;
						label$646:;
						{
							int64 TMP$123$7;
							if( (int64)-((int64)-((*(int64*)((uint8*)&PARSER$ + 288ll) & 512ll) != 0ll) == 0ll) == 0ll ) goto label$647;
							uint64 vr$211 = LEXCURRENTCHAR( -1ll );
							TMP$123$7 = (int64)-((int64)-(vr$211 == 61ull) != 0ll);
							goto label$677;
							label$647:;
							TMP$123$7 = 0ll;
							label$677:;
							if( TMP$123$7 == 0ll ) goto label$649;
							{
								uint64 vr$215 = LEXEATCHAR(  );
								*(uint8*)((uint8*)((uint8*)T$1 + 24ll) + *(int64*)((uint8*)T$1 + 4128ll)) = (uint8)vr$215;
								*(uint8*)((uint8*)((uint8*)((uint8*)T$1 + 24ll) + *(int64*)((uint8*)T$1 + 4128ll)) + 1ll) = (uint8)0u;
								*(int64*)((uint8*)T$1 + 4128ll) = *(int64*)((uint8*)T$1 + 4128ll) + 1ll;
								*(int64*)T$1 = 304ll;
							}
							goto label$648;
							label$649:;
							{
								*(int64*)T$1 = 300ll;
							}
							label$648:;
						}
						goto label$636;
						label$645:;
						if( CHAR$1 != 61ull ) goto label$650;
						label$651:;
						{
							uint64 vr$231 = LEXCURRENTCHAR( -1ll );
							if( vr$231 != 62ull ) goto label$653;
							{
								uint64 vr$233 = LEXEATCHAR(  );
								*(uint8*)((uint8*)((uint8*)T$1 + 24ll) + *(int64*)((uint8*)T$1 + 4128ll)) = (uint8)vr$233;
								*(uint8*)((uint8*)((uint8*)((uint8*)T$1 + 24ll) + *(int64*)((uint8*)T$1 + 4128ll)) + 1ll) = (uint8)0u;
								*(int64*)((uint8*)T$1 + 4128ll) = *(int64*)((uint8*)T$1 + 4128ll) + 1ll;
								*(int64*)T$1 = 305ll;
							}
							goto label$652;
							label$653:;
							{
								*(int64*)T$1 = 299ll;
							}
							label$652:;
						}
						label$650:;
						label$636:;
					}
				}
				goto label$633;
				label$654:;
				{
					*(int64*)((uint8*)T$1 + 8ll) = 5ll;
				}
				goto label$633;
				label$655:;
				{
					*(int64*)((uint8*)T$1 + 8ll) = 5ll;
					uint64 vr$250 = LEXCURRENTCHAR( -1ll );
					if( vr$250 != 62ull ) goto label$657;
					{
						uint64 vr$252 = LEXEATCHAR(  );
						*(uint8*)((uint8*)((uint8*)T$1 + 24ll) + *(int64*)((uint8*)T$1 + 4128ll)) = (uint8)vr$252;
						*(uint8*)((uint8*)((uint8*)((uint8*)T$1 + 24ll) + *(int64*)((uint8*)T$1 + 4128ll)) + 1ll) = (uint8)0u;
						*(int64*)((uint8*)T$1 + 4128ll) = *(int64*)((uint8*)T$1 + 4128ll) + 1ll;
						*(int64*)T$1 = 397ll;
					}
					label$657:;
					label$656:;
				}
				goto label$633;
				label$658:;
				{
					*(int64*)((uint8*)T$1 + 8ll) = 5ll;
					if( ((int64)-((FLAGS$1 & 512ll) == 0ll) | (int64)-((int64)-(*(int64*)((uint8*)&ENV$ + 272ll) == 0ll) == 0ll)) == 0ll ) goto label$660;
					{
						uint64 vr$273 = LEXCURRENTCHAR( 0ll );
						if( vr$273 != 39ull ) goto label$662;
						{
							HMULTILINECOMMENT(  );
							*(int64*)((uint8*)T$1 + 4152ll) = -1ll;
							goto label$546;
						}
						label$662:;
						label$661:;
					}
					label$660:;
					label$659:;
				}
				goto label$633;
				label$663:;
				{
					*(int64*)((uint8*)T$1 + 8ll) = 6ll;
					*(int64*)T$1 = 259ll;
				}
				goto label$633;
				label$664:;
				{
					*(int64*)((uint8*)T$1 + 8ll) = 6ll;
					*(int64*)T$1 = 258ll;
				}
				goto label$633;
				label$665:;
				{
					*(int64*)((uint8*)T$1 + 8ll) = 6ll;
				}
				goto label$633;
				label$666:;
				{
					*(int64*)((uint8*)T$1 + 8ll) = 6ll;
					*(int64*)T$1 = 32ll;
					label$667:;
					{
						{
							uint64 TMP$124$7;
							uint64 vr$283 = LEXCURRENTCHAR( 0ll );
							TMP$124$7 = vr$283;
							goto label$671;
							label$672:;
							{
								LEXEATCHAR(  );
								*(uint8*)((uint8*)((uint8*)T$1 + 24ll) + *(int64*)((uint8*)T$1 + 4128ll)) = (uint8)32u;
								*(int64*)((uint8*)T$1 + 4128ll) = *(int64*)((uint8*)T$1 + 4128ll) + 1ll;
							}
							goto label$670;
							label$673:;
							{
								*(uint8*)((uint8*)((uint8*)T$1 + 24ll) + *(int64*)((uint8*)T$1 + 4128ll)) = (uint8)0u;
								goto label$668;
							}
							goto label$670;
							label$671:;
							static const void* tmp$127[24ll] = {
								&&label$672,
								&&label$673,
								&&label$673,
								&&label$673,
								&&label$673,
								&&label$673,
								&&label$673,
								&&label$673,
								&&label$673,
								&&label$673,
								&&label$673,
								&&label$673,
								&&label$673,
								&&label$673,
								&&label$673,
								&&label$673,
								&&label$673,
								&&label$673,
								&&label$673,
								&&label$673,
								&&label$673,
								&&label$673,
								&&label$673,
								&&label$672,
							};
							if( TMP$124$7 < 9ll ) goto label$673;
							if( TMP$124$7 > 32ll ) goto label$673;
							goto *tmp$127[TMP$124$7 - 9ll];
							label$670:;
						}
					}
					label$669:;
					goto label$667;
					label$668:;
				}
				goto label$633;
				label$674:;
				{
					*(int64*)((uint8*)T$1 + 8ll) = 7ll;
				}
				goto label$633;
				label$634:;
				static const void* tmp$128[117ll] = {
					&&label$666,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$666,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$663,
					&&label$665,
					&&label$665,
					&&label$654,
					&&label$654,
					&&label$665,
					&&label$655,
					&&label$665,
					&&label$658,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$664,
					&&label$665,
					&&label$635,
					&&label$635,
					&&label$635,
					&&label$674,
					&&label$654,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$665,
					&&label$654,
					&&label$665,
					&&label$654,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$674,
					&&label$665,
					&&label$674,
					&&label$665,
				};
				if( TMP$121$4 < 9ll ) goto label$674;
				if( TMP$121$4 > 125ll ) goto label$674;
				goto *tmp$128[TMP$121$4 - 9ll];
				label$633:;
			}
		}
		goto label$580;
		label$581:;
		static const void* tmp$129[90ll] = {
			&&label$622,
			&&label$618,
			&&label$632,
			&&label$622,
			&&label$632,
			&&label$589,
			&&label$632,
			&&label$632,
			&&label$632,
			&&label$632,
			&&label$632,
			&&label$632,
			&&label$632,
			&&label$582,
			&&label$632,
			&&label$598,
			&&label$598,
			&&label$598,
			&&label$598,
			&&label$598,
			&&label$598,
			&&label$598,
			&&label$598,
			&&label$598,
			&&label$598,
			&&label$632,
			&&label$632,
			&&label$632,
			&&label$632,
			&&label$632,
			&&label$632,
			&&label$632,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$632,
			&&label$632,
			&&label$632,
			&&label$632,
			&&label$632,
			&&label$632,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
			&&label$599,
		};
		if( TMP$117$2 < 33ll ) goto label$632;
		if( TMP$117$2 > 122ll ) goto label$632;
		goto *tmp$129[TMP$117$2 - 33ll];
		label$580:;
	}
	label$545:;
}

int64 LEXGETTOKEN( $8LEXCHECK FLAGS$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$703:;
	if( *(int64*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) != -1ll ) goto label$706;
	{
		LEXNEXTTOKEN( *(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll), FLAGS$1 );
		PPCHECK(  );
	}
	label$706:;
	label$705:;
	fb$result$1 = *(int64*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll);
	label$704:;
	return fb$result$1;
}

int64 LEXGETCLASS( $8LEXCHECK FLAGS$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$707:;
	if( *(int64*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) != -1ll ) goto label$710;
	{
		LEXNEXTTOKEN( *(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll), FLAGS$1 );
		PPCHECK(  );
	}
	label$710:;
	label$709:;
	fb$result$1 = *(int64*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 8ll);
	label$708:;
	return fb$result$1;
}

int64 LEXGETLOOKAHEAD( int64 K$1, $8LEXCHECK FLAGS$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$711:;
	if( K$1 <= 3ll ) goto label$714;
	{
		goto label$712;
	}
	label$714:;
	label$713:;
	if( K$1 <= *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16672ll) ) goto label$716;
	{
		*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16672ll) = K$1;
		*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16688ll) = *(struct $7FBTOKEN**)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16688ll) + 4160ll);
	}
	label$716:;
	label$715:;
	if( *(int64*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16688ll) != -1ll ) goto label$718;
	{
		LEXNEXTTOKEN( *(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16688ll), FLAGS$1 );
	}
	label$718:;
	label$717:;
	fb$result$1 = *(int64*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16688ll);
	label$712:;
	return fb$result$1;
}

int64 LEXGETLOOKAHEADCLASS( int64 K$1, $8LEXCHECK FLAGS$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$719:;
	if( K$1 <= 3ll ) goto label$722;
	{
		goto label$720;
	}
	label$722:;
	label$721:;
	if( K$1 <= *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16672ll) ) goto label$724;
	{
		*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16672ll) = K$1;
		*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16688ll) = *(struct $7FBTOKEN**)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16688ll) + 4160ll);
	}
	label$724:;
	label$723:;
	if( *(int64*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16688ll) != -1ll ) goto label$726;
	{
		LEXNEXTTOKEN( *(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16688ll), FLAGS$1 );
	}
	label$726:;
	label$725:;
	fb$result$1 = *(int64*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16688ll) + 8ll);
	label$720:;
	return fb$result$1;
}

void LEXPPONLYEMITTOKEN( void )
{
	label$751:;
	{
		int64 TMP$138$2;
		int64 vr$0 = LEXGETTOKEN( 0ll );
		TMP$138$2 = vr$0;
		if( TMP$138$2 == 259ll ) goto label$755;
		label$756:;
		if( TMP$138$2 != 260ll ) goto label$754;
		label$755:;
		{
			goto label$752;
		}
		goto label$753;
		label$754:;
		if( TMP$138$2 == 256ll ) goto label$758;
		label$759:;
		if( TMP$138$2 != 257ll ) goto label$757;
		label$758:;
		{
			int64 vr$5 = fb_StrLen( (void*)&PPONLY_LN$, -1ll );
			if( vr$5 <= 0ll ) goto label$761;
			{
				int64 TMP$139$4;
				TMP$139$4 = *(int64*)((uint8*)&ENV$ + 1072ll);
				fb_PrintString( (int32)TMP$139$4, &PPONLY_LN$, 1 );
				fb_StrAssign( (void*)&PPONLY_LN$, -1ll, (void*)"", 1ll, 0 );
			}
			goto label$760;
			label$761:;
			int64 vr$8 = LEXGETTOKEN( 0ll );
			if( vr$8 != 257ll ) goto label$762;
			{
				if( *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16720ll) != 257ll ) goto label$764;
				{
					int64 TMP$140$5;
					TMP$140$5 = *(int64*)((uint8*)&ENV$ + 1072ll);
					FBSTRING* vr$12 = fb_StrAllocTempDescZEx( (uint8*)"", 0ll );
					fb_PrintString( (int32)TMP$140$5, vr$12, 1 );
				}
				label$764:;
				label$763:;
			}
			label$762:;
			label$760:;
			goto label$752;
		}
		label$757:;
		label$753:;
	}
	if( *(int64*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 4152ll) == 0ll ) goto label$766;
	{
		FBSTRING* vr$17 = fb_StrConcatAssign( (void*)&PPONLY_LN$, -1ll, (void*)" ", 2ll, 0 );
	}
	label$766:;
	label$765:;
	{
		int64 TMP$142$2;
		int64 vr$18 = LEXGETTOKEN( 0ll );
		TMP$142$2 = vr$18;
		if( TMP$142$2 == 262ll ) goto label$769;
		label$770:;
		if( TMP$142$2 == 263ll ) goto label$769;
		label$771:;
		if( TMP$142$2 != 264ll ) goto label$768;
		label$769:;
		{
			int64 vr$22 = LEXGETTOKEN( 0ll );
			FBSTRING* vr$23 = LEXGETSTRLITTEXT( vr$22 );
			FBSTRING* vr$24 = fb_StrConcatAssign( (void*)&PPONLY_LN$, -1ll, (void*)vr$23, -1ll, 0 );
		}
		goto label$767;
		label$768:;
		{
			FBSTRING TMP$143$3;
			uint8* vr$25 = LEXGETTEXT(  );
			__builtin_memset( &TMP$143$3, 0, 24ll );
			FBSTRING* vr$28 = fb_StrConcat( &TMP$143$3, (void*)&PPONLY_LN$, -1ll, (void*)vr$25, 0ll );
			FBSTRING* vr$29 = fb_StrAssign( (void*)&PPONLY_LN$, -1ll, (void*)vr$28, -1ll, 0 );
		}
		label$772:;
		label$767:;
	}
	label$752:;
}

void LEXPPONLYEMITTEXT( FBSTRING* S$1 )
{
	FBSTRING TMP$144$1;
	label$773:;
	__builtin_memset( &TMP$144$1, 0, 24ll );
	FBSTRING* vr$2 = fb_StrConcat( &TMP$144$1, (void*)&PPONLY_LN$, -1ll, (void*)S$1, -1ll );
	FBSTRING* vr$3 = fb_StrAssign( (void*)&PPONLY_LN$, -1ll, (void*)vr$2, -1ll, 0 );
	label$774:;
}

void LEXSKIPTOKEN( $8LEXCHECK FLAGS$1 )
{
	label$775:;
	if( *(int64*)((uint8*)&ENV$ + 1072ll) <= 0ll ) goto label$778;
	{
		if( *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16728ll) != 0ll ) goto label$780;
		{
			LEXPPONLYEMITTOKEN(  );
		}
		label$780:;
		label$779:;
	}
	label$778:;
	label$777:;
	{
		int64 TMP$145$2;
		TMP$145$2 = *(int64*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll);
		if( TMP$145$2 != 257ll ) goto label$782;
		label$783:;
		{
			if( *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16752ll) != 0ll ) goto label$785;
			{
				*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16712ll) = *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16712ll) + 1ll;
			}
			label$785:;
			label$784:;
		}
		label$782:;
		label$781:;
	}
	*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16720ll) = *(int64*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll);
	if( *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16672ll) != 0ll ) goto label$787;
	{
		LEXNEXTTOKEN( *(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll), FLAGS$1 );
	}
	goto label$786;
	label$787:;
	{
		HMOVEKDOWN(  );
	}
	label$786:;
	PPCHECK(  );
	label$776:;
}

void LEXEATTOKEN( uint8* TOKEN$1, $8LEXCHECK FLAGS$1 )
{
	label$788:;
	if( *(int64*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 16ll) == 6ll ) goto label$791;
	{
		fb_StrAssign( (void*)TOKEN$1, 0ll, (void*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 24ll), 1025ll, 0 );
	}
	goto label$790;
	label$791:;
	{
		FBSTRING* vr$9 = fb_WstrToStr( (uint32*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 24ll) );
		fb_StrAssign( (void*)TOKEN$1, 0ll, (void*)vr$9, -1ll, 0 );
	}
	label$790:;
	LEXSKIPTOKEN( FLAGS$1 );
	label$789:;
}

uint8* LEXGETTEXT( void )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$792:;
	static uint8 TMPSTR$1[1025];
	if( *(int64*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 16ll) == 6ll ) goto label$795;
	{
		fb$result$1 = (uint8*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 24ll);
	}
	goto label$794;
	label$795:;
	{
		FBSTRING* vr$10 = fb_WstrToStr( (uint32*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 24ll) );
		fb_StrAssign( (void*)TMPSTR$1, 1025ll, (void*)vr$10, -1ll, 0 );
		fb$result$1 = (uint8*)TMPSTR$1;
	}
	label$794:;
	label$793:;
	return fb$result$1;
}

void LEXREADLINE( uint64 ENDCHAR$1, uint8* DST$1, int64 SKIPLINE$1 )
{
	label$796:;
	static uint64 CHAR$1;
	if( SKIPLINE$1 != 0ll ) goto label$799;
	{
		fb_StrAssign( (void*)DST$1, 0ll, (void*)"", 1ll, 0 );
	}
	label$799:;
	label$798:;
	label$800:;
	if( *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16672ll) <= 0ll ) goto label$801;
	{
		{
			int64 TMP$146$3;
			TMP$146$3 = *(int64*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll);
			if( TMP$146$3 == 256ll ) goto label$804;
			label$805:;
			if( TMP$146$3 == 257ll ) goto label$804;
			label$806:;
			if( (uint64)TMP$146$3 != ENDCHAR$1 ) goto label$803;
			label$804:;
			{
				goto label$797;
			}
			goto label$802;
			label$803:;
			{
				if( SKIPLINE$1 != 0ll ) goto label$809;
				{
					FBSTRING TMP$147$5;
					__builtin_memset( &TMP$147$5, 0, 24ll );
					FBSTRING* vr$14 = fb_StrConcat( &TMP$147$5, (void*)DST$1, 0ll, (void*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 24ll), 1025ll );
					fb_StrAssign( (void*)DST$1, 0ll, (void*)vr$14, -1ll, 0 );
				}
				label$809:;
				label$808:;
			}
			label$807:;
			label$802:;
		}
		HMOVEKDOWN(  );
	}
	goto label$800;
	label$801:;
	{
		int64 TMP$148$2;
		TMP$148$2 = *(int64*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll);
		if( TMP$148$2 == 256ll ) goto label$812;
		label$813:;
		if( TMP$148$2 == 257ll ) goto label$812;
		label$814:;
		if( (uint64)TMP$148$2 != ENDCHAR$1 ) goto label$811;
		label$812:;
		{
			goto label$797;
		}
		goto label$810;
		label$811:;
		{
			if( SKIPLINE$1 != 0ll ) goto label$817;
			{
				FBSTRING TMP$149$4;
				__builtin_memset( &TMP$149$4, 0, 24ll );
				FBSTRING* vr$26 = fb_StrConcat( &TMP$149$4, (void*)DST$1, 0ll, (void*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 24ll), 1025ll );
				fb_StrAssign( (void*)DST$1, 0ll, (void*)vr$26, -1ll, 0 );
			}
			label$817:;
			label$816:;
		}
		label$815:;
		label$810:;
	}
	label$818:;
	{
		uint64 vr$27 = LEXCURRENTCHAR( 0ll );
		CHAR$1 = vr$27;
		{
			uint64 TMP$150$3;
			TMP$150$3 = CHAR$1;
			goto label$822;
			label$823:;
			{
				*(int64*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) = 256ll;
				*(int64*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 8ll) = 6ll;
				goto label$797;
			}
			goto label$821;
			label$824:;
			{
				LEXEATCHAR(  );
				if( CHAR$1 != 13ull ) goto label$826;
				{
					uint64 vr$33 = LEXCURRENTCHAR( 0ll );
					if( vr$33 != 10ull ) goto label$828;
					{
						LEXEATCHAR(  );
						label$828:;
					}
				}
				label$826:;
				label$825:;
				*(int64*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) = 257ll;
				*(int64*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 8ll) = 6ll;
				goto label$797;
			}
			goto label$821;
			label$829:;
			{
				if( CHAR$1 != ENDCHAR$1 ) goto label$831;
				{
					*(int64*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) = (int64)ENDCHAR$1;
					*(int64*)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 8ll) = 6ll;
					goto label$797;
				}
				label$831:;
				label$830:;
			}
			goto label$821;
			label$822:;
			static const void* tmp$152[14ll] = {
				&&label$823,
				&&label$829,
				&&label$829,
				&&label$829,
				&&label$829,
				&&label$829,
				&&label$829,
				&&label$829,
				&&label$829,
				&&label$829,
				&&label$824,
				&&label$829,
				&&label$829,
				&&label$824,
			};
			if( TMP$150$3 > 13ll ) goto label$829;
			goto *tmp$152[TMP$150$3 - 0ll];
			label$821:;
		}
		LEXEATCHAR(  );
		if( SKIPLINE$1 != 0ll ) goto label$833;
		{
			FBSTRING TMP$151$3;
			FBSTRING* vr$45 = fb_CHR( 1, (int64)CHAR$1 );
			__builtin_memset( &TMP$151$3, 0, 24ll );
			FBSTRING* vr$48 = fb_StrConcat( &TMP$151$3, (void*)DST$1, 0ll, (void*)vr$45, -1ll );
			fb_StrAssign( (void*)DST$1, 0ll, (void*)vr$48, -1ll, 0 );
		}
		label$833:;
		label$832:;
	}
	label$820:;
	goto label$818;
	label$819:;
	label$797:;
}

void LEXSKIPLINE( void )
{
	label$834:;
	LEXREADLINE( 18446744073709551615ull, (uint8*)0ull, -1ll );
	label$835:;
}

FBSTRING* LEXPEEKCURRENTLINE( FBSTRING* TOKEN_POS$1, int64 DO_TRIM$1 )
{
	FBSTRING TMP$160$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$836:;
	static uint8 BUFFER$1[1025];
	FBSTRING RES$1;
	__builtin_memset( &RES$1, 0, 24ll );
	int64 P$1;
	__builtin_memset( &P$1, 0, 8ll );
	int64 OLD_P$1;
	__builtin_memset( &OLD_P$1, 0, 8ll );
	int64 START$1;
	__builtin_memset( &START$1, 0, 8ll );
	int64 TOKEN_LEN$1;
	__builtin_memset( &TOKEN_LEN$1, 0, 8ll );
	uint8* C$1;
	__builtin_memset( &C$1, 0, 8ll );
	uint64 CHAR$1;
	__builtin_memset( &CHAR$1, 0, 8ll );
	fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"", 1ll, 0 );
	if( *(int64*)((uint8*)&ENV$ + 768ll) == 0ll ) goto label$839;
	{
		fb_StrDelete( &RES$1 );
		goto label$837;
	}
	label$839:;
	label$838:;
	int64 vr$12 = fb_FileTell( (int32)*(int64*)((uint8*)&ENV$ + 480ll) );
	OLD_P$1 = vr$12;
	P$1 = *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 49592ll) + -512ll;
	START$1 = 512ll;
	if( P$1 >= 0ll ) goto label$841;
	{
		START$1 = START$1 + P$1;
		P$1 = 0ll;
	}
	label$841:;
	label$840:;
	int32 vr$19 = fb_FileGetStrLarge( (int32)*(int64*)((uint8*)&ENV$ + 480ll), P$1 + 1ll, (void*)BUFFER$1, 1025ll );
	if( (int64)vr$19 == 0ll ) goto label$842;
	void* vr$22 = fb_ErrorThrowAt( 2370, (uint8*)"fbc-1.01.0/src/compiler/lex.bas", (void*)0ull, (void*)0ull );
	goto *vr$22;
	label$842:;
	int32 vr$24 = fb_FileSeekLarge( (int32)*(int64*)((uint8*)&ENV$ + 480ll), OLD_P$1 );
	if( (int64)vr$24 == 0ll ) goto label$843;
	void* vr$27 = fb_ErrorThrowAt( 2371, (uint8*)"fbc-1.01.0/src/compiler/lex.bas", (void*)0ull, (void*)0ull );
	goto *vr$27;
	label$843:;
	C$1 = (uint8*)((uint8*)BUFFER$1 + START$1);
	TOKEN_LEN$1 = 0ll;
	if( START$1 <= 0ll ) goto label$845;
	{
		C$1 = (uint8*)(C$1 + -1ll);
		label$846:;
		{
			CHAR$1 = (uint64)*C$1;
			{
				if( CHAR$1 == 13ull ) goto label$851;
				label$852:;
				if( CHAR$1 != 10ull ) goto label$850;
				label$851:;
				{
					goto label$847;
				}
				label$850:;
				label$849:;
			}
			if( START$1 > 0ll ) goto label$854;
			{
				goto label$847;
			}
			label$854:;
			label$853:;
			TOKEN_LEN$1 = TOKEN_LEN$1 + 1ll;
			C$1 = (uint8*)(C$1 + -1ll);
			START$1 = START$1 + -1ll;
		}
		label$848:;
		goto label$846;
		label$847:;
		C$1 = (uint8*)(C$1 + 1ll);
	}
	label$845:;
	label$844:;
	fb_StrAssign( (void*)&RES$1, -1ll, (void*)"", 1ll, 0 );
	fb_StrAssign( (void*)TOKEN_POS$1, -1ll, (void*)"", 1ll, 0 );
	label$855:;
	{
		CHAR$1 = (uint64)*C$1;
		{
			if( CHAR$1 == 0ull ) goto label$860;
			label$861:;
			if( CHAR$1 == 13ull ) goto label$860;
			label$862:;
			if( CHAR$1 != 10ull ) goto label$859;
			label$860:;
			{
				goto label$856;
			}
			label$859:;
			label$858:;
		}
		FBSTRING* vr$46 = fb_CHR( 1, (int64)CHAR$1 );
		FBSTRING* vr$48 = fb_StrConcatAssign( (void*)&RES$1, -1ll, (void*)vr$46, -1ll, 0 );
		if( TOKEN_LEN$1 <= 0ll ) goto label$864;
		{
			int64 TMP$154$3;
			FBSTRING TMP$155$3;
			if( CHAR$1 != 9ull ) goto label$865;
			TMP$154$3 = 9ll;
			goto label$890;
			label$865:;
			TMP$154$3 = 32ll;
			label$890:;
			FBSTRING* vr$51 = fb_CHR( 1, TMP$154$3 );
			__builtin_memset( &TMP$155$3, 0, 24ll );
			FBSTRING* vr$54 = fb_StrConcat( &TMP$155$3, (void*)TOKEN_POS$1, -1ll, (void*)vr$51, -1ll );
			FBSTRING* vr$55 = fb_StrAssign( (void*)TOKEN_POS$1, -1ll, (void*)vr$54, -1ll, 0 );
			TOKEN_LEN$1 = TOKEN_LEN$1 + -1ll;
		}
		label$864:;
		label$863:;
		C$1 = (uint8*)(C$1 + 1ll);
	}
	label$857:;
	goto label$855;
	label$856:;
	if( DO_TRIM$1 == 0ll ) goto label$867;
	{
		int64 I$2;
		__builtin_memset( &I$2, 0, 8ll );
		{
			I$2 = 0ll;
			int64 TMP$156$3;
			int64 vr$61 = fb_StrLen( (void*)&RES$1, -1ll );
			TMP$156$3 = vr$61 + -1ll;
			goto label$868;
			label$871:;
			{
				{
					uint8 TMP$157$5;
					TMP$157$5 = *(uint8*)((uint8*)*(uint8**)&RES$1 + I$2);
					if( (int64)TMP$157$5 == 9ll ) goto label$874;
					label$875:;
					if( (int64)TMP$157$5 != 32ll ) goto label$873;
					label$874:;
					{
					}
					goto label$872;
					label$873:;
					{
						goto label$870;
					}
					label$876:;
					label$872:;
				}
			}
			label$869:;
			I$2 = I$2 + 1ll;
			label$868:;
			if( I$2 <= TMP$156$3 ) goto label$871;
			label$870:;
		}
		int64 vr$71 = fb_StrLen( (void*)&RES$1, -1ll );
		if( I$2 >= vr$71 ) goto label$878;
		{
			FBSTRING* vr$75 = fb_StrMid( &RES$1, I$2 + 1ll, -1ll );
			FBSTRING* vr$77 = fb_StrAssign( (void*)&RES$1, -1ll, (void*)vr$75, -1ll, 0 );
		}
		goto label$877;
		label$878:;
		{
			fb_StrAssign( (void*)&RES$1, -1ll, (void*)"", 1ll, 0 );
		}
		label$877:;
		{
			int64 vr$80 = fb_StrLen( (void*)&RES$1, -1ll );
			I$2 = vr$80 + -1ll;
			goto label$879;
			label$882:;
			{
				{
					uint8 TMP$158$5;
					TMP$158$5 = *(uint8*)((uint8*)*(uint8**)&RES$1 + I$2);
					if( (int64)TMP$158$5 == 9ll ) goto label$885;
					label$886:;
					if( (int64)TMP$158$5 != 32ll ) goto label$884;
					label$885:;
					{
					}
					goto label$883;
					label$884:;
					{
						goto label$881;
					}
					label$887:;
					label$883:;
				}
			}
			label$880:;
			I$2 = I$2 + -1ll;
			label$879:;
			if( I$2 >= 0ll ) goto label$882;
			label$881:;
		}
		if( I$2 <= 0ll ) goto label$889;
		{
			FBSTRING* vr$92 = fb_LEFT( &RES$1, I$2 + 1ll );
			FBSTRING* vr$94 = fb_StrAssign( (void*)&RES$1, -1ll, (void*)vr$92, -1ll, 0 );
		}
		label$889:;
		label$888:;
	}
	label$867:;
	label$866:;
	__builtin_memset( &TMP$160$1, 0, 24ll );
	FBSTRING* vr$97 = fb_StrConcat( &TMP$160$1, (void*)TOKEN_POS$1, -1ll, (void*)"^", 2ll );
	FBSTRING* vr$98 = fb_StrAssign( (void*)TOKEN_POS$1, -1ll, (void*)vr$97, -1ll, 0 );
	FBSTRING* vr$101 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&RES$1, -1ll, 0 );
	fb_StrDelete( &RES$1 );
	label$837:;
	FBSTRING* vr$104 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$104;
}

__attribute__(( constructor )) static void fb_ctor__lex( void )
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

static void HCOLLECTCHARFORDEBUGOUTPUT( uint64 CHAR$1 )
{
	label$38:;
	if( CHAR$1 >= 32ull ) goto label$41;
	{
		{
			uint64 TMP$85$3;
			TMP$85$3 = CHAR$1;
			goto label$43;
			label$44:;
			{
				goto label$39;
			}
			goto label$42;
			label$45:;
			{
			}
			goto label$42;
			label$46:;
			{
				CHAR$1 = 63ull;
			}
			goto label$42;
			label$43:;
			static const void* tmp$161[14ll] = {
				&&label$44,
				&&label$46,
				&&label$46,
				&&label$46,
				&&label$46,
				&&label$46,
				&&label$46,
				&&label$46,
				&&label$46,
				&&label$45,
				&&label$44,
				&&label$45,
				&&label$45,
				&&label$44,
			};
			if( TMP$85$3 > 13ll ) goto label$46;
			goto *tmp$161[TMP$85$3 - 0ll];
			label$42:;
		}
	}
	goto label$40;
	label$41:;
	if( CHAR$1 <= 255ull ) goto label$47;
	{
		CHAR$1 = 63ull;
	}
	label$47:;
	label$40:;
	DZSTRCONCATASSIGNC( (struct $8DZSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 49600ll), CHAR$1 );
	label$39:;
}

static uint64 HREADCHAR( void )
{
	uint64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$48:;
	uint64 CHAR$1;
	if( *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16752ll) <= 0ll ) goto label$51;
	{
		if( *(int64*)((uint8*)&ENV$ + 768ll) != 0ll ) goto label$53;
		{
			CHAR$1 = (uint64)*(*(uint8**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16760ll));
		}
		goto label$52;
		label$53:;
		{
			CHAR$1 = (uint64)*(*(uint32**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16760ll));
		}
		label$52:;
		if( *(int64*)((uint8*)&ENV$ + 288ll) == 0ll ) goto label$55;
		{
			if( *(int64*)((uint8*)&ENV$ + 1128ll) != 0ll ) goto label$57;
			{
				if( *(int64*)((uint8*)&LEX$ + 843752ll) != 0ll ) goto label$59;
				{
					*(int64*)((uint8*)&LEX$ + 843752ll) = -1ll;
					DZSTRCONCATASSIGN( (struct $8DZSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 49600ll), (uint8*)" [Macro Expansion: " );
				}
				label$59:;
				label$58:;
				HCOLLECTCHARFORDEBUGOUTPUT( CHAR$1 );
			}
			label$57:;
			label$56:;
		}
		label$55:;
		label$54:;
	}
	goto label$50;
	label$51:;
	{
		if( *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16792ll) != 0ll ) goto label$61;
		{
			int32 vr$18 = fb_FileEof( (int32)*(int64*)((uint8*)&ENV$ + 480ll) );
			if( (int64)vr$18 != 0ll ) goto label$63;
			{
				int64 vr$22 = fb_FileTell( (int32)*(int64*)((uint8*)&ENV$ + 480ll) );
				*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 49584ll) = vr$22;
				{
					uint64 TMP$88$5;
					TMP$88$5 = *(uint64*)((uint8*)&ENV$ + 768ll);
					goto label$65;
					label$66:;
					{
						int32 vr$27 = fb_FileGetStrLarge( (int32)*(int64*)((uint8*)&ENV$ + 480ll), 0ll, (void*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16808ll), 8193ll );
						if( (int64)vr$27 != 0ll ) goto label$68;
						{
							int64 vr$31 = fb_FileTell( (int32)*(int64*)((uint8*)&ENV$ + 480ll) );
							*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16792ll) = vr$31 - *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 49584ll);
							*(uint8**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16800ll) = (uint8*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16808ll);
						}
						label$68:;
						label$67:;
					}
					goto label$64;
					label$69:;
					{
						LEXREADUTF8(  );
					}
					goto label$64;
					label$70:;
					{
						LEXREADUTF16LE(  );
					}
					goto label$64;
					label$71:;
					{
						LEXREADUTF16BE(  );
					}
					goto label$64;
					label$72:;
					{
						LEXREADUTF32LE(  );
					}
					goto label$64;
					label$73:;
					{
						LEXREADUTF32BE(  );
					}
					goto label$64;
					label$65:;
					static const void* tmp$162[6ll] = {
						&&label$66,
						&&label$69,
						&&label$70,
						&&label$71,
						&&label$72,
						&&label$73,
					};
					if( TMP$88$5 > 5ll ) goto label$64;
					goto *tmp$162[TMP$88$5 - 0ll];
					label$64:;
				}
			}
			label$63:;
			label$62:;
		}
		label$61:;
		label$60:;
		if( *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16792ll) <= 0ll ) goto label$75;
		{
			if( *(int64*)((uint8*)&ENV$ + 768ll) != 0ll ) goto label$77;
			{
				CHAR$1 = (uint64)*(*(uint8**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16800ll));
			}
			goto label$76;
			label$77:;
			{
				CHAR$1 = (uint64)*(*(uint32**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16800ll));
			}
			label$76:;
		}
		goto label$74;
		label$75:;
		{
			CHAR$1 = 0ull;
		}
		label$74:;
		if( *(int64*)((uint8*)&ENV$ + 288ll) == 0ll ) goto label$79;
		{
			if( *(int64*)((uint8*)&ENV$ + 1128ll) != 0ll ) goto label$81;
			{
				if( *(int64*)((uint8*)&LEX$ + 843752ll) == 0ll ) goto label$83;
				{
					*(int64*)((uint8*)&LEX$ + 843752ll) = 0ll;
					DZSTRCONCATASSIGN( (struct $8DZSTRING*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 49600ll), (uint8*)" ] " );
				}
				label$83:;
				label$82:;
				HCOLLECTCHARFORDEBUGOUTPUT( CHAR$1 );
			}
			label$81:;
			label$80:;
		}
		label$79:;
		label$78:;
	}
	label$50:;
	fb$result$1 = CHAR$1;
	label$49:;
	return fb$result$1;
}

static void HSKIPCHAR( void )
{
	label$88:;
	if( *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16752ll) <= 0ll ) goto label$91;
	{
		*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16752ll) = *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16752ll) + -1ll;
		if( *(int64*)((uint8*)&ENV$ + 768ll) != 0ll ) goto label$93;
		{
			*(uint8**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16760ll) = (uint8*)((uint8*)*(uint8**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16760ll) + 1ll);
		}
		goto label$92;
		label$93:;
		{
			*(uint32**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16760ll) = (uint32*)((uint8*)*(uint32**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16760ll) + 4ll);
		}
		label$92:;
		if( *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16752ll) != 0ll ) goto label$95;
		{
			*(struct $8FBSYMBOL**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16736ll) = (struct $8FBSYMBOL*)0ull;
		}
		label$95:;
		label$94:;
	}
	goto label$90;
	label$91:;
	if( *(uint64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16696ll) == 0ull ) goto label$96;
	{
		*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16792ll) = *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16792ll) + -1ll;
		if( *(int64*)((uint8*)&ENV$ + 768ll) != 0ll ) goto label$98;
		{
			*(uint8**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16800ll) = (uint8*)((uint8*)*(uint8**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16800ll) + 1ll);
		}
		goto label$97;
		label$98:;
		{
			*(uint32**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16800ll) = (uint32*)((uint8*)*(uint32**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16800ll) + 4ll);
		}
		label$97:;
	}
	label$96:;
	label$90:;
	label$89:;
}

static void HREADIDENTIFIER( uint8* PID$1, int64* TLEN$1, int64* DTYPE$1, $8LEXCHECK FLAGS$1 )
{
	label$115:;
	uint64 C$1;
	int64 SKIPCHAR$1;
	uint64 vr$0 = LEXEATCHAR(  );
	*PID$1 = (uint8)vr$0;
	PID$1 = (uint8*)((uint8*)PID$1 + 1ll);
	*TLEN$1 = *TLEN$1 + 1ll;
	SKIPCHAR$1 = 0ll;
	label$117:;
	{
		uint64 vr$7 = LEXCURRENTCHAR( 0ll );
		C$1 = vr$7;
		{
			uint64 TMP$90$3;
			TMP$90$3 = C$1;
			goto label$121;
			label$122:;
			{
			}
			goto label$120;
			label$123:;
			{
				if( (FLAGS$1 & 128ll) != 0ll ) goto label$125;
				{
					goto label$118;
				}
				label$125:;
				label$124:;
			}
			goto label$120;
			label$126:;
			{
				goto label$118;
			}
			goto label$120;
			label$121:;
			static const void* tmp$163[77ll] = {
				&&label$123,
				&&label$126,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$126,
				&&label$126,
				&&label$126,
				&&label$126,
				&&label$126,
				&&label$126,
				&&label$126,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$126,
				&&label$126,
				&&label$126,
				&&label$126,
				&&label$122,
				&&label$126,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
				&&label$122,
			};
			if( TMP$90$3 < 46ll ) goto label$126;
			if( TMP$90$3 > 122ll ) goto label$126;
			goto *tmp$163[TMP$90$3 - 46ll];
			label$120:;
		}
		LEXEATCHAR(  );
		if( SKIPCHAR$1 != 0ll ) goto label$128;
		{
			if( *TLEN$1 != 128ll ) goto label$130;
			{
				if( (FLAGS$1 & 1ll) != 0ll ) goto label$132;
				{
					FLAGS$1 = FLAGS$1 | 1ll;
					ERRREPORTWARN( 7ll, (uint8*)0ull, 1ll );
				}
				label$132:;
				label$131:;
				SKIPCHAR$1 = -1ll;
			}
			goto label$129;
			label$130:;
			{
				*PID$1 = (uint8)C$1;
				PID$1 = (uint8*)((uint8*)PID$1 + 1ll);
				*TLEN$1 = *TLEN$1 + 1ll;
			}
			label$129:;
		}
		label$128:;
		label$127:;
	}
	label$119:;
	goto label$117;
	label$118:;
	*PID$1 = (uint8)0u;
	*DTYPE$1 = 2147483648ll;
	if( (FLAGS$1 & 8ll) != 0ll ) goto label$134;
	{
		{
			uint64 TMP$91$3;
			uint64 vr$26 = LEXCURRENTCHAR( 0ll );
			TMP$91$3 = vr$26;
			goto label$136;
			label$137:;
			{
				*DTYPE$1 = *(int64*)((uint8*)&ENV$ + 1160ll);
				uint64 vr$28 = LEXEATCHAR(  );
				C$1 = vr$28;
			}
			goto label$135;
			label$138:;
			{
				*DTYPE$1 = 10ll;
				uint64 vr$30 = LEXEATCHAR(  );
				C$1 = vr$30;
			}
			goto label$135;
			label$139:;
			{
				*DTYPE$1 = 14ll;
				uint64 vr$32 = LEXEATCHAR(  );
				C$1 = vr$32;
			}
			goto label$135;
			label$140:;
			{
				uint64 vr$33 = LEXGETLOOKAHEADCHAR( 0ll );
				if( vr$33 == 35ull ) goto label$142;
				{
					*DTYPE$1 = 15ll;
					uint64 vr$36 = LEXEATCHAR(  );
					C$1 = vr$36;
				}
				label$142:;
				label$141:;
			}
			goto label$135;
			label$143:;
			{
				*DTYPE$1 = 16ll;
				uint64 vr$38 = LEXEATCHAR(  );
				C$1 = vr$38;
			}
			goto label$135;
			label$136:;
			static const void* tmp$164[6ll] = {
				&&label$139,
				&&label$135,
				&&label$140,
				&&label$143,
				&&label$137,
				&&label$138,
			};
			if( TMP$91$3 < 33ll ) goto label$135;
			if( TMP$91$3 > 38ll ) goto label$135;
			goto *tmp$164[TMP$91$3 - 33ll];
			label$135:;
		}
	}
	label$134:;
	label$133:;
	label$116:;
}

static uint64 HREADNONDECNUMBER( uint8** PNUM$1, int64* TLEN$1, int64* DTYPE$1, $8LEXCHECK FLAGS$1 )
{
	int64 TMP$98$1;
	uint64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$144:;
	uint64 VALUE$1;
	uint64 C$1;
	uint64 FIRST_C$1;
	uint64 VALUE64$1;
	int64 LGT$1;
	int64 SKIPCHAR$1;
	VALUE$1 = 0ull;
	LGT$1 = 0ll;
	SKIPCHAR$1 = 0ll;
	uint64 vr$1 = LEXCURRENTCHAR( 0ll );
	C$1 = vr$1;
	{
		uint64 TMP$92$2;
		TMP$92$2 = C$1;
		goto label$147;
		label$148:;
		{
			*(*PNUM$1) = (uint8)38u;
			*(uint8*)((uint8*)*PNUM$1 + 1ll) = (uint8)C$1;
			*PNUM$1 = (uint8*)((uint8*)*PNUM$1 + 2ll);
			*TLEN$1 = *TLEN$1 + 2ll;
			LEXEATCHAR(  );
			if( (FLAGS$1 & 9ll) != 0ll ) goto label$150;
			{
				label$151:;
				uint64 vr$15 = LEXCURRENTCHAR( 0ll );
				if( vr$15 != 48ull ) goto label$152;
				{
					*(*PNUM$1) = (uint8)48u;
					*PNUM$1 = (uint8*)((uint8*)*PNUM$1 + 1ll);
					*TLEN$1 = *TLEN$1 + 1ll;
					LEXEATCHAR(  );
				}
				goto label$151;
				label$152:;
			}
			label$150:;
			label$149:;
			label$153:;
			{
				{
					uint64 TMP$93$5;
					uint64 vr$25 = LEXCURRENTCHAR( 0ll );
					TMP$93$5 = vr$25;
					if( TMP$93$5 < 97ull ) goto label$159;
					if( TMP$93$5 <= 102ull ) goto label$158;
					label$159:;
					if( TMP$93$5 < 65ull ) goto label$160;
					if( TMP$93$5 <= 70ull ) goto label$158;
					label$160:;
					if( TMP$93$5 < 48ull ) goto label$157;
					if( TMP$93$5 > 57ull ) goto label$157;
					label$158:;
					{
						uint64 vr$32 = LEXEATCHAR(  );
						C$1 = vr$32;
						if( SKIPCHAR$1 != 0ll ) goto label$162;
						{
							*(*PNUM$1) = (uint8)C$1;
							*PNUM$1 = (uint8*)((uint8*)*PNUM$1 + 1ll);
							*TLEN$1 = *TLEN$1 + 1ll;
							C$1 = C$1 + 18446744073709551568ull;
							if( C$1 <= 9ull ) goto label$164;
							{
								C$1 = C$1 + 18446744073709551609ull;
							}
							label$164:;
							label$163:;
							if( C$1 <= 16ull ) goto label$166;
							{
								C$1 = C$1 + 18446744073709551584ull;
							}
							label$166:;
							label$165:;
							LGT$1 = LGT$1 + 1ll;
							if( LGT$1 <= 8ll ) goto label$168;
							{
								if( LGT$1 != 9ll ) goto label$170;
								{
									*DTYPE$1 = 12ll;
									VALUE64$1 = (VALUE$1 << 4ull) + C$1;
								}
								goto label$169;
								label$170:;
								if( LGT$1 != 17ll ) goto label$171;
								{
									if( (FLAGS$1 & 1ll) != 0ll ) goto label$173;
									{
										ERRREPORTWARN( 8ll, (uint8*)0ull, 1ll );
									}
									label$173:;
									label$172:;
									SKIPCHAR$1 = -1ll;
								}
								goto label$169;
								label$171:;
								{
									VALUE64$1 = (VALUE64$1 << 4ull) + C$1;
								}
								label$169:;
							}
							goto label$167;
							label$168:;
							{
								if( LGT$1 != 5ll ) goto label$175;
								{
									*DTYPE$1 = 10ll;
								}
								label$175:;
								label$174:;
								VALUE$1 = (VALUE$1 << 4ull) + C$1;
							}
							label$167:;
						}
						label$162:;
						label$161:;
					}
					goto label$156;
					label$157:;
					{
						goto label$154;
					}
					label$176:;
					label$156:;
				}
			}
			label$155:;
			goto label$153;
			label$154:;
		}
		goto label$146;
		label$177:;
		{
			*(*PNUM$1) = (uint8)38u;
			*(uint8*)((uint8*)*PNUM$1 + 1ll) = (uint8)C$1;
			*PNUM$1 = (uint8*)((uint8*)*PNUM$1 + 2ll);
			*TLEN$1 = *TLEN$1 + 2ll;
			LEXEATCHAR(  );
			if( (FLAGS$1 & 9ll) != 0ll ) goto label$179;
			{
				label$180:;
				uint64 vr$76 = LEXCURRENTCHAR( 0ll );
				if( vr$76 != 48ull ) goto label$181;
				{
					*(*PNUM$1) = (uint8)48u;
					*PNUM$1 = (uint8*)((uint8*)*PNUM$1 + 1ll);
					*TLEN$1 = *TLEN$1 + 1ll;
					LEXEATCHAR(  );
				}
				goto label$180;
				label$181:;
			}
			label$179:;
			label$178:;
			uint64 vr$86 = LEXCURRENTCHAR( 0ll );
			FIRST_C$1 = vr$86;
			label$182:;
			{
				{
					uint64 TMP$94$5;
					uint64 vr$87 = LEXCURRENTCHAR( 0ll );
					TMP$94$5 = vr$87;
					if( TMP$94$5 < 48ull ) goto label$186;
					if( TMP$94$5 > 55ull ) goto label$186;
					label$187:;
					{
						uint64 vr$90 = LEXEATCHAR(  );
						C$1 = vr$90;
						if( SKIPCHAR$1 != 0ll ) goto label$189;
						{
							*(*PNUM$1) = (uint8)C$1;
							*PNUM$1 = (uint8*)((uint8*)*PNUM$1 + 1ll);
							*TLEN$1 = *TLEN$1 + 1ll;
							C$1 = C$1 + 18446744073709551568ull;
							LGT$1 = LGT$1 + 1ll;
							if( LGT$1 <= 10ll ) goto label$191;
							{
								{
									uint64 TMP$95$9;
									TMP$95$9 = (uint64)LGT$1;
									goto label$193;
									label$194:;
									{
										if( FIRST_C$1 <= 51ull ) goto label$196;
										{
											*DTYPE$1 = 12ll;
											VALUE64$1 = (VALUE$1 << 3ull) + C$1;
										}
										goto label$195;
										label$196:;
										{
											VALUE$1 = (VALUE$1 << 3ull) + C$1;
										}
										label$195:;
									}
									goto label$192;
									label$197:;
									{
										int64 TMP$96$10;
										if( (*DTYPE$1 & 480ll) == 0ll ) goto label$198;
										TMP$96$10 = 22ll;
										goto label$891;
										label$198:;
										TMP$96$10 = *DTYPE$1 & 31ll;
										label$891:;
										if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$96$10 * 56ll)) + 8ll) >= 8ll ) goto label$200;
										{
											*DTYPE$1 = 12ll;
											VALUE64$1 = VALUE$1;
										}
										label$200:;
										label$199:;
										VALUE64$1 = (VALUE64$1 << 3ull) + C$1;
									}
									goto label$192;
									label$201:;
									{
										if( FIRST_C$1 <= 49ull ) goto label$203;
										{
											if( (FLAGS$1 & 1ll) != 0ll ) goto label$205;
											{
												ERRREPORTWARN( 8ll, (uint8*)0ull, 1ll );
											}
											label$205:;
											label$204:;
											SKIPCHAR$1 = -1ll;
										}
										goto label$202;
										label$203:;
										{
											VALUE64$1 = (VALUE64$1 << 3ull) + C$1;
										}
										label$202:;
									}
									goto label$192;
									label$206:;
									{
										if( (FLAGS$1 & 1ll) != 0ll ) goto label$208;
										{
											ERRREPORTWARN( 8ll, (uint8*)0ull, 1ll );
										}
										label$208:;
										label$207:;
										SKIPCHAR$1 = -1ll;
									}
									goto label$192;
									label$209:;
									{
										VALUE64$1 = (VALUE64$1 << 3ull) + C$1;
									}
									goto label$192;
									label$193:;
									static const void* tmp$165[13ll] = {
										&&label$194,
										&&label$197,
										&&label$209,
										&&label$209,
										&&label$209,
										&&label$209,
										&&label$209,
										&&label$209,
										&&label$209,
										&&label$209,
										&&label$209,
										&&label$201,
										&&label$206,
									};
									if( TMP$95$9 < 11ll ) goto label$209;
									if( TMP$95$9 > 23ll ) goto label$209;
									goto *tmp$165[TMP$95$9 - 11ll];
									label$192:;
								}
							}
							goto label$190;
							label$191:;
							{
								if( LGT$1 != 6ll ) goto label$211;
								{
									if( FIRST_C$1 <= 49ull ) goto label$213;
									{
										*DTYPE$1 = 10ll;
									}
									label$213:;
									label$212:;
								}
								goto label$210;
								label$211:;
								if( LGT$1 != 7ll ) goto label$214;
								{
									*DTYPE$1 = 10ll;
								}
								label$214:;
								label$210:;
								VALUE$1 = (VALUE$1 << 3ull) + C$1;
							}
							label$190:;
						}
						label$189:;
						label$188:;
					}
					goto label$185;
					label$186:;
					{
						goto label$183;
					}
					label$215:;
					label$185:;
				}
			}
			label$184:;
			goto label$182;
			label$183:;
		}
		goto label$146;
		label$216:;
		{
			*(*PNUM$1) = (uint8)38u;
			*(uint8*)((uint8*)*PNUM$1 + 1ll) = (uint8)C$1;
			*PNUM$1 = (uint8*)((uint8*)*PNUM$1 + 2ll);
			*TLEN$1 = *TLEN$1 + 2ll;
			LEXEATCHAR(  );
			if( (FLAGS$1 & 9ll) != 0ll ) goto label$218;
			{
				label$219:;
				uint64 vr$149 = LEXCURRENTCHAR( 0ll );
				if( vr$149 != 48ull ) goto label$220;
				{
					*(*PNUM$1) = (uint8)48u;
					*PNUM$1 = (uint8*)((uint8*)*PNUM$1 + 1ll);
					*TLEN$1 = *TLEN$1 + 1ll;
					LEXEATCHAR(  );
				}
				goto label$219;
				label$220:;
			}
			label$218:;
			label$217:;
			label$221:;
			{
				{
					uint64 TMP$97$5;
					uint64 vr$159 = LEXCURRENTCHAR( 0ll );
					TMP$97$5 = vr$159;
					if( TMP$97$5 == 48ull ) goto label$226;
					label$227:;
					if( TMP$97$5 != 49ull ) goto label$225;
					label$226:;
					{
						uint64 vr$162 = LEXEATCHAR(  );
						C$1 = vr$162;
						if( SKIPCHAR$1 != 0ll ) goto label$229;
						{
							*(*PNUM$1) = (uint8)C$1;
							*PNUM$1 = (uint8*)((uint8*)*PNUM$1 + 1ll);
							*TLEN$1 = *TLEN$1 + 1ll;
							C$1 = C$1 + 18446744073709551568ull;
							LGT$1 = LGT$1 + 1ll;
							if( LGT$1 <= 32ll ) goto label$231;
							{
								if( LGT$1 != 33ll ) goto label$233;
								{
									*DTYPE$1 = 12ll;
									VALUE64$1 = (VALUE$1 << 1ull) + C$1;
								}
								goto label$232;
								label$233:;
								if( LGT$1 != 65ll ) goto label$234;
								{
									if( (FLAGS$1 & 1ll) != 0ll ) goto label$236;
									{
										ERRREPORTWARN( 8ll, (uint8*)0ull, 1ll );
									}
									label$236:;
									label$235:;
									SKIPCHAR$1 = -1ll;
								}
								goto label$232;
								label$234:;
								{
									VALUE64$1 = (VALUE64$1 << 1ull) + C$1;
								}
								label$232:;
							}
							goto label$230;
							label$231:;
							{
								if( LGT$1 != 17ll ) goto label$238;
								{
									*DTYPE$1 = 10ll;
								}
								label$238:;
								label$237:;
								VALUE$1 = (VALUE$1 << 1ull) + C$1;
							}
							label$230:;
						}
						label$229:;
						label$228:;
					}
					goto label$224;
					label$225:;
					{
						goto label$222;
					}
					label$239:;
					label$224:;
				}
			}
			label$223:;
			goto label$221;
			label$222:;
		}
		goto label$146;
		label$240:;
		{
			goto label$145;
		}
		goto label$146;
		label$147:;
		static const void* tmp$166[46ll] = {
			&&label$216,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$148,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$177,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$216,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$148,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$240,
			&&label$177,
		};
		if( TMP$92$2 < 66ll ) goto label$240;
		if( TMP$92$2 > 111ll ) goto label$240;
		goto *tmp$166[TMP$92$2 - 66ll];
		label$146:;
	}
	if( LGT$1 != 0ll ) goto label$242;
	{
		*(*PNUM$1) = (uint8)48u;
		*PNUM$1 = (uint8*)((uint8*)*PNUM$1 + 1ll);
		*TLEN$1 = *TLEN$1 + 1ll;
	}
	label$242:;
	label$241:;
	if( (*DTYPE$1 & 480ll) == 0ll ) goto label$243;
	TMP$98$1 = 22ll;
	goto label$892;
	label$243:;
	TMP$98$1 = *DTYPE$1 & 31ll;
	label$892:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$98$1 * 56ll)) + 8ll) >= 8ll ) goto label$245;
	{
		fb$result$1 = VALUE$1;
	}
	goto label$244;
	label$245:;
	{
		fb$result$1 = VALUE64$1;
	}
	label$244:;
	label$145:;
	return fb$result$1;
}

static void HREADFLOATNUMBER( uint8** PNUM$1, int64* TLEN$1, int64* DTYPE$1, int64 HASDOT$1, $8LEXCHECK FLAGS$1 )
{
	int64 TMP$99$1;
	label$246:;
	uint64 C$1;
	int64 LLEN$1;
	int64 SKIPCHAR$1;
	*DTYPE$1 = *(int64*)((uint8*)&ENV$ + 1200ll);
	LLEN$1 = *TLEN$1;
	SKIPCHAR$1 = 0ll;
	label$248:;
	{
		uint64 vr$2 = LEXCURRENTCHAR( 0ll );
		C$1 = vr$2;
		{
			if( C$1 < 48ull ) goto label$252;
			if( C$1 > 57ull ) goto label$252;
			label$253:;
			{
				LEXEATCHAR(  );
				if( SKIPCHAR$1 != 0ll ) goto label$255;
				{
					*(*PNUM$1) = (uint8)C$1;
					*PNUM$1 = (uint8*)((uint8*)*PNUM$1 + 1ll);
					*TLEN$1 = *TLEN$1 + 1ll;
				}
				label$255:;
				label$254:;
			}
			goto label$251;
			label$252:;
			{
				goto label$249;
			}
			label$256:;
			label$251:;
		}
		if( *TLEN$1 != 64ll ) goto label$258;
		{
			if( SKIPCHAR$1 != 0ll ) goto label$260;
			{
				SKIPCHAR$1 = -1ll;
			}
			goto label$259;
			label$260:;
			{
				if( (FLAGS$1 & 1ll) != 0ll ) goto label$262;
				{
					FLAGS$1 = FLAGS$1 | 1ll;
					ERRREPORTWARN( 8ll, (uint8*)0ull, 1ll );
				}
				label$262:;
				label$261:;
			}
			label$259:;
		}
		label$258:;
		label$257:;
	}
	label$250:;
	goto label$248;
	label$249:;
	if( HASDOT$1 == 0ll ) goto label$263;
	TMP$99$1 = 1ll;
	goto label$893;
	label$263:;
	TMP$99$1 = 0ll;
	label$893:;
	if( *TLEN$1 <= (TMP$99$1 + 7ll) ) goto label$265;
	{
		*DTYPE$1 = 15ll;
	}
	label$265:;
	label$264:;
	{
		uint64 TMP$100$2;
		uint64 vr$26 = LEXCURRENTCHAR( 0ll );
		TMP$100$2 = vr$26;
		goto label$267;
		label$268:;
		{
			uint64 vr$27 = LEXEATCHAR(  );
			C$1 = vr$27;
			if( ((int64)-(C$1 == 100ull) | (int64)-(C$1 == 68ull)) == 0ll ) goto label$270;
			{
				*DTYPE$1 = 15ll;
			}
			label$270:;
			label$269:;
			if( SKIPCHAR$1 != 0ll ) goto label$272;
			{
				if( FLAGS$1 != 0ll ) goto label$274;
				{
					C$1 = 101ull;
				}
				label$274:;
				label$273:;
				*(*PNUM$1) = (uint8)C$1;
				*PNUM$1 = (uint8*)((uint8*)*PNUM$1 + 1ll);
				*TLEN$1 = *TLEN$1 + 1ll;
			}
			label$272:;
			label$271:;
			uint64 vr$44 = LEXCURRENTCHAR( 0ll );
			C$1 = vr$44;
			if( ((int64)-(C$1 == 43ull) | (int64)-(C$1 == 45ull)) == 0ll ) goto label$276;
			{
				LEXEATCHAR(  );
				if( SKIPCHAR$1 != 0ll ) goto label$278;
				{
					*(*PNUM$1) = (uint8)C$1;
					*PNUM$1 = (uint8*)((uint8*)*PNUM$1 + 1ll);
					*TLEN$1 = *TLEN$1 + 1ll;
				}
				label$278:;
				label$277:;
			}
			label$276:;
			label$275:;
			label$279:;
			{
				uint64 vr$59 = LEXCURRENTCHAR( 0ll );
				C$1 = vr$59;
				{
					uint64 TMP$101$5;
					TMP$101$5 = C$1;
					goto label$283;
					label$284:;
					{
						LEXEATCHAR(  );
						if( SKIPCHAR$1 != 0ll ) goto label$286;
						{
							*(*PNUM$1) = (uint8)C$1;
							*PNUM$1 = (uint8*)((uint8*)*PNUM$1 + 1ll);
							*TLEN$1 = *TLEN$1 + 1ll;
						}
						label$286:;
						label$285:;
					}
					goto label$282;
					label$287:;
					{
						goto label$280;
					}
					goto label$282;
					label$283:;
					static const void* tmp$167[10ll] = {
						&&label$284,
						&&label$284,
						&&label$284,
						&&label$284,
						&&label$284,
						&&label$284,
						&&label$284,
						&&label$284,
						&&label$284,
						&&label$284,
					};
					if( TMP$101$5 < 48ll ) goto label$287;
					if( TMP$101$5 > 57ll ) goto label$287;
					goto *tmp$167[TMP$101$5 - 48ll];
					label$282:;
				}
				if( *TLEN$1 != 64ll ) goto label$289;
				{
					if( SKIPCHAR$1 != 0ll ) goto label$291;
					{
						SKIPCHAR$1 = -1ll;
					}
					goto label$290;
					label$291:;
					{
						if( (FLAGS$1 & 1ll) != 0ll ) goto label$293;
						{
							FLAGS$1 = FLAGS$1 | 1ll;
							ERRREPORTWARN( 8ll, (uint8*)0ull, 1ll );
						}
						label$293:;
						label$292:;
					}
					label$290:;
				}
				label$289:;
				label$288:;
			}
			label$281:;
			goto label$279;
			label$280:;
		}
		goto label$266;
		label$267:;
		static const void* tmp$168[34ll] = {
			&&label$268,
			&&label$268,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$266,
			&&label$268,
			&&label$268,
		};
		if( TMP$100$2 < 68ll ) goto label$266;
		if( TMP$100$2 > 101ll ) goto label$266;
		goto *tmp$168[TMP$100$2 - 68ll];
		label$266:;
	}
	{
		uint64 TMP$102$2;
		uint64 vr$76 = LEXCURRENTCHAR( 0ll );
		TMP$102$2 = vr$76;
		goto label$295;
		label$296:;
		{
			*DTYPE$1 = 14ll;
			if( (FLAGS$1 & 1032ll) != 0ll ) goto label$298;
			{
				uint64 vr$80 = LEXEATCHAR(  );
				C$1 = vr$80;
			}
			label$298:;
			label$297:;
		}
		goto label$294;
		label$299:;
		{
			*DTYPE$1 = 14ll;
			if( (FLAGS$1 & 8ll) != 0ll ) goto label$301;
			{
				uint64 vr$84 = LEXEATCHAR(  );
				C$1 = vr$84;
			}
			label$301:;
			label$300:;
		}
		goto label$294;
		label$302:;
		{
			*DTYPE$1 = 15ll;
			if( (FLAGS$1 & 8ll) != 0ll ) goto label$304;
			{
				uint64 vr$88 = LEXEATCHAR(  );
				C$1 = vr$88;
			}
			label$304:;
			label$303:;
		}
		goto label$294;
		label$295:;
		static const void* tmp$169[70ll] = {
			&&label$299,
			&&label$294,
			&&label$302,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$296,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$294,
			&&label$296,
		};
		if( TMP$102$2 < 33ll ) goto label$294;
		if( TMP$102$2 > 102ll ) goto label$294;
		goto *tmp$169[TMP$102$2 - 33ll];
		label$294:;
	}
	if( FLAGS$1 != 0ll ) goto label$306;
	{
		if( (*TLEN$1 - LLEN$1) != 0ll ) goto label$308;
		{
			*(*PNUM$1) = (uint8)48u;
			*PNUM$1 = (uint8*)((uint8*)*PNUM$1 + 1ll);
			*TLEN$1 = *TLEN$1 + 1ll;
		}
		label$308:;
		label$307:;
	}
	label$306:;
	label$305:;
	label$247:;
}

static void HREADNUMBER( uint8* PNUM$1, int64* DTYPE$1, int64* TLEN$1, $8LEXCHECK FLAGS$1 )
{
	int64 TMP$107$1;
	label$309:;
	uint64 C$1;
	int64 HAVE_U_SUFFIX$1;
	uint64 VALUE$1;
	uint64 VALUE_PREV$1;
	int64 SKIPCHAR$1;
	int64 HASDOT$1;
	int64 WARN$1;
	*DTYPE$1 = 4ll;
	HAVE_U_SUFFIX$1 = 0ll;
	VALUE$1 = 0ull;
	*PNUM$1 = (uint8)0u;
	*TLEN$1 = 0ll;
	SKIPCHAR$1 = 0ll;
	uint64 vr$3 = LEXEATCHAR(  );
	C$1 = vr$3;
	{
		uint64 TMP$103$2;
		TMP$103$2 = C$1;
		goto label$312;
		label$313:;
		{
			if( (FLAGS$1 & 9ll) == 0ll ) goto label$315;
			{
				*PNUM$1 = (uint8)48u;
				PNUM$1 = (uint8*)((uint8*)PNUM$1 + 1ll);
				*TLEN$1 = *TLEN$1 + 1ll;
				VALUE$1 = 0ull;
			}
			label$315:;
			label$314:;
			goto label$316;
		}
		goto label$311;
		label$317:;
		{
			*PNUM$1 = (uint8)C$1;
			PNUM$1 = (uint8*)((uint8*)PNUM$1 + 1ll);
			*TLEN$1 = *TLEN$1 + 1ll;
			VALUE$1 = C$1 + 18446744073709551568ull;
			label$316:;
			label$318:;
			{
				uint64 vr$18 = LEXCURRENTCHAR( 0ll );
				C$1 = vr$18;
				{
					uint64 TMP$104$5;
					TMP$104$5 = C$1;
					goto label$322;
					label$323:;
					{
						LEXEATCHAR(  );
						if( *TLEN$1 <= 0ll ) goto label$325;
						{
							if( SKIPCHAR$1 != 0ll ) goto label$327;
							{
								*PNUM$1 = (uint8)48u;
								PNUM$1 = (uint8*)((uint8*)PNUM$1 + 1ll);
								*TLEN$1 = *TLEN$1 + 1ll;
								VALUE$1 = (VALUE$1 << 3ll) + (VALUE$1 << 1ll);
							}
							label$327:;
							label$326:;
						}
						label$325:;
						label$324:;
					}
					goto label$321;
					label$328:;
					{
						LEXEATCHAR(  );
						if( SKIPCHAR$1 != 0ll ) goto label$330;
						{
							*PNUM$1 = (uint8)C$1;
							PNUM$1 = (uint8*)((uint8*)PNUM$1 + 1ll);
							*TLEN$1 = *TLEN$1 + 1ll;
							VALUE$1 = (((VALUE$1 << 3ll) + (VALUE$1 << 1ll)) + C$1) + 18446744073709551568ull;
						}
						label$330:;
						label$329:;
					}
					goto label$321;
					label$331:;
					{
						if( C$1 != 46ull ) goto label$333;
						{
							uint64 vr$43 = LEXEATCHAR(  );
							C$1 = vr$43;
							if( SKIPCHAR$1 != 0ll ) goto label$335;
							{
								*PNUM$1 = (uint8)46u;
								PNUM$1 = (uint8*)((uint8*)PNUM$1 + 1ll);
								*TLEN$1 = *TLEN$1 + 1ll;
							}
							label$335:;
							label$334:;
							HASDOT$1 = -1ll;
						}
						goto label$332;
						label$333:;
						{
							HASDOT$1 = 0ll;
						}
						label$332:;
						HREADFLOATNUMBER( &PNUM$1, TLEN$1, DTYPE$1, HASDOT$1, FLAGS$1 );
						goto label$319;
					}
					goto label$321;
					label$336:;
					{
						goto label$319;
					}
					goto label$321;
					label$322:;
					static const void* tmp$170[56ll] = {
						&&label$331,
						&&label$336,
						&&label$323,
						&&label$328,
						&&label$328,
						&&label$328,
						&&label$328,
						&&label$328,
						&&label$328,
						&&label$328,
						&&label$328,
						&&label$328,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$331,
						&&label$331,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$336,
						&&label$331,
						&&label$331,
					};
					if( TMP$104$5 < 46ll ) goto label$336;
					if( TMP$104$5 > 101ll ) goto label$336;
					goto *tmp$170[TMP$104$5 - 46ll];
					label$321:;
				}
				if( (FLAGS$1 & 8ll) != 0ll ) goto label$338;
				{
					if( SKIPCHAR$1 != 0ll ) goto label$340;
					{
						{
							uint64 TMP$105$7;
							TMP$105$7 = *(uint64*)TLEN$1;
							goto label$342;
							label$343:;
							{
								if( VALUE$1 <= 32767ull ) goto label$345;
								{
									*DTYPE$1 = 10ll;
								}
								label$345:;
								label$344:;
							}
							goto label$341;
							label$346:;
							{
								*DTYPE$1 = 10ll;
							}
							goto label$341;
							label$347:;
							{
								if( VALUE$1 <= 2147483647ull ) goto label$349;
								{
									if( VALUE$1 <= 4294967295ull ) goto label$351;
									{
										*DTYPE$1 = 12ll;
									}
									goto label$350;
									label$351:;
									{
										*DTYPE$1 = 11ll;
									}
									label$350:;
								}
								label$349:;
								label$348:;
							}
							goto label$341;
							label$352:;
							{
								*DTYPE$1 = 12ll;
							}
							goto label$341;
							label$353:;
							{
								if( VALUE$1 <= 9223372036854775807ull ) goto label$355;
								{
									*DTYPE$1 = 13ll;
								}
								label$355:;
								label$354:;
								VALUE_PREV$1 = VALUE$1;
							}
							goto label$341;
							label$356:;
							{
								*DTYPE$1 = 13ll;
								if( (FLAGS$1 & 1ll) != 0ll ) goto label$358;
								{
									if( ((int64)-(VALUE_PREV$1 > 1844674407370955161ull) | (int64)-((VALUE$1 & 9223372036854775808ull) == 0ull)) == 0ll ) goto label$360;
									{
										ERRREPORTWARN( 8ll, (uint8*)0ull, 1ll );
										SKIPCHAR$1 = -1ll;
									}
									label$360:;
									label$359:;
								}
								label$358:;
								label$357:;
							}
							goto label$341;
							label$361:;
							{
								if( (FLAGS$1 & 1ll) != 0ll ) goto label$363;
								{
									ERRREPORTWARN( 8ll, (uint8*)0ull, 1ll );
									SKIPCHAR$1 = -1ll;
								}
								label$363:;
								label$362:;
							}
							goto label$341;
							label$342:;
							static const void* tmp$171[17ll] = {
								&&label$343,
								&&label$346,
								&&label$341,
								&&label$341,
								&&label$341,
								&&label$347,
								&&label$352,
								&&label$341,
								&&label$341,
								&&label$341,
								&&label$341,
								&&label$341,
								&&label$341,
								&&label$341,
								&&label$353,
								&&label$356,
								&&label$361,
							};
							if( TMP$105$7 < 5ll ) goto label$341;
							if( TMP$105$7 > 21ll ) goto label$341;
							goto *tmp$171[TMP$105$7 - 5ll];
							label$341:;
						}
						if( *TLEN$1 != 64ll ) goto label$365;
						{
							if( SKIPCHAR$1 != 0ll ) goto label$367;
							{
								SKIPCHAR$1 = -1ll;
							}
							goto label$366;
							label$367:;
							{
								if( (FLAGS$1 & 1ll) != 0ll ) goto label$369;
								{
									FLAGS$1 = FLAGS$1 | 1ll;
									ERRREPORTWARN( 8ll, (uint8*)0ull, 1ll );
								}
								label$369:;
								label$368:;
							}
							label$366:;
						}
						label$365:;
						label$364:;
					}
					label$340:;
					label$339:;
				}
				label$338:;
				label$337:;
			}
			label$320:;
			goto label$318;
			label$319:;
			if( *TLEN$1 != 0ll ) goto label$371;
			{
				*PNUM$1 = (uint8)48u;
				PNUM$1 = (uint8*)((uint8*)PNUM$1 + 1ll);
				*TLEN$1 = 1ll;
			}
			label$371:;
			label$370:;
		}
		goto label$311;
		label$372:;
		{
			*PNUM$1 = (uint8)46u;
			PNUM$1 = (uint8*)((uint8*)PNUM$1 + 1ll);
			*TLEN$1 = 1ll;
			HREADFLOATNUMBER( &PNUM$1, TLEN$1, DTYPE$1, -1ll, FLAGS$1 );
		}
		goto label$311;
		label$373:;
		{
			*TLEN$1 = 0ll;
			uint64 vr$92 = HREADNONDECNUMBER( &PNUM$1, TLEN$1, DTYPE$1, FLAGS$1 );
			VALUE$1 = vr$92;
		}
		goto label$311;
		label$312:;
		static const void* tmp$172[20ll] = {
			&&label$373,
			&&label$311,
			&&label$311,
			&&label$311,
			&&label$311,
			&&label$311,
			&&label$311,
			&&label$311,
			&&label$372,
			&&label$311,
			&&label$313,
			&&label$317,
			&&label$317,
			&&label$317,
			&&label$317,
			&&label$317,
			&&label$317,
			&&label$317,
			&&label$317,
			&&label$317,
		};
		if( TMP$103$2 < 38ll ) goto label$311;
		if( TMP$103$2 > 57ll ) goto label$311;
		goto *tmp$172[TMP$103$2 - 38ll];
		label$311:;
	}
	*PNUM$1 = (uint8)0u;
	{
		int64 TMP$106$2;
		TMP$106$2 = *DTYPE$1;
		if( TMP$106$2 != 4ll ) goto label$375;
		label$376:;
		{
			*DTYPE$1 = *(int64*)((uint8*)&ENV$ + 1168ll);
		}
		goto label$374;
		label$375:;
		if( TMP$106$2 != 5ll ) goto label$377;
		label$378:;
		{
			*DTYPE$1 = *(int64*)((uint8*)&ENV$ + 1176ll);
		}
		goto label$374;
		label$377:;
		if( TMP$106$2 != 10ll ) goto label$379;
		label$380:;
		{
			*DTYPE$1 = *(int64*)((uint8*)&ENV$ + 1184ll);
		}
		goto label$374;
		label$379:;
		if( TMP$106$2 != 11ll ) goto label$381;
		label$382:;
		{
			*DTYPE$1 = *(int64*)((uint8*)&ENV$ + 1192ll);
		}
		label$381:;
		label$374:;
	}
	if( (*DTYPE$1 & 480ll) == 0ll ) goto label$383;
	TMP$107$1 = 22ll;
	goto label$894;
	label$383:;
	TMP$107$1 = *DTYPE$1 & 31ll;
	label$894:;
	if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$107$1 * 56ll)) == 1ll ) goto label$385;
	{
		if( (FLAGS$1 & 8ll) != 0ll ) goto label$387;
		{
			if( (FLAGS$1 & 1024ll) != 0ll ) goto label$389;
			{
				{
					uint64 TMP$108$5;
					uint64 vr$114 = LEXCURRENTCHAR( 0ll );
					TMP$108$5 = vr$114;
					if( TMP$108$5 == 85ull ) goto label$392;
					label$393:;
					if( TMP$108$5 != 117ull ) goto label$391;
					label$392:;
					{
						LEXEATCHAR(  );
						int64 vr$118 = TYPETOUNSIGNED( *DTYPE$1 );
						*DTYPE$1 = vr$118;
						HAVE_U_SUFFIX$1 = -1ll;
					}
					label$391:;
					label$390:;
				}
			}
			label$389:;
			label$388:;
			{
				uint64 TMP$109$4;
				uint64 vr$120 = LEXCURRENTCHAR( 0ll );
				TMP$109$4 = vr$120;
				goto label$395;
				label$396:;
				{
					if( (FLAGS$1 & 1024ll) != 0ll ) goto label$398;
					{
						LEXEATCHAR(  );
						uint64 vr$123 = LEXCURRENTCHAR( 0ll );
						C$1 = vr$123;
						if( ((int64)-(C$1 == 76ull) | (int64)-(C$1 == 108ull)) == 0ll ) goto label$400;
						{
							$11FB_DATATYPE TMP$110$7;
							LEXEATCHAR(  );
							if( HAVE_U_SUFFIX$1 == 0ll ) goto label$401;
							TMP$110$7 = 13ll;
							goto label$895;
							label$401:;
							TMP$110$7 = 12ll;
							label$895:;
							*DTYPE$1 = TMP$110$7;
						}
						goto label$399;
						label$400:;
						{
							$11FB_DATATYPE TMP$111$7;
							if( VALUE$1 <= 4294967295ull ) goto label$403;
							{
								if( SKIPCHAR$1 != 0ll ) goto label$405;
								{
									if( (FLAGS$1 & 1ll) != 0ll ) goto label$407;
									{
										ERRREPORTWARN( 8ll, (uint8*)0ull, 1ll );
									}
									label$407:;
									label$406:;
								}
								label$405:;
								label$404:;
							}
							label$403:;
							label$402:;
							if( HAVE_U_SUFFIX$1 == 0ll ) goto label$408;
							TMP$111$7 = 11ll;
							goto label$896;
							label$408:;
							TMP$111$7 = 10ll;
							label$896:;
							*DTYPE$1 = TMP$111$7;
						}
						label$399:;
					}
					label$398:;
					label$397:;
				}
				goto label$394;
				label$409:;
				{
					if( (FLAGS$1 & 1024ll) != 0ll ) goto label$411;
					{
						if( HAVE_U_SUFFIX$1 != 0ll ) goto label$413;
						{
							*DTYPE$1 = 14ll;
							LEXEATCHAR(  );
						}
						label$413:;
						label$412:;
					}
					label$411:;
					label$410:;
				}
				goto label$394;
				label$414:;
				{
					if( (FLAGS$1 & 1024ll) != 0ll ) goto label$416;
					{
						if( HAVE_U_SUFFIX$1 != 0ll ) goto label$418;
						{
							*DTYPE$1 = 15ll;
							LEXEATCHAR(  );
						}
						label$418:;
						label$417:;
					}
					label$416:;
					label$415:;
				}
				goto label$394;
				label$419:;
				{
					{
						int64 TMP$112$6;
						int64 TMP$113$6;
						if( (*(int64*)((uint8*)&ENV$ + 1160ll) & 480ll) == 0ll ) goto label$420;
						TMP$112$6 = 22ll;
						goto label$897;
						label$420:;
						TMP$112$6 = *(int64*)((uint8*)&ENV$ + 1160ll) & 31ll;
						label$897:;
						TMP$113$6 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$112$6 * 56ll)) + 8ll);
						if( TMP$113$6 != 2ll ) goto label$422;
						label$423:;
						{
							WARN$1 = (int64)-(VALUE$1 > 65535ull);
						}
						goto label$421;
						label$422:;
						if( TMP$113$6 != 4ll ) goto label$424;
						label$425:;
						{
							WARN$1 = (int64)-(VALUE$1 > 4294967295ull);
						}
						goto label$421;
						label$424:;
						{
							WARN$1 = 0ll;
						}
						label$426:;
						label$421:;
					}
					if( WARN$1 == 0ll ) goto label$428;
					{
						if( SKIPCHAR$1 != 0ll ) goto label$430;
						{
							if( (FLAGS$1 & 1ll) != 0ll ) goto label$432;
							{
								ERRREPORTWARN( 8ll, (uint8*)0ull, 1ll );
							}
							label$432:;
							label$431:;
						}
						label$430:;
						label$429:;
					}
					label$428:;
					label$427:;
					*DTYPE$1 = *(int64*)((uint8*)&ENV$ + 1160ll);
					LEXEATCHAR(  );
				}
				goto label$394;
				label$433:;
				{
					int64 TMP$114$5;
					if( (*DTYPE$1 & 480ll) == 0ll ) goto label$434;
					TMP$114$5 = 22ll;
					goto label$898;
					label$434:;
					TMP$114$5 = *DTYPE$1 & 31ll;
					label$898:;
					if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$114$5 * 56ll)) + 8ll) <= 4ll ) goto label$436;
					{
						if( SKIPCHAR$1 != 0ll ) goto label$438;
						{
							if( (FLAGS$1 & 1ll) != 0ll ) goto label$440;
							{
								ERRREPORTWARN( 8ll, (uint8*)0ull, 1ll );
							}
							label$440:;
							label$439:;
						}
						label$438:;
						label$437:;
					}
					label$436:;
					label$435:;
					*DTYPE$1 = 10ll;
					LEXEATCHAR(  );
				}
				goto label$394;
				label$441:;
				{
					if( HAVE_U_SUFFIX$1 != 0ll ) goto label$443;
					{
						*DTYPE$1 = 14ll;
						LEXEATCHAR(  );
					}
					label$443:;
					label$442:;
				}
				goto label$394;
				label$444:;
				{
					if( HAVE_U_SUFFIX$1 != 0ll ) goto label$446;
					{
						uint64 vr$171 = LEXGETLOOKAHEADCHAR( 0ll );
						if( vr$171 == 35ull ) goto label$448;
						{
							*DTYPE$1 = 15ll;
							LEXEATCHAR(  );
						}
						label$448:;
						label$447:;
					}
					label$446:;
					label$445:;
				}
				goto label$394;
				label$395:;
				static const void* tmp$173[76ll] = {
					&&label$441,
					&&label$394,
					&&label$444,
					&&label$394,
					&&label$419,
					&&label$433,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$414,
					&&label$394,
					&&label$409,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$396,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$414,
					&&label$394,
					&&label$409,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$394,
					&&label$396,
				};
				if( TMP$109$4 < 33ll ) goto label$394;
				if( TMP$109$4 > 108ll ) goto label$394;
				goto *tmp$173[TMP$109$4 - 33ll];
				label$394:;
			}
		}
		label$387:;
		label$386:;
	}
	label$385:;
	label$384:;
	label$310:;
}

static void HREADSTRING( struct $7FBTOKEN* TK$1, uint8* PS$1, $8LEXCHECK FLAGS$1 )
{
	label$449:;
	int64 LGT$1;
	int64 HASESC$1;
	int64 ESCAPED$1;
	int64 SKIPCHAR$1;
	uint64 CHAR$1;
	*PS$1 = (uint8)0u;
	LGT$1 = 0ll;
	HASESC$1 = 0ll;
	ESCAPED$1 = (int64)-(*(int64*)TK$1 == 263ll);
	SKIPCHAR$1 = 0ll;
	if( (FLAGS$1 & 16ll) != 0ll ) goto label$452;
	{
		LEXEATCHAR(  );
	}
	goto label$451;
	label$452:;
	{
		uint64 vr$5 = LEXEATCHAR(  );
		*PS$1 = (uint8)vr$5;
		PS$1 = (uint8*)((uint8*)PS$1 + 1ll);
		LGT$1 = LGT$1 + 1ll;
	}
	label$451:;
	label$453:;
	{
		uint64 vr$10 = LEXCURRENTCHAR( 0ll );
		CHAR$1 = vr$10;
		if( CHAR$1 != 34ull ) goto label$457;
		{
			LEXEATCHAR(  );
			if( (FLAGS$1 & 16ll) == 0ll ) goto label$459;
			{
				if( SKIPCHAR$1 != 0ll ) goto label$461;
				{
					*PS$1 = (uint8)34u;
					PS$1 = (uint8*)((uint8*)PS$1 + 1ll);
					LGT$1 = LGT$1 + 1ll;
				}
				label$461:;
				label$460:;
			}
			label$459:;
			label$458:;
			uint64 vr$18 = LEXCURRENTCHAR( 0ll );
			CHAR$1 = vr$18;
			if( CHAR$1 == 34ull ) goto label$463;
			{
				goto label$454;
				label$463:;
			}
		}
		goto label$456;
		label$457:;
		if( CHAR$1 != 27ull ) goto label$464;
		{
			if( (FLAGS$1 & 16ll) != 0ll ) goto label$466;
			{
				if( SKIPCHAR$1 != 0ll ) goto label$468;
				{
					*PS$1 = (uint8)27u;
					PS$1 = (uint8*)((uint8*)PS$1 + 1ll);
					LGT$1 = LGT$1 + 1ll;
				}
				label$468:;
				label$467:;
			}
			label$466:;
			label$465:;
		}
		goto label$456;
		label$464:;
		if( CHAR$1 != 92ull ) goto label$469;
		{
			HASESC$1 = -1ll;
			if( ESCAPED$1 == 0ll ) goto label$471;
			{
				LEXEATCHAR(  );
				if( SKIPCHAR$1 != 0ll ) goto label$473;
				{
					*PS$1 = (uint8)92u;
					PS$1 = (uint8*)((uint8*)PS$1 + 1ll);
					LGT$1 = LGT$1 + 1ll;
				}
				label$473:;
				label$472:;
				uint64 vr$33 = LEXCURRENTCHAR( 0ll );
				CHAR$1 = vr$33;
			}
			label$471:;
			label$470:;
		}
		label$469:;
		label$456:;
		{
			if( CHAR$1 == 0ull ) goto label$476;
			label$477:;
			if( CHAR$1 == 13ull ) goto label$476;
			label$478:;
			if( CHAR$1 != 10ull ) goto label$475;
			label$476:;
			{
				if( (FLAGS$1 & 9ll) != 0ll ) goto label$480;
				{
					ERRREPORTWARN( 12ll, (uint8*)0ull, 1ll );
				}
				label$480:;
				label$479:;
				goto label$454;
			}
			label$475:;
			label$474:;
		}
		LEXEATCHAR(  );
		if( SKIPCHAR$1 != 0ll ) goto label$482;
		{
			if( LGT$1 != 1024ll ) goto label$484;
			{
				if( (FLAGS$1 & 1ll) != 0ll ) goto label$486;
				{
					FLAGS$1 = FLAGS$1 | 1ll;
					ERRREPORTWARN( 9ll, (uint8*)0ull, 1ll );
				}
				label$486:;
				label$485:;
				SKIPCHAR$1 = -1ll;
			}
			goto label$483;
			label$484:;
			{
				*PS$1 = (uint8)CHAR$1;
				PS$1 = (uint8*)((uint8*)PS$1 + 1ll);
				LGT$1 = LGT$1 + 1ll;
			}
			label$483:;
		}
		label$482:;
		label$481:;
	}
	label$455:;
	goto label$453;
	label$454:;
	*PS$1 = (uint8)0u;
	*(int64*)((uint8*)TK$1 + 16ll) = 3ll;
	*(int64*)((uint8*)TK$1 + 4128ll) = LGT$1;
	*(int64*)((uint8*)TK$1 + 4144ll) = HASESC$1;
	label$450:;
}

static void HREADWSTR( struct $7FBTOKEN* TK$1, uint32* PS$1, $8LEXCHECK FLAGS$1 )
{
	label$487:;
	int64 LGT$1;
	int64 HASESC$1;
	int64 ESCAPED$1;
	int64 SKIPCHAR$1;
	uint64 CHAR$1;
	*PS$1 = 0u;
	LGT$1 = 0ll;
	HASESC$1 = 0ll;
	ESCAPED$1 = (int64)-(*(int64*)TK$1 == 263ll);
	SKIPCHAR$1 = 0ll;
	if( (FLAGS$1 & 16ll) != 0ll ) goto label$490;
	{
		LEXEATCHAR(  );
	}
	goto label$489;
	label$490:;
	{
		uint64 vr$5 = LEXEATCHAR(  );
		*PS$1 = (uint32)vr$5;
		PS$1 = (uint32*)((uint8*)PS$1 + 4ll);
		LGT$1 = LGT$1 + 1ll;
	}
	label$489:;
	label$491:;
	{
		uint64 vr$10 = LEXCURRENTCHAR( 0ll );
		CHAR$1 = vr$10;
		if( CHAR$1 != 34ull ) goto label$495;
		{
			LEXEATCHAR(  );
			if( (FLAGS$1 & 16ll) == 0ll ) goto label$497;
			{
				if( SKIPCHAR$1 != 0ll ) goto label$499;
				{
					*PS$1 = 34u;
					PS$1 = (uint32*)((uint8*)PS$1 + 4ll);
					LGT$1 = LGT$1 + 1ll;
				}
				label$499:;
				label$498:;
			}
			label$497:;
			label$496:;
			uint64 vr$18 = LEXCURRENTCHAR( 0ll );
			CHAR$1 = vr$18;
			if( CHAR$1 == 34ull ) goto label$501;
			{
				goto label$492;
				label$501:;
			}
		}
		goto label$494;
		label$495:;
		if( CHAR$1 != 27ull ) goto label$502;
		{
			if( (FLAGS$1 & 16ll) != 0ll ) goto label$504;
			{
				if( SKIPCHAR$1 != 0ll ) goto label$506;
				{
					*PS$1 = 27u;
					PS$1 = (uint32*)((uint8*)PS$1 + 4ll);
					LGT$1 = LGT$1 + 1ll;
				}
				label$506:;
				label$505:;
			}
			label$504:;
			label$503:;
		}
		goto label$494;
		label$502:;
		if( CHAR$1 != 92ull ) goto label$507;
		{
			HASESC$1 = -1ll;
			if( ESCAPED$1 == 0ll ) goto label$509;
			{
				LEXEATCHAR(  );
				if( SKIPCHAR$1 != 0ll ) goto label$511;
				{
					*PS$1 = 92u;
					PS$1 = (uint32*)((uint8*)PS$1 + 4ll);
					LGT$1 = LGT$1 + 1ll;
				}
				label$511:;
				label$510:;
				uint64 vr$33 = LEXCURRENTCHAR( 0ll );
				CHAR$1 = vr$33;
			}
			label$509:;
			label$508:;
		}
		label$507:;
		label$494:;
		{
			if( CHAR$1 == 0ull ) goto label$514;
			label$515:;
			if( CHAR$1 == 13ull ) goto label$514;
			label$516:;
			if( CHAR$1 != 10ull ) goto label$513;
			label$514:;
			{
				if( (FLAGS$1 & 9ll) != 0ll ) goto label$518;
				{
					ERRREPORTWARN( 12ll, (uint8*)0ull, 1ll );
				}
				label$518:;
				label$517:;
				goto label$492;
			}
			label$513:;
			label$512:;
		}
		LEXEATCHAR(  );
		if( SKIPCHAR$1 != 0ll ) goto label$520;
		{
			if( LGT$1 != 1024ll ) goto label$522;
			{
				if( (FLAGS$1 & 1ll) != 0ll ) goto label$524;
				{
					FLAGS$1 = FLAGS$1 | 1ll;
					ERRREPORTWARN( 9ll, (uint8*)0ull, 1ll );
				}
				label$524:;
				label$523:;
				SKIPCHAR$1 = -1ll;
			}
			goto label$521;
			label$522:;
			{
				*PS$1 = (uint32)CHAR$1;
				PS$1 = (uint32*)((uint8*)PS$1 + 4ll);
				LGT$1 = LGT$1 + 1ll;
			}
			label$521:;
		}
		label$520:;
		label$519:;
	}
	label$493:;
	goto label$491;
	label$492:;
	*PS$1 = 0u;
	*(int64*)((uint8*)TK$1 + 16ll) = 6ll;
	*(int64*)((uint8*)TK$1 + 4128ll) = LGT$1;
	*(int64*)((uint8*)TK$1 + 4144ll) = HASESC$1;
	label$488:;
}

static void HCHECKPERIODS( struct $7FBTOKEN* T$1, $8LEXCHECK FLAGS$1, struct $10FBSYMCHAIN* CHAIN_$1 )
{
	label$525:;
	int64 READFULLID$1;
	if( CHAIN_$1 == (struct $10FBSYMCHAIN*)0ull ) goto label$528;
	{
		READFULLID$1 = 0ll;
		uint64 vr$1 = LEXCURRENTCHAR( 0ll );
		if( vr$1 != 46ull ) goto label$530;
		{
			if( *(int64*)*(struct $8FBSYMBOL**)CHAIN_$1 == 8ll ) goto label$532;
			{
				READFULLID$1 = -1ll;
				label$533:;
				if( CHAIN_$1 == (struct $10FBSYMCHAIN*)0ull ) goto label$534;
				{
					struct $8FBSYMBOL* SYM$5;
					SYM$5 = *(struct $8FBSYMBOL**)CHAIN_$1;
					label$535:;
					{
						if( *(int64*)SYM$5 != 1ll ) goto label$539;
						{
							if( (*(int64*)((uint8*)SYM$5 + 48ll) & 511ll) != 18ll ) goto label$541;
							{
								goto label$526;
							}
							label$541:;
							label$540:;
						}
						label$539:;
						label$538:;
						SYM$5 = *(struct $8FBSYMBOL**)((uint8*)SYM$5 + 264ll);
					}
					label$537:;
					if( SYM$5 != (struct $8FBSYMBOL*)0ull ) goto label$535;
					label$536:;
					CHAIN_$1 = *(struct $10FBSYMCHAIN**)((uint8*)CHAIN_$1 + 8ll);
				}
				goto label$533;
				label$534:;
			}
			label$532:;
			label$531:;
		}
		label$530:;
		label$529:;
	}
	goto label$527;
	label$528:;
	{
		uint64 vr$16 = LEXCURRENTCHAR( 0ll );
		READFULLID$1 = (int64)-(vr$16 == 46ull);
	}
	label$527:;
	if( READFULLID$1 == 0ll ) goto label$543;
	{
		*(int64*)((uint8*)T$1 + 4144ll) = *(int64*)((uint8*)T$1 + 4128ll);
		HREADIDENTIFIER( (uint8*)((uint8*)((uint8*)T$1 + 24ll) + *(int64*)((uint8*)T$1 + 4128ll)), (int64*)((uint8*)T$1 + 4128ll), (int64*)((uint8*)T$1 + 16ll), FLAGS$1 | 128ll );
		struct $10FBSYMCHAIN* vr$36 = SYMBLOOKUP( (uint8*)((uint8*)T$1 + 24ll), ($8FB_TOKEN*)T$1, ($10FB_TKCLASS*)((uint8*)T$1 + 8ll), 0ll );
		*(struct $10FBSYMCHAIN**)((uint8*)T$1 + 4136ll) = vr$36;
	}
	label$543:;
	label$542:;
	label$526:;
}

static void HMULTILINECOMMENT( void )
{
	label$678:;
	static int64 CNT$1;
	LEXEATCHAR(  );
	CNT$1 = 0ll;
	label$680:;
	{
		{
			uint64 TMP$130$3;
			uint64 vr$0 = LEXCURRENTCHAR( -1ll );
			TMP$130$3 = vr$0;
			goto label$684;
			label$685:;
			{
				ERRREPORTEX( 131ll, (uint8*)0ull, 0ll, 1ll, (uint8*)0ull );
				goto label$679;
			}
			goto label$683;
			label$686:;
			{
				LEXEATCHAR(  );
				uint64 vr$1 = LEXCURRENTCHAR( 0ll );
				if( vr$1 != 10ull ) goto label$688;
				{
					LEXEATCHAR(  );
				}
				label$688:;
				label$687:;
				if( *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16752ll) != 0ll ) goto label$690;
				{
					*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16712ll) = *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16712ll) + 1ll;
				}
				label$690:;
				label$689:;
			}
			goto label$683;
			label$691:;
			{
				LEXEATCHAR(  );
				if( *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16752ll) != 0ll ) goto label$693;
				{
					*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16712ll) = *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16712ll) + 1ll;
				}
				label$693:;
				label$692:;
			}
			goto label$683;
			label$694:;
			{
				LEXEATCHAR(  );
				uint64 vr$13 = LEXCURRENTCHAR( 0ll );
				if( vr$13 != 39ull ) goto label$696;
				{
					LEXEATCHAR(  );
					CNT$1 = CNT$1 + 1ll;
				}
				label$696:;
				label$695:;
			}
			goto label$683;
			label$697:;
			{
				LEXEATCHAR(  );
				uint64 vr$16 = LEXCURRENTCHAR( 0ll );
				if( vr$16 != 47ull ) goto label$699;
				{
					LEXEATCHAR(  );
					if( CNT$1 != 0ll ) goto label$701;
					{
						goto label$681;
					}
					label$701:;
					label$700:;
					CNT$1 = CNT$1 + -1ll;
				}
				label$699:;
				label$698:;
			}
			goto label$683;
			label$702:;
			{
				LEXEATCHAR(  );
			}
			goto label$683;
			label$684:;
			static const void* tmp$174[48ll] = {
				&&label$685,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$691,
				&&label$702,
				&&label$702,
				&&label$686,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$697,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$702,
				&&label$694,
			};
			if( TMP$130$3 > 47ll ) goto label$702;
			goto *tmp$174[TMP$130$3 - 0ll];
			label$683:;
		}
	}
	label$682:;
	goto label$680;
	label$681:;
	label$679:;
}

static void HMOVEKDOWN( void )
{
	label$727:;
	*(int64*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) = -1ll;
	*(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16672ll) = *(int64*)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16672ll) + -1ll;
	*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) = *(struct $7FBTOKEN**)((uint8*)*(struct $7FBTOKEN**)((uint8*)*(struct $9LEX_TKCTX**)((uint8*)&LEX$ + 843744ll) + 16680ll) + 4160ll);
	label$728:;
}

static FBSTRING* LEXGETSTRLITTEXT( int64 TK$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$729:;
	FBSTRING S$1;
	__builtin_memset( &S$1, 0, 24ll );
	int64 IS_ESCAPED$1;
	int64 SAW_BACKSLASH$1;
	uint8* P$1;
	{
		if( TK$1 != 262ll ) goto label$732;
		label$733:;
		{
			IS_ESCAPED$1 = 0ll;
		}
		goto label$731;
		label$732:;
		if( TK$1 != 263ll ) goto label$734;
		label$735:;
		{
			FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"!", 2ll, 0 );
			IS_ESCAPED$1 = -1ll;
		}
		goto label$731;
		label$734:;
		if( TK$1 != 264ll ) goto label$736;
		label$737:;
		{
			FBSTRING* vr$8 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"$", 2ll, 0 );
			IS_ESCAPED$1 = 0ll;
		}
		label$736:;
		label$731:;
	}
	FBSTRING* vr$10 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"\x22", 2ll, 0 );
	SAW_BACKSLASH$1 = 0ll;
	uint8* vr$11 = LEXGETTEXT(  );
	P$1 = (uint8*)vr$11;
	label$738:;
	{
		{
			uint8 TMP$134$3;
			TMP$134$3 = *P$1;
			if( (int64)TMP$134$3 != 0ll ) goto label$742;
			label$743:;
			{
				goto label$739;
			}
			goto label$741;
			label$742:;
			if( (uint64)(int64)TMP$134$3 != 34ull ) goto label$744;
			label$745:;
			{
				if( SAW_BACKSLASH$1 == 0ll ) goto label$747;
				{
					FBSTRING* vr$19 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"\x22", 2ll, 0 );
				}
				goto label$746;
				label$747:;
				{
					FBSTRING* vr$21 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"\x22\x22", 3ll, 0 );
				}
				label$746:;
				SAW_BACKSLASH$1 = 0ll;
			}
			goto label$741;
			label$744:;
			if( (uint64)(int64)TMP$134$3 != 92ull ) goto label$748;
			label$749:;
			{
				SAW_BACKSLASH$1 = IS_ESCAPED$1;
				FBSTRING* vr$25 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"\x5C", 2ll, 0 );
			}
			goto label$741;
			label$748:;
			{
				FBSTRING TMP$137$4;
				SAW_BACKSLASH$1 = 0ll;
				FBSTRING* vr$28 = fb_CHR( 1, (int64)*P$1 );
				__builtin_memset( &TMP$137$4, 0, 24ll );
				FBSTRING* vr$32 = fb_StrConcat( &TMP$137$4, (void*)&S$1, -1ll, (void*)vr$28, -1ll );
				FBSTRING* vr$34 = fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$32, -1ll, 0 );
			}
			label$750:;
			label$741:;
		}
		P$1 = (uint8*)(P$1 + 1ll);
	}
	label$740:;
	goto label$738;
	label$739:;
	FBSTRING* vr$37 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"\x22", 2ll, 0 );
	FBSTRING* vr$40 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)&S$1, -1ll, 0 );
	fb_StrDelete( &S$1 );
	label$730:;
	FBSTRING* vr$43 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$43;
}

// Total compilation time: 0.05891297105699778 seconds.
