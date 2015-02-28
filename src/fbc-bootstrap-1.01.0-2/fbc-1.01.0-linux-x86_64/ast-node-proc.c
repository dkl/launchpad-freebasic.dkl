// Compilation of fbc-1.01.0/src/compiler/ast-node-proc.bas started at 15:27:39 on 02-28-2015

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
struct $14FB_DTORWRAPPER {
	struct $8FBSYMBOL* PROC;
	struct $8FBSYMBOL* SYM;
};
__FB_STATIC_ASSERT( sizeof( struct $14FB_DTORWRAPPER ) == 16 );
struct $15FB_GLOBINSTANCE {
	struct $8FBSYMBOL* SYM;
	struct $7ASTNODE* INITREE;
	int64 HAS_DTOR;
};
__FB_STATIC_ASSERT( sizeof( struct $15FB_GLOBINSTANCE ) == 24 );
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
typedef void (*tmp$41)( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef void (*tmp$45)( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
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
void free( void* );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__astznodezproc( void ) __attribute__(( constructor ));
void* XCALLOCATE( int32 );
void LISTINIT( struct $5TLIST*, int64, int64, $10LIST_FLAGS );
void LISTEND( struct $5TLIST* );
void* LISTNEWNODE( struct $5TLIST* );
void* LISTGETHEAD( struct $5TLIST* );
void* LISTGETTAIL( struct $5TLIST* );
void* LISTGETPREV( void* );
void* LISTGETNEXT( void* );
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
int64 ERRGETCOUNT( void );
void ERRREPORT( int64, int64, uint8* );
void ERRREPORTPARAM( struct $8FBSYMBOL*, int64, uint8*, int64 );
void ASTDELNODE( struct $7ASTNODE* );
void ASTDELTREE( struct $7ASTNODE* );
void ASTPROCBEGIN( struct $8FBSYMBOL*, int64 );
int64 ASTPROCEND( int64 );
void ASTPROCVECTORIZE( struct $7ASTNODE* );
int64 ASTSCOPEUPDBREAKLIST( struct $7ASTNODE* );
void ASTSCOPEDESTROYVARS( struct $8FBSYMBOL* );
void ASTSCOPEALLOCLOCALS( struct $8FBSYMBOL* );
struct $7ASTNODE* ASTADD( struct $7ASTNODE* );
struct $7ASTNODE* ASTADDAFTER( struct $7ASTNODE*, struct $7ASTNODE* );
struct $7ASTNODE* ASTFINDFIRSTCODE( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWASSIGN( struct $7ASTNODE*, struct $7ASTNODE*, $9AST_OPOPT );
typedef int64 $11AST_CONVOPT;
struct $7ASTNODE* ASTNEWCONV( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, $11AST_CONVOPT, int64* );
struct $7ASTNODE* ASTNEWCONSTSTR( uint8* );
struct $7ASTNODE* ASTNEWCONSTI( int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWVAR( struct $8FBSYMBOL*, int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTUPDATEBITFIELDS( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWADDROF( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWLOAD( struct $7ASTNODE*, int64, int64 );
struct $7ASTNODE* ASTNEWLINK( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTNEWLABEL( struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* ASTNEWMEM( int64, struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTNEWNODE( int64, int64, struct $8FBSYMBOL* );
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
struct $6IRVREG* ASTLOAD( struct $7ASTNODE* );
struct $7ASTNODE* ASTOPTIMIZETREE( struct $7ASTNODE* );
struct $7ASTNODE* ASTOPTASSIGNMENT( struct $7ASTNODE* );
struct $7ASTNODE* ASTUPDSTRCONCAT( struct $7ASTNODE* );
struct $7ASTNODE* _Z15ASTTYPEINIFLUSHP7ASTNODES0_ll( struct $7ASTNODE*, struct $7ASTNODE*, int64, int64 );
struct $7ASTNODE* _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEll( struct $8FBSYMBOL*, struct $7ASTNODE*, int64, int64 );
struct $7ASTNODE* ASTTYPEINIUPDATE( struct $7ASTNODE* );
struct $7ASTNODE* ASTTYPEINICLONE( struct $7ASTNODE* );
void ASTTYPEINIDELETE( struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDVARDEREF( struct $8FBSYMBOL* );
struct $7ASTNODE* ASTBUILDVARINC( struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEl( struct $8FBSYMBOL*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTBUILDVARFIELD( struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* ASTBUILDCTORCALL( struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDDTORCALL( struct $8FBSYMBOL*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTBUILDFORBEGIN( struct $7ASTNODE*, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64, int64 );
struct $7ASTNODE* ASTBUILDFOREND( struct $7ASTNODE*, struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDPROCRESULTVAR( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTDTORLISTFLUSH( int64 );
void ASTSETTYPE( struct $7ASTNODE*, int64, struct $8FBSYMBOL* );
void ASTGOSUBADDEXIT( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBGETPROCRESULT( struct $8FBSYMBOL* );
int64 SYMBPROCHASFWDREFINSIGNATURE( struct $8FBSYMBOL* );
typedef int64 $10FB_SYMBOPT;
struct $8FBSYMBOL* SYMBADDLABEL( uint8*, $10FB_SYMBOPT );
struct $8FBSYMBOL* SYMBADDTEMPVAR( int64, struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBADDPROC( struct $8FBSYMBOL*, uint8*, uint8*, int64, struct $8FBSYMBOL*, int64, int64, $10FB_SYMBOPT );
struct $8FBSYMBOL* SYMBPREADDPROC( uint8* );
struct $8FBSYMBOL* SYMBADDVARFORPARAM( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBADDPROCRESULTPARAM( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBADDPROCRESULT( struct $8FBSYMBOL* );
void SYMBPROCALLOCEXT( struct $8FBSYMBOL* );
void SYMBDELSYMBOLTB( struct $10FBSYMBOLTB*, int64 );
int64 SYMBCHECKLABELS( struct $8FBSYMBOL* );
int64 SYMBHASCTOR( struct $8FBSYMBOL* );
int64 SYMBHASDEFCTOR( struct $8FBSYMBOL* );
int64 SYMBHASDTOR( struct $8FBSYMBOL* );
void SYMBNESTBEGIN( struct $8FBSYMBOL*, int64 );
void SYMBNESTEND( int64 );
uint8* SYMBUNIQUELABEL( void );
struct $8FBSYMBOL* SYMBGETCOMPCTORHEAD( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBGETCOMPDEFCTOR( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBGETCOMPDTOR( struct $8FBSYMBOL* );
struct $20FB_GLOBCTORLIST_ITEM;
struct $20FB_GLOBCTORLIST_ITEM {
	struct $8FBSYMBOL* SYM;
	struct $20FB_GLOBCTORLIST_ITEM* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $20FB_GLOBCTORLIST_ITEM ) == 16 );
struct $20FB_GLOBCTORLIST_ITEM* SYMBADDGLOBALCTOR( struct $8FBSYMBOL* );
struct $20FB_GLOBCTORLIST_ITEM* SYMBADDGLOBALDTOR( struct $8FBSYMBOL* );
int64 SYMBCHECKACCESS( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBUDTGETFIRSTFIELD( struct $8FBSYMBOL* );
struct $7ASTNODE* RTLSTRDELETE( struct $7ASTNODE* );
struct $7ASTNODE* RTLSTRALLOCTMPRESULT( struct $7ASTNODE* );
struct $7ASTNODE* RTLARRAYERASE( struct $7ASTNODE*, int64, int64 );
struct $7ASTNODE* RTLARRAYREDIM( struct $7ASTNODE*, int64, struct $7FBARRAYIP7ASTNODEE*, int64, int64 );
struct $7ASTNODE* RTLINITAPP( struct $7ASTNODE*, struct $7ASTNODE* );
int64 RTLEXITAPP( struct $7ASTNODE* );
void RTLERRORSETHANDLER( struct $7ASTNODE*, int64 );
struct $7ASTNODE* RTLERRORSETMODNAME( struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* RTLERRORSETFUNCNAME( struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* RTLPROFILECALL_MCOUNT( void );
static int64 HMODLEVELISEMPTY( struct $7ASTNODE* );
static void HLOADPROCRESULT( struct $8FBSYMBOL* );
static int64 HDECLPROCPARAMS( struct $8FBSYMBOL* );
static struct $7ASTNODE* HINITVPTR( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static void HCALLCTORS( struct $7ASTNODE*, struct $8FBSYMBOL* );
static void HCALLDTORS( struct $8FBSYMBOL* );
static void HGENSTATICINSTANCESDTORS( struct $8FBSYMBOL* );
static void HGENGLOBALINSTANCESCTOR( void );
static struct $7ASTNODE* HNEWPROCNODE( void );
static void HDELPROCNODE( struct $7ASTNODE* );
static void HPROCFLUSH( struct $7ASTNODE*, int64 );
static void HPROCFLUSHALL( void );
static struct $7ASTNODE* ASTUPDATE( struct $7ASTNODE* );
static struct $7ASTNODE* HCHECKERRHND( struct $7ASTNODE*, struct $8FBSYMBOL* );
static struct $7ASTNODE* HMAYBECALLRESULTCTOR( struct $7ASTNODE*, struct $8FBSYMBOL* );
static struct $7ASTNODE* HCALLPROFILER( struct $7ASTNODE* );
static struct $7ASTNODE* HCALLCTORLIST( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static struct $7ASTNODE* HCALLFIELDCTOR( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static struct $7ASTNODE* HCLEARUNIONFIELDS( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $8FBSYMBOL** );
static struct $7ASTNODE* HINITDYNAMICARRAYFIELD( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static struct $7ASTNODE* HCALLFIELDCTORS( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static struct $7ASTNODE* HCALLBASECTOR( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static void HCALLFIELDDTOR( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static void HCALLFIELDDTORS( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static void HCALLBASEDTOR( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static void HCALLSTATICCTOR( struct $8FBSYMBOL*, struct $7ASTNODE* );
static void HCALLSTATICDTOR( struct $8FBSYMBOL* );
static void HGLOBCTORBEGIN( int64 );
typedef void (*tmp$35)( void );
typedef int64 (*tmp$36)( void );
typedef void (*tmp$37)( double );
typedef int64 $14IR_OPTIONVALUE;
typedef int64 (*tmp$38)( $14IR_OPTIONVALUE );
typedef int64 (*tmp$39)( int64, int64 );
typedef uint8* (*tmp$42)( void );
typedef void (*tmp$43)( struct $6IRVREG*, struct $6IRVREG* );
typedef void (*tmp$44)( int64 );
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

void ASTPROCLISTINIT( void )
{
	label$10:;
	*(struct $7ASTNODE**)((uint8*)&AST$ + 64ll) = (struct $7ASTNODE*)0ull;
	*(struct $7ASTNODE**)((uint8*)&AST$ + 72ll) = (struct $7ASTNODE*)0ull;
	*(struct $7ASTNODE**)((uint8*)&AST$ + 80ll) = (struct $7ASTNODE*)0ull;
	LISTINIT( (struct $5TLIST*)((uint8*)&AST$ + 152ll), 32ll, 24ll, 6ll );
	*(int64*)((uint8*)&AST$ + 216ll) = 0ll;
	*(int64*)((uint8*)&AST$ + 224ll) = 0ll;
	label$11:;
}

void ASTPROCLISTEND( void )
{
	label$12:;
	*(int64*)((uint8*)&AST$ + 224ll) = 0ll;
	*(int64*)((uint8*)&AST$ + 216ll) = 0ll;
	LISTEND( (struct $5TLIST*)((uint8*)&AST$ + 152ll) );
	*(struct $7ASTNODE**)((uint8*)&AST$ + 64ll) = (struct $7ASTNODE*)0ull;
	*(struct $7ASTNODE**)((uint8*)&AST$ + 72ll) = (struct $7ASTNODE*)0ull;
	*(struct $7ASTNODE**)((uint8*)&AST$ + 80ll) = (struct $7ASTNODE*)0ull;
	label$13:;
}

struct $7ASTNODE* ASTADD( struct $7ASTNODE* N$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$61:;
	struct $7ASTNODE* vr$1 = ASTUPDATE( N$1 );
	N$1 = vr$1;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$64;
	{
		fb$result$1 = (struct $7ASTNODE*)0ull;
		goto label$62;
	}
	label$64:;
	label$63:;
	if( *(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)&AST$ + 80ll) + 120ll) == (struct $7ASTNODE*)0ull ) goto label$66;
	{
		*(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)&AST$ + 80ll) + 120ll) + 136ll) = N$1;
	}
	goto label$65;
	label$66:;
	{
		*(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)&AST$ + 80ll) + 112ll) = N$1;
	}
	label$65:;
	*(struct $7ASTNODE**)((uint8*)N$1 + 128ll) = *(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)&AST$ + 80ll) + 120ll);
	*(struct $7ASTNODE**)((uint8*)N$1 + 136ll) = (struct $7ASTNODE*)0ull;
	*(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)&AST$ + 80ll) + 120ll) = N$1;
	fb$result$1 = N$1;
	label$62:;
	return fb$result$1;
}

struct $7ASTNODE* ASTADDAFTER( struct $7ASTNODE* N$1, struct $7ASTNODE* REF$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$67:;
	struct $7ASTNODE* vr$1 = ASTUPDATE( N$1 );
	N$1 = vr$1;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$70;
	{
		fb$result$1 = (struct $7ASTNODE*)0ull;
		goto label$68;
	}
	label$70:;
	label$69:;
	if( REF$1 == (struct $7ASTNODE*)0ull ) goto label$72;
	{
		*(struct $7ASTNODE**)((uint8*)N$1 + 128ll) = REF$1;
		*(struct $7ASTNODE**)((uint8*)N$1 + 136ll) = *(struct $7ASTNODE**)((uint8*)REF$1 + 136ll);
		if( *(struct $7ASTNODE**)((uint8*)REF$1 + 136ll) == (struct $7ASTNODE*)0ull ) goto label$74;
		{
			if( *(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)REF$1 + 136ll) + 128ll) == (struct $7ASTNODE*)0ull ) goto label$76;
			{
				*(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)REF$1 + 136ll) + 128ll) = N$1;
			}
			label$76:;
			label$75:;
		}
		goto label$73;
		label$74:;
		{
			*(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)&AST$ + 80ll) + 120ll) = N$1;
		}
		label$73:;
		*(struct $7ASTNODE**)((uint8*)REF$1 + 136ll) = N$1;
	}
	goto label$71;
	label$72:;
	{
		*(struct $7ASTNODE**)((uint8*)N$1 + 128ll) = (struct $7ASTNODE*)0ull;
		*(struct $7ASTNODE**)((uint8*)N$1 + 136ll) = *(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)&AST$ + 80ll) + 112ll);
		if( *(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)&AST$ + 80ll) + 112ll) == (struct $7ASTNODE*)0ull ) goto label$78;
		{
			*(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)&AST$ + 80ll) + 112ll) + 128ll) = N$1;
		}
		goto label$77;
		label$78:;
		{
			*(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)&AST$ + 80ll) + 120ll) = N$1;
		}
		label$77:;
		*(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)&AST$ + 80ll) + 112ll) = N$1;
	}
	label$71:;
	fb$result$1 = N$1;
	label$68:;
	return fb$result$1;
}

void ASTADDUNSCOPED( struct $7ASTNODE* N$1 )
{
	label$79:;
	struct $7ASTNODE* LAST$1;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$82;
	{
		goto label$80;
	}
	label$82:;
	label$81:;
	LAST$1 = *(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)&AST$ + 80ll) + 104ll);
	if( LAST$1 != (struct $7ASTNODE*)0ull ) goto label$84;
	{
		LAST$1 = *(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)&AST$ + 80ll) + 112ll);
	}
	label$84:;
	label$83:;
	*(int64*)((uint8*)&AST$ + 392ll) = 0ll;
	if( LAST$1 != (struct $7ASTNODE*)0ull ) goto label$86;
	{
		struct $7ASTNODE* vr$5 = ASTADD( N$1 );
		N$1 = vr$5;
	}
	goto label$85;
	label$86:;
	{
		struct $7ASTNODE* vr$6 = ASTADDAFTER( N$1, LAST$1 );
		N$1 = vr$6;
	}
	label$85:;
	*(int64*)((uint8*)&AST$ + 392ll) = -1ll;
	*(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)&AST$ + 80ll) + 104ll) = N$1;
	label$80:;
}

struct $7ASTNODE* ASTFINDFIRSTCODE( struct $7ASTNODE* PROC$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$87:;
	struct $7ASTNODE* I$1;
	I$1 = *(struct $7ASTNODE**)((uint8*)PROC$1 + 112ll);
	label$89:;
	if( I$1 == (struct $7ASTNODE*)0ull ) goto label$90;
	{
		{
			$13AST_NODECLASS TMP$87$3;
			TMP$87$3 = *($13AST_NODECLASS*)I$1;
			if( TMP$87$3 == 0ll ) goto label$93;
			label$94:;
			if( TMP$87$3 == 21ll ) goto label$93;
			label$95:;
			if( TMP$87$3 == 24ll ) goto label$93;
			label$96:;
			if( TMP$87$3 == 27ll ) goto label$93;
			label$97:;
			if( TMP$87$3 == 29ll ) goto label$93;
			label$98:;
			if( TMP$87$3 != 30ll ) goto label$92;
			label$93:;
			{
			}
			goto label$91;
			label$92:;
			{
				goto label$90;
			}
			label$99:;
			label$91:;
		}
		I$1 = *(struct $7ASTNODE**)((uint8*)I$1 + 136ll);
	}
	goto label$89;
	label$90:;
	fb$result$1 = I$1;
	label$88:;
	return fb$result$1;
}

void ASTPROCBEGIN( struct $8FBSYMBOL* SYM$1, int64 ISMAIN$1 )
{
	int64 TMP$88$1;
	label$100:;
	struct $7ASTNODE* N$1;
	int64 ENABLE_IMPLICIT_CODE$1;
	struct $7ASTNODE* vr$0 = HNEWPROCNODE(  );
	N$1 = vr$0;
	*(struct $8FBSYMBOL**)((uint8*)SYM$1 + 88ll) = SYM$1;
	*(struct $8FBSYMBOL**)((uint8*)SYM$1 + 96ll) = (struct $8FBSYMBOL*)0ull;
	*(struct $8FBSYMBOL**)((uint8*)SYM$1 + 104ll) = (struct $8FBSYMBOL*)0ull;
	SYMBPROCALLOCEXT( SYM$1 );
	*(uint8**)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)SYM$1 + 200ll) + 48ll) = *(uint8**)((uint8*)&ENV$ + 752ll);
	*(struct $7ASTNODE**)((uint8*)&AST$ + 80ll) = N$1;
	*(struct $7ASTNODE**)((uint8*)&AST$ + 264ll) = N$1;
	if( ISMAIN$1 == 0ll ) goto label$102;
	TMP$88$1 = 0ll;
	goto label$110;
	label$102:;
	TMP$88$1 = 1ll;
	label$110:;
	*(uint64*)((uint8*)&PARSER$ + 184ll) = (uint64)TMP$88$1;
	*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) = SYM$1;
	*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 208ll) = SYM$1;
	SYMBNESTBEGIN( SYM$1, 0ll );
	struct $8FBSYMBOL* vr$7 = SYMBADDLABEL( (uint8*)0ull, 4ll );
	*(struct $8FBSYMBOL**)((uint8*)N$1 + 64ll) = vr$7;
	struct $8FBSYMBOL* vr$9 = SYMBADDLABEL( (uint8*)0ull, 0ll );
	*(struct $8FBSYMBOL**)((uint8*)N$1 + 72ll) = vr$9;
	*(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) = SYM$1;
	*(int64*)((uint8*)N$1 + 96ll) = ISMAIN$1;
	*(struct $7ASTNODE**)((uint8*)N$1 + 40ll) = (struct $7ASTNODE*)0ull;
	*(int64*)((uint8*)N$1 + 48ll) = *(int64*)((uint8*)&PARSER$ + 56ll);
	*(struct $7ASTNODE**)((uint8*)N$1 + 80ll) = (struct $7ASTNODE*)0ull;
	*(struct $7ASTNODE**)((uint8*)N$1 + 88ll) = (struct $7ASTNODE*)0ull;
	*(struct $7ASTNODE**)((uint8*)N$1 + 104ll) = (struct $7ASTNODE*)0ull;
	(*(tmp$40*)((uint8*)&IR$ + 56ll))( SYM$1 );
	ENABLE_IMPLICIT_CODE$1 = ~(int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 268435456ll) != 0ll);
	if( ENABLE_IMPLICIT_CODE$1 == 0ll ) goto label$104;
	{
		HDECLPROCPARAMS( SYM$1 );
		if( (*(int64*)((uint8*)SYM$1 + 48ll) & 511ll) == 0ll ) goto label$106;
		{
			SYMBADDPROCRESULT( SYM$1 );
		}
		label$106:;
		label$105:;
	}
	label$104:;
	label$103:;
	{
		struct $10FB_PROCERR* TMP$89$2;
		TMP$89$2 = (struct $10FB_PROCERR*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)SYM$1 + 200ll) + 56ll);
		*(struct $8FBSYMBOL**)TMP$89$2 = (struct $8FBSYMBOL*)0ull;
		*(struct $8FBSYMBOL**)((uint8*)TMP$89$2 + 8ll) = (struct $8FBSYMBOL*)0ull;
		*(struct $8FBSYMBOL**)((uint8*)TMP$89$2 + 16ll) = (struct $8FBSYMBOL*)0ull;
	}
	*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)SYM$1 + 200ll) + 104ll) = *(int64*)((uint8*)&PARSER$ + 56ll);
	if( (*(int64*)((uint8*)SYM$1 + 16ll) & 4096ll) == 0ll ) goto label$108;
	{
		struct $8FBSYMBOL* ARGC$2;
		struct $8FBSYMBOL* ARGV$2;
		ARGC$2 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 128ll);
		ARGV$2 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 136ll);
		struct $7ASTNODE* vr$40 = ASTNEWVAR( *(struct $8FBSYMBOL**)((uint8*)ARGV$2 + 96ll), 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$42 = ASTNEWVAR( *(struct $8FBSYMBOL**)((uint8*)ARGC$2 + 96ll), 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$43 = RTLINITAPP( vr$42, vr$40 );
		*(struct $7ASTNODE**)((uint8*)&ENV$ + 1144ll) = vr$43;
	}
	goto label$107;
	label$108:;
	if( ((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 8192ll) != 0ll) & ENABLE_IMPLICIT_CODE$1) == 0ll ) goto label$109;
	{
		struct $7ASTNODE* vr$51 = HINITVPTR( *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)SYM$1 + 232ll), SYM$1 );
		ASTADD( vr$51 );
	}
	label$109:;
	label$107:;
	struct $7ASTNODE* vr$53 = ASTNEWLABEL( *(struct $8FBSYMBOL**)((uint8*)N$1 + 64ll), -1ll );
	ASTADD( vr$53 );
	label$101:;
}

int64 ASTPROCEND( int64 CALLRTEXIT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$139:;
	static int64 REC_CNT$1 = 0ll;
	int64 RES$1;
	int64 DO_FLUSH$1;
	int64 ENABLE_IMPLICIT_CODE$1;
	struct $8FBSYMBOL* SYM$1;
	struct $7ASTNODE* N$1;
	N$1 = *(struct $7ASTNODE**)((uint8*)&AST$ + 80ll);
	REC_CNT$1 = REC_CNT$1 + 1ll;
	SYM$1 = *(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll);
	*(int64*)((uint8*)N$1 + 56ll) = *(int64*)((uint8*)&PARSER$ + 56ll);
	ENABLE_IMPLICIT_CODE$1 = ~(int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 268435456ll) != 0ll);
	int64 vr$8 = ERRGETCOUNT(  );
	if( vr$8 != 0ll ) goto label$142;
	{
		if( ((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 4096ll) != 0ll) & ENABLE_IMPLICIT_CODE$1) == 0ll ) goto label$144;
		{
			if( (int64)-((*(int64*)((uint8*)SYM$1 + 16ll) & 4ll) != 0ll) != 0ll ) goto label$146;
			{
				*($12FB_SYMBSTATS*)((uint8*)SYM$1 + 16ll) = *(int64*)((uint8*)SYM$1 + 16ll) | 4ll;
				HCALLCTORS( N$1, SYM$1 );
			}
			label$146:;
			label$145:;
		}
		label$144:;
		label$143:;
		ASTSCOPEDESTROYVARS( *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 104ll) );
	}
	label$142:;
	label$141:;
	struct $7ASTNODE* vr$24 = ASTNEWLABEL( *(struct $8FBSYMBOL**)((uint8*)N$1 + 72ll), -1ll );
	ASTADD( vr$24 );
	int64 vr$26 = SYMBCHECKLABELS( *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 96ll) );
	RES$1 = (int64)-(vr$26 == 0ll);
	if( RES$1 == 0ll ) goto label$148;
	{
		if( ((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 8192ll) != 0ll) & ENABLE_IMPLICIT_CODE$1) == 0ll ) goto label$150;
		{
			HCALLDTORS( SYM$1 );
		}
		label$150:;
		label$149:;
		if( *(struct $7ASTNODE**)((uint8*)N$1 + 80ll) == (struct $7ASTNODE*)0ull ) goto label$152;
		{
			int64 vr$36 = ASTSCOPEUPDBREAKLIST( N$1 );
			RES$1 = vr$36;
		}
		label$152:;
		label$151:;
		ASTGOSUBADDEXIT( SYM$1 );
		struct $7ASTNODE* HEAD_NODE$2;
		HEAD_NODE$2 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
		if( ENABLE_IMPLICIT_CODE$1 == 0ll ) goto label$154;
		{
			struct $7ASTNODE* vr$39 = HCALLPROFILER( HEAD_NODE$2 );
			HEAD_NODE$2 = vr$39;
			struct $7ASTNODE* vr$40 = HCHECKERRHND( HEAD_NODE$2, SYM$1 );
			HEAD_NODE$2 = vr$40;
		}
		label$154:;
		label$153:;
		if( CALLRTEXIT$1 == 0ll ) goto label$156;
		{
			if( *(int64*)((uint8*)N$1 + 96ll) == 0ll ) goto label$158;
			{
				RTLEXITAPP( (struct $7ASTNODE*)0ull );
			}
			label$158:;
			label$157:;
		}
		label$156:;
		label$155:;
		if( ENABLE_IMPLICIT_CODE$1 == 0ll ) goto label$160;
		{
			if( (*(int64*)((uint8*)SYM$1 + 48ll) & 511ll) == 0ll ) goto label$162;
			{
				struct $7ASTNODE* vr$48 = HMAYBECALLRESULTCTOR( HEAD_NODE$2, SYM$1 );
				HEAD_NODE$2 = vr$48;
				HLOADPROCRESULT( SYM$1 );
			}
			label$162:;
			label$161:;
		}
		label$160:;
		label$159:;
	}
	label$148:;
	label$147:;
	(*(tmp$40*)((uint8*)&IR$ + 64ll))( SYM$1 );
	DO_FLUSH$1 = 0ll;
	int64 vr$49 = ERRGETCOUNT(  );
	if( (RES$1 & (int64)-(vr$49 == 0ll)) == 0ll ) goto label$164;
	{
		*($12FB_SYMBSTATS*)((uint8*)SYM$1 + 16ll) = *(int64*)((uint8*)SYM$1 + 16ll) | 128ll;
		if( REC_CNT$1 != 1ll ) goto label$166;
		{
			if( *(int64*)((uint8*)N$1 + 96ll) != 0ll ) goto label$168;
			{
				int64 vr$63 = SYMBPROCHASFWDREFINSIGNATURE( SYM$1 );
				if( (~(int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 64ll) != 0ll) & (~vr$63 | (int64)-(*(int64*)((uint8*)&ENV$ + 208ll) == 0ll))) == 0ll ) goto label$170;
				{
					DO_FLUSH$1 = -1ll;
				}
				goto label$169;
				label$170:;
				{
					SYMBDELSYMBOLTB( (struct $10FBSYMBOLTB*)((uint8*)SYM$1 + 88ll), -1ll );
				}
				label$169:;
			}
			goto label$167;
			label$168:;
			{
				DO_FLUSH$1 = -1ll;
			}
			label$167:;
		}
		label$166:;
		label$165:;
	}
	goto label$163;
	label$164:;
	{
		SYMBDELSYMBOLTB( (struct $10FBSYMBOLTB*)((uint8*)SYM$1 + 88ll), 0ll );
	}
	label$163:;
	SYMBNESTEND( 0ll );
	if( *(int64*)((uint8*)&ENV$ + 248ll) < 1ll ) goto label$172;
	{
		ASTPROCVECTORIZE( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
	}
	label$172:;
	label$171:;
	if( DO_FLUSH$1 == 0ll ) goto label$174;
	{
		if( *(int64*)((uint8*)N$1 + 96ll) != 0ll ) goto label$176;
		{
			HPROCFLUSH( N$1, -1ll );
		}
		goto label$175;
		label$176:;
		{
			HPROCFLUSHALL(  );
		}
		label$175:;
	}
	label$174:;
	label$173:;
	*(struct $7ASTNODE**)((uint8*)&AST$ + 80ll) = *(struct $7ASTNODE**)((uint8*)&AST$ + 64ll);
	*(struct $7ASTNODE**)((uint8*)&AST$ + 264ll) = *(struct $7ASTNODE**)((uint8*)&AST$ + 64ll);
	*(uint64*)((uint8*)&PARSER$ + 184ll) = 0ull;
	*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) = *(struct $8FBSYMBOL**)((uint8*)&ENV$ + 1136ll);
	*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 208ll) = *(struct $8FBSYMBOL**)((uint8*)&ENV$ + 1136ll);
	REC_CNT$1 = REC_CNT$1 + -1ll;
	fb$result$1 = RES$1;
	label$140:;
	return fb$result$1;
}

struct $8FBSYMBOL* ASTPROCADDSTATICINSTANCE( struct $8FBSYMBOL* SYM$1 )
{
	struct $8FBSYMBOL* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$323:;
	struct $5TLIST* DTORLIST$1;
	struct $14FB_DTORWRAPPER* WRAP$1;
	struct $8FBSYMBOL* PROC$1;
	DTORLIST$1 = *(struct $5TLIST**)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 200ll) + 88ll);
	if( DTORLIST$1 != (struct $5TLIST*)0ull ) goto label$326;
	{
		void* vr$4 = XCALLOCATE( 64 );
		DTORLIST$1 = (struct $5TLIST*)vr$4;
		*(struct $5TLIST**)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) + 200ll) + 88ll) = DTORLIST$1;
		LISTINIT( DTORLIST$1, 16ll, 16ll, 6ll );
	}
	label$326:;
	label$325:;
	void* vr$7 = LISTNEWNODE( DTORLIST$1 );
	WRAP$1 = (struct $14FB_DTORWRAPPER*)vr$7;
	uint8* vr$8 = SYMBUNIQUELABEL(  );
	struct $8FBSYMBOL* vr$9 = SYMBPREADDPROC( (uint8*)0ull );
	struct $8FBSYMBOL* vr$10 = SYMBADDPROC( vr$9, vr$8, (uint8*)0ull, 0ll, (struct $8FBSYMBOL*)0ull, 64ll, 3ll, 4ll );
	PROC$1 = vr$10;
	*(struct $8FBSYMBOL**)WRAP$1 = PROC$1;
	*(struct $8FBSYMBOL**)((uint8*)WRAP$1 + 8ll) = SYM$1;
	*($12FB_SYMBSTATS*)((uint8*)SYM$1 + 16ll) = *(int64*)((uint8*)SYM$1 + 16ll) | 8388608ll;
	fb$result$1 = PROC$1;
	label$324:;
	return fb$result$1;
}

void ASTPROCADDGLOBALINSTANCE( struct $8FBSYMBOL* SYM$1, struct $7ASTNODE* INITREE$1, int64 HAS_DTOR$1 )
{
	label$327:;
	struct $15FB_GLOBINSTANCE* WRAP$1;
	void* vr$1 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&AST$ + 152ll) );
	WRAP$1 = (struct $15FB_GLOBINSTANCE*)vr$1;
	*(struct $8FBSYMBOL**)WRAP$1 = SYM$1;
	*(struct $7ASTNODE**)((uint8*)WRAP$1 + 8ll) = INITREE$1;
	*(int64*)((uint8*)WRAP$1 + 16ll) = HAS_DTOR$1;
	*($12FB_SYMBSTATS*)((uint8*)SYM$1 + 16ll) = *(int64*)((uint8*)SYM$1 + 16ll) | 8388608ll;
	if( INITREE$1 == (struct $7ASTNODE*)0ull ) goto label$330;
	{
		*(int64*)((uint8*)&AST$ + 216ll) = *(int64*)((uint8*)&AST$ + 216ll) + 1ll;
	}
	label$330:;
	label$329:;
	if( HAS_DTOR$1 == 0ll ) goto label$332;
	{
		*(int64*)((uint8*)&AST$ + 224ll) = *(int64*)((uint8*)&AST$ + 224ll) + 1ll;
	}
	label$332:;
	label$331:;
	label$328:;
}

__attribute__(( constructor )) static void fb_ctor__astznodezproc( void )
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

static struct $7ASTNODE* HNEWPROCNODE( void )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$14:;
	struct $7ASTNODE* N$1;
	struct $7ASTNODE* vr$1 = ASTNEWNODE( 43ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	N$1 = vr$1;
	if( *(struct $7ASTNODE**)((uint8*)&AST$ + 72ll) == (struct $7ASTNODE*)0ull ) goto label$17;
	{
		*(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)&AST$ + 72ll) + 136ll) = N$1;
	}
	goto label$16;
	label$17:;
	{
		*(struct $7ASTNODE**)((uint8*)&AST$ + 64ll) = N$1;
	}
	label$16:;
	*(struct $7ASTNODE**)((uint8*)N$1 + 128ll) = *(struct $7ASTNODE**)((uint8*)&AST$ + 72ll);
	*(struct $7ASTNODE**)((uint8*)N$1 + 136ll) = (struct $7ASTNODE*)0ull;
	*(struct $7ASTNODE**)((uint8*)&AST$ + 72ll) = N$1;
	fb$result$1 = N$1;
	label$15:;
	return fb$result$1;
}

static void HDELPROCNODE( struct $7ASTNODE* N$1 )
{
	label$18:;
	*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = (struct $7ASTNODE*)0ull;
	*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = (struct $7ASTNODE*)0ull;
	if( *(struct $7ASTNODE**)((uint8*)N$1 + 128ll) == (struct $7ASTNODE*)0ull ) goto label$21;
	{
		*(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 128ll) + 136ll) = *(struct $7ASTNODE**)((uint8*)N$1 + 136ll);
	}
	goto label$20;
	label$21:;
	{
		*(struct $7ASTNODE**)((uint8*)&AST$ + 64ll) = *(struct $7ASTNODE**)((uint8*)N$1 + 136ll);
	}
	label$20:;
	if( *(struct $7ASTNODE**)((uint8*)N$1 + 136ll) == (struct $7ASTNODE*)0ull ) goto label$23;
	{
		*(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 136ll) + 128ll) = *(struct $7ASTNODE**)((uint8*)N$1 + 128ll);
	}
	goto label$22;
	label$23:;
	{
		*(struct $7ASTNODE**)((uint8*)&AST$ + 72ll) = *(struct $7ASTNODE**)((uint8*)N$1 + 128ll);
	}
	label$22:;
	ASTDELNODE( N$1 );
	label$19:;
}

static void HPROCFLUSH( struct $7ASTNODE* P$1, int64 DOEMIT$1 )
{
	int64 TMP$86$1;
	label$24:;
	struct $7ASTNODE* N$1;
	struct $7ASTNODE* NXT$1;
	struct $8FBSYMBOL* SYM$1;
	SYM$1 = *(struct $8FBSYMBOL**)((uint8*)P$1 + 24ll);
	if( DOEMIT$1 == 0ll ) goto label$27;
	{
		HGENSTATICINSTANCESDTORS( SYM$1 );
	}
	label$27:;
	label$26:;
	*(struct $7ASTNODE**)((uint8*)&AST$ + 80ll) = P$1;
	*(struct $7ASTNODE**)((uint8*)&AST$ + 264ll) = P$1;
	*(int64*)((uint8*)&AST$ + 272ll) = DOEMIT$1;
	if( *(int64*)((uint8*)P$1 + 96ll) == 0ll ) goto label$28;
	TMP$86$1 = 0ll;
	goto label$352;
	label$28:;
	TMP$86$1 = 1ll;
	label$352:;
	*(uint64*)((uint8*)&PARSER$ + 184ll) = (uint64)TMP$86$1;
	*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) = SYM$1;
	*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 208ll) = SYM$1;
	SYMBNESTBEGIN( SYM$1, 0ll );
	if( *(int64*)((uint8*)&AST$ + 272ll) == 0ll ) goto label$30;
	{
		*($12FB_SYMBSTATS*)((uint8*)SYM$1 + 16ll) = *(int64*)((uint8*)SYM$1 + 16ll) | 16777216ll;
		(*(tmp$41*)((uint8*)&IR$ + 152ll))( SYM$1, *(struct $8FBSYMBOL**)((uint8*)P$1 + 64ll) );
		ASTSCOPEALLOCLOCALS( *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 96ll) );
	}
	label$30:;
	label$29:;
	N$1 = *(struct $7ASTNODE**)((uint8*)P$1 + 112ll);
	label$31:;
	if( N$1 == (struct $7ASTNODE*)0ull ) goto label$32;
	{
		NXT$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 136ll);
		ASTLOAD( N$1 );
		ASTDELNODE( N$1 );
		N$1 = NXT$1;
	}
	goto label$31;
	label$32:;
	if( *(int64*)((uint8*)&AST$ + 272ll) == 0ll ) goto label$34;
	{
		(*(tmp$45*)((uint8*)&IR$ + 160ll))( SYM$1, *(struct $8FBSYMBOL**)((uint8*)P$1 + 64ll), *(struct $8FBSYMBOL**)((uint8*)P$1 + 72ll) );
		(*(tmp$40*)((uint8*)&IR$ + 112ll))( *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 96ll) );
	}
	label$34:;
	label$33:;
	SYMBDELSYMBOLTB( (struct $10FBSYMBOLTB*)((uint8*)SYM$1 + 88ll), 0ll );
	SYMBNESTEND( 0ll );
	HDELPROCNODE( P$1 );
	*(int64*)((uint8*)&AST$ + 272ll) = -1ll;
	label$25:;
}

static void HPROCFLUSHALL( void )
{
	label$35:;
	struct $7ASTNODE* N$1;
	int64 DOEMIT$1;
	struct $8FBSYMBOL* SYM$1;
	HGENGLOBALINSTANCESCTOR(  );
	label$37:;
	{
		N$1 = *(struct $7ASTNODE**)((uint8*)&AST$ + 64ll);
		if( N$1 != (struct $7ASTNODE*)0ull ) goto label$41;
		{
			goto label$38;
		}
		label$41:;
		label$40:;
		SYM$1 = *(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll);
		if( (*(int64*)((uint8*)SYM$1 + 16ll) & 128ll) == 0ll ) goto label$43;
		{
			DOEMIT$1 = -1ll;
			if( (*(int64*)((uint8*)SYM$1 + 8ll) & 64ll) == 0ll ) goto label$45;
			{
				if( (int64)-((*(int64*)((uint8*)SYM$1 + 16ll) & 2ll) != 0ll) != 0ll ) goto label$47;
				{
					DOEMIT$1 = 0ll;
				}
				goto label$46;
				label$47:;
				if( (*(int64*)((uint8*)SYM$1 + 16ll) & 8192ll) == 0ll ) goto label$48;
				{
					int64 vr$15 = HMODLEVELISEMPTY( N$1 );
					DOEMIT$1 = (int64)-(vr$15 == 0ll);
				}
				label$48:;
				label$46:;
			}
			label$45:;
			label$44:;
		}
		goto label$42;
		label$43:;
		{
			DOEMIT$1 = 0ll;
		}
		label$42:;
		HPROCFLUSH( N$1, DOEMIT$1 );
	}
	label$39:;
	goto label$37;
	label$38:;
	label$36:;
}

static struct $7ASTNODE* ASTUPDATE( struct $7ASTNODE* N$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$49:;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$52;
	{
		fb$result$1 = (struct $7ASTNODE*)0ull;
		goto label$50;
	}
	label$52:;
	label$51:;
	if( *(int64*)N$1 != 9ll ) goto label$54;
	{
		if( *(int64*)((uint8*)N$1 + 40ll) == 0ll ) goto label$56;
		{
			if( *(int64*)((uint8*)N$1 + 8ll) == 0ll ) goto label$58;
			{
				ASTSETTYPE( N$1, 0ll, (struct $8FBSYMBOL*)0ull );
			}
			label$58:;
			label$57:;
		}
		label$56:;
		label$55:;
	}
	label$54:;
	label$53:;
	struct $7ASTNODE* vr$8 = ASTTYPEINIUPDATE( N$1 );
	N$1 = vr$8;
	struct $7ASTNODE* vr$9 = ASTUPDATEBITFIELDS( N$1 );
	N$1 = vr$9;
	struct $7ASTNODE* vr$10 = ASTOPTIMIZETREE( N$1 );
	N$1 = vr$10;
	struct $7ASTNODE* vr$11 = ASTOPTASSIGNMENT( N$1 );
	N$1 = vr$11;
	struct $7ASTNODE* vr$12 = ASTUPDSTRCONCAT( N$1 );
	N$1 = vr$12;
	if( *(int64*)((uint8*)&AST$ + 392ll) == 0ll ) goto label$60;
	{
		struct $7ASTNODE* vr$14 = ASTDTORLISTFLUSH( 0ll );
		struct $7ASTNODE* vr$15 = ASTNEWLINK( N$1, vr$14, -1ll );
		N$1 = vr$15;
	}
	label$60:;
	label$59:;
	fb$result$1 = N$1;
	label$50:;
	return fb$result$1;
}

static struct $7ASTNODE* HCHECKERRHND( struct $7ASTNODE* HEAD_NODE$1, struct $8FBSYMBOL* SYM$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$111:;
	if( *(int64*)((uint8*)&ENV$ + 312ll) == 0ll ) goto label$114;
	{
		struct $7ASTNODE* vr$3 = ASTNEWCONSTSTR( (uint8*)((uint8*)&ENV$ + 488ll) );
		struct $7ASTNODE* vr$4 = RTLERRORSETMODNAME( SYM$1, vr$3 );
		struct $7ASTNODE* vr$5 = ASTADDAFTER( vr$4, HEAD_NODE$1 );
		HEAD_NODE$1 = vr$5;
		struct $7ASTNODE* vr$7 = ASTNEWCONSTSTR( *(uint8**)((uint8*)SYM$1 + 24ll) );
		struct $7ASTNODE* vr$8 = RTLERRORSETFUNCNAME( SYM$1, vr$7 );
		struct $7ASTNODE* vr$9 = ASTADDAFTER( vr$8, HEAD_NODE$1 );
		HEAD_NODE$1 = vr$9;
	}
	label$114:;
	label$113:;
	{
		struct $10FB_PROCERR* TMP$90$2;
		TMP$90$2 = (struct $10FB_PROCERR*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)SYM$1 + 200ll) + 56ll);
		if( *(struct $8FBSYMBOL**)((uint8*)TMP$90$2 + 16ll) == (struct $8FBSYMBOL*)0ull ) goto label$116;
		{
			struct $7ASTNODE* vr$16 = ASTNEWVAR( *(struct $8FBSYMBOL**)((uint8*)TMP$90$2 + 16ll), 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$17 = RTLERRORSETFUNCNAME( (struct $8FBSYMBOL*)0ull, vr$16 );
			ASTADD( vr$17 );
			*(struct $8FBSYMBOL**)((uint8*)TMP$90$2 + 16ll) = (struct $8FBSYMBOL*)0ull;
		}
		label$116:;
		label$115:;
		if( *(struct $8FBSYMBOL**)((uint8*)TMP$90$2 + 8ll) == (struct $8FBSYMBOL*)0ull ) goto label$118;
		{
			struct $7ASTNODE* vr$22 = ASTNEWVAR( *(struct $8FBSYMBOL**)((uint8*)TMP$90$2 + 8ll), 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$23 = RTLERRORSETMODNAME( (struct $8FBSYMBOL*)0ull, vr$22 );
			ASTADD( vr$23 );
			*(struct $8FBSYMBOL**)((uint8*)TMP$90$2 + 8ll) = (struct $8FBSYMBOL*)0ull;
		}
		label$118:;
		label$117:;
		if( *(struct $8FBSYMBOL**)TMP$90$2 == (struct $8FBSYMBOL*)0ull ) goto label$120;
		{
			struct $7ASTNODE* vr$28 = ASTNEWVAR( *(struct $8FBSYMBOL**)TMP$90$2, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			RTLERRORSETHANDLER( vr$28, 0ll );
			*(struct $8FBSYMBOL**)TMP$90$2 = (struct $8FBSYMBOL*)0ull;
		}
		label$120:;
		label$119:;
	}
	fb$result$1 = HEAD_NODE$1;
	label$112:;
	return fb$result$1;
}

static struct $7ASTNODE* HMAYBECALLRESULTCTOR( struct $7ASTNODE* HEAD_NODE$1, struct $8FBSYMBOL* SYM$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$121:;
	struct $8FBSYMBOL* RES$1;
	struct $8FBSYMBOL* DEFCTOR$1;
	if( ((int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 33554432ll) != 0ll) | (int64)-((*(int64*)((uint8*)SYM$1 + 48ll) & 511ll) != 18ll)) == 0ll ) goto label$124;
	{
		fb$result$1 = HEAD_NODE$1;
		goto label$122;
	}
	label$124:;
	label$123:;
	if( (~(int64)-((*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)SYM$1 + 200ll) + 96ll) & 2ll) != 0ll) & (int64)-((*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)SYM$1 + 200ll) + 96ll) & 1ll) != 0ll)) == 0ll ) goto label$126;
	{
		fb$result$1 = HEAD_NODE$1;
		goto label$122;
	}
	label$126:;
	label$125:;
	struct $8FBSYMBOL* vr$21 = SYMBGETCOMPDEFCTOR( *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll) );
	DEFCTOR$1 = vr$21;
	if( DEFCTOR$1 != (struct $8FBSYMBOL*)0ull ) goto label$128;
	{
		int64 vr$23 = SYMBHASCTOR( SYM$1 );
		if( vr$23 == 0ll ) goto label$130;
		{
			ERRREPORT( 183ll, 0ll, (uint8*)0ull );
		}
		label$130:;
		label$129:;
		fb$result$1 = HEAD_NODE$1;
		goto label$122;
	}
	label$128:;
	label$127:;
	struct $8FBSYMBOL* vr$25 = SYMBGETPROCRESULT( SYM$1 );
	RES$1 = vr$25;
	if( RES$1 != (struct $8FBSYMBOL*)0ull ) goto label$132;
	{
		fb$result$1 = HEAD_NODE$1;
		goto label$122;
	}
	label$132:;
	label$131:;
	struct $7ASTNODE* vr$27 = ASTBUILDPROCRESULTVAR( SYM$1, RES$1 );
	struct $7ASTNODE* vr$29 = ASTBUILDCTORCALL( *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll), vr$27 );
	struct $7ASTNODE* vr$30 = ASTADDAFTER( vr$29, HEAD_NODE$1 );
	fb$result$1 = vr$30;
	label$122:;
	return fb$result$1;
}

static struct $7ASTNODE* HCALLPROFILER( struct $7ASTNODE* HEAD_NODE$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$133:;
	if( *(int64*)((uint8*)&ENV$ + 320ll) == 0ll ) goto label$136;
	{
		if( *(int64*)((uint8*)&ENV$ + 216ll) == 3ll ) goto label$138;
		{
			struct $7ASTNODE* vr$3 = RTLPROFILECALL_MCOUNT(  );
			struct $7ASTNODE* vr$4 = ASTADDAFTER( vr$3, HEAD_NODE$1 );
			HEAD_NODE$1 = vr$4;
		}
		label$138:;
		label$137:;
	}
	label$136:;
	label$135:;
	fb$result$1 = HEAD_NODE$1;
	label$134:;
	return fb$result$1;
}

static int64 HDECLPROCPARAMS( struct $8FBSYMBOL* PROC$1 )
{
	struct $8FBSYMBOL* TMP$91$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$177:;
	int64 I$1;
	struct $8FBSYMBOL* P$1;
	fb$result$1 = 0ll;
	if( (*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) != 18ll ) goto label$180;
	{
		SYMBADDPROCRESULTPARAM( PROC$1 );
	}
	label$180:;
	label$179:;
	I$1 = 1ll;
	if( *(int64*)((uint8*)PROC$1 + 144ll) != 4ll ) goto label$181;
	TMP$91$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 136ll);
	goto label$353;
	label$181:;
	TMP$91$1 = *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 128ll);
	label$353:;
	P$1 = TMP$91$1;
	label$182:;
	if( P$1 == (struct $8FBSYMBOL*)0ull ) goto label$183;
	{
		struct $8FBSYMBOL* TMP$92$2;
		if( *(int64*)((uint8*)P$1 + 88ll) == 4ll ) goto label$185;
		{
			struct $8FBSYMBOL* vr$11 = SYMBADDVARFORPARAM( P$1 );
			*(struct $8FBSYMBOL**)((uint8*)P$1 + 96ll) = vr$11;
			if( *(struct $8FBSYMBOL**)((uint8*)P$1 + 96ll) != (struct $8FBSYMBOL*)0ull ) goto label$187;
			{
				ERRREPORTPARAM( PROC$1, I$1, (uint8*)0ull, 4ll );
				goto label$178;
			}
			label$187:;
			label$186:;
		}
		label$185:;
		label$184:;
		if( *(int64*)((uint8*)PROC$1 + 144ll) != 4ll ) goto label$188;
		TMP$92$2 = *(struct $8FBSYMBOL**)((uint8*)P$1 + 288ll);
		goto label$354;
		label$188:;
		TMP$92$2 = *(struct $8FBSYMBOL**)((uint8*)P$1 + 296ll);
		label$354:;
		P$1 = TMP$92$2;
		I$1 = I$1 + 1ll;
	}
	goto label$182;
	label$183:;
	fb$result$1 = -1ll;
	label$178:;
	return fb$result$1;
}

static void HLOADPROCRESULT( struct $8FBSYMBOL* PROC$1 )
{
	label$189:;
	struct $8FBSYMBOL* S$1;
	struct $7ASTNODE* N$1;
	struct $8FBSYMBOL* vr$0 = SYMBGETPROCRESULT( PROC$1 );
	S$1 = vr$0;
	if( ((int64)-((*(int64*)((uint8*)PROC$1 + 48ll) & 511ll) == 16ll) & ~(int64)-((*(int64*)((uint8*)PROC$1 + 8ll) & 33554432ll) != 0ll)) == 0ll ) goto label$192;
	{
		struct $7ASTNODE* vr$10 = ASTNEWVAR( S$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$11 = RTLSTRALLOCTMPRESULT( vr$10 );
		N$1 = vr$11;
		if( *(int64*)((uint8*)&ENV$ + 208ll) != 1ll ) goto label$194;
		{
			struct $7ASTNODE* vr$14 = ASTNEWLOAD( N$1, *(int64*)((uint8*)PROC$1 + 48ll), -1ll );
			N$1 = vr$14;
		}
		label$194:;
		label$193:;
	}
	goto label$191;
	label$192:;
	{
		struct $7ASTNODE* vr$18 = ASTNEWVAR( S$1, 0ll, *(int64*)((uint8*)PROC$1 + 152ll), *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 160ll) );
		struct $7ASTNODE* vr$19 = ASTNEWLOAD( vr$18, *(int64*)((uint8*)PROC$1 + 152ll), -1ll );
		N$1 = vr$19;
	}
	label$191:;
	ASTADD( N$1 );
	label$190:;
}

static int64 HMODLEVELISEMPTY( struct $7ASTNODE* P$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$195:;
	struct $7ASTNODE* N$1;
	struct $7ASTNODE* NXT$1;
	N$1 = *(struct $7ASTNODE**)((uint8*)P$1 + 112ll);
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$198;
	{
		fb$result$1 = -1ll;
		goto label$196;
	}
	label$198:;
	label$197:;
	if( *(int64*)N$1 == 21ll ) goto label$200;
	{
		fb$result$1 = 0ll;
		goto label$196;
	}
	label$200:;
	label$199:;
	N$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 136ll);
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$202;
	{
		fb$result$1 = -1ll;
		goto label$196;
	}
	label$202:;
	label$201:;
	if( *(int64*)N$1 == 21ll ) goto label$204;
	{
		fb$result$1 = 0ll;
		goto label$196;
	}
	label$204:;
	label$203:;
	N$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 136ll);
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$206;
	{
		fb$result$1 = -1ll;
		goto label$196;
	}
	label$206:;
	label$205:;
	fb$result$1 = 0ll;
	goto label$196;
	label$196:;
	return fb$result$1;
}

static struct $7ASTNODE* HCALLCTORLIST( int64 IS_CTOR$1, struct $8FBSYMBOL* THIS_$1, struct $8FBSYMBOL* FLD$1 )
{
	int64 TMP$93$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$207:;
	struct $8FBSYMBOL* CNT$1;
	struct $8FBSYMBOL* LABEL$1;
	struct $8FBSYMBOL* ITER$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	struct $7ASTNODE* FLDEXPR$1;
	struct $7ASTNODE* TREE$1;
	int64 DTYPE$1;
	int64 ELEMENTS$1;
	if( FLD$1 == (struct $8FBSYMBOL*)0ull ) goto label$210;
	{
		DTYPE$1 = *(int64*)((uint8*)FLD$1 + 48ll) & 511ll;
		SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 56ll);
		ELEMENTS$1 = *(int64*)((uint8*)FLD$1 + 120ll);
	}
	goto label$209;
	label$210:;
	{
		DTYPE$1 = *(int64*)((uint8*)THIS_$1 + 48ll) & 511ll;
		SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)THIS_$1 + 56ll);
		ELEMENTS$1 = *(int64*)((uint8*)THIS_$1 + 120ll);
	}
	label$209:;
	struct $8FBSYMBOL* vr$10 = SYMBADDTEMPVAR( 7ll, (struct $8FBSYMBOL*)0ull );
	CNT$1 = vr$10;
	struct $8FBSYMBOL* vr$11 = SYMBADDLABEL( (uint8*)0ull, 4ll );
	LABEL$1 = vr$11;
	struct $8FBSYMBOL* vr$19 = SYMBADDTEMPVAR( ((DTYPE$1 & 31ll) | ((DTYPE$1 & 480ll) + 32ll)) | ((DTYPE$1 & 261632ll) << 1ll), SUBTYPE$1 );
	ITER$1 = vr$19;
	if( FLD$1 == (struct $8FBSYMBOL*)0ull ) goto label$212;
	{
		if( IS_CTOR$1 == 0ll ) goto label$214;
		{
			struct $7ASTNODE* vr$22 = ASTBUILDVARFIELD( THIS_$1, FLD$1, 0ll );
			FLDEXPR$1 = vr$22;
		}
		goto label$213;
		label$214:;
		{
			struct $7ASTNODE* vr$26 = ASTBUILDVARFIELD( THIS_$1, FLD$1, (ELEMENTS$1 + -1ll) * *(int64*)((uint8*)FLD$1 + 72ll) );
			FLDEXPR$1 = vr$26;
		}
		label$213:;
	}
	goto label$211;
	label$212:;
	{
		if( IS_CTOR$1 == 0ll ) goto label$216;
		{
			struct $7ASTNODE* vr$28 = ASTBUILDVARFIELD( THIS_$1, (struct $8FBSYMBOL*)0ull, 0ll );
			FLDEXPR$1 = vr$28;
		}
		goto label$215;
		label$216:;
		{
			struct $7ASTNODE* vr$32 = ASTBUILDVARFIELD( THIS_$1, (struct $8FBSYMBOL*)0ull, (ELEMENTS$1 + -1ll) * *(int64*)((uint8*)SUBTYPE$1 + 72ll) );
			FLDEXPR$1 = vr$32;
		}
		label$215:;
	}
	label$211:;
	struct $7ASTNODE* vr$33 = ASTNEWADDROF( FLDEXPR$1 );
	struct $7ASTNODE* vr$34 = _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEl( ITER$1, vr$33, 64ll );
	TREE$1 = vr$34;
	struct $7ASTNODE* vr$35 = ASTBUILDFORBEGIN( TREE$1, CNT$1, LABEL$1, 0ll, -1ll );
	TREE$1 = vr$35;
	if( IS_CTOR$1 == 0ll ) goto label$218;
	{
		struct $7ASTNODE* vr$37 = ASTBUILDVARDEREF( ITER$1 );
		struct $7ASTNODE* vr$38 = ASTBUILDCTORCALL( SUBTYPE$1, vr$37 );
		struct $7ASTNODE* vr$39 = ASTNEWLINK( TREE$1, vr$38, -1ll );
		TREE$1 = vr$39;
	}
	goto label$217;
	label$218:;
	{
		struct $7ASTNODE* vr$40 = ASTBUILDVARDEREF( ITER$1 );
		struct $7ASTNODE* vr$41 = ASTBUILDDTORCALL( SUBTYPE$1, vr$40, 0ll );
		struct $7ASTNODE* vr$42 = ASTNEWLINK( TREE$1, vr$41, -1ll );
		TREE$1 = vr$42;
	}
	label$217:;
	if( IS_CTOR$1 == 0ll ) goto label$219;
	TMP$93$1 = 1ll;
	goto label$355;
	label$219:;
	TMP$93$1 = -1ll;
	label$355:;
	struct $7ASTNODE* vr$44 = ASTBUILDVARINC( ITER$1, TMP$93$1 );
	struct $7ASTNODE* vr$45 = ASTNEWLINK( TREE$1, vr$44, -1ll );
	TREE$1 = vr$45;
	struct $7ASTNODE* vr$46 = ASTNEWCONSTI( ELEMENTS$1, 7ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$47 = ASTBUILDFOREND( TREE$1, CNT$1, LABEL$1, vr$46 );
	TREE$1 = vr$47;
	fb$result$1 = TREE$1;
	label$208:;
	return fb$result$1;
}

static struct $7ASTNODE* HCALLFIELDCTOR( struct $8FBSYMBOL* THIS_$1, struct $8FBSYMBOL* FLD$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$220:;
	if( (*(int64*)((uint8*)FLD$1 + 8ll) & 4ll) == 0ll ) goto label$223;
	{
		goto label$221;
	}
	label$223:;
	label$222:;
	if( (*(int64*)((uint8*)FLD$1 + 16ll) & 2048ll) == 0ll ) goto label$225;
	{
		goto label$221;
	}
	label$225:;
	label$224:;
	int64 vr$7 = SYMBHASDEFCTOR( FLD$1 );
	if( vr$7 == 0ll ) goto label$227;
	{
		if( *(int64*)((uint8*)FLD$1 + 96ll) != 0ll ) goto label$229;
		{
			struct $7ASTNODE* vr$11 = ASTBUILDVARFIELD( THIS_$1, FLD$1, 0ll );
			struct $7ASTNODE* vr$13 = ASTBUILDCTORCALL( *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 56ll), vr$11 );
			fb$result$1 = vr$13;
		}
		goto label$228;
		label$229:;
		{
			struct $7ASTNODE* vr$14 = HCALLCTORLIST( -1ll, THIS_$1, FLD$1 );
			fb$result$1 = vr$14;
		}
		label$228:;
		goto label$221;
	}
	label$227:;
	label$226:;
	if( *(int64*)((uint8*)FLD$1 + 184ll) <= 0ll ) goto label$231;
	{
		struct $7ASTNODE* vr$17 = ASTNEWCONSTI( 0ll, 8ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$18 = ASTBUILDVARFIELD( THIS_$1, FLD$1, 0ll );
		struct $7ASTNODE* vr$19 = ASTNEWASSIGN( vr$18, vr$17, 64ll );
		fb$result$1 = vr$19;
	}
	goto label$230;
	label$231:;
	{
		struct $7ASTNODE* vr$23 = ASTNEWCONSTI( *(int64*)((uint8*)FLD$1 + 72ll) * *(int64*)((uint8*)FLD$1 + 120ll), 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$24 = ASTBUILDVARFIELD( THIS_$1, FLD$1, 0ll );
		struct $7ASTNODE* vr$25 = ASTNEWMEM( 106ll, vr$24, vr$23, 0ll );
		fb$result$1 = vr$25;
	}
	label$230:;
	label$221:;
	return fb$result$1;
}

static struct $7ASTNODE* HCLEARUNIONFIELDS( struct $8FBSYMBOL* THIS_$1, struct $8FBSYMBOL* BASE_FLD$1, struct $8FBSYMBOL** PFINALFIELD$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$232:;
	struct $8FBSYMBOL* FLD$1;
	int64 BYTES$1;
	int64 LGT$1;
	int64 BASE_OFS$1;
	FLD$1 = BASE_FLD$1;
	BYTES$1 = 0ll;
	BASE_OFS$1 = *(int64*)((uint8*)BASE_FLD$1 + 80ll);
	label$234:;
	{
		LGT$1 = ((*(int64*)((uint8*)FLD$1 + 72ll) * *(int64*)((uint8*)FLD$1 + 120ll)) + *(int64*)((uint8*)FLD$1 + 80ll)) - BASE_OFS$1;
		if( LGT$1 <= BYTES$1 ) goto label$238;
		{
			BYTES$1 = LGT$1;
		}
		label$238:;
		label$237:;
		FLD$1 = *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 296ll);
		if( FLD$1 != (struct $8FBSYMBOL*)0ull ) goto label$240;
		{
			goto label$235;
		}
		label$240:;
		label$239:;
	}
	label$236:;
	if( (*(int64*)((uint8*)FLD$1 + 16ll) & 16777216ll) != 0ll ) goto label$234;
	label$235:;
	*PFINALFIELD$1 = FLD$1;
	struct $7ASTNODE* vr$15 = ASTNEWCONSTI( BYTES$1, 7ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$16 = ASTBUILDVARFIELD( THIS_$1, BASE_FLD$1, 0ll );
	struct $7ASTNODE* vr$17 = ASTNEWMEM( 106ll, vr$16, vr$15, 0ll );
	fb$result$1 = vr$17;
	label$233:;
	return fb$result$1;
}

static struct $7ASTNODE* HINITDYNAMICARRAYFIELD( struct $8FBSYMBOL* THIS_$1, struct $8FBSYMBOL* FLD$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$241:;
	struct $7ASTNODE* EXPRTB$1[8][2];
	__builtin_memset( (struct $7ASTNODE**)EXPRTB$1, 0, 128ll );
	struct $8FBARRAY2IP7ASTNODEE {
		struct $7ASTNODE** DATA;
		struct $7ASTNODE** PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[2];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY2IP7ASTNODEE ) == 88 );
	struct $8FBARRAY2IP7ASTNODEE tmp$94$1;
	*(struct $7ASTNODE***)&tmp$94$1 = (struct $7ASTNODE**)EXPRTB$1;
	*(struct $7ASTNODE***)((uint8*)&tmp$94$1 + 8ll) = (struct $7ASTNODE**)EXPRTB$1;
	*(int64*)((uint8*)&tmp$94$1 + 16ll) = 128ll;
	*(int64*)((uint8*)&tmp$94$1 + 24ll) = 8ll;
	*(int64*)((uint8*)&tmp$94$1 + 32ll) = 2ll;
	*(int64*)((uint8*)&tmp$94$1 + 40ll) = 8ll;
	*(int64*)((uint8*)&tmp$94$1 + 48ll) = 0ll;
	*(int64*)((uint8*)&tmp$94$1 + 56ll) = 7ll;
	*(int64*)((uint8*)&tmp$94$1 + 64ll) = 2ll;
	*(int64*)((uint8*)&tmp$94$1 + 72ll) = 0ll;
	*(int64*)((uint8*)&tmp$94$1 + 80ll) = 1ll;
	struct $7ASTNODE* BOUNDSTYPEINI$1;
	struct $7ASTNODE* N$1;
	int64 DIMENSIONS$1;
	struct $7ASTNODE* vr$25 = ASTTYPEINICLONE( *(struct $7ASTNODE**)((uint8*)FLD$1 + 88ll) );
	BOUNDSTYPEINI$1 = vr$25;
	DIMENSIONS$1 = 0ll;
	N$1 = *(struct $7ASTNODE**)((uint8*)BOUNDSTYPEINI$1 + 112ll);
	label$243:;
	{
		*(struct $7ASTNODE**)((uint8*)EXPRTB$1 + (DIMENSIONS$1 << 4ll)) = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
		*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = (struct $7ASTNODE*)0ull;
		N$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
		*(struct $7ASTNODE**)(((uint8*)EXPRTB$1 + (DIMENSIONS$1 << 4ll)) + 8ll) = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
		*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = (struct $7ASTNODE*)0ull;
		N$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
		DIMENSIONS$1 = DIMENSIONS$1 + 1ll;
	}
	label$245:;
	if( N$1 != (struct $7ASTNODE*)0ull ) goto label$243;
	label$244:;
	ASTDELTREE( BOUNDSTYPEINI$1 );
	struct $7ASTNODE* vr$42 = ASTBUILDVARFIELD( THIS_$1, FLD$1, 0ll );
	struct $7ASTNODE* vr$43 = RTLARRAYREDIM( vr$42, DIMENSIONS$1, (struct $7FBARRAYIP7ASTNODEE*)&tmp$94$1, 0ll, ~(int64)-((*(int64*)((uint8*)FLD$1 + 16ll) & 2048ll) != 0ll) );
	fb$result$1 = vr$43;
	label$242:;
	return fb$result$1;
}

static struct $7ASTNODE* HCALLFIELDCTORS( struct $8FBSYMBOL* PARENT$1, struct $8FBSYMBOL* PROC$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$246:;
	struct $8FBSYMBOL* FLD$1;
	struct $8FBSYMBOL* THIS_$1;
	struct $7ASTNODE* TREE$1;
	struct $7ASTNODE* BOUNDSTYPEINI$1;
	int64 SKIP$1;
	TREE$1 = (struct $7ASTNODE*)0ull;
	THIS_$1 = *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 128ll) + 96ll);
	FLD$1 = *(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 96ll);
	label$248:;
	if( FLD$1 == (struct $8FBSYMBOL*)0ull ) goto label$249;
	{
		if( *(int64*)FLD$1 != 12ll ) goto label$251;
		{
			if( FLD$1 == *(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 168ll) ) goto label$253;
			{
				if( (*(int64*)((uint8*)FLD$1 + 16ll) & 16777216ll) == 0ll ) goto label$255;
				{
					struct $7ASTNODE* vr$13 = HCLEARUNIONFIELDS( THIS_$1, FLD$1, &FLD$1 );
					struct $7ASTNODE* vr$14 = ASTNEWLINK( TREE$1, vr$13, -1ll );
					TREE$1 = vr$14;
					goto label$248;
				}
				goto label$254;
				label$255:;
				{
					if( *(struct $7ASTNODE**)((uint8*)FLD$1 + 88ll) != (struct $7ASTNODE*)0ull ) goto label$257;
					{
						struct $7ASTNODE* vr$17 = HCALLFIELDCTOR( THIS_$1, FLD$1 );
						struct $7ASTNODE* vr$18 = ASTNEWLINK( TREE$1, vr$17, -1ll );
						TREE$1 = vr$18;
					}
					goto label$256;
					label$257:;
					if( (*(int64*)((uint8*)FLD$1 + 8ll) & 4ll) == 0ll ) goto label$258;
					{
						struct $7ASTNODE* vr$22 = HINITDYNAMICARRAYFIELD( THIS_$1, FLD$1 );
						struct $7ASTNODE* vr$23 = ASTNEWLINK( TREE$1, vr$22, -1ll );
						TREE$1 = vr$23;
					}
					goto label$256;
					label$258:;
					{
						struct $7ASTNODE* vr$25 = ASTTYPEINICLONE( *(struct $7ASTNODE**)((uint8*)FLD$1 + 88ll) );
						struct $7ASTNODE* vr$26 = ASTBUILDVARFIELD( THIS_$1, (struct $8FBSYMBOL*)0ull, 0ll );
						struct $7ASTNODE* vr$27 = _Z15ASTTYPEINIFLUSHP7ASTNODES0_ll( vr$26, vr$25, 0ll, 64ll );
						struct $7ASTNODE* vr$28 = ASTNEWLINK( TREE$1, vr$27, -1ll );
						TREE$1 = vr$28;
					}
					label$256:;
				}
				label$254:;
			}
			label$253:;
			label$252:;
		}
		label$251:;
		label$250:;
		FLD$1 = *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 296ll);
	}
	goto label$248;
	label$249:;
	fb$result$1 = TREE$1;
	label$247:;
	return fb$result$1;
}

static struct $7ASTNODE* HCALLBASECTOR( struct $8FBSYMBOL* PARENT$1, struct $8FBSYMBOL* PROC$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$259:;
	struct $7ASTNODE* INITREE$1;
	struct $8FBSYMBOL* BASE_$1;
	struct $8FBSYMBOL* THIS_$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	struct $8FBSYMBOL* DEFCTOR$1;
	BASE_$1 = *(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 168ll);
	if( BASE_$1 != (struct $8FBSYMBOL*)0ull ) goto label$262;
	{
		goto label$260;
	}
	label$262:;
	label$261:;
	THIS_$1 = *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 128ll) + 96ll);
	INITREE$1 = *(struct $7ASTNODE**)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 128ll);
	if( INITREE$1 == (struct $7ASTNODE*)0ull ) goto label$264;
	{
		*(struct $7ASTNODE**)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 128ll) = (struct $7ASTNODE*)0ull;
		struct $7ASTNODE* vr$10 = ASTBUILDVARFIELD( THIS_$1, (struct $8FBSYMBOL*)0ull, 0ll );
		struct $7ASTNODE* vr$11 = _Z15ASTTYPEINIFLUSHP7ASTNODES0_ll( vr$10, INITREE$1, 0ll, 64ll );
		fb$result$1 = vr$11;
		goto label$260;
	}
	label$264:;
	label$263:;
	SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)BASE_$1 + 56ll);
	struct $8FBSYMBOL* vr$13 = SYMBGETCOMPDEFCTOR( SUBTYPE$1 );
	DEFCTOR$1 = vr$13;
	if( DEFCTOR$1 == (struct $8FBSYMBOL*)0ull ) goto label$266;
	{
		int64 vr$15 = SYMBCHECKACCESS( DEFCTOR$1 );
		if( vr$15 != 0ll ) goto label$268;
		{
			ERRREPORT( 206ll, 0ll, (uint8*)0ull );
		}
		label$268:;
		label$267:;
	}
	goto label$265;
	label$266:;
	struct $8FBSYMBOL* vr$17 = SYMBGETCOMPCTORHEAD( SUBTYPE$1 );
	if( vr$17 == (struct $8FBSYMBOL*)0ull ) goto label$269;
	{
		ERRREPORT( 184ll, 0ll, (uint8*)0ull );
	}
	label$269:;
	label$265:;
	struct $7ASTNODE* vr$19 = HCALLFIELDCTOR( THIS_$1, BASE_$1 );
	fb$result$1 = vr$19;
	label$260:;
	return fb$result$1;
}

static struct $7ASTNODE* HINITVPTR( struct $8FBSYMBOL* PARENT$1, struct $8FBSYMBOL* PROC$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$270:;
	if( (int64)-((*(int64*)((uint8*)PARENT$1 + 16ll) & 4194304ll) != 0ll) != 0ll ) goto label$273;
	{
		goto label$271;
	}
	label$273:;
	label$272:;
	struct $8FBSYMBOL* THIS_$1;
	THIS_$1 = *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 128ll) + 96ll);
	struct $7ASTNODE* vr$10 = ASTNEWVAR( *(struct $8FBSYMBOL**)((uint8*)*(struct $12FB_STRUCTEXT**)((uint8*)PARENT$1 + 224ll) + 288ll), *(int64*)((uint8*)&ENV$ + 472ll) << 1ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$11 = ASTNEWADDROF( vr$10 );
	struct $7ASTNODE* vr$12 = ASTNEWCONV( 32ll, (struct $8FBSYMBOL*)0ull, vr$11, 0ll, (int64*)0ull );
	struct $8FBSYMBOL* vr$13 = SYMBUDTGETFIRSTFIELD( *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 199160ll) );
	struct $7ASTNODE* vr$14 = ASTBUILDVARFIELD( THIS_$1, vr$13, 0ll );
	struct $7ASTNODE* vr$15 = ASTNEWASSIGN( vr$14, vr$12, 64ll );
	fb$result$1 = vr$15;
	label$271:;
	return fb$result$1;
}

static void HCALLCTORS( struct $7ASTNODE* N$1, struct $8FBSYMBOL* SYM$1 )
{
	label$274:;
	struct $7ASTNODE* TREE$1;
	struct $8FBSYMBOL* PARENT$1;
	PARENT$1 = *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)SYM$1 + 232ll);
	struct $7ASTNODE* vr$2 = HCALLBASECTOR( PARENT$1, SYM$1 );
	TREE$1 = vr$2;
	struct $7ASTNODE* vr$3 = HCALLFIELDCTORS( PARENT$1, SYM$1 );
	struct $7ASTNODE* vr$4 = ASTNEWLINK( TREE$1, vr$3, -1ll );
	TREE$1 = vr$4;
	struct $7ASTNODE* vr$5 = HINITVPTR( PARENT$1, SYM$1 );
	struct $7ASTNODE* vr$6 = ASTNEWLINK( TREE$1, vr$5, -1ll );
	TREE$1 = vr$6;
	struct $7ASTNODE* vr$7 = ASTFINDFIRSTCODE( N$1 );
	N$1 = vr$7;
	if( N$1 == (struct $7ASTNODE*)0ull ) goto label$277;
	{
		N$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 128ll);
	}
	label$277:;
	label$276:;
	ASTADDAFTER( TREE$1, N$1 );
	label$275:;
}

static void HCALLFIELDDTOR( struct $8FBSYMBOL* THIS_$1, struct $8FBSYMBOL* FLD$1 )
{
	label$278:;
	if( (*(int64*)((uint8*)FLD$1 + 8ll) & 4ll) == 0ll ) goto label$281;
	{
		struct $7ASTNODE* vr$3 = ASTBUILDVARFIELD( THIS_$1, FLD$1, 0ll );
		struct $7ASTNODE* vr$4 = RTLARRAYERASE( vr$3, -1ll, 0ll );
		ASTADD( vr$4 );
	}
	goto label$280;
	label$281:;
	if( *(int64*)((uint8*)FLD$1 + 96ll) != 0ll ) goto label$282;
	{
		if( (*(int64*)((uint8*)FLD$1 + 48ll) & 511ll) != 16ll ) goto label$284;
		{
			struct $7ASTNODE* vr$10 = ASTBUILDVARFIELD( THIS_$1, FLD$1, 0ll );
			struct $7ASTNODE* vr$11 = RTLSTRDELETE( vr$10 );
			ASTADD( vr$11 );
		}
		goto label$283;
		label$284:;
		int64 vr$12 = SYMBHASDTOR( FLD$1 );
		if( vr$12 == 0ll ) goto label$285;
		{
			struct $7ASTNODE* vr$14 = ASTBUILDVARFIELD( THIS_$1, FLD$1, 0ll );
			struct $7ASTNODE* vr$16 = ASTBUILDDTORCALL( *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 56ll), vr$14, 0ll );
			ASTADD( vr$16 );
		}
		label$285:;
		label$283:;
	}
	goto label$280;
	label$282:;
	{
		if( (*(int64*)((uint8*)FLD$1 + 48ll) & 511ll) != 16ll ) goto label$287;
		{
			struct $7ASTNODE* vr$20 = ASTBUILDVARFIELD( THIS_$1, FLD$1, 0ll );
			struct $7ASTNODE* vr$21 = RTLARRAYERASE( vr$20, 0ll, 0ll );
			ASTADD( vr$21 );
		}
		goto label$286;
		label$287:;
		int64 vr$22 = SYMBHASDTOR( FLD$1 );
		if( vr$22 == 0ll ) goto label$288;
		{
			struct $7ASTNODE* vr$24 = HCALLCTORLIST( 0ll, THIS_$1, FLD$1 );
			ASTADD( vr$24 );
		}
		label$288:;
		label$286:;
	}
	label$280:;
	label$279:;
}

static void HCALLFIELDDTORS( struct $8FBSYMBOL* PARENT$1, struct $8FBSYMBOL* PROC$1 )
{
	label$289:;
	struct $8FBSYMBOL* FLD$1;
	struct $8FBSYMBOL* THIS_$1;
	THIS_$1 = *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 128ll) + 96ll);
	FLD$1 = *(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 104ll);
	label$291:;
	if( FLD$1 == (struct $8FBSYMBOL*)0ull ) goto label$292;
	{
		if( *(int64*)FLD$1 != 12ll ) goto label$294;
		{
			if( (~(int64)-((*(int64*)((uint8*)FLD$1 + 8ll) & 8388608ll) != 0ll) & (int64)-(FLD$1 != *(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 168ll))) == 0ll ) goto label$296;
			{
				HCALLFIELDDTOR( THIS_$1, FLD$1 );
			}
			label$296:;
			label$295:;
		}
		label$294:;
		label$293:;
		FLD$1 = *(struct $8FBSYMBOL**)((uint8*)FLD$1 + 288ll);
	}
	goto label$291;
	label$292:;
	label$290:;
}

static void HCALLBASEDTOR( struct $8FBSYMBOL* PARENT$1, struct $8FBSYMBOL* PROC$1 )
{
	label$297:;
	struct $8FBSYMBOL* BASE_$1;
	struct $8FBSYMBOL* DTOR$1;
	struct $8FBSYMBOL* THIS_$1;
	BASE_$1 = *(struct $8FBSYMBOL**)((uint8*)PARENT$1 + 168ll);
	if( BASE_$1 != (struct $8FBSYMBOL*)0ull ) goto label$300;
	{
		goto label$298;
	}
	label$300:;
	label$299:;
	struct $8FBSYMBOL* vr$3 = SYMBGETCOMPDTOR( *(struct $8FBSYMBOL**)((uint8*)BASE_$1 + 56ll) );
	DTOR$1 = vr$3;
	if( DTOR$1 != (struct $8FBSYMBOL*)0ull ) goto label$302;
	{
		goto label$298;
	}
	label$302:;
	label$301:;
	int64 vr$5 = SYMBCHECKACCESS( DTOR$1 );
	if( vr$5 != 0ll ) goto label$304;
	{
		ERRREPORT( 207ll, 0ll, (uint8*)0ull );
	}
	label$304:;
	label$303:;
	if( (*(int64*)((uint8*)DTOR$1 + 8ll) & 1073741824ll) == 0ll ) goto label$306;
	{
		goto label$298;
	}
	label$306:;
	label$305:;
	THIS_$1 = *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)PROC$1 + 128ll) + 96ll);
	struct $7ASTNODE* vr$12 = ASTBUILDVARFIELD( THIS_$1, BASE_$1, 0ll );
	struct $7ASTNODE* vr$14 = ASTBUILDDTORCALL( *(struct $8FBSYMBOL**)((uint8*)BASE_$1 + 56ll), vr$12, -1ll );
	ASTADD( vr$14 );
	label$298:;
}

static void HCALLDTORS( struct $8FBSYMBOL* PROC$1 )
{
	label$307:;
	struct $8FBSYMBOL* PARENT$1;
	PARENT$1 = *(struct $8FBSYMBOL**)*(struct $8FBHASHTB**)((uint8*)PROC$1 + 232ll);
	HCALLFIELDDTORS( PARENT$1, PROC$1 );
	HCALLBASEDTOR( PARENT$1, PROC$1 );
	label$308:;
}

static void HCALLSTATICCTOR( struct $8FBSYMBOL* SYM$1, struct $7ASTNODE* INITREE$1 )
{
	label$309:;
	struct $7ASTNODE* vr$0 = ASTTYPEINICLONE( INITREE$1 );
	struct $7ASTNODE* vr$1 = _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEll( SYM$1, vr$0, 0ll, 64ll );
	ASTADD( vr$1 );
	ASTTYPEINIDELETE( INITREE$1 );
	label$310:;
}

static void HCALLSTATICDTOR( struct $8FBSYMBOL* SYM$1 )
{
	label$311:;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 4ll) == 0ll ) goto label$314;
	{
		struct $7ASTNODE* vr$3 = ASTBUILDVARFIELD( SYM$1, (struct $8FBSYMBOL*)0ull, 0ll );
		struct $7ASTNODE* vr$4 = RTLARRAYERASE( vr$3, -1ll, 0ll );
		ASTADD( vr$4 );
	}
	goto label$313;
	label$314:;
	{
		if( *(int64*)((uint8*)SYM$1 + 96ll) != 0ll ) goto label$316;
		{
			struct $7ASTNODE* vr$7 = ASTBUILDVARFIELD( SYM$1, (struct $8FBSYMBOL*)0ull, 0ll );
			struct $7ASTNODE* vr$9 = ASTBUILDDTORCALL( *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll), vr$7, 0ll );
			ASTADD( vr$9 );
		}
		goto label$315;
		label$316:;
		{
			struct $7ASTNODE* vr$10 = HCALLCTORLIST( 0ll, SYM$1, (struct $8FBSYMBOL*)0ull );
			ASTADD( vr$10 );
		}
		label$315:;
	}
	label$313:;
	label$312:;
}

static void HGENSTATICINSTANCESDTORS( struct $8FBSYMBOL* PROC$1 )
{
	label$317:;
	struct $5TLIST* DTORLIST$1;
	struct $14FB_DTORWRAPPER* WRAP$1;
	struct $7ASTNODE* N$1;
	DTORLIST$1 = *(struct $5TLIST**)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 88ll);
	if( DTORLIST$1 != (struct $5TLIST*)0ull ) goto label$320;
	{
		goto label$318;
	}
	label$320:;
	label$319:;
	void* vr$3 = LISTGETHEAD( DTORLIST$1 );
	WRAP$1 = (struct $14FB_DTORWRAPPER*)vr$3;
	label$321:;
	if( WRAP$1 == (struct $14FB_DTORWRAPPER*)0ull ) goto label$322;
	{
		ASTPROCBEGIN( *(struct $8FBSYMBOL**)WRAP$1, 0ll );
		N$1 = *(struct $7ASTNODE**)((uint8*)&AST$ + 80ll);
		HCALLSTATICDTOR( *(struct $8FBSYMBOL**)((uint8*)WRAP$1 + 8ll) );
		ASTPROCEND( 0ll );
		HPROCFLUSH( N$1, -1ll );
		void* vr$7 = LISTGETNEXT( (void*)WRAP$1 );
		WRAP$1 = (struct $14FB_DTORWRAPPER*)vr$7;
	}
	goto label$321;
	label$322:;
	LISTEND( DTORLIST$1 );
	free( *(void**)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 88ll) );
	*(struct $5TLIST**)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 88ll) = (struct $5TLIST*)0ull;
	label$318:;
}

static void HGLOBCTORBEGIN( int64 IS_CTOR$1 )
{
	uint8* TMP$95$1;
	label$333:;
	struct $8FBSYMBOL* PROC$1;
	if( IS_CTOR$1 == 0ll ) goto label$335;
	TMP$95$1 = (uint8*)"_GLOBAL__I";
	goto label$356;
	label$335:;
	TMP$95$1 = (uint8*)"_GLOBAL__D";
	label$356:;
	uint8* vr$1 = SYMBUNIQUELABEL(  );
	struct $8FBSYMBOL* vr$2 = SYMBPREADDPROC( (uint8*)0ull );
	struct $8FBSYMBOL* vr$3 = SYMBADDPROC( vr$2, vr$1, TMP$95$1, 0ll, (struct $8FBSYMBOL*)0ull, 64ll, 3ll, 4ll );
	PROC$1 = vr$3;
	if( IS_CTOR$1 == 0ll ) goto label$337;
	{
		SYMBADDGLOBALCTOR( PROC$1 );
	}
	goto label$336;
	label$337:;
	{
		SYMBADDGLOBALDTOR( PROC$1 );
	}
	label$336:;
	*($12FB_SYMBSTATS*)((uint8*)PROC$1 + 16ll) = *(int64*)((uint8*)PROC$1 + 16ll) | 2ll;
	*($12FB_SYMBSTATS*)((uint8*)PROC$1 + 16ll) = *(int64*)((uint8*)PROC$1 + 16ll) | 128ll;
	ASTPROCBEGIN( PROC$1, 0ll );
	label$334:;
}

static void HGENGLOBALINSTANCESCTOR( void )
{
	label$338:;
	struct $15FB_GLOBINSTANCE* INST$1;
	struct $8FBSYMBOL* SYM$1;
	if( *(int64*)((uint8*)&AST$ + 216ll) <= 0ll ) goto label$341;
	{
		HGLOBCTORBEGIN( -1ll );
		void* vr$2 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&AST$ + 152ll) );
		INST$1 = (struct $15FB_GLOBINSTANCE*)vr$2;
		label$342:;
		if( INST$1 == (struct $15FB_GLOBINSTANCE*)0ull ) goto label$343;
		{
			if( *(struct $7ASTNODE**)((uint8*)INST$1 + 8ll) == (struct $7ASTNODE*)0ull ) goto label$345;
			{
				HCALLSTATICCTOR( *(struct $8FBSYMBOL**)INST$1, *(struct $7ASTNODE**)((uint8*)INST$1 + 8ll) );
				*(struct $7ASTNODE**)((uint8*)INST$1 + 8ll) = (struct $7ASTNODE*)0ull;
			}
			label$345:;
			label$344:;
			void* vr$9 = LISTGETNEXT( (void*)INST$1 );
			INST$1 = (struct $15FB_GLOBINSTANCE*)vr$9;
		}
		goto label$342;
		label$343:;
		ASTPROCEND( 0ll );
	}
	label$341:;
	label$340:;
	if( *(int64*)((uint8*)&AST$ + 224ll) <= 0ll ) goto label$347;
	{
		HGLOBCTORBEGIN( 0ll );
		void* vr$12 = LISTGETTAIL( (struct $5TLIST*)((uint8*)&AST$ + 152ll) );
		INST$1 = (struct $15FB_GLOBINSTANCE*)vr$12;
		label$348:;
		if( INST$1 == (struct $15FB_GLOBINSTANCE*)0ull ) goto label$349;
		{
			if( *(int64*)((uint8*)INST$1 + 16ll) == 0ll ) goto label$351;
			{
				HCALLSTATICDTOR( *(struct $8FBSYMBOL**)INST$1 );
			}
			label$351:;
			label$350:;
			void* vr$17 = LISTGETPREV( (void*)INST$1 );
			INST$1 = (struct $15FB_GLOBINSTANCE*)vr$17;
		}
		goto label$348;
		label$349:;
		ASTPROCEND( 0ll );
	}
	label$347:;
	label$346:;
	label$339:;
}

// Total compilation time: 0.04397005215287209 seconds.
