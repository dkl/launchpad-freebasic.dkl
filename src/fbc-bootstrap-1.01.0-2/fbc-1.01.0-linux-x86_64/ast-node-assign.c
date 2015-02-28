// Compilation of fbc-1.01.0/src/compiler/ast-node-assign.bas started at 15:27:38 on 02-28-2015

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
typedef int64 $12FB_DATACLASS;
typedef int64 $9FB_ERRMSG;
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
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__astznodezassign( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRREPORT( int64, int64, uint8* );
typedef int64 $12FB_ERRMSGOPT;
void ERRREPORTWARN( int64, uint8*, $12FB_ERRMSGOPT );
void ASTDELNODE( struct $7ASTNODE* );
struct $7ASTNODE* ASTCLONETREE( struct $7ASTNODE* );
void ASTDELTREE( struct $7ASTNODE* );
int64 ASTPTRCHECK( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTNEWNOP( void );
typedef int64 $11AST_CONVOPT;
struct $7ASTNODE* ASTNEWCONV( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, $11AST_CONVOPT, int64* );
void ASTUPDATECONVFD2FS( struct $7ASTNODE*, int64, int64 );
struct $7ASTNODE* ASTSKIPNOCONVCAST( struct $7ASTNODE* );
struct $7ASTNODE* ASTREMOVENOCONVCAST( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWCONSTI( int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWVAR( struct $8FBSYMBOL*, int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWLINK( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTNEWMEM( int64, struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTNEWNODE( int64, int64, struct $8FBSYMBOL* );
struct $6IRVREG* ASTLOAD( struct $7ASTNODE* );
int64 ASTCHECKASSIGN( struct $7ASTNODE*, struct $7ASTNODE* );
int64 ASTCHECKCONV( int64, struct $8FBSYMBOL*, struct $7ASTNODE* );
int64 ASTHASSIDEFX( struct $7ASTNODE* );
struct $7ASTNODE* _Z15ASTTYPEINIFLUSHP7ASTNODES0_ll( struct $7ASTNODE*, struct $7ASTNODE*, int64, int64 );
struct $7ASTNODE* ASTREMSIDEFX( struct $7ASTNODE** );
struct $7ASTNODE* _Z19ASTBUILDDEREFADDROFP7ASTNODExlP8FBSYMBOLS2_( struct $7ASTNODE*, int64, int64, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTBUILDCALL( struct $8FBSYMBOL*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDCTORCALL( struct $8FBSYMBOL*, struct $7ASTNODE* );
void ASTSETTYPE( struct $7ASTNODE*, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTBUILDCALLRESULTVAR( struct $7ASTNODE* );
struct $8FBSYMBOL* SYMBFINDSELFBOPOVLPROC( $6AST_OP, struct $7ASTNODE*, struct $7ASTNODE*, $9FB_ERRMSG* );
struct $8FBSYMBOL* SYMBFINDCASTOVLPROC( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, $9FB_ERRMSG* );
int64 SYMBPROCRETURNSONSTACK( struct $8FBSYMBOL* );
int64 TYPEHASCTOR( int64, struct $8FBSYMBOL* );
int64 TYPEHASDTOR( int64, struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBGETCOMPDEFCTOR( struct $8FBSYMBOL* );
int64 SYMBCOMPHASCOPYLETOPS( struct $8FBSYMBOL* );
int64 SYMBCHECKCONSTASSIGN( $11FB_DATATYPE, $11FB_DATATYPE, struct $8FBSYMBOL*, struct $8FBSYMBOL*, $12FB_PARAMMODE, int64* );
int64 SYMBGETUDTBASELEVEL( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
struct $7ASTNODE* RTLSTRASSIGN( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* RTLWSTRASSIGN( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
static int64 HCHECKSTRINGOPS( struct $7ASTNODE*, $12FB_DATACLASS, struct $7ASTNODE*, $12FB_DATACLASS );
static int64 HCHECKUDTOPS( struct $7ASTNODE*, $12FB_DATACLASS, struct $7ASTNODE**, $12FB_DATACLASS, int64 );
static int64 HCHECKWSTRINGOPS( struct $7ASTNODE*, int64*, struct $7ASTNODE*, int64*, int64* );
static int64 HCHECKZSTRINGOPS( struct $7ASTNODE*, int64*, struct $7ASTNODE*, int64* );
static void HCHECKENUMOPS( struct $7ASTNODE*, $12FB_DATACLASS, struct $7ASTNODE*, $12FB_DATACLASS );
static int64 HCHECKCONSTANDPOINTEROPS( struct $7ASTNODE*, $11FB_DATATYPE, struct $7ASTNODE*, $11FB_DATATYPE );
static struct $7ASTNODE* HSHALLOWCOPY( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
typedef void (*tmp$35)( void );
typedef int64 (*tmp$36)( void );
typedef void (*tmp$37)( double );
typedef int64 $14IR_OPTIONVALUE;
typedef int64 (*tmp$38)( $14IR_OPTIONVALUE );
typedef int64 (*tmp$39)( int64, int64 );
typedef void (*tmp$40)( struct $8FBSYMBOL* );
typedef void (*tmp$41)( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef uint8* (*tmp$42)( void );
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

int64 ASTCHECKASSIGN( struct $7ASTNODE* L$1, struct $7ASTNODE* R$1 )
{
	int64 TMP$84$1;
	int64 TMP$85$1;
	int64 TMP$86$1;
	int64 TMP$87$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$83:;
	struct $7ASTNODE* N$1;
	$11FB_DATATYPE LDTYPE$1;
	$11FB_DATATYPE RDTYPE$1;
	$11FB_DATATYPE LDFULL$1;
	$11FB_DATATYPE RDFULL$1;
	$12FB_DATACLASS LDCLASS$1;
	$12FB_DATACLASS RDCLASS$1;
	fb$result$1 = 0ll;
	LDFULL$1 = *($11FB_DATATYPE*)((uint8*)L$1 + 8ll);
	RDFULL$1 = *($11FB_DATATYPE*)((uint8*)R$1 + 8ll);
	if( (LDFULL$1 & 480ll) == 0ll ) goto label$85;
	TMP$84$1 = 22ll;
	goto label$131;
	label$85:;
	TMP$84$1 = LDFULL$1 & 31ll;
	label$131:;
	LDTYPE$1 = TMP$84$1;
	if( (RDFULL$1 & 480ll) == 0ll ) goto label$86;
	TMP$85$1 = 22ll;
	goto label$132;
	label$86:;
	TMP$85$1 = RDFULL$1 & 31ll;
	label$132:;
	RDTYPE$1 = TMP$85$1;
	if( (LDTYPE$1 & 480ll) == 0ll ) goto label$87;
	TMP$86$1 = 22ll;
	goto label$133;
	label$87:;
	TMP$86$1 = LDTYPE$1 & 31ll;
	label$133:;
	LDCLASS$1 = *($12FB_DATACLASS*)((uint8*)SYMB_DTYPETB$ + (TMP$86$1 * 56ll));
	if( (RDTYPE$1 & 480ll) == 0ll ) goto label$88;
	TMP$87$1 = 22ll;
	goto label$134;
	label$88:;
	TMP$87$1 = RDTYPE$1 & 31ll;
	label$134:;
	RDCLASS$1 = *($12FB_DATACLASS*)((uint8*)SYMB_DTYPETB$ + (TMP$87$1 * 56ll));
	if( ((int64)-(LDCLASS$1 == 2ll) | (int64)-(RDCLASS$1 == 2ll)) == 0ll ) goto label$90;
	{
		if( LDCLASS$1 == RDCLASS$1 ) goto label$92;
		{
			int64 vr$22 = HCHECKSTRINGOPS( L$1, LDCLASS$1, R$1, RDCLASS$1 );
			if( vr$22 != 0ll ) goto label$94;
			{
				goto label$84;
			}
			label$94:;
			label$93:;
		}
		label$92:;
		label$91:;
		fb$result$1 = -1ll;
		goto label$84;
	}
	goto label$89;
	label$90:;
	if( ((int64)-(LDTYPE$1 == 18ll) | (int64)-(RDTYPE$1 == 18ll)) == 0ll ) goto label$95;
	{
		int64 vr$29 = HCHECKUDTOPS( L$1, LDCLASS$1, &R$1, RDCLASS$1, -1ll );
		if( vr$29 != 0ll ) goto label$97;
		{
			goto label$84;
		}
		label$97:;
		label$96:;
		fb$result$1 = -1ll;
		goto label$84;
	}
	goto label$89;
	label$95:;
	if( ((int64)-(LDTYPE$1 == 6ll) | (int64)-(RDTYPE$1 == 6ll)) == 0ll ) goto label$98;
	{
		if( LDTYPE$1 == RDTYPE$1 ) goto label$100;
		{
			int64 TMP$88$3;
			int64 TMP$89$3;
			int64 TMP$90$3;
			int64 TMP$91$3;
			int64 IS_ZSTR$3;
			__builtin_memset( &IS_ZSTR$3, 0, 8ll );
			int64 vr$40 = HCHECKWSTRINGOPS( L$1, (int64*)&LDFULL$1, R$1, (int64*)&RDFULL$1, &IS_ZSTR$3 );
			if( vr$40 != 0ll ) goto label$102;
			{
				goto label$84;
			}
			label$102:;
			label$101:;
			if( IS_ZSTR$3 == 0ll ) goto label$104;
			{
				fb$result$1 = -1ll;
				goto label$84;
			}
			label$104:;
			label$103:;
			if( (LDFULL$1 & 480ll) == 0ll ) goto label$105;
			TMP$88$3 = 22ll;
			goto label$135;
			label$105:;
			TMP$88$3 = LDFULL$1 & 31ll;
			label$135:;
			LDCLASS$1 = *($12FB_DATACLASS*)((uint8*)SYMB_DTYPETB$ + (TMP$88$3 * 56ll));
			if( (RDFULL$1 & 480ll) == 0ll ) goto label$106;
			TMP$89$3 = 22ll;
			goto label$136;
			label$106:;
			TMP$89$3 = RDFULL$1 & 31ll;
			label$136:;
			RDCLASS$1 = *($12FB_DATACLASS*)((uint8*)SYMB_DTYPETB$ + (TMP$89$3 * 56ll));
			if( (LDFULL$1 & 480ll) == 0ll ) goto label$107;
			TMP$90$3 = 22ll;
			goto label$137;
			label$107:;
			TMP$90$3 = LDFULL$1 & 31ll;
			label$137:;
			LDTYPE$1 = TMP$90$3;
			if( (RDFULL$1 & 480ll) == 0ll ) goto label$108;
			TMP$91$3 = 22ll;
			goto label$138;
			label$108:;
			TMP$91$3 = RDFULL$1 & 31ll;
			label$138:;
			RDTYPE$1 = TMP$91$3;
		}
		label$100:;
		label$99:;
	}
	goto label$89;
	label$98:;
	if( ((int64)-(LDTYPE$1 == 3ll) | (int64)-(RDTYPE$1 == 3ll)) == 0ll ) goto label$109;
	{
		int64 TMP$92$2;
		int64 TMP$93$2;
		int64 TMP$94$2;
		int64 TMP$95$2;
		if( LDTYPE$1 != RDTYPE$1 ) goto label$111;
		{
			fb$result$1 = -1ll;
			goto label$84;
		}
		label$111:;
		label$110:;
		int64 vr$64 = HCHECKZSTRINGOPS( L$1, (int64*)&LDFULL$1, R$1, (int64*)&RDFULL$1 );
		if( vr$64 != 0ll ) goto label$113;
		{
			goto label$84;
		}
		label$113:;
		label$112:;
		if( (LDFULL$1 & 480ll) == 0ll ) goto label$114;
		TMP$92$2 = 22ll;
		goto label$139;
		label$114:;
		TMP$92$2 = LDFULL$1 & 31ll;
		label$139:;
		LDCLASS$1 = *($12FB_DATACLASS*)((uint8*)SYMB_DTYPETB$ + (TMP$92$2 * 56ll));
		if( (RDFULL$1 & 480ll) == 0ll ) goto label$115;
		TMP$93$2 = 22ll;
		goto label$140;
		label$115:;
		TMP$93$2 = RDFULL$1 & 31ll;
		label$140:;
		RDCLASS$1 = *($12FB_DATACLASS*)((uint8*)SYMB_DTYPETB$ + (TMP$93$2 * 56ll));
		if( (LDFULL$1 & 480ll) == 0ll ) goto label$116;
		TMP$94$2 = 22ll;
		goto label$141;
		label$116:;
		TMP$94$2 = LDFULL$1 & 31ll;
		label$141:;
		LDTYPE$1 = TMP$94$2;
		if( (RDFULL$1 & 480ll) == 0ll ) goto label$117;
		TMP$95$2 = 22ll;
		goto label$142;
		label$117:;
		TMP$95$2 = RDFULL$1 & 31ll;
		label$142:;
		RDTYPE$1 = TMP$95$2;
	}
	goto label$89;
	label$109:;
	if( ((int64)-(LDTYPE$1 == 9ll) | (int64)-(RDTYPE$1 == 9ll)) == 0ll ) goto label$118;
	{
		HCHECKENUMOPS( L$1, LDCLASS$1, R$1, RDCLASS$1 );
	}
	label$118:;
	label$89:;
	int64 vr$84 = HCHECKCONSTANDPOINTEROPS( L$1, LDFULL$1, R$1, RDFULL$1 );
	if( vr$84 != 0ll ) goto label$120;
	{
		goto label$84;
	}
	label$120:;
	label$119:;
	if( ((int64)-(LDTYPE$1 != RDTYPE$1) | (int64)-(*(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) != *(struct $8FBSYMBOL**)((uint8*)R$1 + 16ll))) == 0ll ) goto label$122;
	{
		if( RDCLASS$1 == 2ll ) goto label$124;
		{
			if( *(int64*)R$1 != 16ll ) goto label$126;
			{
				struct $7ASTNODE* vr$96 = ASTNEWCONV( LDFULL$1, *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll), R$1, 0ll, (int64*)0ull );
				R$1 = vr$96;
				if( R$1 != (struct $7ASTNODE*)0ull ) goto label$128;
				{
					goto label$84;
				}
				label$128:;
				label$127:;
			}
			label$126:;
			label$125:;
			int64 vr$99 = ASTCHECKCONV( LDFULL$1, *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll), R$1 );
			if( vr$99 != 0ll ) goto label$130;
			{
				goto label$84;
			}
			label$130:;
			label$129:;
		}
		label$124:;
		label$123:;
	}
	label$122:;
	label$121:;
	fb$result$1 = -1ll;
	label$84:;
	return fb$result$1;
}

int64 ASTCHECKASSIGNTOTYPE( int64 LDTYPE$1, struct $8FBSYMBOL* LSUBTYPE$1, struct $7ASTNODE* R$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$143:;
	struct $7ASTNODE* L$1;
	struct $7ASTNODE* vr$1 = ASTNEWVAR( (struct $8FBSYMBOL*)0ull, 0ll, LDTYPE$1, LSUBTYPE$1 );
	L$1 = vr$1;
	int64 vr$2 = ASTCHECKASSIGN( L$1, R$1 );
	fb$result$1 = vr$2;
	ASTDELTREE( L$1 );
	label$144:;
	return fb$result$1;
}

struct $7ASTNODE* ASTNEWASSIGN( struct $7ASTNODE* L$1, struct $7ASTNODE* R$1, $9AST_OPOPT OPTIONS$1 )
{
	int64 TMP$96$1;
	int64 TMP$97$1;
	int64 TMP$98$1;
	int64 TMP$99$1;
	int64 TMP$101$1;
	int64 TMP$102$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$157:;
	struct $7ASTNODE* N$1;
	struct $7ASTNODE* TR$1;
	$11FB_DATATYPE LDTYPE$1;
	$11FB_DATATYPE RDTYPE$1;
	$11FB_DATATYPE LDFULL$1;
	$11FB_DATATYPE RDFULL$1;
	$12FB_DATACLASS LDCLASS$1;
	$12FB_DATACLASS RDCLASS$1;
	struct $8FBSYMBOL* LSUBTYPE$1;
	struct $8FBSYMBOL* PROC$1;
	$9FB_ERRMSG ERR_NUM$1;
	int64 DO_MOVE$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	if( ((int64)-(L$1 == (struct $7ASTNODE*)0ull) | (int64)-(R$1 == (struct $7ASTNODE*)0ull)) == 0ll ) goto label$160;
	{
		goto label$158;
	}
	label$160:;
	label$159:;
	LDFULL$1 = *($11FB_DATATYPE*)((uint8*)L$1 + 8ll);
	if( (LDFULL$1 & 480ll) == 0ll ) goto label$161;
	TMP$96$1 = 22ll;
	goto label$262;
	label$161:;
	TMP$96$1 = LDFULL$1 & 31ll;
	label$262:;
	LDTYPE$1 = TMP$96$1;
	if( (LDTYPE$1 & 480ll) == 0ll ) goto label$162;
	TMP$97$1 = 22ll;
	goto label$263;
	label$162:;
	TMP$97$1 = LDTYPE$1 & 31ll;
	label$263:;
	LDCLASS$1 = *($12FB_DATACLASS*)((uint8*)SYMB_DTYPETB$ + (TMP$97$1 * 56ll));
	LSUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll);
	RDFULL$1 = *($11FB_DATATYPE*)((uint8*)R$1 + 8ll);
	if( (RDFULL$1 & 480ll) == 0ll ) goto label$163;
	TMP$98$1 = 22ll;
	goto label$264;
	label$163:;
	TMP$98$1 = RDFULL$1 & 31ll;
	label$264:;
	RDTYPE$1 = TMP$98$1;
	if( (RDTYPE$1 & 480ll) == 0ll ) goto label$164;
	TMP$99$1 = 22ll;
	goto label$265;
	label$164:;
	TMP$99$1 = RDTYPE$1 & 31ll;
	label$265:;
	RDCLASS$1 = *($12FB_DATACLASS*)((uint8*)SYMB_DTYPETB$ + (TMP$99$1 * 56ll));
	if( (OPTIONS$1 & 32ll) != 0ll ) goto label$166;
	{
		int64 CHECK_LETOP$2;
		CHECK_LETOP$2 = -1ll;
		{
			uint64 TMP$100$3;
			TMP$100$3 = (uint64)LDTYPE$1;
			goto label$168;
			label$169:;
			{
				if( LDTYPE$1 != RDTYPE$1 ) goto label$171;
				{
					if( *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) != *(struct $8FBSYMBOL**)((uint8*)R$1 + 16ll) ) goto label$173;
					{
						if( (OPTIONS$1 & 64ll) != 0ll ) goto label$175;
						{
							int64 vr$31 = SYMBCOMPHASCOPYLETOPS( *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) );
							CHECK_LETOP$2 = vr$31;
						}
						goto label$174;
						label$175:;
						{
							CHECK_LETOP$2 = 0ll;
						}
						label$174:;
					}
					label$173:;
					label$172:;
				}
				label$171:;
				label$170:;
			}
			goto label$167;
			label$168:;
			static const void* tmp$115[1ll] = {
				&&label$169,
			};
			if( TMP$100$3 < 18ll ) goto label$167;
			if( TMP$100$3 > 18ll ) goto label$167;
			goto *tmp$115[TMP$100$3 - 18ll];
			label$167:;
		}
		if( CHECK_LETOP$2 == 0ll ) goto label$177;
		{
			struct $8FBSYMBOL* vr$34 = SYMBFINDSELFBOPOVLPROC( 0ll, L$1, R$1, &ERR_NUM$1 );
			PROC$1 = vr$34;
			if( PROC$1 == (struct $8FBSYMBOL*)0ull ) goto label$179;
			{
				struct $7ASTNODE* RESULT$4;
				if( (OPTIONS$1 & 64ll) == 0ll ) goto label$181;
				{
					struct $8FBSYMBOL* vr$39 = SYMBGETCOMPDEFCTOR( *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) );
					if( vr$39 == (struct $8FBSYMBOL*)0ull ) goto label$183;
					{
						struct $7ASTNODE* vr$41 = ASTCLONETREE( L$1 );
						struct $7ASTNODE* vr$43 = ASTBUILDCTORCALL( *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll), vr$41 );
						RESULT$4 = vr$43;
					}
					goto label$182;
					label$183:;
					{
						struct $7ASTNODE* vr$46 = ASTNEWCONSTI( *(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) + 72ll), 7ll, (struct $8FBSYMBOL*)0ull );
						struct $7ASTNODE* vr$47 = ASTCLONETREE( L$1 );
						struct $7ASTNODE* vr$48 = ASTNEWMEM( 106ll, vr$47, vr$46, 0ll );
						RESULT$4 = vr$48;
					}
					label$182:;
				}
				goto label$180;
				label$181:;
				{
					RESULT$4 = (struct $7ASTNODE*)0ull;
				}
				label$180:;
				struct $7ASTNODE* vr$49 = ASTBUILDCALL( PROC$1, L$1, R$1, (struct $7ASTNODE*)0ull );
				struct $7ASTNODE* vr$50 = ASTNEWLINK( RESULT$4, vr$49, -1ll );
				fb$result$1 = vr$50;
				goto label$158;
			}
			label$179:;
			label$178:;
			if( ERR_NUM$1 == 0ll ) goto label$185;
			{
				fb$result$1 = (struct $7ASTNODE*)0ull;
				goto label$158;
			}
			label$185:;
			label$184:;
		}
		label$177:;
		label$176:;
	}
	label$166:;
	label$165:;
	if( (OPTIONS$1 & 32ll) != 0ll ) goto label$187;
	{
		struct $8FBSYMBOL* vr$55 = SYMBFINDCASTOVLPROC( LDFULL$1, LSUBTYPE$1, R$1, &ERR_NUM$1 );
		PROC$1 = vr$55;
		if( PROC$1 == (struct $8FBSYMBOL*)0ull ) goto label$189;
		{
			struct $7ASTNODE* vr$57 = ASTBUILDCALL( PROC$1, R$1, (struct $7ASTNODE*)0ull, (struct $7ASTNODE*)0ull );
			R$1 = vr$57;
		}
		goto label$188;
		label$189:;
		{
			if( ERR_NUM$1 == 0ll ) goto label$191;
			{
				fb$result$1 = (struct $7ASTNODE*)0ull;
				goto label$158;
			}
			label$191:;
			label$190:;
		}
		label$188:;
	}
	label$187:;
	label$186:;
	RDFULL$1 = *($11FB_DATATYPE*)((uint8*)R$1 + 8ll);
	if( (RDFULL$1 & 480ll) == 0ll ) goto label$192;
	TMP$101$1 = 22ll;
	goto label$266;
	label$192:;
	TMP$101$1 = RDFULL$1 & 31ll;
	label$266:;
	RDTYPE$1 = TMP$101$1;
	if( (RDTYPE$1 & 480ll) == 0ll ) goto label$193;
	TMP$102$1 = 22ll;
	goto label$267;
	label$193:;
	TMP$102$1 = RDTYPE$1 & 31ll;
	label$267:;
	RDCLASS$1 = *($12FB_DATACLASS*)((uint8*)SYMB_DTYPETB$ + (TMP$102$1 * 56ll));
	if( ((int64)-(LDCLASS$1 == 2ll) | (int64)-(RDCLASS$1 == 2ll)) == 0ll ) goto label$195;
	{
		if( LDCLASS$1 == RDCLASS$1 ) goto label$197;
		{
			int64 vr$72 = HCHECKSTRINGOPS( L$1, LDCLASS$1, R$1, RDCLASS$1 );
			if( vr$72 != 0ll ) goto label$199;
			{
				goto label$158;
			}
			label$199:;
			label$198:;
			struct $7ASTNODE* vr$76 = RTLSTRASSIGN( L$1, R$1, (int64)-((OPTIONS$1 & 64ll) != 0ll) );
			fb$result$1 = vr$76;
			goto label$158;
		}
		label$197:;
		label$196:;
		if( (OPTIONS$1 & 64ll) == 0ll ) goto label$201;
		{
			struct $7ASTNODE* vr$79 = RTLSTRASSIGN( L$1, R$1, -1ll );
			fb$result$1 = vr$79;
			goto label$158;
		}
		label$201:;
		label$200:;
	}
	goto label$194;
	label$195:;
	if( ((int64)-(LDTYPE$1 == 18ll) | (int64)-(RDTYPE$1 == 18ll)) == 0ll ) goto label$202;
	{
		int64 TMP$103$2;
		int64 TMP$104$2;
		int64 vr$85 = HCHECKUDTOPS( L$1, LDCLASS$1, &R$1, RDCLASS$1, 0ll );
		if( vr$85 != 0ll ) goto label$204;
		{
			goto label$158;
		}
		label$204:;
		label$203:;
		if( *(int64*)R$1 != 36ll ) goto label$206;
		{
			int64 vr$91 = TYPEHASCTOR( *(int64*)((uint8*)L$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) );
			int64 vr$94 = TYPEHASDTOR( *(int64*)((uint8*)L$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) );
			if( (vr$91 | vr$94) != 0ll ) goto label$208;
			{
				struct $7ASTNODE* vr$98 = ASTREMOVENOCONVCAST( L$1 );
				struct $7ASTNODE* vr$99 = _Z15ASTTYPEINIFLUSHP7ASTNODES0_ll( vr$98, R$1, -1ll, OPTIONS$1 & 64ll );
				fb$result$1 = vr$99;
				goto label$158;
			}
			label$208:;
			label$207:;
		}
		label$206:;
		label$205:;
		struct $7ASTNODE* vr$100 = ASTSKIPNOCONVCAST( R$1 );
		TR$1 = vr$100;
		if( (int64)-(*(int64*)TR$1 == 9ll) != 0ll ) goto label$210;
		{
			struct $7ASTNODE* vr$104 = HSHALLOWCOPY( L$1, R$1, OPTIONS$1 );
			fb$result$1 = vr$104;
			goto label$158;
		}
		label$210:;
		label$209:;
		int64 vr$106 = SYMBPROCRETURNSONSTACK( *(struct $8FBSYMBOL**)((uint8*)TR$1 + 24ll) );
		if( vr$106 == 0ll ) goto label$212;
		{
			struct $7ASTNODE* vr$108 = ASTREMOVENOCONVCAST( R$1 );
			struct $7ASTNODE* vr$109 = ASTBUILDCALLRESULTVAR( vr$108 );
			struct $7ASTNODE* vr$110 = HSHALLOWCOPY( L$1, vr$109, OPTIONS$1 );
			fb$result$1 = vr$110;
			goto label$158;
		}
		label$212:;
		label$211:;
		struct $7ASTNODE* vr$111 = ASTREMOVENOCONVCAST( L$1 );
		L$1 = vr$111;
		struct $7ASTNODE* vr$112 = ASTREMOVENOCONVCAST( R$1 );
		R$1 = vr$112;
		LDFULL$1 = *($11FB_DATATYPE*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)R$1 + 24ll) + 152ll);
		if( (LDFULL$1 & 480ll) == 0ll ) goto label$213;
		TMP$103$2 = 22ll;
		goto label$268;
		label$213:;
		TMP$103$2 = LDFULL$1 & 31ll;
		label$268:;
		LDTYPE$1 = TMP$103$2;
		LSUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)R$1 + 24ll) + 160ll);
		if( (LDTYPE$1 & 480ll) == 0ll ) goto label$214;
		TMP$104$2 = 22ll;
		goto label$269;
		label$214:;
		TMP$104$2 = LDTYPE$1 & 31ll;
		label$269:;
		LDCLASS$1 = *($12FB_DATACLASS*)((uint8*)SYMB_DTYPETB$ + (TMP$104$2 * 56ll));
		ASTSETTYPE( L$1, LDFULL$1, LSUBTYPE$1 );
		RDFULL$1 = LDFULL$1;
		RDTYPE$1 = LDTYPE$1;
		RDCLASS$1 = LDCLASS$1;
		ASTSETTYPE( R$1, RDFULL$1, LSUBTYPE$1 );
	}
	goto label$194;
	label$202:;
	if( ((int64)-(LDTYPE$1 == 6ll) | (int64)-(RDTYPE$1 == 6ll)) == 0ll ) goto label$215;
	{
		if( LDTYPE$1 != RDTYPE$1 ) goto label$217;
		{
			if( (OPTIONS$1 & 64ll) == 0ll ) goto label$219;
			{
				struct $7ASTNODE* vr$131 = RTLWSTRASSIGN( L$1, R$1, -1ll );
				fb$result$1 = vr$131;
				goto label$158;
			}
			label$219:;
			label$218:;
		}
		goto label$216;
		label$217:;
		{
			int64 TMP$105$3;
			int64 TMP$106$3;
			int64 TMP$107$3;
			int64 TMP$108$3;
			int64 IS_ZSTR$3;
			__builtin_memset( &IS_ZSTR$3, 0, 8ll );
			int64 vr$136 = HCHECKWSTRINGOPS( L$1, (int64*)&LDFULL$1, R$1, (int64*)&RDFULL$1, &IS_ZSTR$3 );
			if( vr$136 != 0ll ) goto label$221;
			{
				goto label$158;
			}
			label$221:;
			label$220:;
			if( IS_ZSTR$3 == 0ll ) goto label$223;
			{
				struct $7ASTNODE* vr$141 = RTLWSTRASSIGN( L$1, R$1, (int64)-((OPTIONS$1 & 64ll) != 0ll) );
				fb$result$1 = vr$141;
				goto label$158;
			}
			label$223:;
			label$222:;
			if( (LDFULL$1 & 480ll) == 0ll ) goto label$224;
			TMP$105$3 = 22ll;
			goto label$270;
			label$224:;
			TMP$105$3 = LDFULL$1 & 31ll;
			label$270:;
			LDCLASS$1 = *($12FB_DATACLASS*)((uint8*)SYMB_DTYPETB$ + (TMP$105$3 * 56ll));
			if( (RDFULL$1 & 480ll) == 0ll ) goto label$225;
			TMP$106$3 = 22ll;
			goto label$271;
			label$225:;
			TMP$106$3 = RDFULL$1 & 31ll;
			label$271:;
			RDCLASS$1 = *($12FB_DATACLASS*)((uint8*)SYMB_DTYPETB$ + (TMP$106$3 * 56ll));
			if( (LDFULL$1 & 480ll) == 0ll ) goto label$226;
			TMP$107$3 = 22ll;
			goto label$272;
			label$226:;
			TMP$107$3 = LDFULL$1 & 31ll;
			label$272:;
			LDTYPE$1 = TMP$107$3;
			if( (RDFULL$1 & 480ll) == 0ll ) goto label$227;
			TMP$108$3 = 22ll;
			goto label$273;
			label$227:;
			TMP$108$3 = RDFULL$1 & 31ll;
			label$273:;
			RDTYPE$1 = TMP$108$3;
		}
		label$216:;
	}
	goto label$194;
	label$215:;
	if( ((int64)-(LDTYPE$1 == 3ll) | (int64)-(RDTYPE$1 == 3ll)) == 0ll ) goto label$228;
	{
		int64 TMP$109$2;
		int64 TMP$110$2;
		int64 TMP$111$2;
		int64 TMP$112$2;
		if( LDTYPE$1 != RDTYPE$1 ) goto label$230;
		{
			struct $7ASTNODE* vr$161 = RTLSTRASSIGN( L$1, R$1, 0ll );
			fb$result$1 = vr$161;
			goto label$158;
		}
		label$230:;
		label$229:;
		int64 vr$164 = HCHECKZSTRINGOPS( L$1, (int64*)&LDFULL$1, R$1, (int64*)&RDFULL$1 );
		if( vr$164 != 0ll ) goto label$232;
		{
			goto label$158;
		}
		label$232:;
		label$231:;
		if( (LDFULL$1 & 480ll) == 0ll ) goto label$233;
		TMP$109$2 = 22ll;
		goto label$274;
		label$233:;
		TMP$109$2 = LDFULL$1 & 31ll;
		label$274:;
		LDCLASS$1 = *($12FB_DATACLASS*)((uint8*)SYMB_DTYPETB$ + (TMP$109$2 * 56ll));
		if( (RDFULL$1 & 480ll) == 0ll ) goto label$234;
		TMP$110$2 = 22ll;
		goto label$275;
		label$234:;
		TMP$110$2 = RDFULL$1 & 31ll;
		label$275:;
		RDCLASS$1 = *($12FB_DATACLASS*)((uint8*)SYMB_DTYPETB$ + (TMP$110$2 * 56ll));
		if( (LDFULL$1 & 480ll) == 0ll ) goto label$235;
		TMP$111$2 = 22ll;
		goto label$276;
		label$235:;
		TMP$111$2 = LDFULL$1 & 31ll;
		label$276:;
		LDTYPE$1 = TMP$111$2;
		if( (RDFULL$1 & 480ll) == 0ll ) goto label$236;
		TMP$112$2 = 22ll;
		goto label$277;
		label$236:;
		TMP$112$2 = RDFULL$1 & 31ll;
		label$277:;
		RDTYPE$1 = TMP$112$2;
	}
	goto label$194;
	label$228:;
	if( ((int64)-(LDTYPE$1 == 9ll) | (int64)-(RDTYPE$1 == 9ll)) == 0ll ) goto label$237;
	{
		HCHECKENUMOPS( L$1, LDCLASS$1, R$1, RDCLASS$1 );
	}
	label$237:;
	label$194:;
	if( (OPTIONS$1 & 16ll) != 0ll ) goto label$239;
	{
		int64 vr$186 = HCHECKCONSTANDPOINTEROPS( L$1, LDFULL$1, R$1, RDFULL$1 );
		if( vr$186 != 0ll ) goto label$241;
		{
			goto label$158;
		}
		label$241:;
		label$240:;
	}
	label$239:;
	label$238:;
	if( ((int64)-(LDTYPE$1 != RDTYPE$1) | (int64)-(*(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) != *(struct $8FBSYMBOL**)((uint8*)R$1 + 16ll))) == 0ll ) goto label$243;
	{
		if( RDCLASS$1 == 2ll ) goto label$245;
		{
			if( *(int64*)R$1 != 16ll ) goto label$247;
			{
				int64 TMP$113$4;
				if( (OPTIONS$1 & 16ll) == 0ll ) goto label$248;
				TMP$113$4 = 8ll;
				goto label$278;
				label$248:;
				TMP$113$4 = 0ll;
				label$278:;
				struct $7ASTNODE* vr$199 = ASTNEWCONV( LDFULL$1, LSUBTYPE$1, R$1, TMP$113$4, (int64*)0ull );
				R$1 = vr$199;
				if( R$1 != (struct $7ASTNODE*)0ull ) goto label$250;
				{
					goto label$158;
				}
				label$250:;
				label$249:;
			}
			label$247:;
			label$246:;
			int64 DOCONV$3;
			DOCONV$3 = -1ll;
			if( *(int64*)((uint8*)&ENV$ + 208ll) != 0ll ) goto label$252;
			{
				if( ((int64)-(LDCLASS$1 == 1ll) | (int64)-(RDCLASS$1 == 1ll)) == 0ll ) goto label$254;
				{
					if( LDTYPE$1 == 13ll ) goto label$256;
					{
						DOCONV$3 = (int64)-((*(int64*)((uint8*)&IR$ + 568ll) & 1ll) != 0ll);
					}
					label$256:;
					label$255:;
				}
				label$254:;
				label$253:;
			}
			label$252:;
			label$251:;
			if( DOCONV$3 == 0ll ) goto label$258;
			{
				int64 TMP$114$4;
				if( (OPTIONS$1 & 16ll) == 0ll ) goto label$259;
				TMP$114$4 = 8ll;
				goto label$279;
				label$259:;
				TMP$114$4 = 0ll;
				label$279:;
				struct $7ASTNODE* vr$213 = ASTNEWCONV( LDFULL$1, *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll), R$1, TMP$114$4, (int64*)0ull );
				R$1 = vr$213;
				if( R$1 != (struct $7ASTNODE*)0ull ) goto label$261;
				{
					goto label$158;
				}
				label$261:;
				label$260:;
			}
			label$258:;
			label$257:;
		}
		label$245:;
		label$244:;
	}
	label$243:;
	label$242:;
	struct $7ASTNODE* vr$215 = ASTNEWNODE( 2ll, LDFULL$1, LSUBTYPE$1 );
	N$1 = vr$215;
	*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = L$1;
	*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = R$1;
	fb$result$1 = N$1;
	label$158:;
	return fb$result$1;
}

struct $6IRVREG* ASTLOADASSIGN( struct $7ASTNODE* N$1 )
{
	struct $6IRVREG* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$280:;
	struct $7ASTNODE* L$1;
	struct $7ASTNODE* R$1;
	struct $6IRVREG* VS$1;
	struct $6IRVREG* VR$1;
	L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
	R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
	if( ((int64)-(L$1 == (struct $7ASTNODE*)0ull) | (int64)-(R$1 == (struct $7ASTNODE*)0ull)) == 0ll ) goto label$283;
	{
		fb$result$1 = (struct $6IRVREG*)0ull;
		goto label$281;
	}
	label$283:;
	label$282:;
	if( *(int64*)R$1 != 5ll ) goto label$285;
	{
		ASTUPDATECONVFD2FS( R$1, *(int64*)((uint8*)L$1 + 8ll), 0ll );
	}
	label$285:;
	label$284:;
	struct $6IRVREG* vr$10 = ASTLOAD( R$1 );
	VS$1 = vr$10;
	struct $6IRVREG* vr$11 = ASTLOAD( L$1 );
	VR$1 = vr$11;
	if( *(int64*)((uint8*)&AST$ + 272ll) == 0ll ) goto label$287;
	{
		(*(tmp$43*)((uint8*)&IR$ + 232ll))( VR$1, VS$1 );
	}
	label$287:;
	label$286:;
	ASTDELNODE( L$1 );
	ASTDELNODE( R$1 );
	fb$result$1 = VR$1;
	label$281:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__astznodezassign( void )
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

static int64 HCHECKSTRINGOPS( struct $7ASTNODE* L$1, $12FB_DATACLASS LDCLASS$1, struct $7ASTNODE* R$1, $12FB_DATACLASS RDCLASS$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$10:;
	struct $7ASTNODE* OTHER$1;
	fb$result$1 = 0ll;
	if( LDCLASS$1 != 2ll ) goto label$13;
	{
		OTHER$1 = R$1;
	}
	goto label$12;
	label$13:;
	{
		OTHER$1 = L$1;
	}
	label$12:;
	{
		int64 TMP$77$2;
		TMP$77$2 = *(int64*)((uint8*)OTHER$1 + 8ll) & 511ll;
		if( TMP$77$2 == 3ll ) goto label$16;
		label$17:;
		if( TMP$77$2 != 6ll ) goto label$15;
		label$16:;
		{
		}
		goto label$14;
		label$15:;
		{
			goto label$11;
		}
		label$18:;
		label$14:;
	}
	fb$result$1 = -1ll;
	label$11:;
	return fb$result$1;
}

static int64 HCHECKUDTOPS( struct $7ASTNODE* L$1, $12FB_DATACLASS LDCLASS$1, struct $7ASTNODE** R$1, $12FB_DATACLASS RDCLASS$1, int64 CHECKONLY$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$19:;
	struct $8FBSYMBOL* PROC$1;
	fb$result$1 = 0ll;
	if( (*(int64*)((uint8*)L$1 + 8ll) & 511ll) == 18ll ) goto label$22;
	{
		goto label$20;
	}
	goto label$21;
	label$22:;
	{
		if( *(int64*)L$1 != 9ll ) goto label$24;
		{
			goto label$20;
		}
		label$24:;
		label$23:;
	}
	label$21:;
	if( (*(int64*)((uint8*)*R$1 + 8ll) & 511ll) == 18ll ) goto label$26;
	{
		goto label$20;
	}
	label$26:;
	label$25:;
	if( *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) == *(struct $8FBSYMBOL**)((uint8*)*R$1 + 16ll) ) goto label$28;
	{
		int64 vr$17 = SYMBGETUDTBASELEVEL( *(struct $8FBSYMBOL**)((uint8*)*R$1 + 16ll), *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) );
		if( vr$17 != 0ll ) goto label$30;
		{
			goto label$20;
		}
		label$30:;
		label$29:;
		if( CHECKONLY$1 != 0ll ) goto label$32;
		{
			struct $7ASTNODE* vr$24 = ASTNEWCONV( *(int64*)((uint8*)L$1 + 8ll) & 511ll, *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll), *R$1, 0ll, (int64*)0ull );
			*R$1 = vr$24;
		}
		label$32:;
		label$31:;
	}
	label$28:;
	label$27:;
	fb$result$1 = -1ll;
	label$20:;
	return fb$result$1;
}

static int64 HCHECKWSTRINGOPS( struct $7ASTNODE* L$1, int64* LDFULL$1, struct $7ASTNODE* R$1, int64* RDFULL$1, int64* IS_ZSTR$1 )
{
	int64 TMP$78$1;
	int64 TMP$79$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$33:;
	fb$result$1 = 0ll;
	int64 LDTYPE$1;
	int64 RDTYPE$1;
	if( (*LDFULL$1 & 480ll) == 0ll ) goto label$35;
	TMP$78$1 = 22ll;
	goto label$288;
	label$35:;
	TMP$78$1 = *LDFULL$1 & 31ll;
	label$288:;
	LDTYPE$1 = TMP$78$1;
	if( (*RDFULL$1 & 480ll) == 0ll ) goto label$36;
	TMP$79$1 = 22ll;
	goto label$289;
	label$36:;
	TMP$79$1 = *RDFULL$1 & 31ll;
	label$289:;
	RDTYPE$1 = TMP$79$1;
	if( LDTYPE$1 != 6ll ) goto label$38;
	{
		*IS_ZSTR$1 = (int64)-(RDTYPE$1 == 3ll);
	}
	goto label$37;
	label$38:;
	{
		*IS_ZSTR$1 = (int64)-(LDTYPE$1 == 3ll);
	}
	label$37:;
	if( *IS_ZSTR$1 == 0ll ) goto label$40;
	{
		fb$result$1 = -1ll;
		goto label$34;
	}
	label$40:;
	label$39:;
	if( LDTYPE$1 != 6ll ) goto label$42;
	{
		if( (int64)-(*(int64*)L$1 == 20ll) != 0ll ) goto label$44;
		{
			goto label$34;
		}
		label$44:;
		label$43:;
		*LDFULL$1 = (*LDFULL$1 & -512ll) | (*(int64*)((uint8*)&ENV$ + 424ll) & 511ll);
	}
	goto label$41;
	label$42:;
	{
		if( (int64)-(*(int64*)R$1 == 20ll) != 0ll ) goto label$46;
		{
			goto label$34;
		}
		label$46:;
		label$45:;
		*RDFULL$1 = (*RDFULL$1 & -512ll) | (*(int64*)((uint8*)&ENV$ + 424ll) & 511ll);
	}
	label$41:;
	fb$result$1 = -1ll;
	label$34:;
	return fb$result$1;
}

static int64 HCHECKZSTRINGOPS( struct $7ASTNODE* L$1, int64* LDFULL$1, struct $7ASTNODE* R$1, int64* RDFULL$1 )
{
	int64 TMP$80$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$47:;
	fb$result$1 = 0ll;
	if( (*LDFULL$1 & 480ll) == 0ll ) goto label$49;
	TMP$80$1 = 22ll;
	goto label$290;
	label$49:;
	TMP$80$1 = *LDFULL$1 & 31ll;
	label$290:;
	if( TMP$80$1 != 3ll ) goto label$51;
	{
		if( (int64)-(*(int64*)L$1 == 20ll) != 0ll ) goto label$53;
		{
			goto label$48;
		}
		label$53:;
		label$52:;
		*LDFULL$1 = (*LDFULL$1 & -512ll) | 2ll;
	}
	goto label$50;
	label$51:;
	{
		if( (int64)-(*(int64*)R$1 == 20ll) != 0ll ) goto label$55;
		{
			goto label$48;
		}
		label$55:;
		label$54:;
		*RDFULL$1 = (*RDFULL$1 & -512ll) | 2ll;
	}
	label$50:;
	fb$result$1 = -1ll;
	label$48:;
	return fb$result$1;
}

static void HCHECKENUMOPS( struct $7ASTNODE* L$1, $12FB_DATACLASS LDCLASS$1, struct $7ASTNODE* R$1, $12FB_DATACLASS RDCLASS$1 )
{
	label$56:;
	if( (*(int64*)((uint8*)L$1 + 8ll) & 511ll) == (*(int64*)((uint8*)R$1 + 8ll) & 511ll) ) goto label$59;
	{
		if( ((int64)-(LDCLASS$1 != 0ll) | (int64)-(RDCLASS$1 != 0ll)) == 0ll ) goto label$61;
		{
			ERRREPORTWARN( 5ll, (uint8*)0ull, 1ll );
		}
		label$61:;
		label$60:;
	}
	label$59:;
	label$58:;
	label$57:;
}

static int64 HCHECKCONSTANDPOINTEROPS( struct $7ASTNODE* L$1, $11FB_DATATYPE LDTYPE$1, struct $7ASTNODE* R$1, $11FB_DATATYPE RDTYPE$1 )
{
	int64 TMP$81$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$62:;
	fb$result$1 = 0ll;
	TMP$81$1 = 0ll;
	int64 vr$4 = SYMBCHECKCONSTASSIGN( LDTYPE$1, RDTYPE$1, *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll), *(struct $8FBSYMBOL**)((uint8*)R$1 + 16ll), 0ll, &TMP$81$1 );
	if( vr$4 != 0ll ) goto label$65;
	{
		ERRREPORT( 180ll, -1ll, (uint8*)0ull );
		goto label$63;
	}
	label$65:;
	label$64:;
	if( (LDTYPE$1 & 480ll) == 0ll ) goto label$67;
	{
		int64 TMP$82$2;
		if( (RDTYPE$1 & 480ll) == 0ll ) goto label$68;
		TMP$82$2 = 22ll;
		goto label$291;
		label$68:;
		TMP$82$2 = RDTYPE$1 & 31ll;
		label$291:;
		if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$82$2 * 56ll)) != 1ll ) goto label$70;
		{
			goto label$63;
		}
		label$70:;
		label$69:;
		int64 vr$14 = ASTPTRCHECK( LDTYPE$1, *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll), R$1, 0ll );
		if( vr$14 != 0ll ) goto label$72;
		{
			if( ((int64)-((LDTYPE$1 & 31ll) == 18ll) & (int64)-((RDTYPE$1 & 31ll) == 18ll)) == 0ll ) goto label$74;
			{
				int64 vr$24 = SYMBGETUDTBASELEVEL( *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll), *(struct $8FBSYMBOL**)((uint8*)R$1 + 16ll) );
				if( vr$24 <= 0ll ) goto label$76;
				{
					ERRREPORT( 180ll, -1ll, (uint8*)0ull );
					goto label$63;
				}
				label$76:;
				label$75:;
			}
			label$74:;
			label$73:;
			int64 vr$28 = ASTCHECKCONV( *(int64*)((uint8*)L$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll), R$1 );
			if( vr$28 == 0ll ) goto label$78;
			{
				ERRREPORTWARN( 4ll, (uint8*)0ull, 1ll );
			}
			label$78:;
			label$77:;
		}
		label$72:;
		label$71:;
	}
	goto label$66;
	label$67:;
	if( (RDTYPE$1 & 480ll) == 0ll ) goto label$79;
	{
		int64 TMP$83$2;
		if( (LDTYPE$1 & 480ll) == 0ll ) goto label$80;
		TMP$83$2 = 22ll;
		goto label$292;
		label$80:;
		TMP$83$2 = LDTYPE$1 & 31ll;
		label$292:;
		if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$83$2 * 56ll)) != 1ll ) goto label$82;
		{
			goto label$63;
		}
		label$82:;
		label$81:;
		ERRREPORTWARN( 5ll, (uint8*)0ull, 1ll );
	}
	label$79:;
	label$66:;
	fb$result$1 = -1ll;
	label$63:;
	return fb$result$1;
}

static struct $7ASTNODE* HSHALLOWCOPY( struct $7ASTNODE* L$1, struct $7ASTNODE* R$1, int64 OPTIONS$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$145:;
	struct $7ASTNODE* T$1;
	int64 OFFSET$1;
	int64 BYTESTOCOPY$1;
	int64 HAS_VPTR$1;
	BYTESTOCOPY$1 = *(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) + 72ll);
	HAS_VPTR$1 = (int64)-((*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) + 16ll) & 4194304ll) != 0ll);
	struct $7ASTNODE* vr$7 = ASTREMOVENOCONVCAST( L$1 );
	L$1 = vr$7;
	struct $7ASTNODE* vr$8 = ASTREMOVENOCONVCAST( R$1 );
	R$1 = vr$8;
	if( HAS_VPTR$1 == 0ll ) goto label$148;
	{
		BYTESTOCOPY$1 = BYTESTOCOPY$1 - *(int64*)((uint8*)&ENV$ + 472ll);
		if( BYTESTOCOPY$1 != 0ll ) goto label$150;
		{
			T$1 = (struct $7ASTNODE*)0ull;
			int64 vr$12 = ASTHASSIDEFX( L$1 );
			if( vr$12 == 0ll ) goto label$152;
			{
				struct $7ASTNODE* vr$15 = ASTREMSIDEFX( &L$1 );
				struct $7ASTNODE* vr$16 = ASTNEWLINK( T$1, vr$15, -1ll );
				T$1 = vr$16;
			}
			label$152:;
			label$151:;
			int64 vr$17 = ASTHASSIDEFX( R$1 );
			if( vr$17 == 0ll ) goto label$154;
			{
				struct $7ASTNODE* vr$20 = ASTREMSIDEFX( &R$1 );
				struct $7ASTNODE* vr$21 = ASTNEWLINK( T$1, vr$20, -1ll );
				T$1 = vr$21;
			}
			label$154:;
			label$153:;
			ASTDELTREE( L$1 );
			ASTDELTREE( R$1 );
			if( T$1 != (struct $7ASTNODE*)0ull ) goto label$156;
			{
				struct $7ASTNODE* vr$23 = ASTNEWNOP(  );
				T$1 = vr$23;
			}
			label$156:;
			label$155:;
			fb$result$1 = T$1;
			goto label$146;
		}
		label$150:;
		label$149:;
		struct $7ASTNODE* vr$24 = _Z19ASTBUILDDEREFADDROFP7ASTNODExlP8FBSYMBOLS2_( L$1, *(int64*)((uint8*)&ENV$ + 472ll), 1ll, (struct $8FBSYMBOL*)0ull, (struct $8FBSYMBOL*)0ull );
		L$1 = vr$24;
		struct $7ASTNODE* vr$25 = _Z19ASTBUILDDEREFADDROFP7ASTNODExlP8FBSYMBOLS2_( R$1, *(int64*)((uint8*)&ENV$ + 472ll), 1ll, (struct $8FBSYMBOL*)0ull, (struct $8FBSYMBOL*)0ull );
		R$1 = vr$25;
	}
	label$148:;
	label$147:;
	struct $7ASTNODE* vr$26 = ASTNEWMEM( 104ll, L$1, R$1, BYTESTOCOPY$1 );
	fb$result$1 = vr$26;
	label$146:;
	return fb$result$1;
}

// Total compilation time: 0.03809810790698975 seconds.
