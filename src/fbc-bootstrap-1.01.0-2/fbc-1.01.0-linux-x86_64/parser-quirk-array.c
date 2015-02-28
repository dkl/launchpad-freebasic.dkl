// Compilation of fbc-1.01.0/src/compiler/parser-quirk-array.bas started at 15:27:42 on 02-28-2015

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
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__parserzquirkzarray( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRREPORT( int64, int64, uint8* );
struct $7ASTNODE* ASTCLONETREE( struct $7ASTNODE* );
void ASTDELTREE( struct $7ASTNODE* );
int64 ASTISCONSTANT( struct $7ASTNODE* );
struct $7ASTNODE* ASTSCOPEBEGIN( void );
void ASTSCOPEEND( struct $7ASTNODE* );
struct $7ASTNODE* ASTADD( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWASSIGN( struct $7ASTNODE*, struct $7ASTNODE*, $9AST_OPOPT );
struct $7ASTNODE* ASTNEWCONSTI( int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWVAR( struct $8FBSYMBOL*, int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWLINK( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTNEWSTACK( int64, struct $7ASTNODE* );
struct $7ASTNODE* ASTREMOVENIDXARRAY( struct $7ASTNODE* );
int64 ASTCHECKASSIGN( struct $7ASTNODE*, struct $7ASTNODE* );
int64 ASTHASSIDEFX( struct $7ASTNODE* );
struct $7ASTNODE* ASTMAKEREF( struct $7ASTNODE** );
struct $7ASTNODE* ASTBUILDARRAYBOUND( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $8FBSYMBOL* SYMBADDTEMPVAR( int64, struct $8FBSYMBOL* );
int64 SYMBISARRAY( struct $8FBSYMBOL* );
int64 HMATCH( int64 );
typedef int64 $8LEXCHECK;
int64 LEXGETTOKEN( $8LEXCHECK );
void LEXSKIPTOKEN( $8LEXCHECK );
typedef int64 $13FB_VAREXPROPT;
struct $7ASTNODE* CVARORDEREF( $13FB_VAREXPROPT );
void HSKIPUNTIL( int64, int64, $8LEXCHECK, int64 );
struct $7ASTNODE* HMATCHEXPR( int64 );
struct $7ASTNODE* RTLARRAYCLEAR( struct $7ASTNODE* );
struct $7ASTNODE* RTLARRAYERASE( struct $7ASTNODE*, int64, int64 );
int64 RTLMEMSWAP( struct $7ASTNODE*, struct $7ASTNODE* );
int64 RTLSTRSWAP( struct $7ASTNODE*, struct $7ASTNODE* );
int64 RTLWSTRSWAP( struct $7ASTNODE*, struct $7ASTNODE* );
static int64 HSCOPEDSWAP( void );
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

int64 CERASESTMT( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$10:;
	LEXSKIPTOKEN( 0ll );
	label$12:;
	{
		struct $7ASTNODE* EXPR$2;
		struct $7ASTNODE* vr$1 = CVARORDEREF( 1ll );
		EXPR$2 = vr$1;
		if( EXPR$2 != (struct $7ASTNODE*)0ull ) goto label$16;
		{
			ERRREPORT( 14ll, 0ll, (uint8*)0ull );
			HSKIPUNTIL( 44ll, 0ll, 0ll, 0ll );
		}
		goto label$15;
		label$16:;
		{
			struct $7ASTNODE* vr$3 = ASTREMOVENIDXARRAY( EXPR$2 );
			EXPR$2 = vr$3;
			struct $8FBSYMBOL* S$3;
			S$3 = *(struct $8FBSYMBOL**)((uint8*)EXPR$2 + 24ll);
			if( S$3 == (struct $8FBSYMBOL*)0ull ) goto label$18;
			{
				int64 vr$6 = SYMBISARRAY( S$3 );
				if( vr$6 != 0ll ) goto label$20;
				{
					S$3 = (struct $8FBSYMBOL*)0ull;
				}
				label$20:;
				label$19:;
			}
			label$18:;
			label$17:;
			if( S$3 != (struct $8FBSYMBOL*)0ull ) goto label$22;
			{
				ERRREPORT( 62ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 44ll, 0ll, 0ll, 0ll );
			}
			goto label$21;
			label$22:;
			{
				if( (*(int64*)((uint8*)EXPR$2 + 8ll) & 512ll) == 0ll ) goto label$24;
				{
					ERRREPORT( 118ll, 0ll, (uint8*)0ull );
				}
				label$24:;
				label$23:;
				if( (*(int64*)((uint8*)S$3 + 8ll) & 65540ll) == 0ll ) goto label$26;
				{
					struct $7ASTNODE* vr$15 = RTLARRAYERASE( EXPR$2, -1ll, -1ll );
					ASTADD( vr$15 );
				}
				goto label$25;
				label$26:;
				{
					struct $7ASTNODE* vr$16 = RTLARRAYCLEAR( EXPR$2 );
					ASTADD( vr$16 );
				}
				label$25:;
			}
			label$21:;
		}
		label$15:;
	}
	label$14:;
	int64 vr$17 = HMATCH( 44ll );
	if( vr$17 != 0ll ) goto label$12;
	label$13:;
	fb$result$1 = -1ll;
	label$11:;
	return fb$result$1;
}

int64 CSWAPSTMT( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$70:;
	struct $7ASTNODE* SCOPENODE$1;
	struct $7ASTNODE* vr$1 = ASTSCOPEBEGIN(  );
	SCOPENODE$1 = vr$1;
	int64 vr$2 = HSCOPEDSWAP(  );
	fb$result$1 = vr$2;
	ASTSCOPEEND( SCOPENODE$1 );
	label$71:;
	return fb$result$1;
}

struct $7ASTNODE* CARRAYFUNCT( $8FB_TOKEN TK$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$72:;
	struct $7ASTNODE* ARRAYEXPR$1;
	struct $7ASTNODE* DIMEXPR$1;
	struct $8FBSYMBOL* S$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	{
		if( TK$1 == 491ll ) goto label$76;
		label$77:;
		if( TK$1 != 492ll ) goto label$75;
		label$76:;
		{
			LEXSKIPTOKEN( 0ll );
			int64 vr$3 = LEXGETTOKEN( 0ll );
			if( vr$3 == 40ll ) goto label$79;
			{
				ERRREPORT( 6ll, 0ll, (uint8*)0ull );
			}
			goto label$78;
			label$79:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$78:;
			struct $7ASTNODE* vr$5 = CVARORDEREF( 1ll );
			ARRAYEXPR$1 = vr$5;
			if( ARRAYEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$81;
			{
				ERRREPORT( 14ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
				struct $7ASTNODE* vr$7 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				fb$result$1 = vr$7;
				goto label$73;
			}
			label$81:;
			label$80:;
			struct $7ASTNODE* vr$8 = ASTREMOVENIDXARRAY( ARRAYEXPR$1 );
			ARRAYEXPR$1 = vr$8;
			S$1 = *(struct $8FBSYMBOL**)((uint8*)ARRAYEXPR$1 + 24ll);
			if( S$1 == (struct $8FBSYMBOL*)0ull ) goto label$83;
			{
				int64 vr$11 = SYMBISARRAY( S$1 );
				if( vr$11 != 0ll ) goto label$85;
				{
					S$1 = (struct $8FBSYMBOL*)0ull;
				}
				label$85:;
				label$84:;
			}
			label$83:;
			label$82:;
			if( S$1 != (struct $8FBSYMBOL*)0ull ) goto label$87;
			{
				ERRREPORT( 62ll, -1ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
				struct $7ASTNODE* vr$14 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				fb$result$1 = vr$14;
				goto label$73;
			}
			label$87:;
			label$86:;
			int64 vr$15 = HMATCH( 44ll );
			if( vr$15 == 0ll ) goto label$89;
			{
				struct $7ASTNODE* vr$17 = HMATCHEXPR( 7ll );
				DIMEXPR$1 = vr$17;
				if( DIMEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$91;
				{
					goto label$73;
				}
				label$91:;
				label$90:;
			}
			goto label$88;
			label$89:;
			{
				struct $7ASTNODE* vr$19 = ASTNEWCONSTI( 1ll, 7ll, (struct $8FBSYMBOL*)0ull );
				DIMEXPR$1 = vr$19;
			}
			label$88:;
			int64 vr$20 = LEXGETTOKEN( 0ll );
			if( vr$20 == 41ll ) goto label$93;
			{
				ERRREPORT( 7ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
			}
			goto label$92;
			label$93:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$92:;
			struct $7ASTNODE* vr$22 = ASTBUILDARRAYBOUND( ARRAYEXPR$1, DIMEXPR$1, TK$1 );
			fb$result$1 = vr$22;
		}
		label$75:;
		label$74:;
	}
	label$73:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__parserzquirkzarray( void )
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

static int64 HSCOPEDSWAP( void )
{
	int64 TMP$86$1;
	int64 TMP$87$1;
	int64 TMP$88$1;
	int64 TMP$89$1;
	int64 TMP$90$1;
	int64 TMP$91$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$27:;
	LEXSKIPTOKEN( 0ll );
	struct $7ASTNODE* L$1;
	struct $7ASTNODE* vr$1 = CVARORDEREF( 16ll );
	L$1 = vr$1;
	if( L$1 != (struct $7ASTNODE*)0ull ) goto label$30;
	{
		ERRREPORT( 14ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
		fb$result$1 = -1ll;
		goto label$28;
	}
	label$30:;
	label$29:;
	int64 vr$3 = ASTISCONSTANT( L$1 );
	if( vr$3 == 0ll ) goto label$32;
	{
		ERRREPORT( 118ll, -1ll, (uint8*)0ull );
	}
	label$32:;
	label$31:;
	int64 vr$5 = LEXGETTOKEN( 0ll );
	if( vr$5 == 44ll ) goto label$34;
	{
		ERRREPORT( 16ll, 0ll, (uint8*)0ull );
	}
	goto label$33;
	label$34:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$33:;
	struct $7ASTNODE* R$1;
	struct $7ASTNODE* vr$7 = CVARORDEREF( 16ll );
	R$1 = vr$7;
	if( R$1 != (struct $7ASTNODE*)0ull ) goto label$36;
	{
		ERRREPORT( 14ll, 0ll, (uint8*)0ull );
		ASTDELTREE( L$1 );
		HSKIPUNTIL( -1ll, 0ll, 0ll, 0ll );
		fb$result$1 = -1ll;
		goto label$28;
	}
	label$36:;
	label$35:;
	int64 vr$9 = ASTISCONSTANT( R$1 );
	if( vr$9 == 0ll ) goto label$38;
	{
		ERRREPORT( 118ll, -1ll, (uint8*)0ull );
	}
	label$38:;
	label$37:;
	int64 LDTYPE$1;
	LDTYPE$1 = *(int64*)((uint8*)L$1 + 8ll) & 511ll;
	int64 RDTYPE$1;
	RDTYPE$1 = *(int64*)((uint8*)R$1 + 8ll) & 511ll;
	{
		if( LDTYPE$1 == 16ll ) goto label$41;
		label$42:;
		if( LDTYPE$1 == 17ll ) goto label$41;
		label$43:;
		if( LDTYPE$1 != 3ll ) goto label$40;
		label$41:;
		{
			{
				if( RDTYPE$1 == 16ll ) goto label$46;
				label$47:;
				if( RDTYPE$1 == 17ll ) goto label$46;
				label$48:;
				if( RDTYPE$1 != 3ll ) goto label$45;
				label$46:;
				{
					int64 vr$21 = RTLSTRSWAP( L$1, R$1 );
					fb$result$1 = vr$21;
				}
				goto label$44;
				label$45:;
				{
					ERRREPORT( 20ll, 0ll, (uint8*)0ull );
				}
				label$49:;
				label$44:;
			}
			goto label$28;
		}
		goto label$39;
		label$40:;
		if( LDTYPE$1 != 6ll ) goto label$50;
		label$51:;
		{
			if( RDTYPE$1 != 6ll ) goto label$53;
			{
				int64 vr$24 = RTLWSTRSWAP( L$1, R$1 );
				fb$result$1 = vr$24;
			}
			goto label$52;
			label$53:;
			{
				ERRREPORT( 20ll, 0ll, (uint8*)0ull );
			}
			label$52:;
			goto label$28;
		}
		label$50:;
		label$39:;
	}
	int64 vr$25 = ASTCHECKASSIGN( L$1, R$1 );
	int64 vr$27 = ASTCHECKASSIGN( R$1, L$1 );
	if( ((int64)-(vr$25 == 0ll) | (int64)-(vr$27 == 0ll)) == 0ll ) goto label$55;
	{
		ERRREPORT( 20ll, 0ll, (uint8*)0ull );
		goto label$28;
	}
	label$55:;
	label$54:;
	if( ((int64)-(LDTYPE$1 == 18ll) | (int64)-(RDTYPE$1 == 18ll)) == 0ll ) goto label$57;
	{
		int64 vr$35 = RTLMEMSWAP( L$1, R$1 );
		fb$result$1 = vr$35;
		goto label$28;
	}
	label$57:;
	label$56:;
	int64 USE_PUSHPOP$1;
	USE_PUSHPOP$1 = -1ll;
	USE_PUSHPOP$1 = USE_PUSHPOP$1 & (int64)-(*(int64*)((uint8*)&ENV$ + 208ll) == 0ll);
	if( (LDTYPE$1 & 480ll) == 0ll ) goto label$58;
	TMP$86$1 = 22ll;
	goto label$94;
	label$58:;
	TMP$86$1 = LDTYPE$1 & 31ll;
	label$94:;
	if( (RDTYPE$1 & 480ll) == 0ll ) goto label$59;
	TMP$87$1 = 22ll;
	goto label$95;
	label$59:;
	TMP$87$1 = RDTYPE$1 & 31ll;
	label$95:;
	USE_PUSHPOP$1 = USE_PUSHPOP$1 & (int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$86$1 * 56ll)) + 8ll) == *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$87$1 * 56ll)) + 8ll));
	if( (LDTYPE$1 & 480ll) == 0ll ) goto label$60;
	TMP$88$1 = 22ll;
	goto label$96;
	label$60:;
	TMP$88$1 = LDTYPE$1 & 31ll;
	label$96:;
	if( (RDTYPE$1 & 480ll) == 0ll ) goto label$61;
	TMP$89$1 = 22ll;
	goto label$97;
	label$61:;
	TMP$89$1 = RDTYPE$1 & 31ll;
	label$97:;
	USE_PUSHPOP$1 = USE_PUSHPOP$1 & (int64)-(*(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$88$1 * 56ll)) == *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$89$1 * 56ll)));
	if( *(int64*)L$1 != 19ll ) goto label$62;
	TMP$90$1 = (int64)-(*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)L$1 + 24ll) + 184ll) > 0ll);
	goto label$98;
	label$62:;
	TMP$90$1 = 0ll;
	label$98:;
	USE_PUSHPOP$1 = USE_PUSHPOP$1 & (int64)-(TMP$90$1 == 0ll);
	if( *(int64*)R$1 != 19ll ) goto label$63;
	TMP$91$1 = (int64)-(*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)R$1 + 24ll) + 184ll) > 0ll);
	goto label$99;
	label$63:;
	TMP$91$1 = 0ll;
	label$99:;
	USE_PUSHPOP$1 = USE_PUSHPOP$1 & (int64)-(TMP$91$1 == 0ll);
	struct $7ASTNODE* T$1;
	T$1 = (struct $7ASTNODE*)0ull;
	int64 vr$72 = ASTHASSIDEFX( L$1 );
	if( vr$72 == 0ll ) goto label$65;
	{
		struct $7ASTNODE* vr$75 = ASTMAKEREF( &L$1 );
		struct $7ASTNODE* vr$76 = ASTNEWLINK( T$1, vr$75, -1ll );
		T$1 = vr$76;
	}
	label$65:;
	label$64:;
	int64 vr$77 = ASTHASSIDEFX( R$1 );
	if( vr$77 == 0ll ) goto label$67;
	{
		struct $7ASTNODE* vr$80 = ASTMAKEREF( &R$1 );
		struct $7ASTNODE* vr$81 = ASTNEWLINK( T$1, vr$80, -1ll );
		T$1 = vr$81;
	}
	label$67:;
	label$66:;
	if( USE_PUSHPOP$1 == 0ll ) goto label$69;
	{
		struct $7ASTNODE* vr$83 = ASTCLONETREE( L$1 );
		struct $7ASTNODE* vr$84 = ASTNEWSTACK( 87ll, vr$83 );
		struct $7ASTNODE* vr$85 = ASTNEWLINK( T$1, vr$84, -1ll );
		T$1 = vr$85;
		struct $7ASTNODE* vr$86 = ASTCLONETREE( R$1 );
		struct $7ASTNODE* vr$87 = ASTNEWASSIGN( L$1, vr$86, 0ll );
		struct $7ASTNODE* vr$88 = ASTNEWLINK( T$1, vr$87, -1ll );
		T$1 = vr$88;
		struct $7ASTNODE* vr$89 = ASTNEWSTACK( 88ll, R$1 );
		struct $7ASTNODE* vr$90 = ASTNEWLINK( T$1, vr$89, -1ll );
		T$1 = vr$90;
	}
	goto label$68;
	label$69:;
	{
		struct $8FBSYMBOL* TEMP$2;
		struct $8FBSYMBOL* vr$93 = SYMBADDTEMPVAR( *(int64*)((uint8*)L$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) );
		TEMP$2 = vr$93;
		struct $7ASTNODE* vr$94 = ASTCLONETREE( L$1 );
		struct $7ASTNODE* vr$95 = ASTNEWVAR( TEMP$2, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$96 = ASTNEWASSIGN( vr$95, vr$94, 0ll );
		struct $7ASTNODE* vr$97 = ASTNEWLINK( T$1, vr$96, -1ll );
		T$1 = vr$97;
		struct $7ASTNODE* vr$98 = ASTCLONETREE( R$1 );
		struct $7ASTNODE* vr$99 = ASTNEWASSIGN( L$1, vr$98, 0ll );
		struct $7ASTNODE* vr$100 = ASTNEWLINK( T$1, vr$99, -1ll );
		T$1 = vr$100;
		struct $7ASTNODE* vr$101 = ASTNEWVAR( TEMP$2, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$102 = ASTNEWASSIGN( R$1, vr$101, 0ll );
		struct $7ASTNODE* vr$103 = ASTNEWLINK( T$1, vr$102, -1ll );
		T$1 = vr$103;
	}
	label$68:;
	ASTADD( T$1 );
	fb$result$1 = -1ll;
	label$28:;
	return fb$result$1;
}

// Total compilation time: 0.03469498525373638 seconds.
