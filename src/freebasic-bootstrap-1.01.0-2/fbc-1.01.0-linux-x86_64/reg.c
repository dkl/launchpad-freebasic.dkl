// Compilation of fbc-1.01.0/src/compiler/reg.bas started at 14:16:44 on 02-28-2015

typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
struct $8REGCLASS;
typedef int64 $15IRVREGTYPE_ENUM;
typedef int64 $11FB_DATATYPE;
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
typedef int64 (*tmp$76)( struct $8REGCLASS*, struct $6IRVREG*, struct $6IRVREG*, uint64 );
typedef int64 (*tmp$77)( struct $8REGCLASS*, int64, struct $6IRVREG*, struct $6IRVREG* );
typedef void (*tmp$78)( struct $8REGCLASS*, int64 );
typedef int64 (*tmp$79)( struct $8REGCLASS*, int64 );
typedef void (*tmp$80)( struct $8REGCLASS*, int64, struct $6IRVREG*, struct $6IRVREG* );
typedef int64 (*tmp$81)( struct $8REGCLASS* );
typedef struct $6IRVREG* (*tmp$82)( struct $8REGCLASS*, int64, struct $6IRVREG** );
typedef void (*tmp$83)( struct $8REGCLASS* );
struct $7REG_REG;
struct $7REG_REG {
	int64 NUM;
	struct $7REG_REG* PREV;
};
__FB_STATIC_ASSERT( sizeof( struct $7REG_REG ) == 16 );
typedef int64 $12REG_SIZEMASK;
struct $10REG_REGCTX {
	struct $7REG_REG* FREETAIL;
	struct $7REG_REG* USEDTAIL;
	int64 FREETB;
	struct $7REG_REG REGTB[8];
	$12REG_SIZEMASK SIZETB[8];
	uint64 NEXTTB[8];
};
__FB_STATIC_ASSERT( sizeof( struct $10REG_REGCTX ) == 280 );
struct $10REG_STKCTX {
	int64 REGTB[8];
	int64 FREGS;
};
__FB_STATIC_ASSERT( sizeof( struct $10REG_STKCTX ) == 72 );
struct $8REGCLASS {
	tmp$76 ENSURE;
	tmp$76 _ALLOCATE;
	tmp$77 ALLOCATEREG;
	tmp$78 FREE;
	tmp$79 ISFREE;
	tmp$80 SETOWNER;
	tmp$81 GETMAXREGS;
	tmp$81 GETFIRST;
	tmp$79 GETNEXT;
	tmp$82 GETVREG;
	tmp$79 GETREALREG;
	tmp$83 CLEAR;
	tmp$83 DUMP;
	int64 CLASS;
	int64 ISSTACK;
	int64 REGS;
	struct $6IRVREG* VREGTB[8];
	struct $6IRVREG* VAUXPARENT[8];
	struct $10REG_REGCTX REGCTX;
	struct $10REG_STKCTX STKCTX;
};
__FB_STATIC_ASSERT( sizeof( struct $8REGCLASS ) == 608 );
struct $16__FB_ARRAYDIMTB$ {
	int64 ELEMENTS;
	int64 LBOUND;
	int64 UBOUND;
};
__FB_STATIC_ASSERT( sizeof( struct $16__FB_ARRAYDIMTB$ ) == 24 );
struct $7FBARRAYI12REG_SIZEMASKE {
	$12REG_SIZEMASK* DATA;
	$12REG_SIZEMASK* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYI12REG_SIZEMASKE ) == 232 );
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
typedef void (*tmp$43)( struct $6IRVREG*, struct $6IRVREG* );
typedef uint64 (*tmp$71)( struct $6IRVREG* );
typedef void (*tmp$49)( int64, struct $6IRVREG*, struct $6IRVREG* );
typedef void (*tmp$44)( int64 );
void free( void* );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__reg( void ) __attribute__(( constructor ));
void* XCALLOCATE( int32 );
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
typedef int64 $12FB_ERRMSGOPT;
void ERRREPORTEX( int64, uint8*, int64, $12FB_ERRMSGOPT, uint8* );
static void REGINITCLASS( struct $8REGCLASS*, struct $7FBARRAYI12REG_SIZEMASKE* );
static void SREGINITCLASS( struct $8REGCLASS*, struct $7FBARRAYI12REG_SIZEMASKE* );
static void REGPUSH( struct $8REGCLASS*, int64 );
static int64 REGPOP( struct $8REGCLASS*, int64 );
static void REGPOPREG( struct $8REGCLASS*, int64 );
static void REGCLEAR( struct $8REGCLASS* );
static int64 REGFINDFAREST( struct $8REGCLASS*, int64 );
static int64 REGALLOCATE( struct $8REGCLASS*, struct $6IRVREG*, struct $6IRVREG*, uint64 );
static int64 REGALLOCATEREG( struct $8REGCLASS*, int64, struct $6IRVREG*, struct $6IRVREG* );
static int64 REGENSURE( struct $8REGCLASS*, struct $6IRVREG*, struct $6IRVREG*, uint64 );
static void REGSETOWNER( struct $8REGCLASS*, int64, struct $6IRVREG*, struct $6IRVREG* );
static void REGFREE( struct $8REGCLASS*, int64 );
static int64 REGISFREE( struct $8REGCLASS*, int64 );
static int64 REGGETMAXREGS( struct $8REGCLASS* );
static int64 REGGETFIRST( struct $8REGCLASS* );
static int64 REGGETNEXT( struct $8REGCLASS*, int64 );
static struct $6IRVREG* REGGETVREG( struct $8REGCLASS*, int64, struct $6IRVREG** );
static int64 REGGETREALREG( struct $8REGCLASS*, int64 );
static void REGDUMP( struct $8REGCLASS* );
static int64 SREGFINDREG( struct $8REGCLASS*, struct $6IRVREG* );
static void SREGXCHG( struct $8REGCLASS*, int64 );
static int64 SREGFINDFREEREG( struct $8REGCLASS* );
static int64 SREGFINDTOSREG( struct $8REGCLASS* );
static int64 SREGALLOCATE( struct $8REGCLASS*, struct $6IRVREG*, struct $6IRVREG*, uint64 );
static int64 SREGALLOCATEREG( struct $8REGCLASS*, int64, struct $6IRVREG*, struct $6IRVREG* );
static int64 SREGENSURE( struct $8REGCLASS*, struct $6IRVREG*, struct $6IRVREG*, uint64 );
static void SREGFREE( struct $8REGCLASS*, int64 );
static int64 SREGISFREE( struct $8REGCLASS*, int64 );
static void SREGSETOWNER( struct $8REGCLASS*, int64, struct $6IRVREG*, struct $6IRVREG* );
static int64 SREGGETREALREG( struct $8REGCLASS*, int64 );
static int64 SREGGETMAXREGS( struct $8REGCLASS* );
static int64 SREGGETFIRST( struct $8REGCLASS* );
static int64 SREGGETNEXT( struct $8REGCLASS*, int64 );
static struct $6IRVREG* SREGGETVREG( struct $8REGCLASS*, int64, struct $6IRVREG** );
static void SREGDUMP( struct $8REGCLASS* );
static void SREGCLEAR( struct $8REGCLASS* );
typedef void (*tmp$35)( void );
typedef int64 (*tmp$36)( void );
typedef void (*tmp$37)( double );
typedef int64 $14IR_OPTIONVALUE;
typedef int64 (*tmp$38)( $14IR_OPTIONVALUE );
typedef int64 (*tmp$39)( int64, int64 );
typedef void (*tmp$40)( struct $8FBSYMBOL* );
typedef void (*tmp$41)( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef uint8* (*tmp$42)( void );
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
typedef struct $6IRVREG* (*tmp$64)( int64, struct $8FBSYMBOL* );
typedef struct $6IRVREG* (*tmp$65)( int64, struct $8FBSYMBOL*, int64 );
typedef struct $6IRVREG* (*tmp$66)( int64, struct $8FBSYMBOL*, double );
typedef struct $6IRVREG* (*tmp$67)( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
typedef struct $6IRVREG* (*tmp$68)( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64, int64, struct $6IRVREG* );
typedef struct $6IRVREG* (*tmp$69)( int64, struct $8FBSYMBOL*, int64, struct $6IRVREG* );
typedef void (*tmp$70)( struct $6IRVREG*, int64, struct $8FBSYMBOL* );
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

struct $8REGCLASS* REGNEWCLASS( int64 CLASS_$1, int64 REGS$1, struct $7FBARRAYI12REG_SIZEMASKE* SIZETB$1, int64 ISSTACK$1 )
{
	struct $8REGCLASS* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$10:;
	struct $8REGCLASS* THIS_$1;
	__builtin_memset( &THIS_$1, 0, 8ll );
	void* vr$2 = XCALLOCATE( 608 );
	THIS_$1 = (struct $8REGCLASS*)vr$2;
	*(int64*)((uint8*)THIS_$1 + 104ll) = CLASS_$1;
	*(int64*)((uint8*)THIS_$1 + 120ll) = REGS$1;
	*(int64*)((uint8*)THIS_$1 + 112ll) = ISSTACK$1;
	if( *(int64*)((uint8*)THIS_$1 + 112ll) != 0ll ) goto label$13;
	{
		REGINITCLASS( THIS_$1, (struct $7FBARRAYI12REG_SIZEMASKE*)SIZETB$1 );
	}
	goto label$12;
	label$13:;
	{
		SREGINITCLASS( THIS_$1, (struct $7FBARRAYI12REG_SIZEMASKE*)SIZETB$1 );
	}
	label$12:;
	fb$result$1 = THIS_$1;
	label$11:;
	return fb$result$1;
}

int64 REGDELCLASS( struct $8REGCLASS* THIS_$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$14:;
	fb$result$1 = 0ll;
	if( THIS_$1 != (struct $8REGCLASS*)0ull ) goto label$17;
	{
		goto label$15;
	}
	label$17:;
	label$16:;
	free( (void*)THIS_$1 );
	fb$result$1 = -1ll;
	label$15:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__reg( void )
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

static void REGPUSH( struct $8REGCLASS* THIS_$1, int64 N$1 )
{
	label$18:;
	static struct $7REG_REG* R$1;
	R$1 = *(struct $7REG_REG**)((uint8*)THIS_$1 + 264ll);
	*(struct $7REG_REG**)((uint8*)THIS_$1 + 264ll) = *(struct $7REG_REG**)((uint8*)R$1 + 8ll);
	*(struct $7REG_REG**)((uint8*)R$1 + 8ll) = *(struct $7REG_REG**)((uint8*)THIS_$1 + 256ll);
	*(struct $7REG_REG**)((uint8*)THIS_$1 + 256ll) = R$1;
	*(int64*)R$1 = N$1;
	label$19:;
}

static int64 REGPOP( struct $8REGCLASS* THIS_$1, int64 SIZE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$20:;
	static struct $7REG_REG* R$1;
	static struct $7REG_REG* LAST$1;
	R$1 = *(struct $7REG_REG**)((uint8*)THIS_$1 + 256ll);
	label$22:;
	if( R$1 == (struct $7REG_REG*)0ull ) goto label$23;
	{
		if( (*(int64*)((uint8*)((uint8*)THIS_$1 + (*(int64*)R$1 << 3ll)) + 408ll) & SIZE$1) == 0ll ) goto label$25;
		{
			if( *(struct $7REG_REG**)((uint8*)THIS_$1 + 256ll) != R$1 ) goto label$27;
			{
				*(struct $7REG_REG**)((uint8*)THIS_$1 + 256ll) = *(struct $7REG_REG**)((uint8*)R$1 + 8ll);
			}
			goto label$26;
			label$27:;
			{
				*(struct $7REG_REG**)((uint8*)LAST$1 + 8ll) = *(struct $7REG_REG**)((uint8*)R$1 + 8ll);
			}
			label$26:;
			*(struct $7REG_REG**)((uint8*)R$1 + 8ll) = *(struct $7REG_REG**)((uint8*)THIS_$1 + 264ll);
			*(struct $7REG_REG**)((uint8*)THIS_$1 + 264ll) = R$1;
			fb$result$1 = *(int64*)R$1;
			goto label$21;
		}
		label$25:;
		label$24:;
		LAST$1 = R$1;
		R$1 = *(struct $7REG_REG**)((uint8*)R$1 + 8ll);
	}
	goto label$22;
	label$23:;
	fb$result$1 = -1ll;
	label$21:;
	return fb$result$1;
}

static void REGPOPREG( struct $8REGCLASS* THIS_$1, int64 N$1 )
{
	label$28:;
	static struct $7REG_REG* R$1;
	static struct $7REG_REG* LAST$1;
	R$1 = *(struct $7REG_REG**)((uint8*)THIS_$1 + 256ll);
	label$30:;
	if( R$1 == (struct $7REG_REG*)0ull ) goto label$31;
	{
		if( *(int64*)R$1 != N$1 ) goto label$33;
		{
			if( *(struct $7REG_REG**)((uint8*)THIS_$1 + 256ll) != R$1 ) goto label$35;
			{
				*(struct $7REG_REG**)((uint8*)THIS_$1 + 256ll) = *(struct $7REG_REG**)((uint8*)R$1 + 8ll);
			}
			goto label$34;
			label$35:;
			{
				*(struct $7REG_REG**)((uint8*)LAST$1 + 8ll) = *(struct $7REG_REG**)((uint8*)R$1 + 8ll);
			}
			label$34:;
			*(struct $7REG_REG**)((uint8*)R$1 + 8ll) = *(struct $7REG_REG**)((uint8*)THIS_$1 + 264ll);
			*(struct $7REG_REG**)((uint8*)THIS_$1 + 264ll) = R$1;
			goto label$29;
		}
		label$33:;
		label$32:;
		LAST$1 = R$1;
		R$1 = *(struct $7REG_REG**)((uint8*)R$1 + 8ll);
	}
	goto label$30;
	label$31:;
	ERRREPORTEX( 21ll, (uint8*)"REGPOPREG", 0ll, 1ll, (uint8*)0ull );
	label$29:;
}

static void REGCLEAR( struct $8REGCLASS* THIS_$1 )
{
	label$36:;
	static struct $7REG_REG* R$1;
	static int64 N$1;
	*(int64*)((uint8*)THIS_$1 + 272ll) = -1ll;
	*(struct $7REG_REG**)((uint8*)THIS_$1 + 256ll) = (struct $7REG_REG*)0ull;
	*(struct $7REG_REG**)((uint8*)THIS_$1 + 264ll) = (struct $7REG_REG*)0ull;
	{
		N$1 = 0ll;
		int64 TMP$85$2;
		TMP$85$2 = *(int64*)((uint8*)THIS_$1 + 120ll) + -1ll;
		goto label$38;
		label$41:;
		{
			*(struct $6IRVREG**)((uint8*)((uint8*)THIS_$1 + (N$1 << 3ll)) + 128ll) = (struct $6IRVREG*)0ull;
			*(struct $6IRVREG**)((uint8*)((uint8*)THIS_$1 + (N$1 << 3ll)) + 192ll) = (struct $6IRVREG*)0ull;
			*(uint64*)((uint8*)((uint8*)THIS_$1 + (N$1 << 3ll)) + 472ll) = 0ull;
			R$1 = (struct $7REG_REG*)((uint8*)((uint8*)THIS_$1 + (N$1 << 4ll)) + 280ll);
			*(struct $7REG_REG**)((uint8*)R$1 + 8ll) = *(struct $7REG_REG**)((uint8*)THIS_$1 + 256ll);
			*(struct $7REG_REG**)((uint8*)THIS_$1 + 256ll) = R$1;
			*(int64*)R$1 = N$1;
		}
		label$39:;
		N$1 = N$1 + 1ll;
		label$38:;
		if( N$1 <= TMP$85$2 ) goto label$41;
		label$40:;
	}
	label$37:;
}

static int64 REGFINDFAREST( struct $8REGCLASS* THIS_$1, int64 SIZE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$42:;
	static int64 N$1;
	static int64 R$1;
	static uint64 MAXDIST$1;
	MAXDIST$1 = 0ull;
	R$1 = -1ll;
	{
		N$1 = 0ll;
		int64 TMP$86$2;
		TMP$86$2 = *(int64*)((uint8*)THIS_$1 + 120ll) + -1ll;
		goto label$44;
		label$47:;
		{
			if( (*(int64*)((uint8*)((uint8*)THIS_$1 + (N$1 << 3ll)) + 408ll) & SIZE$1) == 0ll ) goto label$49;
			{
				if( *(uint64*)((uint8*)((uint8*)THIS_$1 + (N$1 << 3ll)) + 472ll) <= MAXDIST$1 ) goto label$51;
				{
					MAXDIST$1 = *(uint64*)((uint8*)((uint8*)THIS_$1 + (N$1 << 3ll)) + 472ll);
					R$1 = N$1;
				}
				label$51:;
				label$50:;
			}
			label$49:;
			label$48:;
		}
		label$45:;
		N$1 = N$1 + 1ll;
		label$44:;
		if( N$1 <= TMP$86$2 ) goto label$47;
		label$46:;
	}
	fb$result$1 = R$1;
	label$43:;
	return fb$result$1;
}

static int64 REGALLOCATE( struct $8REGCLASS* THIS_$1, struct $6IRVREG* VREG$1, struct $6IRVREG* VAUXPARENT$1, uint64 SIZE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$52:;
	int64 R$1;
	int64 vr$1 = REGPOP( THIS_$1, (int64)SIZE$1 );
	R$1 = vr$1;
	if( R$1 != -1ll ) goto label$55;
	{
		int64 vr$3 = REGFINDFAREST( THIS_$1, (int64)SIZE$1 );
		R$1 = vr$3;
		(*(tmp$43*)((uint8*)&IR$ + 552ll))( *(struct $6IRVREG**)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 128ll), *(struct $6IRVREG**)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 192ll) );
		REGPOPREG( THIS_$1, R$1 );
	}
	label$55:;
	label$54:;
	*(int64*)((uint8*)THIS_$1 + 272ll) = *(int64*)((uint8*)THIS_$1 + 272ll) & ~(1ll << R$1);
	*(struct $6IRVREG**)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 128ll) = VREG$1;
	*(struct $6IRVREG**)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 192ll) = VAUXPARENT$1;
	uint64 vr$17 = (*(tmp$71*)((uint8*)&IR$ + 536ll))( VREG$1 );
	*(uint64*)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 472ll) = vr$17;
	fb$result$1 = R$1;
	label$53:;
	return fb$result$1;
}

static int64 REGALLOCATEREG( struct $8REGCLASS* THIS_$1, int64 R$1, struct $6IRVREG* VREG$1, struct $6IRVREG* VAUXPARENT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$56:;
	if( (*(int64*)((uint8*)THIS_$1 + 272ll) & (1ll << R$1)) == 0ll ) goto label$59;
	{
		REGPOPREG( THIS_$1, R$1 );
		*(int64*)((uint8*)THIS_$1 + 272ll) = *(int64*)((uint8*)THIS_$1 + 272ll) & ~(1ll << R$1);
	}
	label$59:;
	label$58:;
	*(struct $6IRVREG**)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 128ll) = VREG$1;
	*(struct $6IRVREG**)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 192ll) = VAUXPARENT$1;
	uint64 vr$14 = (*(tmp$71*)((uint8*)&IR$ + 536ll))( VREG$1 );
	*(uint64*)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 472ll) = vr$14;
	fb$result$1 = R$1;
	label$57:;
	return fb$result$1;
}

static int64 REGENSURE( struct $8REGCLASS* THIS_$1, struct $6IRVREG* VREG$1, struct $6IRVREG* VAUXPARENT$1, uint64 SIZE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$60:;
	int64 R$1;
	R$1 = *(int64*)((uint8*)VREG$1 + 24ll);
	if( R$1 != -1ll ) goto label$63;
	{
		int64 vr$3 = REGALLOCATE( THIS_$1, VREG$1, VAUXPARENT$1, SIZE$1 );
		R$1 = vr$3;
		(*(tmp$49*)((uint8*)&IR$ + 544ll))( R$1, VREG$1, VAUXPARENT$1 );
	}
	label$63:;
	label$62:;
	fb$result$1 = R$1;
	label$61:;
	return fb$result$1;
}

static void REGSETOWNER( struct $8REGCLASS* THIS_$1, int64 R$1, struct $6IRVREG* VREG$1, struct $6IRVREG* VAUXPARENT$1 )
{
	label$64:;
	*(int64*)((uint8*)THIS_$1 + 272ll) = *(int64*)((uint8*)THIS_$1 + 272ll) & ~(1ll << R$1);
	*(struct $6IRVREG**)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 128ll) = VREG$1;
	*(struct $6IRVREG**)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 192ll) = VAUXPARENT$1;
	uint64 vr$9 = (*(tmp$71*)((uint8*)&IR$ + 536ll))( VREG$1 );
	*(uint64*)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 472ll) = vr$9;
	label$65:;
}

static void REGFREE( struct $8REGCLASS* THIS_$1, int64 R$1 )
{
	label$66:;
	if( (*(int64*)((uint8*)THIS_$1 + 272ll) & (1ll << R$1)) != 0ll ) goto label$69;
	{
		*(int64*)((uint8*)THIS_$1 + 272ll) = *(int64*)((uint8*)THIS_$1 + 272ll) | (1ll << R$1);
		*(struct $6IRVREG**)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 128ll) = (struct $6IRVREG*)0ull;
		*(struct $6IRVREG**)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 192ll) = (struct $6IRVREG*)0ull;
		*(uint64*)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 472ll) = 0ull;
		REGPUSH( THIS_$1, R$1 );
	}
	label$69:;
	label$68:;
	label$67:;
}

static int64 REGISFREE( struct $8REGCLASS* THIS_$1, int64 R$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$70:;
	fb$result$1 = (int64)-((*(int64*)((uint8*)THIS_$1 + 272ll) & (1ll << R$1)) != 0ll);
	label$71:;
	return fb$result$1;
}

static int64 REGGETMAXREGS( struct $8REGCLASS* THIS_$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$72:;
	fb$result$1 = *(int64*)((uint8*)THIS_$1 + 120ll);
	label$73:;
	return fb$result$1;
}

static int64 REGGETFIRST( struct $8REGCLASS* THIS_$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$74:;
	fb$result$1 = 0ll;
	label$75:;
	return fb$result$1;
}

static int64 REGGETNEXT( struct $8REGCLASS* THIS_$1, int64 R$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$76:;
	fb$result$1 = -1ll;
	if( R$1 < 0ll ) goto label$79;
	{
		R$1 = R$1 + 1ll;
		if( R$1 >= *(int64*)((uint8*)THIS_$1 + 120ll) ) goto label$81;
		{
			fb$result$1 = R$1;
		}
		label$81:;
		label$80:;
	}
	label$79:;
	label$78:;
	label$77:;
	return fb$result$1;
}

static struct $6IRVREG* REGGETVREG( struct $8REGCLASS* THIS_$1, int64 R$1, struct $6IRVREG** VAUXPARENT$1 )
{
	struct $6IRVREG* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$82:;
	fb$result$1 = *(struct $6IRVREG**)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 128ll);
	*VAUXPARENT$1 = *(struct $6IRVREG**)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 192ll);
	label$83:;
	return fb$result$1;
}

static int64 REGGETREALREG( struct $8REGCLASS* THIS_$1, int64 R$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$84:;
	fb$result$1 = R$1;
	label$85:;
	return fb$result$1;
}

static void REGDUMP( struct $8REGCLASS* THIS_$1 )
{
	label$86:;
	label$87:;
}

static void REGINITCLASS( struct $8REGCLASS* THIS_$1, struct $7FBARRAYI12REG_SIZEMASKE* SIZETB$1 )
{
	label$88:;
	static int64 I$1;
	REGCLEAR( THIS_$1 );
	{
		I$1 = 0ll;
		int64 TMP$87$2;
		TMP$87$2 = *(int64*)((uint8*)THIS_$1 + 120ll) + -1ll;
		goto label$90;
		label$93:;
		{
			*($12REG_SIZEMASK*)((uint8*)((uint8*)THIS_$1 + (I$1 << 3ll)) + 408ll) = *($12REG_SIZEMASK*)((I$1 << 3ll) + *(int64*)SIZETB$1);
		}
		label$91:;
		I$1 = I$1 + 1ll;
		label$90:;
		if( I$1 <= TMP$87$2 ) goto label$93;
		label$92:;
	}
	*(tmp$76*)THIS_$1 = (tmp$76)&REGENSURE;
	*(tmp$76*)((uint8*)THIS_$1 + 8ll) = (tmp$76)&REGALLOCATE;
	*(tmp$77*)((uint8*)THIS_$1 + 16ll) = (tmp$77)&REGALLOCATEREG;
	*(tmp$78*)((uint8*)THIS_$1 + 24ll) = (tmp$78)&REGFREE;
	*(tmp$79*)((uint8*)THIS_$1 + 32ll) = (tmp$79)&REGISFREE;
	*(tmp$80*)((uint8*)THIS_$1 + 40ll) = (tmp$80)&REGSETOWNER;
	*(tmp$81*)((uint8*)THIS_$1 + 48ll) = (tmp$81)&REGGETMAXREGS;
	*(tmp$81*)((uint8*)THIS_$1 + 56ll) = (tmp$81)&REGGETFIRST;
	*(tmp$79*)((uint8*)THIS_$1 + 64ll) = (tmp$79)&REGGETNEXT;
	*(tmp$82*)((uint8*)THIS_$1 + 72ll) = (tmp$82)&REGGETVREG;
	*(tmp$79*)((uint8*)THIS_$1 + 80ll) = (tmp$79)&REGGETREALREG;
	*(tmp$83*)((uint8*)THIS_$1 + 88ll) = (tmp$83)&REGCLEAR;
	*(tmp$83*)((uint8*)THIS_$1 + 96ll) = (tmp$83)&REGDUMP;
	label$89:;
}

static int64 SREGFINDREG( struct $8REGCLASS* THIS_$1, struct $6IRVREG* VREG$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$94:;
	static int64 R$1;
	fb$result$1 = -1ll;
	if( *(int64*)((uint8*)THIS_$1 + 600ll) != *(int64*)((uint8*)THIS_$1 + 120ll) ) goto label$97;
	{
		goto label$95;
	}
	label$97:;
	label$96:;
	{
		R$1 = 0ll;
		int64 TMP$88$2;
		TMP$88$2 = *(int64*)((uint8*)THIS_$1 + 120ll) + -1ll;
		goto label$98;
		label$101:;
		{
			if( *(int64*)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 536ll) == -1ll ) goto label$103;
			{
				if( *(struct $6IRVREG**)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 128ll) != VREG$1 ) goto label$105;
				{
					fb$result$1 = R$1;
					goto label$95;
				}
				label$105:;
				label$104:;
			}
			label$103:;
			label$102:;
		}
		label$99:;
		R$1 = R$1 + 1ll;
		label$98:;
		if( R$1 <= TMP$88$2 ) goto label$101;
		label$100:;
	}
	label$95:;
	return fb$result$1;
}

static void SREGXCHG( struct $8REGCLASS* THIS_$1, int64 R1$1 )
{
	label$106:;
	static int64 I$1;
	static int64 R2$1;
	(*(tmp$44*)((uint8*)&IR$ + 560ll))( R1$1 );
	R2$1 = -1ll;
	{
		I$1 = 0ll;
		int64 TMP$89$2;
		TMP$89$2 = *(int64*)((uint8*)THIS_$1 + 120ll) + -1ll;
		goto label$108;
		label$111:;
		{
			if( *(int64*)((uint8*)((uint8*)THIS_$1 + (I$1 << 3ll)) + 536ll) != 0ll ) goto label$113;
			{
				R2$1 = I$1;
				goto label$110;
			}
			label$113:;
			label$112:;
		}
		label$109:;
		I$1 = I$1 + 1ll;
		label$108:;
		if( I$1 <= TMP$89$2 ) goto label$111;
		label$110:;
	}
	{
		int64 TMP$90$2;
		TMP$90$2 = *(int64*)((uint8*)((uint8*)THIS_$1 + (R1$1 << 3ll)) + 536ll);
		*(int64*)((uint8*)((uint8*)THIS_$1 + (R1$1 << 3ll)) + 536ll) = *(int64*)((uint8*)((uint8*)THIS_$1 + (R2$1 << 3ll)) + 536ll);
		*(int64*)((uint8*)((uint8*)THIS_$1 + (R2$1 << 3ll)) + 536ll) = TMP$90$2;
	}
	label$107:;
}

static int64 SREGFINDFREEREG( struct $8REGCLASS* THIS_$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$114:;
	static int64 R$1;
	fb$result$1 = -1ll;
	if( *(int64*)((uint8*)THIS_$1 + 600ll) != 0ll ) goto label$117;
	{
		goto label$115;
	}
	label$117:;
	label$116:;
	{
		R$1 = 0ll;
		int64 TMP$91$2;
		TMP$91$2 = *(int64*)((uint8*)THIS_$1 + 120ll) + -1ll;
		goto label$118;
		label$121:;
		{
			if( *(int64*)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 536ll) != -1ll ) goto label$123;
			{
				fb$result$1 = R$1;
				goto label$115;
			}
			label$123:;
			label$122:;
		}
		label$119:;
		R$1 = R$1 + 1ll;
		label$118:;
		if( R$1 <= TMP$91$2 ) goto label$121;
		label$120:;
	}
	label$115:;
	return fb$result$1;
}

static int64 SREGFINDTOSREG( struct $8REGCLASS* THIS_$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$134:;
	static int64 R$1;
	{
		R$1 = 0ll;
		int64 TMP$93$2;
		TMP$93$2 = *(int64*)((uint8*)THIS_$1 + 120ll) + -1ll;
		goto label$136;
		label$139:;
		{
			if( *(int64*)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 536ll) != 0ll ) goto label$141;
			{
				fb$result$1 = R$1;
				goto label$135;
			}
			label$141:;
			label$140:;
		}
		label$137:;
		R$1 = R$1 + 1ll;
		label$136:;
		if( R$1 <= TMP$93$2 ) goto label$139;
		label$138:;
	}
	fb$result$1 = -1ll;
	label$135:;
	return fb$result$1;
}

static int64 SREGALLOCATE( struct $8REGCLASS* THIS_$1, struct $6IRVREG* VREG$1, struct $6IRVREG* VAUXPARENT$1, uint64 SIZE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$142:;
	int64 R$1;
	int64 vr$1 = SREGFINDFREEREG( THIS_$1 );
	R$1 = vr$1;
	if( R$1 != -1ll ) goto label$145;
	{
		int64 vr$3 = SREGFINDTOSREG( THIS_$1 );
		R$1 = vr$3;
		(*(tmp$43*)((uint8*)&IR$ + 552ll))( *(struct $6IRVREG**)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 128ll), *(struct $6IRVREG**)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 192ll) );
	}
	goto label$144;
	label$145:;
	{
		*(int64*)((uint8*)THIS_$1 + 600ll) = *(int64*)((uint8*)THIS_$1 + 600ll) + -1ll;
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$94$3;
			TMP$94$3 = *(int64*)((uint8*)THIS_$1 + 120ll) + -1ll;
			goto label$146;
			label$149:;
			{
				if( *(int64*)((uint8*)((uint8*)THIS_$1 + (I$3 << 3ll)) + 536ll) == -1ll ) goto label$151;
				{
					*(int64*)((uint8*)((uint8*)THIS_$1 + (I$3 << 3ll)) + 536ll) = *(int64*)((uint8*)((uint8*)THIS_$1 + (I$3 << 3ll)) + 536ll) + 1ll;
				}
				label$151:;
				label$150:;
			}
			label$147:;
			I$3 = I$3 + 1ll;
			label$146:;
			if( I$3 <= TMP$94$3 ) goto label$149;
			label$148:;
		}
	}
	label$144:;
	*(struct $6IRVREG**)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 128ll) = VREG$1;
	*(struct $6IRVREG**)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 192ll) = VAUXPARENT$1;
	*(int64*)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 536ll) = 0ll;
	fb$result$1 = R$1;
	label$143:;
	return fb$result$1;
}

static int64 SREGALLOCATEREG( struct $8REGCLASS* THIS_$1, int64 R$1, struct $6IRVREG* VREG$1, struct $6IRVREG* VAUXPARENT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$152:;
	int64 vr$1 = SREGALLOCATE( THIS_$1, VREG$1, VAUXPARENT$1, 8ull );
	fb$result$1 = vr$1;
	label$153:;
	return fb$result$1;
}

static int64 SREGENSURE( struct $8REGCLASS* THIS_$1, struct $6IRVREG* VREG$1, struct $6IRVREG* VAUXPARENT$1, uint64 SIZE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$154:;
	int64 R$1;
	int64 vr$1 = SREGFINDREG( THIS_$1, VREG$1 );
	R$1 = vr$1;
	if( R$1 != -1ll ) goto label$157;
	{
		int64 vr$3 = SREGALLOCATE( THIS_$1, VREG$1, VAUXPARENT$1, 8ull );
		R$1 = vr$3;
		(*(tmp$49*)((uint8*)&IR$ + 544ll))( R$1, VREG$1, VAUXPARENT$1 );
	}
	goto label$156;
	label$157:;
	{
		if( *(int64*)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 536ll) == 0ll ) goto label$159;
		{
			SREGXCHG( THIS_$1, R$1 );
		}
		label$159:;
		label$158:;
	}
	label$156:;
	fb$result$1 = R$1;
	label$155:;
	return fb$result$1;
}

static void SREGFREE( struct $8REGCLASS* THIS_$1, int64 R$1 )
{
	label$160:;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	int64 REALREG$1;
	__builtin_memset( &REALREG$1, 0, 8ll );
	if( *(int64*)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 536ll) != -1ll ) goto label$163;
	{
		goto label$161;
	}
	label$163:;
	label$162:;
	REALREG$1 = *(int64*)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 536ll);
	*(int64*)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 536ll) = -1ll;
	*(struct $6IRVREG**)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 128ll) = (struct $6IRVREG*)0ull;
	*(struct $6IRVREG**)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 192ll) = (struct $6IRVREG*)0ull;
	{
		I$1 = 0ll;
		int64 TMP$95$2;
		TMP$95$2 = *(int64*)((uint8*)THIS_$1 + 120ll) + -1ll;
		goto label$164;
		label$167:;
		{
			if( *(int64*)((uint8*)((uint8*)THIS_$1 + (I$1 << 3ll)) + 536ll) == -1ll ) goto label$169;
			{
				if( *(int64*)((uint8*)((uint8*)THIS_$1 + (I$1 << 3ll)) + 536ll) <= REALREG$1 ) goto label$171;
				{
					*(int64*)((uint8*)((uint8*)THIS_$1 + (I$1 << 3ll)) + 536ll) = *(int64*)((uint8*)((uint8*)THIS_$1 + (I$1 << 3ll)) + 536ll) + -1ll;
				}
				label$171:;
				label$170:;
			}
			label$169:;
			label$168:;
		}
		label$165:;
		I$1 = I$1 + 1ll;
		label$164:;
		if( I$1 <= TMP$95$2 ) goto label$167;
		label$166:;
	}
	*(int64*)((uint8*)THIS_$1 + 600ll) = *(int64*)((uint8*)THIS_$1 + 600ll) + 1ll;
	label$161:;
}

static int64 SREGISFREE( struct $8REGCLASS* THIS_$1, int64 R$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$172:;
	fb$result$1 = (int64)-(*(int64*)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 536ll) == -1ll);
	label$173:;
	return fb$result$1;
}

static void SREGSETOWNER( struct $8REGCLASS* THIS_$1, int64 R$1, struct $6IRVREG* VREG$1, struct $6IRVREG* VAUXPARENT$1 )
{
	label$174:;
	*(struct $6IRVREG**)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 128ll) = VREG$1;
	*(struct $6IRVREG**)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 192ll) = VAUXPARENT$1;
	label$175:;
}

static int64 SREGGETREALREG( struct $8REGCLASS* THIS_$1, int64 R$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$176:;
	fb$result$1 = *(int64*)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 536ll);
	label$177:;
	return fb$result$1;
}

static int64 SREGGETMAXREGS( struct $8REGCLASS* THIS_$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$178:;
	fb$result$1 = *(int64*)((uint8*)THIS_$1 + 120ll);
	label$179:;
	return fb$result$1;
}

static int64 SREGGETFIRST( struct $8REGCLASS* THIS_$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$180:;
	int64 vr$1 = SREGFINDTOSREG( THIS_$1 );
	fb$result$1 = vr$1;
	label$181:;
	return fb$result$1;
}

static int64 SREGGETNEXT( struct $8REGCLASS* THIS_$1, int64 R$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$182:;
	if( ((int64)-(R$1 < 0ll) | (int64)-(R$1 >= *(int64*)((uint8*)THIS_$1 + 120ll))) == 0ll ) goto label$185;
	{
		fb$result$1 = -1ll;
	}
	goto label$184;
	label$185:;
	{
		int64 vr$6 = SREGFINDTOSREG( THIS_$1 );
		fb$result$1 = vr$6;
	}
	label$184:;
	label$183:;
	return fb$result$1;
}

static struct $6IRVREG* SREGGETVREG( struct $8REGCLASS* THIS_$1, int64 R$1, struct $6IRVREG** VAUXPARENT$1 )
{
	struct $6IRVREG* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$186:;
	fb$result$1 = *(struct $6IRVREG**)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 128ll);
	*VAUXPARENT$1 = *(struct $6IRVREG**)((uint8*)((uint8*)THIS_$1 + (R$1 << 3ll)) + 192ll);
	label$187:;
	return fb$result$1;
}

static void SREGDUMP( struct $8REGCLASS* THIS_$1 )
{
	label$188:;
	label$189:;
}

static void SREGCLEAR( struct $8REGCLASS* REG$1 )
{
	label$190:;
	int64 R$1;
	*(int64*)((uint8*)REG$1 + 600ll) = *(int64*)((uint8*)REG$1 + 120ll);
	{
		R$1 = 0ll;
		int64 TMP$96$2;
		TMP$96$2 = *(int64*)((uint8*)REG$1 + 120ll) + -1ll;
		goto label$192;
		label$195:;
		{
			*(int64*)((uint8*)((uint8*)REG$1 + (R$1 << 3ll)) + 536ll) = -1ll;
			*(struct $6IRVREG**)((uint8*)((uint8*)REG$1 + (R$1 << 3ll)) + 128ll) = (struct $6IRVREG*)0ull;
			*(struct $6IRVREG**)((uint8*)((uint8*)REG$1 + (R$1 << 3ll)) + 192ll) = (struct $6IRVREG*)0ull;
		}
		label$193:;
		R$1 = R$1 + 1ll;
		label$192:;
		if( R$1 <= TMP$96$2 ) goto label$195;
		label$194:;
	}
	label$191:;
}

static void SREGINITCLASS( struct $8REGCLASS* THIS_$1, struct $7FBARRAYI12REG_SIZEMASKE* SIZETB$1 )
{
	label$196:;
	SREGCLEAR( THIS_$1 );
	*(tmp$76*)THIS_$1 = (tmp$76)&SREGENSURE;
	*(tmp$76*)((uint8*)THIS_$1 + 8ll) = (tmp$76)&SREGALLOCATE;
	*(tmp$77*)((uint8*)THIS_$1 + 16ll) = (tmp$77)&SREGALLOCATEREG;
	*(tmp$78*)((uint8*)THIS_$1 + 24ll) = (tmp$78)&SREGFREE;
	*(tmp$79*)((uint8*)THIS_$1 + 32ll) = (tmp$79)&SREGISFREE;
	*(tmp$80*)((uint8*)THIS_$1 + 40ll) = (tmp$80)&SREGSETOWNER;
	*(tmp$81*)((uint8*)THIS_$1 + 48ll) = (tmp$81)&SREGGETMAXREGS;
	*(tmp$81*)((uint8*)THIS_$1 + 56ll) = (tmp$81)&SREGGETFIRST;
	*(tmp$79*)((uint8*)THIS_$1 + 64ll) = (tmp$79)&SREGGETNEXT;
	*(tmp$82*)((uint8*)THIS_$1 + 72ll) = (tmp$82)&SREGGETVREG;
	*(tmp$79*)((uint8*)THIS_$1 + 80ll) = (tmp$79)&SREGGETREALREG;
	*(tmp$83*)((uint8*)THIS_$1 + 88ll) = (tmp$83)&SREGCLEAR;
	*(tmp$83*)((uint8*)THIS_$1 + 96ll) = (tmp$83)&SREGDUMP;
	label$197:;
}

// Total compilation time: 0.029041045345366 seconds.
