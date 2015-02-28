// Compilation of fbc-1.01.0/src/compiler/ast-node-bop.bas started at 15:27:38 on 02-28-2015

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
typedef int64 $13FB_WARNINGMSG;
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
typedef void (*tmp$48)( int64, struct $6IRVREG*, struct $6IRVREG*, struct $6IRVREG*, struct $8FBSYMBOL* );
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
struct $8DZSTRING {
	uint8* DATA;
	int64 LEN;
	int64 SIZE;
};
__FB_STATIC_ASSERT( sizeof( struct $8DZSTRING ) == 24 );
struct $8DWSTRING {
	uint32* DATA;
	int64 LEN;
	int64 SIZE;
};
__FB_STATIC_ASSERT( sizeof( struct $8DWSTRING ) == 24 );
double pow( double, double );
double atan2( double, double );
void fb_MemSwap( void*, void*, int64 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
void fb_WstrDelete( uint32* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
uint32* fb_WstrConcat( uint32*, uint32* );
int32 fb_StrCompare( void*, int64, void*, int64 );
int32 fb_WstrCompare( uint32*, uint32* );
uint32* fb_StrToWstr( uint8* );
static void fb_ctor__astznodezbop( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ERRREPORT( int64, int64, uint8* );
typedef int64 $12FB_ERRMSGOPT;
void ERRREPORTWARN( int64, uint8*, $12FB_ERRMSGOPT );
void ASTDELNODE( struct $7ASTNODE* );
struct $7ASTNODE* ASTCLONETREE( struct $7ASTNODE* );
void ASTDELTREE( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWASSIGN( struct $7ASTNODE*, struct $7ASTNODE*, $9AST_OPOPT );
typedef int64 $11AST_CONVOPT;
struct $7ASTNODE* ASTNEWCONV( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, $11AST_CONVOPT, int64* );
void ASTUPDATECONVFD2FS( struct $7ASTNODE*, int64, int64 );
struct $7ASTNODE* ASTNEWBOP( int64, struct $7ASTNODE*, struct $7ASTNODE*, struct $8FBSYMBOL*, $9AST_OPOPT );
struct $7ASTNODE* ASTNEWUOP( int64, struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWCONSTSTR( uint8* );
struct $7ASTNODE* ASTNEWCONSTI( int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWCONSTF( double, int64 );
int64 ASTCONSTGETASINT64( struct $7ASTNODE* );
struct $7ASTNODE* ASTCONVERTRAWCONSTI( int64, struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWVAR( struct $8FBSYMBOL*, int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWIIF( struct $7ASTNODE*, struct $7ASTNODE*, int64, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTNEWLINK( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTNEWNODE( int64, int64, struct $8FBSYMBOL* );
struct $6IRVREG* ASTLOAD( struct $7ASTNODE* );
int64 ASTHASSIDEFX( struct $7ASTNODE* );
struct $8FBSYMBOL* ASTGETSTRLITSYMBOL( struct $7ASTNODE* );
struct $7ASTNODE* ASTMAKEREF( struct $7ASTNODE** );
struct $7ASTNODE* ASTBUILDCALL( struct $8FBSYMBOL*, struct $7ASTNODE*, struct $7ASTNODE*, struct $7ASTNODE* );
struct $8FBSYMBOL* SYMBFINDBOPOVLPROC( $6AST_OP, struct $7ASTNODE*, struct $7ASTNODE*, $9FB_ERRMSG* );
struct $8FBSYMBOL* SYMBFINDSELFBOPOVLPROC( $6AST_OP, struct $7ASTNODE*, struct $7ASTNODE*, $9FB_ERRMSG* );
int64 SYMBCALCDEREFLEN( int64, struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBALLOCSTRCONST( uint8*, int64 );
struct $8FBSYMBOL* SYMBALLOCWSTRCONST( uint32*, int64 );
void TYPEMAX( int64, struct $8FBSYMBOL*, int64, struct $8FBSYMBOL*, int64*, struct $8FBSYMBOL** );
uint8* HUNESCAPE( uint8* );
uint32* HUNESCAPEW( uint32* );
void DZSTRASSIGN( struct $8DZSTRING*, uint8* );
void DWSTRASSIGN( struct $8DWSTRING*, uint32* );
struct $7ASTNODE* RTLSTRCOMPARE( struct $7ASTNODE*, int64, struct $7ASTNODE*, int64 );
struct $7ASTNODE* RTLWSTRCOMPARE( struct $7ASTNODE*, struct $7ASTNODE* );
struct $7ASTNODE* RTLWSTRCONCAT( struct $7ASTNODE*, int64, struct $7ASTNODE*, int64 );
struct $7ASTNODE* RTLTOSTR( struct $7ASTNODE*, int64 );
struct $7ASTNODE* RTLTOWSTR( struct $7ASTNODE* );
struct $7ASTNODE* RTLMATHPOW( struct $7ASTNODE*, struct $7ASTNODE* );
struct $7ASTNODE* RTLMATHLONGINTDIV( int64, struct $7ASTNODE*, int64, struct $7ASTNODE*, int64 );
struct $7ASTNODE* RTLMATHLONGINTMOD( int64, struct $7ASTNODE*, int64, struct $7ASTNODE*, int64 );
struct $7ASTNODE* RTLMATHBOP( int64, struct $7ASTNODE*, struct $7ASTNODE* );
struct $7ASTNODE* RTLOOPISTYPEOF( struct $7ASTNODE*, struct $7ASTNODE* );
static struct $7ASTNODE* HSTRLITERALCONCAT( struct $7ASTNODE*, struct $7ASTNODE* );
static struct $7ASTNODE* HWSTRLITERALCONCAT( struct $7ASTNODE*, struct $7ASTNODE* );
static struct $7ASTNODE* HSTRLITERALCOMPARE( int64, struct $7ASTNODE*, struct $7ASTNODE* );
static struct $7ASTNODE* HWSTRLITERALCOMPARE( int64, struct $7ASTNODE*, struct $7ASTNODE* );
static void HTOSTR( struct $7ASTNODE**, struct $7ASTNODE** );
static struct $7ASTNODE* HCONSTBOP( int64, int64, struct $8FBSYMBOL*, struct $7ASTNODE*, struct $7ASTNODE* );
static int64 HCHECKPOINTER( int64, int64, int64 );
static struct $7ASTNODE* HDOPOINTERARITH( int64, struct $7ASTNODE*, struct $7ASTNODE*, int64 );
static struct $7ASTNODE* HCONVERTUDT_L( int64, struct $7ASTNODE*, struct $7ASTNODE*, struct $8FBSYMBOL*, $9AST_OPOPT );
static struct $7ASTNODE* HCONVERTUDT_R( int64, struct $7ASTNODE*, struct $7ASTNODE*, struct $8FBSYMBOL*, $9AST_OPOPT );
static int64 HCHECKDEREFWCHARPTR( struct $7ASTNODE*, int64*, struct $7ASTNODE*, int64 );
static void HCONVOPERAND( int64, int64*, int64*, struct $7ASTNODE** );
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
typedef void (*tmp$46)( struct $8FBSYMBOL*, struct $6IRVREG*, int64, int64 );
typedef void (*tmp$47)( uint8* );
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
extern struct $10AST_OPINFO AST_OPTB$[116];
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

struct $7ASTNODE* ASTNEWBOP( int64 OP$1, struct $7ASTNODE* L$1, struct $7ASTNODE* R$1, struct $8FBSYMBOL* EX$1, $9AST_OPOPT OPTIONS$1 )
{
	int64 TMP$118$1;
	int64 TMP$119$1;
	int64 TMP$120$1;
	int64 TMP$121$1;
	int64 TMP$123$1;
	int64 TMP$124$1;
	int64 TMP$125$1;
	int64 TMP$126$1;
	int64 TMP$127$1;
	int64 TMP$128$1;
	int64 TMP$141$1;
	int64 TMP$142$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$249:;
	struct $7ASTNODE* N$1;
	int64 LDTYPE0$1;
	int64 RDTYPE0$1;
	int64 LDTYPE$1;
	int64 RDTYPE$1;
	int64 DTYPE$1;
	int64 LDCLASS$1;
	int64 RDCLASS$1;
	int64 LRANK$1;
	int64 RRANK$1;
	int64 INTRANK$1;
	int64 UINTRANK$1;
	int64 IS_STR$1;
	struct $8FBSYMBOL* LITSYM$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	if( *(struct $8FBSYMBOL**)((uint8*)((uint8*)&SYMB$ + (OP$1 << 3ll)) + 198168ll) == (struct $8FBSYMBOL*)0ull ) goto label$252;
	{
		struct $8FBSYMBOL* PROC$2;
		$9FB_ERRMSG ERR_NUM$2;
		struct $8FBSYMBOL* vr$5 = SYMBFINDBOPOVLPROC( OP$1, L$1, R$1, &ERR_NUM$2 );
		PROC$2 = vr$5;
		if( PROC$2 == (struct $8FBSYMBOL*)0ull ) goto label$254;
		{
			struct $7ASTNODE* vr$7 = ASTBUILDCALL( PROC$2, L$1, R$1, (struct $7ASTNODE*)0ull );
			fb$result$1 = vr$7;
			goto label$250;
		}
		goto label$253;
		label$254:;
		{
			if( ERR_NUM$2 == 0ll ) goto label$256;
			{
				fb$result$1 = (struct $7ASTNODE*)0ull;
				goto label$250;
			}
			label$256:;
			label$255:;
		}
		label$253:;
	}
	label$252:;
	label$251:;
	IS_STR$1 = 0ll;
	{
		if( OP$1 != 44ll ) goto label$258;
		label$259:;
		{
			HTOSTR( &L$1, &R$1 );
			OP$1 = 28ll;
		}
		goto label$257;
		label$258:;
		if( OP$1 != 51ll ) goto label$260;
		label$261:;
		{
			struct $7ASTNODE* vr$13 = RTLOOPISTYPEOF( L$1, R$1 );
			fb$result$1 = vr$13;
			goto label$250;
		}
		label$260:;
		label$257:;
	}
	LDTYPE$1 = *(int64*)((uint8*)L$1 + 8ll);
	RDTYPE$1 = *(int64*)((uint8*)R$1 + 8ll);
	if( (LDTYPE$1 & 480ll) == 0ll ) goto label$262;
	TMP$118$1 = 22ll;
	goto label$574;
	label$262:;
	TMP$118$1 = LDTYPE$1 & 31ll;
	label$574:;
	LDCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$118$1 * 56ll));
	if( (RDTYPE$1 & 480ll) == 0ll ) goto label$263;
	TMP$119$1 = 22ll;
	goto label$575;
	label$263:;
	TMP$119$1 = RDTYPE$1 & 31ll;
	label$575:;
	RDCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$119$1 * 56ll));
	if( (LDTYPE$1 & 480ll) == 0ll ) goto label$264;
	TMP$120$1 = 22ll;
	goto label$576;
	label$264:;
	TMP$120$1 = LDTYPE$1 & 31ll;
	label$576:;
	if( (RDTYPE$1 & 480ll) == 0ll ) goto label$265;
	TMP$121$1 = 22ll;
	goto label$577;
	label$265:;
	TMP$121$1 = RDTYPE$1 & 31ll;
	label$577:;
	if( ((int64)-(TMP$120$1 == 18ll) | (int64)-(TMP$121$1 == 18ll)) == 0ll ) goto label$267;
	{
		int64 TMP$122$2;
		if( (OPTIONS$1 & 8ll) == 0ll ) goto label$269;
		{
			goto label$250;
		}
		label$269:;
		label$268:;
		if( (LDTYPE$1 & 480ll) == 0ll ) goto label$270;
		TMP$122$2 = 22ll;
		goto label$578;
		label$270:;
		TMP$122$2 = LDTYPE$1 & 31ll;
		label$578:;
		if( TMP$122$2 != 18ll ) goto label$272;
		{
			struct $7ASTNODE* vr$40 = HCONVERTUDT_L( OP$1, L$1, R$1, EX$1, OPTIONS$1 );
			fb$result$1 = vr$40;
			goto label$250;
		}
		goto label$271;
		label$272:;
		{
			struct $7ASTNODE* vr$41 = HCONVERTUDT_R( OP$1, L$1, R$1, EX$1, OPTIONS$1 );
			fb$result$1 = vr$41;
			goto label$250;
		}
		label$271:;
	}
	label$267:;
	label$266:;
	if( (LDTYPE$1 & 480ll) == 0ll ) goto label$274;
	{
		if( (OPTIONS$1 & 2ll) == 0ll ) goto label$276;
		{
			struct $7ASTNODE* vr$46 = HDOPOINTERARITH( OP$1, L$1, R$1, 0ll );
			fb$result$1 = vr$46;
			goto label$250;
		}
		goto label$275;
		label$276:;
		{
			int64 vr$47 = HCHECKPOINTER( OP$1, RDTYPE$1, RDCLASS$1 );
			if( vr$47 != 0ll ) goto label$278;
			{
				goto label$250;
			}
			label$278:;
			label$277:;
		}
		label$275:;
	}
	goto label$273;
	label$274:;
	if( (RDTYPE$1 & 480ll) == 0ll ) goto label$279;
	{
		if( (OPTIONS$1 & 4ll) == 0ll ) goto label$281;
		{
			struct $7ASTNODE* vr$53 = HDOPOINTERARITH( OP$1, R$1, L$1, -1ll );
			fb$result$1 = vr$53;
			goto label$250;
		}
		goto label$280;
		label$281:;
		{
			int64 vr$54 = HCHECKPOINTER( OP$1, LDTYPE$1, LDCLASS$1 );
			if( vr$54 != 0ll ) goto label$283;
			{
				goto label$250;
			}
			label$283:;
			label$282:;
		}
		label$280:;
	}
	label$279:;
	label$273:;
	if( (LDTYPE$1 & 480ll) == 0ll ) goto label$284;
	TMP$123$1 = 22ll;
	goto label$579;
	label$284:;
	TMP$123$1 = LDTYPE$1 & 31ll;
	label$579:;
	if( TMP$123$1 != 9ll ) goto label$286;
	{
		HCONVOPERAND( 7ll, &LDTYPE$1, &LDCLASS$1, &L$1 );
	}
	label$286:;
	label$285:;
	if( (RDTYPE$1 & 480ll) == 0ll ) goto label$287;
	TMP$124$1 = 22ll;
	goto label$580;
	label$287:;
	TMP$124$1 = RDTYPE$1 & 31ll;
	label$580:;
	if( TMP$124$1 != 9ll ) goto label$289;
	{
		HCONVOPERAND( 7ll, &RDTYPE$1, &RDCLASS$1, &R$1 );
	}
	label$289:;
	label$288:;
	if( (LDTYPE$1 & 480ll) == 0ll ) goto label$290;
	TMP$125$1 = 22ll;
	goto label$581;
	label$290:;
	TMP$125$1 = LDTYPE$1 & 31ll;
	label$581:;
	if( (RDTYPE$1 & 480ll) == 0ll ) goto label$291;
	TMP$126$1 = 22ll;
	goto label$582;
	label$291:;
	TMP$126$1 = RDTYPE$1 & 31ll;
	label$582:;
	if( ((int64)-(TMP$125$1 == 3ll) & (int64)-(TMP$126$1 == 3ll)) == 0ll ) goto label$293;
	{
		LDCLASS$1 = 2ll;
		RDCLASS$1 = LDCLASS$1;
	}
	label$293:;
	label$292:;
	if( (LDTYPE$1 & 480ll) == 0ll ) goto label$294;
	TMP$127$1 = 22ll;
	goto label$583;
	label$294:;
	TMP$127$1 = LDTYPE$1 & 31ll;
	label$583:;
	if( (RDTYPE$1 & 480ll) == 0ll ) goto label$295;
	TMP$128$1 = 22ll;
	goto label$584;
	label$295:;
	TMP$128$1 = RDTYPE$1 & 31ll;
	label$584:;
	if( ((int64)-(TMP$127$1 == 6ll) | (int64)-(TMP$128$1 == 6ll)) == 0ll ) goto label$297;
	{
		if( (LDTYPE$1 & 511ll) == (RDTYPE$1 & 511ll) ) goto label$299;
		{
			int64 TMP$129$3;
			if( (LDTYPE$1 & 480ll) == 0ll ) goto label$300;
			TMP$129$3 = 22ll;
			goto label$585;
			label$300:;
			TMP$129$3 = LDTYPE$1 & 31ll;
			label$585:;
			if( TMP$129$3 != 6ll ) goto label$302;
			{
				int64 TMP$130$4;
				if( (RDTYPE$1 & 480ll) == 0ll ) goto label$303;
				TMP$130$4 = 22ll;
				goto label$586;
				label$303:;
				TMP$130$4 = RDTYPE$1 & 31ll;
				label$586:;
				IS_STR$1 = (int64)-(RDCLASS$1 == 2ll) | (int64)-(TMP$130$4 == 3ll);
			}
			goto label$301;
			label$302:;
			{
				int64 TMP$131$4;
				if( (LDTYPE$1 & 480ll) == 0ll ) goto label$304;
				TMP$131$4 = 22ll;
				goto label$587;
				label$304:;
				TMP$131$4 = LDTYPE$1 & 31ll;
				label$587:;
				IS_STR$1 = (int64)-(LDCLASS$1 == 2ll) | (int64)-(TMP$131$4 == 3ll);
			}
			label$301:;
		}
		goto label$298;
		label$299:;
		{
			IS_STR$1 = -1ll;
		}
		label$298:;
		if( IS_STR$1 == 0ll ) goto label$306;
		{
			LITSYM$1 = (struct $8FBSYMBOL*)0ull;
			{
				int64 TMP$132$4;
				int64 TMP$133$4;
				if( (LDTYPE$1 & 480ll) == 0ll ) goto label$307;
				TMP$132$4 = 22ll;
				goto label$588;
				label$307:;
				TMP$132$4 = LDTYPE$1 & 31ll;
				label$588:;
				TMP$133$4 = TMP$132$4;
				if( TMP$133$4 == 3ll ) goto label$310;
				label$311:;
				if( TMP$133$4 != 6ll ) goto label$309;
				label$310:;
				{
					struct $8FBSYMBOL* vr$115 = ASTGETSTRLITSYMBOL( L$1 );
					LITSYM$1 = vr$115;
					if( LITSYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$313;
					{
						{
							if( RDTYPE$1 == 3ll ) goto label$316;
							label$317:;
							if( RDTYPE$1 != 6ll ) goto label$315;
							label$316:;
							{
								struct $8FBSYMBOL* vr$119 = ASTGETSTRLITSYMBOL( R$1 );
								LITSYM$1 = vr$119;
							}
							goto label$314;
							label$315:;
							{
								LITSYM$1 = (struct $8FBSYMBOL*)0ull;
							}
							label$318:;
							label$314:;
						}
					}
					label$313:;
					label$312:;
				}
				label$309:;
				label$308:;
			}
			{
				uint64 TMP$134$4;
				TMP$134$4 = (uint64)OP$1;
				goto label$320;
				label$321:;
				{
					if( LITSYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$323;
					{
						if( ((int64)-((LDTYPE$1 & 511ll) == (RDTYPE$1 & 511ll)) | *(int64*)((uint8*)&ENV$ + 456ll)) == 0ll ) goto label$325;
						{
							struct $7ASTNODE* vr$126 = HWSTRLITERALCONCAT( L$1, R$1 );
							fb$result$1 = vr$126;
							goto label$250;
						}
						label$325:;
						label$324:;
					}
					label$323:;
					label$322:;
					if( (LDTYPE$1 & 511ll) == (RDTYPE$1 & 511ll) ) goto label$327;
					{
						struct $7ASTNODE* vr$130 = RTLWSTRCONCAT( L$1, LDTYPE$1, R$1, RDTYPE$1 );
						fb$result$1 = vr$130;
						goto label$250;
					}
					label$327:;
					label$326:;
					LDTYPE$1 = ((LDTYPE$1 & -512ll) | 6ll) & -513ll;
					LDCLASS$1 = 0ll;
					RDTYPE$1 = (RDTYPE$1 & -512ll) | (LDTYPE$1 & 511ll);
					RDCLASS$1 = LDCLASS$1;
					IS_STR$1 = -1ll;
				}
				goto label$319;
				label$328:;
				{
					if( LITSYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$330;
					{
						struct $7ASTNODE* vr$138 = HWSTRLITERALCOMPARE( OP$1, L$1, R$1 );
						fb$result$1 = vr$138;
						goto label$250;
					}
					label$330:;
					label$329:;
					struct $7ASTNODE* vr$139 = RTLWSTRCOMPARE( L$1, R$1 );
					L$1 = vr$139;
					struct $7ASTNODE* vr$140 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
					R$1 = vr$140;
					LDTYPE$1 = (LDTYPE$1 & -512ll) | (*(int64*)((uint8*)L$1 + 8ll) & 511ll);
					RDTYPE$1 = (RDTYPE$1 & -512ll) | (*(int64*)((uint8*)R$1 + 8ll) & 511ll);
					LDCLASS$1 = 0ll;
					RDCLASS$1 = 0ll;
				}
				goto label$319;
				label$331:;
				{
					goto label$250;
				}
				goto label$319;
				label$320:;
				static const void* tmp$171[23ll] = {
					&&label$321,
					&&label$331,
					&&label$331,
					&&label$331,
					&&label$331,
					&&label$331,
					&&label$331,
					&&label$331,
					&&label$331,
					&&label$331,
					&&label$331,
					&&label$331,
					&&label$331,
					&&label$331,
					&&label$331,
					&&label$331,
					&&label$331,
					&&label$328,
					&&label$328,
					&&label$328,
					&&label$328,
					&&label$328,
					&&label$328,
				};
				if( TMP$134$4 < 28ll ) goto label$331;
				if( TMP$134$4 > 50ll ) goto label$331;
				goto *tmp$171[TMP$134$4 - 28ll];
				label$319:;
			}
		}
		goto label$305;
		label$306:;
		{
			int64 TMP$135$3;
			if( (LDTYPE$1 & 480ll) == 0ll ) goto label$332;
			TMP$135$3 = 22ll;
			goto label$589;
			label$332:;
			TMP$135$3 = LDTYPE$1 & 31ll;
			label$589:;
			if( TMP$135$3 != 6ll ) goto label$334;
			{
				int64 vr$154 = HCHECKDEREFWCHARPTR( L$1, &LDTYPE$1, R$1, RDTYPE$1 );
				if( vr$154 != 0ll ) goto label$336;
				{
					goto label$250;
				}
				label$336:;
				label$335:;
			}
			goto label$333;
			label$334:;
			{
				int64 vr$157 = HCHECKDEREFWCHARPTR( R$1, &RDTYPE$1, L$1, LDTYPE$1 );
				if( vr$157 != 0ll ) goto label$338;
				{
					goto label$250;
				}
				label$338:;
				label$337:;
			}
			label$333:;
		}
		label$305:;
	}
	goto label$296;
	label$297:;
	if( ((int64)-(LDCLASS$1 == 2ll) | (int64)-(RDCLASS$1 == 2ll)) == 0ll ) goto label$339;
	{
		int64 TMP$138$2;
		if( LDCLASS$1 == RDCLASS$1 ) goto label$341;
		{
			if( LDCLASS$1 != 2ll ) goto label$343;
			{
				int64 TMP$136$4;
				if( (RDTYPE$1 & 480ll) == 0ll ) goto label$344;
				TMP$136$4 = 22ll;
				goto label$590;
				label$344:;
				TMP$136$4 = RDTYPE$1 & 31ll;
				label$590:;
				if( TMP$136$4 == 3ll ) goto label$346;
				{
					goto label$250;
				}
				label$346:;
				label$345:;
			}
			goto label$342;
			label$343:;
			{
				int64 TMP$137$4;
				if( (LDTYPE$1 & 480ll) == 0ll ) goto label$347;
				TMP$137$4 = 22ll;
				goto label$591;
				label$347:;
				TMP$137$4 = LDTYPE$1 & 31ll;
				label$591:;
				if( TMP$137$4 == 3ll ) goto label$349;
				{
					goto label$250;
				}
				label$349:;
				label$348:;
			}
			label$342:;
		}
		label$341:;
		label$340:;
		LITSYM$1 = (struct $8FBSYMBOL*)0ull;
		if( (LDTYPE$1 & 480ll) == 0ll ) goto label$350;
		TMP$138$2 = 22ll;
		goto label$592;
		label$350:;
		TMP$138$2 = LDTYPE$1 & 31ll;
		label$592:;
		if( TMP$138$2 != 3ll ) goto label$352;
		{
			int64 TMP$139$3;
			if( (RDTYPE$1 & 480ll) == 0ll ) goto label$353;
			TMP$139$3 = 22ll;
			goto label$593;
			label$353:;
			TMP$139$3 = RDTYPE$1 & 31ll;
			label$593:;
			if( TMP$139$3 != 3ll ) goto label$355;
			{
				struct $8FBSYMBOL* vr$181 = ASTGETSTRLITSYMBOL( L$1 );
				LITSYM$1 = vr$181;
				if( LITSYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$357;
				{
					struct $8FBSYMBOL* vr$183 = ASTGETSTRLITSYMBOL( R$1 );
					LITSYM$1 = vr$183;
				}
				label$357:;
				label$356:;
			}
			label$355:;
			label$354:;
		}
		label$352:;
		label$351:;
		{
			uint64 TMP$140$3;
			TMP$140$3 = (uint64)OP$1;
			goto label$359;
			label$360:;
			{
				if( LITSYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$362;
				{
					struct $7ASTNODE* vr$185 = HSTRLITERALCONCAT( L$1, R$1 );
					fb$result$1 = vr$185;
					goto label$250;
				}
				label$362:;
				label$361:;
				LDTYPE$1 = ((LDTYPE$1 & -512ll) | 16ll) & -513ll;
				LDCLASS$1 = 2ll;
				RDTYPE$1 = (RDTYPE$1 & -512ll) | (LDTYPE$1 & 511ll);
				RDCLASS$1 = LDCLASS$1;
				IS_STR$1 = -1ll;
			}
			goto label$358;
			label$363:;
			{
				if( LITSYM$1 == (struct $8FBSYMBOL*)0ull ) goto label$365;
				{
					struct $7ASTNODE* vr$193 = HSTRLITERALCOMPARE( OP$1, L$1, R$1 );
					fb$result$1 = vr$193;
					goto label$250;
				}
				label$365:;
				label$364:;
				struct $7ASTNODE* vr$194 = RTLSTRCOMPARE( L$1, LDTYPE$1, R$1, RDTYPE$1 );
				L$1 = vr$194;
				struct $7ASTNODE* vr$195 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				R$1 = vr$195;
				LDTYPE$1 = (LDTYPE$1 & -512ll) | (*(int64*)((uint8*)L$1 + 8ll) & 511ll);
				LDCLASS$1 = 0ll;
				RDTYPE$1 = (RDTYPE$1 & -512ll) | (*(int64*)((uint8*)R$1 + 8ll) & 511ll);
				RDCLASS$1 = 0ll;
			}
			goto label$358;
			label$366:;
			{
				goto label$250;
			}
			goto label$358;
			label$359:;
			static const void* tmp$172[23ll] = {
				&&label$360,
				&&label$366,
				&&label$366,
				&&label$366,
				&&label$366,
				&&label$366,
				&&label$366,
				&&label$366,
				&&label$366,
				&&label$366,
				&&label$366,
				&&label$366,
				&&label$366,
				&&label$366,
				&&label$366,
				&&label$366,
				&&label$366,
				&&label$363,
				&&label$363,
				&&label$363,
				&&label$363,
				&&label$363,
				&&label$363,
			};
			if( TMP$140$3 < 28ll ) goto label$366;
			if( TMP$140$3 > 50ll ) goto label$366;
			goto *tmp$172[TMP$140$3 - 28ll];
			label$358:;
		}
	}
	goto label$296;
	label$339:;
	if( (LDTYPE$1 & 480ll) == 0ll ) goto label$368;
	TMP$141$1 = 22ll;
	goto label$594;
	label$368:;
	TMP$141$1 = LDTYPE$1 & 31ll;
	label$594:;
	if( (RDTYPE$1 & 480ll) == 0ll ) goto label$369;
	TMP$142$1 = 22ll;
	goto label$595;
	label$369:;
	TMP$142$1 = RDTYPE$1 & 31ll;
	label$595:;
	if( ((int64)-(TMP$141$1 == 3ll) | (int64)-(TMP$142$1 == 3ll)) == 0ll ) goto label$367;
	{
		int64 TMP$143$2;
		if( (LDTYPE$1 & 480ll) == 0ll ) goto label$370;
		TMP$143$2 = 22ll;
		goto label$596;
		label$370:;
		TMP$143$2 = LDTYPE$1 & 31ll;
		label$596:;
		if( TMP$143$2 != 3ll ) goto label$372;
		{
			if( *(int64*)L$1 == 20ll ) goto label$374;
			{
				goto label$250;
			}
			label$374:;
			label$373:;
			LDTYPE$1 = (LDTYPE$1 & -512ll) | 2ll;
		}
		goto label$371;
		label$372:;
		{
			if( *(int64*)R$1 == 20ll ) goto label$376;
			{
				goto label$250;
			}
			label$376:;
			label$375:;
			RDTYPE$1 = (RDTYPE$1 & -512ll) | 2ll;
		}
		label$371:;
	}
	label$367:;
	label$296:;
	LDTYPE0$1 = LDTYPE$1;
	RDTYPE0$1 = RDTYPE$1;
	if( ((int64)-(*(int64*)((uint8*)&ENV$ + 272ll) != 3ll) & (int64)-(IS_STR$1 == 0ll)) == 0ll ) goto label$378;
	{
		INTRANK$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + 416ll);
		UINTRANK$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + 472ll);
		if( LDCLASS$1 != 0ll ) goto label$380;
		{
			int64 TMP$144$3;
			int64 TMP$145$3;
			int64 TMP$146$3;
			if( (LDTYPE$1 & 480ll) == 0ll ) goto label$381;
			TMP$144$3 = 22ll;
			goto label$597;
			label$381:;
			TMP$144$3 = LDTYPE$1 & 31ll;
			label$597:;
			if( (*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$144$3 * 56ll)) + 32ll) & 480ll) == 0ll ) goto label$383;
			TMP$146$3 = 22ll;
			goto label$598;
			label$383:;
			if( (LDTYPE$1 & 480ll) == 0ll ) goto label$382;
			TMP$145$3 = 22ll;
			goto label$599;
			label$382:;
			TMP$145$3 = LDTYPE$1 & 31ll;
			label$599:;
			TMP$146$3 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$145$3 * 56ll)) + 32ll) & 31ll;
			label$598:;
			LRANK$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$146$3 * 56ll)) + 24ll);
			if( LRANK$1 >= INTRANK$1 ) goto label$385;
			{
				HCONVOPERAND( 7ll, &LDTYPE$1, &LDCLASS$1, &L$1 );
			}
			goto label$384;
			label$385:;
			{
				if( ((int64)-(INTRANK$1 < LRANK$1) & (int64)-(LRANK$1 < UINTRANK$1)) == 0ll ) goto label$387;
				{
					HCONVOPERAND( 8ll, &LDTYPE$1, &LDCLASS$1, &L$1 );
				}
				label$387:;
				label$386:;
			}
			label$384:;
		}
		label$380:;
		label$379:;
		if( RDCLASS$1 != 0ll ) goto label$389;
		{
			int64 TMP$147$3;
			int64 TMP$148$3;
			int64 TMP$149$3;
			if( (RDTYPE$1 & 480ll) == 0ll ) goto label$390;
			TMP$147$3 = 22ll;
			goto label$600;
			label$390:;
			TMP$147$3 = RDTYPE$1 & 31ll;
			label$600:;
			if( (*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$147$3 * 56ll)) + 32ll) & 480ll) == 0ll ) goto label$392;
			TMP$149$3 = 22ll;
			goto label$601;
			label$392:;
			if( (RDTYPE$1 & 480ll) == 0ll ) goto label$391;
			TMP$148$3 = 22ll;
			goto label$602;
			label$391:;
			TMP$148$3 = RDTYPE$1 & 31ll;
			label$602:;
			TMP$149$3 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$148$3 * 56ll)) + 32ll) & 31ll;
			label$601:;
			RRANK$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$149$3 * 56ll)) + 24ll);
			if( RRANK$1 >= INTRANK$1 ) goto label$394;
			{
				HCONVOPERAND( 7ll, &RDTYPE$1, &RDCLASS$1, &R$1 );
			}
			goto label$393;
			label$394:;
			{
				if( ((int64)-(INTRANK$1 < RRANK$1) & (int64)-(RRANK$1 < UINTRANK$1)) == 0ll ) goto label$396;
				{
					HCONVOPERAND( 8ll, &RDTYPE$1, &RDCLASS$1, &R$1 );
				}
				label$396:;
				label$395:;
			}
			label$393:;
		}
		label$389:;
		label$388:;
	}
	label$378:;
	label$377:;
	{
		uint64 TMP$150$2;
		TMP$150$2 = (uint64)OP$1;
		goto label$398;
		label$399:;
		{
			if( LDCLASS$1 == 1ll ) goto label$401;
			{
				LDTYPE$1 = (LDTYPE$1 & -512ll) | 15ll;
				struct $7ASTNODE* vr$281 = ASTNEWCONV( LDTYPE$1, (struct $8FBSYMBOL*)0ull, L$1, 0ll, (int64*)0ull );
				L$1 = vr$281;
				LDCLASS$1 = 1ll;
			}
			label$401:;
			label$400:;
			if( RDCLASS$1 == 1ll ) goto label$403;
			{
				RDTYPE$1 = (RDTYPE$1 & -512ll) | 15ll;
				if( (*(int64*)((uint8*)&IR$ + 568ll) & 1ll) == 0ll ) goto label$405;
				{
					struct $7ASTNODE* vr$287 = ASTNEWCONV( RDTYPE$1, (struct $8FBSYMBOL*)0ull, R$1, 0ll, (int64*)0ull );
					R$1 = vr$287;
				}
				goto label$404;
				label$405:;
				{
					if( ((int64)-(*(int64*)R$1 != 17ll) | (int64)-(RDTYPE$1 != 7ll)) == 0ll ) goto label$407;
					{
						struct $7ASTNODE* vr$293 = ASTNEWCONV( RDTYPE$1, (struct $8FBSYMBOL*)0ull, R$1, 0ll, (int64*)0ull );
						R$1 = vr$293;
					}
					label$407:;
					label$406:;
				}
				label$404:;
				RDCLASS$1 = 1ll;
			}
			label$403:;
			label$402:;
		}
		goto label$397;
		label$408:;
		{
			if( LDCLASS$1 == 0ll ) goto label$410;
			{
				LDTYPE$1 = (LDTYPE$1 & -512ll) | 7ll;
				struct $7ASTNODE* vr$297 = ASTNEWCONV( LDTYPE$1, (struct $8FBSYMBOL*)0ull, L$1, 0ll, (int64*)0ull );
				L$1 = vr$297;
				LDCLASS$1 = 0ll;
			}
			label$410:;
			label$409:;
			if( RDCLASS$1 == 0ll ) goto label$412;
			{
				RDTYPE$1 = (RDTYPE$1 & -512ll) | 7ll;
				struct $7ASTNODE* vr$301 = ASTNEWCONV( RDTYPE$1, (struct $8FBSYMBOL*)0ull, R$1, 0ll, (int64*)0ull );
				R$1 = vr$301;
				RDCLASS$1 = 0ll;
			}
			label$412:;
			label$411:;
		}
		goto label$397;
		label$413:;
		{
			if( LDCLASS$1 == 1ll ) goto label$415;
			{
				LDTYPE$1 = (LDTYPE$1 & -512ll) | 15ll;
				struct $7ASTNODE* vr$305 = ASTNEWCONV( LDTYPE$1, (struct $8FBSYMBOL*)0ull, L$1, 0ll, (int64*)0ull );
				L$1 = vr$305;
				LDCLASS$1 = 1ll;
			}
			label$415:;
			label$414:;
			if( RDCLASS$1 == 1ll ) goto label$417;
			{
				RDTYPE$1 = (RDTYPE$1 & -512ll) | 15ll;
				struct $7ASTNODE* vr$309 = ASTNEWCONV( RDTYPE$1, (struct $8FBSYMBOL*)0ull, R$1, 0ll, (int64*)0ull );
				R$1 = vr$309;
				RDCLASS$1 = 1ll;
			}
			label$417:;
			label$416:;
		}
		goto label$397;
		label$398:;
		static const void* tmp$173[34ll] = {
			&&label$399,
			&&label$408,
			&&label$408,
			&&label$408,
			&&label$408,
			&&label$397,
			&&label$397,
			&&label$408,
			&&label$408,
			&&label$408,
			&&label$408,
			&&label$408,
			&&label$413,
			&&label$397,
			&&label$397,
			&&label$397,
			&&label$397,
			&&label$397,
			&&label$397,
			&&label$397,
			&&label$397,
			&&label$397,
			&&label$397,
			&&label$397,
			&&label$397,
			&&label$397,
			&&label$397,
			&&label$397,
			&&label$397,
			&&label$397,
			&&label$397,
			&&label$397,
			&&label$397,
			&&label$413,
		};
		if( TMP$150$2 < 31ll ) goto label$397;
		if( TMP$150$2 > 64ll ) goto label$397;
		goto *tmp$173[TMP$150$2 - 31ll];
		label$397:;
	}
	if( ((int64)-(LDTYPE$1 != RDTYPE$1) | (int64)-(*(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) != *(struct $8FBSYMBOL**)((uint8*)R$1 + 16ll))) == 0ll ) goto label$419;
	{
		if( (((int64)-((LDTYPE$1 & 480ll) != 0ll) | (int64)-((RDTYPE$1 & 480ll) != 0ll)) & ((int64)-(OP$1 == 28ll) | (int64)-(OP$1 == 29ll))) == 0ll ) goto label$421;
		{
			if( (LDTYPE$1 & 480ll) == 0ll ) goto label$423;
			{
				DTYPE$1 = LDTYPE$1;
				SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll);
			}
			goto label$422;
			label$423:;
			{
				DTYPE$1 = RDTYPE$1;
				SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)R$1 + 16ll);
			}
			label$422:;
		}
		goto label$420;
		label$421:;
		{
			TYPEMAX( LDTYPE$1, *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll), RDTYPE$1, *(struct $8FBSYMBOL**)((uint8*)R$1 + 16ll), &DTYPE$1, &SUBTYPE$1 );
			if( ((int64)-((DTYPE$1 & 511ll) != (LDTYPE$1 & 511ll)) | (int64)-(SUBTYPE$1 != *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll))) == 0ll ) goto label$425;
			{
				int64 TMP$151$4;
				struct $7ASTNODE* vr$341 = ASTNEWCONV( DTYPE$1, SUBTYPE$1, L$1, 0ll, (int64*)0ull );
				L$1 = vr$341;
				if( L$1 != (struct $7ASTNODE*)0ull ) goto label$427;
				{
					goto label$250;
					label$427:;
				}
				LDTYPE$1 = DTYPE$1;
				if( (DTYPE$1 & 480ll) == 0ll ) goto label$428;
				TMP$151$4 = 22ll;
				goto label$603;
				label$428:;
				TMP$151$4 = DTYPE$1 & 31ll;
				label$603:;
				LDCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$151$4 * 56ll));
			}
			label$425:;
			label$424:;
			if( ((int64)-((DTYPE$1 & 511ll) != (RDTYPE$1 & 511ll)) | (int64)-(SUBTYPE$1 != *(struct $8FBSYMBOL**)((uint8*)R$1 + 16ll))) == 0ll ) goto label$430;
			{
				{
					if( OP$1 == 41ll ) goto label$433;
					label$434:;
					if( OP$1 != 42ll ) goto label$432;
					label$433:;
					{
					}
					goto label$431;
					label$432:;
					{
						int64 TMP$152$6;
						struct $7ASTNODE* vr$356 = ASTNEWCONV( DTYPE$1, SUBTYPE$1, R$1, 0ll, (int64*)0ull );
						R$1 = vr$356;
						if( R$1 != (struct $7ASTNODE*)0ull ) goto label$437;
						{
							goto label$250;
							label$437:;
						}
						RDTYPE$1 = DTYPE$1;
						if( (DTYPE$1 & 480ll) == 0ll ) goto label$438;
						TMP$152$6 = 22ll;
						goto label$604;
						label$438:;
						TMP$152$6 = DTYPE$1 & 31ll;
						label$604:;
						RDCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$152$6 * 56ll));
					}
					label$435:;
					label$431:;
				}
			}
			label$430:;
			label$429:;
		}
		label$420:;
	}
	goto label$418;
	label$419:;
	{
		DTYPE$1 = LDTYPE$1;
		SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll);
	}
	label$418:;
	{
		uint64 TMP$153$2;
		TMP$153$2 = (uint64)OP$1;
		goto label$440;
		label$441:;
		{
			int64 TMP$154$3;
			int64 TMP$156$3;
			int64 TMP$157$3;
			int64 TMP$158$3;
			$13FB_WARNINGMSG WARNING$3;
			WARNING$3 = 0ll;
			if( (LDTYPE0$1 & 480ll) == 0ll ) goto label$442;
			TMP$154$3 = 22ll;
			goto label$605;
			label$442:;
			TMP$154$3 = LDTYPE0$1 & 31ll;
			label$605:;
			if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$154$3 * 56ll)) + 16ll) == 0ll ) goto label$444;
			{
				int64 TMP$155$4;
				if( (LDTYPE$1 & 480ll) == 0ll ) goto label$445;
				TMP$155$4 = 22ll;
				goto label$606;
				label$445:;
				TMP$155$4 = LDTYPE$1 & 31ll;
				label$606:;
				if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$155$4 * 56ll)) + 16ll) != 0ll ) goto label$447;
				{
					if( *(int64*)L$1 != 16ll ) goto label$449;
					{
						int64 vr$375 = ASTCONSTGETASINT64( L$1 );
						if( vr$375 >= 0ll ) goto label$451;
						{
							WARNING$3 = 35ll;
						}
						label$451:;
						label$450:;
					}
					goto label$448;
					label$449:;
					{
						if( (*(int64*)((uint8*)&ENV$ + 352ll) & 32ll) == 0ll ) goto label$453;
						{
							WARNING$3 = 35ll;
						}
						label$453:;
						label$452:;
					}
					label$448:;
				}
				label$447:;
				label$446:;
			}
			label$444:;
			label$443:;
			if( (int64)-(WARNING$3 == 0ll) == 0ll ) goto label$454;
			TMP$156$3 = (int64)-((int64)-(OP$1 != 42ll) != 0ll);
			goto label$607;
			label$454:;
			TMP$156$3 = 0ll;
			label$607:;
			if( TMP$156$3 == 0ll ) goto label$456;
			if( (RDTYPE0$1 & 480ll) == 0ll ) goto label$455;
			TMP$157$3 = 22ll;
			goto label$609;
			label$455:;
			TMP$157$3 = RDTYPE0$1 & 31ll;
			label$609:;
			TMP$158$3 = (int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$157$3 * 56ll)) + 16ll) != 0ll);
			goto label$608;
			label$456:;
			TMP$158$3 = 0ll;
			label$608:;
			if( TMP$158$3 == 0ll ) goto label$458;
			{
				int64 TMP$159$4;
				if( (RDTYPE$1 & 480ll) == 0ll ) goto label$459;
				TMP$159$4 = 22ll;
				goto label$610;
				label$459:;
				TMP$159$4 = RDTYPE$1 & 31ll;
				label$610:;
				if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$159$4 * 56ll)) + 16ll) != 0ll ) goto label$461;
				{
					if( *(int64*)R$1 != 16ll ) goto label$463;
					{
						int64 vr$397 = ASTCONSTGETASINT64( R$1 );
						if( vr$397 >= 0ll ) goto label$465;
						{
							WARNING$3 = 35ll;
						}
						label$465:;
						label$464:;
					}
					goto label$462;
					label$463:;
					{
						if( (*(int64*)((uint8*)&ENV$ + 352ll) & 32ll) == 0ll ) goto label$467;
						{
							WARNING$3 = 35ll;
						}
						label$467:;
						label$466:;
					}
					label$462:;
				}
				label$461:;
				label$460:;
			}
			label$458:;
			label$457:;
			if( WARNING$3 == 0ll ) goto label$469;
			{
				ERRREPORTWARN( WARNING$3, (uint8*)0ull, 1ll );
			}
			label$469:;
			label$468:;
		}
		goto label$439;
		label$440:;
		static const void* tmp$174[19ll] = {
			&&label$441,
			&&label$441,
			&&label$439,
			&&label$439,
			&&label$439,
			&&label$439,
			&&label$439,
			&&label$439,
			&&label$439,
			&&label$439,
			&&label$441,
			&&label$439,
			&&label$439,
			&&label$441,
			&&label$441,
			&&label$441,
			&&label$441,
			&&label$441,
			&&label$441,
		};
		if( TMP$153$2 < 32ll ) goto label$439;
		if( TMP$153$2 > 50ll ) goto label$439;
		goto *tmp$174[TMP$153$2 - 32ll];
		label$439:;
	}
	{
		uint64 TMP$160$2;
		TMP$160$2 = (uint64)OP$1;
		goto label$471;
		label$472:;
		{
			DTYPE$1 = 7ll;
			SUBTYPE$1 = (struct $8FBSYMBOL*)0ull;
		}
		goto label$470;
		label$473:;
		{
			if( *(int64*)R$1 != 16ll ) goto label$475;
			{
				int64 TMP$161$4;
				if( (LDTYPE$1 & 480ll) == 0ll ) goto label$476;
				TMP$161$4 = 22ll;
				goto label$611;
				label$476:;
				TMP$161$4 = LDTYPE$1 & 31ll;
				label$611:;
				if( *(uint64*)((uint8*)R$1 + 40ll) < (uint64)(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$161$4 * 56ll)) + 8ll) << 3ll) ) goto label$478;
				{
					int64 TMP$162$5;
					ERRREPORTWARN( 33ll, (uint8*)0ull, 1ll );
					if( (LDTYPE$1 & 480ll) == 0ll ) goto label$479;
					TMP$162$5 = 22ll;
					goto label$612;
					label$479:;
					TMP$162$5 = LDTYPE$1 & 31ll;
					label$612:;
					struct $7ASTNODE* vr$417 = ASTNEWCONSTI( (*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$162$5 * 56ll)) + 8ll) << 3ll) + -1ll, 7ll, (struct $8FBSYMBOL*)0ull );
					struct $7ASTNODE* vr$418 = ASTNEWBOP( 34ll, R$1, vr$417, (struct $8FBSYMBOL*)0ull, 1ll );
					R$1 = vr$418;
				}
				label$478:;
				label$477:;
			}
			label$475:;
			label$474:;
			if( (RDTYPE$1 & 511ll) == 7ll ) goto label$481;
			{
				if( (RDTYPE$1 & 511ll) == 8ll ) goto label$483;
				{
					RDTYPE$1 = (RDTYPE$1 & -512ll) | 7ll;
					struct $7ASTNODE* vr$425 = ASTNEWCONV( RDTYPE$1, (struct $8FBSYMBOL*)0ull, R$1, 0ll, (int64*)0ull );
					R$1 = vr$425;
					RDCLASS$1 = 0ll;
				}
				label$483:;
				label$482:;
			}
			label$481:;
			label$480:;
		}
		goto label$470;
		label$471:;
		static const void* tmp$175[15ll] = {
			&&label$472,
			&&label$472,
			&&label$470,
			&&label$470,
			&&label$470,
			&&label$473,
			&&label$473,
			&&label$470,
			&&label$470,
			&&label$472,
			&&label$472,
			&&label$472,
			&&label$472,
			&&label$472,
			&&label$472,
		};
		if( TMP$160$2 < 36ll ) goto label$470;
		if( TMP$160$2 > 50ll ) goto label$470;
		goto *tmp$175[TMP$160$2 - 36ll];
		label$470:;
	}
	if( ((int64)-(*(int64*)L$1 == 16ll) & (int64)-(*(int64*)R$1 == 16ll)) == 0ll ) goto label$485;
	{
		struct $7ASTNODE* vr$432 = HCONSTBOP( OP$1, DTYPE$1, SUBTYPE$1, L$1, R$1 );
		L$1 = vr$432;
		*(int64*)((uint8*)L$1 + 8ll) = DTYPE$1;
		*(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll) = SUBTYPE$1;
		ASTDELNODE( R$1 );
		fb$result$1 = L$1;
		goto label$250;
	}
	goto label$484;
	label$485:;
	if( (((int64)-(*(int64*)L$1 == 16ll) & (int64)-(LDTYPE$1 == RDTYPE$1)) & (int64)-(IS_STR$1 == 0ll)) == 0ll ) goto label$486;
	{
		{
			if( OP$1 == 28ll ) goto label$489;
			label$490:;
			if( OP$1 == 30ll ) goto label$489;
			label$491:;
			if( OP$1 == 34ll ) goto label$489;
			label$492:;
			if( OP$1 == 35ll ) goto label$489;
			label$493:;
			if( OP$1 == 38ll ) goto label$489;
			label$494:;
			if( OP$1 == 39ll ) goto label$489;
			label$495:;
			if( OP$1 == 45ll ) goto label$489;
			label$496:;
			if( OP$1 != 48ll ) goto label$488;
			label$489:;
			{
				{
					fb_MemSwap( (void*)R$1, (void*)L$1, 144ll );
				}
			}
			goto label$487;
			label$488:;
			if( OP$1 != 49ll ) goto label$497;
			label$498:;
			{
				OP$1 = 50ll;
				{
					fb_MemSwap( (void*)R$1, (void*)L$1, 144ll );
				}
			}
			goto label$487;
			label$497:;
			if( OP$1 != 46ll ) goto label$499;
			label$500:;
			{
				OP$1 = 47ll;
				{
					fb_MemSwap( (void*)R$1, (void*)L$1, 144ll );
				}
			}
			goto label$487;
			label$499:;
			if( OP$1 != 50ll ) goto label$501;
			label$502:;
			{
				OP$1 = 49ll;
				{
					fb_MemSwap( (void*)R$1, (void*)L$1, 144ll );
				}
			}
			goto label$487;
			label$501:;
			if( OP$1 != 47ll ) goto label$503;
			label$504:;
			{
				OP$1 = 46ll;
				{
					fb_MemSwap( (void*)R$1, (void*)L$1, 144ll );
				}
			}
			goto label$487;
			label$503:;
			if( OP$1 != 29ll ) goto label$505;
			label$506:;
			{
				*(int64*)((uint8*)&AST$ + 464ll) = *(int64*)((uint8*)&AST$ + 464ll) + 1ll;
				struct $7ASTNODE* vr$456 = ASTNEWUOP( 54ll, R$1 );
				R$1 = vr$456;
				*(int64*)((uint8*)&AST$ + 464ll) = *(int64*)((uint8*)&AST$ + 464ll) + -1ll;
				if( R$1 != (struct $7ASTNODE*)0ull ) goto label$508;
				{
					fb$result$1 = (struct $7ASTNODE*)0ull;
					goto label$250;
				}
				label$508:;
				label$507:;
				{
					fb_MemSwap( (void*)R$1, (void*)L$1, 144ll );
				}
				OP$1 = 28ll;
			}
			label$505:;
			label$487:;
		}
	}
	goto label$484;
	label$486:;
	if( *(int64*)R$1 != 16ll ) goto label$509;
	{
		{
			if( OP$1 != 28ll ) goto label$511;
			label$512:;
			{
				if( *(int64*)L$1 != 23ll ) goto label$514;
				{
					*(int64*)((uint8*)L$1 + 40ll) = *(int64*)((uint8*)L$1 + 40ll) + *(int64*)((uint8*)R$1 + 40ll);
					ASTDELNODE( R$1 );
					fb$result$1 = L$1;
					goto label$250;
				}
				label$514:;
				label$513:;
			}
			goto label$510;
			label$511:;
			if( OP$1 != 29ll ) goto label$515;
			label$516:;
			{
				if( *(int64*)L$1 != 23ll ) goto label$518;
				{
					*(int64*)((uint8*)L$1 + 40ll) = *(int64*)((uint8*)L$1 + 40ll) - *(int64*)((uint8*)R$1 + 40ll);
					ASTDELNODE( R$1 );
					fb$result$1 = L$1;
					goto label$250;
				}
				label$518:;
				label$517:;
				*(int64*)((uint8*)&AST$ + 464ll) = *(int64*)((uint8*)&AST$ + 464ll) + 1ll;
				struct $7ASTNODE* vr$476 = ASTNEWUOP( 54ll, R$1 );
				R$1 = vr$476;
				*(int64*)((uint8*)&AST$ + 464ll) = *(int64*)((uint8*)&AST$ + 464ll) + -1ll;
				OP$1 = 28ll;
			}
			goto label$510;
			label$515:;
			if( OP$1 == 32ll ) goto label$520;
			label$521:;
			if( OP$1 != 33ll ) goto label$519;
			label$520:;
			{
				if( *(int64*)((uint8*)R$1 + 40ll) != 0ll ) goto label$523;
				{
					ERRREPORT( 99ll, 0ll, (uint8*)0ull );
				}
				label$523:;
				label$522:;
			}
			goto label$510;
			label$519:;
			if( OP$1 != 43ll ) goto label$524;
			label$525:;
			{
				if( *(double*)((uint8*)R$1 + 40ll) != 0x1.p+1 ) goto label$527;
				{
					if( *(int64*)L$1 != 5ll ) goto label$529;
					{
						{
							$13AST_NODECLASS TMP$163$7;
							TMP$163$7 = *($13AST_NODECLASS*)*(struct $7ASTNODE**)((uint8*)L$1 + 112ll);
							if( TMP$163$7 == 17ll ) goto label$532;
							label$533:;
							if( TMP$163$7 == 18ll ) goto label$532;
							label$534:;
							if( TMP$163$7 == 19ll ) goto label$532;
							label$535:;
							if( TMP$163$7 != 20ll ) goto label$531;
							label$532:;
							{
								N$1 = L$1;
								L$1 = *(struct $7ASTNODE**)((uint8*)L$1 + 112ll);
								ASTDELNODE( N$1 );
								LDTYPE$1 = (LDTYPE$1 & -512ll) | (*(int64*)((uint8*)L$1 + 8ll) & 511ll);
							}
							label$531:;
							label$530:;
						}
					}
					label$529:;
					label$528:;
					{
						$13AST_NODECLASS TMP$164$6;
						TMP$164$6 = *($13AST_NODECLASS*)L$1;
						if( TMP$164$6 == 17ll ) goto label$538;
						label$539:;
						if( TMP$164$6 == 18ll ) goto label$538;
						label$540:;
						if( TMP$164$6 == 19ll ) goto label$538;
						label$541:;
						if( TMP$164$6 != 20ll ) goto label$537;
						label$538:;
						{
							int64 vr$503 = ASTHASSIDEFX( L$1 );
							if( vr$503 != 0ll ) goto label$543;
							{
								int64 TMP$165$8;
								if( ((*(int64*)((uint8*)L$1 + 8ll) & 511ll) & 480ll) == 0ll ) goto label$544;
								TMP$165$8 = 22ll;
								goto label$613;
								label$544:;
								TMP$165$8 = (*(int64*)((uint8*)L$1 + 8ll) & 511ll) & 31ll;
								label$613:;
								if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$165$8 * 56ll)) == 1ll ) goto label$546;
								{
									struct $7ASTNODE* vr$514 = ASTNEWCONV( 15ll, (struct $8FBSYMBOL*)0ull, L$1, 0ll, (int64*)0ull );
									L$1 = vr$514;
								}
								label$546:;
								label$545:;
								ASTDELNODE( R$1 );
								struct $7ASTNODE* vr$515 = ASTCLONETREE( L$1 );
								R$1 = vr$515;
								OP$1 = 30ll;
							}
							label$543:;
							label$542:;
						}
						label$537:;
						label$536:;
					}
				}
				label$527:;
				label$526:;
			}
			label$524:;
			label$510:;
		}
	}
	label$509:;
	label$484:;
	{
		uint64 TMP$166$2;
		TMP$166$2 = (uint64)OP$1;
		goto label$548;
		label$549:;
		{
			struct $7ASTNODE* vr$516 = RTLMATHPOW( L$1, R$1 );
			fb$result$1 = vr$516;
			goto label$250;
		}
		goto label$547;
		label$550:;
		{
			if( (*(int64*)((uint8*)&IR$ + 568ll) & 131072ll) == 0ll ) goto label$552;
			{
				struct $7ASTNODE* vr$519 = RTLMATHBOP( OP$1, L$1, R$1 );
				fb$result$1 = vr$519;
				goto label$250;
			}
			label$552:;
			label$551:;
		}
		goto label$547;
		label$553:;
		{
			{
				int64 TMP$167$4;
				int64 TMP$168$4;
				if( (DTYPE$1 & 480ll) == 0ll ) goto label$554;
				TMP$167$4 = 22ll;
				goto label$614;
				label$554:;
				TMP$167$4 = DTYPE$1 & 31ll;
				label$614:;
				TMP$168$4 = TMP$167$4;
				if( TMP$168$4 == 12ll ) goto label$557;
				label$558:;
				if( TMP$168$4 != 13ll ) goto label$556;
				label$557:;
				{
					struct $7ASTNODE* vr$525 = RTLMATHLONGINTDIV( DTYPE$1, L$1, LDTYPE$1, R$1, RDTYPE$1 );
					fb$result$1 = vr$525;
					goto label$250;
				}
				label$556:;
				label$555:;
			}
		}
		goto label$547;
		label$559:;
		{
			{
				int64 TMP$169$4;
				int64 TMP$170$4;
				if( (DTYPE$1 & 480ll) == 0ll ) goto label$560;
				TMP$169$4 = 22ll;
				goto label$615;
				label$560:;
				TMP$169$4 = DTYPE$1 & 31ll;
				label$615:;
				TMP$170$4 = TMP$169$4;
				if( TMP$170$4 == 12ll ) goto label$563;
				label$564:;
				if( TMP$170$4 != 13ll ) goto label$562;
				label$563:;
				{
					struct $7ASTNODE* vr$531 = RTLMATHLONGINTMOD( DTYPE$1, L$1, LDTYPE$1, R$1, RDTYPE$1 );
					fb$result$1 = vr$531;
					goto label$250;
				}
				label$562:;
				label$561:;
			}
		}
		goto label$547;
		label$565:;
		{
			int64 CMP_OP$3;
			__builtin_memset( &CMP_OP$3, 0, 8ll );
			struct $7ASTNODE* CMP_CONSTL$3;
			__builtin_memset( &CMP_CONSTL$3, 0, 8ll );
			struct $7ASTNODE* CMP_CONSTR$3;
			__builtin_memset( &CMP_CONSTR$3, 0, 8ll );
			if( LDCLASS$1 != 1ll ) goto label$567;
			{
				struct $7ASTNODE* vr$536 = ASTNEWCONSTF( 0x0p+0, 14ll );
				CMP_CONSTL$3 = vr$536;
				struct $7ASTNODE* vr$537 = ASTNEWCONSTF( 0x0p+0, 14ll );
				CMP_CONSTR$3 = vr$537;
			}
			goto label$566;
			label$567:;
			{
				struct $7ASTNODE* vr$538 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				CMP_CONSTL$3 = vr$538;
				struct $7ASTNODE* vr$539 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				CMP_CONSTR$3 = vr$539;
			}
			label$566:;
			if( OP$1 != 36ll ) goto label$569;
			{
				CMP_OP$3 = 48ll;
			}
			goto label$568;
			label$569:;
			{
				CMP_OP$3 = 45ll;
			}
			label$568:;
			struct $7ASTNODE* vr$541 = ASTNEWBOP( CMP_OP$3, L$1, CMP_CONSTL$3, (struct $8FBSYMBOL*)0ull, 1ll );
			L$1 = vr$541;
			struct $7ASTNODE* vr$542 = ASTNEWBOP( 48ll, R$1, CMP_CONSTR$3, (struct $8FBSYMBOL*)0ull, 1ll );
			R$1 = vr$542;
			if( OP$1 != 36ll ) goto label$571;
			{
				struct $7ASTNODE* vr$544 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
				struct $7ASTNODE* vr$545 = ASTNEWIIF( L$1, R$1, (int64)EX$1, vr$544, 0ll );
				fb$result$1 = vr$545;
				goto label$250;
			}
			goto label$570;
			label$571:;
			{
				struct $7ASTNODE* vr$546 = ASTNEWCONSTI( -1ll, 7ll, (struct $8FBSYMBOL*)0ull );
				struct $7ASTNODE* vr$547 = ASTNEWIIF( L$1, R$1, (int64)EX$1, vr$546, 0ll );
				fb$result$1 = vr$547;
				goto label$250;
			}
			label$570:;
		}
		goto label$547;
		label$548:;
		static const void* tmp$176[33ll] = {
			&&label$553,
			&&label$559,
			&&label$547,
			&&label$547,
			&&label$565,
			&&label$565,
			&&label$547,
			&&label$547,
			&&label$547,
			&&label$547,
			&&label$547,
			&&label$549,
			&&label$547,
			&&label$547,
			&&label$547,
			&&label$547,
			&&label$547,
			&&label$547,
			&&label$547,
			&&label$547,
			&&label$547,
			&&label$547,
			&&label$547,
			&&label$547,
			&&label$547,
			&&label$547,
			&&label$547,
			&&label$547,
			&&label$547,
			&&label$547,
			&&label$547,
			&&label$547,
			&&label$550,
		};
		if( TMP$166$2 < 32ll ) goto label$547;
		if( TMP$166$2 > 64ll ) goto label$547;
		goto *tmp$176[TMP$166$2 - 32ll];
		label$547:;
	}
	struct $7ASTNODE* vr$548 = ASTNEWNODE( 3ll, DTYPE$1, SUBTYPE$1 );
	N$1 = vr$548;
	*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = L$1;
	*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = R$1;
	*(struct $8FBSYMBOL**)((uint8*)N$1 + 56ll) = EX$1;
	*(int64*)((uint8*)N$1 + 40ll) = OP$1;
	if( *(int64*)((uint8*)&ENV$ + 208ll) != 1ll ) goto label$573;
	{
		OPTIONS$1 = OPTIONS$1 | 1ll;
	}
	label$573:;
	label$572:;
	*($9AST_OPOPT*)((uint8*)N$1 + 48ll) = OPTIONS$1;
	fb$result$1 = N$1;
	label$250:;
	return fb$result$1;
}

struct $7ASTNODE* ASTNEWSELFBOP( int64 OP$1, struct $7ASTNODE* L$1, struct $7ASTNODE* R$1, struct $8FBSYMBOL* EX$1, $9AST_OPOPT OPTIONS$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$616:;
	struct $7ASTNODE* T$1;
	struct $8FBSYMBOL* PROC$1;
	$9FB_ERRMSG ERR_NUM$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	struct $8FBSYMBOL* vr$2 = SYMBFINDSELFBOPOVLPROC( OP$1, L$1, R$1, &ERR_NUM$1 );
	PROC$1 = vr$2;
	if( PROC$1 == (struct $8FBSYMBOL*)0ull ) goto label$619;
	{
		struct $7ASTNODE* vr$4 = ASTBUILDCALL( PROC$1, L$1, R$1, (struct $7ASTNODE*)0ull );
		fb$result$1 = vr$4;
		goto label$617;
	}
	label$619:;
	label$618:;
	if( ERR_NUM$1 == 0ll ) goto label$621;
	{
		fb$result$1 = (struct $7ASTNODE*)0ull;
		goto label$617;
	}
	label$621:;
	label$620:;
	T$1 = (struct $7ASTNODE*)0ull;
	int64 vr$6 = ASTHASSIDEFX( L$1 );
	if( vr$6 == 0ll ) goto label$623;
	{
		struct $7ASTNODE* vr$9 = ASTMAKEREF( &L$1 );
		struct $7ASTNODE* vr$10 = ASTNEWLINK( T$1, vr$9, 0ll );
		T$1 = vr$10;
	}
	label$623:;
	label$622:;
	struct $7ASTNODE* vr$12 = ASTCLONETREE( L$1 );
	struct $7ASTNODE* vr$14 = ASTNEWBOP( *(int64*)(((uint8*)AST_OPTB$ + (OP$1 << 5ll)) + 24ll), vr$12, R$1, EX$1, OPTIONS$1 | 1ll );
	R$1 = vr$14;
	if( R$1 != (struct $7ASTNODE*)0ull ) goto label$625;
	{
		ASTDELTREE( T$1 );
		goto label$617;
	}
	label$625:;
	label$624:;
	struct $7ASTNODE* vr$16 = ASTNEWASSIGN( L$1, R$1, 0ll );
	L$1 = vr$16;
	if( L$1 != (struct $7ASTNODE*)0ull ) goto label$627;
	{
		ASTDELTREE( T$1 );
		goto label$617;
	}
	label$627:;
	label$626:;
	struct $7ASTNODE* vr$18 = ASTNEWLINK( T$1, L$1, 0ll );
	T$1 = vr$18;
	fb$result$1 = T$1;
	label$617:;
	return fb$result$1;
}

struct $6IRVREG* ASTLOADBOP( struct $7ASTNODE* N$1 )
{
	struct $6IRVREG* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$628:;
	struct $7ASTNODE* L$1;
	struct $7ASTNODE* R$1;
	int64 OP$1;
	struct $6IRVREG* V1$1;
	struct $6IRVREG* V2$1;
	struct $6IRVREG* VR$1;
	OP$1 = *(int64*)((uint8*)N$1 + 40ll);
	L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
	R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
	if( ((int64)-(L$1 == (struct $7ASTNODE*)0ull) | (int64)-(R$1 == (struct $7ASTNODE*)0ull)) == 0ll ) goto label$631;
	{
		fb$result$1 = (struct $6IRVREG*)0ull;
		goto label$629;
	}
	label$631:;
	label$630:;
	if( *(int64*)L$1 != 5ll ) goto label$633;
	{
		ASTUPDATECONVFD2FS( L$1, *(int64*)((uint8*)N$1 + 8ll), -1ll );
	}
	label$633:;
	label$632:;
	if( *(int64*)R$1 != 5ll ) goto label$635;
	{
		ASTUPDATECONVFD2FS( R$1, *(int64*)((uint8*)N$1 + 8ll), -1ll );
	}
	label$635:;
	label$634:;
	struct $6IRVREG* vr$14 = ASTLOAD( L$1 );
	V1$1 = vr$14;
	struct $6IRVREG* vr$15 = ASTLOAD( R$1 );
	V2$1 = vr$15;
	if( *(int64*)((uint8*)&AST$ + 272ll) == 0ll ) goto label$637;
	{
		if( (*(int64*)((uint8*)N$1 + 48ll) & 1ll) == 0ll ) goto label$639;
		{
			struct $6IRVREG* vr$23 = (*(tmp$64*)((uint8*)&IR$ + 472ll))( *(int64*)((uint8*)N$1 + 8ll) & 511ll, *(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll) );
			VR$1 = vr$23;
			*(int64*)((uint8*)VR$1 + 40ll) = *(int64*)((uint8*)N$1 + 32ll);
		}
		goto label$638;
		label$639:;
		{
			VR$1 = (struct $6IRVREG*)0ull;
			*(int64*)((uint8*)V1$1 + 40ll) = *(int64*)((uint8*)N$1 + 32ll);
		}
		label$638:;
		if( *(struct $8FBSYMBOL**)((uint8*)N$1 + 56ll) == (struct $8FBSYMBOL*)0ull ) goto label$641;
		{
			(*(tmp$48*)((uint8*)&IR$ + 216ll))( OP$1, V1$1, V2$1, (struct $6IRVREG*)0ull, *(struct $8FBSYMBOL**)((uint8*)N$1 + 56ll) );
		}
		goto label$640;
		label$641:;
		{
			(*(tmp$48*)((uint8*)&IR$ + 216ll))( OP$1, V1$1, V2$1, VR$1, (struct $8FBSYMBOL*)0ull );
		}
		label$640:;
		if( VR$1 != (struct $6IRVREG*)0ull ) goto label$643;
		{
			VR$1 = V1$1;
		}
		label$643:;
		label$642:;
	}
	label$637:;
	label$636:;
	ASTDELNODE( L$1 );
	ASTDELNODE( R$1 );
	fb$result$1 = VR$1;
	label$629:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__astznodezbop( void )
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

static struct $7ASTNODE* HSTRLITERALCONCAT( struct $7ASTNODE* L$1, struct $7ASTNODE* R$1 )
{
	FBSTRING TMP$77$1;
	FBSTRING TMP$78$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$10:;
	struct $8FBSYMBOL* S$1;
	struct $8FBSYMBOL* LS$1;
	struct $8FBSYMBOL* RS$1;
	LS$1 = *(struct $8FBSYMBOL**)((uint8*)L$1 + 24ll);
	RS$1 = *(struct $8FBSYMBOL**)((uint8*)R$1 + 24ll);
	__builtin_memset( &TMP$78$1, 0, 24ll );
	__builtin_memset( &TMP$77$1, 0, 24ll );
	FBSTRING* vr$12 = fb_StrConcat( &TMP$77$1, *(void**)((uint8*)LS$1 + 88ll), 0ll, *(void**)((uint8*)RS$1 + 88ll), 0ll );
	FBSTRING* vr$14 = fb_StrAssign( (void*)&TMP$78$1, -1ll, (void*)vr$12, -1ll, 0 );
	struct $8FBSYMBOL* vr$15 = SYMBALLOCSTRCONST( *(uint8**)&TMP$78$1, (*(int64*)((uint8*)LS$1 + 72ll) + *(int64*)((uint8*)RS$1 + 72ll)) + -2ll );
	S$1 = vr$15;
	fb_StrDelete( &TMP$78$1 );
	struct $7ASTNODE* vr$17 = ASTNEWVAR( S$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	fb$result$1 = vr$17;
	ASTDELNODE( R$1 );
	ASTDELNODE( L$1 );
	label$11:;
	return fb$result$1;
}

static struct $7ASTNODE* HWSTRLITERALCONCAT( struct $7ASTNODE* L$1, struct $7ASTNODE* R$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$12:;
	struct $8FBSYMBOL* S$1;
	struct $8FBSYMBOL* LS$1;
	struct $8FBSYMBOL* RS$1;
	LS$1 = *(struct $8FBSYMBOL**)((uint8*)L$1 + 24ll);
	RS$1 = *(struct $8FBSYMBOL**)((uint8*)R$1 + 24ll);
	if( (*(int64*)((uint8*)LS$1 + 48ll) & 511ll) == 6ll ) goto label$15;
	{
		uint32* TMP$79$2;
		uint32* TMP$80$2;
		uint32* vr$13 = fb_StrToWstr( *(uint8**)((uint8*)LS$1 + 88ll) );
		TMP$79$2 = vr$13;
		uint32* vr$14 = fb_WstrConcat( TMP$79$2, *(uint32**)((uint8*)RS$1 + 88ll) );
		TMP$80$2 = vr$14;
		struct $8FBSYMBOL* vr$15 = SYMBALLOCWSTRCONST( TMP$80$2, (*(int64*)((uint8*)LS$1 + 72ll) + (*(int64*)((uint8*)RS$1 + 72ll) / *(int64*)((uint8*)SYMB_DTYPETB$ + 344ll))) + -2ll );
		S$1 = vr$15;
		fb_WstrDelete( TMP$80$2 );
		fb_WstrDelete( TMP$79$2 );
	}
	goto label$14;
	label$15:;
	if( (*(int64*)((uint8*)RS$1 + 48ll) & 511ll) == 6ll ) goto label$16;
	{
		uint32* TMP$81$2;
		uint32* TMP$82$2;
		uint32* vr$25 = fb_StrToWstr( *(uint8**)((uint8*)RS$1 + 88ll) );
		TMP$81$2 = vr$25;
		uint32* vr$27 = fb_WstrConcat( *(uint32**)((uint8*)LS$1 + 88ll), TMP$81$2 );
		TMP$82$2 = vr$27;
		struct $8FBSYMBOL* vr$28 = SYMBALLOCWSTRCONST( TMP$82$2, ((*(int64*)((uint8*)LS$1 + 72ll) / *(int64*)((uint8*)SYMB_DTYPETB$ + 344ll)) + *(int64*)((uint8*)RS$1 + 72ll)) + -2ll );
		S$1 = vr$28;
		fb_WstrDelete( TMP$82$2 );
		fb_WstrDelete( TMP$81$2 );
	}
	goto label$14;
	label$16:;
	{
		uint32* TMP$83$2;
		uint32* vr$37 = fb_WstrConcat( *(uint32**)((uint8*)LS$1 + 88ll), *(uint32**)((uint8*)RS$1 + 88ll) );
		TMP$83$2 = vr$37;
		struct $8FBSYMBOL* vr$38 = SYMBALLOCWSTRCONST( TMP$83$2, ((*(int64*)((uint8*)LS$1 + 72ll) / *(int64*)((uint8*)SYMB_DTYPETB$ + 344ll)) + (*(int64*)((uint8*)RS$1 + 72ll) / *(int64*)((uint8*)SYMB_DTYPETB$ + 344ll))) + -2ll );
		S$1 = vr$38;
		fb_WstrDelete( TMP$83$2 );
	}
	label$14:;
	struct $7ASTNODE* vr$39 = ASTNEWVAR( S$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	fb$result$1 = vr$39;
	ASTDELNODE( R$1 );
	ASTDELNODE( L$1 );
	label$13:;
	return fb$result$1;
}

static struct $7ASTNODE* HSTRLITERALCOMPARE( int64 OP$1, struct $7ASTNODE* L$1, struct $7ASTNODE* R$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$17:;
	static struct $8DZSTRING LTEXT$1;
	static struct $8DZSTRING RTEXT$1;
	int64 RES$1;
	uint8* vr$3 = HUNESCAPE( *(uint8**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)L$1 + 24ll) + 88ll) );
	DZSTRASSIGN( &LTEXT$1, vr$3 );
	uint8* vr$6 = HUNESCAPE( *(uint8**)((uint8*)*(struct $8FBSYMBOL**)((uint8*)R$1 + 24ll) + 88ll) );
	DZSTRASSIGN( &RTEXT$1, vr$6 );
	{
		uint64 TMP$84$2;
		TMP$84$2 = (uint64)OP$1;
		goto label$20;
		label$21:;
		{
			int32 vr$7 = fb_StrCompare( *(void**)&LTEXT$1, 0ll, *(void**)&RTEXT$1, 0ll );
			RES$1 = (int64)-((int64)vr$7 == 0ll);
		}
		goto label$19;
		label$22:;
		{
			int32 vr$10 = fb_StrCompare( *(void**)&LTEXT$1, 0ll, *(void**)&RTEXT$1, 0ll );
			RES$1 = (int64)-((int64)vr$10 > 0ll);
		}
		goto label$19;
		label$23:;
		{
			int32 vr$13 = fb_StrCompare( *(void**)&LTEXT$1, 0ll, *(void**)&RTEXT$1, 0ll );
			RES$1 = (int64)-((int64)vr$13 < 0ll);
		}
		goto label$19;
		label$24:;
		{
			int32 vr$16 = fb_StrCompare( *(void**)&LTEXT$1, 0ll, *(void**)&RTEXT$1, 0ll );
			RES$1 = (int64)-((int64)vr$16 != 0ll);
		}
		goto label$19;
		label$25:;
		{
			int32 vr$19 = fb_StrCompare( *(void**)&LTEXT$1, 0ll, *(void**)&RTEXT$1, 0ll );
			RES$1 = (int64)-((int64)vr$19 <= 0ll);
		}
		goto label$19;
		label$26:;
		{
			int32 vr$22 = fb_StrCompare( *(void**)&LTEXT$1, 0ll, *(void**)&RTEXT$1, 0ll );
			RES$1 = (int64)-((int64)vr$22 >= 0ll);
		}
		goto label$19;
		label$20:;
		static const void* tmp$177[6ll] = {
			&&label$21,
			&&label$22,
			&&label$23,
			&&label$24,
			&&label$26,
			&&label$25,
		};
		if( TMP$84$2 < 45ll ) goto label$19;
		if( TMP$84$2 > 50ll ) goto label$19;
		goto *tmp$177[TMP$84$2 - 45ll];
		label$19:;
	}
	struct $7ASTNODE* vr$25 = ASTNEWCONSTI( RES$1, 7ll, (struct $8FBSYMBOL*)0ull );
	fb$result$1 = vr$25;
	ASTDELNODE( R$1 );
	ASTDELNODE( L$1 );
	label$18:;
	return fb$result$1;
}

static struct $7ASTNODE* HWSTRLITERALCOMPARE( int64 OP$1, struct $7ASTNODE* L$1, struct $7ASTNODE* R$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$27:;
	struct $8FBSYMBOL* LS$1;
	struct $8FBSYMBOL* RS$1;
	static struct $8DZSTRING TEXTZ$1;
	static struct $8DWSTRING LTEXTW$1;
	static struct $8DWSTRING RTEXTW$1;
	int64 RES$1;
	LS$1 = *(struct $8FBSYMBOL**)((uint8*)L$1 + 24ll);
	RS$1 = *(struct $8FBSYMBOL**)((uint8*)R$1 + 24ll);
	if( (*(int64*)((uint8*)LS$1 + 48ll) & 511ll) == 6ll ) goto label$30;
	{
		uint8* vr$7 = HUNESCAPE( *(uint8**)((uint8*)LS$1 + 88ll) );
		DZSTRASSIGN( &TEXTZ$1, vr$7 );
		uint32* vr$9 = HUNESCAPEW( *(uint32**)((uint8*)RS$1 + 88ll) );
		DWSTRASSIGN( &RTEXTW$1, vr$9 );
		{
			uint64 TMP$85$3;
			TMP$85$3 = (uint64)OP$1;
			goto label$32;
			label$33:;
			{
				uint32* TMP$86$4;
				uint32* vr$10 = fb_StrToWstr( *(uint8**)&TEXTZ$1 );
				TMP$86$4 = vr$10;
				int32 vr$11 = fb_WstrCompare( TMP$86$4, *(uint32**)&RTEXTW$1 );
				RES$1 = (int64)-((int64)vr$11 == 0ll);
				fb_WstrDelete( TMP$86$4 );
			}
			goto label$31;
			label$34:;
			{
				uint32* TMP$87$4;
				uint32* vr$14 = fb_StrToWstr( *(uint8**)&TEXTZ$1 );
				TMP$87$4 = vr$14;
				int32 vr$15 = fb_WstrCompare( TMP$87$4, *(uint32**)&RTEXTW$1 );
				RES$1 = (int64)-((int64)vr$15 > 0ll);
				fb_WstrDelete( TMP$87$4 );
			}
			goto label$31;
			label$35:;
			{
				uint32* TMP$88$4;
				uint32* vr$18 = fb_StrToWstr( *(uint8**)&TEXTZ$1 );
				TMP$88$4 = vr$18;
				int32 vr$19 = fb_WstrCompare( TMP$88$4, *(uint32**)&RTEXTW$1 );
				RES$1 = (int64)-((int64)vr$19 < 0ll);
				fb_WstrDelete( TMP$88$4 );
			}
			goto label$31;
			label$36:;
			{
				uint32* TMP$89$4;
				uint32* vr$22 = fb_StrToWstr( *(uint8**)&TEXTZ$1 );
				TMP$89$4 = vr$22;
				int32 vr$23 = fb_WstrCompare( TMP$89$4, *(uint32**)&RTEXTW$1 );
				RES$1 = (int64)-((int64)vr$23 != 0ll);
				fb_WstrDelete( TMP$89$4 );
			}
			goto label$31;
			label$37:;
			{
				uint32* TMP$90$4;
				uint32* vr$26 = fb_StrToWstr( *(uint8**)&TEXTZ$1 );
				TMP$90$4 = vr$26;
				int32 vr$27 = fb_WstrCompare( TMP$90$4, *(uint32**)&RTEXTW$1 );
				RES$1 = (int64)-((int64)vr$27 <= 0ll);
				fb_WstrDelete( TMP$90$4 );
			}
			goto label$31;
			label$38:;
			{
				uint32* TMP$91$4;
				uint32* vr$30 = fb_StrToWstr( *(uint8**)&TEXTZ$1 );
				TMP$91$4 = vr$30;
				int32 vr$31 = fb_WstrCompare( TMP$91$4, *(uint32**)&RTEXTW$1 );
				RES$1 = (int64)-((int64)vr$31 >= 0ll);
				fb_WstrDelete( TMP$91$4 );
			}
			goto label$31;
			label$32:;
			static const void* tmp$178[6ll] = {
				&&label$33,
				&&label$34,
				&&label$35,
				&&label$36,
				&&label$38,
				&&label$37,
			};
			if( TMP$85$3 < 45ll ) goto label$31;
			if( TMP$85$3 > 50ll ) goto label$31;
			goto *tmp$178[TMP$85$3 - 45ll];
			label$31:;
		}
	}
	goto label$29;
	label$30:;
	if( (*(int64*)((uint8*)RS$1 + 48ll) & 511ll) == 6ll ) goto label$39;
	{
		uint32* vr$38 = HUNESCAPEW( *(uint32**)((uint8*)LS$1 + 88ll) );
		DWSTRASSIGN( &LTEXTW$1, vr$38 );
		uint8* vr$40 = HUNESCAPE( *(uint8**)((uint8*)RS$1 + 88ll) );
		DZSTRASSIGN( &TEXTZ$1, vr$40 );
		{
			uint64 TMP$92$3;
			TMP$92$3 = (uint64)OP$1;
			goto label$41;
			label$42:;
			{
				uint32* TMP$93$4;
				uint32* vr$41 = fb_StrToWstr( *(uint8**)&TEXTZ$1 );
				TMP$93$4 = vr$41;
				int32 vr$42 = fb_WstrCompare( *(uint32**)&LTEXTW$1, TMP$93$4 );
				RES$1 = (int64)-((int64)vr$42 == 0ll);
				fb_WstrDelete( TMP$93$4 );
			}
			goto label$40;
			label$43:;
			{
				uint32* TMP$94$4;
				uint32* vr$45 = fb_StrToWstr( *(uint8**)&TEXTZ$1 );
				TMP$94$4 = vr$45;
				int32 vr$46 = fb_WstrCompare( *(uint32**)&LTEXTW$1, TMP$94$4 );
				RES$1 = (int64)-((int64)vr$46 > 0ll);
				fb_WstrDelete( TMP$94$4 );
			}
			goto label$40;
			label$44:;
			{
				uint32* TMP$95$4;
				uint32* vr$49 = fb_StrToWstr( *(uint8**)&TEXTZ$1 );
				TMP$95$4 = vr$49;
				int32 vr$50 = fb_WstrCompare( *(uint32**)&LTEXTW$1, TMP$95$4 );
				RES$1 = (int64)-((int64)vr$50 < 0ll);
				fb_WstrDelete( TMP$95$4 );
			}
			goto label$40;
			label$45:;
			{
				uint32* TMP$96$4;
				uint32* vr$53 = fb_StrToWstr( *(uint8**)&TEXTZ$1 );
				TMP$96$4 = vr$53;
				int32 vr$54 = fb_WstrCompare( *(uint32**)&LTEXTW$1, TMP$96$4 );
				RES$1 = (int64)-((int64)vr$54 != 0ll);
				fb_WstrDelete( TMP$96$4 );
			}
			goto label$40;
			label$46:;
			{
				uint32* TMP$97$4;
				uint32* vr$57 = fb_StrToWstr( *(uint8**)&TEXTZ$1 );
				TMP$97$4 = vr$57;
				int32 vr$58 = fb_WstrCompare( *(uint32**)&LTEXTW$1, TMP$97$4 );
				RES$1 = (int64)-((int64)vr$58 <= 0ll);
				fb_WstrDelete( TMP$97$4 );
			}
			goto label$40;
			label$47:;
			{
				uint32* TMP$98$4;
				uint32* vr$61 = fb_StrToWstr( *(uint8**)&TEXTZ$1 );
				TMP$98$4 = vr$61;
				int32 vr$62 = fb_WstrCompare( *(uint32**)&LTEXTW$1, TMP$98$4 );
				RES$1 = (int64)-((int64)vr$62 >= 0ll);
				fb_WstrDelete( TMP$98$4 );
			}
			goto label$40;
			label$41:;
			static const void* tmp$179[6ll] = {
				&&label$42,
				&&label$43,
				&&label$44,
				&&label$45,
				&&label$47,
				&&label$46,
			};
			if( TMP$92$3 < 45ll ) goto label$40;
			if( TMP$92$3 > 50ll ) goto label$40;
			goto *tmp$179[TMP$92$3 - 45ll];
			label$40:;
		}
	}
	goto label$29;
	label$39:;
	{
		uint32* vr$66 = HUNESCAPEW( *(uint32**)((uint8*)LS$1 + 88ll) );
		DWSTRASSIGN( &LTEXTW$1, vr$66 );
		uint32* vr$68 = HUNESCAPEW( *(uint32**)((uint8*)RS$1 + 88ll) );
		DWSTRASSIGN( &RTEXTW$1, vr$68 );
		{
			uint64 TMP$99$3;
			TMP$99$3 = (uint64)OP$1;
			goto label$49;
			label$50:;
			{
				int32 vr$69 = fb_WstrCompare( *(uint32**)&LTEXTW$1, *(uint32**)&RTEXTW$1 );
				RES$1 = (int64)-((int64)vr$69 == 0ll);
			}
			goto label$48;
			label$51:;
			{
				int32 vr$72 = fb_WstrCompare( *(uint32**)&LTEXTW$1, *(uint32**)&RTEXTW$1 );
				RES$1 = (int64)-((int64)vr$72 > 0ll);
			}
			goto label$48;
			label$52:;
			{
				int32 vr$75 = fb_WstrCompare( *(uint32**)&LTEXTW$1, *(uint32**)&RTEXTW$1 );
				RES$1 = (int64)-((int64)vr$75 < 0ll);
			}
			goto label$48;
			label$53:;
			{
				int32 vr$78 = fb_WstrCompare( *(uint32**)&LTEXTW$1, *(uint32**)&RTEXTW$1 );
				RES$1 = (int64)-((int64)vr$78 != 0ll);
			}
			goto label$48;
			label$54:;
			{
				int32 vr$81 = fb_WstrCompare( *(uint32**)&LTEXTW$1, *(uint32**)&RTEXTW$1 );
				RES$1 = (int64)-((int64)vr$81 <= 0ll);
			}
			goto label$48;
			label$55:;
			{
				int32 vr$84 = fb_WstrCompare( *(uint32**)&LTEXTW$1, *(uint32**)&RTEXTW$1 );
				RES$1 = (int64)-((int64)vr$84 >= 0ll);
			}
			goto label$48;
			label$49:;
			static const void* tmp$180[6ll] = {
				&&label$50,
				&&label$51,
				&&label$52,
				&&label$53,
				&&label$55,
				&&label$54,
			};
			if( TMP$99$3 < 45ll ) goto label$48;
			if( TMP$99$3 > 50ll ) goto label$48;
			goto *tmp$180[TMP$99$3 - 45ll];
			label$48:;
		}
	}
	label$29:;
	struct $7ASTNODE* vr$87 = ASTNEWCONSTI( RES$1, 7ll, (struct $8FBSYMBOL*)0ull );
	fb$result$1 = vr$87;
	ASTDELNODE( R$1 );
	ASTDELNODE( L$1 );
	label$28:;
	return fb$result$1;
}

static void HTOSTR( struct $7ASTNODE** L$1, struct $7ASTNODE** R$1 )
{
	label$56:;
	int64 LDTYPE$1;
	int64 RDTYPE$1;
	LDTYPE$1 = *(int64*)((uint8*)*L$1 + 8ll) & 511ll;
	RDTYPE$1 = *(int64*)((uint8*)*R$1 + 8ll) & 511ll;
	{
		uint64 TMP$100$2;
		TMP$100$2 = (uint64)LDTYPE$1;
		goto label$59;
		label$60:;
		{
		}
		goto label$58;
		label$61:;
		{
			struct $7ASTNODE* vr$7 = RTLTOSTR( *L$1, 0ll );
			*L$1 = vr$7;
			if( *L$1 != (struct $7ASTNODE*)0ull ) goto label$63;
			{
				ERRREPORT( 20ll, 0ll, (uint8*)0ull );
				struct $7ASTNODE* vr$11 = ASTNEWCONSTSTR( (uint8*)0ull );
				*L$1 = vr$11;
			}
			label$63:;
			label$62:;
		}
		goto label$58;
		label$59:;
		static const void* tmp$181[15ll] = {
			&&label$60,
			&&label$61,
			&&label$61,
			&&label$60,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$61,
			&&label$60,
			&&label$60,
		};
		if( TMP$100$2 < 3ll ) goto label$61;
		if( TMP$100$2 > 17ll ) goto label$61;
		goto *tmp$181[TMP$100$2 - 3ll];
		label$58:;
	}
	{
		uint64 TMP$101$2;
		TMP$101$2 = (uint64)RDTYPE$1;
		goto label$65;
		label$66:;
		{
		}
		goto label$64;
		label$67:;
		{
			if( LDTYPE$1 == 6ll ) goto label$69;
			{
				struct $7ASTNODE* vr$15 = RTLTOSTR( *R$1, 0ll );
				*R$1 = vr$15;
			}
			goto label$68;
			label$69:;
			{
				struct $7ASTNODE* vr$18 = RTLTOWSTR( *R$1 );
				*R$1 = vr$18;
			}
			label$68:;
			if( *R$1 != (struct $7ASTNODE*)0ull ) goto label$71;
			{
				ERRREPORT( 20ll, 0ll, (uint8*)0ull );
				struct $7ASTNODE* vr$22 = ASTNEWCONSTSTR( (uint8*)0ull );
				*R$1 = vr$22;
			}
			label$71:;
			label$70:;
		}
		goto label$64;
		label$65:;
		static const void* tmp$182[15ll] = {
			&&label$66,
			&&label$67,
			&&label$67,
			&&label$66,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$67,
			&&label$66,
			&&label$66,
		};
		if( TMP$101$2 < 3ll ) goto label$67;
		if( TMP$101$2 > 17ll ) goto label$67;
		goto *tmp$182[TMP$101$2 - 3ll];
		label$64:;
	}
	label$57:;
}

static struct $7ASTNODE* HCONSTBOP( int64 OP$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, struct $7ASTNODE* L$1, struct $7ASTNODE* R$1 )
{
	int64 TMP$102$1;
	int64 TMP$104$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$72:;
	if( (*(int64*)((uint8*)L$1 + 8ll) & 480ll) == 0ll ) goto label$74;
	TMP$102$1 = 22ll;
	goto label$644;
	label$74:;
	TMP$102$1 = *(int64*)((uint8*)L$1 + 8ll) & 31ll;
	label$644:;
	if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$102$1 * 56ll)) != 1ll ) goto label$76;
	{
		{
			uint64 TMP$103$3;
			TMP$103$3 = (uint64)OP$1;
			goto label$78;
			label$79:;
			{
				*(double*)((uint8*)L$1 + 40ll) = *(double*)((uint8*)L$1 + 40ll) + *(double*)((uint8*)R$1 + 40ll);
			}
			goto label$77;
			label$80:;
			{
				*(double*)((uint8*)L$1 + 40ll) = *(double*)((uint8*)L$1 + 40ll) - *(double*)((uint8*)R$1 + 40ll);
			}
			goto label$77;
			label$81:;
			{
				*(double*)((uint8*)L$1 + 40ll) = *(double*)((uint8*)L$1 + 40ll) * *(double*)((uint8*)R$1 + 40ll);
			}
			goto label$77;
			label$82:;
			{
				*(double*)((uint8*)L$1 + 40ll) = *(double*)((uint8*)L$1 + 40ll) / *(double*)((uint8*)R$1 + 40ll);
			}
			goto label$77;
			label$83:;
			{
				double vr$26 = pow( *(double*)((uint8*)L$1 + 40ll), *(double*)((uint8*)R$1 + 40ll) );
				*(double*)((uint8*)L$1 + 40ll) = vr$26;
			}
			goto label$77;
			label$84:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)-(*(double*)((uint8*)L$1 + 40ll) != *(double*)((uint8*)R$1 + 40ll));
			}
			goto label$77;
			label$85:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)-(*(double*)((uint8*)L$1 + 40ll) == *(double*)((uint8*)R$1 + 40ll));
			}
			goto label$77;
			label$86:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)-(*(double*)((uint8*)L$1 + 40ll) > *(double*)((uint8*)R$1 + 40ll));
			}
			goto label$77;
			label$87:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)-(*(double*)((uint8*)L$1 + 40ll) < *(double*)((uint8*)R$1 + 40ll));
			}
			goto label$77;
			label$88:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)-(*(double*)((uint8*)L$1 + 40ll) <= *(double*)((uint8*)R$1 + 40ll));
			}
			goto label$77;
			label$89:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)-(*(double*)((uint8*)L$1 + 40ll) >= *(double*)((uint8*)R$1 + 40ll));
			}
			goto label$77;
			label$90:;
			{
				double vr$54 = atan2( *(double*)((uint8*)L$1 + 40ll), *(double*)((uint8*)R$1 + 40ll) );
				*(double*)((uint8*)L$1 + 40ll) = vr$54;
			}
			goto label$77;
			label$91:;
			{
				if( *(double*)((uint8*)L$1 + 40ll) == 0x0p+0 ) goto label$93;
				{
					*(int64*)((uint8*)L$1 + 40ll) = (int64)-(*(double*)((uint8*)R$1 + 40ll) != 0x0p+0);
				}
				goto label$92;
				label$93:;
				{
					*(int64*)((uint8*)L$1 + 40ll) = 0ll;
				}
				label$92:;
			}
			goto label$77;
			label$94:;
			{
				if( *(double*)((uint8*)L$1 + 40ll) == 0x0p+0 ) goto label$96;
				{
					*(int64*)((uint8*)L$1 + 40ll) = -1ll;
				}
				goto label$95;
				label$96:;
				{
					*(int64*)((uint8*)L$1 + 40ll) = (int64)-(*(double*)((uint8*)R$1 + 40ll) != 0x0p+0);
				}
				label$95:;
			}
			goto label$77;
			label$97:;
			{
			}
			goto label$77;
			label$78:;
			static const void* tmp$183[37ll] = {
				&&label$79,
				&&label$80,
				&&label$81,
				&&label$82,
				&&label$97,
				&&label$97,
				&&label$97,
				&&label$97,
				&&label$91,
				&&label$94,
				&&label$97,
				&&label$97,
				&&label$97,
				&&label$97,
				&&label$97,
				&&label$83,
				&&label$97,
				&&label$85,
				&&label$86,
				&&label$87,
				&&label$84,
				&&label$89,
				&&label$88,
				&&label$97,
				&&label$97,
				&&label$97,
				&&label$97,
				&&label$97,
				&&label$97,
				&&label$97,
				&&label$97,
				&&label$97,
				&&label$97,
				&&label$97,
				&&label$97,
				&&label$97,
				&&label$90,
			};
			if( TMP$103$3 < 28ll ) goto label$97;
			if( TMP$103$3 > 64ll ) goto label$97;
			goto *tmp$183[TMP$103$3 - 28ll];
			label$77:;
		}
	}
	goto label$75;
	label$76:;
	if( (*(int64*)((uint8*)L$1 + 8ll) & 480ll) == 0ll ) goto label$99;
	TMP$104$1 = 22ll;
	goto label$645;
	label$99:;
	TMP$104$1 = *(int64*)((uint8*)L$1 + 8ll) & 31ll;
	label$645:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$104$1 * 56ll)) + 16ll) == 0ll ) goto label$98;
	{
		{
			uint64 TMP$105$3;
			TMP$105$3 = (uint64)OP$1;
			goto label$101;
			label$102:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = *(int64*)((uint8*)L$1 + 40ll) + *(int64*)((uint8*)R$1 + 40ll);
			}
			goto label$100;
			label$103:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = *(int64*)((uint8*)L$1 + 40ll) - *(int64*)((uint8*)R$1 + 40ll);
			}
			goto label$100;
			label$104:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = *(int64*)((uint8*)L$1 + 40ll) * *(int64*)((uint8*)R$1 + 40ll);
			}
			goto label$100;
			label$105:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = *(int64*)((uint8*)L$1 + 40ll) << *(int64*)((uint8*)R$1 + 40ll);
			}
			goto label$100;
			label$106:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = *(int64*)((uint8*)L$1 + 40ll) >> *(int64*)((uint8*)R$1 + 40ll);
			}
			goto label$100;
			label$107:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = *(int64*)((uint8*)L$1 + 40ll) & *(int64*)((uint8*)R$1 + 40ll);
			}
			goto label$100;
			label$108:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = *(int64*)((uint8*)L$1 + 40ll) | *(int64*)((uint8*)R$1 + 40ll);
			}
			goto label$100;
			label$109:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = *(int64*)((uint8*)L$1 + 40ll) ^ *(int64*)((uint8*)R$1 + 40ll);
			}
			goto label$100;
			label$110:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = ~(*(int64*)((uint8*)L$1 + 40ll) ^ *(int64*)((uint8*)R$1 + 40ll));
			}
			goto label$100;
			label$111:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = ~(*(int64*)((uint8*)L$1 + 40ll)) | *(int64*)((uint8*)R$1 + 40ll);
			}
			goto label$100;
			label$112:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)-(*(int64*)((uint8*)L$1 + 40ll) != *(int64*)((uint8*)R$1 + 40ll));
			}
			goto label$100;
			label$113:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)-(*(int64*)((uint8*)L$1 + 40ll) == *(int64*)((uint8*)R$1 + 40ll));
			}
			goto label$100;
			label$114:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)-(*(int64*)((uint8*)L$1 + 40ll) > *(int64*)((uint8*)R$1 + 40ll));
			}
			goto label$100;
			label$115:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)-(*(int64*)((uint8*)L$1 + 40ll) < *(int64*)((uint8*)R$1 + 40ll));
			}
			goto label$100;
			label$116:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)-(*(int64*)((uint8*)L$1 + 40ll) <= *(int64*)((uint8*)R$1 + 40ll));
			}
			goto label$100;
			label$117:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)-(*(int64*)((uint8*)L$1 + 40ll) >= *(int64*)((uint8*)R$1 + 40ll));
			}
			goto label$100;
			label$118:;
			{
				int64 TMP$106$4;
				if( *(int64*)((uint8*)L$1 + 40ll) == 0ll ) goto label$119;
				TMP$106$4 = (int64)-(*(int64*)((uint8*)R$1 + 40ll) != 0ll);
				goto label$646;
				label$119:;
				TMP$106$4 = 0ll;
				label$646:;
				*(int64*)((uint8*)L$1 + 40ll) = TMP$106$4;
			}
			goto label$100;
			label$120:;
			{
				int64 TMP$107$4;
				if( *(int64*)((uint8*)L$1 + 40ll) == 0ll ) goto label$121;
				TMP$107$4 = -1ll;
				goto label$647;
				label$121:;
				TMP$107$4 = (int64)-(*(int64*)((uint8*)R$1 + 40ll) != 0ll);
				label$647:;
				*(int64*)((uint8*)L$1 + 40ll) = TMP$107$4;
			}
			goto label$100;
			label$122:;
			{
				int64 TMP$108$4;
				int64 TMP$109$4;
				if( *(int64*)((uint8*)R$1 + 40ll) != 0ll ) goto label$124;
				{
					*(int64*)((uint8*)L$1 + 40ll) = 0ll;
					ERRREPORT( 99ll, 0ll, (uint8*)0ull );
				}
				goto label$123;
				label$124:;
				if( (*(int64*)((uint8*)L$1 + 8ll) & 480ll) == 0ll ) goto label$126;
				TMP$108$4 = 22ll;
				goto label$648;
				label$126:;
				TMP$108$4 = *(int64*)((uint8*)L$1 + 8ll) & 31ll;
				label$648:;
				if( (*(int64*)((uint8*)L$1 + 8ll) & 480ll) == 0ll ) goto label$127;
				TMP$109$4 = 22ll;
				goto label$649;
				label$127:;
				TMP$109$4 = *(int64*)((uint8*)L$1 + 8ll) & 31ll;
				label$649:;
				if( ((int64)-(*(int64*)((uint8*)R$1 + 40ll) == -1ll) & (((int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$108$4 * 56ll)) + 8ll) == 8ll) & (int64)-(*(int64*)((uint8*)L$1 + 40ll) == -9223372036854775808ull)) | ((int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$109$4 * 56ll)) + 8ll) == 4ll) & (int64)-(*(int64*)((uint8*)L$1 + 40ll) == -2147483648ll)))) == 0ll ) goto label$125;
				{
					*(int64*)((uint8*)L$1 + 40ll) = 0ll;
					if( *(int64*)((uint8*)&AST$ + 464ll) != 0ll ) goto label$129;
					{
						ERRREPORTWARN( 25ll, (uint8*)0ull, 1ll );
					}
					label$129:;
					label$128:;
				}
				goto label$123;
				label$125:;
				if( OP$1 != 32ll ) goto label$130;
				{
					*(int64*)((uint8*)L$1 + 40ll) = *(int64*)((uint8*)L$1 + 40ll) / *(int64*)((uint8*)R$1 + 40ll);
				}
				goto label$123;
				label$130:;
				{
					*(int64*)((uint8*)L$1 + 40ll) = *(int64*)((uint8*)L$1 + 40ll) % *(int64*)((uint8*)R$1 + 40ll);
				}
				label$123:;
			}
			goto label$100;
			label$131:;
			{
			}
			goto label$100;
			label$101:;
			static const void* tmp$184[23ll] = {
				&&label$102,
				&&label$103,
				&&label$104,
				&&label$131,
				&&label$122,
				&&label$122,
				&&label$107,
				&&label$108,
				&&label$118,
				&&label$120,
				&&label$109,
				&&label$110,
				&&label$111,
				&&label$105,
				&&label$106,
				&&label$131,
				&&label$131,
				&&label$113,
				&&label$114,
				&&label$115,
				&&label$112,
				&&label$117,
				&&label$116,
			};
			if( TMP$105$3 < 28ll ) goto label$131;
			if( TMP$105$3 > 50ll ) goto label$131;
			goto *tmp$184[TMP$105$3 - 28ll];
			label$100:;
		}
		struct $7ASTNODE* vr$188 = ASTCONVERTRAWCONSTI( DTYPE$1, SUBTYPE$1, L$1 );
		L$1 = vr$188;
	}
	goto label$75;
	label$98:;
	{
		{
			uint64 TMP$110$3;
			TMP$110$3 = (uint64)OP$1;
			goto label$133;
			label$134:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)(*(uint64*)((uint8*)L$1 + 40ll) + *(uint64*)((uint8*)R$1 + 40ll));
			}
			goto label$132;
			label$135:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)(*(uint64*)((uint8*)L$1 + 40ll) - *(uint64*)((uint8*)R$1 + 40ll));
			}
			goto label$132;
			label$136:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)(*(uint64*)((uint8*)L$1 + 40ll) * *(uint64*)((uint8*)R$1 + 40ll));
			}
			goto label$132;
			label$137:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)(*(uint64*)((uint8*)L$1 + 40ll) << *(uint64*)((uint8*)R$1 + 40ll));
			}
			goto label$132;
			label$138:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)(*(uint64*)((uint8*)L$1 + 40ll) >> *(uint64*)((uint8*)R$1 + 40ll));
			}
			goto label$132;
			label$139:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)(*(uint64*)((uint8*)L$1 + 40ll) & *(uint64*)((uint8*)R$1 + 40ll));
			}
			goto label$132;
			label$140:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)(*(uint64*)((uint8*)L$1 + 40ll) | *(uint64*)((uint8*)R$1 + 40ll));
			}
			goto label$132;
			label$141:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)(*(uint64*)((uint8*)L$1 + 40ll) ^ *(uint64*)((uint8*)R$1 + 40ll));
			}
			goto label$132;
			label$142:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)~(*(uint64*)((uint8*)L$1 + 40ll) ^ *(uint64*)((uint8*)R$1 + 40ll));
			}
			goto label$132;
			label$143:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)(~(*(uint64*)((uint8*)L$1 + 40ll)) | *(uint64*)((uint8*)R$1 + 40ll));
			}
			goto label$132;
			label$144:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)-(*(uint64*)((uint8*)L$1 + 40ll) != *(uint64*)((uint8*)R$1 + 40ll));
			}
			goto label$132;
			label$145:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)-(*(uint64*)((uint8*)L$1 + 40ll) == *(uint64*)((uint8*)R$1 + 40ll));
			}
			goto label$132;
			label$146:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)-(*(uint64*)((uint8*)L$1 + 40ll) > *(uint64*)((uint8*)R$1 + 40ll));
			}
			goto label$132;
			label$147:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)-(*(uint64*)((uint8*)L$1 + 40ll) < *(uint64*)((uint8*)R$1 + 40ll));
			}
			goto label$132;
			label$148:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)-(*(uint64*)((uint8*)L$1 + 40ll) <= *(uint64*)((uint8*)R$1 + 40ll));
			}
			goto label$132;
			label$149:;
			{
				*(int64*)((uint8*)L$1 + 40ll) = (int64)-(*(uint64*)((uint8*)L$1 + 40ll) >= *(uint64*)((uint8*)R$1 + 40ll));
			}
			goto label$132;
			label$150:;
			{
				int64 TMP$111$4;
				if( *(int64*)((uint8*)L$1 + 40ll) == 0ll ) goto label$151;
				TMP$111$4 = (int64)-(*(int64*)((uint8*)R$1 + 40ll) != 0ll);
				goto label$650;
				label$151:;
				TMP$111$4 = 0ll;
				label$650:;
				*(int64*)((uint8*)L$1 + 40ll) = TMP$111$4;
			}
			goto label$132;
			label$152:;
			{
				int64 TMP$112$4;
				if( *(int64*)((uint8*)L$1 + 40ll) == 0ll ) goto label$153;
				TMP$112$4 = -1ll;
				goto label$651;
				label$153:;
				TMP$112$4 = (int64)-(*(int64*)((uint8*)R$1 + 40ll) != 0ll);
				label$651:;
				*(int64*)((uint8*)L$1 + 40ll) = TMP$112$4;
			}
			goto label$132;
			label$154:;
			{
				if( *(int64*)((uint8*)R$1 + 40ll) != 0ll ) goto label$156;
				{
					*(int64*)((uint8*)L$1 + 40ll) = 0ll;
					ERRREPORT( 99ll, 0ll, (uint8*)0ull );
				}
				goto label$155;
				label$156:;
				if( OP$1 != 32ll ) goto label$157;
				{
					*(int64*)((uint8*)L$1 + 40ll) = (int64)(*(uint64*)((uint8*)L$1 + 40ll) / *(uint64*)((uint8*)R$1 + 40ll));
				}
				goto label$155;
				label$157:;
				{
					*(int64*)((uint8*)L$1 + 40ll) = (int64)(*(uint64*)((uint8*)L$1 + 40ll) % *(uint64*)((uint8*)R$1 + 40ll));
				}
				label$155:;
			}
			goto label$132;
			label$158:;
			{
			}
			goto label$132;
			label$133:;
			static const void* tmp$185[23ll] = {
				&&label$134,
				&&label$135,
				&&label$136,
				&&label$158,
				&&label$154,
				&&label$154,
				&&label$139,
				&&label$140,
				&&label$150,
				&&label$152,
				&&label$141,
				&&label$142,
				&&label$143,
				&&label$137,
				&&label$138,
				&&label$158,
				&&label$158,
				&&label$145,
				&&label$146,
				&&label$147,
				&&label$144,
				&&label$149,
				&&label$148,
			};
			if( TMP$110$3 < 28ll ) goto label$158;
			if( TMP$110$3 > 50ll ) goto label$158;
			goto *tmp$185[TMP$110$3 - 28ll];
			label$132:;
		}
		struct $7ASTNODE* vr$275 = ASTCONVERTRAWCONSTI( DTYPE$1, SUBTYPE$1, L$1 );
		L$1 = vr$275;
	}
	label$75:;
	fb$result$1 = L$1;
	label$73:;
	return fb$result$1;
}

static int64 HCHECKPOINTER( int64 OP$1, int64 DTYPE$1, int64 DCLASS$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$159:;
	if( DCLASS$1 == 0ll ) goto label$162;
	{
		fb$result$1 = 0ll;
		goto label$160;
	}
	goto label$161;
	label$162:;
	{
		{
			int64 TMP$113$3;
			int64 TMP$114$3;
			if( (DTYPE$1 & 480ll) == 0ll ) goto label$163;
			TMP$113$3 = 22ll;
			goto label$652;
			label$163:;
			TMP$113$3 = DTYPE$1 & 31ll;
			label$652:;
			TMP$114$3 = TMP$113$3;
			if( TMP$114$3 == 3ll ) goto label$166;
			label$167:;
			if( TMP$114$3 != 6ll ) goto label$165;
			label$166:;
			{
				fb$result$1 = 0ll;
				goto label$160;
			}
			label$165:;
			label$164:;
		}
	}
	label$161:;
	{
		if( OP$1 == 28ll ) goto label$170;
		label$171:;
		if( OP$1 != 29ll ) goto label$169;
		label$170:;
		{
			if( (DTYPE$1 & 480ll) == 0ll ) goto label$173;
			{
				fb$result$1 = 0ll;
				goto label$160;
			}
			label$173:;
			label$172:;
			fb$result$1 = -1ll;
			goto label$160;
		}
		goto label$168;
		label$169:;
		if( OP$1 == 36ll ) goto label$175;
		label$176:;
		if( OP$1 != 37ll ) goto label$174;
		label$175:;
		{
			fb$result$1 = -1ll;
			goto label$160;
		}
		goto label$168;
		label$174:;
		if( OP$1 == 45ll ) goto label$178;
		label$179:;
		if( OP$1 == 46ll ) goto label$178;
		label$180:;
		if( OP$1 == 47ll ) goto label$178;
		label$181:;
		if( OP$1 == 48ll ) goto label$178;
		label$182:;
		if( OP$1 == 50ll ) goto label$178;
		label$183:;
		if( OP$1 != 49ll ) goto label$177;
		label$178:;
		{
			fb$result$1 = -1ll;
			goto label$160;
		}
		goto label$168;
		label$177:;
		{
			fb$result$1 = 0ll;
			goto label$160;
		}
		label$184:;
		label$168:;
	}
	label$160:;
	return fb$result$1;
}

static struct $7ASTNODE* HDOPOINTERARITH( int64 OP$1, struct $7ASTNODE* P$1, struct $7ASTNODE* E$1, int64 SWAPPED$1 )
{
	int64 TMP$115$1;
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$185:;
	int64 EDTYPE$1;
	int64 LGT$1;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	EDTYPE$1 = *(int64*)((uint8*)E$1 + 8ll) & 511ll;
	if( (EDTYPE$1 & 480ll) == 0ll ) goto label$187;
	TMP$115$1 = 22ll;
	goto label$653;
	label$187:;
	TMP$115$1 = EDTYPE$1 & 31ll;
	label$653:;
	if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$115$1 * 56ll)) == 0ll ) goto label$189;
	{
		goto label$186;
	}
	goto label$188;
	label$189:;
	{
		{
			if( EDTYPE$1 == 3ll ) goto label$192;
			label$193:;
			if( EDTYPE$1 != 6ll ) goto label$191;
			label$192:;
			{
				goto label$186;
			}
			label$191:;
			label$190:;
		}
	}
	label$188:;
	int64 vr$13 = SYMBCALCDEREFLEN( *(int64*)((uint8*)P$1 + 8ll) & 511ll, *(struct $8FBSYMBOL**)((uint8*)P$1 + 16ll) );
	LGT$1 = vr$13;
	if( LGT$1 > 0ll ) goto label$195;
	{
		goto label$186;
	}
	label$195:;
	label$194:;
	if( (EDTYPE$1 & 480ll) == 0ll ) goto label$197;
	{
		if( OP$1 != 29ll ) goto label$199;
		{
			if( ((int64)-(EDTYPE$1 != (*(int64*)((uint8*)P$1 + 8ll) & 511ll)) | (int64)-(*(struct $8FBSYMBOL**)((uint8*)E$1 + 16ll) != *(struct $8FBSYMBOL**)((uint8*)P$1 + 16ll))) == 0ll ) goto label$201;
			{
				goto label$186;
			}
			label$201:;
			label$200:;
			struct $7ASTNODE* vr$26 = ASTNEWCONV( 7ll, (struct $8FBSYMBOL*)0ull, P$1, 0ll, (int64*)0ull );
			P$1 = vr$26;
			struct $7ASTNODE* vr$27 = ASTNEWCONV( 7ll, (struct $8FBSYMBOL*)0ull, E$1, 0ll, (int64*)0ull );
			E$1 = vr$27;
			struct $7ASTNODE* vr$28 = ASTNEWBOP( 29ll, P$1, E$1, (struct $8FBSYMBOL*)0ull, 1ll );
			E$1 = vr$28;
			struct $7ASTNODE* vr$29 = ASTNEWCONSTI( LGT$1, 7ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$30 = ASTNEWBOP( 32ll, E$1, vr$29, (struct $8FBSYMBOL*)0ull, 1ll );
			fb$result$1 = vr$30;
		}
		label$199:;
		label$198:;
		goto label$186;
	}
	label$197:;
	label$196:;
	if( EDTYPE$1 == 7ll ) goto label$203;
	{
		struct $7ASTNODE* vr$32 = ASTNEWCONV( 7ll, (struct $8FBSYMBOL*)0ull, E$1, 0ll, (int64*)0ull );
		E$1 = vr$32;
	}
	label$203:;
	label$202:;
	{
		if( OP$1 == 28ll ) goto label$206;
		label$207:;
		if( OP$1 != 29ll ) goto label$205;
		label$206:;
		{
			int64 TMP$116$3;
			if( (int64)-(OP$1 == 29ll) == 0ll ) goto label$208;
			TMP$116$3 = (int64)-(SWAPPED$1 != 0ll);
			goto label$654;
			label$208:;
			TMP$116$3 = 0ll;
			label$654:;
			if( TMP$116$3 == 0ll ) goto label$210;
			{
				goto label$186;
			}
			label$210:;
			label$209:;
			struct $7ASTNODE* vr$39 = ASTNEWCONSTI( LGT$1, 7ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$40 = ASTNEWBOP( 30ll, E$1, vr$39, (struct $8FBSYMBOL*)0ull, 1ll );
			E$1 = vr$40;
			struct $7ASTNODE* vr$41 = ASTNEWBOP( OP$1, P$1, E$1, (struct $8FBSYMBOL*)0ull, 1ll );
			fb$result$1 = vr$41;
		}
		goto label$204;
		label$205:;
		{
			goto label$186;
		}
		label$211:;
		label$204:;
	}
	label$186:;
	return fb$result$1;
}

static struct $7ASTNODE* HCONVERTUDT_L( int64 OP$1, struct $7ASTNODE* L$1, struct $7ASTNODE* R$1, struct $8FBSYMBOL* EX$1, $9AST_OPOPT OPTIONS$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$212:;
	struct $7ASTNODE* T$1;
	struct $7ASTNODE* vr$3 = ASTNEWCONV( *(int64*)((uint8*)L$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll), R$1, 0ll, (int64*)0ull );
	T$1 = vr$3;
	if( T$1 == (struct $7ASTNODE*)0ull ) goto label$215;
	{
		struct $7ASTNODE* vr$6 = ASTNEWBOP( OP$1, L$1, T$1, EX$1, OPTIONS$1 | 8ll );
		T$1 = vr$6;
		if( T$1 == (struct $7ASTNODE*)0ull ) goto label$217;
		{
			fb$result$1 = T$1;
			goto label$213;
		}
		label$217:;
		label$216:;
	}
	label$215:;
	label$214:;
	struct $7ASTNODE* vr$10 = ASTNEWCONV( *(int64*)((uint8*)R$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)R$1 + 16ll), L$1, 0ll, (int64*)0ull );
	T$1 = vr$10;
	if( T$1 == (struct $7ASTNODE*)0ull ) goto label$219;
	{
		struct $7ASTNODE* vr$13 = ASTNEWBOP( OP$1, T$1, R$1, EX$1, OPTIONS$1 | 8ll );
		T$1 = vr$13;
		if( T$1 == (struct $7ASTNODE*)0ull ) goto label$221;
		{
			fb$result$1 = T$1;
			goto label$213;
		}
		label$221:;
		label$220:;
	}
	label$219:;
	label$218:;
	struct $7ASTNODE* vr$15 = ASTNEWCONV( 0ll, (struct $8FBSYMBOL*)0ull, L$1, 0ll, (int64*)0ull );
	T$1 = vr$15;
	if( T$1 == (struct $7ASTNODE*)0ull ) goto label$223;
	{
		struct $7ASTNODE* vr$17 = ASTNEWBOP( OP$1, T$1, R$1, EX$1, OPTIONS$1 );
		fb$result$1 = vr$17;
		goto label$213;
	}
	label$223:;
	label$222:;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	label$213:;
	return fb$result$1;
}

static struct $7ASTNODE* HCONVERTUDT_R( int64 OP$1, struct $7ASTNODE* L$1, struct $7ASTNODE* R$1, struct $8FBSYMBOL* EX$1, $9AST_OPOPT OPTIONS$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$224:;
	struct $7ASTNODE* T$1;
	struct $7ASTNODE* vr$3 = ASTNEWCONV( *(int64*)((uint8*)R$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)R$1 + 16ll), L$1, 0ll, (int64*)0ull );
	T$1 = vr$3;
	if( T$1 == (struct $7ASTNODE*)0ull ) goto label$227;
	{
		struct $7ASTNODE* vr$6 = ASTNEWBOP( OP$1, T$1, R$1, EX$1, OPTIONS$1 | 8ll );
		T$1 = vr$6;
		if( T$1 == (struct $7ASTNODE*)0ull ) goto label$229;
		{
			fb$result$1 = T$1;
			goto label$225;
		}
		label$229:;
		label$228:;
	}
	label$227:;
	label$226:;
	struct $7ASTNODE* vr$10 = ASTNEWCONV( *(int64*)((uint8*)L$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)L$1 + 16ll), R$1, 0ll, (int64*)0ull );
	T$1 = vr$10;
	if( T$1 == (struct $7ASTNODE*)0ull ) goto label$231;
	{
		struct $7ASTNODE* vr$13 = ASTNEWBOP( OP$1, L$1, T$1, EX$1, OPTIONS$1 | 8ll );
		T$1 = vr$13;
		if( T$1 == (struct $7ASTNODE*)0ull ) goto label$233;
		{
			fb$result$1 = T$1;
			goto label$225;
		}
		label$233:;
		label$232:;
	}
	label$231:;
	label$230:;
	struct $7ASTNODE* vr$15 = ASTNEWCONV( 0ll, (struct $8FBSYMBOL*)0ull, R$1, 0ll, (int64*)0ull );
	T$1 = vr$15;
	if( T$1 == (struct $7ASTNODE*)0ull ) goto label$235;
	{
		struct $7ASTNODE* vr$18 = ASTNEWBOP( OP$1, L$1, T$1, EX$1, OPTIONS$1 | 8ll );
		fb$result$1 = vr$18;
		goto label$225;
	}
	label$235:;
	label$234:;
	fb$result$1 = (struct $7ASTNODE*)0ull;
	label$225:;
	return fb$result$1;
}

static int64 HCHECKDEREFWCHARPTR( struct $7ASTNODE* L$1, int64* PLDTYPE$1, struct $7ASTNODE* R$1, int64 RDTYPE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$236:;
	struct $7ASTNODE* LL$1;
	if( *(int64*)L$1 == 20ll ) goto label$239;
	{
		goto label$237;
	}
	label$239:;
	label$238:;
	LL$1 = *(struct $7ASTNODE**)((uint8*)L$1 + 112ll);
	if( LL$1 == (struct $7ASTNODE*)0ull ) goto label$241;
	{
		if( *(int64*)LL$1 != 17ll ) goto label$243;
		{
			if( (*(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)LL$1 + 24ll) + 16ll) & 16777216ll) == 0ll ) goto label$245;
			{
				goto label$237;
			}
			label$245:;
			label$244:;
		}
		label$243:;
		label$242:;
	}
	label$241:;
	label$240:;
	*PLDTYPE$1 = (*PLDTYPE$1 & -512ll) | (*(int64*)((uint8*)&ENV$ + 424ll) & 511ll);
	fb$result$1 = -1ll;
	label$237:;
	return fb$result$1;
}

static void HCONVOPERAND( int64 NEWDTYPE$1, int64* DTYPE$1, int64* DCLASS$1, struct $7ASTNODE** N$1 )
{
	int64 TMP$117$1;
	label$246:;
	*DTYPE$1 = (*DTYPE$1 & -512ll) | (NEWDTYPE$1 & 511ll);
	if( (NEWDTYPE$1 & 480ll) == 0ll ) goto label$248;
	TMP$117$1 = 22ll;
	goto label$655;
	label$248:;
	TMP$117$1 = NEWDTYPE$1 & 31ll;
	label$655:;
	*DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$117$1 * 56ll));
	struct $7ASTNODE* vr$12 = ASTNEWCONV( *DTYPE$1, (struct $8FBSYMBOL*)0ull, *N$1, 0ll, (int64*)0ull );
	*N$1 = vr$12;
	label$247:;
}

// Total compilation time: 0.04949999100062996 seconds.
