// Compilation of FreeBASIC-1.01.0-source/src/compiler/rtl-print.bas started at 16:30:15 on 02-28-2015

typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
typedef int64 $11FB_DATATYPE;
typedef int64 $11FB_FUNCMODE;
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
typedef int64 (*tmp$28)( struct $8FBSYMBOL* );
typedef int64 $10FB_RTL_OPT;
struct $15FB_RTL_PARAMDEF {
	$11FB_DATATYPE DTYPE;
	$12FB_PARAMMODE MODE;
	int64 ISOPT;
	int64 OPTVAL;
	int64 CHECK_CONST;
};
__FB_STATIC_ASSERT( sizeof( struct $15FB_RTL_PARAMDEF ) == 40 );
struct $14FB_RTL_PROCDEF {
	uint8* NAME;
	uint8* ALIAS;
	$11FB_DATATYPE DTYPE;
	$11FB_FUNCMODE CALLCONV;
	tmp$28 CALLBACK;
	$10FB_RTL_OPT OPTIONS;
	int64 PARAMS;
	struct $15FB_RTL_PARAMDEF PARAMTB[16];
};
__FB_STATIC_ASSERT( sizeof( struct $14FB_RTL_PROCDEF ) == 696 );
typedef int64 $13FB_COMPTARGET;
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__rtlzprint( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
struct $7ASTNODE* ASTADD( struct $7ASTNODE* );
typedef int64 $11AST_CONVOPT;
struct $7ASTNODE* ASTNEWCONV( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, $11AST_CONVOPT, int64* );
struct $7ASTNODE* ASTNEWOVLCONV( int64, struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWCONSTI( int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWCALL( struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWARG( struct $7ASTNODE*, struct $7ASTNODE*, int64, int64 );
void FBADDLIB( uint8* );
void RTLADDINTRINSICPROCS( struct $14FB_RTL_PROCDEF* );
struct $8FBSYMBOL* RTLPROCLOOKUP( uint8*, int64 );
struct $7ASTNODE* RTLERRORCHECK( struct $7ASTNODE* );
int64 RTLPRINTER_CB( struct $8FBSYMBOL* );
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
static struct $14FB_RTL_PROCDEF FUNCDATA$[51] = { { (uint8*)"fb_PrintVoid", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 2ll, { { 10ll, 1ll, -1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_PrintByte", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 1ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_PrintUByte", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 2ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_PrintShort", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 4ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_PrintUShort", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 5ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_PrintInt", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_PrintUInt", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 11ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_PrintLongint", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 12ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_PrintULongint", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 13ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_PrintSingle", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 14ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_PrintDouble", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 15ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_PrintString", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 16ll, 2ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_PrintWstr", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 38ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_LPrintVoid", (uint8*)0ull, 0ll, -1ll, (tmp$28)&RTLPRINTER_CB, 0ll, 2ll, { { 10ll, 1ll, -1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_LPrintByte", (uint8*)0ull, 0ll, -1ll, (tmp$28)&RTLPRINTER_CB, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 1ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_LPrintUByte", (uint8*)0ull, 0ll, -1ll, (tmp$28)&RTLPRINTER_CB, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 2ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_LPrintShort", (uint8*)0ull, 0ll, -1ll, (tmp$28)&RTLPRINTER_CB, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 4ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_LPrintUShort", (uint8*)0ull, 0ll, -1ll, (tmp$28)&RTLPRINTER_CB, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 5ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_LPrintInt", (uint8*)0ull, 0ll, -1ll, (tmp$28)&RTLPRINTER_CB, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_LPrintUInt", (uint8*)0ull, 0ll, -1ll, (tmp$28)&RTLPRINTER_CB, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 11ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_LPrintLongint", (uint8*)0ull, 0ll, -1ll, (tmp$28)&RTLPRINTER_CB, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 12ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_LPrintULongint", (uint8*)0ull, 0ll, -1ll, (tmp$28)&RTLPRINTER_CB, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 13ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_LPrintSingle", (uint8*)0ull, 0ll, -1ll, (tmp$28)&RTLPRINTER_CB, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 14ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_LPrintDouble", (uint8*)0ull, 0ll, -1ll, (tmp$28)&RTLPRINTER_CB, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 15ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_LPrintString", (uint8*)0ull, 0ll, -1ll, (tmp$28)&RTLPRINTER_CB, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 16ll, 2ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_LPrintWstr", (uint8*)0ull, 0ll, -1ll, (tmp$28)&RTLPRINTER_CB, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 38ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_PrintSPC", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 2ll, { { 10ll, 1ll, -1ll, 0ll }, { 7ll, 1ll, 0ll } } }, { (uint8*)"fb_PrintTab", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 2ll, { { 10ll, 1ll, -1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_WriteVoid", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 2ll, { { 10ll, 1ll, -1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_WriteByte", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 1ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_WriteUByte", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 2ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_WriteShort", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 4ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_WriteUShort", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 5ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_WriteInt", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_WriteUInt", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 11ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_WriteLongint", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 12ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_WriteULongint", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 13ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_WriteSingle", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 14ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_WriteDouble", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 15ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_WriteString", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 16ll, 2ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_WriteWstr", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, -1ll, 0ll }, { 38ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_PrintUsingInit", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 1ll, { { 16ll, 2ll, 0ll } } }, { (uint8*)"fb_PrintUsingStr", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, 0ll }, { 16ll, 2ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_PrintUsingWstr", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, 0ll }, { 38ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_PrintUsingSingle", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, 0ll }, { 14ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_PrintUsingDouble", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, 0ll }, { 15ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_PrintUsingLongint", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, 0ll }, { 12ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_PrintUsingULongint", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, 0ll }, { 13ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_PrintUsingEnd", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 1ll, { { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_LPrintUsingInit", (uint8*)0ull, 10ll, -1ll, (tmp$28)&RTLPRINTER_CB, 0ll, 1ll, { { 16ll, 2ll, 0ll } } }, { (uint8*)0ull } };
struct $5FBENV ENV$ __attribute__((common));

void RTLPRINTMODINIT( void )
{
	label$10:;
	RTLADDINTRINSICPROCS( (struct $14FB_RTL_PROCDEF*)FUNCDATA$ );
	label$11:;
}

void RTLPRINTMODEND( void )
{
	label$12:;
	label$13:;
}

int64 RTLPRINT( struct $7ASTNODE* FILEEXPR$1, int64 ISCOMMA$1, int64 ISSEMICOLON$1, struct $7ASTNODE* EXPR$1, int64 ISLPRINT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$14:;
	struct $7ASTNODE* PROC$1;
	struct $8FBSYMBOL* F$1;
	int64 MASK$1;
	fb$result$1 = 0ll;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$17;
	{
		if( ISLPRINT$1 == 0ll ) goto label$19;
		{
			struct $8FBSYMBOL* vr$3 = RTLPROCLOOKUP( (uint8*)"fb_LPrintVoid", 168ll );
			F$1 = vr$3;
		}
		goto label$18;
		label$19:;
		{
			struct $8FBSYMBOL* vr$4 = RTLPROCLOOKUP( (uint8*)"fb_PrintVoid", 155ll );
			F$1 = vr$4;
		}
		label$18:;
	}
	goto label$16;
	label$17:;
	{
		{
			int64 TMP$136$3;
			int64 TMP$137$3;
			if( ((*(int64*)((uint8*)EXPR$1 + 8ll) & 511ll) & 480ll) == 0ll ) goto label$20;
			TMP$136$3 = 22ll;
			goto label$86;
			label$20:;
			TMP$136$3 = (*(int64*)((uint8*)EXPR$1 + 8ll) & 511ll) & 31ll;
			label$86:;
			TMP$137$3 = TMP$136$3;
			if( TMP$137$3 == 18ll ) goto label$23;
			label$24:;
			if( TMP$137$3 != 9ll ) goto label$22;
			label$23:;
			{
				struct $7ASTNODE* vr$14 = ASTNEWOVLCONV( 16ll, (struct $8FBSYMBOL*)0ull, EXPR$1 );
				EXPR$1 = vr$14;
				if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$26;
				{
					goto label$15;
				}
				label$26:;
				label$25:;
			}
			label$22:;
			label$21:;
		}
		if( (*(int64*)((uint8*)EXPR$1 + 8ll) & 480ll) == 0ll ) goto label$28;
		{
			struct $7ASTNODE* vr$19 = ASTNEWCONV( 8ll, (struct $8FBSYMBOL*)0ull, EXPR$1, 0ll, (int64*)0ull );
			EXPR$1 = vr$19;
		}
		label$28:;
		label$27:;
		{
			int64 TMP$138$3;
			uint64 TMP$139$3;
			if( ((*(int64*)((uint8*)EXPR$1 + 8ll) & 511ll) & 480ll) == 0ll ) goto label$29;
			TMP$138$3 = 22ll;
			goto label$87;
			label$29:;
			TMP$138$3 = (*(int64*)((uint8*)EXPR$1 + 8ll) & 511ll) & 31ll;
			label$87:;
			TMP$139$3 = (uint64)TMP$138$3;
			goto label$31;
			label$32:;
			{
				if( ISLPRINT$1 == 0ll ) goto label$34;
				{
					struct $8FBSYMBOL* vr$28 = RTLPROCLOOKUP( (uint8*)"fb_LPrintString", 179ll );
					F$1 = vr$28;
				}
				goto label$33;
				label$34:;
				{
					struct $8FBSYMBOL* vr$29 = RTLPROCLOOKUP( (uint8*)"fb_PrintString", 166ll );
					F$1 = vr$29;
				}
				label$33:;
			}
			goto label$30;
			label$35:;
			{
				if( ISLPRINT$1 == 0ll ) goto label$37;
				{
					struct $8FBSYMBOL* vr$31 = RTLPROCLOOKUP( (uint8*)"fb_LPrintWstr", 180ll );
					F$1 = vr$31;
				}
				goto label$36;
				label$37:;
				{
					struct $8FBSYMBOL* vr$32 = RTLPROCLOOKUP( (uint8*)"fb_PrintWstr", 167ll );
					F$1 = vr$32;
				}
				label$36:;
			}
			goto label$30;
			label$38:;
			{
				{
					int64 TMP$140$5;
					uint64 TMP$141$5;
					if( (*(int64*)((uint8*)EXPR$1 + 8ll) & 480ll) == 0ll ) goto label$39;
					TMP$140$5 = 22ll;
					goto label$88;
					label$39:;
					TMP$140$5 = *(int64*)((uint8*)EXPR$1 + 8ll) & 31ll;
					label$88:;
					TMP$141$5 = *(uint64*)(((uint8*)SYMB_DTYPETB$ + (TMP$140$5 * 56ll)) + 40ll);
					goto label$41;
					label$42:;
					{
						if( ISLPRINT$1 == 0ll ) goto label$44;
						{
							struct $8FBSYMBOL* vr$40 = RTLPROCLOOKUP( (uint8*)"fb_LPrintByte", 169ll );
							F$1 = vr$40;
						}
						goto label$43;
						label$44:;
						{
							struct $8FBSYMBOL* vr$41 = RTLPROCLOOKUP( (uint8*)"fb_PrintByte", 156ll );
							F$1 = vr$41;
						}
						label$43:;
					}
					goto label$40;
					label$45:;
					{
						if( ISLPRINT$1 == 0ll ) goto label$47;
						{
							struct $8FBSYMBOL* vr$43 = RTLPROCLOOKUP( (uint8*)"fb_LPrintUByte", 170ll );
							F$1 = vr$43;
						}
						goto label$46;
						label$47:;
						{
							struct $8FBSYMBOL* vr$44 = RTLPROCLOOKUP( (uint8*)"fb_PrintUByte", 157ll );
							F$1 = vr$44;
						}
						label$46:;
					}
					goto label$40;
					label$48:;
					{
						if( ISLPRINT$1 == 0ll ) goto label$50;
						{
							struct $8FBSYMBOL* vr$46 = RTLPROCLOOKUP( (uint8*)"fb_LPrintShort", 171ll );
							F$1 = vr$46;
						}
						goto label$49;
						label$50:;
						{
							struct $8FBSYMBOL* vr$47 = RTLPROCLOOKUP( (uint8*)"fb_PrintShort", 158ll );
							F$1 = vr$47;
						}
						label$49:;
					}
					goto label$40;
					label$51:;
					{
						if( ISLPRINT$1 == 0ll ) goto label$53;
						{
							struct $8FBSYMBOL* vr$49 = RTLPROCLOOKUP( (uint8*)"fb_LPrintUShort", 172ll );
							F$1 = vr$49;
						}
						goto label$52;
						label$53:;
						{
							struct $8FBSYMBOL* vr$50 = RTLPROCLOOKUP( (uint8*)"fb_PrintUShort", 159ll );
							F$1 = vr$50;
						}
						label$52:;
					}
					goto label$40;
					label$54:;
					{
						if( ISLPRINT$1 == 0ll ) goto label$56;
						{
							struct $8FBSYMBOL* vr$52 = RTLPROCLOOKUP( (uint8*)"fb_LPrintInt", 173ll );
							F$1 = vr$52;
						}
						goto label$55;
						label$56:;
						{
							struct $8FBSYMBOL* vr$53 = RTLPROCLOOKUP( (uint8*)"fb_PrintInt", 160ll );
							F$1 = vr$53;
						}
						label$55:;
					}
					goto label$40;
					label$57:;
					{
						if( ISLPRINT$1 == 0ll ) goto label$59;
						{
							struct $8FBSYMBOL* vr$55 = RTLPROCLOOKUP( (uint8*)"fb_LPrintUInt", 174ll );
							F$1 = vr$55;
						}
						goto label$58;
						label$59:;
						{
							struct $8FBSYMBOL* vr$56 = RTLPROCLOOKUP( (uint8*)"fb_PrintUInt", 161ll );
							F$1 = vr$56;
						}
						label$58:;
					}
					goto label$40;
					label$60:;
					{
						if( ISLPRINT$1 == 0ll ) goto label$62;
						{
							struct $8FBSYMBOL* vr$58 = RTLPROCLOOKUP( (uint8*)"fb_LPrintLongint", 175ll );
							F$1 = vr$58;
						}
						goto label$61;
						label$62:;
						{
							struct $8FBSYMBOL* vr$59 = RTLPROCLOOKUP( (uint8*)"fb_PrintLongint", 162ll );
							F$1 = vr$59;
						}
						label$61:;
					}
					goto label$40;
					label$63:;
					{
						if( ISLPRINT$1 == 0ll ) goto label$65;
						{
							struct $8FBSYMBOL* vr$61 = RTLPROCLOOKUP( (uint8*)"fb_LPrintULongint", 176ll );
							F$1 = vr$61;
						}
						goto label$64;
						label$65:;
						{
							struct $8FBSYMBOL* vr$62 = RTLPROCLOOKUP( (uint8*)"fb_PrintULongint", 163ll );
							F$1 = vr$62;
						}
						label$64:;
					}
					goto label$40;
					label$41:;
					static const void* tmp$142[8ll] = {
						&&label$42,
						&&label$45,
						&&label$48,
						&&label$51,
						&&label$54,
						&&label$57,
						&&label$60,
						&&label$63,
					};
					if( TMP$141$5 > 7ll ) goto label$40;
					goto *tmp$142[TMP$141$5 - 0ll];
					label$40:;
				}
			}
			goto label$30;
			label$66:;
			{
				if( ISLPRINT$1 == 0ll ) goto label$68;
				{
					struct $8FBSYMBOL* vr$64 = RTLPROCLOOKUP( (uint8*)"fb_LPrintSingle", 177ll );
					F$1 = vr$64;
				}
				goto label$67;
				label$68:;
				{
					struct $8FBSYMBOL* vr$65 = RTLPROCLOOKUP( (uint8*)"fb_PrintSingle", 164ll );
					F$1 = vr$65;
				}
				label$67:;
			}
			goto label$30;
			label$69:;
			{
				if( ISLPRINT$1 == 0ll ) goto label$71;
				{
					struct $8FBSYMBOL* vr$67 = RTLPROCLOOKUP( (uint8*)"fb_LPrintDouble", 178ll );
					F$1 = vr$67;
				}
				goto label$70;
				label$71:;
				{
					struct $8FBSYMBOL* vr$68 = RTLPROCLOOKUP( (uint8*)"fb_PrintDouble", 165ll );
					F$1 = vr$68;
				}
				label$70:;
			}
			goto label$30;
			label$72:;
			{
				goto label$15;
			}
			goto label$30;
			label$31:;
			static const void* tmp$143[17ll] = {
				&&label$38,
				&&label$38,
				&&label$32,
				&&label$38,
				&&label$38,
				&&label$35,
				&&label$38,
				&&label$38,
				&&label$38,
				&&label$38,
				&&label$38,
				&&label$38,
				&&label$38,
				&&label$66,
				&&label$69,
				&&label$32,
				&&label$32,
			};
			if( TMP$139$3 < 1ll ) goto label$72;
			if( TMP$139$3 > 17ll ) goto label$72;
			goto *tmp$143[TMP$139$3 - 1ll];
			label$30:;
		}
	}
	label$16:;
	struct $7ASTNODE* vr$69 = ASTNEWCALL( F$1, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$69;
	struct $7ASTNODE* vr$70 = ASTNEWARG( PROC$1, FILEEXPR$1, 2147483648ll, -1ll );
	if( vr$70 != (struct $7ASTNODE*)0ull ) goto label$74;
	{
		goto label$15;
	}
	label$74:;
	label$73:;
	if( EXPR$1 == (struct $7ASTNODE*)0ull ) goto label$76;
	{
		struct $7ASTNODE* vr$73 = ASTNEWARG( PROC$1, EXPR$1, 2147483648ll, -1ll );
		if( vr$73 != (struct $7ASTNODE*)0ull ) goto label$78;
		{
			goto label$15;
		}
		label$78:;
		label$77:;
	}
	label$76:;
	label$75:;
	MASK$1 = 0ll;
	if( *(int64*)((uint8*)&ENV$ + 272ll) != 3ll ) goto label$80;
	{
		MASK$1 = MASK$1 | 16ll;
		label$80:;
	}
	if( ISCOMMA$1 == 0ll ) goto label$82;
	{
		MASK$1 = MASK$1 | 2ll;
	}
	goto label$81;
	label$82:;
	if( ISSEMICOLON$1 != 0ll ) goto label$83;
	{
		MASK$1 = MASK$1 | 1ll;
	}
	label$83:;
	label$81:;
	struct $7ASTNODE* vr$81 = ASTNEWCONSTI( MASK$1, 7ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$82 = ASTNEWARG( PROC$1, vr$81, 2147483648ll, -1ll );
	if( vr$82 != (struct $7ASTNODE*)0ull ) goto label$85;
	{
		goto label$15;
	}
	label$85:;
	label$84:;
	ASTADD( PROC$1 );
	fb$result$1 = -1ll;
	label$15:;
	return fb$result$1;
}

int64 RTLPRINTSPCTAB( struct $7ASTNODE* FILEEXPR$1, struct $7ASTNODE* EXPR$1, int64 ISTAB$1, int64 ISLPRINT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$89:;
	struct $7ASTNODE* PROC$1;
	fb$result$1 = 0ll;
	if( ISLPRINT$1 == 0ll ) goto label$92;
	{
		RTLPRINTER_CB( (struct $8FBSYMBOL*)0ull );
	}
	label$92:;
	label$91:;
	if( ISTAB$1 == 0ll ) goto label$94;
	{
		struct $8FBSYMBOL* vr$3 = RTLPROCLOOKUP( (uint8*)"fb_PrintTab", 182ll );
		struct $7ASTNODE* vr$4 = ASTNEWCALL( vr$3, (struct $7ASTNODE*)0ull );
		PROC$1 = vr$4;
	}
	goto label$93;
	label$94:;
	{
		struct $8FBSYMBOL* vr$5 = RTLPROCLOOKUP( (uint8*)"fb_PrintSPC", 181ll );
		struct $7ASTNODE* vr$6 = ASTNEWCALL( vr$5, (struct $7ASTNODE*)0ull );
		PROC$1 = vr$6;
	}
	label$93:;
	struct $7ASTNODE* vr$7 = ASTNEWARG( PROC$1, FILEEXPR$1, 2147483648ll, -1ll );
	if( vr$7 != (struct $7ASTNODE*)0ull ) goto label$96;
	{
		goto label$90;
	}
	label$96:;
	label$95:;
	struct $7ASTNODE* vr$9 = ASTNEWARG( PROC$1, EXPR$1, 2147483648ll, -1ll );
	if( vr$9 != (struct $7ASTNODE*)0ull ) goto label$98;
	{
		goto label$90;
	}
	label$98:;
	label$97:;
	ASTADD( PROC$1 );
	fb$result$1 = -1ll;
	label$90:;
	return fb$result$1;
}

int64 RTLWRITE( struct $7ASTNODE* FILEEXPR$1, int64 ISCOMMA$1, struct $7ASTNODE* EXPR$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$99:;
	struct $7ASTNODE* PROC$1;
	struct $8FBSYMBOL* F$1;
	int64 MASK$1;
	fb$result$1 = 0ll;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$102;
	{
		struct $8FBSYMBOL* vr$2 = RTLPROCLOOKUP( (uint8*)"fb_WriteVoid", 183ll );
		F$1 = vr$2;
	}
	goto label$101;
	label$102:;
	{
		{
			int64 TMP$144$3;
			TMP$144$3 = *(int64*)((uint8*)EXPR$1 + 8ll) & 511ll;
			if( TMP$144$3 == 18ll ) goto label$105;
			label$106:;
			if( TMP$144$3 != 9ll ) goto label$104;
			label$105:;
			{
				struct $7ASTNODE* vr$7 = ASTNEWOVLCONV( 16ll, (struct $8FBSYMBOL*)0ull, EXPR$1 );
				EXPR$1 = vr$7;
				if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$108;
				{
					goto label$100;
				}
				label$108:;
				label$107:;
			}
			label$104:;
			label$103:;
		}
		if( (*(int64*)((uint8*)EXPR$1 + 8ll) & 480ll) == 0ll ) goto label$110;
		{
			struct $7ASTNODE* vr$12 = ASTNEWCONV( 8ll, (struct $8FBSYMBOL*)0ull, EXPR$1, 0ll, (int64*)0ull );
			EXPR$1 = vr$12;
		}
		label$110:;
		label$109:;
		{
			int64 TMP$145$3;
			uint64 TMP$146$3;
			if( ((*(int64*)((uint8*)EXPR$1 + 8ll) & 511ll) & 480ll) == 0ll ) goto label$111;
			TMP$145$3 = 22ll;
			goto label$141;
			label$111:;
			TMP$145$3 = (*(int64*)((uint8*)EXPR$1 + 8ll) & 511ll) & 31ll;
			label$141:;
			TMP$146$3 = (uint64)TMP$145$3;
			goto label$113;
			label$114:;
			{
				struct $8FBSYMBOL* vr$20 = RTLPROCLOOKUP( (uint8*)"fb_WriteString", 194ll );
				F$1 = vr$20;
			}
			goto label$112;
			label$115:;
			{
				struct $8FBSYMBOL* vr$21 = RTLPROCLOOKUP( (uint8*)"fb_WriteWstr", 195ll );
				F$1 = vr$21;
			}
			goto label$112;
			label$116:;
			{
				{
					int64 TMP$147$5;
					uint64 TMP$148$5;
					if( (*(int64*)((uint8*)EXPR$1 + 8ll) & 480ll) == 0ll ) goto label$117;
					TMP$147$5 = 22ll;
					goto label$142;
					label$117:;
					TMP$147$5 = *(int64*)((uint8*)EXPR$1 + 8ll) & 31ll;
					label$142:;
					TMP$148$5 = *(uint64*)(((uint8*)SYMB_DTYPETB$ + (TMP$147$5 * 56ll)) + 40ll);
					goto label$119;
					label$120:;
					{
						struct $8FBSYMBOL* vr$28 = RTLPROCLOOKUP( (uint8*)"fb_WriteByte", 184ll );
						F$1 = vr$28;
					}
					goto label$118;
					label$121:;
					{
						struct $8FBSYMBOL* vr$29 = RTLPROCLOOKUP( (uint8*)"fb_WriteUByte", 185ll );
						F$1 = vr$29;
					}
					goto label$118;
					label$122:;
					{
						struct $8FBSYMBOL* vr$30 = RTLPROCLOOKUP( (uint8*)"fb_WriteShort", 186ll );
						F$1 = vr$30;
					}
					goto label$118;
					label$123:;
					{
						struct $8FBSYMBOL* vr$31 = RTLPROCLOOKUP( (uint8*)"fb_WriteUShort", 187ll );
						F$1 = vr$31;
					}
					goto label$118;
					label$124:;
					{
						struct $8FBSYMBOL* vr$32 = RTLPROCLOOKUP( (uint8*)"fb_WriteInt", 188ll );
						F$1 = vr$32;
					}
					goto label$118;
					label$125:;
					{
						struct $8FBSYMBOL* vr$33 = RTLPROCLOOKUP( (uint8*)"fb_WriteUInt", 189ll );
						F$1 = vr$33;
					}
					goto label$118;
					label$126:;
					{
						struct $8FBSYMBOL* vr$34 = RTLPROCLOOKUP( (uint8*)"fb_WriteLongint", 190ll );
						F$1 = vr$34;
					}
					goto label$118;
					label$127:;
					{
						struct $8FBSYMBOL* vr$35 = RTLPROCLOOKUP( (uint8*)"fb_WriteULongint", 191ll );
						F$1 = vr$35;
					}
					goto label$118;
					label$119:;
					static const void* tmp$149[8ll] = {
						&&label$120,
						&&label$121,
						&&label$122,
						&&label$123,
						&&label$124,
						&&label$125,
						&&label$126,
						&&label$127,
					};
					if( TMP$148$5 > 7ll ) goto label$118;
					goto *tmp$149[TMP$148$5 - 0ll];
					label$118:;
				}
			}
			goto label$112;
			label$128:;
			{
				struct $8FBSYMBOL* vr$36 = RTLPROCLOOKUP( (uint8*)"fb_WriteSingle", 192ll );
				F$1 = vr$36;
			}
			goto label$112;
			label$129:;
			{
				struct $8FBSYMBOL* vr$37 = RTLPROCLOOKUP( (uint8*)"fb_WriteDouble", 193ll );
				F$1 = vr$37;
			}
			goto label$112;
			label$130:;
			{
				goto label$100;
			}
			goto label$112;
			label$113:;
			static const void* tmp$150[17ll] = {
				&&label$116,
				&&label$116,
				&&label$114,
				&&label$116,
				&&label$116,
				&&label$115,
				&&label$116,
				&&label$116,
				&&label$116,
				&&label$116,
				&&label$116,
				&&label$116,
				&&label$116,
				&&label$128,
				&&label$129,
				&&label$114,
				&&label$114,
			};
			if( TMP$146$3 < 1ll ) goto label$130;
			if( TMP$146$3 > 17ll ) goto label$130;
			goto *tmp$150[TMP$146$3 - 1ll];
			label$112:;
		}
	}
	label$101:;
	struct $7ASTNODE* vr$38 = ASTNEWCALL( F$1, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$38;
	struct $7ASTNODE* vr$39 = ASTNEWARG( PROC$1, FILEEXPR$1, 2147483648ll, -1ll );
	if( vr$39 != (struct $7ASTNODE*)0ull ) goto label$132;
	{
		goto label$100;
	}
	label$132:;
	label$131:;
	if( EXPR$1 == (struct $7ASTNODE*)0ull ) goto label$134;
	{
		struct $7ASTNODE* vr$42 = ASTNEWARG( PROC$1, EXPR$1, 2147483648ll, -1ll );
		if( vr$42 != (struct $7ASTNODE*)0ull ) goto label$136;
		{
			goto label$100;
		}
		label$136:;
		label$135:;
	}
	label$134:;
	label$133:;
	MASK$1 = 0ll;
	if( ISCOMMA$1 == 0ll ) goto label$138;
	{
		MASK$1 = MASK$1 | 2ll;
	}
	goto label$137;
	label$138:;
	{
		MASK$1 = MASK$1 | 1ll;
	}
	label$137:;
	struct $7ASTNODE* vr$47 = ASTNEWCONSTI( MASK$1, 7ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$48 = ASTNEWARG( PROC$1, vr$47, 2147483648ll, -1ll );
	if( vr$48 != (struct $7ASTNODE*)0ull ) goto label$140;
	{
		goto label$100;
	}
	label$140:;
	label$139:;
	ASTADD( PROC$1 );
	fb$result$1 = -1ll;
	label$100:;
	return fb$result$1;
}

int64 RTLPRINTUSINGINIT( struct $7ASTNODE* USINGEXPR$1, int64 ISLPRINT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$143:;
	struct $7ASTNODE* PROC$1;
	struct $8FBSYMBOL* F$1;
	fb$result$1 = 0ll;
	if( ISLPRINT$1 == 0ll ) goto label$146;
	{
		struct $8FBSYMBOL* vr$2 = RTLPROCLOOKUP( (uint8*)"fb_LPrintUsingInit", 204ll );
		F$1 = vr$2;
	}
	goto label$145;
	label$146:;
	{
		struct $8FBSYMBOL* vr$3 = RTLPROCLOOKUP( (uint8*)"fb_PrintUsingInit", 196ll );
		F$1 = vr$3;
	}
	label$145:;
	struct $7ASTNODE* vr$4 = ASTNEWCALL( F$1, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$4;
	struct $7ASTNODE* vr$5 = ASTNEWARG( PROC$1, USINGEXPR$1, 2147483648ll, -1ll );
	if( vr$5 != (struct $7ASTNODE*)0ull ) goto label$148;
	{
		goto label$144;
	}
	label$148:;
	label$147:;
	ASTADD( PROC$1 );
	fb$result$1 = -1ll;
	label$144:;
	return fb$result$1;
}

int64 RTLPRINTUSINGEND( struct $7ASTNODE* FILEEXPR$1, int64 ISLPRINT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$149:;
	struct $7ASTNODE* PROC$1;
	fb$result$1 = 0ll;
	if( ISLPRINT$1 == 0ll ) goto label$152;
	{
		RTLPRINTER_CB( (struct $8FBSYMBOL*)0ull );
	}
	label$152:;
	label$151:;
	struct $8FBSYMBOL* vr$2 = RTLPROCLOOKUP( (uint8*)"fb_PrintUsingEnd", 203ll );
	struct $7ASTNODE* vr$3 = ASTNEWCALL( vr$2, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$3;
	struct $7ASTNODE* vr$4 = ASTNEWARG( PROC$1, FILEEXPR$1, 2147483648ll, -1ll );
	if( vr$4 != (struct $7ASTNODE*)0ull ) goto label$154;
	{
		goto label$150;
	}
	label$154:;
	label$153:;
	ASTADD( PROC$1 );
	fb$result$1 = -1ll;
	label$150:;
	return fb$result$1;
}

int64 RTLPRINTUSING( struct $7ASTNODE* FILEEXPR$1, struct $7ASTNODE* EXPR$1, int64 ISCOMMA$1, int64 ISSEMICOLON$1, int64 ISLPRINT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$155:;
	struct $7ASTNODE* PROC$1;
	struct $8FBSYMBOL* F$1;
	int64 MASK$1;
	fb$result$1 = 0ll;
	if( ISLPRINT$1 == 0ll ) goto label$158;
	{
		RTLPRINTER_CB( (struct $8FBSYMBOL*)0ull );
	}
	label$158:;
	label$157:;
	if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$160;
	{
		goto label$156;
	}
	label$160:;
	label$159:;
	{
		int64 TMP$151$2;
		TMP$151$2 = *(int64*)((uint8*)EXPR$1 + 8ll) & 511ll;
		if( TMP$151$2 == 18ll ) goto label$163;
		label$164:;
		if( TMP$151$2 != 9ll ) goto label$162;
		label$163:;
		{
			struct $7ASTNODE* vr$7 = ASTNEWOVLCONV( 15ll, (struct $8FBSYMBOL*)0ull, EXPR$1 );
			EXPR$1 = vr$7;
			if( EXPR$1 != (struct $7ASTNODE*)0ull ) goto label$166;
			{
				goto label$156;
			}
			label$166:;
			label$165:;
		}
		label$162:;
		label$161:;
	}
	{
		int64 TMP$152$2;
		TMP$152$2 = *(int64*)((uint8*)EXPR$1 + 8ll) & 511ll;
		if( TMP$152$2 == 17ll ) goto label$169;
		label$170:;
		if( TMP$152$2 == 16ll ) goto label$169;
		label$171:;
		if( TMP$152$2 != 3ll ) goto label$168;
		label$169:;
		{
			struct $8FBSYMBOL* vr$14 = RTLPROCLOOKUP( (uint8*)"fb_PrintUsingStr", 197ll );
			F$1 = vr$14;
		}
		goto label$167;
		label$168:;
		if( TMP$152$2 != 6ll ) goto label$172;
		label$173:;
		{
			struct $8FBSYMBOL* vr$16 = RTLPROCLOOKUP( (uint8*)"fb_PrintUsingWstr", 198ll );
			F$1 = vr$16;
		}
		goto label$167;
		label$172:;
		if( TMP$152$2 != 14ll ) goto label$174;
		label$175:;
		{
			struct $8FBSYMBOL* vr$18 = RTLPROCLOOKUP( (uint8*)"fb_PrintUsingSingle", 199ll );
			F$1 = vr$18;
		}
		goto label$167;
		label$174:;
		if( TMP$152$2 == 12ll ) goto label$177;
		label$178:;
		if( TMP$152$2 == 7ll ) goto label$177;
		label$179:;
		if( TMP$152$2 == 10ll ) goto label$177;
		label$180:;
		if( TMP$152$2 == 4ll ) goto label$177;
		label$181:;
		if( TMP$152$2 != 1ll ) goto label$176;
		label$177:;
		{
			struct $8FBSYMBOL* vr$24 = RTLPROCLOOKUP( (uint8*)"fb_PrintUsingLongint", 201ll );
			F$1 = vr$24;
		}
		goto label$167;
		label$176:;
		if( TMP$152$2 == 13ll ) goto label$183;
		label$184:;
		if( TMP$152$2 == 8ll ) goto label$183;
		label$185:;
		if( TMP$152$2 == 11ll ) goto label$183;
		label$186:;
		if( TMP$152$2 == 5ll ) goto label$183;
		label$187:;
		if( TMP$152$2 != 2ll ) goto label$182;
		label$183:;
		{
			struct $8FBSYMBOL* vr$30 = RTLPROCLOOKUP( (uint8*)"fb_PrintUsingULongint", 202ll );
			F$1 = vr$30;
		}
		goto label$167;
		label$182:;
		{
			struct $8FBSYMBOL* vr$31 = RTLPROCLOOKUP( (uint8*)"fb_PrintUsingDouble", 200ll );
			F$1 = vr$31;
		}
		label$188:;
		label$167:;
	}
	struct $7ASTNODE* vr$32 = ASTNEWCALL( F$1, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$32;
	struct $7ASTNODE* vr$33 = ASTNEWARG( PROC$1, FILEEXPR$1, 2147483648ll, -1ll );
	if( vr$33 != (struct $7ASTNODE*)0ull ) goto label$190;
	{
		goto label$156;
	}
	label$190:;
	label$189:;
	struct $7ASTNODE* vr$35 = ASTNEWARG( PROC$1, EXPR$1, 2147483648ll, -1ll );
	if( vr$35 != (struct $7ASTNODE*)0ull ) goto label$192;
	{
		goto label$156;
	}
	label$192:;
	label$191:;
	if( (ISCOMMA$1 | ISSEMICOLON$1) == 0ll ) goto label$194;
	{
		MASK$1 = 0ll;
	}
	goto label$193;
	label$194:;
	{
		MASK$1 = 2147483649ll;
	}
	label$193:;
	struct $7ASTNODE* vr$39 = ASTNEWCONSTI( MASK$1, 7ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$40 = ASTNEWARG( PROC$1, vr$39, 2147483648ll, -1ll );
	if( vr$40 != (struct $7ASTNODE*)0ull ) goto label$196;
	{
		goto label$156;
	}
	label$196:;
	label$195:;
	ASTADD( PROC$1 );
	fb$result$1 = -1ll;
	label$156:;
	return fb$result$1;
}

struct $7ASTNODE* RTLWIDTHDEV( struct $7ASTNODE* DEVICE$1, struct $7ASTNODE* WIDTH_ARG$1, int64 ISFUNC$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$197:;
	struct $7ASTNODE* PROC$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	RTLPRINTER_CB( (struct $8FBSYMBOL*)0ull );
	struct $8FBSYMBOL* vr$1 = RTLPROCLOOKUP( (uint8*)"fb_WidthDev", 279ll );
	struct $7ASTNODE* vr$2 = ASTNEWCALL( vr$1, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$2;
	struct $7ASTNODE* vr$3 = ASTNEWARG( PROC$1, DEVICE$1, 2147483648ll, -1ll );
	if( vr$3 != (struct $7ASTNODE*)0ull ) goto label$200;
	{
		goto label$198;
	}
	label$200:;
	label$199:;
	struct $7ASTNODE* vr$5 = ASTNEWARG( PROC$1, WIDTH_ARG$1, 2147483648ll, -1ll );
	if( vr$5 != (struct $7ASTNODE*)0ull ) goto label$202;
	{
		goto label$198;
	}
	label$202:;
	label$201:;
	if( ISFUNC$1 != 0ll ) goto label$204;
	{
		struct $7ASTNODE* vr$8 = RTLERRORCHECK( PROC$1 );
		ASTADD( vr$8 );
	}
	label$204:;
	label$203:;
	fb$result$1 = PROC$1;
	label$198:;
	return fb$result$1;
}

int64 RTLPRINTER_CB( struct $8FBSYMBOL* SYM$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$205:;
	static int64 LIBSADDED$1 = 0ll;
	if( LIBSADDED$1 != 0ll ) goto label$208;
	{
		LIBSADDED$1 = -1ll;
		{
			$13FB_COMPTARGET TMP$154$3;
			TMP$154$3 = *($13FB_COMPTARGET*)((uint8*)&ENV$ + 216ll);
			if( TMP$154$3 == 0ll ) goto label$211;
			label$212:;
			if( TMP$154$3 != 1ll ) goto label$210;
			label$211:;
			{
				FBADDLIB( (uint8*)"winspool" );
				FBADDLIB( (uint8*)"gdi32" );
			}
			label$210:;
			label$209:;
		}
	}
	label$208:;
	label$207:;
	fb$result$1 = -1ll;
	label$206:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__rtlzprint( void )
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

// Total compilation time: 0.04071906465105712 seconds.
