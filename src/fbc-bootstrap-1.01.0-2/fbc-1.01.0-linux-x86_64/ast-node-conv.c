// Compilation of fbc-1.01.0/src/compiler/ast-node-conv.bas started at 15:27:38 on 02-28-2015

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
typedef int64 $11AST_CONVOPT;
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
typedef struct $6IRVREG* (*tmp$64)( int64, struct $8FBSYMBOL* );
typedef void (*tmp$43)( struct $6IRVREG*, struct $6IRVREG* );
typedef void (*tmp$49)( int64, struct $6IRVREG*, struct $6IRVREG* );
typedef void (*tmp$70)( struct $6IRVREG*, int64, struct $8FBSYMBOL* );
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
#define fb_D2I( value ) ((int32)__builtin_nearbyint( value ))
#define fb_D2L( value ) ((int64)__builtin_nearbyint( value ))
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__astznodezconv( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ASTDELNODE( struct $7ASTNODE* );
void ASTDELTREE( struct $7ASTNODE* );
int64 ASTCONSTEQZERO( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWNODE( int64, int64, struct $8FBSYMBOL* );
struct $6IRVREG* ASTLOAD( struct $7ASTNODE* );
void ASTCHECKCONST( int64, struct $7ASTNODE* );
int64 ASTCHECKCONVNONPTRTOPTR( int64, int64, struct $7ASTNODE*, $11AST_CONVOPT );
struct $7ASTNODE* ASTBUILDCALL( struct $8FBSYMBOL*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE* );
void ASTSETTYPE( struct $7ASTNODE*, int64, struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBFINDCASTOVLPROC( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, $9FB_ERRMSG* );
int64 SYMBGETUDTBASELEVEL( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
struct $7ASTNODE* RTLSTRTOVAL( struct $7ASTNODE*, int64 );
static void HCONSTCONV( int64, struct $7ASTNODE* );
static int64 HGETTYPEMISMATCHERRMSG( $11AST_CONVOPT );
static int64 HCHECKPTR( int64, struct $8FBSYMBOL*, int64, struct $7ASTNODE*, $11AST_CONVOPT );
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
typedef struct $6IRVREG* (*tmp$65)( int64, struct $8FBSYMBOL*, int64 );
typedef struct $6IRVREG* (*tmp$66)( int64, struct $8FBSYMBOL*, double );
typedef struct $6IRVREG* (*tmp$67)( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
typedef struct $6IRVREG* (*tmp$68)( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64, int64, struct $6IRVREG* );
typedef struct $6IRVREG* (*tmp$69)( int64, struct $8FBSYMBOL*, int64, struct $6IRVREG* );
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

int64 ASTCHECKCONVNONPTRTOPTR( int64 TO_DTYPE$1, int64 EXPR_DTYPE$1, struct $7ASTNODE* EXPR$1, $11AST_CONVOPT OPTIONS$1 )
{
	int64 TMP$86$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$63:;
	if( (EXPR_DTYPE$1 & 480ll) == 0ll ) goto label$65;
	TMP$86$1 = 22ll;
	goto label$75;
	label$65:;
	TMP$86$1 = EXPR_DTYPE$1 & 31ll;
	label$75:;
	if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$86$1 * 56ll)) != 0ll ) goto label$67;
	{
		int64 TMP$87$2;
		if( *(int64*)EXPR$1 != 16ll ) goto label$69;
		{
			int64 vr$8 = ASTCONSTEQZERO( EXPR$1 );
			if( vr$8 == 0ll ) goto label$71;
			{
				fb$result$1 = 0ll;
				goto label$64;
			}
			label$71:;
			label$70:;
		}
		label$69:;
		label$68:;
		if( (EXPR_DTYPE$1 & 480ll) == 0ll ) goto label$72;
		TMP$87$2 = 22ll;
		goto label$76;
		label$72:;
		TMP$87$2 = EXPR_DTYPE$1 & 31ll;
		label$76:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$87$2 * 56ll)) + 8ll) != *(int64*)((uint8*)&ENV$ + 472ll) ) goto label$74;
		{
			fb$result$1 = 0ll;
			goto label$64;
		}
		label$74:;
		label$73:;
	}
	label$67:;
	label$66:;
	int64 vr$15 = HGETTYPEMISMATCHERRMSG( OPTIONS$1 );
	fb$result$1 = vr$15;
	label$64:;
	return fb$result$1;
}

int64 ASTCHECKCONV( int64 TO_DTYPE$1, struct $8FBSYMBOL* TO_SUBTYPE$1, struct $7ASTNODE* L$1 )
{
	int64 TMP$90$1;
	int64 TMP$91$1;
	int64 TMP$94$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$118:;
	int64 LDTYPE$1;
	fb$result$1 = 0ll;
	LDTYPE$1 = *(int64*)((uint8*)L$1 + 8ll);
	if( (TO_DTYPE$1 & 480ll) == 0ll ) goto label$120;
	TMP$90$1 = 22ll;
	goto label$140;
	label$120:;
	TMP$90$1 = TO_DTYPE$1 & 31ll;
	label$140:;
	if( (LDTYPE$1 & 480ll) == 0ll ) goto label$121;
	TMP$91$1 = 22ll;
	goto label$141;
	label$121:;
	TMP$91$1 = LDTYPE$1 & 31ll;
	label$141:;
	if( ((int64)-(TMP$90$1 == 18ll) | (int64)-(TMP$91$1 == 18ll)) == 0ll ) goto label$123;
	{
		int64 TMP$92$2;
		int64 TMP$93$2;
		if( (TO_DTYPE$1 & 480ll) == 0ll ) goto label$124;
		TMP$92$2 = 22ll;
		goto label$142;
		label$124:;
		TMP$92$2 = TO_DTYPE$1 & 31ll;
		label$142:;
		if( (LDTYPE$1 & 480ll) == 0ll ) goto label$125;
		TMP$93$2 = 22ll;
		goto label$143;
		label$125:;
		TMP$93$2 = LDTYPE$1 & 31ll;
		label$143:;
		if( ((int64)-(TMP$92$2 == 18ll) & (int64)-(TMP$93$2 == 18ll)) == 0ll ) goto label$127;
		{
			int64 vr$23 = SYMBGETUDTBASELEVEL( *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll), TO_SUBTYPE$1 );
			fb$result$1 = (int64)-(vr$23 > 0ll);
		}
		label$127:;
		label$126:;
		goto label$119;
	}
	label$123:;
	label$122:;
	if( (LDTYPE$1 & 480ll) == 0ll ) goto label$128;
	TMP$94$1 = 22ll;
	goto label$144;
	label$128:;
	TMP$94$1 = LDTYPE$1 & 31ll;
	label$144:;
	if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$94$1 * 56ll)) != 2ll ) goto label$130;
	{
		goto label$119;
	}
	label$130:;
	label$129:;
	int64 vr$30 = HCHECKPTR( TO_DTYPE$1, TO_SUBTYPE$1, LDTYPE$1, L$1, 0ll );
	if( vr$30 == 0ll ) goto label$132;
	{
		goto label$119;
	}
	label$132:;
	label$131:;
	{
		int64 TMP$95$2;
		int64 TMP$96$2;
		if( (LDTYPE$1 & 480ll) == 0ll ) goto label$133;
		TMP$95$2 = 22ll;
		goto label$145;
		label$133:;
		TMP$95$2 = LDTYPE$1 & 31ll;
		label$145:;
		TMP$96$2 = TMP$95$2;
		if( TMP$96$2 == 3ll ) goto label$136;
		label$137:;
		if( TMP$96$2 != 6ll ) goto label$135;
		label$136:;
		{
			if( (int64)-(*(int64*)L$1 == 20ll) != 0ll ) goto label$139;
			{
				goto label$119;
			}
			label$139:;
			label$138:;
		}
		label$135:;
		label$134:;
	}
	fb$result$1 = -1ll;
	label$119:;
	return fb$result$1;
}

struct $7ASTNODE* ASTNEWCONV( int64 TO_DTYPE$1, struct $8FBSYMBOL* TO_SUBTYPE$1, struct $7ASTNODE* L$1, $11AST_CONVOPT OPTIONS$1, int64* PERRMSG$1 )
{
	int64 TMP$101$1;
	int64 TMP$106$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$146:;
	struct $7ASTNODE* N$1;
	int64 LDCLASS$1;
	int64 LDTYPE$1;
	int64 ERRMSG$1;
	int64 DOCONV$1;
	if( PERRMSG$1 == (int64*)0ull ) goto label$149;
	{
		*PERRMSG$1 = 0ll;
	}
	label$149:;
	label$148:;
	LDTYPE$1 = *(int64*)((uint8*)L$1 + 8ll);
	if( (LDTYPE$1 & 511ll) != (TO_DTYPE$1 & 511ll) ) goto label$151;
	{
		if( *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) != TO_SUBTYPE$1 ) goto label$153;
		{
			if( LDTYPE$1 == TO_DTYPE$1 ) goto label$155;
			{
				if( *(int64*)L$1 != 16ll ) goto label$157;
				{
					ASTSETTYPE( L$1, TO_DTYPE$1, TO_SUBTYPE$1 );
					N$1 = L$1;
				}
				goto label$156;
				label$157:;
				{
					struct $7ASTNODE* vr$12 = ASTNEWNODE( 5ll, TO_DTYPE$1, TO_SUBTYPE$1 );
					N$1 = vr$12;
					*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = L$1;
					*(int64*)((uint8*)N$1 + 40ll) = 0ll;
					*(int64*)((uint8*)N$1 + 48ll) = 0ll;
				}
				label$156:;
			}
			goto label$154;
			label$155:;
			{
				N$1 = L$1;
			}
			label$154:;
			fb$result$1 = N$1;
			goto label$147;
		}
		label$153:;
		label$152:;
	}
	label$151:;
	label$150:;
	{
		struct $8FBSYMBOL* PROC$2;
		$9FB_ERRMSG ERR_NUM$2;
		struct $8FBSYMBOL* vr$17 = SYMBFINDCASTOVLPROC( TO_DTYPE$1, TO_SUBTYPE$1, L$1, &ERR_NUM$2 );
		PROC$2 = vr$17;
		if( PROC$2 == (struct $8FBSYMBOL*)0ull ) goto label$159;
		{
			struct $7ASTNODE* vr$19 = ASTBUILDCALL( PROC$2, L$1, (struct $7ASTNODE*)0ull, (struct $7ASTNODE*)0ull );
			fb$result$1 = vr$19;
			goto label$147;
		}
		goto label$158;
		label$159:;
		{
			if( ERR_NUM$2 == 0ll ) goto label$161;
			{
				fb$result$1 = (struct $7ASTNODE*)0ull;
				goto label$147;
			}
			label$161:;
			label$160:;
		}
		label$158:;
	}
	{
		int64 TMP$97$2;
		uint64 TMP$98$2;
		if( (TO_DTYPE$1 & 480ll) == 0ll ) goto label$162;
		TMP$97$2 = 22ll;
		goto label$239;
		label$162:;
		TMP$97$2 = TO_DTYPE$1 & 31ll;
		label$239:;
		TMP$98$2 = (uint64)TMP$97$2;
		goto label$164;
		label$165:;
		{
			goto label$147;
		}
		goto label$163;
		label$166:;
		{
			int64 TMP$99$3;
			if( (LDTYPE$1 & 480ll) == 0ll ) goto label$167;
			TMP$99$3 = 22ll;
			goto label$240;
			label$167:;
			TMP$99$3 = LDTYPE$1 & 31ll;
			label$240:;
			if( TMP$99$3 == 18ll ) goto label$169;
			{
				goto label$147;
			}
			label$169:;
			label$168:;
			int64 vr$29 = SYMBGETUDTBASELEVEL( *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll), TO_SUBTYPE$1 );
			if( vr$29 != 0ll ) goto label$171;
			{
				goto label$147;
			}
			label$171:;
			label$170:;
		}
		goto label$163;
		label$172:;
		{
			int64 TMP$100$3;
			if( (LDTYPE$1 & 480ll) == 0ll ) goto label$173;
			TMP$100$3 = 22ll;
			goto label$241;
			label$173:;
			TMP$100$3 = LDTYPE$1 & 31ll;
			label$241:;
			if( TMP$100$3 != 18ll ) goto label$175;
			{
				goto label$147;
			}
			label$175:;
			label$174:;
		}
		goto label$163;
		label$164:;
		static const void* tmp$116[19ll] = {
			&&label$165,
			&&label$172,
			&&label$172,
			&&label$165,
			&&label$172,
			&&label$172,
			&&label$165,
			&&label$172,
			&&label$172,
			&&label$172,
			&&label$172,
			&&label$172,
			&&label$172,
			&&label$172,
			&&label$172,
			&&label$172,
			&&label$165,
			&&label$165,
			&&label$166,
		};
		if( TMP$98$2 > 18ll ) goto label$172;
		goto *tmp$116[TMP$98$2 - 0ll];
		label$163:;
	}
	if( (LDTYPE$1 & 480ll) == 0ll ) goto label$176;
	TMP$101$1 = 22ll;
	goto label$242;
	label$176:;
	TMP$101$1 = LDTYPE$1 & 31ll;
	label$242:;
	LDCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$101$1 * 56ll));
	if( (OPTIONS$1 & 1ll) == 0ll ) goto label$178;
	{
		if( LDCLASS$1 == 0ll ) goto label$180;
		{
			goto label$147;
		}
		label$180:;
		label$179:;
	}
	label$178:;
	label$177:;
	if( (OPTIONS$1 & 8ll) != 0ll ) goto label$182;
	{
		int64 vr$44 = HCHECKPTR( TO_DTYPE$1, TO_SUBTYPE$1, LDTYPE$1, L$1, OPTIONS$1 );
		ERRMSG$1 = vr$44;
		if( ERRMSG$1 == 0ll ) goto label$184;
		{
			if( PERRMSG$1 == (int64*)0ull ) goto label$186;
			{
				*PERRMSG$1 = ERRMSG$1;
			}
			label$186:;
			label$185:;
			goto label$147;
		}
		label$184:;
		label$183:;
	}
	label$182:;
	label$181:;
	if( (OPTIONS$1 & 2ll) == 0ll ) goto label$188;
	{
		{
			int64 TMP$102$3;
			uint64 TMP$103$3;
			if( (LDTYPE$1 & 480ll) == 0ll ) goto label$189;
			TMP$102$3 = 22ll;
			goto label$243;
			label$189:;
			TMP$102$3 = LDTYPE$1 & 31ll;
			label$243:;
			TMP$103$3 = (uint64)TMP$102$3;
			goto label$191;
			label$192:;
			{
				struct $7ASTNODE* vr$53 = RTLSTRTOVAL( L$1, TO_DTYPE$1 );
				fb$result$1 = vr$53;
				goto label$147;
			}
			goto label$190;
			label$191:;
			static const void* tmp$117[15ll] = {
				&&label$192,
				&&label$190,
				&&label$190,
				&&label$192,
				&&label$190,
				&&label$190,
				&&label$190,
				&&label$190,
				&&label$190,
				&&label$190,
				&&label$190,
				&&label$190,
				&&label$190,
				&&label$192,
				&&label$192,
			};
			if( TMP$103$3 < 3ll ) goto label$190;
			if( TMP$103$3 > 17ll ) goto label$190;
			goto *tmp$117[TMP$103$3 - 3ll];
			label$190:;
		}
	}
	goto label$187;
	label$188:;
	{
		if( LDCLASS$1 != 2ll ) goto label$194;
		{
			goto label$147;
		}
		goto label$193;
		label$194:;
		{
			{
				int64 TMP$104$4;
				int64 TMP$105$4;
				if( (LDTYPE$1 & 480ll) == 0ll ) goto label$195;
				TMP$104$4 = 22ll;
				goto label$244;
				label$195:;
				TMP$104$4 = LDTYPE$1 & 31ll;
				label$244:;
				TMP$105$4 = TMP$104$4;
				if( TMP$105$4 == 3ll ) goto label$198;
				label$199:;
				if( TMP$105$4 != 6ll ) goto label$197;
				label$198:;
				{
					if( (int64)-(*(int64*)L$1 == 20ll) != 0ll ) goto label$201;
					{
						goto label$147;
					}
					label$201:;
					label$200:;
				}
				label$197:;
				label$196:;
			}
		}
		label$193:;
	}
	label$187:;
	if( *(int64*)L$1 != 16ll ) goto label$203;
	{
		ASTCHECKCONST( TO_DTYPE$1, L$1 );
		HCONSTCONV( TO_DTYPE$1, L$1 );
		*(int64*)((uint8*)L$1 + 8ll) = TO_DTYPE$1;
		*(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) = TO_SUBTYPE$1;
		fb$result$1 = L$1;
		goto label$147;
	}
	label$203:;
	label$202:;
	DOCONV$1 = -1ll;
	if( (TO_DTYPE$1 & 480ll) == 0ll ) goto label$204;
	TMP$106$1 = 22ll;
	goto label$245;
	label$204:;
	TMP$106$1 = TO_DTYPE$1 & 31ll;
	label$245:;
	if( LDCLASS$1 != *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$106$1 * 56ll)) ) goto label$206;
	{
		{
			int64 TMP$107$3;
			int64 TMP$108$3;
			if( (TO_DTYPE$1 & 480ll) == 0ll ) goto label$207;
			TMP$107$3 = 22ll;
			goto label$246;
			label$207:;
			TMP$107$3 = TO_DTYPE$1 & 31ll;
			label$246:;
			TMP$108$3 = TMP$107$3;
			if( TMP$108$3 != 18ll ) goto label$209;
			label$210:;
			{
				DOCONV$1 = 0ll;
			}
			goto label$208;
			label$209:;
			{
				int64 TMP$109$4;
				int64 TMP$110$4;
				if( (LDTYPE$1 & 480ll) == 0ll ) goto label$212;
				TMP$109$4 = 22ll;
				goto label$247;
				label$212:;
				TMP$109$4 = LDTYPE$1 & 31ll;
				label$247:;
				if( (TO_DTYPE$1 & 480ll) == 0ll ) goto label$213;
				TMP$110$4 = 22ll;
				goto label$248;
				label$213:;
				TMP$110$4 = TO_DTYPE$1 & 31ll;
				label$248:;
				if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$109$4 * 56ll)) + 8ll) != *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$110$4 * 56ll)) + 8ll) ) goto label$215;
				{
					DOCONV$1 = 0ll;
				}
				label$215:;
				label$214:;
			}
			label$211:;
			label$208:;
		}
	}
	label$206:;
	label$205:;
	if( (*(int64*)((uint8*)&IR$ + 568ll) & 1ll) == 0ll ) goto label$217;
	{
		int64 TMP$111$2;
		if( (TO_DTYPE$1 & 480ll) == 0ll ) goto label$218;
		TMP$111$2 = 22ll;
		goto label$249;
		label$218:;
		TMP$111$2 = TO_DTYPE$1 & 31ll;
		label$249:;
		if( ((int64)-(LDCLASS$1 == 1ll) & (int64)-(*(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$111$2 * 56ll)) == 1ll)) == 0ll ) goto label$220;
		{
			int64 TMP$112$3;
			int64 TMP$113$3;
			if( (LDTYPE$1 & 480ll) == 0ll ) goto label$221;
			TMP$112$3 = 22ll;
			goto label$250;
			label$221:;
			TMP$112$3 = LDTYPE$1 & 31ll;
			label$250:;
			if( (TO_DTYPE$1 & 480ll) == 0ll ) goto label$222;
			TMP$113$3 = 22ll;
			goto label$251;
			label$222:;
			TMP$113$3 = TO_DTYPE$1 & 31ll;
			label$251:;
			if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$112$3 * 56ll)) + 8ll) == *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$113$3 * 56ll)) + 8ll) ) goto label$224;
			{
				DOCONV$1 = -1ll;
			}
			label$224:;
			label$223:;
		}
		label$220:;
		label$219:;
	}
	label$217:;
	label$216:;
	if( *(int64*)L$1 != 5ll ) goto label$226;
	{
		if( *(int64*)((uint8*)L$1 + 40ll) != 0ll ) goto label$228;
		{
			if( DOCONV$1 != 0ll ) goto label$230;
			{
				*(int64*)((uint8*)L$1 + 8ll) = TO_DTYPE$1;
				*(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) = TO_SUBTYPE$1;
				fb$result$1 = L$1;
				goto label$147;
			}
			label$230:;
			label$229:;
		}
		label$228:;
		label$227:;
	}
	label$226:;
	label$225:;
	struct $7ASTNODE* vr$111 = ASTNEWNODE( 5ll, TO_DTYPE$1, TO_SUBTYPE$1 );
	N$1 = vr$111;
	*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = L$1;
	*(int64*)((uint8*)N$1 + 40ll) = DOCONV$1;
	*(int64*)((uint8*)N$1 + 48ll) = 0ll;
	if( *(int64*)((uint8*)&ENV$ + 208ll) != 0ll ) goto label$232;
	{
		if( DOCONV$1 == 0ll ) goto label$234;
		{
			int64 TMP$114$3;
			if( (LDTYPE$1 & 480ll) == 0ll ) goto label$235;
			TMP$114$3 = 22ll;
			goto label$252;
			label$235:;
			TMP$114$3 = LDTYPE$1 & 31ll;
			label$252:;
			if( TMP$114$3 != 15ll ) goto label$237;
			{
				int64 TMP$115$4;
				if( (TO_DTYPE$1 & 480ll) == 0ll ) goto label$238;
				TMP$115$4 = 22ll;
				goto label$253;
				label$238:;
				TMP$115$4 = TO_DTYPE$1 & 31ll;
				label$253:;
				*(int64*)((uint8*)N$1 + 48ll) = (int64)-(TMP$115$4 == 14ll);
			}
			label$237:;
			label$236:;
		}
		label$234:;
		label$233:;
	}
	label$232:;
	label$231:;
	fb$result$1 = N$1;
	label$147:;
	return fb$result$1;
}

struct $7ASTNODE* ASTNEWOVLCONV( int64 TO_DTYPE$1, struct $8FBSYMBOL* TO_SUBTYPE$1, struct $7ASTNODE* L$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$254:;
	{
		struct $8FBSYMBOL* PROC$2;
		$9FB_ERRMSG ERR_NUM$2;
		struct $8FBSYMBOL* vr$2 = SYMBFINDCASTOVLPROC( TO_DTYPE$1, TO_SUBTYPE$1, L$1, &ERR_NUM$2 );
		PROC$2 = vr$2;
		if( PROC$2 == (struct $8FBSYMBOL*)0ull ) goto label$257;
		{
			struct $7ASTNODE* vr$4 = ASTBUILDCALL( PROC$2, L$1, (struct $7ASTNODE*)0ull, (struct $7ASTNODE*)0ull );
			fb$result$1 = vr$4;
			goto label$255;
		}
		goto label$256;
		label$257:;
		{
			if( ERR_NUM$2 == 0ll ) goto label$259;
			{
				fb$result$1 = (struct $7ASTNODE*)0ull;
				goto label$255;
			}
			label$259:;
			label$258:;
		}
		label$256:;
	}
	fb$result$1 = L$1;
	label$255:;
	return fb$result$1;
}

void ASTUPDATECONVFD2FS( struct $7ASTNODE* N$1, int64 TO_DTYPE$1, int64 IS_EXPR$1 )
{
	int64 TMP$118$1;
	int64 TMP$119$1;
	label$260:;
	if( *(int64*)((uint8*)N$1 + 48ll) != 0ll ) goto label$263;
	{
		goto label$261;
	}
	label$263:;
	label$262:;
	if( (TO_DTYPE$1 & 480ll) == 0ll ) goto label$264;
	TMP$118$1 = 22ll;
	goto label$268;
	label$264:;
	TMP$118$1 = TO_DTYPE$1 & 31ll;
	label$268:;
	*(int64*)((uint8*)N$1 + 48ll) = (int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$118$1 * 56ll)) + 8ll) >= 4ll);
	if( (TO_DTYPE$1 & 480ll) == 0ll ) goto label$265;
	TMP$119$1 = 22ll;
	goto label$269;
	label$265:;
	TMP$119$1 = TO_DTYPE$1 & 31ll;
	label$269:;
	if( TMP$119$1 != 14ll ) goto label$267;
	{
		*(int64*)((uint8*)N$1 + 48ll) = IS_EXPR$1;
	}
	label$267:;
	label$266:;
	label$261:;
}

struct $6IRVREG* ASTLOADCONV( struct $7ASTNODE* N$1 )
{
	struct $6IRVREG* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$270:;
	struct $7ASTNODE* L$1;
	struct $6IRVREG* VS$1;
	struct $6IRVREG* VR$1;
	L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
	if( L$1 != (struct $7ASTNODE*)0ull ) goto label$273;
	{
		fb$result$1 = (struct $6IRVREG*)0ull;
		goto label$271;
	}
	label$273:;
	label$272:;
	struct $6IRVREG* vr$3 = ASTLOAD( L$1 );
	VS$1 = vr$3;
	if( *(int64*)((uint8*)&AST$ + 272ll) == 0ll ) goto label$275;
	{
		*(int64*)((uint8*)VS$1 + 40ll) = *(int64*)((uint8*)N$1 + 32ll);
		if( *(int64*)((uint8*)N$1 + 40ll) == 0ll ) goto label$277;
		{
			struct $6IRVREG* vr$12 = (*(tmp$64*)((uint8*)&IR$ + 472ll))( *(int64*)((uint8*)N$1 + 8ll) & 511ll, *(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll) );
			VR$1 = vr$12;
			*(int64*)((uint8*)VR$1 + 40ll) = *(int64*)((uint8*)N$1 + 32ll);
			(*(tmp$43*)((uint8*)&IR$ + 120ll))( VR$1, VS$1 );
			if( *(int64*)((uint8*)N$1 + 48ll) == 0ll ) goto label$279;
			{
				if( *(int64*)((uint8*)VS$1 + 8ll) != 15ll ) goto label$281;
				{
					if( *(int64*)((uint8*)VR$1 + 8ll) != 14ll ) goto label$283;
					{
						if( *(int64*)((uint8*)VR$1 + 32ll) != 0ll ) goto label$285;
						{
							(*(tmp$49*)((uint8*)&IR$ + 224ll))( 74ll, VR$1, (struct $6IRVREG*)0ull );
						}
						label$285:;
						label$284:;
					}
					label$283:;
					label$282:;
				}
				label$281:;
				label$280:;
			}
			label$279:;
			label$278:;
		}
		goto label$276;
		label$277:;
		{
			VR$1 = VS$1;
			(*(tmp$70*)((uint8*)&IR$ + 528ll))( VR$1, *(int64*)((uint8*)N$1 + 8ll) & 511ll, *(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll) );
		}
		label$276:;
	}
	label$275:;
	label$274:;
	ASTDELNODE( L$1 );
	fb$result$1 = VR$1;
	label$271:;
	return fb$result$1;
}

struct $7ASTNODE* ASTSKIPNOCONVCAST( struct $7ASTNODE* N$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$286:;
	fb$result$1 = N$1;
	if( *(int64*)N$1 != 5ll ) goto label$289;
	{
		if( *(int64*)((uint8*)N$1 + 40ll) != 0ll ) goto label$291;
		{
			fb$result$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
		}
		label$291:;
		label$290:;
	}
	label$289:;
	label$288:;
	label$287:;
	return fb$result$1;
}

struct $7ASTNODE* ASTREMOVENOCONVCAST( struct $7ASTNODE* N$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$292:;
	fb$result$1 = N$1;
	if( *(int64*)N$1 != 5ll ) goto label$295;
	{
		if( *(int64*)((uint8*)N$1 + 40ll) != 0ll ) goto label$297;
		{
			fb$result$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
			*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = (struct $7ASTNODE*)0ull;
			ASTDELTREE( N$1 );
		}
		label$297:;
		label$296:;
	}
	label$295:;
	label$294:;
	label$293:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__astznodezconv( void )
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

static void HCONSTCONV( int64 TODTYPE$1, struct $7ASTNODE* L$1 )
{
	int64 TMP$77$1;
	int64 TMP$81$1;
	label$10:;
	int64 LDTYPE$1;
	LDTYPE$1 = *(int64*)((uint8*)L$1 + 8ll);
	if( (LDTYPE$1 & 480ll) == 0ll ) goto label$12;
	TMP$77$1 = 22ll;
	goto label$298;
	label$12:;
	TMP$77$1 = LDTYPE$1 & 31ll;
	label$298:;
	if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$77$1 * 56ll)) != 1ll ) goto label$14;
	{
		{
			int64 TMP$78$3;
			uint64 TMP$79$3;
			if( (TODTYPE$1 & 480ll) == 0ll ) goto label$15;
			TMP$78$3 = 22ll;
			goto label$299;
			label$15:;
			TMP$78$3 = TODTYPE$1 & 31ll;
			label$299:;
			TMP$79$3 = *(uint64*)(((uint8*)SYMB_DTYPETB$ + (TMP$78$3 * 56ll)) + 40ll);
			goto label$17;
			label$18:;
			{
				if( (LDTYPE$1 & 511ll) != 15ll ) goto label$20;
				{
					float F$5;
					F$5 = (float)*(double*)((uint8*)L$1 + 40ll);
					*(double*)((uint8*)L$1 + 40ll) = (double)F$5;
				}
				label$20:;
				label$19:;
			}
			goto label$16;
			label$21:;
			{
			}
			goto label$16;
			label$22:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)(int8)fb_D2I( *(double*)((uint8*)L$1 + 40ll) );
			}
			goto label$16;
			label$23:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)(uint8)fb_D2I( *(double*)((uint8*)L$1 + 40ll) );
			}
			goto label$16;
			label$24:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)(int16)fb_D2I( *(double*)((uint8*)L$1 + 40ll) );
			}
			goto label$16;
			label$25:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)(uint16)fb_D2I( *(double*)((uint8*)L$1 + 40ll) );
			}
			goto label$16;
			label$26:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)fb_D2I( *(double*)((uint8*)L$1 + 40ll) );
			}
			goto label$16;
			label$27:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)(uint32)fb_D2L( *(double*)((uint8*)L$1 + 40ll) );
			}
			goto label$16;
			label$28:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = fb_D2L( *(double*)((uint8*)L$1 + 40ll) );
			}
			goto label$16;
			label$29:;
			{
				int64 TMP$80$4;
				if( *(double*)((uint8*)L$1 + 40ll) < 0x1.1C37937E08p+53 ) goto label$30;
				TMP$80$4 = fb_D2L( *(double*)((uint8*)L$1 + 40ll) * 0x1.p-1 ) << 1ll;
				goto label$300;
				label$30:;
				TMP$80$4 = fb_D2L( *(double*)((uint8*)L$1 + 40ll) );
				label$300:;
				*(int64*)((uint8*)L$1 + 40ll) = TMP$80$4;
			}
			goto label$16;
			label$17:;
			static const void* tmp$120[10ll] = {
				&&label$22,
				&&label$23,
				&&label$24,
				&&label$25,
				&&label$26,
				&&label$27,
				&&label$28,
				&&label$29,
				&&label$18,
				&&label$21,
			};
			if( TMP$79$3 > 9ll ) goto label$16;
			goto *tmp$120[TMP$79$3 - 0ll];
			label$16:;
		}
	}
	goto label$13;
	label$14:;
	if( (LDTYPE$1 & 480ll) == 0ll ) goto label$32;
	TMP$81$1 = 22ll;
	goto label$301;
	label$32:;
	TMP$81$1 = LDTYPE$1 & 31ll;
	label$301:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$81$1 * 56ll)) + 16ll) == 0ll ) goto label$31;
	{
		{
			int64 TMP$82$3;
			uint64 TMP$83$3;
			if( (TODTYPE$1 & 480ll) == 0ll ) goto label$33;
			TMP$82$3 = 22ll;
			goto label$302;
			label$33:;
			TMP$82$3 = TODTYPE$1 & 31ll;
			label$302:;
			TMP$83$3 = *(uint64*)(((uint8*)SYMB_DTYPETB$ + (TMP$82$3 * 56ll)) + 40ll);
			goto label$35;
			label$36:;
			{
				*(double*)((uint8*)L$1 + 40ll) = (double)(float)*(int64*)((uint8*)L$1 + 40ll);
			}
			goto label$34;
			label$37:;
			{
				*(double*)((uint8*)L$1 + 40ll) = (double)*(int64*)((uint8*)L$1 + 40ll);
			}
			goto label$34;
			label$38:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)(int8)*(int64*)((uint8*)L$1 + 40ll);
			}
			goto label$34;
			label$39:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)(uint8)*(int64*)((uint8*)L$1 + 40ll);
			}
			goto label$34;
			label$40:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)(int16)*(int64*)((uint8*)L$1 + 40ll);
			}
			goto label$34;
			label$41:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)(uint16)*(int64*)((uint8*)L$1 + 40ll);
			}
			goto label$34;
			label$42:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)(int32)*(int64*)((uint8*)L$1 + 40ll);
			}
			goto label$34;
			label$43:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)(uint32)*(int64*)((uint8*)L$1 + 40ll);
			}
			goto label$34;
			label$44:;
			{
			}
			goto label$34;
			label$45:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = *(int64*)((uint8*)L$1 + 40ll);
			}
			goto label$34;
			label$35:;
			static const void* tmp$121[10ll] = {
				&&label$38,
				&&label$39,
				&&label$40,
				&&label$41,
				&&label$42,
				&&label$43,
				&&label$44,
				&&label$45,
				&&label$36,
				&&label$37,
			};
			if( TMP$83$3 > 9ll ) goto label$34;
			goto *tmp$121[TMP$83$3 - 0ll];
			label$34:;
		}
	}
	goto label$13;
	label$31:;
	{
		{
			int64 TMP$84$3;
			uint64 TMP$85$3;
			if( (TODTYPE$1 & 480ll) == 0ll ) goto label$46;
			TMP$84$3 = 22ll;
			goto label$303;
			label$46:;
			TMP$84$3 = TODTYPE$1 & 31ll;
			label$303:;
			TMP$85$3 = *(uint64*)(((uint8*)SYMB_DTYPETB$ + (TMP$84$3 * 56ll)) + 40ll);
			goto label$48;
			label$49:;
			{
				*(double*)((uint8*)L$1 + 40ll) = (double)(float)*(uint64*)((uint8*)L$1 + 40ll);
			}
			goto label$47;
			label$50:;
			{
				*(double*)((uint8*)L$1 + 40ll) = (double)*(uint64*)((uint8*)L$1 + 40ll);
			}
			goto label$47;
			label$51:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)(int8)*(uint64*)((uint8*)L$1 + 40ll);
			}
			goto label$47;
			label$52:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)(uint8)*(uint64*)((uint8*)L$1 + 40ll);
			}
			goto label$47;
			label$53:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)(int16)*(uint64*)((uint8*)L$1 + 40ll);
			}
			goto label$47;
			label$54:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)(uint16)*(uint64*)((uint8*)L$1 + 40ll);
			}
			goto label$47;
			label$55:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)(int32)*(uint64*)((uint8*)L$1 + 40ll);
			}
			goto label$47;
			label$56:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)(uint32)*(uint64*)((uint8*)L$1 + 40ll);
			}
			goto label$47;
			label$57:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = *(int64*)((uint8*)L$1 + 40ll);
			}
			goto label$47;
			label$58:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = *(int64*)((uint8*)L$1 + 40ll);
			}
			goto label$47;
			label$48:;
			static const void* tmp$122[10ll] = {
				&&label$51,
				&&label$52,
				&&label$53,
				&&label$54,
				&&label$55,
				&&label$56,
				&&label$57,
				&&label$58,
				&&label$49,
				&&label$50,
			};
			if( TMP$85$3 > 9ll ) goto label$47;
			goto *tmp$122[TMP$85$3 - 0ll];
			label$47:;
		}
	}
	label$13:;
	label$11:;
}

static int64 HGETTYPEMISMATCHERRMSG( $11AST_CONVOPT OPTIONS$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$59:;
	if( (OPTIONS$1 & 4ll) == 0ll ) goto label$62;
	{
		fb$result$1 = 28ll;
	}
	goto label$61;
	label$62:;
	{
		fb$result$1 = 20ll;
	}
	label$61:;
	label$60:;
	return fb$result$1;
}

static int64 HCHECKPTR( int64 TO_DTYPE$1, struct $8FBSYMBOL* TO_SUBTYPE$1, int64 EXPR_DTYPE$1, struct $7ASTNODE* EXPR$1, $11AST_CONVOPT OPTIONS$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$77:;
	fb$result$1 = 0ll;
	if( (TO_DTYPE$1 & 480ll) == 0ll ) goto label$80;
	{
		if( (int64)-((EXPR_DTYPE$1 & 480ll) != 0ll) != 0ll ) goto label$82;
		{
			int64 vr$6 = ASTCHECKCONVNONPTRTOPTR( TO_DTYPE$1, EXPR_DTYPE$1, EXPR$1, OPTIONS$1 );
			fb$result$1 = vr$6;
			goto label$78;
		}
		label$82:;
		label$81:;
	}
	goto label$79;
	label$80:;
	if( (EXPR_DTYPE$1 & 480ll) == 0ll ) goto label$83;
	{
		int64 TMP$88$2;
		if( (TO_DTYPE$1 & 480ll) == 0ll ) goto label$84;
		TMP$88$2 = 22ll;
		goto label$304;
		label$84:;
		TMP$88$2 = TO_DTYPE$1 & 31ll;
		label$304:;
		if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$88$2 * 56ll)) != 0ll ) goto label$86;
		{
			int64 TMP$89$3;
			if( *(int64*)EXPR$1 != 16ll ) goto label$88;
			{
				int64 vr$16 = ASTCONSTEQZERO( EXPR$1 );
				if( vr$16 == 0ll ) goto label$90;
				{
					goto label$78;
				}
				label$90:;
				label$89:;
			}
			label$88:;
			label$87:;
			if( (TO_DTYPE$1 & 480ll) == 0ll ) goto label$91;
			TMP$89$3 = 22ll;
			goto label$305;
			label$91:;
			TMP$89$3 = TO_DTYPE$1 & 31ll;
			label$305:;
			if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$89$3 * 56ll)) + 8ll) != *(int64*)((uint8*)&ENV$ + 472ll) ) goto label$93;
			{
				goto label$78;
			}
			label$93:;
			label$92:;
		}
		label$86:;
		label$85:;
		int64 vr$23 = HGETTYPEMISMATCHERRMSG( OPTIONS$1 );
		fb$result$1 = vr$23;
		goto label$78;
	}
	goto label$79;
	label$83:;
	{
		goto label$78;
	}
	label$79:;
	if( (TO_DTYPE$1 & 31ll) != 18ll ) goto label$95;
	{
		if( *(struct $8FBSYMBOL**)((uint8*)TO_SUBTYPE$1 + 168ll) == (struct $8FBSYMBOL*)0ull ) goto label$97;
		{
			if( (EXPR_DTYPE$1 & 31ll) == 18ll ) goto label$99;
			{
				if( (EXPR_DTYPE$1 & 31ll) == 0ll ) goto label$101;
				{
					fb$result$1 = 299ll;
					goto label$78;
				}
				label$101:;
				label$100:;
			}
			goto label$98;
			label$99:;
			{
				int64 vr$33 = SYMBGETUDTBASELEVEL( *(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 16ll), TO_SUBTYPE$1 );
				if( vr$33 != 0ll ) goto label$103;
				{
					int64 vr$36 = SYMBGETUDTBASELEVEL( TO_SUBTYPE$1, *(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 16ll) );
					if( vr$36 != 0ll ) goto label$105;
					{
						fb$result$1 = 300ll;
						goto label$78;
					}
					label$105:;
					label$104:;
				}
				label$103:;
				label$102:;
			}
			label$98:;
		}
		label$97:;
		label$96:;
	}
	label$95:;
	label$94:;
	if( (EXPR_DTYPE$1 & 31ll) != 18ll ) goto label$107;
	{
		if( *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 16ll) + 168ll) == (struct $8FBSYMBOL*)0ull ) goto label$109;
		{
			if( (TO_DTYPE$1 & 31ll) == 18ll ) goto label$111;
			{
				if( (TO_DTYPE$1 & 31ll) == 0ll ) goto label$113;
				{
					fb$result$1 = 301ll;
					goto label$78;
				}
				label$113:;
				label$112:;
			}
			goto label$110;
			label$111:;
			{
				int64 vr$48 = SYMBGETUDTBASELEVEL( TO_SUBTYPE$1, *(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 16ll) );
				if( vr$48 != 0ll ) goto label$115;
				{
					int64 vr$51 = SYMBGETUDTBASELEVEL( *(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 16ll), TO_SUBTYPE$1 );
					if( vr$51 != 0ll ) goto label$117;
					{
						fb$result$1 = 302ll;
						goto label$78;
					}
					label$117:;
					label$116:;
				}
				label$115:;
				label$114:;
			}
			label$110:;
		}
		label$109:;
		label$108:;
	}
	label$107:;
	label$106:;
	label$78:;
	return fb$result$1;
}

// Total compilation time: 0.03653692419175059 seconds.
