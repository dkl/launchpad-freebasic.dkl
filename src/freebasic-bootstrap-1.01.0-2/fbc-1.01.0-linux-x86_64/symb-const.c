// Compilation of fbc-1.01.0/src/compiler/symb-const.bas started at 14:16:45 on 02-28-2015

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
struct $7FBARRAYI10FBARRAYDIME {
	struct $10FBARRAYDIM* DATA;
	struct $10FBARRAYDIM* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYI10FBARRAYDIME ) == 232 );
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
FBSTRING* fb_StrInit( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
uint32* fb_WstrAssign( uint32*, int64, uint32* );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
FBSTRING* fb_StrConcatAssign( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAllocTempResult( FBSTRING* );
FBSTRING* fb_LongintToStr( int64 );
FBSTRING* fb_ULongintToStr( uint64 );
FBSTRING* fb_FloatToStr( float );
FBSTRING* fb_DoubleToStr( double );
int64 fb_StrLen( void*, int64 );
int64 fb_WstrLen( uint32* );
FBSTRING* fb_HEX_l( uint64 );
static void fb_ctor__symbzconst( void ) __attribute__(( constructor ));
void* XALLOCATE( int32 );
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
struct $8FBSYMBOL* SYMBLOOKUPBYNAMEANDCLASS( struct $8FBSYMBOL*, uint8*, int64, int64, int64 );
struct $8FBSYMBOL* SYMBLOOKUPBYNAMEANDSUFFIX( struct $8FBSYMBOL*, uint8*, int64, int64, int64 );
typedef int64 $10FB_SYMBOPT;
struct $8FBSYMBOL* SYMBADDVAR( uint8*, uint8*, int64, struct $8FBSYMBOL*, int64, int64, struct $7FBARRAYI10FBARRAYDIME*, int64, $10FB_SYMBOPT );
struct $8FBSYMBOL* SYMBADDCONST( uint8*, int64, struct $8FBSYMBOL*, union $7FBVALUE*, int64 );
struct $8FBSYMBOL* SYMBNEWSYMBOL( $10FB_SYMBOPT, struct $8FBSYMBOL*, struct $10FBSYMBOLTB*, struct $8FBHASHTB*, $12FB_SYMBCLASS, uint8*, uint8*, int64, struct $8FBSYMBOL*, $13FB_SYMBATTRIB );
void SYMBFREESYMBOL( struct $8FBSYMBOL* );
uint8* SYMBUNIQUEID( void );
FBSTRING* HFLOATTOHEX( double, int64 );
uint8* HESCAPEW( uint32* );
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
struct $5FBENV ENV$ __attribute__((common));

struct $8FBSYMBOL* SYMBADDCONST( uint8* SYMBOL$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, union $7FBVALUE* VALUE$1, int64 ATTRIB$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$10:;
	struct $8FBSYMBOL* SYM$1;
	fb$result$1 = (struct $8FBSYMBOL*)0ull;
	struct $8FBSYMBOL* vr$1 = SYMBNEWSYMBOL( 32ll, (struct $8FBSYMBOL*)0ull, (struct $10FBSYMBOLTB*)0ull, (struct $8FBHASHTB*)0ull, 2ll, SYMBOL$1, (uint8*)0ull, DTYPE$1, SUBTYPE$1, ATTRIB$1 );
	SYM$1 = vr$1;
	if( SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$13;
	{
		goto label$11;
	}
	label$13:;
	label$12:;
	__builtin_memcpy( (union $7FBVALUE*)((uint8*)SYM$1 + 88ll), VALUE$1, 8 );
	fb$result$1 = SYM$1;
	label$11:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBALLOCFLOATCONST( double VALUE$1, int64 DTYPE$1 )
{
	FBSTRING TMP$78$1;
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$14:;
	static uint8 ID$1[134];
	static uint8 ID_ALIAS$1[134];
	static struct $10FBARRAYDIM DTB$1[1];
	struct $8FBARRAY1I10FBARRAYDIME {
		struct $10FBARRAYDIM* DATA;
		struct $10FBARRAYDIM* PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I10FBARRAYDIME ) == 64 );
	static struct $8FBARRAY1I10FBARRAYDIME tmp$76$1 = { (struct $10FBARRAYDIM*)DTB$1, (struct $10FBARRAYDIM*)DTB$1, 16ll, 16ll, 1ll, { { 1ll, 0ll, 0ll } } };
	struct $8FBSYMBOL* S$1;
	fb$result$1 = (struct $8FBSYMBOL*)0ull;
	FBSTRING SVALUE$1;
	FBSTRING* vr$1 = HFLOATTOHEX( VALUE$1, DTYPE$1 );
	FBSTRING* vr$3 = fb_StrInit( (void*)&SVALUE$1, -1ll, (void*)vr$1, -1ll, 0 );
	fb_StrAssign( (void*)ID$1, 134ll, (void*)"{fbnc}", 7ll, 0 );
	__builtin_memset( &TMP$78$1, 0, 24ll );
	FBSTRING* vr$7 = fb_StrConcat( &TMP$78$1, (void*)ID$1, 134ll, (void*)&SVALUE$1, -1ll );
	fb_StrAssign( (void*)ID$1, 134ll, (void*)vr$7, -1ll, 0 );
	struct $8FBSYMBOL* vr$9 = SYMBLOOKUPBYNAMEANDSUFFIX( (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll), (uint8*)ID$1, DTYPE$1, -1ll, 0ll );
	S$1 = vr$9;
	if( S$1 == (struct $8FBSYMBOL*)0ull ) goto label$17;
	{
		fb$result$1 = S$1;
		fb_StrDelete( &SVALUE$1 );
		goto label$15;
	}
	label$17:;
	label$16:;
	uint8* vr$12 = SYMBUNIQUEID(  );
	fb_StrAssign( (void*)ID_ALIAS$1, 134ll, (void*)vr$12, 0ll, 0 );
	struct $8FBSYMBOL* vr$13 = SYMBADDVAR( (uint8*)ID$1, (uint8*)ID_ALIAS$1, DTYPE$1, (struct $8FBSYMBOL*)0ull, 0ll, 0ll, (struct $7FBARRAYI10FBARRAYDIME*)&tmp$76$1, 1572865ll, 137ll );
	S$1 = vr$13;
	int64 vr$15 = fb_StrLen( (void*)&SVALUE$1, -1ll );
	void* vr$18 = XALLOCATE( (int32)(vr$15 + 1ll) );
	*(uint8**)((uint8*)S$1 + 88ll) = (uint8*)vr$18;
	fb_StrAssign( *(void**)((uint8*)S$1 + 88ll), 0ll, (void*)&SVALUE$1, -1ll, 0 );
	fb$result$1 = S$1;
	fb_StrDelete( &SVALUE$1 );
	label$15:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBALLOCINTCONST( int64 VALUE$1, int64 DTYPE$1 )
{
	int64 TMP$81$1;
	FBSTRING TMP$82$1;
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$18:;
	static uint8 ID$1[134];
	static uint8 ID_ALIAS$1[134];
	static struct $8FBSYMBOL* S$1;
	static struct $10FBARRAYDIM DTB$1[1];
	struct $8FBARRAY1I10FBARRAYDIME {
		struct $10FBARRAYDIM* DATA;
		struct $10FBARRAYDIM* PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I10FBARRAYDIME ) == 64 );
	static struct $8FBARRAY1I10FBARRAYDIME tmp$79$1 = { (struct $10FBARRAYDIM*)DTB$1, (struct $10FBARRAYDIM*)DTB$1, 16ll, 16ll, 1ll, { { 1ll, 0ll, 0ll } } };
	static FBSTRING SVALUE$1;
	fb$result$1 = (struct $8FBSYMBOL*)0ull;
	fb_StrAssign( (void*)&SVALUE$1, -1ll, (void*)"0x", 3ll, 0 );
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$20;
	TMP$81$1 = 22ll;
	goto label$25;
	label$20:;
	TMP$81$1 = DTYPE$1 & 31ll;
	label$25:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$81$1 * 56ll)) + 8ll) != 8ll ) goto label$22;
	{
		FBSTRING* vr$6 = fb_HEX_l( (uint64)VALUE$1 );
		FBSTRING* vr$7 = fb_StrConcatAssign( (void*)&SVALUE$1, -1ll, (void*)vr$6, -1ll, 0 );
	}
	goto label$21;
	label$22:;
	{
		FBSTRING* vr$10 = fb_HEX_l( (uint64)(uint32)VALUE$1 );
		FBSTRING* vr$11 = fb_StrConcatAssign( (void*)&SVALUE$1, -1ll, (void*)vr$10, -1ll, 0 );
	}
	label$21:;
	fb_StrAssign( (void*)ID$1, 134ll, (void*)"{fbnc}", 7ll, 0 );
	__builtin_memset( &TMP$82$1, 0, 24ll );
	FBSTRING* vr$14 = fb_StrConcat( &TMP$82$1, (void*)ID$1, 134ll, (void*)&SVALUE$1, -1ll );
	fb_StrAssign( (void*)ID$1, 134ll, (void*)vr$14, -1ll, 0 );
	struct $8FBSYMBOL* vr$16 = SYMBLOOKUPBYNAMEANDSUFFIX( (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll), (uint8*)ID$1, DTYPE$1, -1ll, 0ll );
	S$1 = vr$16;
	if( S$1 == (struct $8FBSYMBOL*)0ull ) goto label$24;
	{
		fb$result$1 = S$1;
		goto label$19;
	}
	label$24:;
	label$23:;
	uint8* vr$18 = SYMBUNIQUEID(  );
	fb_StrAssign( (void*)ID_ALIAS$1, 134ll, (void*)vr$18, 0ll, 0 );
	struct $8FBSYMBOL* vr$19 = SYMBADDVAR( (uint8*)ID$1, (uint8*)ID_ALIAS$1, DTYPE$1, (struct $8FBSYMBOL*)0ull, 0ll, 0ll, (struct $7FBARRAYI10FBARRAYDIME*)&tmp$79$1, 1572865ll, 9ll );
	S$1 = vr$19;
	int64 vr$20 = fb_StrLen( (void*)&SVALUE$1, -1ll );
	void* vr$23 = XALLOCATE( (int32)(vr$20 + 1ll) );
	*(uint8**)((uint8*)S$1 + 88ll) = (uint8*)vr$23;
	fb_StrAssign( *(void**)((uint8*)S$1 + 88ll), 0ll, (void*)&SVALUE$1, -1ll, 0 );
	fb$result$1 = S$1;
	label$19:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBALLOCSTRCONST( uint8* SNAME$1, int64 LGT$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$26:;
	static uint8 ID$1[134];
	static uint8 ID_ALIAS$1[134];
	static struct $10FBARRAYDIM DTB$1[1];
	struct $8FBARRAY1I10FBARRAYDIME {
		struct $10FBARRAYDIM* DATA;
		struct $10FBARRAYDIM* PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I10FBARRAYDIME ) == 64 );
	static struct $8FBARRAY1I10FBARRAYDIME tmp$83$1 = { (struct $10FBARRAYDIM*)DTB$1, (struct $10FBARRAYDIM*)DTB$1, 16ll, 16ll, 1ll, { { 1ll, 0ll, 0ll } } };
	struct $8FBSYMBOL* S$1;
	int64 STRLEN$1;
	fb$result$1 = (struct $8FBSYMBOL*)0ull;
	int64 vr$1 = fb_StrLen( (void*)SNAME$1, 0ll );
	STRLEN$1 = vr$1;
	if( LGT$1 >= 0ll ) goto label$29;
	{
		LGT$1 = STRLEN$1;
	}
	label$29:;
	label$28:;
	if( STRLEN$1 > 122ll ) goto label$31;
	{
		FBSTRING TMP$85$2;
		fb_StrAssign( (void*)ID$1, 134ll, (void*)"{fbsc}", 7ll, 0 );
		__builtin_memset( &TMP$85$2, 0, 24ll );
		FBSTRING* vr$6 = fb_StrConcat( &TMP$85$2, (void*)ID$1, 134ll, (void*)SNAME$1, 0ll );
		fb_StrAssign( (void*)ID$1, 134ll, (void*)vr$6, -1ll, 0 );
	}
	goto label$30;
	label$31:;
	{
		uint8* vr$7 = SYMBUNIQUEID(  );
		fb_StrAssign( (void*)ID$1, 134ll, (void*)vr$7, 0ll, 0 );
	}
	label$30:;
	struct $8FBSYMBOL* vr$9 = SYMBLOOKUPBYNAMEANDCLASS( (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll), (uint8*)ID$1, 1ll, -1ll, 0ll );
	S$1 = vr$9;
	if( S$1 == (struct $8FBSYMBOL*)0ull ) goto label$33;
	{
		fb$result$1 = S$1;
		goto label$27;
	}
	label$33:;
	label$32:;
	uint8* vr$11 = SYMBUNIQUEID(  );
	fb_StrAssign( (void*)ID_ALIAS$1, 134ll, (void*)vr$11, 0ll, 0 );
	struct $8FBSYMBOL* vr$13 = SYMBADDVAR( (uint8*)ID$1, (uint8*)ID_ALIAS$1, 3ll, (struct $8FBSYMBOL*)0ull, LGT$1 + 1ll, 0ll, (struct $7FBARRAYI10FBARRAYDIME*)&tmp$83$1, 1572865ll, 137ll );
	S$1 = vr$13;
	void* vr$16 = XALLOCATE( (int32)(STRLEN$1 + 1ll) );
	*(uint8**)((uint8*)S$1 + 88ll) = (uint8*)vr$16;
	fb_StrAssign( *(void**)((uint8*)S$1 + 88ll), 0ll, (void*)SNAME$1, 0ll, 0 );
	fb$result$1 = S$1;
	label$27:;
	return fb$result$1;
}

struct $8FBSYMBOL* SYMBALLOCWSTRCONST( uint32* SNAME$1, int64 LGT$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$34:;
	static uint8 ID$1[134];
	static uint8 ID_ALIAS$1[134];
	static struct $10FBARRAYDIM DTB$1[1];
	struct $8FBARRAY1I10FBARRAYDIME {
		struct $10FBARRAYDIM* DATA;
		struct $10FBARRAYDIM* PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I10FBARRAYDIME ) == 64 );
	static struct $8FBARRAY1I10FBARRAYDIME tmp$86$1 = { (struct $10FBARRAYDIM*)DTB$1, (struct $10FBARRAYDIM*)DTB$1, 16ll, 16ll, 1ll, { { 1ll, 0ll, 0ll } } };
	struct $8FBSYMBOL* S$1;
	int64 STRLEN$1;
	int64 WCHARLEN$1;
	fb$result$1 = (struct $8FBSYMBOL*)0ull;
	int64 vr$1 = fb_WstrLen( SNAME$1 );
	STRLEN$1 = vr$1;
	if( LGT$1 >= 0ll ) goto label$37;
	{
		LGT$1 = STRLEN$1;
	}
	label$37:;
	label$36:;
	WCHARLEN$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + 344ll);
	if( ((STRLEN$1 * WCHARLEN$1) << 2ll) > 122ll ) goto label$39;
	{
		FBSTRING TMP$88$2;
		fb_StrAssign( (void*)ID$1, 134ll, (void*)"{fbwc}", 7ll, 0 );
		uint8* vr$6 = HESCAPEW( SNAME$1 );
		__builtin_memset( &TMP$88$2, 0, 24ll );
		FBSTRING* vr$9 = fb_StrConcat( &TMP$88$2, (void*)ID$1, 134ll, (void*)vr$6, 0ll );
		fb_StrAssign( (void*)ID$1, 134ll, (void*)vr$9, -1ll, 0 );
	}
	goto label$38;
	label$39:;
	{
		uint8* vr$10 = SYMBUNIQUEID(  );
		fb_StrAssign( (void*)ID$1, 134ll, (void*)vr$10, 0ll, 0 );
	}
	label$38:;
	struct $8FBSYMBOL* vr$12 = SYMBLOOKUPBYNAMEANDCLASS( (struct $8FBSYMBOL*)((uint8*)&SYMB$ + 196704ll), (uint8*)ID$1, 1ll, -1ll, 0ll );
	S$1 = vr$12;
	if( S$1 == (struct $8FBSYMBOL*)0ull ) goto label$41;
	{
		fb$result$1 = S$1;
		goto label$35;
	}
	label$41:;
	label$40:;
	uint8* vr$14 = SYMBUNIQUEID(  );
	fb_StrAssign( (void*)ID_ALIAS$1, 134ll, (void*)vr$14, 0ll, 0 );
	struct $8FBSYMBOL* vr$17 = SYMBADDVAR( (uint8*)ID$1, (uint8*)ID_ALIAS$1, 6ll, (struct $8FBSYMBOL*)0ull, (LGT$1 << 2ll) + 4ll, 0ll, (struct $7FBARRAYI10FBARRAYDIME*)&tmp$86$1, 1572865ll, 137ll );
	S$1 = vr$17;
	void* vr$21 = XALLOCATE( (int32)((STRLEN$1 << 2ll) + 4ll) );
	*(uint32**)((uint8*)S$1 + 88ll) = (uint32*)vr$21;
	uint32* vr$24 = fb_WstrAssign( *(uint32**)((uint8*)S$1 + 88ll), 0ll, SNAME$1 );
	fb$result$1 = S$1;
	label$35:;
	return fb$result$1;
}

void SYMBDELCONST( struct $8FBSYMBOL* S$1 )
{
	label$42:;
	if( S$1 != (struct $8FBSYMBOL*)0ull ) goto label$45;
	{
		goto label$43;
	}
	label$45:;
	label$44:;
	SYMBFREESYMBOL( S$1 );
	label$43:;
}

FBSTRING* SYMBGETCONSTVALUEASSTR( struct $8FBSYMBOL* S$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$46:;
	{
		int64 TMP$89$2;
		TMP$89$2 = *(int64*)((uint8*)S$1 + 48ll) & 511ll;
		if( TMP$89$2 == 16ll ) goto label$50;
		label$51:;
		if( TMP$89$2 == 17ll ) goto label$50;
		label$52:;
		if( TMP$89$2 != 3ll ) goto label$49;
		label$50:;
		{
			fb_StrAssign( (void*)&fb$result$1, -1ll, *(void**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)S$1 + 88ll) + 88ll), 0ll, 0 );
		}
		goto label$48;
		label$49:;
		if( TMP$89$2 != 15ll ) goto label$53;
		label$54:;
		{
			FBSTRING* vr$11 = fb_DoubleToStr( *(double*)((uint8*)S$1 + 88ll) );
			FBSTRING* vr$13 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$11, -1ll, 0 );
		}
		goto label$48;
		label$53:;
		if( TMP$89$2 != 14ll ) goto label$55;
		label$56:;
		{
			FBSTRING* vr$17 = fb_FloatToStr( (float)*(double*)((uint8*)S$1 + 88ll) );
			FBSTRING* vr$19 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$17, -1ll, 0 );
		}
		goto label$48;
		label$55:;
		{
			int64 TMP$90$3;
			if( (*(int64*)((uint8*)S$1 + 48ll) & 480ll) == 0ll ) goto label$58;
			TMP$90$3 = 22ll;
			goto label$61;
			label$58:;
			TMP$90$3 = *(int64*)((uint8*)S$1 + 48ll) & 31ll;
			label$61:;
			if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$90$3 * 56ll)) + 16ll) == 0ll ) goto label$60;
			{
				FBSTRING* vr$28 = fb_LongintToStr( *(int64*)((uint8*)S$1 + 88ll) );
				FBSTRING* vr$30 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$28, -1ll, 0 );
			}
			goto label$59;
			label$60:;
			{
				FBSTRING* vr$32 = fb_ULongintToStr( *(uint64*)((uint8*)S$1 + 88ll) );
				FBSTRING* vr$34 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$32, -1ll, 0 );
			}
			label$59:;
		}
		label$57:;
		label$48:;
	}
	label$47:;
	FBSTRING* vr$36 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$36;
}

struct $8FBSYMBOL* SYMBCLONECONST( struct $8FBSYMBOL* SYM$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$62:;
	struct $8FBSYMBOL* vr$7 = SYMBADDCONST( (uint8*)0ull, *(int64*)((uint8*)SYM$1 + 48ll) & 511ll, *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll), (union $7FBVALUE*)((uint8*)SYM$1 + 88ll), *(int64*)((uint8*)SYM$1 + 8ll) );
	fb$result$1 = vr$7;
	label$63:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__symbzconst( void )
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

// Total compilation time: 0.02746894990559667 seconds.
