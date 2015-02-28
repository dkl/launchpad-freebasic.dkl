// Compilation of fbc-1.01.0/src/compiler/rtl-file.bas started at 15:27:43 on 02-28-2015

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
typedef int64 $10FBOPENKIND;
typedef int64 $13FB_COMPTARGET;
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__rtlzfile( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRREPORT( int64, int64, uint8* );
void ERRREPORTPARAMWARN( struct $8FBSYMBOL*, int64, uint8*, int64 );
struct $7ASTNODE* ASTADD( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWBOP( int64, struct $7ASTNODE*, struct $7ASTNODE*, struct $8FBSYMBOL*, $9AST_OPOPT );
struct $7ASTNODE* ASTNEWCONSTI( int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWVAR( struct $8FBSYMBOL*, int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWCALL( struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWARG( struct $7ASTNODE*, struct $7ASTNODE*, int64, int64 );
struct $8FBSYMBOL* SYMBALLOCSTRCONST( uint8*, int64 );
struct $8FBSYMBOL* SYMBALLOCWSTRCONST( uint32*, int64 );
int64 SYMBISSTRING( int64 );
void FBADDLIB( uint8* );
void RTLADDINTRINSICPROCS( struct $14FB_RTL_PROCDEF* );
struct $8FBSYMBOL* RTLPROCLOOKUP( uint8*, int64 );
int64 RTLCALCEXPRLEN( struct $7ASTNODE* );
int64 RTLCALCSTRLEN( struct $7ASTNODE*, int64 );
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
static struct $14FB_RTL_PROCDEF FUNCDATA$[67] = { { (uint8*)"fb_FileOpen", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 6ll, { { 16ll, 2ll, 0ll }, { 11ll, 1ll, 0ll }, { 11ll, 1ll, 0ll }, { 11ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_FileOpenEncod", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 7ll, { { 16ll, 2ll, 0ll }, { 11ll, 1ll, 0ll }, { 11ll, 1ll, 0ll }, { 11ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 35ll, 1ll, 0ll } } }, { (uint8*)"fb_FileOpenShort", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 6ll, { { 16ll, 2ll, 0ll }, { 10ll, 1ll, 0ll }, { 16ll, 2ll, 0ll }, { 10ll, 1ll, 0ll }, { 16ll, 2ll, 0ll }, { 16ll, 2ll, 0ll } } }, { (uint8*)"fb_FileOpenCons", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 7ll, { { 16ll, 2ll, 0ll }, { 11ll, 1ll, 0ll }, { 11ll, 1ll, 0ll }, { 11ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 35ll, 1ll, 0ll } } }, { (uint8*)"fb_FileOpenErr", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 7ll, { { 16ll, 2ll, 0ll }, { 11ll, 1ll, 0ll }, { 11ll, 1ll, 0ll }, { 11ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 35ll, 1ll, 0ll } } }, { (uint8*)"fb_FileOpenPipe", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 7ll, { { 16ll, 2ll, 0ll }, { 11ll, 1ll, 0ll }, { 11ll, 1ll, 0ll }, { 11ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 35ll, 1ll, 0ll } } }, { (uint8*)"fb_FileOpenScrn", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 7ll, { { 16ll, 2ll, 0ll }, { 11ll, 1ll, 0ll }, { 11ll, 1ll, 0ll }, { 11ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 35ll, 1ll, 0ll } } }, { (uint8*)"fb_FileOpenLpt", (uint8*)0ull, 10ll, -1ll, (tmp$28)&RTLPRINTER_CB, 0ll, 7ll, { { 16ll, 2ll, 0ll }, { 11ll, 1ll, 0ll }, { 11ll, 1ll, 0ll }, { 11ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 35ll, 1ll, 0ll } } }, { (uint8*)"fb_FileOpenCom", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 7ll, { { 16ll, 2ll, 0ll }, { 11ll, 1ll, 0ll }, { 11ll, 1ll, 0ll }, { 11ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 35ll, 1ll, 0ll } } }, { (uint8*)"fb_FileOpenQB", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 6ll, { { 16ll, 2ll, 0ll }, { 11ll, 1ll, 0ll }, { 11ll, 1ll, 0ll }, { 11ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_FileClose", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 1ll, { { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_FileCloseAll", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 0ll }, { (uint8*)"fb_FilePut", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 4ll, { { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 0ll, 2ll, 0ll }, { 8ll, 1ll, 0ll } } }, { (uint8*)"fb_FilePutLarge", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 4ll, { { 10ll, 1ll, 0ll }, { 12ll, 1ll, 0ll }, { 0ll, 2ll, 0ll }, { 8ll, 1ll, 0ll } } }, { (uint8*)"fb_FilePutStr", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 4ll, { { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 0ll, 2ll, 0ll }, { 7ll, 1ll, 0ll } } }, { (uint8*)"fb_FilePutStrLarge", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 4ll, { { 10ll, 1ll, 0ll }, { 12ll, 1ll, 0ll }, { 0ll, 2ll, 0ll }, { 7ll, 1ll, 0ll } } }, { (uint8*)"fb_FilePutArray", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 0ll, 3ll, 0ll } } }, { (uint8*)"fb_FilePutArrayLarge", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, 0ll }, { 12ll, 1ll, 0ll }, { 0ll, 3ll, 0ll } } }, { (uint8*)"fb_FileGet", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 4ll, { { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 0ll, 2ll, 0ll }, { 8ll, 1ll, 0ll } } }, { (uint8*)"fb_FileGetLarge", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 4ll, { { 10ll, 1ll, 0ll }, { 12ll, 1ll, 0ll }, { 0ll, 2ll, 0ll }, { 8ll, 1ll, 0ll } } }, { (uint8*)"fb_FileGetStr", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 4ll, { { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 0ll, 2ll, 0ll }, { 7ll, 1ll, 0ll } } }, { (uint8*)"fb_FileGetStrLarge", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 4ll, { { 10ll, 1ll, 0ll }, { 12ll, 1ll, 0ll }, { 0ll, 2ll, 0ll }, { 7ll, 1ll, 0ll } } }, { (uint8*)"fb_FileGetArray", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 0ll, 3ll, 0ll } } }, { (uint8*)"fb_FileGetArrayLarge", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, 0ll }, { 12ll, 1ll, 0ll }, { 0ll, 3ll, 0ll } } }, { (uint8*)"fb_FileGetIOB", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 5ll, { { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 0ll, 2ll, 0ll }, { 8ll, 1ll, 0ll }, { 8ll, 2ll, 0ll } } }, { (uint8*)"fb_FileGetLargeIOB", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 5ll, { { 10ll, 1ll, 0ll }, { 12ll, 1ll, 0ll }, { 0ll, 2ll, 0ll }, { 8ll, 1ll, 0ll }, { 8ll, 2ll, 0ll } } }, { (uint8*)"fb_FileGetStrIOB", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 5ll, { { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 0ll, 2ll, 0ll }, { 7ll, 1ll, 0ll }, { 8ll, 2ll, 0ll } } }, { (uint8*)"fb_FileGetStrLargeIOB", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 5ll, { { 10ll, 1ll, 0ll }, { 12ll, 1ll, 0ll }, { 0ll, 2ll, 0ll }, { 7ll, 1ll, 0ll }, { 8ll, 2ll, 0ll } } }, { (uint8*)"fb_FileGetArrayIOB", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 4ll, { { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 0ll, 3ll, 0ll }, { 8ll, 2ll, 0ll } } }, { (uint8*)"fb_FileGetArrayLargeIOB", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 4ll, { { 10ll, 1ll, 0ll }, { 12ll, 1ll, 0ll }, { 0ll, 3ll, 0ll }, { 8ll, 2ll, 0ll } } }, { (uint8*)"fb_FileTell", (uint8*)0ull, 12ll, -1ll, (tmp$28)0ull, 0ll, 1ll, { { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_FileSeek", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 2ll, { { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_FileSeekLarge", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 2ll, { { 10ll, 1ll, 0ll }, { 12ll, 1ll, 0ll } } }, { (uint8*)"fb_FileStrInput", (uint8*)0ull, 16ll, -1ll, (tmp$28)0ull, 0ll, 2ll, { { 7ll, 1ll, 0ll }, { 10ll, 1ll, -1ll, 0ll } } }, { (uint8*)"fb_FileLineInput", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 4ll, { { 10ll, 1ll, 0ll }, { 0ll, 2ll, 0ll }, { 7ll, 1ll, 0ll }, { 10ll, 1ll, -1ll, 1ll } } }, { (uint8*)"fb_FileLineInputWstr", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, 0ll }, { 38ll, 1ll, 0ll }, { 7ll, 1ll, 0ll } } }, { (uint8*)"fb_LineInput", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 6ll, { { 16ll, 2ll, 0ll }, { 0ll, 2ll, 0ll }, { 7ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 10ll, 1ll, -1ll, 1ll } } }, { (uint8*)"fb_LineInputWstr", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 5ll, { { 38ll, 1ll, 0ll }, { 38ll, 1ll, 0ll }, { 7ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_FileInput", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 1ll, { { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_ConsoleInput", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 16ll, 2ll, 0ll }, { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_InputByte", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 1ll, { { 1ll, 2ll, 0ll } } }, { (uint8*)"fb_InputUbyte", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 1ll, { { 2ll, 2ll, 0ll } } }, { (uint8*)"fb_InputShort", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 1ll, { { 4ll, 2ll, 0ll } } }, { (uint8*)"fb_InputUshort", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 1ll, { { 5ll, 2ll, 0ll } } }, { (uint8*)"fb_InputInt", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 1ll, { { 10ll, 2ll, 0ll } } }, { (uint8*)"fb_InputUint", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 1ll, { { 11ll, 2ll, 0ll } } }, { (uint8*)"fb_InputLongint", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 1ll, { { 12ll, 2ll, 0ll } } }, { (uint8*)"fb_InputUlongint", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 1ll, { { 13ll, 2ll, 0ll } } }, { (uint8*)"fb_InputSingle", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 1ll, { { 14ll, 2ll, 0ll } } }, { (uint8*)"fb_InputDouble", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 1ll, { { 15ll, 2ll, 0ll } } }, { (uint8*)"fb_InputString", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 0ll, 2ll, 0ll }, { 7ll, 1ll, 0ll }, { 10ll, 1ll, -1ll, 1ll } } }, { (uint8*)"fb_InputWstr", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 2ll, { { 38ll, 1ll, 0ll }, { 7ll, 1ll, 0ll } } }, { (uint8*)"fb_FileLock", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, 0ll }, { 11ll, 1ll, 0ll }, { 11ll, 1ll, -1ll, 0ll } } }, { (uint8*)"fb_FileLockLarge", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, 0ll }, { 12ll, 1ll, 0ll }, { 12ll, 1ll, -1ll, 0ll } } }, { (uint8*)"fb_FileUnlock", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, 0ll }, { 11ll, 1ll, 0ll }, { 11ll, 1ll, -1ll, 0ll } } }, { (uint8*)"fb_FileUnlockLarge", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 3ll, { { 10ll, 1ll, 0ll }, { 12ll, 1ll, 0ll }, { 12ll, 1ll, -1ll, 0ll } } }, { (uint8*)"fb_rename", (uint8*)"rename", 10ll, 3ll, (tmp$28)0ull, 0ll, 2ll, { { 35ll, 1ll, 0ll }, { 35ll, 1ll, 0ll } } }, { (uint8*)"fb_FileWstrInput", (uint8*)0ull, 6ll, -1ll, (tmp$28)0ull, 0ll, 2ll, { { 7ll, 1ll, 0ll }, { 10ll, 1ll, -1ll, 0ll } } }, { (uint8*)"freefile", (uint8*)"fb_FileFree", 10ll, -1ll, (tmp$28)0ull, 0ll, 0ll }, { (uint8*)"eof", (uint8*)"fb_FileEof", 10ll, -1ll, (tmp$28)0ull, 0ll, 1ll, { { 10ll, 1ll, 0ll } } }, { (uint8*)"kill", (uint8*)"fb_FileKill", 10ll, -1ll, (tmp$28)0ull, 0ll, 1ll, { { 16ll, 2ll, 0ll } } }, { (uint8*)"reset", (uint8*)"fb_FileReset", 0ll, -1ll, (tmp$28)0ull, 1ll, 0ll }, { (uint8*)"reset", (uint8*)"fb_FileResetEx", 0ll, -1ll, (tmp$28)0ull, 1ll, 1ll, { { 10ll, 1ll, 0ll } } }, { (uint8*)"lof", (uint8*)"fb_FileSize", 12ll, -1ll, (tmp$28)0ull, 0ll, 1ll, { { 10ll, 1ll, 0ll } } }, { (uint8*)"loc", (uint8*)"fb_FileLocation", 12ll, -1ll, (tmp$28)0ull, 0ll, 1ll, { { 10ll, 1ll, 0ll } } }, { (uint8*)"lpos", (uint8*)"fb_LPos", 10ll, -1ll, (tmp$28)&RTLPRINTER_CB, 0ll, 1ll, { { 10ll, 1ll, 0ll } } }, { (uint8*)0ull } };
struct $5FBENV ENV$ __attribute__((common));

void RTLFILEMODINIT( void )
{
	label$10:;
	RTLADDINTRINSICPROCS( (struct $14FB_RTL_PROCDEF*)FUNCDATA$ );
	label$11:;
}

void RTLFILEMODEND( void )
{
	label$12:;
	label$13:;
}

struct $7ASTNODE* RTLFILEOPEN( struct $7ASTNODE* FILENAME$1, struct $7ASTNODE* FMODE$1, struct $7ASTNODE* FACCESS$1, struct $7ASTNODE* FLOCK$1, struct $7ASTNODE* FILENUM$1, struct $7ASTNODE* FLEN$1, struct $7ASTNODE* FENCODING$1, int64 ISFUNC$1, $10FBOPENKIND OPENKIND$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$14:;
	struct $7ASTNODE* PROC$1;
	struct $8FBSYMBOL* F$1;
	int64 DOENCODING$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	DOENCODING$1 = -1ll;
	{
		if( OPENKIND$1 != 0ll ) goto label$17;
		label$18:;
		{
			if( FENCODING$1 != (struct $7ASTNODE*)0ull ) goto label$20;
			{
				struct $8FBSYMBOL* vr$3 = RTLPROCLOOKUP( (uint8*)"fb_FileOpen", 214ll );
				F$1 = vr$3;
				DOENCODING$1 = 0ll;
			}
			goto label$19;
			label$20:;
			{
				struct $8FBSYMBOL* vr$4 = RTLPROCLOOKUP( (uint8*)"fb_FileOpenEncod", 215ll );
				F$1 = vr$4;
			}
			label$19:;
		}
		goto label$16;
		label$17:;
		if( OPENKIND$1 != 1ll ) goto label$21;
		label$22:;
		{
			struct $8FBSYMBOL* vr$6 = RTLPROCLOOKUP( (uint8*)"fb_FileOpenCons", 217ll );
			F$1 = vr$6;
		}
		goto label$16;
		label$21:;
		if( OPENKIND$1 != 2ll ) goto label$23;
		label$24:;
		{
			struct $8FBSYMBOL* vr$8 = RTLPROCLOOKUP( (uint8*)"fb_FileOpenErr", 218ll );
			F$1 = vr$8;
		}
		goto label$16;
		label$23:;
		if( OPENKIND$1 != 3ll ) goto label$25;
		label$26:;
		{
			struct $8FBSYMBOL* vr$10 = RTLPROCLOOKUP( (uint8*)"fb_FileOpenPipe", 219ll );
			F$1 = vr$10;
		}
		goto label$16;
		label$25:;
		if( OPENKIND$1 != 4ll ) goto label$27;
		label$28:;
		{
			struct $8FBSYMBOL* vr$12 = RTLPROCLOOKUP( (uint8*)"fb_FileOpenScrn", 220ll );
			F$1 = vr$12;
		}
		goto label$16;
		label$27:;
		if( OPENKIND$1 != 5ll ) goto label$29;
		label$30:;
		{
			struct $8FBSYMBOL* vr$14 = RTLPROCLOOKUP( (uint8*)"fb_FileOpenLpt", 221ll );
			F$1 = vr$14;
		}
		goto label$16;
		label$29:;
		if( OPENKIND$1 != 6ll ) goto label$31;
		label$32:;
		{
			struct $8FBSYMBOL* vr$16 = RTLPROCLOOKUP( (uint8*)"fb_FileOpenCom", 222ll );
			F$1 = vr$16;
		}
		goto label$16;
		label$31:;
		{
			struct $8FBSYMBOL* vr$17 = RTLPROCLOOKUP( (uint8*)"fb_FileOpenQB", 223ll );
			F$1 = vr$17;
			DOENCODING$1 = 0ll;
			{
				$13FB_COMPTARGET TMP$160$4;
				TMP$160$4 = *($13FB_COMPTARGET*)((uint8*)&ENV$ + 216ll);
				if( TMP$160$4 == 0ll ) goto label$36;
				label$37:;
				if( TMP$160$4 != 1ll ) goto label$35;
				label$36:;
				{
					FBADDLIB( (uint8*)"gdi32" );
					FBADDLIB( (uint8*)"winspool" );
				}
				label$35:;
				label$34:;
			}
		}
		label$33:;
		label$16:;
	}
	struct $7ASTNODE* vr$20 = ASTNEWCALL( F$1, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$20;
	struct $7ASTNODE* vr$21 = ASTNEWARG( PROC$1, FILENAME$1, 2147483648ll, -1ll );
	if( vr$21 != (struct $7ASTNODE*)0ull ) goto label$39;
	{
		goto label$15;
	}
	label$39:;
	label$38:;
	struct $7ASTNODE* vr$23 = ASTNEWARG( PROC$1, FMODE$1, 2147483648ll, -1ll );
	if( vr$23 != (struct $7ASTNODE*)0ull ) goto label$41;
	{
		goto label$15;
	}
	label$41:;
	label$40:;
	struct $7ASTNODE* vr$25 = ASTNEWARG( PROC$1, FACCESS$1, 2147483648ll, -1ll );
	if( vr$25 != (struct $7ASTNODE*)0ull ) goto label$43;
	{
		goto label$15;
	}
	label$43:;
	label$42:;
	struct $7ASTNODE* vr$27 = ASTNEWARG( PROC$1, FLOCK$1, 2147483648ll, -1ll );
	if( vr$27 != (struct $7ASTNODE*)0ull ) goto label$45;
	{
		goto label$15;
	}
	label$45:;
	label$44:;
	struct $7ASTNODE* vr$29 = ASTNEWARG( PROC$1, FILENUM$1, 2147483648ll, -1ll );
	if( vr$29 != (struct $7ASTNODE*)0ull ) goto label$47;
	{
		goto label$15;
	}
	label$47:;
	label$46:;
	struct $7ASTNODE* vr$31 = ASTNEWARG( PROC$1, FLEN$1, 2147483648ll, -1ll );
	if( vr$31 != (struct $7ASTNODE*)0ull ) goto label$49;
	{
		goto label$15;
	}
	label$49:;
	label$48:;
	if( DOENCODING$1 == 0ll ) goto label$51;
	{
		if( FENCODING$1 != (struct $7ASTNODE*)0ull ) goto label$53;
		{
			struct $7ASTNODE* vr$35 = ASTNEWCONSTI( 0ll, 35ll, (struct $8FBSYMBOL*)0ull );
			FENCODING$1 = vr$35;
		}
		label$53:;
		label$52:;
		struct $7ASTNODE* vr$36 = ASTNEWARG( PROC$1, FENCODING$1, 2147483648ll, -1ll );
		if( vr$36 != (struct $7ASTNODE*)0ull ) goto label$55;
		{
			goto label$15;
		}
		label$55:;
		label$54:;
	}
	label$51:;
	label$50:;
	if( ISFUNC$1 != 0ll ) goto label$57;
	{
		struct $7ASTNODE* vr$39 = RTLERRORCHECK( PROC$1 );
		ASTADD( vr$39 );
	}
	label$57:;
	label$56:;
	fb$result$1 = PROC$1;
	label$15:;
	return fb$result$1;
}

struct $7ASTNODE* RTLFILEOPENSHORT( struct $7ASTNODE* FILENAME$1, struct $7ASTNODE* FMODE$1, struct $7ASTNODE* FACCESS$1, struct $7ASTNODE* FLOCK$1, struct $7ASTNODE* FILENUM$1, struct $7ASTNODE* FLEN$1, int64 ISFUNC$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$58:;
	struct $7ASTNODE* PROC$1;
	struct $8FBSYMBOL* F$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	struct $8FBSYMBOL* vr$1 = RTLPROCLOOKUP( (uint8*)"fb_FileOpenShort", 216ll );
	struct $7ASTNODE* vr$2 = ASTNEWCALL( vr$1, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$2;
	struct $7ASTNODE* vr$3 = ASTNEWARG( PROC$1, FMODE$1, 2147483648ll, -1ll );
	if( vr$3 != (struct $7ASTNODE*)0ull ) goto label$61;
	{
		goto label$59;
	}
	label$61:;
	label$60:;
	struct $7ASTNODE* vr$5 = ASTNEWARG( PROC$1, FILENUM$1, 2147483648ll, -1ll );
	if( vr$5 != (struct $7ASTNODE*)0ull ) goto label$63;
	{
		goto label$59;
	}
	label$63:;
	label$62:;
	struct $7ASTNODE* vr$7 = ASTNEWARG( PROC$1, FILENAME$1, 2147483648ll, -1ll );
	if( vr$7 != (struct $7ASTNODE*)0ull ) goto label$65;
	{
		goto label$59;
	}
	label$65:;
	label$64:;
	struct $7ASTNODE* vr$9 = ASTNEWARG( PROC$1, FLEN$1, 2147483648ll, -1ll );
	if( vr$9 != (struct $7ASTNODE*)0ull ) goto label$67;
	{
		goto label$59;
	}
	label$67:;
	label$66:;
	struct $7ASTNODE* vr$11 = ASTNEWARG( PROC$1, FACCESS$1, 2147483648ll, -1ll );
	if( vr$11 != (struct $7ASTNODE*)0ull ) goto label$69;
	{
		goto label$59;
	}
	label$69:;
	label$68:;
	struct $7ASTNODE* vr$13 = ASTNEWARG( PROC$1, FLOCK$1, 2147483648ll, -1ll );
	if( vr$13 != (struct $7ASTNODE*)0ull ) goto label$71;
	{
		goto label$59;
	}
	label$71:;
	label$70:;
	if( ISFUNC$1 != 0ll ) goto label$73;
	{
		struct $7ASTNODE* vr$16 = RTLERRORCHECK( PROC$1 );
		ASTADD( vr$16 );
	}
	label$73:;
	label$72:;
	fb$result$1 = PROC$1;
	label$59:;
	return fb$result$1;
}

struct $7ASTNODE* RTLFILECLOSE( struct $7ASTNODE* FILENUM$1, int64 ISFUNC$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$74:;
	struct $7ASTNODE* PROC$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	if( FILENUM$1 == (struct $7ASTNODE*)0ull ) goto label$77;
	{
		struct $8FBSYMBOL* vr$2 = RTLPROCLOOKUP( (uint8*)"fb_FileClose", 224ll );
		struct $7ASTNODE* vr$3 = ASTNEWCALL( vr$2, (struct $7ASTNODE*)0ull );
		PROC$1 = vr$3;
		struct $7ASTNODE* vr$4 = ASTNEWARG( PROC$1, FILENUM$1, 2147483648ll, -1ll );
		if( vr$4 != (struct $7ASTNODE*)0ull ) goto label$79;
		{
			goto label$75;
		}
		label$79:;
		label$78:;
	}
	goto label$76;
	label$77:;
	{
		struct $8FBSYMBOL* vr$6 = RTLPROCLOOKUP( (uint8*)"fb_FileCloseAll", 225ll );
		struct $7ASTNODE* vr$7 = ASTNEWCALL( vr$6, (struct $7ASTNODE*)0ull );
		PROC$1 = vr$7;
	}
	label$76:;
	if( ISFUNC$1 != 0ll ) goto label$81;
	{
		struct $7ASTNODE* vr$9 = RTLERRORCHECK( PROC$1 );
		ASTADD( vr$9 );
	}
	label$81:;
	label$80:;
	fb$result$1 = PROC$1;
	label$75:;
	return fb$result$1;
}

int64 RTLFILESEEK( struct $7ASTNODE* FILENUM$1, struct $7ASTNODE* NEWPOS$1 )
{
	int64 TMP$163$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$82:;
	struct $7ASTNODE* PROC$1;
	struct $8FBSYMBOL* F$1;
	int64 POS_DTYPE$1;
	fb$result$1 = 0ll;
	POS_DTYPE$1 = *(int64*)((uint8*)NEWPOS$1 + 8ll) & 511ll;
	if( (POS_DTYPE$1 & 480ll) == 0ll ) goto label$84;
	TMP$163$1 = 22ll;
	goto label$91;
	label$84:;
	TMP$163$1 = POS_DTYPE$1 & 31ll;
	label$91:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$163$1 * 56ll)) + 8ll) != 8ll ) goto label$86;
	{
		struct $8FBSYMBOL* vr$8 = RTLPROCLOOKUP( (uint8*)"fb_FileSeekLarge", 252ll );
		F$1 = vr$8;
	}
	goto label$85;
	label$86:;
	{
		struct $8FBSYMBOL* vr$9 = RTLPROCLOOKUP( (uint8*)"fb_FileSeek", 251ll );
		F$1 = vr$9;
	}
	label$85:;
	struct $7ASTNODE* vr$10 = ASTNEWCALL( F$1, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$10;
	struct $7ASTNODE* vr$11 = ASTNEWARG( PROC$1, FILENUM$1, 2147483648ll, -1ll );
	if( vr$11 != (struct $7ASTNODE*)0ull ) goto label$88;
	{
		goto label$83;
	}
	label$88:;
	label$87:;
	struct $7ASTNODE* vr$13 = ASTNEWARG( PROC$1, NEWPOS$1, 2147483648ll, -1ll );
	if( vr$13 != (struct $7ASTNODE*)0ull ) goto label$90;
	{
		goto label$83;
	}
	label$90:;
	label$89:;
	struct $7ASTNODE* vr$15 = RTLERRORCHECK( PROC$1 );
	ASTADD( vr$15 );
	fb$result$1 = -1ll;
	label$83:;
	return fb$result$1;
}

struct $7ASTNODE* RTLFILETELL( struct $7ASTNODE* FILENUM$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$92:;
	struct $7ASTNODE* PROC$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	struct $8FBSYMBOL* vr$1 = RTLPROCLOOKUP( (uint8*)"fb_FileTell", 250ll );
	struct $7ASTNODE* vr$2 = ASTNEWCALL( vr$1, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$2;
	struct $7ASTNODE* vr$3 = ASTNEWARG( PROC$1, FILENUM$1, 2147483648ll, -1ll );
	if( vr$3 != (struct $7ASTNODE*)0ull ) goto label$95;
	{
		goto label$93;
	}
	label$95:;
	label$94:;
	fb$result$1 = PROC$1;
	label$93:;
	return fb$result$1;
}

struct $7ASTNODE* RTLFILEPUT( struct $7ASTNODE* FILENUM$1, struct $7ASTNODE* OFFSET$1, struct $7ASTNODE* SRC$1, struct $7ASTNODE* ELEMENTS$1, int64 ISFUNC$1 )
{
	int64 TMP$164$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$96:;
	struct $7ASTNODE* PROC$1;
	struct $7ASTNODE* BYTES$1;
	int64 DTYPE$1;
	int64 O_DTYPE$1;
	int64 ISSTRING$1;
	int64 ISLARGE$1;
	int64 LGT$1;
	struct $8FBSYMBOL* F$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	DTYPE$1 = *(int64*)((uint8*)SRC$1 + 8ll) & 511ll;
	int64 vr$3 = SYMBISSTRING( DTYPE$1 );
	ISSTRING$1 = vr$3;
	if( OFFSET$1 != (struct $7ASTNODE*)0ull ) goto label$99;
	{
		struct $7ASTNODE* vr$5 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		OFFSET$1 = vr$5;
	}
	label$99:;
	label$98:;
	O_DTYPE$1 = *(int64*)((uint8*)OFFSET$1 + 8ll) & 511ll;
	if( (O_DTYPE$1 & 480ll) == 0ll ) goto label$100;
	TMP$164$1 = 22ll;
	goto label$126;
	label$100:;
	TMP$164$1 = O_DTYPE$1 & 31ll;
	label$126:;
	ISLARGE$1 = (int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$164$1 * 56ll)) + 8ll) == 8ll);
	if( ISSTRING$1 == 0ll ) goto label$102;
	{
		if( ISLARGE$1 == 0ll ) goto label$104;
		{
			struct $8FBSYMBOL* vr$15 = RTLPROCLOOKUP( (uint8*)"fb_FilePutStrLarge", 229ll );
			F$1 = vr$15;
		}
		goto label$103;
		label$104:;
		{
			struct $8FBSYMBOL* vr$16 = RTLPROCLOOKUP( (uint8*)"fb_FilePutStr", 228ll );
			F$1 = vr$16;
		}
		label$103:;
	}
	goto label$101;
	label$102:;
	{
		if( ISLARGE$1 == 0ll ) goto label$106;
		{
			struct $8FBSYMBOL* vr$18 = RTLPROCLOOKUP( (uint8*)"fb_FilePutLarge", 227ll );
			F$1 = vr$18;
		}
		goto label$105;
		label$106:;
		{
			struct $8FBSYMBOL* vr$19 = RTLPROCLOOKUP( (uint8*)"fb_FilePut", 226ll );
			F$1 = vr$19;
		}
		label$105:;
	}
	label$101:;
	struct $7ASTNODE* vr$20 = ASTNEWCALL( F$1, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$20;
	struct $7ASTNODE* vr$21 = ASTNEWARG( PROC$1, FILENUM$1, 2147483648ll, -1ll );
	if( vr$21 != (struct $7ASTNODE*)0ull ) goto label$108;
	{
		goto label$97;
	}
	label$108:;
	label$107:;
	struct $7ASTNODE* vr$23 = ASTNEWARG( PROC$1, OFFSET$1, 2147483648ll, -1ll );
	if( vr$23 != (struct $7ASTNODE*)0ull ) goto label$110;
	{
		goto label$97;
	}
	label$110:;
	label$109:;
	if( ISSTRING$1 == 0ll ) goto label$112;
	{
		int64 vr$26 = RTLCALCSTRLEN( SRC$1, DTYPE$1 );
		LGT$1 = vr$26;
	}
	goto label$111;
	label$112:;
	{
		int64 vr$27 = RTLCALCEXPRLEN( SRC$1 );
		LGT$1 = vr$27;
	}
	label$111:;
	if( ELEMENTS$1 != (struct $7ASTNODE*)0ull ) goto label$114;
	{
		struct $7ASTNODE* vr$29 = ASTNEWCONSTI( LGT$1, 7ll, (struct $8FBSYMBOL*)0ull );
		BYTES$1 = vr$29;
	}
	goto label$113;
	label$114:;
	{
		struct $7ASTNODE* vr$30 = ASTNEWCONSTI( LGT$1, 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$31 = ASTNEWBOP( 30ll, ELEMENTS$1, vr$30, (struct $8FBSYMBOL*)0ull, 1ll );
		BYTES$1 = vr$31;
	}
	label$113:;
	if( (*(int64*)((uint8*)SRC$1 + 8ll) & 511ll) != 18ll ) goto label$116;
	{
		if( ((int64)*(int16*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)SRC$1 + 16ll) + 200ll) & 4ll) == 0ll ) goto label$118;
		{
			ERRREPORTPARAMWARN( *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 24ll), 3ll, (uint8*)0ull, 10ll );
		}
		label$118:;
		label$117:;
	}
	goto label$115;
	label$116:;
	if( ((*(int64*)((uint8*)SRC$1 + 8ll) & 511ll) & 480ll) == 0ll ) goto label$119;
	{
		ERRREPORTPARAMWARN( *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 24ll), 3ll, (uint8*)0ull, 29ll );
	}
	label$119:;
	label$115:;
	struct $7ASTNODE* vr$46 = ASTNEWARG( PROC$1, SRC$1, 2147483648ll, -1ll );
	if( vr$46 != (struct $7ASTNODE*)0ull ) goto label$121;
	{
		goto label$97;
	}
	label$121:;
	label$120:;
	struct $7ASTNODE* vr$48 = ASTNEWARG( PROC$1, BYTES$1, 2147483648ll, -1ll );
	if( vr$48 != (struct $7ASTNODE*)0ull ) goto label$123;
	{
		goto label$97;
	}
	label$123:;
	label$122:;
	if( ISFUNC$1 != 0ll ) goto label$125;
	{
		struct $7ASTNODE* vr$51 = RTLERRORCHECK( PROC$1 );
		ASTADD( vr$51 );
	}
	label$125:;
	label$124:;
	fb$result$1 = PROC$1;
	label$97:;
	return fb$result$1;
}

struct $7ASTNODE* RTLFILEPUTARRAY( struct $7ASTNODE* FILENUM$1, struct $7ASTNODE* OFFSET$1, struct $7ASTNODE* SRC$1, int64 ISFUNC$1 )
{
	int64 TMP$165$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$127:;
	struct $7ASTNODE* PROC$1;
	struct $8FBSYMBOL* F$1;
	int64 O_DTYPE$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	if( OFFSET$1 != (struct $7ASTNODE*)0ull ) goto label$130;
	{
		struct $7ASTNODE* vr$2 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		OFFSET$1 = vr$2;
	}
	label$130:;
	label$129:;
	O_DTYPE$1 = *(int64*)((uint8*)OFFSET$1 + 8ll) & 511ll;
	if( (O_DTYPE$1 & 480ll) == 0ll ) goto label$131;
	TMP$165$1 = 22ll;
	goto label$147;
	label$131:;
	TMP$165$1 = O_DTYPE$1 & 31ll;
	label$147:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$165$1 * 56ll)) + 8ll) != 8ll ) goto label$133;
	{
		struct $8FBSYMBOL* vr$10 = RTLPROCLOOKUP( (uint8*)"fb_FilePutArrayLarge", 233ll );
		F$1 = vr$10;
	}
	goto label$132;
	label$133:;
	{
		struct $8FBSYMBOL* vr$11 = RTLPROCLOOKUP( (uint8*)"fb_FilePutArray", 232ll );
		F$1 = vr$11;
	}
	label$132:;
	struct $7ASTNODE* vr$12 = ASTNEWCALL( F$1, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$12;
	struct $7ASTNODE* vr$13 = ASTNEWARG( PROC$1, FILENUM$1, 2147483648ll, -1ll );
	if( vr$13 != (struct $7ASTNODE*)0ull ) goto label$135;
	{
		goto label$128;
	}
	label$135:;
	label$134:;
	struct $7ASTNODE* vr$15 = ASTNEWARG( PROC$1, OFFSET$1, 2147483648ll, -1ll );
	if( vr$15 != (struct $7ASTNODE*)0ull ) goto label$137;
	{
		goto label$128;
	}
	label$137:;
	label$136:;
	if( (*(int64*)((uint8*)SRC$1 + 8ll) & 511ll) != 18ll ) goto label$139;
	{
		if( ((int64)*(int16*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)SRC$1 + 16ll) + 200ll) & 4ll) == 0ll ) goto label$141;
		{
			ERRREPORTPARAMWARN( *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 24ll), 3ll, (uint8*)0ull, 10ll );
		}
		label$141:;
		label$140:;
	}
	goto label$138;
	label$139:;
	if( ((*(int64*)((uint8*)SRC$1 + 8ll) & 511ll) & 480ll) == 0ll ) goto label$142;
	{
		ERRREPORTPARAMWARN( *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 24ll), 3ll, (uint8*)0ull, 29ll );
	}
	label$142:;
	label$138:;
	struct $7ASTNODE* vr$31 = ASTNEWARG( PROC$1, SRC$1, 2147483648ll, -1ll );
	if( vr$31 != (struct $7ASTNODE*)0ull ) goto label$144;
	{
		goto label$128;
	}
	label$144:;
	label$143:;
	if( ISFUNC$1 != 0ll ) goto label$146;
	{
		struct $7ASTNODE* vr$34 = RTLERRORCHECK( PROC$1 );
		ASTADD( vr$34 );
	}
	label$146:;
	label$145:;
	fb$result$1 = PROC$1;
	label$128:;
	return fb$result$1;
}

struct $7ASTNODE* RTLFILEGET( struct $7ASTNODE* FILENUM$1, struct $7ASTNODE* OFFSET$1, struct $7ASTNODE* DST$1, struct $7ASTNODE* ELEMENTS$1, struct $7ASTNODE* IOBYTES$1, int64 ISFUNC$1 )
{
	int64 TMP$166$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$148:;
	struct $7ASTNODE* PROC$1;
	struct $7ASTNODE* BYTES$1;
	int64 DTYPE$1;
	int64 O_DTYPE$1;
	int64 ISSTRING$1;
	int64 ISLARGE$1;
	int64 LGT$1;
	struct $8FBSYMBOL* F$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	DTYPE$1 = *(int64*)((uint8*)DST$1 + 8ll) & 511ll;
	int64 vr$3 = SYMBISSTRING( DTYPE$1 );
	ISSTRING$1 = vr$3;
	if( OFFSET$1 != (struct $7ASTNODE*)0ull ) goto label$151;
	{
		struct $7ASTNODE* vr$5 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		OFFSET$1 = vr$5;
	}
	label$151:;
	label$150:;
	O_DTYPE$1 = *(int64*)((uint8*)OFFSET$1 + 8ll) & 511ll;
	if( (O_DTYPE$1 & 480ll) == 0ll ) goto label$152;
	TMP$166$1 = 22ll;
	goto label$190;
	label$152:;
	TMP$166$1 = O_DTYPE$1 & 31ll;
	label$190:;
	ISLARGE$1 = (int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$166$1 * 56ll)) + 8ll) == 8ll);
	if( IOBYTES$1 == (struct $7ASTNODE*)0ull ) goto label$154;
	{
		if( ISSTRING$1 == 0ll ) goto label$156;
		{
			if( ISLARGE$1 == 0ll ) goto label$158;
			{
				struct $8FBSYMBOL* vr$16 = RTLPROCLOOKUP( (uint8*)"fb_FileGetStrLargeIOB", 245ll );
				F$1 = vr$16;
			}
			goto label$157;
			label$158:;
			{
				struct $8FBSYMBOL* vr$17 = RTLPROCLOOKUP( (uint8*)"fb_FileGetStrIOB", 244ll );
				F$1 = vr$17;
			}
			label$157:;
		}
		goto label$155;
		label$156:;
		{
			if( ISLARGE$1 == 0ll ) goto label$160;
			{
				struct $8FBSYMBOL* vr$19 = RTLPROCLOOKUP( (uint8*)"fb_FileGetLargeIOB", 243ll );
				F$1 = vr$19;
			}
			goto label$159;
			label$160:;
			{
				struct $8FBSYMBOL* vr$20 = RTLPROCLOOKUP( (uint8*)"fb_FileGetIOB", 242ll );
				F$1 = vr$20;
			}
			label$159:;
		}
		label$155:;
	}
	goto label$153;
	label$154:;
	{
		if( ISSTRING$1 == 0ll ) goto label$162;
		{
			if( ISLARGE$1 == 0ll ) goto label$164;
			{
				struct $8FBSYMBOL* vr$23 = RTLPROCLOOKUP( (uint8*)"fb_FileGetStrLarge", 237ll );
				F$1 = vr$23;
			}
			goto label$163;
			label$164:;
			{
				struct $8FBSYMBOL* vr$24 = RTLPROCLOOKUP( (uint8*)"fb_FileGetStr", 236ll );
				F$1 = vr$24;
			}
			label$163:;
		}
		goto label$161;
		label$162:;
		{
			if( ISLARGE$1 == 0ll ) goto label$166;
			{
				struct $8FBSYMBOL* vr$26 = RTLPROCLOOKUP( (uint8*)"fb_FileGetLarge", 235ll );
				F$1 = vr$26;
			}
			goto label$165;
			label$166:;
			{
				struct $8FBSYMBOL* vr$27 = RTLPROCLOOKUP( (uint8*)"fb_FileGet", 234ll );
				F$1 = vr$27;
			}
			label$165:;
		}
		label$161:;
	}
	label$153:;
	struct $7ASTNODE* vr$28 = ASTNEWCALL( F$1, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$28;
	struct $7ASTNODE* vr$29 = ASTNEWARG( PROC$1, FILENUM$1, 2147483648ll, -1ll );
	if( vr$29 != (struct $7ASTNODE*)0ull ) goto label$168;
	{
		goto label$149;
	}
	label$168:;
	label$167:;
	struct $7ASTNODE* vr$31 = ASTNEWARG( PROC$1, OFFSET$1, 2147483648ll, -1ll );
	if( vr$31 != (struct $7ASTNODE*)0ull ) goto label$170;
	{
		goto label$149;
	}
	label$170:;
	label$169:;
	if( ISSTRING$1 == 0ll ) goto label$172;
	{
		int64 vr$34 = RTLCALCSTRLEN( DST$1, DTYPE$1 );
		LGT$1 = vr$34;
	}
	goto label$171;
	label$172:;
	{
		int64 vr$35 = RTLCALCEXPRLEN( DST$1 );
		LGT$1 = vr$35;
	}
	label$171:;
	if( ELEMENTS$1 != (struct $7ASTNODE*)0ull ) goto label$174;
	{
		struct $7ASTNODE* vr$37 = ASTNEWCONSTI( LGT$1, 7ll, (struct $8FBSYMBOL*)0ull );
		BYTES$1 = vr$37;
	}
	goto label$173;
	label$174:;
	{
		struct $7ASTNODE* vr$38 = ASTNEWCONSTI( LGT$1, 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$39 = ASTNEWBOP( 30ll, ELEMENTS$1, vr$38, (struct $8FBSYMBOL*)0ull, 1ll );
		BYTES$1 = vr$39;
	}
	label$173:;
	if( DTYPE$1 != 18ll ) goto label$176;
	{
		if( ((int64)*(int16*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)DST$1 + 16ll) + 200ll) & 4ll) == 0ll ) goto label$178;
		{
			ERRREPORTPARAMWARN( *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 24ll), 3ll, (uint8*)0ull, 10ll );
		}
		label$178:;
		label$177:;
	}
	goto label$175;
	label$176:;
	if( ((*(int64*)((uint8*)DST$1 + 8ll) & 511ll) & 480ll) == 0ll ) goto label$179;
	{
		ERRREPORTPARAMWARN( *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 24ll), 3ll, (uint8*)0ull, 29ll );
	}
	label$179:;
	label$175:;
	struct $7ASTNODE* vr$52 = ASTNEWARG( PROC$1, DST$1, 2147483648ll, -1ll );
	if( vr$52 != (struct $7ASTNODE*)0ull ) goto label$181;
	{
		goto label$149;
	}
	label$181:;
	label$180:;
	struct $7ASTNODE* vr$54 = ASTNEWARG( PROC$1, BYTES$1, 2147483648ll, -1ll );
	if( vr$54 != (struct $7ASTNODE*)0ull ) goto label$183;
	{
		goto label$149;
	}
	label$183:;
	label$182:;
	if( IOBYTES$1 == (struct $7ASTNODE*)0ull ) goto label$185;
	{
		struct $7ASTNODE* vr$57 = ASTNEWARG( PROC$1, IOBYTES$1, 2147483648ll, -1ll );
		if( vr$57 != (struct $7ASTNODE*)0ull ) goto label$187;
		{
			goto label$149;
		}
		label$187:;
		label$186:;
	}
	label$185:;
	label$184:;
	if( ISFUNC$1 != 0ll ) goto label$189;
	{
		struct $7ASTNODE* vr$60 = RTLERRORCHECK( PROC$1 );
		ASTADD( vr$60 );
	}
	label$189:;
	label$188:;
	fb$result$1 = PROC$1;
	label$149:;
	return fb$result$1;
}

struct $7ASTNODE* RTLFILEGETARRAY( struct $7ASTNODE* FILENUM$1, struct $7ASTNODE* OFFSET$1, struct $7ASTNODE* DST$1, struct $7ASTNODE* IOBYTES$1, int64 ISFUNC$1 )
{
	int64 TMP$167$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$191:;
	struct $7ASTNODE* PROC$1;
	struct $8FBSYMBOL* F$1;
	int64 O_DTYPE$1;
	int64 ISLARGE$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	if( OFFSET$1 != (struct $7ASTNODE*)0ull ) goto label$194;
	{
		struct $7ASTNODE* vr$2 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		OFFSET$1 = vr$2;
	}
	label$194:;
	label$193:;
	O_DTYPE$1 = *(int64*)((uint8*)OFFSET$1 + 8ll) & 511ll;
	if( (O_DTYPE$1 & 480ll) == 0ll ) goto label$195;
	TMP$167$1 = 22ll;
	goto label$219;
	label$195:;
	TMP$167$1 = O_DTYPE$1 & 31ll;
	label$219:;
	ISLARGE$1 = (int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$167$1 * 56ll)) + 8ll) == 8ll);
	if( IOBYTES$1 == (struct $7ASTNODE*)0ull ) goto label$197;
	{
		if( ISLARGE$1 == 0ll ) goto label$199;
		{
			struct $8FBSYMBOL* vr$12 = RTLPROCLOOKUP( (uint8*)"fb_FileGetArrayLargeIOB", 249ll );
			F$1 = vr$12;
		}
		goto label$198;
		label$199:;
		{
			struct $8FBSYMBOL* vr$13 = RTLPROCLOOKUP( (uint8*)"fb_FileGetArrayIOB", 248ll );
			F$1 = vr$13;
		}
		label$198:;
	}
	goto label$196;
	label$197:;
	{
		if( ISLARGE$1 == 0ll ) goto label$201;
		{
			struct $8FBSYMBOL* vr$15 = RTLPROCLOOKUP( (uint8*)"fb_FileGetArrayLarge", 241ll );
			F$1 = vr$15;
		}
		goto label$200;
		label$201:;
		{
			struct $8FBSYMBOL* vr$16 = RTLPROCLOOKUP( (uint8*)"fb_FileGetArray", 240ll );
			F$1 = vr$16;
		}
		label$200:;
	}
	label$196:;
	struct $7ASTNODE* vr$17 = ASTNEWCALL( F$1, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$17;
	struct $7ASTNODE* vr$18 = ASTNEWARG( PROC$1, FILENUM$1, 2147483648ll, -1ll );
	if( vr$18 != (struct $7ASTNODE*)0ull ) goto label$203;
	{
		goto label$192;
	}
	label$203:;
	label$202:;
	struct $7ASTNODE* vr$20 = ASTNEWARG( PROC$1, OFFSET$1, 2147483648ll, -1ll );
	if( vr$20 != (struct $7ASTNODE*)0ull ) goto label$205;
	{
		goto label$192;
	}
	label$205:;
	label$204:;
	if( (*(int64*)((uint8*)DST$1 + 8ll) & 511ll) != 18ll ) goto label$207;
	{
		if( ((int64)*(int16*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)DST$1 + 16ll) + 200ll) & 4ll) == 0ll ) goto label$209;
		{
			ERRREPORTPARAMWARN( *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 24ll), 3ll, (uint8*)0ull, 10ll );
		}
		label$209:;
		label$208:;
	}
	goto label$206;
	label$207:;
	if( ((*(int64*)((uint8*)DST$1 + 8ll) & 511ll) & 480ll) == 0ll ) goto label$210;
	{
		ERRREPORTPARAMWARN( *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 24ll), 3ll, (uint8*)0ull, 29ll );
	}
	label$210:;
	label$206:;
	struct $7ASTNODE* vr$36 = ASTNEWARG( PROC$1, DST$1, 2147483648ll, -1ll );
	if( vr$36 != (struct $7ASTNODE*)0ull ) goto label$212;
	{
		goto label$192;
	}
	label$212:;
	label$211:;
	if( IOBYTES$1 == (struct $7ASTNODE*)0ull ) goto label$214;
	{
		struct $7ASTNODE* vr$39 = ASTNEWARG( PROC$1, IOBYTES$1, 2147483648ll, -1ll );
		if( vr$39 != (struct $7ASTNODE*)0ull ) goto label$216;
		{
			goto label$192;
		}
		label$216:;
		label$215:;
	}
	label$214:;
	label$213:;
	if( ISFUNC$1 != 0ll ) goto label$218;
	{
		struct $7ASTNODE* vr$42 = RTLERRORCHECK( PROC$1 );
		ASTADD( vr$42 );
	}
	label$218:;
	label$217:;
	fb$result$1 = PROC$1;
	label$192:;
	return fb$result$1;
}

struct $7ASTNODE* RTLFILESTRINPUT( struct $7ASTNODE* BYTESEXPR$1, struct $7ASTNODE* FILENUM$1, int64 TK$1 )
{
	struct $8FBSYMBOL* TMP$168$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$220:;
	struct $7ASTNODE* PROC$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	if( TK$1 != 475ll ) goto label$222;
	struct $8FBSYMBOL* vr$2 = RTLPROCLOOKUP( (uint8*)"fb_FileWstrInput", 254ll );
	TMP$168$1 = vr$2;
	goto label$227;
	label$222:;
	struct $8FBSYMBOL* vr$3 = RTLPROCLOOKUP( (uint8*)"fb_FileStrInput", 253ll );
	TMP$168$1 = vr$3;
	label$227:;
	struct $7ASTNODE* vr$4 = ASTNEWCALL( TMP$168$1, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$4;
	struct $7ASTNODE* vr$5 = ASTNEWARG( PROC$1, BYTESEXPR$1, 2147483648ll, -1ll );
	if( vr$5 != (struct $7ASTNODE*)0ull ) goto label$224;
	{
		goto label$221;
	}
	label$224:;
	label$223:;
	struct $7ASTNODE* vr$7 = ASTNEWARG( PROC$1, FILENUM$1, 2147483648ll, -1ll );
	if( vr$7 != (struct $7ASTNODE*)0ull ) goto label$226;
	{
		goto label$221;
	}
	label$226:;
	label$225:;
	fb$result$1 = PROC$1;
	label$221:;
	return fb$result$1;
}

int64 RTLFILELINEINPUT( int64 ISFILE$1, struct $7ASTNODE* EXPR$1, struct $7ASTNODE* DSTEXPR$1, int64 ADDQUESTION$1, int64 ADDNEWLINE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$228:;
	struct $7ASTNODE* PROC$1;
	struct $8FBSYMBOL* F$1;
	int64 ARGS$1;
	int64 DTYPE$1;
	int64 LGT$1;
	fb$result$1 = 0ll;
	if( ISFILE$1 == 0ll ) goto label$231;
	{
		struct $8FBSYMBOL* vr$2 = RTLPROCLOOKUP( (uint8*)"fb_FileLineInput", 255ll );
		F$1 = vr$2;
		ARGS$1 = 4ll;
	}
	goto label$230;
	label$231:;
	{
		struct $8FBSYMBOL* vr$3 = RTLPROCLOOKUP( (uint8*)"fb_LineInput", 257ll );
		F$1 = vr$3;
		ARGS$1 = 6ll;
	}
	label$230:;
	struct $7ASTNODE* vr$4 = ASTNEWCALL( F$1, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$4;
	if( ((int64)-(ISFILE$1 == 0ll) & (int64)-(EXPR$1 == (struct $7ASTNODE*)0ull)) == 0ll ) goto label$233;
	{
		struct $8FBSYMBOL* vr$9 = SYMBALLOCSTRCONST( (uint8*)"", 0ll );
		struct $7ASTNODE* vr$10 = ASTNEWVAR( vr$9, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		EXPR$1 = vr$10;
	}
	label$233:;
	label$232:;
	struct $7ASTNODE* vr$11 = ASTNEWARG( PROC$1, EXPR$1, 2147483648ll, -1ll );
	if( vr$11 != (struct $7ASTNODE*)0ull ) goto label$235;
	{
		goto label$229;
	}
	label$235:;
	label$234:;
	DTYPE$1 = *(int64*)((uint8*)DSTEXPR$1 + 8ll) & 511ll;
	int64 vr$15 = RTLCALCSTRLEN( DSTEXPR$1, DTYPE$1 );
	LGT$1 = vr$15;
	struct $7ASTNODE* vr$16 = ASTNEWARG( PROC$1, DSTEXPR$1, 2147483648ll, -1ll );
	if( vr$16 != (struct $7ASTNODE*)0ull ) goto label$237;
	{
		goto label$229;
	}
	label$237:;
	label$236:;
	struct $7ASTNODE* vr$18 = ASTNEWCONSTI( LGT$1, 7ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$19 = ASTNEWARG( PROC$1, vr$18, 2147483648ll, -1ll );
	if( vr$19 != (struct $7ASTNODE*)0ull ) goto label$239;
	{
		goto label$229;
	}
	label$239:;
	label$238:;
	struct $7ASTNODE* vr$22 = ASTNEWCONSTI( (int64)-(DTYPE$1 == 17ll), 7ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$23 = ASTNEWARG( PROC$1, vr$22, 2147483648ll, -1ll );
	if( vr$23 != (struct $7ASTNODE*)0ull ) goto label$241;
	{
		goto label$229;
	}
	label$241:;
	label$240:;
	if( ARGS$1 != 6ll ) goto label$243;
	{
		struct $7ASTNODE* vr$26 = ASTNEWCONSTI( ADDQUESTION$1, 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$27 = ASTNEWARG( PROC$1, vr$26, 2147483648ll, -1ll );
		if( vr$27 != (struct $7ASTNODE*)0ull ) goto label$245;
		{
			goto label$229;
		}
		label$245:;
		label$244:;
		struct $7ASTNODE* vr$29 = ASTNEWCONSTI( ADDNEWLINE$1, 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$30 = ASTNEWARG( PROC$1, vr$29, 2147483648ll, -1ll );
		if( vr$30 != (struct $7ASTNODE*)0ull ) goto label$247;
		{
			goto label$229;
		}
		label$247:;
		label$246:;
	}
	label$243:;
	label$242:;
	ASTADD( PROC$1 );
	fb$result$1 = -1ll;
	label$229:;
	return fb$result$1;
}

int64 RTLFILELINEINPUTWSTR( int64 ISFILE$1, struct $7ASTNODE* EXPR$1, struct $7ASTNODE* DSTEXPR$1, int64 ADDQUESTION$1, int64 ADDNEWLINE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$248:;
	struct $7ASTNODE* PROC$1;
	struct $8FBSYMBOL* F$1;
	int64 ARGS$1;
	int64 DTYPE$1;
	int64 LGT$1;
	fb$result$1 = 0ll;
	if( ISFILE$1 == 0ll ) goto label$251;
	{
		struct $8FBSYMBOL* vr$2 = RTLPROCLOOKUP( (uint8*)"fb_FileLineInputWstr", 256ll );
		F$1 = vr$2;
		ARGS$1 = 3ll;
	}
	goto label$250;
	label$251:;
	{
		struct $8FBSYMBOL* vr$3 = RTLPROCLOOKUP( (uint8*)"fb_LineInputWstr", 258ll );
		F$1 = vr$3;
		ARGS$1 = 5ll;
	}
	label$250:;
	struct $7ASTNODE* vr$4 = ASTNEWCALL( F$1, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$4;
	if( ((int64)-(ISFILE$1 == 0ll) & (int64)-(EXPR$1 == (struct $7ASTNODE*)0ull)) == 0ll ) goto label$253;
	{
		struct $8FBSYMBOL* vr$9 = SYMBALLOCWSTRCONST( (uint32*)L"", 0ll );
		struct $7ASTNODE* vr$10 = ASTNEWVAR( vr$9, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		EXPR$1 = vr$10;
	}
	label$253:;
	label$252:;
	struct $7ASTNODE* vr$11 = ASTNEWARG( PROC$1, EXPR$1, 2147483648ll, -1ll );
	if( vr$11 != (struct $7ASTNODE*)0ull ) goto label$255;
	{
		goto label$249;
	}
	label$255:;
	label$254:;
	DTYPE$1 = *(int64*)((uint8*)DSTEXPR$1 + 8ll) & 511ll;
	int64 vr$15 = RTLCALCSTRLEN( DSTEXPR$1, DTYPE$1 );
	LGT$1 = vr$15;
	struct $7ASTNODE* vr$16 = ASTNEWARG( PROC$1, DSTEXPR$1, 2147483648ll, -1ll );
	if( vr$16 != (struct $7ASTNODE*)0ull ) goto label$257;
	{
		goto label$249;
	}
	label$257:;
	label$256:;
	struct $7ASTNODE* vr$18 = ASTNEWCONSTI( LGT$1, 7ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$19 = ASTNEWARG( PROC$1, vr$18, 2147483648ll, -1ll );
	if( vr$19 != (struct $7ASTNODE*)0ull ) goto label$259;
	{
		goto label$249;
	}
	label$259:;
	label$258:;
	if( ARGS$1 != 5ll ) goto label$261;
	{
		struct $7ASTNODE* vr$22 = ASTNEWCONSTI( ADDQUESTION$1, 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$23 = ASTNEWARG( PROC$1, vr$22, 2147483648ll, -1ll );
		if( vr$23 != (struct $7ASTNODE*)0ull ) goto label$263;
		{
			goto label$249;
		}
		label$263:;
		label$262:;
		struct $7ASTNODE* vr$25 = ASTNEWCONSTI( ADDNEWLINE$1, 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$26 = ASTNEWARG( PROC$1, vr$25, 2147483648ll, -1ll );
		if( vr$26 != (struct $7ASTNODE*)0ull ) goto label$265;
		{
			goto label$249;
		}
		label$265:;
		label$264:;
	}
	label$261:;
	label$260:;
	ASTADD( PROC$1 );
	fb$result$1 = -1ll;
	label$249:;
	return fb$result$1;
}

int64 RTLFILEINPUT( int64 ISFILE$1, struct $7ASTNODE* EXPR$1, int64 ADDQUESTION$1, int64 ADDNEWLINE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$266:;
	struct $7ASTNODE* PROC$1;
	struct $8FBSYMBOL* F$1;
	int64 ARGS$1;
	fb$result$1 = 0ll;
	if( ISFILE$1 == 0ll ) goto label$269;
	{
		struct $8FBSYMBOL* vr$2 = RTLPROCLOOKUP( (uint8*)"fb_FileInput", 259ll );
		F$1 = vr$2;
		ARGS$1 = 1ll;
	}
	goto label$268;
	label$269:;
	{
		struct $8FBSYMBOL* vr$3 = RTLPROCLOOKUP( (uint8*)"fb_ConsoleInput", 260ll );
		F$1 = vr$3;
		ARGS$1 = 3ll;
	}
	label$268:;
	struct $7ASTNODE* vr$4 = ASTNEWCALL( F$1, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$4;
	if( ((int64)-(ISFILE$1 == 0ll) & (int64)-(EXPR$1 == (struct $7ASTNODE*)0ull)) == 0ll ) goto label$271;
	{
		struct $8FBSYMBOL* vr$9 = SYMBALLOCSTRCONST( (uint8*)"", 0ll );
		struct $7ASTNODE* vr$10 = ASTNEWVAR( vr$9, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		EXPR$1 = vr$10;
	}
	label$271:;
	label$270:;
	struct $7ASTNODE* vr$11 = ASTNEWARG( PROC$1, EXPR$1, 2147483648ll, -1ll );
	if( vr$11 != (struct $7ASTNODE*)0ull ) goto label$273;
	{
		goto label$267;
	}
	label$273:;
	label$272:;
	if( ARGS$1 != 3ll ) goto label$275;
	{
		struct $7ASTNODE* vr$14 = ASTNEWCONSTI( ADDQUESTION$1, 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$15 = ASTNEWARG( PROC$1, vr$14, 2147483648ll, -1ll );
		if( vr$15 != (struct $7ASTNODE*)0ull ) goto label$277;
		{
			goto label$267;
		}
		label$277:;
		label$276:;
		struct $7ASTNODE* vr$17 = ASTNEWCONSTI( ADDNEWLINE$1, 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$18 = ASTNEWARG( PROC$1, vr$17, 2147483648ll, -1ll );
		if( vr$18 != (struct $7ASTNODE*)0ull ) goto label$279;
		{
			goto label$267;
		}
		label$279:;
		label$278:;
	}
	label$275:;
	label$274:;
	ASTADD( PROC$1 );
	fb$result$1 = -1ll;
	label$267:;
	return fb$result$1;
}

int64 RTLFILEINPUTGET( struct $7ASTNODE* DSTEXPR$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$280:;
	struct $7ASTNODE* PROC$1;
	struct $8FBSYMBOL* F$1;
	int64 ARGS$1;
	int64 DTYPE$1;
	int64 LGT$1;
	fb$result$1 = 0ll;
	ARGS$1 = 1ll;
	DTYPE$1 = *(int64*)((uint8*)DSTEXPR$1 + 8ll) & 511ll;
	{
		int64 TMP$170$2;
		uint64 TMP$171$2;
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$282;
		TMP$170$2 = 22ll;
		goto label$314;
		label$282:;
		TMP$170$2 = DTYPE$1 & 31ll;
		label$314:;
		TMP$171$2 = (uint64)TMP$170$2;
		goto label$284;
		label$285:;
		{
			struct $8FBSYMBOL* vr$6 = RTLPROCLOOKUP( (uint8*)"fb_InputString", 271ll );
			F$1 = vr$6;
			ARGS$1 = 3ll;
		}
		goto label$283;
		label$286:;
		{
			struct $8FBSYMBOL* vr$7 = RTLPROCLOOKUP( (uint8*)"fb_InputWstr", 272ll );
			F$1 = vr$7;
			ARGS$1 = 2ll;
		}
		goto label$283;
		label$287:;
		{
			{
				int64 TMP$172$4;
				uint64 TMP$173$4;
				if( (DTYPE$1 & 480ll) == 0ll ) goto label$288;
				TMP$172$4 = 22ll;
				goto label$315;
				label$288:;
				TMP$172$4 = DTYPE$1 & 31ll;
				label$315:;
				TMP$173$4 = *(uint64*)(((uint8*)SYMB_DTYPETB$ + (TMP$172$4 * 56ll)) + 40ll);
				goto label$290;
				label$291:;
				{
					struct $8FBSYMBOL* vr$12 = RTLPROCLOOKUP( (uint8*)"fb_InputByte", 261ll );
					F$1 = vr$12;
				}
				goto label$289;
				label$292:;
				{
					struct $8FBSYMBOL* vr$13 = RTLPROCLOOKUP( (uint8*)"fb_InputUbyte", 262ll );
					F$1 = vr$13;
				}
				goto label$289;
				label$293:;
				{
					struct $8FBSYMBOL* vr$14 = RTLPROCLOOKUP( (uint8*)"fb_InputShort", 263ll );
					F$1 = vr$14;
				}
				goto label$289;
				label$294:;
				{
					struct $8FBSYMBOL* vr$15 = RTLPROCLOOKUP( (uint8*)"fb_InputUshort", 264ll );
					F$1 = vr$15;
				}
				goto label$289;
				label$295:;
				{
					struct $8FBSYMBOL* vr$16 = RTLPROCLOOKUP( (uint8*)"fb_InputInt", 265ll );
					F$1 = vr$16;
				}
				goto label$289;
				label$296:;
				{
					struct $8FBSYMBOL* vr$17 = RTLPROCLOOKUP( (uint8*)"fb_InputUint", 266ll );
					F$1 = vr$17;
				}
				goto label$289;
				label$297:;
				{
					struct $8FBSYMBOL* vr$18 = RTLPROCLOOKUP( (uint8*)"fb_InputLongint", 267ll );
					F$1 = vr$18;
				}
				goto label$289;
				label$298:;
				{
					struct $8FBSYMBOL* vr$19 = RTLPROCLOOKUP( (uint8*)"fb_InputUlongint", 268ll );
					F$1 = vr$19;
				}
				goto label$289;
				label$290:;
				static const void* tmp$174[8ll] = {
					&&label$291,
					&&label$292,
					&&label$293,
					&&label$294,
					&&label$295,
					&&label$296,
					&&label$297,
					&&label$298,
				};
				if( TMP$173$4 > 7ll ) goto label$289;
				goto *tmp$174[TMP$173$4 - 0ll];
				label$289:;
			}
		}
		goto label$283;
		label$299:;
		{
			struct $8FBSYMBOL* vr$20 = RTLPROCLOOKUP( (uint8*)"fb_InputSingle", 269ll );
			F$1 = vr$20;
		}
		goto label$283;
		label$300:;
		{
			struct $8FBSYMBOL* vr$21 = RTLPROCLOOKUP( (uint8*)"fb_InputDouble", 270ll );
			F$1 = vr$21;
		}
		goto label$283;
		label$301:;
		{
			ERRREPORT( 24ll, 0ll, (uint8*)0ull );
			goto label$281;
		}
		goto label$283;
		label$284:;
		static const void* tmp$175[22ll] = {
			&&label$287,
			&&label$287,
			&&label$285,
			&&label$287,
			&&label$287,
			&&label$286,
			&&label$287,
			&&label$287,
			&&label$287,
			&&label$287,
			&&label$287,
			&&label$287,
			&&label$287,
			&&label$299,
			&&label$300,
			&&label$285,
			&&label$285,
			&&label$301,
			&&label$301,
			&&label$301,
			&&label$301,
			&&label$287,
		};
		if( TMP$171$2 < 1ll ) goto label$301;
		if( TMP$171$2 > 22ll ) goto label$301;
		goto *tmp$175[TMP$171$2 - 1ll];
		label$283:;
	}
	struct $7ASTNODE* vr$22 = ASTNEWCALL( F$1, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$22;
	if( ARGS$1 <= 1ll ) goto label$303;
	{
		int64 vr$24 = RTLCALCSTRLEN( DSTEXPR$1, DTYPE$1 );
		LGT$1 = vr$24;
	}
	label$303:;
	label$302:;
	struct $7ASTNODE* vr$25 = ASTNEWARG( PROC$1, DSTEXPR$1, 2147483648ll, -1ll );
	if( vr$25 != (struct $7ASTNODE*)0ull ) goto label$305;
	{
		goto label$281;
	}
	label$305:;
	label$304:;
	if( ARGS$1 <= 1ll ) goto label$307;
	{
		struct $7ASTNODE* vr$28 = ASTNEWCONSTI( LGT$1, 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$29 = ASTNEWARG( PROC$1, vr$28, 2147483648ll, -1ll );
		if( vr$29 != (struct $7ASTNODE*)0ull ) goto label$309;
		{
			goto label$281;
		}
		label$309:;
		label$308:;
		if( ARGS$1 <= 2ll ) goto label$311;
		{
			struct $7ASTNODE* vr$33 = ASTNEWCONSTI( (int64)-(DTYPE$1 == 17ll), 7ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$34 = ASTNEWARG( PROC$1, vr$33, 2147483648ll, -1ll );
			if( vr$34 != (struct $7ASTNODE*)0ull ) goto label$313;
			{
				goto label$281;
			}
			label$313:;
			label$312:;
		}
		label$311:;
		label$310:;
	}
	label$307:;
	label$306:;
	ASTADD( PROC$1 );
	fb$result$1 = -1ll;
	label$281:;
	return fb$result$1;
}

int64 RTLFILELOCK( int64 ISLOCK$1, struct $7ASTNODE* FILENUM$1, struct $7ASTNODE* INIEXPR$1, struct $7ASTNODE* ENDEXPR$1 )
{
	int64 TMP$176$1;
	int64 TMP$177$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$316:;
	struct $7ASTNODE* PROC$1;
	struct $8FBSYMBOL* F$1;
	int64 ISLARGE$1;
	int64 I_DTYPE$1;
	int64 E_DTYPE$1;
	fb$result$1 = 0ll;
	I_DTYPE$1 = *(int64*)((uint8*)INIEXPR$1 + 8ll) & 511ll;
	E_DTYPE$1 = *(int64*)((uint8*)ENDEXPR$1 + 8ll) & 511ll;
	if( (I_DTYPE$1 & 480ll) == 0ll ) goto label$318;
	TMP$176$1 = 22ll;
	goto label$332;
	label$318:;
	TMP$176$1 = I_DTYPE$1 & 31ll;
	label$332:;
	if( (E_DTYPE$1 & 480ll) == 0ll ) goto label$319;
	TMP$177$1 = 22ll;
	goto label$333;
	label$319:;
	TMP$177$1 = E_DTYPE$1 & 31ll;
	label$333:;
	ISLARGE$1 = (int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$176$1 * 56ll)) + 8ll) == 8ll) | (int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$177$1 * 56ll)) + 8ll) == 8ll);
	if( ISLOCK$1 == 0ll ) goto label$321;
	{
		if( ISLARGE$1 == 0ll ) goto label$323;
		{
			struct $8FBSYMBOL* vr$18 = RTLPROCLOOKUP( (uint8*)"fb_FileLockLarge", 274ll );
			F$1 = vr$18;
		}
		goto label$322;
		label$323:;
		{
			struct $8FBSYMBOL* vr$19 = RTLPROCLOOKUP( (uint8*)"fb_FileLock", 273ll );
			F$1 = vr$19;
		}
		label$322:;
	}
	goto label$320;
	label$321:;
	{
		if( ISLARGE$1 == 0ll ) goto label$325;
		{
			struct $8FBSYMBOL* vr$21 = RTLPROCLOOKUP( (uint8*)"fb_FileUnlockLarge", 276ll );
			F$1 = vr$21;
		}
		goto label$324;
		label$325:;
		{
			struct $8FBSYMBOL* vr$22 = RTLPROCLOOKUP( (uint8*)"fb_FileUnlock", 275ll );
			F$1 = vr$22;
		}
		label$324:;
	}
	label$320:;
	struct $7ASTNODE* vr$23 = ASTNEWCALL( F$1, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$23;
	struct $7ASTNODE* vr$24 = ASTNEWARG( PROC$1, FILENUM$1, 2147483648ll, -1ll );
	if( vr$24 != (struct $7ASTNODE*)0ull ) goto label$327;
	{
		goto label$317;
	}
	label$327:;
	label$326:;
	struct $7ASTNODE* vr$26 = ASTNEWARG( PROC$1, INIEXPR$1, 2147483648ll, -1ll );
	if( vr$26 != (struct $7ASTNODE*)0ull ) goto label$329;
	{
		goto label$317;
	}
	label$329:;
	label$328:;
	struct $7ASTNODE* vr$28 = ASTNEWARG( PROC$1, ENDEXPR$1, 2147483648ll, -1ll );
	if( vr$28 != (struct $7ASTNODE*)0ull ) goto label$331;
	{
		goto label$317;
	}
	label$331:;
	label$330:;
	ASTADD( PROC$1 );
	fb$result$1 = -1ll;
	label$317:;
	return fb$result$1;
}

struct $7ASTNODE* RTLFILERENAME( struct $7ASTNODE* FILENAME_NEW$1, struct $7ASTNODE* FILENAME_OLD$1, int64 ISFUNC$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$334:;
	struct $7ASTNODE* PROC$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	struct $8FBSYMBOL* vr$1 = RTLPROCLOOKUP( (uint8*)"fb_rename", 277ll );
	struct $7ASTNODE* vr$2 = ASTNEWCALL( vr$1, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$2;
	struct $7ASTNODE* vr$3 = ASTNEWARG( PROC$1, FILENAME_OLD$1, 2147483648ll, -1ll );
	if( vr$3 != (struct $7ASTNODE*)0ull ) goto label$337;
	{
		goto label$335;
	}
	label$337:;
	label$336:;
	struct $7ASTNODE* vr$5 = ASTNEWARG( PROC$1, FILENAME_NEW$1, 2147483648ll, -1ll );
	if( vr$5 != (struct $7ASTNODE*)0ull ) goto label$339;
	{
		goto label$335;
	}
	label$339:;
	label$338:;
	if( ISFUNC$1 != 0ll ) goto label$341;
	{
		struct $7ASTNODE* vr$8 = RTLERRORCHECK( PROC$1 );
		ASTADD( vr$8 );
	}
	label$341:;
	label$340:;
	fb$result$1 = PROC$1;
	label$335:;
	return fb$result$1;
}

struct $7ASTNODE* RTLWIDTHFILE( struct $7ASTNODE* FNUM$1, struct $7ASTNODE* WIDTH_ARG$1, int64 ISFUNC$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$342:;
	struct $7ASTNODE* PROC$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	struct $8FBSYMBOL* vr$1 = RTLPROCLOOKUP( (uint8*)"fb_WidthFile", 280ll );
	struct $7ASTNODE* vr$2 = ASTNEWCALL( vr$1, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$2;
	struct $7ASTNODE* vr$3 = ASTNEWARG( PROC$1, FNUM$1, 2147483648ll, -1ll );
	if( vr$3 != (struct $7ASTNODE*)0ull ) goto label$345;
	{
		goto label$343;
	}
	label$345:;
	label$344:;
	struct $7ASTNODE* vr$5 = ASTNEWARG( PROC$1, WIDTH_ARG$1, 2147483648ll, -1ll );
	if( vr$5 != (struct $7ASTNODE*)0ull ) goto label$347;
	{
		goto label$343;
	}
	label$347:;
	label$346:;
	if( ISFUNC$1 != 0ll ) goto label$349;
	{
		struct $7ASTNODE* vr$8 = RTLERRORCHECK( PROC$1 );
		ASTADD( vr$8 );
	}
	label$349:;
	label$348:;
	fb$result$1 = PROC$1;
	label$343:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__rtlzfile( void )
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

// Total compilation time: 0.04884802468586713 seconds.
