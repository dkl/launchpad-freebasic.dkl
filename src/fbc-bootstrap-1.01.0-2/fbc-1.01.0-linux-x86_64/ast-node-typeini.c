// Compilation of fbc-1.01.0/src/compiler/ast-node-typeini.bas started at 15:27:39 on 02-28-2015

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
typedef void (*tmp$40)( struct $8FBSYMBOL* );
typedef void (*tmp$63)( int64 );
typedef void (*tmp$35)( void );
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
typedef void (*tmp$60)( struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
typedef void (*tmp$59)( struct $8FBSYMBOL*, double );
typedef void (*tmp$58)( struct $8FBSYMBOL*, int64 );
typedef void (*tmp$61)( int64, uint8*, int64 );
typedef void (*tmp$62)( int64, uint32*, int64 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
void fb_WstrDelete( uint32* );
FBSTRING* fb_WstrToStr( uint32* );
uint32* fb_StrToWstr( uint8* );
static void fb_ctor__astznodeztypeini( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRREPORT( int64, int64, uint8* );
void ASTDELNODE( struct $7ASTNODE* );
struct $7ASTNODE* ASTCLONETREE( struct $7ASTNODE* );
void ASTDELTREE( struct $7ASTNODE* );
struct $8FBSYMBOL* ASTTEMPSCOPEBEGIN( struct $8FBSYMBOL**, struct $7ASTNODE* );
void ASTTEMPSCOPEEND( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
void ASTTEMPSCOPECLONE( struct $8FBSYMBOL*, struct $7ASTNODE* );
void ASTTEMPSCOPEDELETE( struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWASSIGN( struct $7ASTNODE*, struct $7ASTNODE*, $9AST_OPOPT );
typedef int64 $11AST_CONVOPT;
struct $7ASTNODE* ASTNEWCONV( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, $11AST_CONVOPT, int64* );
struct $7ASTNODE* ASTNEWCONSTI( int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWVAR( struct $8FBSYMBOL*, int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWADDROF( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWLINK( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTNEWMEM( int64, struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTNEWNODE( int64, int64, struct $8FBSYMBOL* );
int64 ASTHASSIDEFX( struct $7ASTNODE* );
struct $8FBSYMBOL* ASTGETSTRLITSYMBOL( struct $7ASTNODE* );
struct $7ASTNODE* ASTTYPEINIADDASSIGN( struct $7ASTNODE*, struct $7ASTNODE*, struct $8FBSYMBOL*, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* _Z15ASTTYPEINIFLUSHP7ASTNODES0_ll( struct $7ASTNODE*, struct $7ASTNODE*, int64, int64 );
struct $7ASTNODE* _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEll( struct $8FBSYMBOL*, struct $7ASTNODE*, int64, int64 );
int64 ASTTYPEINIUSESLOCALS( struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTTYPEINIUPDATE( struct $7ASTNODE* );
struct $7ASTNODE* ASTREMSIDEFX( struct $7ASTNODE** );
struct $7ASTNODE* ASTBUILDVARDEREF( struct $8FBSYMBOL* );
struct $7ASTNODE* ASTBUILDVARINC( struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEl( struct $8FBSYMBOL*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* _Z19ASTBUILDDEREFADDROFP7ASTNODExlP8FBSYMBOLS2_( struct $7ASTNODE*, int64, int64, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTBUILDCTORCALL( struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDFORBEGIN( struct $7ASTNODE*, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64, int64 );
struct $7ASTNODE* ASTBUILDFOREND( struct $7ASTNODE*, struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* ASTPATCHCTORCALL( struct $7ASTNODE*, struct $7ASTNODE* );
void ASTDTORLISTADD( struct $8FBSYMBOL* );
typedef int64 $10FB_SYMBOPT;
struct $8FBSYMBOL* SYMBADDLABEL( uint8*, $10FB_SYMBOPT );
struct $8FBSYMBOL* SYMBADDTEMPVAR( int64, struct $8FBSYMBOL* );
int64 SYMBISSTRING( int64 );
static struct $7ASTNODE* HADDNODE( struct $7ASTNODE*, int64, struct $8FBSYMBOL*, int64, struct $8FBSYMBOL* );
static struct $7ASTNODE* HCALLCTORLIST( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE* );
static int64 HFLUSHEXPRSTATIC( struct $7ASTNODE*, struct $8FBSYMBOL* );
static int64 HEXPRISCONST( struct $7ASTNODE* );
static struct $7ASTNODE* HWALK( struct $7ASTNODE*, struct $7ASTNODE* );
typedef int64 (*tmp$36)( void );
typedef void (*tmp$37)( double );
typedef int64 $14IR_OPTIONVALUE;
typedef int64 (*tmp$38)( $14IR_OPTIONVALUE );
typedef int64 (*tmp$39)( int64, int64 );
typedef void (*tmp$41)( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef uint8* (*tmp$42)( void );
typedef int64 $15IRVREGTYPE_ENUM;
typedef int64 $12IR_REGFAMILY;
struct $6IRVREG;
struct $9IRTACVREG;
struct $9IRTACVREG {
	struct $6IRVREG* VREG;
	struct $6IRVREG* PARENT;
	struct $9IRTACVREG* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $9IRTACVREG ) == 24 );
struct $13IRTACVREG_GRP {
	struct $9IRTACVREG REG;
	struct $9IRTACVREG IDX;
	struct $9IRTACVREG AUX;
};
__FB_STATIC_ASSERT( sizeof( struct $13IRTACVREG_GRP ) == 72 );
struct $5IRTAC {
	int64 POS;
	$6AST_OP OP;
	struct $13IRTACVREG_GRP VR;
	struct $13IRTACVREG_GRP V1;
	struct $13IRTACVREG_GRP V2;
	struct $8FBSYMBOL* EX1;
	int64 EX2;
};
__FB_STATIC_ASSERT( sizeof( struct $5IRTAC ) == 248 );
struct $6IRVREG {
	$15IRVREGTYPE_ENUM TYP;
	$11FB_DATATYPE DTYPE;
	struct $8FBSYMBOL* SUBTYPE;
	int64 REG;
	$12IR_REGFAMILY REGFAMILY;
	int64 VECTOR;
	union $7FBVALUE VALUE;
	struct $8FBSYMBOL* SYM;
	int64 OFS;
	int64 MULT;
	struct $6IRVREG* VIDX;
	struct $6IRVREG* VAUX;
	struct $9IRTACVREG* TACVHEAD;
	struct $9IRTACVREG* TACVTAIL;
	struct $5IRTAC* TACLAST;
};
__FB_STATIC_ASSERT( sizeof( struct $6IRVREG ) == 120 );
typedef void (*tmp$43)( struct $6IRVREG*, struct $6IRVREG* );
typedef void (*tmp$44)( int64 );
typedef void (*tmp$45)( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef void (*tmp$46)( struct $8FBSYMBOL*, struct $6IRVREG*, int64, int64 );
typedef void (*tmp$47)( uint8* );
typedef void (*tmp$48)( int64, struct $6IRVREG*, struct $6IRVREG*, struct $6IRVREG*, struct $8FBSYMBOL* );
typedef void (*tmp$49)( int64, struct $6IRVREG*, struct $6IRVREG* );
typedef void (*tmp$50)( struct $6IRVREG* );
typedef void (*tmp$51)( int64, struct $6IRVREG* );
typedef void (*tmp$52)( struct $8FBSYMBOL*, int64, struct $6IRVREG*, int64 );
typedef void (*tmp$53)( struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG*, int64, int64 );
typedef void (*tmp$54)( int64, struct $8FBSYMBOL* );
typedef void (*tmp$55)( struct $6IRVREG*, struct $8FBSYMBOL*, uint64*, struct $8FBSYMBOL**, int64, struct $8FBSYMBOL*, uint64, uint64 );
typedef void (*tmp$56)( int64, struct $6IRVREG*, struct $6IRVREG*, int64 );
typedef void (*tmp$57)( int64, struct $8FBSYMBOL*, int64 );
typedef struct $6IRVREG* (*tmp$64)( int64, struct $8FBSYMBOL* );
typedef struct $6IRVREG* (*tmp$65)( int64, struct $8FBSYMBOL*, int64 );
typedef struct $6IRVREG* (*tmp$66)( int64, struct $8FBSYMBOL*, double );
typedef struct $6IRVREG* (*tmp$67)( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
typedef struct $6IRVREG* (*tmp$68)( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64, int64, struct $6IRVREG* );
typedef struct $6IRVREG* (*tmp$69)( int64, struct $8FBSYMBOL*, int64, struct $6IRVREG* );
typedef void (*tmp$70)( struct $6IRVREG*, int64, struct $8FBSYMBOL* );
typedef uint64 (*tmp$71)( struct $6IRVREG* );
struct $7IR_VTBL {
	tmp$35 INIT;
	tmp$35 END;
	tmp$36 EMITBEGIN;
	tmp$37 EMITEND;
	tmp$38 GETOPTIONVALUE;
	tmp$39 SUPPORTSOP;
	tmp$40 PROCBEGIN;
	tmp$40 PROCEND;
	tmp$41 PROCALLOCARG;
	tmp$41 PROCALLOCLOCAL;
	tmp$42 PROCGETFRAMEREGNAME;
	tmp$40 SCOPEBEGIN;
	tmp$40 SCOPEEND;
	tmp$40 PROCALLOCSTATICVARS;
	tmp$43 EMITCONVERT;
	tmp$40 EMITLABEL;
	tmp$40 EMITLABELNF;
	tmp$44 EMITRETURN;
	tmp$41 EMITPROCBEGIN;
	tmp$45 EMITPROCEND;
	tmp$46 EMITPUSHARG;
	tmp$35 EMITASMBEGIN;
	tmp$47 EMITASMTEXT;
	tmp$40 EMITASMSYMB;
	tmp$35 EMITASMEND;
	tmp$47 EMITCOMMENT;
	tmp$48 EMITBOP;
	tmp$49 EMITUOP;
	tmp$43 EMITSTORE;
	tmp$35 EMITSPILLREGS;
	tmp$50 EMITLOAD;
	tmp$43 EMITLOADRES;
	tmp$51 EMITSTACK;
	tmp$49 EMITADDR;
	tmp$52 EMITCALL;
	tmp$53 EMITCALLPTR;
	tmp$44 EMITSTACKALIGN;
	tmp$50 EMITJUMPPTR;
	tmp$54 EMITBRANCH;
	tmp$55 EMITJMPTB;
	tmp$56 EMITMEM;
	tmp$40 EMITSCOPEBEGIN;
	tmp$40 EMITSCOPEEND;
	tmp$40 EMITDECL;
	tmp$57 EMITDBG;
	tmp$40 EMITVARINIBEGIN;
	tmp$40 EMITVARINIEND;
	tmp$58 EMITVARINII;
	tmp$59 EMITVARINIF;
	tmp$60 EMITVARINIOFS;
	tmp$61 EMITVARINISTR;
	tmp$62 EMITVARINIWSTR;
	tmp$63 EMITVARINIPAD;
	tmp$35 EMITVARINISCOPEBEGIN;
	tmp$35 EMITVARINISCOPEEND;
	tmp$35 EMITFBCTINFBEGIN;
	tmp$47 EMITFBCTINFSTRING;
	tmp$35 EMITFBCTINFEND;
	tmp$64 ALLOCVREG;
	tmp$65 ALLOCVRIMM;
	tmp$66 ALLOCVRIMMF;
	tmp$67 ALLOCVRVAR;
	tmp$68 ALLOCVRIDX;
	tmp$69 ALLOCVRPTR;
	tmp$67 ALLOCVROFS;
	tmp$70 SETVREGDATATYPE;
	tmp$71 GETDISTANCE;
	tmp$49 LOADVR;
	tmp$43 STOREVR;
	tmp$44 XCHGTOS;
};
__FB_STATIC_ASSERT( sizeof( struct $7IR_VTBL ) == 560 );
typedef int64 $6IR_OPT;
struct $5IRCTX {
	int64 INITED;
	struct $7IR_VTBL VTBL;
	$6IR_OPT OPTIONS;
};
__FB_STATIC_ASSERT( sizeof( struct $5IRCTX ) == 576 );
extern struct $5IRCTX IR$;
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
struct $5FBENV ENV$ __attribute__((common));

struct $7ASTNODE* ASTTYPEINIBEGIN( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, int64 IS_LOCAL$1, int64 OFS$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$10:;
	struct $7ASTNODE* N$1;
	struct $7ASTNODE* vr$1 = ASTNEWNODE( 36ll, DTYPE$1, SUBTYPE$1 );
	N$1 = vr$1;
	fb$result$1 = N$1;
	*(int64*)((uint8*)N$1 + 40ll) = OFS$1;
	int64 ADD_SCOPE$1;
	ADD_SCOPE$1 = 0ll;
	if( IS_LOCAL$1 != 0ll ) goto label$13;
	{
		if( *(int64*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 208ll) != 15ll ) goto label$15;
		{
			ADD_SCOPE$1 = ~(int64)-(*(int64*)*(struct $7ASTNODE**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 208ll) + 88ll) == 36ll);
		}
		goto label$14;
		label$15:;
		{
			ADD_SCOPE$1 = -1ll;
		}
		label$14:;
	}
	label$13:;
	label$12:;
	if( ADD_SCOPE$1 == 0ll ) goto label$17;
	{
		struct $8FBSYMBOL* vr$13 = ASTTEMPSCOPEBEGIN( (struct $8FBSYMBOL**)((uint8*)N$1 + 64ll), N$1 );
		*(struct $8FBSYMBOL**)((uint8*)N$1 + 56ll) = vr$13;
	}
	goto label$16;
	label$17:;
	{
		*(struct $8FBSYMBOL**)((uint8*)N$1 + 56ll) = (struct $8FBSYMBOL*)0ull;
	}
	label$16:;
	label$11:;
	return fb$result$1;
}

void ASTTYPEINIEND( struct $7ASTNODE* TREE$1, int64 IS_INITIALIZER$1 )
{
	label$18:;
	struct $7ASTNODE* N$1;
	struct $7ASTNODE* P$1;
	struct $7ASTNODE* L$1;
	struct $7ASTNODE* R$1;
	int64 OFS$1;
	struct $8FBSYMBOL* SYM$1;
	*(struct $7ASTNODE**)((uint8*)TREE$1 + 120ll) = (struct $7ASTNODE*)0ull;
	if( IS_INITIALIZER$1 != 0ll ) goto label$21;
	{
		*(int64*)((uint8*)&AST$ + 280ll) = *(int64*)((uint8*)&AST$ + 280ll) + 1ll;
	}
	label$21:;
	label$20:;
	P$1 = (struct $7ASTNODE*)0ull;
	N$1 = *(struct $7ASTNODE**)((uint8*)TREE$1 + 112ll);
	label$22:;
	if( N$1 == (struct $7ASTNODE*)0ull ) goto label$23;
	{
		if( *(int64*)N$1 != 38ll ) goto label$25;
		{
			L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
			if( *(int64*)L$1 != 36ll ) goto label$27;
			{
				*(int64*)((uint8*)&AST$ + 280ll) = *(int64*)((uint8*)&AST$ + 280ll) + -1ll;
				OFS$1 = *(int64*)((uint8*)N$1 + 40ll);
				R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
				ASTDELNODE( N$1 );
				N$1 = *(struct $7ASTNODE**)((uint8*)L$1 + 112ll);
				ASTDELNODE( L$1 );
				if( P$1 == (struct $7ASTNODE*)0ull ) goto label$29;
				{
					*(struct $7ASTNODE**)((uint8*)P$1 + 120ll) = N$1;
				}
				goto label$28;
				label$29:;
				{
					*(struct $7ASTNODE**)((uint8*)TREE$1 + 112ll) = N$1;
				}
				label$28:;
				label$30:;
				if( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) == (struct $7ASTNODE*)0ull ) goto label$31;
				{
					*(int64*)((uint8*)N$1 + 40ll) = *(int64*)((uint8*)N$1 + 40ll) + OFS$1;
					N$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
				}
				goto label$30;
				label$31:;
				*(int64*)((uint8*)N$1 + 40ll) = *(int64*)((uint8*)N$1 + 40ll) + OFS$1;
				*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = R$1;
			}
			label$27:;
			label$26:;
		}
		label$25:;
		label$24:;
		P$1 = N$1;
		N$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
	}
	goto label$22;
	label$23:;
	if( *(struct $8FBSYMBOL**)((uint8*)TREE$1 + 56ll) == (struct $8FBSYMBOL*)0ull ) goto label$33;
	{
		ASTTEMPSCOPEEND( *(struct $8FBSYMBOL**)((uint8*)TREE$1 + 56ll), *(struct $8FBSYMBOL**)((uint8*)TREE$1 + 64ll) );
	}
	label$33:;
	label$32:;
	label$19:;
}

void ASTTYPEINIREMOVELASTNODE( struct $7ASTNODE* TREE$1 )
{
	label$40:;
	struct $7ASTNODE* PREV$1;
	struct $7ASTNODE* N$1;
	PREV$1 = (struct $7ASTNODE*)0ull;
	N$1 = *(struct $7ASTNODE**)((uint8*)TREE$1 + 112ll);
	label$42:;
	if( N$1 == (struct $7ASTNODE*)0ull ) goto label$43;
	{
		if( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) != (struct $7ASTNODE*)0ull ) goto label$45;
		{
			if( PREV$1 == (struct $7ASTNODE*)0ull ) goto label$47;
			{
				*(struct $7ASTNODE**)((uint8*)PREV$1 + 120ll) = (struct $7ASTNODE*)0ull;
			}
			goto label$46;
			label$47:;
			{
				*(struct $7ASTNODE**)((uint8*)TREE$1 + 112ll) = (struct $7ASTNODE*)0ull;
			}
			label$46:;
			*(struct $7ASTNODE**)((uint8*)TREE$1 + 120ll) = PREV$1;
			ASTDELTREE( N$1 );
			goto label$43;
		}
		label$45:;
		label$44:;
		PREV$1 = N$1;
		N$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
	}
	goto label$42;
	label$43:;
	label$41:;
}

struct $7ASTNODE* ASTTYPEINIADDPAD( struct $7ASTNODE* TREE$1, int64 BYTES$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$48:;
	struct $7ASTNODE* N$1;
	struct $7ASTNODE* vr$1 = HADDNODE( TREE$1, 37ll, (struct $8FBSYMBOL*)0ull, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	N$1 = vr$1;
	*(int64*)((uint8*)N$1 + 48ll) = BYTES$1;
	*(int64*)((uint8*)N$1 + 40ll) = *(int64*)((uint8*)TREE$1 + 40ll);
	fb$result$1 = N$1;
	label$49:;
	return fb$result$1;
}

struct $7ASTNODE* ASTTYPEINIADDASSIGN( struct $7ASTNODE* TREE$1, struct $7ASTNODE* EXPR$1, struct $8FBSYMBOL* SYM$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$50:;
	struct $7ASTNODE* N$1;
	struct $7ASTNODE* vr$1 = HADDNODE( TREE$1, 38ll, SYM$1, DTYPE$1, SUBTYPE$1 );
	N$1 = vr$1;
	*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = EXPR$1;
	*(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) = SYM$1;
	*(int64*)((uint8*)N$1 + 40ll) = *(int64*)((uint8*)TREE$1 + 40ll);
	if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$53;
	{
		*(int64*)((uint8*)TREE$1 + 40ll) = *(int64*)((uint8*)TREE$1 + 40ll) + *(int64*)((uint8*)SYM$1 + 72ll);
	}
	label$53:;
	label$52:;
	fb$result$1 = N$1;
	label$51:;
	return fb$result$1;
}

struct $7ASTNODE* ASTTYPEINIADDCTORCALL( struct $7ASTNODE* TREE$1, struct $8FBSYMBOL* SYM$1, struct $7ASTNODE* PROCEXPR$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$54:;
	struct $7ASTNODE* N$1;
	struct $7ASTNODE* vr$1 = HADDNODE( TREE$1, 39ll, SYM$1, DTYPE$1, SUBTYPE$1 );
	N$1 = vr$1;
	*(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) = SYM$1;
	*(int64*)((uint8*)N$1 + 40ll) = *(int64*)((uint8*)TREE$1 + 40ll);
	*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = PROCEXPR$1;
	*(int64*)((uint8*)TREE$1 + 40ll) = *(int64*)((uint8*)TREE$1 + 40ll) + *(int64*)((uint8*)SYM$1 + 72ll);
	fb$result$1 = N$1;
	label$55:;
	return fb$result$1;
}

struct $7ASTNODE* ASTTYPEINIADDCTORLIST( struct $7ASTNODE* TREE$1, struct $8FBSYMBOL* SYM$1, int64 ELEMENTS$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$56:;
	struct $7ASTNODE* N$1;
	struct $7ASTNODE* vr$1 = HADDNODE( TREE$1, 40ll, SYM$1, DTYPE$1, SUBTYPE$1 );
	N$1 = vr$1;
	*(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) = SYM$1;
	*(int64*)((uint8*)N$1 + 40ll) = *(int64*)((uint8*)TREE$1 + 40ll);
	*(int64*)((uint8*)N$1 + 48ll) = ELEMENTS$1;
	*(int64*)((uint8*)TREE$1 + 40ll) = *(int64*)((uint8*)TREE$1 + 40ll) + (*(int64*)((uint8*)SYM$1 + 72ll) * ELEMENTS$1);
	fb$result$1 = N$1;
	label$57:;
	return fb$result$1;
}

struct $7ASTNODE* ASTTYPEINISCOPEBEGIN( struct $7ASTNODE* TREE$1, struct $8FBSYMBOL* SYM$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$58:;
	struct $7ASTNODE* N$1;
	struct $7ASTNODE* vr$1 = HADDNODE( TREE$1, 41ll, (struct $8FBSYMBOL*)0ull, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	N$1 = vr$1;
	*(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) = SYM$1;
	fb$result$1 = N$1;
	label$59:;
	return fb$result$1;
}

struct $7ASTNODE* ASTTYPEINISCOPEEND( struct $7ASTNODE* TREE$1, struct $8FBSYMBOL* SYM$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$60:;
	struct $7ASTNODE* N$1;
	struct $7ASTNODE* vr$1 = HADDNODE( TREE$1, 42ll, (struct $8FBSYMBOL*)0ull, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	N$1 = vr$1;
	*(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) = SYM$1;
	fb$result$1 = N$1;
	label$61:;
	return fb$result$1;
}

void ASTTYPEINICOPYELEMENTS( struct $7ASTNODE* TREE$1, struct $7ASTNODE* SOURCE$1, int64 BEGININDEX$1 )
{
	label$62:;
	int64 I$1;
	SOURCE$1 = *(struct $7ASTNODE**)((uint8*)SOURCE$1 + 112ll);
	SOURCE$1 = *(struct $7ASTNODE**)((uint8*)SOURCE$1 + 120ll);
	I$1 = 0ll;
	label$64:;
	if( *(int64*)SOURCE$1 != 38ll ) goto label$65;
	{
		if( I$1 < BEGININDEX$1 ) goto label$67;
		{
			struct $7ASTNODE* vr$7 = ASTCLONETREE( *(struct $7ASTNODE**)((uint8*)SOURCE$1 + 112ll) );
			ASTTYPEINIADDASSIGN( TREE$1, vr$7, *(struct $8FBSYMBOL**)((uint8*)SOURCE$1 + 24ll), 2147483648ll, (struct $8FBSYMBOL*)0ull );
		}
		label$67:;
		label$66:;
		SOURCE$1 = *(struct $7ASTNODE**)((uint8*)SOURCE$1 + 120ll);
		I$1 = I$1 + 1ll;
	}
	goto label$64;
	label$65:;
	label$63:;
}

void ASTTYPEINIREPLACEELEMENT( struct $7ASTNODE* TREE$1, int64 ELEMENT$1, struct $7ASTNODE* EXPR$1 )
{
	label$68:;
	int64 I$1;
	TREE$1 = *(struct $7ASTNODE**)((uint8*)TREE$1 + 112ll);
	TREE$1 = *(struct $7ASTNODE**)((uint8*)TREE$1 + 120ll);
	I$1 = 0ll;
	label$70:;
	if( *(int64*)TREE$1 != 38ll ) goto label$71;
	{
		if( I$1 != ELEMENT$1 ) goto label$73;
		{
			ASTDELTREE( *(struct $7ASTNODE**)((uint8*)TREE$1 + 112ll) );
			*(struct $7ASTNODE**)((uint8*)TREE$1 + 112ll) = EXPR$1;
			goto label$69;
		}
		label$73:;
		label$72:;
		TREE$1 = *(struct $7ASTNODE**)((uint8*)TREE$1 + 120ll);
		I$1 = I$1 + 1ll;
	}
	goto label$70;
	label$71:;
	label$69:;
}

struct $7ASTNODE* _Z15ASTTYPEINIFLUSHP7ASTNODES0_ll( struct $7ASTNODE* TARGET$1, struct $7ASTNODE* INITREE$1, int64 UPDATE_TYPEINICOUNT$1, int64 ASSIGNOPTIONS$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$78:;
	struct $7ASTNODE* N$1;
	struct $7ASTNODE* NXT$1;
	struct $7ASTNODE* T$1;
	struct $7ASTNODE* L$1;
	if( UPDATE_TYPEINICOUNT$1 == 0ll ) goto label$81;
	{
		*(int64*)((uint8*)&AST$ + 280ll) = *(int64*)((uint8*)&AST$ + 280ll) + -1ll;
	}
	label$81:;
	label$80:;
	T$1 = (struct $7ASTNODE*)0ull;
	N$1 = *(struct $7ASTNODE**)((uint8*)INITREE$1 + 112ll);
	if( N$1 == (struct $7ASTNODE*)0ull ) goto label$83;
	{
		if( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) == (struct $7ASTNODE*)0ull ) goto label$85;
		{
			int64 vr$7 = ASTHASSIDEFX( TARGET$1 );
			if( vr$7 == 0ll ) goto label$87;
			{
				struct $7ASTNODE* vr$10 = ASTREMSIDEFX( &TARGET$1 );
				T$1 = vr$10;
			}
			label$87:;
			label$86:;
		}
		label$85:;
		label$84:;
	}
	label$83:;
	label$82:;
	label$88:;
	if( N$1 == (struct $7ASTNODE*)0ull ) goto label$89;
	{
		{
			$13AST_NODECLASS TMP$85$3;
			TMP$85$3 = *($13AST_NODECLASS*)N$1;
			if( TMP$85$3 != 38ll ) goto label$91;
			label$92:;
			{
				if( *(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) == (struct $8FBSYMBOL*)0ull ) goto label$94;
				{
					if( *(int64*)*(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) != 12ll ) goto label$96;
					{
						if( *(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) + 184ll) <= 0ll ) goto label$98;
						{
							if( *(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) + 176ll) != 0ll ) goto label$100;
							{
								int64 TMP$86$8;
								struct $7ASTNODE* vr$28 = ASTCLONETREE( TARGET$1 );
								struct $7ASTNODE* vr$29 = _Z19ASTBUILDDEREFADDROFP7ASTNODExlP8FBSYMBOLS2_( vr$28, *(int64*)((uint8*)N$1 + 40ll), *(int64*)((uint8*)N$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll), (struct $8FBSYMBOL*)0ull );
								L$1 = vr$29;
								if( (*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) + 48ll) & 480ll) == 0ll ) goto label$101;
								TMP$86$8 = 22ll;
								goto label$108;
								label$101:;
								TMP$86$8 = *(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) + 48ll) & 31ll;
								label$108:;
								struct $7ASTNODE* vr$38 = ASTNEWCONSTI( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$86$8 * 56ll)) + 8ll), 7ll, (struct $8FBSYMBOL*)0ull );
								struct $7ASTNODE* vr$39 = ASTNEWMEM( 106ll, L$1, vr$38, 0ll );
								L$1 = vr$39;
								struct $7ASTNODE* vr$40 = ASTNEWLINK( T$1, L$1, -1ll );
								T$1 = vr$40;
							}
							label$100:;
							label$99:;
						}
						label$98:;
						label$97:;
					}
					label$96:;
					label$95:;
				}
				label$94:;
				label$93:;
				struct $7ASTNODE* vr$45 = ASTCLONETREE( TARGET$1 );
				struct $7ASTNODE* vr$46 = _Z19ASTBUILDDEREFADDROFP7ASTNODExlP8FBSYMBOLS2_( vr$45, *(int64*)((uint8*)N$1 + 40ll), *(int64*)((uint8*)N$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll), *(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) );
				L$1 = vr$46;
				struct $7ASTNODE* vr$49 = ASTNEWASSIGN( L$1, *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), ASSIGNOPTIONS$1 | 16ll );
				L$1 = vr$49;
				struct $7ASTNODE* vr$50 = ASTNEWLINK( T$1, L$1, -1ll );
				T$1 = vr$50;
			}
			goto label$90;
			label$91:;
			if( TMP$85$3 != 37ll ) goto label$102;
			label$103:;
			{
				struct $7ASTNODE* vr$55 = ASTCLONETREE( TARGET$1 );
				struct $7ASTNODE* vr$56 = _Z19ASTBUILDDEREFADDROFP7ASTNODExlP8FBSYMBOLS2_( vr$55, *(int64*)((uint8*)N$1 + 40ll), *(int64*)((uint8*)N$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll), (struct $8FBSYMBOL*)0ull );
				L$1 = vr$56;
				struct $7ASTNODE* vr$58 = ASTNEWCONSTI( *(int64*)((uint8*)N$1 + 48ll), 7ll, (struct $8FBSYMBOL*)0ull );
				struct $7ASTNODE* vr$59 = ASTNEWMEM( 106ll, L$1, vr$58, 0ll );
				L$1 = vr$59;
				struct $7ASTNODE* vr$60 = ASTNEWLINK( T$1, L$1, -1ll );
				T$1 = vr$60;
			}
			goto label$90;
			label$102:;
			if( TMP$85$3 != 39ll ) goto label$104;
			label$105:;
			{
				struct $7ASTNODE* vr$66 = ASTCLONETREE( TARGET$1 );
				struct $7ASTNODE* vr$67 = _Z19ASTBUILDDEREFADDROFP7ASTNODExlP8FBSYMBOLS2_( vr$66, *(int64*)((uint8*)N$1 + 40ll), *(int64*)((uint8*)N$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll), *(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) );
				L$1 = vr$67;
				struct $7ASTNODE* vr$69 = ASTPATCHCTORCALL( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), L$1 );
				L$1 = vr$69;
				struct $7ASTNODE* vr$70 = ASTNEWLINK( T$1, L$1, -1ll );
				T$1 = vr$70;
			}
			goto label$90;
			label$104:;
			if( TMP$85$3 != 40ll ) goto label$106;
			label$107:;
			{
				struct $7ASTNODE* vr$72 = HCALLCTORLIST( T$1, N$1, TARGET$1 );
				T$1 = vr$72;
			}
			label$106:;
			label$90:;
		}
		NXT$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
		ASTDELNODE( N$1 );
		N$1 = NXT$1;
	}
	goto label$88;
	label$89:;
	ASTDELNODE( INITREE$1 );
	ASTDELTREE( TARGET$1 );
	fb$result$1 = T$1;
	label$79:;
	return fb$result$1;
}

struct $7ASTNODE* _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEll( struct $8FBSYMBOL* TARGET$1, struct $7ASTNODE* INITREE$1, int64 UPDATE_TYPEINICOUNT$1, int64 ASSIGNOPTIONS$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$109:;
	struct $7ASTNODE* vr$1 = ASTNEWVAR( TARGET$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$2 = _Z15ASTTYPEINIFLUSHP7ASTNODES0_ll( vr$1, INITREE$1, UPDATE_TYPEINICOUNT$1, ASSIGNOPTIONS$1 );
	fb$result$1 = vr$2;
	label$110:;
	return fb$result$1;
}

void ASTLOADSTATICINITIALIZER( struct $7ASTNODE* TREE$1, struct $8FBSYMBOL* BASESYM$1 )
{
	label$132:;
	struct $7ASTNODE* N$1;
	struct $7ASTNODE* NXT$1;
	(*(tmp$40*)((uint8*)&IR$ + 368ll))( BASESYM$1 );
	N$1 = *(struct $7ASTNODE**)((uint8*)TREE$1 + 112ll);
	label$134:;
	if( N$1 == (struct $7ASTNODE*)0ull ) goto label$135;
	{
		NXT$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
		{
			uint64 TMP$90$3;
			TMP$90$3 = *(uint64*)N$1;
			goto label$137;
			label$138:;
			{
				(*(tmp$63*)((uint8*)&IR$ + 424ll))( *(int64*)((uint8*)N$1 + 48ll) );
			}
			goto label$136;
			label$139:;
			{
				(*(tmp$35*)((uint8*)&IR$ + 432ll))(  );
			}
			goto label$136;
			label$140:;
			{
				(*(tmp$35*)((uint8*)&IR$ + 440ll))(  );
			}
			goto label$136;
			label$141:;
			{
				HFLUSHEXPRSTATIC( N$1, BASESYM$1 );
			}
			goto label$136;
			label$137:;
			static const void* tmp$91[6ll] = {
				&&label$138,
				&&label$141,
				&&label$141,
				&&label$141,
				&&label$139,
				&&label$140,
			};
			if( TMP$90$3 < 37ll ) goto label$141;
			if( TMP$90$3 > 42ll ) goto label$141;
			goto *tmp$91[TMP$90$3 - 37ll];
			label$136:;
		}
		ASTDELNODE( N$1 );
		N$1 = NXT$1;
	}
	goto label$134;
	label$135:;
	(*(tmp$40*)((uint8*)&IR$ + 376ll))( BASESYM$1 );
	ASTDELNODE( TREE$1 );
	label$133:;
}

int64 ASTTYPEINIISCONST( struct $7ASTNODE* TREE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$170:;
	struct $7ASTNODE* N$1;
	fb$result$1 = 0ll;
	N$1 = *(struct $7ASTNODE**)((uint8*)TREE$1 + 112ll);
	label$172:;
	if( N$1 == (struct $7ASTNODE*)0ull ) goto label$173;
	{
		{
			$13AST_NODECLASS TMP$95$3;
			TMP$95$3 = *($13AST_NODECLASS*)N$1;
			if( TMP$95$3 != 38ll ) goto label$175;
			label$176:;
			{
				int64 vr$5 = HEXPRISCONST( N$1 );
				if( vr$5 != 0ll ) goto label$178;
				{
					goto label$171;
				}
				label$178:;
				label$177:;
			}
			goto label$174;
			label$175:;
			if( TMP$95$3 == 39ll ) goto label$180;
			label$181:;
			if( TMP$95$3 != 40ll ) goto label$179;
			label$180:;
			{
				goto label$171;
			}
			label$179:;
			label$174:;
		}
		N$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
	}
	goto label$172;
	label$173:;
	fb$result$1 = -1ll;
	label$171:;
	return fb$result$1;
}

int64 ASTTYPEINIUSESLOCALS( struct $7ASTNODE* N$1, int64 IGNOREATTRIB$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$182:;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$185;
	{
		fb$result$1 = 0ll;
		goto label$183;
	}
	label$185:;
	label$184:;
	if( *(int64*)N$1 != 17ll ) goto label$187;
	{
		if( ((int64)-((*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) + 8ll) & 128ll) != 0ll) & (int64)-((*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) + 8ll) & IGNOREATTRIB$1) == 0ll)) == 0ll ) goto label$189;
		{
			fb$result$1 = -1ll;
			goto label$183;
		}
		label$189:;
		label$188:;
	}
	label$187:;
	label$186:;
	int64 vr$15 = ASTTYPEINIUSESLOCALS( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), IGNOREATTRIB$1 );
	int64 vr$17 = ASTTYPEINIUSESLOCALS( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll), IGNOREATTRIB$1 );
	fb$result$1 = vr$15 | vr$17;
	label$183:;
	return fb$result$1;
}

struct $7ASTNODE* ASTTYPEINIUPDATE( struct $7ASTNODE* TREE$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$198:;
	struct $7ASTNODE* TEMPVARINITCODE$1;
	struct $7ASTNODE TREEPARENT$1;
	if( *(int64*)((uint8*)&AST$ + 280ll) > 0ll ) goto label$201;
	{
		fb$result$1 = TREE$1;
		goto label$199;
	}
	label$201:;
	label$200:;
	*($13AST_NODECLASS*)&TREEPARENT$1 = 0ll;
	*(int64*)((uint8*)&TREEPARENT$1 + 8ll) = 2147483648ll;
	*(struct $8FBSYMBOL**)((uint8*)&TREEPARENT$1 + 16ll) = (struct $8FBSYMBOL*)0ull;
	*(struct $7ASTNODE**)((uint8*)&TREEPARENT$1 + 112ll) = (struct $7ASTNODE*)0ull;
	*(struct $7ASTNODE**)((uint8*)&TREEPARENT$1 + 120ll) = (struct $7ASTNODE*)0ull;
	*(struct $8FBSYMBOL**)((uint8*)&TREEPARENT$1 + 24ll) = (struct $8FBSYMBOL*)0ull;
	*(int64*)((uint8*)&TREEPARENT$1 + 32ll) = 0ll;
	*(struct $7ASTNODE**)((uint8*)&TREEPARENT$1 + 112ll) = TREE$1;
	struct $7ASTNODE* vr$3 = HWALK( TREE$1, &TREEPARENT$1 );
	TEMPVARINITCODE$1 = vr$3;
	struct $7ASTNODE* vr$4 = ASTNEWLINK( TEMPVARINITCODE$1, *(struct $7ASTNODE**)((uint8*)&TREEPARENT$1 + 112ll), 0ll );
	fb$result$1 = vr$4;
	label$199:;
	return fb$result$1;
}

struct $7ASTNODE* ASTTYPEINICLONE( struct $7ASTNODE* TREE$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$202:;
	struct $7ASTNODE* CLONETREE$1;
	struct $7ASTNODE* vr$1 = ASTCLONETREE( TREE$1 );
	CLONETREE$1 = vr$1;
	if( *(struct $8FBSYMBOL**)((uint8*)TREE$1 + 56ll) == (struct $8FBSYMBOL*)0ull ) goto label$205;
	{
		ASTTEMPSCOPECLONE( *(struct $8FBSYMBOL**)((uint8*)TREE$1 + 56ll), CLONETREE$1 );
	}
	label$205:;
	label$204:;
	fb$result$1 = CLONETREE$1;
	label$203:;
	return fb$result$1;
}

struct $7ASTNODE* ASTTYPEINITRYREMOVE( struct $7ASTNODE* TREE$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$206:;
	fb$result$1 = TREE$1;
	if( *(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)TREE$1 + 112ll) + 120ll) == (struct $7ASTNODE*)0ull ) goto label$209;
	{
		goto label$207;
	}
	label$209:;
	label$208:;
	if( *(int64*)*(struct $7ASTNODE**)((uint8*)TREE$1 + 112ll) == 38ll ) goto label$211;
	{
		goto label$207;
	}
	label$211:;
	label$210:;
	if( ((int64)-((*(int64*)((uint8*)TREE$1 + 8ll) & 511ll) != (*(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)TREE$1 + 112ll) + 8ll) & 511ll)) | (int64)-(*(struct $8FBSYMBOL**)((uint8*)TREE$1 + 16ll) != *(struct $8FBSYMBOL**)((uint8*)*(struct $7ASTNODE**)((uint8*)TREE$1 + 112ll) + 16ll))) == 0ll ) goto label$213;
	{
		goto label$207;
	}
	label$213:;
	label$212:;
	fb$result$1 = *(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)TREE$1 + 112ll) + 112ll);
	ASTDELNODE( *(struct $7ASTNODE**)((uint8*)TREE$1 + 112ll) );
	ASTDELNODE( TREE$1 );
	*(int64*)((uint8*)&AST$ + 280ll) = *(int64*)((uint8*)&AST$ + 280ll) + -1ll;
	label$207:;
	return fb$result$1;
}

void ASTTYPEINIDELETE( struct $7ASTNODE* TREE$1 )
{
	label$214:;
	if( *(struct $8FBSYMBOL**)((uint8*)TREE$1 + 56ll) == (struct $8FBSYMBOL*)0ull ) goto label$217;
	{
		ASTTEMPSCOPEDELETE( *(struct $8FBSYMBOL**)((uint8*)TREE$1 + 56ll) );
		*(struct $8FBSYMBOL**)((uint8*)TREE$1 + 56ll) = (struct $8FBSYMBOL*)0ull;
	}
	label$217:;
	label$216:;
	ASTDELTREE( TREE$1 );
	label$215:;
}

__attribute__(( constructor )) static void fb_ctor__astznodeztypeini( void )
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

static struct $7ASTNODE* HADDNODE( struct $7ASTNODE* TREE$1, int64 CLASS_$1, struct $8FBSYMBOL* SYM$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$34:;
	struct $7ASTNODE* N$1;
	if( ((int64)-(DTYPE$1 == 2147483648ll) & (int64)-(SYM$1 != (struct $8FBSYMBOL*)0ull)) == 0ll ) goto label$37;
	{
		DTYPE$1 = *(int64*)((uint8*)SYM$1 + 48ll);
		SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll);
	}
	label$37:;
	label$36:;
	struct $7ASTNODE* vr$7 = ASTNEWNODE( CLASS_$1, DTYPE$1, SUBTYPE$1 );
	N$1 = vr$7;
	if( *(struct $7ASTNODE**)((uint8*)TREE$1 + 120ll) == (struct $7ASTNODE*)0ull ) goto label$39;
	{
		*(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)TREE$1 + 120ll) + 120ll) = N$1;
	}
	goto label$38;
	label$39:;
	{
		*(struct $7ASTNODE**)((uint8*)TREE$1 + 112ll) = N$1;
	}
	label$38:;
	*(struct $7ASTNODE**)((uint8*)TREE$1 + 120ll) = N$1;
	fb$result$1 = N$1;
	label$35:;
	return fb$result$1;
}

static struct $7ASTNODE* HCALLCTORLIST( struct $7ASTNODE* T$1, struct $7ASTNODE* N$1, struct $7ASTNODE* TARGET$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$74:;
	struct $7ASTNODE* FLDEXPR$1;
	struct $7ASTNODE* vr$5 = ASTCLONETREE( TARGET$1 );
	struct $7ASTNODE* vr$6 = _Z19ASTBUILDDEREFADDROFP7ASTNODExlP8FBSYMBOLS2_( vr$5, *(int64*)((uint8*)N$1 + 40ll), *(int64*)((uint8*)N$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll), *(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) );
	FLDEXPR$1 = vr$6;
	if( *(int64*)((uint8*)N$1 + 48ll) <= 1ll ) goto label$77;
	{
		struct $8FBSYMBOL* CNT$2;
		__builtin_memset( &CNT$2, 0, 8ll );
		struct $8FBSYMBOL* LABEL$2;
		__builtin_memset( &LABEL$2, 0, 8ll );
		struct $8FBSYMBOL* ITER$2;
		__builtin_memset( &ITER$2, 0, 8ll );
		struct $8FBSYMBOL* vr$12 = SYMBADDTEMPVAR( 7ll, (struct $8FBSYMBOL*)0ull );
		CNT$2 = vr$12;
		struct $8FBSYMBOL* vr$13 = SYMBADDLABEL( (uint8*)0ull, 4ll );
		LABEL$2 = vr$13;
		struct $8FBSYMBOL* vr$25 = SYMBADDTEMPVAR( ((*(int64*)((uint8*)N$1 + 8ll) & 31ll) | ((*(int64*)((uint8*)N$1 + 8ll) & 480ll) + 32ll)) | ((*(int64*)((uint8*)N$1 + 8ll) & 261632ll) << 1ll), *(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll) );
		ITER$2 = vr$25;
		struct $7ASTNODE* vr$26 = ASTNEWADDROF( FLDEXPR$1 );
		struct $7ASTNODE* vr$27 = _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEl( ITER$2, vr$26, 64ll );
		struct $7ASTNODE* vr$28 = ASTNEWLINK( T$1, vr$27, -1ll );
		T$1 = vr$28;
		struct $7ASTNODE* vr$29 = ASTBUILDFORBEGIN( T$1, CNT$2, LABEL$2, 0ll, -1ll );
		T$1 = vr$29;
		struct $7ASTNODE* vr$30 = ASTBUILDVARDEREF( ITER$2 );
		struct $7ASTNODE* vr$32 = ASTBUILDCTORCALL( *(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll), vr$30 );
		struct $7ASTNODE* vr$33 = ASTNEWLINK( T$1, vr$32, -1ll );
		T$1 = vr$33;
		struct $7ASTNODE* vr$34 = ASTBUILDVARINC( ITER$2, 1ll );
		struct $7ASTNODE* vr$35 = ASTNEWLINK( T$1, vr$34, -1ll );
		T$1 = vr$35;
		struct $7ASTNODE* vr$37 = ASTNEWCONSTI( *(int64*)((uint8*)N$1 + 48ll), 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$38 = ASTBUILDFOREND( T$1, CNT$2, LABEL$2, vr$37 );
		T$1 = vr$38;
	}
	goto label$76;
	label$77:;
	{
		struct $7ASTNODE* vr$40 = ASTBUILDCTORCALL( *(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll), FLDEXPR$1 );
		struct $7ASTNODE* vr$41 = ASTNEWLINK( T$1, vr$40, -1ll );
		T$1 = vr$41;
	}
	label$76:;
	fb$result$1 = T$1;
	label$75:;
	return fb$result$1;
}

static int64 HFLUSHEXPRSTATIC( struct $7ASTNODE* N$1, struct $8FBSYMBOL* BASESYM$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$111:;
	struct $7ASTNODE* EXPR$1;
	int64 EDTYPE$1;
	int64 SDTYPE$1;
	struct $8FBSYMBOL* SYM$1;
	struct $8FBSYMBOL* LITSYM$1;
	fb$result$1 = 0ll;
	EXPR$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
	SYM$1 = *(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll);
	EDTYPE$1 = *(int64*)((uint8*)EXPR$1 + 8ll) & 511ll;
	SDTYPE$1 = *(int64*)((uint8*)SYM$1 + 48ll) & 511ll;
	LITSYM$1 = (struct $8FBSYMBOL*)0ull;
	{
		if( EDTYPE$1 == 3ll ) goto label$115;
		label$116:;
		if( EDTYPE$1 != 6ll ) goto label$114;
		label$115:;
		{
			struct $8FBSYMBOL* vr$9 = ASTGETSTRLITSYMBOL( EXPR$1 );
			LITSYM$1 = vr$9;
		}
		label$114:;
		label$113:;
	}
	if( LITSYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$118;
	{
		if( *(int64*)EXPR$1 != 23ll ) goto label$120;
		{
			(*(tmp$60*)((uint8*)&IR$ + 400ll))( SYM$1, *(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 24ll), *(int64*)((uint8*)EXPR$1 + 40ll) );
		}
		goto label$119;
		label$120:;
		{
			int64 TMP$87$3;
			if( EDTYPE$1 == SDTYPE$1 ) goto label$122;
			{
				struct $7ASTNODE* vr$18 = ASTNEWCONV( *(int64*)((uint8*)SYM$1 + 48ll), *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll), EXPR$1, 8ll, (int64*)0ull );
				EXPR$1 = vr$18;
			}
			label$122:;
			label$121:;
			if( (SDTYPE$1 & 480ll) == 0ll ) goto label$123;
			TMP$87$3 = 22ll;
			goto label$218;
			label$123:;
			TMP$87$3 = SDTYPE$1 & 31ll;
			label$218:;
			if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$87$3 * 56ll)) != 1ll ) goto label$125;
			{
				(*(tmp$59*)((uint8*)&IR$ + 392ll))( SYM$1, *(double*)((uint8*)EXPR$1 + 40ll) );
			}
			goto label$124;
			label$125:;
			{
				(*(tmp$58*)((uint8*)&IR$ + 384ll))( SYM$1, *(int64*)((uint8*)EXPR$1 + 40ll) );
			}
			label$124:;
		}
		label$119:;
	}
	goto label$117;
	label$118:;
	{
		if( SDTYPE$1 == 6ll ) goto label$127;
		{
			if( EDTYPE$1 == 6ll ) goto label$129;
			{
				(*(tmp$61*)((uint8*)&IR$ + 408ll))( *(int64*)((uint8*)SYM$1 + 72ll) + -1ll, *(uint8**)((uint8*)LITSYM$1 + 88ll), *(int64*)((uint8*)LITSYM$1 + 72ll) + -1ll );
			}
			goto label$128;
			label$129:;
			{
				FBSTRING TMP$88$4;
				__builtin_memset( &TMP$88$4, 0, 24ll );
				FBSTRING* vr$38 = fb_WstrToStr( *(uint32**)((uint8*)LITSYM$1 + 88ll) );
				FBSTRING* vr$40 = fb_StrAssign( (void*)&TMP$88$4, -1ll, (void*)vr$38, -1ll, 0 );
				(*(tmp$61*)((uint8*)&IR$ + 408ll))( *(int64*)((uint8*)SYM$1 + 72ll) + -1ll, *(uint8**)&TMP$88$4, (*(int64*)((uint8*)LITSYM$1 + 72ll) / *(int64*)((uint8*)SYMB_DTYPETB$ + 344ll)) + -1ll );
				fb_StrDelete( &TMP$88$4 );
			}
			label$128:;
		}
		goto label$126;
		label$127:;
		{
			if( EDTYPE$1 == 6ll ) goto label$131;
			{
				uint32* TMP$89$4;
				uint32* vr$48 = fb_StrToWstr( *(uint8**)((uint8*)LITSYM$1 + 88ll) );
				TMP$89$4 = vr$48;
				(*(tmp$62*)((uint8*)&IR$ + 416ll))( (*(int64*)((uint8*)SYM$1 + 72ll) / *(int64*)((uint8*)SYMB_DTYPETB$ + 344ll)) + -1ll, TMP$89$4, *(int64*)((uint8*)LITSYM$1 + 72ll) + -1ll );
				fb_WstrDelete( TMP$89$4 );
			}
			goto label$130;
			label$131:;
			{
				(*(tmp$62*)((uint8*)&IR$ + 416ll))( (*(int64*)((uint8*)SYM$1 + 72ll) / *(int64*)((uint8*)SYMB_DTYPETB$ + 344ll)) + -1ll, *(uint32**)((uint8*)LITSYM$1 + 88ll), (*(int64*)((uint8*)LITSYM$1 + 72ll) / *(int64*)((uint8*)SYMB_DTYPETB$ + 344ll)) + -1ll );
			}
			label$130:;
		}
		label$126:;
	}
	label$117:;
	ASTDELTREE( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
	*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = (struct $7ASTNODE*)0ull;
	fb$result$1 = -1ll;
	label$112:;
	return fb$result$1;
}

static int64 HEXPRISCONST( struct $7ASTNODE* N$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$142:;
	struct $8FBSYMBOL* SYM$1;
	struct $8FBSYMBOL* LITSYM$1;
	struct $7ASTNODE* EXPR$1;
	int64 SDTYPE$1;
	int64 EDTYPE$1;
	SYM$1 = *(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll);
	EXPR$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
	SDTYPE$1 = *(int64*)((uint8*)SYM$1 + 48ll) & 511ll;
	EDTYPE$1 = *(int64*)((uint8*)EXPR$1 + 8ll) & 511ll;
	LITSYM$1 = (struct $8FBSYMBOL*)0ull;
	{
		if( EDTYPE$1 == 3ll ) goto label$146;
		label$147:;
		if( EDTYPE$1 != 6ll ) goto label$145;
		label$146:;
		{
			struct $8FBSYMBOL* vr$9 = ASTGETSTRLITSYMBOL( EXPR$1 );
			LITSYM$1 = vr$9;
		}
		label$145:;
		label$144:;
	}
	if( LITSYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$149;
	{
		int64 TMP$92$2;
		int64 vr$11 = SYMBISSTRING( SDTYPE$1 );
		if( vr$11 == 0ll ) goto label$151;
		{
			int64 vr$13 = SYMBISSTRING( EDTYPE$1 );
			if( vr$13 == 0ll ) goto label$153;
			{
				ERRREPORT( 11ll, -1ll, (uint8*)0ull );
			}
			goto label$152;
			label$153:;
			{
				ERRREPORT( 24ll, -1ll, (uint8*)0ull );
			}
			label$152:;
			goto label$143;
		}
		goto label$150;
		label$151:;
		int64 vr$15 = SYMBISSTRING( EDTYPE$1 );
		if( vr$15 == 0ll ) goto label$154;
		{
			ERRREPORT( 24ll, -1ll, (uint8*)0ull );
			goto label$143;
		}
		label$154:;
		label$150:;
		if( *(int64*)SYM$1 != 12ll ) goto label$155;
		TMP$92$2 = (int64)-(*(int64*)((uint8*)SYM$1 + 184ll) > 0ll);
		goto label$219;
		label$155:;
		TMP$92$2 = 0ll;
		label$219:;
		if( TMP$92$2 == 0ll ) goto label$157;
		{
			ERRREPORT( 24ll, -1ll, (uint8*)0ull );
			goto label$143;
		}
		label$157:;
		label$156:;
		if( *(int64*)EXPR$1 != 23ll ) goto label$159;
		{
			int64 TMP$93$3;
			int64 TMP$94$3;
			if( (SDTYPE$1 & 480ll) == 0ll ) goto label$160;
			TMP$93$3 = 22ll;
			goto label$220;
			label$160:;
			TMP$93$3 = SDTYPE$1 & 31ll;
			label$220:;
			if( (SDTYPE$1 & 480ll) == 0ll ) goto label$161;
			TMP$94$3 = 22ll;
			goto label$221;
			label$161:;
			TMP$94$3 = SDTYPE$1 & 31ll;
			label$221:;
			if( ((int64)-(*(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$93$3 * 56ll)) != 0ll) | (int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$94$3 * 56ll)) + 8ll) != *(int64*)((uint8*)&ENV$ + 472ll))) == 0ll ) goto label$163;
			{
				ERRREPORT( 24ll, -1ll, (uint8*)0ull );
				goto label$143;
			}
			label$163:;
			label$162:;
		}
		goto label$158;
		label$159:;
		{
			if( (int64)-(*(int64*)EXPR$1 == 16ll) != 0ll ) goto label$165;
			{
				ERRREPORT( 11ll, -1ll, (uint8*)0ull );
				goto label$143;
			}
			label$165:;
			label$164:;
		}
		label$158:;
	}
	goto label$148;
	label$149:;
	{
		int64 vr$39 = SYMBISSTRING( SDTYPE$1 );
		if( vr$39 != 0ll ) goto label$167;
		{
			ERRREPORT( 24ll, -1ll, (uint8*)0ull );
			goto label$143;
		}
		label$167:;
		label$166:;
		if( SDTYPE$1 != 16ll ) goto label$169;
		{
			ERRREPORT( 86ll, -1ll, (uint8*)0ull );
			goto label$143;
		}
		label$169:;
		label$168:;
	}
	label$148:;
	fb$result$1 = -1ll;
	label$143:;
	return fb$result$1;
}

static struct $7ASTNODE* HWALK( struct $7ASTNODE* N$1, struct $7ASTNODE* PARENT$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$190:;
	struct $7ASTNODE* EXPR$1;
	struct $8FBSYMBOL* SYM$1;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$193;
	{
		fb$result$1 = (struct $7ASTNODE*)0ull;
		goto label$191;
	}
	label$193:;
	label$192:;
	if( *(int64*)N$1 != 36ll ) goto label$195;
	{
		struct $8FBSYMBOL* vr$6 = SYMBADDTEMPVAR( *(int64*)((uint8*)N$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll) );
		SYM$1 = vr$6;
		ASTDTORLISTADD( SYM$1 );
		struct $7ASTNODE* vr$7 = ASTNEWVAR( SYM$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		EXPR$1 = vr$7;
		if( *(struct $7ASTNODE**)((uint8*)PARENT$1 + 112ll) != N$1 ) goto label$197;
		{
			*(struct $7ASTNODE**)((uint8*)PARENT$1 + 112ll) = EXPR$1;
		}
		goto label$196;
		label$197:;
		{
			*(struct $7ASTNODE**)((uint8*)PARENT$1 + 120ll) = EXPR$1;
		}
		label$196:;
		struct $7ASTNODE* vr$12 = _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEll( SYM$1, N$1, -1ll, 64ll );
		N$1 = vr$12;
		struct $7ASTNODE* vr$13 = ASTTYPEINIUPDATE( N$1 );
		fb$result$1 = vr$13;
		goto label$191;
	}
	label$195:;
	label$194:;
	struct $7ASTNODE* vr$15 = HWALK( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll), N$1 );
	struct $7ASTNODE* vr$17 = HWALK( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), N$1 );
	struct $7ASTNODE* vr$18 = ASTNEWLINK( vr$17, vr$15, -1ll );
	fb$result$1 = vr$18;
	goto label$191;
	label$191:;
	return fb$result$1;
}

// Total compilation time: 0.03601499856449664 seconds.
