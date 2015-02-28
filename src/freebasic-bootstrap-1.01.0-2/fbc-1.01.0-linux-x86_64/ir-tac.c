// Compilation of fbc-1.01.0/src/compiler/ir-tac.bas started at 14:16:41 on 02-28-2015

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
struct $10TFLISTITEM;
struct $10TFLISTITEM {
	struct $10TFLISTITEM* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $10TFLISTITEM ) == 8 );
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
struct $6TFLIST {
	int64 TOTITEMS;
	int64 ITEMS;
	struct $10TFLISTITEM* ITEMTB;
	int64 INDEX;
	struct $10TFLISTITEM* LASTITEM;
	struct $5TLIST LIST;
	struct $7TLISTTB* LISTTB;
};
__FB_STATIC_ASSERT( sizeof( struct $6TFLIST ) == 112 );
typedef int64 $6AST_OP;
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
typedef int64 $12IR_REGFAMILY;
struct $6IRVREG;
struct $9IRTACVREG;
struct $5IRTAC;
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
struct $9IRTAC_CTX {
	struct $6TFLIST TACTB;
	int64 TACCNT;
	struct $5IRTAC* TACIDX;
	struct $6TFLIST VREGTB;
	FBSTRING ASM_LINE;
};
__FB_STATIC_ASSERT( sizeof( struct $9IRTAC_CTX ) == 264 );
struct $8REGCLASS;
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
typedef int64 (*tmp$36)( void );
typedef void (*tmp$37)( double );
typedef int64 $14IR_OPTIONVALUE;
typedef int64 (*tmp$38)( $14IR_OPTIONVALUE );
typedef void (*tmp$40)( struct $8FBSYMBOL* );
typedef void (*tmp$41)( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef uint8* (*tmp$42)( void );
typedef void (*tmp$93)( struct $8FBSYMBOL*, int64, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef int64 $12FB_DATACLASS;
typedef struct $6IRVREG* (*tmp$67)( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
typedef uint64 (*tmp$71)( struct $6IRVREG* );
typedef int64 (*tmp$39)( int64, int64 );
typedef void (*tmp$43)( struct $6IRVREG*, struct $6IRVREG* );
typedef void (*tmp$92)( int64, int64, int64*, int64* );
void fb_MemSwap( void*, void*, int64 );
void free( void* );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
void fb_WstrDelete( uint32* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
FBSTRING* fb_StrAllocTempDescZ( uint8* );
FBSTRING* fb_LongintToStr( int64 );
FBSTRING* fb_LEFT( FBSTRING*, int64 );
uint32* fb_WstrLeft( uint32*, int64 );
static void fb_ctor__irztac( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
typedef int64 $12FB_ERRMSGOPT;
void ERRREPORTWARN( int64, uint8*, $12FB_ERRMSGOPT );
struct $8FBSYMBOL* SYMBADDANDALLOCATETEMPVAR( int64 );
int64 SYMBPROCRETURNSONSTACK( struct $8FBSYMBOL* );
int64 SYMBCALCPROCPARAMSLEN( struct $8FBSYMBOL* );
struct $8FBSYMBOL* SYMBALLOCFLOATCONST( double, int64 );
uint8* SYMBGETMANGLEDNAME( struct $8FBSYMBOL* );
uint8* ZSTRDUP( uint8* );
uint8* HESCAPE( uint8* );
uint8* HESCAPEW( uint32* );
void FLISTINIT( struct $6TFLIST*, int64, int64 );
void FLISTEND( struct $6TFLIST* );
void* FLISTNEWITEM( struct $6TFLIST* );
void FLISTRESET( struct $6TFLIST* );
void* FLISTGETHEAD( struct $6TFLIST* );
void* FLISTGETNEXT( void* );
int64 EMITINIT( void );
void EMITEND( void );
struct $8REGCLASS* EMITGETREGCLASS( int64 );
void EMITCOMMENT( uint8* );
void EMITASM( uint8* );
typedef int64 $19EMIT_NODECLASS_ENUM;
struct $12EMIT_BOPNODE {
	int64 OP;
	struct $6IRVREG* DVREG;
	struct $6IRVREG* SVREG;
};
__FB_STATIC_ASSERT( sizeof( struct $12EMIT_BOPNODE ) == 24 );
struct $12EMIT_UOPNODE {
	int64 OP;
	struct $6IRVREG* DVREG;
};
__FB_STATIC_ASSERT( sizeof( struct $12EMIT_UOPNODE ) == 16 );
struct $12EMIT_RELNODE {
	int64 OP;
	struct $6IRVREG* RVREG;
	struct $8FBSYMBOL* LABEL;
	struct $6IRVREG* DVREG;
	struct $6IRVREG* SVREG;
};
__FB_STATIC_ASSERT( sizeof( struct $12EMIT_RELNODE ) == 40 );
struct $12EMIT_STKNODE {
	int64 OP;
	struct $6IRVREG* VREG;
	int64 EXTRA;
};
__FB_STATIC_ASSERT( sizeof( struct $12EMIT_STKNODE ) == 24 );
struct $12EMIT_BRCNODE {
	int64 OP;
	struct $6IRVREG* VREG;
	struct $8FBSYMBOL* SYM;
	int64 EXTRA;
};
__FB_STATIC_ASSERT( sizeof( struct $12EMIT_BRCNODE ) == 32 );
struct $12EMIT_SOPNODE {
	int64 OP;
	struct $8FBSYMBOL* SYM;
};
__FB_STATIC_ASSERT( sizeof( struct $12EMIT_SOPNODE ) == 16 );
struct $12EMIT_LITNODE {
	int64 ISASM;
	uint8* TEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $12EMIT_LITNODE ) == 16 );
struct $12EMIT_JTBNODE {
	struct $8FBSYMBOL* TBSYM;
	uint64* VALUES;
	struct $8FBSYMBOL** LABELS;
	int64 LABELCOUNT;
	struct $8FBSYMBOL* DEFLABEL;
	uint64 MINVAL;
	uint64 MAXVAL;
};
__FB_STATIC_ASSERT( sizeof( struct $12EMIT_JTBNODE ) == 56 );
struct $12EMIT_MEMNODE {
	int64 OP;
	struct $6IRVREG* DVREG;
	struct $6IRVREG* SVREG;
	int64 BYTES;
	int64 EXTRA;
};
__FB_STATIC_ASSERT( sizeof( struct $12EMIT_MEMNODE ) == 40 );
struct $12EMIT_DBGNODE {
	int64 OP;
	struct $8FBSYMBOL* SYM;
	int64 LNUM;
	int64 POS;
};
__FB_STATIC_ASSERT( sizeof( struct $12EMIT_DBGNODE ) == 32 );
struct $9EMIT_NODE {
	$19EMIT_NODECLASS_ENUM CLASS;
	union {
		struct $12EMIT_BOPNODE BOP;
		struct $12EMIT_UOPNODE UOP;
		struct $12EMIT_RELNODE REL;
		struct $12EMIT_STKNODE STK;
		struct $12EMIT_BRCNODE BRC;
		struct $12EMIT_SOPNODE SOP;
		struct $12EMIT_LITNODE LIT;
		struct $12EMIT_JTBNODE JTB;
		struct $12EMIT_MEMNODE MEM;
		struct $12EMIT_DBGNODE DBG;
	};
	int64 REGFREETB[2];
};
__FB_STATIC_ASSERT( sizeof( struct $9EMIT_NODE ) == 80 );
struct $9EMIT_NODE* EMITJMPTB( struct $8FBSYMBOL*, uint64*, struct $8FBSYMBOL**, int64, struct $8FBSYMBOL*, uint64, uint64 );
struct $9EMIT_NODE* EMITCALL( struct $8FBSYMBOL*, int64 );
struct $9EMIT_NODE* EMITCALLPTR( struct $6IRVREG*, int64 );
struct $9EMIT_NODE* EMITJUMP( struct $8FBSYMBOL* );
struct $9EMIT_NODE* EMITJUMPPTR( struct $6IRVREG* );
struct $9EMIT_NODE* EMITLABEL( struct $8FBSYMBOL* );
struct $9EMIT_NODE* EMITRET( int64 );
struct $9EMIT_NODE* EMITBRANCH( int64, struct $8FBSYMBOL* );
struct $9EMIT_NODE* EMITXCHGTOS( struct $6IRVREG* );
struct $9EMIT_NODE* EMITMOV( struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITSTORE( struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITLOAD( struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITADD( struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITSUB( struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITMUL( struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITDIV( struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITINTDIV( struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITMOD( struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITSHL( struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITSHR( struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITAND( struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITOR( struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITXOR( struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITEQV( struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITIMP( struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITADDROF( struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITDEREF( struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITGT( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITLT( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITEQ( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITNE( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITLE( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITGE( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITATN2( struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITPOW( struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITNEG( struct $6IRVREG* );
struct $9EMIT_NODE* EMITNOT( struct $6IRVREG* );
struct $9EMIT_NODE* EMITABS( struct $6IRVREG* );
struct $9EMIT_NODE* EMITHADD( struct $6IRVREG* );
struct $9EMIT_NODE* EMITSGN( struct $6IRVREG* );
struct $9EMIT_NODE* EMITFIX( struct $6IRVREG* );
struct $9EMIT_NODE* EMITFRAC( struct $6IRVREG* );
struct $9EMIT_NODE* EMITCONVFD2FS( struct $6IRVREG* );
struct $9EMIT_NODE* EMITSWZREP( struct $6IRVREG* );
struct $9EMIT_NODE* EMITSIN( struct $6IRVREG* );
struct $9EMIT_NODE* EMITASIN( struct $6IRVREG* );
struct $9EMIT_NODE* EMITCOS( struct $6IRVREG* );
struct $9EMIT_NODE* EMITACOS( struct $6IRVREG* );
struct $9EMIT_NODE* EMITTAN( struct $6IRVREG* );
struct $9EMIT_NODE* EMITATAN( struct $6IRVREG* );
struct $9EMIT_NODE* EMITSQRT( struct $6IRVREG* );
struct $9EMIT_NODE* EMITRSQRT( struct $6IRVREG* );
struct $9EMIT_NODE* EMITRCP( struct $6IRVREG* );
struct $9EMIT_NODE* EMITLOG( struct $6IRVREG* );
struct $9EMIT_NODE* EMITEXP( struct $6IRVREG* );
struct $9EMIT_NODE* EMITFLOOR( struct $6IRVREG* );
struct $9EMIT_NODE* EMITSTACKALIGN( int64 );
struct $9EMIT_NODE* EMITPUSH( struct $6IRVREG* );
struct $9EMIT_NODE* EMITPOP( struct $6IRVREG* );
struct $9EMIT_NODE* EMITPUSHUDT( struct $6IRVREG*, int64 );
struct $9EMIT_NODE* EMITPOPST0( void );
struct $9EMIT_NODE* EMITMEMMOVE( struct $6IRVREG*, struct $6IRVREG*, int64 );
struct $9EMIT_NODE* EMITMEMSWAP( struct $6IRVREG*, struct $6IRVREG*, int64 );
struct $9EMIT_NODE* EMITMEMCLEAR( struct $6IRVREG*, struct $6IRVREG* );
struct $9EMIT_NODE* EMITSTKCLEAR( int64, int64 );
struct $9EMIT_NODE* EMITDBGLINEBEGIN( struct $8FBSYMBOL*, int64 );
struct $9EMIT_NODE* EMITDBGLINEEND( struct $8FBSYMBOL*, int64 );
struct $9EMIT_NODE* EMITDBGSCOPEBEGIN( struct $8FBSYMBOL* );
struct $9EMIT_NODE* EMITDBGSCOPEEND( struct $8FBSYMBOL* );
void EMITVARINIBEGIN( struct $8FBSYMBOL* );
void EMITVARINII( int64, int64 );
void EMITVARINIF( int64, double );
void EMITVARINIOFS( uint8*, int64 );
void EMITVARINISTR( uint8* );
void EMITVARINIWSTR( uint8* );
void EMITVARINIPAD( int64 );
void EMITFBCTINFBEGIN( void );
void EMITFBCTINFSTRING( uint8* );
void EMITFBCTINFEND( void );
static void _ZN9IRTAC_CTXC1Ev( struct $9IRTAC_CTX* );
static void _ZN9IRTAC_CTXaSERKS_( struct $9IRTAC_CTX*, struct $9IRTAC_CTX* );
static void _ZN9IRTAC_CTXD1Ev( struct $9IRTAC_CTX* );
static void HFLUSHUOP( int64, struct $6IRVREG*, struct $6IRVREG* );
static void HFLUSHBOP( int64, struct $6IRVREG*, struct $6IRVREG*, struct $6IRVREG* );
static void HFLUSHCOMP( int64, struct $6IRVREG*, struct $6IRVREG*, struct $6IRVREG*, struct $8FBSYMBOL* );
static void HFLUSHSTORE( int64, struct $6IRVREG*, struct $6IRVREG* );
static void HFLUSHLOAD( int64, struct $6IRVREG*, struct $6IRVREG* );
static void HFLUSHCONVERT( int64, struct $6IRVREG*, struct $6IRVREG* );
static void HFLUSHCALL( int64, struct $8FBSYMBOL*, int64, struct $6IRVREG*, struct $6IRVREG* );
static void HFLUSHBRANCH( int64, struct $8FBSYMBOL* );
static void HFLUSHSTACK( int64, struct $6IRVREG*, int64 );
static void HFLUSHADDR( int64, struct $6IRVREG*, struct $6IRVREG* );
static void HFLUSHMEM( int64, struct $6IRVREG*, struct $6IRVREG*, int64, void* );
static void HFLUSHDBG( int64, struct $8FBSYMBOL*, int64 );
static void HFLUSHLIT( int64, uint8* );
static void HFREEIDX( struct $6IRVREG*, int64 );
static void HFREEREG( struct $6IRVREG*, int64 );
static void HFREEPRESERVEDREGS( void );
static void _FLUSH( void );
static void _INIT( void );
static void _END( void );
static int64 _EMITBEGIN( void );
static void _EMITEND( double );
static int64 _GETOPTIONVALUE( $14IR_OPTIONVALUE );
static void HLOADIDX( struct $6IRVREG* );
static void HRELINK( struct $6IRVREG*, struct $9IRTACVREG* );
static void _EMIT( int64, struct $6IRVREG*, struct $6IRVREG*, struct $6IRVREG*, struct $8FBSYMBOL*, int64 );
static void _PROCBEGIN( struct $8FBSYMBOL* );
static void _PROCEND( struct $8FBSYMBOL* );
static void _PROCALLOCARG( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static void _PROCALLOCLOCAL( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static uint8* _PROCGETFRAMEREGNAME( void );
static void _SCOPEBEGIN( struct $8FBSYMBOL* );
static void _SCOPEEND( struct $8FBSYMBOL* );
static void _PROCALLOCSTATICVARS( struct $8FBSYMBOL* );
static void _EMITLABEL( struct $8FBSYMBOL* );
static void _EMITRETURN( int64 );
static void _EMITPROCBEGIN( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static void _EMITPROCEND( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static void _EMITSCOPEBEGIN( struct $8FBSYMBOL* );
static void _EMITSCOPEEND( struct $8FBSYMBOL* );
static void _EMITBOP( int64, struct $6IRVREG*, struct $6IRVREG*, struct $6IRVREG*, struct $8FBSYMBOL* );
static void _EMITUOP( int64, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCONVERT( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSTORE( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSPILLREGS( void );
static void _EMITLOAD( struct $6IRVREG* );
static void _EMITLOADRES( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSTACK( int64, struct $6IRVREG* );
static void _EMITPUSHARG( struct $8FBSYMBOL*, struct $6IRVREG*, int64, int64 );
static void _EMITADDR( int64, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITLABELNF( struct $8FBSYMBOL* );
static void _EMITCALL( struct $8FBSYMBOL*, int64, struct $6IRVREG*, int64 );
static void _EMITCALLPTR( struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG*, int64, int64 );
static void _EMITSTACKALIGN( int64 );
static void _EMITJUMPPTR( struct $6IRVREG* );
static void _EMITBRANCH( int64, struct $8FBSYMBOL* );
static void _EMITJMPTB( struct $6IRVREG*, struct $8FBSYMBOL*, uint64*, struct $8FBSYMBOL**, int64, struct $8FBSYMBOL*, uint64, uint64 );
static void _EMITMEM( int64, struct $6IRVREG*, struct $6IRVREG*, int64 );
static void _EMITDECL( struct $8FBSYMBOL* );
static void _EMITDBG( int64, struct $8FBSYMBOL*, int64 );
static void _EMITCOMMENT( uint8* );
static void _EMITASMBEGIN( void );
static void _EMITASMTEXT( uint8* );
static void _EMITASMSYMB( struct $8FBSYMBOL* );
static void _EMITASMEND( void );
static void _EMITVARINIBEGIN( struct $8FBSYMBOL* );
static void _EMITVARINIEND( struct $8FBSYMBOL* );
static void _EMITVARINII( struct $8FBSYMBOL*, int64 );
static void _EMITVARINIF( struct $8FBSYMBOL*, double );
static void _EMITVARINIOFS( struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
static void _EMITVARINISTR( int64, uint8*, int64 );
static void _EMITVARINIWSTR( int64, uint32*, int64 );
static void _EMITVARINIPAD( int64 );
static void _EMITVARINISCOPEBEGIN( void );
static void _EMITVARINISCOPEEND( void );
static void _EMITFBCTINFBEGIN( void );
static void _EMITFBCTINFSTRING( uint8* );
static void _EMITFBCTINFEND( void );
static struct $6IRVREG* HNEWVR( int64, struct $8FBSYMBOL*, int64 );
static struct $6IRVREG* _ALLOCVREG( int64, struct $8FBSYMBOL* );
static struct $6IRVREG* _ALLOCVRIMM( int64, struct $8FBSYMBOL*, int64 );
static struct $6IRVREG* _ALLOCVRIMMF( int64, struct $8FBSYMBOL*, double );
static struct $6IRVREG* _ALLOCVRVAR( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
static struct $6IRVREG* _ALLOCVRIDX( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64, int64, struct $6IRVREG* );
static struct $6IRVREG* _ALLOCVRPTR( int64, struct $8FBSYMBOL*, int64, struct $6IRVREG* );
static struct $6IRVREG* _ALLOCVROFS( int64, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64 );
static void _SETVREGDATATYPE( struct $6IRVREG*, int64, struct $8FBSYMBOL* );
static void HRENAME( struct $6IRVREG*, struct $6IRVREG* );
static void HREUSE( struct $5IRTAC* );
static int64 HPRESERVEREG( struct $6IRVREG* );
static void HPRESERVEREGS( struct $6IRVREG* );
static void HLOADPOINTER( struct $6IRVREG* );
static void HLOADRESULT( struct $8FBSYMBOL*, struct $6IRVREG* );
static void HSPILLREGS( void );
static uint64 _GETDISTANCE( struct $6IRVREG* );
static void _LOADVR( int64, struct $6IRVREG*, struct $6IRVREG* );
static void _STOREVR( struct $6IRVREG*, struct $6IRVREG* );
static void _XCHGTOS( int64 );
static void _GLOBAL__I( void ) __attribute__(( constructor ));
static void _GLOBAL__D( void ) __attribute__(( destructor ));
typedef void (*tmp$35)( void );
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
extern struct $7IR_VTBL IRTAC_VTBL$;
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
typedef int64 (*tmp$91)( uint8* );
typedef void (*tmp$94)( int64, int64 );
typedef uint8* (*tmp$95)( int64 );
typedef uint8* (*tmp$96)( int64, int64 );
struct $9EMIT_VTBL {
	tmp$36 INIT;
	tmp$35 END;
	tmp$38 GETOPTIONVALUE;
	tmp$36 OPEN;
	tmp$37 CLOSE;
	tmp$91 ISKEYWORD;
	tmp$39 ISREGPRESERVED;
	tmp$39 GETFREEPRESERVEDREG;
	tmp$92 GETRESULTREG;
	tmp$42 PROCGETFRAMEREGNAME;
	tmp$40 PROCBEGIN;
	tmp$40 PROCEND;
	tmp$41 PROCHEADER;
	tmp$93 PROCFOOTER;
	tmp$41 PROCALLOCARG;
	tmp$41 PROCALLOCLOCAL;
	tmp$40 PROCALLOCSTATICVARS;
	tmp$40 SCOPEBEGIN;
	tmp$40 SCOPEEND;
	tmp$94 SETSECTION;
	tmp$95 GETTYPESTRING;
	tmp$96 GETSECTIONSTRING;
};
__FB_STATIC_ASSERT( sizeof( struct $9EMIT_VTBL ) == 176 );
struct $7EMITCTX {
	int64 INITED;
	int64 POS;
	struct $8REGCLASS* REGTB[2];
	struct $6TFLIST NODETB;
	struct $6TFLIST VREGTB;
	struct $9EMIT_NODE* CURNODE;
	int64 REGUSEDTB[2];
	int64 LASTSECTION;
	int64 LASTPRIORITY;
	int64 KEYINITED;
	struct $5THASH KEYHASH;
	struct $9EMIT_VTBL VTBL;
	void** OPFNTB;
};
__FB_STATIC_ASSERT( sizeof( struct $7EMITCTX ) == 512 );
extern struct $7EMITCTX EMIT$;
struct $8FBARRAY1IPvE {
	void** DATA;
	void** PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[1];
};
__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1IPvE ) == 64 );
static struct $8FBARRAY1IPvE tmp$97$;
static struct $9IRTAC_CTX CTX$;
static struct $8REGCLASS* REGTB$[2];
struct $7IR_VTBL IRTAC_VTBL$ = { (tmp$35)&_INIT, (tmp$35)&_END, (tmp$36)&_EMITBEGIN, (tmp$37)&_EMITEND, (tmp$38)&_GETOPTIONVALUE, (tmp$39)0ull, (tmp$40)&_PROCBEGIN, (tmp$40)&_PROCEND, (tmp$41)&_PROCALLOCARG, (tmp$41)&_PROCALLOCLOCAL, (tmp$42)&_PROCGETFRAMEREGNAME, (tmp$40)&_SCOPEBEGIN, (tmp$40)&_SCOPEEND, (tmp$40)&_PROCALLOCSTATICVARS, (tmp$43)&_EMITCONVERT, (tmp$40)&_EMITLABEL, (tmp$40)&_EMITLABELNF, (tmp$44)&_EMITRETURN, (tmp$41)&_EMITPROCBEGIN, (tmp$45)&_EMITPROCEND, (tmp$46)&_EMITPUSHARG, (tmp$35)&_EMITASMBEGIN, (tmp$47)&_EMITASMTEXT, (tmp$40)&_EMITASMSYMB, (tmp$35)&_EMITASMEND, (tmp$47)&_EMITCOMMENT, (tmp$48)&_EMITBOP, (tmp$49)&_EMITUOP, (tmp$43)&_EMITSTORE, (tmp$35)&_EMITSPILLREGS, (tmp$50)&_EMITLOAD, (tmp$43)&_EMITLOADRES, (tmp$51)&_EMITSTACK, (tmp$49)&_EMITADDR, (tmp$52)&_EMITCALL, (tmp$53)&_EMITCALLPTR, (tmp$44)&_EMITSTACKALIGN, (tmp$50)&_EMITJUMPPTR, (tmp$54)&_EMITBRANCH, (tmp$55)&_EMITJMPTB, (tmp$56)&_EMITMEM, (tmp$40)&_EMITSCOPEBEGIN, (tmp$40)&_EMITSCOPEEND, (tmp$40)&_EMITDECL, (tmp$57)&_EMITDBG, (tmp$40)&_EMITVARINIBEGIN, (tmp$40)&_EMITVARINIEND, (tmp$58)&_EMITVARINII, (tmp$59)&_EMITVARINIF, (tmp$60)&_EMITVARINIOFS, (tmp$61)&_EMITVARINISTR, (tmp$62)&_EMITVARINIWSTR, (tmp$63)&_EMITVARINIPAD, (tmp$35)&_EMITVARINISCOPEBEGIN, (tmp$35)&_EMITVARINISCOPEEND, (tmp$35)&_EMITFBCTINFBEGIN, (tmp$47)&_EMITFBCTINFSTRING, (tmp$35)&_EMITFBCTINFEND, (tmp$64)&_ALLOCVREG, (tmp$65)&_ALLOCVRIMM, (tmp$66)&_ALLOCVRIMMF, (tmp$67)&_ALLOCVRVAR, (tmp$68)&_ALLOCVRIDX, (tmp$69)&_ALLOCVRPTR, (tmp$67)&_ALLOCVROFS, (tmp$70)&_SETVREGDATATYPE, (tmp$71)&_GETDISTANCE, (tmp$49)&_LOADVR, (tmp$43)&_STOREVR, (tmp$44)&_XCHGTOS };
struct $5FBENV ENV$ __attribute__((common));

__attribute__(( constructor )) static void fb_ctor__irztac( void )
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

static void _ZN9IRTAC_CTXC1Ev( struct $9IRTAC_CTX* THIS$1 )
{
	__builtin_memset( (struct $6TFLIST*)THIS$1, 0, 112ll );
	__builtin_memset( (int64*)((uint8*)THIS$1 + 112ll), 0, 8ll );
	__builtin_memset( (struct $5IRTAC**)((uint8*)THIS$1 + 120ll), 0, 8ll );
	__builtin_memset( (struct $6TFLIST*)((uint8*)THIS$1 + 128ll), 0, 112ll );
	__builtin_memset( (FBSTRING*)((uint8*)THIS$1 + 240ll), 0, 24ll );
	label$10:;
	label$11:;
}

static void _ZN9IRTAC_CTXaSERKS_( struct $9IRTAC_CTX* THIS$1, struct $9IRTAC_CTX* __FB_RHS__$1 )
{
	label$12:;
	__builtin_memcpy( (struct $6TFLIST*)THIS$1, (struct $6TFLIST*)__FB_RHS__$1, 112 );
	*(int64*)((uint8*)THIS$1 + 112ll) = *(int64*)((uint8*)__FB_RHS__$1 + 112ll);
	*(struct $5IRTAC**)((uint8*)THIS$1 + 120ll) = *(struct $5IRTAC**)((uint8*)__FB_RHS__$1 + 120ll);
	__builtin_memcpy( (struct $6TFLIST*)((uint8*)THIS$1 + 128ll), (struct $6TFLIST*)((uint8*)__FB_RHS__$1 + 128ll), 112 );
	FBSTRING* vr$16 = fb_StrAssign( (void*)((uint8*)THIS$1 + 240ll), -1ll, (void*)((uint8*)__FB_RHS__$1 + 240ll), -1ll, 0 );
	label$13:;
}

static void _ZN9IRTAC_CTXD1Ev( struct $9IRTAC_CTX* THIS$1 )
{
	label$16:;
	label$17:;
	fb_StrDelete( (FBSTRING*)((uint8*)THIS$1 + 240ll) );
}

static void _INIT( void )
{
	label$18:;
	*(struct $5IRTAC**)((uint8*)&CTX$ + 120ll) = (struct $5IRTAC*)0ull;
	*(int64*)((uint8*)&CTX$ + 112ll) = 0ll;
	FLISTINIT( (struct $6TFLIST*)&CTX$, 2048ll, 248ll );
	FLISTINIT( (struct $6TFLIST*)((uint8*)&CTX$ + 128ll), 6144ll, 120ll );
	EMITINIT(  );
	{
		int64 I$2;
		I$2 = 0ll;
		label$23:;
		{
			struct $8REGCLASS* vr$2 = EMITGETREGCLASS( I$2 );
			*(struct $8REGCLASS**)((uint8*)REGTB$ + (I$2 << 3ll)) = vr$2;
		}
		label$21:;
		I$2 = I$2 + 1ll;
		label$20:;
		if( I$2 <= 1ll ) goto label$23;
		label$22:;
	}
	label$19:;
}

static void _END( void )
{
	label$24:;
	EMITEND(  );
	FLISTEND( (struct $6TFLIST*)((uint8*)&CTX$ + 128ll) );
	FLISTEND( (struct $6TFLIST*)&CTX$ );
	*(struct $5IRTAC**)((uint8*)&CTX$ + 120ll) = (struct $5IRTAC*)0ull;
	*(int64*)((uint8*)&CTX$ + 112ll) = 0ll;
	label$25:;
}

static int64 _EMITBEGIN( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$26:;
	int64 vr$1 = (*(tmp$36*)((uint8*)&EMIT$ + 352ll))(  );
	fb$result$1 = vr$1;
	label$27:;
	return fb$result$1;
}

static void _EMITEND( double TOTTIME$1 )
{
	label$28:;
	(*(tmp$37*)((uint8*)&EMIT$ + 360ll))( TOTTIME$1 );
	label$29:;
}

static int64 _GETOPTIONVALUE( $14IR_OPTIONVALUE OPT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$30:;
	int64 vr$1 = (*(tmp$38*)((uint8*)&EMIT$ + 344ll))( OPT$1 );
	fb$result$1 = vr$1;
	label$31:;
	return fb$result$1;
}

static void HLOADIDX( struct $6IRVREG* VREG$1 )
{
	label$32:;
	struct $6IRVREG* VI$1;
	if( VREG$1 != (struct $6IRVREG*)0ull ) goto label$35;
	{
		goto label$33;
	}
	label$35:;
	label$34:;
	{
		$15IRVREGTYPE_ENUM TMP$99$2;
		TMP$99$2 = *($15IRVREGTYPE_ENUM*)VREG$1;
		if( TMP$99$2 == 2ll ) goto label$38;
		label$39:;
		if( TMP$99$2 != 3ll ) goto label$37;
		label$38:;
		{
		}
		goto label$36;
		label$37:;
		{
			goto label$33;
		}
		label$40:;
		label$36:;
	}
	VI$1 = *(struct $6IRVREG**)((uint8*)VREG$1 + 80ll);
	if( VI$1 != (struct $6IRVREG*)0ull ) goto label$42;
	{
		goto label$33;
	}
	label$42:;
	label$41:;
	if( *(int64*)VI$1 != 0ll ) goto label$44;
	{
		goto label$33;
	}
	label$44:;
	label$43:;
	(*(tmp$76*)*(struct $8REGCLASS**)REGTB$)( *(struct $8REGCLASS**)REGTB$, VI$1, (struct $6IRVREG*)0ull, *(uint64*)((uint8*)SYMB_DTYPETB$ + 400ll) );
	label$33:;
}

static void HRELINK( struct $6IRVREG* VREG$1, struct $9IRTACVREG* TVREG$1 )
{
	label$45:;
	if( *(struct $9IRTACVREG**)((uint8*)VREG$1 + 96ll) != (struct $9IRTACVREG*)0ull ) goto label$48;
	{
		*(struct $9IRTACVREG**)((uint8*)VREG$1 + 96ll) = TVREG$1;
	}
	goto label$47;
	label$48:;
	{
		*(struct $9IRTACVREG**)((uint8*)*(struct $9IRTACVREG**)((uint8*)VREG$1 + 104ll) + 16ll) = TVREG$1;
	}
	label$47:;
	*(struct $9IRTACVREG**)((uint8*)VREG$1 + 104ll) = TVREG$1;
	label$46:;
}

static void _EMIT( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* V2$1, struct $6IRVREG* VR$1, struct $8FBSYMBOL* EX1$1, int64 EX2$1 )
{
	label$49:;
	static struct $5IRTAC* T$1;
	void* vr$1 = FLISTNEWITEM( (struct $6TFLIST*)&CTX$ );
	T$1 = (struct $5IRTAC*)vr$1;
	*(int64*)T$1 = *(int64*)((uint8*)&CTX$ + 112ll);
	*($6AST_OP*)((uint8*)T$1 + 8ll) = OP$1;
	*(struct $6IRVREG**)((uint8*)T$1 + 88ll) = V1$1;
	*(struct $6IRVREG**)((uint8*)T$1 + 96ll) = (struct $6IRVREG*)0ull;
	*(struct $9IRTACVREG**)((uint8*)T$1 + 104ll) = (struct $9IRTACVREG*)0ull;
	if( V1$1 == (struct $6IRVREG*)0ull ) goto label$52;
	{
		HRELINK( V1$1, (struct $9IRTACVREG*)((uint8*)T$1 + 88ll) );
		*(struct $5IRTAC**)((uint8*)V1$1 + 112ll) = T$1;
		if( *(struct $6IRVREG**)((uint8*)V1$1 + 80ll) == (struct $6IRVREG*)0ull ) goto label$54;
		{
			*(struct $6IRVREG**)((uint8*)T$1 + 112ll) = *(struct $6IRVREG**)((uint8*)V1$1 + 80ll);
			*(struct $6IRVREG**)((uint8*)T$1 + 120ll) = V1$1;
			*(struct $9IRTACVREG**)((uint8*)T$1 + 128ll) = (struct $9IRTACVREG*)0ull;
			HRELINK( *(struct $6IRVREG**)((uint8*)V1$1 + 80ll), (struct $9IRTACVREG*)((uint8*)T$1 + 112ll) );
			*(struct $5IRTAC**)((uint8*)*(struct $6IRVREG**)((uint8*)V1$1 + 80ll) + 112ll) = T$1;
		}
		label$54:;
		label$53:;
		if( *(struct $6IRVREG**)((uint8*)V1$1 + 88ll) == (struct $6IRVREG*)0ull ) goto label$56;
		{
			*(struct $6IRVREG**)((uint8*)T$1 + 136ll) = *(struct $6IRVREG**)((uint8*)V1$1 + 88ll);
			*(struct $6IRVREG**)((uint8*)T$1 + 144ll) = V1$1;
			*(struct $9IRTACVREG**)((uint8*)T$1 + 152ll) = (struct $9IRTACVREG*)0ull;
			HRELINK( *(struct $6IRVREG**)((uint8*)V1$1 + 88ll), (struct $9IRTACVREG*)((uint8*)T$1 + 136ll) );
			*(struct $5IRTAC**)((uint8*)*(struct $6IRVREG**)((uint8*)V1$1 + 88ll) + 112ll) = T$1;
		}
		label$56:;
		label$55:;
	}
	label$52:;
	label$51:;
	*(struct $6IRVREG**)((uint8*)T$1 + 160ll) = V2$1;
	*(struct $6IRVREG**)((uint8*)T$1 + 168ll) = (struct $6IRVREG*)0ull;
	*(struct $9IRTACVREG**)((uint8*)T$1 + 176ll) = (struct $9IRTACVREG*)0ull;
	if( V2$1 == (struct $6IRVREG*)0ull ) goto label$58;
	{
		HRELINK( V2$1, (struct $9IRTACVREG*)((uint8*)T$1 + 160ll) );
		*(struct $5IRTAC**)((uint8*)V2$1 + 112ll) = T$1;
		if( *(struct $6IRVREG**)((uint8*)V2$1 + 80ll) == (struct $6IRVREG*)0ull ) goto label$60;
		{
			*(struct $6IRVREG**)((uint8*)T$1 + 184ll) = *(struct $6IRVREG**)((uint8*)V2$1 + 80ll);
			*(struct $6IRVREG**)((uint8*)T$1 + 192ll) = V2$1;
			*(struct $9IRTACVREG**)((uint8*)T$1 + 200ll) = (struct $9IRTACVREG*)0ull;
			HRELINK( *(struct $6IRVREG**)((uint8*)V2$1 + 80ll), (struct $9IRTACVREG*)((uint8*)T$1 + 184ll) );
			*(struct $5IRTAC**)((uint8*)*(struct $6IRVREG**)((uint8*)V2$1 + 80ll) + 112ll) = T$1;
		}
		label$60:;
		label$59:;
		if( *(struct $6IRVREG**)((uint8*)V2$1 + 88ll) == (struct $6IRVREG*)0ull ) goto label$62;
		{
			*(struct $6IRVREG**)((uint8*)T$1 + 208ll) = *(struct $6IRVREG**)((uint8*)V2$1 + 88ll);
			*(struct $6IRVREG**)((uint8*)T$1 + 216ll) = V2$1;
			*(struct $9IRTACVREG**)((uint8*)T$1 + 224ll) = (struct $9IRTACVREG*)0ull;
			HRELINK( *(struct $6IRVREG**)((uint8*)V2$1 + 88ll), (struct $9IRTACVREG*)((uint8*)T$1 + 208ll) );
			*(struct $5IRTAC**)((uint8*)*(struct $6IRVREG**)((uint8*)V2$1 + 88ll) + 112ll) = T$1;
		}
		label$62:;
		label$61:;
	}
	label$58:;
	label$57:;
	*(struct $6IRVREG**)((uint8*)T$1 + 16ll) = VR$1;
	*(struct $6IRVREG**)((uint8*)T$1 + 24ll) = (struct $6IRVREG*)0ull;
	*(struct $9IRTACVREG**)((uint8*)T$1 + 32ll) = (struct $9IRTACVREG*)0ull;
	if( VR$1 == (struct $6IRVREG*)0ull ) goto label$64;
	{
		HRELINK( VR$1, (struct $9IRTACVREG*)((uint8*)T$1 + 16ll) );
		*(struct $5IRTAC**)((uint8*)VR$1 + 112ll) = T$1;
		if( *(struct $6IRVREG**)((uint8*)VR$1 + 80ll) == (struct $6IRVREG*)0ull ) goto label$66;
		{
			*(struct $6IRVREG**)((uint8*)T$1 + 40ll) = *(struct $6IRVREG**)((uint8*)VR$1 + 80ll);
			*(struct $6IRVREG**)((uint8*)T$1 + 48ll) = VR$1;
			*(struct $9IRTACVREG**)((uint8*)T$1 + 56ll) = (struct $9IRTACVREG*)0ull;
			HRELINK( *(struct $6IRVREG**)((uint8*)VR$1 + 80ll), (struct $9IRTACVREG*)((uint8*)T$1 + 40ll) );
			*(struct $5IRTAC**)((uint8*)*(struct $6IRVREG**)((uint8*)VR$1 + 80ll) + 112ll) = T$1;
		}
		label$66:;
		label$65:;
		if( *(struct $6IRVREG**)((uint8*)VR$1 + 88ll) == (struct $6IRVREG*)0ull ) goto label$68;
		{
			*(struct $6IRVREG**)((uint8*)T$1 + 64ll) = *(struct $6IRVREG**)((uint8*)VR$1 + 88ll);
			*(struct $6IRVREG**)((uint8*)T$1 + 72ll) = VR$1;
			*(struct $9IRTACVREG**)((uint8*)T$1 + 80ll) = (struct $9IRTACVREG*)0ull;
			HRELINK( *(struct $6IRVREG**)((uint8*)VR$1 + 88ll), (struct $9IRTACVREG*)((uint8*)T$1 + 64ll) );
			*(struct $5IRTAC**)((uint8*)*(struct $6IRVREG**)((uint8*)VR$1 + 88ll) + 112ll) = T$1;
		}
		label$68:;
		label$67:;
	}
	label$64:;
	label$63:;
	*(struct $8FBSYMBOL**)((uint8*)T$1 + 232ll) = EX1$1;
	*(int64*)((uint8*)T$1 + 240ll) = EX2$1;
	*(int64*)((uint8*)&CTX$ + 112ll) = *(int64*)((uint8*)&CTX$ + 112ll) + 1ll;
	label$50:;
}

static void _PROCBEGIN( struct $8FBSYMBOL* PROC$1 )
{
	label$69:;
	(*(tmp$40*)((uint8*)&EMIT$ + 408ll))( PROC$1 );
	label$70:;
}

static void _PROCEND( struct $8FBSYMBOL* PROC$1 )
{
	label$71:;
	(*(tmp$40*)((uint8*)&EMIT$ + 416ll))( PROC$1 );
	label$72:;
}

static void _PROCALLOCARG( struct $8FBSYMBOL* PROC$1, struct $8FBSYMBOL* SYM$1 )
{
	label$73:;
	(*(tmp$41*)((uint8*)&EMIT$ + 440ll))( PROC$1, SYM$1 );
	label$74:;
}

static void _PROCALLOCLOCAL( struct $8FBSYMBOL* PROC$1, struct $8FBSYMBOL* SYM$1 )
{
	label$75:;
	(*(tmp$41*)((uint8*)&EMIT$ + 448ll))( PROC$1, SYM$1 );
	label$76:;
}

static uint8* _PROCGETFRAMEREGNAME( void )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$77:;
	uint8* vr$1 = (*(tmp$42*)((uint8*)&EMIT$ + 400ll))(  );
	fb$result$1 = vr$1;
	label$78:;
	return fb$result$1;
}

static void _SCOPEBEGIN( struct $8FBSYMBOL* S$1 )
{
	label$79:;
	(*(tmp$40*)((uint8*)&EMIT$ + 464ll))( S$1 );
	label$80:;
}

static void _SCOPEEND( struct $8FBSYMBOL* S$1 )
{
	label$81:;
	(*(tmp$40*)((uint8*)&EMIT$ + 472ll))( S$1 );
	label$82:;
}

static void _PROCALLOCSTATICVARS( struct $8FBSYMBOL* HEAD_SYM$1 )
{
	label$83:;
	(*(tmp$40*)((uint8*)&EMIT$ + 456ll))( HEAD_SYM$1 );
	label$84:;
}

static void _EMITLABEL( struct $8FBSYMBOL* LABEL$1 )
{
	label$85:;
	_FLUSH(  );
	EMITLABEL( LABEL$1 );
	label$86:;
}

static void _EMITRETURN( int64 BYTESTOPOP$1 )
{
	label$87:;
	_FLUSH(  );
	EMITRET( BYTESTOPOP$1 );
	label$88:;
}

static void _EMITPROCBEGIN( struct $8FBSYMBOL* PROC$1, struct $8FBSYMBOL* INITLABEL$1 )
{
	label$89:;
	static int64 CLASS_$1;
	_FLUSH(  );
	{
		CLASS_$1 = 0ll;
		label$94:;
		{
			(*(tmp$83*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (CLASS_$1 << 3ll)) + 88ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (CLASS_$1 << 3ll)) );
		}
		label$92:;
		CLASS_$1 = CLASS_$1 + 1ll;
		label$91:;
		if( CLASS_$1 <= 1ll ) goto label$94;
		label$93:;
	}
	(*(tmp$41*)((uint8*)&EMIT$ + 424ll))( PROC$1, INITLABEL$1 );
	label$90:;
}

static void _EMITPROCEND( struct $8FBSYMBOL* PROC$1, struct $8FBSYMBOL* INITLABEL$1, struct $8FBSYMBOL* EXITLABEL$1 )
{
	label$95:;
	int64 BYTESTOPOP$1;
	_FLUSH(  );
	if( *(int64*)((uint8*)PROC$1 + 144ll) != 3ll ) goto label$98;
	{
		BYTESTOPOP$1 = 0ll;
	}
	goto label$97;
	label$98:;
	{
		int64 vr$2 = SYMBCALCPROCPARAMSLEN( PROC$1 );
		BYTESTOPOP$1 = vr$2;
	}
	label$97:;
	int64 vr$3 = SYMBPROCRETURNSONSTACK( PROC$1 );
	if( vr$3 == 0ll ) goto label$100;
	{
		if( ((int64)-(*(int64*)((uint8*)PROC$1 + 144ll) != 3ll) | (*(int64*)((uint8*)&ENV$ + 448ll) & 8ll)) == 0ll ) goto label$102;
		{
			BYTESTOPOP$1 = BYTESTOPOP$1 + *(int64*)((uint8*)&ENV$ + 472ll);
		}
		label$102:;
		label$101:;
	}
	label$100:;
	label$99:;
	(*(tmp$93*)((uint8*)&EMIT$ + 432ll))( PROC$1, BYTESTOPOP$1, INITLABEL$1, EXITLABEL$1 );
	label$96:;
}

static void _EMITSCOPEBEGIN( struct $8FBSYMBOL* S$1 )
{
	label$103:;
	_FLUSH(  );
	label$104:;
}

static void _EMITSCOPEEND( struct $8FBSYMBOL* S$1 )
{
	label$105:;
	_FLUSH(  );
	label$106:;
}

static void _EMITBOP( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* V2$1, struct $6IRVREG* VR$1, struct $8FBSYMBOL* EX$1 )
{
	label$107:;
	_EMIT( OP$1, V1$1, V2$1, VR$1, EX$1, 0ll );
	label$108:;
}

static void _EMITUOP( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* VR$1 )
{
	label$109:;
	_EMIT( OP$1, V1$1, (struct $6IRVREG*)0ull, VR$1, (struct $8FBSYMBOL*)0ull, 0ll );
	label$110:;
}

static void _EMITCONVERT( struct $6IRVREG* V1$1, struct $6IRVREG* V2$1 )
{
	label$111:;
	{
		int64 TMP$100$2;
		$12FB_DATACLASS TMP$101$2;
		if( (*(int64*)((uint8*)V1$1 + 8ll) & 480ll) == 0ll ) goto label$113;
		TMP$100$2 = 22ll;
		goto label$848;
		label$113:;
		TMP$100$2 = *(int64*)((uint8*)V1$1 + 8ll) & 31ll;
		label$848:;
		TMP$101$2 = *($12FB_DATACLASS*)((uint8*)SYMB_DTYPETB$ + (TMP$100$2 * 56ll));
		if( TMP$101$2 != 0ll ) goto label$115;
		label$116:;
		{
			_EMIT( 82ll, V1$1, V2$1, (struct $6IRVREG*)0ull, (struct $8FBSYMBOL*)0ull, 0ll );
		}
		goto label$114;
		label$115:;
		if( TMP$101$2 != 1ll ) goto label$117;
		label$118:;
		{
			_EMIT( 83ll, V1$1, V2$1, (struct $6IRVREG*)0ull, (struct $8FBSYMBOL*)0ull, 0ll );
		}
		label$117:;
		label$114:;
	}
	label$112:;
}

static void _EMITSTORE( struct $6IRVREG* V1$1, struct $6IRVREG* V2$1 )
{
	label$119:;
	_EMIT( 0ll, V1$1, V2$1, (struct $6IRVREG*)0ull, (struct $8FBSYMBOL*)0ull, 0ll );
	label$120:;
}

static void _EMITSPILLREGS( void )
{
	label$121:;
	_EMIT( 86ll, (struct $6IRVREG*)0ull, (struct $6IRVREG*)0ull, (struct $6IRVREG*)0ull, (struct $8FBSYMBOL*)0ull, 0ll );
	label$122:;
}

static void _EMITLOAD( struct $6IRVREG* V1$1 )
{
	label$123:;
	_EMIT( 84ll, V1$1, (struct $6IRVREG*)0ull, (struct $6IRVREG*)0ull, (struct $8FBSYMBOL*)0ull, 0ll );
	label$124:;
}

static void _EMITLOADRES( struct $6IRVREG* V1$1, struct $6IRVREG* VR$1 )
{
	label$125:;
	_EMIT( 85ll, V1$1, (struct $6IRVREG*)0ull, VR$1, (struct $8FBSYMBOL*)0ull, 0ll );
	label$126:;
}

static void _EMITSTACK( int64 OP$1, struct $6IRVREG* V1$1 )
{
	label$127:;
	_EMIT( OP$1, V1$1, (struct $6IRVREG*)0ull, (struct $6IRVREG*)0ull, (struct $8FBSYMBOL*)0ull, 0ll );
	label$128:;
}

static void _EMITPUSHARG( struct $8FBSYMBOL* PARAM$1, struct $6IRVREG* VR$1, int64 UDTLEN$1, int64 LEVEL$1 )
{
	label$129:;
	if( UDTLEN$1 != 0ll ) goto label$132;
	{
		_EMITSTACK( 87ll, VR$1 );
	}
	goto label$131;
	label$132:;
	{
		_EMIT( 89ll, VR$1, (struct $6IRVREG*)0ull, (struct $6IRVREG*)0ull, (struct $8FBSYMBOL*)0ull, UDTLEN$1 );
	}
	label$131:;
	label$130:;
}

static void _EMITADDR( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* VR$1 )
{
	label$133:;
	_EMIT( OP$1, V1$1, (struct $6IRVREG*)0ull, VR$1, (struct $8FBSYMBOL*)0ull, 0ll );
	label$134:;
}

static void _EMITLABELNF( struct $8FBSYMBOL* L$1 )
{
	label$135:;
	_EMIT( 99ll, (struct $6IRVREG*)0ull, (struct $6IRVREG*)0ull, (struct $6IRVREG*)0ull, L$1, 0ll );
	label$136:;
}

static void _EMITCALL( struct $8FBSYMBOL* PROC$1, int64 BYTESTOPOP$1, struct $6IRVREG* VR$1, int64 LEVEL$1 )
{
	label$137:;
	_EMIT( 101ll, (struct $6IRVREG*)0ull, (struct $6IRVREG*)0ull, VR$1, PROC$1, BYTESTOPOP$1 );
	label$138:;
}

static void _EMITCALLPTR( struct $8FBSYMBOL* PROC$1, struct $6IRVREG* V1$1, struct $6IRVREG* VR$1, int64 BYTESTOPOP$1, int64 LEVEL$1 )
{
	label$139:;
	_EMIT( 102ll, V1$1, (struct $6IRVREG*)0ull, VR$1, PROC$1, BYTESTOPOP$1 );
	label$140:;
}

static void _EMITSTACKALIGN( int64 BYTES$1 )
{
	label$141:;
	_EMIT( 90ll, (struct $6IRVREG*)0ull, (struct $6IRVREG*)0ull, (struct $6IRVREG*)0ull, (struct $8FBSYMBOL*)0ull, BYTES$1 );
	label$142:;
}

static void _EMITJUMPPTR( struct $6IRVREG* V1$1 )
{
	label$143:;
	_EMIT( 103ll, V1$1, (struct $6IRVREG*)0ull, (struct $6IRVREG*)0ull, (struct $8FBSYMBOL*)0ull, 0ll );
	label$144:;
}

static void _EMITBRANCH( int64 OP$1, struct $8FBSYMBOL* LABEL$1 )
{
	label$145:;
	_EMIT( OP$1, (struct $6IRVREG*)0ull, (struct $6IRVREG*)0ull, (struct $6IRVREG*)0ull, LABEL$1, 0ll );
	label$146:;
}

static void _EMITJMPTB( struct $6IRVREG* V1$1, struct $8FBSYMBOL* TBSYM$1, uint64* VALUES$1, struct $8FBSYMBOL** LABELS$1, int64 LABELCOUNT$1, struct $8FBSYMBOL* DEFLABEL$1, uint64 MINVAL$1, uint64 MAXVAL$1 )
{
	label$147:;
	_FLUSH(  );
	EMITJMPTB( TBSYM$1, VALUES$1, LABELS$1, LABELCOUNT$1, DEFLABEL$1, MINVAL$1, MAXVAL$1 );
	label$148:;
}

static void _EMITMEM( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* V2$1, int64 BYTES$1 )
{
	label$149:;
	_EMIT( OP$1, V1$1, V2$1, (struct $6IRVREG*)0ull, (struct $8FBSYMBOL*)0ull, BYTES$1 );
	label$150:;
}

static void _EMITDECL( struct $8FBSYMBOL* SYM$1 )
{
	label$151:;
	label$152:;
}

static void _EMITDBG( int64 OP$1, struct $8FBSYMBOL* PROC$1, int64 EX$1 )
{
	label$153:;
	_EMIT( OP$1, (struct $6IRVREG*)0ull, (struct $6IRVREG*)0ull, (struct $6IRVREG*)0ull, PROC$1, EX$1 );
	label$154:;
}

static void _EMITCOMMENT( uint8* TEXT$1 )
{
	label$155:;
	uint8* vr$0 = ZSTRDUP( TEXT$1 );
	_EMIT( 112ll, (struct $6IRVREG*)0ull, (struct $6IRVREG*)0ull, (struct $6IRVREG*)0ull, (struct $8FBSYMBOL*)vr$0, 0ll );
	label$156:;
}

static void _EMITASMBEGIN( void )
{
	label$157:;
	fb_StrAssign( (void*)((uint8*)&CTX$ + 240ll), -1ll, (void*)"", 1ll, 0 );
	label$158:;
}

static void _EMITASMTEXT( uint8* TEXT$1 )
{
	FBSTRING TMP$102$1;
	label$159:;
	__builtin_memset( &TMP$102$1, 0, 24ll );
	FBSTRING* vr$3 = fb_StrConcat( &TMP$102$1, (void*)((uint8*)&CTX$ + 240ll), -1ll, (void*)TEXT$1, 0ll );
	FBSTRING* vr$5 = fb_StrAssign( (void*)((uint8*)&CTX$ + 240ll), -1ll, (void*)vr$3, -1ll, 0 );
	label$160:;
}

static void _EMITASMSYMB( struct $8FBSYMBOL* SYM$1 )
{
	FBSTRING TMP$103$1;
	label$161:;
	uint8* vr$0 = SYMBGETMANGLEDNAME( SYM$1 );
	__builtin_memset( &TMP$103$1, 0, 24ll );
	FBSTRING* vr$4 = fb_StrConcat( &TMP$103$1, (void*)((uint8*)&CTX$ + 240ll), -1ll, (void*)vr$0, 0ll );
	FBSTRING* vr$6 = fb_StrAssign( (void*)((uint8*)&CTX$ + 240ll), -1ll, (void*)vr$4, -1ll, 0 );
	if( *(int64*)((uint8*)SYM$1 + 80ll) <= 0ll ) goto label$164;
	{
		FBSTRING TMP$105$2;
		FBSTRING TMP$106$2;
		FBSTRING* vr$10 = fb_LongintToStr( *(int64*)((uint8*)SYM$1 + 80ll) );
		__builtin_memset( &TMP$105$2, 0, 24ll );
		FBSTRING* vr$13 = fb_StrConcat( &TMP$105$2, (void*)"+", 2ll, (void*)vr$10, -1ll );
		__builtin_memset( &TMP$106$2, 0, 24ll );
		FBSTRING* vr$17 = fb_StrConcat( &TMP$106$2, (void*)((uint8*)&CTX$ + 240ll), -1ll, (void*)vr$13, -1ll );
		FBSTRING* vr$19 = fb_StrAssign( (void*)((uint8*)&CTX$ + 240ll), -1ll, (void*)vr$17, -1ll, 0 );
	}
	goto label$163;
	label$164:;
	if( *(int64*)((uint8*)SYM$1 + 80ll) >= 0ll ) goto label$165;
	{
		FBSTRING TMP$107$2;
		FBSTRING* vr$23 = fb_LongintToStr( *(int64*)((uint8*)SYM$1 + 80ll) );
		__builtin_memset( &TMP$107$2, 0, 24ll );
		FBSTRING* vr$27 = fb_StrConcat( &TMP$107$2, (void*)((uint8*)&CTX$ + 240ll), -1ll, (void*)vr$23, -1ll );
		FBSTRING* vr$29 = fb_StrAssign( (void*)((uint8*)&CTX$ + 240ll), -1ll, (void*)vr$27, -1ll, 0 );
	}
	label$165:;
	label$163:;
	label$162:;
}

static void _EMITASMEND( void )
{
	label$166:;
	uint8* vr$0 = ZSTRDUP( *(uint8**)((uint8*)&CTX$ + 240ll) );
	_EMIT( 113ll, (struct $6IRVREG*)0ull, (struct $6IRVREG*)0ull, (struct $6IRVREG*)0ull, (struct $8FBSYMBOL*)vr$0, 0ll );
	label$167:;
}

static void _EMITVARINIBEGIN( struct $8FBSYMBOL* SYM$1 )
{
	label$168:;
	EMITVARINIBEGIN( SYM$1 );
	label$169:;
}

static void _EMITVARINIEND( struct $8FBSYMBOL* SYM$1 )
{
	label$170:;
	label$171:;
}

static void _EMITVARINII( struct $8FBSYMBOL* SYM$1, int64 VALUE$1 )
{
	label$172:;
	EMITVARINII( *(int64*)((uint8*)SYM$1 + 48ll) & 511ll, VALUE$1 );
	label$173:;
}

static void _EMITVARINIF( struct $8FBSYMBOL* SYM$1, double VALUE$1 )
{
	label$174:;
	EMITVARINIF( *(int64*)((uint8*)SYM$1 + 48ll) & 511ll, VALUE$1 );
	label$175:;
}

static void _EMITVARINIOFS( struct $8FBSYMBOL* SYM$1, struct $8FBSYMBOL* RHS$1, int64 OFS$1 )
{
	label$176:;
	uint8* vr$0 = SYMBGETMANGLEDNAME( RHS$1 );
	EMITVARINIOFS( vr$0, OFS$1 );
	label$177:;
}

static void _EMITVARINISTR( int64 TOTLGT$1, uint8* LITSTR$1, int64 LITLGT$1 )
{
	label$178:;
	uint8* S$1;
	__builtin_memset( &S$1, 0, 8ll );
	if( TOTLGT$1 != 0ll ) goto label$181;
	{
		EMITVARINII( 1ll, 0ll );
		goto label$179;
	}
	label$181:;
	label$180:;
	if( LITLGT$1 <= TOTLGT$1 ) goto label$183;
	{
		FBSTRING TMP$108$2;
		ERRREPORTWARN( 9ll, (uint8*)0ull, 1ll );
		__builtin_memset( &TMP$108$2, 0, 24ll );
		FBSTRING* vr$4 = fb_StrAllocTempDescZ( LITSTR$1 );
		FBSTRING* vr$5 = fb_LEFT( vr$4, TOTLGT$1 );
		FBSTRING* vr$7 = fb_StrAssign( (void*)&TMP$108$2, -1ll, (void*)vr$5, -1ll, 0 );
		uint8* vr$8 = HESCAPE( *(uint8**)&TMP$108$2 );
		S$1 = vr$8;
		fb_StrDelete( &TMP$108$2 );
	}
	goto label$182;
	label$183:;
	{
		uint8* vr$10 = HESCAPE( LITSTR$1 );
		S$1 = vr$10;
	}
	label$182:;
	EMITVARINISTR( S$1 );
	if( LITLGT$1 >= TOTLGT$1 ) goto label$185;
	{
		EMITVARINIPAD( TOTLGT$1 - LITLGT$1 );
	}
	label$185:;
	label$184:;
	label$179:;
}

static void _EMITVARINIWSTR( int64 TOTLGT$1, uint32* LITSTR$1, int64 LITLGT$1 )
{
	label$186:;
	uint8* S$1;
	__builtin_memset( &S$1, 0, 8ll );
	int64 WCLEN$1;
	__builtin_memset( &WCLEN$1, 0, 8ll );
	if( TOTLGT$1 != 0ll ) goto label$189;
	{
		EMITVARINII( *(int64*)((uint8*)&ENV$ + 424ll), 0ll );
		goto label$187;
	}
	label$189:;
	label$188:;
	if( LITLGT$1 <= TOTLGT$1 ) goto label$191;
	{
		uint32* TMP$109$2;
		ERRREPORTWARN( 9ll, (uint8*)0ull, 1ll );
		uint32* vr$4 = fb_WstrLeft( LITSTR$1, TOTLGT$1 );
		TMP$109$2 = vr$4;
		uint8* vr$5 = HESCAPEW( TMP$109$2 );
		S$1 = vr$5;
		fb_WstrDelete( TMP$109$2 );
	}
	goto label$190;
	label$191:;
	{
		uint8* vr$6 = HESCAPEW( LITSTR$1 );
		S$1 = vr$6;
	}
	label$190:;
	WCLEN$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + 344ll);
	EMITVARINIWSTR( S$1 );
	if( LITLGT$1 >= TOTLGT$1 ) goto label$193;
	{
		EMITVARINIPAD( (TOTLGT$1 - LITLGT$1) * WCLEN$1 );
	}
	label$193:;
	label$192:;
	label$187:;
}

static void _EMITVARINIPAD( int64 BYTES$1 )
{
	label$194:;
	EMITVARINIPAD( BYTES$1 );
	label$195:;
}

static void _EMITVARINISCOPEBEGIN( void )
{
	label$196:;
	label$197:;
}

static void _EMITVARINISCOPEEND( void )
{
	label$198:;
	label$199:;
}

static void _EMITFBCTINFBEGIN( void )
{
	label$200:;
	EMITFBCTINFBEGIN(  );
	label$201:;
}

static void _EMITFBCTINFSTRING( uint8* S$1 )
{
	label$202:;
	EMITFBCTINFSTRING( S$1 );
	label$203:;
}

static void _EMITFBCTINFEND( void )
{
	label$204:;
	EMITFBCTINFEND(  );
	label$205:;
}

static struct $6IRVREG* HNEWVR( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, int64 VTYPE$1 )
{
	int64 TMP$110$1;
	struct $6IRVREG* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$206:;
	struct $6IRVREG* V$1;
	void* vr$2 = FLISTNEWITEM( (struct $6TFLIST*)((uint8*)&CTX$ + 128ll) );
	V$1 = (struct $6IRVREG*)vr$2;
	*($15IRVREGTYPE_ENUM*)V$1 = VTYPE$1;
	if( (DTYPE$1 & 480ll) == 0ll ) goto label$208;
	TMP$110$1 = 22ll;
	goto label$849;
	label$208:;
	TMP$110$1 = DTYPE$1 & 31ll;
	label$849:;
	*($11FB_DATATYPE*)((uint8*)V$1 + 8ll) = TMP$110$1;
	*(struct $8FBSYMBOL**)((uint8*)V$1 + 16ll) = SUBTYPE$1;
	*(int64*)((uint8*)V$1 + 24ll) = -1ll;
	if( *(int64*)((uint8*)&ENV$ + 232ll) != 0ll ) goto label$210;
	{
		*($12IR_REGFAMILY*)((uint8*)V$1 + 32ll) = 0ll;
	}
	goto label$209;
	label$210:;
	{
		*($12IR_REGFAMILY*)((uint8*)V$1 + 32ll) = 1ll;
	}
	label$209:;
	*(int64*)((uint8*)V$1 + 40ll) = 0ll;
	*(struct $8FBSYMBOL**)((uint8*)V$1 + 56ll) = (struct $8FBSYMBOL*)0ull;
	*(int64*)((uint8*)V$1 + 64ll) = 0ll;
	*(int64*)((uint8*)V$1 + 72ll) = 0ll;
	*(struct $6IRVREG**)((uint8*)V$1 + 80ll) = (struct $6IRVREG*)0ull;
	*(struct $6IRVREG**)((uint8*)V$1 + 88ll) = (struct $6IRVREG*)0ull;
	*(struct $9IRTACVREG**)((uint8*)V$1 + 96ll) = (struct $9IRTACVREG*)0ull;
	*(struct $9IRTACVREG**)((uint8*)V$1 + 104ll) = (struct $9IRTACVREG*)0ull;
	*(struct $5IRTAC**)((uint8*)V$1 + 112ll) = (struct $5IRTAC*)0ull;
	fb$result$1 = V$1;
	label$207:;
	return fb$result$1;
}

static struct $6IRVREG* _ALLOCVREG( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	struct $6IRVREG* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$211:;
	struct $6IRVREG* VR$1;
	struct $6IRVREG* vr$1 = HNEWVR( DTYPE$1, SUBTYPE$1, 4ll );
	VR$1 = vr$1;
	if( ((int64)-(DTYPE$1 == 12ll) | (int64)-(DTYPE$1 == 13ll)) == 0ll ) goto label$214;
	{
		struct $6IRVREG* vr$6 = HNEWVR( 7ll, (struct $8FBSYMBOL*)0ull, 4ll );
		*(struct $6IRVREG**)((uint8*)VR$1 + 88ll) = vr$6;
	}
	label$214:;
	label$213:;
	fb$result$1 = VR$1;
	label$212:;
	return fb$result$1;
}

static struct $6IRVREG* _ALLOCVRIMM( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, int64 VALUE$1 )
{
	struct $6IRVREG* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$215:;
	struct $6IRVREG* VR$1;
	struct $6IRVREG* vr$1 = HNEWVR( DTYPE$1, SUBTYPE$1, 0ll );
	VR$1 = vr$1;
	if( ((int64)-(DTYPE$1 == 12ll) | (int64)-(DTYPE$1 == 13ll)) == 0ll ) goto label$218;
	{
		*(int64*)((uint8*)VR$1 + 48ll) = VALUE$1 & 4294967295ll;
		struct $6IRVREG* vr$8 = HNEWVR( 7ll, (struct $8FBSYMBOL*)0ull, 0ll );
		*(struct $6IRVREG**)((uint8*)VR$1 + 88ll) = vr$8;
		*(int64*)((uint8*)*(struct $6IRVREG**)((uint8*)VR$1 + 88ll) + 48ll) = (int64)((uint64)VALUE$1 >> 32ll);
	}
	goto label$217;
	label$218:;
	{
		*(int64*)((uint8*)VR$1 + 48ll) = VALUE$1;
	}
	label$217:;
	fb$result$1 = VR$1;
	label$216:;
	return fb$result$1;
}

static struct $6IRVREG* _ALLOCVRIMMF( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, double VALUE$1 )
{
	struct $6IRVREG* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$219:;
	struct $6IRVREG* VR$1;
	struct $8FBSYMBOL* S$1;
	if( (*(int64*)((uint8*)&IR$ + 568ll) & 2ll) == 0ll ) goto label$222;
	{
		struct $6IRVREG* vr$3 = HNEWVR( DTYPE$1, SUBTYPE$1, 0ll );
		VR$1 = vr$3;
		*(double*)((uint8*)VR$1 + 48ll) = VALUE$1;
	}
	goto label$221;
	label$222:;
	{
		struct $8FBSYMBOL* vr$5 = SYMBALLOCFLOATCONST( VALUE$1, DTYPE$1 );
		S$1 = vr$5;
		struct $6IRVREG* vr$7 = (*(tmp$67*)((uint8*)&IR$ + 496ll))( DTYPE$1, SUBTYPE$1, S$1, *(int64*)((uint8*)S$1 + 80ll) );
		VR$1 = vr$7;
	}
	label$221:;
	fb$result$1 = VR$1;
	label$220:;
	return fb$result$1;
}

static struct $6IRVREG* _ALLOCVRVAR( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, struct $8FBSYMBOL* SYMBOL$1, int64 OFS$1 )
{
	struct $6IRVREG* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$223:;
	struct $6IRVREG* VR$1;
	struct $6IRVREG* VA$1;
	struct $6IRVREG* vr$1 = HNEWVR( DTYPE$1, SUBTYPE$1, 1ll );
	VR$1 = vr$1;
	*(struct $8FBSYMBOL**)((uint8*)VR$1 + 56ll) = SYMBOL$1;
	*(int64*)((uint8*)VR$1 + 64ll) = OFS$1;
	if( ((int64)-(DTYPE$1 == 12ll) | (int64)-(DTYPE$1 == 13ll)) == 0ll ) goto label$226;
	{
		struct $6IRVREG* vr$8 = HNEWVR( 7ll, (struct $8FBSYMBOL*)0ull, 1ll );
		VA$1 = vr$8;
		*(struct $6IRVREG**)((uint8*)VR$1 + 88ll) = VA$1;
		*(int64*)((uint8*)VA$1 + 64ll) = OFS$1 + 4ll;
	}
	label$226:;
	label$225:;
	fb$result$1 = VR$1;
	label$224:;
	return fb$result$1;
}

static struct $6IRVREG* _ALLOCVRIDX( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, struct $8FBSYMBOL* SYMBOL$1, int64 OFS$1, int64 MULT$1, struct $6IRVREG* VIDX$1 )
{
	struct $6IRVREG* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$227:;
	struct $6IRVREG* VR$1;
	struct $6IRVREG* VA$1;
	struct $6IRVREG* vr$1 = HNEWVR( DTYPE$1, SUBTYPE$1, 2ll );
	VR$1 = vr$1;
	*(struct $8FBSYMBOL**)((uint8*)VR$1 + 56ll) = SYMBOL$1;
	*(int64*)((uint8*)VR$1 + 64ll) = OFS$1;
	*(int64*)((uint8*)VR$1 + 72ll) = MULT$1;
	*(struct $6IRVREG**)((uint8*)VR$1 + 80ll) = VIDX$1;
	if( ((int64)-(DTYPE$1 == 12ll) | (int64)-(DTYPE$1 == 13ll)) == 0ll ) goto label$230;
	{
		struct $6IRVREG* vr$10 = HNEWVR( 7ll, (struct $8FBSYMBOL*)0ull, 2ll );
		VA$1 = vr$10;
		*(struct $6IRVREG**)((uint8*)VR$1 + 88ll) = VA$1;
		*(int64*)((uint8*)VA$1 + 64ll) = OFS$1 + 4ll;
	}
	label$230:;
	label$229:;
	fb$result$1 = VR$1;
	label$228:;
	return fb$result$1;
}

static struct $6IRVREG* _ALLOCVRPTR( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, int64 OFS$1, struct $6IRVREG* VIDX$1 )
{
	struct $6IRVREG* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$231:;
	struct $6IRVREG* VR$1;
	struct $6IRVREG* VA$1;
	struct $6IRVREG* vr$1 = HNEWVR( DTYPE$1, SUBTYPE$1, 3ll );
	VR$1 = vr$1;
	*(int64*)((uint8*)VR$1 + 64ll) = OFS$1;
	*(int64*)((uint8*)VR$1 + 72ll) = 1ll;
	*(struct $6IRVREG**)((uint8*)VR$1 + 80ll) = VIDX$1;
	if( ((int64)-(DTYPE$1 == 12ll) | (int64)-(DTYPE$1 == 13ll)) == 0ll ) goto label$234;
	{
		struct $6IRVREG* vr$9 = HNEWVR( 7ll, (struct $8FBSYMBOL*)0ull, 2ll );
		VA$1 = vr$9;
		*(struct $6IRVREG**)((uint8*)VR$1 + 88ll) = VA$1;
		*(int64*)((uint8*)VA$1 + 64ll) = OFS$1 + 4ll;
	}
	label$234:;
	label$233:;
	fb$result$1 = VR$1;
	label$232:;
	return fb$result$1;
}

static struct $6IRVREG* _ALLOCVROFS( int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, struct $8FBSYMBOL* SYMBOL$1, int64 OFS$1 )
{
	struct $6IRVREG* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$235:;
	struct $6IRVREG* VR$1;
	struct $6IRVREG* vr$1 = HNEWVR( DTYPE$1, SUBTYPE$1, 5ll );
	VR$1 = vr$1;
	*(struct $8FBSYMBOL**)((uint8*)VR$1 + 56ll) = SYMBOL$1;
	*(int64*)((uint8*)VR$1 + 64ll) = OFS$1;
	fb$result$1 = VR$1;
	label$236:;
	return fb$result$1;
}

static void _SETVREGDATATYPE( struct $6IRVREG* VREG$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	label$237:;
	if( VREG$1 == (struct $6IRVREG*)0ull ) goto label$240;
	{
		int64 TMP$111$2;
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$241;
		TMP$111$2 = 22ll;
		goto label$850;
		label$241:;
		TMP$111$2 = DTYPE$1 & 31ll;
		label$850:;
		*($11FB_DATATYPE*)((uint8*)VREG$1 + 8ll) = TMP$111$2;
		*(struct $8FBSYMBOL**)((uint8*)VREG$1 + 16ll) = SUBTYPE$1;
	}
	label$240:;
	label$239:;
	label$238:;
}

static void HRENAME( struct $6IRVREG* VOLD$1, struct $6IRVREG* VNEW$1 )
{
	label$242:;
	struct $9IRTACVREG* T$1;
	struct $6IRVREG* V$1;
	T$1 = *(struct $9IRTACVREG**)((uint8*)VOLD$1 + 96ll);
	label$244:;
	{
		if( *(struct $6IRVREG**)((uint8*)T$1 + 8ll) == (struct $6IRVREG*)0ull ) goto label$248;
		{
			if( *(struct $6IRVREG**)((uint8*)*(struct $6IRVREG**)((uint8*)T$1 + 8ll) + 80ll) != VOLD$1 ) goto label$250;
			{
				*(struct $6IRVREG**)((uint8*)*(struct $6IRVREG**)((uint8*)T$1 + 8ll) + 80ll) = VNEW$1;
			}
			goto label$249;
			label$250:;
			{
				*(struct $6IRVREG**)((uint8*)*(struct $6IRVREG**)((uint8*)T$1 + 8ll) + 88ll) = VNEW$1;
			}
			label$249:;
		}
		label$248:;
		label$247:;
		*(struct $6IRVREG**)T$1 = VNEW$1;
		T$1 = *(struct $9IRTACVREG**)((uint8*)T$1 + 16ll);
	}
	label$246:;
	if( T$1 != (struct $9IRTACVREG*)0ull ) goto label$244;
	label$245:;
	*(struct $9IRTACVREG**)((uint8*)VNEW$1 + 96ll) = *(struct $9IRTACVREG**)((uint8*)VOLD$1 + 96ll);
	*(struct $9IRTACVREG**)((uint8*)VNEW$1 + 104ll) = *(struct $9IRTACVREG**)((uint8*)VOLD$1 + 104ll);
	*(struct $5IRTAC**)((uint8*)VNEW$1 + 112ll) = *(struct $5IRTAC**)((uint8*)VOLD$1 + 112ll);
	label$243:;
}

static void HREUSE( struct $5IRTAC* T$1 )
{
	label$251:;
	struct $6IRVREG* V1$1;
	struct $6IRVREG* V2$1;
	struct $6IRVREG* VR$1;
	int64 V1_DTYPE$1;
	int64 V1_DCLASS$1;
	int64 V1_TYP$1;
	int64 V2_DTYPE$1;
	int64 V2_DCLASS$1;
	int64 V2_TYP$1;
	int64 VR_DTYPE$1;
	int64 VR_DCLASS$1;
	int64 VR_TYP$1;
	int64 OP$1;
	OP$1 = *(int64*)((uint8*)T$1 + 8ll);
	V1$1 = *(struct $6IRVREG**)((uint8*)T$1 + 88ll);
	V2$1 = *(struct $6IRVREG**)((uint8*)T$1 + 160ll);
	VR$1 = *(struct $6IRVREG**)((uint8*)T$1 + 16ll);
	if( V1$1 == (struct $6IRVREG*)0ull ) goto label$254;
	{
		int64 TMP$112$2;
		V1_TYP$1 = *(int64*)V1$1;
		if( (*(int64*)((uint8*)V1$1 + 8ll) & 480ll) == 0ll ) goto label$255;
		TMP$112$2 = 22ll;
		goto label$851;
		label$255:;
		TMP$112$2 = *(int64*)((uint8*)V1$1 + 8ll) & 31ll;
		label$851:;
		V1_DTYPE$1 = TMP$112$2;
		if( V1_DTYPE$1 != 22ll ) goto label$257;
		{
			V1_DTYPE$1 = 11ll;
		}
		label$257:;
		label$256:;
		V1_DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (V1_DTYPE$1 * 56ll));
	}
	goto label$253;
	label$254:;
	{
		V1_TYP$1 = -1ll;
		V1_DTYPE$1 = 2147483648ll;
		V1_DCLASS$1 = -1ll;
	}
	label$253:;
	if( V2$1 == (struct $6IRVREG*)0ull ) goto label$259;
	{
		int64 TMP$113$2;
		V2_TYP$1 = *(int64*)V2$1;
		if( (*(int64*)((uint8*)V2$1 + 8ll) & 480ll) == 0ll ) goto label$260;
		TMP$113$2 = 22ll;
		goto label$852;
		label$260:;
		TMP$113$2 = *(int64*)((uint8*)V2$1 + 8ll) & 31ll;
		label$852:;
		V2_DTYPE$1 = TMP$113$2;
		if( V2_DTYPE$1 != 22ll ) goto label$262;
		{
			V2_DTYPE$1 = 11ll;
		}
		label$262:;
		label$261:;
		V2_DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (V2_DTYPE$1 * 56ll));
	}
	goto label$258;
	label$259:;
	{
		V2_TYP$1 = -1ll;
		V2_DTYPE$1 = 2147483648ll;
		V2_DCLASS$1 = -1ll;
	}
	label$258:;
	if( VR$1 == (struct $6IRVREG*)0ull ) goto label$264;
	{
		int64 TMP$114$2;
		VR_TYP$1 = *(int64*)VR$1;
		if( (*(int64*)((uint8*)VR$1 + 8ll) & 480ll) == 0ll ) goto label$265;
		TMP$114$2 = 22ll;
		goto label$853;
		label$265:;
		TMP$114$2 = *(int64*)((uint8*)VR$1 + 8ll) & 31ll;
		label$853:;
		VR_DTYPE$1 = TMP$114$2;
		if( VR_DTYPE$1 != 22ll ) goto label$267;
		{
			VR_DTYPE$1 = 11ll;
		}
		label$267:;
		label$266:;
		VR_DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (VR_DTYPE$1 * 56ll));
	}
	goto label$263;
	label$264:;
	{
		VR_TYP$1 = -1ll;
		VR_DTYPE$1 = 2147483648ll;
		VR_DCLASS$1 = -1ll;
	}
	label$263:;
	{
		$13AST_NODECLASS TMP$115$2;
		TMP$115$2 = *($13AST_NODECLASS*)((uint8*)AST_OPTB$ + (OP$1 << 5ll));
		if( TMP$115$2 != 4ll ) goto label$269;
		label$270:;
		{
			if( VR$1 == V1$1 ) goto label$272;
			{
				if( VR_DTYPE$1 != V1_DTYPE$1 ) goto label$274;
				{
					uint64 vr$35 = (*(tmp$71*)((uint8*)&IR$ + 536ll))( V1$1 );
					if( vr$35 != 2147483647ull ) goto label$276;
					{
						HRENAME( VR$1, V1$1 );
					}
					label$276:;
					label$275:;
				}
				label$274:;
				label$273:;
			}
			label$272:;
			label$271:;
		}
		goto label$268;
		label$269:;
		if( TMP$115$2 == 3ll ) goto label$278;
		label$279:;
		if( TMP$115$2 != 14ll ) goto label$277;
		label$278:;
		{
			int64 V1RENAME$3;
			int64 V2RENAME$3;
			if( VR$1 != (struct $6IRVREG*)0ull ) goto label$281;
			{
				goto label$252;
			}
			label$281:;
			label$280:;
			if( V1_DCLASS$1 == V2_DCLASS$1 ) goto label$283;
			{
				goto label$252;
			}
			label$283:;
			label$282:;
			V1RENAME$3 = 0ll;
			if( VR$1 == V1$1 ) goto label$285;
			{
				if( VR_DTYPE$1 != V1_DTYPE$1 ) goto label$287;
				{
					uint64 vr$43 = (*(tmp$71*)((uint8*)&IR$ + 536ll))( V1$1 );
					if( vr$43 != 2147483647ull ) goto label$289;
					{
						V1RENAME$3 = -1ll;
					}
					label$289:;
					label$288:;
				}
				label$287:;
				label$286:;
			}
			label$285:;
			label$284:;
			V2RENAME$3 = 0ll;
			if( (*(int64*)(((uint8*)AST_OPTB$ + (OP$1 << 5ll)) + 8ll) & 2ll) == 0ll ) goto label$291;
			{
				if( VR$1 == V2$1 ) goto label$293;
				{
					if( VR_DTYPE$1 != V2_DTYPE$1 ) goto label$295;
					{
						if( V2_TYP$1 == 0ll ) goto label$297;
						{
							uint64 vr$51 = (*(tmp$71*)((uint8*)&IR$ + 536ll))( V2$1 );
							if( vr$51 != 2147483647ull ) goto label$299;
							{
								V2RENAME$3 = -1ll;
							}
							label$299:;
							label$298:;
						}
						label$297:;
						label$296:;
					}
					label$295:;
					label$294:;
				}
				label$293:;
				label$292:;
			}
			label$291:;
			label$290:;
			if( (V1RENAME$3 & V2RENAME$3) == 0ll ) goto label$301;
			{
				if( (int64)-(*(int64*)V1$1 == 4ll) != 0ll ) goto label$303;
				{
					V1RENAME$3 = 0ll;
				}
				label$303:;
				label$302:;
			}
			label$301:;
			label$300:;
			if( V1RENAME$3 == 0ll ) goto label$305;
			{
				HRENAME( VR$1, V1$1 );
			}
			goto label$304;
			label$305:;
			if( V2RENAME$3 == 0ll ) goto label$306;
			{
				{
					fb_MemSwap( (void*)((uint8*)T$1 + 88ll), (void*)((uint8*)T$1 + 160ll), 72ll );
				}
				HRENAME( VR$1, V2$1 );
			}
			label$306:;
			label$304:;
		}
		label$277:;
		label$268:;
	}
	label$252:;
}

static void _FLUSH( void )
{
	label$307:;
	static int64 OP$1;
	static struct $5IRTAC* T$1;
	static struct $6IRVREG* V1$1;
	static struct $6IRVREG* V2$1;
	static struct $6IRVREG* VR$1;
	if( *(int64*)((uint8*)&CTX$ + 112ll) != 0ll ) goto label$310;
	{
		goto label$308;
	}
	label$310:;
	label$309:;
	void* vr$2 = FLISTGETHEAD( (struct $6TFLIST*)&CTX$ );
	T$1 = (struct $5IRTAC*)vr$2;
	label$311:;
	{
		*(struct $5IRTAC**)((uint8*)&CTX$ + 120ll) = T$1;
		HREUSE( T$1 );
		OP$1 = *(int64*)((uint8*)T$1 + 8ll);
		V1$1 = *(struct $6IRVREG**)((uint8*)T$1 + 88ll);
		V2$1 = *(struct $6IRVREG**)((uint8*)T$1 + 160ll);
		VR$1 = *(struct $6IRVREG**)((uint8*)T$1 + 16ll);
		{
			uint64 TMP$116$3;
			TMP$116$3 = *(uint64*)((uint8*)AST_OPTB$ + (OP$1 << 5ll));
			goto label$315;
			label$316:;
			{
				HFLUSHUOP( OP$1, V1$1, VR$1 );
			}
			goto label$314;
			label$317:;
			{
				HFLUSHBOP( OP$1, V1$1, V2$1, VR$1 );
			}
			goto label$314;
			label$318:;
			{
				HFLUSHCOMP( OP$1, V1$1, V2$1, VR$1, *(struct $8FBSYMBOL**)((uint8*)T$1 + 232ll) );
			}
			goto label$314;
			label$319:;
			{
				HFLUSHSTORE( OP$1, V1$1, V2$1 );
			}
			goto label$314;
			label$320:;
			{
				HFLUSHLOAD( OP$1, V1$1, VR$1 );
			}
			goto label$314;
			label$321:;
			{
				HFLUSHCONVERT( OP$1, V1$1, V2$1 );
			}
			goto label$314;
			label$322:;
			{
				HFLUSHSTACK( OP$1, V1$1, *(int64*)((uint8*)T$1 + 240ll) );
			}
			goto label$314;
			label$323:;
			{
				HFLUSHCALL( OP$1, *(struct $8FBSYMBOL**)((uint8*)T$1 + 232ll), *(int64*)((uint8*)T$1 + 240ll), V1$1, VR$1 );
			}
			goto label$314;
			label$324:;
			{
				HFLUSHBRANCH( OP$1, *(struct $8FBSYMBOL**)((uint8*)T$1 + 232ll) );
			}
			goto label$314;
			label$325:;
			{
				HFLUSHADDR( OP$1, V1$1, VR$1 );
			}
			goto label$314;
			label$326:;
			{
				HFLUSHMEM( OP$1, V1$1, V2$1, *(int64*)((uint8*)T$1 + 240ll), *(void**)((uint8*)T$1 + 232ll) );
			}
			goto label$314;
			label$327:;
			{
				HFLUSHDBG( OP$1, *(struct $8FBSYMBOL**)((uint8*)T$1 + 232ll), *(int64*)((uint8*)T$1 + 240ll) );
			}
			goto label$314;
			label$328:;
			{
				HFLUSHLIT( OP$1, *(uint8**)((uint8*)T$1 + 232ll) );
			}
			goto label$314;
			label$315:;
			static const void* tmp$168[30ll] = {
				&&label$320,
				&&label$319,
				&&label$317,
				&&label$316,
				&&label$321,
				&&label$325,
				&&label$324,
				&&label$314,
				&&label$323,
				&&label$314,
				&&label$322,
				&&label$326,
				&&label$314,
				&&label$318,
				&&label$314,
				&&label$314,
				&&label$314,
				&&label$314,
				&&label$314,
				&&label$314,
				&&label$314,
				&&label$314,
				&&label$314,
				&&label$314,
				&&label$314,
				&&label$314,
				&&label$328,
				&&label$314,
				&&label$314,
				&&label$327,
			};
			if( TMP$116$3 < 1ll ) goto label$314;
			if( TMP$116$3 > 30ll ) goto label$314;
			goto *tmp$168[TMP$116$3 - 1ll];
			label$314:;
		}
		if( *(int64*)((uint8*)&ENV$ + 232ll) < 1ll ) goto label$330;
		{
			if( *(int64*)((uint8*)AST_OPTB$ + (OP$1 << 5ll)) == 9ll ) goto label$332;
			{
				if( VR$1 == (struct $6IRVREG*)0ull ) goto label$334;
				{
					if( *(int64*)((uint8*)VR$1 + 32ll) != 0ll ) goto label$336;
					{
						*($12IR_REGFAMILY*)((uint8*)VR$1 + 32ll) = 1ll;
						label$336:;
					}
				}
				label$334:;
				label$333:;
			}
			label$332:;
			label$331:;
		}
		label$330:;
		label$329:;
		void* vr$25 = FLISTGETNEXT( (void*)T$1 );
		T$1 = (struct $5IRTAC*)vr$25;
	}
	label$313:;
	if( T$1 != (struct $5IRTAC*)0ull ) goto label$311;
	label$312:;
	*(struct $5IRTAC**)((uint8*)&CTX$ + 120ll) = (struct $5IRTAC*)0ull;
	*(int64*)((uint8*)&CTX$ + 112ll) = 0ll;
	FLISTRESET( (struct $6TFLIST*)&CTX$ );
	FLISTRESET( (struct $6TFLIST*)((uint8*)&CTX$ + 128ll) );
	HFREEPRESERVEDREGS(  );
	label$308:;
}

static void HFLUSHBRANCH( int64 OP$1, struct $8FBSYMBOL* LABEL$1 )
{
	label$337:;
	{
		uint64 TMP$117$2;
		TMP$117$2 = (uint64)OP$1;
		goto label$340;
		label$341:;
		{
			EMITLABEL( LABEL$1 );
		}
		goto label$339;
		label$342:;
		{
			EMITJUMP( LABEL$1 );
		}
		goto label$339;
		label$343:;
		{
			EMITCALL( LABEL$1, 0ll );
		}
		goto label$339;
		label$344:;
		{
			EMITRET( 0ll );
		}
		goto label$339;
		label$345:;
		{
			EMITBRANCH( OP$1, LABEL$1 );
		}
		goto label$339;
		label$340:;
		static const void* tmp$169[4ll] = {
			&&label$342,
			&&label$343,
			&&label$341,
			&&label$344,
		};
		if( TMP$117$2 < 97ll ) goto label$345;
		if( TMP$117$2 > 100ll ) goto label$345;
		goto *tmp$169[TMP$117$2 - 97ll];
		label$339:;
	}
	label$338:;
}

static void HFREEPRESERVEDREGS( void )
{
	label$346:;
	static int64 CLASS_$1;
	static int64 REG$1;
	{
		CLASS_$1 = 0ll;
		label$351:;
		{
			int64 vr$1 = (*(tmp$81*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (CLASS_$1 << 3ll)) + 56ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (CLASS_$1 << 3ll)) );
			REG$1 = vr$1;
			label$352:;
			if( REG$1 == -1ll ) goto label$353;
			{
				int64 vr$6 = (*(tmp$79*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (CLASS_$1 << 3ll)) + 32ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (CLASS_$1 << 3ll)), REG$1 );
				if( vr$6 != 0ll ) goto label$355;
				{
					(*(tmp$78*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (CLASS_$1 << 3ll)) + 24ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (CLASS_$1 << 3ll)), REG$1 );
				}
				label$355:;
				label$354:;
				int64 vr$14 = (*(tmp$79*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (CLASS_$1 << 3ll)) + 64ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (CLASS_$1 << 3ll)), REG$1 );
				REG$1 = vr$14;
			}
			goto label$352;
			label$353:;
		}
		label$349:;
		CLASS_$1 = CLASS_$1 + 1ll;
		label$348:;
		if( CLASS_$1 <= 1ll ) goto label$351;
		label$350:;
	}
	label$347:;
}

static int64 HPRESERVEREG( struct $6IRVREG* VR$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$356:;
	int64 VR_DCLASS$1;
	int64 VR_DTYPE$1;
	int64 VR_TYP$1;
	int64 PRESERVED1$1;
	int64 PRESERVED2$1;
	int64 FREG1$1;
	int64 FREG2$1;
	struct $6IRVREG ORIGVREG$1;
	struct $6IRVREG ORIGVAUX$1;
	struct $6IRVREG DESTVREG$1;
	if( VR$1 == (struct $6IRVREG*)0ull ) goto label$359;
	{
		int64 TMP$118$2;
		VR_TYP$1 = *(int64*)VR$1;
		if( (*(int64*)((uint8*)VR$1 + 8ll) & 480ll) == 0ll ) goto label$360;
		TMP$118$2 = 22ll;
		goto label$854;
		label$360:;
		TMP$118$2 = *(int64*)((uint8*)VR$1 + 8ll) & 31ll;
		label$854:;
		VR_DTYPE$1 = TMP$118$2;
		if( VR_DTYPE$1 != 22ll ) goto label$362;
		{
			VR_DTYPE$1 = 11ll;
		}
		label$362:;
		label$361:;
		VR_DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (VR_DTYPE$1 * 56ll));
	}
	goto label$358;
	label$359:;
	{
		VR_TYP$1 = -1ll;
		VR_DTYPE$1 = 2147483648ll;
		VR_DCLASS$1 = -1ll;
	}
	label$358:;
	__builtin_memcpy( &ORIGVREG$1, VR$1, 120 );
	int64 vr$12 = (*(tmp$39*)((uint8*)&EMIT$ + 376ll))( VR_DCLASS$1, *(int64*)((uint8*)VR$1 + 24ll) );
	PRESERVED1$1 = vr$12;
	if( ((int64)-(VR_DTYPE$1 == 12ll) | (int64)-(VR_DTYPE$1 == 13ll)) == 0ll ) goto label$364;
	{
		__builtin_memcpy( &ORIGVAUX$1, *(struct $6IRVREG**)((uint8*)VR$1 + 88ll), 120 );
		*(struct $6IRVREG**)((uint8*)&ORIGVREG$1 + 88ll) = &ORIGVAUX$1;
		int64 vr$22 = (*(tmp$39*)((uint8*)&EMIT$ + 376ll))( VR_DCLASS$1, *(int64*)((uint8*)*(struct $6IRVREG**)((uint8*)VR$1 + 88ll) + 24ll) );
		PRESERVED2$1 = vr$22;
	}
	goto label$363;
	label$364:;
	{
		PRESERVED2$1 = -1ll;
	}
	label$363:;
	if( (PRESERVED1$1 & PRESERVED2$1) == 0ll ) goto label$366;
	{
		fb$result$1 = -1ll;
		goto label$357;
	}
	label$366:;
	label$365:;
	if( PRESERVED1$1 != 0ll ) goto label$368;
	{
		int64 vr$26 = (*(tmp$39*)((uint8*)&EMIT$ + 384ll))( VR_DCLASS$1, VR_DTYPE$1 );
		FREG1$1 = vr$26;
		if( FREG1$1 != -1ll ) goto label$370;
		{
			fb$result$1 = 0ll;
			goto label$357;
		}
		label$370:;
		label$369:;
		int64 vr$29 = (*(tmp$77*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (VR_DCLASS$1 << 3ll)) + 16ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (VR_DCLASS$1 << 3ll)), FREG1$1, VR$1, (struct $6IRVREG*)0ull );
		*(int64*)((uint8*)VR$1 + 24ll) = vr$29;
	}
	label$368:;
	label$367:;
	if( PRESERVED2$1 != 0ll ) goto label$372;
	{
		int64 vr$34 = (*(tmp$39*)((uint8*)&EMIT$ + 384ll))( 0ll, 7ll );
		FREG2$1 = vr$34;
		if( FREG2$1 != -1ll ) goto label$374;
		{
			if( PRESERVED1$1 != 0ll ) goto label$376;
			{
				(*(tmp$78*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (VR_DCLASS$1 << 3ll)) + 24ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (VR_DCLASS$1 << 3ll)), *(int64*)((uint8*)VR$1 + 24ll) );
				*(int64*)((uint8*)VR$1 + 24ll) = *(int64*)((uint8*)&ORIGVREG$1 + 24ll);
			}
			label$376:;
			label$375:;
			fb$result$1 = 0ll;
			goto label$357;
		}
		label$374:;
		label$373:;
		int64 vr$43 = (*(tmp$77*)((uint8*)*(struct $8REGCLASS**)REGTB$ + 16ll))( *(struct $8REGCLASS**)REGTB$, FREG2$1, *(struct $6IRVREG**)((uint8*)VR$1 + 88ll), VR$1 );
		*(int64*)((uint8*)*(struct $6IRVREG**)((uint8*)VR$1 + 88ll) + 24ll) = vr$43;
	}
	label$372:;
	label$371:;
	if( ~(PRESERVED1$1 | PRESERVED2$1) == 0ll ) goto label$378;
	{
		EMITMOV( VR$1, &ORIGVREG$1 );
	}
	goto label$377;
	label$378:;
	if( PRESERVED1$1 != 0ll ) goto label$379;
	{
		if( ((int64)-(VR_DTYPE$1 == 12ll) | (int64)-(VR_DTYPE$1 == 13ll)) == 0ll ) goto label$381;
		{
			__builtin_memcpy( &DESTVREG$1, VR$1, 120 );
			*($11FB_DATATYPE*)((uint8*)&DESTVREG$1 + 8ll) = 7ll;
			*(struct $6IRVREG**)((uint8*)&DESTVREG$1 + 88ll) = (struct $6IRVREG*)0ull;
			*($11FB_DATATYPE*)((uint8*)&ORIGVREG$1 + 8ll) = 7ll;
			*(struct $6IRVREG**)((uint8*)&ORIGVREG$1 + 88ll) = (struct $6IRVREG*)0ull;
			EMITMOV( &DESTVREG$1, &ORIGVREG$1 );
		}
		goto label$380;
		label$381:;
		{
			EMITMOV( VR$1, &ORIGVREG$1 );
		}
		label$380:;
	}
	goto label$377;
	label$379:;
	{
		EMITMOV( *(struct $6IRVREG**)((uint8*)VR$1 + 88ll), &ORIGVAUX$1 );
	}
	label$377:;
	if( PRESERVED1$1 != 0ll ) goto label$383;
	{
		(*(tmp$78*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (VR_DCLASS$1 << 3ll)) + 24ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (VR_DCLASS$1 << 3ll)), *(int64*)((uint8*)&ORIGVREG$1 + 24ll) );
	}
	label$383:;
	label$382:;
	if( PRESERVED2$1 != 0ll ) goto label$385;
	{
		(*(tmp$78*)((uint8*)*(struct $8REGCLASS**)REGTB$ + 24ll))( *(struct $8REGCLASS**)REGTB$, *(int64*)((uint8*)&ORIGVAUX$1 + 24ll) );
	}
	label$385:;
	label$384:;
	fb$result$1 = -1ll;
	label$357:;
	return fb$result$1;
}

static void HPRESERVEREGS( struct $6IRVREG* PTRVREG$1 )
{
	label$386:;
	int64 NPREG$1;
	int64 REG$1;
	struct $6IRVREG* VR$1;
	struct $6IRVREG* VAUXPARENT$1;
	{
		int64 CLASS_$2;
		CLASS_$2 = 0ll;
		label$391:;
		{
			NPREG$1 = -1ll;
			if( CLASS_$2 != 0ll ) goto label$393;
			{
				if( PTRVREG$1 == (struct $6IRVREG*)0ull ) goto label$395;
				{
					{
						$15IRVREGTYPE_ENUM TMP$119$6;
						TMP$119$6 = *($15IRVREGTYPE_ENUM*)PTRVREG$1;
						if( TMP$119$6 != 4ll ) goto label$397;
						label$398:;
						{
							NPREG$1 = *(int64*)((uint8*)PTRVREG$1 + 24ll);
						}
						goto label$396;
						label$397:;
						if( TMP$119$6 == 2ll ) goto label$400;
						label$401:;
						if( TMP$119$6 != 3ll ) goto label$399;
						label$400:;
						{
							PTRVREG$1 = *(struct $6IRVREG**)((uint8*)PTRVREG$1 + 80ll);
							if( PTRVREG$1 == (struct $6IRVREG*)0ull ) goto label$403;
							{
								NPREG$1 = *(int64*)((uint8*)PTRVREG$1 + 24ll);
							}
							label$403:;
							label$402:;
						}
						label$399:;
						label$396:;
					}
					PTRVREG$1 = (struct $6IRVREG*)0ull;
				}
				label$395:;
				label$394:;
			}
			label$393:;
			label$392:;
			int64 vr$11 = (*(tmp$81*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (CLASS_$2 << 3ll)) + 56ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (CLASS_$2 << 3ll)) );
			REG$1 = vr$11;
			label$404:;
			if( REG$1 == -1ll ) goto label$405;
			{
				int64 vr$16 = (*(tmp$79*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (CLASS_$2 << 3ll)) + 32ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (CLASS_$2 << 3ll)), REG$1 );
				if( ((int64)-(vr$16 == 0ll) & (int64)-(REG$1 != NPREG$1)) == 0ll ) goto label$407;
				{
					struct $6IRVREG* vr$25 = (*(tmp$82*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (CLASS_$2 << 3ll)) + 72ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (CLASS_$2 << 3ll)), REG$1, &VAUXPARENT$1 );
					VR$1 = vr$25;
					if( VAUXPARENT$1 == (struct $6IRVREG*)0ull ) goto label$409;
					{
						VR$1 = VAUXPARENT$1;
					}
					label$409:;
					label$408:;
					int64 vr$29 = HPRESERVEREG( VR$1 );
					if( vr$29 != 0ll ) goto label$411;
					{
						(*(tmp$43*)((uint8*)&IR$ + 552ll))( VR$1, (struct $6IRVREG*)0ull );
					}
					label$411:;
					label$410:;
				}
				label$407:;
				label$406:;
				int64 vr$32 = (*(tmp$79*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (CLASS_$2 << 3ll)) + 64ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (CLASS_$2 << 3ll)), REG$1 );
				REG$1 = vr$32;
			}
			goto label$404;
			label$405:;
		}
		label$389:;
		CLASS_$2 = CLASS_$2 + 1ll;
		label$388:;
		if( CLASS_$2 <= 1ll ) goto label$391;
		label$390:;
	}
	label$387:;
}

static void HLOADPOINTER( struct $6IRVREG* V1$1 )
{
	label$412:;
	int64 VTYPE$1;
	int64 DTYPE$1;
	int64 DCLASS$1;
	if( V1$1 == (struct $6IRVREG*)0ull ) goto label$415;
	{
		int64 TMP$120$2;
		VTYPE$1 = *(int64*)V1$1;
		if( (*(int64*)((uint8*)V1$1 + 8ll) & 480ll) == 0ll ) goto label$416;
		TMP$120$2 = 22ll;
		goto label$855;
		label$416:;
		TMP$120$2 = *(int64*)((uint8*)V1$1 + 8ll) & 31ll;
		label$855:;
		DTYPE$1 = TMP$120$2;
		if( DTYPE$1 != 22ll ) goto label$418;
		{
			DTYPE$1 = 11ll;
		}
		label$418:;
		label$417:;
		DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (DTYPE$1 * 56ll));
	}
	goto label$414;
	label$415:;
	{
		VTYPE$1 = -1ll;
		DTYPE$1 = 2147483648ll;
		DCLASS$1 = -1ll;
	}
	label$414:;
	HLOADIDX( V1$1 );
	if( VTYPE$1 != 4ll ) goto label$420;
	{
		int64 TMP$121$2;
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$421;
		TMP$121$2 = 22ll;
		goto label$856;
		label$421:;
		TMP$121$2 = DTYPE$1 & 31ll;
		label$856:;
		(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (DCLASS$1 << 3ll)), V1$1, (struct $6IRVREG*)0ull, *(uint64*)(((uint8*)SYMB_DTYPETB$ + (TMP$121$2 * 56ll)) + 8ll) );
	}
	label$420:;
	label$419:;
	label$413:;
}

static void HLOADRESULT( struct $8FBSYMBOL* PROC$1, struct $6IRVREG* VR$1 )
{
	label$422:;
	int64 VTYPE$1;
	int64 DTYPE$1;
	int64 DCLASS$1;
	int64 REG1$1;
	int64 REG2$1;
	struct $6IRVREG* VA$1;
	if( VR$1 == (struct $6IRVREG*)0ull ) goto label$425;
	{
		if( VR$1 == (struct $6IRVREG*)0ull ) goto label$427;
		{
			int64 TMP$122$3;
			VTYPE$1 = *(int64*)VR$1;
			if( (*(int64*)((uint8*)VR$1 + 8ll) & 480ll) == 0ll ) goto label$428;
			TMP$122$3 = 22ll;
			goto label$857;
			label$428:;
			TMP$122$3 = *(int64*)((uint8*)VR$1 + 8ll) & 31ll;
			label$857:;
			DTYPE$1 = TMP$122$3;
			if( DTYPE$1 != 22ll ) goto label$430;
			{
				DTYPE$1 = 11ll;
			}
			label$430:;
			label$429:;
			DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (DTYPE$1 * 56ll));
		}
		goto label$426;
		label$427:;
		{
			VTYPE$1 = -1ll;
			DTYPE$1 = 2147483648ll;
			DCLASS$1 = -1ll;
		}
		label$426:;
		(*(tmp$92*)((uint8*)&EMIT$ + 392ll))( DTYPE$1, DCLASS$1, &REG1$1, &REG2$1 );
		if( ((int64)-(DTYPE$1 == 12ll) | (int64)-(DTYPE$1 == 13ll)) == 0ll ) goto label$432;
		{
			VA$1 = *(struct $6IRVREG**)((uint8*)VR$1 + 88ll);
			int64 vr$18 = (*(tmp$77*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (DCLASS$1 << 3ll)) + 16ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (DCLASS$1 << 3ll)), REG2$1, VA$1, VR$1 );
			*(int64*)((uint8*)VA$1 + 24ll) = vr$18;
			*($15IRVREGTYPE_ENUM*)VA$1 = 4ll;
		}
		label$432:;
		label$431:;
		int64 vr$24 = (*(tmp$77*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (DCLASS$1 << 3ll)) + 16ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (DCLASS$1 << 3ll)), REG1$1, VR$1, (struct $6IRVREG*)0ull );
		*(int64*)((uint8*)VR$1 + 24ll) = vr$24;
		*($15IRVREGTYPE_ENUM*)VR$1 = 4ll;
		HFREEREG( VR$1, 0ll );
	}
	goto label$424;
	label$425:;
	{
		int64 TMP$123$2;
		if( (*(int64*)((uint8*)PROC$1 + 152ll) & 480ll) == 0ll ) goto label$433;
		TMP$123$2 = 22ll;
		goto label$858;
		label$433:;
		TMP$123$2 = *(int64*)((uint8*)PROC$1 + 152ll) & 31ll;
		label$858:;
		if( ((int64)-(*(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$123$2 * 56ll)) == 1ll) & (int64)-(*(int64*)((uint8*)PROC$1 + 168ll) != 1ll)) == 0ll ) goto label$435;
		{
			EMITPOPST0(  );
		}
		label$435:;
		label$434:;
	}
	label$424:;
	label$423:;
}

static void HFLUSHCALL( int64 OP$1, struct $8FBSYMBOL* PROC$1, int64 BYTESTOPOP$1, struct $6IRVREG* V1$1, struct $6IRVREG* VR$1 )
{
	label$436:;
	{
		if( OP$1 != 101ll ) goto label$439;
		label$440:;
		{
			HPRESERVEREGS( (struct $6IRVREG*)0ull );
			EMITCALL( PROC$1, BYTESTOPOP$1 );
			HLOADRESULT( PROC$1, VR$1 );
		}
		goto label$438;
		label$439:;
		if( OP$1 != 102ll ) goto label$441;
		label$442:;
		{
			HPRESERVEREGS( V1$1 );
			HLOADPOINTER( V1$1 );
			EMITCALLPTR( V1$1, BYTESTOPOP$1 );
			HFREEREG( V1$1, 0ll );
			HLOADRESULT( PROC$1, VR$1 );
		}
		goto label$438;
		label$441:;
		if( OP$1 != 103ll ) goto label$443;
		label$444:;
		{
			HLOADPOINTER( V1$1 );
			EMITJUMPPTR( V1$1 );
			HFREEREG( V1$1, 0ll );
		}
		goto label$438;
		label$443:;
		{
		}
		label$445:;
		label$438:;
	}
	label$437:;
}

static void HFLUSHSTACK( int64 OP$1, struct $6IRVREG* V1$1, int64 EX$1 )
{
	label$446:;
	static int64 V1_TYP$1;
	static int64 V1_DTYPE$1;
	static int64 V1_DCLASS$1;
	static struct $6IRVREG* VA$1;
	if( OP$1 != 90ll ) goto label$449;
	{
		EMITSTACKALIGN( EX$1 );
		goto label$447;
	}
	label$449:;
	label$448:;
	if( V1$1 == (struct $6IRVREG*)0ull ) goto label$451;
	{
		int64 TMP$124$2;
		V1_TYP$1 = *(int64*)V1$1;
		if( (*(int64*)((uint8*)V1$1 + 8ll) & 480ll) == 0ll ) goto label$452;
		TMP$124$2 = 22ll;
		goto label$859;
		label$452:;
		TMP$124$2 = *(int64*)((uint8*)V1$1 + 8ll) & 31ll;
		label$859:;
		V1_DTYPE$1 = TMP$124$2;
		if( V1_DTYPE$1 != 22ll ) goto label$454;
		{
			V1_DTYPE$1 = 11ll;
		}
		label$454:;
		label$453:;
		V1_DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (V1_DTYPE$1 * 56ll));
	}
	goto label$450;
	label$451:;
	{
		V1_TYP$1 = -1ll;
		V1_DTYPE$1 = 2147483648ll;
		V1_DCLASS$1 = -1ll;
	}
	label$450:;
	HLOADIDX( V1$1 );
	if( V1_TYP$1 != 4ll ) goto label$456;
	{
		int64 TMP$125$2;
		if( ((int64)-(V1_DTYPE$1 == 12ll) | (int64)-(V1_DTYPE$1 == 13ll)) == 0ll ) goto label$458;
		{
			VA$1 = *(struct $6IRVREG**)((uint8*)V1$1 + 88ll);
			(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)), VA$1, V1$1, *(uint64*)((uint8*)SYMB_DTYPETB$ + 400ll) );
			V1_DTYPE$1 = 7ll;
		}
		label$458:;
		label$457:;
		if( (V1_DTYPE$1 & 480ll) == 0ll ) goto label$459;
		TMP$125$2 = 22ll;
		goto label$860;
		label$459:;
		TMP$125$2 = V1_DTYPE$1 & 31ll;
		label$860:;
		(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)), V1$1, (struct $6IRVREG*)0ull, *(uint64*)(((uint8*)SYMB_DTYPETB$ + (TMP$125$2 * 56ll)) + 8ll) );
	}
	label$456:;
	label$455:;
	{
		if( OP$1 != 87ll ) goto label$461;
		label$462:;
		{
			EMITPUSH( V1$1 );
		}
		goto label$460;
		label$461:;
		if( OP$1 != 89ll ) goto label$463;
		label$464:;
		{
			EMITPUSHUDT( V1$1, EX$1 );
		}
		goto label$460;
		label$463:;
		if( OP$1 != 88ll ) goto label$465;
		label$466:;
		{
			EMITPOP( V1$1 );
		}
		label$465:;
		label$460:;
	}
	HFREEREG( V1$1, 0ll );
	label$447:;
}

static void HFLUSHUOP( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* VR$1 )
{
	label$467:;
	static int64 V1_TYP$1;
	static int64 V1_DTYPE$1;
	static int64 V1_DCLASS$1;
	static int64 VR_TYP$1;
	static int64 VR_DTYPE$1;
	static int64 VR_DCLASS$1;
	static struct $6IRVREG* VA$1;
	static int64 V1VECTOR$1;
	V1VECTOR$1 = *(int64*)((uint8*)V1$1 + 40ll);
	if( V1$1 == (struct $6IRVREG*)0ull ) goto label$470;
	{
		int64 TMP$126$2;
		V1_TYP$1 = *(int64*)V1$1;
		if( (*(int64*)((uint8*)V1$1 + 8ll) & 480ll) == 0ll ) goto label$471;
		TMP$126$2 = 22ll;
		goto label$861;
		label$471:;
		TMP$126$2 = *(int64*)((uint8*)V1$1 + 8ll) & 31ll;
		label$861:;
		V1_DTYPE$1 = TMP$126$2;
		if( V1_DTYPE$1 != 22ll ) goto label$473;
		{
			V1_DTYPE$1 = 11ll;
		}
		label$473:;
		label$472:;
		V1_DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (V1_DTYPE$1 * 56ll));
	}
	goto label$469;
	label$470:;
	{
		V1_TYP$1 = -1ll;
		V1_DTYPE$1 = 2147483648ll;
		V1_DCLASS$1 = -1ll;
	}
	label$469:;
	if( VR$1 == (struct $6IRVREG*)0ull ) goto label$475;
	{
		int64 TMP$127$2;
		VR_TYP$1 = *(int64*)VR$1;
		if( (*(int64*)((uint8*)VR$1 + 8ll) & 480ll) == 0ll ) goto label$476;
		TMP$127$2 = 22ll;
		goto label$862;
		label$476:;
		TMP$127$2 = *(int64*)((uint8*)VR$1 + 8ll) & 31ll;
		label$862:;
		VR_DTYPE$1 = TMP$127$2;
		if( VR_DTYPE$1 != 22ll ) goto label$478;
		{
			VR_DTYPE$1 = 11ll;
		}
		label$478:;
		label$477:;
		VR_DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (VR_DTYPE$1 * 56ll));
	}
	goto label$474;
	label$475:;
	{
		VR_TYP$1 = -1ll;
		VR_DTYPE$1 = 2147483648ll;
		VR_DCLASS$1 = -1ll;
	}
	label$474:;
	HLOADIDX( V1$1 );
	HLOADIDX( VR$1 );
	if( VR$1 == (struct $6IRVREG*)0ull ) goto label$480;
	{
		if( V1$1 == VR$1 ) goto label$482;
		{
			int64 TMP$128$3;
			if( ((int64)-(VR_DTYPE$1 == 12ll) | (int64)-(VR_DTYPE$1 == 13ll)) == 0ll ) goto label$484;
			{
				VA$1 = *(struct $6IRVREG**)((uint8*)VR$1 + 88ll);
				(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (VR_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (VR_DCLASS$1 << 3ll)), VA$1, VR$1, *(uint64*)((uint8*)SYMB_DTYPETB$ + 400ll) );
				VR_DTYPE$1 = 7ll;
			}
			label$484:;
			label$483:;
			if( (VR_DTYPE$1 & 480ll) == 0ll ) goto label$485;
			TMP$128$3 = 22ll;
			goto label$863;
			label$485:;
			TMP$128$3 = VR_DTYPE$1 & 31ll;
			label$863:;
			(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (VR_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (VR_DCLASS$1 << 3ll)), VR$1, (struct $6IRVREG*)0ull, *(uint64*)(((uint8*)SYMB_DTYPETB$ + (TMP$128$3 * 56ll)) + 8ll) );
		}
		label$482:;
		label$481:;
	}
	label$480:;
	label$479:;
	if( VR$1 == (struct $6IRVREG*)0ull ) goto label$487;
	{
		int64 TMP$129$2;
		if( ((int64)-(V1_DTYPE$1 == 12ll) | (int64)-(V1_DTYPE$1 == 13ll)) == 0ll ) goto label$489;
		{
			VA$1 = *(struct $6IRVREG**)((uint8*)V1$1 + 88ll);
			(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)), VA$1, V1$1, *(uint64*)((uint8*)SYMB_DTYPETB$ + 400ll) );
			V1_DTYPE$1 = 7ll;
		}
		label$489:;
		label$488:;
		if( OP$1 != 75ll ) goto label$491;
		{
			*(int64*)((uint8*)V1$1 + 40ll) = 0ll;
		}
		label$491:;
		label$490:;
		if( (V1_DTYPE$1 & 480ll) == 0ll ) goto label$492;
		TMP$129$2 = 22ll;
		goto label$864;
		label$492:;
		TMP$129$2 = V1_DTYPE$1 & 31ll;
		label$864:;
		(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)), V1$1, (struct $6IRVREG*)0ull, *(uint64*)(((uint8*)SYMB_DTYPETB$ + (TMP$129$2 * 56ll)) + 8ll) );
		if( OP$1 != 75ll ) goto label$494;
		{
			*(int64*)((uint8*)V1$1 + 40ll) = V1VECTOR$1;
		}
		label$494:;
		label$493:;
	}
	label$487:;
	label$486:;
	{
		uint64 TMP$130$2;
		TMP$130$2 = (uint64)OP$1;
		goto label$496;
		label$497:;
		{
			EMITNEG( V1$1 );
		}
		goto label$495;
		label$498:;
		{
			EMITNOT( V1$1 );
		}
		goto label$495;
		label$499:;
		{
			EMITHADD( V1$1 );
			*(int64*)((uint8*)V1$1 + 40ll) = 0ll;
		}
		goto label$495;
		label$500:;
		{
			EMITABS( V1$1 );
		}
		goto label$495;
		label$501:;
		{
			EMITSGN( V1$1 );
		}
		goto label$495;
		label$502:;
		{
			EMITFIX( V1$1 );
		}
		goto label$495;
		label$503:;
		{
			EMITFRAC( V1$1 );
		}
		goto label$495;
		label$504:;
		{
			EMITCONVFD2FS( V1$1 );
		}
		goto label$495;
		label$505:;
		{
			EMITSIN( V1$1 );
		}
		goto label$495;
		label$506:;
		{
			EMITASIN( V1$1 );
		}
		goto label$495;
		label$507:;
		{
			EMITCOS( V1$1 );
		}
		goto label$495;
		label$508:;
		{
			EMITACOS( V1$1 );
		}
		goto label$495;
		label$509:;
		{
			EMITTAN( V1$1 );
		}
		goto label$495;
		label$510:;
		{
			EMITATAN( V1$1 );
		}
		goto label$495;
		label$511:;
		{
			EMITSQRT( V1$1 );
		}
		goto label$495;
		label$512:;
		{
			EMITRSQRT( V1$1 );
		}
		goto label$495;
		label$513:;
		{
			EMITRCP( V1$1 );
		}
		goto label$495;
		label$514:;
		{
			EMITLOG( V1$1 );
		}
		goto label$495;
		label$515:;
		{
			EMITEXP( V1$1 );
		}
		goto label$495;
		label$516:;
		{
			EMITFLOOR( V1$1 );
		}
		goto label$495;
		label$517:;
		{
			EMITSWZREP( V1$1 );
		}
		goto label$495;
		label$496:;
		static const void* tmp$170[24ll] = {
			&&label$498,
			&&label$495,
			&&label$497,
			&&label$499,
			&&label$500,
			&&label$501,
			&&label$505,
			&&label$506,
			&&label$507,
			&&label$508,
			&&label$509,
			&&label$510,
			&&label$495,
			&&label$511,
			&&label$512,
			&&label$513,
			&&label$514,
			&&label$515,
			&&label$516,
			&&label$502,
			&&label$503,
			&&label$495,
			&&label$504,
			&&label$517,
		};
		if( TMP$130$2 < 52ll ) goto label$495;
		if( TMP$130$2 > 75ll ) goto label$495;
		goto *tmp$170[TMP$130$2 - 52ll];
		label$495:;
	}
	if( VR$1 == (struct $6IRVREG*)0ull ) goto label$519;
	{
		if( V1$1 == VR$1 ) goto label$521;
		{
			EMITMOV( VR$1, V1$1 );
		}
		label$521:;
		label$520:;
	}
	label$519:;
	label$518:;
	HFREEREG( V1$1, 0ll );
	HFREEREG( VR$1, 0ll );
	label$468:;
}

static void HFLUSHBOP( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* V2$1, struct $6IRVREG* VR$1 )
{
	label$522:;
	static int64 V1_TYP$1;
	static int64 V1_DTYPE$1;
	static int64 V1_DCLASS$1;
	static int64 V2_TYP$1;
	static int64 V2_DTYPE$1;
	static int64 V2_DCLASS$1;
	static int64 VR_TYP$1;
	static int64 VR_DTYPE$1;
	static int64 VR_DCLASS$1;
	static struct $6IRVREG* VA$1;
	if( V1$1 == (struct $6IRVREG*)0ull ) goto label$525;
	{
		int64 TMP$131$2;
		V1_TYP$1 = *(int64*)V1$1;
		if( (*(int64*)((uint8*)V1$1 + 8ll) & 480ll) == 0ll ) goto label$526;
		TMP$131$2 = 22ll;
		goto label$865;
		label$526:;
		TMP$131$2 = *(int64*)((uint8*)V1$1 + 8ll) & 31ll;
		label$865:;
		V1_DTYPE$1 = TMP$131$2;
		if( V1_DTYPE$1 != 22ll ) goto label$528;
		{
			V1_DTYPE$1 = 11ll;
		}
		label$528:;
		label$527:;
		V1_DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (V1_DTYPE$1 * 56ll));
	}
	goto label$524;
	label$525:;
	{
		V1_TYP$1 = -1ll;
		V1_DTYPE$1 = 2147483648ll;
		V1_DCLASS$1 = -1ll;
	}
	label$524:;
	if( V2$1 == (struct $6IRVREG*)0ull ) goto label$530;
	{
		int64 TMP$132$2;
		V2_TYP$1 = *(int64*)V2$1;
		if( (*(int64*)((uint8*)V2$1 + 8ll) & 480ll) == 0ll ) goto label$531;
		TMP$132$2 = 22ll;
		goto label$866;
		label$531:;
		TMP$132$2 = *(int64*)((uint8*)V2$1 + 8ll) & 31ll;
		label$866:;
		V2_DTYPE$1 = TMP$132$2;
		if( V2_DTYPE$1 != 22ll ) goto label$533;
		{
			V2_DTYPE$1 = 11ll;
		}
		label$533:;
		label$532:;
		V2_DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (V2_DTYPE$1 * 56ll));
	}
	goto label$529;
	label$530:;
	{
		V2_TYP$1 = -1ll;
		V2_DTYPE$1 = 2147483648ll;
		V2_DCLASS$1 = -1ll;
	}
	label$529:;
	if( VR$1 == (struct $6IRVREG*)0ull ) goto label$535;
	{
		int64 TMP$133$2;
		VR_TYP$1 = *(int64*)VR$1;
		if( (*(int64*)((uint8*)VR$1 + 8ll) & 480ll) == 0ll ) goto label$536;
		TMP$133$2 = 22ll;
		goto label$867;
		label$536:;
		TMP$133$2 = *(int64*)((uint8*)VR$1 + 8ll) & 31ll;
		label$867:;
		VR_DTYPE$1 = TMP$133$2;
		if( VR_DTYPE$1 != 22ll ) goto label$538;
		{
			VR_DTYPE$1 = 11ll;
		}
		label$538:;
		label$537:;
		VR_DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (VR_DTYPE$1 * 56ll));
	}
	goto label$534;
	label$535:;
	{
		VR_TYP$1 = -1ll;
		VR_DTYPE$1 = 2147483648ll;
		VR_DCLASS$1 = -1ll;
	}
	label$534:;
	HLOADIDX( V1$1 );
	HLOADIDX( V2$1 );
	HLOADIDX( VR$1 );
	if( VR$1 != (struct $6IRVREG*)0ull ) goto label$540;
	{
		if( V2_TYP$1 == 0ll ) goto label$542;
		{
			int64 TMP$134$3;
			if( ((int64)-(V2_DTYPE$1 == 12ll) | (int64)-(V2_DTYPE$1 == 13ll)) == 0ll ) goto label$544;
			{
				VA$1 = *(struct $6IRVREG**)((uint8*)V2$1 + 88ll);
				(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V2_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V2_DCLASS$1 << 3ll)), VA$1, V2$1, *(uint64*)((uint8*)SYMB_DTYPETB$ + 400ll) );
				V2_DTYPE$1 = 7ll;
			}
			label$544:;
			label$543:;
			if( (V2_DTYPE$1 & 480ll) == 0ll ) goto label$545;
			TMP$134$3 = 22ll;
			goto label$868;
			label$545:;
			TMP$134$3 = V2_DTYPE$1 & 31ll;
			label$868:;
			(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V2_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V2_DCLASS$1 << 3ll)), V2$1, (struct $6IRVREG*)0ull, *(uint64*)(((uint8*)SYMB_DTYPETB$ + (TMP$134$3 * 56ll)) + 8ll) );
		}
		label$542:;
		label$541:;
	}
	goto label$539;
	label$540:;
	{
		int64 TMP$136$2;
		if( V2_TYP$1 != 4ll ) goto label$547;
		{
			int64 TMP$135$3;
			if( ((int64)-(V2_DTYPE$1 == 12ll) | (int64)-(V2_DTYPE$1 == 13ll)) == 0ll ) goto label$549;
			{
				VA$1 = *(struct $6IRVREG**)((uint8*)V2$1 + 88ll);
				(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V2_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V2_DCLASS$1 << 3ll)), VA$1, V2$1, *(uint64*)((uint8*)SYMB_DTYPETB$ + 400ll) );
				V2_DTYPE$1 = 7ll;
			}
			label$549:;
			label$548:;
			if( (V2_DTYPE$1 & 480ll) == 0ll ) goto label$550;
			TMP$135$3 = 22ll;
			goto label$869;
			label$550:;
			TMP$135$3 = V2_DTYPE$1 & 31ll;
			label$869:;
			(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V2_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V2_DCLASS$1 << 3ll)), V2$1, (struct $6IRVREG*)0ull, *(uint64*)(((uint8*)SYMB_DTYPETB$ + (TMP$135$3 * 56ll)) + 8ll) );
		}
		label$547:;
		label$546:;
		if( ((int64)-(V1_DTYPE$1 == 12ll) | (int64)-(V1_DTYPE$1 == 13ll)) == 0ll ) goto label$552;
		{
			VA$1 = *(struct $6IRVREG**)((uint8*)V1$1 + 88ll);
			(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)), VA$1, V1$1, *(uint64*)((uint8*)SYMB_DTYPETB$ + 400ll) );
			V1_DTYPE$1 = 7ll;
		}
		label$552:;
		label$551:;
		if( (V1_DTYPE$1 & 480ll) == 0ll ) goto label$553;
		TMP$136$2 = 22ll;
		goto label$870;
		label$553:;
		TMP$136$2 = V1_DTYPE$1 & 31ll;
		label$870:;
		(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)), V1$1, (struct $6IRVREG*)0ull, *(uint64*)(((uint8*)SYMB_DTYPETB$ + (TMP$136$2 * 56ll)) + 8ll) );
	}
	label$539:;
	{
		uint64 TMP$137$2;
		TMP$137$2 = (uint64)OP$1;
		goto label$555;
		label$556:;
		{
			EMITADD( V1$1, V2$1 );
		}
		goto label$554;
		label$557:;
		{
			EMITSUB( V1$1, V2$1 );
		}
		goto label$554;
		label$558:;
		{
			EMITMUL( V1$1, V2$1 );
		}
		goto label$554;
		label$559:;
		{
			EMITDIV( V1$1, V2$1 );
		}
		goto label$554;
		label$560:;
		{
			EMITINTDIV( V1$1, V2$1 );
		}
		goto label$554;
		label$561:;
		{
			EMITMOD( V1$1, V2$1 );
		}
		goto label$554;
		label$562:;
		{
			EMITSHL( V1$1, V2$1 );
		}
		goto label$554;
		label$563:;
		{
			EMITSHR( V1$1, V2$1 );
		}
		goto label$554;
		label$564:;
		{
			EMITAND( V1$1, V2$1 );
		}
		goto label$554;
		label$565:;
		{
			EMITOR( V1$1, V2$1 );
		}
		goto label$554;
		label$566:;
		{
			EMITXOR( V1$1, V2$1 );
		}
		goto label$554;
		label$567:;
		{
			EMITEQV( V1$1, V2$1 );
		}
		goto label$554;
		label$568:;
		{
			EMITIMP( V1$1, V2$1 );
		}
		goto label$554;
		label$569:;
		{
			EMITATN2( V1$1, V2$1 );
		}
		goto label$554;
		label$570:;
		{
			EMITPOW( V1$1, V2$1 );
		}
		goto label$554;
		label$555:;
		static const void* tmp$171[37ll] = {
			&&label$556,
			&&label$557,
			&&label$558,
			&&label$559,
			&&label$560,
			&&label$561,
			&&label$564,
			&&label$565,
			&&label$554,
			&&label$554,
			&&label$566,
			&&label$567,
			&&label$568,
			&&label$562,
			&&label$563,
			&&label$570,
			&&label$554,
			&&label$554,
			&&label$554,
			&&label$554,
			&&label$554,
			&&label$554,
			&&label$554,
			&&label$554,
			&&label$554,
			&&label$554,
			&&label$554,
			&&label$554,
			&&label$554,
			&&label$554,
			&&label$554,
			&&label$554,
			&&label$554,
			&&label$554,
			&&label$554,
			&&label$554,
			&&label$569,
		};
		if( TMP$137$2 < 28ll ) goto label$554;
		if( TMP$137$2 > 64ll ) goto label$554;
		goto *tmp$171[TMP$137$2 - 28ll];
		label$554:;
	}
	if( VR$1 == (struct $6IRVREG*)0ull ) goto label$572;
	{
		if( V1$1 == VR$1 ) goto label$574;
		{
			int64 TMP$138$3;
			if( ((int64)-(VR_DTYPE$1 == 12ll) | (int64)-(VR_DTYPE$1 == 13ll)) == 0ll ) goto label$576;
			{
				VA$1 = *(struct $6IRVREG**)((uint8*)VR$1 + 88ll);
				(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (VR_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (VR_DCLASS$1 << 3ll)), VA$1, VR$1, *(uint64*)((uint8*)SYMB_DTYPETB$ + 400ll) );
				VR_DTYPE$1 = 7ll;
			}
			label$576:;
			label$575:;
			if( (VR_DTYPE$1 & 480ll) == 0ll ) goto label$577;
			TMP$138$3 = 22ll;
			goto label$871;
			label$577:;
			TMP$138$3 = VR_DTYPE$1 & 31ll;
			label$871:;
			(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (VR_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (VR_DCLASS$1 << 3ll)), VR$1, (struct $6IRVREG*)0ull, *(uint64*)(((uint8*)SYMB_DTYPETB$ + (TMP$138$3 * 56ll)) + 8ll) );
			EMITMOV( VR$1, V1$1 );
		}
		label$574:;
		label$573:;
	}
	label$572:;
	label$571:;
	HFREEREG( V1$1, 0ll );
	HFREEREG( V2$1, 0ll );
	HFREEREG( VR$1, 0ll );
	label$523:;
}

static void HFLUSHCOMP( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* V2$1, struct $6IRVREG* VR$1, struct $8FBSYMBOL* LABEL$1 )
{
	label$578:;
	static FBSTRING LNAME$1;
	static int64 V1_TYP$1;
	static int64 V1_DTYPE$1;
	static int64 V1_DCLASS$1;
	static int64 V2_TYP$1;
	static int64 V2_DTYPE$1;
	static int64 V2_DCLASS$1;
	static int64 VR_TYP$1;
	static int64 VR_DTYPE$1;
	static int64 VR_DCLASS$1;
	static struct $6IRVREG* VA$1;
	static int64 DOLOAD$1;
	if( V1$1 == (struct $6IRVREG*)0ull ) goto label$581;
	{
		int64 TMP$139$2;
		V1_TYP$1 = *(int64*)V1$1;
		if( (*(int64*)((uint8*)V1$1 + 8ll) & 480ll) == 0ll ) goto label$582;
		TMP$139$2 = 22ll;
		goto label$872;
		label$582:;
		TMP$139$2 = *(int64*)((uint8*)V1$1 + 8ll) & 31ll;
		label$872:;
		V1_DTYPE$1 = TMP$139$2;
		if( V1_DTYPE$1 != 22ll ) goto label$584;
		{
			V1_DTYPE$1 = 11ll;
		}
		label$584:;
		label$583:;
		V1_DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (V1_DTYPE$1 * 56ll));
	}
	goto label$580;
	label$581:;
	{
		V1_TYP$1 = -1ll;
		V1_DTYPE$1 = 2147483648ll;
		V1_DCLASS$1 = -1ll;
	}
	label$580:;
	if( V2$1 == (struct $6IRVREG*)0ull ) goto label$586;
	{
		int64 TMP$140$2;
		V2_TYP$1 = *(int64*)V2$1;
		if( (*(int64*)((uint8*)V2$1 + 8ll) & 480ll) == 0ll ) goto label$587;
		TMP$140$2 = 22ll;
		goto label$873;
		label$587:;
		TMP$140$2 = *(int64*)((uint8*)V2$1 + 8ll) & 31ll;
		label$873:;
		V2_DTYPE$1 = TMP$140$2;
		if( V2_DTYPE$1 != 22ll ) goto label$589;
		{
			V2_DTYPE$1 = 11ll;
		}
		label$589:;
		label$588:;
		V2_DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (V2_DTYPE$1 * 56ll));
	}
	goto label$585;
	label$586:;
	{
		V2_TYP$1 = -1ll;
		V2_DTYPE$1 = 2147483648ll;
		V2_DCLASS$1 = -1ll;
	}
	label$585:;
	if( VR$1 == (struct $6IRVREG*)0ull ) goto label$591;
	{
		int64 TMP$141$2;
		VR_TYP$1 = *(int64*)VR$1;
		if( (*(int64*)((uint8*)VR$1 + 8ll) & 480ll) == 0ll ) goto label$592;
		TMP$141$2 = 22ll;
		goto label$874;
		label$592:;
		TMP$141$2 = *(int64*)((uint8*)VR$1 + 8ll) & 31ll;
		label$874:;
		VR_DTYPE$1 = TMP$141$2;
		if( VR_DTYPE$1 != 22ll ) goto label$594;
		{
			VR_DTYPE$1 = 11ll;
		}
		label$594:;
		label$593:;
		VR_DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (VR_DTYPE$1 * 56ll));
	}
	goto label$590;
	label$591:;
	{
		VR_TYP$1 = -1ll;
		VR_DTYPE$1 = 2147483648ll;
		VR_DCLASS$1 = -1ll;
	}
	label$590:;
	HLOADIDX( V1$1 );
	HLOADIDX( V2$1 );
	HLOADIDX( VR$1 );
	DOLOAD$1 = 0ll;
	if( VR$1 != (struct $6IRVREG*)0ull ) goto label$596;
	{
		if( V2_DCLASS$1 != 0ll ) goto label$598;
		{
			if( V2_TYP$1 == 0ll ) goto label$600;
			{
				if( V1_DCLASS$1 == 1ll ) goto label$602;
				{
					DOLOAD$1 = -1ll;
				}
				label$602:;
				label$601:;
			}
			label$600:;
			label$599:;
		}
		label$598:;
		label$597:;
	}
	label$596:;
	label$595:;
	if( ((int64)-(V2_TYP$1 == 4ll) | DOLOAD$1) == 0ll ) goto label$604;
	{
		int64 TMP$142$2;
		if( ((int64)-(V2_DTYPE$1 == 12ll) | (int64)-(V2_DTYPE$1 == 13ll)) == 0ll ) goto label$606;
		{
			VA$1 = *(struct $6IRVREG**)((uint8*)V2$1 + 88ll);
			(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V2_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V2_DCLASS$1 << 3ll)), VA$1, V2$1, *(uint64*)((uint8*)SYMB_DTYPETB$ + 400ll) );
			V2_DTYPE$1 = 7ll;
		}
		label$606:;
		label$605:;
		if( (V2_DTYPE$1 & 480ll) == 0ll ) goto label$607;
		TMP$142$2 = 22ll;
		goto label$875;
		label$607:;
		TMP$142$2 = V2_DTYPE$1 & 31ll;
		label$875:;
		(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V2_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V2_DCLASS$1 << 3ll)), V2$1, (struct $6IRVREG*)0ull, *(uint64*)(((uint8*)SYMB_DTYPETB$ + (TMP$142$2 * 56ll)) + 8ll) );
		V2_TYP$1 = 4ll;
	}
	label$604:;
	label$603:;
	DOLOAD$1 = 0ll;
	if( ((int64)-(VR$1 != (struct $6IRVREG*)0ull) & (int64)-(VR$1 == V1$1)) == 0ll ) goto label$609;
	{
		DOLOAD$1 = -1ll;
	}
	goto label$608;
	label$609:;
	if( V1_DCLASS$1 != 1ll ) goto label$610;
	{
		DOLOAD$1 = -1ll;
	}
	goto label$608;
	label$610:;
	if( V1_TYP$1 != 0ll ) goto label$611;
	{
		DOLOAD$1 = -1ll;
	}
	goto label$608;
	label$611:;
	if( V2_TYP$1 == 4ll ) goto label$612;
	{
		if( V2_TYP$1 == 0ll ) goto label$614;
		{
			DOLOAD$1 = -1ll;
		}
		label$614:;
		label$613:;
	}
	label$612:;
	label$608:;
	if( ((int64)-(V1_TYP$1 == 4ll) | DOLOAD$1) == 0ll ) goto label$616;
	{
		int64 TMP$143$2;
		if( ((int64)-(V1_DTYPE$1 == 12ll) | (int64)-(V1_DTYPE$1 == 13ll)) == 0ll ) goto label$618;
		{
			VA$1 = *(struct $6IRVREG**)((uint8*)V1$1 + 88ll);
			(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)), VA$1, V1$1, *(uint64*)((uint8*)SYMB_DTYPETB$ + 400ll) );
			V1_DTYPE$1 = 7ll;
		}
		label$618:;
		label$617:;
		if( (V1_DTYPE$1 & 480ll) == 0ll ) goto label$619;
		TMP$143$2 = 22ll;
		goto label$876;
		label$619:;
		TMP$143$2 = V1_DTYPE$1 & 31ll;
		label$876:;
		(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)), V1$1, (struct $6IRVREG*)0ull, *(uint64*)(((uint8*)SYMB_DTYPETB$ + (TMP$143$2 * 56ll)) + 8ll) );
	}
	label$616:;
	label$615:;
	if( VR$1 == (struct $6IRVREG*)0ull ) goto label$621;
	{
		if( VR$1 == V1$1 ) goto label$623;
		{
			int64 TMP$144$3;
			if( (VR_DTYPE$1 & 480ll) == 0ll ) goto label$624;
			TMP$144$3 = 22ll;
			goto label$877;
			label$624:;
			TMP$144$3 = VR_DTYPE$1 & 31ll;
			label$877:;
			int64 vr$82 = (*(tmp$76*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (VR_DCLASS$1 << 3ll)) + 8ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (VR_DCLASS$1 << 3ll)), VR$1, (struct $6IRVREG*)0ull, *(uint64*)(((uint8*)SYMB_DTYPETB$ + (TMP$144$3 * 56ll)) + 8ll) );
			*(int64*)((uint8*)VR$1 + 24ll) = vr$82;
			*($15IRVREGTYPE_ENUM*)VR$1 = 4ll;
		}
		label$623:;
		label$622:;
	}
	label$621:;
	label$620:;
	{
		uint64 TMP$145$2;
		TMP$145$2 = (uint64)OP$1;
		goto label$626;
		label$627:;
		{
			EMITEQ( VR$1, LABEL$1, V1$1, V2$1 );
		}
		goto label$625;
		label$628:;
		{
			EMITNE( VR$1, LABEL$1, V1$1, V2$1 );
		}
		goto label$625;
		label$629:;
		{
			EMITGT( VR$1, LABEL$1, V1$1, V2$1 );
		}
		goto label$625;
		label$630:;
		{
			EMITLT( VR$1, LABEL$1, V1$1, V2$1 );
		}
		goto label$625;
		label$631:;
		{
			EMITLE( VR$1, LABEL$1, V1$1, V2$1 );
		}
		goto label$625;
		label$632:;
		{
			EMITGE( VR$1, LABEL$1, V1$1, V2$1 );
		}
		goto label$625;
		label$626:;
		static const void* tmp$172[6ll] = {
			&&label$627,
			&&label$629,
			&&label$630,
			&&label$628,
			&&label$632,
			&&label$631,
		};
		if( TMP$145$2 < 45ll ) goto label$625;
		if( TMP$145$2 > 50ll ) goto label$625;
		goto *tmp$172[TMP$145$2 - 45ll];
		label$625:;
	}
	HFREEREG( V1$1, 0ll );
	HFREEREG( V2$1, 0ll );
	if( VR$1 == (struct $6IRVREG*)0ull ) goto label$634;
	{
		HFREEREG( VR$1, 0ll );
	}
	label$634:;
	label$633:;
	label$579:;
}

static void HSPILLREGS( void )
{
	label$635:;
	struct $6IRVREG* VR$1;
	struct $6IRVREG* VAUXPARENT$1;
	int64 REG$1;
	{
		int64 CLASS_$2;
		CLASS_$2 = 0ll;
		label$640:;
		{
			int64 vr$1 = (*(tmp$81*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (CLASS_$2 << 3ll)) + 56ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (CLASS_$2 << 3ll)) );
			REG$1 = vr$1;
			label$641:;
			if( REG$1 == -1ll ) goto label$642;
			{
				int64 vr$6 = (*(tmp$79*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (CLASS_$2 << 3ll)) + 32ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (CLASS_$2 << 3ll)), REG$1 );
				if( vr$6 != 0ll ) goto label$644;
				{
					struct $6IRVREG* vr$12 = (*(tmp$82*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (CLASS_$2 << 3ll)) + 72ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (CLASS_$2 << 3ll)), REG$1, &VAUXPARENT$1 );
					VR$1 = vr$12;
					(*(tmp$43*)((uint8*)&IR$ + 552ll))( VR$1, VAUXPARENT$1 );
				}
				label$644:;
				label$643:;
				int64 vr$16 = (*(tmp$79*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (CLASS_$2 << 3ll)) + 64ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (CLASS_$2 << 3ll)), REG$1 );
				REG$1 = vr$16;
			}
			goto label$641;
			label$642:;
		}
		label$638:;
		CLASS_$2 = CLASS_$2 + 1ll;
		label$637:;
		if( CLASS_$2 <= 1ll ) goto label$640;
		label$639:;
	}
	label$636:;
}

static void HFLUSHSTORE( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* V2$1 )
{
	label$645:;
	static int64 V1_TYP$1;
	static int64 V1_DTYPE$1;
	static int64 V1_DCLASS$1;
	static int64 V2_TYP$1;
	static int64 V2_DTYPE$1;
	static int64 V2_DCLASS$1;
	static struct $6IRVREG* VA$1;
	if( OP$1 != 86ll ) goto label$648;
	{
		HSPILLREGS(  );
		goto label$646;
	}
	label$648:;
	label$647:;
	if( V1$1 == (struct $6IRVREG*)0ull ) goto label$650;
	{
		int64 TMP$146$2;
		V1_TYP$1 = *(int64*)V1$1;
		if( (*(int64*)((uint8*)V1$1 + 8ll) & 480ll) == 0ll ) goto label$651;
		TMP$146$2 = 22ll;
		goto label$878;
		label$651:;
		TMP$146$2 = *(int64*)((uint8*)V1$1 + 8ll) & 31ll;
		label$878:;
		V1_DTYPE$1 = TMP$146$2;
		if( V1_DTYPE$1 != 22ll ) goto label$653;
		{
			V1_DTYPE$1 = 11ll;
		}
		label$653:;
		label$652:;
		V1_DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (V1_DTYPE$1 * 56ll));
	}
	goto label$649;
	label$650:;
	{
		V1_TYP$1 = -1ll;
		V1_DTYPE$1 = 2147483648ll;
		V1_DCLASS$1 = -1ll;
	}
	label$649:;
	if( V2$1 == (struct $6IRVREG*)0ull ) goto label$655;
	{
		int64 TMP$147$2;
		V2_TYP$1 = *(int64*)V2$1;
		if( (*(int64*)((uint8*)V2$1 + 8ll) & 480ll) == 0ll ) goto label$656;
		TMP$147$2 = 22ll;
		goto label$879;
		label$656:;
		TMP$147$2 = *(int64*)((uint8*)V2$1 + 8ll) & 31ll;
		label$879:;
		V2_DTYPE$1 = TMP$147$2;
		if( V2_DTYPE$1 != 22ll ) goto label$658;
		{
			V2_DTYPE$1 = 11ll;
		}
		label$658:;
		label$657:;
		V2_DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (V2_DTYPE$1 * 56ll));
	}
	goto label$654;
	label$655:;
	{
		V2_TYP$1 = -1ll;
		V2_DTYPE$1 = 2147483648ll;
		V2_DCLASS$1 = -1ll;
	}
	label$654:;
	HLOADIDX( V1$1 );
	HLOADIDX( V2$1 );
	if( ((int64)-(V2_TYP$1 == 4ll) | ((int64)-(V2_TYP$1 != 0ll) & (int64)-(V1_DCLASS$1 == 0ll))) == 0ll ) goto label$660;
	{
		int64 TMP$148$2;
		if( ((int64)-(V2_DTYPE$1 == 12ll) | (int64)-(V2_DTYPE$1 == 13ll)) == 0ll ) goto label$662;
		{
			VA$1 = *(struct $6IRVREG**)((uint8*)V2$1 + 88ll);
			(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V2_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V2_DCLASS$1 << 3ll)), VA$1, V2$1, *(uint64*)((uint8*)SYMB_DTYPETB$ + 400ll) );
			V2_DTYPE$1 = 7ll;
		}
		label$662:;
		label$661:;
		if( (V2_DTYPE$1 & 480ll) == 0ll ) goto label$663;
		TMP$148$2 = 22ll;
		goto label$880;
		label$663:;
		TMP$148$2 = V2_DTYPE$1 & 31ll;
		label$880:;
		(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V2_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V2_DCLASS$1 << 3ll)), V2$1, (struct $6IRVREG*)0ull, *(uint64*)(((uint8*)SYMB_DTYPETB$ + (TMP$148$2 * 56ll)) + 8ll) );
	}
	label$660:;
	label$659:;
	EMITSTORE( V1$1, V2$1 );
	HFREEREG( V1$1, 0ll );
	HFREEREG( V2$1, 0ll );
	label$646:;
}

static void HFLUSHLOAD( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* VR$1 )
{
	label$664:;
	static int64 V1_TYP$1;
	static int64 V1_DTYPE$1;
	static int64 V1_DCLASS$1;
	static int64 V1_REG$1;
	static struct $6IRVREG* VA$1;
	if( V1$1 == (struct $6IRVREG*)0ull ) goto label$667;
	{
		int64 TMP$149$2;
		V1_TYP$1 = *(int64*)V1$1;
		if( (*(int64*)((uint8*)V1$1 + 8ll) & 480ll) == 0ll ) goto label$668;
		TMP$149$2 = 22ll;
		goto label$881;
		label$668:;
		TMP$149$2 = *(int64*)((uint8*)V1$1 + 8ll) & 31ll;
		label$881:;
		V1_DTYPE$1 = TMP$149$2;
		if( V1_DTYPE$1 != 22ll ) goto label$670;
		{
			V1_DTYPE$1 = 11ll;
		}
		label$670:;
		label$669:;
		V1_DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (V1_DTYPE$1 * 56ll));
	}
	goto label$666;
	label$667:;
	{
		V1_TYP$1 = -1ll;
		V1_DTYPE$1 = 2147483648ll;
		V1_DCLASS$1 = -1ll;
	}
	label$666:;
	HLOADIDX( V1$1 );
	{
		if( OP$1 != 84ll ) goto label$672;
		label$673:;
		{
			int64 TMP$150$3;
			if( ((int64)-(V1_DTYPE$1 == 12ll) | (int64)-(V1_DTYPE$1 == 13ll)) == 0ll ) goto label$675;
			{
				VA$1 = *(struct $6IRVREG**)((uint8*)V1$1 + 88ll);
				(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)), VA$1, V1$1, *(uint64*)((uint8*)SYMB_DTYPETB$ + 400ll) );
				V1_DTYPE$1 = 7ll;
			}
			label$675:;
			label$674:;
			if( (V1_DTYPE$1 & 480ll) == 0ll ) goto label$676;
			TMP$150$3 = 22ll;
			goto label$882;
			label$676:;
			TMP$150$3 = V1_DTYPE$1 & 31ll;
			label$882:;
			(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)), V1$1, (struct $6IRVREG*)0ull, *(uint64*)(((uint8*)SYMB_DTYPETB$ + (TMP$150$3 * 56ll)) + 8ll) );
		}
		goto label$671;
		label$672:;
		if( OP$1 != 85ll ) goto label$677;
		label$678:;
		{
			if( V1_TYP$1 != 4ll ) goto label$680;
			{
				if( ((int64)-(V1_DTYPE$1 == 12ll) | (int64)-(V1_DTYPE$1 == 13ll)) == 0ll ) goto label$682;
				{
					VA$1 = *(struct $6IRVREG**)((uint8*)V1$1 + 88ll);
					(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)), VA$1, V1$1, *(uint64*)((uint8*)SYMB_DTYPETB$ + 400ll) );
					int64 vr$36 = (*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)), V1$1, (struct $6IRVREG*)0ull, *(uint64*)((uint8*)SYMB_DTYPETB$ + 400ll) );
					V1_REG$1 = vr$36;
				}
				goto label$681;
				label$682:;
				{
					int64 TMP$151$5;
					if( (V1_DTYPE$1 & 480ll) == 0ll ) goto label$683;
					TMP$151$5 = 22ll;
					goto label$883;
					label$683:;
					TMP$151$5 = V1_DTYPE$1 & 31ll;
					label$883:;
					int64 vr$44 = (*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)), V1$1, (struct $6IRVREG*)0ull, *(uint64*)(((uint8*)SYMB_DTYPETB$ + (TMP$151$5 * 56ll)) + 8ll) );
					V1_REG$1 = vr$44;
				}
				label$681:;
			}
			goto label$679;
			label$680:;
			{
				V1_REG$1 = -1ll;
			}
			label$679:;
			static int64 VR_REG$3;
			static int64 VR_REG2$3;
			(*(tmp$92*)((uint8*)&EMIT$ + 392ll))( V1_DTYPE$1, V1_DCLASS$1, &VR_REG$3, &VR_REG2$3 );
			if( VR_REG$3 == V1_REG$1 ) goto label$685;
			{
				if( ((int64)-(V1_DTYPE$1 == 12ll) | (int64)-(V1_DTYPE$1 == 13ll)) == 0ll ) goto label$687;
				{
					VA$1 = *(struct $6IRVREG**)((uint8*)VR$1 + 88ll);
					int64 vr$54 = (*(tmp$77*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)) + 16ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)), VR_REG2$3, VA$1, VR$1 );
					*(int64*)((uint8*)VA$1 + 24ll) = vr$54;
					*($15IRVREGTYPE_ENUM*)VA$1 = 4ll;
				}
				label$687:;
				label$686:;
				int64 vr$60 = (*(tmp$77*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)) + 16ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)), VR_REG$3, VR$1, (struct $6IRVREG*)0ull );
				*(int64*)((uint8*)VR$1 + 24ll) = vr$60;
				*($15IRVREGTYPE_ENUM*)VR$1 = 4ll;
				if( *(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)*(struct $7ASTNODE**)((uint8*)&AST$ + 80ll) + 24ll) + 168ll) == 1ll ) goto label$689;
				{
					*($12IR_REGFAMILY*)((uint8*)VR$1 + 32ll) = 0ll;
				}
				label$689:;
				label$688:;
				EMITLOAD( VR$1, V1$1 );
				HFREEREG( VR$1, 0ll );
			}
			label$685:;
			label$684:;
		}
		label$677:;
		label$671:;
	}
	HFREEREG( V1$1, 0ll );
	label$665:;
}

static void HFLUSHCONVERT( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* V2$1 )
{
	label$690:;
	static int64 V1_TYP$1;
	static int64 V1_DTYPE$1;
	static int64 V1_DCLASS$1;
	static int64 V2_TYP$1;
	static int64 V2_DTYPE$1;
	static int64 V2_DCLASS$1;
	static int64 REUSE$1;
	static struct $6IRVREG* VA$1;
	if( V1$1 == (struct $6IRVREG*)0ull ) goto label$693;
	{
		int64 TMP$152$2;
		V1_TYP$1 = *(int64*)V1$1;
		if( (*(int64*)((uint8*)V1$1 + 8ll) & 480ll) == 0ll ) goto label$694;
		TMP$152$2 = 22ll;
		goto label$884;
		label$694:;
		TMP$152$2 = *(int64*)((uint8*)V1$1 + 8ll) & 31ll;
		label$884:;
		V1_DTYPE$1 = TMP$152$2;
		if( V1_DTYPE$1 != 22ll ) goto label$696;
		{
			V1_DTYPE$1 = 11ll;
		}
		label$696:;
		label$695:;
		V1_DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (V1_DTYPE$1 * 56ll));
	}
	goto label$692;
	label$693:;
	{
		V1_TYP$1 = -1ll;
		V1_DTYPE$1 = 2147483648ll;
		V1_DCLASS$1 = -1ll;
	}
	label$692:;
	if( V2$1 == (struct $6IRVREG*)0ull ) goto label$698;
	{
		int64 TMP$153$2;
		V2_TYP$1 = *(int64*)V2$1;
		if( (*(int64*)((uint8*)V2$1 + 8ll) & 480ll) == 0ll ) goto label$699;
		TMP$153$2 = 22ll;
		goto label$885;
		label$699:;
		TMP$153$2 = *(int64*)((uint8*)V2$1 + 8ll) & 31ll;
		label$885:;
		V2_DTYPE$1 = TMP$153$2;
		if( V2_DTYPE$1 != 22ll ) goto label$701;
		{
			V2_DTYPE$1 = 11ll;
		}
		label$701:;
		label$700:;
		V2_DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (V2_DTYPE$1 * 56ll));
	}
	goto label$697;
	label$698:;
	{
		V2_TYP$1 = -1ll;
		V2_DTYPE$1 = 2147483648ll;
		V2_DCLASS$1 = -1ll;
	}
	label$697:;
	HLOADIDX( V1$1 );
	HLOADIDX( V2$1 );
	REUSE$1 = 0ll;
	if( ((int64)-(V1_DCLASS$1 == V2_DCLASS$1) & (int64)-(V2_TYP$1 == 4ll)) == 0ll ) goto label$703;
	{
		if( V2_DCLASS$1 != 1ll ) goto label$705;
		{
			if( (*(int64*)((uint8*)&IR$ + 568ll) & 1ll) == 0ll ) goto label$707;
			{
				*($12IR_REGFAMILY*)((uint8*)V1$1 + 32ll) = *($12IR_REGFAMILY*)((uint8*)V2$1 + 32ll);
				if( *(int64*)((uint8*)V2$1 + 32ll) != 0ll ) goto label$709;
				{
					goto label$691;
					label$709:;
				}
			}
			goto label$706;
			label$707:;
			{
				*(int64*)((uint8*)V1$1 + 24ll) = *(int64*)((uint8*)V2$1 + 24ll);
				*(int64*)((uint8*)V2$1 + 24ll) = -1ll;
				*($15IRVREGTYPE_ENUM*)V1$1 = 4ll;
				(*(tmp$80*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)) + 40ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)), *(int64*)((uint8*)V1$1 + 24ll), V1$1, (struct $6IRVREG*)0ull );
				goto label$691;
			}
			label$706:;
		}
		label$705:;
		label$704:;
		uint64 vr$37 = (*(tmp$71*)((uint8*)&IR$ + 536ll))( V2$1 );
		if( vr$37 != 2147483647ull ) goto label$711;
		{
			{
				int64 TMP$154$4;
				int64 TMP$155$4;
				if( (V1_DTYPE$1 & 480ll) == 0ll ) goto label$712;
				TMP$154$4 = 22ll;
				goto label$886;
				label$712:;
				TMP$154$4 = V1_DTYPE$1 & 31ll;
				label$886:;
				TMP$155$4 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$154$4 * 56ll)) + 8ll);
				if( TMP$155$4 == 1ll ) goto label$715;
				label$716:;
				if( TMP$155$4 != 8ll ) goto label$714;
				label$715:;
				{
				}
				goto label$713;
				label$714:;
				{
					{
						int64 TMP$156$6;
						int64 TMP$157$6;
						if( (V2_DTYPE$1 & 480ll) == 0ll ) goto label$718;
						TMP$156$6 = 22ll;
						goto label$887;
						label$718:;
						TMP$156$6 = V2_DTYPE$1 & 31ll;
						label$887:;
						TMP$157$6 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$156$6 * 56ll)) + 8ll);
						if( TMP$157$6 == 1ll ) goto label$721;
						label$722:;
						if( TMP$157$6 != 8ll ) goto label$720;
						label$721:;
						{
						}
						goto label$719;
						label$720:;
						{
							REUSE$1 = -1ll;
						}
						label$723:;
						label$719:;
					}
				}
				label$717:;
				label$713:;
			}
		}
		label$711:;
		label$710:;
	}
	label$703:;
	label$702:;
	if( REUSE$1 == 0ll ) goto label$725;
	{
		*(int64*)((uint8*)V1$1 + 24ll) = *(int64*)((uint8*)V2$1 + 24ll);
		*($15IRVREGTYPE_ENUM*)V1$1 = 4ll;
		(*(tmp$80*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)) + 40ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)), *(int64*)((uint8*)V1$1 + 24ll), V1$1, (struct $6IRVREG*)0ull );
	}
	goto label$724;
	label$725:;
	{
		int64 TMP$159$2;
		if( V2_TYP$1 != 4ll ) goto label$727;
		{
			int64 TMP$158$3;
			if( ((int64)-(V2_DTYPE$1 == 12ll) | (int64)-(V2_DTYPE$1 == 13ll)) == 0ll ) goto label$729;
			{
				VA$1 = *(struct $6IRVREG**)((uint8*)V2$1 + 88ll);
				(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V2_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V2_DCLASS$1 << 3ll)), VA$1, V2$1, *(uint64*)((uint8*)SYMB_DTYPETB$ + 400ll) );
				V2_DTYPE$1 = 7ll;
			}
			label$729:;
			label$728:;
			if( (V2_DTYPE$1 & 480ll) == 0ll ) goto label$730;
			TMP$158$3 = 22ll;
			goto label$888;
			label$730:;
			TMP$158$3 = V2_DTYPE$1 & 31ll;
			label$888:;
			(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V2_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V2_DCLASS$1 << 3ll)), V2$1, (struct $6IRVREG*)0ull, *(uint64*)(((uint8*)SYMB_DTYPETB$ + (TMP$158$3 * 56ll)) + 8ll) );
		}
		label$727:;
		label$726:;
		if( ((int64)-(V1_DTYPE$1 == 12ll) | (int64)-(V1_DTYPE$1 == 13ll)) == 0ll ) goto label$732;
		{
			VA$1 = *(struct $6IRVREG**)((uint8*)V1$1 + 88ll);
			int64 vr$81 = (*(tmp$76*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)) + 8ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)), VA$1, V1$1, *(uint64*)((uint8*)SYMB_DTYPETB$ + 400ll) );
			*(int64*)((uint8*)VA$1 + 24ll) = vr$81;
			*($15IRVREGTYPE_ENUM*)VA$1 = 4ll;
			V1_DTYPE$1 = 7ll;
		}
		label$732:;
		label$731:;
		if( (V1_DTYPE$1 & 480ll) == 0ll ) goto label$733;
		TMP$159$2 = 22ll;
		goto label$889;
		label$733:;
		TMP$159$2 = V1_DTYPE$1 & 31ll;
		label$889:;
		int64 vr$91 = (*(tmp$76*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)) + 8ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)), V1$1, (struct $6IRVREG*)0ull, *(uint64*)(((uint8*)SYMB_DTYPETB$ + (TMP$159$2 * 56ll)) + 8ll) );
		*(int64*)((uint8*)V1$1 + 24ll) = vr$91;
		*($15IRVREGTYPE_ENUM*)V1$1 = 4ll;
	}
	label$724:;
	EMITLOAD( V1$1, V2$1 );
	if( REUSE$1 != 0ll ) goto label$735;
	{
		HFREEREG( V2$1, 0ll );
	}
	goto label$734;
	label$735:;
	{
		*(int64*)((uint8*)V2$1 + 24ll) = -1ll;
	}
	label$734:;
	HFREEREG( V1$1, 0ll );
	label$691:;
}

static void HFLUSHADDR( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* VR$1 )
{
	label$736:;
	static int64 V1_TYP$1;
	static int64 V1_DTYPE$1;
	static int64 V1_DCLASS$1;
	static int64 VR_TYP$1;
	static int64 VR_DTYPE$1;
	static int64 VR_DCLASS$1;
	if( V1$1 == (struct $6IRVREG*)0ull ) goto label$739;
	{
		int64 TMP$160$2;
		V1_TYP$1 = *(int64*)V1$1;
		if( (*(int64*)((uint8*)V1$1 + 8ll) & 480ll) == 0ll ) goto label$740;
		TMP$160$2 = 22ll;
		goto label$890;
		label$740:;
		TMP$160$2 = *(int64*)((uint8*)V1$1 + 8ll) & 31ll;
		label$890:;
		V1_DTYPE$1 = TMP$160$2;
		if( V1_DTYPE$1 != 22ll ) goto label$742;
		{
			V1_DTYPE$1 = 11ll;
		}
		label$742:;
		label$741:;
		V1_DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (V1_DTYPE$1 * 56ll));
	}
	goto label$738;
	label$739:;
	{
		V1_TYP$1 = -1ll;
		V1_DTYPE$1 = 2147483648ll;
		V1_DCLASS$1 = -1ll;
	}
	label$738:;
	if( VR$1 == (struct $6IRVREG*)0ull ) goto label$744;
	{
		int64 TMP$161$2;
		VR_TYP$1 = *(int64*)VR$1;
		if( (*(int64*)((uint8*)VR$1 + 8ll) & 480ll) == 0ll ) goto label$745;
		TMP$161$2 = 22ll;
		goto label$891;
		label$745:;
		TMP$161$2 = *(int64*)((uint8*)VR$1 + 8ll) & 31ll;
		label$891:;
		VR_DTYPE$1 = TMP$161$2;
		if( VR_DTYPE$1 != 22ll ) goto label$747;
		{
			VR_DTYPE$1 = 11ll;
		}
		label$747:;
		label$746:;
		VR_DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (VR_DTYPE$1 * 56ll));
	}
	goto label$743;
	label$744:;
	{
		VR_TYP$1 = -1ll;
		VR_DTYPE$1 = 2147483648ll;
		VR_DCLASS$1 = -1ll;
	}
	label$743:;
	HLOADIDX( V1$1 );
	HLOADIDX( VR$1 );
	if( V1_TYP$1 != 4ll ) goto label$749;
	{
		int64 TMP$162$2;
		if( (V1_DTYPE$1 & 480ll) == 0ll ) goto label$750;
		TMP$162$2 = 22ll;
		goto label$892;
		label$750:;
		TMP$162$2 = V1_DTYPE$1 & 31ll;
		label$892:;
		(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (V1_DCLASS$1 << 3ll)), V1$1, (struct $6IRVREG*)0ull, *(uint64*)(((uint8*)SYMB_DTYPETB$ + (TMP$162$2 * 56ll)) + 8ll) );
	}
	label$749:;
	label$748:;
	if( VR_TYP$1 != 4ll ) goto label$752;
	{
		int64 TMP$163$2;
		if( (VR_DTYPE$1 & 480ll) == 0ll ) goto label$753;
		TMP$163$2 = 22ll;
		goto label$893;
		label$753:;
		TMP$163$2 = VR_DTYPE$1 & 31ll;
		label$893:;
		(*(tmp$76*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (VR_DCLASS$1 << 3ll)))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (VR_DCLASS$1 << 3ll)), VR$1, (struct $6IRVREG*)0ull, *(uint64*)(((uint8*)SYMB_DTYPETB$ + (TMP$163$2 * 56ll)) + 8ll) );
	}
	label$752:;
	label$751:;
	{
		if( OP$1 != 22ll ) goto label$755;
		label$756:;
		{
			EMITADDROF( VR$1, V1$1 );
		}
		goto label$754;
		label$755:;
		if( OP$1 != 76ll ) goto label$757;
		label$758:;
		{
			EMITDEREF( VR$1, V1$1 );
		}
		label$757:;
		label$754:;
	}
	HFREEREG( V1$1, 0ll );
	HFREEREG( VR$1, 0ll );
	label$737:;
}

static void HFLUSHMEM( int64 OP$1, struct $6IRVREG* V1$1, struct $6IRVREG* V2$1, int64 BYTES$1, void* EXTRA$1 )
{
	label$759:;
	HLOADIDX( V1$1 );
	HLOADIDX( V2$1 );
	{
		uint64 TMP$164$2;
		TMP$164$2 = (uint64)OP$1;
		goto label$762;
		label$763:;
		{
			EMITMEMMOVE( V1$1, V2$1, BYTES$1 );
		}
		goto label$761;
		label$764:;
		{
			EMITMEMSWAP( V1$1, V2$1, BYTES$1 );
		}
		goto label$761;
		label$765:;
		{
			EMITMEMCLEAR( V1$1, V2$1 );
		}
		goto label$761;
		label$766:;
		{
			EMITSTKCLEAR( BYTES$1, (int64)EXTRA$1 );
		}
		goto label$761;
		label$762:;
		static const void* tmp$173[4ll] = {
			&&label$763,
			&&label$764,
			&&label$765,
			&&label$766,
		};
		if( TMP$164$2 < 104ll ) goto label$761;
		if( TMP$164$2 > 107ll ) goto label$761;
		goto *tmp$173[TMP$164$2 - 104ll];
		label$761:;
	}
	HFREEREG( V1$1, 0ll );
	HFREEREG( V2$1, 0ll );
	label$760:;
}

static void HFLUSHDBG( int64 OP$1, struct $8FBSYMBOL* PROC$1, int64 EX$1 )
{
	label$767:;
	{
		uint64 TMP$165$2;
		TMP$165$2 = (uint64)OP$1;
		goto label$770;
		label$771:;
		{
			EMITDBGLINEBEGIN( PROC$1, EX$1 );
		}
		goto label$769;
		label$772:;
		{
			EMITDBGLINEEND( PROC$1, EX$1 );
		}
		goto label$769;
		label$773:;
		{
			EMITDBGSCOPEBEGIN( (struct $8FBSYMBOL*)EX$1 );
		}
		goto label$769;
		label$774:;
		{
			EMITDBGSCOPEEND( (struct $8FBSYMBOL*)EX$1 );
		}
		goto label$769;
		label$770:;
		static const void* tmp$174[4ll] = {
			&&label$771,
			&&label$772,
			&&label$773,
			&&label$774,
		};
		if( TMP$165$2 < 108ll ) goto label$769;
		if( TMP$165$2 > 111ll ) goto label$769;
		goto *tmp$174[TMP$165$2 - 108ll];
		label$769:;
	}
	label$768:;
}

static void HFLUSHLIT( int64 OP$1, uint8* TEXT$1 )
{
	label$775:;
	{
		if( OP$1 != 112ll ) goto label$778;
		label$779:;
		{
			EMITCOMMENT( TEXT$1 );
		}
		goto label$777;
		label$778:;
		if( OP$1 != 113ll ) goto label$780;
		label$781:;
		{
			EMITASM( TEXT$1 );
		}
		label$780:;
		label$777:;
	}
	if( TEXT$1 == (uint8*)0ull ) goto label$783;
	{
		free( (void*)TEXT$1 );
	}
	label$783:;
	label$782:;
	label$776:;
}

static void HFREEIDX( struct $6IRVREG* VREG$1, int64 FORCE$1 )
{
	label$784:;
	struct $6IRVREG* VIDX$1;
	__builtin_memset( &VIDX$1, 0, 8ll );
	if( VREG$1 != (struct $6IRVREG*)0ull ) goto label$787;
	{
		goto label$785;
	}
	label$787:;
	label$786:;
	VIDX$1 = *(struct $6IRVREG**)((uint8*)VREG$1 + 80ll);
	if( VIDX$1 == (struct $6IRVREG*)0ull ) goto label$789;
	{
		if( *(int64*)((uint8*)VIDX$1 + 24ll) == -1ll ) goto label$791;
		{
			HFREEREG( VIDX$1, FORCE$1 );
			*(struct $6IRVREG**)((uint8*)VREG$1 + 80ll) = (struct $6IRVREG*)0ull;
		}
		label$791:;
		label$790:;
	}
	label$789:;
	label$788:;
	label$785:;
}

static void HFREEREG( struct $6IRVREG* VREG$1, int64 FORCE$1 )
{
	label$792:;
	int64 DCLASS$1;
	__builtin_memset( &DCLASS$1, 0, 8ll );
	int64 DIST$1;
	__builtin_memset( &DIST$1, 0, 8ll );
	struct $6IRVREG* VAUX$1;
	__builtin_memset( &VAUX$1, 0, 8ll );
	if( VREG$1 != (struct $6IRVREG*)0ull ) goto label$795;
	{
		goto label$793;
	}
	label$795:;
	label$794:;
	HFREEIDX( VREG$1, FORCE$1 );
	if( *(int64*)VREG$1 == 4ll ) goto label$797;
	{
		goto label$793;
	}
	label$797:;
	label$796:;
	if( *(int64*)((uint8*)VREG$1 + 24ll) != -1ll ) goto label$799;
	{
		goto label$793;
	}
	label$799:;
	label$798:;
	DIST$1 = 2147483647ll;
	if( FORCE$1 != 0ll ) goto label$801;
	{
		uint64 vr$9 = (*(tmp$71*)((uint8*)&IR$ + 536ll))( VREG$1 );
		DIST$1 = (int64)vr$9;
	}
	label$801:;
	label$800:;
	if( DIST$1 != 2147483647ll ) goto label$803;
	{
		int64 TMP$166$2;
		if( *(struct $6IRVREG**)((uint8*)VREG$1 + 88ll) == (struct $6IRVREG*)0ull ) goto label$805;
		{
			VAUX$1 = *(struct $6IRVREG**)((uint8*)VREG$1 + 88ll);
			if( *(int64*)((uint8*)VAUX$1 + 24ll) == -1ll ) goto label$807;
			{
				HFREEREG( VAUX$1, -1ll );
			}
			label$807:;
			label$806:;
		}
		label$805:;
		label$804:;
		if( (*(int64*)((uint8*)VREG$1 + 8ll) & 480ll) == 0ll ) goto label$808;
		TMP$166$2 = 22ll;
		goto label$894;
		label$808:;
		TMP$166$2 = *(int64*)((uint8*)VREG$1 + 8ll) & 31ll;
		label$894:;
		DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$166$2 * 56ll));
		(*(tmp$78*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (DCLASS$1 << 3ll)) + 24ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (DCLASS$1 << 3ll)), *(int64*)((uint8*)VREG$1 + 24ll) );
		*(int64*)((uint8*)VREG$1 + 24ll) = -1ll;
	}
	label$803:;
	label$802:;
	label$793:;
}

static uint64 _GETDISTANCE( struct $6IRVREG* VREG$1 )
{
	uint64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$809:;
	struct $6IRVREG* V$1;
	__builtin_memset( &V$1, 0, 8ll );
	struct $5IRTAC* T$1;
	__builtin_memset( &T$1, 0, 8ll );
	int64 DIST$1;
	__builtin_memset( &DIST$1, 0, 8ll );
	if( VREG$1 != (struct $6IRVREG*)0ull ) goto label$812;
	{
		fb$result$1 = 2147483647ull;
		goto label$810;
	}
	label$812:;
	label$811:;
	void* vr$5 = FLISTGETNEXT( *(void**)((uint8*)&CTX$ + 120ll) );
	T$1 = (struct $5IRTAC*)vr$5;
	if( T$1 != (struct $5IRTAC*)0ull ) goto label$814;
	{
		fb$result$1 = 2147483647ull;
		goto label$810;
	}
	label$814:;
	label$813:;
	DIST$1 = *(int64*)*(struct $5IRTAC**)((uint8*)VREG$1 + 112ll) - *(int64*)T$1;
	if( DIST$1 >= 0ll ) goto label$816;
	{
		fb$result$1 = 2147483647ull;
	}
	goto label$815;
	label$816:;
	{
		fb$result$1 = (uint64)DIST$1;
	}
	label$815:;
	label$810:;
	return fb$result$1;
}

static void _LOADVR( int64 REG$1, struct $6IRVREG* VREG$1, struct $6IRVREG* VAUXPARENT$1 )
{
	label$817:;
	struct $6IRVREG RVREG$1;
	__builtin_memset( &RVREG$1, 0, 120ll );
	if( *(int64*)VREG$1 == 4ll ) goto label$820;
	{
		if( VAUXPARENT$1 != (struct $6IRVREG*)0ull ) goto label$822;
		{
			*($15IRVREGTYPE_ENUM*)&RVREG$1 = 4ll;
			*($11FB_DATATYPE*)((uint8*)&RVREG$1 + 8ll) = *($11FB_DATATYPE*)((uint8*)VREG$1 + 8ll);
			*(int64*)((uint8*)&RVREG$1 + 24ll) = REG$1;
			*(struct $6IRVREG**)((uint8*)&RVREG$1 + 88ll) = *(struct $6IRVREG**)((uint8*)VREG$1 + 88ll);
			*($12IR_REGFAMILY*)((uint8*)&RVREG$1 + 32ll) = *($12IR_REGFAMILY*)((uint8*)VREG$1 + 32ll);
			EMITLOAD( &RVREG$1, VREG$1 );
		}
		label$822:;
		label$821:;
		HFREEIDX( VREG$1, -1ll );
		*($15IRVREGTYPE_ENUM*)VREG$1 = 4ll;
	}
	label$820:;
	label$819:;
	*(int64*)((uint8*)VREG$1 + 24ll) = REG$1;
	if( ((int64)-(*(int64*)((uint8*)&ENV$ + 232ll) >= 1ll) & (int64)-(VAUXPARENT$1 != (struct $6IRVREG*)0ull)) == 0ll ) goto label$824;
	{
		*($12IR_REGFAMILY*)((uint8*)VREG$1 + 32ll) = 1ll;
	}
	label$824:;
	label$823:;
	label$818:;
}

static void _STOREVR( struct $6IRVREG* VREG$1, struct $6IRVREG* VAUXPARENT$1 )
{
	int64 TMP$167$1;
	label$825:;
	struct $6IRVREG ORIGVREG$1;
	struct $6IRVREG ORIGVAUX$1;
	int64 VR_DCLASS$1;
	if( VAUXPARENT$1 == (struct $6IRVREG*)0ull ) goto label$828;
	{
		VREG$1 = VAUXPARENT$1;
	}
	label$828:;
	label$827:;
	__builtin_memcpy( &ORIGVREG$1, VREG$1, 120 );
	if( ((int64)-(*(int64*)((uint8*)VREG$1 + 8ll) == 12ll) | (int64)-(*(int64*)((uint8*)VREG$1 + 8ll) == 13ll)) == 0ll ) goto label$830;
	{
		__builtin_memcpy( &ORIGVAUX$1, *(struct $6IRVREG**)((uint8*)VREG$1 + 88ll), 120 );
		*(struct $6IRVREG**)((uint8*)&ORIGVREG$1 + 88ll) = &ORIGVAUX$1;
	}
	label$830:;
	label$829:;
	uint64 vr$11 = (*(tmp$71*)((uint8*)&IR$ + 536ll))( VREG$1 );
	if( vr$11 == 2147483647ull ) goto label$832;
	{
		*($15IRVREGTYPE_ENUM*)VREG$1 = 1ll;
		struct $8FBSYMBOL* vr$15 = SYMBADDANDALLOCATETEMPVAR( *(int64*)((uint8*)VREG$1 + 8ll) );
		*(struct $8FBSYMBOL**)((uint8*)VREG$1 + 56ll) = vr$15;
		*(int64*)((uint8*)VREG$1 + 64ll) = *(int64*)((uint8*)*(struct $8FBSYMBOL**)((uint8*)VREG$1 + 56ll) + 80ll);
		*(int64*)((uint8*)VREG$1 + 24ll) = -1ll;
		if( ((int64)-(*(int64*)((uint8*)VREG$1 + 8ll) == 12ll) | (int64)-(*(int64*)((uint8*)VREG$1 + 8ll) == 13ll)) == 0ll ) goto label$834;
		{
			*(int64*)((uint8*)*(struct $6IRVREG**)((uint8*)VREG$1 + 88ll) + 24ll) = -1ll;
			*($15IRVREGTYPE_ENUM*)*(struct $6IRVREG**)((uint8*)VREG$1 + 88ll) = 1ll;
			*(int64*)((uint8*)*(struct $6IRVREG**)((uint8*)VREG$1 + 88ll) + 64ll) = *(int64*)((uint8*)VREG$1 + 64ll) + 4ll;
		}
		label$834:;
		label$833:;
		if( *(int64*)((uint8*)&ENV$ + 232ll) < 1ll ) goto label$836;
		{
			*($12IR_REGFAMILY*)((uint8*)VREG$1 + 32ll) = 1ll;
		}
		label$836:;
		label$835:;
		EMITSTORE( VREG$1, &ORIGVREG$1 );
	}
	label$832:;
	label$831:;
	if( ((int64)-(*(int64*)((uint8*)&ORIGVREG$1 + 8ll) == 12ll) | (int64)-(*(int64*)((uint8*)&ORIGVREG$1 + 8ll) == 13ll)) == 0ll ) goto label$838;
	{
		(*(tmp$78*)((uint8*)*(struct $8REGCLASS**)REGTB$ + 24ll))( *(struct $8REGCLASS**)REGTB$, *(int64*)((uint8*)&ORIGVAUX$1 + 24ll) );
	}
	label$838:;
	label$837:;
	if( (*(int64*)((uint8*)&ORIGVREG$1 + 8ll) & 480ll) == 0ll ) goto label$839;
	TMP$167$1 = 22ll;
	goto label$895;
	label$839:;
	TMP$167$1 = *(int64*)((uint8*)&ORIGVREG$1 + 8ll) & 31ll;
	label$895:;
	VR_DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$167$1 * 56ll));
	(*(tmp$78*)((uint8*)*(struct $8REGCLASS**)((uint8*)REGTB$ + (VR_DCLASS$1 << 3ll)) + 24ll))( *(struct $8REGCLASS**)((uint8*)REGTB$ + (VR_DCLASS$1 << 3ll)), *(int64*)((uint8*)&ORIGVREG$1 + 24ll) );
	label$826:;
}

static void _XCHGTOS( int64 REG$1 )
{
	label$840:;
	static struct $6IRVREG RVREG$1;
	*($15IRVREGTYPE_ENUM*)&RVREG$1 = 4ll;
	*($11FB_DATATYPE*)((uint8*)&RVREG$1 + 8ll) = 15ll;
	*(int64*)((uint8*)&RVREG$1 + 24ll) = REG$1;
	EMITXCHGTOS( &RVREG$1 );
	label$841:;
}

__attribute__(( constructor )) static void _GLOBAL__I( void )
{
	label$843:;
	_ZN9IRTAC_CTXC1Ev( &CTX$ );
	label$844:;
}

__attribute__(( destructor )) static void _GLOBAL__D( void )
{
	label$846:;
	_ZN9IRTAC_CTXD1Ev( &CTX$ );
	label$847:;
}

// Total compilation time: 0.04357411270029843 seconds.
