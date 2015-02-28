// Compilation of FreeBASIC-1.01.0-source/src/compiler/ast-node-call.bas started at 16:30:09 on 02-28-2015

typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
struct $7TLISTTB;
struct $7TLISTTB {
	struct $7TLISTTB* NEXT;
	void* NODETB;
	int64 NODES;
};
#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]
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
typedef int64 $13AST_NODECLASS;
typedef int64 $12FB_SYMBCLASS;
typedef int64 $13FB_SYMBATTRIB;
typedef int64 $12FB_SYMBSTATS;
struct $9FB_SYMBID {
	uint8* NAME;
	uint8* ALIAS;
	uint8* MANGLED;
};
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
typedef void (*tmp$46)( struct $8FBSYMBOL*, struct $6IRVREG*, int64, int64 );
typedef struct $6IRVREG* (*tmp$64)( int64, struct $8FBSYMBOL* );
typedef void (*tmp$53)( struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG*, int64, int64 );
typedef void (*tmp$52)( struct $8FBSYMBOL*, int64, struct $6IRVREG*, int64 );
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__astznodezcall( void ) __attribute__(( constructor ));
void LISTINIT( struct $5TLIST*, int64, int64, $10LIST_FLAGS );
void LISTEND( struct $5TLIST* );
void* LISTNEWNODE( struct $5TLIST* );
void LISTDELNODE( struct $5TLIST*, void* );
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRREPORT( int64, int64, uint8* );
void ASTDELNODE( struct $7ASTNODE* );
struct $7ASTNODE* ASTCLONETREE( struct $7ASTNODE* );
void ASTDELTREE( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWASSIGN( struct $7ASTNODE*, struct $7ASTNODE*, $9AST_OPOPT );
void ASTUPDATECONVFD2FS( struct $7ASTNODE*, int64, int64 );
struct $7ASTNODE* ASTNEWVAR( struct $8FBSYMBOL*, int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWDEREF( struct $7ASTNODE*, int64, struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* ASTNEWADDROF( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWLINK( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTNEWNODE( int64, int64, struct $8FBSYMBOL* );
struct $6IRVREG* ASTLOAD( struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDVARFIELD( struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* ASTBUILDTEMPVARCLEAR( struct $8FBSYMBOL* );
void ASTREPLACESYMBOLONTREE( struct $7ASTNODE*, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
void ASTDTORLISTADD( struct $8FBSYMBOL* );
void ASTSETTYPE( struct $7ASTNODE*, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTBUILDCALLRESULTVAR( struct $7ASTNODE* );
struct $8FBSYMBOL* SYMBADDTEMPVAR( int64, struct $8FBSYMBOL* );
int64 SYMBPROCRETURNSONSTACK( struct $8FBSYMBOL* );
int64 SYMBCALCARGLEN( int64, struct $8FBSYMBOL*, int64 );
int64 SYMBHASCTOR( struct $8FBSYMBOL* );
struct $7ASTNODE* RTLSTRASSIGN( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* RTLSTRDELETE( struct $7ASTNODE* );
struct $7ASTNODE* RTLERRORCHECK( struct $7ASTNODE* );
static void HCOPYSTRINGSBACK( struct $7ASTNODE* );
typedef void (*tmp$35)( void );
typedef int64 (*tmp$36)( void );
typedef void (*tmp$37)( double );
typedef int64 $14IR_OPTIONVALUE;
typedef int64 (*tmp$38)( $14IR_OPTIONVALUE );
typedef int64 (*tmp$39)( int64, int64 );
typedef void (*tmp$40)( struct $8FBSYMBOL* );
typedef void (*tmp$41)( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef uint8* (*tmp$42)( void );
typedef void (*tmp$43)( struct $6IRVREG*, struct $6IRVREG* );
typedef void (*tmp$44)( int64 );
typedef void (*tmp$45)( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef void (*tmp$47)( uint8* );
typedef void (*tmp$48)( int64, struct $6IRVREG*, struct $6IRVREG*, struct $6IRVREG*, struct $8FBSYMBOL* );
typedef void (*tmp$49)( int64, struct $6IRVREG*, struct $6IRVREG* );
typedef void (*tmp$50)( struct $6IRVREG* );
typedef void (*tmp$51)( int64, struct $6IRVREG* );
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

void ASTCALLINIT( void )
{
	label$10:;
	LISTINIT( (struct $5TLIST*)((uint8*)&AST$ + 88ll), 32ll, 24ll, 6ll );
	label$11:;
}

void ASTCALLEND( void )
{
	label$12:;
	LISTEND( (struct $5TLIST*)((uint8*)&AST$ + 88ll) );
	label$13:;
}

struct $7ASTNODE* ASTNEWCALL( struct $8FBSYMBOL* SYM$1, struct $7ASTNODE* PTREXPR$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$14:;
	struct $7ASTNODE* N$1;
	tmp$28 CALLBACK$1;
	int64 DTYPE$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	if( PTREXPR$1 == (struct $7ASTNODE*)0ull ) goto label$17;
	{
		SYM$1 = *(struct $8FBSYMBOL**)((uint8*)PTREXPR$1 + 16ll);
	}
	label$17:;
	label$16:;
	DTYPE$1 = *(int64*)((uint8*)SYM$1 + 48ll);
	SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll);
	*($12FB_SYMBSTATS*)((uint8*)SYM$1 + 16ll) = *(int64*)((uint8*)SYM$1 + 16ll) | 2ll;
	struct $7ASTNODE* vr$8 = ASTNEWNODE( 9ll, DTYPE$1, SUBTYPE$1 );
	N$1 = vr$8;
	fb$result$1 = N$1;
	*(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) = SYM$1;
	*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = PTREXPR$1;
	*(int64*)((uint8*)N$1 + 48ll) = 0ll;
	if( SYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$19;
	{
		*(struct $8FBSYMBOL**)((uint8*)N$1 + 56ll) = *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 128ll);
		*(int64*)((uint8*)N$1 + 40ll) = (int64)-((*(int64*)((uint8*)SYM$1 + 16ll) & 32ll) != 0ll);
		CALLBACK$1 = *(tmp$28*)((uint8*)SYM$1 + 176ll);
		if( CALLBACK$1 == (tmp$28)0ull ) goto label$21;
		{
			(CALLBACK$1)( SYM$1 );
		}
		label$21:;
		label$20:;
	}
	goto label$18;
	label$19:;
	{
		*(struct $8FBSYMBOL**)((uint8*)N$1 + 56ll) = (struct $8FBSYMBOL*)0ull;
		*(int64*)((uint8*)N$1 + 40ll) = 0ll;
	}
	label$18:;
	*(struct $7ASTNODE**)((uint8*)N$1 + 64ll) = (struct $7ASTNODE*)0ull;
	*(struct $19AST_TMPSTRLIST_ITEM**)((uint8*)N$1 + 72ll) = (struct $19AST_TMPSTRLIST_ITEM*)0ull;
	int64 vr$25 = SYMBPROCRETURNSONSTACK( SYM$1 );
	if( vr$25 == 0ll ) goto label$23;
	{
		struct $8FBSYMBOL* vr$28 = SYMBADDTEMPVAR( 18ll, *(struct $8FBSYMBOL**)((uint8*)SYM$1 + 56ll) );
		*(struct $8FBSYMBOL**)((uint8*)N$1 + 80ll) = vr$28;
		ASTDTORLISTADD( *(struct $8FBSYMBOL**)((uint8*)N$1 + 80ll) );
	}
	goto label$22;
	label$23:;
	{
		*(struct $8FBSYMBOL**)((uint8*)N$1 + 80ll) = (struct $8FBSYMBOL*)0ull;
	}
	label$22:;
	label$15:;
	return fb$result$1;
}

struct $7ASTNODE* ASTNEWCALLCTOR( struct $7ASTNODE* PROCEXPR$1, struct $7ASTNODE* INSTPTR$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$24:;
	struct $7ASTNODE* N$1;
	struct $7ASTNODE* vr$3 = ASTNEWNODE( 10ll, *(int64*)((uint8*)INSTPTR$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)INSTPTR$1 + 16ll) );
	N$1 = vr$3;
	*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = PROCEXPR$1;
	*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = INSTPTR$1;
	fb$result$1 = N$1;
	label$25:;
	return fb$result$1;
}

struct $6IRVREG* ASTLOADCALL( struct $7ASTNODE* N$1 )
{
	struct $6IRVREG* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$30:;
	static int64 RECLEVEL$1 = 0ll;
	struct $7ASTNODE* ARG$1;
	struct $7ASTNODE* NEXTARG$1;
	struct $7ASTNODE* L$1;
	struct $8FBSYMBOL* PROC$1;
	int64 BYTESTOPOP$1;
	int64 BYTESTOALIGN$1;
	struct $6IRVREG* VR$1;
	struct $6IRVREG* V1$1;
	RECLEVEL$1 = RECLEVEL$1 + 1ll;
	PROC$1 = *(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll);
	BYTESTOALIGN$1 = 0ll;
	BYTESTOPOP$1 = 0ll;
	ARG$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
	label$32:;
	if( ARG$1 == (struct $7ASTNODE*)0ull ) goto label$33;
	{
		NEXTARG$1 = *(struct $7ASTNODE**)((uint8*)ARG$1 + 120ll);
		L$1 = *(struct $7ASTNODE**)((uint8*)ARG$1 + 112ll);
		if( *(int64*)((uint8*)PROC$1 + 144ll) != 3ll ) goto label$35;
		{
			int64 vr$12 = SYMBCALCARGLEN( *(int64*)((uint8*)L$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll), *(int64*)((uint8*)ARG$1 + 40ll) );
			BYTESTOPOP$1 = BYTESTOPOP$1 + vr$12;
		}
		label$35:;
		label$34:;
		if( *(int64*)L$1 != 5ll ) goto label$37;
		{
			ASTUPDATECONVFD2FS( L$1, *(int64*)((uint8*)ARG$1 + 8ll), 0ll );
		}
		label$37:;
		label$36:;
		struct $6IRVREG* vr$17 = ASTLOAD( L$1 );
		V1$1 = vr$17;
		ASTDELNODE( L$1 );
		if( *(int64*)((uint8*)&AST$ + 272ll) == 0ll ) goto label$39;
		{
			(*(tmp$46*)((uint8*)&IR$ + 168ll))( *(struct $8FBSYMBOL**)((uint8*)ARG$1 + 24ll), V1$1, *(int64*)((uint8*)ARG$1 + 48ll), RECLEVEL$1 );
		}
		label$39:;
		label$38:;
		ASTDELNODE( ARG$1 );
		ARG$1 = NEXTARG$1;
	}
	goto label$32;
	label$33:;
	int64 vr$21 = SYMBPROCRETURNSONSTACK( PROC$1 );
	if( vr$21 == 0ll ) goto label$41;
	{
		if( ((int64)-(*(int64*)((uint8*)PROC$1 + 144ll) == 3ll) & (int64)-((*(int64*)((uint8*)&ENV$ + 448ll) & 8ll) == 0ll)) == 0ll ) goto label$43;
		{
			BYTESTOPOP$1 = BYTESTOPOP$1 + *(int64*)((uint8*)&ENV$ + 472ll);
		}
		label$43:;
		label$42:;
		if( *(int64*)((uint8*)&AST$ + 272ll) == 0ll ) goto label$45;
		{
			int64 vr$32 = SYMBHASCTOR( *(struct $8FBSYMBOL**)((uint8*)N$1 + 80ll) );
			if( vr$32 != 0ll ) goto label$47;
			{
				struct $7ASTNODE* vr$35 = ASTBUILDTEMPVARCLEAR( *(struct $8FBSYMBOL**)((uint8*)N$1 + 80ll) );
				ASTLOAD( vr$35 );
			}
			label$47:;
			label$46:;
			struct $7ASTNODE* vr$37 = ASTNEWVAR( *(struct $8FBSYMBOL**)((uint8*)N$1 + 80ll), 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			L$1 = vr$37;
			struct $7ASTNODE* vr$38 = ASTNEWADDROF( L$1 );
			L$1 = vr$38;
			struct $6IRVREG* vr$39 = ASTLOAD( L$1 );
			V1$1 = vr$39;
			(*(tmp$46*)((uint8*)&IR$ + 168ll))( (struct $8FBSYMBOL*)0ull, V1$1, 0ll, RECLEVEL$1 );
		}
		label$45:;
		label$44:;
	}
	label$41:;
	label$40:;
	if( *(int64*)((uint8*)&AST$ + 272ll) == 0ll ) goto label$49;
	{
		if( (*(int64*)((uint8*)N$1 + 8ll) & 511ll) != 0ll ) goto label$51;
		{
			VR$1 = (struct $6IRVREG*)0ull;
		}
		goto label$50;
		label$51:;
		{
			struct $6IRVREG* vr$47 = (*(tmp$64*)((uint8*)&IR$ + 472ll))( *(int64*)((uint8*)PROC$1 + 152ll) & 511ll, *(struct $8FBSYMBOL**)((uint8*)PROC$1 + 160ll) );
			VR$1 = vr$47;
			if( *(int64*)((uint8*)PROC$1 + 168ll) == 1ll ) goto label$53;
			{
				*($12IR_REGFAMILY*)((uint8*)VR$1 + 32ll) = 0ll;
			}
			label$53:;
			label$52:;
		}
		label$50:;
	}
	label$49:;
	label$48:;
	BYTESTOPOP$1 = BYTESTOPOP$1 + BYTESTOALIGN$1;
	BYTESTOALIGN$1 = 0ll;
	L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
	if( L$1 == (struct $7ASTNODE*)0ull ) goto label$55;
	{
		struct $6IRVREG* vr$54 = ASTLOAD( L$1 );
		V1$1 = vr$54;
		ASTDELNODE( L$1 );
		if( *(int64*)((uint8*)&AST$ + 272ll) == 0ll ) goto label$57;
		{
			(*(tmp$53*)((uint8*)&IR$ + 288ll))( PROC$1, V1$1, VR$1, BYTESTOPOP$1, RECLEVEL$1 );
		}
		label$57:;
		label$56:;
	}
	goto label$54;
	label$55:;
	{
		if( *(int64*)((uint8*)&AST$ + 272ll) == 0ll ) goto label$59;
		{
			(*(tmp$52*)((uint8*)&IR$ + 280ll))( PROC$1, BYTESTOPOP$1, VR$1, RECLEVEL$1 );
		}
		label$59:;
		label$58:;
	}
	label$54:;
	HCOPYSTRINGSBACK( N$1 );
	RECLEVEL$1 = RECLEVEL$1 + -1ll;
	fb$result$1 = VR$1;
	label$31:;
	return fb$result$1;
}

struct $6IRVREG* ASTLOADCALLCTOR( struct $7ASTNODE* N$1 )
{
	struct $6IRVREG* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$60:;
	struct $6IRVREG* VR$1;
	ASTLOAD( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
	ASTDELNODE( *(struct $7ASTNODE**)((uint8*)N$1 + 112ll) );
	struct $6IRVREG* vr$4 = ASTLOAD( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) );
	VR$1 = vr$4;
	ASTDELNODE( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) );
	fb$result$1 = VR$1;
	label$61:;
	return fb$result$1;
}

void ASTCLONECALL( struct $7ASTNODE* N$1, struct $7ASTNODE* C$1 )
{
	label$62:;
	{
		struct $19AST_TMPSTRLIST_ITEM* SN$2;
		struct $19AST_TMPSTRLIST_ITEM* SC$2;
		*(struct $19AST_TMPSTRLIST_ITEM**)((uint8*)C$1 + 72ll) = (struct $19AST_TMPSTRLIST_ITEM*)0ull;
		SN$2 = *(struct $19AST_TMPSTRLIST_ITEM**)((uint8*)N$1 + 72ll);
		label$64:;
		if( SN$2 == (struct $19AST_TMPSTRLIST_ITEM*)0ull ) goto label$65;
		{
			void* vr$4 = LISTNEWNODE( (struct $5TLIST*)((uint8*)&AST$ + 88ll) );
			SC$2 = (struct $19AST_TMPSTRLIST_ITEM*)vr$4;
			*(struct $8FBSYMBOL**)SC$2 = *(struct $8FBSYMBOL**)SN$2;
			struct $7ASTNODE* vr$8 = ASTCLONETREE( *(struct $7ASTNODE**)((uint8*)SN$2 + 8ll) );
			*(struct $7ASTNODE**)((uint8*)SC$2 + 8ll) = vr$8;
			*(struct $19AST_TMPSTRLIST_ITEM**)((uint8*)SC$2 + 16ll) = *(struct $19AST_TMPSTRLIST_ITEM**)((uint8*)C$1 + 72ll);
			*(struct $19AST_TMPSTRLIST_ITEM**)((uint8*)C$1 + 72ll) = SC$2;
			SN$2 = *(struct $19AST_TMPSTRLIST_ITEM**)((uint8*)SN$2 + 16ll);
		}
		goto label$64;
		label$65:;
	}
	N$1 = *(struct $7ASTNODE**)((uint8*)C$1 + 120ll);
	label$66:;
	if( N$1 == (struct $7ASTNODE*)0ull ) goto label$67;
	{
		if( *(struct $7ASTNODE**)((uint8*)N$1 + 120ll) != (struct $7ASTNODE*)0ull ) goto label$69;
		{
			goto label$67;
		}
		label$69:;
		label$68:;
		N$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
	}
	goto label$66;
	label$67:;
	*(struct $7ASTNODE**)((uint8*)C$1 + 64ll) = N$1;
	label$63:;
}

void ASTDELCALL( struct $7ASTNODE* N$1 )
{
	label$70:;
	{
		struct $19AST_TMPSTRLIST_ITEM* S$2;
		struct $19AST_TMPSTRLIST_ITEM* P$2;
		S$2 = *(struct $19AST_TMPSTRLIST_ITEM**)((uint8*)N$1 + 72ll);
		label$72:;
		if( S$2 == (struct $19AST_TMPSTRLIST_ITEM*)0ull ) goto label$73;
		{
			P$2 = *(struct $19AST_TMPSTRLIST_ITEM**)((uint8*)S$2 + 16ll);
			ASTDELTREE( *(struct $7ASTNODE**)((uint8*)S$2 + 8ll) );
			LISTDELNODE( (struct $5TLIST*)((uint8*)&AST$ + 88ll), (void*)S$2 );
			S$2 = P$2;
		}
		goto label$72;
		label$73:;
	}
	label$71:;
}

void ASTREPLACESYMBOLONCALL( struct $7ASTNODE* N$1, struct $8FBSYMBOL* OLD_SYM$1, struct $8FBSYMBOL* NEW_SYM$1 )
{
	label$74:;
	if( *(struct $8FBSYMBOL**)((uint8*)N$1 + 80ll) != OLD_SYM$1 ) goto label$77;
	{
		*(struct $8FBSYMBOL**)((uint8*)N$1 + 80ll) = NEW_SYM$1;
	}
	label$77:;
	label$76:;
	{
		struct $19AST_TMPSTRLIST_ITEM* S$2;
		S$2 = *(struct $19AST_TMPSTRLIST_ITEM**)((uint8*)N$1 + 72ll);
		label$78:;
		if( S$2 == (struct $19AST_TMPSTRLIST_ITEM*)0ull ) goto label$79;
		{
			if( *(struct $8FBSYMBOL**)S$2 != OLD_SYM$1 ) goto label$81;
			{
				*(struct $8FBSYMBOL**)S$2 = NEW_SYM$1;
			}
			label$81:;
			label$80:;
			ASTREPLACESYMBOLONTREE( *(struct $7ASTNODE**)((uint8*)S$2 + 8ll), OLD_SYM$1, NEW_SYM$1 );
			S$2 = *(struct $19AST_TMPSTRLIST_ITEM**)((uint8*)S$2 + 16ll);
		}
		goto label$78;
		label$79:;
	}
	label$75:;
}

struct $7ASTNODE* ASTBUILDCALLRESULTVAR( struct $7ASTNODE* EXPR$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$82:;
	struct $7ASTNODE* vr$4 = ASTNEWVAR( *(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 80ll), 0ll, *(int64*)((uint8*)EXPR$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 16ll) );
	struct $7ASTNODE* vr$5 = ASTNEWLINK( EXPR$1, vr$4, 0ll );
	fb$result$1 = vr$5;
	label$83:;
	return fb$result$1;
}

struct $7ASTNODE* ASTBUILDCALLRESULTUDT( struct $7ASTNODE* EXPR$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$84:;
	struct $8FBSYMBOL* TMP$1;
	int64 vr$2 = SYMBPROCRETURNSONSTACK( *(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 24ll) );
	if( vr$2 == 0ll ) goto label$87;
	{
		struct $7ASTNODE* vr$4 = ASTBUILDCALLRESULTVAR( EXPR$1 );
		fb$result$1 = vr$4;
	}
	goto label$86;
	label$87:;
	{
		struct $8FBSYMBOL* vr$6 = SYMBADDTEMPVAR( 18ll, *(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 16ll) );
		TMP$1 = vr$6;
		struct $7ASTNODE* vr$7 = ASTBUILDVARFIELD( TMP$1, (struct $8FBSYMBOL*)0ull, 0ll );
		struct $7ASTNODE* vr$8 = ASTNEWASSIGN( vr$7, EXPR$1, 96ll );
		EXPR$1 = vr$8;
		struct $7ASTNODE* vr$9 = ASTBUILDVARFIELD( TMP$1, (struct $8FBSYMBOL*)0ull, 0ll );
		struct $7ASTNODE* vr$10 = ASTNEWLINK( EXPR$1, vr$9, 0ll );
		fb$result$1 = vr$10;
	}
	label$86:;
	label$85:;
	return fb$result$1;
}

struct $7ASTNODE* ASTBUILDBYREFRESULTDEREF( struct $7ASTNODE* EXPR$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$88:;
	int64 DTYPE$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	if( (int64)-(*(int64*)EXPR$1 == 9ll) != 0ll ) goto label$91;
	{
		fb$result$1 = EXPR$1;
		goto label$89;
	}
	label$91:;
	label$90:;
	if( (int64)-((*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 24ll) + 8ll) & 33554432ll) != 0ll) != 0ll ) goto label$93;
	{
		fb$result$1 = EXPR$1;
		goto label$89;
	}
	label$93:;
	label$92:;
	DTYPE$1 = *(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 24ll) + 152ll);
	SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)EXPR$1 + 24ll) + 160ll);
	if( (DTYPE$1 & 31ll) != 21ll ) goto label$95;
	{
		ERRREPORT( 70ll, 0ll, (uint8*)0ull );
		DTYPE$1 = (DTYPE$1 & -32ll) | 7ll;
		SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
	}
	label$95:;
	label$94:;
	ASTSETTYPE( EXPR$1, DTYPE$1, SUBTYPE$1 );
	struct $7ASTNODE* vr$17 = ASTNEWDEREF( EXPR$1, 2147483648ll, (struct $8FBSYMBOL*)0ull, 0ll );
	fb$result$1 = vr$17;
	label$89:;
	return fb$result$1;
}

int64 ASTISBYREFRESULTDEREF( struct $7ASTNODE* EXPR$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$96:;
	fb$result$1 = 0ll;
	if( *(int64*)EXPR$1 != 20ll ) goto label$99;
	{
		if( *(int64*)*(struct $7ASTNODE**)((uint8*)EXPR$1 + 112ll) != 9ll ) goto label$101;
		{
			fb$result$1 = (int64)-((*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)*(struct $7ASTNODE**)((uint8*)EXPR$1 + 112ll) + 24ll) + 8ll) & 33554432ll) != 0ll);
		}
		label$101:;
		label$100:;
	}
	label$99:;
	label$98:;
	label$97:;
	return fb$result$1;
}

struct $7ASTNODE* ASTREMOVEBYREFRESULTDEREF( struct $7ASTNODE* EXPR$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$102:;
	fb$result$1 = *(struct $7ASTNODE**)((uint8*)EXPR$1 + 112ll);
	ASTDELNODE( EXPR$1 );
	label$103:;
	return fb$result$1;
}

struct $7ASTNODE* ASTIGNORECALLRESULT( struct $7ASTNODE* N$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$114:;
	int64 DTYPE$1;
	DTYPE$1 = *(int64*)((uint8*)N$1 + 8ll) & 511ll;
	if( DTYPE$1 != 0ll ) goto label$117;
	{
		fb$result$1 = N$1;
		goto label$115;
	}
	label$117:;
	label$116:;
	if( *(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) == (struct $8FBSYMBOL*)0ull ) goto label$119;
	{
		if( (*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) + 16ll) & 64ll) == 0ll ) goto label$121;
		{
			struct $7ASTNODE* vr$10 = RTLERRORCHECK( N$1 );
			fb$result$1 = vr$10;
			goto label$115;
		}
		label$121:;
		label$120:;
	}
	label$119:;
	label$118:;
	{
		if( DTYPE$1 == 16ll ) goto label$124;
		label$125:;
		if( DTYPE$1 != 6ll ) goto label$123;
		label$124:;
		{
			if( DTYPE$1 != 6ll ) goto label$127;
			{
				ASTSETTYPE( N$1, 38ll, (struct $8FBSYMBOL*)0ull );
			}
			label$127:;
			label$126:;
			struct $7ASTNODE* vr$14 = RTLSTRDELETE( N$1 );
			fb$result$1 = vr$14;
			goto label$115;
		}
		label$123:;
		label$122:;
	}
	ASTSETTYPE( N$1, 0ll, (struct $8FBSYMBOL*)0ull );
	fb$result$1 = N$1;
	label$115:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__astznodezcall( void )
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

static void HCOPYSTRINGSBACK( struct $7ASTNODE* F$1 )
{
	label$26:;
	struct $7ASTNODE* T$1;
	struct $19AST_TMPSTRLIST_ITEM* N$1;
	struct $19AST_TMPSTRLIST_ITEM* P$1;
	N$1 = *(struct $19AST_TMPSTRLIST_ITEM**)((uint8*)F$1 + 72ll);
	label$28:;
	if( N$1 == (struct $19AST_TMPSTRLIST_ITEM*)0ull ) goto label$29;
	{
		struct $7ASTNODE* vr$3 = ASTNEWVAR( *(struct $8FBSYMBOL**)N$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$5 = RTLSTRASSIGN( *(struct $7ASTNODE**)((uint8*)N$1 + 8ll), vr$3, 0ll );
		T$1 = vr$5;
		ASTLOAD( T$1 );
		ASTDELNODE( T$1 );
		P$1 = *(struct $19AST_TMPSTRLIST_ITEM**)((uint8*)N$1 + 16ll);
		LISTDELNODE( (struct $5TLIST*)((uint8*)&AST$ + 88ll), (void*)N$1 );
		N$1 = P$1;
	}
	goto label$28;
	label$29:;
	label$27:;
}

// Total compilation time: 0.03784310549963266 seconds.
