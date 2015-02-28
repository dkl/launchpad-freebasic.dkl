// Compilation of FreeBASIC-1.01.0-source/src/compiler/rtl-array.bas started at 16:30:14 on 02-28-2015

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
struct $16__FB_ARRAYDIMTB$ {
	int64 ELEMENTS;
	int64 LBOUND;
	int64 UBOUND;
};
__FB_STATIC_ASSERT( sizeof( struct $16__FB_ARRAYDIMTB$ ) == 24 );
struct $7FBARRAYIP7ASTNODEE {
	struct $7ASTNODE** DATA;
	struct $7ASTNODE** PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYIP7ASTNODEE ) == 232 );
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
typedef int64 $9FB_ERRMSG;
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__rtlzarray( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRREPORT( int64, int64, uint8* );
typedef int64 $11AST_CONVOPT;
struct $7ASTNODE* ASTNEWCONV( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, $11AST_CONVOPT, int64* );
struct $7ASTNODE* ASTNEWCONSTSTR( uint8* );
struct $7ASTNODE* ASTNEWCONSTI( int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWCALL( struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWARG( struct $7ASTNODE*, struct $7ASTNODE*, int64, int64 );
struct $7ASTNODE* ASTBUILDPROCADDROF( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBGETCOMPCTORHEAD( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBGETCOMPDEFCTOR( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBGETCOMPDTOR( struct $8FBSYMBOL* );
int64 SYMBCHECKACCESS( struct $8FBSYMBOL* );
void RTLADDINTRINSICPROCS( struct $14FB_RTL_PROCDEF* );
struct $8FBSYMBOL* RTLPROCLOOKUP( uint8*, int64 );
struct $7ASTNODE* RTLERRORCHECK( struct $7ASTNODE* );
static struct $7ASTNODE* HBUILDPROCPTR( struct $8FBSYMBOL* );
static void HCHECKDEFCTOR( struct $8FBSYMBOL*, int64, int64 );
static void HCHECKDTOR( struct $8FBSYMBOL*, int64, int64 );
static void HGETCTORDTORFORREDIM( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL**, struct $8FBSYMBOL** );
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
static struct $14FB_RTL_PROCDEF FUNCDATA$[17] = { { (uint8*)"fb_ArrayRedimEx", (uint8*)0ull, 10ll, 3ll, (tmp$28)0ull, 0ll, 6ll, { { 0ll, 3ll, 0ll }, { 8ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 8ll, 1ll, 0ll }, { 2147483648ll, 4ll, 0ll } } }, { (uint8*)"fb_ArrayRedimPresvEx", (uint8*)0ull, 10ll, 3ll, (tmp$28)0ull, 0ll, 6ll, { { 0ll, 3ll, 0ll }, { 8ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 8ll, 1ll, 0ll }, { 2147483648ll, 4ll, 0ll } } }, { (uint8*)"fb_ArrayRedimObj", (uint8*)0ull, 10ll, 3ll, (tmp$28)0ull, 0ll, 6ll, { { 0ll, 3ll, 0ll }, { 8ll, 1ll, 0ll }, { 32ll, 1ll, 0ll }, { 32ll, 1ll, 0ll }, { 8ll, 1ll, 0ll }, { 2147483648ll, 4ll, 0ll } } }, { (uint8*)"fb_ArrayRedimPresvObj", (uint8*)0ull, 10ll, 3ll, (tmp$28)0ull, 0ll, 6ll, { { 0ll, 3ll, 0ll }, { 8ll, 1ll, 0ll }, { 32ll, 1ll, 0ll }, { 32ll, 1ll, 0ll }, { 8ll, 1ll, 0ll }, { 2147483648ll, 4ll, 0ll } } }, { (uint8*)"fb_ArrayRedimTo", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 5ll, { { 0ll, 3ll, 0ll }, { 0ll, 3ll, 0ll }, { 10ll, 1ll, 0ll }, { 32ll, 1ll, 0ll }, { 32ll, 1ll, 0ll } } }, { (uint8*)"fb_ArrayDestructObj", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 2ll, { { 0ll, 3ll, 0ll }, { 32ll, 1ll, 0ll } } }, { (uint8*)"fb_ArrayDestructStr", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 1ll, { { 0ll, 3ll, 0ll } } }, { (uint8*)"fb_ArrayClear", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 2ll, { { 0ll, 3ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_ArrayClearObj", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 4ll, { { 0ll, 3ll, 0ll }, { 32ll, 1ll, 0ll }, { 32ll, 1ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_ArrayErase", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 2ll, { { 0ll, 3ll, 0ll }, { 10ll, 1ll, 0ll } } }, { (uint8*)"fb_ArrayEraseObj", (uint8*)0ull, 10ll, -1ll, (tmp$28)0ull, 0ll, 2ll, { { 0ll, 3ll, 0ll }, { 32ll, 1ll, 0ll } } }, { (uint8*)"fb_ArrayStrErase", (uint8*)0ull, 0ll, -1ll, (tmp$28)0ull, 0ll, 1ll, { { 0ll, 3ll, 0ll } } }, { (uint8*)"fb_ArrayLBound", (uint8*)0ull, 7ll, -1ll, (tmp$28)0ull, 0ll, 2ll, { { 0ll, 3ll, 0ll }, { 7ll, 1ll, 0ll } } }, { (uint8*)"fb_ArrayUBound", (uint8*)0ull, 7ll, -1ll, (tmp$28)0ull, 0ll, 2ll, { { 0ll, 3ll, 0ll }, { 7ll, 1ll, 0ll } } }, { (uint8*)"fb_ArraySngBoundChk", (uint8*)0ull, 32ll, -1ll, (tmp$28)0ull, 2048ll, 4ll, { { 8ll, 1ll, 0ll }, { 8ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 35ll, 1ll, 0ll } } }, { (uint8*)"fb_ArrayBoundChk", (uint8*)0ull, 32ll, -1ll, (tmp$28)0ull, 2048ll, 5ll, { { 7ll, 1ll, 0ll }, { 7ll, 1ll, 0ll }, { 7ll, 1ll, 0ll }, { 10ll, 1ll, 0ll }, { 35ll, 1ll, 0ll } } }, { (uint8*)0ull } };
struct $5FBENV ENV$ __attribute__((common));

void RTLARRAYMODINIT( void )
{
	label$10:;
	RTLADDINTRINSICPROCS( (struct $14FB_RTL_PROCDEF*)FUNCDATA$ );
	label$11:;
}

void RTLARRAYMODEND( void )
{
	label$12:;
	label$13:;
}

struct $7ASTNODE* RTLARRAYCLEAR( struct $7ASTNODE* ARRAYEXPR$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$43:;
	struct $7ASTNODE* PROC$1;
	int64 DTYPE$1;
	struct $8FBSYMBOL* CTOR$1;
	struct $8FBSYMBOL* DTOR$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	DTYPE$1 = *(int64*)((uint8*)ARRAYEXPR$1 + 8ll) & 511ll;
	if( DTYPE$1 != 18ll ) goto label$46;
	{
		SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)ARRAYEXPR$1 + 16ll);
		struct $8FBSYMBOL* vr$5 = SYMBGETCOMPDEFCTOR( SUBTYPE$1 );
		CTOR$1 = vr$5;
		struct $8FBSYMBOL* vr$6 = SYMBGETCOMPDTOR( SUBTYPE$1 );
		DTOR$1 = vr$6;
		struct $8FBSYMBOL* vr$8 = SYMBGETCOMPCTORHEAD( SUBTYPE$1 );
		if( ((int64)-(CTOR$1 == (struct $8FBSYMBOL*)0ull) & (int64)-(vr$8 != (struct $8FBSYMBOL*)0ull)) == 0ll ) goto label$48;
		{
			ERRREPORT( 182ll, 0ll, (uint8*)0ull );
		}
		label$48:;
		label$47:;
	}
	goto label$45;
	label$46:;
	{
		CTOR$1 = (struct $8FBSYMBOL*)0ull;
		DTOR$1 = (struct $8FBSYMBOL*)0ull;
	}
	label$45:;
	if( ((int64)-(CTOR$1 != (struct $8FBSYMBOL*)0ull) | (int64)-(DTOR$1 != (struct $8FBSYMBOL*)0ull)) == 0ll ) goto label$50;
	{
		HCHECKDEFCTOR( CTOR$1, -1ll, -1ll );
		HCHECKDTOR( DTOR$1, -1ll, -1ll );
		struct $8FBSYMBOL* vr$16 = RTLPROCLOOKUP( (uint8*)"fb_ArrayClearObj", 120ll );
		struct $7ASTNODE* vr$17 = ASTNEWCALL( vr$16, (struct $7ASTNODE*)0ull );
		PROC$1 = vr$17;
		struct $7ASTNODE* vr$18 = ASTNEWARG( PROC$1, ARRAYEXPR$1, DTYPE$1, -1ll );
		if( vr$18 != (struct $7ASTNODE*)0ull ) goto label$52;
		{
			goto label$44;
		}
		label$52:;
		label$51:;
		struct $7ASTNODE* vr$20 = HBUILDPROCPTR( CTOR$1 );
		struct $7ASTNODE* vr$21 = ASTNEWARG( PROC$1, vr$20, 2147483648ll, -1ll );
		if( vr$21 != (struct $7ASTNODE*)0ull ) goto label$54;
		{
			goto label$44;
		}
		label$54:;
		label$53:;
		struct $7ASTNODE* vr$23 = HBUILDPROCPTR( DTOR$1 );
		struct $7ASTNODE* vr$24 = ASTNEWARG( PROC$1, vr$23, 2147483648ll, -1ll );
		if( vr$24 != (struct $7ASTNODE*)0ull ) goto label$56;
		{
			goto label$44;
		}
		label$56:;
		label$55:;
		struct $7ASTNODE* vr$26 = ASTNEWCONSTI( -1ll, 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$27 = ASTNEWARG( PROC$1, vr$26, 2147483648ll, -1ll );
		if( vr$27 != (struct $7ASTNODE*)0ull ) goto label$58;
		{
			goto label$44;
		}
		label$58:;
		label$57:;
	}
	goto label$49;
	label$50:;
	if( DTYPE$1 != 16ll ) goto label$59;
	{
		struct $8FBSYMBOL* vr$30 = RTLPROCLOOKUP( (uint8*)"fb_ArrayDestructStr", 118ll );
		struct $7ASTNODE* vr$31 = ASTNEWCALL( vr$30, (struct $7ASTNODE*)0ull );
		PROC$1 = vr$31;
		struct $7ASTNODE* vr$32 = ASTNEWARG( PROC$1, ARRAYEXPR$1, DTYPE$1, -1ll );
		if( vr$32 != (struct $7ASTNODE*)0ull ) goto label$61;
		{
			goto label$44;
		}
		label$61:;
		label$60:;
	}
	goto label$49;
	label$59:;
	{
		struct $8FBSYMBOL* vr$34 = RTLPROCLOOKUP( (uint8*)"fb_ArrayClear", 119ll );
		struct $7ASTNODE* vr$35 = ASTNEWCALL( vr$34, (struct $7ASTNODE*)0ull );
		PROC$1 = vr$35;
		struct $7ASTNODE* vr$36 = ASTNEWARG( PROC$1, ARRAYEXPR$1, DTYPE$1, -1ll );
		if( vr$36 != (struct $7ASTNODE*)0ull ) goto label$63;
		{
			goto label$44;
		}
		label$63:;
		label$62:;
		struct $7ASTNODE* vr$38 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$39 = ASTNEWARG( PROC$1, vr$38, 2147483648ll, -1ll );
		if( vr$39 != (struct $7ASTNODE*)0ull ) goto label$65;
		{
			goto label$44;
		}
		label$65:;
		label$64:;
	}
	label$49:;
	fb$result$1 = PROC$1;
	label$44:;
	return fb$result$1;
}

struct $7ASTNODE* RTLARRAYERASE( struct $7ASTNODE* ARRAYEXPR$1, int64 IS_DYNAMIC$1, int64 CHECK_ACCESS$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$66:;
	struct $7ASTNODE* PROC$1;
	int64 DTYPE$1;
	struct $8FBSYMBOL* DTOR$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	DTYPE$1 = *(int64*)((uint8*)ARRAYEXPR$1 + 8ll) & 511ll;
	if( DTYPE$1 != 18ll ) goto label$69;
	{
		struct $8FBSYMBOL* vr$5 = SYMBGETCOMPDTOR( *(struct $8FBSYMBOL**)((uint8*)ARRAYEXPR$1 + 16ll) );
		DTOR$1 = vr$5;
	}
	goto label$68;
	label$69:;
	{
		DTOR$1 = (struct $8FBSYMBOL*)0ull;
	}
	label$68:;
	if( DTOR$1 == (struct $8FBSYMBOL*)0ull ) goto label$71;
	{
		HCHECKDTOR( DTOR$1, CHECK_ACCESS$1, -1ll );
		if( IS_DYNAMIC$1 == 0ll ) goto label$73;
		{
			struct $8FBSYMBOL* vr$8 = RTLPROCLOOKUP( (uint8*)"fb_ArrayEraseObj", 122ll );
			struct $7ASTNODE* vr$9 = ASTNEWCALL( vr$8, (struct $7ASTNODE*)0ull );
			PROC$1 = vr$9;
		}
		goto label$72;
		label$73:;
		{
			struct $8FBSYMBOL* vr$10 = RTLPROCLOOKUP( (uint8*)"fb_ArrayDestructObj", 117ll );
			struct $7ASTNODE* vr$11 = ASTNEWCALL( vr$10, (struct $7ASTNODE*)0ull );
			PROC$1 = vr$11;
		}
		label$72:;
		struct $7ASTNODE* vr$12 = ASTNEWARG( PROC$1, ARRAYEXPR$1, DTYPE$1, -1ll );
		if( vr$12 != (struct $7ASTNODE*)0ull ) goto label$75;
		{
			goto label$67;
		}
		label$75:;
		label$74:;
		struct $7ASTNODE* vr$14 = HBUILDPROCPTR( DTOR$1 );
		struct $7ASTNODE* vr$15 = ASTNEWARG( PROC$1, vr$14, 2147483648ll, -1ll );
		if( vr$15 != (struct $7ASTNODE*)0ull ) goto label$77;
		{
			goto label$67;
		}
		label$77:;
		label$76:;
	}
	goto label$70;
	label$71:;
	if( DTYPE$1 != 16ll ) goto label$78;
	{
		if( IS_DYNAMIC$1 == 0ll ) goto label$80;
		{
			struct $8FBSYMBOL* vr$19 = RTLPROCLOOKUP( (uint8*)"fb_ArrayStrErase", 123ll );
			struct $7ASTNODE* vr$20 = ASTNEWCALL( vr$19, (struct $7ASTNODE*)0ull );
			PROC$1 = vr$20;
		}
		goto label$79;
		label$80:;
		{
			struct $8FBSYMBOL* vr$21 = RTLPROCLOOKUP( (uint8*)"fb_ArrayDestructStr", 118ll );
			struct $7ASTNODE* vr$22 = ASTNEWCALL( vr$21, (struct $7ASTNODE*)0ull );
			PROC$1 = vr$22;
		}
		label$79:;
		struct $7ASTNODE* vr$23 = ASTNEWARG( PROC$1, ARRAYEXPR$1, DTYPE$1, -1ll );
		if( vr$23 != (struct $7ASTNODE*)0ull ) goto label$82;
		{
			goto label$67;
		}
		label$82:;
		label$81:;
	}
	goto label$70;
	label$78:;
	{
		if( IS_DYNAMIC$1 != 0ll ) goto label$84;
		{
			goto label$67;
		}
		label$84:;
		label$83:;
		struct $8FBSYMBOL* vr$26 = RTLPROCLOOKUP( (uint8*)"fb_ArrayErase", 121ll );
		struct $7ASTNODE* vr$27 = ASTNEWCALL( vr$26, (struct $7ASTNODE*)0ull );
		PROC$1 = vr$27;
		struct $7ASTNODE* vr$28 = ASTNEWARG( PROC$1, ARRAYEXPR$1, DTYPE$1, -1ll );
		if( vr$28 != (struct $7ASTNODE*)0ull ) goto label$86;
		{
			goto label$67;
		}
		label$86:;
		label$85:;
		struct $7ASTNODE* vr$30 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$31 = ASTNEWARG( PROC$1, vr$30, 2147483648ll, -1ll );
		if( vr$31 != (struct $7ASTNODE*)0ull ) goto label$88;
		{
			goto label$67;
		}
		label$88:;
		label$87:;
	}
	label$70:;
	fb$result$1 = PROC$1;
	label$67:;
	return fb$result$1;
}

struct $7ASTNODE* RTLARRAYREDIM( struct $7ASTNODE* ARRAYEXPR$1, int64 DIMENSIONS$1, struct $7FBARRAYIP7ASTNODEE* EXPRTB$1, int64 DOPRESERVE$1, int64 DOCLEAR$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$93:;
	struct $7ASTNODE* PROC$1;
	struct $7ASTNODE* EXPR$1;
	struct $8FBSYMBOL* F$1;
	struct $8FBSYMBOL* SYM$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	struct $8FBSYMBOL* CTOR$1;
	struct $8FBSYMBOL* DTOR$1;
	int64 DTYPE$1;
	int64 ELEMENTLEN$1;
	SYM$1 = *(struct $8FBSYMBOL**)((uint8*)ARRAYEXPR$1 + 24ll);
	DTYPE$1 = *(int64*)((uint8*)SYM$1 + 48ll);
	ELEMENTLEN$1 = *(int64*)((uint8*)SYM$1 + 72ll);
	HGETCTORDTORFORREDIM( DTYPE$1, *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll), &CTOR$1, &DTOR$1 );
	if( ((int64)-(CTOR$1 == (struct $8FBSYMBOL*)0ull) & (int64)-(DTOR$1 == (struct $8FBSYMBOL*)0ull)) == 0ll ) goto label$96;
	{
		if( DOPRESERVE$1 != 0ll ) goto label$98;
		{
			struct $8FBSYMBOL* vr$12 = RTLPROCLOOKUP( (uint8*)"fb_ArrayRedimEx", 124ll );
			F$1 = vr$12;
		}
		goto label$97;
		label$98:;
		{
			struct $8FBSYMBOL* vr$13 = RTLPROCLOOKUP( (uint8*)"fb_ArrayRedimPresvEx", 126ll );
			F$1 = vr$13;
		}
		label$97:;
	}
	goto label$95;
	label$96:;
	{
		if( DOPRESERVE$1 != 0ll ) goto label$100;
		{
			struct $8FBSYMBOL* vr$15 = RTLPROCLOOKUP( (uint8*)"fb_ArrayRedimObj", 125ll );
			F$1 = vr$15;
		}
		goto label$99;
		label$100:;
		{
			struct $8FBSYMBOL* vr$16 = RTLPROCLOOKUP( (uint8*)"fb_ArrayRedimPresvObj", 127ll );
			F$1 = vr$16;
		}
		label$99:;
	}
	label$95:;
	struct $7ASTNODE* vr$17 = ASTNEWCALL( F$1, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$17;
	struct $7ASTNODE* vr$18 = ASTNEWARG( PROC$1, ARRAYEXPR$1, 2147483648ll, -1ll );
	if( vr$18 != (struct $7ASTNODE*)0ull ) goto label$102;
	{
		goto label$94;
	}
	label$102:;
	label$101:;
	struct $7ASTNODE* vr$20 = ASTNEWCONSTI( ELEMENTLEN$1, 7ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$21 = ASTNEWARG( PROC$1, vr$20, 2147483648ll, -1ll );
	if( vr$21 != (struct $7ASTNODE*)0ull ) goto label$104;
	{
		goto label$94;
	}
	label$104:;
	label$103:;
	if( ((int64)-(CTOR$1 == (struct $8FBSYMBOL*)0ull) & (int64)-(DTOR$1 == (struct $8FBSYMBOL*)0ull)) == 0ll ) goto label$106;
	{
		struct $7ASTNODE* vr$27 = ASTNEWCONSTI( DOCLEAR$1, 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$28 = ASTNEWARG( PROC$1, vr$27, 2147483648ll, -1ll );
		if( vr$28 != (struct $7ASTNODE*)0ull ) goto label$108;
		{
			goto label$94;
		}
		label$108:;
		label$107:;
		struct $7ASTNODE* vr$31 = ASTNEWCONSTI( (int64)-(DTYPE$1 == 16ll), 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$32 = ASTNEWARG( PROC$1, vr$31, 2147483648ll, -1ll );
		if( vr$32 != (struct $7ASTNODE*)0ull ) goto label$110;
		{
			goto label$94;
		}
		label$110:;
		label$109:;
	}
	goto label$105;
	label$106:;
	{
		HCHECKDEFCTOR( CTOR$1, 0ll, 0ll );
		HCHECKDTOR( DTOR$1, 0ll, 0ll );
		struct $7ASTNODE* vr$34 = HBUILDPROCPTR( CTOR$1 );
		struct $7ASTNODE* vr$35 = ASTNEWARG( PROC$1, vr$34, 2147483648ll, -1ll );
		if( vr$35 != (struct $7ASTNODE*)0ull ) goto label$112;
		{
			goto label$94;
		}
		label$112:;
		label$111:;
		struct $7ASTNODE* vr$37 = HBUILDPROCPTR( DTOR$1 );
		struct $7ASTNODE* vr$38 = ASTNEWARG( PROC$1, vr$37, 2147483648ll, -1ll );
		if( vr$38 != (struct $7ASTNODE*)0ull ) goto label$114;
		{
			goto label$94;
		}
		label$114:;
		label$113:;
	}
	label$105:;
	struct $7ASTNODE* vr$40 = ASTNEWCONSTI( DIMENSIONS$1, 7ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$41 = ASTNEWARG( PROC$1, vr$40, 2147483648ll, -1ll );
	if( vr$41 != (struct $7ASTNODE*)0ull ) goto label$116;
	{
		goto label$94;
	}
	label$116:;
	label$115:;
	{
		int64 I$2;
		I$2 = 0ll;
		int64 TMP$105$2;
		TMP$105$2 = DIMENSIONS$1 + -1ll;
		goto label$117;
		label$120:;
		{
			EXPR$1 = *(struct $7ASTNODE**)(((I$2 * *(int64*)((uint8*)EXPRTB$1 + 64ll)) << 3ll) + *(int64*)EXPRTB$1);
			if( (*(int64*)((uint8*)EXPR$1 + 8ll) & 511ll) == 7ll ) goto label$122;
			{
				struct $7ASTNODE* vr$52 = ASTNEWCONV( 7ll, (struct $8FBSYMBOL*)0ull, EXPR$1, 0ll, (int64*)0ull );
				EXPR$1 = vr$52;
			}
			label$122:;
			label$121:;
			struct $7ASTNODE* vr$53 = ASTNEWARG( PROC$1, EXPR$1, 2147483648ll, -1ll );
			if( vr$53 != (struct $7ASTNODE*)0ull ) goto label$124;
			{
				goto label$94;
			}
			label$124:;
			label$123:;
			EXPR$1 = *(struct $7ASTNODE**)((uint8*)(((I$2 * *(int64*)((uint8*)EXPRTB$1 + 64ll)) << 3ll) + *(int64*)EXPRTB$1) + 8ll);
			if( (*(int64*)((uint8*)EXPR$1 + 8ll) & 511ll) == 7ll ) goto label$126;
			{
				struct $7ASTNODE* vr$63 = ASTNEWCONV( 7ll, (struct $8FBSYMBOL*)0ull, EXPR$1, 0ll, (int64*)0ull );
				EXPR$1 = vr$63;
			}
			label$126:;
			label$125:;
			struct $7ASTNODE* vr$64 = ASTNEWARG( PROC$1, EXPR$1, 2147483648ll, -1ll );
			if( vr$64 != (struct $7ASTNODE*)0ull ) goto label$128;
			{
				goto label$94;
			}
			label$128:;
			label$127:;
		}
		label$118:;
		I$2 = I$2 + 1ll;
		label$117:;
		if( I$2 <= TMP$105$2 ) goto label$120;
		label$119:;
	}
	struct $7ASTNODE* vr$68 = RTLERRORCHECK( PROC$1 );
	fb$result$1 = vr$68;
	label$94:;
	return fb$result$1;
}

struct $7ASTNODE* RTLARRAYREDIMTO( struct $7ASTNODE* DSTEXPR$1, struct $7ASTNODE* SRCEXPR$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$129:;
	struct $7ASTNODE* PROC$1;
	struct $8FBSYMBOL* CTOR$1;
	struct $8FBSYMBOL* DTOR$1;
	HGETCTORDTORFORREDIM( DTYPE$1, SUBTYPE$1, &CTOR$1, &DTOR$1 );
	struct $8FBSYMBOL* vr$3 = RTLPROCLOOKUP( (uint8*)"fb_ArrayRedimTo", 128ll );
	struct $7ASTNODE* vr$4 = ASTNEWCALL( vr$3, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$4;
	struct $7ASTNODE* vr$5 = ASTNEWARG( PROC$1, DSTEXPR$1, 2147483648ll, -1ll );
	if( vr$5 != (struct $7ASTNODE*)0ull ) goto label$132;
	{
		goto label$130;
	}
	label$132:;
	label$131:;
	struct $7ASTNODE* vr$7 = ASTNEWARG( PROC$1, SRCEXPR$1, 2147483648ll, -1ll );
	if( vr$7 != (struct $7ASTNODE*)0ull ) goto label$134;
	{
		goto label$130;
	}
	label$134:;
	label$133:;
	struct $7ASTNODE* vr$11 = ASTNEWCONSTI( (int64)-((DTYPE$1 & 511ll) == 16ll), 7ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$12 = ASTNEWARG( PROC$1, vr$11, 2147483648ll, -1ll );
	if( vr$12 != (struct $7ASTNODE*)0ull ) goto label$136;
	{
		goto label$130;
	}
	label$136:;
	label$135:;
	HCHECKDEFCTOR( CTOR$1, 0ll, 0ll );
	HCHECKDTOR( DTOR$1, 0ll, 0ll );
	struct $7ASTNODE* vr$14 = HBUILDPROCPTR( CTOR$1 );
	struct $7ASTNODE* vr$15 = ASTNEWARG( PROC$1, vr$14, 2147483648ll, -1ll );
	if( vr$15 != (struct $7ASTNODE*)0ull ) goto label$138;
	{
		goto label$130;
	}
	label$138:;
	label$137:;
	struct $7ASTNODE* vr$17 = HBUILDPROCPTR( DTOR$1 );
	struct $7ASTNODE* vr$18 = ASTNEWARG( PROC$1, vr$17, 2147483648ll, -1ll );
	if( vr$18 != (struct $7ASTNODE*)0ull ) goto label$140;
	{
		goto label$130;
	}
	label$140:;
	label$139:;
	struct $7ASTNODE* vr$20 = RTLERRORCHECK( PROC$1 );
	fb$result$1 = vr$20;
	label$130:;
	return fb$result$1;
}

struct $7ASTNODE* RTLARRAYBOUND( struct $7ASTNODE* ARRAYEXPR$1, struct $7ASTNODE* DIMEXPR$1, int64 ISLBOUND$1 )
{
	struct $8FBSYMBOL* TMP$106$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$141:;
	struct $7ASTNODE* PROC$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	if( ISLBOUND$1 == 0ll ) goto label$143;
	struct $8FBSYMBOL* vr$2 = RTLPROCLOOKUP( (uint8*)"fb_ArrayLBound", 129ll );
	TMP$106$1 = vr$2;
	goto label$148;
	label$143:;
	struct $8FBSYMBOL* vr$3 = RTLPROCLOOKUP( (uint8*)"fb_ArrayUBound", 130ll );
	TMP$106$1 = vr$3;
	label$148:;
	struct $7ASTNODE* vr$4 = ASTNEWCALL( TMP$106$1, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$4;
	struct $7ASTNODE* vr$5 = ASTNEWARG( PROC$1, ARRAYEXPR$1, 2147483648ll, -1ll );
	if( vr$5 != (struct $7ASTNODE*)0ull ) goto label$145;
	{
		goto label$142;
	}
	label$145:;
	label$144:;
	struct $7ASTNODE* vr$7 = ASTNEWARG( PROC$1, DIMEXPR$1, 2147483648ll, -1ll );
	if( vr$7 != (struct $7ASTNODE*)0ull ) goto label$147;
	{
		goto label$142;
	}
	label$147:;
	label$146:;
	fb$result$1 = PROC$1;
	label$142:;
	return fb$result$1;
}

struct $7ASTNODE* RTLARRAYBOUNDSCHECK( struct $7ASTNODE* IDX$1, struct $7ASTNODE* LB$1, struct $7ASTNODE* RB$1, int64 LINENUM$1, uint8* MODULE$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$149:;
	struct $7ASTNODE* PROC$1;
	struct $8FBSYMBOL* F$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	if( LB$1 != (struct $7ASTNODE*)0ull ) goto label$152;
	{
		struct $8FBSYMBOL* vr$2 = RTLPROCLOOKUP( (uint8*)"fb_ArraySngBoundChk", 131ll );
		F$1 = vr$2;
	}
	goto label$151;
	label$152:;
	{
		struct $8FBSYMBOL* vr$3 = RTLPROCLOOKUP( (uint8*)"fb_ArrayBoundChk", 132ll );
		F$1 = vr$3;
	}
	label$151:;
	struct $7ASTNODE* vr$4 = ASTNEWCALL( F$1, (struct $7ASTNODE*)0ull );
	PROC$1 = vr$4;
	struct $7ASTNODE* vr$5 = ASTNEWCONV( 7ll, (struct $8FBSYMBOL*)0ull, IDX$1, 0ll, (int64*)0ull );
	struct $7ASTNODE* vr$6 = ASTNEWARG( PROC$1, vr$5, 2147483648ll, -1ll );
	if( vr$6 != (struct $7ASTNODE*)0ull ) goto label$154;
	{
		goto label$150;
	}
	label$154:;
	label$153:;
	if( LB$1 == (struct $7ASTNODE*)0ull ) goto label$156;
	{
		struct $7ASTNODE* vr$9 = ASTNEWARG( PROC$1, LB$1, 7ll, -1ll );
		if( vr$9 != (struct $7ASTNODE*)0ull ) goto label$158;
		{
			goto label$150;
		}
		label$158:;
		label$157:;
	}
	label$156:;
	label$155:;
	struct $7ASTNODE* vr$11 = ASTNEWARG( PROC$1, RB$1, 7ll, -1ll );
	if( vr$11 != (struct $7ASTNODE*)0ull ) goto label$160;
	{
		goto label$150;
	}
	label$160:;
	label$159:;
	struct $7ASTNODE* vr$13 = ASTNEWCONSTI( LINENUM$1, 7ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$14 = ASTNEWARG( PROC$1, vr$13, 2147483648ll, -1ll );
	if( vr$14 != (struct $7ASTNODE*)0ull ) goto label$162;
	{
		goto label$150;
	}
	label$162:;
	label$161:;
	struct $7ASTNODE* vr$16 = ASTNEWCONSTSTR( MODULE$1 );
	struct $7ASTNODE* vr$17 = ASTNEWARG( PROC$1, vr$16, 2147483648ll, -1ll );
	if( vr$17 != (struct $7ASTNODE*)0ull ) goto label$164;
	{
		goto label$150;
	}
	label$164:;
	label$163:;
	fb$result$1 = PROC$1;
	label$150:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__rtlzarray( void )
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

static struct $7ASTNODE* HBUILDPROCPTR( struct $8FBSYMBOL* PROC$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$14:;
	if( PROC$1 != (struct $8FBSYMBOL*)0ull ) goto label$17;
	{
		struct $7ASTNODE* vr$2 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
		fb$result$1 = vr$2;
		goto label$15;
	}
	label$17:;
	label$16:;
	struct $7ASTNODE* vr$3 = ASTBUILDPROCADDROF( PROC$1 );
	fb$result$1 = vr$3;
	label$15:;
	return fb$result$1;
}

static void HCHECKDEFCTOR( struct $8FBSYMBOL* CTOR$1, int64 CHECK_ACCESS$1, int64 IS_ERASE$1 )
{
	label$18:;
	if( CTOR$1 != (struct $8FBSYMBOL*)0ull ) goto label$21;
	{
		goto label$19;
		label$21:;
	}
	if( CHECK_ACCESS$1 == 0ll ) goto label$23;
	{
		int64 vr$2 = SYMBCHECKACCESS( CTOR$1 );
		if( vr$2 != 0ll ) goto label$25;
		{
			ERRREPORT( 203ll, 0ll, (uint8*)0ull );
		}
		label$25:;
		label$24:;
	}
	label$23:;
	label$22:;
	if( *(int64*)((uint8*)CTOR$1 + 144ll) == 3ll ) goto label$27;
	{
		$9FB_ERRMSG TMP$102$2;
		if( IS_ERASE$1 == 0ll ) goto label$28;
		TMP$102$2 = 173ll;
		goto label$165;
		label$28:;
		TMP$102$2 = 170ll;
		label$165:;
		ERRREPORT( TMP$102$2, 0ll, (uint8*)0ull );
	}
	label$27:;
	label$26:;
	if( (int64)*(int16*)((uint8*)CTOR$1 + 112ll) == 1ll ) goto label$30;
	{
		$9FB_ERRMSG TMP$103$2;
		if( IS_ERASE$1 == 0ll ) goto label$31;
		TMP$103$2 = 175ll;
		goto label$166;
		label$31:;
		TMP$103$2 = 172ll;
		label$166:;
		ERRREPORT( TMP$103$2, 0ll, (uint8*)0ull );
	}
	label$30:;
	label$29:;
	label$19:;
}

static void HCHECKDTOR( struct $8FBSYMBOL* DTOR$1, int64 CHECK_ACCESS$1, int64 IS_ERASE$1 )
{
	label$32:;
	if( DTOR$1 != (struct $8FBSYMBOL*)0ull ) goto label$35;
	{
		goto label$33;
		label$35:;
	}
	if( CHECK_ACCESS$1 == 0ll ) goto label$37;
	{
		int64 vr$2 = SYMBCHECKACCESS( DTOR$1 );
		if( vr$2 != 0ll ) goto label$39;
		{
			ERRREPORT( 205ll, 0ll, (uint8*)0ull );
		}
		label$39:;
		label$38:;
	}
	label$37:;
	label$36:;
	if( *(int64*)((uint8*)DTOR$1 + 144ll) == 3ll ) goto label$41;
	{
		$9FB_ERRMSG TMP$104$2;
		if( IS_ERASE$1 == 0ll ) goto label$42;
		TMP$104$2 = 174ll;
		goto label$167;
		label$42:;
		TMP$104$2 = 171ll;
		label$167:;
		ERRREPORT( TMP$104$2, 0ll, (uint8*)0ull );
	}
	label$41:;
	label$40:;
	label$33:;
}

static void HGETCTORDTORFORREDIM( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, struct $8FBSYMBOL** CTOR$1, struct $8FBSYMBOL** DTOR$1 )
{
	label$89:;
	if( (DTYPE$1 & 511ll) != 18ll ) goto label$92;
	{
		struct $8FBSYMBOL* vr$2 = SYMBGETCOMPDEFCTOR( SUBTYPE$1 );
		*CTOR$1 = vr$2;
		struct $8FBSYMBOL* vr$4 = SYMBGETCOMPDTOR( SUBTYPE$1 );
		*DTOR$1 = vr$4;
	}
	goto label$91;
	label$92:;
	{
		*CTOR$1 = (struct $8FBSYMBOL*)0ull;
		*DTOR$1 = (struct $8FBSYMBOL*)0ull;
	}
	label$91:;
	label$90:;
}

// Total compilation time: 0.03985511709470302 seconds.
