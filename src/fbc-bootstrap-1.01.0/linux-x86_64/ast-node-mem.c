// Compilation of FreeBASIC-1.01.0-source/src/compiler/ast-node-mem.bas started at 16:30:09 on 02-28-2015

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
typedef int64 $14IR_OPTIONVALUE;
typedef int64 (*tmp$38)( $14IR_OPTIONVALUE );
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
typedef void (*tmp$56)( int64, struct $6IRVREG*, struct $6IRVREG*, int64 );
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
static void fb_ctor__astznodezmem( void ) __attribute__(( constructor ));
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void ASTDELNODE( struct $7ASTNODE* );
struct $7ASTNODE* ASTCLONETREE( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWASSIGN( struct $7ASTNODE*, struct $7ASTNODE*, $9AST_OPOPT );
typedef int64 $11AST_CONVOPT;
struct $7ASTNODE* ASTNEWCONV( int64, struct $8FBSYMBOL*, struct $7ASTNODE*, $11AST_CONVOPT, int64* );
struct $7ASTNODE* ASTNEWBOP( int64, struct $7ASTNODE*, struct $7ASTNODE*, struct $8FBSYMBOL*, $9AST_OPOPT );
struct $7ASTNODE* ASTNEWSELFBOP( int64, struct $7ASTNODE*, struct $7ASTNODE*, struct $8FBSYMBOL*, $9AST_OPOPT );
struct $7ASTNODE* ASTNEWCONSTI( int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWVAR( struct $8FBSYMBOL*, int64, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* ASTNEWDEREF( struct $7ASTNODE*, int64, struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* ASTNEWADDROF( struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWLOOP( struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* ASTNEWLINK( struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTNEWLABEL( struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* ASTNEWMEM( int64, struct $7ASTNODE*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTNEWNODE( int64, int64, struct $8FBSYMBOL* );
struct $6IRVREG* ASTLOAD( struct $7ASTNODE* );
int64 ASTHASSIDEFX( struct $7ASTNODE* );
struct $7ASTNODE* _Z15ASTTYPEINIFLUSHP7ASTNODES0_ll( struct $7ASTNODE*, struct $7ASTNODE*, int64, int64 );
struct $7ASTNODE* ASTREMSIDEFX( struct $7ASTNODE** );
struct $7ASTNODE* ASTBUILDVARDEREF( struct $8FBSYMBOL* );
struct $7ASTNODE* ASTBUILDVARINC( struct $8FBSYMBOL*, int64 );
struct $7ASTNODE* _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEl( struct $8FBSYMBOL*, struct $7ASTNODE*, int64 );
struct $7ASTNODE* ASTBUILDCTORCALL( struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* ASTBUILDFORBEGIN( struct $7ASTNODE*, struct $8FBSYMBOL*, struct $8FBSYMBOL*, int64, int64 );
struct $7ASTNODE* ASTBUILDFOREND( struct $7ASTNODE*, struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $7ASTNODE* );
struct $7ASTNODE* _Z19ASTBUILDVARDTORCALLP7ASTNODE( struct $7ASTNODE* );
struct $7ASTNODE* ASTPATCHCTORCALL( struct $7ASTNODE*, struct $7ASTNODE* );
struct $7ASTNODE* ASTCALLCTORTOCALL( struct $7ASTNODE* );
typedef int64 $10FB_SYMBOPT;
struct $8FBSYMBOL* SYMBADDLABEL( uint8*, $10FB_SYMBOPT );
struct $8FBSYMBOL* SYMBADDTEMPVAR( int64, struct $8FBSYMBOL* );
int64 SYMBCALCLEN( int64, struct $8FBSYMBOL* );
int64 TYPEHASCTOR( int64, struct $8FBSYMBOL* );
int64 TYPEHASDEFCTOR( int64, struct $8FBSYMBOL* );
int64 TYPENEEDSDTORCALL( int64, struct $8FBSYMBOL* );
struct $7ASTNODE* RTLMEMNEWOP( int64, struct $7ASTNODE*, int64, struct $8FBSYMBOL* );
struct $7ASTNODE* RTLMEMDELETEOP( int64, struct $7ASTNODE*, int64, struct $8FBSYMBOL* );
static struct $7ASTNODE* HCALLCTORLIST( struct $8FBSYMBOL*, struct $7ASTNODE*, int64, struct $8FBSYMBOL* );
static struct $7ASTNODE* HELEMENTS( struct $7ASTNODE*, int64* );
static struct $7ASTNODE* HCALLDTORLIST( struct $7ASTNODE* );
typedef void (*tmp$35)( void );
typedef int64 (*tmp$36)( void );
typedef void (*tmp$37)( double );
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

struct $7ASTNODE* ASTNEWMEM( int64 OP$1, struct $7ASTNODE* L$1, struct $7ASTNODE* R$1, int64 BYTES$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$10:;
	struct $7ASTNODE* N$1;
	uint64 BLKMAXLEN$1;
	int64 vr$1 = (*(tmp$38*)((uint8*)&IR$ + 40ll))( 1ll );
	BLKMAXLEN$1 = (uint64)vr$1;
	uint64 LGT$1;
	LGT$1 = (uint64)BYTES$1;
	if( OP$1 != 106ll ) goto label$13;
	{
		if( *(int64*)R$1 != 16ll ) goto label$15;
		{
			LGT$1 = *(uint64*)((uint8*)R$1 + 40ll);
		}
		goto label$14;
		label$15:;
		{
			LGT$1 = BLKMAXLEN$1 + 1ull;
		}
		label$14:;
	}
	label$13:;
	label$12:;
	if( LGT$1 <= BLKMAXLEN$1 ) goto label$17;
	{
		struct $7ASTNODE* vr$8 = ASTNEWADDROF( L$1 );
		L$1 = vr$8;
		if( OP$1 != 104ll ) goto label$19;
		{
			struct $7ASTNODE* vr$10 = ASTNEWADDROF( R$1 );
			R$1 = vr$10;
		}
		label$19:;
		label$18:;
	}
	label$17:;
	label$16:;
	struct $7ASTNODE* vr$11 = ASTNEWNODE( 12ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	N$1 = vr$11;
	*(int64*)((uint8*)N$1 + 48ll) = OP$1;
	*(struct $7ASTNODE**)((uint8*)N$1 + 112ll) = L$1;
	*(struct $7ASTNODE**)((uint8*)N$1 + 120ll) = R$1;
	*(int64*)((uint8*)N$1 + 40ll) = BYTES$1;
	fb$result$1 = N$1;
	label$11:;
	return fb$result$1;
}

struct $7ASTNODE* ASTBUILDNEWOP( $6AST_OP OP$1, struct $8FBSYMBOL* TMP$1, struct $7ASTNODE* ELEMENTSEXPR$1, struct $7ASTNODE* INITEXPR$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1, int64 DO_CLEAR$1, struct $7ASTNODE* NEWEXPR$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$26:;
	struct $7ASTNODE* LENEXPR$1;
	struct $7ASTNODE* TREE$1;
	int64 SAVE_ELMTS$1;
	int64 INIT$1;
	int64 ELEMENTSTREECOUNT$1;
	INIT$1 = 5ll;
	TREE$1 = (struct $7ASTNODE*)0ull;
	SAVE_ELMTS$1 = 0ll;
	ELEMENTSTREECOUNT$1 = 0ll;
	if( INITEXPR$1 == (struct $7ASTNODE*)0ull ) goto label$29;
	{
		int64 vr$2 = TYPEHASCTOR( DTYPE$1, SUBTYPE$1 );
		if( vr$2 != 0ll ) goto label$31;
		{
			INIT$1 = 0ll;
		}
		goto label$30;
		label$31:;
		if( *(int64*)INITEXPR$1 != 10ll ) goto label$32;
		{
			INIT$1 = 1ll;
		}
		label$32:;
		label$30:;
	}
	goto label$28;
	label$29:;
	{
		int64 vr$6 = TYPEHASDEFCTOR( DTYPE$1, SUBTYPE$1 );
		if( vr$6 == 0ll ) goto label$34;
		{
			if( OP$1 != 79ll ) goto label$36;
			{
				INIT$1 = 3ll;
				ELEMENTSTREECOUNT$1 = ELEMENTSTREECOUNT$1 + 1ll;
			}
			goto label$35;
			label$36:;
			{
				INIT$1 = 2ll;
			}
			label$35:;
		}
		goto label$33;
		label$34:;
		if( DO_CLEAR$1 == 0ll ) goto label$37;
		{
			INIT$1 = 4ll;
			ELEMENTSTREECOUNT$1 = ELEMENTSTREECOUNT$1 + 1ll;
		}
		label$37:;
		label$33:;
	}
	label$28:;
	if( OP$1 != 79ll ) goto label$39;
	{
		if( NEWEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$41;
		{
			int64 vr$14 = TYPENEEDSDTORCALL( DTYPE$1, SUBTYPE$1 );
			SAVE_ELMTS$1 = vr$14;
		}
		label$41:;
		label$40:;
	}
	label$39:;
	label$38:;
	if( NEWEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$43;
	{
		ELEMENTSTREECOUNT$1 = ELEMENTSTREECOUNT$1 + 1ll;
	}
	label$43:;
	label$42:;
	if( SAVE_ELMTS$1 == 0ll ) goto label$45;
	{
		ELEMENTSTREECOUNT$1 = ELEMENTSTREECOUNT$1 + 1ll;
	}
	label$45:;
	label$44:;
	if( ELEMENTSTREECOUNT$1 <= 1ll ) goto label$47;
	{
		int64 vr$20 = ASTHASSIDEFX( ELEMENTSEXPR$1 );
		if( vr$20 == 0ll ) goto label$49;
		{
			struct $7ASTNODE* vr$23 = ASTREMSIDEFX( &ELEMENTSEXPR$1 );
			TREE$1 = vr$23;
		}
		label$49:;
		label$48:;
	}
	label$47:;
	label$46:;
	if( NEWEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$51;
	{
		int64 vr$25 = SYMBCALCLEN( DTYPE$1, SUBTYPE$1 );
		struct $7ASTNODE* vr$26 = ASTNEWCONSTI( vr$25, 8ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$28 = HELEMENTS( ELEMENTSEXPR$1, &ELEMENTSTREECOUNT$1 );
		struct $7ASTNODE* vr$29 = ASTNEWBOP( 30ll, vr$28, vr$26, (struct $8FBSYMBOL*)0ull, 1ll );
		LENEXPR$1 = vr$29;
		if( SAVE_ELMTS$1 == 0ll ) goto label$53;
		{
			struct $7ASTNODE* vr$31 = ASTNEWCONSTI( *(int64*)((uint8*)SYMB_DTYPETB$ + 400ll), 8ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$32 = ASTNEWBOP( 28ll, LENEXPR$1, vr$31, (struct $8FBSYMBOL*)0ull, 1ll );
			LENEXPR$1 = vr$32;
		}
		label$53:;
		label$52:;
		struct $7ASTNODE* vr$33 = RTLMEMNEWOP( OP$1, LENEXPR$1, DTYPE$1, SUBTYPE$1 );
		NEWEXPR$1 = vr$33;
		if( NEWEXPR$1 != (struct $7ASTNODE*)0ull ) goto label$55;
		{
			fb$result$1 = (struct $7ASTNODE*)0ull;
			goto label$27;
		}
		label$55:;
		label$54:;
	}
	label$51:;
	label$50:;
	struct $7ASTNODE* vr$35 = _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEl( TMP$1, NEWEXPR$1, 64ll );
	struct $7ASTNODE* vr$36 = ASTNEWLINK( TREE$1, vr$35, -1ll );
	TREE$1 = vr$36;
	if( SAVE_ELMTS$1 == 0ll ) goto label$57;
	{
		struct $7ASTNODE* vr$39 = HELEMENTS( ELEMENTSEXPR$1, &ELEMENTSTREECOUNT$1 );
		struct $7ASTNODE* vr$40 = ASTNEWVAR( TMP$1, 0ll, 39ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$41 = ASTNEWDEREF( vr$40, 2147483648ll, (struct $8FBSYMBOL*)0ull, 0ll );
		struct $7ASTNODE* vr$42 = ASTNEWASSIGN( vr$41, vr$39, 64ll );
		struct $7ASTNODE* vr$43 = ASTNEWLINK( TREE$1, vr$42, -1ll );
		TREE$1 = vr$43;
		struct $7ASTNODE* vr$44 = ASTNEWCONSTI( *(int64*)((uint8*)SYMB_DTYPETB$ + 400ll), 7ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$45 = ASTNEWVAR( TMP$1, 0ll, 32ll, (struct $8FBSYMBOL*)0ull );
		struct $7ASTNODE* vr$46 = ASTNEWSELFBOP( 1ll, vr$45, vr$44, (struct $8FBSYMBOL*)0ull, 1ll );
		struct $7ASTNODE* vr$47 = ASTNEWLINK( TREE$1, vr$46, -1ll );
		TREE$1 = vr$47;
	}
	label$57:;
	label$56:;
	{
		uint64 TMP$78$2;
		TMP$78$2 = (uint64)INIT$1;
		goto label$59;
		label$60:;
		{
			struct $7ASTNODE* vr$48 = ASTNEWVAR( TMP$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$49 = ASTNEWDEREF( vr$48, 2147483648ll, (struct $8FBSYMBOL*)0ull, 0ll );
			struct $7ASTNODE* vr$50 = _Z15ASTTYPEINIFLUSHP7ASTNODES0_ll( vr$49, INITEXPR$1, 0ll, 64ll );
			INITEXPR$1 = vr$50;
		}
		goto label$58;
		label$61:;
		{
			struct $7ASTNODE* vr$51 = ASTNEWVAR( TMP$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$52 = ASTNEWDEREF( vr$51, 2147483648ll, (struct $8FBSYMBOL*)0ull, 0ll );
			struct $7ASTNODE* vr$53 = ASTCALLCTORTOCALL( INITEXPR$1 );
			struct $7ASTNODE* vr$54 = ASTPATCHCTORCALL( vr$53, vr$52 );
			INITEXPR$1 = vr$54;
		}
		goto label$58;
		label$62:;
		{
			struct $7ASTNODE* vr$55 = ASTNEWVAR( TMP$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$56 = ASTNEWDEREF( vr$55, 2147483648ll, (struct $8FBSYMBOL*)0ull, 0ll );
			struct $7ASTNODE* vr$57 = ASTBUILDCTORCALL( SUBTYPE$1, vr$56 );
			INITEXPR$1 = vr$57;
		}
		goto label$58;
		label$63:;
		{
			struct $7ASTNODE* vr$59 = HELEMENTS( ELEMENTSEXPR$1, &ELEMENTSTREECOUNT$1 );
			struct $7ASTNODE* vr$60 = HCALLCTORLIST( TMP$1, vr$59, DTYPE$1, SUBTYPE$1 );
			INITEXPR$1 = vr$60;
		}
		goto label$58;
		label$64:;
		{
			int64 vr$61 = SYMBCALCLEN( DTYPE$1, SUBTYPE$1 );
			struct $7ASTNODE* vr$62 = ASTNEWCONSTI( vr$61, 8ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$64 = HELEMENTS( ELEMENTSEXPR$1, &ELEMENTSTREECOUNT$1 );
			struct $7ASTNODE* vr$65 = ASTNEWBOP( 30ll, vr$64, vr$62, (struct $8FBSYMBOL*)0ull, 1ll );
			LENEXPR$1 = vr$65;
			struct $7ASTNODE* vr$66 = ASTNEWCONV( 8ll, (struct $8FBSYMBOL*)0ull, LENEXPR$1, 0ll, (int64*)0ull );
			struct $7ASTNODE* vr$67 = ASTNEWVAR( TMP$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$68 = ASTNEWDEREF( vr$67, 2147483648ll, (struct $8FBSYMBOL*)0ull, 0ll );
			struct $7ASTNODE* vr$69 = ASTNEWMEM( 106ll, vr$68, vr$66, 0ll );
			INITEXPR$1 = vr$69;
		}
		goto label$58;
		label$65:;
		{
			INITEXPR$1 = (struct $7ASTNODE*)0ull;
		}
		goto label$58;
		label$59:;
		static const void* tmp$79[5ll] = {
			&&label$60,
			&&label$61,
			&&label$62,
			&&label$63,
			&&label$64,
		};
		if( TMP$78$2 > 4ll ) goto label$65;
		goto *tmp$79[TMP$78$2 - 0ll];
		label$58:;
	}
	struct $7ASTNODE* vr$70 = ASTNEWLINK( TREE$1, INITEXPR$1, -1ll );
	fb$result$1 = vr$70;
	label$27:;
	return fb$result$1;
}

struct $7ASTNODE* ASTBUILDDELETEOP( $6AST_OP OP$1, struct $7ASTNODE* PTREXPR$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$68:;
	struct $7ASTNODE* TREE$1;
	struct $8FBSYMBOL* LABEL$1;
	struct $8FBSYMBOL* SUBTYPE$1;
	int64 DTYPE$1;
	TREE$1 = (struct $7ASTNODE*)0ull;
	DTYPE$1 = *(int64*)((uint8*)PTREXPR$1 + 8ll);
	SUBTYPE$1 = *(struct $8FBSYMBOL**)((uint8*)PTREXPR$1 + 16ll);
	DTYPE$1 = ((DTYPE$1 & 31ll) | ((DTYPE$1 & 480ll) + -32ll)) | (((DTYPE$1 & 261632ll) >> 1ll) & 261632ll);
	int64 vr$11 = ASTHASSIDEFX( PTREXPR$1 );
	if( vr$11 == 0ll ) goto label$71;
	{
		struct $7ASTNODE* vr$14 = ASTREMSIDEFX( &PTREXPR$1 );
		TREE$1 = vr$14;
	}
	label$71:;
	label$70:;
	struct $8FBSYMBOL* vr$15 = SYMBADDLABEL( (uint8*)0ull, 4ll );
	LABEL$1 = vr$15;
	struct $7ASTNODE* vr$16 = ASTNEWCONSTI( 0ll, 7ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$17 = ASTCLONETREE( PTREXPR$1 );
	struct $7ASTNODE* vr$18 = ASTNEWBOP( 45ll, vr$17, vr$16, LABEL$1, 0ll );
	struct $7ASTNODE* vr$19 = ASTNEWLINK( TREE$1, vr$18, -1ll );
	TREE$1 = vr$19;
	int64 vr$20 = TYPENEEDSDTORCALL( DTYPE$1, SUBTYPE$1 );
	if( vr$20 == 0ll ) goto label$73;
	{
		if( OP$1 != 81ll ) goto label$75;
		{
			struct $7ASTNODE* vr$23 = ASTCLONETREE( PTREXPR$1 );
			struct $7ASTNODE* vr$24 = HCALLDTORLIST( vr$23 );
			struct $7ASTNODE* vr$25 = ASTNEWLINK( TREE$1, vr$24, -1ll );
			TREE$1 = vr$25;
			struct $7ASTNODE* vr$26 = ASTNEWCONSTI( *(int64*)((uint8*)SYMB_DTYPETB$ + 400ll), 7ll, (struct $8FBSYMBOL*)0ull );
			struct $7ASTNODE* vr$27 = ASTNEWBOP( 29ll, PTREXPR$1, vr$26, (struct $8FBSYMBOL*)0ull, 1ll );
			PTREXPR$1 = vr$27;
		}
		goto label$74;
		label$75:;
		{
			struct $7ASTNODE* vr$28 = ASTCLONETREE( PTREXPR$1 );
			struct $7ASTNODE* vr$29 = ASTNEWDEREF( vr$28, 2147483648ll, (struct $8FBSYMBOL*)0ull, 0ll );
			struct $7ASTNODE* vr$30 = _Z19ASTBUILDVARDTORCALLP7ASTNODE( vr$29 );
			struct $7ASTNODE* vr$31 = ASTNEWLINK( TREE$1, vr$30, -1ll );
			TREE$1 = vr$31;
		}
		label$74:;
	}
	label$73:;
	label$72:;
	struct $7ASTNODE* vr$32 = RTLMEMDELETEOP( OP$1, PTREXPR$1, DTYPE$1, SUBTYPE$1 );
	struct $7ASTNODE* vr$33 = ASTNEWLINK( TREE$1, vr$32, -1ll );
	TREE$1 = vr$33;
	struct $7ASTNODE* vr$34 = ASTNEWLABEL( LABEL$1, -1ll );
	struct $7ASTNODE* vr$35 = ASTNEWLINK( TREE$1, vr$34, -1ll );
	TREE$1 = vr$35;
	fb$result$1 = TREE$1;
	label$69:;
	return fb$result$1;
}

struct $6IRVREG* ASTLOADMEM( struct $7ASTNODE* N$1 )
{
	struct $6IRVREG* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$76:;
	struct $7ASTNODE* L$1;
	struct $7ASTNODE* R$1;
	struct $6IRVREG* V1$1;
	struct $6IRVREG* V2$1;
	L$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 112ll);
	R$1 = *(struct $7ASTNODE**)((uint8*)N$1 + 120ll);
	if( L$1 != (struct $7ASTNODE*)0ull ) goto label$79;
	{
		fb$result$1 = (struct $6IRVREG*)0ull;
		goto label$77;
	}
	label$79:;
	label$78:;
	struct $6IRVREG* vr$4 = ASTLOAD( L$1 );
	V1$1 = vr$4;
	ASTDELNODE( L$1 );
	if( R$1 == (struct $7ASTNODE*)0ull ) goto label$81;
	{
		struct $6IRVREG* vr$6 = ASTLOAD( R$1 );
		V2$1 = vr$6;
		ASTDELNODE( R$1 );
	}
	goto label$80;
	label$81:;
	{
		V2$1 = (struct $6IRVREG*)0ull;
	}
	label$80:;
	if( *(int64*)((uint8*)&AST$ + 272ll) == 0ll ) goto label$83;
	{
		(*(tmp$56*)((uint8*)&IR$ + 328ll))( *(int64*)((uint8*)N$1 + 48ll), V1$1, V2$1, *(int64*)((uint8*)N$1 + 40ll) );
	}
	label$83:;
	label$82:;
	fb$result$1 = (struct $6IRVREG*)0ull;
	label$77:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__astznodezmem( void )
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

static struct $7ASTNODE* HCALLCTORLIST( struct $8FBSYMBOL* TMP$1, struct $7ASTNODE* ELEMENTSEXPR$1, int64 DTYPE$1, struct $8FBSYMBOL* SUBTYPE$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$20:;
	struct $8FBSYMBOL* CNT$1;
	struct $8FBSYMBOL* LABEL$1;
	struct $8FBSYMBOL* ITER$1;
	struct $7ASTNODE* TREE$1;
	struct $8FBSYMBOL* vr$1 = SYMBADDTEMPVAR( 7ll, (struct $8FBSYMBOL*)0ull );
	CNT$1 = vr$1;
	struct $8FBSYMBOL* vr$2 = SYMBADDLABEL( (uint8*)0ull, 4ll );
	LABEL$1 = vr$2;
	struct $8FBSYMBOL* vr$10 = SYMBADDTEMPVAR( ((DTYPE$1 & 31ll) | ((DTYPE$1 & 480ll) + 32ll)) | ((DTYPE$1 & 261632ll) << 1ll), SUBTYPE$1 );
	ITER$1 = vr$10;
	struct $7ASTNODE* vr$11 = ASTNEWVAR( TMP$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$12 = _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEl( ITER$1, vr$11, 64ll );
	TREE$1 = vr$12;
	struct $7ASTNODE* vr$13 = ASTBUILDFORBEGIN( TREE$1, CNT$1, LABEL$1, 0ll, 0ll );
	TREE$1 = vr$13;
	struct $7ASTNODE* vr$14 = ASTBUILDVARDEREF( ITER$1 );
	struct $7ASTNODE* vr$15 = ASTBUILDCTORCALL( SUBTYPE$1, vr$14 );
	struct $7ASTNODE* vr$16 = ASTNEWLINK( TREE$1, vr$15, -1ll );
	TREE$1 = vr$16;
	struct $7ASTNODE* vr$17 = ASTBUILDVARINC( ITER$1, 1ll );
	struct $7ASTNODE* vr$18 = ASTNEWLINK( TREE$1, vr$17, -1ll );
	TREE$1 = vr$18;
	struct $7ASTNODE* vr$19 = ASTBUILDFOREND( TREE$1, CNT$1, LABEL$1, ELEMENTSEXPR$1 );
	TREE$1 = vr$19;
	struct $7ASTNODE* vr$20 = ASTNEWLOOP( LABEL$1, TREE$1 );
	fb$result$1 = vr$20;
	label$21:;
	return fb$result$1;
}

static struct $7ASTNODE* HELEMENTS( struct $7ASTNODE* ELEMENTSEXPR$1, int64* ELEMENTSTREECOUNT$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$22:;
	if( *ELEMENTSTREECOUNT$1 <= 1ll ) goto label$25;
	{
		struct $7ASTNODE* vr$3 = ASTCLONETREE( ELEMENTSEXPR$1 );
		fb$result$1 = vr$3;
	}
	goto label$24;
	label$25:;
	{
		fb$result$1 = ELEMENTSEXPR$1;
	}
	label$24:;
	*ELEMENTSTREECOUNT$1 = *ELEMENTSTREECOUNT$1 + -1ll;
	label$23:;
	return fb$result$1;
}

static struct $7ASTNODE* HCALLDTORLIST( struct $7ASTNODE* PTREXPR$1 )
{
	struct $7ASTNODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$66:;
	struct $8FBSYMBOL* CNT$1;
	struct $8FBSYMBOL* LABEL$1;
	struct $8FBSYMBOL* ITER$1;
	struct $8FBSYMBOL* ELMTS$1;
	struct $7ASTNODE* TREE$1;
	struct $7ASTNODE* EXPR$1;
	struct $8FBSYMBOL* vr$1 = SYMBADDTEMPVAR( 7ll, (struct $8FBSYMBOL*)0ull );
	CNT$1 = vr$1;
	struct $8FBSYMBOL* vr$2 = SYMBADDLABEL( (uint8*)0ull, 4ll );
	LABEL$1 = vr$2;
	struct $8FBSYMBOL* vr$5 = SYMBADDTEMPVAR( *(int64*)((uint8*)PTREXPR$1 + 8ll), *(struct $8FBSYMBOL**)((uint8*)PTREXPR$1 + 16ll) );
	ITER$1 = vr$5;
	struct $8FBSYMBOL* vr$6 = SYMBADDTEMPVAR( 7ll, (struct $8FBSYMBOL*)0ull );
	ELMTS$1 = vr$6;
	struct $7ASTNODE* vr$8 = ASTNEWCONSTI( -(*(int64*)((uint8*)SYMB_DTYPETB$ + 400ll)), 7ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$9 = ASTCLONETREE( PTREXPR$1 );
	struct $7ASTNODE* vr$10 = ASTNEWBOP( 28ll, vr$9, vr$8, (struct $8FBSYMBOL*)0ull, 1ll );
	struct $7ASTNODE* vr$11 = ASTNEWCONV( 39ll, (struct $8FBSYMBOL*)0ull, vr$10, 8ll, (int64*)0ull );
	struct $7ASTNODE* vr$12 = ASTNEWDEREF( vr$11, 2147483648ll, (struct $8FBSYMBOL*)0ull, 0ll );
	struct $7ASTNODE* vr$13 = _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEl( ELMTS$1, vr$12, 64ll );
	TREE$1 = vr$13;
	struct $7ASTNODE* vr$14 = ASTNEWVAR( ELMTS$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$15 = ASTNEWBOP( 28ll, PTREXPR$1, vr$14, (struct $8FBSYMBOL*)0ull, 7ll );
	struct $7ASTNODE* vr$16 = _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEl( ITER$1, vr$15, 64ll );
	struct $7ASTNODE* vr$17 = ASTNEWLINK( TREE$1, vr$16, -1ll );
	TREE$1 = vr$17;
	struct $7ASTNODE* vr$18 = ASTBUILDFORBEGIN( TREE$1, CNT$1, LABEL$1, 0ll, -1ll );
	TREE$1 = vr$18;
	struct $7ASTNODE* vr$19 = ASTBUILDVARINC( ITER$1, -1ll );
	struct $7ASTNODE* vr$20 = ASTNEWLINK( TREE$1, vr$19, -1ll );
	TREE$1 = vr$20;
	struct $7ASTNODE* vr$21 = ASTBUILDVARDEREF( ITER$1 );
	struct $7ASTNODE* vr$22 = _Z19ASTBUILDVARDTORCALLP7ASTNODE( vr$21 );
	struct $7ASTNODE* vr$23 = ASTNEWLINK( TREE$1, vr$22, -1ll );
	TREE$1 = vr$23;
	struct $7ASTNODE* vr$24 = ASTNEWVAR( ELMTS$1, 0ll, 2147483648ll, (struct $8FBSYMBOL*)0ull );
	struct $7ASTNODE* vr$25 = ASTBUILDFOREND( TREE$1, CNT$1, LABEL$1, vr$24 );
	TREE$1 = vr$25;
	fb$result$1 = TREE$1;
	label$67:;
	return fb$result$1;
}

// Total compilation time: 0.04077304969541728 seconds.
