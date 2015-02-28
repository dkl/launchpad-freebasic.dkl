// Compilation of fbc-1.01.0/src/compiler/ast-node-iif.bas started at 15:27:39 on 02-28-2015

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
typedef void (*tmp$35)( void );
typedef void (*tmp$54)( int64, struct $8FBSYMBOL* );
typedef void (*tmp$40)( struct $8FBSYMBOL* );
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__astznodeziif( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ASTDELNODE( struct $7ASTNODE* );
void ASTDELTREE( struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDBRANCH( struct $7ASTNODE*, struct $8FBSYMBOL*, int64, int64 );
struct $7ASTNODE* ASTNEWASSIGN( struct $7ASTNODE*, struct $7ASTNODE*, $9AST_OPOPT );
int64 ASTCONSTEQZERO( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWVAR( struct $8FBSYMBOL*, int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWLINK( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTNEWNODE( int64, int64, struct $8FBSYMBOL* );
struct $6IRVREG* ASTLOAD( struct $7ASTNODE* );
struct $7ASTNODE* ASTTYPEINIUPDATE( struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDFAKEWSTRINGACCESS( struct $8FBSYMBOL* );
struct $7ASTNODE* ASTBUILDFAKEWSTRINGASSIGN( struct $8FBSYMBOL*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTBUILDCTORCALL( struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* ASTPATCHCTORCALL( struct $7ASTNODE*, struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDIMPLICITCTORCALLEX( struct $8FBSYMBOL*, struct $7ASTNODE*, $12FB_PARAMMODE, int64* );
void ASTDTORLISTADD( struct $8FBSYMBOL* );
struct $7ASTNODE* ASTDTORLISTFLUSH( int64 );
void ASTDTORLISTSCOPEBEGIN( int64 );
int64 ASTDTORLISTSCOPEEND( void );
void ASTDTORLISTUNSCOPE( int64 );
typedef int64 $10FB_SYMBOPT;
struct $8FBSYMBOL* SYMBADDLABEL( uint8*, $10FB_SYMBOPT );
struct $8FBSYMBOL* SYMBADDTEMPVAR( int64, struct $8FBSYMBOL* );
int64 SYMBHASCTOR( struct $8FBSYMBOL* );
int64 SYMBHASDEFCTOR( struct $8FBSYMBOL* );
void TYPEMAX( int64, struct $8FBSYMBOL*, int64, struct $8FBSYMBOL*, int64*, struct $8FBSYMBOL** );
int64 HCHECKTYPES( int64, struct $8FBSYMBOL*, int64, struct $8FBSYMBOL*, int64*, struct $8FBSYMBOL** );
typedef int64 (*tmp$36)( void );
typedef void (*tmp$37)( double );
typedef int64 $14IR_OPTIONVALUE;
typedef int64 (*tmp$38)( $14IR_OPTIONVALUE );
typedef int64 (*tmp$39)( int64, int64 );
typedef void (*tmp$41)( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef uint8* (*tmp$42)( void );
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

int64 HCHECKTYPES( int64 LDTYPE$1, struct $8FBSYMBOL* LSUBTYPE$1, int64 RDTYPE$1, struct $8FBSYMBOL* RSUBTYPE$1, int64* DTYPE$1, struct $8FBSYMBOL** SUBTYPE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$10:;
	int64 LMATCH$1;
	int64 RMATCH$1;
	int64 OTHERDTYPE$1;
	fb$result$1 = 0ll;
	LMATCH$1 = (int64)-((LDTYPE$1 & 480ll) != 0ll);
	RMATCH$1 = (int64)-((RDTYPE$1 & 480ll) != 0ll);
	if( (LMATCH$1 | RMATCH$1) == 0ll ) goto label$13;
	{
		if( (LMATCH$1 & RMATCH$1) == 0ll ) goto label$15;
		{
			if( ((int64)-((LDTYPE$1 & 511ll) != (RDTYPE$1 & 511ll)) | (int64)-(LSUBTYPE$1 != RSUBTYPE$1)) == 0ll ) goto label$17;
			{
				goto label$11;
			}
			label$17:;
			label$16:;
			*DTYPE$1 = LDTYPE$1;
			*SUBTYPE$1 = LSUBTYPE$1;
		}
		goto label$14;
		label$15:;
		{
			int64 TMP$77$3;
			if( LMATCH$1 == 0ll ) goto label$19;
			{
				*DTYPE$1 = LDTYPE$1;
				*SUBTYPE$1 = LSUBTYPE$1;
				OTHERDTYPE$1 = RDTYPE$1;
			}
			goto label$18;
			label$19:;
			{
				*DTYPE$1 = RDTYPE$1;
				*SUBTYPE$1 = RSUBTYPE$1;
				OTHERDTYPE$1 = LDTYPE$1;
			}
			label$18:;
			if( (OTHERDTYPE$1 & 480ll) == 0ll ) goto label$20;
			TMP$77$3 = 22ll;
			goto label$49;
			label$20:;
			TMP$77$3 = OTHERDTYPE$1 & 31ll;
			label$49:;
			if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$77$3 * 56ll)) == 0ll ) goto label$22;
			{
				goto label$11;
			}
			label$22:;
			label$21:;
			{
				int64 TMP$78$4;
				TMP$78$4 = OTHERDTYPE$1 & 31ll;
				if( TMP$78$4 == 3ll ) goto label$25;
				label$26:;
				if( TMP$78$4 != 6ll ) goto label$24;
				label$25:;
				{
					goto label$11;
				}
				label$24:;
				label$23:;
			}
		}
		label$14:;
		fb$result$1 = -1ll;
		goto label$11;
	}
	label$13:;
	label$12:;
	LMATCH$1 = ((int64)-((LDTYPE$1 & 31ll) == 16ll) | (int64)-((LDTYPE$1 & 31ll) == 17ll)) | (int64)-((LDTYPE$1 & 31ll) == 3ll);
	RMATCH$1 = ((int64)-((RDTYPE$1 & 31ll) == 16ll) | (int64)-((RDTYPE$1 & 31ll) == 17ll)) | (int64)-((RDTYPE$1 & 31ll) == 3ll);
	if( (LMATCH$1 | RMATCH$1) == 0ll ) goto label$28;
	{
		if( LMATCH$1 == RMATCH$1 ) goto label$30;
		{
			goto label$11;
		}
		label$30:;
		label$29:;
		*DTYPE$1 = 16ll;
		*SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
		fb$result$1 = -1ll;
		goto label$11;
	}
	label$28:;
	label$27:;
	LMATCH$1 = (int64)-((LDTYPE$1 & 31ll) == 6ll);
	RMATCH$1 = (int64)-((RDTYPE$1 & 31ll) == 6ll);
	if( (LMATCH$1 | RMATCH$1) == 0ll ) goto label$32;
	{
		if( LMATCH$1 == RMATCH$1 ) goto label$34;
		{
			goto label$11;
		}
		label$34:;
		label$33:;
		*DTYPE$1 = 6ll;
		*SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
		fb$result$1 = -1ll;
		goto label$11;
	}
	label$32:;
	label$31:;
	LMATCH$1 = (int64)-((LDTYPE$1 & 31ll) == 18ll);
	RMATCH$1 = (int64)-((RDTYPE$1 & 31ll) == 18ll);
	if( (LMATCH$1 | RMATCH$1) == 0ll ) goto label$36;
	{
		if( LMATCH$1 == RMATCH$1 ) goto label$38;
		{
			goto label$11;
		}
		label$38:;
		label$37:;
		if( LSUBTYPE$1 == RSUBTYPE$1 ) goto label$40;
		{
			goto label$11;
		}
		label$40:;
		label$39:;
		*DTYPE$1 = 18ll;
		*SUBTYPE$1 = LSUBTYPE$1;
		fb$result$1 = -1ll;
		goto label$11;
	}
	label$36:;
	label$35:;
	LMATCH$1 = (int64)-((LDTYPE$1 & 31ll) == 9ll);
	RMATCH$1 = (int64)-((RDTYPE$1 & 31ll) == 9ll);
	if( (LMATCH$1 | RMATCH$1) == 0ll ) goto label$42;
	{
		if( (LMATCH$1 & RMATCH$1) == 0ll ) goto label$44;
		{
			if( LSUBTYPE$1 != RSUBTYPE$1 ) goto label$46;
			{
				*DTYPE$1 = 9ll;
				*SUBTYPE$1 = LSUBTYPE$1;
			}
			goto label$45;
			label$46:;
			{
				*DTYPE$1 = 7ll;
				*SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
			}
			label$45:;
			fb$result$1 = -1ll;
			goto label$11;
		}
		label$44:;
		label$43:;
		if( LMATCH$1 == 0ll ) goto label$48;
		{
			LDTYPE$1 = 7ll;
			LSUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
		}
		goto label$47;
		label$48:;
		{
			RDTYPE$1 = 7ll;
			RSUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
		}
		label$47:;
	}
	label$42:;
	label$41:;
	TYPEMAX( LDTYPE$1, LSUBTYPE$1, RDTYPE$1, RSUBTYPE$1, DTYPE$1, SUBTYPE$1 );
	fb$result$1 = -1ll;
	label$11:;
	return fb$result$1;
}

struct $7ASTNODE* ASTNEWIIF( struct $7ASTNODE* CONDEXPR$1, struct $7ASTNODE* TRUEXPR$1, int64 TRUECOOKIE$1, struct $7ASTNODE* FALSEXPR$1, int64 FALSECOOKIE$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$50:;
	struct $7ASTNODE* N$1;
	struct $7ASTNODE* VAREXPR$1;
	int64 DTYPE$1;
	int64 IS_TRUE_CTORCALL$1;
	int64 IS_FALSE_CTORCALL$1;
	int64 CALL_TRUE_DEFCTOR$1;
	int64 CALL_FALSE_DEFCTOR$1;
	struct $8FBSYMBOL* FALSELABEL$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	struct $8FBSYMBOL* TEMP$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	if( CONDEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$53;
	{
		goto label$51;
	}
	label$53:;
	label$52:;
	if( *(int64*)CONDEXPR$1 != 16ll ) goto label$55;
	{
		int64 vr$4 = ASTCONSTEQZERO( CONDEXPR$1 );
		if( vr$4 == 0ll ) goto label$57;
		{
			ASTDELTREE( TRUEXPR$1 );
			fb$result$1 = FALSEXPR$1;
			ASTDTORLISTUNSCOPE( FALSECOOKIE$1 );
		}
		goto label$56;
		label$57:;
		{
			ASTDELTREE( FALSEXPR$1 );
			fb$result$1 = TRUEXPR$1;
			ASTDTORLISTUNSCOPE( TRUECOOKIE$1 );
		}
		label$56:;
		ASTDELTREE( CONDEXPR$1 );
		goto label$51;
	}
	label$55:;
	label$54:;
	DTYPE$1 = 2147483648ll;
	SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
	int64 vr$12 = HCHECKTYPES( *(int64*)((uint8*)TRUEXPR$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)TRUEXPR$1 + 16ll), *(int64*)((uint8*)FALSEXPR$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)FALSEXPR$1 + 16ll), &DTYPE$1, &SUBTYPE$1 );
	if( vr$12 != 0ll ) goto label$59;
	{
		goto label$51;
	}
	label$59:;
	label$58:;
	DTYPE$1 = DTYPE$1 | ((*(int64*)((uint8*)TRUEXPR$1 + 8ll) & 261632ll) | (*(int64*)((uint8*)FALSEXPR$1 + 8ll) & 261632ll));
	struct $8FBSYMBOL* vr$20 = SYMBADDLABEL( (uint8*)0ull, 4ll );
	FALSELABEL$1 = vr$20;
	struct $7ASTNODE* vr$21 = ASTBUILDBRANCH( CONDEXPR$1, FALSELABEL$1, 0ll, -1ll );
	CONDEXPR$1 = vr$21;
	if( CONDEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$61;
	{
		goto label$51;
	}
	label$61:;
	label$60:;
	{
		int64 TMP$79$2;
		TMP$79$2 = DTYPE$1 & 511ll;
		if( TMP$79$2 == 17ll ) goto label$64;
		label$65:;
		if( TMP$79$2 != 3ll ) goto label$63;
		label$64:;
		{
			DTYPE$1 = 16ll;
		}
		label$63:;
		label$62:;
	}
	if( (DTYPE$1 & 511ll) != 6ll ) goto label$67;
	{
		struct $8FBSYMBOL* vr$28 = SYMBADDTEMPVAR( 38ll, (struct $8FBSYMBOL*)0ull );
		TEMP$1 = vr$28;
		*($12FB_SYMBSTATS*)((uint8*)TEMP$1 + 16ll) = *(int64*)((uint8*)TEMP$1 + 16ll) | 16777216ll;
		ASTDTORLISTADD( TEMP$1 );
		struct $7ASTNODE* vr$32 = ASTBUILDFAKEWSTRINGACCESS( TEMP$1 );
		VAREXPR$1 = vr$32;
		ASTDTORLISTSCOPEBEGIN( TRUECOOKIE$1 );
		struct $7ASTNODE* vr$33 = ASTBUILDFAKEWSTRINGASSIGN( TEMP$1, TRUEXPR$1, 64ll );
		TRUEXPR$1 = vr$33;
		ASTDTORLISTSCOPEEND(  );
		ASTDTORLISTSCOPEBEGIN( FALSECOOKIE$1 );
		struct $7ASTNODE* vr$34 = ASTBUILDFAKEWSTRINGASSIGN( TEMP$1, FALSEXPR$1, 64ll );
		FALSEXPR$1 = vr$34;
		ASTDTORLISTSCOPEEND(  );
	}
	goto label$66;
	label$67:;
	{
		struct $8FBSYMBOL* vr$35 = SYMBADDTEMPVAR( DTYPE$1, SUBTYPE$1 );
		TEMP$1 = vr$35;
		ASTDTORLISTADD( TEMP$1 );
		struct $7ASTNODE* vr$36 = ASTNEWVAR( TEMP$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		VAREXPR$1 = vr$36;
		IS_TRUE_CTORCALL$1 = 0ll;
		IS_FALSE_CTORCALL$1 = 0ll;
		CALL_TRUE_DEFCTOR$1 = 0ll;
		CALL_FALSE_DEFCTOR$1 = 0ll;
		int64 vr$37 = SYMBHASCTOR( TEMP$1 );
		if( vr$37 == 0ll ) goto label$69;
		{
			ASTDTORLISTSCOPEBEGIN( TRUECOOKIE$1 );
			struct $7ASTNODE* vr$40 = ASTBUILDIMPLICITCTORCALLEX( TEMP$1, TRUEXPR$1, -1ll, &IS_TRUE_CTORCALL$1 );
			TRUEXPR$1 = vr$40;
			ASTDTORLISTSCOPEEND(  );
			ASTDTORLISTSCOPEBEGIN( FALSECOOKIE$1 );
			struct $7ASTNODE* vr$42 = ASTBUILDIMPLICITCTORCALLEX( TEMP$1, FALSEXPR$1, -1ll, &IS_FALSE_CTORCALL$1 );
			FALSEXPR$1 = vr$42;
			ASTDTORLISTSCOPEEND(  );
			if( (IS_TRUE_CTORCALL$1 | IS_FALSE_CTORCALL$1) == 0ll ) goto label$71;
			{
				if( IS_TRUE_CTORCALL$1 == 0ll ) goto label$73;
				{
					ASTDTORLISTSCOPEBEGIN( TRUECOOKIE$1 );
					struct $7ASTNODE* vr$46 = ASTNEWVAR( TEMP$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
					struct $7ASTNODE* vr$47 = ASTPATCHCTORCALL( TRUEXPR$1, vr$46 );
					TRUEXPR$1 = vr$47;
					ASTDTORLISTSCOPEEND(  );
				}
				goto label$72;
				label$73:;
				{
					CALL_TRUE_DEFCTOR$1 = -1ll;
				}
				label$72:;
				if( IS_FALSE_CTORCALL$1 == 0ll ) goto label$75;
				{
					ASTDTORLISTSCOPEBEGIN( FALSECOOKIE$1 );
					struct $7ASTNODE* vr$49 = ASTNEWVAR( TEMP$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
					struct $7ASTNODE* vr$50 = ASTPATCHCTORCALL( FALSEXPR$1, vr$49 );
					FALSEXPR$1 = vr$50;
					ASTDTORLISTSCOPEEND(  );
				}
				goto label$74;
				label$75:;
				{
					CALL_FALSE_DEFCTOR$1 = -1ll;
				}
				label$74:;
			}
			goto label$70;
			label$71:;
			{
				struct $7ASTNODE* vr$51 = ASTNEWVAR( TEMP$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
				struct $7ASTNODE* vr$52 = ASTBUILDCTORCALL( SUBTYPE$1, vr$51 );
				struct $7ASTNODE* vr$53 = ASTNEWLINK( vr$52, CONDEXPR$1, -1ll );
				CONDEXPR$1 = vr$53;
			}
			label$70:;
			int64 vr$54 = SYMBHASDEFCTOR( TEMP$1 );
			if( vr$54 != 0ll ) goto label$77;
			{
				if( ((int64)-(IS_TRUE_CTORCALL$1 == 0ll) | (int64)-(IS_FALSE_CTORCALL$1 == 0ll)) == 0ll ) goto label$79;
				{
					goto label$51;
				}
				label$79:;
				label$78:;
			}
			label$77:;
			label$76:;
		}
		label$69:;
		label$68:;
		if( IS_TRUE_CTORCALL$1 != 0ll ) goto label$81;
		{
			ASTDTORLISTSCOPEBEGIN( TRUECOOKIE$1 );
			struct $7ASTNODE* vr$61 = ASTNEWVAR( TEMP$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$62 = ASTNEWASSIGN( vr$61, TRUEXPR$1, 64ll );
			TRUEXPR$1 = vr$62;
			if( CALL_TRUE_DEFCTOR$1 == 0ll ) goto label$83;
			{
				struct $7ASTNODE* vr$64 = ASTNEWVAR( TEMP$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
				struct $7ASTNODE* vr$65 = ASTBUILDCTORCALL( SUBTYPE$1, vr$64 );
				struct $7ASTNODE* vr$66 = ASTNEWLINK( vr$65, TRUEXPR$1, -1ll );
				TRUEXPR$1 = vr$66;
			}
			label$83:;
			label$82:;
			ASTDTORLISTSCOPEEND(  );
		}
		label$81:;
		label$80:;
		if( IS_FALSE_CTORCALL$1 != 0ll ) goto label$85;
		{
			ASTDTORLISTSCOPEBEGIN( FALSECOOKIE$1 );
			struct $7ASTNODE* vr$68 = ASTNEWVAR( TEMP$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$69 = ASTNEWASSIGN( vr$68, FALSEXPR$1, 64ll );
			FALSEXPR$1 = vr$69;
			if( CALL_FALSE_DEFCTOR$1 == 0ll ) goto label$87;
			{
				struct $7ASTNODE* vr$71 = ASTNEWVAR( TEMP$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
				struct $7ASTNODE* vr$72 = ASTBUILDCTORCALL( SUBTYPE$1, vr$71 );
				struct $7ASTNODE* vr$73 = ASTNEWLINK( vr$72, FALSEXPR$1, -1ll );
				FALSEXPR$1 = vr$73;
			}
			label$87:;
			label$86:;
			ASTDTORLISTSCOPEEND(  );
		}
		label$85:;
		label$84:;
	}
	label$66:;
	ASTDTORLISTSCOPEBEGIN( TRUECOOKIE$1 );
	struct $7ASTNODE* vr$74 = ASTTYPEINIUPDATE( TRUEXPR$1 );
	TRUEXPR$1 = vr$74;
	ASTDTORLISTSCOPEEND(  );
	ASTDTORLISTSCOPEBEGIN( FALSECOOKIE$1 );
	struct $7ASTNODE* vr$75 = ASTTYPEINIUPDATE( FALSEXPR$1 );
	FALSEXPR$1 = vr$75;
	ASTDTORLISTSCOPEEND(  );
	if( TRUECOOKIE$1 == 0ll ) goto label$89;
	{
		struct $7ASTNODE* vr$77 = ASTDTORLISTFLUSH( TRUECOOKIE$1 );
		struct $7ASTNODE* vr$78 = ASTNEWLINK( TRUEXPR$1, vr$77, -1ll );
		TRUEXPR$1 = vr$78;
	}
	label$89:;
	label$88:;
	if( FALSECOOKIE$1 == 0ll ) goto label$91;
	{
		struct $7ASTNODE* vr$80 = ASTDTORLISTFLUSH( FALSECOOKIE$1 );
		struct $7ASTNODE* vr$81 = ASTNEWLINK( FALSEXPR$1, vr$80, -1ll );
		FALSEXPR$1 = vr$81;
	}
	label$91:;
	label$90:;
	struct $7ASTNODE* vr$82 = ASTNEWNODE( 26ll, DTYPE$1, SUBTYPE$1 );
	N$1 = vr$82;
	*(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) = TEMP$1;
	*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = VAREXPR$1;
	struct $7ASTNODE* vr$85 = ASTNEWLINK( TRUEXPR$1, FALSEXPR$1, -1ll );
	struct $7ASTNODE* vr$86 = ASTNEWLINK( CONDEXPR$1, vr$85, -1ll );
	*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = vr$86;
	*(struct $8FBSYMBOL**)((uint8*)N$1 + 40ll) = FALSELABEL$1;
	fb$result$1 = N$1;
	label$51:;
	return fb$result$1;
}

struct $6IRVREG* ASTLOADIIF( struct $7ASTNODE* N$1 )
{
	struct $6IRVREG* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$92:;
	struct $7ASTNODE* CONDEXPR$1;
	struct $7ASTNODE* TRUEXPR$1;
	struct $7ASTNODE* FALSEXPR$1;
	struct $8FBSYMBOL* EXITLABEL$1;
	CONDEXPR$1 = *(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) + 112ll);
	TRUEXPR$1 = *(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) + 120ll) + 112ll);
	FALSEXPR$1 = *(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) + 120ll) + 120ll);
	if( *(int64*)((uint8*)&AST$ + 272ll) == 0ll ) goto label$95;
	{
		(*(tmp$35*)((uint8*)&IR$ + 240ll))(  );
	}
	label$95:;
	label$94:;
	ASTLOAD( CONDEXPR$1 );
	ASTDELNODE( CONDEXPR$1 );
	struct $8FBSYMBOL* vr$10 = SYMBADDLABEL( (uint8*)0ull, 4ll );
	EXITLABEL$1 = vr$10;
	ASTLOAD( TRUEXPR$1 );
	ASTDELNODE( TRUEXPR$1 );
	if( *(int64*)((uint8*)&AST$ + 272ll) == 0ll ) goto label$97;
	{
		(*(tmp$54*)((uint8*)&IR$ + 312ll))( 97ll, EXITLABEL$1 );
	}
	label$97:;
	label$96:;
	if( *(int64*)((uint8*)&AST$ + 272ll) == 0ll ) goto label$99;
	{
		(*(tmp$40*)((uint8*)&IR$ + 136ll))( *(struct $8FBSYMBOL**)((uint8*)N$1 + 40ll) );
	}
	label$99:;
	label$98:;
	if( *(int64*)((uint8*)&AST$ + 272ll) == 0ll ) goto label$101;
	{
		(*(tmp$35*)((uint8*)&IR$ + 240ll))(  );
	}
	label$101:;
	label$100:;
	ASTLOAD( FALSEXPR$1 );
	ASTDELNODE( FALSEXPR$1 );
	if( *(int64*)((uint8*)&AST$ + 272ll) == 0ll ) goto label$103;
	{
		(*(tmp$40*)((uint8*)&IR$ + 136ll))( EXITLABEL$1 );
	}
	label$103:;
	label$102:;
	struct $6IRVREG* vr$17 = ASTLOAD( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
	fb$result$1 = vr$17;
	ASTDELNODE( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
	ASTDELNODE( *(struct $7ASTNODE**)((uint8*)*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) + 120ll) );
	ASTDELNODE( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) );
	label$93:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__astznodeziif( void )
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

// Total compilation time: 0.03331392153631896 seconds.
