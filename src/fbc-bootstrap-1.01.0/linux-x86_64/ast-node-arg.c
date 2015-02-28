// Compilation of FreeBASIC-1.01.0-source/src/compiler/ast-node-arg.bas started at 16:30:08 on 02-28-2015

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
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
typedef int64 $9FB_ERRMSG;
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__astznodezarg( void ) __attribute__(( constructor ));
void* LISTNEWNODE( struct $5TLIST* );
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRPUSHPARAMLOCATION( struct $8FBSYMBOL*, int64, int64, uint8* );
void ERRPOPPARAMLOCATION( void );
void ERRREPORT( int64, int64, uint8* );
typedef int64 $12FB_ERRMSGOPT;
void ERRREPORTWARN( int64, uint8*, $12FB_ERRMSGOPT );
void ERRREPORTPARAM( struct $8FBSYMBOL*, int64, uint8*, int64 );
struct $7ASTNODE* ASTCLONETREE( struct $7ASTNODE* );
void ASTDELTREE( struct $7ASTNODE* );
int64 ASTPTRCHECK( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTNEWASSIGN( struct $7ASTNODE*, struct $7ASTNODE*, $9AST_OPOPT );
typedef int64 $11AST_CONVOPT;
struct $7ASTNODE* ASTNEWCONV( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, $11AST_CONVOPT, int64* );
struct $7ASTNODE* ASTSKIPNOCONVCAST( struct $7ASTNODE* );
struct $7ASTNODE* ASTREMOVENOCONVCAST( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWVAR( struct $8FBSYMBOL*, int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWDEREF( struct $7ASTNODE*, int64, struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* ASTNEWCALLCTOR( struct $7ASTNODE*, struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWADDROF( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWLINK( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTNEWDECL( struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* ASTNEWNODE( int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTOPTIMIZETREE( struct $7ASTNODE* );
struct $7ASTNODE* ASTUPDSTRCONCAT( struct $7ASTNODE* );
struct $7ASTNODE* _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEll( struct $8FBSYMBOL*, struct $7ASTNODE*, int64, int64 );
struct $7ASTNODE* ASTTYPEINICLONE( struct $7ASTNODE* );
struct $7ASTNODE* ASTTYPEINITRYREMOVE( struct $7ASTNODE* );
int64 ASTCANTAKEADDROF( struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDVARFIELD( struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* ASTBUILDTEMPVARCLEAR( struct $8FBSYMBOL* );
struct $7ASTNODE* ASTBUILDCALL( struct $8FBSYMBOL*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE* );
struct $7ASTNODE* ASTPATCHCTORCALL( struct $7ASTNODE*, struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDIMPLICITCTORCALLEX( struct $8FBSYMBOL*, struct $7ASTNODE*, $12FB_PARAMMODE, int64* );
struct $7ASTNODE* ASTBUILDARRAYDESCINITREE( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDSTRPTR( struct $7ASTNODE* );
void ASTDTORLISTADD( struct $8FBSYMBOL* );
void ASTSETTYPE( struct $7ASTNODE*, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTBUILDCALLRESULTVAR( struct $7ASTNODE* );
struct $8FBSYMBOL* SYMBFINDCASTOVLPROC( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, $9FB_ERRMSG* );
void SYMBCHECKDYNAMICARRAYDIMENSIONS( struct $8FBSYMBOL*, int64 );
struct $8FBSYMBOL* SYMBADDTEMPVAR( int64, struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBADDARRAYDESC( struct $8FBSYMBOL* );
int64 SYMBPROCRETURNSONSTACK( struct $8FBSYMBOL* );
int64 SYMBHASCTOR( struct $8FBSYMBOL* );
int64 SYMBCOMPISTRIVIAL( struct $8FBSYMBOL* );
int64 SYMBCHECKCONSTASSIGN( $11FB_DATATYPE, $11FB_DATATYPE, struct $8FBSYMBOL*, struct $8FBSYMBOL*, $12FB_PARAMMODE, int64* );
int64 SYMBGETUDTBASELEVEL( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
struct $7ASTNODE* RTLSTRASSIGN( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* RTLSTRALLOCTMPDESC( struct $7ASTNODE* );
struct $7ASTNODE* RTLTOSTR( struct $7ASTNODE*, int64 );
struct $7ASTNODE* RTLTOWSTR( struct $7ASTNODE* );
static struct $8FBSYMBOL* HALLOCTMPARRAYDESC( struct $8FBSYMBOL*, struct $7ASTNODE*, struct $7ASTNODE** );
static struct $19AST_TMPSTRLIST_ITEM* HADDTOCOPYBACKLIST( struct $7ASTNODE*, struct $8FBSYMBOL*, struct $7ASTNODE* );
static struct $7ASTNODE* HALLOCTMPSTRING( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
static struct $7ASTNODE* HALLOCTMPWSTRPTR( struct $7ASTNODE*, struct $7ASTNODE* );
static struct $7ASTNODE* HCHECKARGFORSTRINGPARAM( struct $7ASTNODE*, struct $8FBSYMBOL*, struct $7ASTNODE* );
static void HSTRARGTOSTRPTRPARAM( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
void HBUILDBYREFARG( struct $8FBSYMBOL*, struct $7ASTNODE* );
static void HCHECKBYREFPARAM( struct $8FBSYMBOL*, struct $7ASTNODE* );
static int64 HCHECKBYDESCDIMENSIONS( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static int64 HCHECKBYDESCPARAM( struct $7ASTNODE*, struct $8FBSYMBOL*, struct $7ASTNODE* );
static int64 HCHECKVARARGPARAM( struct $7ASTNODE*, struct $8FBSYMBOL*, struct $7ASTNODE* );
static void HCHECKVOIDPARAM( struct $7ASTNODE*, struct $8FBSYMBOL*, struct $7ASTNODE* );
static int64 HCHECKSTRPARAM( struct $7ASTNODE*, struct $8FBSYMBOL*, struct $7ASTNODE* );
static void HBYTEBYBYTE( struct $8FBSYMBOL*, struct $7ASTNODE* );
static void HUDTPASSBYVAL( struct $8FBSYMBOL*, struct $7ASTNODE* );
static int64 HIMPLICITCTOR( struct $8FBSYMBOL*, struct $7ASTNODE* );
static int64 HCHECKUDTPARAM( struct $8FBSYMBOL*, struct $7ASTNODE* );
static int64 HCHECKPARAM( struct $7ASTNODE*, struct $8FBSYMBOL*, struct $7ASTNODE* );
static struct $7ASTNODE* HCREATEOPTARG( struct $8FBSYMBOL* );
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

void HBUILDBYREFARG( struct $8FBSYMBOL* PARAM$1, struct $7ASTNODE* N$1 )
{
	label$62:;
	struct $7ASTNODE* vr$1 = ASTREMOVENOCONVCAST( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
	struct $7ASTNODE* vr$2 = ASTNEWADDROF( vr$1 );
	*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$2;
	struct $7ASTNODE* vr$16 = ASTNEWCONV( ((*(int64*)((uint8*)PARAM$1 + 48ll) & 31ll) | ((*(int64*)((uint8*)PARAM$1 + 48ll) & 480ll) + 32ll)) | ((*(int64*)((uint8*)PARAM$1 + 48ll) & 261632ll) << 1ll), *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll), *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), 0ll, (int64*)0ull );
	*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$16;
	*(int64*)((uint8*)N$1 + 40ll) = 1ll;
	label$63:;
}

struct $7ASTNODE* ASTNEWARG( struct $7ASTNODE* PARENT$1, struct $7ASTNODE* ARG$1, int64 DTYPE$1, int64 MODE$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$305:;
	struct $7ASTNODE* N$1;
	struct $8FBSYMBOL* SYM$1;
	struct $8FBSYMBOL* PARAM$1;
	SYM$1 = *(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 24ll);
	if( *(int64*)((uint8*)PARENT$1 + 48ll) < (int64)*(int16*)((uint8*)SYM$1 + 112ll) ) goto label$308;
	{
		PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 136ll);
	}
	goto label$307;
	label$308:;
	{
		PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 56ll);
	}
	label$307:;
	if( ARG$1 != (struct $7ASTNODE*)0ull ) goto label$310;
	{
		struct $7ASTNODE* vr$9 = HCREATEOPTARG( PARAM$1 );
		ARG$1 = vr$9;
	}
	label$310:;
	label$309:;
	if( DTYPE$1 != 2147483648ll ) goto label$312;
	{
		DTYPE$1 = *(int64*)((uint8*)ARG$1 + 8ll);
	}
	label$312:;
	label$311:;
	if( (((int64)-((int64)-((*(int64*)((uint8*)SYM$1 + 16ll) & 32ll) != 0ll) == 0ll) | (int64)-((*(int64*)((uint8*)PARAM$1 + 16ll) & 33554432ll) != 0ll)) & ~((int64)-((*(int64*)((uint8*)PARAM$1 + 8ll) & 2048ll) != 0ll) & ((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 4096ll) != 0ll) | (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 8192ll) != 0ll)))) == 0ll ) goto label$314;
	{
		int64 TMP$102$2;
		TMP$102$2 = 0ll;
		int64 vr$39 = SYMBCHECKCONSTASSIGN( *($11FB_DATATYPE*)((uint8*)PARAM$1 + 48ll), DTYPE$1, *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll), *(struct $8FBSYMBOL**)((uint8*)ARG$1 + 16ll), *($12FB_PARAMMODE*)((uint8*)PARAM$1 + 88ll), &TMP$102$2 );
		if( vr$39 != 0ll ) goto label$316;
		{
			if( (*(int64*)((uint8*)PARAM$1 + 8ll) & 2048ll) == 0ll ) goto label$318;
			{
				ERRREPORTPARAM( *(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 24ll), 0ll, (uint8*)0ull, 275ll );
			}
			goto label$317;
			label$318:;
			{
				ERRREPORTPARAM( *(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 24ll), *(int64*)((uint8*)PARENT$1 + 48ll) + 1ll, (uint8*)0ull, 180ll );
			}
			label$317:;
			goto label$306;
		}
		label$316:;
		label$315:;
	}
	label$314:;
	label$313:;
	struct $7ASTNODE* vr$48 = ASTNEWNODE( 22ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	N$1 = vr$48;
	fb$result$1 = N$1;
	*(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) = PARAM$1;
	*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = ARG$1;
	*(int64*)((uint8*)N$1 + 40ll) = MODE$1;
	*(int64*)((uint8*)N$1 + 48ll) = 0ll;
	if( *(int64*)((uint8*)SYM$1 + 144ll) != 4ll ) goto label$320;
	{
		if( *(struct $7ASTNODE**)((uint8*)PARENT$1 + 120ll) != (struct $7ASTNODE*)0ull ) goto label$322;
		{
			*(struct $7ASTNODE**)((uint8*)PARENT$1 + 120ll) = N$1;
		}
		goto label$321;
		label$322:;
		{
			*(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)PARENT$1 + 64ll) + 120ll) = N$1;
		}
		label$321:;
		*(struct $7ASTNODE**)((uint8*)PARENT$1 + 64ll) = N$1;
		*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = (struct $7ASTNODE*)0ull;
	}
	goto label$319;
	label$320:;
	{
		if( *(struct $7ASTNODE**)((uint8*)PARENT$1 + 120ll) != (struct $7ASTNODE*)0ull ) goto label$324;
		{
			*(struct $7ASTNODE**)((uint8*)PARENT$1 + 64ll) = N$1;
		}
		label$324:;
		label$323:;
		*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = *(struct $7ASTNODE**)((uint8*)PARENT$1 + 120ll);
		*(struct $7ASTNODE**)((uint8*)PARENT$1 + 120ll) = N$1;
	}
	label$319:;
	ERRPUSHPARAMLOCATION( *(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 24ll), -1ll, *(int64*)((uint8*)PARENT$1 + 48ll) + 1ll, (uint8*)0ull );
	int64 vr$71 = HCHECKPARAM( PARENT$1, PARAM$1, N$1 );
	if( vr$71 != 0ll ) goto label$326;
	{
		ERRPOPPARAMLOCATION(  );
		fb$result$1 = (struct $7ASTNODE*)0ull;
		goto label$306;
	}
	label$326:;
	label$325:;
	ERRPOPPARAMLOCATION(  );
	*(int64*)((uint8*)PARENT$1 + 48ll) = *(int64*)((uint8*)PARENT$1 + 48ll) + 1ll;
	if( *(int64*)((uint8*)PARENT$1 + 48ll) >= (int64)*(int16*)((uint8*)SYM$1 + 112ll) ) goto label$328;
	{
		*(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 56ll) = *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 56ll) + 296ll);
	}
	label$328:;
	label$327:;
	label$306:;
	return fb$result$1;
}

void ASTREPLACEINSTANCEARG( struct $7ASTNODE* PARENT$1, struct $7ASTNODE* EXPR$1, int64 MODE$1 )
{
	label$329:;
	struct $8FBSYMBOL* SYM$1;
	struct $8FBSYMBOL* PARAM$1;
	struct $7ASTNODE* N$1;
	SYM$1 = *(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 24ll);
	if( *(int64*)((uint8*)SYM$1 + 144ll) != 4ll ) goto label$332;
	{
		N$1 = *(struct $7ASTNODE**)((uint8*)PARENT$1 + 120ll);
	}
	goto label$331;
	label$332:;
	{
		N$1 = *(struct $7ASTNODE**)((uint8*)PARENT$1 + 64ll);
	}
	label$331:;
	PARAM$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 128ll);
	ASTDELTREE( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
	*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = EXPR$1;
	*(int64*)((uint8*)N$1 + 40ll) = MODE$1;
	*(int64*)((uint8*)N$1 + 48ll) = 0ll;
	HCHECKPARAM( PARENT$1, PARAM$1, N$1 );
	label$330:;
}

__attribute__(( constructor )) static void fb_ctor__astznodezarg( void )
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

static struct $8FBSYMBOL* HALLOCTMPARRAYDESC( struct $8FBSYMBOL* ARRAY$1, struct $7ASTNODE* ARRAY_EXPR$1, struct $7ASTNODE** TREE$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$10:;
	struct $8FBSYMBOL* DESC$1;
	struct $7ASTNODE* INITREE$1;
	struct $8FBSYMBOL* vr$1 = SYMBADDARRAYDESC( ARRAY$1 );
	DESC$1 = vr$1;
	struct $7ASTNODE* vr$2 = ASTBUILDARRAYDESCINITREE( DESC$1, ARRAY$1, ARRAY_EXPR$1 );
	INITREE$1 = vr$2;
	struct $7ASTNODE* vr$3 = ASTNEWDECL( DESC$1, 0ll );
	*TREE$1 = vr$3;
	struct $7ASTNODE* vr$5 = _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEll( DESC$1, INITREE$1, 0ll, 64ll );
	struct $7ASTNODE* vr$7 = ASTNEWLINK( *TREE$1, vr$5, -1ll );
	*TREE$1 = vr$7;
	fb$result$1 = DESC$1;
	label$11:;
	return fb$result$1;
}

static struct $19AST_TMPSTRLIST_ITEM* HADDTOCOPYBACKLIST( struct $7ASTNODE* PARENT$1, struct $8FBSYMBOL* TEMP$1, struct $7ASTNODE* N$1 )
{
	struct $19AST_TMPSTRLIST_ITEM* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$12:;
	struct $19AST_TMPSTRLIST_ITEM* T$1;
	void* vr$2 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&AST$ + 88ll) );
	T$1 = (struct $19AST_TMPSTRLIST_ITEM*)vr$2;
	*(struct $19AST_TMPSTRLIST_ITEM**)((uint8*)T$1 + 16ll) = *(struct $19AST_TMPSTRLIST_ITEM**)((uint8*)PARENT$1 + 72ll);
	*(struct $19AST_TMPSTRLIST_ITEM**)((uint8*)PARENT$1 + 72ll) = T$1;
	*(struct $8FBSYMBOL**)T$1 = TEMP$1;
	struct $7ASTNODE* vr$7 = ASTCLONETREE( N$1 );
	struct $7ASTNODE* vr$8 = ASTOPTIMIZETREE( vr$7 );
	*(struct $7ASTNODE**)((uint8*)T$1 + 8ll) = vr$8;
	fb$result$1 = T$1;
	label$13:;
	return fb$result$1;
}

static struct $7ASTNODE* HALLOCTMPSTRING( struct $7ASTNODE* PARENT$1, struct $7ASTNODE* N$1, int64 COPYBACK$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$14:;
	struct $8FBSYMBOL* TEMP$1;
	struct $8FBSYMBOL* vr$1 = SYMBADDTEMPVAR( 16ll, (struct $8FBSYMBOL*)0ull );
	TEMP$1 = vr$1;
	ASTDTORLISTADD( TEMP$1 );
	if( COPYBACK$1 == 0ll ) goto label$17;
	{
		HADDTOCOPYBACKLIST( PARENT$1, TEMP$1, N$1 );
	}
	label$17:;
	label$16:;
	struct $7ASTNODE* vr$3 = ASTNEWVAR( TEMP$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$4 = ASTNEWVAR( TEMP$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$5 = RTLSTRASSIGN( vr$4, N$1, 0ll );
	struct $7ASTNODE* vr$6 = ASTBUILDTEMPVARCLEAR( TEMP$1 );
	struct $7ASTNODE* vr$7 = ASTNEWLINK( vr$6, vr$5, 0ll );
	struct $7ASTNODE* vr$8 = ASTNEWLINK( vr$7, vr$3, 0ll );
	fb$result$1 = vr$8;
	label$15:;
	return fb$result$1;
}

static struct $7ASTNODE* HALLOCTMPWSTRPTR( struct $7ASTNODE* PARENT$1, struct $7ASTNODE* N$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$18:;
	struct $8FBSYMBOL* TEMP$1;
	struct $8FBSYMBOL* vr$1 = SYMBADDTEMPVAR( 38ll, (struct $8FBSYMBOL*)0ull );
	TEMP$1 = vr$1;
	*($12FB_SYMBSTATS*)((uint8*)TEMP$1 + 16ll) = *(int64*)((uint8*)TEMP$1 + 16ll) | 16777216ll;
	ASTDTORLISTADD( TEMP$1 );
	ASTSETTYPE( N$1, 38ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$5 = ASTNEWVAR( TEMP$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$6 = ASTNEWASSIGN( vr$5, N$1, 0ll );
	fb$result$1 = vr$6;
	label$19:;
	return fb$result$1;
}

static struct $7ASTNODE* HCHECKARGFORSTRINGPARAM( struct $7ASTNODE* PARENT$1, struct $8FBSYMBOL* PARAM$1, struct $7ASTNODE* ARG$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$20:;
	int64 ARGDTYPE$1;
	int64 COPYBACK$1;
	ARGDTYPE$1 = *(int64*)((uint8*)ARG$1 + 8ll) & 511ll;
	if( *(int64*)((uint8*)PARENT$1 + 40ll) == 0ll ) goto label$23;
	{
		if( *(int64*)((uint8*)PARAM$1 + 88ll) != 2ll ) goto label$25;
		{
			{
				if( ARGDTYPE$1 != 16ll ) goto label$27;
				label$28:;
				{
					if( *(int64*)ARG$1 != 9ll ) goto label$30;
					{
						fb$result$1 = ARG$1;
						goto label$21;
					}
					label$30:;
					label$29:;
				}
				goto label$26;
				label$27:;
				if( ARGDTYPE$1 == 3ll ) goto label$32;
				label$33:;
				if( ARGDTYPE$1 != 17ll ) goto label$31;
				label$32:;
				{
					struct $7ASTNODE* vr$12 = RTLSTRALLOCTMPDESC( ARG$1 );
					fb$result$1 = vr$12;
					goto label$21;
				}
				label$31:;
				label$26:;
			}
		}
		label$25:;
		label$24:;
	}
	label$23:;
	label$22:;
	COPYBACK$1 = 0ll;
	if( *(int64*)((uint8*)PARAM$1 + 88ll) != 2ll ) goto label$35;
	{
		{
			if( ARGDTYPE$1 != 17ll ) goto label$37;
			label$38:;
			{
				COPYBACK$1 = -1ll;
			}
			goto label$36;
			label$37:;
			if( ARGDTYPE$1 != 16ll ) goto label$39;
			label$40:;
			{
				if( (int64)-(*(int64*)ARG$1 == 9ll) != 0ll ) goto label$42;
				{
					fb$result$1 = ARG$1;
					goto label$21;
				}
				label$42:;
				label$41:;
			}
			label$39:;
			label$36:;
		}
	}
	label$35:;
	label$34:;
	struct $7ASTNODE* vr$20 = HALLOCTMPSTRING( PARENT$1, ARG$1, COPYBACK$1 );
	fb$result$1 = vr$20;
	label$21:;
	return fb$result$1;
}

static void HSTRARGTOSTRPTRPARAM( struct $7ASTNODE* PARENT$1, struct $7ASTNODE* N$1, int64 CHECKRTL$1 )
{
	label$43:;
	if( CHECKRTL$1 != 0ll ) goto label$46;
	{
		if( *(int64*)((uint8*)PARENT$1 + 40ll) == 0ll ) goto label$48;
		{
			goto label$44;
		}
		label$48:;
		label$47:;
	}
	label$46:;
	label$45:;
	{
		int64 TMP$77$2;
		TMP$77$2 = *(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 8ll) & 511ll;
		if( TMP$77$2 != 16ll ) goto label$50;
		label$51:;
		{
			if( *(int64*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) != 9ll ) goto label$53;
			{
				struct $7ASTNODE* vr$11 = HALLOCTMPSTRING( PARENT$1, *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), 0ll );
				*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$11;
			}
			label$53:;
			label$52:;
			struct $7ASTNODE* vr$14 = ASTBUILDSTRPTR( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
			*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$14;
		}
		goto label$49;
		label$50:;
		if( TMP$77$2 != 17ll ) goto label$54;
		label$55:;
		{
			struct $7ASTNODE* vr$18 = ASTNEWADDROF( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
			struct $7ASTNODE* vr$19 = ASTNEWCONV( 35ll, (struct $8FBSYMBOL*)0ull, vr$18, 0ll, (int64*)0ull );
			*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$19;
		}
		goto label$49;
		label$54:;
		if( TMP$77$2 != 3ll ) goto label$56;
		label$57:;
		{
			struct $7ASTNODE* vr$23 = ASTNEWADDROF( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
			*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$23;
		}
		goto label$49;
		label$56:;
		if( TMP$77$2 != 6ll ) goto label$58;
		label$59:;
		{
			if( *(int64*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) != 9ll ) goto label$61;
			{
				struct $7ASTNODE* vr$30 = HALLOCTMPWSTRPTR( PARENT$1, *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
				*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$30;
			}
			goto label$60;
			label$61:;
			{
				struct $7ASTNODE* vr$33 = ASTNEWADDROF( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
				*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$33;
			}
			label$60:;
		}
		label$58:;
		label$49:;
	}
	label$44:;
}

static void HCHECKBYREFPARAM( struct $8FBSYMBOL* PARAM$1, struct $7ASTNODE* N$1 )
{
	label$64:;
	struct $7ASTNODE* T$1;
	struct $7ASTNODE* vr$1 = ASTSKIPNOCONVCAST( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
	T$1 = vr$1;
	if( *(int64*)T$1 != 9ll ) goto label$67;
	{
		{
			uint64 TMP$78$3;
			TMP$78$3 = (uint64)(*(int64*)((uint8*)T$1 + 8ll) & 511ll);
			goto label$69;
			label$70:;
			{
				goto label$65;
			}
			goto label$68;
			label$69:;
			static const void* tmp$103[15ll] = {
				&&label$70,
				&&label$68,
				&&label$68,
				&&label$70,
				&&label$68,
				&&label$68,
				&&label$68,
				&&label$68,
				&&label$68,
				&&label$68,
				&&label$68,
				&&label$68,
				&&label$68,
				&&label$70,
				&&label$70,
			};
			if( TMP$78$3 < 3ll ) goto label$68;
			if( TMP$78$3 > 17ll ) goto label$68;
			goto *tmp$103[TMP$78$3 - 3ll];
			label$68:;
		}
	}
	label$67:;
	label$66:;
	int64 vr$6 = ASTCANTAKEADDROF( T$1 );
	if( vr$6 != 0ll ) goto label$72;
	{
		struct $8FBSYMBOL* vr$13 = SYMBADDTEMPVAR( *(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 8ll), *(struct $8FBSYMBOL**)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 16ll) );
		struct $7ASTNODE* vr$14 = ASTNEWVAR( vr$13, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$15 = ASTNEWASSIGN( vr$14, *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), 80ll );
		*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$15;
	}
	label$72:;
	label$71:;
	HBUILDBYREFARG( PARAM$1, N$1 );
	label$65:;
}

static int64 HCHECKBYDESCDIMENSIONS( struct $8FBSYMBOL* PARAM$1, struct $8FBSYMBOL* ARG$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$73:;
	if( *(int64*)((uint8*)PARAM$1 + 112ll) == *(int64*)((uint8*)ARG$1 + 96ll) ) goto label$76;
	{
		if( *(int64*)((uint8*)PARAM$1 + 112ll) != -1ll ) goto label$78;
		{
		}
		goto label$77;
		label$78:;
		if( *(int64*)((uint8*)ARG$1 + 96ll) != -1ll ) goto label$79;
		{
			if( (*(int64*)((uint8*)ARG$1 + 8ll) & 4ll) == 0ll ) goto label$81;
			{
				SYMBCHECKDYNAMICARRAYDIMENSIONS( ARG$1, *(int64*)((uint8*)PARAM$1 + 112ll) );
			}
			label$81:;
			label$80:;
		}
		goto label$77;
		label$79:;
		{
			goto label$74;
		}
		label$77:;
	}
	label$76:;
	label$75:;
	fb$result$1 = -1ll;
	label$74:;
	return fb$result$1;
}

static int64 HCHECKBYDESCPARAM( struct $7ASTNODE* PARENT$1, struct $8FBSYMBOL* PARAM$1, struct $7ASTNODE* N$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$82:;
	struct $7ASTNODE* DESC_TREE$1;
	int64 ARG_DTYPE$1;
	int64 SYM_DTYPE$1;
	struct $8FBSYMBOL* S$1;
	struct $8FBSYMBOL* DESC$1;
	ARG_DTYPE$1 = *(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 8ll) & 511ll;
	fb$result$1 = 0ll;
	if( *(int64*)((uint8*)N$1 + 40ll) != 1ll ) goto label$85;
	{
		fb$result$1 = -1ll;
		goto label$83;
	}
	label$85:;
	label$84:;
	S$1 = *(struct $8FBSYMBOL**)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 24ll);
	if( S$1 != (struct $8FBSYMBOL*)0ull ) goto label$87;
	{
		goto label$83;
	}
	label$87:;
	label$86:;
	SYM_DTYPE$1 = *(int64*)((uint8*)PARAM$1 + 48ll) & 511ll;
	if( ((int64)-(*(int64*)((uint8*)PARENT$1 + 40ll) == 0ll) & (int64)-(SYM_DTYPE$1 != 0ll)) == 0ll ) goto label$89;
	{
		int64 TMP$79$2;
		int64 TMP$80$2;
		int64 TMP$81$2;
		int64 TMP$82$2;
		if( (ARG_DTYPE$1 & 480ll) == 0ll ) goto label$90;
		TMP$79$2 = 22ll;
		goto label$333;
		label$90:;
		TMP$79$2 = ARG_DTYPE$1 & 31ll;
		label$333:;
		if( (SYM_DTYPE$1 & 480ll) == 0ll ) goto label$91;
		TMP$80$2 = 22ll;
		goto label$334;
		label$91:;
		TMP$80$2 = SYM_DTYPE$1 & 31ll;
		label$334:;
		if( (ARG_DTYPE$1 & 480ll) == 0ll ) goto label$92;
		TMP$81$2 = 22ll;
		goto label$335;
		label$92:;
		TMP$81$2 = ARG_DTYPE$1 & 31ll;
		label$335:;
		if( (SYM_DTYPE$1 & 480ll) == 0ll ) goto label$93;
		TMP$82$2 = 22ll;
		goto label$336;
		label$93:;
		TMP$82$2 = SYM_DTYPE$1 & 31ll;
		label$336:;
		if( ((int64)-(*(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$79$2 * 56ll)) != *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$80$2 * 56ll))) | (int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$81$2 * 56ll)) + 8ll) != *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$82$2 * 56ll)) + 8ll))) == 0ll ) goto label$95;
		{
			goto label$83;
		}
		label$95:;
		label$94:;
	}
	label$89:;
	label$88:;
	if( *(int64*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) != 17ll ) goto label$97;
	{
		if( (*(int64*)((uint8*)S$1 + 8ll) & 65536ll) == 0ll ) goto label$99;
		{
			int64 vr$42 = HCHECKBYDESCDIMENSIONS( PARAM$1, S$1 );
			if( vr$42 != 0ll ) goto label$101;
			{
				goto label$83;
			}
			label$101:;
			label$100:;
			ASTSETTYPE( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), 50ll, *(struct $8FBSYMBOL**)((uint8*)S$1 + 136ll) );
			fb$result$1 = -1ll;
			goto label$83;
		}
		label$99:;
		label$98:;
		DESC$1 = *(struct $8FBSYMBOL**)((uint8*)S$1 + 128ll);
		if( DESC$1 == (struct $8FBSYMBOL*)0ull ) goto label$103;
		{
			int64 vr$48 = HCHECKBYDESCDIMENSIONS( PARAM$1, S$1 );
			if( vr$48 != 0ll ) goto label$105;
			{
				goto label$83;
			}
			label$105:;
			label$104:;
			ASTDELTREE( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
			struct $7ASTNODE* vr$51 = ASTNEWVAR( DESC$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$52 = ASTNEWADDROF( vr$51 );
			*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$52;
			fb$result$1 = -1ll;
			goto label$83;
		}
		label$103:;
		label$102:;
	}
	goto label$96;
	label$97:;
	if( *(int64*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) != 19ll ) goto label$106;
	{
		if( (*(int64*)((uint8*)S$1 + 8ll) & 4ll) == 0ll ) goto label$108;
		{
			int64 vr$60 = HCHECKBYDESCDIMENSIONS( PARAM$1, S$1 );
			if( vr$60 != 0ll ) goto label$110;
			{
				goto label$83;
			}
			label$110:;
			label$109:;
			DESC$1 = *(struct $8FBSYMBOL**)((uint8*)S$1 + 128ll);
			ASTSETTYPE( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), *(int64*)((uint8*)DESC$1 + 48ll), *(struct $8FBSYMBOL**)((uint8*)DESC$1 + 56ll) );
			struct $7ASTNODE* vr$67 = ASTNEWADDROF( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
			*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$67;
			fb$result$1 = -1ll;
			goto label$83;
		}
		goto label$107;
		label$108:;
		if( *(int64*)((uint8*)S$1 + 96ll) <= 0ll ) goto label$111;
		{
			int64 vr$71 = HCHECKBYDESCDIMENSIONS( PARAM$1, S$1 );
			if( vr$71 != 0ll ) goto label$113;
			{
				goto label$83;
			}
			label$113:;
			label$112:;
			struct $8FBSYMBOL* vr$75 = HALLOCTMPARRAYDESC( S$1, *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), &DESC_TREE$1 );
			DESC$1 = vr$75;
			struct $7ASTNODE* vr$76 = ASTNEWVAR( DESC$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$77 = ASTNEWADDROF( vr$76 );
			struct $7ASTNODE* vr$78 = ASTNEWLINK( vr$77, DESC_TREE$1, -1ll );
			*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$78;
			fb$result$1 = -1ll;
			goto label$83;
		}
		label$111:;
		label$107:;
	}
	label$106:;
	label$96:;
	label$83:;
	return fb$result$1;
}

static int64 HCHECKVARARGPARAM( struct $7ASTNODE* PARENT$1, struct $8FBSYMBOL* PARAM$1, struct $7ASTNODE* N$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$114:;
	int64 ARG_DTYPE$1;
	ARG_DTYPE$1 = *(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 8ll) & 511ll;
	{
		int64 TMP$83$2;
		uint64 TMP$84$2;
		if( (ARG_DTYPE$1 & 480ll) == 0ll ) goto label$116;
		TMP$83$2 = 22ll;
		goto label$337;
		label$116:;
		TMP$83$2 = ARG_DTYPE$1 & 31ll;
		label$337:;
		TMP$84$2 = *(uint64*)((uint8*)SYMB_DTYPETB$ + (TMP$83$2 * 56ll));
		goto label$118;
		label$119:;
		{
			HSTRARGTOSTRPTRPARAM( PARENT$1, N$1, 0ll );
		}
		goto label$117;
		label$120:;
		{
			{
				if( ARG_DTYPE$1 == 3ll ) goto label$123;
				label$124:;
				if( ARG_DTYPE$1 != 6ll ) goto label$122;
				label$123:;
				{
					HSTRARGTOSTRPTRPARAM( PARENT$1, N$1, 0ll );
				}
				goto label$121;
				label$122:;
				{
					int64 TMP$85$5;
					if( (ARG_DTYPE$1 & 480ll) == 0ll ) goto label$126;
					TMP$85$5 = 22ll;
					goto label$338;
					label$126:;
					TMP$85$5 = ARG_DTYPE$1 & 31ll;
					label$338:;
					if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$85$5 * 56ll)) + 8ll) >= 4ll ) goto label$128;
					{
						int64 TMP$86$6;
						$11FB_DATATYPE TMP$87$6;
						if( (ARG_DTYPE$1 & 480ll) == 0ll ) goto label$129;
						TMP$86$6 = 22ll;
						goto label$339;
						label$129:;
						TMP$86$6 = ARG_DTYPE$1 & 31ll;
						label$339:;
						if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$86$6 * 56ll)) + 16ll) == 0ll ) goto label$130;
						TMP$87$6 = 10ll;
						goto label$340;
						label$130:;
						TMP$87$6 = 11ll;
						label$340:;
						struct $7ASTNODE* vr$21 = ASTNEWCONV( TMP$87$6, (struct $8FBSYMBOL*)0ull, *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), 0ll, (int64*)0ull );
						*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$21;
					}
					label$128:;
					label$127:;
				}
				label$125:;
				label$121:;
			}
		}
		goto label$117;
		label$131:;
		{
			if( ARG_DTYPE$1 != 14ll ) goto label$133;
			{
				struct $7ASTNODE* vr$25 = ASTNEWCONV( 15ll, (struct $8FBSYMBOL*)0ull, *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), 0ll, (int64*)0ull );
				*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$25;
			}
			label$133:;
			label$132:;
		}
		goto label$117;
		label$134:;
		{
			ERRREPORT( 57ll, 0ll, (uint8*)0ull );
			fb$result$1 = 0ll;
			goto label$115;
		}
		goto label$117;
		label$118:;
		static const void* tmp$104[3ll] = {
			&&label$120,
			&&label$131,
			&&label$119,
		};
		if( TMP$84$2 > 2ll ) goto label$134;
		goto *tmp$104[TMP$84$2 - 0ll];
		label$117:;
	}
	fb$result$1 = -1ll;
	label$115:;
	return fb$result$1;
}

static void HCHECKVOIDPARAM( struct $7ASTNODE* PARENT$1, struct $8FBSYMBOL* PARAM$1, struct $7ASTNODE* N$1 )
{
	label$135:;
	if( *(int64*)((uint8*)N$1 + 40ll) != 1ll ) goto label$138;
	{
		HSTRARGTOSTRPTRPARAM( PARENT$1, N$1, 0ll );
		goto label$136;
	}
	label$138:;
	label$137:;
	if( *(int64*)((uint8*)&ENV$ + 272ll) == 3ll ) goto label$140;
	{
		if( ((int64)-(*(int64*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) == 16ll) | (int64)-(*(int64*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) == 23ll)) == 0ll ) goto label$142;
		{
			goto label$136;
		}
		label$142:;
		label$141:;
	}
	label$140:;
	label$139:;
	HCHECKBYREFPARAM( PARAM$1, N$1 );
	label$136:;
}

static int64 HCHECKSTRPARAM( struct $7ASTNODE* PARENT$1, struct $8FBSYMBOL* PARAM$1, struct $7ASTNODE* N$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$143:;
	int64 ARGDTYPE$1;
	ARGDTYPE$1 = *(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 8ll) & 511ll;
	{
		uint64 TMP$88$2;
		TMP$88$2 = (uint64)ARGDTYPE$1;
		goto label$146;
		label$147:;
		{
		}
		goto label$145;
		label$148:;
		{
		}
		goto label$145;
		label$149:;
		{
			ERRREPORT( 57ll, 0ll, (uint8*)0ull );
			fb$result$1 = 0ll;
			goto label$144;
		}
		goto label$145;
		label$146:;
		static const void* tmp$105[15ll] = {
			&&label$148,
			&&label$149,
			&&label$149,
			&&label$148,
			&&label$149,
			&&label$149,
			&&label$149,
			&&label$149,
			&&label$149,
			&&label$149,
			&&label$149,
			&&label$149,
			&&label$149,
			&&label$147,
			&&label$147,
		};
		if( TMP$88$2 < 3ll ) goto label$149;
		if( TMP$88$2 > 17ll ) goto label$149;
		goto *tmp$105[TMP$88$2 - 3ll];
		label$145:;
	}
	struct $7ASTNODE* vr$5 = HCHECKARGFORSTRINGPARAM( PARENT$1, PARAM$1, *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
	*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$5;
	{
		$12FB_PARAMMODE TMP$89$2;
		TMP$89$2 = *($12FB_PARAMMODE*)((uint8*)PARAM$1 + 88ll);
		if( TMP$89$2 != 2ll ) goto label$151;
		label$152:;
		{
			if( (int64)-(*(int64*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) == 9ll) != 0ll ) goto label$154;
			{
				HBUILDBYREFARG( PARAM$1, N$1 );
			}
			label$154:;
			label$153:;
		}
		goto label$150;
		label$151:;
		if( TMP$89$2 != 1ll ) goto label$155;
		label$156:;
		{
			HBUILDBYREFARG( PARAM$1, N$1 );
		}
		label$155:;
		label$150:;
	}
	fb$result$1 = -1ll;
	label$144:;
	return fb$result$1;
}

static void HBYTEBYBYTE( struct $8FBSYMBOL* PARAM$1, struct $7ASTNODE* N$1 )
{
	label$157:;
	*(int64*)((uint8*)N$1 + 48ll) = *(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll) + 72ll);
	label$158:;
}

static void HUDTPASSBYVAL( struct $8FBSYMBOL* PARAM$1, struct $7ASTNODE* N$1 )
{
	label$159:;
	struct $8FBSYMBOL* TMP$1;
	struct $7ASTNODE* T$1;
	struct $7ASTNODE* CALLEXPR$1;
	int64 IS_CTORCALL$1;
	struct $7ASTNODE* vr$1 = ASTSKIPNOCONVCAST( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
	T$1 = vr$1;
	int64 vr$3 = SYMBCOMPISTRIVIAL( *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll) );
	if( vr$3 == 0ll ) goto label$162;
	{
		if( *(int64*)T$1 != 9ll ) goto label$164;
		{
			struct $7ASTNODE* vr$8 = ASTREMOVENOCONVCAST( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
			*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$8;
			int64 vr$12 = SYMBPROCRETURNSONSTACK( *(struct $8FBSYMBOL**)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 24ll) );
			if( vr$12 == 0ll ) goto label$166;
			{
				struct $7ASTNODE* vr$15 = ASTBUILDCALLRESULTVAR( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
				*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$15;
				HBYTEBYBYTE( PARAM$1, N$1 );
			}
			goto label$165;
			label$166:;
			{
				ASTSETTYPE( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), *(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 24ll) + 152ll), *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 24ll) + 160ll) );
			}
			label$165:;
		}
		goto label$163;
		label$164:;
		{
			HBYTEBYBYTE( PARAM$1, N$1 );
		}
		label$163:;
		goto label$160;
	}
	label$162:;
	label$161:;
	struct $8FBSYMBOL* vr$26 = SYMBADDTEMPVAR( *(int64*)((uint8*)PARAM$1 + 48ll), *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll) );
	TMP$1 = vr$26;
	ASTDTORLISTADD( TMP$1 );
	if( *(int64*)T$1 != 36ll ) goto label$168;
	{
		struct $7ASTNODE* vr$30 = ASTREMOVENOCONVCAST( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
		*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$30;
		struct $7ASTNODE* vr$32 = ASTNEWVAR( TMP$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$34 = _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEll( TMP$1, *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), -1ll, 64ll );
		struct $7ASTNODE* vr$35 = ASTNEWLINK( vr$34, vr$32, 0ll );
		*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$35;
	}
	goto label$167;
	label$168:;
	{
		struct $7ASTNODE* vr$40 = ASTBUILDIMPLICITCTORCALLEX( PARAM$1, *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), *($12FB_PARAMMODE*)((uint8*)N$1 + 40ll), &IS_CTORCALL$1 );
		*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$40;
		if( IS_CTORCALL$1 == 0ll ) goto label$170;
		{
			struct $7ASTNODE* vr$43 = ASTNEWVAR( TMP$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$44 = ASTNEWVAR( TMP$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$46 = ASTPATCHCTORCALL( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), vr$44 );
			struct $7ASTNODE* vr$47 = ASTNEWCALLCTOR( vr$46, vr$43 );
			*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$47;
		}
		goto label$169;
		label$170:;
		{
			struct $7ASTNODE* vr$49 = ASTNEWVAR( TMP$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$51 = ASTNEWVAR( TMP$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$52 = ASTNEWASSIGN( vr$51, *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), 64ll );
			struct $7ASTNODE* vr$53 = ASTNEWLINK( vr$52, vr$49, 0ll );
			*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$53;
		}
		label$169:;
	}
	label$167:;
	HBUILDBYREFARG( PARAM$1, N$1 );
	label$160:;
}

static int64 HIMPLICITCTOR( struct $8FBSYMBOL* PARAM$1, struct $7ASTNODE* N$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$171:;
	static int64 REC_CNT$1 = 0ll;
	struct $7ASTNODE* ARG$1;
	struct $8FBSYMBOL* TMP$1;
	int64 IS_CTORCALL$1;
	int64 vr$1 = SYMBHASCTOR( PARAM$1 );
	if( vr$1 != 0ll ) goto label$174;
	{
		goto label$172;
	}
	label$174:;
	label$173:;
	if( REC_CNT$1 == 0ll ) goto label$176;
	{
		goto label$172;
	}
	label$176:;
	label$175:;
	REC_CNT$1 = REC_CNT$1 + 1ll;
	struct $7ASTNODE* vr$8 = ASTBUILDIMPLICITCTORCALLEX( PARAM$1, *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), *($12FB_PARAMMODE*)((uint8*)N$1 + 40ll), &IS_CTORCALL$1 );
	ARG$1 = vr$8;
	REC_CNT$1 = REC_CNT$1 + -1ll;
	if( IS_CTORCALL$1 != 0ll ) goto label$178;
	{
		goto label$172;
	}
	label$178:;
	label$177:;
	struct $8FBSYMBOL* vr$13 = SYMBADDTEMPVAR( *(int64*)((uint8*)PARAM$1 + 48ll), *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll) );
	TMP$1 = vr$13;
	ASTDTORLISTADD( TMP$1 );
	struct $7ASTNODE* vr$14 = ASTNEWVAR( TMP$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$15 = ASTNEWVAR( TMP$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$16 = ASTPATCHCTORCALL( ARG$1, vr$15 );
	struct $7ASTNODE* vr$17 = ASTNEWCALLCTOR( vr$16, vr$14 );
	*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$17;
	if( *(int64*)((uint8*)PARAM$1 + 88ll) != 1ll ) goto label$180;
	{
		HUDTPASSBYVAL( PARAM$1, N$1 );
	}
	goto label$179;
	label$180:;
	{
		HBUILDBYREFARG( PARAM$1, N$1 );
	}
	label$179:;
	fb$result$1 = -1ll;
	label$172:;
	return fb$result$1;
}

static int64 HCHECKUDTPARAM( struct $8FBSYMBOL* PARAM$1, struct $7ASTNODE* N$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$181:;
	struct $8FBSYMBOL* TMP$1;
	if( (*(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 8ll) & 511ll) == 18ll ) goto label$184;
	{
		int64 vr$5 = HIMPLICITCTOR( PARAM$1, N$1 );
		if( vr$5 != 0ll ) goto label$186;
		{
			ERRREPORT( 57ll, 0ll, (uint8*)0ull );
			fb$result$1 = 0ll;
			goto label$182;
		}
		label$186:;
		label$185:;
		fb$result$1 = -1ll;
		goto label$182;
	}
	label$184:;
	label$183:;
	if( *(struct $8FBSYMBOL**)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 16ll) == *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll) ) goto label$188;
	{
		int64 vr$14 = SYMBGETUDTBASELEVEL( *(struct $8FBSYMBOL**)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 16ll), *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll) );
		if( vr$14 != 0ll ) goto label$190;
		{
			int64 vr$16 = HIMPLICITCTOR( PARAM$1, N$1 );
			if( vr$16 != 0ll ) goto label$192;
			{
				struct $7ASTNODE* vr$22 = ASTNEWCONV( *(int64*)((uint8*)PARAM$1 + 48ll) & 511ll, *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll), *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), 0ll, (int64*)0ull );
				*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$22;
				if( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) != (struct $7ASTNODE*)0ull ) goto label$194;
				{
					ERRREPORT( 57ll, 0ll, (uint8*)0ull );
					fb$result$1 = 0ll;
					goto label$182;
				}
				label$194:;
				label$193:;
			}
			goto label$191;
			label$192:;
			{
				fb$result$1 = -1ll;
				goto label$182;
			}
			label$191:;
		}
		goto label$189;
		label$190:;
		{
			struct $7ASTNODE* vr$30 = ASTNEWCONV( *(int64*)((uint8*)PARAM$1 + 48ll) & 511ll, *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll), *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), 0ll, (int64*)0ull );
			*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$30;
		}
		label$189:;
	}
	label$188:;
	label$187:;
	{
		$12FB_PARAMMODE TMP$90$2;
		TMP$90$2 = *($12FB_PARAMMODE*)((uint8*)PARAM$1 + 88ll);
		if( TMP$90$2 != 2ll ) goto label$196;
		label$197:;
		{
			struct $7ASTNODE* vr$35 = ASTREMOVENOCONVCAST( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
			*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$35;
			if( *(int64*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) != 9ll ) goto label$199;
			{
				int64 vr$42 = SYMBPROCRETURNSONSTACK( *(struct $8FBSYMBOL**)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 24ll) );
				if( vr$42 != 0ll ) goto label$201;
				{
					struct $8FBSYMBOL* vr$49 = SYMBADDTEMPVAR( *(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 8ll) & 511ll, *(struct $8FBSYMBOL**)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 16ll) );
					TMP$1 = vr$49;
					struct $7ASTNODE* vr$50 = ASTBUILDVARFIELD( TMP$1, (struct $8FBSYMBOL*)0ull, 0ll );
					struct $7ASTNODE* vr$51 = ASTNEWADDROF( vr$50 );
					struct $7ASTNODE* vr$53 = ASTBUILDVARFIELD( TMP$1, (struct $8FBSYMBOL*)0ull, 0ll );
					struct $7ASTNODE* vr$54 = ASTNEWASSIGN( vr$53, *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), 96ll );
					struct $7ASTNODE* vr$55 = ASTNEWLINK( vr$54, vr$51, 0ll );
					*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$55;
					*(int64*)((uint8*)N$1 + 40ll) = 1ll;
					fb$result$1 = -1ll;
					goto label$182;
				}
				label$201:;
				label$200:;
			}
			label$199:;
			label$198:;
			HBUILDBYREFARG( PARAM$1, N$1 );
		}
		goto label$195;
		label$196:;
		if( TMP$90$2 != 1ll ) goto label$202;
		label$203:;
		{
			HUDTPASSBYVAL( PARAM$1, N$1 );
		}
		label$202:;
		label$195:;
	}
	fb$result$1 = -1ll;
	label$182:;
	return fb$result$1;
}

static int64 HCHECKPARAM( struct $7ASTNODE* PARENT$1, struct $8FBSYMBOL* PARAM$1, struct $7ASTNODE* N$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$204:;
	int64 PARAM_DTYPE$1;
	int64 ARG_DTYPE$1;
	fb$result$1 = 0ll;
	struct $7ASTNODE* vr$2 = ASTUPDSTRCONCAT( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
	*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$2;
	PARAM_DTYPE$1 = *(int64*)((uint8*)PARAM$1 + 48ll) & 511ll;
	ARG_DTYPE$1 = *(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 8ll) & 511ll;
	{
		$12FB_PARAMMODE TMP$91$2;
		TMP$91$2 = *($12FB_PARAMMODE*)((uint8*)PARAM$1 + 88ll);
		if( TMP$91$2 != 3ll ) goto label$207;
		label$208:;
		{
			int64 vr$11 = HCHECKBYDESCPARAM( PARENT$1, PARAM$1, N$1 );
			if( vr$11 != 0ll ) goto label$210;
			{
				ERRREPORT( 57ll, 0ll, (uint8*)0ull );
				goto label$205;
			}
			label$210:;
			label$209:;
			fb$result$1 = -1ll;
			goto label$205;
		}
		goto label$206;
		label$207:;
		if( TMP$91$2 != 4ll ) goto label$211;
		label$212:;
		{
			int64 vr$14 = HCHECKVARARGPARAM( PARENT$1, PARAM$1, N$1 );
			fb$result$1 = vr$14;
			goto label$205;
		}
		goto label$206;
		label$211:;
		if( TMP$91$2 != 2ll ) goto label$213;
		label$214:;
		{
			int64 TMP$94$3;
			if( PARAM_DTYPE$1 != 0ll ) goto label$216;
			{
				HCHECKVOIDPARAM( PARENT$1, PARAM$1, N$1 );
				fb$result$1 = -1ll;
				goto label$205;
			}
			label$216:;
			label$215:;
			if( *(int64*)((uint8*)N$1 + 40ll) != 1ll ) goto label$218;
			{
				int64 TMP$92$4;
				int64 TMP$93$4;
				if( (ARG_DTYPE$1 & 480ll) == 0ll ) goto label$219;
				TMP$92$4 = 22ll;
				goto label$341;
				label$219:;
				TMP$92$4 = ARG_DTYPE$1 & 31ll;
				label$341:;
				if( (ARG_DTYPE$1 & 480ll) == 0ll ) goto label$220;
				TMP$93$4 = 22ll;
				goto label$342;
				label$220:;
				TMP$93$4 = ARG_DTYPE$1 & 31ll;
				label$342:;
				if( ((int64)-(*(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$92$4 * 56ll)) != 0ll) | (int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$93$4 * 56ll)) + 8ll) != *(int64*)((uint8*)&ENV$ + 472ll))) == 0ll ) goto label$222;
				{
					ERRREPORT( 57ll, 0ll, (uint8*)0ull );
					goto label$205;
				}
				label$222:;
				label$221:;
				fb$result$1 = -1ll;
				goto label$205;
			}
			label$218:;
			label$217:;
			if( *(int64*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) != 19ll ) goto label$223;
			TMP$94$3 = (int64)-(*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 24ll) + 184ll) > 0ll);
			goto label$343;
			label$223:;
			TMP$94$3 = 0ll;
			label$343:;
			if( TMP$94$3 == 0ll ) goto label$225;
			{
				ERRREPORT( 57ll, 0ll, (uint8*)0ull );
				goto label$205;
			}
			label$225:;
			label$224:;
		}
		label$213:;
		label$206:;
	}
	{
		if( ARG_DTYPE$1 != 18ll ) goto label$227;
		label$228:;
		{
			int64 ERR_NUM$3;
			struct $8FBSYMBOL* PROC$3;
			struct $8FBSYMBOL* vr$44 = SYMBFINDCASTOVLPROC( *(int64*)((uint8*)PARAM$1 + 48ll), *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll), *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), ($9FB_ERRMSG*)&ERR_NUM$3 );
			PROC$3 = vr$44;
			if( PROC$3 == (struct $8FBSYMBOL*)0ull ) goto label$230;
			{
				static int64 REC_CNT$4 = 0ll;
				if( REC_CNT$4 != 0ll ) goto label$232;
				{
					REC_CNT$4 = REC_CNT$4 + 1ll;
					struct $7ASTNODE* vr$49 = ASTBUILDCALL( PROC$3, *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), (struct $7ASTNODE*)0ull, (struct $7ASTNODE*)0ull );
					*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$49;
					REC_CNT$4 = REC_CNT$4 + -1ll;
					ARG_DTYPE$1 = *(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 8ll) & 511ll;
				}
				label$232:;
				label$231:;
			}
			label$230:;
			label$229:;
		}
		label$227:;
		label$226:;
	}
	{
		if( PARAM_DTYPE$1 != 16ll ) goto label$234;
		label$235:;
		{
			int64 vr$56 = HCHECKSTRPARAM( PARENT$1, PARAM$1, N$1 );
			fb$result$1 = vr$56;
			goto label$205;
		}
		goto label$233;
		label$234:;
		if( PARAM_DTYPE$1 == 3ll ) goto label$237;
		label$238:;
		if( PARAM_DTYPE$1 != 6ll ) goto label$236;
		label$237:;
		{
			{
				if( ARG_DTYPE$1 == 16ll ) goto label$241;
				label$242:;
				if( ARG_DTYPE$1 == 17ll ) goto label$241;
				label$243:;
				if( ARG_DTYPE$1 == 3ll ) goto label$241;
				label$244:;
				if( ARG_DTYPE$1 != 6ll ) goto label$240;
				label$241:;
				{
				}
				goto label$239;
				label$240:;
				{
					ERRREPORT( 57ll, 0ll, (uint8*)0ull );
					goto label$205;
				}
				label$245:;
				label$239:;
			}
		}
		goto label$233;
		label$236:;
		if( PARAM_DTYPE$1 != 18ll ) goto label$246;
		label$247:;
		{
			int64 vr$64 = HCHECKUDTPARAM( PARAM$1, N$1 );
			fb$result$1 = vr$64;
			goto label$205;
		}
		label$246:;
		label$233:;
	}
	{
		uint64 TMP$95$2;
		TMP$95$2 = (uint64)ARG_DTYPE$1;
		goto label$249;
		label$250:;
		{
			{
				if( PARAM_DTYPE$1 == 35ll ) goto label$253;
				label$254:;
				if( PARAM_DTYPE$1 != 3ll ) goto label$252;
				label$253:;
				{
					if( ARG_DTYPE$1 != 6ll ) goto label$256;
					{
						struct $7ASTNODE* vr$69 = RTLTOSTR( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), 0ll );
						*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$69;
					}
					label$256:;
					label$255:;
				}
				goto label$251;
				label$252:;
				if( PARAM_DTYPE$1 == 38ll ) goto label$258;
				label$259:;
				if( PARAM_DTYPE$1 != 6ll ) goto label$257;
				label$258:;
				{
					if( ARG_DTYPE$1 == 6ll ) goto label$261;
					{
						struct $7ASTNODE* vr$75 = RTLTOWSTR( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
						*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$75;
					}
					label$261:;
					label$260:;
				}
				goto label$251;
				label$257:;
				{
					ERRREPORT( 57ll, 0ll, (uint8*)0ull );
					goto label$205;
				}
				label$262:;
				label$251:;
			}
			HSTRARGTOSTRPTRPARAM( PARENT$1, N$1, -1ll );
			if( (int64)-((PARAM_DTYPE$1 & 480ll) != 0ll) != 0ll ) goto label$264;
			{
				struct $7ASTNODE* vr$81 = ASTNEWDEREF( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), 2147483648ll, (struct $8FBSYMBOL*)0ull, 0ll );
				*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$81;
			}
			label$264:;
			label$263:;
			ARG_DTYPE$1 = *(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 8ll) & 511ll;
		}
		goto label$248;
		label$265:;
		{
			ERRREPORT( 57ll, 0ll, (uint8*)0ull );
			goto label$205;
		}
		goto label$248;
		label$249:;
		static const void* tmp$106[16ll] = {
			&&label$250,
			&&label$248,
			&&label$248,
			&&label$250,
			&&label$248,
			&&label$248,
			&&label$248,
			&&label$248,
			&&label$248,
			&&label$248,
			&&label$248,
			&&label$248,
			&&label$248,
			&&label$250,
			&&label$250,
			&&label$265,
		};
		if( TMP$95$2 < 3ll ) goto label$248;
		if( TMP$95$2 > 18ll ) goto label$248;
		goto *tmp$106[TMP$95$2 - 3ll];
		label$248:;
	}
	if( ((int64)-(PARAM_DTYPE$1 == 9ll) | (int64)-(ARG_DTYPE$1 == 9ll)) == 0ll ) goto label$267;
	{
		int64 TMP$96$2;
		int64 TMP$97$2;
		if( (PARAM_DTYPE$1 & 480ll) == 0ll ) goto label$268;
		TMP$96$2 = 22ll;
		goto label$344;
		label$268:;
		TMP$96$2 = PARAM_DTYPE$1 & 31ll;
		label$344:;
		if( (ARG_DTYPE$1 & 480ll) == 0ll ) goto label$269;
		TMP$97$2 = 22ll;
		goto label$345;
		label$269:;
		TMP$97$2 = ARG_DTYPE$1 & 31ll;
		label$345:;
		if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$96$2 * 56ll)) == *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$97$2 * 56ll)) ) goto label$271;
		{
			ERRREPORTWARN( 5ll, (uint8*)0ull, 1ll );
		}
		label$271:;
		label$270:;
	}
	label$267:;
	label$266:;
	if( (PARAM_DTYPE$1 & 480ll) == 0ll ) goto label$273;
	{
		int64 vr$104 = ASTPTRCHECK( *(int64*)((uint8*)PARAM$1 + 48ll), *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll), *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), 0ll );
		if( vr$104 != 0ll ) goto label$275;
		{
			if( (int64)-((ARG_DTYPE$1 & 480ll) != 0ll) != 0ll ) goto label$277;
			{
				ERRREPORTWARN( 1ll, (uint8*)0ull, 1ll );
			}
			goto label$276;
			label$277:;
			{
				if( ((int64)-((PARAM_DTYPE$1 & 31ll) == 18ll) & (int64)-((ARG_DTYPE$1 & 31ll) == 18ll)) == 0ll ) goto label$279;
				{
					int64 vr$118 = SYMBGETUDTBASELEVEL( *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll), *(struct $8FBSYMBOL**)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 16ll) );
					if( vr$118 <= 0ll ) goto label$281;
					{
						ERRREPORT( 24ll, 0ll, (uint8*)0ull );
						goto label$205;
					}
					goto label$280;
					label$281:;
					{
						ERRREPORTWARN( 3ll, (uint8*)0ull, 1ll );
					}
					label$280:;
				}
				goto label$278;
				label$279:;
				{
					ERRREPORTWARN( 3ll, (uint8*)0ull, 1ll );
				}
				label$278:;
			}
			label$276:;
		}
		label$275:;
		label$274:;
	}
	goto label$272;
	label$273:;
	if( (ARG_DTYPE$1 & 480ll) == 0ll ) goto label$282;
	{
		ERRREPORTWARN( 2ll, (uint8*)0ull, 1ll );
	}
	label$282:;
	label$272:;
	if( ((int64)-(PARAM_DTYPE$1 != ARG_DTYPE$1) | (int64)-(*(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll) != *(struct $8FBSYMBOL**)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 16ll))) == 0ll ) goto label$284;
	{
		int64 TMP$98$2;
		int64 TMP$99$2;
		int64 TMP$100$2;
		int64 TMP$101$2;
		if( (PARAM_DTYPE$1 & 480ll) == 0ll ) goto label$285;
		TMP$98$2 = 22ll;
		goto label$346;
		label$285:;
		TMP$98$2 = PARAM_DTYPE$1 & 31ll;
		label$346:;
		if( (ARG_DTYPE$1 & 480ll) == 0ll ) goto label$286;
		TMP$99$2 = 22ll;
		goto label$347;
		label$286:;
		TMP$99$2 = ARG_DTYPE$1 & 31ll;
		label$347:;
		if( (PARAM_DTYPE$1 & 480ll) == 0ll ) goto label$287;
		TMP$100$2 = 22ll;
		goto label$348;
		label$287:;
		TMP$100$2 = PARAM_DTYPE$1 & 31ll;
		label$348:;
		if( (ARG_DTYPE$1 & 480ll) == 0ll ) goto label$288;
		TMP$101$2 = 22ll;
		goto label$349;
		label$288:;
		TMP$101$2 = ARG_DTYPE$1 & 31ll;
		label$349:;
		if( ((int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$98$2 * 56ll)) + 8ll) != *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$99$2 * 56ll)) + 8ll)) | (int64)-(*(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$100$2 * 56ll)) != *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$101$2 * 56ll)))) == 0ll ) goto label$290;
		{
			if( *(int64*)((uint8*)PARAM$1 + 88ll) != 2ll ) goto label$292;
			{
				struct $7ASTNODE* vr$152 = ASTSKIPNOCONVCAST( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
				int64 vr$153 = ASTCANTAKEADDROF( vr$152 );
				if( vr$153 == 0ll ) goto label$294;
				{
					ERRREPORT( 57ll, 0ll, (uint8*)0ull );
					goto label$205;
				}
				label$294:;
				label$293:;
			}
			label$292:;
			label$291:;
		}
		label$290:;
		label$289:;
		struct $7ASTNODE* vr$158 = ASTNEWCONV( *(int64*)((uint8*)PARAM$1 + 48ll), *(struct $8FBSYMBOL**)((uint8*)PARAM$1 + 56ll), *(struct $7ASTNODE**)((uint8*)N$1 + 112ll), 0ll, (int64*)0ull );
		*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = vr$158;
		if( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) != (struct $7ASTNODE*)0ull ) goto label$296;
		{
			ERRREPORT( 24ll, 0ll, (uint8*)0ull );
			goto label$205;
		}
		label$296:;
		label$295:;
		ARG_DTYPE$1 = *(int64*)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) + 8ll) & 511ll;
	}
	label$284:;
	label$283:;
	if( *(int64*)((uint8*)PARAM$1 + 88ll) != 2ll ) goto label$298;
	{
		HCHECKBYREFPARAM( PARAM$1, N$1 );
	}
	label$298:;
	label$297:;
	fb$result$1 = -1ll;
	label$205:;
	return fb$result$1;
}

static struct $7ASTNODE* HCREATEOPTARG( struct $8FBSYMBOL* PARAM$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$299:;
	struct $7ASTNODE* TREE$1;
	TREE$1 = *(struct $7ASTNODE**)((uint8*)PARAM$1 + 104ll);
	if( TREE$1 != (struct $7ASTNODE*)0ull ) goto label$302;
	{
		fb$result$1 = (struct $7ASTNODE*)0ull;
		goto label$300;
	}
	label$302:;
	label$301:;
	if( *(int64*)TREE$1 != 36ll ) goto label$304;
	{
		struct $7ASTNODE* vr$5 = ASTTYPEINICLONE( TREE$1 );
		TREE$1 = vr$5;
		struct $7ASTNODE* vr$6 = ASTTYPEINITRYREMOVE( TREE$1 );
		TREE$1 = vr$6;
	}
	goto label$303;
	label$304:;
	{
		struct $7ASTNODE* vr$7 = ASTCLONETREE( TREE$1 );
		TREE$1 = vr$7;
	}
	label$303:;
	fb$result$1 = TREE$1;
	label$300:;
	return fb$result$1;
}

// Total compilation time: 0.04207696544472128 seconds.
