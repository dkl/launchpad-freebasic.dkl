// Compilation of fbc-1.01.0/src/compiler/ast-node-uop.bas started at 15:27:39 on 02-28-2015

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
typedef int64 $9FB_ERRMSG;
typedef int64 (*tmp$39)( int64, int64 );
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
typedef void (*tmp$49)( int64, struct $6IRVREG*, struct $6IRVREG* );
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
int32 fb_SGNl( int64 );
int32 fb_SGNDouble( double );
double fb_FIXDouble( double );
double fb_FRACd( double );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__astznodezuop( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
typedef int64 $12FB_ERRMSGOPT;
void ERRREPORTWARN( int64, uint8*, $12FB_ERRMSGOPT );
void ASTDELNODE( struct $7ASTNODE* );
typedef int64 $11AST_CONVOPT;
struct $7ASTNODE* ASTNEWCONV( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, $11AST_CONVOPT, int64* );
void ASTUPDATECONVFD2FS( struct $7ASTNODE*, int64, int64 );
struct $7ASTNODE* ASTNEWBOP( int64, struct $7ASTNODE*, struct $7ASTNODE*, struct $8FBSYMBOL*, $9AST_OPOPT );
struct $7ASTNODE* ASTNEWCONSTI( int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTCONVERTRAWCONSTI( int64, struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWNODE( int64, int64, struct $8FBSYMBOL* );
struct $6IRVREG* ASTLOAD( struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDCALL( struct $8FBSYMBOL*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE* );
struct $8FBSYMBOL* SYMBFINDUOPOVLPROC( $6AST_OP, struct $7ASTNODE*, $9FB_ERRMSG* );
int64 TYPETOSIGNED( int64 );
struct $7ASTNODE* RTLMATHUOP( int64, struct $7ASTNODE* );
static int64 HSGNLONGINT( int64 );
static struct $7ASTNODE* HCONSTUOP( int64, int64, struct $8FBSYMBOL*, struct $7ASTNODE* );
typedef void (*tmp$35)( void );
typedef int64 (*tmp$36)( void );
typedef void (*tmp$37)( double );
typedef int64 $14IR_OPTIONVALUE;
typedef int64 (*tmp$38)( $14IR_OPTIONVALUE );
typedef void (*tmp$40)( struct $8FBSYMBOL* );
typedef void (*tmp$41)( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef uint8* (*tmp$42)( void );
typedef void (*tmp$43)( struct $6IRVREG*, struct $6IRVREG* );
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
struct $20FB_GLOBCTORLIST_ITEM;
struct $20FB_GLOBCTORLIST_ITEM {
	struct $8FBSYMBOL* SYM;
	struct $20FB_GLOBCTORLIST_ITEM* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $20FB_GLOBCTORLIST_ITEM ) == 16 );
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

struct $7ASTNODE* ASTNEWUOP( int64 OP$1, struct $7ASTNODE* O$1 )
{
	int64 TMP$82$1;
	int64 TMP$85$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$55:;
	struct $7ASTNODE* N$1;
	int64 DTYPE$1;
	int64 RANK$1;
	int64 INTRANK$1;
	int64 UINTRANK$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	if( O$1 != (struct $7ASTNODE*)0ull ) goto label$58;
	{
		goto label$56;
	}
	label$58:;
	label$57:;
	if( *(struct $8FBSYMBOL**)((uint8*)((uint8*)&SYMB$ + (OP$1 << 3ll)) + 198168ll) == (struct $8FBSYMBOL*)0ull ) goto label$60;
	{
		struct $8FBSYMBOL* PROC$2;
		$9FB_ERRMSG ERR_NUM$2;
		struct $8FBSYMBOL* vr$6 = SYMBFINDUOPOVLPROC( OP$1, O$1, &ERR_NUM$2 );
		PROC$2 = vr$6;
		if( PROC$2 == (struct $8FBSYMBOL*)0ull ) goto label$62;
		{
			struct $7ASTNODE* vr$8 = ASTBUILDCALL( PROC$2, O$1, (struct $7ASTNODE*)0ull, (struct $7ASTNODE*)0ull );
			fb$result$1 = vr$8;
			goto label$56;
		}
		goto label$61;
		label$62:;
		{
			if( ERR_NUM$2 == 0ll ) goto label$64;
			{
				goto label$56;
			}
			label$64:;
			label$63:;
		}
		label$61:;
	}
	label$60:;
	label$59:;
	if( OP$1 != 75ll ) goto label$66;
	{
		struct $7ASTNODE* vr$13 = ASTNEWNODE( 4ll, *(int64*)((uint8*)O$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)O$1 + 16ll) );
		N$1 = vr$13;
		*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = O$1;
		*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = (struct $7ASTNODE*)0ull;
		*(int64*)((uint8*)N$1 + 40ll) = OP$1;
		*(struct $8FBSYMBOL**)((uint8*)N$1 + 56ll) = (struct $8FBSYMBOL*)0ull;
		*($9AST_OPOPT*)((uint8*)N$1 + 48ll) = 1ll;
		fb$result$1 = N$1;
		goto label$56;
	}
	label$66:;
	label$65:;
	if( (*(int64*)((uint8*)O$1 + 8ll) & 480ll) == 0ll ) goto label$67;
	TMP$82$1 = 22ll;
	goto label$132;
	label$67:;
	TMP$82$1 = *(int64*)((uint8*)O$1 + 8ll) & 31ll;
	label$132:;
	if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$82$1 * 56ll)) != 2ll ) goto label$69;
	{
		goto label$56;
	}
	label$69:;
	label$68:;
	{
		int64 TMP$83$2;
		uint64 TMP$84$2;
		if( (*(int64*)((uint8*)O$1 + 8ll) & 480ll) == 0ll ) goto label$70;
		TMP$83$2 = 22ll;
		goto label$133;
		label$70:;
		TMP$83$2 = *(int64*)((uint8*)O$1 + 8ll) & 31ll;
		label$133:;
		TMP$84$2 = (uint64)TMP$83$2;
		goto label$72;
		label$73:;
		{
			if( (int64)-(*(int64*)O$1 == 20ll) != 0ll ) goto label$75;
			{
				goto label$56;
			}
			label$75:;
			label$74:;
		}
		goto label$71;
		label$76:;
		{
			struct $7ASTNODE* vr$36 = ASTNEWCONV( *(int64*)((uint8*)O$1 + 8ll) & -512ll, (struct $8FBSYMBOL*)0ull, O$1, 0ll, (int64*)0ull );
			O$1 = vr$36;
			if( O$1 != (struct $7ASTNODE*)0ull ) goto label$78;
			{
				goto label$56;
			}
			label$78:;
			label$77:;
		}
		goto label$71;
		label$79:;
		{
			struct $7ASTNODE* vr$41 = ASTNEWCONV( (*(int64*)((uint8*)O$1 + 8ll) & -512ll) | 7ll, (struct $8FBSYMBOL*)0ull, O$1, 0ll, (int64*)0ull );
			O$1 = vr$41;
		}
		goto label$71;
		label$80:;
		{
			if( OP$1 == 52ll ) goto label$82;
			{
				goto label$56;
			}
			label$82:;
			label$81:;
		}
		goto label$71;
		label$72:;
		static const void* tmp$97[20ll] = {
			&&label$73,
			&&label$71,
			&&label$71,
			&&label$73,
			&&label$71,
			&&label$71,
			&&label$79,
			&&label$71,
			&&label$71,
			&&label$71,
			&&label$71,
			&&label$71,
			&&label$71,
			&&label$71,
			&&label$71,
			&&label$76,
			&&label$71,
			&&label$71,
			&&label$71,
			&&label$80,
		};
		if( TMP$84$2 < 3ll ) goto label$71;
		if( TMP$84$2 > 22ll ) goto label$71;
		goto *tmp$97[TMP$84$2 - 3ll];
		label$71:;
	}
	if( (*(int64*)((uint8*)O$1 + 8ll) & 480ll) == 0ll ) goto label$83;
	TMP$85$1 = 22ll;
	goto label$134;
	label$83:;
	TMP$85$1 = *(int64*)((uint8*)O$1 + 8ll) & 31ll;
	label$134:;
	if( ((int64)-(*(int64*)((uint8*)&ENV$ + 272ll) != 3ll) & (int64)-(*(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$85$1 * 56ll)) == 0ll)) == 0ll ) goto label$85;
	{
		int64 TMP$86$2;
		int64 TMP$87$2;
		int64 TMP$88$2;
		if( (*(int64*)((uint8*)O$1 + 8ll) & 480ll) == 0ll ) goto label$86;
		TMP$86$2 = 22ll;
		goto label$135;
		label$86:;
		TMP$86$2 = *(int64*)((uint8*)O$1 + 8ll) & 31ll;
		label$135:;
		if( (*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$86$2 * 56ll)) + 32ll) & 480ll) == 0ll ) goto label$88;
		TMP$88$2 = 22ll;
		goto label$136;
		label$88:;
		if( (*(int64*)((uint8*)O$1 + 8ll) & 480ll) == 0ll ) goto label$87;
		TMP$87$2 = 22ll;
		goto label$137;
		label$87:;
		TMP$87$2 = *(int64*)((uint8*)O$1 + 8ll) & 31ll;
		label$137:;
		TMP$88$2 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$87$2 * 56ll)) + 32ll) & 31ll;
		label$136:;
		RANK$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$88$2 * 56ll)) + 24ll);
		INTRANK$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + 416ll);
		UINTRANK$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + 472ll);
		if( RANK$1 >= INTRANK$1 ) goto label$90;
		{
			struct $7ASTNODE* vr$73 = ASTNEWCONV( (*(int64*)((uint8*)O$1 + 8ll) & -512ll) | 7ll, (struct $8FBSYMBOL*)0ull, O$1, 0ll, (int64*)0ull );
			O$1 = vr$73;
		}
		goto label$89;
		label$90:;
		{
			if( ((int64)-(INTRANK$1 < RANK$1) & (int64)-(RANK$1 < UINTRANK$1)) == 0ll ) goto label$92;
			{
				struct $7ASTNODE* vr$81 = ASTNEWCONV( (*(int64*)((uint8*)O$1 + 8ll) & -512ll) | 8ll, (struct $8FBSYMBOL*)0ull, O$1, 0ll, (int64*)0ull );
				O$1 = vr$81;
			}
			label$92:;
			label$91:;
		}
		label$89:;
	}
	label$85:;
	label$84:;
	DTYPE$1 = *(int64*)((uint8*)O$1 + 8ll);
	SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)O$1 + 16ll);
	{
		uint64 TMP$89$2;
		TMP$89$2 = (uint64)OP$1;
		goto label$94;
		label$95:;
		{
			int64 TMP$90$3;
			if( (*(int64*)((uint8*)O$1 + 8ll) & 480ll) == 0ll ) goto label$96;
			TMP$90$3 = 22ll;
			goto label$138;
			label$96:;
			TMP$90$3 = *(int64*)((uint8*)O$1 + 8ll) & 31ll;
			label$138:;
			if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$90$3 * 56ll)) == 0ll ) goto label$98;
			{
				struct $7ASTNODE* vr$94 = ASTNEWCONV( (*(int64*)((uint8*)O$1 + 8ll) & -512ll) | 7ll, (struct $8FBSYMBOL*)0ull, O$1, 0ll, (int64*)0ull );
				O$1 = vr$94;
				DTYPE$1 = *(int64*)((uint8*)O$1 + 8ll);
				SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)O$1 + 16ll);
			}
			label$98:;
			label$97:;
		}
		goto label$93;
		label$99:;
		{
			int64 TMP$91$3;
			if( (*(int64*)((uint8*)O$1 + 8ll) & 480ll) == 0ll ) goto label$100;
			TMP$91$3 = 22ll;
			goto label$139;
			label$100:;
			TMP$91$3 = *(int64*)((uint8*)O$1 + 8ll) & 31ll;
			label$139:;
			if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$91$3 * 56ll)) != 0ll ) goto label$102;
			{
				int64 vr$104 = TYPETOSIGNED( DTYPE$1 );
				DTYPE$1 = vr$104;
			}
			label$102:;
			label$101:;
		}
		goto label$93;
		label$103:;
		{
			int64 TMP$92$3;
			if( (*(int64*)((uint8*)O$1 + 8ll) & 480ll) == 0ll ) goto label$104;
			TMP$92$3 = 22ll;
			goto label$140;
			label$104:;
			TMP$92$3 = *(int64*)((uint8*)O$1 + 8ll) & 31ll;
			label$140:;
			if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$92$3 * 56ll)) == 1ll ) goto label$106;
			{
				struct $7ASTNODE* vr$115 = ASTNEWCONV( (*(int64*)((uint8*)O$1 + 8ll) & -512ll) | 15ll, (struct $8FBSYMBOL*)0ull, O$1, 0ll, (int64*)0ull );
				O$1 = vr$115;
				DTYPE$1 = *(int64*)((uint8*)O$1 + 8ll);
				SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)O$1 + 16ll);
			}
			label$106:;
			label$105:;
		}
		goto label$93;
		label$107:;
		{
			int64 TMP$93$3;
			if( (*(int64*)((uint8*)O$1 + 8ll) & 480ll) == 0ll ) goto label$108;
			TMP$93$3 = 22ll;
			goto label$141;
			label$108:;
			TMP$93$3 = *(int64*)((uint8*)O$1 + 8ll) & 31ll;
			label$141:;
			if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$93$3 * 56ll)) != 0ll ) goto label$110;
			{
				struct $7ASTNODE* vr$125 = ASTNEWCONSTI( 0ll, DTYPE$1, (struct $8FBSYMBOL*)0ull );
				struct $7ASTNODE* vr$126 = ASTNEWBOP( 28ll, O$1, vr$125, (struct $8FBSYMBOL*)0ull, 1ll );
				fb$result$1 = vr$126;
				goto label$56;
			}
			label$110:;
			label$109:;
		}
		goto label$93;
		label$111:;
		{
			int64 TMP$94$3;
			if( (*(int64*)((uint8*)O$1 + 8ll) & 480ll) == 0ll ) goto label$112;
			TMP$94$3 = 22ll;
			goto label$142;
			label$112:;
			TMP$94$3 = *(int64*)((uint8*)O$1 + 8ll) & 31ll;
			label$142:;
			if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$94$3 * 56ll)) != 0ll ) goto label$114;
			{
				struct $7ASTNODE* vr$134 = ASTNEWCONSTI( 0ll, DTYPE$1, (struct $8FBSYMBOL*)0ull );
				struct $7ASTNODE* vr$135 = ASTNEWBOP( 34ll, O$1, vr$134, (struct $8FBSYMBOL*)0ull, 1ll );
				fb$result$1 = vr$135;
				goto label$56;
			}
			label$114:;
			label$113:;
		}
		goto label$93;
		label$115:;
		{
			fb$result$1 = O$1;
			goto label$56;
		}
		goto label$93;
		label$94:;
		static const void* tmp$98[21ll] = {
			&&label$95,
			&&label$115,
			&&label$93,
			&&label$93,
			&&label$93,
			&&label$99,
			&&label$103,
			&&label$103,
			&&label$103,
			&&label$103,
			&&label$103,
			&&label$103,
			&&label$93,
			&&label$103,
			&&label$93,
			&&label$93,
			&&label$103,
			&&label$103,
			&&label$107,
			&&label$107,
			&&label$111,
		};
		if( TMP$89$2 < 52ll ) goto label$93;
		if( TMP$89$2 > 72ll ) goto label$93;
		goto *tmp$98[TMP$89$2 - 52ll];
		label$93:;
	}
	if( *(int64*)O$1 != 16ll ) goto label$117;
	{
		if( OP$1 != 54ll ) goto label$119;
		{
			int64 TMP$95$3;
			if( (*(int64*)((uint8*)O$1 + 8ll) & 480ll) == 0ll ) goto label$120;
			TMP$95$3 = 22ll;
			goto label$143;
			label$120:;
			TMP$95$3 = *(int64*)((uint8*)O$1 + 8ll) & 31ll;
			label$143:;
			if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$95$3 * 56ll)) + 16ll) != 0ll ) goto label$122;
			{
				if( *(int64*)((uint8*)&AST$ + 464ll) != 0ll ) goto label$124;
				{
					int64 TMP$96$5;
					if( (DTYPE$1 & 480ll) == 0ll ) goto label$125;
					TMP$96$5 = 22ll;
					goto label$144;
					label$125:;
					TMP$96$5 = DTYPE$1 & 31ll;
					label$144:;
					if( *(uint64*)((uint8*)O$1 + 40ll) <= (1ull << ((*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$96$5 * 56ll)) + 8ll) << 3ll) + -1ll)) ) goto label$127;
					{
						ERRREPORTWARN( 5ll, (uint8*)0ull, 1ll );
					}
					label$127:;
					label$126:;
				}
				label$124:;
				label$123:;
				int64 vr$156 = TYPETOSIGNED( DTYPE$1 );
				DTYPE$1 = vr$156;
			}
			label$122:;
			label$121:;
		}
		label$119:;
		label$118:;
		struct $7ASTNODE* vr$157 = HCONSTUOP( OP$1, DTYPE$1, SUBTYPE$1, O$1 );
		O$1 = vr$157;
		*(int64*)((uint8*)O$1 + 8ll) = DTYPE$1;
		fb$result$1 = O$1;
		goto label$56;
	}
	label$117:;
	label$116:;
	if( (*(int64*)((uint8*)&IR$ + 568ll) & 131072ll) == 0ll ) goto label$129;
	{
		int64 vr$161 = (*(tmp$39*)((uint8*)&IR$ + 48ll))( OP$1, DTYPE$1 );
		if( vr$161 != 0ll ) goto label$131;
		{
			struct $7ASTNODE* vr$163 = RTLMATHUOP( OP$1, O$1 );
			fb$result$1 = vr$163;
			goto label$56;
		}
		label$131:;
		label$130:;
	}
	label$129:;
	label$128:;
	struct $7ASTNODE* vr$164 = ASTNEWNODE( 4ll, DTYPE$1, SUBTYPE$1 );
	N$1 = vr$164;
	*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = O$1;
	*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = (struct $7ASTNODE*)0ull;
	*(int64*)((uint8*)N$1 + 40ll) = OP$1;
	*(struct $8FBSYMBOL**)((uint8*)N$1 + 56ll) = (struct $8FBSYMBOL*)0ull;
	*($9AST_OPOPT*)((uint8*)N$1 + 48ll) = 1ll;
	fb$result$1 = N$1;
	label$56:;
	return fb$result$1;
}

struct $6IRVREG* ASTLOADUOP( struct $7ASTNODE* N$1 )
{
	struct $6IRVREG* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$145:;
	struct $7ASTNODE* O$1;
	int64 OP$1;
	struct $6IRVREG* V1$1;
	struct $6IRVREG* VR$1;
	O$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
	OP$1 = *(int64*)((uint8*)N$1 + 40ll);
	if( O$1 != (struct $7ASTNODE*)0ull ) goto label$148;
	{
		fb$result$1 = (struct $6IRVREG*)0ull;
		goto label$146;
	}
	label$148:;
	label$147:;
	if( *(int64*)O$1 != 5ll ) goto label$150;
	{
		ASTUPDATECONVFD2FS( O$1, *(int64*)((uint8*)N$1 + 8ll), -1ll );
	}
	label$150:;
	label$149:;
	struct $6IRVREG* vr$7 = ASTLOAD( O$1 );
	V1$1 = vr$7;
	if( *(int64*)((uint8*)&AST$ + 272ll) == 0ll ) goto label$152;
	{
		if( (*(int64*)((uint8*)N$1 + 48ll) & 1ll) == 0ll ) goto label$154;
		{
			struct $6IRVREG* vr$15 = (*(tmp$64*)((uint8*)&IR$ + 472ll))( *(int64*)((uint8*)O$1 + 8ll) & 511ll, *(struct $8FBSYMBOL**)((uint8*)O$1 + 16ll) );
			VR$1 = vr$15;
			*(int64*)((uint8*)V1$1 + 40ll) = *(int64*)((uint8*)N$1 + 32ll);
			*(int64*)((uint8*)VR$1 + 40ll) = *(int64*)((uint8*)N$1 + 32ll);
		}
		goto label$153;
		label$154:;
		{
			VR$1 = (struct $6IRVREG*)0ull;
			*(int64*)((uint8*)V1$1 + 40ll) = *(int64*)((uint8*)N$1 + 32ll);
		}
		label$153:;
		(*(tmp$49*)((uint8*)&IR$ + 224ll))( OP$1, V1$1, VR$1 );
		if( VR$1 != (struct $6IRVREG*)0ull ) goto label$156;
		{
			VR$1 = V1$1;
		}
		label$156:;
		label$155:;
	}
	label$152:;
	label$151:;
	ASTDELNODE( O$1 );
	fb$result$1 = VR$1;
	label$146:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__astznodezuop( void )
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

static int64 HSGNLONGINT( int64 X$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$10:;
	if( X$1 != 0ll ) goto label$13;
	{
		fb$result$1 = 0ll;
	}
	goto label$12;
	label$13:;
	if( X$1 <= 0ll ) goto label$14;
	{
		fb$result$1 = 1ll;
	}
	goto label$12;
	label$14:;
	{
		fb$result$1 = -1ll;
	}
	label$12:;
	label$11:;
	return fb$result$1;
}

static struct $7ASTNODE* HCONSTUOP( int64 OP$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, struct $7ASTNODE* L$1 )
{
	int64 TMP$77$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$15:;
	double D$1;
	int64 I$1;
	if( (*(int64*)((uint8*)L$1 + 8ll) & 480ll) == 0ll ) goto label$17;
	TMP$77$1 = 22ll;
	goto label$157;
	label$17:;
	TMP$77$1 = *(int64*)((uint8*)L$1 + 8ll) & 31ll;
	label$157:;
	if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$77$1 * 56ll)) != 1ll ) goto label$19;
	{
		D$1 = *(double*)((uint8*)L$1 + 40ll);
		{
			uint64 TMP$78$3;
			TMP$78$3 = (uint64)OP$1;
			goto label$21;
			label$22:;
			{
				D$1 = -D$1;
			}
			goto label$20;
			label$23:;
			{
				D$1 = __builtin_fabs( D$1 );
			}
			goto label$20;
			label$24:;
			{
				int32 vr$11 = fb_SGNDouble( D$1 );
				D$1 = (double)vr$11;
			}
			goto label$20;
			label$25:;
			{
				D$1 = __builtin_sin( D$1 );
			}
			goto label$20;
			label$26:;
			{
				D$1 = __builtin_asin( D$1 );
			}
			goto label$20;
			label$27:;
			{
				D$1 = __builtin_cos( D$1 );
			}
			goto label$20;
			label$28:;
			{
				D$1 = __builtin_acos( D$1 );
			}
			goto label$20;
			label$29:;
			{
				D$1 = __builtin_tan( D$1 );
			}
			goto label$20;
			label$30:;
			{
				D$1 = __builtin_atan( D$1 );
			}
			goto label$20;
			label$31:;
			{
				D$1 = __builtin_sqrt( D$1 );
			}
			goto label$20;
			label$32:;
			{
				D$1 = __builtin_log( D$1 );
			}
			goto label$20;
			label$33:;
			{
				D$1 = __builtin_exp( D$1 );
			}
			goto label$20;
			label$34:;
			{
				D$1 = __builtin_floor( D$1 );
			}
			goto label$20;
			label$35:;
			{
				double vr$23 = fb_FIXDouble( D$1 );
				D$1 = vr$23;
			}
			goto label$20;
			label$36:;
			{
				double vr$24 = fb_FRACd( D$1 );
				D$1 = vr$24;
			}
			goto label$20;
			label$37:;
			{
			}
			goto label$20;
			label$21:;
			static const void* tmp$99[19ll] = {
				&&label$22,
				&&label$37,
				&&label$23,
				&&label$24,
				&&label$25,
				&&label$26,
				&&label$27,
				&&label$28,
				&&label$29,
				&&label$30,
				&&label$37,
				&&label$31,
				&&label$37,
				&&label$37,
				&&label$32,
				&&label$33,
				&&label$34,
				&&label$35,
				&&label$36,
			};
			if( TMP$78$3 < 54ll ) goto label$37;
			if( TMP$78$3 > 72ll ) goto label$37;
			goto *tmp$99[TMP$78$3 - 54ll];
			label$20:;
		}
		*(double*)((uint8*)L$1 + 40ll) = D$1;
	}
	goto label$18;
	label$19:;
	{
		int64 TMP$79$2;
		I$1 = *(int64*)((uint8*)L$1 + 40ll);
		if( (*(int64*)((uint8*)L$1 + 8ll) & 480ll) == 0ll ) goto label$38;
		TMP$79$2 = 22ll;
		goto label$158;
		label$38:;
		TMP$79$2 = *(int64*)((uint8*)L$1 + 8ll) & 31ll;
		label$158:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$79$2 * 56ll)) + 8ll) != 8ll ) goto label$40;
		{
			{
				uint64 TMP$80$4;
				TMP$80$4 = (uint64)OP$1;
				goto label$42;
				label$43:;
				{
					I$1 = ~I$1;
				}
				goto label$41;
				label$44:;
				{
					I$1 = -I$1;
				}
				goto label$41;
				label$45:;
				{
					I$1 = __builtin_llabs( I$1 );
				}
				goto label$41;
				label$46:;
				{
					int64 vr$37 = HSGNLONGINT( I$1 );
					I$1 = vr$37;
				}
				goto label$41;
				label$47:;
				{
				}
				goto label$41;
				label$42:;
				static const void* tmp$100[6ll] = {
					&&label$43,
					&&label$47,
					&&label$44,
					&&label$47,
					&&label$45,
					&&label$46,
				};
				if( TMP$80$4 < 52ll ) goto label$47;
				if( TMP$80$4 > 57ll ) goto label$47;
				goto *tmp$100[TMP$80$4 - 52ll];
				label$41:;
			}
		}
		goto label$39;
		label$40:;
		{
			{
				uint64 TMP$81$4;
				TMP$81$4 = (uint64)OP$1;
				goto label$49;
				label$50:;
				{
					I$1 = ~(int64)(int32)I$1;
				}
				goto label$48;
				label$51:;
				{
					I$1 = -(int64)(int32)I$1;
				}
				goto label$48;
				label$52:;
				{
					I$1 = __builtin_llabs( (int64)(int32)I$1 );
				}
				goto label$48;
				label$53:;
				{
					int32 vr$49 = fb_SGNl( (int64)(int32)I$1 );
					I$1 = (int64)vr$49;
				}
				goto label$48;
				label$54:;
				{
				}
				goto label$48;
				label$49:;
				static const void* tmp$101[6ll] = {
					&&label$50,
					&&label$54,
					&&label$51,
					&&label$54,
					&&label$52,
					&&label$53,
				};
				if( TMP$81$4 < 52ll ) goto label$54;
				if( TMP$81$4 > 57ll ) goto label$54;
				goto *tmp$101[TMP$81$4 - 52ll];
				label$48:;
			}
		}
		label$39:;
		*(int64*)((uint8*)L$1 + 40ll) = I$1;
		struct $7ASTNODE* vr$52 = ASTCONVERTRAWCONSTI( DTYPE$1, SUBTYPE$1, L$1 );
		L$1 = vr$52;
	}
	label$18:;
	fb$result$1 = L$1;
	label$16:;
	return fb$result$1;
}

// Total compilation time: 0.03412991424556822 seconds.
