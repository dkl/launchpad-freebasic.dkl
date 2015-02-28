// Compilation of fbc-1.01.0/src/compiler/emit_SSE.bas started at 14:16:40 on 02-28-2015

typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
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
typedef struct $6IRVREG* (*tmp$67)( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
struct $16__FB_ARRAYDIMTB$ {
	int64 ELEMENTS;
	int64 LBOUND;
	int64 UBOUND;
};
__FB_STATIC_ASSERT( sizeof( struct $16__FB_ARRAYDIMTB$ ) == 24 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
FBSTRING* fb_StrConcatAssign( void*, int64, void*, int64, int32 );
FBSTRING* fb_LongintToStr( int64 );
FBSTRING* fb_CHR( int32, ... );
static void fb_ctor__emit_SSE( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
struct $8FBSYMBOL* SYMBALLOCINTCONST( int64, int64 );
uint8* SYMBUNIQUELABEL( void );
uint8* SYMBGETMANGLEDNAME( struct $8FBSYMBOL* );
void HPREPOPERAND( struct $6IRVREG*, FBSTRING*, $11FB_DATATYPE, int64, int64, int64 );
void HPREPOPERAND64( struct $6IRVREG*, FBSTRING*, FBSTRING* );
void HPUSH( uint8* );
void HPOP( uint8* );
int64 HFINDREGNOTINVREG( struct $6IRVREG*, int64 );
int64 HFINDFREEREG( int64 );
int64 HISREGFREE( int64, int64 );
uint8* HGETREGNAME( int64, int64 );
void OUTP( uint8* );
void HLABEL( uint8* );
void HBRANCH( uint8*, uint8* );
void HMOV( uint8*, uint8* );
static void HULONG2DBL( struct $6IRVREG* );
static void _EMITSTORF2L_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSTORF2I_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSTORL2F_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSTORI2F_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void HEMITSTOREFREG2F_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSTORF2F_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITLOADF2L_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITLOADF2I_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITLOADL2F_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITLOADI2F_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITLOADF2F_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITMOVF_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSWZREPF_SSE( struct $6IRVREG* );
static int64 HEMITCONVERTOPERANDS_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITADDF_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSUBF_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITMULF_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITDIVF_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITATN2_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITPOW_SSE( struct $6IRVREG*, struct $6IRVREG* );
static void HCMPF_SSE( struct $6IRVREG*, struct $8FBSYMBOL*, uint8*, uint8*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCGTF_SSE( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCLTF_SSE( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCEQF_SSE( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCNEF_SSE( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCLEF_SSE( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCGEF_SSE( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITNEGF_SSE( struct $6IRVREG* );
static void _EMITHADDF_SSE( struct $6IRVREG* );
static void _EMITABSF_SSE( struct $6IRVREG* );
static void _EMITSGNF_SSE( struct $6IRVREG* );
static void _EMITSINCOS_FAST_SSE( struct $6IRVREG*, int64 );
static void _EMITSIN_SSE( struct $6IRVREG* );
static void _EMITASIN_SSE( struct $6IRVREG* );
static void _EMITCOS_SSE( struct $6IRVREG* );
static void _EMITACOS_SSE( struct $6IRVREG* );
static void _EMITTAN_SSE( struct $6IRVREG* );
static void _EMITATAN_SSE( struct $6IRVREG* );
static void _EMITSQRT_SSE( struct $6IRVREG* );
static void _EMITRSQRT_SSE( struct $6IRVREG* );
static void _EMITRCP_SSE( struct $6IRVREG* );
static void _EMITLOG_SSE( struct $6IRVREG* );
static void _EMITEXP_SSE( struct $6IRVREG* );
static void _EMITFLOOR_SSE( struct $6IRVREG* );
static void _EMITFIX_SSE( struct $6IRVREG* );
static void _EMITFRAC_SSE( struct $6IRVREG* );
static void _EMITPUSHF_SSE( struct $6IRVREG*, int64 );
static void _EMITPOPF_SSE( struct $6IRVREG*, int64 );
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
struct $8FBARRAY1IPvE {
	void** DATA;
	void** PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[1];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1IPvE ) == 64 );
static struct $8FBARRAY1IPvE tmp$98$;
struct $12EMITDATATYPE {
	int64 RNAMETB;
	uint8 MNAME[12];
};
__FB_STATIC_ASSERT( sizeof( struct $12EMITDATATYPE ) == 24 );
extern struct $12EMITDATATYPE DTYPETB$[24];
struct $8FBARRAY1I12EMITDATATYPEE {
	struct $12EMITDATATYPE* DATA;
	struct $12EMITDATATYPE* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[1];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I12EMITDATATYPEE ) == 64 );
static struct $8FBARRAY1I12EMITDATATYPEE tmp$100$;
struct $5FBENV ENV$ __attribute__((common));

int64 _INIT_OPFNTB_SSE( void** _OPFNTB_SSE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$733:;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 16ll) = (void*)&_EMITLOADF2I_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 32ll) = (void*)&_EMITLOADI2F_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 64ll) = (void*)&_EMITLOADF2L_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 48ll) = (void*)&_EMITLOADL2F_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 40ll) = (void*)&_EMITLOADF2F_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 88ll) = (void*)&_EMITSTORF2I_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 104ll) = (void*)&_EMITSTORI2F_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 136ll) = (void*)&_EMITSTORF2L_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 120ll) = (void*)&_EMITSTORL2F_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 112ll) = (void*)&_EMITSTORF2F_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 160ll) = (void*)&_EMITMOVF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 184ll) = (void*)&_EMITADDF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 208ll) = (void*)&_EMITSUBF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 232ll) = (void*)&_EMITMULF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 256ll) = (void*)&_EMITDIVF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 408ll) = (void*)&_EMITATN2_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 416ll) = (void*)&_EMITPOW_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 448ll) = (void*)&_EMITCGTF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 472ll) = (void*)&_EMITCLTF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 496ll) = (void*)&_EMITCEQF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 520ll) = (void*)&_EMITCNEF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 544ll) = (void*)&_EMITCGEF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 568ll) = (void*)&_EMITCLEF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 592ll) = (void*)&_EMITNEGF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 624ll) = (void*)&_EMITHADDF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 640ll) = (void*)&_EMITABSF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 664ll) = (void*)&_EMITSGNF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 680ll) = (void*)&_EMITFIX_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 688ll) = (void*)&_EMITFRAC_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 712ll) = (void*)&_EMITSIN_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 720ll) = (void*)&_EMITASIN_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 728ll) = (void*)&_EMITCOS_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 736ll) = (void*)&_EMITACOS_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 744ll) = (void*)&_EMITTAN_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 752ll) = (void*)&_EMITATAN_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 760ll) = (void*)&_EMITSQRT_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 768ll) = (void*)&_EMITRSQRT_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 776ll) = (void*)&_EMITRCP_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 784ll) = (void*)&_EMITLOG_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 792ll) = (void*)&_EMITEXP_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 800ll) = (void*)&_EMITFLOOR_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 704ll) = (void*)&_EMITSWZREPF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 832ll) = (void*)&_EMITPUSHF_SSE;
	*(void**)((uint8*)_OPFNTB_SSE$1 + 856ll) = (void*)&_EMITPOPF_SSE;
	fb$result$1 = -1ll;
	label$734:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__emit_SSE( void )
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

static void HULONG2DBL( struct $6IRVREG* SVREG$1 )
{
	label$10:;
	static FBSTRING LABEL$1;
	static FBSTRING AUX$1;
	static FBSTRING OSTR$1;
	uint8* vr$0 = SYMBUNIQUELABEL(  );
	fb_StrAssign( (void*)&LABEL$1, -1ll, (void*)vr$0, 0ll, 0 );
	HPREPOPERAND( SVREG$1, &AUX$1, 7ll, 0ll, -1ll, -1ll );
	FBSTRING* vr$1 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"cmp ", 5ll, 0 );
	FBSTRING* vr$2 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&AUX$1, -1ll, 0 );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", 0", 4ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"jns ", 5ll, 0 );
	FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&LABEL$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	HPUSH( (uint8*)"0x403f" );
	HPUSH( (uint8*)"0x80000000" );
	HPUSH( (uint8*)"0" );
	OUTP( (uint8*)"fldt [esp]" );
	OUTP( (uint8*)"add esp, 12" );
	OUTP( (uint8*)"faddp" );
	HLABEL( *(uint8**)&LABEL$1 );
	label$11:;
}

static void _EMITSTORF2L_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$109$1;
	FBSTRING TMP$130$1;
	FBSTRING TMP$131$1;
	label$12:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 SDSIZE$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$14;
	TMP$109$1 = 22ll;
	goto label$735;
	label$14:;
	TMP$109$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$735:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$109$1 * 56ll)) + 16ll) != 0ll ) goto label$16;
	{
		goto label$13;
		label$16:;
	}
	if( *(int64*)((uint8*)SVREG$1 + 32ll) != 1ll ) goto label$18;
	{
		int64 TMP$110$2;
		FBSTRING TMP$113$2;
		FBSTRING TMP$114$2;
		FBSTRING TMP$127$2;
		FBSTRING TMP$128$2;
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$19;
		TMP$110$2 = 22ll;
		goto label$736;
		label$19:;
		TMP$110$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$736:;
		SDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$110$2 * 56ll)) + 8ll);
		__builtin_memset( &TMP$114$2, 0, 24ll );
		FBSTRING* vr$16 = fb_LongintToStr( SDSIZE$1 );
		__builtin_memset( &TMP$113$2, 0, 24ll );
		FBSTRING* vr$19 = fb_StrConcat( &TMP$113$2, (void*)"sub esp, ", 10ll, (void*)vr$16, -1ll );
		FBSTRING* vr$21 = fb_StrAssign( (void*)&TMP$114$2, -1ll, (void*)vr$19, -1ll, 0 );
		OUTP( *(uint8**)&TMP$114$2 );
		fb_StrDelete( &TMP$114$2 );
		HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
		if( SDSIZE$1 <= 4ll ) goto label$21;
		{
			FBSTRING TMP$117$3;
			FBSTRING TMP$118$3;
			__builtin_memset( &TMP$118$3, 0, 24ll );
			__builtin_memset( &TMP$117$3, 0, 24ll );
			FBSTRING* vr$27 = fb_StrConcat( &TMP$117$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$29 = fb_StrAssign( (void*)&TMP$118$3, -1ll, (void*)vr$27, -1ll, 0 );
			OUTP( *(uint8**)&TMP$118$3 );
			fb_StrDelete( &TMP$118$3 );
			OUTP( (uint8*)"fld qword ptr [esp]" );
		}
		goto label$20;
		label$21:;
		{
			FBSTRING TMP$122$3;
			FBSTRING TMP$123$3;
			__builtin_memset( &TMP$123$3, 0, 24ll );
			__builtin_memset( &TMP$122$3, 0, 24ll );
			FBSTRING* vr$34 = fb_StrConcat( &TMP$122$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$36 = fb_StrAssign( (void*)&TMP$123$3, -1ll, (void*)vr$34, -1ll, 0 );
			OUTP( *(uint8**)&TMP$123$3 );
			fb_StrDelete( &TMP$123$3 );
			OUTP( (uint8*)"fld dword ptr [esp]" );
		}
		label$20:;
		__builtin_memset( &TMP$128$2, 0, 24ll );
		FBSTRING* vr$39 = fb_LongintToStr( SDSIZE$1 );
		__builtin_memset( &TMP$127$2, 0, 24ll );
		FBSTRING* vr$42 = fb_StrConcat( &TMP$127$2, (void*)"add esp, ", 10ll, (void*)vr$39, -1ll );
		FBSTRING* vr$44 = fb_StrAssign( (void*)&TMP$128$2, -1ll, (void*)vr$42, -1ll, 0 );
		OUTP( *(uint8**)&TMP$128$2 );
		fb_StrDelete( &TMP$128$2 );
	}
	label$18:;
	label$17:;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	__builtin_memset( &TMP$131$1, 0, 24ll );
	__builtin_memset( &TMP$130$1, 0, 24ll );
	FBSTRING* vr$49 = fb_StrConcat( &TMP$130$1, (void*)"fistp ", 7ll, (void*)&DST$1, -1ll );
	FBSTRING* vr$51 = fb_StrAssign( (void*)&TMP$131$1, -1ll, (void*)vr$49, -1ll, 0 );
	OUTP( *(uint8**)&TMP$131$1 );
	fb_StrDelete( &TMP$131$1 );
	label$13:;
}

static void _EMITSTORF2I_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$132$1;
	int64 TMP$133$1;
	int64 TMP$134$1;
	int64 TMP$145$1;
	label$22:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 SDSIZE$1;
	static int64 DDSIZE$1;
	static FBSTRING OSTR$1;
	static FBSTRING AUX$1;
	static FBSTRING AUX8$1;
	static FBSTRING AUX16$1;
	static int64 ISFREE$1;
	static int64 REG$1;
	static int64 WASREG$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$24;
	TMP$132$1 = 22ll;
	goto label$737;
	label$24:;
	TMP$132$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$737:;
	SDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$132$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$25;
	TMP$133$1 = 22ll;
	goto label$738;
	label$25:;
	TMP$133$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$738:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$133$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$26;
	TMP$134$1 = 22ll;
	goto label$739;
	label$26:;
	TMP$134$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$739:;
	if( ((int64)-(DDSIZE$1 == 4ll) & (int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$134$1 * 56ll)) + 16ll) == 0ll)) == 0ll ) goto label$28;
	{
		OUTP( (uint8*)"sub esp, 8" );
		if( *(int64*)SVREG$1 == 4ll ) goto label$30;
		{
			FBSTRING TMP$137$3;
			FBSTRING TMP$138$3;
			__builtin_memset( &TMP$138$3, 0, 24ll );
			__builtin_memset( &TMP$137$3, 0, 24ll );
			FBSTRING* vr$27 = fb_StrConcat( &TMP$137$3, (void*)"fld ", 5ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$29 = fb_StrAssign( (void*)&TMP$138$3, -1ll, (void*)vr$27, -1ll, 0 );
			OUTP( *(uint8**)&TMP$138$3 );
			fb_StrDelete( &TMP$138$3 );
		}
		goto label$29;
		label$30:;
		if( *(int64*)((uint8*)SVREG$1 + 32ll) != 1ll ) goto label$31;
		{
			if( SDSIZE$1 <= 4ll ) goto label$33;
			{
				FBSTRING TMP$139$4;
				FBSTRING TMP$140$4;
				__builtin_memset( &TMP$140$4, 0, 24ll );
				__builtin_memset( &TMP$139$4, 0, 24ll );
				FBSTRING* vr$37 = fb_StrConcat( &TMP$139$4, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$39 = fb_StrAssign( (void*)&TMP$140$4, -1ll, (void*)vr$37, -1ll, 0 );
				OUTP( *(uint8**)&TMP$140$4 );
				fb_StrDelete( &TMP$140$4 );
				OUTP( (uint8*)"fld qword ptr [esp]" );
			}
			goto label$32;
			label$33:;
			{
				FBSTRING TMP$141$4;
				FBSTRING TMP$142$4;
				__builtin_memset( &TMP$142$4, 0, 24ll );
				__builtin_memset( &TMP$141$4, 0, 24ll );
				FBSTRING* vr$44 = fb_StrConcat( &TMP$141$4, (void*)"movss dword ptr [esp], ", 24ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$46 = fb_StrAssign( (void*)&TMP$142$4, -1ll, (void*)vr$44, -1ll, 0 );
				OUTP( *(uint8**)&TMP$142$4 );
				fb_StrDelete( &TMP$142$4 );
				OUTP( (uint8*)"fld dword ptr [esp]" );
			}
			label$32:;
		}
		label$31:;
		label$29:;
		OUTP( (uint8*)"fistp qword ptr [esp]" );
		HPOP( *(uint8**)&DST$1 );
		OUTP( (uint8*)"add esp, 4" );
		goto label$23;
	}
	label$28:;
	label$27:;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$34;
	TMP$145$1 = 22ll;
	goto label$740;
	label$34:;
	TMP$145$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$740:;
	if( ((int64)-(DDSIZE$1 == 2ll) & *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$145$1 * 56ll)) + 16ll)) == 0ll ) goto label$36;
	{
		FBSTRING TMP$152$2;
		FBSTRING TMP$153$2;
		OUTP( (uint8*)"sub esp, 8" );
		if( *(int64*)SVREG$1 == 4ll ) goto label$38;
		{
			FBSTRING TMP$146$3;
			FBSTRING TMP$147$3;
			__builtin_memset( &TMP$147$3, 0, 24ll );
			__builtin_memset( &TMP$146$3, 0, 24ll );
			FBSTRING* vr$62 = fb_StrConcat( &TMP$146$3, (void*)"fld ", 5ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$64 = fb_StrAssign( (void*)&TMP$147$3, -1ll, (void*)vr$62, -1ll, 0 );
			OUTP( *(uint8**)&TMP$147$3 );
			fb_StrDelete( &TMP$147$3 );
		}
		goto label$37;
		label$38:;
		if( *(int64*)((uint8*)SVREG$1 + 32ll) != 1ll ) goto label$39;
		{
			if( SDSIZE$1 <= 4ll ) goto label$41;
			{
				FBSTRING TMP$148$4;
				FBSTRING TMP$149$4;
				__builtin_memset( &TMP$149$4, 0, 24ll );
				__builtin_memset( &TMP$148$4, 0, 24ll );
				FBSTRING* vr$72 = fb_StrConcat( &TMP$148$4, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$74 = fb_StrAssign( (void*)&TMP$149$4, -1ll, (void*)vr$72, -1ll, 0 );
				OUTP( *(uint8**)&TMP$149$4 );
				fb_StrDelete( &TMP$149$4 );
				OUTP( (uint8*)"fld qword ptr [esp]" );
			}
			goto label$40;
			label$41:;
			{
				FBSTRING TMP$150$4;
				FBSTRING TMP$151$4;
				__builtin_memset( &TMP$151$4, 0, 24ll );
				__builtin_memset( &TMP$150$4, 0, 24ll );
				FBSTRING* vr$79 = fb_StrConcat( &TMP$150$4, (void*)"movss dword ptr [esp], ", 24ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$81 = fb_StrAssign( (void*)&TMP$151$4, -1ll, (void*)vr$79, -1ll, 0 );
				OUTP( *(uint8**)&TMP$151$4 );
				fb_StrDelete( &TMP$151$4 );
				OUTP( (uint8*)"fld dword ptr [esp]" );
			}
			label$40:;
		}
		label$39:;
		label$37:;
		__builtin_memset( &TMP$153$2, 0, 24ll );
		__builtin_memset( &TMP$152$2, 0, 24ll );
		FBSTRING* vr$86 = fb_StrConcat( &TMP$152$2, (void*)"fistp ", 7ll, (void*)&DST$1, -1ll );
		FBSTRING* vr$88 = fb_StrAssign( (void*)&TMP$153$2, -1ll, (void*)vr$86, -1ll, 0 );
		OUTP( *(uint8**)&TMP$153$2 );
		fb_StrDelete( &TMP$153$2 );
		OUTP( (uint8*)"add esp, 8" );
		goto label$23;
	}
	label$36:;
	label$35:;
	if( ((int64)-(*(int64*)DVREG$1 == 4ll) & (int64)-(DDSIZE$1 == 4ll)) == 0ll ) goto label$43;
	{
		ISFREE$1 = -1ll;
		FBSTRING* vr$95 = fb_StrAssign( (void*)&AUX$1, -1ll, (void*)&DST$1, -1ll, 0 );
		WASREG$1 = -1ll;
	}
	goto label$42;
	label$43:;
	{
		WASREG$1 = 0ll;
		int64 vr$96 = HFINDREGNOTINVREG( SVREG$1, 0ll );
		REG$1 = vr$96;
		uint8* vr$97 = HGETREGNAME( 7ll, REG$1 );
		fb_StrAssign( (void*)&AUX$1, -1ll, (void*)vr$97, 0ll, 0 );
		int64 vr$98 = HISREGFREE( 0ll, REG$1 );
		ISFREE$1 = vr$98;
		if( ISFREE$1 != 0ll ) goto label$45;
		{
			HPUSH( *(uint8**)&AUX$1 );
		}
		label$45:;
		label$44:;
	}
	label$42:;
	if( *(int64*)((uint8*)SVREG$1 + 32ll) != 0ll ) goto label$47;
	{
		FBSTRING TMP$159$2;
		FBSTRING TMP$160$2;
		FBSTRING TMP$161$2;
		FBSTRING TMP$162$2;
		OUTP( (uint8*)"sub esp, 4" );
		OUTP( (uint8*)"fistp dword ptr [esp]" );
		__builtin_memset( &TMP$162$2, 0, 24ll );
		__builtin_memset( &TMP$159$2, 0, 24ll );
		FBSTRING* vr$105 = fb_StrConcat( &TMP$159$2, (void*)"mov ", 5ll, (void*)&AUX$1, -1ll );
		__builtin_memset( &TMP$160$2, 0, 24ll );
		FBSTRING* vr$108 = fb_StrConcat( &TMP$160$2, (void*)vr$105, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$161$2, 0, 24ll );
		FBSTRING* vr$111 = fb_StrConcat( &TMP$161$2, (void*)vr$108, -1ll, (void*)"dword ptr [esp]", 16ll );
		FBSTRING* vr$113 = fb_StrAssign( (void*)&TMP$162$2, -1ll, (void*)vr$111, -1ll, 0 );
		OUTP( *(uint8**)&TMP$162$2 );
		fb_StrDelete( &TMP$162$2 );
		OUTP( (uint8*)"add esp, 4" );
	}
	goto label$46;
	label$47:;
	{
		if( SDSIZE$1 <= 4ll ) goto label$49;
		{
			FBSTRING TMP$164$3;
			FBSTRING TMP$165$3;
			FBSTRING TMP$166$3;
			FBSTRING TMP$167$3;
			__builtin_memset( &TMP$167$3, 0, 24ll );
			__builtin_memset( &TMP$164$3, 0, 24ll );
			FBSTRING* vr$119 = fb_StrConcat( &TMP$164$3, (void*)"cvtsd2si ", 10ll, (void*)&AUX$1, -1ll );
			__builtin_memset( &TMP$165$3, 0, 24ll );
			FBSTRING* vr$122 = fb_StrConcat( &TMP$165$3, (void*)vr$119, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$166$3, 0, 24ll );
			FBSTRING* vr$125 = fb_StrConcat( &TMP$166$3, (void*)vr$122, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$127 = fb_StrAssign( (void*)&TMP$167$3, -1ll, (void*)vr$125, -1ll, 0 );
			OUTP( *(uint8**)&TMP$167$3 );
			fb_StrDelete( &TMP$167$3 );
		}
		goto label$48;
		label$49:;
		{
			FBSTRING TMP$169$3;
			FBSTRING TMP$170$3;
			FBSTRING TMP$171$3;
			FBSTRING TMP$172$3;
			__builtin_memset( &TMP$172$3, 0, 24ll );
			__builtin_memset( &TMP$169$3, 0, 24ll );
			FBSTRING* vr$132 = fb_StrConcat( &TMP$169$3, (void*)"cvtss2si ", 10ll, (void*)&AUX$1, -1ll );
			__builtin_memset( &TMP$170$3, 0, 24ll );
			FBSTRING* vr$135 = fb_StrConcat( &TMP$170$3, (void*)vr$132, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$171$3, 0, 24ll );
			FBSTRING* vr$138 = fb_StrConcat( &TMP$171$3, (void*)vr$135, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$140 = fb_StrAssign( (void*)&TMP$172$3, -1ll, (void*)vr$138, -1ll, 0 );
			OUTP( *(uint8**)&TMP$172$3 );
			fb_StrDelete( &TMP$172$3 );
		}
		label$48:;
	}
	label$46:;
	if( WASREG$1 != 0ll ) goto label$51;
	{
		if( DDSIZE$1 != 1ll ) goto label$53;
		{
			FBSTRING TMP$173$3;
			FBSTRING TMP$174$3;
			FBSTRING TMP$175$3;
			FBSTRING TMP$176$3;
			uint8* vr$144 = HGETREGNAME( 1ll, REG$1 );
			fb_StrAssign( (void*)&AUX8$1, -1ll, (void*)vr$144, 0ll, 0 );
			__builtin_memset( &TMP$176$3, 0, 24ll );
			__builtin_memset( &TMP$173$3, 0, 24ll );
			FBSTRING* vr$148 = fb_StrConcat( &TMP$173$3, (void*)"mov ", 5ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$174$3, 0, 24ll );
			FBSTRING* vr$151 = fb_StrConcat( &TMP$174$3, (void*)vr$148, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$175$3, 0, 24ll );
			FBSTRING* vr$154 = fb_StrConcat( &TMP$175$3, (void*)vr$151, -1ll, (void*)&AUX8$1, -1ll );
			FBSTRING* vr$156 = fb_StrAssign( (void*)&TMP$176$3, -1ll, (void*)vr$154, -1ll, 0 );
			OUTP( *(uint8**)&TMP$176$3 );
			fb_StrDelete( &TMP$176$3 );
		}
		goto label$52;
		label$53:;
		if( DDSIZE$1 != 2ll ) goto label$54;
		{
			FBSTRING TMP$177$3;
			FBSTRING TMP$178$3;
			FBSTRING TMP$179$3;
			FBSTRING TMP$180$3;
			uint8* vr$159 = HGETREGNAME( 4ll, REG$1 );
			fb_StrAssign( (void*)&AUX16$1, -1ll, (void*)vr$159, 0ll, 0 );
			__builtin_memset( &TMP$180$3, 0, 24ll );
			__builtin_memset( &TMP$177$3, 0, 24ll );
			FBSTRING* vr$163 = fb_StrConcat( &TMP$177$3, (void*)"mov ", 5ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$178$3, 0, 24ll );
			FBSTRING* vr$166 = fb_StrConcat( &TMP$178$3, (void*)vr$163, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$179$3, 0, 24ll );
			FBSTRING* vr$169 = fb_StrConcat( &TMP$179$3, (void*)vr$166, -1ll, (void*)&AUX16$1, -1ll );
			FBSTRING* vr$171 = fb_StrAssign( (void*)&TMP$180$3, -1ll, (void*)vr$169, -1ll, 0 );
			OUTP( *(uint8**)&TMP$180$3 );
			fb_StrDelete( &TMP$180$3 );
		}
		goto label$52;
		label$54:;
		{
			FBSTRING TMP$181$3;
			FBSTRING TMP$182$3;
			FBSTRING TMP$183$3;
			FBSTRING TMP$184$3;
			__builtin_memset( &TMP$184$3, 0, 24ll );
			__builtin_memset( &TMP$181$3, 0, 24ll );
			FBSTRING* vr$176 = fb_StrConcat( &TMP$181$3, (void*)"mov ", 5ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$182$3, 0, 24ll );
			FBSTRING* vr$179 = fb_StrConcat( &TMP$182$3, (void*)vr$176, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$183$3, 0, 24ll );
			FBSTRING* vr$182 = fb_StrConcat( &TMP$183$3, (void*)vr$179, -1ll, (void*)&AUX$1, -1ll );
			FBSTRING* vr$184 = fb_StrAssign( (void*)&TMP$184$3, -1ll, (void*)vr$182, -1ll, 0 );
			OUTP( *(uint8**)&TMP$184$3 );
			fb_StrDelete( &TMP$184$3 );
		}
		label$52:;
		if( ISFREE$1 != 0ll ) goto label$56;
		{
			HPOP( *(uint8**)&AUX$1 );
		}
		label$56:;
		label$55:;
	}
	label$51:;
	label$50:;
	label$23:;
}

static void _EMITSTORL2F_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$57:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING AUX$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( ((int64)-(*(int64*)SVREG$1 == 4ll) | (int64)-(*(int64*)SVREG$1 == 0ll)) == 0ll ) goto label$60;
	{
		int64 TMP$185$2;
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$61;
		TMP$185$2 = 22ll;
		goto label$741;
		label$61:;
		TMP$185$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$741:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$185$2 * 56ll)) + 16ll) == 0ll ) goto label$63;
		{
			FBSTRING TMP$188$3;
			FBSTRING TMP$189$3;
			HPREPOPERAND64( SVREG$1, &SRC$1, &AUX$1 );
			HPUSH( *(uint8**)&AUX$1 );
			HPUSH( *(uint8**)&SRC$1 );
			__builtin_memset( &TMP$188$3, 0, 24ll );
			FBSTRING* vr$18 = fb_StrConcat( &TMP$188$3, (void*)"fild ", 6ll, (void*)(((uint8*)DTYPETB$ + (*(int64*)((uint8*)SVREG$1 + 8ll) * 24ll)) + 8ll), 12ll );
			__builtin_memset( &TMP$189$3, 0, 24ll );
			FBSTRING* vr$21 = fb_StrConcat( &TMP$189$3, (void*)vr$18, -1ll, (void*)" [esp]", 7ll );
			FBSTRING* vr$22 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$21, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
			OUTP( (uint8*)"add esp, 8" );
		}
		goto label$62;
		label$63:;
		{
			HPREPOPERAND64( SVREG$1, &SRC$1, &AUX$1 );
			HPUSH( *(uint8**)&AUX$1 );
			HPUSH( *(uint8**)&SRC$1 );
			OUTP( (uint8*)"fild qword ptr [esp]" );
			OUTP( (uint8*)"add esp, 8" );
			HULONG2DBL( SVREG$1 );
		}
		label$62:;
	}
	goto label$59;
	label$60:;
	{
		int64 TMP$191$2;
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$64;
		TMP$191$2 = 22ll;
		goto label$742;
		label$64:;
		TMP$191$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$742:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$191$2 * 56ll)) + 16ll) == 0ll ) goto label$66;
		{
			FBSTRING* vr$30 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fild ", 6ll, 0 );
			FBSTRING* vr$31 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		goto label$65;
		label$66:;
		{
			FBSTRING* vr$32 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fild ", 6ll, 0 );
			FBSTRING* vr$33 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
			HULONG2DBL( SVREG$1 );
		}
		label$65:;
	}
	label$59:;
	FBSTRING* vr$34 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fstp ", 6ll, 0 );
	FBSTRING* vr$35 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$58:;
}

static void _EMITSTORI2F_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$193$1;
	int64 TMP$194$1;
	int64 TMP$195$1;
	label$67:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING AUX$1;
	static int64 DDSIZE$1;
	static int64 SDSIZE$1;
	static int64 REG$1;
	static int64 ISFREE$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$69;
	TMP$193$1 = 22ll;
	goto label$743;
	label$69:;
	TMP$193$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$743:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$193$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$70;
	TMP$194$1 = 22ll;
	goto label$744;
	label$70:;
	TMP$194$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$744:;
	SDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$194$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$71;
	TMP$195$1 = 22ll;
	goto label$745;
	label$71:;
	TMP$195$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$745:;
	if( ((int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$195$1 * 56ll)) + 16ll) == 0ll) & (int64)-(SDSIZE$1 == 4ll)) == 0ll ) goto label$73;
	{
		FBSTRING TMP$196$2;
		FBSTRING TMP$197$2;
		HPUSH( (uint8*)"0" );
		HPUSH( *(uint8**)&SRC$1 );
		OUTP( (uint8*)"fild qword ptr [esp]" );
		OUTP( (uint8*)"add esp, 8" );
		__builtin_memset( &TMP$197$2, 0, 24ll );
		__builtin_memset( &TMP$196$2, 0, 24ll );
		FBSTRING* vr$25 = fb_StrConcat( &TMP$196$2, (void*)"fstp ", 6ll, (void*)&DST$1, -1ll );
		FBSTRING* vr$27 = fb_StrAssign( (void*)&TMP$197$2, -1ll, (void*)vr$25, -1ll, 0 );
		OUTP( *(uint8**)&TMP$197$2 );
		fb_StrDelete( &TMP$197$2 );
		goto label$68;
	}
	label$73:;
	label$72:;
	if( ((int64)-(*(int64*)SVREG$1 != 0ll) & (int64)-(SDSIZE$1 == 4ll)) == 0ll ) goto label$75;
	{
		FBSTRING* vr$34 = fb_StrAssign( (void*)&AUX$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		ISFREE$1 = -1ll;
	}
	goto label$74;
	label$75:;
	{
		int64 vr$35 = HFINDREGNOTINVREG( SVREG$1, 0ll );
		REG$1 = vr$35;
		uint8* vr$36 = HGETREGNAME( 7ll, REG$1 );
		fb_StrAssign( (void*)&AUX$1, -1ll, (void*)vr$36, 0ll, 0 );
		int64 vr$37 = HISREGFREE( 0ll, REG$1 );
		ISFREE$1 = vr$37;
		if( ISFREE$1 != 0ll ) goto label$77;
		{
			HPUSH( *(uint8**)&AUX$1 );
		}
		label$77:;
		label$76:;
		if( *(int64*)SVREG$1 != 0ll ) goto label$79;
		{
			FBSTRING TMP$198$3;
			FBSTRING TMP$199$3;
			FBSTRING TMP$200$3;
			FBSTRING TMP$201$3;
			__builtin_memset( &TMP$201$3, 0, 24ll );
			__builtin_memset( &TMP$198$3, 0, 24ll );
			FBSTRING* vr$44 = fb_StrConcat( &TMP$198$3, (void*)"mov ", 5ll, (void*)&AUX$1, -1ll );
			__builtin_memset( &TMP$199$3, 0, 24ll );
			FBSTRING* vr$47 = fb_StrConcat( &TMP$199$3, (void*)vr$44, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$200$3, 0, 24ll );
			FBSTRING* vr$50 = fb_StrConcat( &TMP$200$3, (void*)vr$47, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$52 = fb_StrAssign( (void*)&TMP$201$3, -1ll, (void*)vr$50, -1ll, 0 );
			OUTP( *(uint8**)&TMP$201$3 );
			fb_StrDelete( &TMP$201$3 );
		}
		goto label$78;
		label$79:;
		{
			int64 TMP$202$3;
			FBSTRING TMP$205$3;
			FBSTRING TMP$206$3;
			FBSTRING TMP$207$3;
			FBSTRING TMP$208$3;
			if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$80;
			TMP$202$3 = 22ll;
			goto label$746;
			label$80:;
			TMP$202$3 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
			label$746:;
			if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$202$3 * 56ll)) + 16ll) == 0ll ) goto label$82;
			{
				fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"movsx ", 7ll, 0 );
			}
			goto label$81;
			label$82:;
			{
				fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"movzx ", 7ll, 0 );
			}
			label$81:;
			__builtin_memset( &TMP$208$3, 0, 24ll );
			__builtin_memset( &TMP$205$3, 0, 24ll );
			FBSTRING* vr$64 = fb_StrConcat( &TMP$205$3, (void*)&OSTR$1, -1ll, (void*)&AUX$1, -1ll );
			__builtin_memset( &TMP$206$3, 0, 24ll );
			FBSTRING* vr$67 = fb_StrConcat( &TMP$206$3, (void*)vr$64, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$207$3, 0, 24ll );
			FBSTRING* vr$70 = fb_StrConcat( &TMP$207$3, (void*)vr$67, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$72 = fb_StrAssign( (void*)&TMP$208$3, -1ll, (void*)vr$70, -1ll, 0 );
			OUTP( *(uint8**)&TMP$208$3 );
			fb_StrDelete( &TMP$208$3 );
		}
		label$78:;
	}
	label$74:;
	if( DDSIZE$1 <= 4ll ) goto label$84;
	{
		FBSTRING TMP$211$2;
		FBSTRING TMP$212$2;
		FBSTRING TMP$215$2;
		FBSTRING TMP$216$2;
		FBSTRING TMP$217$2;
		FBSTRING TMP$218$2;
		__builtin_memset( &TMP$212$2, 0, 24ll );
		__builtin_memset( &TMP$211$2, 0, 24ll );
		FBSTRING* vr$78 = fb_StrConcat( &TMP$211$2, (void*)"cvtsi2sd xmm7, ", 16ll, (void*)&AUX$1, -1ll );
		FBSTRING* vr$80 = fb_StrAssign( (void*)&TMP$212$2, -1ll, (void*)vr$78, -1ll, 0 );
		OUTP( *(uint8**)&TMP$212$2 );
		fb_StrDelete( &TMP$212$2 );
		__builtin_memset( &TMP$218$2, 0, 24ll );
		__builtin_memset( &TMP$215$2, 0, 24ll );
		FBSTRING* vr$85 = fb_StrConcat( &TMP$215$2, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$216$2, 0, 24ll );
		FBSTRING* vr$88 = fb_StrConcat( &TMP$216$2, (void*)vr$85, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$217$2, 0, 24ll );
		FBSTRING* vr$91 = fb_StrConcat( &TMP$217$2, (void*)vr$88, -1ll, (void*)"xmm7", 5ll );
		FBSTRING* vr$93 = fb_StrAssign( (void*)&TMP$218$2, -1ll, (void*)vr$91, -1ll, 0 );
		OUTP( *(uint8**)&TMP$218$2 );
		fb_StrDelete( &TMP$218$2 );
	}
	goto label$83;
	label$84:;
	{
		FBSTRING TMP$221$2;
		FBSTRING TMP$222$2;
		FBSTRING TMP$224$2;
		FBSTRING TMP$225$2;
		FBSTRING TMP$226$2;
		FBSTRING TMP$227$2;
		__builtin_memset( &TMP$222$2, 0, 24ll );
		__builtin_memset( &TMP$221$2, 0, 24ll );
		FBSTRING* vr$98 = fb_StrConcat( &TMP$221$2, (void*)"cvtsi2ss xmm7, ", 16ll, (void*)&AUX$1, -1ll );
		FBSTRING* vr$100 = fb_StrAssign( (void*)&TMP$222$2, -1ll, (void*)vr$98, -1ll, 0 );
		OUTP( *(uint8**)&TMP$222$2 );
		fb_StrDelete( &TMP$222$2 );
		__builtin_memset( &TMP$227$2, 0, 24ll );
		__builtin_memset( &TMP$224$2, 0, 24ll );
		FBSTRING* vr$105 = fb_StrConcat( &TMP$224$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$225$2, 0, 24ll );
		FBSTRING* vr$108 = fb_StrConcat( &TMP$225$2, (void*)vr$105, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$226$2, 0, 24ll );
		FBSTRING* vr$111 = fb_StrConcat( &TMP$226$2, (void*)vr$108, -1ll, (void*)"xmm7", 5ll );
		FBSTRING* vr$113 = fb_StrAssign( (void*)&TMP$227$2, -1ll, (void*)vr$111, -1ll, 0 );
		OUTP( *(uint8**)&TMP$227$2 );
		fb_StrDelete( &TMP$227$2 );
	}
	label$83:;
	if( ISFREE$1 != 0ll ) goto label$86;
	{
		HPOP( *(uint8**)&AUX$1 );
	}
	label$86:;
	label$85:;
	label$68:;
}

static void HEMITSTOREFREG2F_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$228$1;
	label$87:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 DDSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, 0ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, 0ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$89;
	TMP$228$1 = 22ll;
	goto label$747;
	label$89:;
	TMP$228$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$747:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$228$1 * 56ll)) + 8ll);
	if( ((int64)-(*(int64*)((uint8*)SVREG$1 + 40ll) == 2ll) & (int64)-(DDSIZE$1 > 4ll)) == 0ll ) goto label$91;
	{
		FBSTRING TMP$230$2;
		FBSTRING TMP$231$2;
		FBSTRING TMP$232$2;
		FBSTRING TMP$233$2;
		__builtin_memset( &TMP$233$2, 0, 24ll );
		__builtin_memset( &TMP$230$2, 0, 24ll );
		FBSTRING* vr$14 = fb_StrConcat( &TMP$230$2, (void*)"movupd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$231$2, 0, 24ll );
		FBSTRING* vr$17 = fb_StrConcat( &TMP$231$2, (void*)vr$14, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$232$2, 0, 24ll );
		FBSTRING* vr$20 = fb_StrConcat( &TMP$232$2, (void*)vr$17, -1ll, (void*)&SRC$1, -1ll );
		FBSTRING* vr$22 = fb_StrAssign( (void*)&TMP$233$2, -1ll, (void*)vr$20, -1ll, 0 );
		OUTP( *(uint8**)&TMP$233$2 );
		fb_StrDelete( &TMP$233$2 );
		goto label$88;
	}
	label$91:;
	label$90:;
	if( *(int64*)((uint8*)SVREG$1 + 40ll) != 2ll ) goto label$93;
	{
		FBSTRING TMP$235$2;
		FBSTRING TMP$236$2;
		FBSTRING TMP$237$2;
		FBSTRING TMP$238$2;
		__builtin_memset( &TMP$238$2, 0, 24ll );
		__builtin_memset( &TMP$235$2, 0, 24ll );
		FBSTRING* vr$29 = fb_StrConcat( &TMP$235$2, (void*)"movlps ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$236$2, 0, 24ll );
		FBSTRING* vr$32 = fb_StrConcat( &TMP$236$2, (void*)vr$29, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$237$2, 0, 24ll );
		FBSTRING* vr$35 = fb_StrConcat( &TMP$237$2, (void*)vr$32, -1ll, (void*)&SRC$1, -1ll );
		FBSTRING* vr$37 = fb_StrAssign( (void*)&TMP$238$2, -1ll, (void*)vr$35, -1ll, 0 );
		OUTP( *(uint8**)&TMP$238$2 );
		fb_StrDelete( &TMP$238$2 );
	}
	goto label$92;
	label$93:;
	if( *(int64*)((uint8*)SVREG$1 + 40ll) != 3ll ) goto label$94;
	{
		FBSTRING TMP$241$2;
		FBSTRING TMP$242$2;
		FBSTRING TMP$243$2;
		FBSTRING TMP$244$2;
		FBSTRING TMP$245$2;
		FBSTRING TMP$246$2;
		FBSTRING TMP$247$2;
		FBSTRING TMP$248$2;
		FBSTRING TMP$249$2;
		FBSTRING TMP$250$2;
		__builtin_memset( &TMP$242$2, 0, 24ll );
		__builtin_memset( &TMP$241$2, 0, 24ll );
		FBSTRING* vr$44 = fb_StrConcat( &TMP$241$2, (void*)"movhlps xmm7, ", 15ll, (void*)&SRC$1, -1ll );
		FBSTRING* vr$46 = fb_StrAssign( (void*)&TMP$242$2, -1ll, (void*)vr$44, -1ll, 0 );
		OUTP( *(uint8**)&TMP$242$2 );
		fb_StrDelete( &TMP$242$2 );
		__builtin_memset( &TMP$246$2, 0, 24ll );
		__builtin_memset( &TMP$243$2, 0, 24ll );
		FBSTRING* vr$51 = fb_StrConcat( &TMP$243$2, (void*)"movlps ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$244$2, 0, 24ll );
		FBSTRING* vr$54 = fb_StrConcat( &TMP$244$2, (void*)vr$51, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$245$2, 0, 24ll );
		FBSTRING* vr$57 = fb_StrConcat( &TMP$245$2, (void*)vr$54, -1ll, (void*)&SRC$1, -1ll );
		FBSTRING* vr$59 = fb_StrAssign( (void*)&TMP$246$2, -1ll, (void*)vr$57, -1ll, 0 );
		OUTP( *(uint8**)&TMP$246$2 );
		fb_StrDelete( &TMP$246$2 );
		HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 8ll, 0ll, -1ll );
		__builtin_memset( &TMP$250$2, 0, 24ll );
		__builtin_memset( &TMP$247$2, 0, 24ll );
		FBSTRING* vr$64 = fb_StrConcat( &TMP$247$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$248$2, 0, 24ll );
		FBSTRING* vr$67 = fb_StrConcat( &TMP$248$2, (void*)vr$64, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$249$2, 0, 24ll );
		FBSTRING* vr$70 = fb_StrConcat( &TMP$249$2, (void*)vr$67, -1ll, (void*)"xmm7", 5ll );
		FBSTRING* vr$72 = fb_StrAssign( (void*)&TMP$250$2, -1ll, (void*)vr$70, -1ll, 0 );
		OUTP( *(uint8**)&TMP$250$2 );
		fb_StrDelete( &TMP$250$2 );
	}
	goto label$92;
	label$94:;
	if( *(int64*)((uint8*)SVREG$1 + 40ll) != 4ll ) goto label$95;
	{
		FBSTRING TMP$252$2;
		FBSTRING TMP$253$2;
		FBSTRING TMP$254$2;
		FBSTRING TMP$255$2;
		__builtin_memset( &TMP$255$2, 0, 24ll );
		__builtin_memset( &TMP$252$2, 0, 24ll );
		FBSTRING* vr$79 = fb_StrConcat( &TMP$252$2, (void*)"movups ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$253$2, 0, 24ll );
		FBSTRING* vr$82 = fb_StrConcat( &TMP$253$2, (void*)vr$79, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$254$2, 0, 24ll );
		FBSTRING* vr$85 = fb_StrConcat( &TMP$254$2, (void*)vr$82, -1ll, (void*)&SRC$1, -1ll );
		FBSTRING* vr$87 = fb_StrAssign( (void*)&TMP$255$2, -1ll, (void*)vr$85, -1ll, 0 );
		OUTP( *(uint8**)&TMP$255$2 );
		fb_StrDelete( &TMP$255$2 );
	}
	label$95:;
	label$92:;
	label$88:;
}

static void _EMITSTORF2F_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$256$1;
	int64 TMP$257$1;
	label$96:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 DDSIZE$1;
	static int64 SDSIZE$1;
	static int64 SRC_VEC$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, 0ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, 0ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$98;
	TMP$256$1 = 22ll;
	goto label$748;
	label$98:;
	TMP$256$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$748:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$256$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$99;
	TMP$257$1 = 22ll;
	goto label$749;
	label$99:;
	TMP$257$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$749:;
	SDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$257$1 * 56ll)) + 8ll);
	SRC_VEC$1 = (int64)-(*(int64*)((uint8*)SVREG$1 + 40ll) > 0ll);
	if( *(int64*)SVREG$1 != 4ll ) goto label$101;
	{
		if( *(int64*)((uint8*)SVREG$1 + 32ll) != 0ll ) goto label$103;
		{
			FBSTRING TMP$258$3;
			FBSTRING TMP$259$3;
			HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
			__builtin_memset( &TMP$259$3, 0, 24ll );
			__builtin_memset( &TMP$258$3, 0, 24ll );
			FBSTRING* vr$21 = fb_StrConcat( &TMP$258$3, (void*)"fstp ", 6ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$23 = fb_StrAssign( (void*)&TMP$259$3, -1ll, (void*)vr$21, -1ll, 0 );
			OUTP( *(uint8**)&TMP$259$3 );
			fb_StrDelete( &TMP$259$3 );
			goto label$97;
		}
		label$103:;
		label$102:;
		if( SRC_VEC$1 == 0ll ) goto label$105;
		{
			HEMITSTOREFREG2F_SSE( DVREG$1, SVREG$1 );
			goto label$97;
		}
		label$105:;
		label$104:;
		if( DDSIZE$1 <= 4ll ) goto label$107;
		{
			FBSTRING TMP$265$3;
			FBSTRING TMP$266$3;
			FBSTRING TMP$267$3;
			FBSTRING TMP$268$3;
			if( SDSIZE$1 > 4ll ) goto label$109;
			{
				FBSTRING TMP$261$4;
				FBSTRING TMP$262$4;
				FBSTRING TMP$263$4;
				FBSTRING TMP$264$4;
				__builtin_memset( &TMP$264$4, 0, 24ll );
				__builtin_memset( &TMP$261$4, 0, 24ll );
				FBSTRING* vr$31 = fb_StrConcat( &TMP$261$4, (void*)"cvtss2sd ", 10ll, (void*)&SRC$1, -1ll );
				__builtin_memset( &TMP$262$4, 0, 24ll );
				FBSTRING* vr$34 = fb_StrConcat( &TMP$262$4, (void*)vr$31, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$263$4, 0, 24ll );
				FBSTRING* vr$37 = fb_StrConcat( &TMP$263$4, (void*)vr$34, -1ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$39 = fb_StrAssign( (void*)&TMP$264$4, -1ll, (void*)vr$37, -1ll, 0 );
				OUTP( *(uint8**)&TMP$264$4 );
				fb_StrDelete( &TMP$264$4 );
			}
			label$109:;
			label$108:;
			__builtin_memset( &TMP$268$3, 0, 24ll );
			__builtin_memset( &TMP$265$3, 0, 24ll );
			FBSTRING* vr$44 = fb_StrConcat( &TMP$265$3, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$266$3, 0, 24ll );
			FBSTRING* vr$47 = fb_StrConcat( &TMP$266$3, (void*)vr$44, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$267$3, 0, 24ll );
			FBSTRING* vr$50 = fb_StrConcat( &TMP$267$3, (void*)vr$47, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$52 = fb_StrAssign( (void*)&TMP$268$3, -1ll, (void*)vr$50, -1ll, 0 );
			OUTP( *(uint8**)&TMP$268$3 );
			fb_StrDelete( &TMP$268$3 );
		}
		goto label$106;
		label$107:;
		{
			FBSTRING TMP$274$3;
			FBSTRING TMP$275$3;
			FBSTRING TMP$276$3;
			FBSTRING TMP$277$3;
			if( SDSIZE$1 <= 4ll ) goto label$111;
			{
				FBSTRING TMP$270$4;
				FBSTRING TMP$271$4;
				FBSTRING TMP$272$4;
				FBSTRING TMP$273$4;
				__builtin_memset( &TMP$273$4, 0, 24ll );
				__builtin_memset( &TMP$270$4, 0, 24ll );
				FBSTRING* vr$58 = fb_StrConcat( &TMP$270$4, (void*)"cvtsd2ss ", 10ll, (void*)&SRC$1, -1ll );
				__builtin_memset( &TMP$271$4, 0, 24ll );
				FBSTRING* vr$61 = fb_StrConcat( &TMP$271$4, (void*)vr$58, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$272$4, 0, 24ll );
				FBSTRING* vr$64 = fb_StrConcat( &TMP$272$4, (void*)vr$61, -1ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$66 = fb_StrAssign( (void*)&TMP$273$4, -1ll, (void*)vr$64, -1ll, 0 );
				OUTP( *(uint8**)&TMP$273$4 );
				fb_StrDelete( &TMP$273$4 );
			}
			label$111:;
			label$110:;
			__builtin_memset( &TMP$277$3, 0, 24ll );
			__builtin_memset( &TMP$274$3, 0, 24ll );
			FBSTRING* vr$71 = fb_StrConcat( &TMP$274$3, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$275$3, 0, 24ll );
			FBSTRING* vr$74 = fb_StrConcat( &TMP$275$3, (void*)vr$71, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$276$3, 0, 24ll );
			FBSTRING* vr$77 = fb_StrConcat( &TMP$276$3, (void*)vr$74, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$79 = fb_StrAssign( (void*)&TMP$277$3, -1ll, (void*)vr$77, -1ll, 0 );
			OUTP( *(uint8**)&TMP$277$3 );
			fb_StrDelete( &TMP$277$3 );
		}
		label$106:;
	}
	goto label$100;
	label$101:;
	{
		if( SDSIZE$1 != DDSIZE$1 ) goto label$113;
		{
			if( SRC_VEC$1 == 0ll ) goto label$115;
			{
				HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, 0ll );
				HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, 0ll );
				if( DDSIZE$1 <= 4ll ) goto label$117;
				{
					FBSTRING TMP$280$5;
					FBSTRING TMP$281$5;
					FBSTRING TMP$282$5;
					FBSTRING TMP$283$5;
					FBSTRING TMP$284$5;
					FBSTRING TMP$285$5;
					__builtin_memset( &TMP$281$5, 0, 24ll );
					__builtin_memset( &TMP$280$5, 0, 24ll );
					FBSTRING* vr$87 = fb_StrConcat( &TMP$280$5, (void*)"movupd xmm7, ", 14ll, (void*)&SRC$1, -1ll );
					FBSTRING* vr$89 = fb_StrAssign( (void*)&TMP$281$5, -1ll, (void*)vr$87, -1ll, 0 );
					OUTP( *(uint8**)&TMP$281$5 );
					fb_StrDelete( &TMP$281$5 );
					__builtin_memset( &TMP$285$5, 0, 24ll );
					__builtin_memset( &TMP$282$5, 0, 24ll );
					FBSTRING* vr$94 = fb_StrConcat( &TMP$282$5, (void*)"movupd ", 8ll, (void*)&DST$1, -1ll );
					__builtin_memset( &TMP$283$5, 0, 24ll );
					FBSTRING* vr$97 = fb_StrConcat( &TMP$283$5, (void*)vr$94, -1ll, (void*)", ", 3ll );
					__builtin_memset( &TMP$284$5, 0, 24ll );
					FBSTRING* vr$100 = fb_StrConcat( &TMP$284$5, (void*)vr$97, -1ll, (void*)"xmm7", 5ll );
					FBSTRING* vr$102 = fb_StrAssign( (void*)&TMP$285$5, -1ll, (void*)vr$100, -1ll, 0 );
					OUTP( *(uint8**)&TMP$285$5 );
					fb_StrDelete( &TMP$285$5 );
				}
				goto label$116;
				label$117:;
				{
					if( *(int64*)((uint8*)SVREG$1 + 40ll) != 2ll ) goto label$119;
					{
						FBSTRING TMP$288$6;
						FBSTRING TMP$289$6;
						FBSTRING TMP$290$6;
						FBSTRING TMP$291$6;
						FBSTRING TMP$292$6;
						FBSTRING TMP$293$6;
						__builtin_memset( &TMP$289$6, 0, 24ll );
						__builtin_memset( &TMP$288$6, 0, 24ll );
						FBSTRING* vr$109 = fb_StrConcat( &TMP$288$6, (void*)"movlps xmm7, ", 14ll, (void*)&SRC$1, -1ll );
						FBSTRING* vr$111 = fb_StrAssign( (void*)&TMP$289$6, -1ll, (void*)vr$109, -1ll, 0 );
						OUTP( *(uint8**)&TMP$289$6 );
						fb_StrDelete( &TMP$289$6 );
						__builtin_memset( &TMP$293$6, 0, 24ll );
						__builtin_memset( &TMP$290$6, 0, 24ll );
						FBSTRING* vr$116 = fb_StrConcat( &TMP$290$6, (void*)"movlps ", 8ll, (void*)&DST$1, -1ll );
						__builtin_memset( &TMP$291$6, 0, 24ll );
						FBSTRING* vr$119 = fb_StrConcat( &TMP$291$6, (void*)vr$116, -1ll, (void*)", ", 3ll );
						__builtin_memset( &TMP$292$6, 0, 24ll );
						FBSTRING* vr$122 = fb_StrConcat( &TMP$292$6, (void*)vr$119, -1ll, (void*)"xmm7", 5ll );
						FBSTRING* vr$124 = fb_StrAssign( (void*)&TMP$293$6, -1ll, (void*)vr$122, -1ll, 0 );
						OUTP( *(uint8**)&TMP$293$6 );
						fb_StrDelete( &TMP$293$6 );
					}
					goto label$118;
					label$119:;
					if( *(int64*)((uint8*)SVREG$1 + 40ll) != 3ll ) goto label$120;
					{
						FBSTRING TMP$296$6;
						FBSTRING TMP$297$6;
						FBSTRING TMP$298$6;
						FBSTRING TMP$299$6;
						FBSTRING TMP$300$6;
						FBSTRING TMP$301$6;
						FBSTRING TMP$303$6;
						FBSTRING TMP$304$6;
						FBSTRING TMP$305$6;
						FBSTRING TMP$306$6;
						__builtin_memset( &TMP$297$6, 0, 24ll );
						__builtin_memset( &TMP$296$6, 0, 24ll );
						FBSTRING* vr$131 = fb_StrConcat( &TMP$296$6, (void*)"movups xmm7, ", 14ll, (void*)&SRC$1, -1ll );
						FBSTRING* vr$133 = fb_StrAssign( (void*)&TMP$297$6, -1ll, (void*)vr$131, -1ll, 0 );
						OUTP( *(uint8**)&TMP$297$6 );
						fb_StrDelete( &TMP$297$6 );
						__builtin_memset( &TMP$301$6, 0, 24ll );
						__builtin_memset( &TMP$298$6, 0, 24ll );
						FBSTRING* vr$138 = fb_StrConcat( &TMP$298$6, (void*)"movlps ", 8ll, (void*)&DST$1, -1ll );
						__builtin_memset( &TMP$299$6, 0, 24ll );
						FBSTRING* vr$141 = fb_StrConcat( &TMP$299$6, (void*)vr$138, -1ll, (void*)", ", 3ll );
						__builtin_memset( &TMP$300$6, 0, 24ll );
						FBSTRING* vr$144 = fb_StrConcat( &TMP$300$6, (void*)vr$141, -1ll, (void*)"xmm7", 5ll );
						FBSTRING* vr$146 = fb_StrAssign( (void*)&TMP$301$6, -1ll, (void*)vr$144, -1ll, 0 );
						OUTP( *(uint8**)&TMP$301$6 );
						fb_StrDelete( &TMP$301$6 );
						OUTP( (uint8*)"unpckhps xmm7, xmm7" );
						HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 8ll, 0ll, -1ll );
						__builtin_memset( &TMP$306$6, 0, 24ll );
						__builtin_memset( &TMP$303$6, 0, 24ll );
						FBSTRING* vr$151 = fb_StrConcat( &TMP$303$6, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
						__builtin_memset( &TMP$304$6, 0, 24ll );
						FBSTRING* vr$154 = fb_StrConcat( &TMP$304$6, (void*)vr$151, -1ll, (void*)", ", 3ll );
						__builtin_memset( &TMP$305$6, 0, 24ll );
						FBSTRING* vr$157 = fb_StrConcat( &TMP$305$6, (void*)vr$154, -1ll, (void*)"xmm7", 5ll );
						FBSTRING* vr$159 = fb_StrAssign( (void*)&TMP$306$6, -1ll, (void*)vr$157, -1ll, 0 );
						OUTP( *(uint8**)&TMP$306$6 );
						fb_StrDelete( &TMP$306$6 );
					}
					goto label$118;
					label$120:;
					if( *(int64*)((uint8*)SVREG$1 + 40ll) != 4ll ) goto label$121;
					{
						FBSTRING TMP$307$6;
						FBSTRING TMP$308$6;
						FBSTRING TMP$309$6;
						FBSTRING TMP$310$6;
						FBSTRING TMP$311$6;
						FBSTRING TMP$312$6;
						__builtin_memset( &TMP$308$6, 0, 24ll );
						__builtin_memset( &TMP$307$6, 0, 24ll );
						FBSTRING* vr$166 = fb_StrConcat( &TMP$307$6, (void*)"movups xmm7, ", 14ll, (void*)&SRC$1, -1ll );
						FBSTRING* vr$168 = fb_StrAssign( (void*)&TMP$308$6, -1ll, (void*)vr$166, -1ll, 0 );
						OUTP( *(uint8**)&TMP$308$6 );
						fb_StrDelete( &TMP$308$6 );
						__builtin_memset( &TMP$312$6, 0, 24ll );
						__builtin_memset( &TMP$309$6, 0, 24ll );
						FBSTRING* vr$173 = fb_StrConcat( &TMP$309$6, (void*)"movups ", 8ll, (void*)&DST$1, -1ll );
						__builtin_memset( &TMP$310$6, 0, 24ll );
						FBSTRING* vr$176 = fb_StrConcat( &TMP$310$6, (void*)vr$173, -1ll, (void*)", ", 3ll );
						__builtin_memset( &TMP$311$6, 0, 24ll );
						FBSTRING* vr$179 = fb_StrConcat( &TMP$311$6, (void*)vr$176, -1ll, (void*)"xmm7", 5ll );
						FBSTRING* vr$181 = fb_StrAssign( (void*)&TMP$312$6, -1ll, (void*)vr$179, -1ll, 0 );
						OUTP( *(uint8**)&TMP$312$6 );
						fb_StrDelete( &TMP$312$6 );
					}
					label$121:;
					label$118:;
				}
				label$116:;
				goto label$97;
			}
			label$115:;
			label$114:;
			if( DDSIZE$1 <= 4ll ) goto label$123;
			{
				FBSTRING TMP$315$4;
				FBSTRING TMP$316$4;
				FBSTRING TMP$317$4;
				FBSTRING TMP$318$4;
				FBSTRING TMP$319$4;
				FBSTRING TMP$320$4;
				__builtin_memset( &TMP$316$4, 0, 24ll );
				__builtin_memset( &TMP$315$4, 0, 24ll );
				FBSTRING* vr$187 = fb_StrConcat( &TMP$315$4, (void*)"movlpd xmm7, ", 14ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$189 = fb_StrAssign( (void*)&TMP$316$4, -1ll, (void*)vr$187, -1ll, 0 );
				OUTP( *(uint8**)&TMP$316$4 );
				fb_StrDelete( &TMP$316$4 );
				__builtin_memset( &TMP$320$4, 0, 24ll );
				__builtin_memset( &TMP$317$4, 0, 24ll );
				FBSTRING* vr$194 = fb_StrConcat( &TMP$317$4, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
				__builtin_memset( &TMP$318$4, 0, 24ll );
				FBSTRING* vr$197 = fb_StrConcat( &TMP$318$4, (void*)vr$194, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$319$4, 0, 24ll );
				FBSTRING* vr$200 = fb_StrConcat( &TMP$319$4, (void*)vr$197, -1ll, (void*)"xmm7", 5ll );
				FBSTRING* vr$202 = fb_StrAssign( (void*)&TMP$320$4, -1ll, (void*)vr$200, -1ll, 0 );
				OUTP( *(uint8**)&TMP$320$4 );
				fb_StrDelete( &TMP$320$4 );
			}
			goto label$122;
			label$123:;
			{
				FBSTRING TMP$323$4;
				FBSTRING TMP$324$4;
				FBSTRING TMP$325$4;
				FBSTRING TMP$326$4;
				FBSTRING TMP$327$4;
				FBSTRING TMP$328$4;
				__builtin_memset( &TMP$324$4, 0, 24ll );
				__builtin_memset( &TMP$323$4, 0, 24ll );
				FBSTRING* vr$207 = fb_StrConcat( &TMP$323$4, (void*)"movss xmm7, ", 13ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$209 = fb_StrAssign( (void*)&TMP$324$4, -1ll, (void*)vr$207, -1ll, 0 );
				OUTP( *(uint8**)&TMP$324$4 );
				fb_StrDelete( &TMP$324$4 );
				__builtin_memset( &TMP$328$4, 0, 24ll );
				__builtin_memset( &TMP$325$4, 0, 24ll );
				FBSTRING* vr$214 = fb_StrConcat( &TMP$325$4, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
				__builtin_memset( &TMP$326$4, 0, 24ll );
				FBSTRING* vr$217 = fb_StrConcat( &TMP$326$4, (void*)vr$214, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$327$4, 0, 24ll );
				FBSTRING* vr$220 = fb_StrConcat( &TMP$327$4, (void*)vr$217, -1ll, (void*)"xmm7", 5ll );
				FBSTRING* vr$222 = fb_StrAssign( (void*)&TMP$328$4, -1ll, (void*)vr$220, -1ll, 0 );
				OUTP( *(uint8**)&TMP$328$4 );
				fb_StrDelete( &TMP$328$4 );
			}
			label$122:;
		}
		goto label$112;
		label$113:;
		{
			if( SDSIZE$1 <= 4ll ) goto label$125;
			{
				if( SRC_VEC$1 == 0ll ) goto label$127;
				{
					FBSTRING TMP$331$5;
					FBSTRING TMP$332$5;
					FBSTRING TMP$333$5;
					FBSTRING TMP$334$5;
					FBSTRING TMP$335$5;
					FBSTRING TMP$336$5;
					__builtin_memset( &TMP$332$5, 0, 24ll );
					__builtin_memset( &TMP$331$5, 0, 24ll );
					FBSTRING* vr$229 = fb_StrConcat( &TMP$331$5, (void*)"cvtpd2ps xmm7, ", 16ll, (void*)&SRC$1, -1ll );
					FBSTRING* vr$231 = fb_StrAssign( (void*)&TMP$332$5, -1ll, (void*)vr$229, -1ll, 0 );
					OUTP( *(uint8**)&TMP$332$5 );
					fb_StrDelete( &TMP$332$5 );
					__builtin_memset( &TMP$336$5, 0, 24ll );
					__builtin_memset( &TMP$333$5, 0, 24ll );
					FBSTRING* vr$236 = fb_StrConcat( &TMP$333$5, (void*)"movlps ", 8ll, (void*)&DST$1, -1ll );
					__builtin_memset( &TMP$334$5, 0, 24ll );
					FBSTRING* vr$239 = fb_StrConcat( &TMP$334$5, (void*)vr$236, -1ll, (void*)", ", 3ll );
					__builtin_memset( &TMP$335$5, 0, 24ll );
					FBSTRING* vr$242 = fb_StrConcat( &TMP$335$5, (void*)vr$239, -1ll, (void*)"xmm7", 5ll );
					FBSTRING* vr$244 = fb_StrAssign( (void*)&TMP$336$5, -1ll, (void*)vr$242, -1ll, 0 );
					OUTP( *(uint8**)&TMP$336$5 );
					fb_StrDelete( &TMP$336$5 );
				}
				goto label$126;
				label$127:;
				{
					FBSTRING TMP$339$5;
					FBSTRING TMP$340$5;
					FBSTRING TMP$341$5;
					FBSTRING TMP$342$5;
					FBSTRING TMP$343$5;
					FBSTRING TMP$344$5;
					__builtin_memset( &TMP$340$5, 0, 24ll );
					__builtin_memset( &TMP$339$5, 0, 24ll );
					FBSTRING* vr$249 = fb_StrConcat( &TMP$339$5, (void*)"cvtsd2ss xmm7, ", 16ll, (void*)&SRC$1, -1ll );
					FBSTRING* vr$251 = fb_StrAssign( (void*)&TMP$340$5, -1ll, (void*)vr$249, -1ll, 0 );
					OUTP( *(uint8**)&TMP$340$5 );
					fb_StrDelete( &TMP$340$5 );
					__builtin_memset( &TMP$344$5, 0, 24ll );
					__builtin_memset( &TMP$341$5, 0, 24ll );
					FBSTRING* vr$256 = fb_StrConcat( &TMP$341$5, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
					__builtin_memset( &TMP$342$5, 0, 24ll );
					FBSTRING* vr$259 = fb_StrConcat( &TMP$342$5, (void*)vr$256, -1ll, (void*)", ", 3ll );
					__builtin_memset( &TMP$343$5, 0, 24ll );
					FBSTRING* vr$262 = fb_StrConcat( &TMP$343$5, (void*)vr$259, -1ll, (void*)"xmm7", 5ll );
					FBSTRING* vr$264 = fb_StrAssign( (void*)&TMP$344$5, -1ll, (void*)vr$262, -1ll, 0 );
					OUTP( *(uint8**)&TMP$344$5 );
					fb_StrDelete( &TMP$344$5 );
				}
				label$126:;
			}
			goto label$124;
			label$125:;
			{
				if( SRC_VEC$1 == 0ll ) goto label$129;
				{
					FBSTRING TMP$347$5;
					FBSTRING TMP$348$5;
					FBSTRING TMP$349$5;
					FBSTRING TMP$350$5;
					FBSTRING TMP$351$5;
					FBSTRING TMP$352$5;
					__builtin_memset( &TMP$348$5, 0, 24ll );
					__builtin_memset( &TMP$347$5, 0, 24ll );
					FBSTRING* vr$270 = fb_StrConcat( &TMP$347$5, (void*)"cvtps2pd xmm7, ", 16ll, (void*)&SRC$1, -1ll );
					FBSTRING* vr$272 = fb_StrAssign( (void*)&TMP$348$5, -1ll, (void*)vr$270, -1ll, 0 );
					OUTP( *(uint8**)&TMP$348$5 );
					fb_StrDelete( &TMP$348$5 );
					__builtin_memset( &TMP$352$5, 0, 24ll );
					__builtin_memset( &TMP$349$5, 0, 24ll );
					FBSTRING* vr$277 = fb_StrConcat( &TMP$349$5, (void*)"movupd ", 8ll, (void*)&DST$1, -1ll );
					__builtin_memset( &TMP$350$5, 0, 24ll );
					FBSTRING* vr$280 = fb_StrConcat( &TMP$350$5, (void*)vr$277, -1ll, (void*)", ", 3ll );
					__builtin_memset( &TMP$351$5, 0, 24ll );
					FBSTRING* vr$283 = fb_StrConcat( &TMP$351$5, (void*)vr$280, -1ll, (void*)"xmm7", 5ll );
					FBSTRING* vr$285 = fb_StrAssign( (void*)&TMP$352$5, -1ll, (void*)vr$283, -1ll, 0 );
					OUTP( *(uint8**)&TMP$352$5 );
					fb_StrDelete( &TMP$352$5 );
				}
				goto label$128;
				label$129:;
				{
					FBSTRING TMP$355$5;
					FBSTRING TMP$356$5;
					FBSTRING TMP$357$5;
					FBSTRING TMP$358$5;
					FBSTRING TMP$359$5;
					FBSTRING TMP$360$5;
					__builtin_memset( &TMP$356$5, 0, 24ll );
					__builtin_memset( &TMP$355$5, 0, 24ll );
					FBSTRING* vr$290 = fb_StrConcat( &TMP$355$5, (void*)"cvtss2sd xmm7, ", 16ll, (void*)&SRC$1, -1ll );
					FBSTRING* vr$292 = fb_StrAssign( (void*)&TMP$356$5, -1ll, (void*)vr$290, -1ll, 0 );
					OUTP( *(uint8**)&TMP$356$5 );
					fb_StrDelete( &TMP$356$5 );
					__builtin_memset( &TMP$360$5, 0, 24ll );
					__builtin_memset( &TMP$357$5, 0, 24ll );
					FBSTRING* vr$297 = fb_StrConcat( &TMP$357$5, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
					__builtin_memset( &TMP$358$5, 0, 24ll );
					FBSTRING* vr$300 = fb_StrConcat( &TMP$358$5, (void*)vr$297, -1ll, (void*)", ", 3ll );
					__builtin_memset( &TMP$359$5, 0, 24ll );
					FBSTRING* vr$303 = fb_StrConcat( &TMP$359$5, (void*)vr$300, -1ll, (void*)"xmm7", 5ll );
					FBSTRING* vr$305 = fb_StrAssign( (void*)&TMP$360$5, -1ll, (void*)vr$303, -1ll, 0 );
					OUTP( *(uint8**)&TMP$360$5 );
					fb_StrDelete( &TMP$360$5 );
				}
				label$128:;
			}
			label$124:;
		}
		label$112:;
	}
	label$100:;
	label$97:;
}

static void _EMITLOADF2L_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$361$1;
	int64 TMP$368$1;
	int64 TMP$369$1;
	label$130:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING AUX$1;
	static FBSTRING OSTR$1;
	static int64 DDSIZE$1;
	static int64 SDSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$132;
	TMP$361$1 = 22ll;
	goto label$750;
	label$132:;
	TMP$361$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$750:;
	SDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$361$1 * 56ll)) + 8ll);
	if( *(int64*)((uint8*)SVREG$1 + 32ll) != 1ll ) goto label$134;
	{
		if( *(int64*)SVREG$1 != 4ll ) goto label$136;
		{
			OUTP( (uint8*)"sub esp, 8" );
			if( SDSIZE$1 <= 4ll ) goto label$138;
			{
				FBSTRING TMP$362$4;
				FBSTRING TMP$363$4;
				__builtin_memset( &TMP$363$4, 0, 24ll );
				__builtin_memset( &TMP$362$4, 0, 24ll );
				FBSTRING* vr$14 = fb_StrConcat( &TMP$362$4, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$16 = fb_StrAssign( (void*)&TMP$363$4, -1ll, (void*)vr$14, -1ll, 0 );
				OUTP( *(uint8**)&TMP$363$4 );
				fb_StrDelete( &TMP$363$4 );
				OUTP( (uint8*)"fld qword ptr [esp]" );
			}
			goto label$137;
			label$138:;
			{
				FBSTRING TMP$364$4;
				FBSTRING TMP$365$4;
				__builtin_memset( &TMP$365$4, 0, 24ll );
				__builtin_memset( &TMP$364$4, 0, 24ll );
				FBSTRING* vr$21 = fb_StrConcat( &TMP$364$4, (void*)"movss dword ptr [esp], ", 24ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$23 = fb_StrAssign( (void*)&TMP$365$4, -1ll, (void*)vr$21, -1ll, 0 );
				OUTP( *(uint8**)&TMP$365$4 );
				fb_StrDelete( &TMP$365$4 );
				OUTP( (uint8*)"fld dword ptr [esp]" );
			}
			label$137:;
			OUTP( (uint8*)"add esp, 8" );
		}
		goto label$135;
		label$136:;
		{
			FBSTRING TMP$366$3;
			FBSTRING TMP$367$3;
			__builtin_memset( &TMP$367$3, 0, 24ll );
			__builtin_memset( &TMP$366$3, 0, 24ll );
			FBSTRING* vr$28 = fb_StrConcat( &TMP$366$3, (void*)"fld ", 5ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$30 = fb_StrAssign( (void*)&TMP$367$3, -1ll, (void*)vr$28, -1ll, 0 );
			OUTP( *(uint8**)&TMP$367$3 );
			fb_StrDelete( &TMP$367$3 );
		}
		label$135:;
	}
	label$134:;
	label$133:;
	HPREPOPERAND64( DVREG$1, &DST$1, &AUX$1 );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$139;
	TMP$368$1 = 22ll;
	goto label$751;
	label$139:;
	TMP$368$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$751:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$368$1 * 56ll)) + 16ll) != 0ll ) goto label$140;
	TMP$369$1 = (int64)-((int64)-(*(int64*)((uint8*)DVREG$1 + 8ll) == 13ll) != 0ll);
	goto label$752;
	label$140:;
	TMP$369$1 = -1ll;
	label$752:;
	if( TMP$369$1 == 0ll ) goto label$142;
	{
		FBSTRING TMP$370$2;
		FBSTRING TMP$371$2;
		OUTP( (uint8*)"sub esp, 8" );
		__builtin_memset( &TMP$370$2, 0, 24ll );
		FBSTRING* vr$48 = fb_StrConcat( &TMP$370$2, (void*)"fistp ", 7ll, (void*)(((uint8*)DTYPETB$ + (*(int64*)((uint8*)DVREG$1 + 8ll) * 24ll)) + 8ll), 12ll );
		__builtin_memset( &TMP$371$2, 0, 24ll );
		FBSTRING* vr$51 = fb_StrConcat( &TMP$371$2, (void*)vr$48, -1ll, (void*)" [esp]", 7ll );
		FBSTRING* vr$52 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$51, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	goto label$141;
	label$142:;
	{
		OUTP( (uint8*)"fld st(0)" );
		OUTP( (uint8*)"push 0x4f800000" );
		OUTP( (uint8*)"fdiv dword ptr [esp]" );
		OUTP( (uint8*)"fistp dword ptr [esp]" );
		OUTP( (uint8*)"fild dword ptr [esp]" );
		OUTP( (uint8*)"push 0x4f800000" );
		OUTP( (uint8*)"fmul dword ptr [esp]" );
		OUTP( (uint8*)"fsubp" );
		OUTP( (uint8*)"fistp dword ptr [esp]" );
	}
	label$141:;
	HPOP( *(uint8**)&DST$1 );
	HPOP( *(uint8**)&AUX$1 );
	label$131:;
}

static void _EMITLOADF2I_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$378$1;
	int64 TMP$379$1;
	int64 TMP$380$1;
	label$143:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING SUFFIX$1;
	static FBSTRING AUX$1;
	static FBSTRING AUX8_16$1;
	static int64 SDSIZE$1;
	static int64 DDSIZE$1;
	static int64 ISFREE$1;
	static int64 REG$1;
	static int64 WASREG$1;
	static struct $8FBSYMBOL* SYM$1;
	static struct $6IRVREG* TEMPVREG$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$145;
	TMP$378$1 = 22ll;
	goto label$753;
	label$145:;
	TMP$378$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$753:;
	SDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$378$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$146;
	TMP$379$1 = 22ll;
	goto label$754;
	label$146:;
	TMP$379$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$754:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$379$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$147;
	TMP$380$1 = 22ll;
	goto label$755;
	label$147:;
	TMP$380$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$755:;
	if( ((int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$380$1 * 56ll)) + 16ll) == 0ll) & (int64)-(DDSIZE$1 == 4ll)) == 0ll ) goto label$149;
	{
		OUTP( (uint8*)"sub esp, 8" );
		if( *(int64*)SVREG$1 == 4ll ) goto label$151;
		{
			FBSTRING TMP$381$3;
			FBSTRING TMP$382$3;
			__builtin_memset( &TMP$382$3, 0, 24ll );
			__builtin_memset( &TMP$381$3, 0, 24ll );
			FBSTRING* vr$27 = fb_StrConcat( &TMP$381$3, (void*)"fld ", 5ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$29 = fb_StrAssign( (void*)&TMP$382$3, -1ll, (void*)vr$27, -1ll, 0 );
			OUTP( *(uint8**)&TMP$382$3 );
			fb_StrDelete( &TMP$382$3 );
		}
		goto label$150;
		label$151:;
		if( *(int64*)((uint8*)SVREG$1 + 32ll) != 1ll ) goto label$152;
		{
			if( SDSIZE$1 <= 4ll ) goto label$154;
			{
				FBSTRING TMP$383$4;
				FBSTRING TMP$384$4;
				__builtin_memset( &TMP$384$4, 0, 24ll );
				__builtin_memset( &TMP$383$4, 0, 24ll );
				FBSTRING* vr$37 = fb_StrConcat( &TMP$383$4, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$39 = fb_StrAssign( (void*)&TMP$384$4, -1ll, (void*)vr$37, -1ll, 0 );
				OUTP( *(uint8**)&TMP$384$4 );
				fb_StrDelete( &TMP$384$4 );
				OUTP( (uint8*)"fld qword ptr [esp]" );
			}
			goto label$153;
			label$154:;
			{
				FBSTRING TMP$385$4;
				FBSTRING TMP$386$4;
				__builtin_memset( &TMP$386$4, 0, 24ll );
				__builtin_memset( &TMP$385$4, 0, 24ll );
				FBSTRING* vr$44 = fb_StrConcat( &TMP$385$4, (void*)"movss dword ptr [esp], ", 24ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$46 = fb_StrAssign( (void*)&TMP$386$4, -1ll, (void*)vr$44, -1ll, 0 );
				OUTP( *(uint8**)&TMP$386$4 );
				fb_StrDelete( &TMP$386$4 );
				OUTP( (uint8*)"fld dword ptr [esp]" );
			}
			label$153:;
		}
		label$152:;
		label$150:;
		OUTP( (uint8*)"fistp qword ptr [esp]" );
		HPOP( *(uint8**)&DST$1 );
		OUTP( (uint8*)"add esp, 4" );
		goto label$144;
	}
	label$149:;
	label$148:;
	if( *(int64*)DVREG$1 != 4ll ) goto label$156;
	{
		ISFREE$1 = -1ll;
		if( DDSIZE$1 >= 4ll ) goto label$158;
		{
			uint8* vr$52 = HGETREGNAME( 7ll, *(int64*)((uint8*)DVREG$1 + 24ll) );
			fb_StrAssign( (void*)&DST$1, -1ll, (void*)vr$52, 0ll, 0 );
		}
		label$158:;
		label$157:;
		FBSTRING* vr$53 = fb_StrAssign( (void*)&AUX$1, -1ll, (void*)&DST$1, -1ll, 0 );
		WASREG$1 = -1ll;
	}
	goto label$155;
	label$156:;
	{
		WASREG$1 = 0ll;
		int64 vr$54 = HFINDREGNOTINVREG( SVREG$1, 0ll );
		REG$1 = vr$54;
		uint8* vr$55 = HGETREGNAME( 7ll, REG$1 );
		fb_StrAssign( (void*)&AUX$1, -1ll, (void*)vr$55, 0ll, 0 );
		uint8* vr$57 = HGETREGNAME( *(int64*)((uint8*)DVREG$1 + 8ll), REG$1 );
		fb_StrAssign( (void*)&AUX8_16$1, -1ll, (void*)vr$57, 0ll, 0 );
		int64 vr$58 = HISREGFREE( 0ll, REG$1 );
		ISFREE$1 = vr$58;
		if( ISFREE$1 != 0ll ) goto label$160;
		{
			HPUSH( *(uint8**)&AUX$1 );
		}
		label$160:;
		label$159:;
	}
	label$155:;
	if( *(int64*)((uint8*)SVREG$1 + 32ll) != 0ll ) goto label$162;
	{
		OUTP( (uint8*)"sub esp, 4" );
		if( DDSIZE$1 != 2ll ) goto label$164;
		{
			OUTP( (uint8*)"fistp word ptr [esp]" );
		}
		goto label$163;
		label$164:;
		{
			OUTP( (uint8*)"fistp dword ptr [esp]" );
		}
		label$163:;
		HPOP( *(uint8**)&AUX$1 );
	}
	goto label$161;
	label$162:;
	{
		int64 TMP$388$2;
		int64 TMP$389$2;
		if( SDSIZE$1 <= 4ll ) goto label$165;
		TMP$388$2 = 100ll;
		goto label$756;
		label$165:;
		TMP$388$2 = 115ll;
		label$756:;
		FBSTRING* vr$64 = fb_CHR( 1, TMP$388$2 );
		FBSTRING* vr$65 = fb_StrAssign( (void*)&SUFFIX$1, -1ll, (void*)vr$64, -1ll, 0 );
		if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$166;
		TMP$389$2 = 22ll;
		goto label$757;
		label$166:;
		TMP$389$2 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
		label$757:;
		if( (*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$389$2 * 56ll)) + 16ll) & (int64)-(DDSIZE$1 == 2ll)) == 0ll ) goto label$168;
		{
			FBSTRING TMP$396$3;
			FBSTRING TMP$397$3;
			FBSTRING TMP$398$3;
			FBSTRING TMP$399$3;
			FBSTRING TMP$400$3;
			FBSTRING TMP$403$3;
			FBSTRING TMP$404$3;
			FBSTRING TMP$405$3;
			FBSTRING TMP$406$3;
			if( *(int64*)SVREG$1 == 4ll ) goto label$170;
			{
				if( SDSIZE$1 <= 4ll ) goto label$172;
				{
					FBSTRING TMP$390$5;
					FBSTRING TMP$391$5;
					__builtin_memset( &TMP$391$5, 0, 24ll );
					__builtin_memset( &TMP$390$5, 0, 24ll );
					FBSTRING* vr$81 = fb_StrConcat( &TMP$390$5, (void*)"movlpd xmm7, ", 14ll, (void*)&SRC$1, -1ll );
					FBSTRING* vr$83 = fb_StrAssign( (void*)&TMP$391$5, -1ll, (void*)vr$81, -1ll, 0 );
					OUTP( *(uint8**)&TMP$391$5 );
					fb_StrDelete( &TMP$391$5 );
				}
				goto label$171;
				label$172:;
				{
					FBSTRING TMP$392$5;
					FBSTRING TMP$393$5;
					__builtin_memset( &TMP$393$5, 0, 24ll );
					__builtin_memset( &TMP$392$5, 0, 24ll );
					FBSTRING* vr$88 = fb_StrConcat( &TMP$392$5, (void*)"movss xmm7, ", 13ll, (void*)&SRC$1, -1ll );
					FBSTRING* vr$90 = fb_StrAssign( (void*)&TMP$393$5, -1ll, (void*)vr$88, -1ll, 0 );
					OUTP( *(uint8**)&TMP$393$5 );
					fb_StrDelete( &TMP$393$5 );
				}
				label$171:;
				fb_StrAssign( (void*)&SRC$1, -1ll, (void*)"xmm7", 5ll, 0 );
			}
			label$170:;
			label$169:;
			__builtin_memset( &TMP$400$3, 0, 24ll );
			__builtin_memset( &TMP$396$3, 0, 24ll );
			FBSTRING* vr$95 = fb_StrConcat( &TMP$396$3, (void*)"cvtp", 5ll, (void*)&SUFFIX$1, -1ll );
			__builtin_memset( &TMP$397$3, 0, 24ll );
			FBSTRING* vr$98 = fb_StrConcat( &TMP$397$3, (void*)vr$95, -1ll, (void*)"2dq xmm7", 9ll );
			__builtin_memset( &TMP$398$3, 0, 24ll );
			FBSTRING* vr$101 = fb_StrConcat( &TMP$398$3, (void*)vr$98, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$399$3, 0, 24ll );
			FBSTRING* vr$104 = fb_StrConcat( &TMP$399$3, (void*)vr$101, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$106 = fb_StrAssign( (void*)&TMP$400$3, -1ll, (void*)vr$104, -1ll, 0 );
			OUTP( *(uint8**)&TMP$400$3 );
			fb_StrDelete( &TMP$400$3 );
			OUTP( (uint8*)"packssdw xmm7, xmm7" );
			__builtin_memset( &TMP$406$3, 0, 24ll );
			__builtin_memset( &TMP$403$3, 0, 24ll );
			FBSTRING* vr$111 = fb_StrConcat( &TMP$403$3, (void*)"movd ", 6ll, (void*)&AUX$1, -1ll );
			__builtin_memset( &TMP$404$3, 0, 24ll );
			FBSTRING* vr$114 = fb_StrConcat( &TMP$404$3, (void*)vr$111, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$405$3, 0, 24ll );
			FBSTRING* vr$117 = fb_StrConcat( &TMP$405$3, (void*)vr$114, -1ll, (void*)"xmm7", 5ll );
			FBSTRING* vr$119 = fb_StrAssign( (void*)&TMP$406$3, -1ll, (void*)vr$117, -1ll, 0 );
			OUTP( *(uint8**)&TMP$406$3 );
			fb_StrDelete( &TMP$406$3 );
		}
		goto label$167;
		label$168:;
		{
			FBSTRING TMP$409$3;
			FBSTRING TMP$410$3;
			FBSTRING TMP$411$3;
			FBSTRING TMP$412$3;
			FBSTRING TMP$413$3;
			FBSTRING TMP$414$3;
			HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, 0ll );
			__builtin_memset( &TMP$414$3, 0, 24ll );
			__builtin_memset( &TMP$409$3, 0, 24ll );
			FBSTRING* vr$124 = fb_StrConcat( &TMP$409$3, (void*)"cvts", 5ll, (void*)&SUFFIX$1, -1ll );
			__builtin_memset( &TMP$410$3, 0, 24ll );
			FBSTRING* vr$127 = fb_StrConcat( &TMP$410$3, (void*)vr$124, -1ll, (void*)"2si ", 5ll );
			__builtin_memset( &TMP$411$3, 0, 24ll );
			FBSTRING* vr$130 = fb_StrConcat( &TMP$411$3, (void*)vr$127, -1ll, (void*)&AUX$1, -1ll );
			__builtin_memset( &TMP$412$3, 0, 24ll );
			FBSTRING* vr$133 = fb_StrConcat( &TMP$412$3, (void*)vr$130, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$413$3, 0, 24ll );
			FBSTRING* vr$136 = fb_StrConcat( &TMP$413$3, (void*)vr$133, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$138 = fb_StrAssign( (void*)&TMP$414$3, -1ll, (void*)vr$136, -1ll, 0 );
			OUTP( *(uint8**)&TMP$414$3 );
			fb_StrDelete( &TMP$414$3 );
		}
		label$167:;
	}
	label$161:;
	if( WASREG$1 != 0ll ) goto label$174;
	{
		if( DDSIZE$1 != 4ll ) goto label$176;
		{
			FBSTRING TMP$415$3;
			FBSTRING TMP$416$3;
			FBSTRING TMP$417$3;
			FBSTRING TMP$418$3;
			__builtin_memset( &TMP$418$3, 0, 24ll );
			__builtin_memset( &TMP$415$3, 0, 24ll );
			FBSTRING* vr$145 = fb_StrConcat( &TMP$415$3, (void*)"mov ", 5ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$416$3, 0, 24ll );
			FBSTRING* vr$148 = fb_StrConcat( &TMP$416$3, (void*)vr$145, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$417$3, 0, 24ll );
			FBSTRING* vr$151 = fb_StrConcat( &TMP$417$3, (void*)vr$148, -1ll, (void*)&AUX$1, -1ll );
			FBSTRING* vr$153 = fb_StrAssign( (void*)&TMP$418$3, -1ll, (void*)vr$151, -1ll, 0 );
			OUTP( *(uint8**)&TMP$418$3 );
			fb_StrDelete( &TMP$418$3 );
		}
		goto label$175;
		label$176:;
		{
			FBSTRING TMP$419$3;
			FBSTRING TMP$420$3;
			FBSTRING TMP$421$3;
			FBSTRING TMP$422$3;
			__builtin_memset( &TMP$422$3, 0, 24ll );
			__builtin_memset( &TMP$419$3, 0, 24ll );
			FBSTRING* vr$158 = fb_StrConcat( &TMP$419$3, (void*)"mov ", 5ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$420$3, 0, 24ll );
			FBSTRING* vr$161 = fb_StrConcat( &TMP$420$3, (void*)vr$158, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$421$3, 0, 24ll );
			FBSTRING* vr$164 = fb_StrConcat( &TMP$421$3, (void*)vr$161, -1ll, (void*)&AUX8_16$1, -1ll );
			FBSTRING* vr$166 = fb_StrAssign( (void*)&TMP$422$3, -1ll, (void*)vr$164, -1ll, 0 );
			OUTP( *(uint8**)&TMP$422$3 );
			fb_StrDelete( &TMP$422$3 );
		}
		label$175:;
		if( ISFREE$1 != 0ll ) goto label$178;
		{
			HPOP( *(uint8**)&AUX$1 );
		}
		label$178:;
		label$177:;
	}
	label$174:;
	label$173:;
	label$144:;
}

static void _EMITLOADL2F_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$427$1;
	FBSTRING TMP$428$1;
	FBSTRING TMP$429$1;
	FBSTRING TMP$441$1;
	FBSTRING TMP$442$1;
	label$179:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING AUX$1;
	static FBSTRING OSTR$1;
	static int64 DDSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( ((int64)-(*(int64*)SVREG$1 == 4ll) | (int64)-(*(int64*)SVREG$1 == 0ll)) == 0ll ) goto label$182;
	{
		int64 TMP$423$2;
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$183;
		TMP$423$2 = 22ll;
		goto label$758;
		label$183:;
		TMP$423$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$758:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$423$2 * 56ll)) + 16ll) == 0ll ) goto label$185;
		{
			FBSTRING TMP$424$3;
			FBSTRING TMP$425$3;
			HPREPOPERAND64( SVREG$1, &SRC$1, &AUX$1 );
			HPUSH( *(uint8**)&AUX$1 );
			HPUSH( *(uint8**)&SRC$1 );
			__builtin_memset( &TMP$424$3, 0, 24ll );
			FBSTRING* vr$18 = fb_StrConcat( &TMP$424$3, (void*)"fild ", 6ll, (void*)(((uint8*)DTYPETB$ + (*(int64*)((uint8*)SVREG$1 + 8ll) * 24ll)) + 8ll), 12ll );
			__builtin_memset( &TMP$425$3, 0, 24ll );
			FBSTRING* vr$21 = fb_StrConcat( &TMP$425$3, (void*)vr$18, -1ll, (void*)" [esp]", 7ll );
			FBSTRING* vr$22 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$21, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
			OUTP( (uint8*)"add esp, 8" );
		}
		goto label$184;
		label$185:;
		{
			HPREPOPERAND64( SVREG$1, &SRC$1, &AUX$1 );
			HPUSH( *(uint8**)&AUX$1 );
			HPUSH( *(uint8**)&SRC$1 );
			OUTP( (uint8*)"fild qword ptr [esp]" );
			OUTP( (uint8*)"add esp, 8" );
			HULONG2DBL( SVREG$1 );
		}
		label$184:;
	}
	goto label$181;
	label$182:;
	{
		int64 TMP$426$2;
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$186;
		TMP$426$2 = 22ll;
		goto label$759;
		label$186:;
		TMP$426$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$759:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$426$2 * 56ll)) + 16ll) == 0ll ) goto label$188;
		{
			FBSTRING* vr$30 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fild ", 6ll, 0 );
			FBSTRING* vr$31 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		goto label$187;
		label$188:;
		{
			FBSTRING* vr$32 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fild ", 6ll, 0 );
			FBSTRING* vr$33 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
			HULONG2DBL( SVREG$1 );
		}
		label$187:;
	}
	label$181:;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$189;
	TMP$427$1 = 22ll;
	goto label$760;
	label$189:;
	TMP$427$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$760:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$427$1 * 56ll)) + 8ll);
	__builtin_memset( &TMP$429$1, 0, 24ll );
	FBSTRING* vr$41 = fb_LongintToStr( DDSIZE$1 );
	__builtin_memset( &TMP$428$1, 0, 24ll );
	FBSTRING* vr$44 = fb_StrConcat( &TMP$428$1, (void*)"sub esp, ", 10ll, (void*)vr$41, -1ll );
	FBSTRING* vr$46 = fb_StrAssign( (void*)&TMP$429$1, -1ll, (void*)vr$44, -1ll, 0 );
	OUTP( *(uint8**)&TMP$429$1 );
	fb_StrDelete( &TMP$429$1 );
	if( DDSIZE$1 <= 4ll ) goto label$191;
	{
		FBSTRING TMP$432$2;
		FBSTRING TMP$433$2;
		FBSTRING TMP$434$2;
		FBSTRING TMP$435$2;
		OUTP( (uint8*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$435$2, 0, 24ll );
		__builtin_memset( &TMP$432$2, 0, 24ll );
		FBSTRING* vr$52 = fb_StrConcat( &TMP$432$2, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$433$2, 0, 24ll );
		FBSTRING* vr$55 = fb_StrConcat( &TMP$433$2, (void*)vr$52, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$434$2, 0, 24ll );
		FBSTRING* vr$58 = fb_StrConcat( &TMP$434$2, (void*)vr$55, -1ll, (void*)"qword ptr [esp]", 16ll );
		FBSTRING* vr$60 = fb_StrAssign( (void*)&TMP$435$2, -1ll, (void*)vr$58, -1ll, 0 );
		OUTP( *(uint8**)&TMP$435$2 );
		fb_StrDelete( &TMP$435$2 );
	}
	goto label$190;
	label$191:;
	{
		FBSTRING TMP$437$2;
		FBSTRING TMP$438$2;
		FBSTRING TMP$439$2;
		FBSTRING TMP$440$2;
		OUTP( (uint8*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$440$2, 0, 24ll );
		__builtin_memset( &TMP$437$2, 0, 24ll );
		FBSTRING* vr$65 = fb_StrConcat( &TMP$437$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$438$2, 0, 24ll );
		FBSTRING* vr$68 = fb_StrConcat( &TMP$438$2, (void*)vr$65, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$439$2, 0, 24ll );
		FBSTRING* vr$71 = fb_StrConcat( &TMP$439$2, (void*)vr$68, -1ll, (void*)"dword ptr [esp]", 16ll );
		FBSTRING* vr$73 = fb_StrAssign( (void*)&TMP$440$2, -1ll, (void*)vr$71, -1ll, 0 );
		OUTP( *(uint8**)&TMP$440$2 );
		fb_StrDelete( &TMP$440$2 );
	}
	label$190:;
	__builtin_memset( &TMP$442$1, 0, 24ll );
	FBSTRING* vr$76 = fb_LongintToStr( DDSIZE$1 );
	__builtin_memset( &TMP$441$1, 0, 24ll );
	FBSTRING* vr$79 = fb_StrConcat( &TMP$441$1, (void*)"add esp, ", 10ll, (void*)vr$76, -1ll );
	FBSTRING* vr$81 = fb_StrAssign( (void*)&TMP$442$1, -1ll, (void*)vr$79, -1ll, 0 );
	OUTP( *(uint8**)&TMP$442$1 );
	fb_StrDelete( &TMP$442$1 );
	label$180:;
}

static void _EMITLOADI2F_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$443$1;
	int64 TMP$444$1;
	int64 TMP$445$1;
	FBSTRING TMP$514$1;
	FBSTRING TMP$515$1;
	FBSTRING TMP$524$1;
	FBSTRING TMP$525$1;
	label$192:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 SDSIZE$1;
	static int64 DDSIZE$1;
	static FBSTRING SUFFIX$1;
	static FBSTRING AUX$1;
	static int64 ISFREE$1;
	static int64 REG$1;
	static struct $8FBSYMBOL* SYM$1;
	static struct $6IRVREG* TEMPVREG$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$194;
	TMP$443$1 = 22ll;
	goto label$761;
	label$194:;
	TMP$443$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$761:;
	SDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$443$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$195;
	TMP$444$1 = 22ll;
	goto label$762;
	label$195:;
	TMP$444$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$762:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$444$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$196;
	TMP$445$1 = 22ll;
	goto label$763;
	label$196:;
	TMP$445$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$763:;
	if( ((int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$445$1 * 56ll)) + 16ll) == 0ll) & (int64)-(SDSIZE$1 == 4ll)) == 0ll ) goto label$198;
	{
		FBSTRING TMP$448$2;
		FBSTRING TMP$449$2;
		FBSTRING TMP$450$2;
		FBSTRING TMP$451$2;
		FBSTRING TMP$454$2;
		FBSTRING TMP$455$2;
		FBSTRING TMP$456$2;
		FBSTRING TMP$457$2;
		FBSTRING TMP$459$2;
		FBSTRING TMP$460$2;
		FBSTRING TMP$461$2;
		FBSTRING TMP$462$2;
		FBSTRING TMP$463$2;
		FBSTRING TMP$464$2;
		FBSTRING TMP$465$2;
		FBSTRING TMP$466$2;
		FBSTRING TMP$467$2;
		FBSTRING TMP$470$2;
		FBSTRING TMP$471$2;
		FBSTRING TMP$472$2;
		FBSTRING TMP$473$2;
		FBSTRING TMP$474$2;
		FBSTRING TMP$475$2;
		FBSTRING TMP$476$2;
		FBSTRING TMP$477$2;
		FBSTRING TMP$478$2;
		FBSTRING TMP$480$2;
		FBSTRING TMP$481$2;
		FBSTRING TMP$482$2;
		FBSTRING TMP$483$2;
		FBSTRING TMP$484$2;
		FBSTRING TMP$486$2;
		FBSTRING TMP$487$2;
		FBSTRING TMP$488$2;
		FBSTRING TMP$489$2;
		FBSTRING TMP$490$2;
		int64 vr$22 = HFINDREGNOTINVREG( SVREG$1, 0ll );
		REG$1 = vr$22;
		uint8* vr$23 = HGETREGNAME( 7ll, REG$1 );
		fb_StrAssign( (void*)&AUX$1, -1ll, (void*)vr$23, 0ll, 0 );
		int64 vr$24 = HISREGFREE( 0ll, REG$1 );
		ISFREE$1 = vr$24;
		if( ISFREE$1 != 0ll ) goto label$200;
		{
			HPUSH( *(uint8**)&AUX$1 );
		}
		label$200:;
		label$199:;
		if( DDSIZE$1 <= 4ll ) goto label$202;
		{
			struct $8FBSYMBOL* vr$27 = SYMBALLOCINTCONST( 4679240012837945344ll, 13ll );
			SYM$1 = vr$27;
			struct $6IRVREG* vr$29 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 13ll, (struct $8FBSYMBOL*)0ull, SYM$1, *(int64*)((uint8*)SYM$1 + 80ll) );
			TEMPVREG$1 = vr$29;
			fb_StrAssign( (void*)&SUFFIX$1, -1ll, (void*)"sd ", 4ll, 0 );
		}
		goto label$201;
		label$202:;
		{
			struct $8FBSYMBOL* vr$30 = SYMBALLOCINTCONST( 1199570944ll, 8ll );
			SYM$1 = vr$30;
			struct $6IRVREG* vr$32 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 8ll, (struct $8FBSYMBOL*)0ull, SYM$1, *(int64*)((uint8*)SYM$1 + 80ll) );
			TEMPVREG$1 = vr$32;
			fb_StrAssign( (void*)&SUFFIX$1, -1ll, (void*)"ss ", 4ll, 0 );
		}
		label$201:;
		*(int64*)((uint8*)SYM$1 + 160ll) = 16ll;
		__builtin_memset( &TMP$451$2, 0, 24ll );
		__builtin_memset( &TMP$448$2, 0, 24ll );
		FBSTRING* vr$37 = fb_StrConcat( &TMP$448$2, (void*)"mov ", 5ll, (void*)&AUX$1, -1ll );
		__builtin_memset( &TMP$449$2, 0, 24ll );
		FBSTRING* vr$40 = fb_StrConcat( &TMP$449$2, (void*)vr$37, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$450$2, 0, 24ll );
		FBSTRING* vr$43 = fb_StrConcat( &TMP$450$2, (void*)vr$40, -1ll, (void*)&SRC$1, -1ll );
		FBSTRING* vr$45 = fb_StrAssign( (void*)&TMP$451$2, -1ll, (void*)vr$43, -1ll, 0 );
		OUTP( *(uint8**)&TMP$451$2 );
		fb_StrDelete( &TMP$451$2 );
		__builtin_memset( &TMP$457$2, 0, 24ll );
		__builtin_memset( &TMP$454$2, 0, 24ll );
		FBSTRING* vr$50 = fb_StrConcat( &TMP$454$2, (void*)"and ", 5ll, (void*)&AUX$1, -1ll );
		__builtin_memset( &TMP$455$2, 0, 24ll );
		FBSTRING* vr$53 = fb_StrConcat( &TMP$455$2, (void*)vr$50, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$456$2, 0, 24ll );
		FBSTRING* vr$56 = fb_StrConcat( &TMP$456$2, (void*)vr$53, -1ll, (void*)"0xFFFF", 7ll );
		FBSTRING* vr$58 = fb_StrAssign( (void*)&TMP$457$2, -1ll, (void*)vr$56, -1ll, 0 );
		OUTP( *(uint8**)&TMP$457$2 );
		fb_StrDelete( &TMP$457$2 );
		__builtin_memset( &TMP$463$2, 0, 24ll );
		__builtin_memset( &TMP$459$2, 0, 24ll );
		FBSTRING* vr$63 = fb_StrConcat( &TMP$459$2, (void*)"cvtsi2", 7ll, (void*)&SUFFIX$1, -1ll );
		__builtin_memset( &TMP$460$2, 0, 24ll );
		FBSTRING* vr$66 = fb_StrConcat( &TMP$460$2, (void*)vr$63, -1ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$461$2, 0, 24ll );
		FBSTRING* vr$69 = fb_StrConcat( &TMP$461$2, (void*)vr$66, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$462$2, 0, 24ll );
		FBSTRING* vr$72 = fb_StrConcat( &TMP$462$2, (void*)vr$69, -1ll, (void*)&AUX$1, -1ll );
		FBSTRING* vr$74 = fb_StrAssign( (void*)&TMP$463$2, -1ll, (void*)vr$72, -1ll, 0 );
		OUTP( *(uint8**)&TMP$463$2 );
		fb_StrDelete( &TMP$463$2 );
		__builtin_memset( &TMP$467$2, 0, 24ll );
		__builtin_memset( &TMP$464$2, 0, 24ll );
		FBSTRING* vr$79 = fb_StrConcat( &TMP$464$2, (void*)"mov ", 5ll, (void*)&AUX$1, -1ll );
		__builtin_memset( &TMP$465$2, 0, 24ll );
		FBSTRING* vr$82 = fb_StrConcat( &TMP$465$2, (void*)vr$79, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$466$2, 0, 24ll );
		FBSTRING* vr$85 = fb_StrConcat( &TMP$466$2, (void*)vr$82, -1ll, (void*)&SRC$1, -1ll );
		FBSTRING* vr$87 = fb_StrAssign( (void*)&TMP$467$2, -1ll, (void*)vr$85, -1ll, 0 );
		OUTP( *(uint8**)&TMP$467$2 );
		fb_StrDelete( &TMP$467$2 );
		__builtin_memset( &TMP$473$2, 0, 24ll );
		__builtin_memset( &TMP$470$2, 0, 24ll );
		FBSTRING* vr$92 = fb_StrConcat( &TMP$470$2, (void*)"shr ", 5ll, (void*)&AUX$1, -1ll );
		__builtin_memset( &TMP$471$2, 0, 24ll );
		FBSTRING* vr$95 = fb_StrConcat( &TMP$471$2, (void*)vr$92, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$472$2, 0, 24ll );
		FBSTRING* vr$98 = fb_StrConcat( &TMP$472$2, (void*)vr$95, -1ll, (void*)"16", 3ll );
		FBSTRING* vr$100 = fb_StrAssign( (void*)&TMP$473$2, -1ll, (void*)vr$98, -1ll, 0 );
		OUTP( *(uint8**)&TMP$473$2 );
		fb_StrDelete( &TMP$473$2 );
		__builtin_memset( &TMP$478$2, 0, 24ll );
		__builtin_memset( &TMP$474$2, 0, 24ll );
		FBSTRING* vr$105 = fb_StrConcat( &TMP$474$2, (void*)"cvtsi2", 7ll, (void*)&SUFFIX$1, -1ll );
		__builtin_memset( &TMP$475$2, 0, 24ll );
		FBSTRING* vr$108 = fb_StrConcat( &TMP$475$2, (void*)vr$105, -1ll, (void*)"xmm7", 5ll );
		__builtin_memset( &TMP$476$2, 0, 24ll );
		FBSTRING* vr$111 = fb_StrConcat( &TMP$476$2, (void*)vr$108, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$477$2, 0, 24ll );
		FBSTRING* vr$114 = fb_StrConcat( &TMP$477$2, (void*)vr$111, -1ll, (void*)&AUX$1, -1ll );
		FBSTRING* vr$116 = fb_StrAssign( (void*)&TMP$478$2, -1ll, (void*)vr$114, -1ll, 0 );
		OUTP( *(uint8**)&TMP$478$2 );
		fb_StrDelete( &TMP$478$2 );
		HPREPOPERAND( TEMPVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
		__builtin_memset( &TMP$484$2, 0, 24ll );
		__builtin_memset( &TMP$480$2, 0, 24ll );
		FBSTRING* vr$121 = fb_StrConcat( &TMP$480$2, (void*)"mul", 4ll, (void*)&SUFFIX$1, -1ll );
		__builtin_memset( &TMP$481$2, 0, 24ll );
		FBSTRING* vr$124 = fb_StrConcat( &TMP$481$2, (void*)vr$121, -1ll, (void*)"xmm7", 5ll );
		__builtin_memset( &TMP$482$2, 0, 24ll );
		FBSTRING* vr$127 = fb_StrConcat( &TMP$482$2, (void*)vr$124, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$483$2, 0, 24ll );
		FBSTRING* vr$130 = fb_StrConcat( &TMP$483$2, (void*)vr$127, -1ll, (void*)&SRC$1, -1ll );
		FBSTRING* vr$132 = fb_StrAssign( (void*)&TMP$484$2, -1ll, (void*)vr$130, -1ll, 0 );
		OUTP( *(uint8**)&TMP$484$2 );
		fb_StrDelete( &TMP$484$2 );
		__builtin_memset( &TMP$490$2, 0, 24ll );
		__builtin_memset( &TMP$486$2, 0, 24ll );
		FBSTRING* vr$137 = fb_StrConcat( &TMP$486$2, (void*)"add", 4ll, (void*)&SUFFIX$1, -1ll );
		__builtin_memset( &TMP$487$2, 0, 24ll );
		FBSTRING* vr$140 = fb_StrConcat( &TMP$487$2, (void*)vr$137, -1ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$488$2, 0, 24ll );
		FBSTRING* vr$143 = fb_StrConcat( &TMP$488$2, (void*)vr$140, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$489$2, 0, 24ll );
		FBSTRING* vr$146 = fb_StrConcat( &TMP$489$2, (void*)vr$143, -1ll, (void*)"xmm7", 5ll );
		FBSTRING* vr$148 = fb_StrAssign( (void*)&TMP$490$2, -1ll, (void*)vr$146, -1ll, 0 );
		OUTP( *(uint8**)&TMP$490$2 );
		fb_StrDelete( &TMP$490$2 );
		if( ISFREE$1 != 0ll ) goto label$204;
		{
			HPOP( *(uint8**)&AUX$1 );
		}
		label$204:;
		label$203:;
		goto label$193;
	}
	label$198:;
	label$197:;
	if( ((int64)-(*(int64*)SVREG$1 != 0ll) & (int64)-(SDSIZE$1 == 4ll)) == 0ll ) goto label$206;
	{
		ISFREE$1 = -1ll;
		FBSTRING* vr$156 = fb_StrAssign( (void*)&AUX$1, -1ll, (void*)&SRC$1, -1ll, 0 );
	}
	goto label$205;
	label$206:;
	{
		int64 vr$157 = HFINDREGNOTINVREG( SVREG$1, 0ll );
		REG$1 = vr$157;
		uint8* vr$158 = HGETREGNAME( 7ll, REG$1 );
		fb_StrAssign( (void*)&AUX$1, -1ll, (void*)vr$158, 0ll, 0 );
		int64 vr$159 = HISREGFREE( 0ll, REG$1 );
		ISFREE$1 = vr$159;
		if( ISFREE$1 != 0ll ) goto label$208;
		{
			HPUSH( *(uint8**)&AUX$1 );
		}
		label$208:;
		label$207:;
		if( ((int64)-(*(int64*)SVREG$1 == 0ll) | (int64)-(SDSIZE$1 == 4ll)) == 0ll ) goto label$210;
		{
			FBSTRING TMP$491$3;
			FBSTRING TMP$492$3;
			FBSTRING TMP$493$3;
			FBSTRING TMP$494$3;
			__builtin_memset( &TMP$494$3, 0, 24ll );
			__builtin_memset( &TMP$491$3, 0, 24ll );
			FBSTRING* vr$169 = fb_StrConcat( &TMP$491$3, (void*)"mov ", 5ll, (void*)&AUX$1, -1ll );
			__builtin_memset( &TMP$492$3, 0, 24ll );
			FBSTRING* vr$172 = fb_StrConcat( &TMP$492$3, (void*)vr$169, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$493$3, 0, 24ll );
			FBSTRING* vr$175 = fb_StrConcat( &TMP$493$3, (void*)vr$172, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$177 = fb_StrAssign( (void*)&TMP$494$3, -1ll, (void*)vr$175, -1ll, 0 );
			OUTP( *(uint8**)&TMP$494$3 );
			fb_StrDelete( &TMP$494$3 );
		}
		goto label$209;
		label$210:;
		{
			int64 TMP$495$3;
			if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$211;
			TMP$495$3 = 22ll;
			goto label$764;
			label$211:;
			TMP$495$3 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
			label$764:;
			if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$495$3 * 56ll)) + 16ll) == 0ll ) goto label$213;
			{
				FBSTRING TMP$496$4;
				FBSTRING TMP$497$4;
				FBSTRING TMP$498$4;
				FBSTRING TMP$499$4;
				__builtin_memset( &TMP$499$4, 0, 24ll );
				__builtin_memset( &TMP$496$4, 0, 24ll );
				FBSTRING* vr$189 = fb_StrConcat( &TMP$496$4, (void*)"movsx ", 7ll, (void*)&AUX$1, -1ll );
				__builtin_memset( &TMP$497$4, 0, 24ll );
				FBSTRING* vr$192 = fb_StrConcat( &TMP$497$4, (void*)vr$189, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$498$4, 0, 24ll );
				FBSTRING* vr$195 = fb_StrConcat( &TMP$498$4, (void*)vr$192, -1ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$197 = fb_StrAssign( (void*)&TMP$499$4, -1ll, (void*)vr$195, -1ll, 0 );
				OUTP( *(uint8**)&TMP$499$4 );
				fb_StrDelete( &TMP$499$4 );
			}
			goto label$212;
			label$213:;
			{
				FBSTRING TMP$500$4;
				FBSTRING TMP$501$4;
				FBSTRING TMP$502$4;
				FBSTRING TMP$503$4;
				__builtin_memset( &TMP$503$4, 0, 24ll );
				__builtin_memset( &TMP$500$4, 0, 24ll );
				FBSTRING* vr$202 = fb_StrConcat( &TMP$500$4, (void*)"movzx ", 7ll, (void*)&AUX$1, -1ll );
				__builtin_memset( &TMP$501$4, 0, 24ll );
				FBSTRING* vr$205 = fb_StrConcat( &TMP$501$4, (void*)vr$202, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$502$4, 0, 24ll );
				FBSTRING* vr$208 = fb_StrConcat( &TMP$502$4, (void*)vr$205, -1ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$210 = fb_StrAssign( (void*)&TMP$503$4, -1ll, (void*)vr$208, -1ll, 0 );
				OUTP( *(uint8**)&TMP$503$4 );
				fb_StrDelete( &TMP$503$4 );
			}
			label$212:;
		}
		label$209:;
	}
	label$205:;
	if( DDSIZE$1 <= 4ll ) goto label$215;
	{
		FBSTRING TMP$505$2;
		FBSTRING TMP$506$2;
		FBSTRING TMP$507$2;
		FBSTRING TMP$508$2;
		__builtin_memset( &TMP$508$2, 0, 24ll );
		__builtin_memset( &TMP$505$2, 0, 24ll );
		FBSTRING* vr$216 = fb_StrConcat( &TMP$505$2, (void*)"cvtsi2sd ", 10ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$506$2, 0, 24ll );
		FBSTRING* vr$219 = fb_StrConcat( &TMP$506$2, (void*)vr$216, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$507$2, 0, 24ll );
		FBSTRING* vr$222 = fb_StrConcat( &TMP$507$2, (void*)vr$219, -1ll, (void*)&AUX$1, -1ll );
		FBSTRING* vr$224 = fb_StrAssign( (void*)&TMP$508$2, -1ll, (void*)vr$222, -1ll, 0 );
		OUTP( *(uint8**)&TMP$508$2 );
		fb_StrDelete( &TMP$508$2 );
	}
	goto label$214;
	label$215:;
	{
		FBSTRING TMP$510$2;
		FBSTRING TMP$511$2;
		FBSTRING TMP$512$2;
		FBSTRING TMP$513$2;
		__builtin_memset( &TMP$513$2, 0, 24ll );
		__builtin_memset( &TMP$510$2, 0, 24ll );
		FBSTRING* vr$229 = fb_StrConcat( &TMP$510$2, (void*)"cvtsi2ss ", 10ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$511$2, 0, 24ll );
		FBSTRING* vr$232 = fb_StrConcat( &TMP$511$2, (void*)vr$229, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$512$2, 0, 24ll );
		FBSTRING* vr$235 = fb_StrConcat( &TMP$512$2, (void*)vr$232, -1ll, (void*)&AUX$1, -1ll );
		FBSTRING* vr$237 = fb_StrAssign( (void*)&TMP$513$2, -1ll, (void*)vr$235, -1ll, 0 );
		OUTP( *(uint8**)&TMP$513$2 );
		fb_StrDelete( &TMP$513$2 );
	}
	label$214:;
	if( ISFREE$1 != 0ll ) goto label$217;
	{
		HPOP( *(uint8**)&AUX$1 );
	}
	label$217:;
	label$216:;
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 1ll ) goto label$219;
	{
		goto label$193;
		label$219:;
	}
	__builtin_memset( &TMP$515$1, 0, 24ll );
	FBSTRING* vr$243 = fb_LongintToStr( DDSIZE$1 );
	__builtin_memset( &TMP$514$1, 0, 24ll );
	FBSTRING* vr$246 = fb_StrConcat( &TMP$514$1, (void*)"sub esp, ", 10ll, (void*)vr$243, -1ll );
	FBSTRING* vr$248 = fb_StrAssign( (void*)&TMP$515$1, -1ll, (void*)vr$246, -1ll, 0 );
	OUTP( *(uint8**)&TMP$515$1 );
	fb_StrDelete( &TMP$515$1 );
	if( DDSIZE$1 <= 4ll ) goto label$221;
	{
		FBSTRING TMP$518$2;
		FBSTRING TMP$519$2;
		__builtin_memset( &TMP$519$2, 0, 24ll );
		__builtin_memset( &TMP$518$2, 0, 24ll );
		FBSTRING* vr$254 = fb_StrConcat( &TMP$518$2, (void*)"movlpd [esp], ", 15ll, (void*)&DST$1, -1ll );
		FBSTRING* vr$256 = fb_StrAssign( (void*)&TMP$519$2, -1ll, (void*)vr$254, -1ll, 0 );
		OUTP( *(uint8**)&TMP$519$2 );
		fb_StrDelete( &TMP$519$2 );
		OUTP( (uint8*)"fld qword ptr [esp]" );
	}
	goto label$220;
	label$221:;
	{
		FBSTRING TMP$522$2;
		FBSTRING TMP$523$2;
		__builtin_memset( &TMP$523$2, 0, 24ll );
		__builtin_memset( &TMP$522$2, 0, 24ll );
		FBSTRING* vr$261 = fb_StrConcat( &TMP$522$2, (void*)"movss [esp], ", 14ll, (void*)&DST$1, -1ll );
		FBSTRING* vr$263 = fb_StrAssign( (void*)&TMP$523$2, -1ll, (void*)vr$261, -1ll, 0 );
		OUTP( *(uint8**)&TMP$523$2 );
		fb_StrDelete( &TMP$523$2 );
		OUTP( (uint8*)"fld dword ptr [esp]" );
	}
	label$220:;
	__builtin_memset( &TMP$525$1, 0, 24ll );
	FBSTRING* vr$266 = fb_LongintToStr( DDSIZE$1 );
	__builtin_memset( &TMP$524$1, 0, 24ll );
	FBSTRING* vr$269 = fb_StrConcat( &TMP$524$1, (void*)"add esp, ", 10ll, (void*)vr$266, -1ll );
	FBSTRING* vr$271 = fb_StrAssign( (void*)&TMP$525$1, -1ll, (void*)vr$269, -1ll, 0 );
	OUTP( *(uint8**)&TMP$525$1 );
	fb_StrDelete( &TMP$525$1 );
	label$193:;
}

static void _EMITLOADF2F_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$528$1;
	int64 TMP$529$1;
	label$222:;
	static FBSTRING SRC$1;
	static FBSTRING DST$1;
	static int64 SDSIZE$1;
	static int64 DDSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, 0ll );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$225;
	{
		FBSTRING TMP$526$2;
		FBSTRING TMP$527$2;
		HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
		__builtin_memset( &TMP$527$2, 0, 24ll );
		__builtin_memset( &TMP$526$2, 0, 24ll );
		FBSTRING* vr$5 = fb_StrConcat( &TMP$526$2, (void*)"fld ", 5ll, (void*)&SRC$1, -1ll );
		FBSTRING* vr$7 = fb_StrAssign( (void*)&TMP$527$2, -1ll, (void*)vr$5, -1ll, 0 );
		OUTP( *(uint8**)&TMP$527$2 );
		fb_StrDelete( &TMP$527$2 );
		goto label$223;
	}
	label$225:;
	label$224:;
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, 0ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$226;
	TMP$528$1 = 22ll;
	goto label$765;
	label$226:;
	TMP$528$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$765:;
	SDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$528$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$227;
	TMP$529$1 = 22ll;
	goto label$766;
	label$227:;
	TMP$529$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$766:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$529$1 * 56ll)) + 8ll);
	if( SDSIZE$1 != DDSIZE$1 ) goto label$229;
	{
		if( *(int64*)((uint8*)SVREG$1 + 40ll) == 0ll ) goto label$231;
		{
			HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, 0ll );
			if( DDSIZE$1 <= 4ll ) goto label$233;
			{
				FBSTRING TMP$530$4;
				FBSTRING TMP$531$4;
				FBSTRING TMP$532$4;
				FBSTRING TMP$533$4;
				__builtin_memset( &TMP$533$4, 0, 24ll );
				__builtin_memset( &TMP$530$4, 0, 24ll );
				FBSTRING* vr$28 = fb_StrConcat( &TMP$530$4, (void*)"movupd ", 8ll, (void*)&DST$1, -1ll );
				__builtin_memset( &TMP$531$4, 0, 24ll );
				FBSTRING* vr$31 = fb_StrConcat( &TMP$531$4, (void*)vr$28, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$532$4, 0, 24ll );
				FBSTRING* vr$34 = fb_StrConcat( &TMP$532$4, (void*)vr$31, -1ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$36 = fb_StrAssign( (void*)&TMP$533$4, -1ll, (void*)vr$34, -1ll, 0 );
				OUTP( *(uint8**)&TMP$533$4 );
				fb_StrDelete( &TMP$533$4 );
			}
			goto label$232;
			label$233:;
			{
				if( *(int64*)((uint8*)SVREG$1 + 40ll) != 2ll ) goto label$235;
				{
					FBSTRING TMP$534$5;
					FBSTRING TMP$535$5;
					FBSTRING TMP$536$5;
					FBSTRING TMP$537$5;
					__builtin_memset( &TMP$537$5, 0, 24ll );
					__builtin_memset( &TMP$534$5, 0, 24ll );
					FBSTRING* vr$43 = fb_StrConcat( &TMP$534$5, (void*)"movlps ", 8ll, (void*)&DST$1, -1ll );
					__builtin_memset( &TMP$535$5, 0, 24ll );
					FBSTRING* vr$46 = fb_StrConcat( &TMP$535$5, (void*)vr$43, -1ll, (void*)", ", 3ll );
					__builtin_memset( &TMP$536$5, 0, 24ll );
					FBSTRING* vr$49 = fb_StrConcat( &TMP$536$5, (void*)vr$46, -1ll, (void*)&SRC$1, -1ll );
					FBSTRING* vr$51 = fb_StrAssign( (void*)&TMP$537$5, -1ll, (void*)vr$49, -1ll, 0 );
					OUTP( *(uint8**)&TMP$537$5 );
					fb_StrDelete( &TMP$537$5 );
				}
				goto label$234;
				label$235:;
				{
					FBSTRING TMP$538$5;
					FBSTRING TMP$539$5;
					FBSTRING TMP$540$5;
					FBSTRING TMP$541$5;
					__builtin_memset( &TMP$541$5, 0, 24ll );
					__builtin_memset( &TMP$538$5, 0, 24ll );
					FBSTRING* vr$56 = fb_StrConcat( &TMP$538$5, (void*)"movups ", 8ll, (void*)&DST$1, -1ll );
					__builtin_memset( &TMP$539$5, 0, 24ll );
					FBSTRING* vr$59 = fb_StrConcat( &TMP$539$5, (void*)vr$56, -1ll, (void*)", ", 3ll );
					__builtin_memset( &TMP$540$5, 0, 24ll );
					FBSTRING* vr$62 = fb_StrConcat( &TMP$540$5, (void*)vr$59, -1ll, (void*)&SRC$1, -1ll );
					FBSTRING* vr$64 = fb_StrAssign( (void*)&TMP$541$5, -1ll, (void*)vr$62, -1ll, 0 );
					OUTP( *(uint8**)&TMP$541$5 );
					fb_StrDelete( &TMP$541$5 );
				}
				label$234:;
			}
			label$232:;
			goto label$223;
		}
		label$231:;
		label$230:;
		if( DDSIZE$1 <= 4ll ) goto label$237;
		{
			FBSTRING TMP$542$3;
			FBSTRING TMP$543$3;
			FBSTRING TMP$544$3;
			FBSTRING TMP$545$3;
			__builtin_memset( &TMP$545$3, 0, 24ll );
			__builtin_memset( &TMP$542$3, 0, 24ll );
			FBSTRING* vr$70 = fb_StrConcat( &TMP$542$3, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$543$3, 0, 24ll );
			FBSTRING* vr$73 = fb_StrConcat( &TMP$543$3, (void*)vr$70, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$544$3, 0, 24ll );
			FBSTRING* vr$76 = fb_StrConcat( &TMP$544$3, (void*)vr$73, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$78 = fb_StrAssign( (void*)&TMP$545$3, -1ll, (void*)vr$76, -1ll, 0 );
			OUTP( *(uint8**)&TMP$545$3 );
			fb_StrDelete( &TMP$545$3 );
		}
		goto label$236;
		label$237:;
		{
			FBSTRING TMP$546$3;
			FBSTRING TMP$547$3;
			FBSTRING TMP$548$3;
			FBSTRING TMP$549$3;
			__builtin_memset( &TMP$549$3, 0, 24ll );
			__builtin_memset( &TMP$546$3, 0, 24ll );
			FBSTRING* vr$83 = fb_StrConcat( &TMP$546$3, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$547$3, 0, 24ll );
			FBSTRING* vr$86 = fb_StrConcat( &TMP$547$3, (void*)vr$83, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$548$3, 0, 24ll );
			FBSTRING* vr$89 = fb_StrConcat( &TMP$548$3, (void*)vr$86, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$91 = fb_StrAssign( (void*)&TMP$549$3, -1ll, (void*)vr$89, -1ll, 0 );
			OUTP( *(uint8**)&TMP$549$3 );
			fb_StrDelete( &TMP$549$3 );
		}
		label$236:;
	}
	goto label$228;
	label$229:;
	if( SDSIZE$1 <= 4ll ) goto label$238;
	{
		if( *(int64*)((uint8*)SVREG$1 + 40ll) == 0ll ) goto label$240;
		{
			FBSTRING TMP$551$3;
			FBSTRING TMP$552$3;
			FBSTRING TMP$553$3;
			FBSTRING TMP$554$3;
			__builtin_memset( &TMP$554$3, 0, 24ll );
			__builtin_memset( &TMP$551$3, 0, 24ll );
			FBSTRING* vr$99 = fb_StrConcat( &TMP$551$3, (void*)"cvtpd2ps ", 10ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$552$3, 0, 24ll );
			FBSTRING* vr$102 = fb_StrConcat( &TMP$552$3, (void*)vr$99, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$553$3, 0, 24ll );
			FBSTRING* vr$105 = fb_StrConcat( &TMP$553$3, (void*)vr$102, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$107 = fb_StrAssign( (void*)&TMP$554$3, -1ll, (void*)vr$105, -1ll, 0 );
			OUTP( *(uint8**)&TMP$554$3 );
			fb_StrDelete( &TMP$554$3 );
		}
		goto label$239;
		label$240:;
		{
			FBSTRING TMP$555$3;
			FBSTRING TMP$556$3;
			FBSTRING TMP$557$3;
			FBSTRING TMP$558$3;
			__builtin_memset( &TMP$558$3, 0, 24ll );
			__builtin_memset( &TMP$555$3, 0, 24ll );
			FBSTRING* vr$112 = fb_StrConcat( &TMP$555$3, (void*)"cvtsd2ss ", 10ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$556$3, 0, 24ll );
			FBSTRING* vr$115 = fb_StrConcat( &TMP$556$3, (void*)vr$112, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$557$3, 0, 24ll );
			FBSTRING* vr$118 = fb_StrConcat( &TMP$557$3, (void*)vr$115, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$120 = fb_StrAssign( (void*)&TMP$558$3, -1ll, (void*)vr$118, -1ll, 0 );
			OUTP( *(uint8**)&TMP$558$3 );
			fb_StrDelete( &TMP$558$3 );
		}
		label$239:;
	}
	goto label$228;
	label$238:;
	{
		if( *(int64*)((uint8*)SVREG$1 + 40ll) == 0ll ) goto label$242;
		{
			FBSTRING TMP$560$3;
			FBSTRING TMP$561$3;
			FBSTRING TMP$562$3;
			FBSTRING TMP$563$3;
			__builtin_memset( &TMP$563$3, 0, 24ll );
			__builtin_memset( &TMP$560$3, 0, 24ll );
			FBSTRING* vr$127 = fb_StrConcat( &TMP$560$3, (void*)"cvtps2pd ", 10ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$561$3, 0, 24ll );
			FBSTRING* vr$130 = fb_StrConcat( &TMP$561$3, (void*)vr$127, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$562$3, 0, 24ll );
			FBSTRING* vr$133 = fb_StrConcat( &TMP$562$3, (void*)vr$130, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$135 = fb_StrAssign( (void*)&TMP$563$3, -1ll, (void*)vr$133, -1ll, 0 );
			OUTP( *(uint8**)&TMP$563$3 );
			fb_StrDelete( &TMP$563$3 );
		}
		goto label$241;
		label$242:;
		{
			FBSTRING TMP$564$3;
			FBSTRING TMP$565$3;
			FBSTRING TMP$566$3;
			FBSTRING TMP$567$3;
			__builtin_memset( &TMP$567$3, 0, 24ll );
			__builtin_memset( &TMP$564$3, 0, 24ll );
			FBSTRING* vr$140 = fb_StrConcat( &TMP$564$3, (void*)"cvtss2sd ", 10ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$565$3, 0, 24ll );
			FBSTRING* vr$143 = fb_StrConcat( &TMP$565$3, (void*)vr$140, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$566$3, 0, 24ll );
			FBSTRING* vr$146 = fb_StrConcat( &TMP$566$3, (void*)vr$143, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$148 = fb_StrAssign( (void*)&TMP$567$3, -1ll, (void*)vr$146, -1ll, 0 );
			OUTP( *(uint8**)&TMP$567$3 );
			fb_StrDelete( &TMP$567$3 );
		}
		label$241:;
	}
	label$228:;
	label$223:;
}

static void _EMITMOVF_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$568$1;
	int64 TMP$569$1;
	label$243:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 SDSIZE$1;
	static int64 DDSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, 0ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, 0ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$245;
	TMP$568$1 = 22ll;
	goto label$767;
	label$245:;
	TMP$568$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$767:;
	SDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$568$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$246;
	TMP$569$1 = 22ll;
	goto label$768;
	label$246:;
	TMP$569$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$768:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$569$1 * 56ll)) + 8ll);
	if( ((int64)-(SDSIZE$1 > 4ll) & (int64)-(DDSIZE$1 <= 4ll)) == 0ll ) goto label$248;
	{
		if( *(int64*)((uint8*)SVREG$1 + 40ll) == 0ll ) goto label$250;
		{
			FBSTRING TMP$570$3;
			FBSTRING TMP$571$3;
			FBSTRING TMP$572$3;
			FBSTRING TMP$573$3;
			__builtin_memset( &TMP$573$3, 0, 24ll );
			__builtin_memset( &TMP$570$3, 0, 24ll );
			FBSTRING* vr$21 = fb_StrConcat( &TMP$570$3, (void*)"cvtpd2ps ", 10ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$571$3, 0, 24ll );
			FBSTRING* vr$24 = fb_StrConcat( &TMP$571$3, (void*)vr$21, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$572$3, 0, 24ll );
			FBSTRING* vr$27 = fb_StrConcat( &TMP$572$3, (void*)vr$24, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$29 = fb_StrAssign( (void*)&TMP$573$3, -1ll, (void*)vr$27, -1ll, 0 );
			OUTP( *(uint8**)&TMP$573$3 );
			fb_StrDelete( &TMP$573$3 );
		}
		goto label$249;
		label$250:;
		{
			FBSTRING TMP$574$3;
			FBSTRING TMP$575$3;
			FBSTRING TMP$576$3;
			FBSTRING TMP$577$3;
			__builtin_memset( &TMP$577$3, 0, 24ll );
			__builtin_memset( &TMP$574$3, 0, 24ll );
			FBSTRING* vr$34 = fb_StrConcat( &TMP$574$3, (void*)"cvtsd2ss ", 10ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$575$3, 0, 24ll );
			FBSTRING* vr$37 = fb_StrConcat( &TMP$575$3, (void*)vr$34, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$576$3, 0, 24ll );
			FBSTRING* vr$40 = fb_StrConcat( &TMP$576$3, (void*)vr$37, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$42 = fb_StrAssign( (void*)&TMP$577$3, -1ll, (void*)vr$40, -1ll, 0 );
			OUTP( *(uint8**)&TMP$577$3 );
			fb_StrDelete( &TMP$577$3 );
		}
		label$249:;
	}
	goto label$247;
	label$248:;
	if( ((int64)-(DDSIZE$1 > 4ll) & (int64)-(SDSIZE$1 <= 4ll)) == 0ll ) goto label$251;
	{
		if( *(int64*)((uint8*)SVREG$1 + 40ll) == 0ll ) goto label$253;
		{
			FBSTRING TMP$578$3;
			FBSTRING TMP$579$3;
			FBSTRING TMP$580$3;
			FBSTRING TMP$581$3;
			__builtin_memset( &TMP$581$3, 0, 24ll );
			__builtin_memset( &TMP$578$3, 0, 24ll );
			FBSTRING* vr$53 = fb_StrConcat( &TMP$578$3, (void*)"cvtps2pd ", 10ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$579$3, 0, 24ll );
			FBSTRING* vr$56 = fb_StrConcat( &TMP$579$3, (void*)vr$53, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$580$3, 0, 24ll );
			FBSTRING* vr$59 = fb_StrConcat( &TMP$580$3, (void*)vr$56, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$61 = fb_StrAssign( (void*)&TMP$581$3, -1ll, (void*)vr$59, -1ll, 0 );
			OUTP( *(uint8**)&TMP$581$3 );
			fb_StrDelete( &TMP$581$3 );
		}
		goto label$252;
		label$253:;
		{
			FBSTRING TMP$582$3;
			FBSTRING TMP$583$3;
			FBSTRING TMP$584$3;
			FBSTRING TMP$585$3;
			__builtin_memset( &TMP$585$3, 0, 24ll );
			__builtin_memset( &TMP$582$3, 0, 24ll );
			FBSTRING* vr$66 = fb_StrConcat( &TMP$582$3, (void*)"cvtss2sd ", 10ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$583$3, 0, 24ll );
			FBSTRING* vr$69 = fb_StrConcat( &TMP$583$3, (void*)vr$66, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$584$3, 0, 24ll );
			FBSTRING* vr$72 = fb_StrConcat( &TMP$584$3, (void*)vr$69, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$74 = fb_StrAssign( (void*)&TMP$585$3, -1ll, (void*)vr$72, -1ll, 0 );
			OUTP( *(uint8**)&TMP$585$3 );
			fb_StrDelete( &TMP$585$3 );
		}
		label$252:;
	}
	goto label$247;
	label$251:;
	{
		FBSTRING TMP$587$2;
		FBSTRING TMP$588$2;
		FBSTRING TMP$589$2;
		FBSTRING TMP$590$2;
		__builtin_memset( &TMP$590$2, 0, 24ll );
		__builtin_memset( &TMP$587$2, 0, 24ll );
		FBSTRING* vr$79 = fb_StrConcat( &TMP$587$2, (void*)"movaps ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$588$2, 0, 24ll );
		FBSTRING* vr$82 = fb_StrConcat( &TMP$588$2, (void*)vr$79, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$589$2, 0, 24ll );
		FBSTRING* vr$85 = fb_StrConcat( &TMP$589$2, (void*)vr$82, -1ll, (void*)&SRC$1, -1ll );
		FBSTRING* vr$87 = fb_StrAssign( (void*)&TMP$590$2, -1ll, (void*)vr$85, -1ll, 0 );
		OUTP( *(uint8**)&TMP$590$2 );
		fb_StrDelete( &TMP$590$2 );
	}
	label$247:;
	label$244:;
}

static void _EMITSWZREPF_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$591$1;
	label$254:;
	static FBSTRING DST$1;
	static int64 DDSIZE$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$256;
	TMP$591$1 = 22ll;
	goto label$769;
	label$256:;
	TMP$591$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$769:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$591$1 * 56ll)) + 8ll);
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( DDSIZE$1 <= 4ll ) goto label$258;
	{
		FBSTRING TMP$593$2;
		FBSTRING TMP$594$2;
		FBSTRING TMP$595$2;
		FBSTRING TMP$596$2;
		__builtin_memset( &TMP$596$2, 0, 24ll );
		__builtin_memset( &TMP$593$2, 0, 24ll );
		FBSTRING* vr$10 = fb_StrConcat( &TMP$593$2, (void*)"unpcklpd ", 10ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$594$2, 0, 24ll );
		FBSTRING* vr$13 = fb_StrConcat( &TMP$594$2, (void*)vr$10, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$595$2, 0, 24ll );
		FBSTRING* vr$16 = fb_StrConcat( &TMP$595$2, (void*)vr$13, -1ll, (void*)&DST$1, -1ll );
		FBSTRING* vr$18 = fb_StrAssign( (void*)&TMP$596$2, -1ll, (void*)vr$16, -1ll, 0 );
		OUTP( *(uint8**)&TMP$596$2 );
		fb_StrDelete( &TMP$596$2 );
	}
	goto label$257;
	label$258:;
	{
		if( *(int64*)((uint8*)DVREG$1 + 40ll) != 2ll ) goto label$260;
		{
			FBSTRING TMP$598$3;
			FBSTRING TMP$599$3;
			FBSTRING TMP$600$3;
			FBSTRING TMP$601$3;
			__builtin_memset( &TMP$601$3, 0, 24ll );
			__builtin_memset( &TMP$598$3, 0, 24ll );
			FBSTRING* vr$25 = fb_StrConcat( &TMP$598$3, (void*)"unpcklps ", 10ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$599$3, 0, 24ll );
			FBSTRING* vr$28 = fb_StrConcat( &TMP$599$3, (void*)vr$25, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$600$3, 0, 24ll );
			FBSTRING* vr$31 = fb_StrConcat( &TMP$600$3, (void*)vr$28, -1ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$33 = fb_StrAssign( (void*)&TMP$601$3, -1ll, (void*)vr$31, -1ll, 0 );
			OUTP( *(uint8**)&TMP$601$3 );
			fb_StrDelete( &TMP$601$3 );
		}
		goto label$259;
		label$260:;
		{
			FBSTRING TMP$604$3;
			FBSTRING TMP$605$3;
			FBSTRING TMP$606$3;
			FBSTRING TMP$607$3;
			FBSTRING TMP$608$3;
			FBSTRING TMP$609$3;
			__builtin_memset( &TMP$609$3, 0, 24ll );
			__builtin_memset( &TMP$604$3, 0, 24ll );
			FBSTRING* vr$38 = fb_StrConcat( &TMP$604$3, (void*)"shufps ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$605$3, 0, 24ll );
			FBSTRING* vr$41 = fb_StrConcat( &TMP$605$3, (void*)vr$38, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$606$3, 0, 24ll );
			FBSTRING* vr$44 = fb_StrConcat( &TMP$606$3, (void*)vr$41, -1ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$607$3, 0, 24ll );
			FBSTRING* vr$47 = fb_StrConcat( &TMP$607$3, (void*)vr$44, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$608$3, 0, 24ll );
			FBSTRING* vr$50 = fb_StrConcat( &TMP$608$3, (void*)vr$47, -1ll, (void*)"0x0", 4ll );
			FBSTRING* vr$52 = fb_StrAssign( (void*)&TMP$609$3, -1ll, (void*)vr$50, -1ll, 0 );
			OUTP( *(uint8**)&TMP$609$3 );
			fb_StrDelete( &TMP$609$3 );
		}
		label$259:;
	}
	label$257:;
	label$255:;
}

static int64 HEMITCONVERTOPERANDS_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$610$1;
	int64 TMP$611$1;
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$261:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	static int64 SDSIZE$1;
	static int64 DDSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$263;
	TMP$610$1 = 22ll;
	goto label$770;
	label$263:;
	TMP$610$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$770:;
	SDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$610$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$264;
	TMP$611$1 = 22ll;
	goto label$771;
	label$264:;
	TMP$611$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$771:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$611$1 * 56ll)) + 8ll);
	fb$result$1 = 0ll;
	if( DDSIZE$1 <= 4ll ) goto label$266;
	{
		if( SDSIZE$1 != 4ll ) goto label$268;
		{
			if( *(int64*)((uint8*)SVREG$1 + 40ll) == 0ll ) goto label$270;
			{
				FBSTRING TMP$612$4;
				FBSTRING TMP$613$4;
				__builtin_memset( &TMP$613$4, 0, 24ll );
				__builtin_memset( &TMP$612$4, 0, 24ll );
				FBSTRING* vr$20 = fb_StrConcat( &TMP$612$4, (void*)"cvtps2pd xmm7, ", 16ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$22 = fb_StrAssign( (void*)&TMP$613$4, -1ll, (void*)vr$20, -1ll, 0 );
				OUTP( *(uint8**)&TMP$613$4 );
				fb_StrDelete( &TMP$613$4 );
			}
			goto label$269;
			label$270:;
			{
				FBSTRING TMP$614$4;
				FBSTRING TMP$615$4;
				__builtin_memset( &TMP$615$4, 0, 24ll );
				__builtin_memset( &TMP$614$4, 0, 24ll );
				FBSTRING* vr$27 = fb_StrConcat( &TMP$614$4, (void*)"cvtss2sd xmm7, ", 16ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$29 = fb_StrAssign( (void*)&TMP$615$4, -1ll, (void*)vr$27, -1ll, 0 );
				OUTP( *(uint8**)&TMP$615$4 );
				fb_StrDelete( &TMP$615$4 );
			}
			label$269:;
			fb$result$1 = -1ll;
		}
		label$268:;
		label$267:;
	}
	goto label$265;
	label$266:;
	{
		if( SDSIZE$1 <= 4ll ) goto label$272;
		{
			if( *(int64*)((uint8*)SVREG$1 + 40ll) == 0ll ) goto label$274;
			{
				FBSTRING TMP$616$4;
				FBSTRING TMP$617$4;
				__builtin_memset( &TMP$617$4, 0, 24ll );
				__builtin_memset( &TMP$616$4, 0, 24ll );
				FBSTRING* vr$37 = fb_StrConcat( &TMP$616$4, (void*)"cvtpd2ps xmm7, ", 16ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$39 = fb_StrAssign( (void*)&TMP$617$4, -1ll, (void*)vr$37, -1ll, 0 );
				OUTP( *(uint8**)&TMP$617$4 );
				fb_StrDelete( &TMP$617$4 );
			}
			goto label$273;
			label$274:;
			{
				FBSTRING TMP$618$4;
				FBSTRING TMP$619$4;
				__builtin_memset( &TMP$619$4, 0, 24ll );
				__builtin_memset( &TMP$618$4, 0, 24ll );
				FBSTRING* vr$44 = fb_StrConcat( &TMP$618$4, (void*)"cvtsd2ss xmm7, ", 16ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$46 = fb_StrAssign( (void*)&TMP$619$4, -1ll, (void*)vr$44, -1ll, 0 );
				OUTP( *(uint8**)&TMP$619$4 );
				fb_StrDelete( &TMP$619$4 );
			}
			label$273:;
			fb$result$1 = -1ll;
		}
		label$272:;
		label$271:;
	}
	label$265:;
	label$262:;
	return fb$result$1;
}

static void _EMITADDF_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$620$1;
	int64 TMP$621$1;
	int64 TMP$642$1;
	label$275:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	static int64 SDSIZE$1;
	static int64 DDSIZE$1;
	static int64 RETURNSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$277;
	TMP$620$1 = 22ll;
	goto label$772;
	label$277:;
	TMP$620$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$772:;
	SDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$620$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$278;
	TMP$621$1 = 22ll;
	goto label$773;
	label$278:;
	TMP$621$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$773:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$621$1 * 56ll)) + 8ll);
	RETURNSIZE$1 = 0ll;
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$280;
	{
		FBSTRING* vr$14 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		RETURNSIZE$1 = DDSIZE$1;
	}
	goto label$279;
	label$280:;
	if( *(int64*)((uint8*)SVREG$1 + 32ll) != 0ll ) goto label$281;
	{
		FBSTRING* vr$17 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		RETURNSIZE$1 = SDSIZE$1;
	}
	label$281:;
	label$279:;
	if( RETURNSIZE$1 == 0ll ) goto label$283;
	{
		FBSTRING TMP$622$2;
		FBSTRING TMP$623$2;
		__builtin_memset( &TMP$623$2, 0, 24ll );
		FBSTRING* vr$20 = fb_LongintToStr( RETURNSIZE$1 );
		__builtin_memset( &TMP$622$2, 0, 24ll );
		FBSTRING* vr$23 = fb_StrConcat( &TMP$622$2, (void*)"sub esp, ", 10ll, (void*)vr$20, -1ll );
		FBSTRING* vr$25 = fb_StrAssign( (void*)&TMP$623$2, -1ll, (void*)vr$23, -1ll, 0 );
		OUTP( *(uint8**)&TMP$623$2 );
		fb_StrDelete( &TMP$623$2 );
	}
	label$283:;
	label$282:;
	if( RETURNSIZE$1 != 8ll ) goto label$285;
	{
		FBSTRING TMP$624$2;
		FBSTRING TMP$625$2;
		FBSTRING TMP$626$2;
		FBSTRING TMP$627$2;
		OUTP( (uint8*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$627$2, 0, 24ll );
		__builtin_memset( &TMP$624$2, 0, 24ll );
		FBSTRING* vr$31 = fb_StrConcat( &TMP$624$2, (void*)"movlpd ", 8ll, (void*)&OSTR$1, -1ll );
		__builtin_memset( &TMP$625$2, 0, 24ll );
		FBSTRING* vr$34 = fb_StrConcat( &TMP$625$2, (void*)vr$31, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$626$2, 0, 24ll );
		FBSTRING* vr$37 = fb_StrConcat( &TMP$626$2, (void*)vr$34, -1ll, (void*)"qword ptr [esp]", 16ll );
		FBSTRING* vr$39 = fb_StrAssign( (void*)&TMP$627$2, -1ll, (void*)vr$37, -1ll, 0 );
		OUTP( *(uint8**)&TMP$627$2 );
		fb_StrDelete( &TMP$627$2 );
	}
	goto label$284;
	label$285:;
	if( RETURNSIZE$1 != 4ll ) goto label$286;
	{
		FBSTRING TMP$628$2;
		FBSTRING TMP$629$2;
		FBSTRING TMP$630$2;
		FBSTRING TMP$631$2;
		OUTP( (uint8*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$631$2, 0, 24ll );
		__builtin_memset( &TMP$628$2, 0, 24ll );
		FBSTRING* vr$45 = fb_StrConcat( &TMP$628$2, (void*)"movss ", 7ll, (void*)&OSTR$1, -1ll );
		__builtin_memset( &TMP$629$2, 0, 24ll );
		FBSTRING* vr$48 = fb_StrConcat( &TMP$629$2, (void*)vr$45, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$630$2, 0, 24ll );
		FBSTRING* vr$51 = fb_StrConcat( &TMP$630$2, (void*)vr$48, -1ll, (void*)"dword ptr [esp]", 16ll );
		FBSTRING* vr$53 = fb_StrAssign( (void*)&TMP$631$2, -1ll, (void*)vr$51, -1ll, 0 );
		OUTP( *(uint8**)&TMP$631$2 );
		fb_StrDelete( &TMP$631$2 );
	}
	label$286:;
	label$284:;
	if( RETURNSIZE$1 == 0ll ) goto label$288;
	{
		FBSTRING TMP$632$2;
		FBSTRING TMP$633$2;
		__builtin_memset( &TMP$633$2, 0, 24ll );
		FBSTRING* vr$57 = fb_LongintToStr( RETURNSIZE$1 );
		__builtin_memset( &TMP$632$2, 0, 24ll );
		FBSTRING* vr$60 = fb_StrConcat( &TMP$632$2, (void*)"add esp, ", 10ll, (void*)vr$57, -1ll );
		FBSTRING* vr$62 = fb_StrAssign( (void*)&TMP$633$2, -1ll, (void*)vr$60, -1ll, 0 );
		OUTP( *(uint8**)&TMP$633$2 );
		fb_StrDelete( &TMP$633$2 );
	}
	label$288:;
	label$287:;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"adds", 5ll, 0 );
	if( *(int64*)((uint8*)SVREG$1 + 40ll) == 0ll ) goto label$290;
	{
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"addp", 5ll, 0 );
		if( *(int64*)SVREG$1 == 4ll ) goto label$292;
		{
			HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, 0ll );
			if( SDSIZE$1 <= 4ll ) goto label$294;
			{
				FBSTRING TMP$636$4;
				FBSTRING TMP$637$4;
				__builtin_memset( &TMP$637$4, 0, 24ll );
				__builtin_memset( &TMP$636$4, 0, 24ll );
				FBSTRING* vr$72 = fb_StrConcat( &TMP$636$4, (void*)"movupd xmm7, ", 14ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$74 = fb_StrAssign( (void*)&TMP$637$4, -1ll, (void*)vr$72, -1ll, 0 );
				OUTP( *(uint8**)&TMP$637$4 );
				fb_StrDelete( &TMP$637$4 );
			}
			goto label$293;
			label$294:;
			{
				if( *(int64*)((uint8*)SVREG$1 + 40ll) != 2ll ) goto label$296;
				{
					FBSTRING TMP$638$5;
					FBSTRING TMP$639$5;
					__builtin_memset( &TMP$639$5, 0, 24ll );
					__builtin_memset( &TMP$638$5, 0, 24ll );
					FBSTRING* vr$81 = fb_StrConcat( &TMP$638$5, (void*)"movlps xmm7, ", 14ll, (void*)&SRC$1, -1ll );
					FBSTRING* vr$83 = fb_StrAssign( (void*)&TMP$639$5, -1ll, (void*)vr$81, -1ll, 0 );
					OUTP( *(uint8**)&TMP$639$5 );
					fb_StrDelete( &TMP$639$5 );
				}
				goto label$295;
				label$296:;
				{
					FBSTRING TMP$640$5;
					FBSTRING TMP$641$5;
					__builtin_memset( &TMP$641$5, 0, 24ll );
					__builtin_memset( &TMP$640$5, 0, 24ll );
					FBSTRING* vr$88 = fb_StrConcat( &TMP$640$5, (void*)"movups xmm7, ", 14ll, (void*)&SRC$1, -1ll );
					FBSTRING* vr$90 = fb_StrAssign( (void*)&TMP$641$5, -1ll, (void*)vr$88, -1ll, 0 );
					OUTP( *(uint8**)&TMP$641$5 );
					fb_StrDelete( &TMP$641$5 );
				}
				label$295:;
			}
			label$293:;
			fb_StrAssign( (void*)&SRC$1, -1ll, (void*)"xmm7", 5ll, 0 );
		}
		label$292:;
		label$291:;
	}
	label$290:;
	label$289:;
	int64 vr$92 = HEMITCONVERTOPERANDS_SSE( DVREG$1, SVREG$1 );
	if( vr$92 == 0ll ) goto label$298;
	{
		fb_StrAssign( (void*)&SRC$1, -1ll, (void*)"xmm7", 5ll, 0 );
	}
	label$298:;
	label$297:;
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$299;
	TMP$642$1 = 22ll;
	goto label$774;
	label$299:;
	TMP$642$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$774:;
	if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$642$1 * 56ll)) != 1ll ) goto label$301;
	{
		if( DDSIZE$1 <= 4ll ) goto label$303;
		{
			FBSTRING TMP$644$3;
			FBSTRING TMP$645$3;
			FBSTRING TMP$646$3;
			FBSTRING TMP$647$3;
			FBSTRING TMP$648$3;
			__builtin_memset( &TMP$648$3, 0, 24ll );
			__builtin_memset( &TMP$644$3, 0, 24ll );
			FBSTRING* vr$105 = fb_StrConcat( &TMP$644$3, (void*)&OSTR$1, -1ll, (void*)"d ", 3ll );
			__builtin_memset( &TMP$645$3, 0, 24ll );
			FBSTRING* vr$108 = fb_StrConcat( &TMP$645$3, (void*)vr$105, -1ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$646$3, 0, 24ll );
			FBSTRING* vr$111 = fb_StrConcat( &TMP$646$3, (void*)vr$108, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$647$3, 0, 24ll );
			FBSTRING* vr$114 = fb_StrConcat( &TMP$647$3, (void*)vr$111, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$116 = fb_StrAssign( (void*)&TMP$648$3, -1ll, (void*)vr$114, -1ll, 0 );
			OUTP( *(uint8**)&TMP$648$3 );
			fb_StrDelete( &TMP$648$3 );
		}
		goto label$302;
		label$303:;
		{
			FBSTRING TMP$650$3;
			FBSTRING TMP$651$3;
			FBSTRING TMP$652$3;
			FBSTRING TMP$653$3;
			FBSTRING TMP$654$3;
			__builtin_memset( &TMP$654$3, 0, 24ll );
			__builtin_memset( &TMP$650$3, 0, 24ll );
			FBSTRING* vr$121 = fb_StrConcat( &TMP$650$3, (void*)&OSTR$1, -1ll, (void*)"s ", 3ll );
			__builtin_memset( &TMP$651$3, 0, 24ll );
			FBSTRING* vr$124 = fb_StrConcat( &TMP$651$3, (void*)vr$121, -1ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$652$3, 0, 24ll );
			FBSTRING* vr$127 = fb_StrConcat( &TMP$652$3, (void*)vr$124, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$653$3, 0, 24ll );
			FBSTRING* vr$130 = fb_StrConcat( &TMP$653$3, (void*)vr$127, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$132 = fb_StrAssign( (void*)&TMP$654$3, -1ll, (void*)vr$130, -1ll, 0 );
			OUTP( *(uint8**)&TMP$654$3 );
			fb_StrDelete( &TMP$654$3 );
		}
		label$302:;
	}
	goto label$300;
	label$301:;
	{
		OUTP( (uint8*)" implement 'add integer to float'" );
	}
	label$300:;
	label$276:;
}

static void _EMITSUBF_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$656$1;
	int64 TMP$657$1;
	int64 TMP$678$1;
	label$304:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	static int64 SDSIZE$1;
	static int64 DDSIZE$1;
	static int64 RETURNSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$306;
	TMP$656$1 = 22ll;
	goto label$775;
	label$306:;
	TMP$656$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$775:;
	SDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$656$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$307;
	TMP$657$1 = 22ll;
	goto label$776;
	label$307:;
	TMP$657$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$776:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$657$1 * 56ll)) + 8ll);
	RETURNSIZE$1 = 0ll;
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$309;
	{
		FBSTRING* vr$14 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		RETURNSIZE$1 = DDSIZE$1;
	}
	goto label$308;
	label$309:;
	if( *(int64*)((uint8*)SVREG$1 + 32ll) != 0ll ) goto label$310;
	{
		FBSTRING* vr$17 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		RETURNSIZE$1 = SDSIZE$1;
	}
	label$310:;
	label$308:;
	if( RETURNSIZE$1 == 0ll ) goto label$312;
	{
		FBSTRING TMP$658$2;
		FBSTRING TMP$659$2;
		__builtin_memset( &TMP$659$2, 0, 24ll );
		FBSTRING* vr$20 = fb_LongintToStr( RETURNSIZE$1 );
		__builtin_memset( &TMP$658$2, 0, 24ll );
		FBSTRING* vr$23 = fb_StrConcat( &TMP$658$2, (void*)"sub esp, ", 10ll, (void*)vr$20, -1ll );
		FBSTRING* vr$25 = fb_StrAssign( (void*)&TMP$659$2, -1ll, (void*)vr$23, -1ll, 0 );
		OUTP( *(uint8**)&TMP$659$2 );
		fb_StrDelete( &TMP$659$2 );
	}
	label$312:;
	label$311:;
	if( RETURNSIZE$1 != 8ll ) goto label$314;
	{
		FBSTRING TMP$660$2;
		FBSTRING TMP$661$2;
		FBSTRING TMP$662$2;
		FBSTRING TMP$663$2;
		OUTP( (uint8*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$663$2, 0, 24ll );
		__builtin_memset( &TMP$660$2, 0, 24ll );
		FBSTRING* vr$31 = fb_StrConcat( &TMP$660$2, (void*)"movlpd ", 8ll, (void*)&OSTR$1, -1ll );
		__builtin_memset( &TMP$661$2, 0, 24ll );
		FBSTRING* vr$34 = fb_StrConcat( &TMP$661$2, (void*)vr$31, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$662$2, 0, 24ll );
		FBSTRING* vr$37 = fb_StrConcat( &TMP$662$2, (void*)vr$34, -1ll, (void*)"qword ptr [esp]", 16ll );
		FBSTRING* vr$39 = fb_StrAssign( (void*)&TMP$663$2, -1ll, (void*)vr$37, -1ll, 0 );
		OUTP( *(uint8**)&TMP$663$2 );
		fb_StrDelete( &TMP$663$2 );
	}
	goto label$313;
	label$314:;
	if( RETURNSIZE$1 != 4ll ) goto label$315;
	{
		FBSTRING TMP$664$2;
		FBSTRING TMP$665$2;
		FBSTRING TMP$666$2;
		FBSTRING TMP$667$2;
		OUTP( (uint8*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$667$2, 0, 24ll );
		__builtin_memset( &TMP$664$2, 0, 24ll );
		FBSTRING* vr$45 = fb_StrConcat( &TMP$664$2, (void*)"movss ", 7ll, (void*)&OSTR$1, -1ll );
		__builtin_memset( &TMP$665$2, 0, 24ll );
		FBSTRING* vr$48 = fb_StrConcat( &TMP$665$2, (void*)vr$45, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$666$2, 0, 24ll );
		FBSTRING* vr$51 = fb_StrConcat( &TMP$666$2, (void*)vr$48, -1ll, (void*)"dword ptr [esp]", 16ll );
		FBSTRING* vr$53 = fb_StrAssign( (void*)&TMP$667$2, -1ll, (void*)vr$51, -1ll, 0 );
		OUTP( *(uint8**)&TMP$667$2 );
		fb_StrDelete( &TMP$667$2 );
	}
	label$315:;
	label$313:;
	if( RETURNSIZE$1 == 0ll ) goto label$317;
	{
		FBSTRING TMP$668$2;
		FBSTRING TMP$669$2;
		__builtin_memset( &TMP$669$2, 0, 24ll );
		FBSTRING* vr$57 = fb_LongintToStr( RETURNSIZE$1 );
		__builtin_memset( &TMP$668$2, 0, 24ll );
		FBSTRING* vr$60 = fb_StrConcat( &TMP$668$2, (void*)"add esp, ", 10ll, (void*)vr$57, -1ll );
		FBSTRING* vr$62 = fb_StrAssign( (void*)&TMP$669$2, -1ll, (void*)vr$60, -1ll, 0 );
		OUTP( *(uint8**)&TMP$669$2 );
		fb_StrDelete( &TMP$669$2 );
	}
	label$317:;
	label$316:;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"subs", 5ll, 0 );
	if( *(int64*)((uint8*)SVREG$1 + 40ll) == 0ll ) goto label$319;
	{
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"subp", 5ll, 0 );
		if( *(int64*)SVREG$1 == 4ll ) goto label$321;
		{
			HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, 0ll );
			if( SDSIZE$1 <= 4ll ) goto label$323;
			{
				FBSTRING TMP$672$4;
				FBSTRING TMP$673$4;
				__builtin_memset( &TMP$673$4, 0, 24ll );
				__builtin_memset( &TMP$672$4, 0, 24ll );
				FBSTRING* vr$72 = fb_StrConcat( &TMP$672$4, (void*)"movupd xmm7, ", 14ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$74 = fb_StrAssign( (void*)&TMP$673$4, -1ll, (void*)vr$72, -1ll, 0 );
				OUTP( *(uint8**)&TMP$673$4 );
				fb_StrDelete( &TMP$673$4 );
			}
			goto label$322;
			label$323:;
			{
				if( *(int64*)((uint8*)SVREG$1 + 40ll) != 2ll ) goto label$325;
				{
					FBSTRING TMP$674$5;
					FBSTRING TMP$675$5;
					__builtin_memset( &TMP$675$5, 0, 24ll );
					__builtin_memset( &TMP$674$5, 0, 24ll );
					FBSTRING* vr$81 = fb_StrConcat( &TMP$674$5, (void*)"movlps xmm7, ", 14ll, (void*)&SRC$1, -1ll );
					FBSTRING* vr$83 = fb_StrAssign( (void*)&TMP$675$5, -1ll, (void*)vr$81, -1ll, 0 );
					OUTP( *(uint8**)&TMP$675$5 );
					fb_StrDelete( &TMP$675$5 );
				}
				goto label$324;
				label$325:;
				{
					FBSTRING TMP$676$5;
					FBSTRING TMP$677$5;
					__builtin_memset( &TMP$677$5, 0, 24ll );
					__builtin_memset( &TMP$676$5, 0, 24ll );
					FBSTRING* vr$88 = fb_StrConcat( &TMP$676$5, (void*)"movups xmm7, ", 14ll, (void*)&SRC$1, -1ll );
					FBSTRING* vr$90 = fb_StrAssign( (void*)&TMP$677$5, -1ll, (void*)vr$88, -1ll, 0 );
					OUTP( *(uint8**)&TMP$677$5 );
					fb_StrDelete( &TMP$677$5 );
				}
				label$324:;
			}
			label$322:;
			fb_StrAssign( (void*)&SRC$1, -1ll, (void*)"xmm7", 5ll, 0 );
		}
		label$321:;
		label$320:;
	}
	label$319:;
	label$318:;
	int64 vr$92 = HEMITCONVERTOPERANDS_SSE( DVREG$1, SVREG$1 );
	if( vr$92 == 0ll ) goto label$327;
	{
		fb_StrAssign( (void*)&SRC$1, -1ll, (void*)"xmm7", 5ll, 0 );
	}
	label$327:;
	label$326:;
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$328;
	TMP$678$1 = 22ll;
	goto label$777;
	label$328:;
	TMP$678$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$777:;
	if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$678$1 * 56ll)) != 1ll ) goto label$330;
	{
		if( DDSIZE$1 <= 4ll ) goto label$332;
		{
			FBSTRING TMP$679$3;
			FBSTRING TMP$680$3;
			FBSTRING TMP$681$3;
			FBSTRING TMP$682$3;
			FBSTRING TMP$683$3;
			__builtin_memset( &TMP$683$3, 0, 24ll );
			__builtin_memset( &TMP$679$3, 0, 24ll );
			FBSTRING* vr$105 = fb_StrConcat( &TMP$679$3, (void*)&OSTR$1, -1ll, (void*)"d ", 3ll );
			__builtin_memset( &TMP$680$3, 0, 24ll );
			FBSTRING* vr$108 = fb_StrConcat( &TMP$680$3, (void*)vr$105, -1ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$681$3, 0, 24ll );
			FBSTRING* vr$111 = fb_StrConcat( &TMP$681$3, (void*)vr$108, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$682$3, 0, 24ll );
			FBSTRING* vr$114 = fb_StrConcat( &TMP$682$3, (void*)vr$111, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$116 = fb_StrAssign( (void*)&TMP$683$3, -1ll, (void*)vr$114, -1ll, 0 );
			OUTP( *(uint8**)&TMP$683$3 );
			fb_StrDelete( &TMP$683$3 );
		}
		goto label$331;
		label$332:;
		{
			FBSTRING TMP$684$3;
			FBSTRING TMP$685$3;
			FBSTRING TMP$686$3;
			FBSTRING TMP$687$3;
			FBSTRING TMP$688$3;
			__builtin_memset( &TMP$688$3, 0, 24ll );
			__builtin_memset( &TMP$684$3, 0, 24ll );
			FBSTRING* vr$121 = fb_StrConcat( &TMP$684$3, (void*)&OSTR$1, -1ll, (void*)"s ", 3ll );
			__builtin_memset( &TMP$685$3, 0, 24ll );
			FBSTRING* vr$124 = fb_StrConcat( &TMP$685$3, (void*)vr$121, -1ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$686$3, 0, 24ll );
			FBSTRING* vr$127 = fb_StrConcat( &TMP$686$3, (void*)vr$124, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$687$3, 0, 24ll );
			FBSTRING* vr$130 = fb_StrConcat( &TMP$687$3, (void*)vr$127, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$132 = fb_StrAssign( (void*)&TMP$688$3, -1ll, (void*)vr$130, -1ll, 0 );
			OUTP( *(uint8**)&TMP$688$3 );
			fb_StrDelete( &TMP$688$3 );
		}
		label$331:;
	}
	goto label$329;
	label$330:;
	{
		OUTP( (uint8*)" implement 'subtract integer from float'" );
	}
	label$329:;
	label$305:;
}

static void _EMITMULF_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$690$1;
	int64 TMP$691$1;
	int64 TMP$712$1;
	label$333:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	static int64 SDSIZE$1;
	static int64 DDSIZE$1;
	static int64 RETURNSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$335;
	TMP$690$1 = 22ll;
	goto label$778;
	label$335:;
	TMP$690$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$778:;
	SDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$690$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$336;
	TMP$691$1 = 22ll;
	goto label$779;
	label$336:;
	TMP$691$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$779:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$691$1 * 56ll)) + 8ll);
	RETURNSIZE$1 = 0ll;
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$338;
	{
		FBSTRING* vr$14 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		RETURNSIZE$1 = DDSIZE$1;
	}
	goto label$337;
	label$338:;
	if( *(int64*)((uint8*)SVREG$1 + 32ll) != 0ll ) goto label$339;
	{
		FBSTRING* vr$17 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		RETURNSIZE$1 = SDSIZE$1;
	}
	label$339:;
	label$337:;
	if( RETURNSIZE$1 == 0ll ) goto label$341;
	{
		FBSTRING TMP$692$2;
		FBSTRING TMP$693$2;
		__builtin_memset( &TMP$693$2, 0, 24ll );
		FBSTRING* vr$20 = fb_LongintToStr( RETURNSIZE$1 );
		__builtin_memset( &TMP$692$2, 0, 24ll );
		FBSTRING* vr$23 = fb_StrConcat( &TMP$692$2, (void*)"sub esp, ", 10ll, (void*)vr$20, -1ll );
		FBSTRING* vr$25 = fb_StrAssign( (void*)&TMP$693$2, -1ll, (void*)vr$23, -1ll, 0 );
		OUTP( *(uint8**)&TMP$693$2 );
		fb_StrDelete( &TMP$693$2 );
	}
	label$341:;
	label$340:;
	if( RETURNSIZE$1 != 8ll ) goto label$343;
	{
		FBSTRING TMP$694$2;
		FBSTRING TMP$695$2;
		FBSTRING TMP$696$2;
		FBSTRING TMP$697$2;
		OUTP( (uint8*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$697$2, 0, 24ll );
		__builtin_memset( &TMP$694$2, 0, 24ll );
		FBSTRING* vr$31 = fb_StrConcat( &TMP$694$2, (void*)"movlpd ", 8ll, (void*)&OSTR$1, -1ll );
		__builtin_memset( &TMP$695$2, 0, 24ll );
		FBSTRING* vr$34 = fb_StrConcat( &TMP$695$2, (void*)vr$31, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$696$2, 0, 24ll );
		FBSTRING* vr$37 = fb_StrConcat( &TMP$696$2, (void*)vr$34, -1ll, (void*)"qword ptr [esp]", 16ll );
		FBSTRING* vr$39 = fb_StrAssign( (void*)&TMP$697$2, -1ll, (void*)vr$37, -1ll, 0 );
		OUTP( *(uint8**)&TMP$697$2 );
		fb_StrDelete( &TMP$697$2 );
	}
	goto label$342;
	label$343:;
	if( RETURNSIZE$1 != 4ll ) goto label$344;
	{
		FBSTRING TMP$698$2;
		FBSTRING TMP$699$2;
		FBSTRING TMP$700$2;
		FBSTRING TMP$701$2;
		OUTP( (uint8*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$701$2, 0, 24ll );
		__builtin_memset( &TMP$698$2, 0, 24ll );
		FBSTRING* vr$45 = fb_StrConcat( &TMP$698$2, (void*)"movss ", 7ll, (void*)&OSTR$1, -1ll );
		__builtin_memset( &TMP$699$2, 0, 24ll );
		FBSTRING* vr$48 = fb_StrConcat( &TMP$699$2, (void*)vr$45, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$700$2, 0, 24ll );
		FBSTRING* vr$51 = fb_StrConcat( &TMP$700$2, (void*)vr$48, -1ll, (void*)"dword ptr [esp]", 16ll );
		FBSTRING* vr$53 = fb_StrAssign( (void*)&TMP$701$2, -1ll, (void*)vr$51, -1ll, 0 );
		OUTP( *(uint8**)&TMP$701$2 );
		fb_StrDelete( &TMP$701$2 );
	}
	label$344:;
	label$342:;
	if( RETURNSIZE$1 == 0ll ) goto label$346;
	{
		FBSTRING TMP$702$2;
		FBSTRING TMP$703$2;
		__builtin_memset( &TMP$703$2, 0, 24ll );
		FBSTRING* vr$57 = fb_LongintToStr( RETURNSIZE$1 );
		__builtin_memset( &TMP$702$2, 0, 24ll );
		FBSTRING* vr$60 = fb_StrConcat( &TMP$702$2, (void*)"add esp, ", 10ll, (void*)vr$57, -1ll );
		FBSTRING* vr$62 = fb_StrAssign( (void*)&TMP$703$2, -1ll, (void*)vr$60, -1ll, 0 );
		OUTP( *(uint8**)&TMP$703$2 );
		fb_StrDelete( &TMP$703$2 );
	}
	label$346:;
	label$345:;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"muls", 5ll, 0 );
	if( *(int64*)((uint8*)SVREG$1 + 40ll) == 0ll ) goto label$348;
	{
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mulp", 5ll, 0 );
		if( *(int64*)SVREG$1 == 4ll ) goto label$350;
		{
			HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, 0ll );
			if( SDSIZE$1 <= 4ll ) goto label$352;
			{
				FBSTRING TMP$706$4;
				FBSTRING TMP$707$4;
				__builtin_memset( &TMP$707$4, 0, 24ll );
				__builtin_memset( &TMP$706$4, 0, 24ll );
				FBSTRING* vr$72 = fb_StrConcat( &TMP$706$4, (void*)"movupd xmm7, ", 14ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$74 = fb_StrAssign( (void*)&TMP$707$4, -1ll, (void*)vr$72, -1ll, 0 );
				OUTP( *(uint8**)&TMP$707$4 );
				fb_StrDelete( &TMP$707$4 );
			}
			goto label$351;
			label$352:;
			{
				if( *(int64*)((uint8*)SVREG$1 + 40ll) != 2ll ) goto label$354;
				{
					FBSTRING TMP$708$5;
					FBSTRING TMP$709$5;
					__builtin_memset( &TMP$709$5, 0, 24ll );
					__builtin_memset( &TMP$708$5, 0, 24ll );
					FBSTRING* vr$81 = fb_StrConcat( &TMP$708$5, (void*)"movlps xmm7, ", 14ll, (void*)&SRC$1, -1ll );
					FBSTRING* vr$83 = fb_StrAssign( (void*)&TMP$709$5, -1ll, (void*)vr$81, -1ll, 0 );
					OUTP( *(uint8**)&TMP$709$5 );
					fb_StrDelete( &TMP$709$5 );
				}
				goto label$353;
				label$354:;
				{
					FBSTRING TMP$710$5;
					FBSTRING TMP$711$5;
					__builtin_memset( &TMP$711$5, 0, 24ll );
					__builtin_memset( &TMP$710$5, 0, 24ll );
					FBSTRING* vr$88 = fb_StrConcat( &TMP$710$5, (void*)"movups xmm7, ", 14ll, (void*)&SRC$1, -1ll );
					FBSTRING* vr$90 = fb_StrAssign( (void*)&TMP$711$5, -1ll, (void*)vr$88, -1ll, 0 );
					OUTP( *(uint8**)&TMP$711$5 );
					fb_StrDelete( &TMP$711$5 );
				}
				label$353:;
			}
			label$351:;
			fb_StrAssign( (void*)&SRC$1, -1ll, (void*)"xmm7", 5ll, 0 );
		}
		label$350:;
		label$349:;
	}
	label$348:;
	label$347:;
	int64 vr$92 = HEMITCONVERTOPERANDS_SSE( DVREG$1, SVREG$1 );
	if( vr$92 == 0ll ) goto label$356;
	{
		fb_StrAssign( (void*)&SRC$1, -1ll, (void*)"xmm7", 5ll, 0 );
	}
	label$356:;
	label$355:;
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$357;
	TMP$712$1 = 22ll;
	goto label$780;
	label$357:;
	TMP$712$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$780:;
	if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$712$1 * 56ll)) != 1ll ) goto label$359;
	{
		if( DDSIZE$1 <= 4ll ) goto label$361;
		{
			FBSTRING TMP$713$3;
			FBSTRING TMP$714$3;
			FBSTRING TMP$715$3;
			FBSTRING TMP$716$3;
			FBSTRING TMP$717$3;
			__builtin_memset( &TMP$717$3, 0, 24ll );
			__builtin_memset( &TMP$713$3, 0, 24ll );
			FBSTRING* vr$105 = fb_StrConcat( &TMP$713$3, (void*)&OSTR$1, -1ll, (void*)"d ", 3ll );
			__builtin_memset( &TMP$714$3, 0, 24ll );
			FBSTRING* vr$108 = fb_StrConcat( &TMP$714$3, (void*)vr$105, -1ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$715$3, 0, 24ll );
			FBSTRING* vr$111 = fb_StrConcat( &TMP$715$3, (void*)vr$108, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$716$3, 0, 24ll );
			FBSTRING* vr$114 = fb_StrConcat( &TMP$716$3, (void*)vr$111, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$116 = fb_StrAssign( (void*)&TMP$717$3, -1ll, (void*)vr$114, -1ll, 0 );
			OUTP( *(uint8**)&TMP$717$3 );
			fb_StrDelete( &TMP$717$3 );
		}
		goto label$360;
		label$361:;
		{
			FBSTRING TMP$718$3;
			FBSTRING TMP$719$3;
			FBSTRING TMP$720$3;
			FBSTRING TMP$721$3;
			FBSTRING TMP$722$3;
			__builtin_memset( &TMP$722$3, 0, 24ll );
			__builtin_memset( &TMP$718$3, 0, 24ll );
			FBSTRING* vr$121 = fb_StrConcat( &TMP$718$3, (void*)&OSTR$1, -1ll, (void*)"s ", 3ll );
			__builtin_memset( &TMP$719$3, 0, 24ll );
			FBSTRING* vr$124 = fb_StrConcat( &TMP$719$3, (void*)vr$121, -1ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$720$3, 0, 24ll );
			FBSTRING* vr$127 = fb_StrConcat( &TMP$720$3, (void*)vr$124, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$721$3, 0, 24ll );
			FBSTRING* vr$130 = fb_StrConcat( &TMP$721$3, (void*)vr$127, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$132 = fb_StrAssign( (void*)&TMP$722$3, -1ll, (void*)vr$130, -1ll, 0 );
			OUTP( *(uint8**)&TMP$722$3 );
			fb_StrDelete( &TMP$722$3 );
		}
		label$360:;
	}
	goto label$358;
	label$359:;
	{
		OUTP( (uint8*)" implement 'multiply float by integer'" );
	}
	label$358:;
	label$334:;
}

static void _EMITDIVF_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$724$1;
	int64 TMP$725$1;
	int64 TMP$746$1;
	label$362:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	static int64 SDSIZE$1;
	static int64 DDSIZE$1;
	static int64 RETURNSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$364;
	TMP$724$1 = 22ll;
	goto label$781;
	label$364:;
	TMP$724$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$781:;
	SDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$724$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$365;
	TMP$725$1 = 22ll;
	goto label$782;
	label$365:;
	TMP$725$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$782:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$725$1 * 56ll)) + 8ll);
	RETURNSIZE$1 = 0ll;
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$367;
	{
		FBSTRING* vr$14 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		RETURNSIZE$1 = DDSIZE$1;
	}
	goto label$366;
	label$367:;
	if( *(int64*)((uint8*)SVREG$1 + 32ll) != 0ll ) goto label$368;
	{
		FBSTRING* vr$17 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		RETURNSIZE$1 = SDSIZE$1;
	}
	label$368:;
	label$366:;
	if( RETURNSIZE$1 == 0ll ) goto label$370;
	{
		FBSTRING TMP$726$2;
		FBSTRING TMP$727$2;
		__builtin_memset( &TMP$727$2, 0, 24ll );
		FBSTRING* vr$20 = fb_LongintToStr( RETURNSIZE$1 );
		__builtin_memset( &TMP$726$2, 0, 24ll );
		FBSTRING* vr$23 = fb_StrConcat( &TMP$726$2, (void*)"sub esp, ", 10ll, (void*)vr$20, -1ll );
		FBSTRING* vr$25 = fb_StrAssign( (void*)&TMP$727$2, -1ll, (void*)vr$23, -1ll, 0 );
		OUTP( *(uint8**)&TMP$727$2 );
		fb_StrDelete( &TMP$727$2 );
	}
	label$370:;
	label$369:;
	if( RETURNSIZE$1 != 8ll ) goto label$372;
	{
		FBSTRING TMP$728$2;
		FBSTRING TMP$729$2;
		FBSTRING TMP$730$2;
		FBSTRING TMP$731$2;
		OUTP( (uint8*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$731$2, 0, 24ll );
		__builtin_memset( &TMP$728$2, 0, 24ll );
		FBSTRING* vr$31 = fb_StrConcat( &TMP$728$2, (void*)"movlpd ", 8ll, (void*)&OSTR$1, -1ll );
		__builtin_memset( &TMP$729$2, 0, 24ll );
		FBSTRING* vr$34 = fb_StrConcat( &TMP$729$2, (void*)vr$31, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$730$2, 0, 24ll );
		FBSTRING* vr$37 = fb_StrConcat( &TMP$730$2, (void*)vr$34, -1ll, (void*)"qword ptr [esp]", 16ll );
		FBSTRING* vr$39 = fb_StrAssign( (void*)&TMP$731$2, -1ll, (void*)vr$37, -1ll, 0 );
		OUTP( *(uint8**)&TMP$731$2 );
		fb_StrDelete( &TMP$731$2 );
	}
	goto label$371;
	label$372:;
	if( RETURNSIZE$1 != 4ll ) goto label$373;
	{
		FBSTRING TMP$732$2;
		FBSTRING TMP$733$2;
		FBSTRING TMP$734$2;
		FBSTRING TMP$735$2;
		OUTP( (uint8*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$735$2, 0, 24ll );
		__builtin_memset( &TMP$732$2, 0, 24ll );
		FBSTRING* vr$45 = fb_StrConcat( &TMP$732$2, (void*)"movss ", 7ll, (void*)&OSTR$1, -1ll );
		__builtin_memset( &TMP$733$2, 0, 24ll );
		FBSTRING* vr$48 = fb_StrConcat( &TMP$733$2, (void*)vr$45, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$734$2, 0, 24ll );
		FBSTRING* vr$51 = fb_StrConcat( &TMP$734$2, (void*)vr$48, -1ll, (void*)"dword ptr [esp]", 16ll );
		FBSTRING* vr$53 = fb_StrAssign( (void*)&TMP$735$2, -1ll, (void*)vr$51, -1ll, 0 );
		OUTP( *(uint8**)&TMP$735$2 );
		fb_StrDelete( &TMP$735$2 );
	}
	label$373:;
	label$371:;
	if( RETURNSIZE$1 == 0ll ) goto label$375;
	{
		FBSTRING TMP$736$2;
		FBSTRING TMP$737$2;
		__builtin_memset( &TMP$737$2, 0, 24ll );
		FBSTRING* vr$57 = fb_LongintToStr( RETURNSIZE$1 );
		__builtin_memset( &TMP$736$2, 0, 24ll );
		FBSTRING* vr$60 = fb_StrConcat( &TMP$736$2, (void*)"add esp, ", 10ll, (void*)vr$57, -1ll );
		FBSTRING* vr$62 = fb_StrAssign( (void*)&TMP$737$2, -1ll, (void*)vr$60, -1ll, 0 );
		OUTP( *(uint8**)&TMP$737$2 );
		fb_StrDelete( &TMP$737$2 );
	}
	label$375:;
	label$374:;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"divs", 5ll, 0 );
	if( *(int64*)((uint8*)SVREG$1 + 40ll) == 0ll ) goto label$377;
	{
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"divp", 5ll, 0 );
		if( *(int64*)SVREG$1 == 4ll ) goto label$379;
		{
			HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, 0ll );
			if( SDSIZE$1 <= 4ll ) goto label$381;
			{
				FBSTRING TMP$740$4;
				FBSTRING TMP$741$4;
				__builtin_memset( &TMP$741$4, 0, 24ll );
				__builtin_memset( &TMP$740$4, 0, 24ll );
				FBSTRING* vr$72 = fb_StrConcat( &TMP$740$4, (void*)"movupd xmm7, ", 14ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$74 = fb_StrAssign( (void*)&TMP$741$4, -1ll, (void*)vr$72, -1ll, 0 );
				OUTP( *(uint8**)&TMP$741$4 );
				fb_StrDelete( &TMP$741$4 );
			}
			goto label$380;
			label$381:;
			{
				if( *(int64*)((uint8*)SVREG$1 + 40ll) != 2ll ) goto label$383;
				{
					FBSTRING TMP$742$5;
					FBSTRING TMP$743$5;
					__builtin_memset( &TMP$743$5, 0, 24ll );
					__builtin_memset( &TMP$742$5, 0, 24ll );
					FBSTRING* vr$81 = fb_StrConcat( &TMP$742$5, (void*)"movlps xmm7, ", 14ll, (void*)&SRC$1, -1ll );
					FBSTRING* vr$83 = fb_StrAssign( (void*)&TMP$743$5, -1ll, (void*)vr$81, -1ll, 0 );
					OUTP( *(uint8**)&TMP$743$5 );
					fb_StrDelete( &TMP$743$5 );
				}
				goto label$382;
				label$383:;
				{
					FBSTRING TMP$744$5;
					FBSTRING TMP$745$5;
					__builtin_memset( &TMP$745$5, 0, 24ll );
					__builtin_memset( &TMP$744$5, 0, 24ll );
					FBSTRING* vr$88 = fb_StrConcat( &TMP$744$5, (void*)"movups xmm7, ", 14ll, (void*)&SRC$1, -1ll );
					FBSTRING* vr$90 = fb_StrAssign( (void*)&TMP$745$5, -1ll, (void*)vr$88, -1ll, 0 );
					OUTP( *(uint8**)&TMP$745$5 );
					fb_StrDelete( &TMP$745$5 );
				}
				label$382:;
			}
			label$380:;
			fb_StrAssign( (void*)&SRC$1, -1ll, (void*)"xmm7", 5ll, 0 );
		}
		label$379:;
		label$378:;
	}
	label$377:;
	label$376:;
	int64 vr$92 = HEMITCONVERTOPERANDS_SSE( DVREG$1, SVREG$1 );
	if( vr$92 == 0ll ) goto label$385;
	{
		fb_StrAssign( (void*)&SRC$1, -1ll, (void*)"xmm7", 5ll, 0 );
	}
	label$385:;
	label$384:;
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$386;
	TMP$746$1 = 22ll;
	goto label$783;
	label$386:;
	TMP$746$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$783:;
	if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$746$1 * 56ll)) != 1ll ) goto label$388;
	{
		if( DDSIZE$1 <= 4ll ) goto label$390;
		{
			FBSTRING TMP$747$3;
			FBSTRING TMP$748$3;
			FBSTRING TMP$749$3;
			FBSTRING TMP$750$3;
			FBSTRING TMP$751$3;
			__builtin_memset( &TMP$751$3, 0, 24ll );
			__builtin_memset( &TMP$747$3, 0, 24ll );
			FBSTRING* vr$105 = fb_StrConcat( &TMP$747$3, (void*)&OSTR$1, -1ll, (void*)"d ", 3ll );
			__builtin_memset( &TMP$748$3, 0, 24ll );
			FBSTRING* vr$108 = fb_StrConcat( &TMP$748$3, (void*)vr$105, -1ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$749$3, 0, 24ll );
			FBSTRING* vr$111 = fb_StrConcat( &TMP$749$3, (void*)vr$108, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$750$3, 0, 24ll );
			FBSTRING* vr$114 = fb_StrConcat( &TMP$750$3, (void*)vr$111, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$116 = fb_StrAssign( (void*)&TMP$751$3, -1ll, (void*)vr$114, -1ll, 0 );
			OUTP( *(uint8**)&TMP$751$3 );
			fb_StrDelete( &TMP$751$3 );
		}
		goto label$389;
		label$390:;
		{
			FBSTRING TMP$752$3;
			FBSTRING TMP$753$3;
			FBSTRING TMP$754$3;
			FBSTRING TMP$755$3;
			FBSTRING TMP$756$3;
			__builtin_memset( &TMP$756$3, 0, 24ll );
			__builtin_memset( &TMP$752$3, 0, 24ll );
			FBSTRING* vr$121 = fb_StrConcat( &TMP$752$3, (void*)&OSTR$1, -1ll, (void*)"s ", 3ll );
			__builtin_memset( &TMP$753$3, 0, 24ll );
			FBSTRING* vr$124 = fb_StrConcat( &TMP$753$3, (void*)vr$121, -1ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$754$3, 0, 24ll );
			FBSTRING* vr$127 = fb_StrConcat( &TMP$754$3, (void*)vr$124, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$755$3, 0, 24ll );
			FBSTRING* vr$130 = fb_StrConcat( &TMP$755$3, (void*)vr$127, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$132 = fb_StrAssign( (void*)&TMP$756$3, -1ll, (void*)vr$130, -1ll, 0 );
			OUTP( *(uint8**)&TMP$756$3 );
			fb_StrDelete( &TMP$756$3 );
		}
		label$389:;
	}
	goto label$387;
	label$388:;
	{
		OUTP( (uint8*)" implement 'divide float by integer'" );
	}
	label$387:;
	label$363:;
}

static void _EMITATN2_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$758$1;
	int64 TMP$759$1;
	label$391:;
	static FBSTRING SRC$1;
	static FBSTRING DST$1;
	static FBSTRING OSTR$1;
	static int64 SDSIZE$1;
	static int64 DDSIZE$1;
	static int64 ADJUSTSTACK$1;
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$393;
	TMP$758$1 = 22ll;
	goto label$784;
	label$393:;
	TMP$758$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$784:;
	SDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$758$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$394;
	TMP$759$1 = 22ll;
	goto label$785;
	label$394:;
	TMP$759$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$785:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$759$1 * 56ll)) + 8ll);
	ADJUSTSTACK$1 = 0ll;
	if( *(int64*)DVREG$1 != 4ll ) goto label$396;
	{
		OUTP( (uint8*)"sub esp, 8" );
		ADJUSTSTACK$1 = -1ll;
		if( DDSIZE$1 <= 4ll ) goto label$398;
		{
			FBSTRING TMP$760$3;
			FBSTRING TMP$761$3;
			__builtin_memset( &TMP$761$3, 0, 24ll );
			__builtin_memset( &TMP$760$3, 0, 24ll );
			FBSTRING* vr$18 = fb_StrConcat( &TMP$760$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$20 = fb_StrAssign( (void*)&TMP$761$3, -1ll, (void*)vr$18, -1ll, 0 );
			OUTP( *(uint8**)&TMP$761$3 );
			fb_StrDelete( &TMP$761$3 );
			OUTP( (uint8*)"fld qword ptr [esp]" );
		}
		goto label$397;
		label$398:;
		{
			FBSTRING TMP$762$3;
			FBSTRING TMP$763$3;
			__builtin_memset( &TMP$763$3, 0, 24ll );
			__builtin_memset( &TMP$762$3, 0, 24ll );
			FBSTRING* vr$25 = fb_StrConcat( &TMP$762$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$27 = fb_StrAssign( (void*)&TMP$763$3, -1ll, (void*)vr$25, -1ll, 0 );
			OUTP( *(uint8**)&TMP$763$3 );
			fb_StrDelete( &TMP$763$3 );
			OUTP( (uint8*)"fld dword ptr [esp]" );
		}
		label$397:;
	}
	goto label$395;
	label$396:;
	{
		FBSTRING TMP$764$2;
		FBSTRING TMP$765$2;
		__builtin_memset( &TMP$765$2, 0, 24ll );
		__builtin_memset( &TMP$764$2, 0, 24ll );
		FBSTRING* vr$32 = fb_StrConcat( &TMP$764$2, (void*)"fld ", 5ll, (void*)&DST$1, -1ll );
		FBSTRING* vr$34 = fb_StrAssign( (void*)&TMP$765$2, -1ll, (void*)vr$32, -1ll, 0 );
		OUTP( *(uint8**)&TMP$765$2 );
		fb_StrDelete( &TMP$765$2 );
	}
	label$395:;
	if( *(int64*)SVREG$1 != 4ll ) goto label$400;
	{
		if( ADJUSTSTACK$1 != 0ll ) goto label$402;
		{
			OUTP( (uint8*)"sub esp, 8" );
			ADJUSTSTACK$1 = -1ll;
		}
		label$402:;
		label$401:;
		if( SDSIZE$1 <= 4ll ) goto label$404;
		{
			FBSTRING TMP$766$3;
			FBSTRING TMP$767$3;
			__builtin_memset( &TMP$767$3, 0, 24ll );
			__builtin_memset( &TMP$766$3, 0, 24ll );
			FBSTRING* vr$43 = fb_StrConcat( &TMP$766$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$45 = fb_StrAssign( (void*)&TMP$767$3, -1ll, (void*)vr$43, -1ll, 0 );
			OUTP( *(uint8**)&TMP$767$3 );
			fb_StrDelete( &TMP$767$3 );
			OUTP( (uint8*)"fld qword ptr [esp]" );
		}
		goto label$403;
		label$404:;
		{
			FBSTRING TMP$768$3;
			FBSTRING TMP$769$3;
			__builtin_memset( &TMP$769$3, 0, 24ll );
			__builtin_memset( &TMP$768$3, 0, 24ll );
			FBSTRING* vr$50 = fb_StrConcat( &TMP$768$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$52 = fb_StrAssign( (void*)&TMP$769$3, -1ll, (void*)vr$50, -1ll, 0 );
			OUTP( *(uint8**)&TMP$769$3 );
			fb_StrDelete( &TMP$769$3 );
			OUTP( (uint8*)"fld dword ptr [esp]" );
		}
		label$403:;
	}
	goto label$399;
	label$400:;
	{
		FBSTRING TMP$770$2;
		FBSTRING TMP$771$2;
		__builtin_memset( &TMP$771$2, 0, 24ll );
		__builtin_memset( &TMP$770$2, 0, 24ll );
		FBSTRING* vr$57 = fb_StrConcat( &TMP$770$2, (void*)"fld ", 5ll, (void*)&SRC$1, -1ll );
		FBSTRING* vr$59 = fb_StrAssign( (void*)&TMP$771$2, -1ll, (void*)vr$57, -1ll, 0 );
		OUTP( *(uint8**)&TMP$771$2 );
		fb_StrDelete( &TMP$771$2 );
	}
	label$399:;
	OUTP( (uint8*)"fpatan" );
	if( DDSIZE$1 <= 4ll ) goto label$406;
	{
		FBSTRING TMP$773$2;
		FBSTRING TMP$774$2;
		FBSTRING TMP$775$2;
		FBSTRING TMP$776$2;
		OUTP( (uint8*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$776$2, 0, 24ll );
		__builtin_memset( &TMP$773$2, 0, 24ll );
		FBSTRING* vr$65 = fb_StrConcat( &TMP$773$2, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$774$2, 0, 24ll );
		FBSTRING* vr$68 = fb_StrConcat( &TMP$774$2, (void*)vr$65, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$775$2, 0, 24ll );
		FBSTRING* vr$71 = fb_StrConcat( &TMP$775$2, (void*)vr$68, -1ll, (void*)"qword ptr [esp]", 16ll );
		FBSTRING* vr$73 = fb_StrAssign( (void*)&TMP$776$2, -1ll, (void*)vr$71, -1ll, 0 );
		OUTP( *(uint8**)&TMP$776$2 );
		fb_StrDelete( &TMP$776$2 );
	}
	goto label$405;
	label$406:;
	{
		FBSTRING TMP$777$2;
		FBSTRING TMP$778$2;
		FBSTRING TMP$779$2;
		FBSTRING TMP$780$2;
		OUTP( (uint8*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$780$2, 0, 24ll );
		__builtin_memset( &TMP$777$2, 0, 24ll );
		FBSTRING* vr$78 = fb_StrConcat( &TMP$777$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$778$2, 0, 24ll );
		FBSTRING* vr$81 = fb_StrConcat( &TMP$778$2, (void*)vr$78, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$779$2, 0, 24ll );
		FBSTRING* vr$84 = fb_StrConcat( &TMP$779$2, (void*)vr$81, -1ll, (void*)"dword ptr [esp]", 16ll );
		FBSTRING* vr$86 = fb_StrAssign( (void*)&TMP$780$2, -1ll, (void*)vr$84, -1ll, 0 );
		OUTP( *(uint8**)&TMP$780$2 );
		fb_StrDelete( &TMP$780$2 );
	}
	label$405:;
	if( ADJUSTSTACK$1 == 0ll ) goto label$408;
	{
		OUTP( (uint8*)"add esp, 8" );
	}
	label$408:;
	label$407:;
	label$392:;
}

static void _EMITPOW_SSE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$409:;
	static FBSTRING SRC$1;
	static FBSTRING DST$1;
	static FBSTRING OSTR$1;
	static int64 SDSIZE$1;
	static int64 DDSIZE$1;
	static int64 ADJUSTSTACK$1;
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	ADJUSTSTACK$1 = 0ll;
	if( *(int64*)DVREG$1 != 4ll ) goto label$412;
	{
		OUTP( (uint8*)"sub esp, 8" );
		ADJUSTSTACK$1 = -1ll;
		if( DDSIZE$1 <= 4ll ) goto label$414;
		{
			FBSTRING TMP$781$3;
			FBSTRING TMP$782$3;
			__builtin_memset( &TMP$782$3, 0, 24ll );
			__builtin_memset( &TMP$781$3, 0, 24ll );
			FBSTRING* vr$6 = fb_StrConcat( &TMP$781$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$8 = fb_StrAssign( (void*)&TMP$782$3, -1ll, (void*)vr$6, -1ll, 0 );
			OUTP( *(uint8**)&TMP$782$3 );
			fb_StrDelete( &TMP$782$3 );
			OUTP( (uint8*)"fld qword ptr [esp]" );
		}
		goto label$413;
		label$414:;
		{
			FBSTRING TMP$783$3;
			FBSTRING TMP$784$3;
			__builtin_memset( &TMP$784$3, 0, 24ll );
			__builtin_memset( &TMP$783$3, 0, 24ll );
			FBSTRING* vr$13 = fb_StrConcat( &TMP$783$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$15 = fb_StrAssign( (void*)&TMP$784$3, -1ll, (void*)vr$13, -1ll, 0 );
			OUTP( *(uint8**)&TMP$784$3 );
			fb_StrDelete( &TMP$784$3 );
			OUTP( (uint8*)"fld dword ptr [esp]" );
		}
		label$413:;
	}
	goto label$411;
	label$412:;
	{
		FBSTRING TMP$785$2;
		FBSTRING TMP$786$2;
		__builtin_memset( &TMP$786$2, 0, 24ll );
		__builtin_memset( &TMP$785$2, 0, 24ll );
		FBSTRING* vr$20 = fb_StrConcat( &TMP$785$2, (void*)"fld ", 5ll, (void*)&DST$1, -1ll );
		FBSTRING* vr$22 = fb_StrAssign( (void*)&TMP$786$2, -1ll, (void*)vr$20, -1ll, 0 );
		OUTP( *(uint8**)&TMP$786$2 );
		fb_StrDelete( &TMP$786$2 );
	}
	label$411:;
	if( *(int64*)SVREG$1 != 4ll ) goto label$416;
	{
		if( ADJUSTSTACK$1 != 0ll ) goto label$418;
		{
			OUTP( (uint8*)"sub esp, 8" );
			ADJUSTSTACK$1 = -1ll;
		}
		label$418:;
		label$417:;
		if( SDSIZE$1 <= 4ll ) goto label$420;
		{
			FBSTRING TMP$787$3;
			FBSTRING TMP$788$3;
			__builtin_memset( &TMP$788$3, 0, 24ll );
			__builtin_memset( &TMP$787$3, 0, 24ll );
			FBSTRING* vr$31 = fb_StrConcat( &TMP$787$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$33 = fb_StrAssign( (void*)&TMP$788$3, -1ll, (void*)vr$31, -1ll, 0 );
			OUTP( *(uint8**)&TMP$788$3 );
			fb_StrDelete( &TMP$788$3 );
			OUTP( (uint8*)"fld qword ptr [esp]" );
		}
		goto label$419;
		label$420:;
		{
			FBSTRING TMP$789$3;
			FBSTRING TMP$790$3;
			__builtin_memset( &TMP$790$3, 0, 24ll );
			__builtin_memset( &TMP$789$3, 0, 24ll );
			FBSTRING* vr$38 = fb_StrConcat( &TMP$789$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$40 = fb_StrAssign( (void*)&TMP$790$3, -1ll, (void*)vr$38, -1ll, 0 );
			OUTP( *(uint8**)&TMP$790$3 );
			fb_StrDelete( &TMP$790$3 );
			OUTP( (uint8*)"fld dword ptr [esp]" );
		}
		label$419:;
	}
	goto label$415;
	label$416:;
	{
		FBSTRING TMP$791$2;
		FBSTRING TMP$792$2;
		__builtin_memset( &TMP$792$2, 0, 24ll );
		__builtin_memset( &TMP$791$2, 0, 24ll );
		FBSTRING* vr$45 = fb_StrConcat( &TMP$791$2, (void*)"fld ", 5ll, (void*)&SRC$1, -1ll );
		FBSTRING* vr$47 = fb_StrAssign( (void*)&TMP$792$2, -1ll, (void*)vr$45, -1ll, 0 );
		OUTP( *(uint8**)&TMP$792$2 );
		fb_StrDelete( &TMP$792$2 );
	}
	label$415:;
	OUTP( (uint8*)"fabs" );
	OUTP( (uint8*)"fyl2x" );
	OUTP( (uint8*)"fld st(0)" );
	OUTP( (uint8*)"frndint" );
	OUTP( (uint8*)"fsub st(1), st(0)" );
	OUTP( (uint8*)"fxch" );
	OUTP( (uint8*)"f2xm1" );
	OUTP( (uint8*)"fld1" );
	OUTP( (uint8*)"faddp" );
	OUTP( (uint8*)"fscale" );
	OUTP( (uint8*)"fstp st(1)" );
	if( DDSIZE$1 <= 4ll ) goto label$422;
	{
		FBSTRING TMP$802$2;
		FBSTRING TMP$803$2;
		FBSTRING TMP$804$2;
		FBSTRING TMP$805$2;
		OUTP( (uint8*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$805$2, 0, 24ll );
		__builtin_memset( &TMP$802$2, 0, 24ll );
		FBSTRING* vr$53 = fb_StrConcat( &TMP$802$2, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$803$2, 0, 24ll );
		FBSTRING* vr$56 = fb_StrConcat( &TMP$803$2, (void*)vr$53, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$804$2, 0, 24ll );
		FBSTRING* vr$59 = fb_StrConcat( &TMP$804$2, (void*)vr$56, -1ll, (void*)"qword ptr [esp]", 16ll );
		FBSTRING* vr$61 = fb_StrAssign( (void*)&TMP$805$2, -1ll, (void*)vr$59, -1ll, 0 );
		OUTP( *(uint8**)&TMP$805$2 );
		fb_StrDelete( &TMP$805$2 );
	}
	goto label$421;
	label$422:;
	{
		FBSTRING TMP$806$2;
		FBSTRING TMP$807$2;
		FBSTRING TMP$808$2;
		FBSTRING TMP$809$2;
		OUTP( (uint8*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$809$2, 0, 24ll );
		__builtin_memset( &TMP$806$2, 0, 24ll );
		FBSTRING* vr$66 = fb_StrConcat( &TMP$806$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$807$2, 0, 24ll );
		FBSTRING* vr$69 = fb_StrConcat( &TMP$807$2, (void*)vr$66, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$808$2, 0, 24ll );
		FBSTRING* vr$72 = fb_StrConcat( &TMP$808$2, (void*)vr$69, -1ll, (void*)"dword ptr [esp]", 16ll );
		FBSTRING* vr$74 = fb_StrAssign( (void*)&TMP$809$2, -1ll, (void*)vr$72, -1ll, 0 );
		OUTP( *(uint8**)&TMP$809$2 );
		fb_StrDelete( &TMP$809$2 );
	}
	label$421:;
	if( ADJUSTSTACK$1 == 0ll ) goto label$424;
	{
		OUTP( (uint8*)"add esp, 8" );
	}
	label$424:;
	label$423:;
	label$410:;
}

static void HCMPF_SSE( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, uint8* MNEMONIC$1, uint8* MASK$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$810$1;
	int64 TMP$811$1;
	label$425:;
	static FBSTRING RNAME$1;
	static FBSTRING RNAME8$1;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	static FBSTRING LNAME$1;
	static int64 ISEAXFREE$1;
	static int64 ISEDXFREE$1;
	static int64 SDSIZE$1;
	static int64 DDSIZE$1;
	static int64 RETURNSIZE$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$427;
	TMP$810$1 = 22ll;
	goto label$786;
	label$427:;
	TMP$810$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$786:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$810$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$428;
	TMP$811$1 = 22ll;
	goto label$787;
	label$428:;
	TMP$811$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$787:;
	SDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$811$1 * 56ll)) + 8ll);
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( LABEL$1 != (struct $8FBSYMBOL*)0ull ) goto label$430;
	{
		uint8* vr$13 = SYMBUNIQUELABEL(  );
		fb_StrAssign( (void*)&LNAME$1, -1ll, (void*)vr$13, 0ll, 0 );
	}
	goto label$429;
	label$430:;
	{
		uint8* vr$14 = SYMBGETMANGLEDNAME( LABEL$1 );
		fb_StrAssign( (void*)&LNAME$1, -1ll, (void*)vr$14, 0ll, 0 );
	}
	label$429:;
	RETURNSIZE$1 = 0ll;
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$432;
	{
		FBSTRING* vr$17 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		RETURNSIZE$1 = DDSIZE$1;
	}
	goto label$431;
	label$432:;
	if( *(int64*)((uint8*)SVREG$1 + 32ll) != 0ll ) goto label$433;
	{
		FBSTRING* vr$20 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		RETURNSIZE$1 = SDSIZE$1;
	}
	label$433:;
	label$431:;
	if( RETURNSIZE$1 == 0ll ) goto label$435;
	{
		FBSTRING TMP$812$2;
		FBSTRING TMP$813$2;
		__builtin_memset( &TMP$813$2, 0, 24ll );
		FBSTRING* vr$23 = fb_LongintToStr( RETURNSIZE$1 );
		__builtin_memset( &TMP$812$2, 0, 24ll );
		FBSTRING* vr$26 = fb_StrConcat( &TMP$812$2, (void*)"sub esp, ", 10ll, (void*)vr$23, -1ll );
		FBSTRING* vr$28 = fb_StrAssign( (void*)&TMP$813$2, -1ll, (void*)vr$26, -1ll, 0 );
		OUTP( *(uint8**)&TMP$813$2 );
		fb_StrDelete( &TMP$813$2 );
	}
	label$435:;
	label$434:;
	if( RETURNSIZE$1 != 8ll ) goto label$437;
	{
		FBSTRING TMP$814$2;
		FBSTRING TMP$815$2;
		FBSTRING TMP$816$2;
		FBSTRING TMP$817$2;
		OUTP( (uint8*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$817$2, 0, 24ll );
		__builtin_memset( &TMP$814$2, 0, 24ll );
		FBSTRING* vr$34 = fb_StrConcat( &TMP$814$2, (void*)"movlpd ", 8ll, (void*)&OSTR$1, -1ll );
		__builtin_memset( &TMP$815$2, 0, 24ll );
		FBSTRING* vr$37 = fb_StrConcat( &TMP$815$2, (void*)vr$34, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$816$2, 0, 24ll );
		FBSTRING* vr$40 = fb_StrConcat( &TMP$816$2, (void*)vr$37, -1ll, (void*)"qword ptr [esp]", 16ll );
		FBSTRING* vr$42 = fb_StrAssign( (void*)&TMP$817$2, -1ll, (void*)vr$40, -1ll, 0 );
		OUTP( *(uint8**)&TMP$817$2 );
		fb_StrDelete( &TMP$817$2 );
	}
	goto label$436;
	label$437:;
	if( RETURNSIZE$1 != 4ll ) goto label$438;
	{
		FBSTRING TMP$818$2;
		FBSTRING TMP$819$2;
		FBSTRING TMP$820$2;
		FBSTRING TMP$821$2;
		OUTP( (uint8*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$821$2, 0, 24ll );
		__builtin_memset( &TMP$818$2, 0, 24ll );
		FBSTRING* vr$48 = fb_StrConcat( &TMP$818$2, (void*)"movss ", 7ll, (void*)&OSTR$1, -1ll );
		__builtin_memset( &TMP$819$2, 0, 24ll );
		FBSTRING* vr$51 = fb_StrConcat( &TMP$819$2, (void*)vr$48, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$820$2, 0, 24ll );
		FBSTRING* vr$54 = fb_StrConcat( &TMP$820$2, (void*)vr$51, -1ll, (void*)"dword ptr [esp]", 16ll );
		FBSTRING* vr$56 = fb_StrAssign( (void*)&TMP$821$2, -1ll, (void*)vr$54, -1ll, 0 );
		OUTP( *(uint8**)&TMP$821$2 );
		fb_StrDelete( &TMP$821$2 );
	}
	label$438:;
	label$436:;
	if( RETURNSIZE$1 == 0ll ) goto label$440;
	{
		FBSTRING TMP$822$2;
		FBSTRING TMP$823$2;
		__builtin_memset( &TMP$823$2, 0, 24ll );
		FBSTRING* vr$60 = fb_LongintToStr( RETURNSIZE$1 );
		__builtin_memset( &TMP$822$2, 0, 24ll );
		FBSTRING* vr$63 = fb_StrConcat( &TMP$822$2, (void*)"add esp, ", 10ll, (void*)vr$60, -1ll );
		FBSTRING* vr$65 = fb_StrAssign( (void*)&TMP$823$2, -1ll, (void*)vr$63, -1ll, 0 );
		OUTP( *(uint8**)&TMP$823$2 );
		fb_StrDelete( &TMP$823$2 );
	}
	label$440:;
	label$439:;
	if( DDSIZE$1 <= 4ll ) goto label$442;
	{
		if( SDSIZE$1 <= 4ll ) goto label$444;
		{
			FBSTRING TMP$825$3;
			FBSTRING TMP$826$3;
			FBSTRING TMP$827$3;
			FBSTRING TMP$828$3;
			__builtin_memset( &TMP$828$3, 0, 24ll );
			__builtin_memset( &TMP$825$3, 0, 24ll );
			FBSTRING* vr$72 = fb_StrConcat( &TMP$825$3, (void*)"comisd ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$826$3, 0, 24ll );
			FBSTRING* vr$75 = fb_StrConcat( &TMP$826$3, (void*)vr$72, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$827$3, 0, 24ll );
			FBSTRING* vr$78 = fb_StrConcat( &TMP$827$3, (void*)vr$75, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$80 = fb_StrAssign( (void*)&TMP$828$3, -1ll, (void*)vr$78, -1ll, 0 );
			OUTP( *(uint8**)&TMP$828$3 );
			fb_StrDelete( &TMP$828$3 );
		}
		goto label$443;
		label$444:;
		{
			FBSTRING TMP$829$3;
			FBSTRING TMP$830$3;
			FBSTRING TMP$831$3;
			FBSTRING TMP$832$3;
			FBSTRING TMP$833$3;
			FBSTRING TMP$834$3;
			__builtin_memset( &TMP$830$3, 0, 24ll );
			__builtin_memset( &TMP$829$3, 0, 24ll );
			FBSTRING* vr$85 = fb_StrConcat( &TMP$829$3, (void*)"cvtss2sd xmm7, ", 16ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$87 = fb_StrAssign( (void*)&TMP$830$3, -1ll, (void*)vr$85, -1ll, 0 );
			OUTP( *(uint8**)&TMP$830$3 );
			fb_StrDelete( &TMP$830$3 );
			__builtin_memset( &TMP$834$3, 0, 24ll );
			__builtin_memset( &TMP$831$3, 0, 24ll );
			FBSTRING* vr$92 = fb_StrConcat( &TMP$831$3, (void*)"comisd ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$832$3, 0, 24ll );
			FBSTRING* vr$95 = fb_StrConcat( &TMP$832$3, (void*)vr$92, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$833$3, 0, 24ll );
			FBSTRING* vr$98 = fb_StrConcat( &TMP$833$3, (void*)vr$95, -1ll, (void*)"xmm7", 5ll );
			FBSTRING* vr$100 = fb_StrAssign( (void*)&TMP$834$3, -1ll, (void*)vr$98, -1ll, 0 );
			OUTP( *(uint8**)&TMP$834$3 );
			fb_StrDelete( &TMP$834$3 );
		}
		label$443:;
	}
	goto label$441;
	label$442:;
	{
		if( SDSIZE$1 <= 4ll ) goto label$446;
		{
			FBSTRING TMP$835$3;
			FBSTRING TMP$836$3;
			FBSTRING TMP$839$3;
			FBSTRING TMP$840$3;
			__builtin_memset( &TMP$836$3, 0, 24ll );
			__builtin_memset( &TMP$835$3, 0, 24ll );
			FBSTRING* vr$106 = fb_StrConcat( &TMP$835$3, (void*)"cvtss2sd xmm7, ", 16ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$108 = fb_StrAssign( (void*)&TMP$836$3, -1ll, (void*)vr$106, -1ll, 0 );
			OUTP( *(uint8**)&TMP$836$3 );
			fb_StrDelete( &TMP$836$3 );
			__builtin_memset( &TMP$840$3, 0, 24ll );
			__builtin_memset( &TMP$839$3, 0, 24ll );
			FBSTRING* vr$113 = fb_StrConcat( &TMP$839$3, (void*)"comisd xmm7, ", 14ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$115 = fb_StrAssign( (void*)&TMP$840$3, -1ll, (void*)vr$113, -1ll, 0 );
			OUTP( *(uint8**)&TMP$840$3 );
			fb_StrDelete( &TMP$840$3 );
		}
		goto label$445;
		label$446:;
		{
			FBSTRING TMP$842$3;
			FBSTRING TMP$843$3;
			FBSTRING TMP$844$3;
			FBSTRING TMP$845$3;
			__builtin_memset( &TMP$845$3, 0, 24ll );
			__builtin_memset( &TMP$842$3, 0, 24ll );
			FBSTRING* vr$120 = fb_StrConcat( &TMP$842$3, (void*)"comiss ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$843$3, 0, 24ll );
			FBSTRING* vr$123 = fb_StrConcat( &TMP$843$3, (void*)vr$120, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$844$3, 0, 24ll );
			FBSTRING* vr$126 = fb_StrConcat( &TMP$844$3, (void*)vr$123, -1ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$128 = fb_StrAssign( (void*)&TMP$845$3, -1ll, (void*)vr$126, -1ll, 0 );
			OUTP( *(uint8**)&TMP$845$3 );
			fb_StrDelete( &TMP$845$3 );
		}
		label$445:;
	}
	label$441:;
	if( RVREG$1 != (struct $6IRVREG*)0ull ) goto label$448;
	{
		FBSTRING TMP$847$2;
		__builtin_memset( &TMP$847$2, 0, 24ll );
		FBSTRING* vr$133 = fb_StrConcat( &TMP$847$2, (void*)"j", 2ll, (void*)MNEMONIC$1, 0ll );
		FBSTRING* vr$134 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$133, -1ll, 0 );
		HBRANCH( *(uint8**)&OSTR$1, *(uint8**)&LNAME$1 );
		goto label$426;
	}
	label$448:;
	label$447:;
	HPREPOPERAND( RVREG$1, &RNAME$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)((uint8*)&ENV$ + 224ll) < 1ll ) goto label$450;
	{
		uint8* vr$137 = HGETREGNAME( 1ll, *(int64*)((uint8*)RVREG$1 + 24ll) );
		fb_StrAssign( (void*)&RNAME8$1, -1ll, (void*)vr$137, 0ll, 0 );
		if( ((int64)-(*(int64*)((uint8*)RVREG$1 + 24ll) == 2ll) | (int64)-(*(int64*)((uint8*)RVREG$1 + 24ll) == 1ll)) == 0ll ) goto label$452;
		{
			FBSTRING TMP$853$3;
			FBSTRING TMP$854$3;
			int64 vr$144 = HISREGFREE( 0ll, 0ll );
			ISEDXFREE$1 = vr$144;
			if( ISEDXFREE$1 != 0ll ) goto label$454;
			{
				FBSTRING* vr$146 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"xchg edx, ", 11ll, 0 );
				FBSTRING* vr$147 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
				OUTP( *(uint8**)&OSTR$1 );
			}
			label$454:;
			label$453:;
			__builtin_memset( &TMP$853$3, 0, 24ll );
			FBSTRING* vr$150 = fb_StrConcat( &TMP$853$3, (void*)"set", 4ll, (void*)MNEMONIC$1, 0ll );
			__builtin_memset( &TMP$854$3, 0, 24ll );
			FBSTRING* vr$153 = fb_StrConcat( &TMP$854$3, (void*)vr$150, -1ll, (void*)"\x09" "dl", 4ll );
			FBSTRING* vr$154 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$153, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
			if( ISEDXFREE$1 != 0ll ) goto label$456;
			{
				FBSTRING* vr$156 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"xchg edx, ", 11ll, 0 );
				FBSTRING* vr$157 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
				OUTP( *(uint8**)&OSTR$1 );
			}
			goto label$455;
			label$456:;
			{
				HMOV( *(uint8**)&RNAME$1, (uint8*)"edx" );
			}
			label$455:;
		}
		goto label$451;
		label$452:;
		{
			FBSTRING TMP$857$3;
			FBSTRING TMP$858$3;
			FBSTRING TMP$859$3;
			__builtin_memset( &TMP$857$3, 0, 24ll );
			FBSTRING* vr$160 = fb_StrConcat( &TMP$857$3, (void*)"set", 4ll, (void*)MNEMONIC$1, 0ll );
			__builtin_memset( &TMP$858$3, 0, 24ll );
			FBSTRING* vr$163 = fb_StrConcat( &TMP$858$3, (void*)vr$160, -1ll, (void*)" ", 2ll );
			__builtin_memset( &TMP$859$3, 0, 24ll );
			FBSTRING* vr$166 = fb_StrConcat( &TMP$859$3, (void*)vr$163, -1ll, (void*)&RNAME8$1, -1ll );
			FBSTRING* vr$167 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$166, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		label$451:;
		FBSTRING* vr$168 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"shr ", 5ll, 0 );
		FBSTRING* vr$169 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		FBSTRING* vr$170 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", 1", 4ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
		FBSTRING* vr$171 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"sbb ", 5ll, 0 );
		FBSTRING* vr$172 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		FBSTRING* vr$173 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
		FBSTRING* vr$174 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	goto label$449;
	label$450:;
	{
		FBSTRING TMP$863$2;
		FBSTRING* vr$175 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mov ", 5ll, 0 );
		FBSTRING* vr$176 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		FBSTRING* vr$177 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", -1", 5ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
		__builtin_memset( &TMP$863$2, 0, 24ll );
		FBSTRING* vr$180 = fb_StrConcat( &TMP$863$2, (void*)"j", 2ll, (void*)MNEMONIC$1, 0ll );
		FBSTRING* vr$181 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$180, -1ll, 0 );
		HBRANCH( *(uint8**)&OSTR$1, *(uint8**)&LNAME$1 );
		FBSTRING* vr$182 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"xor ", 5ll, 0 );
		FBSTRING* vr$183 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		FBSTRING* vr$184 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
		FBSTRING* vr$185 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
		HLABEL( *(uint8**)&LNAME$1 );
	}
	label$449:;
	label$426:;
}

static void _EMITCGTF_SSE( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$457:;
	HCMPF_SSE( RVREG$1, LABEL$1, (uint8*)"a", (uint8*)"", DVREG$1, SVREG$1 );
	label$458:;
}

static void _EMITCLTF_SSE( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$459:;
	HCMPF_SSE( RVREG$1, LABEL$1, (uint8*)"b", (uint8*)"", DVREG$1, SVREG$1 );
	label$460:;
}

static void _EMITCEQF_SSE( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$461:;
	HCMPF_SSE( RVREG$1, LABEL$1, (uint8*)"e", (uint8*)"", DVREG$1, SVREG$1 );
	label$462:;
}

static void _EMITCNEF_SSE( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$463:;
	HCMPF_SSE( RVREG$1, LABEL$1, (uint8*)"ne", (uint8*)"", DVREG$1, SVREG$1 );
	label$464:;
}

static void _EMITCLEF_SSE( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$465:;
	HCMPF_SSE( RVREG$1, LABEL$1, (uint8*)"be", (uint8*)"", DVREG$1, SVREG$1 );
	label$466:;
}

static void _EMITCGEF_SSE( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$467:;
	HCMPF_SSE( RVREG$1, LABEL$1, (uint8*)"ae", (uint8*)"", DVREG$1, SVREG$1 );
	label$468:;
}

static void _EMITNEGF_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$871$1;
	label$469:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 DDSIZE$1;
	static struct $8FBSYMBOL* SYM$1;
	static struct $6IRVREG* TEMPVREG$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$471;
	TMP$871$1 = 22ll;
	goto label$788;
	label$471:;
	TMP$871$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$788:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$871$1 * 56ll)) + 8ll);
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$473;
	{
		FBSTRING TMP$872$2;
		FBSTRING TMP$873$2;
		FBSTRING TMP$882$2;
		FBSTRING TMP$883$2;
		__builtin_memset( &TMP$873$2, 0, 24ll );
		FBSTRING* vr$9 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$872$2, 0, 24ll );
		FBSTRING* vr$12 = fb_StrConcat( &TMP$872$2, (void*)"sub esp, ", 10ll, (void*)vr$9, -1ll );
		FBSTRING* vr$14 = fb_StrAssign( (void*)&TMP$873$2, -1ll, (void*)vr$12, -1ll, 0 );
		OUTP( *(uint8**)&TMP$873$2 );
		fb_StrDelete( &TMP$873$2 );
		if( DDSIZE$1 <= 4ll ) goto label$475;
		{
			FBSTRING TMP$874$3;
			FBSTRING TMP$875$3;
			FBSTRING TMP$876$3;
			FBSTRING TMP$877$3;
			OUTP( (uint8*)"fstp qword ptr [esp]" );
			__builtin_memset( &TMP$877$3, 0, 24ll );
			__builtin_memset( &TMP$874$3, 0, 24ll );
			FBSTRING* vr$20 = fb_StrConcat( &TMP$874$3, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$875$3, 0, 24ll );
			FBSTRING* vr$23 = fb_StrConcat( &TMP$875$3, (void*)vr$20, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$876$3, 0, 24ll );
			FBSTRING* vr$26 = fb_StrConcat( &TMP$876$3, (void*)vr$23, -1ll, (void*)"qword ptr [esp]", 16ll );
			FBSTRING* vr$28 = fb_StrAssign( (void*)&TMP$877$3, -1ll, (void*)vr$26, -1ll, 0 );
			OUTP( *(uint8**)&TMP$877$3 );
			fb_StrDelete( &TMP$877$3 );
		}
		goto label$474;
		label$475:;
		{
			FBSTRING TMP$878$3;
			FBSTRING TMP$879$3;
			FBSTRING TMP$880$3;
			FBSTRING TMP$881$3;
			OUTP( (uint8*)"fstp dword ptr [esp]" );
			__builtin_memset( &TMP$881$3, 0, 24ll );
			__builtin_memset( &TMP$878$3, 0, 24ll );
			FBSTRING* vr$33 = fb_StrConcat( &TMP$878$3, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$879$3, 0, 24ll );
			FBSTRING* vr$36 = fb_StrConcat( &TMP$879$3, (void*)vr$33, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$880$3, 0, 24ll );
			FBSTRING* vr$39 = fb_StrConcat( &TMP$880$3, (void*)vr$36, -1ll, (void*)"dword ptr [esp]", 16ll );
			FBSTRING* vr$41 = fb_StrAssign( (void*)&TMP$881$3, -1ll, (void*)vr$39, -1ll, 0 );
			OUTP( *(uint8**)&TMP$881$3 );
			fb_StrDelete( &TMP$881$3 );
		}
		label$474:;
		__builtin_memset( &TMP$883$2, 0, 24ll );
		FBSTRING* vr$44 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$882$2, 0, 24ll );
		FBSTRING* vr$47 = fb_StrConcat( &TMP$882$2, (void*)"add esp, ", 10ll, (void*)vr$44, -1ll );
		FBSTRING* vr$49 = fb_StrAssign( (void*)&TMP$883$2, -1ll, (void*)vr$47, -1ll, 0 );
		OUTP( *(uint8**)&TMP$883$2 );
		fb_StrDelete( &TMP$883$2 );
	}
	label$473:;
	label$472:;
	if( DDSIZE$1 <= 4ll ) goto label$477;
	{
		struct $8FBSYMBOL* vr$52 = SYMBALLOCINTCONST( -9223372036854775808ull, 13ll );
		SYM$1 = vr$52;
		struct $6IRVREG* vr$54 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 13ll, (struct $8FBSYMBOL*)0ull, SYM$1, *(int64*)((uint8*)SYM$1 + 80ll) );
		TEMPVREG$1 = vr$54;
	}
	goto label$476;
	label$477:;
	{
		struct $8FBSYMBOL* vr$55 = SYMBALLOCINTCONST( 2147483648ll, 8ll );
		SYM$1 = vr$55;
		struct $6IRVREG* vr$57 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 8ll, (struct $8FBSYMBOL*)0ull, SYM$1, *(int64*)((uint8*)SYM$1 + 80ll) );
		TEMPVREG$1 = vr$57;
	}
	label$476:;
	*(int64*)((uint8*)SYM$1 + 160ll) = 16ll;
	HPREPOPERAND( TEMPVREG$1, &SRC$1, 23ll, 0ll, 0ll, -1ll );
	if( DDSIZE$1 <= 4ll ) goto label$479;
	{
		FBSTRING TMP$885$2;
		FBSTRING TMP$886$2;
		FBSTRING TMP$887$2;
		FBSTRING TMP$888$2;
		__builtin_memset( &TMP$888$2, 0, 24ll );
		__builtin_memset( &TMP$885$2, 0, 24ll );
		FBSTRING* vr$63 = fb_StrConcat( &TMP$885$2, (void*)"xorpd ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$886$2, 0, 24ll );
		FBSTRING* vr$66 = fb_StrConcat( &TMP$886$2, (void*)vr$63, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$887$2, 0, 24ll );
		FBSTRING* vr$69 = fb_StrConcat( &TMP$887$2, (void*)vr$66, -1ll, (void*)&SRC$1, -1ll );
		FBSTRING* vr$71 = fb_StrAssign( (void*)&TMP$888$2, -1ll, (void*)vr$69, -1ll, 0 );
		OUTP( *(uint8**)&TMP$888$2 );
		fb_StrDelete( &TMP$888$2 );
	}
	goto label$478;
	label$479:;
	{
		FBSTRING TMP$890$2;
		FBSTRING TMP$891$2;
		FBSTRING TMP$892$2;
		FBSTRING TMP$893$2;
		__builtin_memset( &TMP$893$2, 0, 24ll );
		__builtin_memset( &TMP$890$2, 0, 24ll );
		FBSTRING* vr$76 = fb_StrConcat( &TMP$890$2, (void*)"xorps ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$891$2, 0, 24ll );
		FBSTRING* vr$79 = fb_StrConcat( &TMP$891$2, (void*)vr$76, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$892$2, 0, 24ll );
		FBSTRING* vr$82 = fb_StrConcat( &TMP$892$2, (void*)vr$79, -1ll, (void*)&SRC$1, -1ll );
		FBSTRING* vr$84 = fb_StrAssign( (void*)&TMP$893$2, -1ll, (void*)vr$82, -1ll, 0 );
		OUTP( *(uint8**)&TMP$893$2 );
		fb_StrDelete( &TMP$893$2 );
	}
	label$478:;
	label$470:;
}

static void _EMITHADDF_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$894$1;
	label$480:;
	static FBSTRING DST$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$482;
	TMP$894$1 = 22ll;
	goto label$789;
	label$482:;
	TMP$894$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$789:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$894$1 * 56ll)) + 8ll) <= 4ll ) goto label$484;
	{
		FBSTRING TMP$895$2;
		FBSTRING TMP$896$2;
		FBSTRING TMP$898$2;
		FBSTRING TMP$899$2;
		FBSTRING TMP$900$2;
		FBSTRING TMP$901$2;
		__builtin_memset( &TMP$896$2, 0, 24ll );
		__builtin_memset( &TMP$895$2, 0, 24ll );
		FBSTRING* vr$10 = fb_StrConcat( &TMP$895$2, (void*)"movhlps xmm7, ", 15ll, (void*)&DST$1, -1ll );
		FBSTRING* vr$12 = fb_StrAssign( (void*)&TMP$896$2, -1ll, (void*)vr$10, -1ll, 0 );
		OUTP( *(uint8**)&TMP$896$2 );
		fb_StrDelete( &TMP$896$2 );
		__builtin_memset( &TMP$901$2, 0, 24ll );
		__builtin_memset( &TMP$898$2, 0, 24ll );
		FBSTRING* vr$17 = fb_StrConcat( &TMP$898$2, (void*)"addsd ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$899$2, 0, 24ll );
		FBSTRING* vr$20 = fb_StrConcat( &TMP$899$2, (void*)vr$17, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$900$2, 0, 24ll );
		FBSTRING* vr$23 = fb_StrConcat( &TMP$900$2, (void*)vr$20, -1ll, (void*)"xmm7", 5ll );
		FBSTRING* vr$25 = fb_StrAssign( (void*)&TMP$901$2, -1ll, (void*)vr$23, -1ll, 0 );
		OUTP( *(uint8**)&TMP$901$2 );
		fb_StrDelete( &TMP$901$2 );
	}
	goto label$483;
	label$484:;
	{
		if( *(int64*)((uint8*)DVREG$1 + 40ll) != 2ll ) goto label$486;
		{
			FBSTRING TMP$905$3;
			FBSTRING TMP$906$3;
			FBSTRING TMP$907$3;
			FBSTRING TMP$908$3;
			FBSTRING TMP$910$3;
			FBSTRING TMP$911$3;
			FBSTRING TMP$912$3;
			FBSTRING TMP$913$3;
			__builtin_memset( &TMP$908$3, 0, 24ll );
			__builtin_memset( &TMP$905$3, 0, 24ll );
			FBSTRING* vr$32 = fb_StrConcat( &TMP$905$3, (void*)"pshufd xmm7, ", 14ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$906$3, 0, 24ll );
			FBSTRING* vr$35 = fb_StrConcat( &TMP$906$3, (void*)vr$32, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$907$3, 0, 24ll );
			FBSTRING* vr$38 = fb_StrConcat( &TMP$907$3, (void*)vr$35, -1ll, (void*)"0x01", 5ll );
			FBSTRING* vr$40 = fb_StrAssign( (void*)&TMP$908$3, -1ll, (void*)vr$38, -1ll, 0 );
			OUTP( *(uint8**)&TMP$908$3 );
			fb_StrDelete( &TMP$908$3 );
			__builtin_memset( &TMP$913$3, 0, 24ll );
			__builtin_memset( &TMP$910$3, 0, 24ll );
			FBSTRING* vr$45 = fb_StrConcat( &TMP$910$3, (void*)"addss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$911$3, 0, 24ll );
			FBSTRING* vr$48 = fb_StrConcat( &TMP$911$3, (void*)vr$45, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$912$3, 0, 24ll );
			FBSTRING* vr$51 = fb_StrConcat( &TMP$912$3, (void*)vr$48, -1ll, (void*)"xmm7", 5ll );
			FBSTRING* vr$53 = fb_StrAssign( (void*)&TMP$913$3, -1ll, (void*)vr$51, -1ll, 0 );
			OUTP( *(uint8**)&TMP$913$3 );
			fb_StrDelete( &TMP$913$3 );
		}
		goto label$485;
		label$486:;
		if( *(int64*)((uint8*)DVREG$1 + 40ll) != 3ll ) goto label$487;
		{
			FBSTRING TMP$914$3;
			FBSTRING TMP$915$3;
			FBSTRING TMP$916$3;
			FBSTRING TMP$917$3;
			FBSTRING TMP$918$3;
			FBSTRING TMP$919$3;
			FBSTRING TMP$920$3;
			FBSTRING TMP$921$3;
			FBSTRING TMP$922$3;
			FBSTRING TMP$923$3;
			FBSTRING TMP$924$3;
			FBSTRING TMP$925$3;
			FBSTRING TMP$926$3;
			FBSTRING TMP$927$3;
			__builtin_memset( &TMP$917$3, 0, 24ll );
			__builtin_memset( &TMP$914$3, 0, 24ll );
			FBSTRING* vr$60 = fb_StrConcat( &TMP$914$3, (void*)"pshufd xmm7, ", 14ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$915$3, 0, 24ll );
			FBSTRING* vr$63 = fb_StrConcat( &TMP$915$3, (void*)vr$60, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$916$3, 0, 24ll );
			FBSTRING* vr$66 = fb_StrConcat( &TMP$916$3, (void*)vr$63, -1ll, (void*)"0x01", 5ll );
			FBSTRING* vr$68 = fb_StrAssign( (void*)&TMP$917$3, -1ll, (void*)vr$66, -1ll, 0 );
			OUTP( *(uint8**)&TMP$917$3 );
			fb_StrDelete( &TMP$917$3 );
			__builtin_memset( &TMP$921$3, 0, 24ll );
			__builtin_memset( &TMP$918$3, 0, 24ll );
			FBSTRING* vr$73 = fb_StrConcat( &TMP$918$3, (void*)"addss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$919$3, 0, 24ll );
			FBSTRING* vr$76 = fb_StrConcat( &TMP$919$3, (void*)vr$73, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$920$3, 0, 24ll );
			FBSTRING* vr$79 = fb_StrConcat( &TMP$920$3, (void*)vr$76, -1ll, (void*)"xmm7", 5ll );
			FBSTRING* vr$81 = fb_StrAssign( (void*)&TMP$921$3, -1ll, (void*)vr$79, -1ll, 0 );
			OUTP( *(uint8**)&TMP$921$3 );
			fb_StrDelete( &TMP$921$3 );
			__builtin_memset( &TMP$923$3, 0, 24ll );
			__builtin_memset( &TMP$922$3, 0, 24ll );
			FBSTRING* vr$86 = fb_StrConcat( &TMP$922$3, (void*)"movhlps xmm7, ", 15ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$88 = fb_StrAssign( (void*)&TMP$923$3, -1ll, (void*)vr$86, -1ll, 0 );
			OUTP( *(uint8**)&TMP$923$3 );
			fb_StrDelete( &TMP$923$3 );
			__builtin_memset( &TMP$927$3, 0, 24ll );
			__builtin_memset( &TMP$924$3, 0, 24ll );
			FBSTRING* vr$93 = fb_StrConcat( &TMP$924$3, (void*)"addss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$925$3, 0, 24ll );
			FBSTRING* vr$96 = fb_StrConcat( &TMP$925$3, (void*)vr$93, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$926$3, 0, 24ll );
			FBSTRING* vr$99 = fb_StrConcat( &TMP$926$3, (void*)vr$96, -1ll, (void*)"xmm7", 5ll );
			FBSTRING* vr$101 = fb_StrAssign( (void*)&TMP$927$3, -1ll, (void*)vr$99, -1ll, 0 );
			OUTP( *(uint8**)&TMP$927$3 );
			fb_StrDelete( &TMP$927$3 );
		}
		goto label$485;
		label$487:;
		if( *(int64*)((uint8*)DVREG$1 + 40ll) != 4ll ) goto label$488;
		{
			FBSTRING TMP$928$3;
			FBSTRING TMP$929$3;
			FBSTRING TMP$931$3;
			FBSTRING TMP$932$3;
			FBSTRING TMP$933$3;
			FBSTRING TMP$934$3;
			FBSTRING TMP$935$3;
			FBSTRING TMP$936$3;
			FBSTRING TMP$937$3;
			FBSTRING TMP$938$3;
			FBSTRING TMP$939$3;
			FBSTRING TMP$940$3;
			FBSTRING TMP$941$3;
			FBSTRING TMP$942$3;
			__builtin_memset( &TMP$929$3, 0, 24ll );
			__builtin_memset( &TMP$928$3, 0, 24ll );
			FBSTRING* vr$108 = fb_StrConcat( &TMP$928$3, (void*)"movhlps xmm7, ", 15ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$110 = fb_StrAssign( (void*)&TMP$929$3, -1ll, (void*)vr$108, -1ll, 0 );
			OUTP( *(uint8**)&TMP$929$3 );
			fb_StrDelete( &TMP$929$3 );
			__builtin_memset( &TMP$934$3, 0, 24ll );
			__builtin_memset( &TMP$931$3, 0, 24ll );
			FBSTRING* vr$115 = fb_StrConcat( &TMP$931$3, (void*)"addps ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$932$3, 0, 24ll );
			FBSTRING* vr$118 = fb_StrConcat( &TMP$932$3, (void*)vr$115, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$933$3, 0, 24ll );
			FBSTRING* vr$121 = fb_StrConcat( &TMP$933$3, (void*)vr$118, -1ll, (void*)"xmm7", 5ll );
			FBSTRING* vr$123 = fb_StrAssign( (void*)&TMP$934$3, -1ll, (void*)vr$121, -1ll, 0 );
			OUTP( *(uint8**)&TMP$934$3 );
			fb_StrDelete( &TMP$934$3 );
			__builtin_memset( &TMP$938$3, 0, 24ll );
			__builtin_memset( &TMP$935$3, 0, 24ll );
			FBSTRING* vr$128 = fb_StrConcat( &TMP$935$3, (void*)"pshufd xmm7, ", 14ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$936$3, 0, 24ll );
			FBSTRING* vr$131 = fb_StrConcat( &TMP$936$3, (void*)vr$128, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$937$3, 0, 24ll );
			FBSTRING* vr$134 = fb_StrConcat( &TMP$937$3, (void*)vr$131, -1ll, (void*)"0x01", 5ll );
			FBSTRING* vr$136 = fb_StrAssign( (void*)&TMP$938$3, -1ll, (void*)vr$134, -1ll, 0 );
			OUTP( *(uint8**)&TMP$938$3 );
			fb_StrDelete( &TMP$938$3 );
			__builtin_memset( &TMP$942$3, 0, 24ll );
			__builtin_memset( &TMP$939$3, 0, 24ll );
			FBSTRING* vr$141 = fb_StrConcat( &TMP$939$3, (void*)"addss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$940$3, 0, 24ll );
			FBSTRING* vr$144 = fb_StrConcat( &TMP$940$3, (void*)vr$141, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$941$3, 0, 24ll );
			FBSTRING* vr$147 = fb_StrConcat( &TMP$941$3, (void*)vr$144, -1ll, (void*)"xmm7", 5ll );
			FBSTRING* vr$149 = fb_StrAssign( (void*)&TMP$942$3, -1ll, (void*)vr$147, -1ll, 0 );
			OUTP( *(uint8**)&TMP$942$3 );
			fb_StrDelete( &TMP$942$3 );
		}
		label$488:;
		label$485:;
	}
	label$483:;
	label$481:;
}

static void _EMITABSF_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$943$1;
	label$489:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 DDSIZE$1;
	static struct $8FBSYMBOL* SYM$1;
	static struct $6IRVREG* TEMPVREG$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$491;
	TMP$943$1 = 22ll;
	goto label$790;
	label$491:;
	TMP$943$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$790:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$943$1 * 56ll)) + 8ll);
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$493;
	{
		FBSTRING TMP$944$2;
		FBSTRING TMP$945$2;
		FBSTRING TMP$954$2;
		FBSTRING TMP$955$2;
		__builtin_memset( &TMP$945$2, 0, 24ll );
		FBSTRING* vr$9 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$944$2, 0, 24ll );
		FBSTRING* vr$12 = fb_StrConcat( &TMP$944$2, (void*)"sub esp, ", 10ll, (void*)vr$9, -1ll );
		FBSTRING* vr$14 = fb_StrAssign( (void*)&TMP$945$2, -1ll, (void*)vr$12, -1ll, 0 );
		OUTP( *(uint8**)&TMP$945$2 );
		fb_StrDelete( &TMP$945$2 );
		if( DDSIZE$1 <= 4ll ) goto label$495;
		{
			FBSTRING TMP$946$3;
			FBSTRING TMP$947$3;
			FBSTRING TMP$948$3;
			FBSTRING TMP$949$3;
			OUTP( (uint8*)"fstp qword ptr [esp]" );
			__builtin_memset( &TMP$949$3, 0, 24ll );
			__builtin_memset( &TMP$946$3, 0, 24ll );
			FBSTRING* vr$20 = fb_StrConcat( &TMP$946$3, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$947$3, 0, 24ll );
			FBSTRING* vr$23 = fb_StrConcat( &TMP$947$3, (void*)vr$20, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$948$3, 0, 24ll );
			FBSTRING* vr$26 = fb_StrConcat( &TMP$948$3, (void*)vr$23, -1ll, (void*)"qword ptr [esp]", 16ll );
			FBSTRING* vr$28 = fb_StrAssign( (void*)&TMP$949$3, -1ll, (void*)vr$26, -1ll, 0 );
			OUTP( *(uint8**)&TMP$949$3 );
			fb_StrDelete( &TMP$949$3 );
		}
		goto label$494;
		label$495:;
		{
			FBSTRING TMP$950$3;
			FBSTRING TMP$951$3;
			FBSTRING TMP$952$3;
			FBSTRING TMP$953$3;
			OUTP( (uint8*)"fstp dword ptr [esp]" );
			__builtin_memset( &TMP$953$3, 0, 24ll );
			__builtin_memset( &TMP$950$3, 0, 24ll );
			FBSTRING* vr$33 = fb_StrConcat( &TMP$950$3, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$951$3, 0, 24ll );
			FBSTRING* vr$36 = fb_StrConcat( &TMP$951$3, (void*)vr$33, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$952$3, 0, 24ll );
			FBSTRING* vr$39 = fb_StrConcat( &TMP$952$3, (void*)vr$36, -1ll, (void*)"dword ptr [esp]", 16ll );
			FBSTRING* vr$41 = fb_StrAssign( (void*)&TMP$953$3, -1ll, (void*)vr$39, -1ll, 0 );
			OUTP( *(uint8**)&TMP$953$3 );
			fb_StrDelete( &TMP$953$3 );
		}
		label$494:;
		__builtin_memset( &TMP$955$2, 0, 24ll );
		FBSTRING* vr$44 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$954$2, 0, 24ll );
		FBSTRING* vr$47 = fb_StrConcat( &TMP$954$2, (void*)"add esp, ", 10ll, (void*)vr$44, -1ll );
		FBSTRING* vr$49 = fb_StrAssign( (void*)&TMP$955$2, -1ll, (void*)vr$47, -1ll, 0 );
		OUTP( *(uint8**)&TMP$955$2 );
		fb_StrDelete( &TMP$955$2 );
	}
	label$493:;
	label$492:;
	if( DDSIZE$1 <= 4ll ) goto label$497;
	{
		struct $8FBSYMBOL* vr$52 = SYMBALLOCINTCONST( 9223372036854775807ll, 13ll );
		SYM$1 = vr$52;
		struct $6IRVREG* vr$54 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 13ll, (struct $8FBSYMBOL*)0ull, SYM$1, *(int64*)((uint8*)SYM$1 + 80ll) );
		TEMPVREG$1 = vr$54;
	}
	goto label$496;
	label$497:;
	{
		struct $8FBSYMBOL* vr$55 = SYMBALLOCINTCONST( 2147483647ll, 8ll );
		SYM$1 = vr$55;
		struct $6IRVREG* vr$57 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 8ll, (struct $8FBSYMBOL*)0ull, SYM$1, *(int64*)((uint8*)SYM$1 + 80ll) );
		TEMPVREG$1 = vr$57;
	}
	label$496:;
	*(int64*)((uint8*)SYM$1 + 160ll) = 16ll;
	HPREPOPERAND( TEMPVREG$1, &SRC$1, 23ll, 0ll, 0ll, -1ll );
	if( DDSIZE$1 <= 4ll ) goto label$499;
	{
		FBSTRING TMP$957$2;
		FBSTRING TMP$958$2;
		FBSTRING TMP$959$2;
		FBSTRING TMP$960$2;
		__builtin_memset( &TMP$960$2, 0, 24ll );
		__builtin_memset( &TMP$957$2, 0, 24ll );
		FBSTRING* vr$63 = fb_StrConcat( &TMP$957$2, (void*)"andpd ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$958$2, 0, 24ll );
		FBSTRING* vr$66 = fb_StrConcat( &TMP$958$2, (void*)vr$63, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$959$2, 0, 24ll );
		FBSTRING* vr$69 = fb_StrConcat( &TMP$959$2, (void*)vr$66, -1ll, (void*)&SRC$1, -1ll );
		FBSTRING* vr$71 = fb_StrAssign( (void*)&TMP$960$2, -1ll, (void*)vr$69, -1ll, 0 );
		OUTP( *(uint8**)&TMP$960$2 );
		fb_StrDelete( &TMP$960$2 );
	}
	goto label$498;
	label$499:;
	{
		FBSTRING TMP$962$2;
		FBSTRING TMP$963$2;
		FBSTRING TMP$964$2;
		FBSTRING TMP$965$2;
		__builtin_memset( &TMP$965$2, 0, 24ll );
		__builtin_memset( &TMP$962$2, 0, 24ll );
		FBSTRING* vr$76 = fb_StrConcat( &TMP$962$2, (void*)"andps ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$963$2, 0, 24ll );
		FBSTRING* vr$79 = fb_StrConcat( &TMP$963$2, (void*)vr$76, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$964$2, 0, 24ll );
		FBSTRING* vr$82 = fb_StrConcat( &TMP$964$2, (void*)vr$79, -1ll, (void*)&SRC$1, -1ll );
		FBSTRING* vr$84 = fb_StrAssign( (void*)&TMP$965$2, -1ll, (void*)vr$82, -1ll, 0 );
		OUTP( *(uint8**)&TMP$965$2 );
		fb_StrDelete( &TMP$965$2 );
	}
	label$498:;
	label$490:;
}

static void _EMITSGNF_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$966$1;
	label$500:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static struct $8FBSYMBOL* SYM$1;
	static struct $6IRVREG* TEMPVREG$1;
	static int64 DDSIZE$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$502;
	TMP$966$1 = 22ll;
	goto label$791;
	label$502:;
	TMP$966$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$791:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$966$1 * 56ll)) + 8ll);
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$504;
	{
		FBSTRING TMP$967$2;
		FBSTRING TMP$968$2;
		FBSTRING TMP$977$2;
		FBSTRING TMP$978$2;
		__builtin_memset( &TMP$968$2, 0, 24ll );
		FBSTRING* vr$9 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$967$2, 0, 24ll );
		FBSTRING* vr$12 = fb_StrConcat( &TMP$967$2, (void*)"sub esp, ", 10ll, (void*)vr$9, -1ll );
		FBSTRING* vr$14 = fb_StrAssign( (void*)&TMP$968$2, -1ll, (void*)vr$12, -1ll, 0 );
		OUTP( *(uint8**)&TMP$968$2 );
		fb_StrDelete( &TMP$968$2 );
		if( DDSIZE$1 <= 4ll ) goto label$506;
		{
			FBSTRING TMP$969$3;
			FBSTRING TMP$970$3;
			FBSTRING TMP$971$3;
			FBSTRING TMP$972$3;
			OUTP( (uint8*)"fstp qword ptr [esp]" );
			__builtin_memset( &TMP$972$3, 0, 24ll );
			__builtin_memset( &TMP$969$3, 0, 24ll );
			FBSTRING* vr$20 = fb_StrConcat( &TMP$969$3, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$970$3, 0, 24ll );
			FBSTRING* vr$23 = fb_StrConcat( &TMP$970$3, (void*)vr$20, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$971$3, 0, 24ll );
			FBSTRING* vr$26 = fb_StrConcat( &TMP$971$3, (void*)vr$23, -1ll, (void*)"qword ptr [esp]", 16ll );
			FBSTRING* vr$28 = fb_StrAssign( (void*)&TMP$972$3, -1ll, (void*)vr$26, -1ll, 0 );
			OUTP( *(uint8**)&TMP$972$3 );
			fb_StrDelete( &TMP$972$3 );
		}
		goto label$505;
		label$506:;
		{
			FBSTRING TMP$973$3;
			FBSTRING TMP$974$3;
			FBSTRING TMP$975$3;
			FBSTRING TMP$976$3;
			OUTP( (uint8*)"fstp dword ptr [esp]" );
			__builtin_memset( &TMP$976$3, 0, 24ll );
			__builtin_memset( &TMP$973$3, 0, 24ll );
			FBSTRING* vr$33 = fb_StrConcat( &TMP$973$3, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$974$3, 0, 24ll );
			FBSTRING* vr$36 = fb_StrConcat( &TMP$974$3, (void*)vr$33, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$975$3, 0, 24ll );
			FBSTRING* vr$39 = fb_StrConcat( &TMP$975$3, (void*)vr$36, -1ll, (void*)"dword ptr [esp]", 16ll );
			FBSTRING* vr$41 = fb_StrAssign( (void*)&TMP$976$3, -1ll, (void*)vr$39, -1ll, 0 );
			OUTP( *(uint8**)&TMP$976$3 );
			fb_StrDelete( &TMP$976$3 );
		}
		label$505:;
		__builtin_memset( &TMP$978$2, 0, 24ll );
		FBSTRING* vr$44 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$977$2, 0, 24ll );
		FBSTRING* vr$47 = fb_StrConcat( &TMP$977$2, (void*)"add esp, ", 10ll, (void*)vr$44, -1ll );
		FBSTRING* vr$49 = fb_StrAssign( (void*)&TMP$978$2, -1ll, (void*)vr$47, -1ll, 0 );
		OUTP( *(uint8**)&TMP$978$2 );
		fb_StrDelete( &TMP$978$2 );
	}
	label$504:;
	label$503:;
	if( DDSIZE$1 <= 4ll ) goto label$508;
	{
		FBSTRING TMP$982$2;
		FBSTRING TMP$983$2;
		FBSTRING TMP$985$2;
		FBSTRING TMP$986$2;
		FBSTRING TMP$987$2;
		FBSTRING TMP$988$2;
		FBSTRING TMP$991$2;
		FBSTRING TMP$992$2;
		FBSTRING TMP$993$2;
		FBSTRING TMP$994$2;
		FBSTRING TMP$995$2;
		FBSTRING TMP$996$2;
		OUTP( (uint8*)"xorpd xmm7, xmm7" );
		__builtin_memset( &TMP$983$2, 0, 24ll );
		__builtin_memset( &TMP$982$2, 0, 24ll );
		FBSTRING* vr$55 = fb_StrConcat( &TMP$982$2, (void*)"cmpneqsd xmm7, ", 16ll, (void*)&DST$1, -1ll );
		FBSTRING* vr$57 = fb_StrAssign( (void*)&TMP$983$2, -1ll, (void*)vr$55, -1ll, 0 );
		OUTP( *(uint8**)&TMP$983$2 );
		fb_StrDelete( &TMP$983$2 );
		struct $8FBSYMBOL* vr$59 = SYMBALLOCINTCONST( 9223372036854775807ll, 13ll );
		SYM$1 = vr$59;
		*(int64*)((uint8*)SYM$1 + 160ll) = 16ll;
		struct $6IRVREG* vr$62 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 13ll, (struct $8FBSYMBOL*)0ull, SYM$1, *(int64*)((uint8*)SYM$1 + 80ll) );
		TEMPVREG$1 = vr$62;
		HPREPOPERAND( TEMPVREG$1, &SRC$1, 23ll, 0ll, 0ll, -1ll );
		__builtin_memset( &TMP$988$2, 0, 24ll );
		__builtin_memset( &TMP$985$2, 0, 24ll );
		FBSTRING* vr$66 = fb_StrConcat( &TMP$985$2, (void*)"orpd ", 6ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$986$2, 0, 24ll );
		FBSTRING* vr$69 = fb_StrConcat( &TMP$986$2, (void*)vr$66, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$987$2, 0, 24ll );
		FBSTRING* vr$72 = fb_StrConcat( &TMP$987$2, (void*)vr$69, -1ll, (void*)&SRC$1, -1ll );
		FBSTRING* vr$74 = fb_StrAssign( (void*)&TMP$988$2, -1ll, (void*)vr$72, -1ll, 0 );
		OUTP( *(uint8**)&TMP$988$2 );
		fb_StrDelete( &TMP$988$2 );
		struct $8FBSYMBOL* vr$76 = SYMBALLOCINTCONST( -4616189618054758400ll, 13ll );
		SYM$1 = vr$76;
		*(int64*)((uint8*)SYM$1 + 160ll) = 16ll;
		struct $6IRVREG* vr$79 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 13ll, (struct $8FBSYMBOL*)0ull, SYM$1, *(int64*)((uint8*)SYM$1 + 80ll) );
		TEMPVREG$1 = vr$79;
		HPREPOPERAND( TEMPVREG$1, &SRC$1, 23ll, 0ll, 0ll, -1ll );
		__builtin_memset( &TMP$992$2, 0, 24ll );
		__builtin_memset( &TMP$991$2, 0, 24ll );
		FBSTRING* vr$83 = fb_StrConcat( &TMP$991$2, (void*)"andpd xmm7, ", 13ll, (void*)&SRC$1, -1ll );
		FBSTRING* vr$85 = fb_StrAssign( (void*)&TMP$992$2, -1ll, (void*)vr$83, -1ll, 0 );
		OUTP( *(uint8**)&TMP$992$2 );
		fb_StrDelete( &TMP$992$2 );
		__builtin_memset( &TMP$996$2, 0, 24ll );
		__builtin_memset( &TMP$993$2, 0, 24ll );
		FBSTRING* vr$90 = fb_StrConcat( &TMP$993$2, (void*)"andpd ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$994$2, 0, 24ll );
		FBSTRING* vr$93 = fb_StrConcat( &TMP$994$2, (void*)vr$90, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$995$2, 0, 24ll );
		FBSTRING* vr$96 = fb_StrConcat( &TMP$995$2, (void*)vr$93, -1ll, (void*)"xmm7", 5ll );
		FBSTRING* vr$98 = fb_StrAssign( (void*)&TMP$996$2, -1ll, (void*)vr$96, -1ll, 0 );
		OUTP( *(uint8**)&TMP$996$2 );
		fb_StrDelete( &TMP$996$2 );
	}
	goto label$507;
	label$508:;
	{
		FBSTRING TMP$1000$2;
		FBSTRING TMP$1001$2;
		FBSTRING TMP$1003$2;
		FBSTRING TMP$1004$2;
		FBSTRING TMP$1005$2;
		FBSTRING TMP$1006$2;
		FBSTRING TMP$1009$2;
		FBSTRING TMP$1010$2;
		FBSTRING TMP$1011$2;
		FBSTRING TMP$1012$2;
		FBSTRING TMP$1013$2;
		FBSTRING TMP$1014$2;
		OUTP( (uint8*)"xorps xmm7, xmm7" );
		__builtin_memset( &TMP$1001$2, 0, 24ll );
		__builtin_memset( &TMP$1000$2, 0, 24ll );
		FBSTRING* vr$103 = fb_StrConcat( &TMP$1000$2, (void*)"cmpneqss xmm7, ", 16ll, (void*)&DST$1, -1ll );
		FBSTRING* vr$105 = fb_StrAssign( (void*)&TMP$1001$2, -1ll, (void*)vr$103, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1001$2 );
		fb_StrDelete( &TMP$1001$2 );
		struct $8FBSYMBOL* vr$107 = SYMBALLOCINTCONST( 2147483647ll, 8ll );
		SYM$1 = vr$107;
		*(int64*)((uint8*)SYM$1 + 160ll) = 16ll;
		struct $6IRVREG* vr$110 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 8ll, (struct $8FBSYMBOL*)0ull, SYM$1, *(int64*)((uint8*)SYM$1 + 80ll) );
		TEMPVREG$1 = vr$110;
		HPREPOPERAND( TEMPVREG$1, &SRC$1, 23ll, 0ll, 0ll, -1ll );
		__builtin_memset( &TMP$1006$2, 0, 24ll );
		__builtin_memset( &TMP$1003$2, 0, 24ll );
		FBSTRING* vr$114 = fb_StrConcat( &TMP$1003$2, (void*)"orps ", 6ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1004$2, 0, 24ll );
		FBSTRING* vr$117 = fb_StrConcat( &TMP$1004$2, (void*)vr$114, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1005$2, 0, 24ll );
		FBSTRING* vr$120 = fb_StrConcat( &TMP$1005$2, (void*)vr$117, -1ll, (void*)&SRC$1, -1ll );
		FBSTRING* vr$122 = fb_StrAssign( (void*)&TMP$1006$2, -1ll, (void*)vr$120, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1006$2 );
		fb_StrDelete( &TMP$1006$2 );
		struct $8FBSYMBOL* vr$124 = SYMBALLOCINTCONST( 3212836864ll, 8ll );
		SYM$1 = vr$124;
		*(int64*)((uint8*)SYM$1 + 160ll) = 16ll;
		struct $6IRVREG* vr$127 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 8ll, (struct $8FBSYMBOL*)0ull, SYM$1, *(int64*)((uint8*)SYM$1 + 80ll) );
		TEMPVREG$1 = vr$127;
		HPREPOPERAND( TEMPVREG$1, &SRC$1, 23ll, 0ll, 0ll, -1ll );
		__builtin_memset( &TMP$1010$2, 0, 24ll );
		__builtin_memset( &TMP$1009$2, 0, 24ll );
		FBSTRING* vr$131 = fb_StrConcat( &TMP$1009$2, (void*)"andps xmm7, ", 13ll, (void*)&SRC$1, -1ll );
		FBSTRING* vr$133 = fb_StrAssign( (void*)&TMP$1010$2, -1ll, (void*)vr$131, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1010$2 );
		fb_StrDelete( &TMP$1010$2 );
		__builtin_memset( &TMP$1014$2, 0, 24ll );
		__builtin_memset( &TMP$1011$2, 0, 24ll );
		FBSTRING* vr$138 = fb_StrConcat( &TMP$1011$2, (void*)"andps ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1012$2, 0, 24ll );
		FBSTRING* vr$141 = fb_StrConcat( &TMP$1012$2, (void*)vr$138, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1013$2, 0, 24ll );
		FBSTRING* vr$144 = fb_StrConcat( &TMP$1013$2, (void*)vr$141, -1ll, (void*)"xmm7", 5ll );
		FBSTRING* vr$146 = fb_StrAssign( (void*)&TMP$1014$2, -1ll, (void*)vr$144, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1014$2 );
		fb_StrDelete( &TMP$1014$2 );
	}
	label$507:;
	label$501:;
}

static void _EMITSINCOS_FAST_SSE( struct $6IRVREG* DVREG$1, int64 ISCOS$1 )
{
	FBSTRING TMP$1018$1;
	FBSTRING TMP$1019$1;
	FBSTRING TMP$1048$1;
	FBSTRING TMP$1049$1;
	FBSTRING TMP$1050$1;
	FBSTRING TMP$1051$1;
	FBSTRING TMP$1062$1;
	FBSTRING TMP$1063$1;
	FBSTRING TMP$1064$1;
	FBSTRING TMP$1065$1;
	FBSTRING TMP$1068$1;
	FBSTRING TMP$1069$1;
	FBSTRING TMP$1071$1;
	FBSTRING TMP$1072$1;
	FBSTRING TMP$1073$1;
	FBSTRING TMP$1074$1;
	FBSTRING TMP$1076$1;
	FBSTRING TMP$1077$1;
	FBSTRING TMP$1078$1;
	FBSTRING TMP$1079$1;
	FBSTRING TMP$1082$1;
	FBSTRING TMP$1083$1;
	FBSTRING TMP$1084$1;
	FBSTRING TMP$1085$1;
	FBSTRING TMP$1087$1;
	FBSTRING TMP$1088$1;
	FBSTRING TMP$1090$1;
	FBSTRING TMP$1091$1;
	FBSTRING TMP$1092$1;
	FBSTRING TMP$1093$1;
	FBSTRING TMP$1095$1;
	FBSTRING TMP$1096$1;
	FBSTRING TMP$1097$1;
	FBSTRING TMP$1098$1;
	FBSTRING TMP$1100$1;
	FBSTRING TMP$1101$1;
	FBSTRING TMP$1102$1;
	FBSTRING TMP$1103$1;
	FBSTRING TMP$1105$1;
	FBSTRING TMP$1106$1;
	FBSTRING TMP$1108$1;
	FBSTRING TMP$1109$1;
	FBSTRING TMP$1110$1;
	FBSTRING TMP$1111$1;
	FBSTRING TMP$1113$1;
	FBSTRING TMP$1114$1;
	FBSTRING TMP$1115$1;
	FBSTRING TMP$1116$1;
	FBSTRING TMP$1119$1;
	FBSTRING TMP$1120$1;
	FBSTRING TMP$1123$1;
	FBSTRING TMP$1124$1;
	FBSTRING TMP$1126$1;
	FBSTRING TMP$1127$1;
	FBSTRING TMP$1128$1;
	FBSTRING TMP$1129$1;
	FBSTRING TMP$1132$1;
	FBSTRING TMP$1133$1;
	FBSTRING TMP$1140$1;
	FBSTRING TMP$1141$1;
	FBSTRING TMP$1142$1;
	FBSTRING TMP$1143$1;
	FBSTRING TMP$1146$1;
	FBSTRING TMP$1147$1;
	FBSTRING TMP$1148$1;
	FBSTRING TMP$1149$1;
	FBSTRING TMP$1151$1;
	FBSTRING TMP$1152$1;
	FBSTRING TMP$1153$1;
	FBSTRING TMP$1154$1;
	FBSTRING TMP$1157$1;
	FBSTRING TMP$1158$1;
	FBSTRING TMP$1161$1;
	FBSTRING TMP$1162$1;
	FBSTRING TMP$1163$1;
	FBSTRING TMP$1164$1;
	FBSTRING TMP$1165$1;
	FBSTRING TMP$1166$1;
	FBSTRING TMP$1167$1;
	FBSTRING TMP$1168$1;
	FBSTRING TMP$1169$1;
	FBSTRING TMP$1170$1;
	FBSTRING TMP$1171$1;
	FBSTRING TMP$1172$1;
	FBSTRING TMP$1173$1;
	FBSTRING TMP$1174$1;
	FBSTRING TMP$1175$1;
	FBSTRING TMP$1176$1;
	FBSTRING TMP$1177$1;
	FBSTRING TMP$1178$1;
	FBSTRING TMP$1192$1;
	FBSTRING TMP$1193$1;
	label$509:;
	static int64 REG$1[3];
	struct $8FBARRAY1IlE {
		int64* DATA;
		int64* PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1IlE ) == 64 );
	static struct $8FBARRAY1IlE tmp$1015$1 = { (int64*)REG$1, (int64*)REG$1, 24ll, 8ll, 1ll, { { 3ll, 0ll, 2ll } } };
	static int64 ISFREE$1[3];
	static struct $8FBARRAY1IlE tmp$1016$1 = { (int64*)ISFREE$1, (int64*)ISFREE$1, 24ll, 8ll, 1ll, { { 3ll, 0ll, 2ll } } };
	static int64 STACKSIZE$1;
	static int64 I$1;
	static int64 STACKPOINTER$1;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING REGNAME$1[3];
	struct $8FBARRAY1I8FBSTRINGE {
		FBSTRING* DATA;
		FBSTRING* PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I8FBSTRINGE ) == 64 );
	static struct $8FBARRAY1I8FBSTRINGE tmp$1017$1 = { (FBSTRING*)REGNAME$1, (FBSTRING*)REGNAME$1, 72ll, 24ll, 1ll, { { 3ll, 0ll, 2ll } } };
	static struct $8FBSYMBOL* SYM_INVSIGNBITMASK$1;
	static struct $8FBSYMBOL* SYM_ONE$1;
	static struct $8FBSYMBOL* SYM_PIOVERTWO$1;
	static struct $8FBSYMBOL* SYM_TWOOVERPI$1;
	static struct $8FBSYMBOL* SYM_SIN_C0$1;
	static struct $8FBSYMBOL* SYM_SIN_C1$1;
	static struct $8FBSYMBOL* SYM_SIN_C2$1;
	static struct $8FBSYMBOL* SYM_SIN_C3$1;
	static struct $6IRVREG* VREG_INVSIGNBITMASK$1;
	static struct $6IRVREG* VREG_ONE$1;
	static struct $6IRVREG* VREG_PIOVERTWO$1;
	static struct $6IRVREG* VREG_TWOOVERPI$1;
	static struct $6IRVREG* VREG_SIN_C0$1;
	static struct $6IRVREG* VREG_SIN_C1$1;
	static struct $6IRVREG* VREG_SIN_C2$1;
	static struct $6IRVREG* VREG_SIN_C3$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	STACKSIZE$1 = 4ll;
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$512;
	{
		STACKSIZE$1 = STACKSIZE$1 + 4ll;
	}
	label$512:;
	label$511:;
	*(int64*)REG$1 = 3ll;
	*(int64*)ISFREE$1 = 0ll;
	*(int64*)((uint8*)REG$1 + 8ll) = 5ll;
	*(int64*)((uint8*)ISFREE$1 + 8ll) = 0ll;
	int64 vr$3 = HISREGFREE( 0ll, 3ll );
	if( vr$3 == 0ll ) goto label$514;
	{
		*(int64*)REG$1 = 3ll;
		*(int64*)ISFREE$1 = -1ll;
		int64 vr$5 = HISREGFREE( 0ll, 0ll );
		if( vr$5 == 0ll ) goto label$516;
		{
			*(int64*)((uint8*)REG$1 + 8ll) = 0ll;
			*(int64*)((uint8*)ISFREE$1 + 8ll) = -1ll;
		}
		goto label$515;
		label$516:;
		int64 vr$7 = HISREGFREE( 0ll, 5ll );
		if( vr$7 == 0ll ) goto label$517;
		{
			*(int64*)((uint8*)REG$1 + 8ll) = 5ll;
			*(int64*)((uint8*)ISFREE$1 + 8ll) = -1ll;
		}
		label$517:;
		label$515:;
	}
	goto label$513;
	label$514:;
	int64 vr$9 = HISREGFREE( 0ll, 0ll );
	if( vr$9 == 0ll ) goto label$518;
	{
		*(int64*)REG$1 = 0ll;
		*(int64*)ISFREE$1 = -1ll;
		int64 vr$11 = HISREGFREE( 0ll, 5ll );
		if( vr$11 == 0ll ) goto label$520;
		{
			*(int64*)((uint8*)REG$1 + 8ll) = 5ll;
			*(int64*)((uint8*)ISFREE$1 + 8ll) = -1ll;
		}
		label$520:;
		label$519:;
	}
	goto label$513;
	label$518:;
	{
		int64 vr$13 = HISREGFREE( 0ll, 5ll );
		if( vr$13 == 0ll ) goto label$522;
		{
			*(int64*)((uint8*)REG$1 + 8ll) = 5ll;
			*(int64*)((uint8*)ISFREE$1 + 8ll) = -1ll;
		}
		label$522:;
		label$521:;
	}
	label$513:;
	int64 vr$15 = HFINDFREEREG( 1ll );
	*(int64*)((uint8*)REG$1 + 16ll) = vr$15;
	if( *(int64*)((uint8*)REG$1 + 16ll) != -1ll ) goto label$524;
	{
		*(int64*)((uint8*)REG$1 + 16ll) = 0ll;
		*(int64*)((uint8*)ISFREE$1 + 16ll) = 0ll;
	}
	goto label$523;
	label$524:;
	{
		*(int64*)((uint8*)ISFREE$1 + 16ll) = -1ll;
	}
	label$523:;
	STACKSIZE$1 = STACKSIZE$1 + ((*(int64*)ISFREE$1 & 1ll) << 2ll);
	STACKSIZE$1 = STACKSIZE$1 + ((*(int64*)((uint8*)ISFREE$1 + 8ll) & 1ll) << 2ll);
	STACKSIZE$1 = STACKSIZE$1 + ((*(int64*)((uint8*)ISFREE$1 + 16ll) & 1ll) << 2ll);
	uint8* vr$26 = HGETREGNAME( 7ll, *(int64*)REG$1 );
	fb_StrAssign( (void*)REGNAME$1, -1ll, (void*)vr$26, 0ll, 0 );
	uint8* vr$27 = HGETREGNAME( 7ll, *(int64*)((uint8*)REG$1 + 8ll) );
	fb_StrAssign( (void*)((uint8*)REGNAME$1 + 24ll), -1ll, (void*)vr$27, 0ll, 0 );
	uint8* vr$28 = HGETREGNAME( 14ll, *(int64*)((uint8*)REG$1 + 16ll) );
	fb_StrAssign( (void*)((uint8*)REGNAME$1 + 48ll), -1ll, (void*)vr$28, 0ll, 0 );
	struct $8FBSYMBOL* vr$29 = SYMBALLOCINTCONST( 2147483647ll, 8ll );
	SYM_INVSIGNBITMASK$1 = vr$29;
	*(int64*)((uint8*)SYM_INVSIGNBITMASK$1 + 160ll) = 16ll;
	struct $6IRVREG* vr$32 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 8ll, (struct $8FBSYMBOL*)0ull, SYM_INVSIGNBITMASK$1, *(int64*)((uint8*)SYM_INVSIGNBITMASK$1 + 80ll) );
	VREG_INVSIGNBITMASK$1 = vr$32;
	struct $8FBSYMBOL* vr$33 = SYMBALLOCINTCONST( 1070141403ll, 8ll );
	SYM_PIOVERTWO$1 = vr$33;
	*(int64*)((uint8*)SYM_PIOVERTWO$1 + 160ll) = 16ll;
	struct $6IRVREG* vr$36 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 8ll, (struct $8FBSYMBOL*)0ull, SYM_PIOVERTWO$1, *(int64*)((uint8*)SYM_PIOVERTWO$1 + 80ll) );
	VREG_PIOVERTWO$1 = vr$36;
	struct $8FBSYMBOL* vr$37 = SYMBALLOCINTCONST( 1059256707ll, 8ll );
	SYM_TWOOVERPI$1 = vr$37;
	*(int64*)((uint8*)SYM_TWOOVERPI$1 + 160ll) = 16ll;
	struct $6IRVREG* vr$40 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 8ll, (struct $8FBSYMBOL*)0ull, SYM_TWOOVERPI$1, *(int64*)((uint8*)SYM_TWOOVERPI$1 + 80ll) );
	VREG_TWOOVERPI$1 = vr$40;
	struct $8FBSYMBOL* vr$41 = SYMBALLOCINTCONST( 1065353216ll, 8ll );
	SYM_ONE$1 = vr$41;
	*(int64*)((uint8*)SYM_ONE$1 + 160ll) = 16ll;
	struct $6IRVREG* vr$44 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 8ll, (struct $8FBSYMBOL*)0ull, SYM_ONE$1, *(int64*)((uint8*)SYM_ONE$1 + 80ll) );
	VREG_ONE$1 = vr$44;
	struct $8FBSYMBOL* vr$45 = SYMBALLOCINTCONST( 1070141403ll, 8ll );
	SYM_SIN_C0$1 = vr$45;
	*(int64*)((uint8*)SYM_SIN_C0$1 + 160ll) = 16ll;
	struct $6IRVREG* vr$48 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 8ll, (struct $8FBSYMBOL*)0ull, SYM_SIN_C0$1, *(int64*)((uint8*)SYM_SIN_C0$1 + 80ll) );
	VREG_SIN_C0$1 = vr$48;
	struct $8FBSYMBOL* vr$49 = SYMBALLOCINTCONST( 3206897127ll, 8ll );
	SYM_SIN_C1$1 = vr$49;
	*(int64*)((uint8*)SYM_SIN_C1$1 + 160ll) = 16ll;
	struct $6IRVREG* vr$52 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 8ll, (struct $8FBSYMBOL*)0ull, SYM_SIN_C1$1, *(int64*)((uint8*)SYM_SIN_C1$1 + 80ll) );
	VREG_SIN_C1$1 = vr$52;
	struct $8FBSYMBOL* vr$53 = SYMBALLOCINTCONST( 1034106339ll, 8ll );
	SYM_SIN_C2$1 = vr$53;
	*(int64*)((uint8*)SYM_SIN_C2$1 + 160ll) = 16ll;
	struct $6IRVREG* vr$56 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 8ll, (struct $8FBSYMBOL*)0ull, SYM_SIN_C2$1, *(int64*)((uint8*)SYM_SIN_C2$1 + 80ll) );
	VREG_SIN_C2$1 = vr$56;
	struct $8FBSYMBOL* vr$57 = SYMBALLOCINTCONST( 3147393382ll, 8ll );
	SYM_SIN_C3$1 = vr$57;
	*(int64*)((uint8*)SYM_SIN_C3$1 + 160ll) = 16ll;
	struct $6IRVREG* vr$60 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 8ll, (struct $8FBSYMBOL*)0ull, SYM_SIN_C3$1, *(int64*)((uint8*)SYM_SIN_C3$1 + 80ll) );
	VREG_SIN_C3$1 = vr$60;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	__builtin_memset( &TMP$1019$1, 0, 24ll );
	FBSTRING* vr$62 = fb_LongintToStr( STACKSIZE$1 );
	__builtin_memset( &TMP$1018$1, 0, 24ll );
	FBSTRING* vr$65 = fb_StrConcat( &TMP$1018$1, (void*)"sub esp, ", 10ll, (void*)vr$62, -1ll );
	FBSTRING* vr$67 = fb_StrAssign( (void*)&TMP$1019$1, -1ll, (void*)vr$65, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1019$1 );
	fb_StrDelete( &TMP$1019$1 );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$526;
	{
		FBSTRING TMP$1020$2;
		FBSTRING TMP$1021$2;
		FBSTRING TMP$1022$2;
		FBSTRING TMP$1023$2;
		OUTP( (uint8*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$1023$2, 0, 24ll );
		__builtin_memset( &TMP$1020$2, 0, 24ll );
		FBSTRING* vr$74 = fb_StrConcat( &TMP$1020$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1021$2, 0, 24ll );
		FBSTRING* vr$77 = fb_StrConcat( &TMP$1021$2, (void*)vr$74, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1022$2, 0, 24ll );
		FBSTRING* vr$80 = fb_StrConcat( &TMP$1022$2, (void*)vr$77, -1ll, (void*)"dword ptr [esp]", 16ll );
		FBSTRING* vr$82 = fb_StrAssign( (void*)&TMP$1023$2, -1ll, (void*)vr$80, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1023$2 );
		fb_StrDelete( &TMP$1023$2 );
	}
	label$526:;
	label$525:;
	STACKPOINTER$1 = 4ll;
	{
		I$1 = 0ll;
		label$530:;
		{
			if( *(int64*)((uint8*)ISFREE$1 + (I$1 << 3ll)) != 0ll ) goto label$532;
			{
				if( I$1 >= 2ll ) goto label$534;
				{
					FBSTRING TMP$1026$5;
					FBSTRING TMP$1027$5;
					FBSTRING TMP$1028$5;
					FBSTRING TMP$1029$5;
					FBSTRING TMP$1030$5;
					__builtin_memset( &TMP$1030$5, 0, 24ll );
					FBSTRING* vr$90 = fb_LongintToStr( STACKPOINTER$1 );
					__builtin_memset( &TMP$1026$5, 0, 24ll );
					FBSTRING* vr$93 = fb_StrConcat( &TMP$1026$5, (void*)"mov [esp+", 10ll, (void*)vr$90, -1ll );
					__builtin_memset( &TMP$1027$5, 0, 24ll );
					FBSTRING* vr$96 = fb_StrConcat( &TMP$1027$5, (void*)vr$93, -1ll, (void*)"]", 2ll );
					__builtin_memset( &TMP$1028$5, 0, 24ll );
					FBSTRING* vr$99 = fb_StrConcat( &TMP$1028$5, (void*)vr$96, -1ll, (void*)", ", 3ll );
					__builtin_memset( &TMP$1029$5, 0, 24ll );
					FBSTRING* vr$102 = fb_StrConcat( &TMP$1029$5, (void*)vr$99, -1ll, (void*)((uint8*)REGNAME$1 + (I$1 * 24ll)), -1ll );
					FBSTRING* vr$104 = fb_StrAssign( (void*)&TMP$1030$5, -1ll, (void*)vr$102, -1ll, 0 );
					OUTP( *(uint8**)&TMP$1030$5 );
					fb_StrDelete( &TMP$1030$5 );
				}
				goto label$533;
				label$534:;
				{
					FBSTRING TMP$1032$5;
					FBSTRING TMP$1033$5;
					FBSTRING TMP$1034$5;
					FBSTRING TMP$1035$5;
					FBSTRING TMP$1036$5;
					__builtin_memset( &TMP$1036$5, 0, 24ll );
					FBSTRING* vr$109 = fb_LongintToStr( STACKPOINTER$1 );
					__builtin_memset( &TMP$1032$5, 0, 24ll );
					FBSTRING* vr$112 = fb_StrConcat( &TMP$1032$5, (void*)"movss [esp+", 12ll, (void*)vr$109, -1ll );
					__builtin_memset( &TMP$1033$5, 0, 24ll );
					FBSTRING* vr$115 = fb_StrConcat( &TMP$1033$5, (void*)vr$112, -1ll, (void*)"]", 2ll );
					__builtin_memset( &TMP$1034$5, 0, 24ll );
					FBSTRING* vr$118 = fb_StrConcat( &TMP$1034$5, (void*)vr$115, -1ll, (void*)", ", 3ll );
					__builtin_memset( &TMP$1035$5, 0, 24ll );
					FBSTRING* vr$121 = fb_StrConcat( &TMP$1035$5, (void*)vr$118, -1ll, (void*)((uint8*)REGNAME$1 + (I$1 * 24ll)), -1ll );
					FBSTRING* vr$123 = fb_StrAssign( (void*)&TMP$1036$5, -1ll, (void*)vr$121, -1ll, 0 );
					OUTP( *(uint8**)&TMP$1036$5 );
					fb_StrDelete( &TMP$1036$5 );
				}
				label$533:;
				STACKPOINTER$1 = STACKPOINTER$1 + 4ll;
			}
			label$532:;
			label$531:;
		}
		label$528:;
		I$1 = I$1 + 1ll;
		label$527:;
		if( I$1 <= 2ll ) goto label$530;
		label$529:;
	}
	if( ISCOS$1 != 0ll ) goto label$536;
	{
		FBSTRING TMP$1039$2;
		FBSTRING TMP$1040$2;
		FBSTRING TMP$1042$2;
		FBSTRING TMP$1043$2;
		FBSTRING TMP$1044$2;
		FBSTRING TMP$1045$2;
		__builtin_memset( &TMP$1040$2, 0, 24ll );
		__builtin_memset( &TMP$1039$2, 0, 24ll );
		FBSTRING* vr$132 = fb_StrConcat( &TMP$1039$2, (void*)"movss\x09[esp], ", 14ll, (void*)&DST$1, -1ll );
		FBSTRING* vr$134 = fb_StrAssign( (void*)&TMP$1040$2, -1ll, (void*)vr$132, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1040$2 );
		fb_StrDelete( &TMP$1040$2 );
		HPREPOPERAND( VREG_TWOOVERPI$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
		__builtin_memset( &TMP$1045$2, 0, 24ll );
		__builtin_memset( &TMP$1042$2, 0, 24ll );
		FBSTRING* vr$139 = fb_StrConcat( &TMP$1042$2, (void*)"mulss\x09", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1043$2, 0, 24ll );
		FBSTRING* vr$142 = fb_StrConcat( &TMP$1043$2, (void*)vr$139, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1044$2, 0, 24ll );
		FBSTRING* vr$145 = fb_StrConcat( &TMP$1044$2, (void*)vr$142, -1ll, (void*)&SRC$1, -1ll );
		FBSTRING* vr$147 = fb_StrAssign( (void*)&TMP$1045$2, -1ll, (void*)vr$145, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1045$2 );
		fb_StrDelete( &TMP$1045$2 );
		OUTP( (uint8*)"and\x09\x09" "dword ptr [esp], 0x80000000" );
	}
	label$536:;
	label$535:;
	HPREPOPERAND( VREG_INVSIGNBITMASK$1, &SRC$1, 23ll, 0ll, 0ll, -1ll );
	__builtin_memset( &TMP$1051$1, 0, 24ll );
	__builtin_memset( &TMP$1048$1, 0, 24ll );
	FBSTRING* vr$152 = fb_StrConcat( &TMP$1048$1, (void*)"andps\x09", 7ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1049$1, 0, 24ll );
	FBSTRING* vr$155 = fb_StrConcat( &TMP$1049$1, (void*)vr$152, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1050$1, 0, 24ll );
	FBSTRING* vr$158 = fb_StrConcat( &TMP$1050$1, (void*)vr$155, -1ll, (void*)&SRC$1, -1ll );
	FBSTRING* vr$160 = fb_StrAssign( (void*)&TMP$1051$1, -1ll, (void*)vr$158, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1051$1 );
	fb_StrDelete( &TMP$1051$1 );
	if( ISCOS$1 != -1ll ) goto label$538;
	{
		FBSTRING TMP$1053$2;
		FBSTRING TMP$1054$2;
		FBSTRING TMP$1055$2;
		FBSTRING TMP$1056$2;
		FBSTRING TMP$1057$2;
		FBSTRING TMP$1058$2;
		FBSTRING TMP$1059$2;
		FBSTRING TMP$1060$2;
		HPREPOPERAND( VREG_PIOVERTWO$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
		__builtin_memset( &TMP$1056$2, 0, 24ll );
		__builtin_memset( &TMP$1053$2, 0, 24ll );
		FBSTRING* vr$166 = fb_StrConcat( &TMP$1053$2, (void*)"addss\x09", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1054$2, 0, 24ll );
		FBSTRING* vr$169 = fb_StrConcat( &TMP$1054$2, (void*)vr$166, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1055$2, 0, 24ll );
		FBSTRING* vr$172 = fb_StrConcat( &TMP$1055$2, (void*)vr$169, -1ll, (void*)&SRC$1, -1ll );
		FBSTRING* vr$174 = fb_StrAssign( (void*)&TMP$1056$2, -1ll, (void*)vr$172, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1056$2 );
		fb_StrDelete( &TMP$1056$2 );
		HPREPOPERAND( VREG_TWOOVERPI$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
		__builtin_memset( &TMP$1060$2, 0, 24ll );
		__builtin_memset( &TMP$1057$2, 0, 24ll );
		FBSTRING* vr$179 = fb_StrConcat( &TMP$1057$2, (void*)"mulss\x09", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1058$2, 0, 24ll );
		FBSTRING* vr$182 = fb_StrConcat( &TMP$1058$2, (void*)vr$179, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1059$2, 0, 24ll );
		FBSTRING* vr$185 = fb_StrConcat( &TMP$1059$2, (void*)vr$182, -1ll, (void*)&SRC$1, -1ll );
		FBSTRING* vr$187 = fb_StrAssign( (void*)&TMP$1060$2, -1ll, (void*)vr$185, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1060$2 );
		fb_StrDelete( &TMP$1060$2 );
	}
	label$538:;
	label$537:;
	__builtin_memset( &TMP$1065$1, 0, 24ll );
	__builtin_memset( &TMP$1062$1, 0, 24ll );
	FBSTRING* vr$192 = fb_StrConcat( &TMP$1062$1, (void*)"cvttss2si\x09", 11ll, (void*)REGNAME$1, -1ll );
	__builtin_memset( &TMP$1063$1, 0, 24ll );
	FBSTRING* vr$195 = fb_StrConcat( &TMP$1063$1, (void*)vr$192, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1064$1, 0, 24ll );
	FBSTRING* vr$198 = fb_StrConcat( &TMP$1064$1, (void*)vr$195, -1ll, (void*)&DST$1, -1ll );
	FBSTRING* vr$200 = fb_StrAssign( (void*)&TMP$1065$1, -1ll, (void*)vr$198, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1065$1 );
	fb_StrDelete( &TMP$1065$1 );
	HPREPOPERAND( VREG_ONE$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	__builtin_memset( &TMP$1069$1, 0, 24ll );
	__builtin_memset( &TMP$1068$1, 0, 24ll );
	FBSTRING* vr$205 = fb_StrConcat( &TMP$1068$1, (void*)"movss\x09xmm7, ", 13ll, (void*)&SRC$1, -1ll );
	FBSTRING* vr$207 = fb_StrAssign( (void*)&TMP$1069$1, -1ll, (void*)vr$205, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1069$1 );
	fb_StrDelete( &TMP$1069$1 );
	__builtin_memset( &TMP$1074$1, 0, 24ll );
	__builtin_memset( &TMP$1071$1, 0, 24ll );
	FBSTRING* vr$212 = fb_StrConcat( &TMP$1071$1, (void*)"mov\x09\x09", 6ll, (void*)((uint8*)REGNAME$1 + 24ll), -1ll );
	__builtin_memset( &TMP$1072$1, 0, 24ll );
	FBSTRING* vr$215 = fb_StrConcat( &TMP$1072$1, (void*)vr$212, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1073$1, 0, 24ll );
	FBSTRING* vr$218 = fb_StrConcat( &TMP$1073$1, (void*)vr$215, -1ll, (void*)REGNAME$1, -1ll );
	FBSTRING* vr$220 = fb_StrAssign( (void*)&TMP$1074$1, -1ll, (void*)vr$218, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1074$1 );
	fb_StrDelete( &TMP$1074$1 );
	__builtin_memset( &TMP$1079$1, 0, 24ll );
	__builtin_memset( &TMP$1076$1, 0, 24ll );
	FBSTRING* vr$225 = fb_StrConcat( &TMP$1076$1, (void*)"cvtsi2ss\x09", 10ll, (void*)((uint8*)REGNAME$1 + 48ll), -1ll );
	__builtin_memset( &TMP$1077$1, 0, 24ll );
	FBSTRING* vr$228 = fb_StrConcat( &TMP$1077$1, (void*)vr$225, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1078$1, 0, 24ll );
	FBSTRING* vr$231 = fb_StrConcat( &TMP$1078$1, (void*)vr$228, -1ll, (void*)REGNAME$1, -1ll );
	FBSTRING* vr$233 = fb_StrAssign( (void*)&TMP$1079$1, -1ll, (void*)vr$231, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1079$1 );
	fb_StrDelete( &TMP$1079$1 );
	__builtin_memset( &TMP$1085$1, 0, 24ll );
	__builtin_memset( &TMP$1082$1, 0, 24ll );
	FBSTRING* vr$238 = fb_StrConcat( &TMP$1082$1, (void*)"shl\x09\x09", 6ll, (void*)((uint8*)REGNAME$1 + 24ll), -1ll );
	__builtin_memset( &TMP$1083$1, 0, 24ll );
	FBSTRING* vr$241 = fb_StrConcat( &TMP$1083$1, (void*)vr$238, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1084$1, 0, 24ll );
	FBSTRING* vr$244 = fb_StrConcat( &TMP$1084$1, (void*)vr$241, -1ll, (void*)"30", 3ll );
	FBSTRING* vr$246 = fb_StrAssign( (void*)&TMP$1085$1, -1ll, (void*)vr$244, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1085$1 );
	fb_StrDelete( &TMP$1085$1 );
	__builtin_memset( &TMP$1088$1, 0, 24ll );
	__builtin_memset( &TMP$1087$1, 0, 24ll );
	FBSTRING* vr$251 = fb_StrConcat( &TMP$1087$1, (void*)"not\x09\x09", 6ll, (void*)REGNAME$1, -1ll );
	FBSTRING* vr$253 = fb_StrAssign( (void*)&TMP$1088$1, -1ll, (void*)vr$251, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1088$1 );
	fb_StrDelete( &TMP$1088$1 );
	__builtin_memset( &TMP$1093$1, 0, 24ll );
	__builtin_memset( &TMP$1090$1, 0, 24ll );
	FBSTRING* vr$258 = fb_StrConcat( &TMP$1090$1, (void*)"and\x09\x09", 6ll, (void*)((uint8*)REGNAME$1 + 24ll), -1ll );
	__builtin_memset( &TMP$1091$1, 0, 24ll );
	FBSTRING* vr$261 = fb_StrConcat( &TMP$1091$1, (void*)vr$258, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1092$1, 0, 24ll );
	FBSTRING* vr$264 = fb_StrConcat( &TMP$1092$1, (void*)vr$261, -1ll, (void*)"0x80000000", 11ll );
	FBSTRING* vr$266 = fb_StrAssign( (void*)&TMP$1093$1, -1ll, (void*)vr$264, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1093$1 );
	fb_StrDelete( &TMP$1093$1 );
	__builtin_memset( &TMP$1098$1, 0, 24ll );
	__builtin_memset( &TMP$1095$1, 0, 24ll );
	FBSTRING* vr$271 = fb_StrConcat( &TMP$1095$1, (void*)"and\x09\x09", 6ll, (void*)REGNAME$1, -1ll );
	__builtin_memset( &TMP$1096$1, 0, 24ll );
	FBSTRING* vr$274 = fb_StrConcat( &TMP$1096$1, (void*)vr$271, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1097$1, 0, 24ll );
	FBSTRING* vr$277 = fb_StrConcat( &TMP$1097$1, (void*)vr$274, -1ll, (void*)"0x1", 4ll );
	FBSTRING* vr$279 = fb_StrAssign( (void*)&TMP$1098$1, -1ll, (void*)vr$277, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1098$1 );
	fb_StrDelete( &TMP$1098$1 );
	__builtin_memset( &TMP$1103$1, 0, 24ll );
	__builtin_memset( &TMP$1100$1, 0, 24ll );
	FBSTRING* vr$284 = fb_StrConcat( &TMP$1100$1, (void*)"subss\x09", 7ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1101$1, 0, 24ll );
	FBSTRING* vr$287 = fb_StrConcat( &TMP$1101$1, (void*)vr$284, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1102$1, 0, 24ll );
	FBSTRING* vr$290 = fb_StrConcat( &TMP$1102$1, (void*)vr$287, -1ll, (void*)((uint8*)REGNAME$1 + 48ll), -1ll );
	FBSTRING* vr$292 = fb_StrAssign( (void*)&TMP$1103$1, -1ll, (void*)vr$290, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1103$1 );
	fb_StrDelete( &TMP$1103$1 );
	__builtin_memset( &TMP$1106$1, 0, 24ll );
	__builtin_memset( &TMP$1105$1, 0, 24ll );
	FBSTRING* vr$297 = fb_StrConcat( &TMP$1105$1, (void*)"dec\x09\x09", 6ll, (void*)REGNAME$1, -1ll );
	FBSTRING* vr$299 = fb_StrAssign( (void*)&TMP$1106$1, -1ll, (void*)vr$297, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1106$1 );
	fb_StrDelete( &TMP$1106$1 );
	__builtin_memset( &TMP$1111$1, 0, 24ll );
	__builtin_memset( &TMP$1108$1, 0, 24ll );
	FBSTRING* vr$304 = fb_StrConcat( &TMP$1108$1, (void*)"minss\x09", 7ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1109$1, 0, 24ll );
	FBSTRING* vr$307 = fb_StrConcat( &TMP$1109$1, (void*)vr$304, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1110$1, 0, 24ll );
	FBSTRING* vr$310 = fb_StrConcat( &TMP$1110$1, (void*)vr$307, -1ll, (void*)"xmm7", 5ll );
	FBSTRING* vr$312 = fb_StrAssign( (void*)&TMP$1111$1, -1ll, (void*)vr$310, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1111$1 );
	fb_StrDelete( &TMP$1111$1 );
	__builtin_memset( &TMP$1116$1, 0, 24ll );
	__builtin_memset( &TMP$1113$1, 0, 24ll );
	FBSTRING* vr$317 = fb_StrConcat( &TMP$1113$1, (void*)"movd\x09\x09", 7ll, (void*)((uint8*)REGNAME$1 + 48ll), -1ll );
	__builtin_memset( &TMP$1114$1, 0, 24ll );
	FBSTRING* vr$320 = fb_StrConcat( &TMP$1114$1, (void*)vr$317, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1115$1, 0, 24ll );
	FBSTRING* vr$323 = fb_StrConcat( &TMP$1115$1, (void*)vr$320, -1ll, (void*)REGNAME$1, -1ll );
	FBSTRING* vr$325 = fb_StrAssign( (void*)&TMP$1116$1, -1ll, (void*)vr$323, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1116$1 );
	fb_StrDelete( &TMP$1116$1 );
	__builtin_memset( &TMP$1120$1, 0, 24ll );
	__builtin_memset( &TMP$1119$1, 0, 24ll );
	FBSTRING* vr$330 = fb_StrConcat( &TMP$1119$1, (void*)"subss\x09xmm7, ", 13ll, (void*)&DST$1, -1ll );
	FBSTRING* vr$332 = fb_StrAssign( (void*)&TMP$1120$1, -1ll, (void*)vr$330, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1120$1 );
	fb_StrDelete( &TMP$1120$1 );
	__builtin_memset( &TMP$1124$1, 0, 24ll );
	__builtin_memset( &TMP$1123$1, 0, 24ll );
	FBSTRING* vr$337 = fb_StrConcat( &TMP$1123$1, (void*)"andps\x09xmm7, ", 13ll, (void*)((uint8*)REGNAME$1 + 48ll), -1ll );
	FBSTRING* vr$339 = fb_StrAssign( (void*)&TMP$1124$1, -1ll, (void*)vr$337, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1124$1 );
	fb_StrDelete( &TMP$1124$1 );
	__builtin_memset( &TMP$1129$1, 0, 24ll );
	__builtin_memset( &TMP$1126$1, 0, 24ll );
	FBSTRING* vr$344 = fb_StrConcat( &TMP$1126$1, (void*)"andnps\x09", 8ll, (void*)((uint8*)REGNAME$1 + 48ll), -1ll );
	__builtin_memset( &TMP$1127$1, 0, 24ll );
	FBSTRING* vr$347 = fb_StrConcat( &TMP$1127$1, (void*)vr$344, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1128$1, 0, 24ll );
	FBSTRING* vr$350 = fb_StrConcat( &TMP$1128$1, (void*)vr$347, -1ll, (void*)&DST$1, -1ll );
	FBSTRING* vr$352 = fb_StrAssign( (void*)&TMP$1129$1, -1ll, (void*)vr$350, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1129$1 );
	fb_StrDelete( &TMP$1129$1 );
	__builtin_memset( &TMP$1133$1, 0, 24ll );
	__builtin_memset( &TMP$1132$1, 0, 24ll );
	FBSTRING* vr$357 = fb_StrConcat( &TMP$1132$1, (void*)"orps\x09\x09xmm7, ", 13ll, (void*)((uint8*)REGNAME$1 + 48ll), -1ll );
	FBSTRING* vr$359 = fb_StrAssign( (void*)&TMP$1133$1, -1ll, (void*)vr$357, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1133$1 );
	fb_StrDelete( &TMP$1133$1 );
	if( ISCOS$1 != 0ll ) goto label$540;
	{
		FBSTRING TMP$1136$2;
		FBSTRING TMP$1137$2;
		FBSTRING TMP$1138$2;
		FBSTRING TMP$1139$2;
		__builtin_memset( &TMP$1139$2, 0, 24ll );
		__builtin_memset( &TMP$1136$2, 0, 24ll );
		FBSTRING* vr$365 = fb_StrConcat( &TMP$1136$2, (void*)"xor\x09\x09", 6ll, (void*)((uint8*)REGNAME$1 + 24ll), -1ll );
		__builtin_memset( &TMP$1137$2, 0, 24ll );
		FBSTRING* vr$368 = fb_StrConcat( &TMP$1137$2, (void*)vr$365, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1138$2, 0, 24ll );
		FBSTRING* vr$371 = fb_StrConcat( &TMP$1138$2, (void*)vr$368, -1ll, (void*)"[esp]", 6ll );
		FBSTRING* vr$373 = fb_StrAssign( (void*)&TMP$1139$2, -1ll, (void*)vr$371, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1139$2 );
		fb_StrDelete( &TMP$1139$2 );
	}
	label$540:;
	label$539:;
	__builtin_memset( &TMP$1143$1, 0, 24ll );
	__builtin_memset( &TMP$1140$1, 0, 24ll );
	FBSTRING* vr$378 = fb_StrConcat( &TMP$1140$1, (void*)"movd\x09\x09", 7ll, (void*)REGNAME$1, -1ll );
	__builtin_memset( &TMP$1141$1, 0, 24ll );
	FBSTRING* vr$381 = fb_StrConcat( &TMP$1141$1, (void*)vr$378, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1142$1, 0, 24ll );
	FBSTRING* vr$384 = fb_StrConcat( &TMP$1142$1, (void*)vr$381, -1ll, (void*)"xmm7", 5ll );
	FBSTRING* vr$386 = fb_StrAssign( (void*)&TMP$1143$1, -1ll, (void*)vr$384, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1143$1 );
	fb_StrDelete( &TMP$1143$1 );
	OUTP( (uint8*)"mulss\x09xmm7, xmm7" );
	__builtin_memset( &TMP$1149$1, 0, 24ll );
	__builtin_memset( &TMP$1146$1, 0, 24ll );
	FBSTRING* vr$391 = fb_StrConcat( &TMP$1146$1, (void*)"or\x09\x09", 5ll, (void*)((uint8*)REGNAME$1 + 24ll), -1ll );
	__builtin_memset( &TMP$1147$1, 0, 24ll );
	FBSTRING* vr$394 = fb_StrConcat( &TMP$1147$1, (void*)vr$391, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1148$1, 0, 24ll );
	FBSTRING* vr$397 = fb_StrConcat( &TMP$1148$1, (void*)vr$394, -1ll, (void*)REGNAME$1, -1ll );
	FBSTRING* vr$399 = fb_StrAssign( (void*)&TMP$1149$1, -1ll, (void*)vr$397, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1149$1 );
	fb_StrDelete( &TMP$1149$1 );
	__builtin_memset( &TMP$1154$1, 0, 24ll );
	__builtin_memset( &TMP$1151$1, 0, 24ll );
	FBSTRING* vr$404 = fb_StrConcat( &TMP$1151$1, (void*)"movss\x09", 7ll, (void*)((uint8*)REGNAME$1 + 48ll), -1ll );
	__builtin_memset( &TMP$1152$1, 0, 24ll );
	FBSTRING* vr$407 = fb_StrConcat( &TMP$1152$1, (void*)vr$404, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1153$1, 0, 24ll );
	FBSTRING* vr$410 = fb_StrConcat( &TMP$1153$1, (void*)vr$407, -1ll, (void*)"xmm7", 5ll );
	FBSTRING* vr$412 = fb_StrAssign( (void*)&TMP$1154$1, -1ll, (void*)vr$410, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1154$1 );
	fb_StrDelete( &TMP$1154$1 );
	HPREPOPERAND( VREG_SIN_C3$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	__builtin_memset( &TMP$1158$1, 0, 24ll );
	__builtin_memset( &TMP$1157$1, 0, 24ll );
	FBSTRING* vr$417 = fb_StrConcat( &TMP$1157$1, (void*)"mulss\x09xmm7, ", 13ll, (void*)&SRC$1, -1ll );
	FBSTRING* vr$419 = fb_StrAssign( (void*)&TMP$1158$1, -1ll, (void*)vr$417, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1158$1 );
	fb_StrDelete( &TMP$1158$1 );
	HPREPOPERAND( VREG_SIN_C2$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	__builtin_memset( &TMP$1162$1, 0, 24ll );
	__builtin_memset( &TMP$1161$1, 0, 24ll );
	FBSTRING* vr$424 = fb_StrConcat( &TMP$1161$1, (void*)"addss\x09xmm7, ", 13ll, (void*)&SRC$1, -1ll );
	FBSTRING* vr$426 = fb_StrAssign( (void*)&TMP$1162$1, -1ll, (void*)vr$424, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1162$1 );
	fb_StrDelete( &TMP$1162$1 );
	__builtin_memset( &TMP$1164$1, 0, 24ll );
	__builtin_memset( &TMP$1163$1, 0, 24ll );
	FBSTRING* vr$431 = fb_StrConcat( &TMP$1163$1, (void*)"mulss\x09xmm7, ", 13ll, (void*)((uint8*)REGNAME$1 + 48ll), -1ll );
	FBSTRING* vr$433 = fb_StrAssign( (void*)&TMP$1164$1, -1ll, (void*)vr$431, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1164$1 );
	fb_StrDelete( &TMP$1164$1 );
	__builtin_memset( &TMP$1168$1, 0, 24ll );
	__builtin_memset( &TMP$1165$1, 0, 24ll );
	FBSTRING* vr$438 = fb_StrConcat( &TMP$1165$1, (void*)"movd\x09\x09", 7ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1166$1, 0, 24ll );
	FBSTRING* vr$441 = fb_StrConcat( &TMP$1166$1, (void*)vr$438, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1167$1, 0, 24ll );
	FBSTRING* vr$444 = fb_StrConcat( &TMP$1167$1, (void*)vr$441, -1ll, (void*)((uint8*)REGNAME$1 + 24ll), -1ll );
	FBSTRING* vr$446 = fb_StrAssign( (void*)&TMP$1168$1, -1ll, (void*)vr$444, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1168$1 );
	fb_StrDelete( &TMP$1168$1 );
	HPREPOPERAND( VREG_SIN_C1$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	__builtin_memset( &TMP$1170$1, 0, 24ll );
	__builtin_memset( &TMP$1169$1, 0, 24ll );
	FBSTRING* vr$451 = fb_StrConcat( &TMP$1169$1, (void*)"addss\x09xmm7, ", 13ll, (void*)&SRC$1, -1ll );
	FBSTRING* vr$453 = fb_StrAssign( (void*)&TMP$1170$1, -1ll, (void*)vr$451, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1170$1 );
	fb_StrDelete( &TMP$1170$1 );
	__builtin_memset( &TMP$1172$1, 0, 24ll );
	__builtin_memset( &TMP$1171$1, 0, 24ll );
	FBSTRING* vr$458 = fb_StrConcat( &TMP$1171$1, (void*)"mulss\x09xmm7, ", 13ll, (void*)((uint8*)REGNAME$1 + 48ll), -1ll );
	FBSTRING* vr$460 = fb_StrAssign( (void*)&TMP$1172$1, -1ll, (void*)vr$458, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1172$1 );
	fb_StrDelete( &TMP$1172$1 );
	HPREPOPERAND( VREG_SIN_C0$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	__builtin_memset( &TMP$1174$1, 0, 24ll );
	__builtin_memset( &TMP$1173$1, 0, 24ll );
	FBSTRING* vr$465 = fb_StrConcat( &TMP$1173$1, (void*)"addss\x09xmm7, ", 13ll, (void*)&SRC$1, -1ll );
	FBSTRING* vr$467 = fb_StrAssign( (void*)&TMP$1174$1, -1ll, (void*)vr$465, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1174$1 );
	fb_StrDelete( &TMP$1174$1 );
	__builtin_memset( &TMP$1178$1, 0, 24ll );
	__builtin_memset( &TMP$1175$1, 0, 24ll );
	FBSTRING* vr$472 = fb_StrConcat( &TMP$1175$1, (void*)"mulss\x09", 7ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1176$1, 0, 24ll );
	FBSTRING* vr$475 = fb_StrConcat( &TMP$1176$1, (void*)vr$472, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1177$1, 0, 24ll );
	FBSTRING* vr$478 = fb_StrConcat( &TMP$1177$1, (void*)vr$475, -1ll, (void*)"xmm7", 5ll );
	FBSTRING* vr$480 = fb_StrAssign( (void*)&TMP$1178$1, -1ll, (void*)vr$478, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1178$1 );
	fb_StrDelete( &TMP$1178$1 );
	STACKPOINTER$1 = 4ll;
	{
		I$1 = 0ll;
		label$544:;
		{
			if( *(int64*)((uint8*)ISFREE$1 + (I$1 << 3ll)) != 0ll ) goto label$546;
			{
				if( I$1 >= 2ll ) goto label$548;
				{
					FBSTRING TMP$1180$5;
					FBSTRING TMP$1181$5;
					FBSTRING TMP$1182$5;
					FBSTRING TMP$1183$5;
					FBSTRING TMP$1184$5;
					FBSTRING TMP$1185$5;
					__builtin_memset( &TMP$1185$5, 0, 24ll );
					FBSTRING* vr$486 = fb_LongintToStr( STACKPOINTER$1 );
					__builtin_memset( &TMP$1180$5, 0, 24ll );
					FBSTRING* vr$491 = fb_StrConcat( &TMP$1180$5, (void*)"mov ", 5ll, (void*)((uint8*)REGNAME$1 + (I$1 * 24ll)), -1ll );
					__builtin_memset( &TMP$1181$5, 0, 24ll );
					FBSTRING* vr$494 = fb_StrConcat( &TMP$1181$5, (void*)vr$491, -1ll, (void*)", ", 3ll );
					__builtin_memset( &TMP$1182$5, 0, 24ll );
					FBSTRING* vr$497 = fb_StrConcat( &TMP$1182$5, (void*)vr$494, -1ll, (void*)"[esp+", 6ll );
					__builtin_memset( &TMP$1183$5, 0, 24ll );
					FBSTRING* vr$500 = fb_StrConcat( &TMP$1183$5, (void*)vr$497, -1ll, (void*)vr$486, -1ll );
					__builtin_memset( &TMP$1184$5, 0, 24ll );
					FBSTRING* vr$503 = fb_StrConcat( &TMP$1184$5, (void*)vr$500, -1ll, (void*)"]", 2ll );
					FBSTRING* vr$505 = fb_StrAssign( (void*)&TMP$1185$5, -1ll, (void*)vr$503, -1ll, 0 );
					OUTP( *(uint8**)&TMP$1185$5 );
					fb_StrDelete( &TMP$1185$5 );
				}
				goto label$547;
				label$548:;
				{
					FBSTRING TMP$1186$5;
					FBSTRING TMP$1187$5;
					FBSTRING TMP$1188$5;
					FBSTRING TMP$1189$5;
					FBSTRING TMP$1190$5;
					FBSTRING TMP$1191$5;
					__builtin_memset( &TMP$1191$5, 0, 24ll );
					FBSTRING* vr$508 = fb_LongintToStr( STACKPOINTER$1 );
					__builtin_memset( &TMP$1186$5, 0, 24ll );
					FBSTRING* vr$513 = fb_StrConcat( &TMP$1186$5, (void*)"movss ", 7ll, (void*)((uint8*)REGNAME$1 + (I$1 * 24ll)), -1ll );
					__builtin_memset( &TMP$1187$5, 0, 24ll );
					FBSTRING* vr$516 = fb_StrConcat( &TMP$1187$5, (void*)vr$513, -1ll, (void*)", ", 3ll );
					__builtin_memset( &TMP$1188$5, 0, 24ll );
					FBSTRING* vr$519 = fb_StrConcat( &TMP$1188$5, (void*)vr$516, -1ll, (void*)"[esp+", 6ll );
					__builtin_memset( &TMP$1189$5, 0, 24ll );
					FBSTRING* vr$522 = fb_StrConcat( &TMP$1189$5, (void*)vr$519, -1ll, (void*)vr$508, -1ll );
					__builtin_memset( &TMP$1190$5, 0, 24ll );
					FBSTRING* vr$525 = fb_StrConcat( &TMP$1190$5, (void*)vr$522, -1ll, (void*)"]", 2ll );
					FBSTRING* vr$527 = fb_StrAssign( (void*)&TMP$1191$5, -1ll, (void*)vr$525, -1ll, 0 );
					OUTP( *(uint8**)&TMP$1191$5 );
					fb_StrDelete( &TMP$1191$5 );
				}
				label$547:;
				STACKPOINTER$1 = STACKPOINTER$1 + 4ll;
			}
			label$546:;
			label$545:;
		}
		label$542:;
		I$1 = I$1 + 1ll;
		label$541:;
		if( I$1 <= 2ll ) goto label$544;
		label$543:;
	}
	__builtin_memset( &TMP$1193$1, 0, 24ll );
	FBSTRING* vr$533 = fb_LongintToStr( STACKSIZE$1 );
	__builtin_memset( &TMP$1192$1, 0, 24ll );
	FBSTRING* vr$536 = fb_StrConcat( &TMP$1192$1, (void*)"add esp, ", 10ll, (void*)vr$533, -1ll );
	FBSTRING* vr$538 = fb_StrAssign( (void*)&TMP$1193$1, -1ll, (void*)vr$536, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1193$1 );
	fb_StrDelete( &TMP$1193$1 );
	label$510:;
}

static void _EMITSIN_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1194$1;
	FBSTRING TMP$1212$1;
	FBSTRING TMP$1213$1;
	label$549:;
	static FBSTRING DST$1;
	static int64 DDSIZE$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$551;
	TMP$1194$1 = 22ll;
	goto label$792;
	label$551:;
	TMP$1194$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$792:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1194$1 * 56ll)) + 8ll);
	if( ((int64)-(DDSIZE$1 == 4ll) & (int64)-(*(int64*)((uint8*)&ENV$ + 240ll) == 1ll)) == 0ll ) goto label$553;
	{
		_EMITSINCOS_FAST_SSE( DVREG$1, 0ll );
		goto label$550;
	}
	label$553:;
	label$552:;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 1ll ) goto label$555;
	{
		FBSTRING TMP$1195$2;
		FBSTRING TMP$1196$2;
		__builtin_memset( &TMP$1196$2, 0, 24ll );
		FBSTRING* vr$13 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1195$2, 0, 24ll );
		FBSTRING* vr$16 = fb_StrConcat( &TMP$1195$2, (void*)"sub esp, ", 10ll, (void*)vr$13, -1ll );
		FBSTRING* vr$18 = fb_StrAssign( (void*)&TMP$1196$2, -1ll, (void*)vr$16, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1196$2 );
		fb_StrDelete( &TMP$1196$2 );
		if( DDSIZE$1 <= 4ll ) goto label$557;
		{
			FBSTRING TMP$1197$3;
			FBSTRING TMP$1198$3;
			__builtin_memset( &TMP$1198$3, 0, 24ll );
			__builtin_memset( &TMP$1197$3, 0, 24ll );
			FBSTRING* vr$24 = fb_StrConcat( &TMP$1197$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$26 = fb_StrAssign( (void*)&TMP$1198$3, -1ll, (void*)vr$24, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1198$3 );
			fb_StrDelete( &TMP$1198$3 );
			OUTP( (uint8*)"fld qword ptr [esp]" );
		}
		goto label$556;
		label$557:;
		{
			FBSTRING TMP$1199$3;
			FBSTRING TMP$1200$3;
			__builtin_memset( &TMP$1200$3, 0, 24ll );
			__builtin_memset( &TMP$1199$3, 0, 24ll );
			FBSTRING* vr$31 = fb_StrConcat( &TMP$1199$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$33 = fb_StrAssign( (void*)&TMP$1200$3, -1ll, (void*)vr$31, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1200$3 );
			fb_StrDelete( &TMP$1200$3 );
			OUTP( (uint8*)"fld dword ptr [esp]" );
		}
		label$556:;
	}
	label$555:;
	label$554:;
	OUTP( (uint8*)"fsin" );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$559;
	{
		FBSTRING TMP$1202$2;
		FBSTRING TMP$1203$2;
		__builtin_memset( &TMP$1203$2, 0, 24ll );
		FBSTRING* vr$38 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1202$2, 0, 24ll );
		FBSTRING* vr$41 = fb_StrConcat( &TMP$1202$2, (void*)"sub esp, ", 10ll, (void*)vr$38, -1ll );
		FBSTRING* vr$43 = fb_StrAssign( (void*)&TMP$1203$2, -1ll, (void*)vr$41, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1203$2 );
		fb_StrDelete( &TMP$1203$2 );
	}
	label$559:;
	label$558:;
	if( DDSIZE$1 <= 4ll ) goto label$561;
	{
		FBSTRING TMP$1204$2;
		FBSTRING TMP$1205$2;
		FBSTRING TMP$1206$2;
		FBSTRING TMP$1207$2;
		OUTP( (uint8*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$1207$2, 0, 24ll );
		__builtin_memset( &TMP$1204$2, 0, 24ll );
		FBSTRING* vr$49 = fb_StrConcat( &TMP$1204$2, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1205$2, 0, 24ll );
		FBSTRING* vr$52 = fb_StrConcat( &TMP$1205$2, (void*)vr$49, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1206$2, 0, 24ll );
		FBSTRING* vr$55 = fb_StrConcat( &TMP$1206$2, (void*)vr$52, -1ll, (void*)"qword ptr [esp]", 16ll );
		FBSTRING* vr$57 = fb_StrAssign( (void*)&TMP$1207$2, -1ll, (void*)vr$55, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1207$2 );
		fb_StrDelete( &TMP$1207$2 );
	}
	goto label$560;
	label$561:;
	{
		FBSTRING TMP$1208$2;
		FBSTRING TMP$1209$2;
		FBSTRING TMP$1210$2;
		FBSTRING TMP$1211$2;
		OUTP( (uint8*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$1211$2, 0, 24ll );
		__builtin_memset( &TMP$1208$2, 0, 24ll );
		FBSTRING* vr$62 = fb_StrConcat( &TMP$1208$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1209$2, 0, 24ll );
		FBSTRING* vr$65 = fb_StrConcat( &TMP$1209$2, (void*)vr$62, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1210$2, 0, 24ll );
		FBSTRING* vr$68 = fb_StrConcat( &TMP$1210$2, (void*)vr$65, -1ll, (void*)"dword ptr [esp]", 16ll );
		FBSTRING* vr$70 = fb_StrAssign( (void*)&TMP$1211$2, -1ll, (void*)vr$68, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1211$2 );
		fb_StrDelete( &TMP$1211$2 );
	}
	label$560:;
	__builtin_memset( &TMP$1213$1, 0, 24ll );
	FBSTRING* vr$73 = fb_LongintToStr( DDSIZE$1 );
	__builtin_memset( &TMP$1212$1, 0, 24ll );
	FBSTRING* vr$76 = fb_StrConcat( &TMP$1212$1, (void*)"add esp, ", 10ll, (void*)vr$73, -1ll );
	FBSTRING* vr$78 = fb_StrAssign( (void*)&TMP$1213$1, -1ll, (void*)vr$76, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1213$1 );
	fb_StrDelete( &TMP$1213$1 );
	label$550:;
}

static void _EMITASIN_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1214$1;
	FBSTRING TMP$1234$1;
	FBSTRING TMP$1235$1;
	label$562:;
	static FBSTRING DST$1;
	static int64 DDSIZE$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$564;
	TMP$1214$1 = 22ll;
	goto label$793;
	label$564:;
	TMP$1214$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$793:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1214$1 * 56ll)) + 8ll);
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 1ll ) goto label$566;
	{
		FBSTRING TMP$1215$2;
		FBSTRING TMP$1216$2;
		__builtin_memset( &TMP$1216$2, 0, 24ll );
		FBSTRING* vr$9 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1215$2, 0, 24ll );
		FBSTRING* vr$12 = fb_StrConcat( &TMP$1215$2, (void*)"sub esp, ", 10ll, (void*)vr$9, -1ll );
		FBSTRING* vr$14 = fb_StrAssign( (void*)&TMP$1216$2, -1ll, (void*)vr$12, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1216$2 );
		fb_StrDelete( &TMP$1216$2 );
		if( DDSIZE$1 <= 4ll ) goto label$568;
		{
			FBSTRING TMP$1217$3;
			FBSTRING TMP$1218$3;
			__builtin_memset( &TMP$1218$3, 0, 24ll );
			__builtin_memset( &TMP$1217$3, 0, 24ll );
			FBSTRING* vr$20 = fb_StrConcat( &TMP$1217$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$22 = fb_StrAssign( (void*)&TMP$1218$3, -1ll, (void*)vr$20, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1218$3 );
			fb_StrDelete( &TMP$1218$3 );
			OUTP( (uint8*)"fld qword ptr [esp]" );
		}
		goto label$567;
		label$568:;
		{
			FBSTRING TMP$1219$3;
			FBSTRING TMP$1220$3;
			__builtin_memset( &TMP$1220$3, 0, 24ll );
			__builtin_memset( &TMP$1219$3, 0, 24ll );
			FBSTRING* vr$27 = fb_StrConcat( &TMP$1219$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$29 = fb_StrAssign( (void*)&TMP$1220$3, -1ll, (void*)vr$27, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1220$3 );
			fb_StrDelete( &TMP$1220$3 );
			OUTP( (uint8*)"fld dword ptr [esp]" );
		}
		label$567:;
	}
	label$566:;
	label$565:;
	OUTP( (uint8*)"fld st(0)" );
	OUTP( (uint8*)"fmul st(0), st(0)" );
	OUTP( (uint8*)"fld1" );
	OUTP( (uint8*)"fsubrp" );
	OUTP( (uint8*)"fsqrt" );
	OUTP( (uint8*)"fpatan" );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$570;
	{
		FBSTRING TMP$1224$2;
		FBSTRING TMP$1225$2;
		__builtin_memset( &TMP$1225$2, 0, 24ll );
		FBSTRING* vr$34 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1224$2, 0, 24ll );
		FBSTRING* vr$37 = fb_StrConcat( &TMP$1224$2, (void*)"sub esp, ", 10ll, (void*)vr$34, -1ll );
		FBSTRING* vr$39 = fb_StrAssign( (void*)&TMP$1225$2, -1ll, (void*)vr$37, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1225$2 );
		fb_StrDelete( &TMP$1225$2 );
	}
	label$570:;
	label$569:;
	if( DDSIZE$1 <= 4ll ) goto label$572;
	{
		FBSTRING TMP$1226$2;
		FBSTRING TMP$1227$2;
		FBSTRING TMP$1228$2;
		FBSTRING TMP$1229$2;
		OUTP( (uint8*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$1229$2, 0, 24ll );
		__builtin_memset( &TMP$1226$2, 0, 24ll );
		FBSTRING* vr$45 = fb_StrConcat( &TMP$1226$2, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1227$2, 0, 24ll );
		FBSTRING* vr$48 = fb_StrConcat( &TMP$1227$2, (void*)vr$45, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1228$2, 0, 24ll );
		FBSTRING* vr$51 = fb_StrConcat( &TMP$1228$2, (void*)vr$48, -1ll, (void*)"qword ptr [esp]", 16ll );
		FBSTRING* vr$53 = fb_StrAssign( (void*)&TMP$1229$2, -1ll, (void*)vr$51, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1229$2 );
		fb_StrDelete( &TMP$1229$2 );
	}
	goto label$571;
	label$572:;
	{
		FBSTRING TMP$1230$2;
		FBSTRING TMP$1231$2;
		FBSTRING TMP$1232$2;
		FBSTRING TMP$1233$2;
		OUTP( (uint8*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$1233$2, 0, 24ll );
		__builtin_memset( &TMP$1230$2, 0, 24ll );
		FBSTRING* vr$58 = fb_StrConcat( &TMP$1230$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1231$2, 0, 24ll );
		FBSTRING* vr$61 = fb_StrConcat( &TMP$1231$2, (void*)vr$58, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1232$2, 0, 24ll );
		FBSTRING* vr$64 = fb_StrConcat( &TMP$1232$2, (void*)vr$61, -1ll, (void*)"dword ptr [esp]", 16ll );
		FBSTRING* vr$66 = fb_StrAssign( (void*)&TMP$1233$2, -1ll, (void*)vr$64, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1233$2 );
		fb_StrDelete( &TMP$1233$2 );
	}
	label$571:;
	__builtin_memset( &TMP$1235$1, 0, 24ll );
	FBSTRING* vr$69 = fb_LongintToStr( DDSIZE$1 );
	__builtin_memset( &TMP$1234$1, 0, 24ll );
	FBSTRING* vr$72 = fb_StrConcat( &TMP$1234$1, (void*)"add esp, ", 10ll, (void*)vr$69, -1ll );
	FBSTRING* vr$74 = fb_StrAssign( (void*)&TMP$1235$1, -1ll, (void*)vr$72, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1235$1 );
	fb_StrDelete( &TMP$1235$1 );
	label$563:;
}

static void _EMITCOS_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1236$1;
	FBSTRING TMP$1254$1;
	FBSTRING TMP$1255$1;
	label$573:;
	static FBSTRING DST$1;
	static int64 DDSIZE$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$575;
	TMP$1236$1 = 22ll;
	goto label$794;
	label$575:;
	TMP$1236$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$794:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1236$1 * 56ll)) + 8ll);
	if( ((int64)-(DDSIZE$1 == 4ll) & (int64)-(*(int64*)((uint8*)&ENV$ + 240ll) == 1ll)) == 0ll ) goto label$577;
	{
		_EMITSINCOS_FAST_SSE( DVREG$1, -1ll );
		goto label$574;
	}
	label$577:;
	label$576:;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 1ll ) goto label$579;
	{
		FBSTRING TMP$1237$2;
		FBSTRING TMP$1238$2;
		__builtin_memset( &TMP$1238$2, 0, 24ll );
		FBSTRING* vr$13 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1237$2, 0, 24ll );
		FBSTRING* vr$16 = fb_StrConcat( &TMP$1237$2, (void*)"sub esp, ", 10ll, (void*)vr$13, -1ll );
		FBSTRING* vr$18 = fb_StrAssign( (void*)&TMP$1238$2, -1ll, (void*)vr$16, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1238$2 );
		fb_StrDelete( &TMP$1238$2 );
		if( DDSIZE$1 <= 4ll ) goto label$581;
		{
			FBSTRING TMP$1239$3;
			FBSTRING TMP$1240$3;
			__builtin_memset( &TMP$1240$3, 0, 24ll );
			__builtin_memset( &TMP$1239$3, 0, 24ll );
			FBSTRING* vr$24 = fb_StrConcat( &TMP$1239$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$26 = fb_StrAssign( (void*)&TMP$1240$3, -1ll, (void*)vr$24, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1240$3 );
			fb_StrDelete( &TMP$1240$3 );
			OUTP( (uint8*)"fld qword ptr [esp]" );
		}
		goto label$580;
		label$581:;
		{
			FBSTRING TMP$1241$3;
			FBSTRING TMP$1242$3;
			__builtin_memset( &TMP$1242$3, 0, 24ll );
			__builtin_memset( &TMP$1241$3, 0, 24ll );
			FBSTRING* vr$31 = fb_StrConcat( &TMP$1241$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$33 = fb_StrAssign( (void*)&TMP$1242$3, -1ll, (void*)vr$31, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1242$3 );
			fb_StrDelete( &TMP$1242$3 );
			OUTP( (uint8*)"fld dword ptr [esp]" );
		}
		label$580:;
	}
	label$579:;
	label$578:;
	OUTP( (uint8*)"fcos" );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$583;
	{
		FBSTRING TMP$1244$2;
		FBSTRING TMP$1245$2;
		__builtin_memset( &TMP$1245$2, 0, 24ll );
		FBSTRING* vr$38 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1244$2, 0, 24ll );
		FBSTRING* vr$41 = fb_StrConcat( &TMP$1244$2, (void*)"sub esp, ", 10ll, (void*)vr$38, -1ll );
		FBSTRING* vr$43 = fb_StrAssign( (void*)&TMP$1245$2, -1ll, (void*)vr$41, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1245$2 );
		fb_StrDelete( &TMP$1245$2 );
	}
	label$583:;
	label$582:;
	if( DDSIZE$1 <= 4ll ) goto label$585;
	{
		FBSTRING TMP$1246$2;
		FBSTRING TMP$1247$2;
		FBSTRING TMP$1248$2;
		FBSTRING TMP$1249$2;
		OUTP( (uint8*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$1249$2, 0, 24ll );
		__builtin_memset( &TMP$1246$2, 0, 24ll );
		FBSTRING* vr$49 = fb_StrConcat( &TMP$1246$2, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1247$2, 0, 24ll );
		FBSTRING* vr$52 = fb_StrConcat( &TMP$1247$2, (void*)vr$49, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1248$2, 0, 24ll );
		FBSTRING* vr$55 = fb_StrConcat( &TMP$1248$2, (void*)vr$52, -1ll, (void*)"qword ptr [esp]", 16ll );
		FBSTRING* vr$57 = fb_StrAssign( (void*)&TMP$1249$2, -1ll, (void*)vr$55, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1249$2 );
		fb_StrDelete( &TMP$1249$2 );
	}
	goto label$584;
	label$585:;
	{
		FBSTRING TMP$1250$2;
		FBSTRING TMP$1251$2;
		FBSTRING TMP$1252$2;
		FBSTRING TMP$1253$2;
		OUTP( (uint8*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$1253$2, 0, 24ll );
		__builtin_memset( &TMP$1250$2, 0, 24ll );
		FBSTRING* vr$62 = fb_StrConcat( &TMP$1250$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1251$2, 0, 24ll );
		FBSTRING* vr$65 = fb_StrConcat( &TMP$1251$2, (void*)vr$62, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1252$2, 0, 24ll );
		FBSTRING* vr$68 = fb_StrConcat( &TMP$1252$2, (void*)vr$65, -1ll, (void*)"dword ptr [esp]", 16ll );
		FBSTRING* vr$70 = fb_StrAssign( (void*)&TMP$1253$2, -1ll, (void*)vr$68, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1253$2 );
		fb_StrDelete( &TMP$1253$2 );
	}
	label$584:;
	__builtin_memset( &TMP$1255$1, 0, 24ll );
	FBSTRING* vr$73 = fb_LongintToStr( DDSIZE$1 );
	__builtin_memset( &TMP$1254$1, 0, 24ll );
	FBSTRING* vr$76 = fb_StrConcat( &TMP$1254$1, (void*)"add esp, ", 10ll, (void*)vr$73, -1ll );
	FBSTRING* vr$78 = fb_StrAssign( (void*)&TMP$1255$1, -1ll, (void*)vr$76, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1255$1 );
	fb_StrDelete( &TMP$1255$1 );
	label$574:;
}

static void _EMITACOS_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1256$1;
	FBSTRING TMP$1273$1;
	FBSTRING TMP$1274$1;
	label$586:;
	static FBSTRING DST$1;
	static int64 DDSIZE$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$588;
	TMP$1256$1 = 22ll;
	goto label$795;
	label$588:;
	TMP$1256$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$795:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1256$1 * 56ll)) + 8ll);
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 1ll ) goto label$590;
	{
		FBSTRING TMP$1257$2;
		FBSTRING TMP$1258$2;
		__builtin_memset( &TMP$1258$2, 0, 24ll );
		FBSTRING* vr$9 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1257$2, 0, 24ll );
		FBSTRING* vr$12 = fb_StrConcat( &TMP$1257$2, (void*)"sub esp, ", 10ll, (void*)vr$9, -1ll );
		FBSTRING* vr$14 = fb_StrAssign( (void*)&TMP$1258$2, -1ll, (void*)vr$12, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1258$2 );
		fb_StrDelete( &TMP$1258$2 );
		if( DDSIZE$1 <= 4ll ) goto label$592;
		{
			FBSTRING TMP$1259$3;
			FBSTRING TMP$1260$3;
			__builtin_memset( &TMP$1260$3, 0, 24ll );
			__builtin_memset( &TMP$1259$3, 0, 24ll );
			FBSTRING* vr$20 = fb_StrConcat( &TMP$1259$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$22 = fb_StrAssign( (void*)&TMP$1260$3, -1ll, (void*)vr$20, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1260$3 );
			fb_StrDelete( &TMP$1260$3 );
			OUTP( (uint8*)"fld qword ptr [esp]" );
		}
		goto label$591;
		label$592:;
		{
			FBSTRING TMP$1261$3;
			FBSTRING TMP$1262$3;
			__builtin_memset( &TMP$1262$3, 0, 24ll );
			__builtin_memset( &TMP$1261$3, 0, 24ll );
			FBSTRING* vr$27 = fb_StrConcat( &TMP$1261$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$29 = fb_StrAssign( (void*)&TMP$1262$3, -1ll, (void*)vr$27, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1262$3 );
			fb_StrDelete( &TMP$1262$3 );
			OUTP( (uint8*)"fld dword ptr [esp]" );
		}
		label$591:;
	}
	label$590:;
	label$589:;
	OUTP( (uint8*)"fld st(0)" );
	OUTP( (uint8*)"fmul st(0), st(0)" );
	OUTP( (uint8*)"fld1" );
	OUTP( (uint8*)"fsubrp" );
	OUTP( (uint8*)"fsqrt" );
	OUTP( (uint8*)"fxch" );
	OUTP( (uint8*)"fpatan" );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$594;
	{
		FBSTRING TMP$1263$2;
		FBSTRING TMP$1264$2;
		__builtin_memset( &TMP$1264$2, 0, 24ll );
		FBSTRING* vr$34 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1263$2, 0, 24ll );
		FBSTRING* vr$37 = fb_StrConcat( &TMP$1263$2, (void*)"sub esp, ", 10ll, (void*)vr$34, -1ll );
		FBSTRING* vr$39 = fb_StrAssign( (void*)&TMP$1264$2, -1ll, (void*)vr$37, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1264$2 );
		fb_StrDelete( &TMP$1264$2 );
	}
	label$594:;
	label$593:;
	if( DDSIZE$1 <= 4ll ) goto label$596;
	{
		FBSTRING TMP$1265$2;
		FBSTRING TMP$1266$2;
		FBSTRING TMP$1267$2;
		FBSTRING TMP$1268$2;
		OUTP( (uint8*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$1268$2, 0, 24ll );
		__builtin_memset( &TMP$1265$2, 0, 24ll );
		FBSTRING* vr$45 = fb_StrConcat( &TMP$1265$2, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1266$2, 0, 24ll );
		FBSTRING* vr$48 = fb_StrConcat( &TMP$1266$2, (void*)vr$45, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1267$2, 0, 24ll );
		FBSTRING* vr$51 = fb_StrConcat( &TMP$1267$2, (void*)vr$48, -1ll, (void*)"qword ptr [esp]", 16ll );
		FBSTRING* vr$53 = fb_StrAssign( (void*)&TMP$1268$2, -1ll, (void*)vr$51, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1268$2 );
		fb_StrDelete( &TMP$1268$2 );
	}
	goto label$595;
	label$596:;
	{
		FBSTRING TMP$1269$2;
		FBSTRING TMP$1270$2;
		FBSTRING TMP$1271$2;
		FBSTRING TMP$1272$2;
		OUTP( (uint8*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$1272$2, 0, 24ll );
		__builtin_memset( &TMP$1269$2, 0, 24ll );
		FBSTRING* vr$58 = fb_StrConcat( &TMP$1269$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1270$2, 0, 24ll );
		FBSTRING* vr$61 = fb_StrConcat( &TMP$1270$2, (void*)vr$58, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1271$2, 0, 24ll );
		FBSTRING* vr$64 = fb_StrConcat( &TMP$1271$2, (void*)vr$61, -1ll, (void*)"dword ptr [esp]", 16ll );
		FBSTRING* vr$66 = fb_StrAssign( (void*)&TMP$1272$2, -1ll, (void*)vr$64, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1272$2 );
		fb_StrDelete( &TMP$1272$2 );
	}
	label$595:;
	__builtin_memset( &TMP$1274$1, 0, 24ll );
	FBSTRING* vr$69 = fb_LongintToStr( DDSIZE$1 );
	__builtin_memset( &TMP$1273$1, 0, 24ll );
	FBSTRING* vr$72 = fb_StrConcat( &TMP$1273$1, (void*)"add esp, ", 10ll, (void*)vr$69, -1ll );
	FBSTRING* vr$74 = fb_StrAssign( (void*)&TMP$1274$1, -1ll, (void*)vr$72, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1274$1 );
	fb_StrDelete( &TMP$1274$1 );
	label$587:;
}

static void _EMITTAN_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1275$1;
	FBSTRING TMP$1294$1;
	FBSTRING TMP$1295$1;
	label$597:;
	static FBSTRING DST$1;
	static int64 DDSIZE$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$599;
	TMP$1275$1 = 22ll;
	goto label$796;
	label$599:;
	TMP$1275$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$796:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1275$1 * 56ll)) + 8ll);
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 1ll ) goto label$601;
	{
		FBSTRING TMP$1276$2;
		FBSTRING TMP$1277$2;
		__builtin_memset( &TMP$1277$2, 0, 24ll );
		FBSTRING* vr$9 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1276$2, 0, 24ll );
		FBSTRING* vr$12 = fb_StrConcat( &TMP$1276$2, (void*)"sub esp, ", 10ll, (void*)vr$9, -1ll );
		FBSTRING* vr$14 = fb_StrAssign( (void*)&TMP$1277$2, -1ll, (void*)vr$12, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1277$2 );
		fb_StrDelete( &TMP$1277$2 );
		if( DDSIZE$1 <= 4ll ) goto label$603;
		{
			FBSTRING TMP$1278$3;
			FBSTRING TMP$1279$3;
			__builtin_memset( &TMP$1279$3, 0, 24ll );
			__builtin_memset( &TMP$1278$3, 0, 24ll );
			FBSTRING* vr$20 = fb_StrConcat( &TMP$1278$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$22 = fb_StrAssign( (void*)&TMP$1279$3, -1ll, (void*)vr$20, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1279$3 );
			fb_StrDelete( &TMP$1279$3 );
			OUTP( (uint8*)"fld qword ptr [esp]" );
		}
		goto label$602;
		label$603:;
		{
			FBSTRING TMP$1280$3;
			FBSTRING TMP$1281$3;
			__builtin_memset( &TMP$1281$3, 0, 24ll );
			__builtin_memset( &TMP$1280$3, 0, 24ll );
			FBSTRING* vr$27 = fb_StrConcat( &TMP$1280$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$29 = fb_StrAssign( (void*)&TMP$1281$3, -1ll, (void*)vr$27, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1281$3 );
			fb_StrDelete( &TMP$1281$3 );
			OUTP( (uint8*)"fld dword ptr [esp]" );
		}
		label$602:;
	}
	label$601:;
	label$600:;
	OUTP( (uint8*)"fptan" );
	OUTP( (uint8*)"fstp st(0)" );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$605;
	{
		FBSTRING TMP$1284$2;
		FBSTRING TMP$1285$2;
		__builtin_memset( &TMP$1285$2, 0, 24ll );
		FBSTRING* vr$34 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1284$2, 0, 24ll );
		FBSTRING* vr$37 = fb_StrConcat( &TMP$1284$2, (void*)"sub esp, ", 10ll, (void*)vr$34, -1ll );
		FBSTRING* vr$39 = fb_StrAssign( (void*)&TMP$1285$2, -1ll, (void*)vr$37, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1285$2 );
		fb_StrDelete( &TMP$1285$2 );
	}
	label$605:;
	label$604:;
	if( DDSIZE$1 <= 4ll ) goto label$607;
	{
		FBSTRING TMP$1286$2;
		FBSTRING TMP$1287$2;
		FBSTRING TMP$1288$2;
		FBSTRING TMP$1289$2;
		OUTP( (uint8*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$1289$2, 0, 24ll );
		__builtin_memset( &TMP$1286$2, 0, 24ll );
		FBSTRING* vr$45 = fb_StrConcat( &TMP$1286$2, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1287$2, 0, 24ll );
		FBSTRING* vr$48 = fb_StrConcat( &TMP$1287$2, (void*)vr$45, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1288$2, 0, 24ll );
		FBSTRING* vr$51 = fb_StrConcat( &TMP$1288$2, (void*)vr$48, -1ll, (void*)"qword ptr [esp]", 16ll );
		FBSTRING* vr$53 = fb_StrAssign( (void*)&TMP$1289$2, -1ll, (void*)vr$51, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1289$2 );
		fb_StrDelete( &TMP$1289$2 );
	}
	goto label$606;
	label$607:;
	{
		FBSTRING TMP$1290$2;
		FBSTRING TMP$1291$2;
		FBSTRING TMP$1292$2;
		FBSTRING TMP$1293$2;
		OUTP( (uint8*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$1293$2, 0, 24ll );
		__builtin_memset( &TMP$1290$2, 0, 24ll );
		FBSTRING* vr$58 = fb_StrConcat( &TMP$1290$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1291$2, 0, 24ll );
		FBSTRING* vr$61 = fb_StrConcat( &TMP$1291$2, (void*)vr$58, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1292$2, 0, 24ll );
		FBSTRING* vr$64 = fb_StrConcat( &TMP$1292$2, (void*)vr$61, -1ll, (void*)"dword ptr [esp]", 16ll );
		FBSTRING* vr$66 = fb_StrAssign( (void*)&TMP$1293$2, -1ll, (void*)vr$64, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1293$2 );
		fb_StrDelete( &TMP$1293$2 );
	}
	label$606:;
	__builtin_memset( &TMP$1295$1, 0, 24ll );
	FBSTRING* vr$69 = fb_LongintToStr( DDSIZE$1 );
	__builtin_memset( &TMP$1294$1, 0, 24ll );
	FBSTRING* vr$72 = fb_StrConcat( &TMP$1294$1, (void*)"add esp, ", 10ll, (void*)vr$69, -1ll );
	FBSTRING* vr$74 = fb_StrAssign( (void*)&TMP$1295$1, -1ll, (void*)vr$72, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1295$1 );
	fb_StrDelete( &TMP$1295$1 );
	label$598:;
}

static void _EMITATAN_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1296$1;
	FBSTRING TMP$1313$1;
	FBSTRING TMP$1314$1;
	label$608:;
	static FBSTRING DST$1;
	static int64 DDSIZE$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$610;
	TMP$1296$1 = 22ll;
	goto label$797;
	label$610:;
	TMP$1296$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$797:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1296$1 * 56ll)) + 8ll);
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 1ll ) goto label$612;
	{
		FBSTRING TMP$1297$2;
		FBSTRING TMP$1298$2;
		__builtin_memset( &TMP$1298$2, 0, 24ll );
		FBSTRING* vr$9 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1297$2, 0, 24ll );
		FBSTRING* vr$12 = fb_StrConcat( &TMP$1297$2, (void*)"sub esp, ", 10ll, (void*)vr$9, -1ll );
		FBSTRING* vr$14 = fb_StrAssign( (void*)&TMP$1298$2, -1ll, (void*)vr$12, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1298$2 );
		fb_StrDelete( &TMP$1298$2 );
		if( DDSIZE$1 <= 4ll ) goto label$614;
		{
			FBSTRING TMP$1299$3;
			FBSTRING TMP$1300$3;
			__builtin_memset( &TMP$1300$3, 0, 24ll );
			__builtin_memset( &TMP$1299$3, 0, 24ll );
			FBSTRING* vr$20 = fb_StrConcat( &TMP$1299$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$22 = fb_StrAssign( (void*)&TMP$1300$3, -1ll, (void*)vr$20, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1300$3 );
			fb_StrDelete( &TMP$1300$3 );
			OUTP( (uint8*)"fld qword ptr [esp]" );
		}
		goto label$613;
		label$614:;
		{
			FBSTRING TMP$1301$3;
			FBSTRING TMP$1302$3;
			__builtin_memset( &TMP$1302$3, 0, 24ll );
			__builtin_memset( &TMP$1301$3, 0, 24ll );
			FBSTRING* vr$27 = fb_StrConcat( &TMP$1301$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$29 = fb_StrAssign( (void*)&TMP$1302$3, -1ll, (void*)vr$27, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1302$3 );
			fb_StrDelete( &TMP$1302$3 );
			OUTP( (uint8*)"fld dword ptr [esp]" );
		}
		label$613:;
	}
	label$612:;
	label$611:;
	OUTP( (uint8*)"fld1" );
	OUTP( (uint8*)"fpatan" );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$616;
	{
		FBSTRING TMP$1303$2;
		FBSTRING TMP$1304$2;
		__builtin_memset( &TMP$1304$2, 0, 24ll );
		FBSTRING* vr$34 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1303$2, 0, 24ll );
		FBSTRING* vr$37 = fb_StrConcat( &TMP$1303$2, (void*)"sub esp, ", 10ll, (void*)vr$34, -1ll );
		FBSTRING* vr$39 = fb_StrAssign( (void*)&TMP$1304$2, -1ll, (void*)vr$37, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1304$2 );
		fb_StrDelete( &TMP$1304$2 );
	}
	label$616:;
	label$615:;
	if( DDSIZE$1 <= 4ll ) goto label$618;
	{
		FBSTRING TMP$1305$2;
		FBSTRING TMP$1306$2;
		FBSTRING TMP$1307$2;
		FBSTRING TMP$1308$2;
		OUTP( (uint8*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$1308$2, 0, 24ll );
		__builtin_memset( &TMP$1305$2, 0, 24ll );
		FBSTRING* vr$45 = fb_StrConcat( &TMP$1305$2, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1306$2, 0, 24ll );
		FBSTRING* vr$48 = fb_StrConcat( &TMP$1306$2, (void*)vr$45, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1307$2, 0, 24ll );
		FBSTRING* vr$51 = fb_StrConcat( &TMP$1307$2, (void*)vr$48, -1ll, (void*)"qword ptr [esp]", 16ll );
		FBSTRING* vr$53 = fb_StrAssign( (void*)&TMP$1308$2, -1ll, (void*)vr$51, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1308$2 );
		fb_StrDelete( &TMP$1308$2 );
	}
	goto label$617;
	label$618:;
	{
		FBSTRING TMP$1309$2;
		FBSTRING TMP$1310$2;
		FBSTRING TMP$1311$2;
		FBSTRING TMP$1312$2;
		OUTP( (uint8*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$1312$2, 0, 24ll );
		__builtin_memset( &TMP$1309$2, 0, 24ll );
		FBSTRING* vr$58 = fb_StrConcat( &TMP$1309$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1310$2, 0, 24ll );
		FBSTRING* vr$61 = fb_StrConcat( &TMP$1310$2, (void*)vr$58, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1311$2, 0, 24ll );
		FBSTRING* vr$64 = fb_StrConcat( &TMP$1311$2, (void*)vr$61, -1ll, (void*)"dword ptr [esp]", 16ll );
		FBSTRING* vr$66 = fb_StrAssign( (void*)&TMP$1312$2, -1ll, (void*)vr$64, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1312$2 );
		fb_StrDelete( &TMP$1312$2 );
	}
	label$617:;
	__builtin_memset( &TMP$1314$1, 0, 24ll );
	FBSTRING* vr$69 = fb_LongintToStr( DDSIZE$1 );
	__builtin_memset( &TMP$1313$1, 0, 24ll );
	FBSTRING* vr$72 = fb_StrConcat( &TMP$1313$1, (void*)"add esp, ", 10ll, (void*)vr$69, -1ll );
	FBSTRING* vr$74 = fb_StrAssign( (void*)&TMP$1314$1, -1ll, (void*)vr$72, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1314$1 );
	fb_StrDelete( &TMP$1314$1 );
	label$609:;
}

static void _EMITSQRT_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1315$1;
	label$619:;
	static FBSTRING DST$1;
	static int64 DDSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$621;
	TMP$1315$1 = 22ll;
	goto label$798;
	label$621:;
	TMP$1315$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$798:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1315$1 * 56ll)) + 8ll);
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$623;
	{
		FBSTRING TMP$1316$2;
		FBSTRING TMP$1317$2;
		__builtin_memset( &TMP$1317$2, 0, 24ll );
		FBSTRING* vr$9 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1316$2, 0, 24ll );
		FBSTRING* vr$12 = fb_StrConcat( &TMP$1316$2, (void*)"sub esp, ", 10ll, (void*)vr$9, -1ll );
		FBSTRING* vr$14 = fb_StrAssign( (void*)&TMP$1317$2, -1ll, (void*)vr$12, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1317$2 );
		fb_StrDelete( &TMP$1317$2 );
		if( DDSIZE$1 <= 4ll ) goto label$625;
		{
			FBSTRING TMP$1318$3;
			FBSTRING TMP$1319$3;
			FBSTRING TMP$1320$3;
			FBSTRING TMP$1321$3;
			OUTP( (uint8*)"fstp qword ptr [esp]" );
			__builtin_memset( &TMP$1321$3, 0, 24ll );
			__builtin_memset( &TMP$1318$3, 0, 24ll );
			FBSTRING* vr$20 = fb_StrConcat( &TMP$1318$3, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$1319$3, 0, 24ll );
			FBSTRING* vr$23 = fb_StrConcat( &TMP$1319$3, (void*)vr$20, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$1320$3, 0, 24ll );
			FBSTRING* vr$26 = fb_StrConcat( &TMP$1320$3, (void*)vr$23, -1ll, (void*)"qword ptr [esp]", 16ll );
			FBSTRING* vr$28 = fb_StrAssign( (void*)&TMP$1321$3, -1ll, (void*)vr$26, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1321$3 );
			fb_StrDelete( &TMP$1321$3 );
		}
		goto label$624;
		label$625:;
		{
			FBSTRING TMP$1322$3;
			FBSTRING TMP$1323$3;
			FBSTRING TMP$1324$3;
			FBSTRING TMP$1325$3;
			OUTP( (uint8*)"fstp dword ptr [esp]" );
			__builtin_memset( &TMP$1325$3, 0, 24ll );
			__builtin_memset( &TMP$1322$3, 0, 24ll );
			FBSTRING* vr$33 = fb_StrConcat( &TMP$1322$3, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$1323$3, 0, 24ll );
			FBSTRING* vr$36 = fb_StrConcat( &TMP$1323$3, (void*)vr$33, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$1324$3, 0, 24ll );
			FBSTRING* vr$39 = fb_StrConcat( &TMP$1324$3, (void*)vr$36, -1ll, (void*)"dword ptr [esp]", 16ll );
			FBSTRING* vr$41 = fb_StrAssign( (void*)&TMP$1325$3, -1ll, (void*)vr$39, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1325$3 );
			fb_StrDelete( &TMP$1325$3 );
		}
		label$624:;
	}
	label$623:;
	label$622:;
	if( DDSIZE$1 <= 4ll ) goto label$627;
	{
		FBSTRING TMP$1327$2;
		FBSTRING TMP$1328$2;
		FBSTRING TMP$1329$2;
		FBSTRING TMP$1330$2;
		__builtin_memset( &TMP$1330$2, 0, 24ll );
		__builtin_memset( &TMP$1327$2, 0, 24ll );
		FBSTRING* vr$47 = fb_StrConcat( &TMP$1327$2, (void*)"sqrtsd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1328$2, 0, 24ll );
		FBSTRING* vr$50 = fb_StrConcat( &TMP$1328$2, (void*)vr$47, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1329$2, 0, 24ll );
		FBSTRING* vr$53 = fb_StrConcat( &TMP$1329$2, (void*)vr$50, -1ll, (void*)&DST$1, -1ll );
		FBSTRING* vr$55 = fb_StrAssign( (void*)&TMP$1330$2, -1ll, (void*)vr$53, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1330$2 );
		fb_StrDelete( &TMP$1330$2 );
	}
	goto label$626;
	label$627:;
	{
		FBSTRING TMP$1332$2;
		FBSTRING TMP$1333$2;
		FBSTRING TMP$1334$2;
		FBSTRING TMP$1335$2;
		__builtin_memset( &TMP$1335$2, 0, 24ll );
		__builtin_memset( &TMP$1332$2, 0, 24ll );
		FBSTRING* vr$60 = fb_StrConcat( &TMP$1332$2, (void*)"sqrtss ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1333$2, 0, 24ll );
		FBSTRING* vr$63 = fb_StrConcat( &TMP$1333$2, (void*)vr$60, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1334$2, 0, 24ll );
		FBSTRING* vr$66 = fb_StrConcat( &TMP$1334$2, (void*)vr$63, -1ll, (void*)&DST$1, -1ll );
		FBSTRING* vr$68 = fb_StrAssign( (void*)&TMP$1335$2, -1ll, (void*)vr$66, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1335$2 );
		fb_StrDelete( &TMP$1335$2 );
	}
	label$626:;
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$629;
	{
		FBSTRING TMP$1336$2;
		FBSTRING TMP$1337$2;
		__builtin_memset( &TMP$1337$2, 0, 24ll );
		FBSTRING* vr$73 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1336$2, 0, 24ll );
		FBSTRING* vr$76 = fb_StrConcat( &TMP$1336$2, (void*)"add esp, ", 10ll, (void*)vr$73, -1ll );
		FBSTRING* vr$78 = fb_StrAssign( (void*)&TMP$1337$2, -1ll, (void*)vr$76, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1337$2 );
		fb_StrDelete( &TMP$1337$2 );
	}
	label$629:;
	label$628:;
	label$620:;
}

static void _EMITRSQRT_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1338$1;
	label$630:;
	static FBSTRING DST$1;
	static int64 DDSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$632;
	TMP$1338$1 = 22ll;
	goto label$799;
	label$632:;
	TMP$1338$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$799:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1338$1 * 56ll)) + 8ll);
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$634;
	{
		FBSTRING TMP$1339$2;
		FBSTRING TMP$1340$2;
		__builtin_memset( &TMP$1340$2, 0, 24ll );
		FBSTRING* vr$9 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1339$2, 0, 24ll );
		FBSTRING* vr$12 = fb_StrConcat( &TMP$1339$2, (void*)"sub esp, ", 10ll, (void*)vr$9, -1ll );
		FBSTRING* vr$14 = fb_StrAssign( (void*)&TMP$1340$2, -1ll, (void*)vr$12, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1340$2 );
		fb_StrDelete( &TMP$1340$2 );
		if( DDSIZE$1 <= 4ll ) goto label$636;
		{
			FBSTRING TMP$1341$3;
			FBSTRING TMP$1342$3;
			FBSTRING TMP$1343$3;
			FBSTRING TMP$1344$3;
			OUTP( (uint8*)"fstp qword ptr [esp]" );
			__builtin_memset( &TMP$1344$3, 0, 24ll );
			__builtin_memset( &TMP$1341$3, 0, 24ll );
			FBSTRING* vr$20 = fb_StrConcat( &TMP$1341$3, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$1342$3, 0, 24ll );
			FBSTRING* vr$23 = fb_StrConcat( &TMP$1342$3, (void*)vr$20, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$1343$3, 0, 24ll );
			FBSTRING* vr$26 = fb_StrConcat( &TMP$1343$3, (void*)vr$23, -1ll, (void*)"qword ptr [esp]", 16ll );
			FBSTRING* vr$28 = fb_StrAssign( (void*)&TMP$1344$3, -1ll, (void*)vr$26, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1344$3 );
			fb_StrDelete( &TMP$1344$3 );
		}
		goto label$635;
		label$636:;
		{
			FBSTRING TMP$1345$3;
			FBSTRING TMP$1346$3;
			FBSTRING TMP$1347$3;
			FBSTRING TMP$1348$3;
			OUTP( (uint8*)"fstp dword ptr [esp]" );
			__builtin_memset( &TMP$1348$3, 0, 24ll );
			__builtin_memset( &TMP$1345$3, 0, 24ll );
			FBSTRING* vr$33 = fb_StrConcat( &TMP$1345$3, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$1346$3, 0, 24ll );
			FBSTRING* vr$36 = fb_StrConcat( &TMP$1346$3, (void*)vr$33, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$1347$3, 0, 24ll );
			FBSTRING* vr$39 = fb_StrConcat( &TMP$1347$3, (void*)vr$36, -1ll, (void*)"dword ptr [esp]", 16ll );
			FBSTRING* vr$41 = fb_StrAssign( (void*)&TMP$1348$3, -1ll, (void*)vr$39, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1348$3 );
			fb_StrDelete( &TMP$1348$3 );
		}
		label$635:;
	}
	label$634:;
	label$633:;
	if( DDSIZE$1 <= 4ll ) goto label$638;
	{
		FBSTRING TMP$1350$2;
		FBSTRING TMP$1351$2;
		FBSTRING TMP$1352$2;
		FBSTRING TMP$1353$2;
		__builtin_memset( &TMP$1353$2, 0, 24ll );
		__builtin_memset( &TMP$1350$2, 0, 24ll );
		FBSTRING* vr$47 = fb_StrConcat( &TMP$1350$2, (void*)"rsqrtsd ", 9ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1351$2, 0, 24ll );
		FBSTRING* vr$50 = fb_StrConcat( &TMP$1351$2, (void*)vr$47, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1352$2, 0, 24ll );
		FBSTRING* vr$53 = fb_StrConcat( &TMP$1352$2, (void*)vr$50, -1ll, (void*)&DST$1, -1ll );
		FBSTRING* vr$55 = fb_StrAssign( (void*)&TMP$1353$2, -1ll, (void*)vr$53, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1353$2 );
		fb_StrDelete( &TMP$1353$2 );
	}
	goto label$637;
	label$638:;
	{
		FBSTRING TMP$1355$2;
		FBSTRING TMP$1356$2;
		FBSTRING TMP$1357$2;
		FBSTRING TMP$1358$2;
		__builtin_memset( &TMP$1358$2, 0, 24ll );
		__builtin_memset( &TMP$1355$2, 0, 24ll );
		FBSTRING* vr$60 = fb_StrConcat( &TMP$1355$2, (void*)"rsqrtss ", 9ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1356$2, 0, 24ll );
		FBSTRING* vr$63 = fb_StrConcat( &TMP$1356$2, (void*)vr$60, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1357$2, 0, 24ll );
		FBSTRING* vr$66 = fb_StrConcat( &TMP$1357$2, (void*)vr$63, -1ll, (void*)&DST$1, -1ll );
		FBSTRING* vr$68 = fb_StrAssign( (void*)&TMP$1358$2, -1ll, (void*)vr$66, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1358$2 );
		fb_StrDelete( &TMP$1358$2 );
	}
	label$637:;
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$640;
	{
		FBSTRING TMP$1359$2;
		FBSTRING TMP$1360$2;
		__builtin_memset( &TMP$1360$2, 0, 24ll );
		FBSTRING* vr$73 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1359$2, 0, 24ll );
		FBSTRING* vr$76 = fb_StrConcat( &TMP$1359$2, (void*)"add esp, ", 10ll, (void*)vr$73, -1ll );
		FBSTRING* vr$78 = fb_StrAssign( (void*)&TMP$1360$2, -1ll, (void*)vr$76, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1360$2 );
		fb_StrDelete( &TMP$1360$2 );
	}
	label$640:;
	label$639:;
	label$631:;
}

static void _EMITRCP_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1361$1;
	label$641:;
	static FBSTRING DST$1;
	static int64 DDSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$643;
	TMP$1361$1 = 22ll;
	goto label$800;
	label$643:;
	TMP$1361$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$800:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1361$1 * 56ll)) + 8ll);
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$645;
	{
		FBSTRING TMP$1362$2;
		FBSTRING TMP$1363$2;
		__builtin_memset( &TMP$1363$2, 0, 24ll );
		FBSTRING* vr$9 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1362$2, 0, 24ll );
		FBSTRING* vr$12 = fb_StrConcat( &TMP$1362$2, (void*)"sub esp, ", 10ll, (void*)vr$9, -1ll );
		FBSTRING* vr$14 = fb_StrAssign( (void*)&TMP$1363$2, -1ll, (void*)vr$12, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1363$2 );
		fb_StrDelete( &TMP$1363$2 );
		if( DDSIZE$1 <= 4ll ) goto label$647;
		{
			FBSTRING TMP$1364$3;
			FBSTRING TMP$1365$3;
			FBSTRING TMP$1366$3;
			FBSTRING TMP$1367$3;
			OUTP( (uint8*)"fstp qword ptr [esp]" );
			__builtin_memset( &TMP$1367$3, 0, 24ll );
			__builtin_memset( &TMP$1364$3, 0, 24ll );
			FBSTRING* vr$20 = fb_StrConcat( &TMP$1364$3, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$1365$3, 0, 24ll );
			FBSTRING* vr$23 = fb_StrConcat( &TMP$1365$3, (void*)vr$20, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$1366$3, 0, 24ll );
			FBSTRING* vr$26 = fb_StrConcat( &TMP$1366$3, (void*)vr$23, -1ll, (void*)"qword ptr [esp]", 16ll );
			FBSTRING* vr$28 = fb_StrAssign( (void*)&TMP$1367$3, -1ll, (void*)vr$26, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1367$3 );
			fb_StrDelete( &TMP$1367$3 );
		}
		goto label$646;
		label$647:;
		{
			FBSTRING TMP$1368$3;
			FBSTRING TMP$1369$3;
			FBSTRING TMP$1370$3;
			FBSTRING TMP$1371$3;
			OUTP( (uint8*)"fstp dword ptr [esp]" );
			__builtin_memset( &TMP$1371$3, 0, 24ll );
			__builtin_memset( &TMP$1368$3, 0, 24ll );
			FBSTRING* vr$33 = fb_StrConcat( &TMP$1368$3, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$1369$3, 0, 24ll );
			FBSTRING* vr$36 = fb_StrConcat( &TMP$1369$3, (void*)vr$33, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$1370$3, 0, 24ll );
			FBSTRING* vr$39 = fb_StrConcat( &TMP$1370$3, (void*)vr$36, -1ll, (void*)"dword ptr [esp]", 16ll );
			FBSTRING* vr$41 = fb_StrAssign( (void*)&TMP$1371$3, -1ll, (void*)vr$39, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1371$3 );
			fb_StrDelete( &TMP$1371$3 );
		}
		label$646:;
	}
	label$645:;
	label$644:;
	if( DDSIZE$1 <= 4ll ) goto label$649;
	{
		FBSTRING TMP$1373$2;
		FBSTRING TMP$1374$2;
		FBSTRING TMP$1375$2;
		FBSTRING TMP$1376$2;
		__builtin_memset( &TMP$1376$2, 0, 24ll );
		__builtin_memset( &TMP$1373$2, 0, 24ll );
		FBSTRING* vr$47 = fb_StrConcat( &TMP$1373$2, (void*)"rcpsd ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1374$2, 0, 24ll );
		FBSTRING* vr$50 = fb_StrConcat( &TMP$1374$2, (void*)vr$47, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1375$2, 0, 24ll );
		FBSTRING* vr$53 = fb_StrConcat( &TMP$1375$2, (void*)vr$50, -1ll, (void*)&DST$1, -1ll );
		FBSTRING* vr$55 = fb_StrAssign( (void*)&TMP$1376$2, -1ll, (void*)vr$53, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1376$2 );
		fb_StrDelete( &TMP$1376$2 );
	}
	goto label$648;
	label$649:;
	{
		FBSTRING TMP$1378$2;
		FBSTRING TMP$1379$2;
		FBSTRING TMP$1380$2;
		FBSTRING TMP$1381$2;
		__builtin_memset( &TMP$1381$2, 0, 24ll );
		__builtin_memset( &TMP$1378$2, 0, 24ll );
		FBSTRING* vr$60 = fb_StrConcat( &TMP$1378$2, (void*)"rcpss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1379$2, 0, 24ll );
		FBSTRING* vr$63 = fb_StrConcat( &TMP$1379$2, (void*)vr$60, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1380$2, 0, 24ll );
		FBSTRING* vr$66 = fb_StrConcat( &TMP$1380$2, (void*)vr$63, -1ll, (void*)&DST$1, -1ll );
		FBSTRING* vr$68 = fb_StrAssign( (void*)&TMP$1381$2, -1ll, (void*)vr$66, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1381$2 );
		fb_StrDelete( &TMP$1381$2 );
	}
	label$648:;
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$651;
	{
		FBSTRING TMP$1382$2;
		FBSTRING TMP$1383$2;
		__builtin_memset( &TMP$1383$2, 0, 24ll );
		FBSTRING* vr$73 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1382$2, 0, 24ll );
		FBSTRING* vr$76 = fb_StrConcat( &TMP$1382$2, (void*)"add esp, ", 10ll, (void*)vr$73, -1ll );
		FBSTRING* vr$78 = fb_StrAssign( (void*)&TMP$1383$2, -1ll, (void*)vr$76, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1383$2 );
		fb_StrDelete( &TMP$1383$2 );
	}
	label$651:;
	label$650:;
	label$642:;
}

static void _EMITLOG_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1384$1;
	FBSTRING TMP$1402$1;
	FBSTRING TMP$1403$1;
	label$652:;
	static FBSTRING DST$1;
	static int64 DDSIZE$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$654;
	TMP$1384$1 = 22ll;
	goto label$801;
	label$654:;
	TMP$1384$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$801:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1384$1 * 56ll)) + 8ll);
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 1ll ) goto label$656;
	{
		FBSTRING TMP$1385$2;
		FBSTRING TMP$1386$2;
		__builtin_memset( &TMP$1386$2, 0, 24ll );
		FBSTRING* vr$9 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1385$2, 0, 24ll );
		FBSTRING* vr$12 = fb_StrConcat( &TMP$1385$2, (void*)"sub esp, ", 10ll, (void*)vr$9, -1ll );
		FBSTRING* vr$14 = fb_StrAssign( (void*)&TMP$1386$2, -1ll, (void*)vr$12, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1386$2 );
		fb_StrDelete( &TMP$1386$2 );
		if( DDSIZE$1 <= 4ll ) goto label$658;
		{
			FBSTRING TMP$1387$3;
			FBSTRING TMP$1388$3;
			__builtin_memset( &TMP$1388$3, 0, 24ll );
			__builtin_memset( &TMP$1387$3, 0, 24ll );
			FBSTRING* vr$20 = fb_StrConcat( &TMP$1387$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$22 = fb_StrAssign( (void*)&TMP$1388$3, -1ll, (void*)vr$20, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1388$3 );
			fb_StrDelete( &TMP$1388$3 );
			OUTP( (uint8*)"fld qword ptr [esp]" );
		}
		goto label$657;
		label$658:;
		{
			FBSTRING TMP$1389$3;
			FBSTRING TMP$1390$3;
			__builtin_memset( &TMP$1390$3, 0, 24ll );
			__builtin_memset( &TMP$1389$3, 0, 24ll );
			FBSTRING* vr$27 = fb_StrConcat( &TMP$1389$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$29 = fb_StrAssign( (void*)&TMP$1390$3, -1ll, (void*)vr$27, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1390$3 );
			fb_StrDelete( &TMP$1390$3 );
			OUTP( (uint8*)"fld dword ptr [esp]" );
		}
		label$657:;
	}
	label$656:;
	label$655:;
	OUTP( (uint8*)"fldln2" );
	OUTP( (uint8*)"fxch" );
	OUTP( (uint8*)"fyl2x" );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$660;
	{
		FBSTRING TMP$1392$2;
		FBSTRING TMP$1393$2;
		__builtin_memset( &TMP$1393$2, 0, 24ll );
		FBSTRING* vr$34 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1392$2, 0, 24ll );
		FBSTRING* vr$37 = fb_StrConcat( &TMP$1392$2, (void*)"sub esp, ", 10ll, (void*)vr$34, -1ll );
		FBSTRING* vr$39 = fb_StrAssign( (void*)&TMP$1393$2, -1ll, (void*)vr$37, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1393$2 );
		fb_StrDelete( &TMP$1393$2 );
	}
	label$660:;
	label$659:;
	if( DDSIZE$1 <= 4ll ) goto label$662;
	{
		FBSTRING TMP$1394$2;
		FBSTRING TMP$1395$2;
		FBSTRING TMP$1396$2;
		FBSTRING TMP$1397$2;
		OUTP( (uint8*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$1397$2, 0, 24ll );
		__builtin_memset( &TMP$1394$2, 0, 24ll );
		FBSTRING* vr$45 = fb_StrConcat( &TMP$1394$2, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1395$2, 0, 24ll );
		FBSTRING* vr$48 = fb_StrConcat( &TMP$1395$2, (void*)vr$45, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1396$2, 0, 24ll );
		FBSTRING* vr$51 = fb_StrConcat( &TMP$1396$2, (void*)vr$48, -1ll, (void*)"qword ptr [esp]", 16ll );
		FBSTRING* vr$53 = fb_StrAssign( (void*)&TMP$1397$2, -1ll, (void*)vr$51, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1397$2 );
		fb_StrDelete( &TMP$1397$2 );
	}
	goto label$661;
	label$662:;
	{
		FBSTRING TMP$1398$2;
		FBSTRING TMP$1399$2;
		FBSTRING TMP$1400$2;
		FBSTRING TMP$1401$2;
		OUTP( (uint8*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$1401$2, 0, 24ll );
		__builtin_memset( &TMP$1398$2, 0, 24ll );
		FBSTRING* vr$58 = fb_StrConcat( &TMP$1398$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1399$2, 0, 24ll );
		FBSTRING* vr$61 = fb_StrConcat( &TMP$1399$2, (void*)vr$58, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1400$2, 0, 24ll );
		FBSTRING* vr$64 = fb_StrConcat( &TMP$1400$2, (void*)vr$61, -1ll, (void*)"dword ptr [esp]", 16ll );
		FBSTRING* vr$66 = fb_StrAssign( (void*)&TMP$1401$2, -1ll, (void*)vr$64, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1401$2 );
		fb_StrDelete( &TMP$1401$2 );
	}
	label$661:;
	__builtin_memset( &TMP$1403$1, 0, 24ll );
	FBSTRING* vr$69 = fb_LongintToStr( DDSIZE$1 );
	__builtin_memset( &TMP$1402$1, 0, 24ll );
	FBSTRING* vr$72 = fb_StrConcat( &TMP$1402$1, (void*)"add esp, ", 10ll, (void*)vr$69, -1ll );
	FBSTRING* vr$74 = fb_StrAssign( (void*)&TMP$1403$1, -1ll, (void*)vr$72, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1403$1 );
	fb_StrDelete( &TMP$1403$1 );
	label$653:;
}

static void _EMITEXP_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1404$1;
	FBSTRING TMP$1427$1;
	FBSTRING TMP$1428$1;
	label$663:;
	static FBSTRING DST$1;
	static int64 DDSIZE$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$665;
	TMP$1404$1 = 22ll;
	goto label$802;
	label$665:;
	TMP$1404$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$802:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1404$1 * 56ll)) + 8ll);
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 1ll ) goto label$667;
	{
		FBSTRING TMP$1405$2;
		FBSTRING TMP$1406$2;
		__builtin_memset( &TMP$1406$2, 0, 24ll );
		FBSTRING* vr$9 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1405$2, 0, 24ll );
		FBSTRING* vr$12 = fb_StrConcat( &TMP$1405$2, (void*)"sub esp, ", 10ll, (void*)vr$9, -1ll );
		FBSTRING* vr$14 = fb_StrAssign( (void*)&TMP$1406$2, -1ll, (void*)vr$12, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1406$2 );
		fb_StrDelete( &TMP$1406$2 );
		if( DDSIZE$1 <= 4ll ) goto label$669;
		{
			FBSTRING TMP$1407$3;
			FBSTRING TMP$1408$3;
			__builtin_memset( &TMP$1408$3, 0, 24ll );
			__builtin_memset( &TMP$1407$3, 0, 24ll );
			FBSTRING* vr$20 = fb_StrConcat( &TMP$1407$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$22 = fb_StrAssign( (void*)&TMP$1408$3, -1ll, (void*)vr$20, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1408$3 );
			fb_StrDelete( &TMP$1408$3 );
			OUTP( (uint8*)"fld qword ptr [esp]" );
		}
		goto label$668;
		label$669:;
		{
			FBSTRING TMP$1409$3;
			FBSTRING TMP$1410$3;
			__builtin_memset( &TMP$1410$3, 0, 24ll );
			__builtin_memset( &TMP$1409$3, 0, 24ll );
			FBSTRING* vr$27 = fb_StrConcat( &TMP$1409$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$29 = fb_StrAssign( (void*)&TMP$1410$3, -1ll, (void*)vr$27, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1410$3 );
			fb_StrDelete( &TMP$1410$3 );
			OUTP( (uint8*)"fld dword ptr [esp]" );
		}
		label$668:;
	}
	label$667:;
	label$666:;
	OUTP( (uint8*)"fldl2e" );
	OUTP( (uint8*)"fmulp st(1), st" );
	OUTP( (uint8*)"fld st" );
	OUTP( (uint8*)"frndint" );
	OUTP( (uint8*)"fsub st(1), st" );
	OUTP( (uint8*)"fxch" );
	OUTP( (uint8*)"f2xm1" );
	HPUSH( (uint8*)"0x3f800000" );
	OUTP( (uint8*)"fadd dword ptr [esp]" );
	OUTP( (uint8*)"add esp, 4" );
	OUTP( (uint8*)"fscale" );
	OUTP( (uint8*)"fstp st(1)" );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 0ll ) goto label$671;
	{
		FBSTRING TMP$1417$2;
		FBSTRING TMP$1418$2;
		__builtin_memset( &TMP$1418$2, 0, 24ll );
		FBSTRING* vr$34 = fb_LongintToStr( DDSIZE$1 );
		__builtin_memset( &TMP$1417$2, 0, 24ll );
		FBSTRING* vr$37 = fb_StrConcat( &TMP$1417$2, (void*)"sub esp, ", 10ll, (void*)vr$34, -1ll );
		FBSTRING* vr$39 = fb_StrAssign( (void*)&TMP$1418$2, -1ll, (void*)vr$37, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1418$2 );
		fb_StrDelete( &TMP$1418$2 );
	}
	label$671:;
	label$670:;
	if( DDSIZE$1 <= 4ll ) goto label$673;
	{
		FBSTRING TMP$1419$2;
		FBSTRING TMP$1420$2;
		FBSTRING TMP$1421$2;
		FBSTRING TMP$1422$2;
		OUTP( (uint8*)"fstp qword ptr [esp]" );
		__builtin_memset( &TMP$1422$2, 0, 24ll );
		__builtin_memset( &TMP$1419$2, 0, 24ll );
		FBSTRING* vr$45 = fb_StrConcat( &TMP$1419$2, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1420$2, 0, 24ll );
		FBSTRING* vr$48 = fb_StrConcat( &TMP$1420$2, (void*)vr$45, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1421$2, 0, 24ll );
		FBSTRING* vr$51 = fb_StrConcat( &TMP$1421$2, (void*)vr$48, -1ll, (void*)"qword ptr [esp]", 16ll );
		FBSTRING* vr$53 = fb_StrAssign( (void*)&TMP$1422$2, -1ll, (void*)vr$51, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1422$2 );
		fb_StrDelete( &TMP$1422$2 );
	}
	goto label$672;
	label$673:;
	{
		FBSTRING TMP$1423$2;
		FBSTRING TMP$1424$2;
		FBSTRING TMP$1425$2;
		FBSTRING TMP$1426$2;
		OUTP( (uint8*)"fstp dword ptr [esp]" );
		__builtin_memset( &TMP$1426$2, 0, 24ll );
		__builtin_memset( &TMP$1423$2, 0, 24ll );
		FBSTRING* vr$58 = fb_StrConcat( &TMP$1423$2, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1424$2, 0, 24ll );
		FBSTRING* vr$61 = fb_StrConcat( &TMP$1424$2, (void*)vr$58, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1425$2, 0, 24ll );
		FBSTRING* vr$64 = fb_StrConcat( &TMP$1425$2, (void*)vr$61, -1ll, (void*)"dword ptr [esp]", 16ll );
		FBSTRING* vr$66 = fb_StrAssign( (void*)&TMP$1426$2, -1ll, (void*)vr$64, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1426$2 );
		fb_StrDelete( &TMP$1426$2 );
	}
	label$672:;
	__builtin_memset( &TMP$1428$1, 0, 24ll );
	FBSTRING* vr$69 = fb_LongintToStr( DDSIZE$1 );
	__builtin_memset( &TMP$1427$1, 0, 24ll );
	FBSTRING* vr$72 = fb_StrConcat( &TMP$1427$1, (void*)"add esp, ", 10ll, (void*)vr$69, -1ll );
	FBSTRING* vr$74 = fb_StrAssign( (void*)&TMP$1428$1, -1ll, (void*)vr$72, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1428$1 );
	fb_StrDelete( &TMP$1428$1 );
	label$664:;
}

static void _EMITFLOOR_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1429$1;
	FBSTRING TMP$1444$1;
	FBSTRING TMP$1445$1;
	FBSTRING TMP$1446$1;
	FBSTRING TMP$1448$1;
	FBSTRING TMP$1449$1;
	FBSTRING TMP$1450$1;
	FBSTRING TMP$1451$1;
	FBSTRING TMP$1452$1;
	FBSTRING TMP$1453$1;
	FBSTRING TMP$1454$1;
	FBSTRING TMP$1455$1;
	FBSTRING TMP$1456$1;
	FBSTRING TMP$1457$1;
	FBSTRING TMP$1459$1;
	FBSTRING TMP$1460$1;
	FBSTRING TMP$1461$1;
	FBSTRING TMP$1462$1;
	FBSTRING TMP$1463$1;
	FBSTRING TMP$1465$1;
	FBSTRING TMP$1466$1;
	FBSTRING TMP$1467$1;
	FBSTRING TMP$1468$1;
	FBSTRING TMP$1469$1;
	FBSTRING TMP$1470$1;
	FBSTRING TMP$1471$1;
	FBSTRING TMP$1472$1;
	FBSTRING TMP$1473$1;
	FBSTRING TMP$1474$1;
	label$674:;
	static FBSTRING DST$1;
	static FBSTRING NEG1$1;
	static FBSTRING SUFFIX$1;
	static int64 DDSIZE$1;
	static struct $8FBSYMBOL* SYM$1;
	static struct $6IRVREG* VREG$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$676;
	TMP$1429$1 = 22ll;
	goto label$803;
	label$676:;
	TMP$1429$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$803:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1429$1 * 56ll)) + 8ll);
	if( DDSIZE$1 <= 4ll ) goto label$678;
	{
		struct $8FBSYMBOL* vr$7 = SYMBALLOCINTCONST( -4616189618054758400ll, 13ll );
		SYM$1 = vr$7;
		struct $6IRVREG* vr$9 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 13ll, (struct $8FBSYMBOL*)0ull, SYM$1, *(int64*)((uint8*)SYM$1 + 80ll) );
		VREG$1 = vr$9;
		fb_StrAssign( (void*)&SUFFIX$1, -1ll, (void*)"d ", 3ll, 0 );
	}
	goto label$677;
	label$678:;
	{
		struct $8FBSYMBOL* vr$10 = SYMBALLOCINTCONST( 3212836864ll, 8ll );
		SYM$1 = vr$10;
		struct $6IRVREG* vr$12 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 8ll, (struct $8FBSYMBOL*)0ull, SYM$1, *(int64*)((uint8*)SYM$1 + 80ll) );
		VREG$1 = vr$12;
		fb_StrAssign( (void*)&SUFFIX$1, -1ll, (void*)"s ", 3ll, 0 );
	}
	label$677:;
	*(int64*)((uint8*)SYM$1 + 160ll) = 16ll;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( VREG$1, &NEG1$1, 23ll, 0ll, 0ll, -1ll );
	OUTP( (uint8*)"sub esp, 8" );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 1ll ) goto label$680;
	{
		FBSTRING TMP$1435$2;
		FBSTRING TMP$1436$2;
		FBSTRING TMP$1437$2;
		FBSTRING TMP$1438$2;
		FBSTRING TMP$1439$2;
		if( DDSIZE$1 <= 4ll ) goto label$682;
		{
			FBSTRING TMP$1430$3;
			FBSTRING TMP$1431$3;
			__builtin_memset( &TMP$1431$3, 0, 24ll );
			__builtin_memset( &TMP$1430$3, 0, 24ll );
			FBSTRING* vr$20 = fb_StrConcat( &TMP$1430$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$22 = fb_StrAssign( (void*)&TMP$1431$3, -1ll, (void*)vr$20, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1431$3 );
			fb_StrDelete( &TMP$1431$3 );
			OUTP( (uint8*)"fld qword ptr [esp]" );
		}
		goto label$681;
		label$682:;
		{
			FBSTRING TMP$1432$3;
			FBSTRING TMP$1433$3;
			__builtin_memset( &TMP$1433$3, 0, 24ll );
			__builtin_memset( &TMP$1432$3, 0, 24ll );
			FBSTRING* vr$27 = fb_StrConcat( &TMP$1432$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$29 = fb_StrAssign( (void*)&TMP$1433$3, -1ll, (void*)vr$27, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1433$3 );
			fb_StrDelete( &TMP$1433$3 );
			OUTP( (uint8*)"fld dword ptr [esp]" );
		}
		label$681:;
		__builtin_memset( &TMP$1439$2, 0, 24ll );
		__builtin_memset( &TMP$1435$2, 0, 24ll );
		FBSTRING* vr$34 = fb_StrConcat( &TMP$1435$2, (void*)"movap", 6ll, (void*)&SUFFIX$1, -1ll );
		__builtin_memset( &TMP$1436$2, 0, 24ll );
		FBSTRING* vr$37 = fb_StrConcat( &TMP$1436$2, (void*)vr$34, -1ll, (void*)"xmm7", 5ll );
		__builtin_memset( &TMP$1437$2, 0, 24ll );
		FBSTRING* vr$40 = fb_StrConcat( &TMP$1437$2, (void*)vr$37, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1438$2, 0, 24ll );
		FBSTRING* vr$43 = fb_StrConcat( &TMP$1438$2, (void*)vr$40, -1ll, (void*)&DST$1, -1ll );
		FBSTRING* vr$45 = fb_StrAssign( (void*)&TMP$1439$2, -1ll, (void*)vr$43, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1439$2 );
		fb_StrDelete( &TMP$1439$2 );
	}
	goto label$679;
	label$680:;
	{
		if( DDSIZE$1 <= 4ll ) goto label$684;
		{
			OUTP( (uint8*)"fst qword ptr [esp]" );
			OUTP( (uint8*)"movlpd xmm7, qword ptr [esp]" );
		}
		goto label$683;
		label$684:;
		{
			OUTP( (uint8*)"fst dword ptr [esp]" );
			OUTP( (uint8*)"movss xmm7, dword ptr [esp]" );
		}
		label$683:;
	}
	label$679:;
	OUTP( (uint8*)"fistp qword ptr [esp]" );
	OUTP( (uint8*)"fild qword ptr [esp]" );
	__builtin_memset( &TMP$1446$1, 0, 24ll );
	__builtin_memset( &TMP$1444$1, 0, 24ll );
	FBSTRING* vr$54 = fb_StrConcat( &TMP$1444$1, (void*)"fstp ", 6ll, (void*)(((uint8*)DTYPETB$ + (*(int64*)((uint8*)DVREG$1 + 8ll) * 24ll)) + 8ll), 12ll );
	__builtin_memset( &TMP$1445$1, 0, 24ll );
	FBSTRING* vr$57 = fb_StrConcat( &TMP$1445$1, (void*)vr$54, -1ll, (void*)" [esp]", 7ll );
	FBSTRING* vr$59 = fb_StrAssign( (void*)&TMP$1446$1, -1ll, (void*)vr$57, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1446$1 );
	fb_StrDelete( &TMP$1446$1 );
	__builtin_memset( &TMP$1452$1, 0, 24ll );
	__builtin_memset( &TMP$1448$1, 0, 24ll );
	FBSTRING* vr$64 = fb_StrConcat( &TMP$1448$1, (void*)"xorp", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1449$1, 0, 24ll );
	FBSTRING* vr$67 = fb_StrConcat( &TMP$1449$1, (void*)vr$64, -1ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1450$1, 0, 24ll );
	FBSTRING* vr$70 = fb_StrConcat( &TMP$1450$1, (void*)vr$67, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1451$1, 0, 24ll );
	FBSTRING* vr$73 = fb_StrConcat( &TMP$1451$1, (void*)vr$70, -1ll, (void*)&DST$1, -1ll );
	FBSTRING* vr$75 = fb_StrAssign( (void*)&TMP$1452$1, -1ll, (void*)vr$73, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1452$1 );
	fb_StrDelete( &TMP$1452$1 );
	__builtin_memset( &TMP$1457$1, 0, 24ll );
	__builtin_memset( &TMP$1453$1, 0, 24ll );
	FBSTRING* vr$80 = fb_StrConcat( &TMP$1453$1, (void*)"subs", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1454$1, 0, 24ll );
	FBSTRING* vr$83 = fb_StrConcat( &TMP$1454$1, (void*)vr$80, -1ll, (void*)"xmm7", 5ll );
	__builtin_memset( &TMP$1455$1, 0, 24ll );
	FBSTRING* vr$86 = fb_StrConcat( &TMP$1455$1, (void*)vr$83, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1456$1, 0, 24ll );
	FBSTRING* vr$89 = fb_StrConcat( &TMP$1456$1, (void*)vr$86, -1ll, (void*)"[esp]", 6ll );
	FBSTRING* vr$91 = fb_StrAssign( (void*)&TMP$1457$1, -1ll, (void*)vr$89, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1457$1 );
	fb_StrDelete( &TMP$1457$1 );
	__builtin_memset( &TMP$1463$1, 0, 24ll );
	__builtin_memset( &TMP$1459$1, 0, 24ll );
	FBSTRING* vr$96 = fb_StrConcat( &TMP$1459$1, (void*)"cmpnles", 8ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1460$1, 0, 24ll );
	FBSTRING* vr$99 = fb_StrConcat( &TMP$1460$1, (void*)vr$96, -1ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1461$1, 0, 24ll );
	FBSTRING* vr$102 = fb_StrConcat( &TMP$1461$1, (void*)vr$99, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1462$1, 0, 24ll );
	FBSTRING* vr$105 = fb_StrConcat( &TMP$1462$1, (void*)vr$102, -1ll, (void*)"xmm7", 5ll );
	FBSTRING* vr$107 = fb_StrAssign( (void*)&TMP$1463$1, -1ll, (void*)vr$105, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1463$1 );
	fb_StrDelete( &TMP$1463$1 );
	__builtin_memset( &TMP$1469$1, 0, 24ll );
	__builtin_memset( &TMP$1465$1, 0, 24ll );
	FBSTRING* vr$112 = fb_StrConcat( &TMP$1465$1, (void*)"andp", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1466$1, 0, 24ll );
	FBSTRING* vr$115 = fb_StrConcat( &TMP$1466$1, (void*)vr$112, -1ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1467$1, 0, 24ll );
	FBSTRING* vr$118 = fb_StrConcat( &TMP$1467$1, (void*)vr$115, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1468$1, 0, 24ll );
	FBSTRING* vr$121 = fb_StrConcat( &TMP$1468$1, (void*)vr$118, -1ll, (void*)&NEG1$1, -1ll );
	FBSTRING* vr$123 = fb_StrAssign( (void*)&TMP$1469$1, -1ll, (void*)vr$121, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1469$1 );
	fb_StrDelete( &TMP$1469$1 );
	__builtin_memset( &TMP$1474$1, 0, 24ll );
	__builtin_memset( &TMP$1470$1, 0, 24ll );
	FBSTRING* vr$128 = fb_StrConcat( &TMP$1470$1, (void*)"adds", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1471$1, 0, 24ll );
	FBSTRING* vr$131 = fb_StrConcat( &TMP$1471$1, (void*)vr$128, -1ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1472$1, 0, 24ll );
	FBSTRING* vr$134 = fb_StrConcat( &TMP$1472$1, (void*)vr$131, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1473$1, 0, 24ll );
	FBSTRING* vr$137 = fb_StrConcat( &TMP$1473$1, (void*)vr$134, -1ll, (void*)"[esp]", 6ll );
	FBSTRING* vr$139 = fb_StrAssign( (void*)&TMP$1474$1, -1ll, (void*)vr$137, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1474$1 );
	fb_StrDelete( &TMP$1474$1 );
	OUTP( (uint8*)"add esp, 8" );
	label$675:;
}

static void _EMITFIX_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1475$1;
	FBSTRING TMP$1476$1;
	FBSTRING TMP$1477$1;
	FBSTRING TMP$1491$1;
	FBSTRING TMP$1492$1;
	FBSTRING TMP$1493$1;
	FBSTRING TMP$1496$1;
	FBSTRING TMP$1497$1;
	FBSTRING TMP$1498$1;
	FBSTRING TMP$1499$1;
	FBSTRING TMP$1500$1;
	FBSTRING TMP$1501$1;
	FBSTRING TMP$1502$1;
	FBSTRING TMP$1503$1;
	FBSTRING TMP$1504$1;
	FBSTRING TMP$1505$1;
	FBSTRING TMP$1506$1;
	FBSTRING TMP$1507$1;
	FBSTRING TMP$1508$1;
	FBSTRING TMP$1509$1;
	FBSTRING TMP$1510$1;
	FBSTRING TMP$1511$1;
	FBSTRING TMP$1512$1;
	FBSTRING TMP$1513$1;
	FBSTRING TMP$1514$1;
	FBSTRING TMP$1515$1;
	FBSTRING TMP$1516$1;
	FBSTRING TMP$1517$1;
	FBSTRING TMP$1518$1;
	FBSTRING TMP$1519$1;
	FBSTRING TMP$1520$1;
	FBSTRING TMP$1521$1;
	FBSTRING TMP$1522$1;
	FBSTRING TMP$1523$1;
	FBSTRING TMP$1526$1;
	FBSTRING TMP$1527$1;
	FBSTRING TMP$1528$1;
	FBSTRING TMP$1529$1;
	FBSTRING TMP$1530$1;
	FBSTRING TMP$1531$1;
	FBSTRING TMP$1532$1;
	FBSTRING TMP$1533$1;
	FBSTRING TMP$1534$1;
	FBSTRING TMP$1535$1;
	FBSTRING TMP$1536$1;
	FBSTRING TMP$1537$1;
	FBSTRING TMP$1538$1;
	FBSTRING TMP$1539$1;
	FBSTRING TMP$1540$1;
	FBSTRING TMP$1541$1;
	FBSTRING TMP$1542$1;
	label$685:;
	static FBSTRING DST$1;
	static FBSTRING SUFFIX$1;
	static FBSTRING ABSVAL$1;
	static FBSTRING NEG1$1;
	static int64 DDSIZE$1;
	static struct $8FBSYMBOL* NEG1_SYM$1;
	static struct $8FBSYMBOL* ABSVAL_SYM$1;
	static struct $6IRVREG* NEG1_VREG$1;
	static struct $6IRVREG* ABSVAL_VREG$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$687;
	TMP$1475$1 = 22ll;
	goto label$804;
	label$687:;
	TMP$1475$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$804:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1475$1 * 56ll)) + 8ll);
	if( DDSIZE$1 <= 4ll ) goto label$689;
	{
		struct $8FBSYMBOL* vr$7 = SYMBALLOCINTCONST( -4616189618054758400ll, 13ll );
		NEG1_SYM$1 = vr$7;
		struct $6IRVREG* vr$9 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 13ll, (struct $8FBSYMBOL*)0ull, NEG1_SYM$1, *(int64*)((uint8*)NEG1_SYM$1 + 80ll) );
		NEG1_VREG$1 = vr$9;
		struct $8FBSYMBOL* vr$10 = SYMBALLOCINTCONST( -9223372036854775808ull, 13ll );
		ABSVAL_SYM$1 = vr$10;
		struct $6IRVREG* vr$12 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 13ll, (struct $8FBSYMBOL*)0ull, ABSVAL_SYM$1, *(int64*)((uint8*)ABSVAL_SYM$1 + 80ll) );
		ABSVAL_VREG$1 = vr$12;
		fb_StrAssign( (void*)&SUFFIX$1, -1ll, (void*)"d ", 3ll, 0 );
	}
	goto label$688;
	label$689:;
	{
		struct $8FBSYMBOL* vr$13 = SYMBALLOCINTCONST( 3212836864ll, 8ll );
		NEG1_SYM$1 = vr$13;
		struct $6IRVREG* vr$15 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 8ll, (struct $8FBSYMBOL*)0ull, NEG1_SYM$1, *(int64*)((uint8*)NEG1_SYM$1 + 80ll) );
		NEG1_VREG$1 = vr$15;
		struct $8FBSYMBOL* vr$16 = SYMBALLOCINTCONST( 2147483648ll, 8ll );
		ABSVAL_SYM$1 = vr$16;
		struct $6IRVREG* vr$18 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 8ll, (struct $8FBSYMBOL*)0ull, ABSVAL_SYM$1, *(int64*)((uint8*)ABSVAL_SYM$1 + 80ll) );
		ABSVAL_VREG$1 = vr$18;
		fb_StrAssign( (void*)&SUFFIX$1, -1ll, (void*)"s ", 3ll, 0 );
	}
	label$688:;
	*(int64*)((uint8*)NEG1_SYM$1 + 160ll) = 16ll;
	*(int64*)((uint8*)ABSVAL_SYM$1 + 160ll) = 16ll;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( NEG1_VREG$1, &NEG1$1, 23ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( ABSVAL_VREG$1, &ABSVAL$1, 23ll, 0ll, 0ll, -1ll );
	__builtin_memset( &TMP$1477$1, 0, 24ll );
	FBSTRING* vr$23 = fb_LongintToStr( DDSIZE$1 + 8ll );
	__builtin_memset( &TMP$1476$1, 0, 24ll );
	FBSTRING* vr$26 = fb_StrConcat( &TMP$1476$1, (void*)"sub esp, ", 10ll, (void*)vr$23, -1ll );
	FBSTRING* vr$28 = fb_StrAssign( (void*)&TMP$1477$1, -1ll, (void*)vr$26, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1477$1 );
	fb_StrDelete( &TMP$1477$1 );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 1ll ) goto label$691;
	{
		if( DDSIZE$1 <= 4ll ) goto label$693;
		{
			FBSTRING TMP$1478$3;
			FBSTRING TMP$1479$3;
			__builtin_memset( &TMP$1479$3, 0, 24ll );
			__builtin_memset( &TMP$1478$3, 0, 24ll );
			FBSTRING* vr$36 = fb_StrConcat( &TMP$1478$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$38 = fb_StrAssign( (void*)&TMP$1479$3, -1ll, (void*)vr$36, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1479$3 );
			fb_StrDelete( &TMP$1479$3 );
			OUTP( (uint8*)"fld qword ptr [esp]" );
		}
		goto label$692;
		label$693:;
		{
			FBSTRING TMP$1480$3;
			FBSTRING TMP$1481$3;
			__builtin_memset( &TMP$1481$3, 0, 24ll );
			__builtin_memset( &TMP$1480$3, 0, 24ll );
			FBSTRING* vr$43 = fb_StrConcat( &TMP$1480$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$45 = fb_StrAssign( (void*)&TMP$1481$3, -1ll, (void*)vr$43, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1481$3 );
			fb_StrDelete( &TMP$1481$3 );
			OUTP( (uint8*)"fld dword ptr [esp]" );
		}
		label$692:;
	}
	goto label$690;
	label$691:;
	{
		if( DDSIZE$1 <= 4ll ) goto label$695;
		{
			FBSTRING TMP$1482$3;
			FBSTRING TMP$1483$3;
			FBSTRING TMP$1484$3;
			FBSTRING TMP$1485$3;
			OUTP( (uint8*)"fst qword ptr [esp]" );
			__builtin_memset( &TMP$1485$3, 0, 24ll );
			__builtin_memset( &TMP$1482$3, 0, 24ll );
			FBSTRING* vr$51 = fb_StrConcat( &TMP$1482$3, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$1483$3, 0, 24ll );
			FBSTRING* vr$54 = fb_StrConcat( &TMP$1483$3, (void*)vr$51, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$1484$3, 0, 24ll );
			FBSTRING* vr$57 = fb_StrConcat( &TMP$1484$3, (void*)vr$54, -1ll, (void*)"qword ptr [esp]", 16ll );
			FBSTRING* vr$59 = fb_StrAssign( (void*)&TMP$1485$3, -1ll, (void*)vr$57, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1485$3 );
			fb_StrDelete( &TMP$1485$3 );
		}
		goto label$694;
		label$695:;
		{
			FBSTRING TMP$1486$3;
			FBSTRING TMP$1487$3;
			FBSTRING TMP$1488$3;
			FBSTRING TMP$1489$3;
			OUTP( (uint8*)"fst dword ptr [esp]" );
			__builtin_memset( &TMP$1489$3, 0, 24ll );
			__builtin_memset( &TMP$1486$3, 0, 24ll );
			FBSTRING* vr$64 = fb_StrConcat( &TMP$1486$3, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$1487$3, 0, 24ll );
			FBSTRING* vr$67 = fb_StrConcat( &TMP$1487$3, (void*)vr$64, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$1488$3, 0, 24ll );
			FBSTRING* vr$70 = fb_StrConcat( &TMP$1488$3, (void*)vr$67, -1ll, (void*)"dword ptr [esp]", 16ll );
			FBSTRING* vr$72 = fb_StrAssign( (void*)&TMP$1489$3, -1ll, (void*)vr$70, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1489$3 );
			fb_StrDelete( &TMP$1489$3 );
		}
		label$694:;
	}
	label$690:;
	__builtin_memset( &TMP$1493$1, 0, 24ll );
	__builtin_memset( &TMP$1491$1, 0, 24ll );
	FBSTRING* vr$77 = fb_StrConcat( &TMP$1491$1, (void*)"xorp", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1492$1, 0, 24ll );
	FBSTRING* vr$80 = fb_StrConcat( &TMP$1492$1, (void*)vr$77, -1ll, (void*)"xmm7, xmm7", 11ll );
	FBSTRING* vr$82 = fb_StrAssign( (void*)&TMP$1493$1, -1ll, (void*)vr$80, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1493$1 );
	fb_StrDelete( &TMP$1493$1 );
	if( DDSIZE$1 <= 4ll ) goto label$697;
	{
		OUTP( (uint8*)"movlpd [esp+8], xmm7" );
	}
	goto label$696;
	label$697:;
	{
		OUTP( (uint8*)"movss [esp+8], xmm7" );
	}
	label$696:;
	OUTP( (uint8*)"fistp qword ptr [esp]" );
	__builtin_memset( &TMP$1500$1, 0, 24ll );
	__builtin_memset( &TMP$1496$1, 0, 24ll );
	FBSTRING* vr$88 = fb_StrConcat( &TMP$1496$1, (void*)"cmpnles", 8ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1497$1, 0, 24ll );
	FBSTRING* vr$91 = fb_StrConcat( &TMP$1497$1, (void*)vr$88, -1ll, (void*)"xmm7", 5ll );
	__builtin_memset( &TMP$1498$1, 0, 24ll );
	FBSTRING* vr$94 = fb_StrConcat( &TMP$1498$1, (void*)vr$91, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1499$1, 0, 24ll );
	FBSTRING* vr$97 = fb_StrConcat( &TMP$1499$1, (void*)vr$94, -1ll, (void*)&DST$1, -1ll );
	FBSTRING* vr$99 = fb_StrAssign( (void*)&TMP$1500$1, -1ll, (void*)vr$97, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1500$1 );
	fb_StrDelete( &TMP$1500$1 );
	OUTP( (uint8*)"fild qword ptr [esp]" );
	__builtin_memset( &TMP$1505$1, 0, 24ll );
	__builtin_memset( &TMP$1501$1, 0, 24ll );
	FBSTRING* vr$104 = fb_StrConcat( &TMP$1501$1, (void*)"andp", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1502$1, 0, 24ll );
	FBSTRING* vr$107 = fb_StrConcat( &TMP$1502$1, (void*)vr$104, -1ll, (void*)"xmm7", 5ll );
	__builtin_memset( &TMP$1503$1, 0, 24ll );
	FBSTRING* vr$110 = fb_StrConcat( &TMP$1503$1, (void*)vr$107, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1504$1, 0, 24ll );
	FBSTRING* vr$113 = fb_StrConcat( &TMP$1504$1, (void*)vr$110, -1ll, (void*)&ABSVAL$1, -1ll );
	FBSTRING* vr$115 = fb_StrAssign( (void*)&TMP$1505$1, -1ll, (void*)vr$113, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1505$1 );
	fb_StrDelete( &TMP$1505$1 );
	__builtin_memset( &TMP$1508$1, 0, 24ll );
	__builtin_memset( &TMP$1506$1, 0, 24ll );
	FBSTRING* vr$123 = fb_StrConcat( &TMP$1506$1, (void*)"fstp ", 6ll, (void*)(((uint8*)DTYPETB$ + (*(int64*)((uint8*)DVREG$1 + 8ll) * 24ll)) + 8ll), 12ll );
	__builtin_memset( &TMP$1507$1, 0, 24ll );
	FBSTRING* vr$126 = fb_StrConcat( &TMP$1507$1, (void*)vr$123, -1ll, (void*)" [esp]", 7ll );
	FBSTRING* vr$128 = fb_StrAssign( (void*)&TMP$1508$1, -1ll, (void*)vr$126, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1508$1 );
	fb_StrDelete( &TMP$1508$1 );
	__builtin_memset( &TMP$1513$1, 0, 24ll );
	__builtin_memset( &TMP$1509$1, 0, 24ll );
	FBSTRING* vr$133 = fb_StrConcat( &TMP$1509$1, (void*)"subs", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1510$1, 0, 24ll );
	FBSTRING* vr$136 = fb_StrConcat( &TMP$1510$1, (void*)vr$133, -1ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1511$1, 0, 24ll );
	FBSTRING* vr$139 = fb_StrConcat( &TMP$1511$1, (void*)vr$136, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1512$1, 0, 24ll );
	FBSTRING* vr$142 = fb_StrConcat( &TMP$1512$1, (void*)vr$139, -1ll, (void*)"[esp]", 6ll );
	FBSTRING* vr$144 = fb_StrAssign( (void*)&TMP$1513$1, -1ll, (void*)vr$142, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1513$1 );
	fb_StrDelete( &TMP$1513$1 );
	__builtin_memset( &TMP$1518$1, 0, 24ll );
	__builtin_memset( &TMP$1514$1, 0, 24ll );
	FBSTRING* vr$149 = fb_StrConcat( &TMP$1514$1, (void*)"xorp", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1515$1, 0, 24ll );
	FBSTRING* vr$152 = fb_StrConcat( &TMP$1515$1, (void*)vr$149, -1ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1516$1, 0, 24ll );
	FBSTRING* vr$155 = fb_StrConcat( &TMP$1516$1, (void*)vr$152, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1517$1, 0, 24ll );
	FBSTRING* vr$158 = fb_StrConcat( &TMP$1517$1, (void*)vr$155, -1ll, (void*)"xmm7", 5ll );
	FBSTRING* vr$160 = fb_StrAssign( (void*)&TMP$1518$1, -1ll, (void*)vr$158, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1518$1 );
	fb_StrDelete( &TMP$1518$1 );
	__builtin_memset( &TMP$1523$1, 0, 24ll );
	__builtin_memset( &TMP$1519$1, 0, 24ll );
	FBSTRING* vr$165 = fb_StrConcat( &TMP$1519$1, (void*)"xorp", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1520$1, 0, 24ll );
	FBSTRING* vr$168 = fb_StrConcat( &TMP$1520$1, (void*)vr$165, -1ll, (void*)"xmm7", 5ll );
	__builtin_memset( &TMP$1521$1, 0, 24ll );
	FBSTRING* vr$171 = fb_StrConcat( &TMP$1521$1, (void*)vr$168, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1522$1, 0, 24ll );
	FBSTRING* vr$174 = fb_StrConcat( &TMP$1522$1, (void*)vr$171, -1ll, (void*)&NEG1$1, -1ll );
	FBSTRING* vr$176 = fb_StrAssign( (void*)&TMP$1523$1, -1ll, (void*)vr$174, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1523$1 );
	fb_StrDelete( &TMP$1523$1 );
	__builtin_memset( &TMP$1530$1, 0, 24ll );
	__builtin_memset( &TMP$1526$1, 0, 24ll );
	FBSTRING* vr$181 = fb_StrConcat( &TMP$1526$1, (void*)"cmplts", 7ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1527$1, 0, 24ll );
	FBSTRING* vr$184 = fb_StrConcat( &TMP$1527$1, (void*)vr$181, -1ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1528$1, 0, 24ll );
	FBSTRING* vr$187 = fb_StrConcat( &TMP$1528$1, (void*)vr$184, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1529$1, 0, 24ll );
	FBSTRING* vr$190 = fb_StrConcat( &TMP$1529$1, (void*)vr$187, -1ll, (void*)"[esp+8]", 8ll );
	FBSTRING* vr$192 = fb_StrAssign( (void*)&TMP$1530$1, -1ll, (void*)vr$190, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1530$1 );
	fb_StrDelete( &TMP$1530$1 );
	__builtin_memset( &TMP$1535$1, 0, 24ll );
	__builtin_memset( &TMP$1531$1, 0, 24ll );
	FBSTRING* vr$197 = fb_StrConcat( &TMP$1531$1, (void*)"andp", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1532$1, 0, 24ll );
	FBSTRING* vr$200 = fb_StrConcat( &TMP$1532$1, (void*)vr$197, -1ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1533$1, 0, 24ll );
	FBSTRING* vr$203 = fb_StrConcat( &TMP$1533$1, (void*)vr$200, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1534$1, 0, 24ll );
	FBSTRING* vr$206 = fb_StrConcat( &TMP$1534$1, (void*)vr$203, -1ll, (void*)"xmm7", 5ll );
	FBSTRING* vr$208 = fb_StrAssign( (void*)&TMP$1535$1, -1ll, (void*)vr$206, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1535$1 );
	fb_StrDelete( &TMP$1535$1 );
	__builtin_memset( &TMP$1540$1, 0, 24ll );
	__builtin_memset( &TMP$1536$1, 0, 24ll );
	FBSTRING* vr$213 = fb_StrConcat( &TMP$1536$1, (void*)"adds", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1537$1, 0, 24ll );
	FBSTRING* vr$216 = fb_StrConcat( &TMP$1537$1, (void*)vr$213, -1ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1538$1, 0, 24ll );
	FBSTRING* vr$219 = fb_StrConcat( &TMP$1538$1, (void*)vr$216, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1539$1, 0, 24ll );
	FBSTRING* vr$222 = fb_StrConcat( &TMP$1539$1, (void*)vr$219, -1ll, (void*)"[esp]", 6ll );
	FBSTRING* vr$224 = fb_StrAssign( (void*)&TMP$1540$1, -1ll, (void*)vr$222, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1540$1 );
	fb_StrDelete( &TMP$1540$1 );
	__builtin_memset( &TMP$1542$1, 0, 24ll );
	FBSTRING* vr$228 = fb_LongintToStr( DDSIZE$1 + 8ll );
	__builtin_memset( &TMP$1541$1, 0, 24ll );
	FBSTRING* vr$231 = fb_StrConcat( &TMP$1541$1, (void*)"add esp, ", 10ll, (void*)vr$228, -1ll );
	FBSTRING* vr$233 = fb_StrAssign( (void*)&TMP$1542$1, -1ll, (void*)vr$231, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1542$1 );
	fb_StrDelete( &TMP$1542$1 );
	label$686:;
}

static void _EMITFRAC_SSE( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1543$1;
	FBSTRING TMP$1544$1;
	FBSTRING TMP$1545$1;
	FBSTRING TMP$1558$1;
	FBSTRING TMP$1559$1;
	FBSTRING TMP$1560$1;
	FBSTRING TMP$1573$1;
	FBSTRING TMP$1574$1;
	FBSTRING TMP$1575$1;
	FBSTRING TMP$1576$1;
	FBSTRING TMP$1577$1;
	FBSTRING TMP$1578$1;
	FBSTRING TMP$1579$1;
	FBSTRING TMP$1580$1;
	FBSTRING TMP$1581$1;
	FBSTRING TMP$1582$1;
	FBSTRING TMP$1583$1;
	FBSTRING TMP$1584$1;
	FBSTRING TMP$1585$1;
	FBSTRING TMP$1586$1;
	FBSTRING TMP$1587$1;
	FBSTRING TMP$1588$1;
	FBSTRING TMP$1589$1;
	FBSTRING TMP$1590$1;
	FBSTRING TMP$1591$1;
	FBSTRING TMP$1592$1;
	FBSTRING TMP$1593$1;
	FBSTRING TMP$1594$1;
	FBSTRING TMP$1595$1;
	FBSTRING TMP$1596$1;
	FBSTRING TMP$1597$1;
	FBSTRING TMP$1598$1;
	FBSTRING TMP$1599$1;
	FBSTRING TMP$1600$1;
	FBSTRING TMP$1601$1;
	FBSTRING TMP$1602$1;
	FBSTRING TMP$1603$1;
	FBSTRING TMP$1604$1;
	FBSTRING TMP$1605$1;
	FBSTRING TMP$1606$1;
	FBSTRING TMP$1607$1;
	FBSTRING TMP$1608$1;
	FBSTRING TMP$1609$1;
	FBSTRING TMP$1610$1;
	FBSTRING TMP$1622$1;
	FBSTRING TMP$1623$1;
	FBSTRING TMP$1624$1;
	FBSTRING TMP$1625$1;
	FBSTRING TMP$1626$1;
	FBSTRING TMP$1627$1;
	FBSTRING TMP$1628$1;
	FBSTRING TMP$1629$1;
	FBSTRING TMP$1630$1;
	FBSTRING TMP$1631$1;
	FBSTRING TMP$1632$1;
	FBSTRING TMP$1633$1;
	label$698:;
	static FBSTRING DST$1;
	static FBSTRING SUFFIX$1;
	static FBSTRING ABSVAL$1;
	static FBSTRING NEG1$1;
	static int64 DDSIZE$1;
	static struct $8FBSYMBOL* NEG1_SYM$1;
	static struct $8FBSYMBOL* ABSVAL_SYM$1;
	static struct $6IRVREG* NEG1_VREG$1;
	static struct $6IRVREG* ABSVAL_VREG$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$700;
	TMP$1543$1 = 22ll;
	goto label$805;
	label$700:;
	TMP$1543$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$805:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1543$1 * 56ll)) + 8ll);
	if( DDSIZE$1 <= 4ll ) goto label$702;
	{
		struct $8FBSYMBOL* vr$7 = SYMBALLOCINTCONST( -4616189618054758400ll, 13ll );
		NEG1_SYM$1 = vr$7;
		struct $6IRVREG* vr$9 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 13ll, (struct $8FBSYMBOL*)0ull, NEG1_SYM$1, *(int64*)((uint8*)NEG1_SYM$1 + 80ll) );
		NEG1_VREG$1 = vr$9;
		struct $8FBSYMBOL* vr$10 = SYMBALLOCINTCONST( -9223372036854775808ull, 13ll );
		ABSVAL_SYM$1 = vr$10;
		struct $6IRVREG* vr$12 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 13ll, (struct $8FBSYMBOL*)0ull, ABSVAL_SYM$1, *(int64*)((uint8*)ABSVAL_SYM$1 + 80ll) );
		ABSVAL_VREG$1 = vr$12;
		fb_StrAssign( (void*)&SUFFIX$1, -1ll, (void*)"d ", 3ll, 0 );
	}
	goto label$701;
	label$702:;
	{
		struct $8FBSYMBOL* vr$13 = SYMBALLOCINTCONST( 3212836864ll, 8ll );
		NEG1_SYM$1 = vr$13;
		struct $6IRVREG* vr$15 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 8ll, (struct $8FBSYMBOL*)0ull, NEG1_SYM$1, *(int64*)((uint8*)NEG1_SYM$1 + 80ll) );
		NEG1_VREG$1 = vr$15;
		struct $8FBSYMBOL* vr$16 = SYMBALLOCINTCONST( 2147483648ll, 8ll );
		ABSVAL_SYM$1 = vr$16;
		struct $6IRVREG* vr$18 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( 8ll, (struct $8FBSYMBOL*)0ull, ABSVAL_SYM$1, *(int64*)((uint8*)ABSVAL_SYM$1 + 80ll) );
		ABSVAL_VREG$1 = vr$18;
		fb_StrAssign( (void*)&SUFFIX$1, -1ll, (void*)"s ", 3ll, 0 );
	}
	label$701:;
	*(int64*)((uint8*)NEG1_SYM$1 + 160ll) = 16ll;
	*(int64*)((uint8*)ABSVAL_SYM$1 + 160ll) = 16ll;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( NEG1_VREG$1, &NEG1$1, 23ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( ABSVAL_VREG$1, &ABSVAL$1, 23ll, 0ll, 0ll, -1ll );
	__builtin_memset( &TMP$1545$1, 0, 24ll );
	FBSTRING* vr$23 = fb_LongintToStr( DDSIZE$1 + 8ll );
	__builtin_memset( &TMP$1544$1, 0, 24ll );
	FBSTRING* vr$26 = fb_StrConcat( &TMP$1544$1, (void*)"sub esp, ", 10ll, (void*)vr$23, -1ll );
	FBSTRING* vr$28 = fb_StrAssign( (void*)&TMP$1545$1, -1ll, (void*)vr$26, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1545$1 );
	fb_StrDelete( &TMP$1545$1 );
	if( *(int64*)((uint8*)DVREG$1 + 32ll) != 1ll ) goto label$704;
	{
		if( DDSIZE$1 <= 4ll ) goto label$706;
		{
			FBSTRING TMP$1546$3;
			FBSTRING TMP$1547$3;
			__builtin_memset( &TMP$1547$3, 0, 24ll );
			__builtin_memset( &TMP$1546$3, 0, 24ll );
			FBSTRING* vr$36 = fb_StrConcat( &TMP$1546$3, (void*)"movlpd qword ptr [esp], ", 25ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$38 = fb_StrAssign( (void*)&TMP$1547$3, -1ll, (void*)vr$36, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1547$3 );
			fb_StrDelete( &TMP$1547$3 );
			OUTP( (uint8*)"fld qword ptr [esp]" );
		}
		goto label$705;
		label$706:;
		{
			FBSTRING TMP$1548$3;
			FBSTRING TMP$1549$3;
			__builtin_memset( &TMP$1549$3, 0, 24ll );
			__builtin_memset( &TMP$1548$3, 0, 24ll );
			FBSTRING* vr$43 = fb_StrConcat( &TMP$1548$3, (void*)"movss dword ptr [esp], ", 24ll, (void*)&DST$1, -1ll );
			FBSTRING* vr$45 = fb_StrAssign( (void*)&TMP$1549$3, -1ll, (void*)vr$43, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1549$3 );
			fb_StrDelete( &TMP$1549$3 );
			OUTP( (uint8*)"fld dword ptr [esp]" );
		}
		label$705:;
	}
	goto label$703;
	label$704:;
	{
		if( DDSIZE$1 <= 4ll ) goto label$708;
		{
			FBSTRING TMP$1550$3;
			FBSTRING TMP$1551$3;
			FBSTRING TMP$1552$3;
			FBSTRING TMP$1553$3;
			OUTP( (uint8*)"fst qword ptr [esp]" );
			__builtin_memset( &TMP$1553$3, 0, 24ll );
			__builtin_memset( &TMP$1550$3, 0, 24ll );
			FBSTRING* vr$51 = fb_StrConcat( &TMP$1550$3, (void*)"movlpd ", 8ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$1551$3, 0, 24ll );
			FBSTRING* vr$54 = fb_StrConcat( &TMP$1551$3, (void*)vr$51, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$1552$3, 0, 24ll );
			FBSTRING* vr$57 = fb_StrConcat( &TMP$1552$3, (void*)vr$54, -1ll, (void*)"qword ptr [esp]", 16ll );
			FBSTRING* vr$59 = fb_StrAssign( (void*)&TMP$1553$3, -1ll, (void*)vr$57, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1553$3 );
			fb_StrDelete( &TMP$1553$3 );
		}
		goto label$707;
		label$708:;
		{
			FBSTRING TMP$1554$3;
			FBSTRING TMP$1555$3;
			FBSTRING TMP$1556$3;
			FBSTRING TMP$1557$3;
			OUTP( (uint8*)"fst dword ptr [esp]" );
			__builtin_memset( &TMP$1557$3, 0, 24ll );
			__builtin_memset( &TMP$1554$3, 0, 24ll );
			FBSTRING* vr$64 = fb_StrConcat( &TMP$1554$3, (void*)"movss ", 7ll, (void*)&DST$1, -1ll );
			__builtin_memset( &TMP$1555$3, 0, 24ll );
			FBSTRING* vr$67 = fb_StrConcat( &TMP$1555$3, (void*)vr$64, -1ll, (void*)", ", 3ll );
			__builtin_memset( &TMP$1556$3, 0, 24ll );
			FBSTRING* vr$70 = fb_StrConcat( &TMP$1556$3, (void*)vr$67, -1ll, (void*)"dword ptr [esp]", 16ll );
			FBSTRING* vr$72 = fb_StrAssign( (void*)&TMP$1557$3, -1ll, (void*)vr$70, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1557$3 );
			fb_StrDelete( &TMP$1557$3 );
		}
		label$707:;
	}
	label$703:;
	__builtin_memset( &TMP$1560$1, 0, 24ll );
	__builtin_memset( &TMP$1558$1, 0, 24ll );
	FBSTRING* vr$77 = fb_StrConcat( &TMP$1558$1, (void*)"xorp", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1559$1, 0, 24ll );
	FBSTRING* vr$80 = fb_StrConcat( &TMP$1559$1, (void*)vr$77, -1ll, (void*)"xmm7, xmm7", 11ll );
	FBSTRING* vr$82 = fb_StrAssign( (void*)&TMP$1560$1, -1ll, (void*)vr$80, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1560$1 );
	fb_StrDelete( &TMP$1560$1 );
	if( DDSIZE$1 <= 4ll ) goto label$710;
	{
		FBSTRING TMP$1562$2;
		FBSTRING TMP$1563$2;
		FBSTRING TMP$1564$2;
		FBSTRING TMP$1565$2;
		FBSTRING TMP$1566$2;
		FBSTRING TMP$1567$2;
		__builtin_memset( &TMP$1567$2, 0, 24ll );
		__builtin_memset( &TMP$1562$2, 0, 24ll );
		FBSTRING* vr$88 = fb_StrConcat( &TMP$1562$2, (void*)"shufpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1563$2, 0, 24ll );
		FBSTRING* vr$91 = fb_StrConcat( &TMP$1563$2, (void*)vr$88, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1564$2, 0, 24ll );
		FBSTRING* vr$94 = fb_StrConcat( &TMP$1564$2, (void*)vr$91, -1ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1565$2, 0, 24ll );
		FBSTRING* vr$97 = fb_StrConcat( &TMP$1565$2, (void*)vr$94, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1566$2, 0, 24ll );
		FBSTRING* vr$100 = fb_StrConcat( &TMP$1566$2, (void*)vr$97, -1ll, (void*)"0", 2ll );
		FBSTRING* vr$102 = fb_StrAssign( (void*)&TMP$1567$2, -1ll, (void*)vr$100, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1567$2 );
		fb_StrDelete( &TMP$1567$2 );
		OUTP( (uint8*)"movlpd [esp+8], xmm7" );
	}
	goto label$709;
	label$710:;
	{
		FBSTRING TMP$1569$2;
		FBSTRING TMP$1570$2;
		FBSTRING TMP$1571$2;
		FBSTRING TMP$1572$2;
		__builtin_memset( &TMP$1572$2, 0, 24ll );
		__builtin_memset( &TMP$1569$2, 0, 24ll );
		FBSTRING* vr$107 = fb_StrConcat( &TMP$1569$2, (void*)"movlhps ", 9ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1570$2, 0, 24ll );
		FBSTRING* vr$110 = fb_StrConcat( &TMP$1570$2, (void*)vr$107, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1571$2, 0, 24ll );
		FBSTRING* vr$113 = fb_StrConcat( &TMP$1571$2, (void*)vr$110, -1ll, (void*)&DST$1, -1ll );
		FBSTRING* vr$115 = fb_StrAssign( (void*)&TMP$1572$2, -1ll, (void*)vr$113, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1572$2 );
		fb_StrDelete( &TMP$1572$2 );
		OUTP( (uint8*)"movss [esp+8], xmm7" );
	}
	label$709:;
	OUTP( (uint8*)"fistp qword ptr [esp]" );
	__builtin_memset( &TMP$1577$1, 0, 24ll );
	__builtin_memset( &TMP$1573$1, 0, 24ll );
	FBSTRING* vr$120 = fb_StrConcat( &TMP$1573$1, (void*)"cmpnles", 8ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1574$1, 0, 24ll );
	FBSTRING* vr$123 = fb_StrConcat( &TMP$1574$1, (void*)vr$120, -1ll, (void*)"xmm7", 5ll );
	__builtin_memset( &TMP$1575$1, 0, 24ll );
	FBSTRING* vr$126 = fb_StrConcat( &TMP$1575$1, (void*)vr$123, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1576$1, 0, 24ll );
	FBSTRING* vr$129 = fb_StrConcat( &TMP$1576$1, (void*)vr$126, -1ll, (void*)&DST$1, -1ll );
	FBSTRING* vr$131 = fb_StrAssign( (void*)&TMP$1577$1, -1ll, (void*)vr$129, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1577$1 );
	fb_StrDelete( &TMP$1577$1 );
	OUTP( (uint8*)"fild qword ptr [esp]" );
	__builtin_memset( &TMP$1582$1, 0, 24ll );
	__builtin_memset( &TMP$1578$1, 0, 24ll );
	FBSTRING* vr$136 = fb_StrConcat( &TMP$1578$1, (void*)"andp", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1579$1, 0, 24ll );
	FBSTRING* vr$139 = fb_StrConcat( &TMP$1579$1, (void*)vr$136, -1ll, (void*)"xmm7", 5ll );
	__builtin_memset( &TMP$1580$1, 0, 24ll );
	FBSTRING* vr$142 = fb_StrConcat( &TMP$1580$1, (void*)vr$139, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1581$1, 0, 24ll );
	FBSTRING* vr$145 = fb_StrConcat( &TMP$1581$1, (void*)vr$142, -1ll, (void*)&ABSVAL$1, -1ll );
	FBSTRING* vr$147 = fb_StrAssign( (void*)&TMP$1582$1, -1ll, (void*)vr$145, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1582$1 );
	fb_StrDelete( &TMP$1582$1 );
	__builtin_memset( &TMP$1585$1, 0, 24ll );
	__builtin_memset( &TMP$1583$1, 0, 24ll );
	FBSTRING* vr$155 = fb_StrConcat( &TMP$1583$1, (void*)"fstp ", 6ll, (void*)(((uint8*)DTYPETB$ + (*(int64*)((uint8*)DVREG$1 + 8ll) * 24ll)) + 8ll), 12ll );
	__builtin_memset( &TMP$1584$1, 0, 24ll );
	FBSTRING* vr$158 = fb_StrConcat( &TMP$1584$1, (void*)vr$155, -1ll, (void*)" [esp]", 7ll );
	FBSTRING* vr$160 = fb_StrAssign( (void*)&TMP$1585$1, -1ll, (void*)vr$158, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1585$1 );
	fb_StrDelete( &TMP$1585$1 );
	__builtin_memset( &TMP$1590$1, 0, 24ll );
	__builtin_memset( &TMP$1586$1, 0, 24ll );
	FBSTRING* vr$165 = fb_StrConcat( &TMP$1586$1, (void*)"subs", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1587$1, 0, 24ll );
	FBSTRING* vr$168 = fb_StrConcat( &TMP$1587$1, (void*)vr$165, -1ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1588$1, 0, 24ll );
	FBSTRING* vr$171 = fb_StrConcat( &TMP$1588$1, (void*)vr$168, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1589$1, 0, 24ll );
	FBSTRING* vr$174 = fb_StrConcat( &TMP$1589$1, (void*)vr$171, -1ll, (void*)"[esp]", 6ll );
	FBSTRING* vr$176 = fb_StrAssign( (void*)&TMP$1590$1, -1ll, (void*)vr$174, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1590$1 );
	fb_StrDelete( &TMP$1590$1 );
	__builtin_memset( &TMP$1595$1, 0, 24ll );
	__builtin_memset( &TMP$1591$1, 0, 24ll );
	FBSTRING* vr$181 = fb_StrConcat( &TMP$1591$1, (void*)"xorp", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1592$1, 0, 24ll );
	FBSTRING* vr$184 = fb_StrConcat( &TMP$1592$1, (void*)vr$181, -1ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1593$1, 0, 24ll );
	FBSTRING* vr$187 = fb_StrConcat( &TMP$1593$1, (void*)vr$184, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1594$1, 0, 24ll );
	FBSTRING* vr$190 = fb_StrConcat( &TMP$1594$1, (void*)vr$187, -1ll, (void*)"xmm7", 5ll );
	FBSTRING* vr$192 = fb_StrAssign( (void*)&TMP$1595$1, -1ll, (void*)vr$190, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1595$1 );
	fb_StrDelete( &TMP$1595$1 );
	__builtin_memset( &TMP$1600$1, 0, 24ll );
	__builtin_memset( &TMP$1596$1, 0, 24ll );
	FBSTRING* vr$197 = fb_StrConcat( &TMP$1596$1, (void*)"xorp", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1597$1, 0, 24ll );
	FBSTRING* vr$200 = fb_StrConcat( &TMP$1597$1, (void*)vr$197, -1ll, (void*)"xmm7", 5ll );
	__builtin_memset( &TMP$1598$1, 0, 24ll );
	FBSTRING* vr$203 = fb_StrConcat( &TMP$1598$1, (void*)vr$200, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1599$1, 0, 24ll );
	FBSTRING* vr$206 = fb_StrConcat( &TMP$1599$1, (void*)vr$203, -1ll, (void*)&NEG1$1, -1ll );
	FBSTRING* vr$208 = fb_StrAssign( (void*)&TMP$1600$1, -1ll, (void*)vr$206, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1600$1 );
	fb_StrDelete( &TMP$1600$1 );
	__builtin_memset( &TMP$1605$1, 0, 24ll );
	__builtin_memset( &TMP$1601$1, 0, 24ll );
	FBSTRING* vr$213 = fb_StrConcat( &TMP$1601$1, (void*)"cmplts", 7ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1602$1, 0, 24ll );
	FBSTRING* vr$216 = fb_StrConcat( &TMP$1602$1, (void*)vr$213, -1ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1603$1, 0, 24ll );
	FBSTRING* vr$219 = fb_StrConcat( &TMP$1603$1, (void*)vr$216, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1604$1, 0, 24ll );
	FBSTRING* vr$222 = fb_StrConcat( &TMP$1604$1, (void*)vr$219, -1ll, (void*)"[esp+8]", 8ll );
	FBSTRING* vr$224 = fb_StrAssign( (void*)&TMP$1605$1, -1ll, (void*)vr$222, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1605$1 );
	fb_StrDelete( &TMP$1605$1 );
	__builtin_memset( &TMP$1610$1, 0, 24ll );
	__builtin_memset( &TMP$1606$1, 0, 24ll );
	FBSTRING* vr$229 = fb_StrConcat( &TMP$1606$1, (void*)"andp", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1607$1, 0, 24ll );
	FBSTRING* vr$232 = fb_StrConcat( &TMP$1607$1, (void*)vr$229, -1ll, (void*)"xmm7", 5ll );
	__builtin_memset( &TMP$1608$1, 0, 24ll );
	FBSTRING* vr$235 = fb_StrConcat( &TMP$1608$1, (void*)vr$232, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1609$1, 0, 24ll );
	FBSTRING* vr$238 = fb_StrConcat( &TMP$1609$1, (void*)vr$235, -1ll, (void*)&DST$1, -1ll );
	FBSTRING* vr$240 = fb_StrAssign( (void*)&TMP$1610$1, -1ll, (void*)vr$238, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1610$1 );
	fb_StrDelete( &TMP$1610$1 );
	if( DDSIZE$1 <= 4ll ) goto label$712;
	{
		FBSTRING TMP$1611$2;
		FBSTRING TMP$1612$2;
		FBSTRING TMP$1613$2;
		FBSTRING TMP$1614$2;
		FBSTRING TMP$1615$2;
		FBSTRING TMP$1616$2;
		__builtin_memset( &TMP$1616$2, 0, 24ll );
		__builtin_memset( &TMP$1611$2, 0, 24ll );
		FBSTRING* vr$246 = fb_StrConcat( &TMP$1611$2, (void*)"shufpd ", 8ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1612$2, 0, 24ll );
		FBSTRING* vr$249 = fb_StrConcat( &TMP$1612$2, (void*)vr$246, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1613$2, 0, 24ll );
		FBSTRING* vr$252 = fb_StrConcat( &TMP$1613$2, (void*)vr$249, -1ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1614$2, 0, 24ll );
		FBSTRING* vr$255 = fb_StrConcat( &TMP$1614$2, (void*)vr$252, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1615$2, 0, 24ll );
		FBSTRING* vr$258 = fb_StrConcat( &TMP$1615$2, (void*)vr$255, -1ll, (void*)"1", 2ll );
		FBSTRING* vr$260 = fb_StrAssign( (void*)&TMP$1616$2, -1ll, (void*)vr$258, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1616$2 );
		fb_StrDelete( &TMP$1616$2 );
	}
	goto label$711;
	label$712:;
	{
		FBSTRING TMP$1618$2;
		FBSTRING TMP$1619$2;
		FBSTRING TMP$1620$2;
		FBSTRING TMP$1621$2;
		__builtin_memset( &TMP$1621$2, 0, 24ll );
		__builtin_memset( &TMP$1618$2, 0, 24ll );
		FBSTRING* vr$265 = fb_StrConcat( &TMP$1618$2, (void*)"movhlps ", 9ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1619$2, 0, 24ll );
		FBSTRING* vr$268 = fb_StrConcat( &TMP$1619$2, (void*)vr$265, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1620$2, 0, 24ll );
		FBSTRING* vr$271 = fb_StrConcat( &TMP$1620$2, (void*)vr$268, -1ll, (void*)&DST$1, -1ll );
		FBSTRING* vr$273 = fb_StrAssign( (void*)&TMP$1621$2, -1ll, (void*)vr$271, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1621$2 );
		fb_StrDelete( &TMP$1621$2 );
	}
	label$711:;
	__builtin_memset( &TMP$1626$1, 0, 24ll );
	__builtin_memset( &TMP$1622$1, 0, 24ll );
	FBSTRING* vr$278 = fb_StrConcat( &TMP$1622$1, (void*)"adds", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1623$1, 0, 24ll );
	FBSTRING* vr$281 = fb_StrConcat( &TMP$1623$1, (void*)vr$278, -1ll, (void*)"xmm7", 5ll );
	__builtin_memset( &TMP$1624$1, 0, 24ll );
	FBSTRING* vr$284 = fb_StrConcat( &TMP$1624$1, (void*)vr$281, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1625$1, 0, 24ll );
	FBSTRING* vr$287 = fb_StrConcat( &TMP$1625$1, (void*)vr$284, -1ll, (void*)"[esp]", 6ll );
	FBSTRING* vr$289 = fb_StrAssign( (void*)&TMP$1626$1, -1ll, (void*)vr$287, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1626$1 );
	fb_StrDelete( &TMP$1626$1 );
	__builtin_memset( &TMP$1631$1, 0, 24ll );
	__builtin_memset( &TMP$1627$1, 0, 24ll );
	FBSTRING* vr$294 = fb_StrConcat( &TMP$1627$1, (void*)"subs", 5ll, (void*)&SUFFIX$1, -1ll );
	__builtin_memset( &TMP$1628$1, 0, 24ll );
	FBSTRING* vr$297 = fb_StrConcat( &TMP$1628$1, (void*)vr$294, -1ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1629$1, 0, 24ll );
	FBSTRING* vr$300 = fb_StrConcat( &TMP$1629$1, (void*)vr$297, -1ll, (void*)", ", 3ll );
	__builtin_memset( &TMP$1630$1, 0, 24ll );
	FBSTRING* vr$303 = fb_StrConcat( &TMP$1630$1, (void*)vr$300, -1ll, (void*)"xmm7", 5ll );
	FBSTRING* vr$305 = fb_StrAssign( (void*)&TMP$1631$1, -1ll, (void*)vr$303, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1631$1 );
	fb_StrDelete( &TMP$1631$1 );
	__builtin_memset( &TMP$1633$1, 0, 24ll );
	FBSTRING* vr$309 = fb_LongintToStr( DDSIZE$1 + 8ll );
	__builtin_memset( &TMP$1632$1, 0, 24ll );
	FBSTRING* vr$312 = fb_StrConcat( &TMP$1632$1, (void*)"add esp, ", 10ll, (void*)vr$309, -1ll );
	FBSTRING* vr$314 = fb_StrAssign( (void*)&TMP$1633$1, -1ll, (void*)vr$312, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1633$1 );
	fb_StrDelete( &TMP$1633$1 );
	label$699:;
}

static void _EMITPUSHF_SSE( struct $6IRVREG* SVREG$1, int64 UNUSED$1 )
{
	int64 TMP$1634$1;
	label$713:;
	static FBSTRING SRC$1;
	static int64 SDSIZE$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$715;
	TMP$1634$1 = 22ll;
	goto label$806;
	label$715:;
	TMP$1634$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$806:;
	SDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1634$1 * 56ll)) + 8ll);
	if( *(int64*)SVREG$1 == 4ll ) goto label$717;
	{
		if( *(int64*)((uint8*)SVREG$1 + 8ll) != 14ll ) goto label$719;
		{
			FBSTRING* vr$10 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"push ", 6ll, 0 );
			FBSTRING* vr$11 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		goto label$718;
		label$719:;
		{
			HPREPOPERAND( SVREG$1, &SRC$1, 7ll, 4ll, 0ll, -1ll );
			FBSTRING* vr$12 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"push ", 6ll, 0 );
			FBSTRING* vr$13 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
			HPREPOPERAND( SVREG$1, &SRC$1, 7ll, 0ll, 0ll, -1ll );
			FBSTRING* vr$14 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"push ", 6ll, 0 );
			FBSTRING* vr$15 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		label$718:;
	}
	goto label$716;
	label$717:;
	{
		FBSTRING TMP$1638$2;
		FBSTRING TMP$1639$2;
		FBSTRING TMP$1640$2;
		FBSTRING TMP$1641$2;
		FBSTRING* vr$16 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"sub esp, ", 10ll, 0 );
		FBSTRING* vr$17 = fb_LongintToStr( SDSIZE$1 );
		FBSTRING* vr$18 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)vr$17, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
		if( *(int64*)((uint8*)SVREG$1 + 32ll) != 0ll ) goto label$721;
		{
			FBSTRING TMP$1636$3;
			FBSTRING TMP$1637$3;
			__builtin_memset( &TMP$1636$3, 0, 24ll );
			FBSTRING* vr$26 = fb_StrConcat( &TMP$1636$3, (void*)"fstp ", 6ll, (void*)(((uint8*)DTYPETB$ + (*(int64*)((uint8*)SVREG$1 + 8ll) * 24ll)) + 8ll), 12ll );
			__builtin_memset( &TMP$1637$3, 0, 24ll );
			FBSTRING* vr$29 = fb_StrConcat( &TMP$1637$3, (void*)vr$26, -1ll, (void*)" [esp]", 7ll );
			FBSTRING* vr$30 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$29, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
			goto label$714;
		}
		label$721:;
		label$720:;
		if( SDSIZE$1 <= 4ll ) goto label$723;
		{
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"movlpd ", 8ll, 0 );
		}
		goto label$722;
		label$723:;
		{
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"movss ", 7ll, 0 );
		}
		label$722:;
		__builtin_memset( &TMP$1641$2, 0, 24ll );
		__builtin_memset( &TMP$1638$2, 0, 24ll );
		FBSTRING* vr$35 = fb_StrConcat( &TMP$1638$2, (void*)&OSTR$1, -1ll, (void*)"[esp]", 6ll );
		__builtin_memset( &TMP$1639$2, 0, 24ll );
		FBSTRING* vr$38 = fb_StrConcat( &TMP$1639$2, (void*)vr$35, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1640$2, 0, 24ll );
		FBSTRING* vr$41 = fb_StrConcat( &TMP$1640$2, (void*)vr$38, -1ll, (void*)&SRC$1, -1ll );
		FBSTRING* vr$43 = fb_StrAssign( (void*)&TMP$1641$2, -1ll, (void*)vr$41, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1641$2 );
		fb_StrDelete( &TMP$1641$2 );
	}
	label$716:;
	label$714:;
}

static void _EMITPOPF_SSE( struct $6IRVREG* DVREG$1, int64 UNUSED$1 )
{
	int64 TMP$1642$1;
	label$724:;
	static FBSTRING DST$1;
	static FBSTRING OSTR$1;
	static int64 DSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$726;
	TMP$1642$1 = 22ll;
	goto label$807;
	label$726:;
	TMP$1642$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$807:;
	DSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1642$1 * 56ll)) + 8ll);
	if( *(int64*)DVREG$1 == 4ll ) goto label$728;
	{
		if( *(int64*)((uint8*)DVREG$1 + 8ll) != 14ll ) goto label$730;
		{
			FBSTRING* vr$10 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"pop ", 5ll, 0 );
			FBSTRING* vr$11 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		goto label$729;
		label$730:;
		{
			HPREPOPERAND( DVREG$1, &DST$1, 7ll, 0ll, 0ll, -1ll );
			FBSTRING* vr$12 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"pop ", 5ll, 0 );
			FBSTRING* vr$13 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
			HPREPOPERAND( DVREG$1, &DST$1, 7ll, 4ll, 0ll, -1ll );
			FBSTRING* vr$14 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"pop ", 5ll, 0 );
			FBSTRING* vr$15 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		label$729:;
	}
	goto label$727;
	label$728:;
	{
		FBSTRING TMP$1644$2;
		FBSTRING TMP$1645$2;
		FBSTRING TMP$1646$2;
		FBSTRING TMP$1647$2;
		FBSTRING TMP$1648$2;
		FBSTRING TMP$1649$2;
		FBSTRING TMP$1650$2;
		if( DSIZE$1 <= 4ll ) goto label$732;
		{
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"movlpd ", 8ll, 0 );
		}
		goto label$731;
		label$732:;
		{
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"movss ", 7ll, 0 );
		}
		label$731:;
		__builtin_memset( &TMP$1648$2, 0, 24ll );
		__builtin_memset( &TMP$1644$2, 0, 24ll );
		FBSTRING* vr$23 = fb_StrConcat( &TMP$1644$2, (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll );
		__builtin_memset( &TMP$1645$2, 0, 24ll );
		FBSTRING* vr$26 = fb_StrConcat( &TMP$1645$2, (void*)vr$23, -1ll, (void*)", ", 3ll );
		__builtin_memset( &TMP$1646$2, 0, 24ll );
		FBSTRING* vr$29 = fb_StrConcat( &TMP$1646$2, (void*)vr$26, -1ll, (void*)(((uint8*)DTYPETB$ + (*(int64*)((uint8*)DVREG$1 + 8ll) * 24ll)) + 8ll), 12ll );
		__builtin_memset( &TMP$1647$2, 0, 24ll );
		FBSTRING* vr$32 = fb_StrConcat( &TMP$1647$2, (void*)vr$29, -1ll, (void*)" [esp]", 7ll );
		FBSTRING* vr$34 = fb_StrAssign( (void*)&TMP$1648$2, -1ll, (void*)vr$32, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1648$2 );
		fb_StrDelete( &TMP$1648$2 );
		__builtin_memset( &TMP$1650$2, 0, 24ll );
		FBSTRING* vr$37 = fb_LongintToStr( DSIZE$1 );
		__builtin_memset( &TMP$1649$2, 0, 24ll );
		FBSTRING* vr$40 = fb_StrConcat( &TMP$1649$2, (void*)"add esp, ", 10ll, (void*)vr$37, -1ll );
		FBSTRING* vr$42 = fb_StrAssign( (void*)&TMP$1650$2, -1ll, (void*)vr$40, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1650$2 );
		fb_StrDelete( &TMP$1650$2 );
	}
	label$727:;
	label$725:;
}

// Total compilation time: 0.06493197684176266 seconds.
