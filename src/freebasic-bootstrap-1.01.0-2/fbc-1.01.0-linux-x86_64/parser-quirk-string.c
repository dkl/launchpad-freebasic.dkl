// Compilation of fbc-1.01.0/src/compiler/parser-quirk-string.bas started at 14:16:44 on 02-28-2015

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
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
uint32* fb_WstrAssign( uint32*, int64, uint32* );
uint32* fb_WstrAssignFromA( uint32*, int64, void*, int64 );
void fb_StrDelete( FBSTRING* );
void fb_WstrDelete( uint32* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
uint32* fb_WstrConcatWA( uint32*, void*, int64 );
uint32* fb_WstrConcatAssign( uint32*, int64, uint32* );
FBSTRING* fb_StrAllocTempDescZ( uint8* );
int64 fb_StrLen( void*, int64 );
uint32 fb_ASC( FBSTRING*, int64 );
uint32 fb_WstrAsc( uint32*, int64 );
FBSTRING* fb_CHR( int32, ... );
uint32* fb_WstrChr( int32, ... );
FBSTRING* fb_OCT_l( uint64 );
double fb_CVD( FBSTRING* );
float fb_CVS( FBSTRING* );
int16 fb_CVSHORT( FBSTRING* );
int32 fb_CVL( FBSTRING* );
int64 fb_CVLONGINT( FBSTRING* );
static void fb_ctor__parserzquirkzstring( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRREPORT( int64, int64, uint8* );
void ASTDELNODE( struct $7ASTNODE* );
void ASTDELTREE( struct $7ASTNODE* );
int64 ASTISCONSTANT( struct $7ASTNODE* );
typedef int64 $11AST_CONVOPT;
struct $7ASTNODE* ASTNEWCONV( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, $11AST_CONVOPT, int64* );
int64 ASTCONSTEQZERO( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWCONSTI( int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWCONSTF( double, int64 );
int64 ASTCONSTFLUSHTOINT( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWVAR( struct $8FBSYMBOL*, int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWCALL( struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWARG( struct $7ASTNODE*, struct $7ASTNODE*, int64, int64 );
struct $8FBSYMBOL* ASTGETSTRLITSYMBOL( struct $7ASTNODE* );
struct $8FBSYMBOL* SYMBADDTEMPVAR( int64, struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBALLOCSTRCONST( uint8*, int64 );
struct $8FBSYMBOL* SYMBALLOCWSTRCONST( uint32*, int64 );
int64 HMATCH( int64 );
uint8* HUNESCAPE( uint8* );
uint32* HUNESCAPEW( uint32* );
typedef int64 $8LEXCHECK;
int64 LEXGETTOKEN( $8LEXCHECK );
void LEXSKIPTOKEN( $8LEXCHECK );
int64 CASSIGNTOKEN( void );
struct $7ASTNODE* CGTINPARENSONLYEXPR( void );
typedef int64 $13FB_VAREXPROPT;
struct $7ASTNODE* CVARORDEREF( $13FB_VAREXPROPT );
int64 CCONSTINTEXPR( struct $7ASTNODE*, int64 );
void HSKIPUNTIL( int64, int64, $8LEXCHECK, int64 );
struct $7ASTNODE* HMATCHEXPR( int64 );
$11FB_DATATYPE HINTEGERTYPEFROMBITSIZE( int64, int64 );
struct $8FBSYMBOL* RTLPROCLOOKUP( uint8*, int64 );
struct $7ASTNODE* RTLTOSTR( struct $7ASTNODE*, int64 );
struct $7ASTNODE* RTLTOWSTR( struct $7ASTNODE* );
struct $7ASTNODE* RTLSTRMID( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE* );
struct $7ASTNODE* RTLSTRASSIGNMID( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE* );
int64 RTLSTRLRSET( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* RTLSTRFILL( struct $7ASTNODE*, struct $7ASTNODE* );
struct $7ASTNODE* RTLWSTRFILL( struct $7ASTNODE*, struct $7ASTNODE* );
struct $7ASTNODE* RTLSTRASC( struct $7ASTNODE*, struct $7ASTNODE* );
struct $7ASTNODE* RTLSTRCHR( int64, struct $7FBARRAYIP7ASTNODEE*, int64 );
struct $7ASTNODE* RTLSTRINSTR( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* RTLSTRINSTRREV( struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* RTLSTRTRIM( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* RTLSTRRTRIM( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* RTLSTRLTRIM( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* RTLSTRCASE( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
int64 RTLMEMCOPYCLEAR( struct $7ASTNODE*, int64, struct $7ASTNODE*, int64 );
static struct $7ASTNODE* CSTRCHR( int64 );
static struct $7ASTNODE* CSTRASC( void );
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

int64 CMIDSTMT( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$10:;
	struct $7ASTNODE* EXPR1$1;
	struct $7ASTNODE* EXPR2$1;
	struct $7ASTNODE* EXPR3$1;
	struct $7ASTNODE* EXPR4$1;
	fb$result$1 = 0ll;
	LEXSKIPTOKEN( 0ll );
	int64 vr$1 = LEXGETTOKEN( 0ll );
	if( vr$1 == 40ll ) goto label$13;
	{
		ERRREPORT( 6ll, 0ll, (uint8*)0ull );
	}
	goto label$12;
	label$13:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$12:;
	struct $7ASTNODE* vr$3 = HMATCHEXPR( 16ll );
	EXPR1$1 = vr$3;
	if( EXPR1$1 != (struct $7ASTNODE*)0ull ) goto label$15;
	{
		goto label$11;
	}
	label$15:;
	label$14:;
	int64 vr$5 = ASTISCONSTANT( EXPR1$1 );
	if( vr$5 == 0ll ) goto label$17;
	{
		ERRREPORT( 118ll, -1ll, (uint8*)0ull );
	}
	label$17:;
	label$16:;
	int64 vr$7 = LEXGETTOKEN( 0ll );
	if( vr$7 == 44ll ) goto label$19;
	{
		ERRREPORT( 16ll, 0ll, (uint8*)0ull );
	}
	goto label$18;
	label$19:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$18:;
	struct $7ASTNODE* vr$9 = HMATCHEXPR( 7ll );
	EXPR2$1 = vr$9;
	if( EXPR2$1 != (struct $7ASTNODE*)0ull ) goto label$21;
	{
		goto label$11;
	}
	label$21:;
	label$20:;
	int64 vr$11 = HMATCH( 44ll );
	if( vr$11 == 0ll ) goto label$23;
	{
		struct $7ASTNODE* vr$13 = HMATCHEXPR( 7ll );
		EXPR3$1 = vr$13;
		if( EXPR3$1 != (struct $7ASTNODE*)0ull ) goto label$25;
		{
			goto label$11;
		}
		label$25:;
		label$24:;
	}
	goto label$22;
	label$23:;
	{
		struct $7ASTNODE* vr$15 = ASTNEWCONSTI( -1ll, 7ll, (struct $8FBSYMBOL*)0ull );
		EXPR3$1 = vr$15;
	}
	label$22:;
	int64 vr$16 = LEXGETTOKEN( 0ll );
	if( vr$16 == 41ll ) goto label$27;
	{
		ERRREPORT( 7ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
	}
	goto label$26;
	label$27:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$26:;
	int64 vr$18 = CASSIGNTOKEN(  );
	if( vr$18 != 0ll ) goto label$29;
	{
		ERRREPORT( 10ll, 0ll, (uint8*)0ull );
	}
	label$29:;
	label$28:;
	struct $7ASTNODE* vr$20 = HMATCHEXPR( 16ll );
	EXPR4$1 = vr$20;
	if( EXPR4$1 != (struct $7ASTNODE*)0ull ) goto label$31;
	{
		goto label$11;
	}
	label$31:;
	label$30:;
	struct $7ASTNODE* vr$22 = RTLSTRASSIGNMID( EXPR1$1, EXPR2$1, EXPR3$1, EXPR4$1 );
	fb$result$1 = (int64)-(vr$22 != (struct $7ASTNODE*)0ull);
	label$11:;
	return fb$result$1;
}

int64 CLRSETSTMT( $8FB_TOKEN TK$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$32:;
	struct $7ASTNODE* DSTEXPR$1;
	struct $7ASTNODE* SRCEXPR$1;
	int64 DTYPE1$1;
	int64 DTYPE2$1;
	struct $8FBSYMBOL* DST$1;
	struct $8FBSYMBOL* SRC$1;
	int64 IS_RSET$1;
	fb$result$1 = 0ll;
	IS_RSET$1 = (int64)-(TK$1 == 415ll);
	LEXSKIPTOKEN( 0ll );
	struct $7ASTNODE* vr$2 = CVARORDEREF( 0ll );
	DSTEXPR$1 = vr$2;
	if( DSTEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$35;
	{
		ERRREPORT( 14ll, 0ll, (uint8*)0ull );
		struct $8FBSYMBOL* vr$4 = SYMBADDTEMPVAR( 16ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$5 = ASTNEWVAR( vr$4, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		DSTEXPR$1 = vr$5;
	}
	label$35:;
	label$34:;
	DTYPE1$1 = *(int64*)((uint8*)DSTEXPR$1 + 8ll) & 511ll;
	{
		uint64 TMP$86$2;
		TMP$86$2 = (uint64)DTYPE1$1;
		goto label$37;
		label$38:;
		{
			if( (IS_RSET$1 & (int64)-(DTYPE1$1 == 18ll)) == 0ll ) goto label$40;
			{
				ERRREPORT( 24ll, 0ll, (uint8*)0ull );
				IS_RSET$1 = 0ll;
			}
			label$40:;
			label$39:;
			struct $8FBSYMBOL* SYM$3;
			SYM$3 = *(struct $8FBSYMBOL**)((uint8*)DSTEXPR$1 + 24ll);
			if( SYM$3 != (struct $8FBSYMBOL*)0ull ) goto label$42;
			{
				if( *(int64*)DSTEXPR$1 != 20ll ) goto label$44;
				{
					struct $8FBSYMBOL* TMP$87$5;
					if( *(struct $7ASTNODE**)((uint8*)DSTEXPR$1 + 112ll) == (struct $7ASTNODE*)0ull ) goto label$45;
					TMP$87$5 = *(struct $8FBSYMBOL**)((uint8*)*(struct $7ASTNODE**)((uint8*)DSTEXPR$1 + 112ll) + 24ll);
					goto label$67;
					label$45:;
					TMP$87$5 = (struct $8FBSYMBOL*)0ull;
					label$67:;
					SYM$3 = TMP$87$5;
				}
				label$44:;
				label$43:;
			}
			label$42:;
			label$41:;
			if( SYM$3 != (struct $8FBSYMBOL*)0ull ) goto label$47;
			{
				ERRREPORT( 14ll, -1ll, (uint8*)0ull );
			}
			goto label$46;
			label$47:;
			{
				if( ((int64)-((*(int64*)((uint8*)SYM$3 + 8ll) & 1048576ll) != 0ll) | (int64)-((*(int64*)((uint8*)DSTEXPR$1 + 8ll) & 512ll) != 0ll)) == 0ll ) goto label$49;
				{
					ERRREPORT( 118ll, -1ll, (uint8*)0ull );
				}
				label$49:;
				label$48:;
			}
			label$46:;
		}
		goto label$36;
		label$50:;
		{
			ERRREPORT( 24ll, 0ll, (uint8*)0ull );
			ASTDELTREE( DSTEXPR$1 );
			struct $8FBSYMBOL* vr$28 = SYMBADDTEMPVAR( 16ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$29 = ASTNEWVAR( vr$28, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			DSTEXPR$1 = vr$29;
		}
		goto label$36;
		label$37:;
		static const void* tmp$89[16ll] = {
			&&label$38,
			&&label$50,
			&&label$50,
			&&label$38,
			&&label$50,
			&&label$50,
			&&label$50,
			&&label$50,
			&&label$50,
			&&label$50,
			&&label$50,
			&&label$50,
			&&label$50,
			&&label$38,
			&&label$38,
			&&label$38,
		};
		if( TMP$86$2 < 3ll ) goto label$50;
		if( TMP$86$2 > 18ll ) goto label$50;
		goto *tmp$89[TMP$86$2 - 3ll];
		label$36:;
	}
	int64 vr$30 = HMATCH( 44ll );
	if( vr$30 != 0ll ) goto label$52;
	{
		int64 vr$32 = CASSIGNTOKEN(  );
		if( vr$32 != 0ll ) goto label$54;
		{
			ERRREPORT( 16ll, 0ll, (uint8*)0ull );
		}
		label$54:;
		label$53:;
	}
	label$52:;
	label$51:;
	struct $7ASTNODE* vr$34 = HMATCHEXPR( DTYPE1$1 );
	SRCEXPR$1 = vr$34;
	if( SRCEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$56;
	{
		goto label$33;
	}
	label$56:;
	label$55:;
	DTYPE2$1 = *(int64*)((uint8*)SRCEXPR$1 + 8ll) & 511ll;
	{
		uint64 TMP$88$2;
		TMP$88$2 = (uint64)DTYPE2$1;
		goto label$58;
		label$59:;
		{
		}
		goto label$57;
		label$60:;
		{
			ERRREPORT( 24ll, 0ll, (uint8*)0ull );
			ASTDELTREE( SRCEXPR$1 );
			struct $8FBSYMBOL* vr$38 = SYMBADDTEMPVAR( 16ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$39 = ASTNEWVAR( vr$38, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			SRCEXPR$1 = vr$39;
		}
		goto label$57;
		label$58:;
		static const void* tmp$90[16ll] = {
			&&label$59,
			&&label$60,
			&&label$60,
			&&label$59,
			&&label$60,
			&&label$60,
			&&label$60,
			&&label$60,
			&&label$60,
			&&label$60,
			&&label$60,
			&&label$60,
			&&label$60,
			&&label$59,
			&&label$59,
			&&label$59,
		};
		if( TMP$88$2 < 3ll ) goto label$60;
		if( TMP$88$2 > 18ll ) goto label$60;
		goto *tmp$90[TMP$88$2 - 3ll];
		label$57:;
	}
	if( ((int64)-(DTYPE1$1 == 18ll) | (int64)-(DTYPE2$1 == 18ll)) == 0ll ) goto label$62;
	{
		if( DTYPE1$1 == DTYPE2$1 ) goto label$64;
		{
			ERRREPORT( 24ll, 0ll, (uint8*)0ull );
			ASTDELTREE( SRCEXPR$1 );
			ASTDELTREE( DSTEXPR$1 );
			fb$result$1 = -1ll;
			goto label$33;
		}
		label$64:;
		label$63:;
		DST$1 = *(struct $8FBSYMBOL**)((uint8*)DSTEXPR$1 + 24ll);
		SRC$1 = *(struct $8FBSYMBOL**)((uint8*)SRCEXPR$1 + 24ll);
		if( ((int64)-(DST$1 == (struct $8FBSYMBOL*)0ull) | (int64)-(SRC$1 == (struct $8FBSYMBOL*)0ull)) == 0ll ) goto label$66;
		{
			ERRREPORT( 14ll, 0ll, (uint8*)0ull );
			ASTDELTREE( SRCEXPR$1 );
			ASTDELTREE( DSTEXPR$1 );
			fb$result$1 = -1ll;
			goto label$33;
		}
		label$66:;
		label$65:;
		int64 vr$55 = RTLMEMCOPYCLEAR( DSTEXPR$1, *(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)DST$1 + 56ll) + 72ll), SRCEXPR$1, *(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)SRC$1 + 56ll) + 72ll) );
		fb$result$1 = vr$55;
	}
	goto label$61;
	label$62:;
	{
		int64 vr$56 = RTLSTRLRSET( DSTEXPR$1, SRCEXPR$1, IS_RSET$1 );
		fb$result$1 = vr$56;
	}
	label$61:;
	label$33:;
	return fb$result$1;
}

struct $7ASTNODE* CCVXFUNCT( $8FB_TOKEN TK$1 )
{
	int64 TMP$104$1;
	int64 TMP$107$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$141:;
	LEXSKIPTOKEN( 0ll );
	$11FB_DATATYPE DTYPE$1;
	DTYPE$1 = 2147483648ll;
	if( (int64)-(TK$1 == 422ll) == 0ll ) goto label$143;
	int64 vr$3 = HMATCH( 301ll );
	TMP$104$1 = (int64)-(vr$3 != 0ll);
	goto label$226;
	label$143:;
	TMP$104$1 = 0ll;
	label$226:;
	if( TMP$104$1 == 0ll ) goto label$145;
	{
		int64 LGT$2;
		struct $7ASTNODE* vr$6 = CGTINPARENSONLYEXPR(  );
		int64 vr$7 = CCONSTINTEXPR( vr$6, 0ll );
		LGT$2 = vr$7;
		if( LGT$2 != 8ll ) goto label$147;
		{
			LGT$2 = 0ll;
			label$147:;
		}
		$11FB_DATATYPE vr$9 = HINTEGERTYPEFROMBITSIZE( LGT$2, 0ll );
		DTYPE$1 = vr$9;
		int64 vr$10 = HMATCH( 300ll );
		if( vr$10 != 0ll ) goto label$149;
		{
			ERRREPORT( 308ll, 0ll, (uint8*)0ull );
		}
		label$149:;
		label$148:;
	}
	label$145:;
	label$144:;
	int64 vr$12 = LEXGETTOKEN( 0ll );
	if( vr$12 == 40ll ) goto label$151;
	{
		ERRREPORT( 6ll, 0ll, (uint8*)0ull );
	}
	goto label$150;
	label$151:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$150:;
	struct $7ASTNODE* EXPR1$1;
	struct $7ASTNODE* vr$14 = HMATCHEXPR( 16ll );
	EXPR1$1 = vr$14;
	if( EXPR1$1 != (struct $7ASTNODE*)0ull ) goto label$153;
	{
		goto label$142;
	}
	label$153:;
	label$152:;
	int64 vr$16 = LEXGETTOKEN( 0ll );
	if( vr$16 == 41ll ) goto label$155;
	{
		ERRREPORT( 7ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
	}
	goto label$154;
	label$155:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$154:;
	struct $8FBSYMBOL* LITSYM$1;
	LITSYM$1 = (struct $8FBSYMBOL*)0ull;
	int64 IS_STR$1;
	IS_STR$1 = 0ll;
	{
		int64 TMP$105$2;
		TMP$105$2 = *(int64*)((uint8*)EXPR1$1 + 8ll) & 511ll;
		if( TMP$105$2 != 3ll ) goto label$157;
		label$158:;
		{
			struct $8FBSYMBOL* vr$21 = ASTGETSTRLITSYMBOL( EXPR1$1 );
			LITSYM$1 = vr$21;
			IS_STR$1 = -1ll;
		}
		goto label$156;
		label$157:;
		if( TMP$105$2 == 16ll ) goto label$160;
		label$161:;
		if( TMP$105$2 == 17ll ) goto label$160;
		label$162:;
		if( TMP$105$2 != 6ll ) goto label$159;
		label$160:;
		{
			IS_STR$1 = -1ll;
		}
		label$159:;
		label$156:;
	}
	int64 ALLOWCONST$1;
	ALLOWCONST$1 = -1ll;
	$11FB_DATATYPE FUNCTYPE$1;
	{
		uint64 TMP$106$2;
		TMP$106$2 = (uint64)TK$1;
		goto label$164;
		label$165:;
		{
			FUNCTYPE$1 = 15ll;
			ALLOWCONST$1 = 0ll;
		}
		goto label$163;
		label$166:;
		{
			FUNCTYPE$1 = 14ll;
			ALLOWCONST$1 = 0ll;
		}
		goto label$163;
		label$167:;
		{
			if( DTYPE$1 == 2147483648ll ) goto label$169;
			{
				FUNCTYPE$1 = DTYPE$1;
			}
			goto label$168;
			label$169:;
			{
				FUNCTYPE$1 = *($11FB_DATATYPE*)((uint8*)&ENV$ + 1160ll);
			}
			label$168:;
		}
		goto label$163;
		label$170:;
		{
			FUNCTYPE$1 = 10ll;
		}
		goto label$163;
		label$171:;
		{
			FUNCTYPE$1 = 4ll;
		}
		goto label$163;
		label$172:;
		{
			FUNCTYPE$1 = 12ll;
		}
		goto label$163;
		label$164:;
		static const void* tmp$123[5ll] = {
			&&label$165,
			&&label$166,
			&&label$167,
			&&label$170,
			&&label$171,
		};
		if( TMP$106$2 < 420ll ) goto label$172;
		if( TMP$106$2 > 424ll ) goto label$172;
		goto *tmp$123[TMP$106$2 - 420ll];
		label$163:;
	}
	uint8* ZS$1;
	int64 ZSLEN$1;
	if( ((int64)-(ALLOWCONST$1 != 0ll) & (int64)-(LITSYM$1 != (struct $8FBSYMBOL*)0ull)) == 0ll ) goto label$174;
	{
		uint8* vr$31 = HUNESCAPE( *(uint8**)((uint8*)LITSYM$1 + 88ll) );
		ZS$1 = vr$31;
		int64 vr$32 = fb_StrLen( (void*)ZS$1, 0ll );
		ZSLEN$1 = vr$32;
	}
	goto label$173;
	label$174:;
	{
		ZS$1 = (uint8*)0ull;
		ZSLEN$1 = 0ll;
	}
	label$173:;
	struct $7ASTNODE* FUNCEXPR$1;
	FUNCEXPR$1 = (struct $7ASTNODE*)0ull;
	if( IS_STR$1 != 0ll ) goto label$175;
	TMP$107$1 = (int64)-((int64)-(FUNCTYPE$1 == 4ll) != 0ll);
	goto label$227;
	label$175:;
	TMP$107$1 = -1ll;
	label$227:;
	if( TMP$107$1 == 0ll ) goto label$177;
	{
		int64 TMP$108$2;
		if( (FUNCTYPE$1 & 480ll) == 0ll ) goto label$178;
		TMP$108$2 = 22ll;
		goto label$228;
		label$178:;
		TMP$108$2 = FUNCTYPE$1 & 31ll;
		label$228:;
		if( ZSLEN$1 < *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$108$2 * 56ll)) + 8ll) ) goto label$180;
		{
			{
				if( FUNCTYPE$1 != 15ll ) goto label$182;
				label$183:;
				{
					FBSTRING* vr$43 = fb_StrAllocTempDescZ( ZS$1 );
					double vr$44 = fb_CVD( vr$43 );
					struct $7ASTNODE* vr$45 = ASTNEWCONSTF( vr$44, 15ll );
					FUNCEXPR$1 = vr$45;
				}
				goto label$181;
				label$182:;
				if( FUNCTYPE$1 != 14ll ) goto label$184;
				label$185:;
				{
					FBSTRING* vr$47 = fb_StrAllocTempDescZ( ZS$1 );
					float vr$48 = fb_CVS( vr$47 );
					struct $7ASTNODE* vr$50 = ASTNEWCONSTF( (double)vr$48, 14ll );
					FUNCEXPR$1 = vr$50;
				}
				goto label$181;
				label$184:;
				{
					{
						int64 TMP$109$6;
						int64 TMP$110$6;
						if( (FUNCTYPE$1 & 480ll) == 0ll ) goto label$187;
						TMP$109$6 = 22ll;
						goto label$229;
						label$187:;
						TMP$109$6 = FUNCTYPE$1 & 31ll;
						label$229:;
						TMP$110$6 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$109$6 * 56ll)) + 8ll);
						if( TMP$110$6 != 2ll ) goto label$189;
						label$190:;
						{
							FBSTRING* vr$56 = fb_StrAllocTempDescZ( ZS$1 );
							int16 vr$57 = fb_CVSHORT( vr$56 );
							struct $7ASTNODE* vr$59 = ASTNEWCONSTI( (int64)vr$57, 4ll, (struct $8FBSYMBOL*)0ull );
							FUNCEXPR$1 = vr$59;
						}
						goto label$188;
						label$189:;
						if( TMP$110$6 != 4ll ) goto label$191;
						label$192:;
						{
							FBSTRING* vr$61 = fb_StrAllocTempDescZ( ZS$1 );
							int32 vr$62 = fb_CVL( vr$61 );
							struct $7ASTNODE* vr$64 = ASTNEWCONSTI( (int64)vr$62, FUNCTYPE$1, (struct $8FBSYMBOL*)0ull );
							FUNCEXPR$1 = vr$64;
						}
						goto label$188;
						label$191:;
						{
							FBSTRING* vr$65 = fb_StrAllocTempDescZ( ZS$1 );
							int64 vr$66 = fb_CVLONGINT( vr$65 );
							struct $7ASTNODE* vr$67 = ASTNEWCONSTI( vr$66, FUNCTYPE$1, (struct $8FBSYMBOL*)0ull );
							FUNCEXPR$1 = vr$67;
						}
						label$193:;
						label$188:;
					}
				}
				label$186:;
				label$181:;
			}
			ASTDELNODE( EXPR1$1 );
		}
		goto label$179;
		label$180:;
		{
			{
				if( FUNCTYPE$1 != 15ll ) goto label$195;
				label$196:;
				{
					struct $8FBSYMBOL* vr$69 = RTLPROCLOOKUP( (uint8*)"fb_CVD", 35ll );
					struct $7ASTNODE* vr$70 = ASTNEWCALL( vr$69, (struct $7ASTNODE*)0ull );
					FUNCEXPR$1 = vr$70;
				}
				goto label$194;
				label$195:;
				if( FUNCTYPE$1 != 14ll ) goto label$197;
				label$198:;
				{
					struct $8FBSYMBOL* vr$72 = RTLPROCLOOKUP( (uint8*)"fb_CVS", 36ll );
					struct $7ASTNODE* vr$73 = ASTNEWCALL( vr$72, (struct $7ASTNODE*)0ull );
					FUNCEXPR$1 = vr$73;
				}
				goto label$194;
				label$197:;
				{
					{
						int64 TMP$113$6;
						int64 TMP$114$6;
						if( (FUNCTYPE$1 & 480ll) == 0ll ) goto label$200;
						TMP$113$6 = 22ll;
						goto label$230;
						label$200:;
						TMP$113$6 = FUNCTYPE$1 & 31ll;
						label$230:;
						TMP$114$6 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$113$6 * 56ll)) + 8ll);
						if( TMP$114$6 != 2ll ) goto label$202;
						label$203:;
						{
							struct $8FBSYMBOL* vr$79 = RTLPROCLOOKUP( (uint8*)"fb_CVSHORT", 38ll );
							struct $7ASTNODE* vr$80 = ASTNEWCALL( vr$79, (struct $7ASTNODE*)0ull );
							FUNCEXPR$1 = vr$80;
						}
						goto label$201;
						label$202:;
						if( TMP$114$6 != 4ll ) goto label$204;
						label$205:;
						{
							struct $8FBSYMBOL* vr$82 = RTLPROCLOOKUP( (uint8*)"fb_CVL", 37ll );
							struct $7ASTNODE* vr$83 = ASTNEWCALL( vr$82, (struct $7ASTNODE*)0ull );
							FUNCEXPR$1 = vr$83;
						}
						goto label$201;
						label$204:;
						{
							struct $8FBSYMBOL* vr$84 = RTLPROCLOOKUP( (uint8*)"fb_CVLONGINT", 39ll );
							struct $7ASTNODE* vr$85 = ASTNEWCALL( vr$84, (struct $7ASTNODE*)0ull );
							FUNCEXPR$1 = vr$85;
						}
						label$206:;
						label$201:;
					}
				}
				label$199:;
				label$194:;
			}
			struct $7ASTNODE* vr$86 = ASTNEWARG( FUNCEXPR$1, EXPR1$1, 2147483648ll, -1ll );
			if( vr$86 != (struct $7ASTNODE*)0ull ) goto label$208;
			{
				FUNCEXPR$1 = (struct $7ASTNODE*)0ull;
			}
			label$208:;
			label$207:;
		}
		label$179:;
	}
	goto label$176;
	label$177:;
	{
		{
			if( FUNCTYPE$1 != 15ll ) goto label$210;
			label$211:;
			{
				struct $8FBSYMBOL* vr$89 = RTLPROCLOOKUP( (uint8*)"fb_CVDFROMLONGINT", 40ll );
				struct $7ASTNODE* vr$90 = ASTNEWCALL( vr$89, (struct $7ASTNODE*)0ull );
				FUNCEXPR$1 = vr$90;
			}
			goto label$209;
			label$210:;
			if( FUNCTYPE$1 != 14ll ) goto label$212;
			label$213:;
			{
				struct $8FBSYMBOL* vr$92 = RTLPROCLOOKUP( (uint8*)"fb_CVSFROML", 41ll );
				struct $7ASTNODE* vr$93 = ASTNEWCALL( vr$92, (struct $7ASTNODE*)0ull );
				FUNCEXPR$1 = vr$93;
			}
			goto label$209;
			label$212:;
			{
				int64 TMP$120$4;
				if( (FUNCTYPE$1 & 480ll) == 0ll ) goto label$215;
				TMP$120$4 = 22ll;
				goto label$231;
				label$215:;
				TMP$120$4 = FUNCTYPE$1 & 31ll;
				label$231:;
				if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$120$4 * 56ll)) + 8ll) != 4ll ) goto label$217;
				{
					struct $8FBSYMBOL* vr$99 = RTLPROCLOOKUP( (uint8*)"fb_CVLFROMS", 42ll );
					struct $7ASTNODE* vr$100 = ASTNEWCALL( vr$99, (struct $7ASTNODE*)0ull );
					FUNCEXPR$1 = vr$100;
				}
				goto label$216;
				label$217:;
				{
					struct $8FBSYMBOL* vr$101 = RTLPROCLOOKUP( (uint8*)"fb_CVLONGINTFROMD", 43ll );
					struct $7ASTNODE* vr$102 = ASTNEWCALL( vr$101, (struct $7ASTNODE*)0ull );
					FUNCEXPR$1 = vr$102;
				}
				label$216:;
			}
			label$214:;
			label$209:;
		}
		if( FUNCEXPR$1 == (struct $7ASTNODE*)0ull ) goto label$219;
		{
			struct $7ASTNODE* vr$104 = ASTNEWARG( FUNCEXPR$1, EXPR1$1, 2147483648ll, -1ll );
			if( vr$104 != (struct $7ASTNODE*)0ull ) goto label$221;
			{
				FUNCEXPR$1 = (struct $7ASTNODE*)0ull;
			}
			label$221:;
			label$220:;
		}
		label$219:;
		label$218:;
	}
	label$176:;
	if( FUNCEXPR$1 == (struct $7ASTNODE*)0ull ) goto label$223;
	{
		struct $7ASTNODE* vr$107 = ASTNEWCONV( FUNCTYPE$1, (struct $8FBSYMBOL*)0ull, FUNCEXPR$1, 0ll, (int64*)0ull );
		FUNCEXPR$1 = vr$107;
	}
	label$223:;
	label$222:;
	if( FUNCEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$225;
	{
		ERRREPORT( 24ll, 0ll, (uint8*)0ull );
	}
	label$225:;
	label$224:;
	fb$result$1 = FUNCEXPR$1;
	label$142:;
	return fb$result$1;
}

struct $7ASTNODE* CMKXFUNCT( $8FB_TOKEN TK$1 )
{
	int64 TMP$124$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$232:;
	LEXSKIPTOKEN( 0ll );
	$11FB_DATATYPE DTYPE$1;
	DTYPE$1 = 2147483648ll;
	if( (int64)-(TK$1 == 428ll) == 0ll ) goto label$234;
	int64 vr$3 = HMATCH( 301ll );
	TMP$124$1 = (int64)-(vr$3 != 0ll);
	goto label$273;
	label$234:;
	TMP$124$1 = 0ll;
	label$273:;
	if( TMP$124$1 == 0ll ) goto label$236;
	{
		int64 LGT$2;
		struct $7ASTNODE* vr$6 = CGTINPARENSONLYEXPR(  );
		int64 vr$7 = CCONSTINTEXPR( vr$6, 0ll );
		LGT$2 = vr$7;
		if( LGT$2 != 8ll ) goto label$238;
		{
			LGT$2 = 0ll;
			label$238:;
		}
		$11FB_DATATYPE vr$9 = HINTEGERTYPEFROMBITSIZE( LGT$2, 0ll );
		DTYPE$1 = vr$9;
		int64 vr$10 = HMATCH( 300ll );
		if( vr$10 != 0ll ) goto label$240;
		{
			ERRREPORT( 308ll, 0ll, (uint8*)0ull );
		}
		label$240:;
		label$239:;
	}
	label$236:;
	label$235:;
	int64 vr$12 = LEXGETTOKEN( 0ll );
	if( vr$12 == 40ll ) goto label$242;
	{
		ERRREPORT( 6ll, 0ll, (uint8*)0ull );
	}
	goto label$241;
	label$242:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$241:;
	struct $7ASTNODE* EXPR1$1;
	struct $7ASTNODE* vr$14 = HMATCHEXPR( 16ll );
	EXPR1$1 = vr$14;
	if( EXPR1$1 != (struct $7ASTNODE*)0ull ) goto label$244;
	{
		goto label$233;
	}
	label$244:;
	label$243:;
	int64 vr$16 = LEXGETTOKEN( 0ll );
	if( vr$16 == 41ll ) goto label$246;
	{
		ERRREPORT( 7ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
	}
	goto label$245;
	label$246:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$245:;
	struct $7ASTNODE* FUNCEXPR$1;
	FUNCEXPR$1 = (struct $7ASTNODE*)0ull;
	if( EXPR1$1 == (struct $7ASTNODE*)0ull ) goto label$248;
	{
		{
			uint64 TMP$125$3;
			TMP$125$3 = (uint64)TK$1;
			goto label$250;
			label$251:;
			{
				struct $8FBSYMBOL* vr$19 = RTLPROCLOOKUP( (uint8*)"fb_MKD", 29ll );
				struct $7ASTNODE* vr$20 = ASTNEWCALL( vr$19, (struct $7ASTNODE*)0ull );
				FUNCEXPR$1 = vr$20;
			}
			goto label$249;
			label$252:;
			{
				struct $8FBSYMBOL* vr$21 = RTLPROCLOOKUP( (uint8*)"fb_MKS", 30ll );
				struct $7ASTNODE* vr$22 = ASTNEWCALL( vr$21, (struct $7ASTNODE*)0ull );
				FUNCEXPR$1 = vr$22;
			}
			goto label$249;
			label$253:;
			{
				if( DTYPE$1 != 2147483648ll ) goto label$255;
				{
					DTYPE$1 = *($11FB_DATATYPE*)((uint8*)&ENV$ + 1160ll);
				}
				label$255:;
				label$254:;
				if( (DTYPE$1 & 511ll) != 7ll ) goto label$257;
				{
					struct $8FBSYMBOL* vr$26 = RTLPROCLOOKUP( (uint8*)"fb_MKI", 31ll );
					struct $7ASTNODE* vr$27 = ASTNEWCALL( vr$26, (struct $7ASTNODE*)0ull );
					FUNCEXPR$1 = vr$27;
				}
				goto label$256;
				label$257:;
				{
					{
						int64 TMP$129$6;
						int64 TMP$130$6;
						if( (DTYPE$1 & 480ll) == 0ll ) goto label$258;
						TMP$129$6 = 22ll;
						goto label$274;
						label$258:;
						TMP$129$6 = DTYPE$1 & 31ll;
						label$274:;
						TMP$130$6 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$129$6 * 56ll)) + 40ll);
						if( TMP$130$6 != 2ll ) goto label$260;
						label$261:;
						{
							struct $8FBSYMBOL* vr$33 = RTLPROCLOOKUP( (uint8*)"fb_MKSHORT", 33ll );
							struct $7ASTNODE* vr$34 = ASTNEWCALL( vr$33, (struct $7ASTNODE*)0ull );
							FUNCEXPR$1 = vr$34;
						}
						goto label$259;
						label$260:;
						if( TMP$130$6 != 4ll ) goto label$262;
						label$263:;
						{
							struct $8FBSYMBOL* vr$36 = RTLPROCLOOKUP( (uint8*)"fb_MKL", 32ll );
							struct $7ASTNODE* vr$37 = ASTNEWCALL( vr$36, (struct $7ASTNODE*)0ull );
							FUNCEXPR$1 = vr$37;
						}
						goto label$259;
						label$262:;
						if( TMP$130$6 != 6ll ) goto label$264;
						label$265:;
						{
							struct $8FBSYMBOL* vr$39 = RTLPROCLOOKUP( (uint8*)"fb_MKLONGINT", 34ll );
							struct $7ASTNODE* vr$40 = ASTNEWCALL( vr$39, (struct $7ASTNODE*)0ull );
							FUNCEXPR$1 = vr$40;
						}
						label$264:;
						label$259:;
					}
				}
				label$256:;
			}
			goto label$249;
			label$266:;
			{
				struct $8FBSYMBOL* vr$41 = RTLPROCLOOKUP( (uint8*)"fb_MKL", 32ll );
				struct $7ASTNODE* vr$42 = ASTNEWCALL( vr$41, (struct $7ASTNODE*)0ull );
				FUNCEXPR$1 = vr$42;
			}
			goto label$249;
			label$267:;
			{
				struct $8FBSYMBOL* vr$43 = RTLPROCLOOKUP( (uint8*)"fb_MKSHORT", 33ll );
				struct $7ASTNODE* vr$44 = ASTNEWCALL( vr$43, (struct $7ASTNODE*)0ull );
				FUNCEXPR$1 = vr$44;
			}
			goto label$249;
			label$268:;
			{
				struct $8FBSYMBOL* vr$45 = RTLPROCLOOKUP( (uint8*)"fb_MKLONGINT", 34ll );
				struct $7ASTNODE* vr$46 = ASTNEWCALL( vr$45, (struct $7ASTNODE*)0ull );
				FUNCEXPR$1 = vr$46;
			}
			goto label$249;
			label$250:;
			static const void* tmp$134[5ll] = {
				&&label$251,
				&&label$252,
				&&label$253,
				&&label$266,
				&&label$267,
			};
			if( TMP$125$3 < 426ll ) goto label$268;
			if( TMP$125$3 > 430ll ) goto label$268;
			goto *tmp$134[TMP$125$3 - 426ll];
			label$249:;
		}
		struct $7ASTNODE* vr$47 = ASTNEWARG( FUNCEXPR$1, EXPR1$1, 2147483648ll, -1ll );
		if( vr$47 != (struct $7ASTNODE*)0ull ) goto label$270;
		{
			FUNCEXPR$1 = (struct $7ASTNODE*)0ull;
		}
		label$270:;
		label$269:;
	}
	label$248:;
	label$247:;
	if( FUNCEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$272;
	{
		ERRREPORT( 24ll, 0ll, (uint8*)0ull );
	}
	label$272:;
	label$271:;
	fb$result$1 = FUNCEXPR$1;
	label$233:;
	return fb$result$1;
}

struct $7ASTNODE* CSTRINGFUNCT( $8FB_TOKEN TK$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$275:;
	struct $7ASTNODE* EXPR1$1;
	struct $7ASTNODE* EXPR2$1;
	struct $7ASTNODE* EXPR3$1;
	int64 DCLASS$1;
	int64 DTYPE$1;
	int64 IS_ANY$1;
	int64 IS_WSTR$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	{
		if( TK$1 == 419ll ) goto label$279;
		label$280:;
		if( TK$1 != 432ll ) goto label$278;
		label$279:;
		{
			IS_WSTR$1 = (int64)-(TK$1 == 432ll);
			LEXSKIPTOKEN( 0ll );
			int64 vr$4 = LEXGETTOKEN( 0ll );
			if( vr$4 == 40ll ) goto label$282;
			{
				ERRREPORT( 6ll, 0ll, (uint8*)0ull );
			}
			goto label$281;
			label$282:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$281:;
			struct $7ASTNODE* vr$6 = HMATCHEXPR( 7ll );
			EXPR1$1 = vr$6;
			if( EXPR1$1 != (struct $7ASTNODE*)0ull ) goto label$284;
			{
				goto label$276;
			}
			label$284:;
			label$283:;
			int64 vr$8 = LEXGETTOKEN( 0ll );
			if( vr$8 == 41ll ) goto label$286;
			{
				ERRREPORT( 7ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
			}
			goto label$285;
			label$286:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$285:;
			if( IS_WSTR$1 != 0ll ) goto label$288;
			{
				struct $7ASTNODE* vr$12 = RTLTOSTR( EXPR1$1, (int64)-(*(int64*)((uint8*)&ENV$ + 272ll) == 3ll) );
				EXPR1$1 = vr$12;
			}
			goto label$287;
			label$288:;
			{
				struct $7ASTNODE* vr$13 = RTLTOWSTR( EXPR1$1 );
				EXPR1$1 = vr$13;
			}
			label$287:;
			if( EXPR1$1 != (struct $7ASTNODE*)0ull ) goto label$290;
			{
				ERRREPORT( 24ll, 0ll, (uint8*)0ull );
				struct $7ASTNODE* vr$15 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				EXPR1$1 = vr$15;
			}
			label$290:;
			label$289:;
			fb$result$1 = EXPR1$1;
		}
		goto label$277;
		label$278:;
		if( TK$1 != 433ll ) goto label$291;
		label$292:;
		{
			LEXSKIPTOKEN( 0ll );
			int64 vr$17 = LEXGETTOKEN( 0ll );
			if( vr$17 == 40ll ) goto label$294;
			{
				ERRREPORT( 6ll, 0ll, (uint8*)0ull );
			}
			goto label$293;
			label$294:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$293:;
			struct $7ASTNODE* vr$19 = HMATCHEXPR( 16ll );
			EXPR1$1 = vr$19;
			if( EXPR1$1 != (struct $7ASTNODE*)0ull ) goto label$296;
			{
				goto label$276;
			}
			label$296:;
			label$295:;
			int64 vr$21 = LEXGETTOKEN( 0ll );
			if( vr$21 == 44ll ) goto label$298;
			{
				ERRREPORT( 16ll, 0ll, (uint8*)0ull );
			}
			goto label$297;
			label$298:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$297:;
			struct $7ASTNODE* vr$23 = HMATCHEXPR( 7ll );
			EXPR2$1 = vr$23;
			if( EXPR2$1 != (struct $7ASTNODE*)0ull ) goto label$300;
			{
				goto label$276;
			}
			label$300:;
			label$299:;
			int64 vr$25 = HMATCH( 44ll );
			if( vr$25 == 0ll ) goto label$302;
			{
				struct $7ASTNODE* vr$27 = HMATCHEXPR( 7ll );
				EXPR3$1 = vr$27;
				if( EXPR3$1 != (struct $7ASTNODE*)0ull ) goto label$304;
				{
					goto label$276;
				}
				label$304:;
				label$303:;
			}
			goto label$301;
			label$302:;
			{
				struct $7ASTNODE* vr$29 = ASTNEWCONSTI( -1ll, 7ll, (struct $8FBSYMBOL*)0ull );
				EXPR3$1 = vr$29;
			}
			label$301:;
			int64 vr$30 = LEXGETTOKEN( 0ll );
			if( vr$30 == 41ll ) goto label$306;
			{
				ERRREPORT( 7ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
			}
			goto label$305;
			label$306:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$305:;
			struct $7ASTNODE* vr$32 = RTLSTRMID( EXPR1$1, EXPR2$1, EXPR3$1 );
			EXPR1$1 = vr$32;
			if( EXPR1$1 != (struct $7ASTNODE*)0ull ) goto label$308;
			{
				ERRREPORT( 24ll, 0ll, (uint8*)0ull );
				struct $7ASTNODE* vr$34 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				EXPR1$1 = vr$34;
			}
			label$308:;
			label$307:;
			fb$result$1 = EXPR1$1;
		}
		goto label$277;
		label$291:;
		if( TK$1 == 368ll ) goto label$310;
		label$311:;
		if( TK$1 != 370ll ) goto label$309;
		label$310:;
		{
			IS_WSTR$1 = (int64)-(TK$1 == 370ll);
			LEXSKIPTOKEN( 0ll );
			int64 vr$38 = LEXGETTOKEN( 0ll );
			if( vr$38 == 40ll ) goto label$313;
			{
				ERRREPORT( 6ll, 0ll, (uint8*)0ull );
			}
			goto label$312;
			label$313:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$312:;
			struct $7ASTNODE* vr$40 = HMATCHEXPR( 7ll );
			EXPR1$1 = vr$40;
			if( EXPR1$1 != (struct $7ASTNODE*)0ull ) goto label$315;
			{
				goto label$276;
			}
			label$315:;
			label$314:;
			int64 vr$42 = LEXGETTOKEN( 0ll );
			if( vr$42 == 44ll ) goto label$317;
			{
				ERRREPORT( 16ll, 0ll, (uint8*)0ull );
			}
			goto label$316;
			label$317:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$316:;
			struct $7ASTNODE* vr$44 = HMATCHEXPR( 7ll );
			EXPR2$1 = vr$44;
			if( EXPR2$1 != (struct $7ASTNODE*)0ull ) goto label$319;
			{
				goto label$276;
			}
			label$319:;
			label$318:;
			int64 vr$46 = LEXGETTOKEN( 0ll );
			if( vr$46 == 41ll ) goto label$321;
			{
				ERRREPORT( 7ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
			}
			goto label$320;
			label$321:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$320:;
			if( IS_WSTR$1 != 0ll ) goto label$323;
			{
				struct $7ASTNODE* vr$49 = RTLSTRFILL( EXPR1$1, EXPR2$1 );
				EXPR1$1 = vr$49;
			}
			goto label$322;
			label$323:;
			{
				struct $7ASTNODE* vr$50 = RTLWSTRFILL( EXPR1$1, EXPR2$1 );
				EXPR1$1 = vr$50;
			}
			label$322:;
			if( EXPR1$1 != (struct $7ASTNODE*)0ull ) goto label$325;
			{
				ERRREPORT( 24ll, 0ll, (uint8*)0ull );
				struct $7ASTNODE* vr$52 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				EXPR1$1 = vr$52;
			}
			label$325:;
			label$324:;
			fb$result$1 = EXPR1$1;
		}
		goto label$277;
		label$309:;
		if( TK$1 == 417ll ) goto label$327;
		label$328:;
		if( TK$1 != 418ll ) goto label$326;
		label$327:;
		{
			IS_WSTR$1 = (int64)-(TK$1 == 418ll);
			LEXSKIPTOKEN( 0ll );
			struct $7ASTNODE* vr$56 = CSTRCHR( IS_WSTR$1 );
			fb$result$1 = vr$56;
		}
		goto label$277;
		label$326:;
		if( TK$1 != 416ll ) goto label$329;
		label$330:;
		{
			LEXSKIPTOKEN( 0ll );
			struct $7ASTNODE* vr$58 = CSTRASC(  );
			fb$result$1 = vr$58;
		}
		goto label$277;
		label$329:;
		if( TK$1 != 434ll ) goto label$331;
		label$332:;
		{
			LEXSKIPTOKEN( 0ll );
			int64 vr$60 = LEXGETTOKEN( 0ll );
			if( vr$60 == 40ll ) goto label$334;
			{
				ERRREPORT( 6ll, 0ll, (uint8*)0ull );
			}
			goto label$333;
			label$334:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$333:;
			struct $7ASTNODE* vr$62 = HMATCHEXPR( 7ll );
			EXPR1$1 = vr$62;
			if( EXPR1$1 != (struct $7ASTNODE*)0ull ) goto label$336;
			{
				goto label$276;
			}
			label$336:;
			label$335:;
			int64 vr$64 = LEXGETTOKEN( 0ll );
			if( vr$64 == 44ll ) goto label$338;
			{
				ERRREPORT( 16ll, 0ll, (uint8*)0ull );
			}
			goto label$337;
			label$338:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$337:;
			int64 vr$66 = HMATCH( 371ll );
			IS_ANY$1 = vr$66;
			struct $7ASTNODE* vr$67 = HMATCHEXPR( 16ll );
			EXPR2$1 = vr$67;
			if( EXPR2$1 != (struct $7ASTNODE*)0ull ) goto label$340;
			{
				goto label$276;
			}
			label$340:;
			label$339:;
			EXPR3$1 = (struct $7ASTNODE*)0ull;
			if( IS_ANY$1 != 0ll ) goto label$342;
			{
				int64 vr$70 = HMATCH( 44ll );
				if( vr$70 == 0ll ) goto label$344;
				{
					int64 vr$72 = HMATCH( 371ll );
					IS_ANY$1 = vr$72;
					struct $7ASTNODE* vr$73 = HMATCHEXPR( 16ll );
					EXPR3$1 = vr$73;
					if( EXPR3$1 != (struct $7ASTNODE*)0ull ) goto label$346;
					{
						goto label$276;
					}
					label$346:;
					label$345:;
				}
				label$344:;
				label$343:;
			}
			label$342:;
			label$341:;
			if( EXPR3$1 != (struct $7ASTNODE*)0ull ) goto label$348;
			{
				EXPR3$1 = EXPR2$1;
				EXPR2$1 = EXPR1$1;
				struct $7ASTNODE* vr$76 = ASTNEWCONSTI( 1ll, 7ll, (struct $8FBSYMBOL*)0ull );
				EXPR1$1 = vr$76;
			}
			label$348:;
			label$347:;
			int64 vr$77 = LEXGETTOKEN( 0ll );
			if( vr$77 == 41ll ) goto label$350;
			{
				ERRREPORT( 7ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
			}
			goto label$349;
			label$350:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$349:;
			struct $7ASTNODE* vr$79 = RTLSTRINSTR( EXPR1$1, EXPR2$1, EXPR3$1, IS_ANY$1 );
			EXPR1$1 = vr$79;
			if( EXPR1$1 != (struct $7ASTNODE*)0ull ) goto label$352;
			{
				ERRREPORT( 24ll, 0ll, (uint8*)0ull );
				struct $7ASTNODE* vr$81 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				EXPR1$1 = vr$81;
			}
			label$352:;
			label$351:;
			fb$result$1 = EXPR1$1;
		}
		goto label$277;
		label$331:;
		if( TK$1 != 435ll ) goto label$353;
		label$354:;
		{
			LEXSKIPTOKEN( 0ll );
			int64 vr$83 = LEXGETTOKEN( 0ll );
			if( vr$83 == 40ll ) goto label$356;
			{
				ERRREPORT( 6ll, 0ll, (uint8*)0ull );
			}
			goto label$355;
			label$356:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$355:;
			struct $7ASTNODE* vr$85 = HMATCHEXPR( 16ll );
			EXPR1$1 = vr$85;
			if( EXPR1$1 != (struct $7ASTNODE*)0ull ) goto label$358;
			{
				goto label$276;
			}
			label$358:;
			label$357:;
			int64 vr$87 = LEXGETTOKEN( 0ll );
			if( vr$87 == 44ll ) goto label$360;
			{
				ERRREPORT( 16ll, 0ll, (uint8*)0ull );
			}
			goto label$359;
			label$360:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$359:;
			int64 vr$89 = HMATCH( 371ll );
			IS_ANY$1 = vr$89;
			struct $7ASTNODE* vr$90 = HMATCHEXPR( 16ll );
			EXPR2$1 = vr$90;
			if( EXPR2$1 != (struct $7ASTNODE*)0ull ) goto label$362;
			{
				goto label$276;
			}
			label$362:;
			label$361:;
			int64 vr$92 = HMATCH( 44ll );
			if( vr$92 == 0ll ) goto label$364;
			{
				struct $7ASTNODE* vr$94 = HMATCHEXPR( 7ll );
				EXPR3$1 = vr$94;
				if( EXPR3$1 != (struct $7ASTNODE*)0ull ) goto label$366;
				{
					goto label$276;
				}
				label$366:;
				label$365:;
			}
			goto label$363;
			label$364:;
			{
				struct $7ASTNODE* vr$96 = ASTNEWCONSTI( -1ll, 7ll, (struct $8FBSYMBOL*)0ull );
				EXPR3$1 = vr$96;
			}
			label$363:;
			int64 vr$97 = LEXGETTOKEN( 0ll );
			if( vr$97 == 41ll ) goto label$368;
			{
				ERRREPORT( 7ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
			}
			goto label$367;
			label$368:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$367:;
			struct $7ASTNODE* vr$99 = RTLSTRINSTRREV( EXPR3$1, EXPR1$1, EXPR2$1, IS_ANY$1 );
			EXPR1$1 = vr$99;
			if( EXPR1$1 != (struct $7ASTNODE*)0ull ) goto label$370;
			{
				ERRREPORT( 24ll, 0ll, (uint8*)0ull );
				struct $7ASTNODE* vr$101 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				EXPR1$1 = vr$101;
			}
			label$370:;
			label$369:;
			fb$result$1 = EXPR1$1;
		}
		goto label$277;
		label$353:;
		if( TK$1 == 436ll ) goto label$372;
		label$373:;
		if( TK$1 == 438ll ) goto label$372;
		label$374:;
		if( TK$1 != 437ll ) goto label$371;
		label$372:;
		{
			LEXSKIPTOKEN( 0ll );
			int64 vr$105 = LEXGETTOKEN( 0ll );
			if( vr$105 == 40ll ) goto label$376;
			{
				ERRREPORT( 6ll, 0ll, (uint8*)0ull );
			}
			goto label$375;
			label$376:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$375:;
			struct $7ASTNODE* vr$107 = HMATCHEXPR( 16ll );
			EXPR1$1 = vr$107;
			if( EXPR1$1 != (struct $7ASTNODE*)0ull ) goto label$378;
			{
				goto label$276;
			}
			label$378:;
			label$377:;
			int64 vr$109 = HMATCH( 44ll );
			if( vr$109 == 0ll ) goto label$380;
			{
				int64 vr$111 = HMATCH( 371ll );
				IS_ANY$1 = vr$111;
				struct $7ASTNODE* vr$112 = HMATCHEXPR( 16ll );
				EXPR2$1 = vr$112;
				if( EXPR2$1 != (struct $7ASTNODE*)0ull ) goto label$382;
				{
					goto label$276;
				}
				label$382:;
				label$381:;
			}
			goto label$379;
			label$380:;
			{
				IS_ANY$1 = 0ll;
				EXPR2$1 = (struct $7ASTNODE*)0ull;
			}
			label$379:;
			int64 vr$114 = LEXGETTOKEN( 0ll );
			if( vr$114 == 41ll ) goto label$384;
			{
				ERRREPORT( 7ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
			}
			goto label$383;
			label$384:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$383:;
			{
				if( TK$1 != 436ll ) goto label$386;
				label$387:;
				{
					struct $7ASTNODE* vr$117 = RTLSTRTRIM( EXPR1$1, EXPR2$1, IS_ANY$1 );
					EXPR1$1 = vr$117;
				}
				goto label$385;
				label$386:;
				if( TK$1 != 438ll ) goto label$388;
				label$389:;
				{
					struct $7ASTNODE* vr$119 = RTLSTRLTRIM( EXPR1$1, EXPR2$1, IS_ANY$1 );
					EXPR1$1 = vr$119;
				}
				goto label$385;
				label$388:;
				if( TK$1 != 437ll ) goto label$390;
				label$391:;
				{
					struct $7ASTNODE* vr$121 = RTLSTRRTRIM( EXPR1$1, EXPR2$1, IS_ANY$1 );
					EXPR1$1 = vr$121;
				}
				label$390:;
				label$385:;
			}
			if( EXPR1$1 != (struct $7ASTNODE*)0ull ) goto label$393;
			{
				ERRREPORT( 24ll, 0ll, (uint8*)0ull );
				struct $7ASTNODE* vr$123 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				EXPR1$1 = vr$123;
			}
			label$393:;
			label$392:;
			fb$result$1 = EXPR1$1;
		}
		goto label$277;
		label$371:;
		if( TK$1 == 439ll ) goto label$395;
		label$396:;
		if( TK$1 != 440ll ) goto label$394;
		label$395:;
		{
			LEXSKIPTOKEN( 0ll );
			int64 vr$126 = LEXGETTOKEN( 0ll );
			if( vr$126 == 40ll ) goto label$398;
			{
				ERRREPORT( 6ll, 0ll, (uint8*)0ull );
			}
			goto label$397;
			label$398:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$397:;
			struct $7ASTNODE* vr$128 = HMATCHEXPR( 16ll );
			EXPR1$1 = vr$128;
			if( EXPR1$1 != (struct $7ASTNODE*)0ull ) goto label$400;
			{
				goto label$276;
			}
			label$400:;
			label$399:;
			int64 vr$130 = HMATCH( 44ll );
			if( vr$130 == 0ll ) goto label$402;
			{
				struct $7ASTNODE* vr$132 = HMATCHEXPR( 7ll );
				EXPR2$1 = vr$132;
				if( EXPR2$1 != (struct $7ASTNODE*)0ull ) goto label$404;
				{
					goto label$276;
				}
				label$404:;
				label$403:;
			}
			goto label$401;
			label$402:;
			{
				EXPR2$1 = (struct $7ASTNODE*)0ull;
			}
			label$401:;
			int64 vr$134 = LEXGETTOKEN( 0ll );
			if( vr$134 == 41ll ) goto label$406;
			{
				ERRREPORT( 7ll, 0ll, (uint8*)0ull );
				HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
			}
			goto label$405;
			label$406:;
			{
				LEXSKIPTOKEN( 0ll );
			}
			label$405:;
			struct $7ASTNODE* vr$137 = RTLSTRCASE( EXPR1$1, EXPR2$1, (int64)-(TK$1 == 439ll) );
			fb$result$1 = vr$137;
		}
		label$394:;
		label$277:;
	}
	label$276:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__parserzquirkzstring( void )
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

static struct $7ASTNODE* CSTRCHR( int64 IS_WSTR$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$68:;
	static uint8 ZS$1[193];
	static uint32 WS$1[193];
	static uint8 O$1[9];
	int64 V$1;
	int64 I$1;
	int64 CNT$1;
	int64 ISCONST$1;
	struct $7ASTNODE* EXPRTB$1[32];
	struct $8FBARRAY1IP7ASTNODEE {
		struct $7ASTNODE** DATA;
		struct $7ASTNODE** PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1IP7ASTNODEE ) == 64 );
	struct $8FBARRAY1IP7ASTNODEE tmp$91$1;
	*(struct $7ASTNODE***)&tmp$91$1 = (struct $7ASTNODE**)EXPRTB$1;
	*(struct $7ASTNODE***)((uint8*)&tmp$91$1 + 8ll) = (struct $7ASTNODE**)EXPRTB$1;
	*(int64*)((uint8*)&tmp$91$1 + 16ll) = 256ll;
	*(int64*)((uint8*)&tmp$91$1 + 24ll) = 8ll;
	*(int64*)((uint8*)&tmp$91$1 + 32ll) = 1ll;
	*(int64*)((uint8*)&tmp$91$1 + 40ll) = 32ll;
	*(int64*)((uint8*)&tmp$91$1 + 48ll) = 0ll;
	*(int64*)((uint8*)&tmp$91$1 + 56ll) = 31ll;
	int64 vr$17 = LEXGETTOKEN( 0ll );
	if( vr$17 == 40ll ) goto label$71;
	{
		ERRREPORT( 6ll, 0ll, (uint8*)0ull );
	}
	goto label$70;
	label$71:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$70:;
	CNT$1 = 0ll;
	label$72:;
	{
		struct $7ASTNODE* vr$19 = HMATCHEXPR( 7ll );
		*(struct $7ASTNODE**)((uint8*)EXPRTB$1 + (CNT$1 << 3ll)) = vr$19;
		if( *(struct $7ASTNODE**)((uint8*)EXPRTB$1 + (CNT$1 << 3ll)) != (struct $7ASTNODE*)0ull ) goto label$76;
		{
			goto label$69;
		}
		label$76:;
		label$75:;
		CNT$1 = CNT$1 + 1ll;
		if( CNT$1 < 32ll ) goto label$78;
		{
			goto label$73;
		}
		label$78:;
		label$77:;
	}
	label$74:;
	int64 vr$25 = HMATCH( 44ll );
	if( vr$25 != 0ll ) goto label$72;
	label$73:;
	int64 vr$27 = LEXGETTOKEN( 0ll );
	if( vr$27 == 41ll ) goto label$80;
	{
		ERRREPORT( 7ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
	}
	goto label$79;
	label$80:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$79:;
	if( (IS_WSTR$1 & (int64)-(*(int64*)((uint8*)&ENV$ + 456ll) == 0ll)) == 0ll ) goto label$82;
	{
		ISCONST$1 = 0ll;
	}
	goto label$81;
	label$82:;
	{
		ISCONST$1 = -1ll;
		{
			I$1 = 0ll;
			int64 TMP$92$3;
			TMP$92$3 = CNT$1 + -1ll;
			goto label$83;
			label$86:;
			{
				if( (int64)-(*(int64*)*(struct $7ASTNODE**)((uint8*)EXPRTB$1 + (I$1 << 3ll)) == 16ll) != 0ll ) goto label$88;
				{
					ISCONST$1 = 0ll;
					goto label$85;
				}
				label$88:;
				label$87:;
				int64 vr$38 = ASTCONSTEQZERO( *(struct $7ASTNODE**)((uint8*)EXPRTB$1 + (I$1 << 3ll)) );
				if( vr$38 == 0ll ) goto label$90;
				{
					ISCONST$1 = 0ll;
					goto label$85;
				}
				label$90:;
				label$89:;
			}
			label$84:;
			I$1 = I$1 + 1ll;
			label$83:;
			if( I$1 <= TMP$92$3 ) goto label$86;
			label$85:;
		}
	}
	label$81:;
	if( ISCONST$1 == 0ll ) goto label$92;
	{
		if( IS_WSTR$1 != 0ll ) goto label$94;
		{
			fb_StrAssign( (void*)ZS$1, 193ll, (void*)"", 1ll, 0 );
		}
		goto label$93;
		label$94:;
		{
			fb_WstrAssignFromA( (uint32*)WS$1, 193ll, (void*)"", 1ll );
		}
		label$93:;
		{
			I$1 = 0ll;
			int64 TMP$93$3;
			TMP$93$3 = CNT$1 + -1ll;
			goto label$95;
			label$98:;
			{
				int64 vr$46 = ASTCONSTFLUSHTOINT( *(struct $7ASTNODE**)((uint8*)EXPRTB$1 + (I$1 << 3ll)) );
				V$1 = vr$46;
				*(struct $7ASTNODE**)((uint8*)EXPRTB$1 + (I$1 << 3ll)) = (struct $7ASTNODE*)0ull;
				if( IS_WSTR$1 != 0ll ) goto label$100;
				{
					if( (uint64)V$1 <= 255ull ) goto label$102;
					{
						V$1 = 255ll;
					}
					label$102:;
					label$101:;
					if( ((int64)-(V$1 < 32ll) | (int64)-(V$1 > 127ll)) == 0ll ) goto label$104;
					{
						FBSTRING TMP$95$6;
						FBSTRING TMP$96$6;
						FBSTRING TMP$97$6;
						__builtin_memset( &TMP$95$6, 0, 24ll );
						FBSTRING* vr$56 = fb_StrConcat( &TMP$95$6, (void*)ZS$1, 193ll, (void*)"\x1B", 2ll );
						fb_StrAssign( (void*)ZS$1, 193ll, (void*)vr$56, -1ll, 0 );
						FBSTRING* vr$57 = fb_OCT_l( (uint64)V$1 );
						fb_StrAssign( (void*)O$1, 9ll, (void*)vr$57, -1ll, 0 );
						int64 vr$58 = fb_StrLen( (void*)O$1, 9ll );
						FBSTRING* vr$59 = fb_CHR( 1, vr$58 );
						__builtin_memset( &TMP$96$6, 0, 24ll );
						FBSTRING* vr$62 = fb_StrConcat( &TMP$96$6, (void*)ZS$1, 193ll, (void*)vr$59, -1ll );
						fb_StrAssign( (void*)ZS$1, 193ll, (void*)vr$62, -1ll, 0 );
						__builtin_memset( &TMP$97$6, 0, 24ll );
						FBSTRING* vr$65 = fb_StrConcat( &TMP$97$6, (void*)ZS$1, 193ll, (void*)O$1, 9ll );
						fb_StrAssign( (void*)ZS$1, 193ll, (void*)vr$65, -1ll, 0 );
					}
					goto label$103;
					label$104:;
					{
						FBSTRING TMP$98$6;
						FBSTRING* vr$66 = fb_CHR( 1, V$1 );
						__builtin_memset( &TMP$98$6, 0, 24ll );
						FBSTRING* vr$69 = fb_StrConcat( &TMP$98$6, (void*)ZS$1, 193ll, (void*)vr$66, -1ll );
						fb_StrAssign( (void*)ZS$1, 193ll, (void*)vr$69, -1ll, 0 );
					}
					label$103:;
				}
				goto label$99;
				label$100:;
				{
					if( ((int64)-(V$1 < 32ll) | (int64)-(V$1 > 127ll)) == 0ll ) goto label$106;
					{
						uint32* TMP$99$6;
						uint32* TMP$100$6;
						uint32* TMP$101$6;
						uint32* vr$74 = fb_WstrConcatWA( (uint32*)WS$1, (void*)"\x1B", 2ll );
						TMP$99$6 = vr$74;
						uint32* vr$75 = fb_WstrAssign( (uint32*)WS$1, 193ll, TMP$99$6 );
						fb_WstrDelete( TMP$99$6 );
						FBSTRING* vr$76 = fb_OCT_l( (uint64)V$1 );
						fb_StrAssign( (void*)O$1, 9ll, (void*)vr$76, -1ll, 0 );
						int64 vr$77 = fb_StrLen( (void*)O$1, 9ll );
						uint32* vr$78 = fb_WstrChr( 1, vr$77 );
						TMP$100$6 = vr$78;
						uint32* vr$79 = fb_WstrConcatAssign( (uint32*)WS$1, 193ll, TMP$100$6 );
						fb_WstrDelete( TMP$100$6 );
						uint32* vr$80 = fb_WstrConcatWA( (uint32*)WS$1, (void*)O$1, 9ll );
						TMP$101$6 = vr$80;
						uint32* vr$81 = fb_WstrAssign( (uint32*)WS$1, 193ll, TMP$101$6 );
						fb_WstrDelete( TMP$101$6 );
					}
					goto label$105;
					label$106:;
					{
						uint32* TMP$102$6;
						uint32* vr$82 = fb_WstrChr( 1, V$1 );
						TMP$102$6 = vr$82;
						uint32* vr$83 = fb_WstrConcatAssign( (uint32*)WS$1, 193ll, TMP$102$6 );
						fb_WstrDelete( TMP$102$6 );
					}
					label$105:;
				}
				label$99:;
			}
			label$96:;
			I$1 = I$1 + 1ll;
			label$95:;
			if( I$1 <= TMP$93$3 ) goto label$98;
			label$97:;
		}
		if( IS_WSTR$1 != 0ll ) goto label$108;
		{
			struct $8FBSYMBOL* vr$87 = SYMBALLOCSTRCONST( (uint8*)ZS$1, CNT$1 );
			struct $7ASTNODE* vr$88 = ASTNEWVAR( vr$87, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			fb$result$1 = vr$88;
		}
		goto label$107;
		label$108:;
		{
			struct $8FBSYMBOL* vr$89 = SYMBALLOCWSTRCONST( (uint32*)WS$1, CNT$1 );
			struct $7ASTNODE* vr$90 = ASTNEWVAR( vr$89, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			fb$result$1 = vr$90;
		}
		label$107:;
	}
	goto label$91;
	label$92:;
	{
		struct $7ASTNODE* vr$92 = RTLSTRCHR( CNT$1, (struct $7FBARRAYIP7ASTNODEE*)&tmp$91$1, IS_WSTR$1 );
		fb$result$1 = vr$92;
	}
	label$91:;
	label$69:;
	return fb$result$1;
}

static struct $7ASTNODE* CSTRASC( void )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$109:;
	struct $7ASTNODE* EXPR1$1;
	struct $7ASTNODE* POSEXPR$1;
	int64 P$1;
	int64 vr$1 = LEXGETTOKEN( 0ll );
	if( vr$1 == 40ll ) goto label$112;
	{
		ERRREPORT( 6ll, 0ll, (uint8*)0ull );
	}
	goto label$111;
	label$112:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$111:;
	struct $7ASTNODE* vr$3 = HMATCHEXPR( 16ll );
	EXPR1$1 = vr$3;
	if( EXPR1$1 != (struct $7ASTNODE*)0ull ) goto label$114;
	{
		goto label$110;
	}
	label$114:;
	label$113:;
	int64 vr$5 = HMATCH( 44ll );
	if( vr$5 == 0ll ) goto label$116;
	{
		struct $7ASTNODE* vr$7 = HMATCHEXPR( 7ll );
		POSEXPR$1 = vr$7;
		if( POSEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$118;
		{
			goto label$110;
		}
		label$118:;
		label$117:;
	}
	goto label$115;
	label$116:;
	{
		POSEXPR$1 = (struct $7ASTNODE*)0ull;
	}
	label$115:;
	int64 vr$9 = LEXGETTOKEN( 0ll );
	if( vr$9 == 41ll ) goto label$120;
	{
		ERRREPORT( 7ll, 0ll, (uint8*)0ull );
		HSKIPUNTIL( 41ll, -1ll, 0ll, 0ll );
	}
	goto label$119;
	label$120:;
	{
		LEXSKIPTOKEN( 0ll );
	}
	label$119:;
	struct $8FBSYMBOL* LITSYM$1;
	LITSYM$1 = (struct $8FBSYMBOL*)0ull;
	{
		int64 TMP$103$2;
		TMP$103$2 = *(int64*)((uint8*)EXPR1$1 + 8ll) & 511ll;
		if( TMP$103$2 == 3ll ) goto label$123;
		label$124:;
		if( TMP$103$2 != 6ll ) goto label$122;
		label$123:;
		{
			struct $8FBSYMBOL* vr$15 = ASTGETSTRLITSYMBOL( EXPR1$1 );
			LITSYM$1 = vr$15;
		}
		label$122:;
		label$121:;
	}
	if( LITSYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$126;
	{
		if( ((int64)-((*(int64*)((uint8*)EXPR1$1 + 8ll) & 511ll) == 6ll) & (int64)-(*(int64*)((uint8*)&ENV$ + 456ll) == 0ll)) == 0ll ) goto label$128;
		{
			P$1 = -1ll;
		}
		goto label$127;
		label$128:;
		{
			if( POSEXPR$1 == (struct $7ASTNODE*)0ull ) goto label$130;
			{
				if( *(int64*)POSEXPR$1 != 16ll ) goto label$132;
				{
					int64 vr$26 = ASTCONSTFLUSHTOINT( POSEXPR$1 );
					P$1 = vr$26;
					POSEXPR$1 = (struct $7ASTNODE*)0ull;
					if( P$1 >= 0ll ) goto label$134;
					{
						P$1 = 0ll;
					}
					label$134:;
					label$133:;
				}
				goto label$131;
				label$132:;
				{
					P$1 = -1ll;
				}
				label$131:;
			}
			goto label$129;
			label$130:;
			{
				P$1 = 1ll;
			}
			label$129:;
		}
		label$127:;
		if( P$1 < 0ll ) goto label$136;
		{
			if( (*(int64*)((uint8*)EXPR1$1 + 8ll) & 511ll) == 6ll ) goto label$138;
			{
				uint8* ZS$4;
				uint8* vr$33 = HUNESCAPE( *(uint8**)((uint8*)LITSYM$1 + 88ll) );
				ZS$4 = vr$33;
				FBSTRING* vr$34 = fb_StrAllocTempDescZ( ZS$4 );
				uint32 vr$35 = fb_ASC( vr$34, P$1 );
				struct $7ASTNODE* vr$37 = ASTNEWCONSTI( (int64)vr$35, 8ll, (struct $8FBSYMBOL*)0ull );
				fb$result$1 = vr$37;
			}
			goto label$137;
			label$138:;
			{
				uint32* WS$4;
				uint32* vr$39 = HUNESCAPEW( *(uint32**)((uint8*)LITSYM$1 + 88ll) );
				WS$4 = vr$39;
				uint32 vr$40 = fb_WstrAsc( WS$4, P$1 );
				struct $7ASTNODE* vr$42 = ASTNEWCONSTI( (int64)vr$40, 8ll, (struct $8FBSYMBOL*)0ull );
				fb$result$1 = vr$42;
			}
			label$137:;
			ASTDELNODE( EXPR1$1 );
			EXPR1$1 = (struct $7ASTNODE*)0ull;
		}
		label$136:;
		label$135:;
	}
	label$126:;
	label$125:;
	if( EXPR1$1 == (struct $7ASTNODE*)0ull ) goto label$140;
	{
		struct $7ASTNODE* vr$44 = RTLSTRASC( EXPR1$1, POSEXPR$1 );
		fb$result$1 = vr$44;
	}
	label$140:;
	label$139:;
	label$110:;
	return fb$result$1;
}

// Total compilation time: 0.04409493412822485 seconds.
