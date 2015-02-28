// Compilation of fbc-1.01.0/src/compiler/parser-quirk-gfx.bas started at 15:27:42 on 02-28-2015

typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
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
typedef int64 $8FB_TOKEN;
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
typedef int64 $9FB_ERRMSG;
FBSTRING* fb_StrInit( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
int32 fb_StrCompare( void*, int64, void*, int64 );
FBSTRING* fb_StrAllocTempDescZ( uint8* );
FBSTRING* fb_StrUcase2( FBSTRING*, int32 );
static void fb_ctor__parserzquirkzgfx( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRREPORT( int64, int64, uint8* );
void ASTDELNODE( struct $7ASTNODE* );
struct $7ASTNODE* ASTCLONETREE( struct $7ASTNODE* );
void ASTDELTREE( struct $7ASTNODE* );
struct $7ASTNODE* ASTREMOVENOCONVCAST( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWBOP( int64, struct $7ASTNODE*, struct $7ASTNODE*, struct $8FBSYMBOL*, $9AST_OPOPT );
struct $7ASTNODE* ASTNEWCONSTI( int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWCONSTF( double, int64 );
struct $7ASTNODE* ASTNEWVAR( struct $8FBSYMBOL*, int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWIDX( struct $7ASTNODE*, struct $7ASTNODE*, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWDEREF( struct $7ASTNODE*, int64, struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* ASTNEWADDROF( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWLOAD( struct $7ASTNODE*, int64, int64 );
int64 ASTHASSIDEFX( struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDCALL( struct $8FBSYMBOL*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE* );
struct $8FBSYMBOL* SYMBFINDCASTOVLPROC( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, $9FB_ERRMSG* );
int64 SYMBCALCLEN( int64, struct $8FBSYMBOL* );
int64 SYMBISARRAY( struct $8FBSYMBOL* );
int64 HMATCHTEXT( uint8* );
int64 HMATCH( int64 );
typedef int64 $8LEXCHECK;
int64 LEXGETTOKEN( $8LEXCHECK );
uint8* LEXGETTEXT( void );
void LEXSKIPTOKEN( $8LEXCHECK );
typedef int64 $15FB_CMPSTMT_MASK;
int64 CCOMPSTMTISALLOWED( $15FB_CMPSTMT_MASK );
struct $7ASTNODE* CEXPRESSION( void );
struct $7ASTNODE* CEXPRESSIONWITHNIDXARRAY( int64 );
typedef int64 $13FB_VAREXPROPT;
struct $7ASTNODE* CVARORDEREF( $13FB_VAREXPROPT );
void HSKIPUNTIL( int64, int64, $8LEXCHECK, int64 );
struct $7ASTNODE* HMATCHEXPR( int64 );
struct $7ASTNODE* RTLPAGESET( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
int64 RTLGFXPSET( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, int64, int64 );
struct $7ASTNODE* RTLGFXPOINT( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE* );
int64 RTLGFXLINE( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, int64, struct $7ASTNODE*, int64 );
int64 RTLGFXCIRCLE( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, int64, int64 );
int64 RTLGFXPAINT( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, int64 );
int64 RTLGFXDRAW( struct $7ASTNODE*, struct $7ASTNODE* );
int64 RTLGFXDRAWSTRING( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, int64, int64, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE* );
int64 RTLGFXVIEW( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, int64 );
int64 RTLGFXWINDOW( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, int64 );
int64 RTLGFXPALETTE( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, int64 );
int64 RTLGFXPALETTEUSING( struct $7ASTNODE*, int64 );
int64 RTLGFXPUT( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, int64, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, int64 );
int64 RTLGFXGET( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, int64, struct $7ASTNODE* );
int64 RTLGFXSCREENSET( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE* );
int64 RTLGFXSCREENSETQB( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE* );
struct $7ASTNODE* RTLGFXIMAGECREATE( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, int64 );
static struct $7ASTNODE* HMAYBEUDT2PTR( struct $7ASTNODE* );
static struct $7ASTNODE* HNIDXARRAY2ARRAYACCESS( struct $7ASTNODE* );
static struct $7ASTNODE* HMAYBEARRAYACCESS2PTR( struct $7ASTNODE*, struct $7ASTNODE** );
static struct $7ASTNODE* HCHECKFBIMAGEEXPR( struct $7ASTNODE*, int64, struct $7ASTNODE** );
static struct $7ASTNODE* HFBIMAGEEXPR( int64, struct $7ASTNODE** );
static struct $7ASTNODE* HFBIMAGEEXPRINFRONTOFCOORD( int64 );
static int64 HGETMODE( int64*, struct $7ASTNODE**, struct $7ASTNODE**, struct $7ASTNODE** );
int64 CGFXPSET( int64 );
int64 CGFXLINE( void );
int64 CGFXCIRCLE( void );
int64 CGFXPAINT( void );
int64 CGFXDRAWSTRING( void );
int64 CGFXDRAW( void );
int64 CGFXVIEW( int64 );
int64 CGFXPALETTE( void );
int64 CGFXPUT( void );
int64 CGFXGET( void );
int64 CGFXSCREEN( int64 );
int64 CGFXPOINT( struct $7ASTNODE** );
int64 CGFXIMAGECREATE( struct $7ASTNODE** );
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
struct $5FBENV ENV$ __attribute__((common));

int64 CGFXPSET( int64 ISPRESET$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$114:;
	int64 FLAGS$1;
	__builtin_memset( &FLAGS$1, 0, 8ll );
	struct $7ASTNODE* XEXPR$1;
	__builtin_memset( &XEXPR$1, 0, 8ll );
	struct $7ASTNODE* YEXPR$1;
	__builtin_memset( &YEXPR$1, 0, 8ll );
	struct $7ASTNODE* CEXPR$1;
	__builtin_memset( &CEXPR$1, 0, 8ll );
	struct $7ASTNODE* TEXPR$1;
	__builtin_memset( &TEXPR$1, 0, 8ll );
	fb$result$1 = 0ll;
	struct $7ASTNODE* vr$6 = HFBIMAGEEXPRINFRONTOFCOORD( 0ll );
	TEXPR$1 = vr$6;
	int64 vr$7 = HMATCH( 282ll );
	if( vr$7 == 0ll ) goto label$117;
	{
		FLAGS$1 = 5ll;
	}
	goto label$116;
	label$117:;
	{
		FLAGS$1 = 4ll;
	}
	label$116:;
	int64 vr$9 = LEXGETTOKEN( 0ll );
	if( vr$9 == 40ll ) goto label$119;
	{
		ERRREPORT( 6ll, 0ll, (uint8*)0ull );
	}
	goto label$118;
	label$119:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$118:;
	struct $7ASTNODE* vr$11 = HMATCHEXPR( -1ll );
	XEXPR$1 = vr$11;
	if( XEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$121;
	{
		goto label$115;
	}
	label$121:;
	label$120:;
	int64 vr$13 = LEXGETTOKEN( 0ll );
	if( vr$13 == 44ll ) goto label$123;
	{
		ERRREPORT( 16ll, 0ll, (uint8*)0ull );
	}
	goto label$122;
	label$123:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$122:;
	struct $7ASTNODE* vr$15 = HMATCHEXPR( -1ll );
	YEXPR$1 = vr$15;
	if( YEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$125;
	{
		goto label$115;
	}
	label$125:;
	label$124:;
	int64 vr$17 = LEXGETTOKEN( 0ll );
	if( vr$17 == 41ll ) goto label$127;
	{
		ERRREPORT( 7ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
	}
	goto label$126;
	label$127:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$126:;
	int64 vr$19 = HMATCH( 44ll );
	if( vr$19 == 0ll ) goto label$129;
	{
		struct $7ASTNODE* vr$21 = HMATCHEXPR( -1ll );
		CEXPR$1 = vr$21;
		if( CEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$131;
		{
			goto label$115;
		}
		label$131:;
		label$130:;
	}
	goto label$128;
	label$129:;
	{
		struct $7ASTNODE* vr$23 = ASTNEWCONSTI( 0ll, 8ll, (struct $8FBSYMBOL*)0ull );
		CEXPR$1 = vr$23;
		FLAGS$1 = FLAGS$1 | 2147483648ll;
	}
	label$128:;
	int64 vr$25 = RTLGFXPSET( TEXPR$1, XEXPR$1, YEXPR$1, CEXPR$1, FLAGS$1, ISPRESET$1 );
	fb$result$1 = vr$25;
	label$115:;
	return fb$result$1;
}

int64 CGFXLINE( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$132:;
	int64 FLAGS$1;
	__builtin_memset( &FLAGS$1, 0, 8ll );
	int64 LINETYPE$1;
	__builtin_memset( &LINETYPE$1, 0, 8ll );
	struct $7ASTNODE* STYLEEXPR$1;
	__builtin_memset( &STYLEEXPR$1, 0, 8ll );
	struct $7ASTNODE* X1EXPR$1;
	__builtin_memset( &X1EXPR$1, 0, 8ll );
	struct $7ASTNODE* Y1EXPR$1;
	__builtin_memset( &Y1EXPR$1, 0, 8ll );
	struct $7ASTNODE* X2EXPR$1;
	__builtin_memset( &X2EXPR$1, 0, 8ll );
	struct $7ASTNODE* Y2EXPR$1;
	__builtin_memset( &Y2EXPR$1, 0, 8ll );
	struct $7ASTNODE* CEXPR$1;
	__builtin_memset( &CEXPR$1, 0, 8ll );
	struct $7ASTNODE* TEXPR$1;
	__builtin_memset( &TEXPR$1, 0, 8ll );
	fb$result$1 = 0ll;
	int64 vr$10 = HMATCH( 45ll );
	if( vr$10 == 0ll ) goto label$135;
	{
		FLAGS$1 = 5ll;
		struct $7ASTNODE* vr$12 = ASTNEWCONSTF( 0x0p+0, 14ll );
		X1EXPR$1 = vr$12;
		struct $7ASTNODE* vr$13 = ASTNEWCONSTF( 0x0p+0, 14ll );
		Y1EXPR$1 = vr$13;
	}
	goto label$134;
	label$135:;
	{
		struct $7ASTNODE* vr$14 = HFBIMAGEEXPRINFRONTOFCOORD( 0ll );
		TEXPR$1 = vr$14;
		int64 vr$15 = HMATCH( 282ll );
		if( vr$15 == 0ll ) goto label$137;
		{
			FLAGS$1 = 5ll;
		}
		goto label$136;
		label$137:;
		{
			FLAGS$1 = 4ll;
		}
		label$136:;
		int64 vr$17 = HMATCH( 40ll );
		if( vr$17 == 0ll ) goto label$139;
		{
			struct $7ASTNODE* vr$19 = HMATCHEXPR( -1ll );
			X1EXPR$1 = vr$19;
			if( X1EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$141;
			{
				goto label$133;
			}
			label$141:;
			label$140:;
			int64 vr$21 = LEXGETTOKEN( 0ll );
			if( vr$21 == 44ll ) goto label$143;
			{
				ERRREPORT( 16ll, 0ll, (uint8*)0ull );
			}
			goto label$142;
			label$143:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$142:;
			struct $7ASTNODE* vr$23 = HMATCHEXPR( -1ll );
			Y1EXPR$1 = vr$23;
			if( Y1EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$145;
			{
				goto label$133;
			}
			label$145:;
			label$144:;
			int64 vr$25 = LEXGETTOKEN( 0ll );
			if( vr$25 == 41ll ) goto label$147;
			{
				ERRREPORT( 7ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
			}
			goto label$146;
			label$147:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$146:;
		}
		goto label$138;
		label$139:;
		{
			FLAGS$1 = 5ll;
			struct $7ASTNODE* vr$27 = ASTNEWCONSTF( 0x0p+0, 14ll );
			X1EXPR$1 = vr$27;
			struct $7ASTNODE* vr$28 = ASTNEWCONSTF( 0x0p+0, 14ll );
			Y1EXPR$1 = vr$28;
		}
		label$138:;
		int64 vr$29 = HMATCH( 45ll );
		if( vr$29 != 0ll ) goto label$149;
		{
			ERRREPORT( 15ll, 0ll, (uint8*)0ull );
			goto label$133;
		}
		label$149:;
		label$148:;
	}
	label$134:;
	int64 vr$31 = HMATCH( 282ll );
	if( vr$31 == 0ll ) goto label$151;
	{
		if( FLAGS$1 != 5ll ) goto label$153;
		{
			FLAGS$1 = 3ll;
		}
		goto label$152;
		label$153:;
		{
			FLAGS$1 = 1ll;
		}
		label$152:;
	}
	goto label$150;
	label$151:;
	{
		if( FLAGS$1 != 5ll ) goto label$155;
		{
			FLAGS$1 = 2ll;
		}
		goto label$154;
		label$155:;
		{
			FLAGS$1 = 0ll;
		}
		label$154:;
	}
	label$150:;
	int64 vr$35 = LEXGETTOKEN( 0ll );
	if( vr$35 == 40ll ) goto label$157;
	{
		ERRREPORT( 6ll, 0ll, (uint8*)0ull );
	}
	goto label$156;
	label$157:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$156:;
	struct $7ASTNODE* vr$37 = HMATCHEXPR( -1ll );
	X2EXPR$1 = vr$37;
	if( X2EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$159;
	{
		goto label$133;
	}
	label$159:;
	label$158:;
	int64 vr$39 = LEXGETTOKEN( 0ll );
	if( vr$39 == 44ll ) goto label$161;
	{
		ERRREPORT( 16ll, 0ll, (uint8*)0ull );
	}
	goto label$160;
	label$161:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$160:;
	struct $7ASTNODE* vr$41 = HMATCHEXPR( -1ll );
	Y2EXPR$1 = vr$41;
	if( Y2EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$163;
	{
		goto label$133;
	}
	label$163:;
	label$162:;
	int64 vr$43 = LEXGETTOKEN( 0ll );
	if( vr$43 == 41ll ) goto label$165;
	{
		ERRREPORT( 7ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
	}
	goto label$164;
	label$165:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$164:;
	LINETYPE$1 = 0ll;
	STYLEEXPR$1 = (struct $7ASTNODE*)0ull;
	int64 vr$45 = HMATCH( 44ll );
	if( vr$45 == 0ll ) goto label$167;
	{
		struct $7ASTNODE* vr$47 = CEXPRESSION(  );
		CEXPR$1 = vr$47;
		if( CEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$169;
		{
			struct $7ASTNODE* vr$49 = ASTNEWCONSTI( 0ll, 8ll, (struct $8FBSYMBOL*)0ull );
			CEXPR$1 = vr$49;
			FLAGS$1 = FLAGS$1 | 2147483648ll;
		}
		label$169:;
		label$168:;
		int64 vr$51 = HMATCH( 44ll );
		if( vr$51 == 0ll ) goto label$171;
		{
			{
				FBSTRING TMP$101$4;
				uint8* vr$53 = LEXGETTEXT(  );
				FBSTRING* vr$54 = fb_StrAllocTempDescZ( vr$53 );
				FBSTRING* vr$55 = fb_StrUcase2( vr$54, 0 );
				FBSTRING* vr$57 = fb_StrInit( (void*)&TMP$101$4, -1ll, (void*)vr$55, -1ll, 0 );
				int32 vr$59 = fb_StrCompare( (void*)&TMP$101$4, -1ll, (void*)"B", 2ll );
				if( (int64)vr$59 != 0ll ) goto label$173;
				label$174:;
				{
					LEXSKIPTOKEN( 0ll );
					LINETYPE$1 = 1ll;
				}
				goto label$172;
				label$173:;
				int32 vr$63 = fb_StrCompare( (void*)&TMP$101$4, -1ll, (void*)"BF", 3ll );
				if( (int64)vr$63 != 0ll ) goto label$175;
				label$176:;
				{
					LEXSKIPTOKEN( 0ll );
					LINETYPE$1 = 2ll;
				}
				label$175:;
				label$172:;
				fb_StrDelete( &TMP$101$4 );
			}
			int64 vr$67 = HMATCH( 44ll );
			if( vr$67 == 0ll ) goto label$178;
			{
				struct $7ASTNODE* vr$69 = HMATCHEXPR( -1ll );
				STYLEEXPR$1 = vr$69;
				if( STYLEEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$180;
				{
					goto label$133;
				}
				label$180:;
				label$179:;
			}
			label$178:;
			label$177:;
		}
		label$171:;
		label$170:;
	}
	goto label$166;
	label$167:;
	{
		struct $7ASTNODE* vr$71 = ASTNEWCONSTI( 0ll, 8ll, (struct $8FBSYMBOL*)0ull );
		CEXPR$1 = vr$71;
		FLAGS$1 = FLAGS$1 | 2147483648ll;
	}
	label$166:;
	int64 vr$73 = RTLGFXLINE( TEXPR$1, X1EXPR$1, Y1EXPR$1, X2EXPR$1, Y2EXPR$1, CEXPR$1, LINETYPE$1, STYLEEXPR$1, FLAGS$1 );
	fb$result$1 = vr$73;
	label$133:;
	return fb$result$1;
}

int64 CGFXCIRCLE( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$181:;
	int64 FLAGS$1;
	__builtin_memset( &FLAGS$1, 0, 8ll );
	int64 FILLFLAG$1;
	__builtin_memset( &FILLFLAG$1, 0, 8ll );
	struct $7ASTNODE* XEXPR$1;
	__builtin_memset( &XEXPR$1, 0, 8ll );
	struct $7ASTNODE* YEXPR$1;
	__builtin_memset( &YEXPR$1, 0, 8ll );
	struct $7ASTNODE* CEXPR$1;
	__builtin_memset( &CEXPR$1, 0, 8ll );
	struct $7ASTNODE* RADEXPR$1;
	__builtin_memset( &RADEXPR$1, 0, 8ll );
	struct $7ASTNODE* INIEXPR$1;
	__builtin_memset( &INIEXPR$1, 0, 8ll );
	struct $7ASTNODE* ENDEXPR$1;
	__builtin_memset( &ENDEXPR$1, 0, 8ll );
	struct $7ASTNODE* ASPEXPR$1;
	__builtin_memset( &ASPEXPR$1, 0, 8ll );
	struct $7ASTNODE* TEXPR$1;
	__builtin_memset( &TEXPR$1, 0, 8ll );
	fb$result$1 = 0ll;
	struct $7ASTNODE* vr$11 = HFBIMAGEEXPRINFRONTOFCOORD( 0ll );
	TEXPR$1 = vr$11;
	int64 vr$12 = HMATCH( 282ll );
	if( vr$12 == 0ll ) goto label$184;
	{
		FLAGS$1 = 5ll;
	}
	goto label$183;
	label$184:;
	{
		FLAGS$1 = 4ll;
	}
	label$183:;
	int64 vr$14 = LEXGETTOKEN( 0ll );
	if( vr$14 == 40ll ) goto label$186;
	{
		ERRREPORT( 6ll, 0ll, (uint8*)0ull );
	}
	goto label$185;
	label$186:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$185:;
	struct $7ASTNODE* vr$16 = HMATCHEXPR( -1ll );
	XEXPR$1 = vr$16;
	if( XEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$188;
	{
		goto label$182;
	}
	label$188:;
	label$187:;
	int64 vr$18 = LEXGETTOKEN( 0ll );
	if( vr$18 == 44ll ) goto label$190;
	{
		ERRREPORT( 16ll, 0ll, (uint8*)0ull );
	}
	goto label$189;
	label$190:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$189:;
	struct $7ASTNODE* vr$20 = HMATCHEXPR( -1ll );
	YEXPR$1 = vr$20;
	if( YEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$192;
	{
		goto label$182;
	}
	label$192:;
	label$191:;
	int64 vr$22 = LEXGETTOKEN( 0ll );
	if( vr$22 == 41ll ) goto label$194;
	{
		ERRREPORT( 7ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
	}
	goto label$193;
	label$194:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$193:;
	int64 vr$24 = LEXGETTOKEN( 0ll );
	if( vr$24 == 44ll ) goto label$196;
	{
		ERRREPORT( 16ll, 0ll, (uint8*)0ull );
	}
	goto label$195;
	label$196:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$195:;
	struct $7ASTNODE* vr$26 = HMATCHEXPR( -1ll );
	RADEXPR$1 = vr$26;
	if( RADEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$198;
	{
		goto label$182;
	}
	label$198:;
	label$197:;
	ASPEXPR$1 = (struct $7ASTNODE*)0ull;
	INIEXPR$1 = (struct $7ASTNODE*)0ull;
	ENDEXPR$1 = (struct $7ASTNODE*)0ull;
	FILLFLAG$1 = 0ll;
	int64 vr$28 = HMATCH( 44ll );
	if( vr$28 == 0ll ) goto label$200;
	{
		struct $7ASTNODE* vr$30 = CEXPRESSION(  );
		CEXPR$1 = vr$30;
		if( CEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$202;
		{
			struct $7ASTNODE* vr$32 = ASTNEWCONSTI( 0ll, 8ll, (struct $8FBSYMBOL*)0ull );
			CEXPR$1 = vr$32;
			FLAGS$1 = FLAGS$1 | 2147483648ll;
		}
		label$202:;
		label$201:;
		int64 vr$34 = HMATCH( 44ll );
		if( vr$34 == 0ll ) goto label$204;
		{
			struct $7ASTNODE* vr$36 = CEXPRESSION(  );
			INIEXPR$1 = vr$36;
			int64 vr$37 = HMATCH( 44ll );
			if( vr$37 == 0ll ) goto label$206;
			{
				struct $7ASTNODE* vr$39 = CEXPRESSION(  );
				ENDEXPR$1 = vr$39;
				int64 vr$40 = HMATCH( 44ll );
				if( vr$40 == 0ll ) goto label$208;
				{
					struct $7ASTNODE* vr$42 = CEXPRESSION(  );
					ASPEXPR$1 = vr$42;
					int64 vr$43 = HMATCH( 44ll );
					if( vr$43 == 0ll ) goto label$210;
					{
						uint8* vr$45 = LEXGETTEXT(  );
						FBSTRING* vr$46 = fb_StrAllocTempDescZ( vr$45 );
						FBSTRING* vr$47 = fb_StrUcase2( vr$46, 0 );
						int32 vr$48 = fb_StrCompare( (void*)vr$47, -1ll, (void*)"F", 2ll );
						if( (int64)vr$48 == 0ll ) goto label$212;
						{
							ERRREPORT( 9ll, 0ll, (uint8*)0ull );
							goto label$182;
						}
						label$212:;
						label$211:;
						LEXSKIPTOKEN( 0ll );
						FILLFLAG$1 = -1ll;
					}
					label$210:;
					label$209:;
				}
				label$208:;
				label$207:;
			}
			label$206:;
			label$205:;
		}
		label$204:;
		label$203:;
	}
	goto label$199;
	label$200:;
	{
		struct $7ASTNODE* vr$51 = ASTNEWCONSTI( 0ll, 8ll, (struct $8FBSYMBOL*)0ull );
		CEXPR$1 = vr$51;
		FLAGS$1 = FLAGS$1 | 2147483648ll;
	}
	label$199:;
	int64 vr$53 = RTLGFXCIRCLE( TEXPR$1, XEXPR$1, YEXPR$1, RADEXPR$1, CEXPR$1, ASPEXPR$1, INIEXPR$1, ENDEXPR$1, FILLFLAG$1, FLAGS$1 );
	fb$result$1 = vr$53;
	label$182:;
	return fb$result$1;
}

int64 CGFXPAINT( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$213:;
	struct $7ASTNODE* XEXPR$1;
	__builtin_memset( &XEXPR$1, 0, 8ll );
	struct $7ASTNODE* YEXPR$1;
	__builtin_memset( &YEXPR$1, 0, 8ll );
	struct $7ASTNODE* PEXPR$1;
	__builtin_memset( &PEXPR$1, 0, 8ll );
	struct $7ASTNODE* BEXPR$1;
	__builtin_memset( &BEXPR$1, 0, 8ll );
	struct $7ASTNODE* TEXPR$1;
	__builtin_memset( &TEXPR$1, 0, 8ll );
	int64 FLAGS$1;
	__builtin_memset( &FLAGS$1, 0, 8ll );
	fb$result$1 = 0ll;
	struct $7ASTNODE* vr$7 = HFBIMAGEEXPRINFRONTOFCOORD( 0ll );
	TEXPR$1 = vr$7;
	int64 vr$8 = HMATCH( 282ll );
	if( vr$8 == 0ll ) goto label$216;
	{
		FLAGS$1 = 5ll;
	}
	goto label$215;
	label$216:;
	{
		FLAGS$1 = 4ll;
	}
	label$215:;
	int64 vr$10 = LEXGETTOKEN( 0ll );
	if( vr$10 == 40ll ) goto label$218;
	{
		ERRREPORT( 6ll, 0ll, (uint8*)0ull );
	}
	goto label$217;
	label$218:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$217:;
	struct $7ASTNODE* vr$12 = HMATCHEXPR( -1ll );
	XEXPR$1 = vr$12;
	if( XEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$220;
	{
		goto label$214;
	}
	label$220:;
	label$219:;
	int64 vr$14 = LEXGETTOKEN( 0ll );
	if( vr$14 == 44ll ) goto label$222;
	{
		ERRREPORT( 16ll, 0ll, (uint8*)0ull );
	}
	goto label$221;
	label$222:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$221:;
	struct $7ASTNODE* vr$16 = HMATCHEXPR( -1ll );
	YEXPR$1 = vr$16;
	if( YEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$224;
	{
		goto label$214;
	}
	label$224:;
	label$223:;
	int64 vr$18 = LEXGETTOKEN( 0ll );
	if( vr$18 == 41ll ) goto label$226;
	{
		ERRREPORT( 7ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
	}
	goto label$225;
	label$226:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$225:;
	PEXPR$1 = (struct $7ASTNODE*)0ull;
	BEXPR$1 = (struct $7ASTNODE*)0ull;
	int64 vr$20 = HMATCH( 44ll );
	if( vr$20 == 0ll ) goto label$228;
	{
		struct $7ASTNODE* vr$22 = CEXPRESSION(  );
		PEXPR$1 = vr$22;
		int64 vr$23 = HMATCH( 44ll );
		if( vr$23 == 0ll ) goto label$230;
		{
			struct $7ASTNODE* vr$25 = HMATCHEXPR( -1ll );
			BEXPR$1 = vr$25;
			if( BEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$232;
			{
				goto label$214;
			}
			label$232:;
			label$231:;
		}
		label$230:;
		label$229:;
	}
	label$228:;
	label$227:;
	if( PEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$234;
	{
		struct $7ASTNODE* vr$28 = ASTNEWCONSTI( 0ll, 8ll, (struct $8FBSYMBOL*)0ull );
		PEXPR$1 = vr$28;
		FLAGS$1 = FLAGS$1 | 2147483648ll;
	}
	label$234:;
	label$233:;
	if( BEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$236;
	{
		struct $7ASTNODE* vr$31 = ASTNEWCONSTI( 0ll, 8ll, (struct $8FBSYMBOL*)0ull );
		BEXPR$1 = vr$31;
		FLAGS$1 = FLAGS$1 | 1073741824ll;
	}
	label$236:;
	label$235:;
	int64 vr$33 = RTLGFXPAINT( TEXPR$1, XEXPR$1, YEXPR$1, PEXPR$1, BEXPR$1, FLAGS$1 );
	fb$result$1 = vr$33;
	label$214:;
	return fb$result$1;
}

int64 CGFXDRAWSTRING( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$237:;
	struct $7ASTNODE* TEXPR$1;
	__builtin_memset( &TEXPR$1, 0, 8ll );
	struct $7ASTNODE* XEXPR$1;
	__builtin_memset( &XEXPR$1, 0, 8ll );
	struct $7ASTNODE* YEXPR$1;
	__builtin_memset( &YEXPR$1, 0, 8ll );
	struct $7ASTNODE* SEXPR$1;
	__builtin_memset( &SEXPR$1, 0, 8ll );
	struct $7ASTNODE* CEXPR$1;
	__builtin_memset( &CEXPR$1, 0, 8ll );
	struct $7ASTNODE* FEXPR$1;
	__builtin_memset( &FEXPR$1, 0, 8ll );
	struct $7ASTNODE* ALPHAEXPR$1;
	__builtin_memset( &ALPHAEXPR$1, 0, 8ll );
	struct $7ASTNODE* FUNCEXPR$1;
	__builtin_memset( &FUNCEXPR$1, 0, 8ll );
	struct $7ASTNODE* PARAMEXPR$1;
	__builtin_memset( &PARAMEXPR$1, 0, 8ll );
	int64 FLAGS$1;
	__builtin_memset( &FLAGS$1, 0, 8ll );
	int64 MODE$1;
	__builtin_memset( &MODE$1, 0, 8ll );
	fb$result$1 = 0ll;
	struct $7ASTNODE* vr$12 = HFBIMAGEEXPRINFRONTOFCOORD( 0ll );
	TEXPR$1 = vr$12;
	int64 vr$13 = HMATCH( 282ll );
	if( vr$13 == 0ll ) goto label$240;
	{
		FLAGS$1 = 5ll;
	}
	goto label$239;
	label$240:;
	{
		FLAGS$1 = 4ll;
	}
	label$239:;
	int64 vr$15 = LEXGETTOKEN( 0ll );
	if( vr$15 == 40ll ) goto label$242;
	{
		ERRREPORT( 6ll, 0ll, (uint8*)0ull );
	}
	goto label$241;
	label$242:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$241:;
	struct $7ASTNODE* vr$17 = HMATCHEXPR( -1ll );
	XEXPR$1 = vr$17;
	if( XEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$244;
	{
		goto label$238;
	}
	label$244:;
	label$243:;
	int64 vr$19 = LEXGETTOKEN( 0ll );
	if( vr$19 == 44ll ) goto label$246;
	{
		ERRREPORT( 16ll, 0ll, (uint8*)0ull );
	}
	goto label$245;
	label$246:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$245:;
	struct $7ASTNODE* vr$21 = HMATCHEXPR( -1ll );
	YEXPR$1 = vr$21;
	if( YEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$248;
	{
		goto label$238;
	}
	label$248:;
	label$247:;
	int64 vr$23 = LEXGETTOKEN( 0ll );
	if( vr$23 == 41ll ) goto label$250;
	{
		ERRREPORT( 7ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
	}
	goto label$249;
	label$250:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$249:;
	int64 vr$25 = LEXGETTOKEN( 0ll );
	if( vr$25 == 44ll ) goto label$252;
	{
		ERRREPORT( 16ll, 0ll, (uint8*)0ull );
	}
	goto label$251;
	label$252:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$251:;
	struct $7ASTNODE* vr$27 = HMATCHEXPR( -1ll );
	SEXPR$1 = vr$27;
	if( SEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$254;
	{
		goto label$238;
	}
	label$254:;
	label$253:;
	CEXPR$1 = (struct $7ASTNODE*)0ull;
	FEXPR$1 = (struct $7ASTNODE*)0ull;
	ALPHAEXPR$1 = (struct $7ASTNODE*)0ull;
	FUNCEXPR$1 = (struct $7ASTNODE*)0ull;
	PARAMEXPR$1 = (struct $7ASTNODE*)0ull;
	MODE$1 = 0ll;
	int64 vr$29 = HMATCH( 44ll );
	if( vr$29 == 0ll ) goto label$256;
	{
		struct $7ASTNODE* vr$31 = CEXPRESSION(  );
		CEXPR$1 = vr$31;
		int64 vr$32 = HMATCH( 44ll );
		if( vr$32 == 0ll ) goto label$258;
		{
			struct $7ASTNODE* vr$34 = HFBIMAGEEXPR( -1ll, (struct $7ASTNODE**)0ull );
			FEXPR$1 = vr$34;
			int64 vr$35 = HMATCH( 44ll );
			if( vr$35 == 0ll ) goto label$260;
			{
				int64 vr$41 = HGETMODE( &MODE$1, &ALPHAEXPR$1, &FUNCEXPR$1, &PARAMEXPR$1 );
				if( vr$41 != 0ll ) goto label$262;
				{
					goto label$238;
				}
				label$262:;
				label$261:;
			}
			label$260:;
			label$259:;
		}
		label$258:;
		label$257:;
	}
	label$256:;
	label$255:;
	if( CEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$264;
	{
		struct $7ASTNODE* vr$44 = ASTNEWCONSTI( 0ll, 8ll, (struct $8FBSYMBOL*)0ull );
		CEXPR$1 = vr$44;
		FLAGS$1 = FLAGS$1 | 2147483648ll;
	}
	label$264:;
	label$263:;
	int64 vr$46 = RTLGFXDRAWSTRING( TEXPR$1, XEXPR$1, YEXPR$1, SEXPR$1, CEXPR$1, FEXPR$1, FLAGS$1, MODE$1, ALPHAEXPR$1, FUNCEXPR$1, PARAMEXPR$1 );
	fb$result$1 = vr$46;
	label$238:;
	return fb$result$1;
}

int64 CGFXDRAW( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$265:;
	struct $7ASTNODE* EXPR1$1;
	__builtin_memset( &EXPR1$1, 0, 8ll );
	struct $7ASTNODE* EXPR2$1;
	__builtin_memset( &EXPR2$1, 0, 8ll );
	fb$result$1 = 0ll;
	int64 vr$3 = HMATCH( 368ll );
	if( vr$3 == 0ll ) goto label$268;
	{
		int64 vr$5 = CGFXDRAWSTRING(  );
		fb$result$1 = vr$5;
		goto label$266;
	}
	label$268:;
	label$267:;
	struct $7ASTNODE* vr$6 = CEXPRESSIONWITHNIDXARRAY( -1ll );
	EXPR1$1 = vr$6;
	if( EXPR1$1 != (struct $7ASTNODE*)0ull ) goto label$270;
	{
		ERRREPORT( 9ll, 0ll, (uint8*)0ull );
		goto label$266;
	}
	label$270:;
	label$269:;
	int64 vr$8 = HMATCH( 44ll );
	if( vr$8 == 0ll ) goto label$272;
	{
		struct $7ASTNODE* vr$10 = HCHECKFBIMAGEEXPR( EXPR1$1, 0ll, (struct $7ASTNODE**)0ull );
		EXPR1$1 = vr$10;
		struct $7ASTNODE* vr$11 = HMATCHEXPR( -1ll );
		EXPR2$1 = vr$11;
		if( EXPR2$1 != (struct $7ASTNODE*)0ull ) goto label$274;
		{
			goto label$266;
		}
		label$274:;
		label$273:;
	}
	goto label$271;
	label$272:;
	{
		if( *(int64*)EXPR1$1 != 25ll ) goto label$276;
		{
			ERRREPORT( 72ll, -1ll, (uint8*)0ull );
			goto label$266;
		}
		label$276:;
		label$275:;
		EXPR2$1 = EXPR1$1;
		EXPR1$1 = (struct $7ASTNODE*)0ull;
	}
	label$271:;
	int64 vr$15 = RTLGFXDRAW( EXPR1$1, EXPR2$1 );
	fb$result$1 = vr$15;
	label$266:;
	return fb$result$1;
}

int64 CGFXVIEW( int64 ISVIEW$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$277:;
	int64 FLAGS$1;
	__builtin_memset( &FLAGS$1, 0, 8ll );
	struct $7ASTNODE* X1EXPR$1;
	__builtin_memset( &X1EXPR$1, 0, 8ll );
	struct $7ASTNODE* Y1EXPR$1;
	__builtin_memset( &Y1EXPR$1, 0, 8ll );
	struct $7ASTNODE* X2EXPR$1;
	__builtin_memset( &X2EXPR$1, 0, 8ll );
	struct $7ASTNODE* Y2EXPR$1;
	__builtin_memset( &Y2EXPR$1, 0, 8ll );
	struct $7ASTNODE* FILLEXPR$1;
	__builtin_memset( &FILLEXPR$1, 0, 8ll );
	struct $7ASTNODE* BORDEXPR$1;
	__builtin_memset( &BORDEXPR$1, 0, 8ll );
	fb$result$1 = 0ll;
	{
		int64 TMP$105$2;
		int64 vr$8 = LEXGETTOKEN( 0ll );
		TMP$105$2 = vr$8;
		if( TMP$105$2 == 506ll ) goto label$281;
		label$282:;
		if( TMP$105$2 != 507ll ) goto label$280;
		label$281:;
		{
			LEXSKIPTOKEN( 0ll );
			FLAGS$1 = 1ll;
		}
		goto label$279;
		label$280:;
		{
			FLAGS$1 = 0ll;
		}
		label$283:;
		label$279:;
	}
	X1EXPR$1 = (struct $7ASTNODE*)0ull;
	Y1EXPR$1 = (struct $7ASTNODE*)0ull;
	X2EXPR$1 = (struct $7ASTNODE*)0ull;
	Y2EXPR$1 = (struct $7ASTNODE*)0ull;
	FILLEXPR$1 = (struct $7ASTNODE*)0ull;
	BORDEXPR$1 = (struct $7ASTNODE*)0ull;
	int64 vr$11 = HMATCH( 40ll );
	if( vr$11 == 0ll ) goto label$285;
	{
		struct $7ASTNODE* vr$13 = HMATCHEXPR( -1ll );
		X1EXPR$1 = vr$13;
		if( X1EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$287;
		{
			goto label$278;
		}
		label$287:;
		label$286:;
		int64 vr$15 = LEXGETTOKEN( 0ll );
		if( vr$15 == 44ll ) goto label$289;
		{
			ERRREPORT( 16ll, 0ll, (uint8*)0ull );
		}
		goto label$288;
		label$289:;
		{
			LEXSKIPTOKEN( 0ll );
		}
		label$288:;
		struct $7ASTNODE* vr$17 = HMATCHEXPR( -1ll );
		Y1EXPR$1 = vr$17;
		if( Y1EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$291;
		{
			goto label$278;
		}
		label$291:;
		label$290:;
		int64 vr$19 = LEXGETTOKEN( 0ll );
		if( vr$19 == 41ll ) goto label$293;
		{
			ERRREPORT( 7ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
		}
		goto label$292;
		label$293:;
		{
			LEXSKIPTOKEN( 0ll );
		}
		label$292:;
		int64 vr$21 = HMATCH( 45ll );
		if( vr$21 != 0ll ) goto label$295;
		{
			ERRREPORT( 15ll, 0ll, (uint8*)0ull );
			goto label$278;
		}
		label$295:;
		label$294:;
		int64 vr$23 = LEXGETTOKEN( 0ll );
		if( vr$23 == 40ll ) goto label$297;
		{
			ERRREPORT( 6ll, 0ll, (uint8*)0ull );
		}
		goto label$296;
		label$297:;
		{
			LEXSKIPTOKEN( 0ll );
		}
		label$296:;
		struct $7ASTNODE* vr$25 = HMATCHEXPR( -1ll );
		X2EXPR$1 = vr$25;
		if( X2EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$299;
		{
			goto label$278;
		}
		label$299:;
		label$298:;
		int64 vr$27 = LEXGETTOKEN( 0ll );
		if( vr$27 == 44ll ) goto label$301;
		{
			ERRREPORT( 16ll, 0ll, (uint8*)0ull );
		}
		goto label$300;
		label$301:;
		{
			LEXSKIPTOKEN( 0ll );
		}
		label$300:;
		struct $7ASTNODE* vr$29 = HMATCHEXPR( -1ll );
		Y2EXPR$1 = vr$29;
		if( Y2EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$303;
		{
			goto label$278;
		}
		label$303:;
		label$302:;
		int64 vr$31 = LEXGETTOKEN( 0ll );
		if( vr$31 == 41ll ) goto label$305;
		{
			ERRREPORT( 7ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
		}
		goto label$304;
		label$305:;
		{
			LEXSKIPTOKEN( 0ll );
		}
		label$304:;
		if( ISVIEW$1 == 0ll ) goto label$307;
		{
			FLAGS$1 = FLAGS$1 | 3221225472ll;
			int64 vr$35 = HMATCH( 44ll );
			if( vr$35 == 0ll ) goto label$309;
			{
				struct $7ASTNODE* vr$37 = CEXPRESSION(  );
				FILLEXPR$1 = vr$37;
				if( FILLEXPR$1 == (struct $7ASTNODE*)0ull ) goto label$311;
				{
					FLAGS$1 = FLAGS$1 & -2147483649ll;
				}
				label$311:;
				label$310:;
				int64 vr$40 = HMATCH( 44ll );
				if( vr$40 == 0ll ) goto label$313;
				{
					struct $7ASTNODE* vr$42 = HMATCHEXPR( -1ll );
					BORDEXPR$1 = vr$42;
					if( BORDEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$315;
					{
						goto label$278;
					}
					label$315:;
					label$314:;
					FLAGS$1 = FLAGS$1 & -1073741825ll;
				}
				label$313:;
				label$312:;
			}
			label$309:;
			label$308:;
		}
		label$307:;
		label$306:;
	}
	label$285:;
	label$284:;
	if( ISVIEW$1 == 0ll ) goto label$317;
	{
		int64 vr$46 = RTLGFXVIEW( X1EXPR$1, Y1EXPR$1, X2EXPR$1, Y2EXPR$1, FILLEXPR$1, BORDEXPR$1, FLAGS$1 );
		fb$result$1 = vr$46;
	}
	goto label$316;
	label$317:;
	{
		int64 vr$47 = RTLGFXWINDOW( X1EXPR$1, Y1EXPR$1, X2EXPR$1, Y2EXPR$1, FLAGS$1 );
		fb$result$1 = vr$47;
	}
	label$316:;
	label$278:;
	return fb$result$1;
}

int64 CGFXPALETTE( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$318:;
	struct $7ASTNODE* ARRAYEXPR$1;
	__builtin_memset( &ARRAYEXPR$1, 0, 8ll );
	struct $7ASTNODE* ATTEXPR$1;
	__builtin_memset( &ATTEXPR$1, 0, 8ll );
	struct $7ASTNODE* REXPR$1;
	__builtin_memset( &REXPR$1, 0, 8ll );
	struct $7ASTNODE* GEXPR$1;
	__builtin_memset( &GEXPR$1, 0, 8ll );
	struct $7ASTNODE* BEXPR$1;
	__builtin_memset( &BEXPR$1, 0, 8ll );
	int64 ISGET$1;
	__builtin_memset( &ISGET$1, 0, 8ll );
	fb$result$1 = 0ll;
	int64 vr$7 = HMATCHTEXT( (uint8*)"GET" );
	ISGET$1 = vr$7;
	int64 vr$8 = HMATCH( 287ll );
	if( vr$8 == 0ll ) goto label$321;
	{
		struct $7ASTNODE* vr$11 = HFBIMAGEEXPR( ~ISGET$1, (struct $7ASTNODE**)0ull );
		ARRAYEXPR$1 = vr$11;
		if( ARRAYEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$323;
		{
			ERRREPORT( 14ll, 0ll, (uint8*)0ull );
			goto label$319;
		}
		label$323:;
		label$322:;
		int64 vr$13 = RTLGFXPALETTEUSING( ARRAYEXPR$1, ISGET$1 );
		fb$result$1 = vr$13;
	}
	goto label$320;
	label$321:;
	{
		ATTEXPR$1 = (struct $7ASTNODE*)0ull;
		REXPR$1 = (struct $7ASTNODE*)0ull;
		GEXPR$1 = (struct $7ASTNODE*)0ull;
		BEXPR$1 = (struct $7ASTNODE*)0ull;
		struct $7ASTNODE* vr$14 = CEXPRESSION(  );
		ATTEXPR$1 = vr$14;
		if( ATTEXPR$1 == (struct $7ASTNODE*)0ull ) goto label$325;
		{
			int64 vr$16 = LEXGETTOKEN( 0ll );
			if( vr$16 == 44ll ) goto label$327;
			{
				ERRREPORT( 16ll, 0ll, (uint8*)0ull );
			}
			goto label$326;
			label$327:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$326:;
			if( ISGET$1 == 0ll ) goto label$329;
			{
				struct $7ASTNODE* vr$19 = CVARORDEREF( 0ll );
				REXPR$1 = vr$19;
				if( REXPR$1 != (struct $7ASTNODE*)0ull ) goto label$331;
				{
					ERRREPORT( 14ll, 0ll, (uint8*)0ull );
					goto label$319;
				}
				label$331:;
				label$330:;
			}
			goto label$328;
			label$329:;
			{
				struct $7ASTNODE* vr$21 = HMATCHEXPR( -1ll );
				REXPR$1 = vr$21;
				if( REXPR$1 != (struct $7ASTNODE*)0ull ) goto label$333;
				{
					goto label$319;
				}
				label$333:;
				label$332:;
			}
			label$328:;
			int64 vr$23 = HMATCH( 44ll );
			if( vr$23 == 0ll ) goto label$335;
			{
				if( ISGET$1 == 0ll ) goto label$337;
				{
					struct $7ASTNODE* vr$26 = CVARORDEREF( 0ll );
					GEXPR$1 = vr$26;
					if( GEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$339;
					{
						ERRREPORT( 14ll, 0ll, (uint8*)0ull );
						goto label$319;
					}
					label$339:;
					label$338:;
				}
				goto label$336;
				label$337:;
				{
					struct $7ASTNODE* vr$28 = HMATCHEXPR( -1ll );
					GEXPR$1 = vr$28;
					if( GEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$341;
					{
						goto label$319;
					}
					label$341:;
					label$340:;
				}
				label$336:;
				int64 vr$30 = LEXGETTOKEN( 0ll );
				if( vr$30 == 44ll ) goto label$343;
				{
					ERRREPORT( 16ll, 0ll, (uint8*)0ull );
				}
				goto label$342;
				label$343:;
				{
					LEXSKIPTOKEN( 0ll );
				}
				label$342:;
				if( ISGET$1 == 0ll ) goto label$345;
				{
					struct $7ASTNODE* vr$33 = CVARORDEREF( 0ll );
					BEXPR$1 = vr$33;
					if( BEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$347;
					{
						ERRREPORT( 14ll, 0ll, (uint8*)0ull );
						goto label$319;
					}
					label$347:;
					label$346:;
				}
				goto label$344;
				label$345:;
				{
					struct $7ASTNODE* vr$35 = HMATCHEXPR( -1ll );
					BEXPR$1 = vr$35;
					if( BEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$349;
					{
						goto label$319;
					}
					label$349:;
					label$348:;
				}
				label$344:;
			}
			label$335:;
			label$334:;
		}
		goto label$324;
		label$325:;
		{
			if( ISGET$1 == 0ll ) goto label$351;
			{
				ERRREPORT( 9ll, 0ll, (uint8*)0ull );
				goto label$319;
			}
			label$351:;
			label$350:;
		}
		label$324:;
		int64 HAS_CONST$2;
		HAS_CONST$2 = 0ll;
		if( ISGET$1 == 0ll ) goto label$353;
		{
			int64 TMP$107$3;
			int64 TMP$108$3;
			int64 TMP$109$3;
			if( REXPR$1 == (struct $7ASTNODE*)0ull ) goto label$354;
			TMP$107$3 = (int64)-((*(int64*)((uint8*)REXPR$1 + 8ll) & 512ll) != 0ll);
			goto label$359;
			label$354:;
			TMP$107$3 = 0ll;
			label$359:;
			HAS_CONST$2 = HAS_CONST$2 | TMP$107$3;
			if( GEXPR$1 == (struct $7ASTNODE*)0ull ) goto label$355;
			TMP$108$3 = (int64)-((*(int64*)((uint8*)GEXPR$1 + 8ll) & 512ll) != 0ll);
			goto label$360;
			label$355:;
			TMP$108$3 = 0ll;
			label$360:;
			HAS_CONST$2 = HAS_CONST$2 | TMP$108$3;
			if( BEXPR$1 == (struct $7ASTNODE*)0ull ) goto label$356;
			TMP$109$3 = (int64)-((*(int64*)((uint8*)BEXPR$1 + 8ll) & 512ll) != 0ll);
			goto label$361;
			label$356:;
			TMP$109$3 = 0ll;
			label$361:;
			HAS_CONST$2 = HAS_CONST$2 | TMP$109$3;
		}
		label$353:;
		label$352:;
		if( HAS_CONST$2 == 0ll ) goto label$358;
		{
			ERRREPORT( 118ll, -1ll, (uint8*)0ull );
		}
		label$358:;
		label$357:;
		int64 vr$55 = RTLGFXPALETTE( ATTEXPR$1, REXPR$1, GEXPR$1, BEXPR$1, ISGET$1 );
		fb$result$1 = vr$55;
	}
	label$320:;
	label$319:;
	return fb$result$1;
}

int64 CGFXPUT( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$362:;
	int64 COORDTYPE$1;
	__builtin_memset( &COORDTYPE$1, 0, 8ll );
	int64 MODE$1;
	__builtin_memset( &MODE$1, 0, 8ll );
	int64 EXPECTMODE$1;
	__builtin_memset( &EXPECTMODE$1, 0, 8ll );
	struct $7ASTNODE* XEXPR$1;
	__builtin_memset( &XEXPR$1, 0, 8ll );
	struct $7ASTNODE* YEXPR$1;
	__builtin_memset( &YEXPR$1, 0, 8ll );
	struct $7ASTNODE* ARRAYEXPR$1;
	__builtin_memset( &ARRAYEXPR$1, 0, 8ll );
	struct $7ASTNODE* TEXPR$1;
	__builtin_memset( &TEXPR$1, 0, 8ll );
	struct $7ASTNODE* ALPHAEXPR$1;
	__builtin_memset( &ALPHAEXPR$1, 0, 8ll );
	struct $7ASTNODE* FUNCEXPR$1;
	__builtin_memset( &FUNCEXPR$1, 0, 8ll );
	struct $7ASTNODE* PARAMEXPR$1;
	__builtin_memset( &PARAMEXPR$1, 0, 8ll );
	struct $7ASTNODE* X1EXPR$1;
	__builtin_memset( &X1EXPR$1, 0, 8ll );
	struct $7ASTNODE* Y1EXPR$1;
	__builtin_memset( &Y1EXPR$1, 0, 8ll );
	struct $7ASTNODE* X2EXPR$1;
	__builtin_memset( &X2EXPR$1, 0, 8ll );
	struct $7ASTNODE* Y2EXPR$1;
	__builtin_memset( &Y2EXPR$1, 0, 8ll );
	struct $8FBSYMBOL* ARG1$1;
	__builtin_memset( &ARG1$1, 0, 8ll );
	struct $8FBSYMBOL* ARG2$1;
	__builtin_memset( &ARG2$1, 0, 8ll );
	fb$result$1 = 0ll;
	ALPHAEXPR$1 = (struct $7ASTNODE*)0ull;
	FUNCEXPR$1 = (struct $7ASTNODE*)0ull;
	PARAMEXPR$1 = (struct $7ASTNODE*)0ull;
	X1EXPR$1 = (struct $7ASTNODE*)0ull;
	struct $7ASTNODE* vr$17 = HFBIMAGEEXPRINFRONTOFCOORD( 0ll );
	TEXPR$1 = vr$17;
	int64 vr$18 = HMATCH( 282ll );
	if( vr$18 == 0ll ) goto label$365;
	{
		COORDTYPE$1 = 2ll;
	}
	goto label$364;
	label$365:;
	{
		COORDTYPE$1 = 0ll;
	}
	label$364:;
	int64 vr$20 = LEXGETTOKEN( 0ll );
	if( vr$20 == 40ll ) goto label$367;
	{
		ERRREPORT( 6ll, 0ll, (uint8*)0ull );
	}
	goto label$366;
	label$367:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$366:;
	struct $7ASTNODE* vr$22 = HMATCHEXPR( -1ll );
	XEXPR$1 = vr$22;
	if( XEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$369;
	{
		goto label$363;
	}
	label$369:;
	label$368:;
	int64 vr$24 = LEXGETTOKEN( 0ll );
	if( vr$24 == 44ll ) goto label$371;
	{
		ERRREPORT( 16ll, 0ll, (uint8*)0ull );
	}
	goto label$370;
	label$371:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$370:;
	struct $7ASTNODE* vr$26 = HMATCHEXPR( -1ll );
	YEXPR$1 = vr$26;
	if( YEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$373;
	{
		goto label$363;
	}
	label$373:;
	label$372:;
	int64 vr$28 = LEXGETTOKEN( 0ll );
	if( vr$28 == 41ll ) goto label$375;
	{
		ERRREPORT( 7ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
	}
	goto label$374;
	label$375:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$374:;
	int64 vr$30 = LEXGETTOKEN( 0ll );
	if( vr$30 == 44ll ) goto label$377;
	{
		ERRREPORT( 16ll, 0ll, (uint8*)0ull );
	}
	goto label$376;
	label$377:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$376:;
	struct $7ASTNODE* vr$32 = HFBIMAGEEXPR( -1ll, (struct $7ASTNODE**)0ull );
	ARRAYEXPR$1 = vr$32;
	if( ARRAYEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$379;
	{
		ERRREPORT( 14ll, 0ll, (uint8*)0ull );
		goto label$363;
	}
	label$379:;
	label$378:;
	MODE$1 = 5ll;
	int64 vr$34 = HMATCH( 44ll );
	if( vr$34 == 0ll ) goto label$381;
	{
		EXPECTMODE$1 = -1ll;
		int64 vr$36 = HMATCH( 40ll );
		if( vr$36 == 0ll ) goto label$383;
		{
			struct $7ASTNODE* vr$38 = HMATCHEXPR( -1ll );
			X1EXPR$1 = vr$38;
			if( X1EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$385;
			{
				goto label$363;
			}
			label$385:;
			label$384:;
			int64 vr$40 = LEXGETTOKEN( 0ll );
			if( vr$40 == 44ll ) goto label$387;
			{
				ERRREPORT( 16ll, 0ll, (uint8*)0ull );
			}
			goto label$386;
			label$387:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$386:;
			struct $7ASTNODE* vr$42 = HMATCHEXPR( -1ll );
			Y1EXPR$1 = vr$42;
			if( Y1EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$389;
			{
				goto label$363;
			}
			label$389:;
			label$388:;
			int64 vr$44 = LEXGETTOKEN( 0ll );
			if( vr$44 == 41ll ) goto label$391;
			{
				ERRREPORT( 7ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
			}
			goto label$390;
			label$391:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$390:;
			int64 vr$46 = HMATCH( 45ll );
			if( vr$46 != 0ll ) goto label$393;
			{
				ERRREPORT( 15ll, 0ll, (uint8*)0ull );
				goto label$363;
			}
			label$393:;
			label$392:;
			int64 vr$48 = HMATCH( 282ll );
			if( vr$48 == 0ll ) goto label$395;
			{
				if( COORDTYPE$1 != 2ll ) goto label$397;
				{
					COORDTYPE$1 = 3ll;
				}
				goto label$396;
				label$397:;
				{
					COORDTYPE$1 = 1ll;
				}
				label$396:;
			}
			label$395:;
			label$394:;
			int64 vr$51 = LEXGETTOKEN( 0ll );
			if( vr$51 == 40ll ) goto label$399;
			{
				ERRREPORT( 6ll, 0ll, (uint8*)0ull );
			}
			goto label$398;
			label$399:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$398:;
			struct $7ASTNODE* vr$53 = HMATCHEXPR( -1ll );
			X2EXPR$1 = vr$53;
			if( X2EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$401;
			{
				goto label$363;
			}
			label$401:;
			label$400:;
			int64 vr$55 = LEXGETTOKEN( 0ll );
			if( vr$55 == 44ll ) goto label$403;
			{
				ERRREPORT( 16ll, 0ll, (uint8*)0ull );
			}
			goto label$402;
			label$403:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$402:;
			struct $7ASTNODE* vr$57 = HMATCHEXPR( -1ll );
			Y2EXPR$1 = vr$57;
			if( Y2EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$405;
			{
				goto label$363;
			}
			label$405:;
			label$404:;
			int64 vr$59 = LEXGETTOKEN( 0ll );
			if( vr$59 == 41ll ) goto label$407;
			{
				ERRREPORT( 7ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
			}
			goto label$406;
			label$407:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$406:;
			int64 vr$61 = HMATCH( 44ll );
			if( vr$61 != 0ll ) goto label$409;
			{
				EXPECTMODE$1 = 0ll;
			}
			label$409:;
			label$408:;
		}
		label$383:;
		label$382:;
		if( EXPECTMODE$1 == 0ll ) goto label$411;
		{
			int64 vr$68 = HGETMODE( &MODE$1, &ALPHAEXPR$1, &FUNCEXPR$1, &PARAMEXPR$1 );
			if( vr$68 != 0ll ) goto label$413;
			{
				goto label$363;
			}
			label$413:;
			label$412:;
		}
		label$411:;
		label$410:;
	}
	label$381:;
	label$380:;
	int64 vr$70 = RTLGFXPUT( TEXPR$1, XEXPR$1, YEXPR$1, ARRAYEXPR$1, X1EXPR$1, Y1EXPR$1, X2EXPR$1, Y2EXPR$1, MODE$1, ALPHAEXPR$1, FUNCEXPR$1, PARAMEXPR$1, COORDTYPE$1 );
	fb$result$1 = vr$70;
	label$363:;
	return fb$result$1;
}

int64 CGFXGET( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$414:;
	int64 COORDTYPE$1;
	__builtin_memset( &COORDTYPE$1, 0, 8ll );
	struct $7ASTNODE* X1EXPR$1;
	__builtin_memset( &X1EXPR$1, 0, 8ll );
	struct $7ASTNODE* Y1EXPR$1;
	__builtin_memset( &Y1EXPR$1, 0, 8ll );
	struct $7ASTNODE* X2EXPR$1;
	__builtin_memset( &X2EXPR$1, 0, 8ll );
	struct $7ASTNODE* Y2EXPR$1;
	__builtin_memset( &Y2EXPR$1, 0, 8ll );
	struct $7ASTNODE* ARRAYEXPR$1;
	__builtin_memset( &ARRAYEXPR$1, 0, 8ll );
	struct $7ASTNODE* TEXPR$1;
	__builtin_memset( &TEXPR$1, 0, 8ll );
	struct $7ASTNODE* DESCEXPR$1;
	__builtin_memset( &DESCEXPR$1, 0, 8ll );
	fb$result$1 = 0ll;
	struct $7ASTNODE* vr$9 = HFBIMAGEEXPRINFRONTOFCOORD( -1ll );
	TEXPR$1 = vr$9;
	int64 vr$10 = HMATCH( 282ll );
	if( vr$10 == 0ll ) goto label$417;
	{
		COORDTYPE$1 = 5ll;
	}
	goto label$416;
	label$417:;
	{
		COORDTYPE$1 = 4ll;
	}
	label$416:;
	int64 vr$12 = LEXGETTOKEN( 0ll );
	if( vr$12 == 40ll ) goto label$419;
	{
		ERRREPORT( 6ll, 0ll, (uint8*)0ull );
	}
	goto label$418;
	label$419:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$418:;
	struct $7ASTNODE* vr$14 = HMATCHEXPR( -1ll );
	X1EXPR$1 = vr$14;
	if( X1EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$421;
	{
		goto label$415;
	}
	label$421:;
	label$420:;
	int64 vr$16 = LEXGETTOKEN( 0ll );
	if( vr$16 == 44ll ) goto label$423;
	{
		ERRREPORT( 16ll, 0ll, (uint8*)0ull );
	}
	goto label$422;
	label$423:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$422:;
	struct $7ASTNODE* vr$18 = HMATCHEXPR( -1ll );
	Y1EXPR$1 = vr$18;
	if( Y1EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$425;
	{
		goto label$415;
	}
	label$425:;
	label$424:;
	int64 vr$20 = LEXGETTOKEN( 0ll );
	if( vr$20 == 41ll ) goto label$427;
	{
		ERRREPORT( 7ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
	}
	goto label$426;
	label$427:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$426:;
	int64 vr$22 = HMATCH( 45ll );
	if( vr$22 != 0ll ) goto label$429;
	{
		ERRREPORT( 15ll, 0ll, (uint8*)0ull );
		goto label$415;
	}
	label$429:;
	label$428:;
	int64 vr$24 = HMATCH( 282ll );
	if( vr$24 == 0ll ) goto label$431;
	{
		if( COORDTYPE$1 != 5ll ) goto label$433;
		{
			COORDTYPE$1 = 3ll;
		}
		goto label$432;
		label$433:;
		{
			COORDTYPE$1 = 1ll;
		}
		label$432:;
	}
	goto label$430;
	label$431:;
	{
		if( COORDTYPE$1 != 5ll ) goto label$435;
		{
			COORDTYPE$1 = 2ll;
		}
		goto label$434;
		label$435:;
		{
			COORDTYPE$1 = 0ll;
		}
		label$434:;
	}
	label$430:;
	int64 vr$28 = LEXGETTOKEN( 0ll );
	if( vr$28 == 40ll ) goto label$437;
	{
		ERRREPORT( 6ll, 0ll, (uint8*)0ull );
	}
	goto label$436;
	label$437:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$436:;
	struct $7ASTNODE* vr$30 = HMATCHEXPR( -1ll );
	X2EXPR$1 = vr$30;
	if( X2EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$439;
	{
		goto label$415;
	}
	label$439:;
	label$438:;
	int64 vr$32 = LEXGETTOKEN( 0ll );
	if( vr$32 == 44ll ) goto label$441;
	{
		ERRREPORT( 16ll, 0ll, (uint8*)0ull );
	}
	goto label$440;
	label$441:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$440:;
	struct $7ASTNODE* vr$34 = HMATCHEXPR( -1ll );
	Y2EXPR$1 = vr$34;
	if( Y2EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$443;
	{
		goto label$415;
	}
	label$443:;
	label$442:;
	int64 vr$36 = LEXGETTOKEN( 0ll );
	if( vr$36 == 41ll ) goto label$445;
	{
		ERRREPORT( 7ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
	}
	goto label$444;
	label$445:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$444:;
	int64 vr$38 = LEXGETTOKEN( 0ll );
	if( vr$38 == 44ll ) goto label$447;
	{
		ERRREPORT( 16ll, 0ll, (uint8*)0ull );
	}
	goto label$446;
	label$447:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$446:;
	struct $7ASTNODE* vr$41 = HFBIMAGEEXPR( 0ll, &DESCEXPR$1 );
	ARRAYEXPR$1 = vr$41;
	if( ARRAYEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$449;
	{
		ERRREPORT( 14ll, 0ll, (uint8*)0ull );
		goto label$415;
	}
	label$449:;
	label$448:;
	int64 vr$43 = RTLGFXGET( TEXPR$1, X1EXPR$1, Y1EXPR$1, X2EXPR$1, Y2EXPR$1, ARRAYEXPR$1, COORDTYPE$1, DESCEXPR$1 );
	fb$result$1 = vr$43;
	label$415:;
	return fb$result$1;
}

int64 CGFXSCREEN( int64 ISQB$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$450:;
	fb$result$1 = 0ll;
	if( ISQB$1 != 0ll ) goto label$453;
	{
		struct $7ASTNODE* MEXPR$2;
		struct $7ASTNODE* vr$2 = CEXPRESSION(  );
		MEXPR$2 = vr$2;
		struct $7ASTNODE* DEXPR$2;
		DEXPR$2 = (struct $7ASTNODE*)0ull;
		int64 vr$3 = HMATCH( 44ll );
		if( vr$3 == 0ll ) goto label$455;
		{
			struct $7ASTNODE* vr$5 = CEXPRESSION(  );
			DEXPR$2 = vr$5;
		}
		label$455:;
		label$454:;
		struct $7ASTNODE* PEXPR$2;
		PEXPR$2 = (struct $7ASTNODE*)0ull;
		int64 vr$6 = HMATCH( 44ll );
		if( vr$6 == 0ll ) goto label$457;
		{
			struct $7ASTNODE* vr$8 = CEXPRESSION(  );
			PEXPR$2 = vr$8;
		}
		label$457:;
		label$456:;
		if( MEXPR$2 != (struct $7ASTNODE*)0ull ) goto label$459;
		{
			struct $7ASTNODE* vr$10 = RTLPAGESET( DEXPR$2, PEXPR$2, 0ll );
			fb$result$1 = (int64)-(vr$10 != (struct $7ASTNODE*)0ull);
			goto label$451;
		}
		label$459:;
		label$458:;
		struct $7ASTNODE* FEXPR$2;
		FEXPR$2 = (struct $7ASTNODE*)0ull;
		int64 vr$12 = HMATCH( 44ll );
		if( vr$12 == 0ll ) goto label$461;
		{
			struct $7ASTNODE* vr$14 = CEXPRESSION(  );
			FEXPR$2 = vr$14;
		}
		label$461:;
		label$460:;
		struct $7ASTNODE* REXPR$2;
		REXPR$2 = (struct $7ASTNODE*)0ull;
		int64 vr$15 = HMATCH( 44ll );
		if( vr$15 == 0ll ) goto label$463;
		{
			struct $7ASTNODE* vr$17 = CEXPRESSION(  );
			REXPR$2 = vr$17;
		}
		label$463:;
		label$462:;
		int64 vr$18 = RTLGFXSCREENSET( MEXPR$2, DEXPR$2, PEXPR$2, FEXPR$2, REXPR$2 );
		fb$result$1 = vr$18;
	}
	goto label$452;
	label$453:;
	{
		struct $7ASTNODE* MODE$2;
		struct $7ASTNODE* vr$19 = CEXPRESSION(  );
		MODE$2 = vr$19;
		int64 vr$20 = HMATCH( 44ll );
		if( vr$20 == 0ll ) goto label$465;
		{
			struct $7ASTNODE* CSWITCH$3;
			struct $7ASTNODE* vr$22 = CEXPRESSION(  );
			CSWITCH$3 = vr$22;
			if( CSWITCH$3 == (struct $7ASTNODE*)0ull ) goto label$467;
			{
				ASTDELTREE( CSWITCH$3 );
			}
			label$467:;
			label$466:;
		}
		label$465:;
		label$464:;
		struct $7ASTNODE* ACTIVE$2;
		ACTIVE$2 = (struct $7ASTNODE*)0ull;
		int64 vr$24 = HMATCH( 44ll );
		if( vr$24 == 0ll ) goto label$469;
		{
			struct $7ASTNODE* vr$26 = CEXPRESSION(  );
			ACTIVE$2 = vr$26;
		}
		label$469:;
		label$468:;
		struct $7ASTNODE* VISIBLE$2;
		VISIBLE$2 = (struct $7ASTNODE*)0ull;
		int64 vr$27 = HMATCH( 44ll );
		if( vr$27 == 0ll ) goto label$471;
		{
			struct $7ASTNODE* vr$29 = CEXPRESSION(  );
			VISIBLE$2 = vr$29;
		}
		label$471:;
		label$470:;
		if( MODE$2 != (struct $7ASTNODE*)0ull ) goto label$473;
		{
			struct $7ASTNODE* vr$31 = RTLPAGESET( ACTIVE$2, VISIBLE$2, 0ll );
			fb$result$1 = (int64)-(vr$31 != (struct $7ASTNODE*)0ull);
		}
		goto label$472;
		label$473:;
		{
			int64 vr$33 = RTLGFXSCREENSETQB( MODE$2, ACTIVE$2, VISIBLE$2 );
			fb$result$1 = vr$33;
		}
		label$472:;
	}
	label$452:;
	label$451:;
	return fb$result$1;
}

int64 CGFXPOINT( struct $7ASTNODE** FUNCEXPR$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$474:;
	struct $7ASTNODE* XEXPR$1;
	__builtin_memset( &XEXPR$1, 0, 8ll );
	struct $7ASTNODE* YEXPR$1;
	__builtin_memset( &YEXPR$1, 0, 8ll );
	struct $7ASTNODE* TEXPR$1;
	__builtin_memset( &TEXPR$1, 0, 8ll );
	fb$result$1 = 0ll;
	int64 vr$4 = LEXGETTOKEN( 0ll );
	if( vr$4 == 40ll ) goto label$477;
	{
		ERRREPORT( 6ll, 0ll, (uint8*)0ull );
	}
	goto label$476;
	label$477:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$476:;
	struct $7ASTNODE* vr$6 = HMATCHEXPR( -1ll );
	XEXPR$1 = vr$6;
	if( XEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$479;
	{
		goto label$475;
	}
	label$479:;
	label$478:;
	YEXPR$1 = (struct $7ASTNODE*)0ull;
	TEXPR$1 = (struct $7ASTNODE*)0ull;
	int64 vr$8 = HMATCH( 44ll );
	if( vr$8 == 0ll ) goto label$481;
	{
		struct $7ASTNODE* vr$10 = HMATCHEXPR( -1ll );
		YEXPR$1 = vr$10;
		if( YEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$483;
		{
			goto label$475;
		}
		label$483:;
		label$482:;
		int64 vr$12 = HMATCH( 44ll );
		if( vr$12 == 0ll ) goto label$485;
		{
			struct $7ASTNODE* vr$14 = HFBIMAGEEXPR( -1ll, (struct $7ASTNODE**)0ull );
			TEXPR$1 = vr$14;
			if( TEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$487;
			{
				ERRREPORT( 9ll, 0ll, (uint8*)0ull );
				goto label$475;
			}
			label$487:;
			label$486:;
		}
		label$485:;
		label$484:;
	}
	label$481:;
	label$480:;
	int64 vr$16 = LEXGETTOKEN( 0ll );
	if( vr$16 == 41ll ) goto label$489;
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
	struct $7ASTNODE* vr$18 = RTLGFXPOINT( TEXPR$1, XEXPR$1, YEXPR$1 );
	*FUNCEXPR$1 = vr$18;
	fb$result$1 = (int64)-(*FUNCEXPR$1 != (struct $7ASTNODE*)0ull);
	label$475:;
	return fb$result$1;
}

int64 CGFXIMAGECREATE( struct $7ASTNODE** FUNCEXPR$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$490:;
	struct $7ASTNODE* WEXPR$1;
	__builtin_memset( &WEXPR$1, 0, 8ll );
	struct $7ASTNODE* HEXPR$1;
	__builtin_memset( &HEXPR$1, 0, 8ll );
	struct $7ASTNODE* CEXPR$1;
	__builtin_memset( &CEXPR$1, 0, 8ll );
	struct $7ASTNODE* DEXPR$1;
	__builtin_memset( &DEXPR$1, 0, 8ll );
	int64 FLAGS$1;
	__builtin_memset( &FLAGS$1, 0, 8ll );
	fb$result$1 = 0ll;
	int64 vr$6 = LEXGETTOKEN( 0ll );
	if( vr$6 == 40ll ) goto label$493;
	{
		ERRREPORT( 6ll, 0ll, (uint8*)0ull );
	}
	goto label$492;
	label$493:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$492:;
	struct $7ASTNODE* vr$8 = HMATCHEXPR( -1ll );
	WEXPR$1 = vr$8;
	if( WEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$495;
	{
		goto label$491;
	}
	label$495:;
	label$494:;
	int64 vr$10 = LEXGETTOKEN( 0ll );
	if( vr$10 == 44ll ) goto label$497;
	{
		ERRREPORT( 16ll, 0ll, (uint8*)0ull );
	}
	goto label$496;
	label$497:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$496:;
	struct $7ASTNODE* vr$12 = HMATCHEXPR( -1ll );
	HEXPR$1 = vr$12;
	if( HEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$499;
	{
		goto label$491;
	}
	label$499:;
	label$498:;
	CEXPR$1 = (struct $7ASTNODE*)0ull;
	DEXPR$1 = (struct $7ASTNODE*)0ull;
	FLAGS$1 = 2147483648ll;
	int64 vr$14 = HMATCH( 44ll );
	if( vr$14 == 0ll ) goto label$501;
	{
		struct $7ASTNODE* vr$16 = CEXPRESSION(  );
		CEXPR$1 = vr$16;
		if( CEXPR$1 == (struct $7ASTNODE*)0ull ) goto label$503;
		{
			FLAGS$1 = 0ll;
		}
		label$503:;
		label$502:;
		int64 vr$18 = HMATCH( 44ll );
		if( vr$18 == 0ll ) goto label$505;
		{
			struct $7ASTNODE* vr$20 = HMATCHEXPR( -1ll );
			DEXPR$1 = vr$20;
			if( DEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$507;
			{
				goto label$491;
			}
			label$507:;
			label$506:;
		}
		label$505:;
		label$504:;
	}
	label$501:;
	label$500:;
	int64 vr$22 = LEXGETTOKEN( 0ll );
	if( vr$22 == 41ll ) goto label$509;
	{
		ERRREPORT( 7ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
	}
	goto label$508;
	label$509:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$508:;
	struct $7ASTNODE* vr$24 = RTLGFXIMAGECREATE( WEXPR$1, HEXPR$1, CEXPR$1, DEXPR$1, FLAGS$1 );
	*FUNCEXPR$1 = vr$24;
	fb$result$1 = (int64)-(*FUNCEXPR$1 != (struct $7ASTNODE*)0ull);
	label$491:;
	return fb$result$1;
}

int64 CGFXSTMT( $8FB_TOKEN TK$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$510:;
	fb$result$1 = 0ll;
	{
		uint64 TMP$110$2;
		TMP$110$2 = (uint64)TK$1;
		goto label$513;
		label$514:;
		{
			int64 vr$1 = CCOMPSTMTISALLOWED( 1ll );
			if( vr$1 != 0ll ) goto label$516;
			{
				HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				goto label$511;
			}
			label$516:;
			label$515:;
			LEXSKIPTOKEN( 0ll );
			int64 vr$3 = CGFXPSET( 0ll );
			fb$result$1 = vr$3;
		}
		goto label$512;
		label$517:;
		{
			int64 vr$4 = CCOMPSTMTISALLOWED( 1ll );
			if( vr$4 != 0ll ) goto label$519;
			{
				HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				goto label$511;
			}
			label$519:;
			label$518:;
			LEXSKIPTOKEN( 0ll );
			int64 vr$6 = CGFXPSET( -1ll );
			fb$result$1 = vr$6;
		}
		goto label$512;
		label$520:;
		{
			int64 vr$7 = CCOMPSTMTISALLOWED( 1ll );
			if( vr$7 != 0ll ) goto label$522;
			{
				HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				goto label$511;
			}
			label$522:;
			label$521:;
			LEXSKIPTOKEN( 0ll );
			int64 vr$9 = CGFXLINE(  );
			fb$result$1 = vr$9;
		}
		goto label$512;
		label$523:;
		{
			int64 vr$10 = CCOMPSTMTISALLOWED( 1ll );
			if( vr$10 != 0ll ) goto label$525;
			{
				HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				goto label$511;
			}
			label$525:;
			label$524:;
			LEXSKIPTOKEN( 0ll );
			int64 vr$12 = CGFXCIRCLE(  );
			fb$result$1 = vr$12;
		}
		goto label$512;
		label$526:;
		{
			int64 vr$13 = CCOMPSTMTISALLOWED( 1ll );
			if( vr$13 != 0ll ) goto label$528;
			{
				HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				goto label$511;
			}
			label$528:;
			label$527:;
			LEXSKIPTOKEN( 0ll );
			int64 vr$15 = CGFXPAINT(  );
			fb$result$1 = vr$15;
		}
		goto label$512;
		label$529:;
		{
			int64 vr$16 = CCOMPSTMTISALLOWED( 1ll );
			if( vr$16 != 0ll ) goto label$531;
			{
				HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				goto label$511;
			}
			label$531:;
			label$530:;
			LEXSKIPTOKEN( 0ll );
			int64 vr$18 = CGFXDRAW(  );
			fb$result$1 = vr$18;
		}
		goto label$512;
		label$532:;
		{
			int64 vr$19 = CCOMPSTMTISALLOWED( 1ll );
			if( vr$19 != 0ll ) goto label$534;
			{
				HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				goto label$511;
			}
			label$534:;
			label$533:;
			LEXSKIPTOKEN( 0ll );
			int64 vr$21 = CGFXVIEW( -1ll );
			fb$result$1 = vr$21;
		}
		goto label$512;
		label$535:;
		{
			int64 vr$22 = CCOMPSTMTISALLOWED( 1ll );
			if( vr$22 != 0ll ) goto label$537;
			{
				HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				goto label$511;
			}
			label$537:;
			label$536:;
			LEXSKIPTOKEN( 0ll );
			int64 vr$24 = CGFXVIEW( 0ll );
			fb$result$1 = vr$24;
		}
		goto label$512;
		label$538:;
		{
			int64 vr$25 = CCOMPSTMTISALLOWED( 1ll );
			if( vr$25 != 0ll ) goto label$540;
			{
				HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				goto label$511;
			}
			label$540:;
			label$539:;
			LEXSKIPTOKEN( 0ll );
			int64 vr$27 = CGFXPALETTE(  );
			fb$result$1 = vr$27;
		}
		goto label$512;
		label$541:;
		{
			int64 vr$28 = CCOMPSTMTISALLOWED( 1ll );
			if( vr$28 != 0ll ) goto label$543;
			{
				HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				goto label$511;
			}
			label$543:;
			label$542:;
			LEXSKIPTOKEN( 0ll );
			int64 vr$30 = CGFXPUT(  );
			fb$result$1 = vr$30;
		}
		goto label$512;
		label$544:;
		{
			int64 vr$31 = CCOMPSTMTISALLOWED( 1ll );
			if( vr$31 != 0ll ) goto label$546;
			{
				HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				goto label$511;
			}
			label$546:;
			label$545:;
			LEXSKIPTOKEN( 0ll );
			int64 vr$33 = CGFXGET(  );
			fb$result$1 = vr$33;
		}
		goto label$512;
		label$547:;
		{
			int64 vr$34 = CCOMPSTMTISALLOWED( 1ll );
			if( vr$34 != 0ll ) goto label$549;
			{
				HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				goto label$511;
			}
			label$549:;
			label$548:;
			LEXSKIPTOKEN( 0ll );
			int64 vr$36 = CGFXSCREEN( 0ll );
			fb$result$1 = vr$36;
		}
		goto label$512;
		label$550:;
		{
			int64 vr$37 = CCOMPSTMTISALLOWED( 1ll );
			if( vr$37 != 0ll ) goto label$552;
			{
				HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
				goto label$511;
			}
			label$552:;
			label$551:;
			LEXSKIPTOKEN( 0ll );
			int64 vr$39 = CGFXSCREEN( -1ll );
			fb$result$1 = vr$39;
		}
		goto label$512;
		label$513:;
		static const void* tmp$111[41ll] = {
			&&label$541,
			&&label$544,
			&&label$512,
			&&label$512,
			&&label$512,
			&&label$512,
			&&label$512,
			&&label$512,
			&&label$512,
			&&label$512,
			&&label$512,
			&&label$512,
			&&label$512,
			&&label$512,
			&&label$512,
			&&label$520,
			&&label$532,
			&&label$512,
			&&label$512,
			&&label$512,
			&&label$512,
			&&label$512,
			&&label$512,
			&&label$512,
			&&label$512,
			&&label$512,
			&&label$512,
			&&label$512,
			&&label$512,
			&&label$512,
			&&label$512,
			&&label$514,
			&&label$517,
			&&label$512,
			&&label$523,
			&&label$535,
			&&label$538,
			&&label$547,
			&&label$550,
			&&label$526,
			&&label$529,
		};
		if( TMP$110$2 < 469ll ) goto label$512;
		if( TMP$110$2 > 509ll ) goto label$512;
		goto *tmp$111[TMP$110$2 - 469ll];
		label$512:;
	}
	label$511:;
	return fb$result$1;
}

struct $7ASTNODE* CGFXFUNCT( $8FB_TOKEN TK$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$553:;
	struct $7ASTNODE* EXPR$1;
	EXPR$1 = (struct $7ASTNODE*)0ull;
	{
		if( TK$1 != 502ll ) goto label$556;
		label$557:;
		{
			LEXSKIPTOKEN( 0ll );
			CGFXPOINT( &EXPR$1 );
		}
		goto label$555;
		label$556:;
		if( TK$1 != 510ll ) goto label$558;
		label$559:;
		{
			LEXSKIPTOKEN( 0ll );
			CGFXIMAGECREATE( &EXPR$1 );
		}
		label$558:;
		label$555:;
	}
	fb$result$1 = EXPR$1;
	label$554:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__parserzquirkzgfx( void )
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

static struct $7ASTNODE* HMAYBEUDT2PTR( struct $7ASTNODE* EXPR$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$10:;
	$9FB_ERRMSG ERR_NUM$1;
	struct $8FBSYMBOL* CASTPROC$1;
	struct $8FBSYMBOL* vr$2 = SYMBFINDCASTOVLPROC( 32ll, (struct $8FBSYMBOL*)0ull, EXPR$1, &ERR_NUM$1 );
	CASTPROC$1 = vr$2;
	if( CASTPROC$1 == (struct $8FBSYMBOL*)0ull ) goto label$13;
	{
		struct $7ASTNODE* vr$4 = ASTBUILDCALL( CASTPROC$1, EXPR$1, (struct $7ASTNODE*)0ull, (struct $7ASTNODE*)0ull );
		EXPR$1 = vr$4;
	}
	goto label$12;
	label$13:;
	{
		if( ERR_NUM$1 == 0ll ) goto label$15;
		{
			ASTDELTREE( EXPR$1 );
			struct $7ASTNODE* vr$6 = ASTNEWCONSTI( 0ll, 32ll, (struct $8FBSYMBOL*)0ull );
			EXPR$1 = vr$6;
		}
		label$15:;
		label$14:;
	}
	label$12:;
	fb$result$1 = EXPR$1;
	label$11:;
	return fb$result$1;
}

static struct $7ASTNODE* HNIDXARRAY2ARRAYACCESS( struct $7ASTNODE* NIDXARRAY$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$16:;
	struct $7ASTNODE* VAREXPR$1;
	struct $7ASTNODE* IDXEXPR$1;
	struct $7ASTNODE* DATAOFFSET$1;
	struct $8FBSYMBOL* SYM$1;
	VAREXPR$1 = *(struct $7ASTNODE**)((uint8*)NIDXARRAY$1 + 112ll);
	ASTDELNODE( NIDXARRAY$1 );
	if( *(int64*)VAREXPR$1 != 19ll ) goto label$19;
	{
		fb$result$1 = VAREXPR$1;
		goto label$17;
	}
	label$19:;
	label$18:;
	SYM$1 = *(struct $8FBSYMBOL**)((uint8*)VAREXPR$1 + 24ll);
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 65536ll) == 0ll ) goto label$21;
	{
		struct $7ASTNODE* vr$8 = ASTNEWVAR( SYM$1, 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$9 = ASTNEWDEREF( vr$8, 7ll, (struct $8FBSYMBOL*)0ull, *(int64*)((uint8*)&SYMB$ + 199096ll) );
		IDXEXPR$1 = vr$9;
		struct $7ASTNODE* vr$11 = ASTNEWVAR( SYM$1, 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$12 = ASTNEWDEREF( vr$11, 7ll, (struct $8FBSYMBOL*)0ull, *(int64*)((uint8*)&SYMB$ + 199120ll) + *(int64*)((uint8*)&SYMB$ + 199136ll) );
		DATAOFFSET$1 = vr$12;
		struct $7ASTNODE* vr$14 = ASTNEWCONSTI( *(int64*)((uint8*)SYM$1 + 72ll), 8ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$15 = ASTNEWBOP( 30ll, DATAOFFSET$1, vr$14, (struct $8FBSYMBOL*)0ull, 1ll );
		DATAOFFSET$1 = vr$15;
		struct $7ASTNODE* vr$16 = ASTNEWBOP( 28ll, IDXEXPR$1, DATAOFFSET$1, (struct $8FBSYMBOL*)0ull, 1ll );
		IDXEXPR$1 = vr$16;
		ASTNEWLOAD( IDXEXPR$1, 7ll, 0ll );
		ASTDELTREE( VAREXPR$1 );
		struct $7ASTNODE* vr$17 = ASTNEWVAR( SYM$1, 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		VAREXPR$1 = vr$17;
	}
	goto label$20;
	label$21:;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 65540ll) == 0ll ) goto label$22;
	{
		struct $7ASTNODE* vr$22 = ASTNEWVAR( *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 128ll), *(int64*)((uint8*)&SYMB$ + 199096ll), 7ll, (struct $8FBSYMBOL*)0ull );
		IDXEXPR$1 = vr$22;
		struct $7ASTNODE* vr$25 = ASTNEWVAR( *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 128ll), *(int64*)((uint8*)&SYMB$ + 199120ll) + *(int64*)((uint8*)&SYMB$ + 199136ll), 7ll, (struct $8FBSYMBOL*)0ull );
		DATAOFFSET$1 = vr$25;
		struct $7ASTNODE* vr$27 = ASTNEWCONSTI( *(int64*)((uint8*)SYM$1 + 72ll), 8ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$28 = ASTNEWBOP( 30ll, DATAOFFSET$1, vr$27, (struct $8FBSYMBOL*)0ull, 1ll );
		DATAOFFSET$1 = vr$28;
		struct $7ASTNODE* vr$29 = ASTNEWBOP( 28ll, IDXEXPR$1, DATAOFFSET$1, (struct $8FBSYMBOL*)0ull, 1ll );
		IDXEXPR$1 = vr$29;
		struct $7ASTNODE* vr$30 = ASTNEWLOAD( IDXEXPR$1, 7ll, 0ll );
		IDXEXPR$1 = vr$30;
	}
	goto label$20;
	label$22:;
	{
		int64 vr$34 = SYMBCALCLEN( *(int64*)((uint8*)VAREXPR$1 + 8ll) & 511ll, *(struct $8FBSYMBOL**)((uint8*)VAREXPR$1 + 16ll) );
		struct $7ASTNODE* vr$35 = ASTNEWCONSTI( vr$34, 8ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$38 = ASTNEWCONSTI( *(int64*)*(struct $10FBARRAYDIM**)((uint8*)SYM$1 + 104ll), 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$39 = ASTNEWBOP( 30ll, vr$38, vr$35, (struct $8FBSYMBOL*)0ull, 1ll );
		IDXEXPR$1 = vr$39;
	}
	label$20:;
	struct $7ASTNODE* vr$42 = ASTNEWIDX( VAREXPR$1, IDXEXPR$1, *(int64*)((uint8*)VAREXPR$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)VAREXPR$1 + 16ll) );
	fb$result$1 = vr$42;
	label$17:;
	return fb$result$1;
}

static struct $7ASTNODE* HMAYBEARRAYACCESS2PTR( struct $7ASTNODE* EXPR$1, struct $7ASTNODE** PDESCEXPR$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$23:;
	{
		$13AST_NODECLASS TMP$86$2;
		TMP$86$2 = *($13AST_NODECLASS*)EXPR$1;
		if( TMP$86$2 != 18ll ) goto label$26;
		label$27:;
		{
			if( PDESCEXPR$1 == (struct $7ASTNODE**)0ull ) goto label$29;
			{
				struct $7ASTNODE* vr$5 = ASTNEWVAR( *(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 24ll), 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
				*PDESCEXPR$1 = vr$5;
			}
			label$29:;
			label$28:;
			struct $7ASTNODE* vr$7 = ASTNEWADDROF( EXPR$1 );
			EXPR$1 = vr$7;
		}
		goto label$25;
		label$26:;
		if( TMP$86$2 != 19ll ) goto label$30;
		label$31:;
		{
			int64 vr$10 = SYMBISARRAY( *(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 24ll) );
			if( vr$10 == 0ll ) goto label$33;
			{
				if( PDESCEXPR$1 == (struct $7ASTNODE**)0ull ) goto label$35;
				{
					int64 vr$13 = ASTHASSIDEFX( EXPR$1 );
					if( vr$13 == 0ll ) goto label$37;
					{
						ERRREPORT( 28ll, -1ll, (uint8*)0ull );
						ASTDELTREE( EXPR$1 );
						struct $7ASTNODE* vr$15 = ASTNEWCONSTI( 0ll, 32ll, (struct $8FBSYMBOL*)0ull );
						EXPR$1 = vr$15;
					}
					goto label$36;
					label$37:;
					{
						struct $7ASTNODE* vr$16 = ASTCLONETREE( EXPR$1 );
						*PDESCEXPR$1 = vr$16;
						struct $7ASTNODE* vr$18 = ASTNEWADDROF( EXPR$1 );
						EXPR$1 = vr$18;
					}
					label$36:;
				}
				goto label$34;
				label$35:;
				{
					struct $7ASTNODE* vr$19 = ASTNEWADDROF( EXPR$1 );
					EXPR$1 = vr$19;
				}
				label$34:;
			}
			label$33:;
			label$32:;
		}
		label$30:;
		label$25:;
	}
	fb$result$1 = EXPR$1;
	label$24:;
	return fb$result$1;
}

static struct $7ASTNODE* HCHECKFBIMAGEEXPR( struct $7ASTNODE* EXPR$1, int64 ALLOW_CONST$1, struct $7ASTNODE** PDESCEXPR$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$38:;
	struct $7ASTNODE* vr$1 = ASTREMOVENOCONVCAST( EXPR$1 );
	EXPR$1 = vr$1;
	if( *(int64*)EXPR$1 != 25ll ) goto label$41;
	{
		struct $7ASTNODE* vr$4 = HNIDXARRAY2ARRAYACCESS( EXPR$1 );
		struct $7ASTNODE* vr$5 = HMAYBEARRAYACCESS2PTR( vr$4, PDESCEXPR$1 );
		EXPR$1 = vr$5;
	}
	goto label$40;
	label$41:;
	{
		if( (*(int64*)((uint8*)EXPR$1 + 8ll) & 511ll) != 18ll ) goto label$43;
		{
			struct $7ASTNODE* vr$9 = HMAYBEUDT2PTR( EXPR$1 );
			EXPR$1 = vr$9;
		}
		label$43:;
		label$42:;
		if( (int64)-((*(int64*)((uint8*)EXPR$1 + 8ll) & 480ll) != 0ll) != 0ll ) goto label$45;
		{
			struct $7ASTNODE* vr$14 = HMAYBEARRAYACCESS2PTR( EXPR$1, PDESCEXPR$1 );
			EXPR$1 = vr$14;
		}
		label$45:;
		label$44:;
	}
	label$40:;
	if( (int64)-((*(int64*)((uint8*)EXPR$1 + 8ll) & 480ll) != 0ll) != 0ll ) goto label$47;
	{
		if( (*(int64*)((uint8*)EXPR$1 + 8ll) & 511ll) != 18ll ) goto label$49;
		{
			FBSTRING TMP$89$3;
			FBSTRING TMP$90$3;
			FBSTRING TMP$91$3;
			__builtin_memset( &TMP$91$3, 0, 24ll );
			__builtin_memset( &TMP$89$3, 0, 24ll );
			FBSTRING* vr$27 = fb_StrConcat( &TMP$89$3, (void*)" \x22", 3ll, *(void**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 16ll) + 24ll), 0ll );
			__builtin_memset( &TMP$90$3, 0, 24ll );
			FBSTRING* vr$30 = fb_StrConcat( &TMP$90$3, (void*)vr$27, -1ll, (void*)".cast() as any ptr\x22", 20ll );
			FBSTRING* vr$32 = fb_StrAssign( (void*)&TMP$91$3, -1ll, (void*)vr$30, -1ll, 0 );
			ERRREPORT( 98ll, -1ll, *(uint8**)&TMP$91$3 );
			fb_StrDelete( &TMP$91$3 );
		}
		goto label$48;
		label$49:;
		{
			ERRREPORT( 28ll, -1ll, (uint8*)0ull );
		}
		label$48:;
		struct $7ASTNODE* vr$34 = ASTNEWADDROF( EXPR$1 );
		EXPR$1 = vr$34;
	}
	label$47:;
	label$46:;
	if( ALLOW_CONST$1 != 0ll ) goto label$51;
	{
		if( ((((*(int64*)((uint8*)EXPR$1 + 8ll) & 31ll) | ((*(int64*)((uint8*)EXPR$1 + 8ll) & 480ll) + -32ll)) | (((*(int64*)((uint8*)EXPR$1 + 8ll) & 261632ll) >> 1ll) & 261632ll)) & 512ll) == 0ll ) goto label$53;
		{
			ERRREPORT( 118ll, -1ll, (uint8*)0ull );
		}
		label$53:;
		label$52:;
	}
	label$51:;
	label$50:;
	fb$result$1 = EXPR$1;
	label$39:;
	return fb$result$1;
}

static struct $7ASTNODE* HFBIMAGEEXPR( int64 ALLOW_CONST$1, struct $7ASTNODE** PDESCEXPR$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$54:;
	struct $7ASTNODE* EXPR$1;
	struct $7ASTNODE* vr$1 = CEXPRESSIONWITHNIDXARRAY( -1ll );
	EXPR$1 = vr$1;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$57;
	{
		goto label$55;
	}
	label$57:;
	label$56:;
	struct $7ASTNODE* vr$3 = HCHECKFBIMAGEEXPR( EXPR$1, ALLOW_CONST$1, PDESCEXPR$1 );
	fb$result$1 = vr$3;
	label$55:;
	return fb$result$1;
}

static struct $7ASTNODE* HFBIMAGEEXPRINFRONTOFCOORD( int64 ALLOW_CONST$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$58:;
	struct $7ASTNODE* EXPR$1;
	int64 vr$1 = LEXGETTOKEN( 0ll );
	if( vr$1 != 40ll ) goto label$61;
	{
		goto label$59;
	}
	label$61:;
	label$60:;
	struct $7ASTNODE* vr$3 = HFBIMAGEEXPR( ALLOW_CONST$1, (struct $7ASTNODE**)0ull );
	EXPR$1 = vr$3;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$63;
	{
		goto label$59;
	}
	label$63:;
	label$62:;
	int64 vr$5 = LEXGETTOKEN( 0ll );
	if( vr$5 == 44ll ) goto label$65;
	{
		ERRREPORT( 16ll, 0ll, (uint8*)0ull );
	}
	goto label$64;
	label$65:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$64:;
	fb$result$1 = EXPR$1;
	label$59:;
	return fb$result$1;
}

static int64 HGETMODE( int64* MODE$1, struct $7ASTNODE** ALPHAEXPR$1, struct $7ASTNODE** FUNCEXPR$1, struct $7ASTNODE** PARAMEXPR$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$66:;
	struct $8FBSYMBOL* S$1;
	__builtin_memset( &S$1, 0, 8ll );
	struct $8FBSYMBOL* ARG1$1;
	__builtin_memset( &ARG1$1, 0, 8ll );
	struct $8FBSYMBOL* ARG2$1;
	__builtin_memset( &ARG2$1, 0, 8ll );
	struct $8FBSYMBOL* ARG3$1;
	__builtin_memset( &ARG3$1, 0, 8ll );
	fb$result$1 = 0ll;
	{
		uint64 TMP$92$2;
		int64 vr$5 = LEXGETTOKEN( 0ll );
		TMP$92$2 = (uint64)vr$5;
		goto label$69;
		label$70:;
		{
			LEXSKIPTOKEN( 0ll );
			*MODE$1 = 3ll;
		}
		goto label$68;
		label$71:;
		{
			LEXSKIPTOKEN( 0ll );
			*MODE$1 = 4ll;
		}
		goto label$68;
		label$72:;
		{
			LEXSKIPTOKEN( 0ll );
			*MODE$1 = 5ll;
		}
		goto label$68;
		label$73:;
		{
			{
				FBSTRING TMP$93$4;
				uint8* vr$9 = LEXGETTEXT(  );
				FBSTRING* vr$10 = fb_StrAllocTempDescZ( vr$9 );
				FBSTRING* vr$11 = fb_StrUcase2( vr$10, 0 );
				FBSTRING* vr$13 = fb_StrInit( (void*)&TMP$93$4, -1ll, (void*)vr$11, -1ll, 0 );
				int32 vr$15 = fb_StrCompare( (void*)&TMP$93$4, -1ll, (void*)"PSET", 5ll );
				if( (int64)vr$15 != 0ll ) goto label$75;
				label$76:;
				{
					LEXSKIPTOKEN( 0ll );
					*MODE$1 = 1ll;
				}
				goto label$74;
				label$75:;
				int32 vr$20 = fb_StrCompare( (void*)&TMP$93$4, -1ll, (void*)"PRESET", 7ll );
				if( (int64)vr$20 != 0ll ) goto label$77;
				label$78:;
				{
					LEXSKIPTOKEN( 0ll );
					*MODE$1 = 2ll;
				}
				goto label$74;
				label$77:;
				int32 vr$25 = fb_StrCompare( (void*)&TMP$93$4, -1ll, (void*)"TRANS", 6ll );
				if( (int64)vr$25 != 0ll ) goto label$79;
				label$80:;
				{
					LEXSKIPTOKEN( 0ll );
					*MODE$1 = 0ll;
				}
				goto label$74;
				label$79:;
				int32 vr$30 = fb_StrCompare( (void*)&TMP$93$4, -1ll, (void*)"ADD", 4ll );
				if( (int64)vr$30 != 0ll ) goto label$81;
				label$82:;
				{
					LEXSKIPTOKEN( 0ll );
					*MODE$1 = 7ll;
					int64 vr$34 = HMATCH( 44ll );
					if( vr$34 == 0ll ) goto label$84;
					{
						struct $7ASTNODE* vr$36 = HMATCHEXPR( -1ll );
						*ALPHAEXPR$1 = vr$36;
						if( *ALPHAEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$86;
						{
							fb_StrDelete( &TMP$93$4 );
							goto label$67;
						}
						label$86:;
						label$85:;
					}
					goto label$83;
					label$84:;
					{
						struct $7ASTNODE* vr$41 = ASTNEWCONSTI( 255ll, 8ll, (struct $8FBSYMBOL*)0ull );
						*ALPHAEXPR$1 = vr$41;
					}
					label$83:;
				}
				goto label$74;
				label$81:;
				int32 vr$44 = fb_StrCompare( (void*)&TMP$93$4, -1ll, (void*)"ALPHA", 6ll );
				if( (int64)vr$44 != 0ll ) goto label$87;
				label$88:;
				{
					LEXSKIPTOKEN( 0ll );
					*MODE$1 = 6ll;
					int64 vr$48 = HMATCH( 44ll );
					if( vr$48 == 0ll ) goto label$90;
					{
						struct $7ASTNODE* vr$50 = HMATCHEXPR( -1ll );
						*ALPHAEXPR$1 = vr$50;
						if( *ALPHAEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$92;
						{
							fb_StrDelete( &TMP$93$4 );
							goto label$67;
						}
						label$92:;
						label$91:;
						*MODE$1 = 9ll;
					}
					label$90:;
					label$89:;
				}
				goto label$74;
				label$87:;
				int32 vr$57 = fb_StrCompare( (void*)&TMP$93$4, -1ll, (void*)"CUSTOM", 7ll );
				if( (int64)vr$57 != 0ll ) goto label$93;
				label$94:;
				{
					LEXSKIPTOKEN( 0ll );
					*MODE$1 = 8ll;
					int64 vr$61 = LEXGETTOKEN( 0ll );
					if( vr$61 == 44ll ) goto label$96;
					{
						ERRREPORT( 16ll, 0ll, (uint8*)0ull );
					}
					goto label$95;
					label$96:;
					{
						LEXSKIPTOKEN( 0ll );
					}
					label$95:;
					struct $7ASTNODE* vr$63 = HMATCHEXPR( -1ll );
					*FUNCEXPR$1 = vr$63;
					if( *FUNCEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$98;
					{
						fb_StrDelete( &TMP$93$4 );
						goto label$67;
					}
					label$98:;
					label$97:;
					int64 vr$68 = HMATCH( 44ll );
					if( vr$68 == 0ll ) goto label$100;
					{
						struct $7ASTNODE* vr$70 = HMATCHEXPR( -1ll );
						*PARAMEXPR$1 = vr$70;
						if( *PARAMEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$102;
						{
							fb_StrDelete( &TMP$93$4 );
							goto label$67;
						}
						label$102:;
						label$101:;
					}
					label$100:;
					label$99:;
					S$1 = *(struct $8FBSYMBOL**)((uint8*)*FUNCEXPR$1 + 16ll);
					if( S$1 != (struct $8FBSYMBOL*)0ull ) goto label$104;
					{
						ERRREPORT( 20ll, 0ll, (uint8*)0ull );
						fb_StrDelete( &TMP$93$4 );
						goto label$67;
					}
					label$104:;
					label$103:;
					if( (int64)-(*(int64*)S$1 == 3ll) != 0ll ) goto label$106;
					{
						ERRREPORT( 20ll, 0ll, (uint8*)0ull );
						fb_StrDelete( &TMP$93$4 );
						goto label$67;
					}
					label$106:;
					label$105:;
					if( ((int64)-((*(int64*)((uint8*)S$1 + 48ll) & 511ll) != 8ll) | (int64)-((int64)*(int16*)((uint8*)S$1 + 112ll) != 3ll)) == 0ll ) goto label$108;
					{
						ERRREPORT( 20ll, 0ll, (uint8*)0ull );
						fb_StrDelete( &TMP$93$4 );
						goto label$67;
					}
					label$108:;
					label$107:;
					ARG1$1 = *(struct $8FBSYMBOL**)((uint8*)S$1 + 128ll);
					ARG2$1 = *(struct $8FBSYMBOL**)((uint8*)ARG1$1 + 296ll);
					ARG3$1 = *(struct $8FBSYMBOL**)((uint8*)ARG2$1 + 296ll);
					if( *(int64*)((uint8*)S$1 + 144ll) != 4ll ) goto label$110;
					{
						{
							struct $8FBSYMBOL* TMP$100$7;
							TMP$100$7 = ARG1$1;
							ARG1$1 = ARG3$1;
							ARG3$1 = TMP$100$7;
						}
					}
					label$110:;
					label$109:;
					if( ((((((int64)-((*(int64*)((uint8*)ARG1$1 + 48ll) & 511ll) != 8ll) | (int64)-((*(int64*)((uint8*)ARG2$1 + 48ll) & 511ll) != 8ll)) | (int64)-((int64)-(((*(int64*)((uint8*)ARG3$1 + 48ll) & 511ll) & 480ll) != 0ll) == 0ll)) | (int64)-(*(int64*)((uint8*)ARG1$1 + 88ll) != 1ll)) | (int64)-(*(int64*)((uint8*)ARG2$1 + 88ll) != 1ll)) | (int64)-(*(int64*)((uint8*)ARG3$1 + 88ll) != 1ll)) == 0ll ) goto label$112;
					{
						ERRREPORT( 20ll, 0ll, (uint8*)0ull );
						fb_StrDelete( &TMP$93$4 );
						goto label$67;
					}
					label$112:;
					label$111:;
				}
				goto label$74;
				label$93:;
				{
					ERRREPORT( 17ll, 0ll, (uint8*)0ull );
					fb_StrDelete( &TMP$93$4 );
					goto label$67;
				}
				label$113:;
				label$74:;
				fb_StrDelete( &TMP$93$4 );
			}
		}
		goto label$68;
		label$69:;
		static const void* tmp$112[5ll] = {
			&&label$70,
			&&label$71,
			&&label$73,
			&&label$73,
			&&label$72,
		};
		if( TMP$92$2 < 288ll ) goto label$73;
		if( TMP$92$2 > 292ll ) goto label$73;
		goto *tmp$112[TMP$92$2 - 288ll];
		label$68:;
	}
	fb$result$1 = -1ll;
	label$67:;
	return fb$result$1;
}

// Total compilation time: 0.04989090003073215 seconds.
