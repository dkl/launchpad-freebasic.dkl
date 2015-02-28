// Compilation of fbc-1.01.0/src/compiler/ast-optimize.bas started at 15:27:39 on 02-28-2015

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
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__astzoptimize( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ASTDELNODE( struct $7ASTNODE* );
struct $7ASTNODE* ASTCLONETREE( struct $7ASTNODE* );
void ASTDELTREE( struct $7ASTNODE* );
int64 ASTISTREEEQUAL( struct $7ASTNODE*, struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWNOP( void );
typedef int64 $11AST_CONVOPT;
struct $7ASTNODE* ASTNEWCONV( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, $11AST_CONVOPT, int64* );
struct $7ASTNODE* ASTSKIPNOCONVCAST( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWBOP( int64, struct $7ASTNODE*, struct $7ASTNODE*, struct $8FBSYMBOL*, $9AST_OPOPT );
struct $7ASTNODE* ASTNEWUOP( int64, struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWCONSTI( int64, int64, struct $8FBSYMBOL* );
int64 ASTCONSTFLUSHTOINT( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWLINK( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTOPTASSIGNMENT( struct $7ASTNODE* );
struct $7ASTNODE* ASTUPDSTRCONCAT( struct $7ASTNODE* );
int64 ASTHASSIDEFX( struct $7ASTNODE* );
int64 ASTISSYMBOLONTREE( struct $8FBSYMBOL*, struct $7ASTNODE* );
void ASTSETTYPE( struct $7ASTNODE*, int64, struct $8FBSYMBOL* );
int64 ASTGETOFFSETCHILDOFS( struct $7ASTNODE* );
int64 TYPETOUNSIGNED( int64 );
struct $7ASTNODE* RTLSTRASSIGN( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* RTLWSTRASSIGN( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* RTLSTRCONCATASSIGN( struct $7ASTNODE*, struct $7ASTNODE* );
struct $7ASTNODE* RTLWSTRCONCATASSIGN( struct $7ASTNODE*, struct $7ASTNODE* );
static void HOPTCONSTREMNEG( struct $7ASTNODE* );
static struct $7ASTNODE* HCONSTACCUMADDSUB( struct $7ASTNODE*, struct $7ASTNODE**, int64 );
static struct $7ASTNODE* HCONSTACCUMMUL( struct $7ASTNODE*, struct $7ASTNODE** );
static struct $7ASTNODE* HOPTCONSTACCUM1( struct $7ASTNODE* );
static struct $7ASTNODE* HOPTCONSTACCUM2( struct $7ASTNODE* );
static struct $7ASTNODE* HCONSTDISTMUL( struct $7ASTNODE*, struct $7ASTNODE** );
static struct $7ASTNODE* HOPTCONSTDISTMUL( struct $7ASTNODE* );
static void HOPTCONSTIDXMULT( struct $7ASTNODE* );
static int64 ASTINCOFFSET( struct $7ASTNODE*, int64 );
static struct $7ASTNODE* HOPTDEREFADDR( struct $7ASTNODE* );
static struct $7ASTNODE* HOPTCONSTIDX( struct $7ASTNODE* );
static struct $7ASTNODE* HMERGENESTEDFIELDS( struct $7ASTNODE* );
static struct $7ASTNODE* HOPTASSOCADD( struct $7ASTNODE* );
static struct $7ASTNODE* HOPTASSOCMUL( struct $7ASTNODE* );
static void HDIVTOSHIFT_SIGNED( struct $7ASTNODE*, int64 );
static int64 HTOPOW2( uint64 );
static void HOPTTOSHIFT( struct $7ASTNODE* );
static struct $7ASTNODE* HOPTNULLOP( struct $7ASTNODE* );
static struct $7ASTNODE* HOPTLOGIC( struct $7ASTNODE* );
static struct $7ASTNODE* HDOOPTREMCONV( struct $7ASTNODE* );
static struct $7ASTNODE* HOPTSTRMULTCONCAT( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, int64 );
static int64 HISMULTSTRCONCAT( struct $7ASTNODE*, struct $7ASTNODE* );
static struct $7ASTNODE* HOPTSTRASSIGNMENT( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE* );
struct $7ASTNODE* HOPTSELFASSIGN( struct $7ASTNODE* );
struct $7ASTNODE* HOPTSELFCOMPARE( struct $7ASTNODE* );
static struct $7ASTNODE* HOPTRECIPROCAL( struct $7ASTNODE* );
typedef void (*tmp$35)( void );
typedef int64 (*tmp$36)( void );
typedef void (*tmp$37)( double );
typedef int64 $14IR_OPTIONVALUE;
typedef int64 (*tmp$38)( $14IR_OPTIONVALUE );
typedef int64 (*tmp$39)( int64, int64 );
typedef void (*tmp$40)( struct $8FBSYMBOL* );
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
typedef void (*tmp$58)( struct $8FBSYMBOL*, int64 );
typedef void (*tmp$59)( struct $8FBSYMBOL*, double );
typedef void (*tmp$60)( struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
typedef void (*tmp$61)( int64, uint8*, int64 );
typedef void (*tmp$62)( int64, uint32*, int64 );
typedef void (*tmp$63)( int64 );
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
struct $5FBENV ENV$ __attribute__((common));

struct $7ASTNODE* ASTOPTASSIGNMENT( struct $7ASTNODE* N$1 )
{
	int64 TMP$129$1;
	int64 TMP$131$1;
	int64 TMP$135$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$549:;
	struct $7ASTNODE* L$1;
	struct $7ASTNODE* R$1;
	int64 DTYPE$1;
	int64 DCLASS$1;
	fb$result$1 = N$1;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$552;
	{
		goto label$550;
	}
	label$552:;
	label$551:;
	{
		$13AST_NODECLASS TMP$126$2;
		TMP$126$2 = *($13AST_NODECLASS*)N$1;
		if( TMP$126$2 != 2ll ) goto label$554;
		label$555:;
		{
		}
		goto label$553;
		label$554:;
		if( TMP$126$2 == 15ll ) goto label$557;
		label$558:;
		if( TMP$126$2 != 13ll ) goto label$556;
		label$557:;
		{
			struct $7ASTNODE* vr$7 = ASTOPTASSIGNMENT( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
			*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$7;
			struct $7ASTNODE* vr$10 = ASTOPTASSIGNMENT( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) );
			*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = vr$10;
			goto label$550;
		}
		goto label$553;
		label$556:;
		{
			goto label$550;
		}
		label$559:;
		label$553:;
	}
	L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
	R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
	DTYPE$1 = *(int64*)((uint8*)N$1 + 8ll);
	{
		int64 TMP$127$2;
		int64 TMP$128$2;
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$560;
		TMP$127$2 = 22ll;
		goto label$604;
		label$560:;
		TMP$127$2 = DTYPE$1 & 31ll;
		label$604:;
		TMP$128$2 = TMP$127$2;
		if( TMP$128$2 == 16ll ) goto label$563;
		label$564:;
		if( TMP$128$2 == 17ll ) goto label$563;
		label$565:;
		if( TMP$128$2 != 6ll ) goto label$562;
		label$563:;
		{
			struct $7ASTNODE* vr$21 = HOPTSTRASSIGNMENT( N$1, L$1, R$1 );
			fb$result$1 = vr$21;
			goto label$550;
		}
		label$562:;
		label$561:;
	}
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$566;
	TMP$129$1 = 22ll;
	goto label$605;
	label$566:;
	TMP$129$1 = DTYPE$1 & 31ll;
	label$605:;
	DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$129$1 * 56ll));
	if( DCLASS$1 != 0ll ) goto label$568;
	{
		if( (int64)-((*(int64*)((uint8*)&IR$ + 568ll) & 512ll) != 0ll) != 0ll ) goto label$570;
		{
			goto label$550;
		}
		label$570:;
		label$569:;
	}
	goto label$567;
	label$568:;
	{
		if( (int64)-((*(int64*)((uint8*)&IR$ + 568ll) & 8ll) != 0ll) != 0ll ) goto label$572;
		{
			if( *(int64*)R$1 != 16ll ) goto label$574;
			{
				if( DCLASS$1 != 1ll ) goto label$576;
				{
					int64 TMP$130$5;
					if( ((*(int64*)((uint8*)R$1 + 8ll) & 511ll) & 480ll) == 0ll ) goto label$577;
					TMP$130$5 = 22ll;
					goto label$606;
					label$577:;
					TMP$130$5 = (*(int64*)((uint8*)R$1 + 8ll) & 511ll) & 31ll;
					label$606:;
					if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$130$5 * 56ll)) == 1ll ) goto label$579;
					{
						struct $7ASTNODE* vr$45 = ASTNEWCONV( DTYPE$1, (struct $8FBSYMBOL*)0ull, R$1, 0ll, (int64*)0ull );
						*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = vr$45;
					}
					label$579:;
					label$578:;
				}
				label$576:;
				label$575:;
			}
			label$574:;
			label$573:;
			goto label$550;
		}
		label$572:;
		label$571:;
	}
	label$567:;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$580;
	TMP$131$1 = 22ll;
	goto label$607;
	label$580:;
	TMP$131$1 = DTYPE$1 & 31ll;
	label$607:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$131$1 * 56ll)) + 8ll) != 1ll ) goto label$582;
	{
		goto label$550;
	}
	label$582:;
	label$581:;
	struct $7ASTNODE* T$1;
	struct $7ASTNODE* vr$52 = ASTSKIPNOCONVCAST( L$1 );
	T$1 = vr$52;
	{
		uint64 TMP$132$2;
		TMP$132$2 = *(uint64*)T$1;
		goto label$584;
		label$585:;
		{
		}
		goto label$583;
		label$586:;
		{
			if( *(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)T$1 + 24ll) + 184ll) <= 0ll ) goto label$588;
			{
				goto label$550;
			}
			label$588:;
			label$587:;
		}
		goto label$583;
		label$589:;
		{
			goto label$550;
		}
		goto label$583;
		label$584:;
		static const void* tmp$136[10ll] = {
			&&label$585,
			&&label$585,
			&&label$586,
			&&label$585,
			&&label$589,
			&&label$589,
			&&label$589,
			&&label$589,
			&&label$589,
			&&label$585,
		};
		if( TMP$132$2 < 17ll ) goto label$589;
		if( TMP$132$2 > 26ll ) goto label$589;
		goto *tmp$136[TMP$132$2 - 17ll];
		label$583:;
	}
	{
		$13AST_NODECLASS TMP$133$2;
		TMP$133$2 = *($13AST_NODECLASS*)R$1;
		if( TMP$133$2 != 4ll ) goto label$591;
		label$592:;
		{
		}
		goto label$590;
		label$591:;
		if( TMP$133$2 != 3ll ) goto label$593;
		label$594:;
		{
			{
				uint64 TMP$134$4;
				TMP$134$4 = *(uint64*)((uint8*)R$1 + 40ll);
				goto label$596;
				label$597:;
				{
					goto label$550;
				}
				goto label$595;
				label$596:;
				static const void* tmp$137[6ll] = {
					&&label$597,
					&&label$597,
					&&label$597,
					&&label$597,
					&&label$597,
					&&label$597,
				};
				if( TMP$134$4 < 45ll ) goto label$595;
				if( TMP$134$4 > 50ll ) goto label$595;
				goto *tmp$137[TMP$134$4 - 45ll];
				label$595:;
			}
		}
		goto label$590;
		label$593:;
		{
			goto label$550;
		}
		label$598:;
		label$590:;
	}
	if( ((*(int64*)((uint8*)R$1 + 8ll) & 511ll) & 480ll) == 0ll ) goto label$599;
	TMP$135$1 = 22ll;
	goto label$608;
	label$599:;
	TMP$135$1 = (*(int64*)((uint8*)R$1 + 8ll) & 511ll) & 31ll;
	label$608:;
	if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$135$1 * 56ll)) == 0ll ) goto label$601;
	{
		goto label$550;
	}
	label$601:;
	label$600:;
	int64 vr$71 = ASTISTREEEQUAL( L$1, *(struct $7ASTNODE**)((uint8*)R$1 + 112ll) );
	if( vr$71 != 0ll ) goto label$603;
	{
		goto label$550;
	}
	label$603:;
	label$602:;
	*($9AST_OPOPT*)((uint8*)R$1 + 48ll) = *(int64*)((uint8*)R$1 + 48ll) & -2ll;
	ASTDELNODE( N$1 );
	ASTDELTREE( L$1 );
	fb$result$1 = R$1;
	label$550:;
	return fb$result$1;
}

struct $7ASTNODE* HOPTSELFASSIGN( struct $7ASTNODE* N$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$609:;
	struct $7ASTNODE* L$1;
	struct $7ASTNODE* R$1;
	int64 DTYPE$1;
	int64 DCLASS$1;
	fb$result$1 = N$1;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$612;
	{
		goto label$610;
	}
	label$612:;
	label$611:;
	if( *(int64*)N$1 == 2ll ) goto label$614;
	{
		goto label$610;
	}
	label$614:;
	label$613:;
	L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
	R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
	int64 vr$6 = ASTISTREEEQUAL( L$1, R$1 );
	if( vr$6 != 0ll ) goto label$616;
	{
		goto label$610;
	}
	label$616:;
	label$615:;
	ASTDELNODE( N$1 );
	ASTDELTREE( L$1 );
	ASTDELTREE( R$1 );
	struct $7ASTNODE* vr$8 = ASTNEWNOP(  );
	fb$result$1 = vr$8;
	label$610:;
	return fb$result$1;
}

struct $7ASTNODE* HOPTSELFCOMPARE( struct $7ASTNODE* N$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$617:;
	struct $7ASTNODE* L$1;
	struct $7ASTNODE* R$1;
	int64 DTYPE$1;
	int64 DCLASS$1;
	fb$result$1 = N$1;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$620;
	{
		goto label$618;
	}
	label$620:;
	label$619:;
	if( *(int64*)N$1 == 3ll ) goto label$622;
	{
		goto label$618;
	}
	label$622:;
	label$621:;
	L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
	R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
	int64 vr$6 = ASTISTREEEQUAL( L$1, R$1 );
	if( vr$6 != 0ll ) goto label$624;
	{
		goto label$618;
	}
	label$624:;
	label$623:;
	int64 C$1;
	__builtin_memset( &C$1, 0, 8ll );
	{
		uint64 TMP$138$2;
		TMP$138$2 = *(uint64*)((uint8*)N$1 + 40ll);
		goto label$626;
		label$627:;
		{
			C$1 = -1ll;
		}
		goto label$625;
		label$628:;
		{
			C$1 = 0ll;
		}
		goto label$625;
		label$629:;
		{
			goto label$618;
		}
		goto label$625;
		label$626:;
		static const void* tmp$139[6ll] = {
			&&label$627,
			&&label$628,
			&&label$628,
			&&label$628,
			&&label$627,
			&&label$627,
		};
		if( TMP$138$2 < 45ll ) goto label$629;
		if( TMP$138$2 > 50ll ) goto label$629;
		goto *tmp$139[TMP$138$2 - 45ll];
		label$625:;
	}
	ASTDELNODE( N$1 );
	ASTDELTREE( L$1 );
	ASTDELTREE( R$1 );
	struct $7ASTNODE* vr$10 = ASTNEWCONSTI( C$1, 7ll, (struct $8FBSYMBOL*)0ull );
	fb$result$1 = vr$10;
	label$618:;
	return fb$result$1;
}

struct $7ASTNODE* ASTOPTIMIZETREE( struct $7ASTNODE* N$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$650:;
	*(int64*)((uint8*)&AST$ + 464ll) = *(int64*)((uint8*)&AST$ + 464ll) + 1ll;
	struct $7ASTNODE* vr$2 = HMERGENESTEDFIELDS( N$1 );
	N$1 = vr$2;
	struct $7ASTNODE* vr$3 = HOPTASSOCADD( N$1 );
	N$1 = vr$3;
	struct $7ASTNODE* vr$4 = HOPTASSOCMUL( N$1 );
	N$1 = vr$4;
	struct $7ASTNODE* vr$5 = HOPTCONSTDISTMUL( N$1 );
	N$1 = vr$5;
	struct $7ASTNODE* vr$6 = HOPTCONSTACCUM1( N$1 );
	N$1 = vr$6;
	struct $7ASTNODE* vr$7 = HOPTCONSTACCUM2( N$1 );
	N$1 = vr$7;
	HOPTCONSTREMNEG( N$1 );
	struct $7ASTNODE* vr$8 = HOPTCONSTIDX( N$1 );
	N$1 = vr$8;
	HOPTTOSHIFT( N$1 );
	struct $7ASTNODE* vr$9 = HOPTLOGIC( N$1 );
	N$1 = vr$9;
	struct $7ASTNODE* vr$10 = HOPTNULLOP( N$1 );
	N$1 = vr$10;
	struct $7ASTNODE* vr$11 = HOPTSELFASSIGN( N$1 );
	N$1 = vr$11;
	struct $7ASTNODE* vr$12 = HOPTSELFCOMPARE( N$1 );
	N$1 = vr$12;
	if( ((int64)-((int64)-((*(int64*)((uint8*)&IR$ + 568ll) & 1ll) != 0ll) == 0ll) & (int64)-(*(int64*)((uint8*)&ENV$ + 208ll) == 0ll)) == 0ll ) goto label$653;
	{
		struct $7ASTNODE* vr$19 = HDOOPTREMCONV( N$1 );
		N$1 = vr$19;
	}
	label$653:;
	label$652:;
	if( (int64)-((*(int64*)((uint8*)&IR$ + 568ll) & 131072ll) != 0ll) != 0ll ) goto label$655;
	{
		if( *(int64*)((uint8*)&ENV$ + 240ll) != 1ll ) goto label$657;
		{
			struct $7ASTNODE* vr$24 = HOPTRECIPROCAL( N$1 );
			N$1 = vr$24;
		}
		label$657:;
		label$656:;
	}
	label$655:;
	label$654:;
	*(int64*)((uint8*)&AST$ + 464ll) = *(int64*)((uint8*)&AST$ + 464ll) + -1ll;
	fb$result$1 = N$1;
	label$651:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__astzoptimize( void )
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

static void HOPTCONSTREMNEG( struct $7ASTNODE* N$1 )
{
	int64 TMP$77$1;
	label$10:;
	struct $7ASTNODE* L$1;
	struct $7ASTNODE* R$1;
	struct $7ASTNODE* LL$1;
	L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
	if( L$1 == (struct $7ASTNODE*)0ull ) goto label$13;
	{
		HOPTCONSTREMNEG( L$1 );
	}
	label$13:;
	label$12:;
	R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
	if( R$1 == (struct $7ASTNODE*)0ull ) goto label$15;
	{
		HOPTCONSTREMNEG( R$1 );
	}
	label$15:;
	label$14:;
	if( (int64)-(*(int64*)N$1 == 3ll) == 0ll ) goto label$16;
	TMP$77$1 = (int64)-((int64)-(*(int64*)((uint8*)N$1 + 40ll) == 28ll) != 0ll);
	goto label$658;
	label$16:;
	TMP$77$1 = 0ll;
	label$658:;
	if( TMP$77$1 == 0ll ) goto label$18;
	{
		int64 TMP$78$2;
		L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
		R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
		if( (int64)-(*(int64*)L$1 == 4ll) == 0ll ) goto label$19;
		TMP$78$2 = (int64)-((int64)-(*(int64*)((uint8*)L$1 + 40ll) == 54ll) != 0ll);
		goto label$659;
		label$19:;
		TMP$78$2 = 0ll;
		label$659:;
		if( (TMP$78$2 & (int64)-(*(int64*)R$1 == 16ll)) == 0ll ) goto label$21;
		{
			LL$1 = *(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 112ll);
			if( *(int64*)LL$1 != 17ll ) goto label$23;
			{
				*(int64*)((uint8*)N$1 + 40ll) = 29ll;
				*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = R$1;
				*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = LL$1;
				ASTDELNODE( L$1 );
			}
			label$23:;
			label$22:;
		}
		label$21:;
		label$20:;
	}
	label$18:;
	label$17:;
	label$11:;
}

static struct $7ASTNODE* HCONSTACCUMADDSUB( struct $7ASTNODE* N$1, struct $7ASTNODE** ACCUMVAL$1, int64 SIGN$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$24:;
	struct $7ASTNODE* L$1;
	struct $7ASTNODE* R$1;
	int64 DTYPE$1;
	int64 O$1;
	int64 RSIGN$1;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$27;
	{
		fb$result$1 = (struct $7ASTNODE*)0ull;
		goto label$25;
	}
	label$27:;
	label$26:;
	if( *(int64*)N$1 == 3ll ) goto label$29;
	{
		fb$result$1 = N$1;
		goto label$25;
	}
	label$29:;
	label$28:;
	O$1 = *(int64*)((uint8*)N$1 + 40ll);
	{
		if( O$1 == 28ll ) goto label$32;
		label$33:;
		if( O$1 != 29ll ) goto label$31;
		label$32:;
		{
			L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
			R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
			if( O$1 != 29ll ) goto label$35;
			{
				RSIGN$1 = -SIGN$1;
			}
			goto label$34;
			label$35:;
			{
				RSIGN$1 = SIGN$1;
			}
			label$34:;
			if( *(int64*)R$1 != 16ll ) goto label$37;
			{
				if( *ACCUMVAL$1 == (struct $7ASTNODE*)0ull ) goto label$39;
				{
					if( RSIGN$1 >= 0ll ) goto label$41;
					{
						if( O$1 != 28ll ) goto label$43;
						{
							O$1 = 29ll;
						}
						goto label$42;
						label$43:;
						{
							O$1 = 28ll;
						}
						label$42:;
					}
					label$41:;
					label$40:;
					struct $7ASTNODE* vr$18 = ASTNEWBOP( O$1, *ACCUMVAL$1, R$1, (struct $8FBSYMBOL*)0ull, 1ll );
					*ACCUMVAL$1 = vr$18;
				}
				goto label$38;
				label$39:;
				{
					*ACCUMVAL$1 = R$1;
					if( RSIGN$1 >= 0ll ) goto label$45;
					{
						struct $7ASTNODE* vr$23 = ASTNEWUOP( 54ll, *ACCUMVAL$1 );
						*ACCUMVAL$1 = vr$23;
					}
					label$45:;
					label$44:;
				}
				label$38:;
				ASTDELNODE( N$1 );
				struct $7ASTNODE* vr$25 = HCONSTACCUMADDSUB( L$1, ACCUMVAL$1, SIGN$1 );
				N$1 = vr$25;
			}
			goto label$36;
			label$37:;
			{
				struct $7ASTNODE* vr$26 = HCONSTACCUMADDSUB( L$1, ACCUMVAL$1, SIGN$1 );
				*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$26;
				struct $7ASTNODE* vr$28 = HCONSTACCUMADDSUB( R$1, ACCUMVAL$1, RSIGN$1 );
				*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = vr$28;
			}
			label$36:;
		}
		label$31:;
		label$30:;
	}
	fb$result$1 = N$1;
	label$25:;
	return fb$result$1;
}

static struct $7ASTNODE* HCONSTACCUMMUL( struct $7ASTNODE* N$1, struct $7ASTNODE** ACCUMVAL$1 )
{
	int64 TMP$79$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$46:;
	struct $7ASTNODE* L$1;
	struct $7ASTNODE* R$1;
	int64 DTYPE$1;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$49;
	{
		fb$result$1 = (struct $7ASTNODE*)0ull;
		goto label$47;
	}
	label$49:;
	label$48:;
	if( (int64)-(*(int64*)N$1 == 3ll) == 0ll ) goto label$50;
	TMP$79$1 = (int64)-((int64)-(*(int64*)((uint8*)N$1 + 40ll) == 30ll) != 0ll);
	goto label$660;
	label$50:;
	TMP$79$1 = 0ll;
	label$660:;
	if( TMP$79$1 == 0ll ) goto label$52;
	{
		L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
		R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
		if( *(int64*)R$1 != 16ll ) goto label$54;
		{
			if( *ACCUMVAL$1 == (struct $7ASTNODE*)0ull ) goto label$56;
			{
				struct $7ASTNODE* vr$16 = ASTNEWBOP( 30ll, *ACCUMVAL$1, R$1, (struct $8FBSYMBOL*)0ull, 1ll );
				*ACCUMVAL$1 = vr$16;
			}
			goto label$55;
			label$56:;
			{
				*ACCUMVAL$1 = R$1;
			}
			label$55:;
			ASTDELNODE( N$1 );
			struct $7ASTNODE* vr$19 = HCONSTACCUMMUL( L$1, ACCUMVAL$1 );
			N$1 = vr$19;
		}
		goto label$53;
		label$54:;
		{
			struct $7ASTNODE* vr$20 = HCONSTACCUMMUL( L$1, ACCUMVAL$1 );
			*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$20;
			struct $7ASTNODE* vr$22 = HCONSTACCUMMUL( R$1, ACCUMVAL$1 );
			*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = vr$22;
		}
		label$53:;
	}
	label$52:;
	label$51:;
	fb$result$1 = N$1;
	label$47:;
	return fb$result$1;
}

static struct $7ASTNODE* HOPTCONSTACCUM1( struct $7ASTNODE* N$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$57:;
	struct $7ASTNODE* L$1;
	struct $7ASTNODE* R$1;
	struct $7ASTNODE* ACCUMVAL$1;
	int64 O$1;
	if( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) == (struct $7ASTNODE*)0ull ) goto label$60;
	{
		struct $7ASTNODE* vr$4 = HOPTCONSTACCUM1( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
		*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$4;
	}
	label$60:;
	label$59:;
	if( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) == (struct $7ASTNODE*)0ull ) goto label$62;
	{
		struct $7ASTNODE* vr$9 = HOPTCONSTACCUM1( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) );
		*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = vr$9;
	}
	label$62:;
	label$61:;
	if( *(int64*)N$1 != 3ll ) goto label$64;
	{
		R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
		if( *(int64*)R$1 != 16ll ) goto label$66;
		{
			ACCUMVAL$1 = (struct $7ASTNODE*)0ull;
			O$1 = *(int64*)((uint8*)N$1 + 40ll);
			{
				if( O$1 == 28ll ) goto label$69;
				label$70:;
				if( O$1 != 29ll ) goto label$68;
				label$69:;
				{
					struct $7ASTNODE* vr$20 = HCONSTACCUMADDSUB( N$1, &ACCUMVAL$1, 1ll );
					N$1 = vr$20;
					if( ACCUMVAL$1 == (struct $7ASTNODE*)0ull ) goto label$72;
					{
						struct $7ASTNODE* vr$22 = ASTNEWBOP( O$1, N$1, ACCUMVAL$1, (struct $8FBSYMBOL*)0ull, 1ll );
						N$1 = vr$22;
					}
					label$72:;
					label$71:;
				}
				goto label$67;
				label$68:;
				if( O$1 != 30ll ) goto label$73;
				label$74:;
				{
					struct $7ASTNODE* vr$25 = HCONSTACCUMMUL( N$1, &ACCUMVAL$1 );
					N$1 = vr$25;
					if( ACCUMVAL$1 == (struct $7ASTNODE*)0ull ) goto label$76;
					{
						struct $7ASTNODE* vr$27 = ASTNEWBOP( 30ll, N$1, ACCUMVAL$1, (struct $8FBSYMBOL*)0ull, 1ll );
						N$1 = vr$27;
					}
					label$76:;
					label$75:;
				}
				label$73:;
				label$67:;
			}
		}
		label$66:;
		label$65:;
	}
	label$64:;
	label$63:;
	fb$result$1 = N$1;
	label$58:;
	return fb$result$1;
}

static struct $7ASTNODE* HOPTCONSTACCUM2( struct $7ASTNODE* N$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$77:;
	struct $7ASTNODE* L$1;
	struct $7ASTNODE* R$1;
	struct $7ASTNODE* ACCUMVAL$1;
	if( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) == (struct $7ASTNODE*)0ull ) goto label$80;
	{
		struct $7ASTNODE* vr$4 = HOPTCONSTACCUM2( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
		*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$4;
	}
	label$80:;
	label$79:;
	if( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) == (struct $7ASTNODE*)0ull ) goto label$82;
	{
		struct $7ASTNODE* vr$9 = HOPTCONSTACCUM2( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) );
		*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = vr$9;
	}
	label$82:;
	label$81:;
	if( *(int64*)N$1 != 3ll ) goto label$84;
	{
		ACCUMVAL$1 = (struct $7ASTNODE*)0ull;
		{
			int64 TMP$80$3;
			TMP$80$3 = *(int64*)((uint8*)N$1 + 40ll);
			if( TMP$80$3 != 28ll ) goto label$86;
			label$87:;
			{
				{
					uint64 TMP$81$5;
					TMP$81$5 = (uint64)(*(int64*)((uint8*)N$1 + 8ll) & 511ll);
					goto label$89;
					label$90:;
					{
					}
					goto label$88;
					label$91:;
					{
						struct $7ASTNODE* vr$18 = HCONSTACCUMADDSUB( N$1, &ACCUMVAL$1, 1ll );
						N$1 = vr$18;
						if( ACCUMVAL$1 == (struct $7ASTNODE*)0ull ) goto label$93;
						{
							struct $7ASTNODE* vr$20 = ASTNEWBOP( 28ll, N$1, ACCUMVAL$1, (struct $8FBSYMBOL*)0ull, 1ll );
							N$1 = vr$20;
						}
						label$93:;
						label$92:;
					}
					goto label$88;
					label$89:;
					static const void* tmp$143[12ll] = {
						&&label$90,
						&&label$91,
						&&label$91,
						&&label$91,
						&&label$91,
						&&label$91,
						&&label$91,
						&&label$91,
						&&label$91,
						&&label$91,
						&&label$90,
						&&label$90,
					};
					if( TMP$81$5 < 6ll ) goto label$91;
					if( TMP$81$5 > 17ll ) goto label$91;
					goto *tmp$143[TMP$81$5 - 6ll];
					label$88:;
				}
			}
			goto label$85;
			label$86:;
			if( TMP$80$3 != 30ll ) goto label$94;
			label$95:;
			{
				struct $7ASTNODE* vr$23 = HCONSTACCUMMUL( N$1, &ACCUMVAL$1 );
				N$1 = vr$23;
				if( ACCUMVAL$1 == (struct $7ASTNODE*)0ull ) goto label$97;
				{
					struct $7ASTNODE* vr$25 = ASTNEWBOP( 30ll, N$1, ACCUMVAL$1, (struct $8FBSYMBOL*)0ull, 1ll );
					N$1 = vr$25;
				}
				label$97:;
				label$96:;
			}
			label$94:;
			label$85:;
		}
	}
	label$84:;
	label$83:;
	fb$result$1 = N$1;
	label$78:;
	return fb$result$1;
}

static struct $7ASTNODE* HCONSTDISTMUL( struct $7ASTNODE* N$1, struct $7ASTNODE** ACCUMVAL$1 )
{
	int64 TMP$82$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$98:;
	struct $7ASTNODE* L$1;
	struct $7ASTNODE* R$1;
	int64 DTYPE$1;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$101;
	{
		fb$result$1 = (struct $7ASTNODE*)0ull;
		goto label$99;
	}
	label$101:;
	label$100:;
	if( (int64)-(*(int64*)N$1 == 3ll) == 0ll ) goto label$102;
	TMP$82$1 = (int64)-((int64)-(*(int64*)((uint8*)N$1 + 40ll) == 28ll) != 0ll);
	goto label$661;
	label$102:;
	TMP$82$1 = 0ll;
	label$661:;
	if( TMP$82$1 == 0ll ) goto label$104;
	{
		L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
		R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
		if( *(int64*)R$1 != 16ll ) goto label$106;
		{
			if( *ACCUMVAL$1 == (struct $7ASTNODE*)0ull ) goto label$108;
			{
				struct $7ASTNODE* vr$16 = ASTNEWBOP( 28ll, *ACCUMVAL$1, R$1, (struct $8FBSYMBOL*)0ull, 1ll );
				*ACCUMVAL$1 = vr$16;
			}
			goto label$107;
			label$108:;
			{
				*ACCUMVAL$1 = R$1;
			}
			label$107:;
			ASTDELNODE( N$1 );
			struct $7ASTNODE* vr$19 = HCONSTDISTMUL( L$1, ACCUMVAL$1 );
			N$1 = vr$19;
		}
		goto label$105;
		label$106:;
		{
			struct $7ASTNODE* vr$20 = HCONSTDISTMUL( L$1, ACCUMVAL$1 );
			*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$20;
			struct $7ASTNODE* vr$22 = HCONSTDISTMUL( R$1, ACCUMVAL$1 );
			*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = vr$22;
		}
		label$105:;
	}
	label$104:;
	label$103:;
	fb$result$1 = N$1;
	label$99:;
	return fb$result$1;
}

static struct $7ASTNODE* HOPTCONSTDISTMUL( struct $7ASTNODE* N$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$109:;
	struct $7ASTNODE* ACCUMVAL$1;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$112;
	{
		fb$result$1 = (struct $7ASTNODE*)0ull;
		goto label$110;
	}
	label$112:;
	label$111:;
	if( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) == (struct $7ASTNODE*)0ull ) goto label$114;
	{
		struct $7ASTNODE* vr$5 = HOPTCONSTDISTMUL( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
		*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$5;
	}
	label$114:;
	label$113:;
	if( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) == (struct $7ASTNODE*)0ull ) goto label$116;
	{
		struct $7ASTNODE* vr$10 = HOPTCONSTDISTMUL( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) );
		*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = vr$10;
	}
	label$116:;
	label$115:;
	if( *(int64*)N$1 != 3ll ) goto label$118;
	{
		if( *(int64*)*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) != 16ll ) goto label$120;
		{
			if( *(int64*)((uint8*)N$1 + 40ll) != 30ll ) goto label$122;
			{
				ACCUMVAL$1 = (struct $7ASTNODE*)0ull;
				struct $7ASTNODE* vr$21 = HCONSTDISTMUL( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), &ACCUMVAL$1 );
				*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$21;
				if( ACCUMVAL$1 == (struct $7ASTNODE*)0ull ) goto label$124;
				{
					struct $7ASTNODE* vr$25 = ASTCLONETREE( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) );
					struct $7ASTNODE* vr$26 = ASTNEWBOP( 30ll, ACCUMVAL$1, vr$25, (struct $8FBSYMBOL*)0ull, 1ll );
					ACCUMVAL$1 = vr$26;
					struct $7ASTNODE* vr$27 = ASTNEWBOP( 28ll, N$1, ACCUMVAL$1, (struct $8FBSYMBOL*)0ull, 1ll );
					N$1 = vr$27;
				}
				label$124:;
				label$123:;
			}
			label$122:;
			label$121:;
		}
		label$120:;
		label$119:;
	}
	label$118:;
	label$117:;
	fb$result$1 = N$1;
	label$110:;
	return fb$result$1;
}

static void HOPTCONSTIDXMULT( struct $7ASTNODE* N$1 )
{
	int64 TMP$83$1;
	int64 TMP$85$1;
	int64 TMP$86$1;
	label$125:;
	int64 OPTIMIZE$1;
	int64 C$1;
	struct $7ASTNODE* L$1;
	L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
	if( (int64)-(*(int64*)L$1 == 3ll) == 0ll ) goto label$127;
	TMP$83$1 = (int64)-((int64)-(*(int64*)((uint8*)L$1 + 40ll) == 30ll) != 0ll);
	goto label$662;
	label$127:;
	TMP$83$1 = 0ll;
	label$662:;
	if( TMP$83$1 == 0ll ) goto label$129;
	{
		struct $7ASTNODE* LR$2;
		LR$2 = *(struct $7ASTNODE**)((uint8*)L$1 + 120ll);
		if( *(int64*)LR$2 != 16ll ) goto label$131;
		{
			if( (*(int64*)((uint8*)&IR$ + 568ll) & 65536ll) == 0ll ) goto label$133;
			{
				C$1 = *(int64*)((uint8*)LR$2 + 40ll);
				if( ((int64)-(C$1 >= 1ll) & (int64)-(C$1 <= 9ll)) == 0ll ) goto label$135;
				{
					{
						uint64 TMP$84$6;
						TMP$84$6 = (uint64)C$1;
						goto label$137;
						label$138:;
						{
							OPTIMIZE$1 = -1ll;
						}
						goto label$136;
						label$139:;
						{
							OPTIMIZE$1 = -1ll;
							struct $8FBSYMBOL* S$7;
							S$7 = *(struct $8FBSYMBOL**)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) + 24ll);
							if( (*(int64*)((uint8*)S$7 + 8ll) & 458752ll) == 0ll ) goto label$141;
							{
								OPTIMIZE$1 = 0ll;
							}
							goto label$140;
							label$141:;
							if( (*(int64*)((uint8*)S$7 + 8ll) & 128ll) == 0ll ) goto label$142;
							{
								if( (int64)-((*(int64*)((uint8*)S$7 + 8ll) & 2ll) != 0ll) != 0ll ) goto label$144;
								{
									OPTIMIZE$1 = 0ll;
								}
								label$144:;
								label$143:;
							}
							label$142:;
							label$140:;
						}
						goto label$136;
						label$145:;
						{
							OPTIMIZE$1 = 0ll;
						}
						goto label$136;
						label$137:;
						static const void* tmp$144[9ll] = {
							&&label$138,
							&&label$138,
							&&label$139,
							&&label$138,
							&&label$139,
							&&label$145,
							&&label$145,
							&&label$138,
							&&label$139,
						};
						if( TMP$84$6 < 1ll ) goto label$145;
						if( TMP$84$6 > 9ll ) goto label$145;
						goto *tmp$144[TMP$84$6 - 1ll];
						label$136:;
					}
					if( OPTIMIZE$1 == 0ll ) goto label$147;
					{
						*(int64*)((uint8*)N$1 + 48ll) = C$1;
						*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = *(struct $7ASTNODE**)((uint8*)L$1 + 112ll);
						ASTDELNODE( LR$2 );
						ASTDELNODE( L$1 );
						L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
					}
					label$147:;
					label$146:;
				}
				label$135:;
				label$134:;
			}
			label$133:;
			label$132:;
		}
		label$131:;
		label$130:;
	}
	label$129:;
	label$128:;
	if( ((*(int64*)((uint8*)L$1 + 8ll) & 511ll) & 480ll) == 0ll ) goto label$148;
	TMP$85$1 = 22ll;
	goto label$663;
	label$148:;
	TMP$85$1 = (*(int64*)((uint8*)L$1 + 8ll) & 511ll) & 31ll;
	label$663:;
	if( ((*(int64*)((uint8*)L$1 + 8ll) & 511ll) & 480ll) == 0ll ) goto label$149;
	TMP$86$1 = 22ll;
	goto label$664;
	label$149:;
	TMP$86$1 = (*(int64*)((uint8*)L$1 + 8ll) & 511ll) & 31ll;
	label$664:;
	if( ((int64)-(*(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$85$1 * 56ll)) != 0ll) | (int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$86$1 * 56ll)) + 8ll) != *(int64*)((uint8*)&ENV$ + 472ll))) == 0ll ) goto label$151;
	{
		struct $7ASTNODE* vr$55 = ASTNEWCONV( 7ll, (struct $8FBSYMBOL*)0ull, L$1, 0ll, (int64*)0ull );
		*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$55;
	}
	label$151:;
	label$150:;
	label$126:;
}

static int64 ASTINCOFFSET( struct $7ASTNODE* N$1, int64 OFS$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$152:;
	{
		uint64 TMP$87$2;
		TMP$87$2 = *(uint64*)N$1;
		goto label$155;
		label$156:;
		{
			*(int64*)((uint8*)N$1 + 40ll) = *(int64*)((uint8*)N$1 + 40ll) + OFS$1;
			fb$result$1 = -1ll;
		}
		goto label$154;
		label$157:;
		{
			*(int64*)((uint8*)N$1 + 40ll) = *(int64*)((uint8*)N$1 + 40ll) + OFS$1;
			fb$result$1 = -1ll;
		}
		goto label$154;
		label$158:;
		{
			*(int64*)((uint8*)N$1 + 40ll) = *(int64*)((uint8*)N$1 + 40ll) + OFS$1;
			fb$result$1 = -1ll;
		}
		goto label$154;
		label$159:;
		{
			if( *(int64*)((uint8*)N$1 + 40ll) == 0ll ) goto label$161;
			{
				int64 vr$14 = ASTINCOFFSET( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), OFS$1 );
				fb$result$1 = vr$14;
			}
			goto label$160;
			label$161:;
			{
				int64 vr$16 = ASTINCOFFSET( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll), OFS$1 );
				fb$result$1 = vr$16;
			}
			label$160:;
		}
		goto label$154;
		label$162:;
		{
			int64 vr$18 = ASTINCOFFSET( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), OFS$1 );
			fb$result$1 = vr$18;
		}
		goto label$154;
		label$163:;
		{
			if( *(int64*)((uint8*)N$1 + 40ll) != 0ll ) goto label$165;
			{
				int64 vr$22 = ASTINCOFFSET( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), OFS$1 );
				fb$result$1 = vr$22;
			}
			goto label$164;
			label$165:;
			{
				fb$result$1 = 0ll;
			}
			label$164:;
		}
		goto label$154;
		label$166:;
		{
			fb$result$1 = 0ll;
		}
		goto label$154;
		label$155:;
		static const void* tmp$145[22ll] = {
			&&label$163,
			&&label$166,
			&&label$166,
			&&label$166,
			&&label$166,
			&&label$166,
			&&label$166,
			&&label$166,
			&&label$166,
			&&label$166,
			&&label$159,
			&&label$166,
			&&label$156,
			&&label$157,
			&&label$162,
			&&label$158,
			&&label$166,
			&&label$166,
			&&label$166,
			&&label$166,
			&&label$166,
			&&label$162,
		};
		if( TMP$87$2 < 5ll ) goto label$166;
		if( TMP$87$2 > 26ll ) goto label$166;
		goto *tmp$145[TMP$87$2 - 5ll];
		label$154:;
	}
	label$153:;
	return fb$result$1;
}

static struct $7ASTNODE* HOPTDEREFADDR( struct $7ASTNODE* N$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$167:;
	struct $7ASTNODE* L$1;
	L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
	int64 OFS$1;
	OFS$1 = 0ll;
	{
		$13AST_NODECLASS TMP$88$2;
		TMP$88$2 = *($13AST_NODECLASS*)L$1;
		if( TMP$88$2 != 23ll ) goto label$170;
		label$171:;
		{
			int64 vr$6 = ASTGETOFFSETCHILDOFS( *(struct $7ASTNODE**)((uint8*)L$1 + 112ll) );
			OFS$1 = *(int64*)((uint8*)L$1 + 40ll) - vr$6;
		}
		goto label$169;
		label$170:;
		if( TMP$88$2 != 6ll ) goto label$172;
		label$173:;
		{
		}
		goto label$169;
		label$172:;
		{
			fb$result$1 = N$1;
			goto label$168;
		}
		label$174:;
		label$169:;
	}
	OFS$1 = OFS$1 + *(int64*)((uint8*)N$1 + 40ll);
	int64 vr$12 = ASTINCOFFSET( *(struct $7ASTNODE**)((uint8*)L$1 + 112ll), OFS$1 );
	if( vr$12 != 0ll ) goto label$176;
	{
		fb$result$1 = N$1;
		goto label$168;
	}
	label$176:;
	label$175:;
	int64 DTYPE$1;
	DTYPE$1 = *(int64*)((uint8*)N$1 + 8ll);
	struct $8FBSYMBOL* SUBTYPE$1;
	SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll);
	ASTDELNODE( N$1 );
	N$1 = *(struct $7ASTNODE**)((uint8*)L$1 + 112ll);
	ASTDELNODE( L$1 );
	ASTSETTYPE( N$1, DTYPE$1, SUBTYPE$1 );
	fb$result$1 = N$1;
	label$168:;
	return fb$result$1;
}

static struct $7ASTNODE* HOPTCONSTIDX( struct $7ASTNODE* N$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$177:;
	struct $7ASTNODE* L$1;
	struct $7ASTNODE* R$1;
	struct $7ASTNODE* ACCUMVAL$1;
	int64 C$1;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$180;
	{
		fb$result$1 = (struct $7ASTNODE*)0ull;
		goto label$178;
	}
	label$180:;
	label$179:;
	L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
	if( L$1 == (struct $7ASTNODE*)0ull ) goto label$182;
	{
		struct $7ASTNODE* vr$4 = HOPTCONSTIDX( L$1 );
		*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$4;
	}
	label$182:;
	label$181:;
	R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
	if( R$1 == (struct $7ASTNODE*)0ull ) goto label$184;
	{
		struct $7ASTNODE* vr$8 = HOPTCONSTIDX( R$1 );
		*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = vr$8;
	}
	label$184:;
	label$183:;
	{
		$13AST_NODECLASS TMP$89$2;
		TMP$89$2 = *($13AST_NODECLASS*)N$1;
		if( TMP$89$2 == 18ll ) goto label$187;
		label$188:;
		if( TMP$89$2 != 20ll ) goto label$186;
		label$187:;
		{
			if( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) == (struct $7ASTNODE*)0ull ) goto label$190;
			{
				ACCUMVAL$1 = (struct $7ASTNODE*)0ull;
				struct $7ASTNODE* vr$17 = HCONSTACCUMADDSUB( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), &ACCUMVAL$1, 1ll );
				*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$17;
				if( ACCUMVAL$1 == (struct $7ASTNODE*)0ull ) goto label$192;
				{
					int64 vr$20 = ASTCONSTFLUSHTOINT( ACCUMVAL$1 );
					C$1 = vr$20;
					if( *(int64*)N$1 != 18ll ) goto label$194;
					{
						*(int64*)((uint8*)N$1 + 40ll) = *(int64*)((uint8*)N$1 + 40ll) + (C$1 * *(int64*)((uint8*)N$1 + 48ll));
					}
					goto label$193;
					label$194:;
					{
						*(int64*)((uint8*)N$1 + 40ll) = *(int64*)((uint8*)N$1 + 40ll) + C$1;
					}
					label$193:;
				}
				label$192:;
				label$191:;
				if( *(int64*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) != 16ll ) goto label$196;
				{
					int64 vr$35 = ASTCONSTFLUSHTOINT( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
					C$1 = vr$35;
					*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = (struct $7ASTNODE*)0ull;
					if( *(int64*)N$1 != 18ll ) goto label$198;
					{
						*(int64*)((uint8*)N$1 + 40ll) = *(int64*)((uint8*)N$1 + 40ll) + (C$1 * *(int64*)((uint8*)N$1 + 48ll));
					}
					goto label$197;
					label$198:;
					{
						*(int64*)((uint8*)N$1 + 40ll) = *(int64*)((uint8*)N$1 + 40ll) + C$1;
					}
					label$197:;
				}
				goto label$195;
				label$196:;
				{
					if( *(int64*)N$1 != 18ll ) goto label$200;
					{
						HOPTCONSTIDXMULT( N$1 );
					}
					goto label$199;
					label$200:;
					{
						struct $7ASTNODE* vr$49 = HOPTDEREFADDR( N$1 );
						N$1 = vr$49;
					}
					label$199:;
				}
				label$195:;
			}
			label$190:;
			label$189:;
		}
		label$186:;
		label$185:;
	}
	fb$result$1 = N$1;
	label$178:;
	return fb$result$1;
}

static struct $7ASTNODE* HMERGENESTEDFIELDS( struct $7ASTNODE* N$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$201:;
	struct $7ASTNODE* L$1;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$204;
	{
		fb$result$1 = (struct $7ASTNODE*)0ull;
		goto label$202;
	}
	label$204:;
	label$203:;
	struct $7ASTNODE* vr$3 = HMERGENESTEDFIELDS( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
	*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$3;
	struct $7ASTNODE* vr$6 = HMERGENESTEDFIELDS( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) );
	*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = vr$6;
	if( *(int64*)N$1 != 19ll ) goto label$206;
	{
		L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
		struct $7ASTNODE* LL$2;
		LL$2 = *(struct $7ASTNODE**)((uint8*)L$1 + 112ll);
		if( ((int64)-(*(int64*)L$1 == 20ll) & (int64)-(LL$2 != (struct $7ASTNODE*)0ull)) == 0ll ) goto label$208;
		{
			if( *(int64*)LL$2 != 3ll ) goto label$210;
			{
				struct $7ASTNODE* LLL$4;
				LLL$4 = *(struct $7ASTNODE**)((uint8*)LL$2 + 112ll);
				if( *(int64*)LLL$4 != 6ll ) goto label$212;
				{
					struct $7ASTNODE* LLLL$5;
					LLLL$5 = *(struct $7ASTNODE**)((uint8*)LLL$4 + 112ll);
					if( *(int64*)LLLL$5 != 19ll ) goto label$214;
					{
						struct $7ASTNODE* LLLLL$6;
						LLLLL$6 = *(struct $7ASTNODE**)((uint8*)LLLL$5 + 112ll);
						struct $7ASTNODE* LLLLLL$6;
						LLLLLL$6 = *(struct $7ASTNODE**)((uint8*)LLLLL$6 + 112ll);
						if( ((int64)-(*(int64*)LLLLL$6 == 20ll) & (int64)-(LLLLLL$6 != (struct $7ASTNODE*)0ull)) == 0ll ) goto label$216;
						{
							struct $7ASTNODE* vr$33 = ASTNEWBOP( 28ll, LLLLLL$6, *(struct $7ASTNODE**)((uint8*)LL$2 + 120ll), (struct $8FBSYMBOL*)0ull, 1ll );
							*(struct $7ASTNODE**)((uint8*)L$1 + 112ll) = vr$33;
							ASTDELNODE( LL$2 );
							ASTDELNODE( LLL$4 );
							ASTDELNODE( LLLL$5 );
							ASTDELNODE( LLLLL$6 );
						}
						label$216:;
						label$215:;
					}
					label$214:;
					label$213:;
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
	label$206:;
	label$205:;
	fb$result$1 = N$1;
	label$202:;
	return fb$result$1;
}

static struct $7ASTNODE* HOPTASSOCADD( struct $7ASTNODE* N$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$217:;
	struct $7ASTNODE* L$1;
	struct $7ASTNODE* R$1;
	struct $7ASTNODE* N_OLD$1;
	int64 OP$1;
	int64 ROP$1;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$220;
	{
		fb$result$1 = (struct $7ASTNODE*)0ull;
		goto label$218;
	}
	label$220:;
	label$219:;
	if( *(int64*)N$1 != 3ll ) goto label$222;
	{
		OP$1 = *(int64*)((uint8*)N$1 + 40ll);
		{
			if( OP$1 == 28ll ) goto label$225;
			label$226:;
			if( OP$1 != 29ll ) goto label$224;
			label$225:;
			{
				{
					int64 TMP$90$5;
					TMP$90$5 = *(int64*)((uint8*)N$1 + 8ll) & 511ll;
					if( TMP$90$5 == 16ll ) goto label$229;
					label$230:;
					if( TMP$90$5 == 17ll ) goto label$229;
					label$231:;
					if( TMP$90$5 != 6ll ) goto label$228;
					label$229:;
					{
					}
					goto label$227;
					label$228:;
					{
						R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
						if( *(int64*)R$1 != 3ll ) goto label$234;
						{
							ROP$1 = *(int64*)((uint8*)R$1 + 40ll);
							{
								if( ROP$1 == 28ll ) goto label$237;
								label$238:;
								if( ROP$1 != 29ll ) goto label$236;
								label$237:;
								{
									if( OP$1 != 29ll ) goto label$240;
									{
										if( ROP$1 != 29ll ) goto label$242;
										{
											OP$1 = 28ll;
										}
										goto label$241;
										label$242:;
										{
											ROP$1 = 29ll;
										}
										label$241:;
									}
									goto label$239;
									label$240:;
									{
										if( ROP$1 != 29ll ) goto label$244;
										{
											OP$1 = 29ll;
											ROP$1 = 28ll;
										}
										label$244:;
										label$243:;
									}
									label$239:;
									N_OLD$1 = N$1;
									struct $7ASTNODE* vr$24 = ASTNEWBOP( ROP$1, *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), *(struct $7ASTNODE**)((uint8*)R$1 + 112ll), (struct $8FBSYMBOL*)0ull, 1ll );
									struct $7ASTNODE* vr$25 = ASTNEWBOP( OP$1, vr$24, *(struct $7ASTNODE**)((uint8*)R$1 + 120ll), (struct $8FBSYMBOL*)0ull, 1ll );
									N$1 = vr$25;
									ASTDELNODE( R$1 );
									ASTDELNODE( N_OLD$1 );
								}
								label$236:;
								label$235:;
							}
						}
						label$234:;
						label$233:;
					}
					label$232:;
					label$227:;
				}
			}
			label$224:;
			label$223:;
		}
	}
	label$222:;
	label$221:;
	L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
	if( L$1 == (struct $7ASTNODE*)0ull ) goto label$246;
	{
		struct $7ASTNODE* vr$28 = HOPTASSOCADD( L$1 );
		*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$28;
	}
	label$246:;
	label$245:;
	R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
	if( R$1 == (struct $7ASTNODE*)0ull ) goto label$248;
	{
		struct $7ASTNODE* vr$32 = HOPTASSOCADD( R$1 );
		*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = vr$32;
	}
	label$248:;
	label$247:;
	fb$result$1 = N$1;
	label$218:;
	return fb$result$1;
}

static struct $7ASTNODE* HOPTASSOCMUL( struct $7ASTNODE* N$1 )
{
	int64 TMP$91$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$249:;
	struct $7ASTNODE* L$1;
	struct $7ASTNODE* R$1;
	struct $7ASTNODE* N_OLD$1;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$252;
	{
		fb$result$1 = (struct $7ASTNODE*)0ull;
		goto label$250;
	}
	label$252:;
	label$251:;
	if( (int64)-(*(int64*)N$1 == 3ll) == 0ll ) goto label$253;
	TMP$91$1 = (int64)-((int64)-(*(int64*)((uint8*)N$1 + 40ll) == 30ll) != 0ll);
	goto label$665;
	label$253:;
	TMP$91$1 = 0ll;
	label$665:;
	if( TMP$91$1 == 0ll ) goto label$255;
	{
		int64 TMP$92$2;
		R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
		if( (int64)-(*(int64*)R$1 == 3ll) == 0ll ) goto label$256;
		TMP$92$2 = (int64)-((int64)-(*(int64*)((uint8*)R$1 + 40ll) == 30ll) != 0ll);
		goto label$666;
		label$256:;
		TMP$92$2 = 0ll;
		label$666:;
		if( TMP$92$2 == 0ll ) goto label$258;
		{
			N_OLD$1 = N$1;
			struct $7ASTNODE* vr$20 = ASTNEWBOP( 30ll, *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), *(struct $7ASTNODE**)((uint8*)R$1 + 112ll), (struct $8FBSYMBOL*)0ull, 1ll );
			struct $7ASTNODE* vr$21 = ASTNEWBOP( 30ll, vr$20, *(struct $7ASTNODE**)((uint8*)R$1 + 120ll), (struct $8FBSYMBOL*)0ull, 1ll );
			N$1 = vr$21;
			ASTDELNODE( R$1 );
			ASTDELNODE( N_OLD$1 );
		}
		label$258:;
		label$257:;
	}
	label$255:;
	label$254:;
	L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
	if( L$1 == (struct $7ASTNODE*)0ull ) goto label$260;
	{
		struct $7ASTNODE* vr$24 = HOPTASSOCMUL( L$1 );
		*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$24;
	}
	label$260:;
	label$259:;
	R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
	if( R$1 == (struct $7ASTNODE*)0ull ) goto label$262;
	{
		struct $7ASTNODE* vr$28 = HOPTASSOCMUL( R$1 );
		*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = vr$28;
	}
	label$262:;
	label$261:;
	fb$result$1 = N$1;
	label$250:;
	return fb$result$1;
}

static void HDIVTOSHIFT_SIGNED( struct $7ASTNODE* N$1, int64 CONST_VAL$1 )
{
	int64 TMP$93$1;
	label$263:;
	struct $7ASTNODE* L$1;
	struct $7ASTNODE* L_CPY$1;
	int64 DTYPE$1;
	int64 BITS$1;
	L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
	if( *(int64*)L$1 == 17ll ) goto label$266;
	{
		goto label$264;
	}
	label$266:;
	label$265:;
	DTYPE$1 = *(int64*)((uint8*)L$1 + 8ll);
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$267;
	TMP$93$1 = 22ll;
	goto label$667;
	label$267:;
	TMP$93$1 = DTYPE$1 & 31ll;
	label$667:;
	BITS$1 = (*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$93$1 * 56ll)) + 8ll) << 3ll) + -1ll;
	if( BITS$1 != 7ll ) goto label$269;
	{
		BITS$1 = (*(int64*)((uint8*)SYMB_DTYPETB$ + 400ll) << 3ll) + -1ll;
	}
	label$269:;
	label$268:;
	struct $7ASTNODE* vr$13 = ASTCLONETREE( L$1 );
	L_CPY$1 = vr$13;
	if( CONST_VAL$1 != 1ll ) goto label$271;
	{
		struct $7ASTNODE* vr$15 = ASTNEWCONSTI( BITS$1, 7ll, (struct $8FBSYMBOL*)0ull );
		int64 vr$16 = TYPETOUNSIGNED( DTYPE$1 );
		struct $7ASTNODE* vr$17 = ASTNEWCONV( vr$16, (struct $8FBSYMBOL*)0ull, L$1, 1ll, (int64*)0ull );
		struct $7ASTNODE* vr$18 = ASTNEWBOP( 42ll, vr$17, vr$15, (struct $8FBSYMBOL*)0ull, 1ll );
		struct $7ASTNODE* vr$19 = ASTNEWBOP( 28ll, L_CPY$1, vr$18, (struct $8FBSYMBOL*)0ull, 1ll );
		struct $7ASTNODE* vr$20 = ASTNEWCONV( DTYPE$1, (struct $8FBSYMBOL*)0ull, vr$19, 1ll, (int64*)0ull );
		*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$20;
	}
	goto label$270;
	label$271:;
	{
		struct $7ASTNODE* vr$24 = ASTNEWCONSTI( (1ll << CONST_VAL$1) + -1ll, 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$25 = ASTNEWCONSTI( BITS$1, 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$26 = ASTNEWBOP( 42ll, L$1, vr$25, (struct $8FBSYMBOL*)0ull, 1ll );
		struct $7ASTNODE* vr$27 = ASTNEWBOP( 34ll, vr$26, vr$24, (struct $8FBSYMBOL*)0ull, 1ll );
		struct $7ASTNODE* vr$28 = ASTNEWBOP( 28ll, L_CPY$1, vr$27, (struct $8FBSYMBOL*)0ull, 1ll );
		struct $7ASTNODE* vr$29 = ASTNEWCONV( DTYPE$1, (struct $8FBSYMBOL*)0ull, vr$28, 1ll, (int64*)0ull );
		*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$29;
	}
	label$270:;
	*(int64*)((uint8*)N$1 + 40ll) = 42ll;
	*(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) + 40ll) = CONST_VAL$1;
	label$264:;
}

static int64 HTOPOW2( uint64 V$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$272:;
	{
		int64 I$2;
		I$2 = 1ll;
		label$277:;
		{
			if( V$1 != (1ull << I$2) ) goto label$279;
			{
				fb$result$1 = I$2;
				goto label$273;
			}
			label$279:;
			label$278:;
		}
		label$275:;
		I$2 = I$2 + 1ll;
		label$274:;
		if( I$2 <= 63ll ) goto label$277;
		label$276:;
	}
	fb$result$1 = 0ll;
	label$273:;
	return fb$result$1;
}

static void HOPTTOSHIFT( struct $7ASTNODE* N$1 )
{
	label$280:;
	struct $7ASTNODE* L$1;
	struct $7ASTNODE* R$1;
	int64 OP$1;
	int64 EXPONENT$1;
	int64 VALUE$1;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$283;
	{
		goto label$281;
	}
	label$283:;
	label$282:;
	if( *(int64*)N$1 != 3ll ) goto label$285;
	{
		OP$1 = *(int64*)((uint8*)N$1 + 40ll);
		{
			if( OP$1 == 30ll ) goto label$288;
			label$289:;
			if( OP$1 == 32ll ) goto label$288;
			label$290:;
			if( OP$1 != 33ll ) goto label$287;
			label$288:;
			{
				int64 TMP$94$4;
				int64 TMP$95$4;
				R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
				if( (*(int64*)((uint8*)N$1 + 8ll) & 480ll) == 0ll ) goto label$291;
				TMP$94$4 = 22ll;
				goto label$668;
				label$291:;
				TMP$94$4 = *(int64*)((uint8*)N$1 + 8ll) & 31ll;
				label$668:;
				if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$94$4 * 56ll)) == 0ll ) goto label$293;
				{
					goto label$286;
				}
				label$293:;
				label$292:;
				if( (int64)-(*(int64*)R$1 == 16ll) != 0ll ) goto label$295;
				{
					goto label$286;
				}
				label$295:;
				label$294:;
				VALUE$1 = *(int64*)((uint8*)R$1 + 40ll);
				if( (*(int64*)((uint8*)R$1 + 8ll) & 480ll) == 0ll ) goto label$296;
				TMP$95$4 = 22ll;
				goto label$669;
				label$296:;
				TMP$95$4 = *(int64*)((uint8*)R$1 + 8ll) & 31ll;
				label$669:;
				if( ((int64)-(VALUE$1 == 0ll) | ((int64)-(VALUE$1 < 0ll) & *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$95$4 * 56ll)) + 16ll))) == 0ll ) goto label$298;
				{
					goto label$286;
				}
				label$298:;
				label$297:;
				int64 vr$30 = HTOPOW2( (uint64)VALUE$1 );
				EXPONENT$1 = vr$30;
				if( EXPONENT$1 > 0ll ) goto label$300;
				{
					goto label$286;
				}
				label$300:;
				label$299:;
				{
					if( OP$1 != 30ll ) goto label$302;
					label$303:;
					{
						int64 TMP$96$6;
						if( (*(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 8ll) & 480ll) == 0ll ) goto label$304;
						TMP$96$6 = 22ll;
						goto label$670;
						label$304:;
						TMP$96$6 = *(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 8ll) & 31ll;
						label$670:;
						if( EXPONENT$1 <= (*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$96$6 * 56ll)) + 8ll) << 3ll) ) goto label$306;
						{
							goto label$286;
						}
						label$306:;
						label$305:;
						*(int64*)((uint8*)N$1 + 40ll) = 41ll;
						*(int64*)((uint8*)R$1 + 40ll) = EXPONENT$1;
					}
					goto label$301;
					label$302:;
					if( OP$1 != 32ll ) goto label$307;
					label$308:;
					{
						int64 TMP$97$6;
						int64 TMP$98$6;
						if( (*(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 8ll) & 480ll) == 0ll ) goto label$309;
						TMP$97$6 = 22ll;
						goto label$671;
						label$309:;
						TMP$97$6 = *(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 8ll) & 31ll;
						label$671:;
						if( EXPONENT$1 <= (*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$97$6 * 56ll)) + 8ll) << 3ll) ) goto label$311;
						{
							goto label$286;
						}
						label$311:;
						label$310:;
						if( (*(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 8ll) & 480ll) == 0ll ) goto label$312;
						TMP$98$6 = 22ll;
						goto label$672;
						label$312:;
						TMP$98$6 = *(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 8ll) & 31ll;
						label$672:;
						if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$98$6 * 56ll)) + 16ll) != 0ll ) goto label$314;
						{
							*(int64*)((uint8*)N$1 + 40ll) = 42ll;
							*(int64*)((uint8*)R$1 + 40ll) = EXPONENT$1;
						}
						goto label$313;
						label$314:;
						{
							HDIVTOSHIFT_SIGNED( N$1, EXPONENT$1 );
						}
						label$313:;
					}
					goto label$301;
					label$307:;
					if( OP$1 != 33ll ) goto label$315;
					label$316:;
					{
						int64 TMP$99$6;
						if( ((*(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 8ll) & 511ll) & 480ll) == 0ll ) goto label$317;
						TMP$99$6 = 22ll;
						goto label$673;
						label$317:;
						TMP$99$6 = (*(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 8ll) & 511ll) & 31ll;
						label$673:;
						if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$99$6 * 56ll)) + 16ll) == 0ll ) goto label$319;
						{
							goto label$286;
						}
						label$319:;
						label$318:;
						*(int64*)((uint8*)N$1 + 40ll) = 34ll;
						*(int64*)((uint8*)R$1 + 40ll) = *(int64*)((uint8*)R$1 + 40ll) + -1ll;
					}
					label$315:;
					label$301:;
				}
			}
			label$287:;
			label$286:;
		}
	}
	label$285:;
	label$284:;
	L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
	if( L$1 == (struct $7ASTNODE*)0ull ) goto label$321;
	{
		HOPTTOSHIFT( L$1 );
	}
	label$321:;
	label$320:;
	R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
	if( R$1 == (struct $7ASTNODE*)0ull ) goto label$323;
	{
		HOPTTOSHIFT( R$1 );
	}
	label$323:;
	label$322:;
	label$281:;
}

static struct $7ASTNODE* HOPTNULLOP( struct $7ASTNODE* N$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$324:;
	struct $7ASTNODE* L$1;
	struct $7ASTNODE* R$1;
	int64 OP$1;
	int64 V$1;
	int64 KEEP_L$1;
	int64 KEEP_R$1;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$327;
	{
		fb$result$1 = (struct $7ASTNODE*)0ull;
		goto label$325;
	}
	label$327:;
	label$326:;
	struct $7ASTNODE* vr$3 = HOPTNULLOP( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
	*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$3;
	struct $7ASTNODE* vr$6 = HOPTNULLOP( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) );
	*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = vr$6;
	if( *(int64*)N$1 != 3ll ) goto label$329;
	{
		int64 TMP$100$2;
		OP$1 = *(int64*)((uint8*)N$1 + 40ll);
		L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
		R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
		int64 vr$13 = ASTHASSIDEFX( L$1 );
		KEEP_L$1 = vr$13;
		int64 vr$14 = ASTHASSIDEFX( R$1 );
		KEEP_R$1 = vr$14;
		if( ((*(int64*)((uint8*)N$1 + 8ll) & 511ll) & 480ll) == 0ll ) goto label$330;
		TMP$100$2 = 22ll;
		goto label$674;
		label$330:;
		TMP$100$2 = (*(int64*)((uint8*)N$1 + 8ll) & 511ll) & 31ll;
		label$674:;
		if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$100$2 * 56ll)) != 0ll ) goto label$332;
		{
			if( *(int64*)R$1 != 16ll ) goto label$334;
			{
				V$1 = *(int64*)((uint8*)R$1 + 40ll);
				{
					uint64 TMP$101$5;
					TMP$101$5 = (uint64)OP$1;
					goto label$336;
					label$337:;
					{
						if( V$1 != 0ll ) goto label$339;
						{
							if( KEEP_L$1 != 0ll ) goto label$341;
							{
								ASTDELTREE( L$1 );
								ASTDELNODE( N$1 );
								fb$result$1 = R$1;
								goto label$325;
							}
							goto label$340;
							label$341:;
							{
								*(int64*)((uint8*)N$1 + 40ll) = 34ll;
							}
							label$340:;
						}
						goto label$338;
						label$339:;
						if( V$1 != 1ll ) goto label$342;
						{
							ASTDELNODE( R$1 );
							ASTDELNODE( N$1 );
							fb$result$1 = L$1;
							goto label$325;
						}
						label$342:;
						label$338:;
					}
					goto label$335;
					label$343:;
					{
						int64 TMP$102$6;
						if( ((*(int64*)((uint8*)R$1 + 8ll) & 511ll) & 480ll) == 0ll ) goto label$344;
						TMP$102$6 = 22ll;
						goto label$675;
						label$344:;
						TMP$102$6 = (*(int64*)((uint8*)R$1 + 8ll) & 511ll) & 31ll;
						label$675:;
						if( ((int64)-(V$1 == 1ll) | ((int64)-(V$1 == -1ll) & (int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$102$6 * 56ll)) + 16ll) != 0ll))) == 0ll ) goto label$346;
						{
							if( KEEP_L$1 != 0ll ) goto label$348;
							{
								*(int64*)((uint8*)R$1 + 40ll) = 0ll;
								ASTDELTREE( L$1 );
								ASTDELNODE( N$1 );
								fb$result$1 = R$1;
								goto label$325;
							}
							label$348:;
							label$347:;
						}
						label$346:;
						label$345:;
					}
					goto label$335;
					label$349:;
					{
						if( V$1 != 1ll ) goto label$351;
						{
							ASTDELNODE( R$1 );
							ASTDELNODE( N$1 );
							fb$result$1 = L$1;
							goto label$325;
						}
						label$351:;
						label$350:;
					}
					goto label$335;
					label$352:;
					{
						if( V$1 != 0ll ) goto label$354;
						{
							ASTDELNODE( R$1 );
							ASTDELNODE( N$1 );
							fb$result$1 = L$1;
							goto label$325;
						}
						label$354:;
						label$353:;
					}
					goto label$335;
					label$355:;
					{
						if( V$1 != -1ll ) goto label$357;
						{
							if( KEEP_L$1 != 0ll ) goto label$359;
							{
								ASTDELTREE( L$1 );
								ASTDELNODE( N$1 );
								fb$result$1 = R$1;
								goto label$325;
							}
							label$359:;
							label$358:;
						}
						label$357:;
						label$356:;
					}
					goto label$335;
					label$360:;
					{
						if( V$1 != 0ll ) goto label$362;
						{
							ASTDELNODE( R$1 );
							ASTDELNODE( N$1 );
							fb$result$1 = L$1;
							goto label$325;
						}
						goto label$361;
						label$362:;
						if( V$1 != -1ll ) goto label$363;
						{
							if( KEEP_L$1 != 0ll ) goto label$365;
							{
								ASTDELTREE( L$1 );
								ASTDELNODE( N$1 );
								fb$result$1 = R$1;
								goto label$325;
							}
							label$365:;
							label$364:;
						}
						label$363:;
						label$361:;
					}
					goto label$335;
					label$366:;
					{
						if( V$1 != -1ll ) goto label$368;
						{
							ASTDELNODE( R$1 );
							ASTDELNODE( N$1 );
							fb$result$1 = L$1;
							goto label$325;
						}
						goto label$367;
						label$368:;
						if( V$1 != 0ll ) goto label$369;
						{
							if( KEEP_L$1 != 0ll ) goto label$371;
							{
								ASTDELTREE( L$1 );
								ASTDELNODE( N$1 );
								fb$result$1 = R$1;
								goto label$325;
							}
							label$371:;
							label$370:;
						}
						label$369:;
						label$367:;
					}
					goto label$335;
					label$336:;
					static const void* tmp$146[15ll] = {
						&&label$352,
						&&label$352,
						&&label$337,
						&&label$335,
						&&label$349,
						&&label$343,
						&&label$366,
						&&label$360,
						&&label$335,
						&&label$335,
						&&label$352,
						&&label$335,
						&&label$355,
						&&label$352,
						&&label$352,
					};
					if( TMP$101$5 < 28ll ) goto label$335;
					if( TMP$101$5 > 42ll ) goto label$335;
					goto *tmp$146[TMP$101$5 - 28ll];
					label$335:;
				}
			}
			goto label$333;
			label$334:;
			if( *(int64*)L$1 != 16ll ) goto label$372;
			{
				V$1 = *(int64*)((uint8*)L$1 + 40ll);
				{
					uint64 TMP$103$5;
					TMP$103$5 = (uint64)OP$1;
					goto label$374;
					label$375:;
					{
						if( V$1 != 0ll ) goto label$377;
						{
							if( KEEP_R$1 != 0ll ) goto label$379;
							{
								ASTDELTREE( R$1 );
								ASTDELNODE( N$1 );
								fb$result$1 = L$1;
								goto label$325;
							}
							label$379:;
							label$378:;
						}
						label$377:;
						label$376:;
					}
					goto label$373;
					label$374:;
					static const void* tmp$147[13ll] = {
						&&label$375,
						&&label$373,
						&&label$375,
						&&label$375,
						&&label$373,
						&&label$373,
						&&label$373,
						&&label$373,
						&&label$373,
						&&label$373,
						&&label$373,
						&&label$375,
						&&label$375,
					};
					if( TMP$103$5 < 30ll ) goto label$373;
					if( TMP$103$5 > 42ll ) goto label$373;
					goto *tmp$147[TMP$103$5 - 30ll];
					label$373:;
				}
			}
			label$372:;
			label$333:;
		}
		label$332:;
		label$331:;
	}
	label$329:;
	label$328:;
	fb$result$1 = N$1;
	label$325:;
	return fb$result$1;
}

static struct $7ASTNODE* HOPTLOGIC( struct $7ASTNODE* N$1 )
{
	int64 TMP$104$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$380:;
	struct $7ASTNODE* M$1;
	struct $7ASTNODE* L$1;
	struct $7ASTNODE* R$1;
	int64 OP$1;
	int64 V$1;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$383;
	{
		fb$result$1 = N$1;
		goto label$381;
	}
	label$383:;
	label$382:;
	L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
	if( L$1 == (struct $7ASTNODE*)0ull ) goto label$385;
	{
		struct $7ASTNODE* vr$4 = HOPTLOGIC( L$1 );
		*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$4;
		L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
	}
	label$385:;
	label$384:;
	R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
	if( R$1 == (struct $7ASTNODE*)0ull ) goto label$387;
	{
		struct $7ASTNODE* vr$9 = HOPTLOGIC( R$1 );
		*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = vr$9;
		R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
	}
	label$387:;
	label$386:;
	if( ((*(int64*)((uint8*)N$1 + 8ll) & 511ll) & 480ll) == 0ll ) goto label$388;
	TMP$104$1 = 22ll;
	goto label$676;
	label$388:;
	TMP$104$1 = (*(int64*)((uint8*)N$1 + 8ll) & 511ll) & 31ll;
	label$676:;
	if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$104$1 * 56ll)) != 0ll ) goto label$390;
	{
		int64 TMP$105$2;
		if( (int64)-(*(int64*)N$1 == 4ll) == 0ll ) goto label$391;
		TMP$105$2 = (int64)-((int64)-(*(int64*)((uint8*)N$1 + 40ll) == 52ll) != 0ll);
		goto label$677;
		label$391:;
		TMP$105$2 = 0ll;
		label$677:;
		if( TMP$105$2 == 0ll ) goto label$393;
		{
			int64 TMP$106$3;
			int64 TMP$107$3;
			if( (int64)-(*(int64*)L$1 == 4ll) == 0ll ) goto label$394;
			TMP$106$3 = (int64)-((int64)-(*(int64*)((uint8*)L$1 + 40ll) == 52ll) != 0ll);
			goto label$678;
			label$394:;
			TMP$106$3 = 0ll;
			label$678:;
			if( TMP$106$3 == 0ll ) goto label$396;
			{
				M$1 = *(struct $7ASTNODE**)((uint8*)L$1 + 112ll);
				ASTDELNODE( L$1 );
				ASTDELNODE( N$1 );
				struct $7ASTNODE* vr$36 = HOPTLOGIC( M$1 );
				N$1 = vr$36;
			}
			goto label$395;
			label$396:;
			if( (int64)-(*(int64*)L$1 == 3ll) == 0ll ) goto label$398;
			TMP$107$3 = (int64)-((int64)-(*(int64*)((uint8*)L$1 + 40ll) == 38ll) != 0ll);
			goto label$679;
			label$398:;
			TMP$107$3 = 0ll;
			label$679:;
			if( TMP$107$3 == 0ll ) goto label$397;
			{
				int64 TMP$108$4;
				if( ((*(int64*)((uint8*)N$1 + 8ll) & 511ll) & 480ll) == 0ll ) goto label$399;
				TMP$108$4 = 22ll;
				goto label$680;
				label$399:;
				TMP$108$4 = (*(int64*)((uint8*)N$1 + 8ll) & 511ll) & 31ll;
				label$680:;
				if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$108$4 * 56ll)) != 0ll ) goto label$401;
				{
					if( *(int64*)*(struct $7ASTNODE**)((uint8*)L$1 + 112ll) != 16ll ) goto label$403;
					{
						*(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)L$1 + 112ll) + 40ll) = ~(*(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)L$1 + 112ll) + 40ll));
						ASTDELNODE( N$1 );
						struct $7ASTNODE* vr$61 = HOPTLOGIC( L$1 );
						N$1 = vr$61;
					}
					goto label$402;
					label$403:;
					if( *(int64*)*(struct $7ASTNODE**)((uint8*)L$1 + 120ll) != 16ll ) goto label$404;
					{
						*(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)L$1 + 120ll) + 40ll) = ~(*(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)L$1 + 120ll) + 40ll));
						ASTDELNODE( N$1 );
						struct $7ASTNODE* vr$70 = HOPTLOGIC( L$1 );
						N$1 = vr$70;
					}
					label$404:;
					label$402:;
				}
				label$401:;
				label$400:;
			}
			label$397:;
			label$395:;
		}
		goto label$392;
		label$393:;
		if( *(int64*)N$1 != 3ll ) goto label$405;
		{
			int64 TMP$109$3;
			if( ((*(int64*)((uint8*)N$1 + 8ll) & 511ll) & 480ll) == 0ll ) goto label$406;
			TMP$109$3 = 22ll;
			goto label$681;
			label$406:;
			TMP$109$3 = (*(int64*)((uint8*)N$1 + 8ll) & 511ll) & 31ll;
			label$681:;
			if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$109$3 * 56ll)) != 0ll ) goto label$408;
			{
				OP$1 = *(int64*)((uint8*)N$1 + 40ll);
				{
					if( OP$1 == 35ll ) goto label$411;
					label$412:;
					if( OP$1 == 34ll ) goto label$411;
					label$413:;
					if( OP$1 != 38ll ) goto label$410;
					label$411:;
					{
						int64 TMP$110$6;
						int64 TMP$111$6;
						int64 TMP$112$6;
						int64 TMP$113$6;
						int64 TMP$114$6;
						int64 TMP$115$6;
						if( OP$1 != 34ll ) goto label$415;
						{
							OP$1 = 35ll;
						}
						goto label$414;
						label$415:;
						if( OP$1 != 35ll ) goto label$416;
						{
							OP$1 = 34ll;
						}
						label$416:;
						label$414:;
						if( (int64)-(*(int64*)L$1 == 4ll) == 0ll ) goto label$417;
						TMP$110$6 = (int64)-((int64)-(*(int64*)((uint8*)L$1 + 40ll) == 52ll) != 0ll);
						goto label$682;
						label$417:;
						TMP$110$6 = 0ll;
						label$682:;
						if( (int64)-(*(int64*)R$1 == 4ll) == 0ll ) goto label$418;
						TMP$111$6 = (int64)-((int64)-(*(int64*)((uint8*)R$1 + 40ll) == 52ll) != 0ll);
						goto label$683;
						label$418:;
						TMP$111$6 = 0ll;
						label$683:;
						if( (TMP$110$6 & TMP$111$6) == 0ll ) goto label$420;
						{
							struct $7ASTNODE* vr$103 = HOPTLOGIC( *(struct $7ASTNODE**)((uint8*)L$1 + 112ll) );
							L$1 = vr$103;
							struct $7ASTNODE* vr$105 = HOPTLOGIC( *(struct $7ASTNODE**)((uint8*)R$1 + 112ll) );
							R$1 = vr$105;
							struct $7ASTNODE* vr$106 = ASTNEWBOP( OP$1, L$1, R$1, (struct $8FBSYMBOL*)0ull, 1ll );
							M$1 = vr$106;
							if( OP$1 == 38ll ) goto label$422;
							{
								struct $7ASTNODE* vr$108 = ASTNEWUOP( 52ll, M$1 );
								M$1 = vr$108;
							}
							label$422:;
							label$421:;
							ASTDELNODE( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
							ASTDELNODE( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) );
							ASTDELNODE( N$1 );
							N$1 = M$1;
						}
						goto label$419;
						label$420:;
						if( (int64)-(*(int64*)R$1 == 4ll) == 0ll ) goto label$424;
						TMP$112$6 = (int64)-((int64)-(*(int64*)((uint8*)R$1 + 40ll) == 52ll) != 0ll);
						goto label$684;
						label$424:;
						TMP$112$6 = 0ll;
						label$684:;
						if( ((int64)-(*(int64*)L$1 == 16ll) & TMP$112$6) == 0ll ) goto label$423;
						{
							V$1 = *(int64*)((uint8*)L$1 + 40ll);
							struct $7ASTNODE* vr$123 = ASTNEWBOP( OP$1, L$1, *(struct $7ASTNODE**)((uint8*)R$1 + 112ll), (struct $8FBSYMBOL*)0ull, 1ll );
							M$1 = vr$123;
							*(int64*)((uint8*)L$1 + 40ll) = ~V$1;
							if( OP$1 == 38ll ) goto label$426;
							{
								struct $7ASTNODE* vr$127 = ASTNEWUOP( 52ll, M$1 );
								M$1 = vr$127;
							}
							label$426:;
							label$425:;
							ASTDELNODE( R$1 );
							ASTDELNODE( N$1 );
							N$1 = M$1;
						}
						goto label$419;
						label$423:;
						if( (int64)-(*(int64*)L$1 == 4ll) == 0ll ) goto label$428;
						TMP$113$6 = (int64)-((int64)-(*(int64*)((uint8*)L$1 + 40ll) == 52ll) != 0ll);
						goto label$685;
						label$428:;
						TMP$113$6 = 0ll;
						label$685:;
						if( ((int64)-(*(int64*)R$1 == 16ll) & TMP$113$6) == 0ll ) goto label$427;
						{
							V$1 = *(int64*)((uint8*)R$1 + 40ll);
							struct $7ASTNODE* vr$140 = ASTNEWBOP( OP$1, *(struct $7ASTNODE**)((uint8*)L$1 + 112ll), R$1, (struct $8FBSYMBOL*)0ull, 1ll );
							M$1 = vr$140;
							*(int64*)((uint8*)R$1 + 40ll) = ~V$1;
							if( OP$1 == 38ll ) goto label$430;
							{
								struct $7ASTNODE* vr$144 = ASTNEWUOP( 52ll, M$1 );
								M$1 = vr$144;
							}
							label$430:;
							label$429:;
							ASTDELNODE( L$1 );
							ASTDELNODE( N$1 );
							N$1 = M$1;
						}
						goto label$419;
						label$427:;
						if( (int64)-(*(int64*)L$1 == 4ll) == 0ll ) goto label$432;
						TMP$114$6 = (int64)-((int64)-(*(int64*)((uint8*)L$1 + 40ll) == 52ll) != 0ll);
						goto label$686;
						label$432:;
						TMP$114$6 = 0ll;
						label$686:;
						if( ((int64)-(OP$1 == 38ll) & TMP$114$6) == 0ll ) goto label$431;
						{
							struct $7ASTNODE* vr$154 = ASTNEWUOP( 52ll, N$1 );
							M$1 = vr$154;
							*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = *(struct $7ASTNODE**)((uint8*)L$1 + 112ll);
							ASTDELNODE( L$1 );
							N$1 = M$1;
						}
						goto label$419;
						label$431:;
						if( (int64)-(*(int64*)R$1 == 4ll) == 0ll ) goto label$434;
						TMP$115$6 = (int64)-((int64)-(*(int64*)((uint8*)R$1 + 40ll) == 52ll) != 0ll);
						goto label$687;
						label$434:;
						TMP$115$6 = 0ll;
						label$687:;
						if( ((int64)-(OP$1 == 38ll) & TMP$115$6) == 0ll ) goto label$433;
						{
							struct $7ASTNODE* vr$166 = ASTNEWUOP( 52ll, N$1 );
							M$1 = vr$166;
							*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = *(struct $7ASTNODE**)((uint8*)R$1 + 112ll);
							ASTDELNODE( R$1 );
							N$1 = M$1;
						}
						label$433:;
						label$419:;
					}
					label$410:;
					label$409:;
				}
			}
			label$408:;
			label$407:;
		}
		label$405:;
		label$392:;
	}
	label$390:;
	label$389:;
	fb$result$1 = N$1;
	label$381:;
	return fb$result$1;
}

static struct $7ASTNODE* HDOOPTREMCONV( struct $7ASTNODE* N$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$435:;
	struct $7ASTNODE* L$1;
	struct $7ASTNODE* R$1;
	int64 DOREM$1;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$438;
	{
		fb$result$1 = (struct $7ASTNODE*)0ull;
		goto label$436;
	}
	label$438:;
	label$437:;
	if( *(int64*)N$1 != 3ll ) goto label$440;
	{
		{
			int64 TMP$116$3;
			TMP$116$3 = *(int64*)((uint8*)N$1 + 8ll) & 511ll;
			if( TMP$116$3 == 14ll ) goto label$443;
			label$444:;
			if( TMP$116$3 != 15ll ) goto label$442;
			label$443:;
			{
				R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
				if( *(int64*)R$1 != 5ll ) goto label$446;
				{
					if( *(int64*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) == 5ll ) goto label$448;
					{
						{
							int64 TMP$117$7;
							TMP$117$7 = *(int64*)((uint8*)R$1 + 8ll) & 511ll;
							if( TMP$117$7 == 14ll ) goto label$451;
							label$452:;
							if( TMP$117$7 != 15ll ) goto label$450;
							label$451:;
							{
								L$1 = *(struct $7ASTNODE**)((uint8*)R$1 + 112ll);
								{
									int64 TMP$118$9;
									int64 TMP$119$9;
									if( ((*(int64*)((uint8*)L$1 + 8ll) & 511ll) & 480ll) == 0ll ) goto label$453;
									TMP$118$9 = 22ll;
									goto label$688;
									label$453:;
									TMP$118$9 = (*(int64*)((uint8*)L$1 + 8ll) & 511ll) & 31ll;
									label$688:;
									TMP$119$9 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$118$9 * 56ll)) + 8ll);
									if( TMP$119$9 == 2ll ) goto label$456;
									label$457:;
									if( TMP$119$9 != 4ll ) goto label$455;
									label$456:;
									{
										DOREM$1 = 0ll;
										{
											$13AST_NODECLASS TMP$120$11;
											TMP$120$11 = *($13AST_NODECLASS*)L$1;
											if( TMP$120$11 == 17ll ) goto label$460;
											label$461:;
											if( TMP$120$11 == 18ll ) goto label$460;
											label$462:;
											if( TMP$120$11 == 19ll ) goto label$460;
											label$463:;
											if( TMP$120$11 != 20ll ) goto label$459;
											label$460:;
											{
												int64 TMP$121$12;
												if( ((*(int64*)((uint8*)L$1 + 8ll) & 511ll) & 480ll) == 0ll ) goto label$464;
												TMP$121$12 = 22ll;
												goto label$689;
												label$464:;
												TMP$121$12 = (*(int64*)((uint8*)L$1 + 8ll) & 511ll) & 31ll;
												label$689:;
												if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$121$12 * 56ll)) + 16ll) == 0ll ) goto label$466;
												{
													DOREM$1 = -1ll;
												}
												label$466:;
												label$465:;
											}
											label$459:;
											label$458:;
										}
										if( DOREM$1 == 0ll ) goto label$468;
										{
											ASTDELNODE( R$1 );
											*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = L$1;
										}
										label$468:;
										label$467:;
									}
									label$455:;
									label$454:;
								}
							}
							label$450:;
							label$449:;
						}
					}
					label$448:;
					label$447:;
				}
				label$446:;
				label$445:;
			}
			label$442:;
			label$441:;
		}
	}
	label$440:;
	label$439:;
	struct $7ASTNODE* vr$46 = HDOOPTREMCONV( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
	*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$46;
	struct $7ASTNODE* vr$49 = HDOOPTREMCONV( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) );
	*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = vr$49;
	fb$result$1 = N$1;
	label$436:;
	return fb$result$1;
}

static struct $7ASTNODE* HOPTSTRMULTCONCAT( struct $7ASTNODE* LNK$1, struct $7ASTNODE* DST$1, struct $7ASTNODE* N$1, int64 IS_WSTR$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$469:;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$472;
	{
		fb$result$1 = (struct $7ASTNODE*)0ull;
		goto label$470;
	}
	label$472:;
	label$471:;
	if( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) == (struct $7ASTNODE*)0ull ) goto label$474;
	{
		if( *(int64*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) != 3ll ) goto label$476;
		{
			struct $7ASTNODE* vr$8 = HOPTSTRMULTCONCAT( LNK$1, DST$1, *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), IS_WSTR$1 );
			LNK$1 = vr$8;
			*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = (struct $7ASTNODE*)0ull;
		}
		label$476:;
		label$475:;
	}
	label$474:;
	label$473:;
	if( *(int64*)N$1 != 3ll ) goto label$478;
	{
		if( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) == (struct $7ASTNODE*)0ull ) goto label$480;
		{
			if( LNK$1 != (struct $7ASTNODE*)0ull ) goto label$482;
			{
				if( IS_WSTR$1 != 0ll ) goto label$484;
				{
					struct $7ASTNODE* vr$17 = ASTCLONETREE( DST$1 );
					struct $7ASTNODE* vr$18 = RTLSTRASSIGN( vr$17, *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), 0ll );
					LNK$1 = vr$18;
				}
				goto label$483;
				label$484:;
				{
					struct $7ASTNODE* vr$20 = ASTCLONETREE( DST$1 );
					struct $7ASTNODE* vr$21 = RTLWSTRASSIGN( vr$20, *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), 0ll );
					LNK$1 = vr$21;
				}
				label$483:;
			}
			goto label$481;
			label$482:;
			{
				if( IS_WSTR$1 != 0ll ) goto label$486;
				{
					struct $7ASTNODE* vr$24 = ASTCLONETREE( DST$1 );
					struct $7ASTNODE* vr$25 = RTLSTRCONCATASSIGN( vr$24, *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
					struct $7ASTNODE* vr$26 = ASTNEWLINK( LNK$1, vr$25, -1ll );
					LNK$1 = vr$26;
				}
				goto label$485;
				label$486:;
				{
					struct $7ASTNODE* vr$28 = ASTCLONETREE( DST$1 );
					struct $7ASTNODE* vr$29 = RTLWSTRCONCATASSIGN( vr$28, *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
					struct $7ASTNODE* vr$30 = ASTNEWLINK( LNK$1, vr$29, -1ll );
					LNK$1 = vr$30;
				}
				label$485:;
			}
			label$481:;
		}
		label$480:;
		label$479:;
		if( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) == (struct $7ASTNODE*)0ull ) goto label$488;
		{
			if( IS_WSTR$1 != 0ll ) goto label$490;
			{
				struct $7ASTNODE* vr$35 = ASTCLONETREE( DST$1 );
				struct $7ASTNODE* vr$36 = RTLSTRCONCATASSIGN( vr$35, *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) );
				struct $7ASTNODE* vr$37 = ASTNEWLINK( LNK$1, vr$36, -1ll );
				LNK$1 = vr$37;
			}
			goto label$489;
			label$490:;
			{
				struct $7ASTNODE* vr$39 = ASTCLONETREE( DST$1 );
				struct $7ASTNODE* vr$40 = RTLWSTRCONCATASSIGN( vr$39, *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) );
				struct $7ASTNODE* vr$41 = ASTNEWLINK( LNK$1, vr$40, -1ll );
				LNK$1 = vr$41;
			}
			label$489:;
		}
		label$488:;
		label$487:;
		ASTDELNODE( N$1 );
	}
	goto label$477;
	label$478:;
	{
		if( LNK$1 != (struct $7ASTNODE*)0ull ) goto label$492;
		{
			if( IS_WSTR$1 != 0ll ) goto label$494;
			{
				struct $7ASTNODE* vr$44 = ASTCLONETREE( DST$1 );
				struct $7ASTNODE* vr$45 = RTLSTRASSIGN( vr$44, N$1, 0ll );
				LNK$1 = vr$45;
			}
			goto label$493;
			label$494:;
			{
				struct $7ASTNODE* vr$46 = ASTCLONETREE( DST$1 );
				struct $7ASTNODE* vr$47 = RTLWSTRASSIGN( vr$46, N$1, 0ll );
				LNK$1 = vr$47;
			}
			label$493:;
		}
		goto label$491;
		label$492:;
		{
			if( IS_WSTR$1 != 0ll ) goto label$496;
			{
				struct $7ASTNODE* vr$49 = ASTCLONETREE( DST$1 );
				struct $7ASTNODE* vr$50 = RTLSTRCONCATASSIGN( vr$49, N$1 );
				struct $7ASTNODE* vr$51 = ASTNEWLINK( LNK$1, vr$50, -1ll );
				LNK$1 = vr$51;
			}
			goto label$495;
			label$496:;
			{
				struct $7ASTNODE* vr$52 = ASTCLONETREE( DST$1 );
				struct $7ASTNODE* vr$53 = RTLWSTRCONCATASSIGN( vr$52, N$1 );
				struct $7ASTNODE* vr$54 = ASTNEWLINK( LNK$1, vr$53, -1ll );
				LNK$1 = vr$54;
			}
			label$495:;
		}
		label$491:;
	}
	label$477:;
	fb$result$1 = LNK$1;
	label$470:;
	return fb$result$1;
}

static int64 HISMULTSTRCONCAT( struct $7ASTNODE* L$1, struct $7ASTNODE* R$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$497:;
	struct $8FBSYMBOL* SYM$1;
	fb$result$1 = 0ll;
	if( *(int64*)R$1 != 3ll ) goto label$500;
	{
		{
			$13AST_NODECLASS TMP$122$3;
			TMP$122$3 = *($13AST_NODECLASS*)L$1;
			if( TMP$122$3 == 17ll ) goto label$503;
			label$504:;
			if( TMP$122$3 != 18ll ) goto label$502;
			label$503:;
			{
				SYM$1 = *(struct $8FBSYMBOL**)((uint8*)L$1 + 24ll);
				if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$506;
				{
					if( (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 327680ll) != 0ll) != 0ll ) goto label$508;
					{
						int64 vr$12 = ASTISSYMBOLONTREE( SYM$1, R$1 );
						fb$result$1 = (int64)-(vr$12 == 0ll);
					}
					label$508:;
					label$507:;
				}
				label$506:;
				label$505:;
			}
			goto label$501;
			label$502:;
			if( TMP$122$3 == 19ll ) goto label$510;
			label$511:;
			if( TMP$122$3 != 26ll ) goto label$509;
			label$510:;
			{
				{
					$13AST_NODECLASS TMP$123$5;
					TMP$123$5 = *($13AST_NODECLASS*)*(struct $7ASTNODE**)((uint8*)L$1 + 112ll);
					if( TMP$123$5 == 17ll ) goto label$514;
					label$515:;
					if( TMP$123$5 != 18ll ) goto label$513;
					label$514:;
					{
						SYM$1 = *(struct $8FBSYMBOL**)((uint8*)L$1 + 24ll);
						if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$517;
						{
							int64 vr$22 = ASTISSYMBOLONTREE( SYM$1, R$1 );
							fb$result$1 = (int64)-(vr$22 == 0ll);
						}
						label$517:;
						label$516:;
					}
					label$513:;
					label$512:;
				}
			}
			label$509:;
			label$501:;
		}
	}
	label$500:;
	label$499:;
	label$498:;
	return fb$result$1;
}

static struct $7ASTNODE* HOPTSTRASSIGNMENT( struct $7ASTNODE* N$1, struct $7ASTNODE* L$1, struct $7ASTNODE* R$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$518:;
	int64 OPTIMIZE$1;
	int64 IS_WSTR$1;
	OPTIMIZE$1 = 0ll;
	if( *(int64*)R$1 != 3ll ) goto label$521;
	{
		struct $8FBSYMBOL* SYM$2;
		__builtin_memset( &SYM$2, 0, 8ll );
		{
			uint64 TMP$124$3;
			TMP$124$3 = *(uint64*)L$1;
			goto label$523;
			label$524:;
			{
				int64 vr$6 = ASTISTREEEQUAL( L$1, *(struct $7ASTNODE**)((uint8*)R$1 + 112ll) );
				if( vr$6 == 0ll ) goto label$526;
				{
					SYM$2 = *(struct $8FBSYMBOL**)((uint8*)L$1 + 24ll);
					if( SYM$2 == (struct $8FBSYMBOL*)0ull ) goto label$528;
					{
						if( (int64)-((*(int64*)((uint8*)SYM$2 + 8ll) & 327680ll) != 0ll) != 0ll ) goto label$530;
						{
							int64 vr$15 = ASTISSYMBOLONTREE( SYM$2, *(struct $7ASTNODE**)((uint8*)R$1 + 120ll) );
							OPTIMIZE$1 = (int64)-(vr$15 == 0ll);
						}
						label$530:;
						label$529:;
					}
					label$528:;
					label$527:;
				}
				label$526:;
				label$525:;
			}
			goto label$522;
			label$531:;
			{
				{
					uint64 TMP$125$5;
					TMP$125$5 = *(uint64*)*(struct $7ASTNODE**)((uint8*)L$1 + 112ll);
					goto label$533;
					label$534:;
					{
						int64 vr$20 = ASTISTREEEQUAL( L$1, *(struct $7ASTNODE**)((uint8*)R$1 + 112ll) );
						if( vr$20 == 0ll ) goto label$536;
						{
							SYM$2 = *(struct $8FBSYMBOL**)((uint8*)L$1 + 24ll);
							if( SYM$2 == (struct $8FBSYMBOL*)0ull ) goto label$538;
							{
								int64 vr$25 = ASTISSYMBOLONTREE( SYM$2, *(struct $7ASTNODE**)((uint8*)R$1 + 120ll) );
								OPTIMIZE$1 = (int64)-(vr$25 == 0ll);
							}
							label$538:;
							label$537:;
						}
						label$536:;
						label$535:;
					}
					goto label$532;
					label$533:;
					static const void* tmp$148[2ll] = {
						&&label$534,
						&&label$534,
					};
					if( TMP$125$5 < 17ll ) goto label$532;
					if( TMP$125$5 > 18ll ) goto label$532;
					goto *tmp$148[TMP$125$5 - 17ll];
					label$532:;
				}
			}
			goto label$522;
			label$523:;
			static const void* tmp$149[10ll] = {
				&&label$524,
				&&label$524,
				&&label$531,
				&&label$522,
				&&label$522,
				&&label$522,
				&&label$522,
				&&label$522,
				&&label$522,
				&&label$531,
			};
			if( TMP$124$3 < 17ll ) goto label$522;
			if( TMP$124$3 > 26ll ) goto label$522;
			goto *tmp$149[TMP$124$3 - 17ll];
			label$522:;
		}
	}
	label$521:;
	label$520:;
	IS_WSTR$1 = (int64)-((*(int64*)((uint8*)N$1 + 8ll) & 511ll) == 6ll);
	if( OPTIMIZE$1 == 0ll ) goto label$540;
	{
		ASTDELNODE( N$1 );
		N$1 = R$1;
		ASTDELTREE( L$1 );
		L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
		R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
		int64 vr$33 = HISMULTSTRCONCAT( L$1, R$1 );
		if( vr$33 == 0ll ) goto label$542;
		{
			struct $7ASTNODE* vr$35 = HOPTSTRMULTCONCAT( L$1, L$1, R$1, IS_WSTR$1 );
			fb$result$1 = vr$35;
		}
		goto label$541;
		label$542:;
		{
			if( IS_WSTR$1 != 0ll ) goto label$544;
			{
				struct $7ASTNODE* vr$37 = ASTUPDSTRCONCAT( R$1 );
				struct $7ASTNODE* vr$38 = RTLSTRCONCATASSIGN( L$1, vr$37 );
				fb$result$1 = vr$38;
			}
			goto label$543;
			label$544:;
			{
				struct $7ASTNODE* vr$39 = ASTUPDSTRCONCAT( R$1 );
				struct $7ASTNODE* vr$40 = RTLWSTRCONCATASSIGN( L$1, vr$39 );
				fb$result$1 = vr$40;
			}
			label$543:;
		}
		label$541:;
	}
	goto label$539;
	label$540:;
	{
		int64 vr$41 = HISMULTSTRCONCAT( L$1, R$1 );
		if( vr$41 == 0ll ) goto label$546;
		{
			struct $7ASTNODE* vr$43 = HOPTSTRMULTCONCAT( (struct $7ASTNODE*)0ull, L$1, R$1, IS_WSTR$1 );
			fb$result$1 = vr$43;
		}
		goto label$545;
		label$546:;
		{
			if( IS_WSTR$1 != 0ll ) goto label$548;
			{
				struct $7ASTNODE* vr$45 = ASTUPDSTRCONCAT( R$1 );
				struct $7ASTNODE* vr$46 = RTLSTRASSIGN( L$1, vr$45, 0ll );
				fb$result$1 = vr$46;
			}
			goto label$547;
			label$548:;
			{
				struct $7ASTNODE* vr$47 = ASTUPDSTRCONCAT( R$1 );
				struct $7ASTNODE* vr$48 = RTLWSTRASSIGN( L$1, vr$47, 0ll );
				fb$result$1 = vr$48;
			}
			label$547:;
		}
		label$545:;
	}
	label$539:;
	ASTDELNODE( N$1 );
	label$519:;
	return fb$result$1;
}

static struct $7ASTNODE* HOPTRECIPROCAL( struct $7ASTNODE* N$1 )
{
	int64 TMP$140$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$630:;
	struct $7ASTNODE* L$1;
	struct $7ASTNODE* R$1;
	float V$1;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$633;
	{
		fb$result$1 = (struct $7ASTNODE*)0ull;
		goto label$631;
	}
	label$633:;
	label$632:;
	if( (int64)-(*(int64*)N$1 == 3ll) == 0ll ) goto label$634;
	TMP$140$1 = (int64)-((int64)-(*(int64*)((uint8*)N$1 + 40ll) == 31ll) != 0ll);
	goto label$690;
	label$634:;
	TMP$140$1 = 0ll;
	label$690:;
	if( TMP$140$1 == 0ll ) goto label$636;
	{
		L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
		if( *(int64*)L$1 != 16ll ) goto label$638;
		{
			int64 TMP$141$3;
			if( (int64)-((*(int64*)((uint8*)L$1 + 8ll) & 511ll) == 14ll) == 0ll ) goto label$639;
			TMP$141$3 = (int64)-((int64)-(*(double*)((uint8*)L$1 + 40ll) == 0x1.p+0) != 0ll);
			goto label$691;
			label$639:;
			TMP$141$3 = 0ll;
			label$691:;
			if( TMP$141$3 == 0ll ) goto label$641;
			{
				int64 TMP$142$4;
				R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
				if( (int64)-(*(int64*)R$1 == 4ll) == 0ll ) goto label$642;
				TMP$142$4 = (int64)-((int64)-(*(int64*)((uint8*)R$1 + 40ll) == 65ll) != 0ll);
				goto label$692;
				label$642:;
				TMP$142$4 = 0ll;
				label$692:;
				if( TMP$142$4 == 0ll ) goto label$644;
				{
					__builtin_memcpy( N$1, R$1, 144 );
					*($13AST_NODECLASS*)N$1 = 4ll;
					*(int64*)((uint8*)N$1 + 40ll) = 66ll;
					ASTDELNODE( R$1 );
					ASTDELNODE( L$1 );
				}
				goto label$643;
				label$644:;
				if( (*(int64*)((uint8*)R$1 + 8ll) & 511ll) != 14ll ) goto label$645;
				{
					ASTDELNODE( N$1 );
					struct $7ASTNODE* vr$33 = ASTNEWUOP( 67ll, R$1 );
					N$1 = vr$33;
					ASTDELNODE( L$1 );
				}
				label$645:;
				label$643:;
			}
			label$641:;
			label$640:;
		}
		label$638:;
		label$637:;
	}
	label$636:;
	label$635:;
	L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
	if( L$1 == (struct $7ASTNODE*)0ull ) goto label$647;
	{
		struct $7ASTNODE* vr$36 = HOPTRECIPROCAL( L$1 );
		*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$36;
	}
	label$647:;
	label$646:;
	R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
	if( R$1 == (struct $7ASTNODE*)0ull ) goto label$649;
	{
		struct $7ASTNODE* vr$40 = HOPTRECIPROCAL( R$1 );
		*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = vr$40;
	}
	label$649:;
	label$648:;
	fb$result$1 = N$1;
	label$631:;
	return fb$result$1;
}

// Total compilation time: 0.04271111369598657 seconds.
