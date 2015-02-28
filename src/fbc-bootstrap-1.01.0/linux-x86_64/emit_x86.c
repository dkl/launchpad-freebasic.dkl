// Compilation of FreeBASIC-1.01.0-source/src/compiler/emit_x86.bas started at 16:30:10 on 02-28-2015

typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
typedef int64 $19EMIT_NODECLASS_ENUM;
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
typedef int64 (*tmp$81)( struct $8REGCLASS* );
typedef uint8* (*tmp$96)( int64 );
typedef int64 (*tmp$36)( void );
typedef void (*tmp$35)( void );
typedef int64 $14IR_OPTIONVALUE;
typedef int64 (*tmp$38)( $14IR_OPTIONVALUE );
typedef void (*tmp$37)( double );
typedef int64 (*tmp$92)( uint8* );
typedef int64 (*tmp$39)( int64, int64 );
typedef void (*tmp$93)( int64, int64, int64*, int64* );
typedef uint8* (*tmp$42)( void );
typedef void (*tmp$40)( struct $8FBSYMBOL* );
typedef void (*tmp$41)( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef void (*tmp$94)( struct $8FBSYMBOL*, int64, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef void (*tmp$95)( int64, int64 );
typedef uint8* (*tmp$97)( int64, int64 );
struct $9EMIT_VTBL {
	tmp$36 INIT;
	tmp$35 END;
	tmp$38 GETOPTIONVALUE;
	tmp$36 OPEN;
	tmp$37 CLOSE;
	tmp$92 ISKEYWORD;
	tmp$39 ISREGPRESERVED;
	tmp$39 GETFREEPRESERVEDREG;
	tmp$93 GETRESULTREG;
	tmp$42 PROCGETFRAMEREGNAME;
	tmp$40 PROCBEGIN;
	tmp$40 PROCEND;
	tmp$41 PROCHEADER;
	tmp$94 PROCFOOTER;
	tmp$41 PROCALLOCARG;
	tmp$41 PROCALLOCLOCAL;
	tmp$40 PROCALLOCSTATICVARS;
	tmp$40 SCOPEBEGIN;
	tmp$40 SCOPEEND;
	tmp$95 SETSECTION;
	tmp$96 GETTYPESTRING;
	tmp$97 GETSECTIONSTRING;
};
__FB_STATIC_ASSERT( sizeof( struct $9EMIT_VTBL ) == 176 );
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
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
struct $20FB_GLOBCTORLIST_ITEM;
struct $20FB_GLOBCTORLIST_ITEM {
	struct $8FBSYMBOL* SYM;
	struct $20FB_GLOBCTORLIST_ITEM* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $20FB_GLOBCTORLIST_ITEM ) == 16 );
typedef int64 $10IR_SECTION;
struct $12EMITDATATYPE {
	int64 RNAMETB;
	uint8 MNAME[12];
};
__FB_STATIC_ASSERT( sizeof( struct $12EMITDATATYPE ) == 24 );
typedef int64 $6IR_OPT;
int32 fb_FileOpen( FBSTRING*, uint32, uint32, uint32, int32, int32 );
int32 fb_FileClose( int32 );
int32 fb_FilePutStrLarge( int32, int64, void*, int64 );
int32 fb_FileFree( void );
int32 fb_FileKill( FBSTRING* );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
int32 fb_StrCompare( void*, int64, void*, int64 );
FBSTRING* fb_StrConcatAssign( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAllocTempDescZ( uint8* );
FBSTRING* fb_LongintToStr( int64 );
FBSTRING* fb_ULongintToStr( uint64 );
FBSTRING* fb_DoubleToStr( double );
int64 fb_StrLen( void*, int64 );
FBSTRING* fb_HEX_l( uint64 );
FBSTRING* fb_RIGHT( FBSTRING*, int64 );
FBSTRING* fb_Time( void );
static void fb_ctor__emit_x86( void ) __attribute__(( constructor ));
void HASHINIT( struct $5THASH*, int64, int64 );
void HASHEND( struct $5THASH* );
void* HASHLOOKUP( struct $5THASH*, uint8* );
struct $8HASHITEM* HASHADD( struct $5THASH*, uint8*, void*, uint64 );
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
typedef int64 $12FB_ERRMSGOPT;
void ERRREPORTEX( int64, uint8*, int64, $12FB_ERRMSGOPT, uint8* );
int64 FBGETOPTION( int64 );
uint8* SYMBUNIQUELABEL( void );
uint8* SYMBMAKEPROFILELABELNAME( void );
uint8* SYMBGETMANGLEDNAME( struct $8FBSYMBOL* );
void SYMBFOREACHGLOBAL( int64, tmp$40 );
int64 HFILEEXISTS( uint8* );
FBSTRING* HFLOATTOHEX( double, int64 );
uint8* HESCAPE( uint8* );
uint8* HESCAPEW( uint32* );
struct $8REGCLASS* REGNEWCLASS( int64, int64, struct $7FBARRAYI12REG_SIZEMASKE*, int64 );
int64 REGDELCLASS( struct $8REGCLASS* );
void EMITVARINIOFS( uint8*, int64 );
void EMITWRITESTR( uint8*, int64 );
void EMITRESET( void );
void EMITFLUSH( void );
void EDBGINIT( void );
void EDBGEMITHEADER( uint8* );
void EDBGLINEBEGIN( struct $8FBSYMBOL*, int64, int64 );
void EDBGLINEEND( struct $8FBSYMBOL*, int64, int64 );
void EDBGEMITLINEFLUSH( struct $8FBSYMBOL*, int64, struct $8FBSYMBOL* );
void EDBGSCOPEBEGIN( struct $8FBSYMBOL* );
void EDBGSCOPEEND( struct $8FBSYMBOL* );
void EDBGEMITSCOPEINI( struct $8FBSYMBOL* );
void EDBGEMITSCOPEEND( struct $8FBSYMBOL* );
void EDBGPROCBEGIN( struct $8FBSYMBOL* );
void EDBGPROCEND( struct $8FBSYMBOL* );
void EDBGPROCEMITBEGIN( struct $8FBSYMBOL* );
void EDBGEMITPROCHEADER( struct $8FBSYMBOL* );
void EDBGEMITPROCFOOTER( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
void EDBGEMITFOOTER( void );
void EDBGEMITGLOBALVAR( struct $8FBSYMBOL*, int64 );
void EDBGINCLUDE( uint8* );
void HPREPOPERAND( struct $6IRVREG*, FBSTRING*, $11FB_DATATYPE, int64, int64, int64 );
void HPREPOPERAND64( struct $6IRVREG*, FBSTRING*, FBSTRING* );
void HPUSH( uint8* );
void HPOP( uint8* );
int64 HFINDREGNOTINVREG( struct $6IRVREG*, int64 );
int64 HFINDFREEREG( int64 );
int64 HISREGFREE( int64, int64 );
int64 HISREGINVREG( struct $6IRVREG*, int64 );
uint8* HGETREGNAME( int64, int64 );
void OUTP( uint8* );
void HLABEL( uint8* );
void HBRANCH( uint8*, uint8* );
void HMOV( uint8*, uint8* );
int64 _INIT_OPFNTB_SSE( void** );
void IRHLFLUSHSTATICINITIALIZER( struct $8FBSYMBOL* );
static void HDECLVARIABLE( struct $8FBSYMBOL* );
static uint8* _GETSECTIONSTRING( int64, int64 );
static void _SETSECTION( int64, int64 );
static uint8* _GETTYPESTRING( int64 );
static uint8* HGETIDXNAME( struct $6IRVREG* );
static void OUTEX( uint8*, int64 );
static void HXCHG( uint8*, uint8* );
static void HCOMMENT( uint8* );
static void HPUBLIC( uint8*, int64 );
static void HALIGN( int64 );
static void HINITREGTB( void );
static void HENDREGTB( void );
static void HINITKEYWORDSTB( void );
static void HENDKEYWORDSTB( void );
static void HEMITVARBSS( struct $8FBSYMBOL* );
static void HWRITEHEADER( void );
static void HEMITVARCONST( struct $8FBSYMBOL* );
static void HWRITECTOR( struct $20FB_GLOBCTORLIST_ITEM*, int64 );
static void HEMITEXPORT( struct $8FBSYMBOL* );
static void HCLEARLOCALS( int64, int64 );
static void HCREATEFRAME( struct $8FBSYMBOL* );
static void HDESTROYFRAME( struct $8FBSYMBOL*, int64 );
static void _EMITLIT( uint8* );
static void _EMITJMPTB( struct $8FBSYMBOL*, uint64*, struct $8FBSYMBOL**, int64, struct $8FBSYMBOL*, uint64, uint64 );
static void _EMITCALL( struct $6IRVREG*, struct $8FBSYMBOL*, int64 );
static void _EMITCALLPTR( struct $6IRVREG*, struct $8FBSYMBOL*, int64 );
static void _EMITBRANCH( struct $6IRVREG*, struct $8FBSYMBOL*, int64 );
static void _EMITJUMP( struct $6IRVREG*, struct $8FBSYMBOL*, int64 );
static void _EMITJUMPPTR( struct $6IRVREG*, struct $8FBSYMBOL*, int64 );
static void _EMITRET( struct $6IRVREG* );
static void _EMITPUBLIC( struct $8FBSYMBOL* );
static void _EMITLABEL( struct $8FBSYMBOL* );
static void _EMITNOP( void );
static void HULONG2DBL( struct $6IRVREG* );
static void _EMITSTORL2L( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSTORI2L( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSTORF2L( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSTORI2I( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSTORL2I( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSTORF2I( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSTORL2F( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSTORI2F( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSTORF2F( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITLOADL2L( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITLOADI2L( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITLOADF2L( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITLOADI2I( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITLOADL2I( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITLOADF2I( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITLOADL2F( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITLOADI2F( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITLOADF2F( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITMOVL( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITMOVI( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITMOVF( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITADDL( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITADDI( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITADDF( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSUBL( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSUBI( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSUBF( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITMULL( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITMULI( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITMULF( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITDIVF( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITDIVI( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITMODI( struct $6IRVREG*, struct $6IRVREG* );
static void HSHIFTL( int64, struct $6IRVREG*, struct $6IRVREG* );
static void HSHIFTI( int64, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSHLL( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSHLI( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSHRL( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITSHRI( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITANDL( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITANDI( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITORL( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITORI( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITXORL( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITXORI( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITEQVL( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITEQVI( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITIMPL( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITIMPI( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITATN2( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITPOW( struct $6IRVREG*, struct $6IRVREG* );
static void HCMPL( struct $6IRVREG*, struct $8FBSYMBOL*, uint8*, uint8*, uint8*, struct $6IRVREG*, struct $6IRVREG*, int64 );
static void HCMPI( struct $6IRVREG*, struct $8FBSYMBOL*, uint8*, struct $6IRVREG*, struct $6IRVREG* );
static void HCMPF( struct $6IRVREG*, struct $8FBSYMBOL*, uint8*, uint8*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCGTL( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCGTI( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCGTF( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCLTL( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCLTI( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCLTF( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCEQL( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCEQI( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCEQF( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCNEL( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCNEI( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCNEF( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCLEL( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCLEI( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCLEF( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCGEL( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCGEI( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITCGEF( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static void _EMITNEGL( struct $6IRVREG* );
static void _EMITNEGI( struct $6IRVREG* );
static void _EMITNEGF( struct $6IRVREG* );
static void _EMITNOTL( struct $6IRVREG* );
static void _EMITNOTI( struct $6IRVREG* );
static void _EMITABSL( struct $6IRVREG* );
static void _EMITABSI( struct $6IRVREG* );
static void _EMITABSF( struct $6IRVREG* );
static void _EMITSGNL( struct $6IRVREG* );
static void _EMITSGNI( struct $6IRVREG* );
static void _EMITSGNF( struct $6IRVREG* );
static void _EMITSIN( struct $6IRVREG* );
static void _EMITASIN( struct $6IRVREG* );
static void _EMITCOS( struct $6IRVREG* );
static void _EMITACOS( struct $6IRVREG* );
static void _EMITTAN( struct $6IRVREG* );
static void _EMITATAN( struct $6IRVREG* );
static void _EMITSQRT( struct $6IRVREG* );
static void _EMITLOG( struct $6IRVREG* );
static void _EMITEXP( struct $6IRVREG* );
static void HFPUCHANGERC( FBSTRING*, uint8* );
static void HEMITFLOATFUNC( int64 );
static void _EMITFLOOR( struct $6IRVREG* );
static void _EMITFIX( struct $6IRVREG* );
static void _EMITFRAC( struct $6IRVREG* );
static void _EMITCONVFD2FS( struct $6IRVREG* );
static void _EMITXCHGTOS( struct $6IRVREG* );
static void _EMITSTACKALIGN( struct $6IRVREG*, int64 );
static void _EMITPUSHL( struct $6IRVREG*, int64 );
static void _EMITPUSHI( struct $6IRVREG*, int64 );
static void _EMITPUSHF( struct $6IRVREG*, int64 );
static void _EMITPUSHUDT( struct $6IRVREG*, int64 );
static void _EMITPOPL( struct $6IRVREG*, int64 );
static void _EMITPOPI( struct $6IRVREG*, int64 );
static void _EMITPOPF( struct $6IRVREG*, int64 );
static void _EMITPOPST0( void );
static void _EMITADDROF( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITDEREF( struct $6IRVREG*, struct $6IRVREG* );
static void HMEMMOVEREP( struct $6IRVREG*, struct $6IRVREG*, int64 );
static void HMEMMOVEBLK( struct $6IRVREG*, struct $6IRVREG*, int64 );
static void _EMITMEMMOVE( struct $6IRVREG*, struct $6IRVREG*, int64, int64 );
static void _EMITMEMSWAP( struct $6IRVREG*, struct $6IRVREG*, int64, int64 );
static void HMEMCLEARREPIMM( struct $6IRVREG*, uint32 );
static void HMEMCLEARBLKIMM( struct $6IRVREG*, uint32 );
static void HMEMCLEAR( struct $6IRVREG*, struct $6IRVREG* );
static void _EMITMEMCLEAR( struct $6IRVREG*, struct $6IRVREG*, int64, int64 );
static void _EMITSTKCLEAR( struct $6IRVREG*, struct $6IRVREG*, int64, int64 );
static void _EMITLINEINI( struct $8FBSYMBOL*, int64, int64 );
static void _EMITLINEEND( struct $8FBSYMBOL*, int64, int64 );
static void _EMITSCOPEINI( struct $8FBSYMBOL*, int64, int64 );
static void _EMITSCOPEEND( struct $8FBSYMBOL*, int64, int64 );
static int64 _INIT( void );
static void _END( void );
static int64 _GETOPTIONVALUE( $14IR_OPTIONVALUE );
static int64 _OPEN( void );
static void _CLOSE( double );
static uint8* _PROCGETFRAMEREGNAME( void );
static int64 _ISREGPRESERVED( int64, int64 );
static void _GETRESULTREG( int64, int64, int64*, int64* );
static int64 _GETFREEPRESERVEDREG( int64, int64 );
static int64 _ISKEYWORD( uint8* );
static void _PROCBEGIN( struct $8FBSYMBOL* );
static void _PROCEND( struct $8FBSYMBOL* );
static void _PROCALLOCSTATICVARS( struct $8FBSYMBOL* );
static void _PROCALLOCLOCAL( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static void _PROCALLOCARG( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static void _PROCHEADER( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static void _PROCFOOTER( struct $8FBSYMBOL*, int64, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
static void _SCOPEBEGIN( struct $8FBSYMBOL* );
static void _SCOPEEND( struct $8FBSYMBOL* );
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
struct $10TFLISTITEM;
struct $10TFLISTITEM {
	struct $10TFLISTITEM* NEXT;
};
__FB_STATIC_ASSERT( sizeof( struct $10TFLISTITEM ) == 8 );
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
static struct $8FBARRAY1IPvE tmp$98$;
extern struct $12EMITDATATYPE DTYPETB$[24];
static uint8 RNAMETB$[4][8][8] = { { "dl", "di", "si", "cl", "bl", "al", "bp", "sp" }, { "dx", "di", "si", "cx", "bx", "ax", "bp", "sp" }, { "edx", "edi", "esi", "ecx", "ebx", "eax", "ebp", "esp" }, { "st(0)", "st(1)", "st(2)", "st(3)", "st(4)", "st(5)", "st(6)", "st(7)" } };
static uint8* KEYWORDTB$[600] = { (uint8*)"st", (uint8*)"cs", (uint8*)"ds", (uint8*)"es", (uint8*)"fs", (uint8*)"gs", (uint8*)"ss", (uint8*)"mm0", (uint8*)"mm1", (uint8*)"mm2", (uint8*)"mm3", (uint8*)"mm4", (uint8*)"mm5", (uint8*)"mm6", (uint8*)"mm7", (uint8*)"xmm0", (uint8*)"xmm1", (uint8*)"xmm2", (uint8*)"xmm3", (uint8*)"xmm4", (uint8*)"xmm5", (uint8*)"xmm6", (uint8*)"xmm7", (uint8*)"byte", (uint8*)"word", (uint8*)"dword", (uint8*)"qword", (uint8*)"ptr", (uint8*)"offset", (uint8*)"aaa", (uint8*)"aad", (uint8*)"aam", (uint8*)"aas", (uint8*)"adc", (uint8*)"add", (uint8*)"addpd", (uint8*)"addps", (uint8*)"addsd", (uint8*)"addss", (uint8*)"and", (uint8*)"andpd", (uint8*)"andps", (uint8*)"andnpd", (uint8*)"andnps", (uint8*)"arpl", (uint8*)"bound", (uint8*)"bsf", (uint8*)"bsr", (uint8*)"bswap", (uint8*)"bt", (uint8*)"btc", (uint8*)"btr", (uint8*)"bts", (uint8*)"call", (uint8*)"cbw", (uint8*)"cwde", (uint8*)"cdq", (uint8*)"clc", (uint8*)"cld", (uint8*)"clflush", (uint8*)"cli", (uint8*)"clts", (uint8*)"cmc", (uint8*)"cmova", (uint8*)"cmovae", (uint8*)"cmovb", (uint8*)"cmovbe", (uint8*)"cmovc", (uint8*)"cmove", (uint8*)"cmovg", (uint8*)"cmovge", (uint8*)"cmovl", (uint8*)"cmovle", (uint8*)"cmovna", (uint8*)"cmovnae", (uint8*)"cmovnb", (uint8*)"cmovnbe", (uint8*)"cmovnc", (uint8*)"cmovne", (uint8*)"cmovng", (uint8*)"cmovnge", (uint8*)"cmovnl", (uint8*)"cmovnle", (uint8*)"cmovno", (uint8*)"cmovnp", (uint8*)"cmovns", (uint8*)"cmovnz", (uint8*)"cmovo", (uint8*)"cmovp", (uint8*)"cmovpe", (uint8*)"cmovpe", (uint8*)"cmovpo", (uint8*)"cmovs", (uint8*)"cmovz", (uint8*)"cmp", (uint8*)"cmppd", (uint8*)"cmpps", (uint8*)"cmps", (uint8*)"cmpsb", (uint8*)"cmpsw", (uint8*)"cmpsd", (uint8*)"cmpss", (uint8*)"cmpxchg", (uint8*)"cmpxchg8b", (uint8*)"comisd", (uint8*)"comiss", (uint8*)"cpuid", (uint8*)"cvtdq2pd", (uint8*)"cvtdq2ps", (uint8*)"cvtpd2dq", (uint8*)"cvtpd2pi", (uint8*)"cvtpd2ps", (uint8*)"cvtpi2pd", (uint8*)"cvtpi2ps", (uint8*)"cvtps2dq", (uint8*)"cvtps2pd", (uint8*)"cvtps2pi", (uint8*)"cvtsd2si", (uint8*)"cvtsd2ss", (uint8*)"cvtsi2sd", (uint8*)"cvtsi2ss", (uint8*)"cvtss2sd", (uint8*)"cvtss2si", (uint8*)"cvttpd2pi", (uint8*)"cvttpd2dq", (uint8*)"cvttps2dq", (uint8*)"cvttps2pi", (uint8*)"cvttsd2si", (uint8*)"cvttss2si", (uint8*)"cwd", (uint8*)"daa", (uint8*)"das", (uint8*)"dec", (uint8*)"div", (uint8*)"divpd", (uint8*)"divps", (uint8*)"divss", (uint8*)"emms", (uint8*)"enter", (uint8*)"f2xm1", (uint8*)"fabs", (uint8*)"fadd", (uint8*)"faddp", (uint8*)"fiadd", (uint8*)"fbld", (uint8*)"fbstp", (uint8*)"fchs", (uint8*)"fclex", (uint8*)"fnclex", (uint8*)"fcmovb", (uint8*)"fcmove", (uint8*)"fcmovbe", (uint8*)"fcmovu", (uint8*)"fcmovnb", (uint8*)"fcmovne", (uint8*)"fcmovnbe", (uint8*)"fcmovnu", (uint8*)"fcom", (uint8*)"fcomp", (uint8*)"fcompp", (uint8*)"fcomi", (uint8*)"fcomip", (uint8*)"fucomi", (uint8*)"fucomip", (uint8*)"fcos", (uint8*)"fdecstp", (uint8*)"fdiv", (uint8*)"fdivp", (uint8*)"fidiv", (uint8*)"fdivr", (uint8*)"fdivrp", (uint8*)"fidivr", (uint8*)"ffree", (uint8*)"ficom", (uint8*)"ficomp", (uint8*)"fild", (uint8*)"fincstp", (uint8*)"finit", (uint8*)"fninit", (uint8*)"fist", (uint8*)"fistp", (uint8*)"fld", (uint8*)"fld1", (uint8*)"fldl2t", (uint8*)"fldl2e", (uint8*)"fldpi", (uint8*)"fldlg2", (uint8*)"fldln2", (uint8*)"fldz", (uint8*)"fldcw", (uint8*)"fldenv", (uint8*)"fmul", (uint8*)"fmulp", (uint8*)"fimul", (uint8*)"fnop", (uint8*)"fpatan", (uint8*)"fprem", (uint8*)"fprem1", (uint8*)"fptan", (uint8*)"frndint", (uint8*)"frstor", (uint8*)"fsave", (uint8*)"fnsave", (uint8*)"fscale", (uint8*)"fsin", (uint8*)"fsincos", (uint8*)"fsqrt", (uint8*)"fst", (uint8*)"fstp", (uint8*)"fstcw", (uint8*)"fnstcw", (uint8*)"fstenv", (uint8*)"fnstenv", (uint8*)"fstsw", (uint8*)"fnstsw", (uint8*)"fsub", (uint8*)"fsubp", (uint8*)"fisub", (uint8*)"fsubr", (uint8*)"fsubrp", (uint8*)"fisubr", (uint8*)"ftst", (uint8*)"fucom", (uint8*)"fucomp", (uint8*)"fucompp", (uint8*)"fwait", (uint8*)"fxam", (uint8*)"fxch", (uint8*)"fxrstor", (uint8*)"fxsave", (uint8*)"fxtract", (uint8*)"fyl2x", (uint8*)"fyl2xp1", (uint8*)"hlt", (uint8*)"idiv", (uint8*)"imul", (uint8*)"in", (uint8*)"inc", (uint8*)"ins", (uint8*)"insb", (uint8*)"insw", (uint8*)"insd", (uint8*)"int", (uint8*)"into", (uint8*)"invd", (uint8*)"invlpg", (uint8*)"iret", (uint8*)"iretd", (uint8*)"ja", (uint8*)"jae", (uint8*)"jb", (uint8*)"jbe", (uint8*)"jc", (uint8*)"jcxz", (uint8*)"jecxz", (uint8*)"je", (uint8*)"jg", (uint8*)"jge", (uint8*)"jl", (uint8*)"jle", (uint8*)"jna", (uint8*)"jnae", (uint8*)"jnb", (uint8*)"jnbe", (uint8*)"jnc", (uint8*)"jne", (uint8*)"jng", (uint8*)"jnge", (uint8*)"jnl", (uint8*)"jnle", (uint8*)"jno", (uint8*)"jnp", (uint8*)"jns", (uint8*)"jnz", (uint8*)"jo", (uint8*)"jp", (uint8*)"jpe", (uint8*)"jpo", (uint8*)"js", (uint8*)"jz", (uint8*)"jmp", (uint8*)"lahf", (uint8*)"lar", (uint8*)"ldmxcsr", (uint8*)"lds", (uint8*)"les", (uint8*)"lfs", (uint8*)"lgs", (uint8*)"lss", (uint8*)"lea", (uint8*)"leave", (uint8*)"lfence", (uint8*)"lgdt", (uint8*)"lidt", (uint8*)"lldt", (uint8*)"lmsw", (uint8*)"lock", (uint8*)"lods", (uint8*)"lodsb", (uint8*)"lodsw", (uint8*)"lodsd", (uint8*)"loop", (uint8*)"loope", (uint8*)"loopz", (uint8*)"loopne", (uint8*)"loopnz", (uint8*)"lsl", (uint8*)"ltr", (uint8*)"maskmovdqu", (uint8*)"maskmovq", (uint8*)"maxpd", (uint8*)"maxps", (uint8*)"maxsd", (uint8*)"maxss", (uint8*)"mfence", (uint8*)"minpd", (uint8*)"minps", (uint8*)"minsd", (uint8*)"minss", (uint8*)"mov", (uint8*)"movapd", (uint8*)"movaps", (uint8*)"movd", (uint8*)"movdqa", (uint8*)"movdqu", (uint8*)"movdq2q", (uint8*)"movhlps", (uint8*)"movhpd", (uint8*)"movhps", (uint8*)"movlhps", (uint8*)"movlpd", (uint8*)"movlps", (uint8*)"movmskpd", (uint8*)"movmskps", (uint8*)"movntdq", (uint8*)"movnti", (uint8*)"movntpd", (uint8*)"movntps", (uint8*)"movntq", (uint8*)"movq", (uint8*)"movq2dq", (uint8*)"movs", (uint8*)"movsb", (uint8*)"movsw", (uint8*)"movsd", (uint8*)"movss", (uint8*)"movsx", (uint8*)"movupd", (uint8*)"movups", (uint8*)"movzx", (uint8*)"mul", (uint8*)"mulpd", (uint8*)"mulps", (uint8*)"mulsd", (uint8*)"mulss", (uint8*)"neg", (uint8*)"nop", (uint8*)"not", (uint8*)"or", (uint8*)"orpd", (uint8*)"orps", (uint8*)"out", (uint8*)"outs", (uint8*)"outsb", (uint8*)"outsw", (uint8*)"outsd", (uint8*)"packsswb", (uint8*)"packssdw", (uint8*)"packuswb", (uint8*)"paddb", (uint8*)"paddw", (uint8*)"paddd", (uint8*)"paddq", (uint8*)"paddsb", (uint8*)"paddsw", (uint8*)"paddusb", (uint8*)"paddusw", (uint8*)"pand", (uint8*)"pandn", (uint8*)"pause", (uint8*)"pavgb", (uint8*)"pavgw", (uint8*)"pcmpeqb", (uint8*)"pcmpeqw", (uint8*)"pcmpeqd", (uint8*)"pcmpgtb", (uint8*)"pcmpgtw", (uint8*)"pcmpgtd", (uint8*)"pextrw", (uint8*)"pinsrw", (uint8*)"pmaddwd", (uint8*)"pmaxsw", (uint8*)"pmaxub", (uint8*)"pminsw", (uint8*)"pminub", (uint8*)"pmovmskb", (uint8*)"pmulhuv", (uint8*)"pmulhw", (uint8*)"pmullw", (uint8*)"pmuludq", (uint8*)"pop", (uint8*)"popa", (uint8*)"popad", (uint8*)"popf", (uint8*)"popfd", (uint8*)"por", (uint8*)"prefetcht0", (uint8*)"prefetcht1", (uint8*)"prefetcht2", (uint8*)"prefetchnta", (uint8*)"psadbw", (uint8*)"pshufd", (uint8*)"pshufhw", (uint8*)"pshuflw", (uint8*)"pshufw", (uint8*)"psllw", (uint8*)"pslld", (uint8*)"psllq", (uint8*)"psraw", (uint8*)"psrad", (uint8*)"psrldq", (uint8*)"psrlw", (uint8*)"psrld", (uint8*)"psrlq", (uint8*)"psubb", (uint8*)"psubw", (uint8*)"psubd", (uint8*)"psubq", (uint8*)"psubsb", (uint8*)"psubsw", (uint8*)"psubusb", (uint8*)"psubusw", (uint8*)"punpckhbw", (uint8*)"punpckhwd", (uint8*)"punpckhdq", (uint8*)"punpckhqdq", (uint8*)"punpcklbw", (uint8*)"punpcklwd", (uint8*)"punpckldq", (uint8*)"punpcklqdq", (uint8*)"push", (uint8*)"pusha", (uint8*)"pushad", (uint8*)"pushf", (uint8*)"pushfd", (uint8*)"pxor", (uint8*)"rcl", (uint8*)"rcr", (uint8*)"rol", (uint8*)"ror", (uint8*)"rcpps", (uint8*)"rcpss", (uint8*)"rdmsr", (uint8*)"rdpmc", (uint8*)"rdtsc", (uint8*)"rep", (uint8*)"repe", (uint8*)"repz", (uint8*)"repne", (uint8*)"repnz", (uint8*)"ret", (uint8*)"rsm", (uint8*)"rsqrtps", (uint8*)"rsqrtss", (uint8*)"sahf", (uint8*)"sal", (uint8*)"sar", (uint8*)"shl", (uint8*)"shr", (uint8*)"sbb", (uint8*)"scas", (uint8*)"scasb", (uint8*)"scasw", (uint8*)"scasd", (uint8*)"seta", (uint8*)"setae", (uint8*)"setb", (uint8*)"setbe", (uint8*)"setc", (uint8*)"sete", (uint8*)"setg", (uint8*)"setge", (uint8*)"setl", (uint8*)"setle", (uint8*)"setna", (uint8*)"setnae", (uint8*)"setnb", (uint8*)"setnbe", (uint8*)"setnc", (uint8*)"setne", (uint8*)"setng", (uint8*)"setnge", (uint8*)"setnl", (uint8*)"setnle", (uint8*)"setno", (uint8*)"setnp", (uint8*)"setns", (uint8*)"setnz", (uint8*)"seto", (uint8*)"setp", (uint8*)"setpe", (uint8*)"setpo", (uint8*)"sets", (uint8*)"setz", (uint8*)"sfence", (uint8*)"sgdt", (uint8*)"sidt", (uint8*)"shld", (uint8*)"shrd", (uint8*)"shufpd", (uint8*)"shufps", (uint8*)"sldt", (uint8*)"smsw", (uint8*)"sqrtpd", (uint8*)"sqrtps", (uint8*)"sqrtsd", (uint8*)"sqrtss", (uint8*)"stc", (uint8*)"std", (uint8*)"sti", (uint8*)"stmxcsr", (uint8*)"stos", (uint8*)"stosb", (uint8*)"stosw", (uint8*)"stosd", (uint8*)"str", (uint8*)"sub", (uint8*)"subpd", (uint8*)"subps", (uint8*)"subsd", (uint8*)"subss", (uint8*)"sysenter", (uint8*)"sysexit", (uint8*)"test", (uint8*)"ucomisd", (uint8*)"ucomiss", (uint8*)"ud2", (uint8*)"unpckhpd", (uint8*)"unpckhps", (uint8*)"unpcklpd", (uint8*)"unpcklps", (uint8*)"verr", (uint8*)"verw", (uint8*)"wait", (uint8*)"wbinvd", (uint8*)"wrmsr", (uint8*)"xadd", (uint8*)"xchg", (uint8*)"xlat", (uint8*)"xlatb", (uint8*)"xor", (uint8*)"xorpd", (uint8*)"xorps", (uint8*)"pavgusb", (uint8*)"pfadd", (uint8*)"pfsub", (uint8*)"pfsubr", (uint8*)"pfacc", (uint8*)"pfcmpge", (uint8*)"pfcmpgt", (uint8*)"pfcmpeq", (uint8*)"pfmin", (uint8*)"pfmax", (uint8*)"pi2fw", (uint8*)"pi2fd", (uint8*)"pf2iw", (uint8*)"pf2id", (uint8*)"pfrcp", (uint8*)"pfrsqrt", (uint8*)"pfmul", (uint8*)"pfrcpit1", (uint8*)"pfrsqit1", (uint8*)"pfrcpit2", (uint8*)"pmulhrw", (uint8*)"pswapw", (uint8*)"femms", (uint8*)"prefetch", (uint8*)"prefetchw", (uint8*)"pfnacc", (uint8*)"pfpnacc", (uint8*)"pswapd", (uint8*)"pmulhuw", (uint8*)0ull };
static void* _OPFNTB$[129] = { (void*)&_EMITNOP, (void*)&_EMITLOADI2I, (void*)&_EMITLOADF2I, (void*)&_EMITLOADL2I, (void*)&_EMITLOADI2F, (void*)&_EMITLOADF2F, (void*)&_EMITLOADL2F, (void*)&_EMITLOADI2L, (void*)&_EMITLOADF2L, (void*)&_EMITLOADL2L, (void*)&_EMITSTORI2I, (void*)&_EMITSTORF2I, (void*)&_EMITSTORL2I, (void*)&_EMITSTORI2F, (void*)&_EMITSTORF2F, (void*)&_EMITSTORL2F, (void*)&_EMITSTORI2L, (void*)&_EMITSTORF2L, (void*)&_EMITSTORL2L, (void*)&_EMITMOVI, (void*)&_EMITMOVF, (void*)&_EMITMOVL, (void*)&_EMITADDI, (void*)&_EMITADDF, (void*)&_EMITADDL, (void*)&_EMITSUBI, (void*)&_EMITSUBF, (void*)&_EMITSUBL, (void*)&_EMITMULI, (void*)&_EMITMULF, (void*)&_EMITMULL, (void*)&_EMITDIVI, (void*)&_EMITDIVF, (void*)0ull, (void*)&_EMITMODI, (void*)0ull, (void*)0ull, (void*)&_EMITSHLI, (void*)&_EMITSHLL, (void*)&_EMITSHRI, (void*)&_EMITSHRL, (void*)&_EMITANDI, (void*)&_EMITANDL, (void*)&_EMITORI, (void*)&_EMITORL, (void*)&_EMITXORI, (void*)&_EMITXORL, (void*)&_EMITEQVI, (void*)&_EMITEQVL, (void*)&_EMITIMPI, (void*)&_EMITIMPL, (void*)&_EMITATN2, (void*)&_EMITPOW, (void*)&_EMITADDROF, (void*)&_EMITDEREF, (void*)&_EMITCGTI, (void*)&_EMITCGTF, (void*)&_EMITCGTL, (void*)&_EMITCLTI, (void*)&_EMITCLTF, (void*)&_EMITCLTL, (void*)&_EMITCEQI, (void*)&_EMITCEQF, (void*)&_EMITCEQL, (void*)&_EMITCNEI, (void*)&_EMITCNEF, (void*)&_EMITCNEL, (void*)&_EMITCGEI, (void*)&_EMITCGEF, (void*)&_EMITCGEL, (void*)&_EMITCLEI, (void*)&_EMITCLEF, (void*)&_EMITCLEL, (void*)&_EMITNEGI, (void*)&_EMITNEGF, (void*)&_EMITNEGL, (void*)&_EMITNOTI, (void*)&_EMITNOTL, (void*)0ull, (void*)&_EMITABSI, (void*)&_EMITABSF, (void*)&_EMITABSL, (void*)&_EMITSGNI, (void*)&_EMITSGNF, (void*)&_EMITSGNL, (void*)&_EMITFIX, (void*)&_EMITFRAC, (void*)&_EMITCONVFD2FS, (void*)0ull, (void*)&_EMITSIN, (void*)&_EMITASIN, (void*)&_EMITCOS, (void*)&_EMITACOS, (void*)&_EMITTAN, (void*)&_EMITATAN, (void*)&_EMITSQRT, (void*)0ull, (void*)0ull, (void*)&_EMITLOG, (void*)&_EMITEXP, (void*)&_EMITFLOOR, (void*)&_EMITXCHGTOS, (void*)&_EMITSTACKALIGN, (void*)&_EMITPUSHI, (void*)&_EMITPUSHF, (void*)&_EMITPUSHL, (void*)&_EMITPOPI, (void*)&_EMITPOPF, (void*)&_EMITPOPL, (void*)&_EMITPUSHUDT, (void*)&_EMITPOPST0, (void*)&_EMITCALL, (void*)&_EMITCALLPTR, (void*)&_EMITBRANCH, (void*)&_EMITJUMP, (void*)&_EMITJUMPPTR, (void*)&_EMITRET, (void*)&_EMITLABEL, (void*)&_EMITPUBLIC, (void*)&_EMITLIT, (void*)&_EMITJMPTB, (void*)&_EMITMEMMOVE, (void*)&_EMITMEMSWAP, (void*)&_EMITMEMCLEAR, (void*)&_EMITSTKCLEAR, (void*)&_EMITLINEINI, (void*)&_EMITLINEEND, (void*)&_EMITSCOPEINI, (void*)&_EMITSCOPEEND };
struct $5FBENV ENV$ __attribute__((common));
struct $12EMITDATATYPE DTYPETB$[24] = { { 0ll, "void ptr" }, { 0ll, "byte ptr" }, { 0ll, "byte ptr" }, { 0ll, "byte ptr" }, { 1ll, "word ptr" }, { 1ll, "word ptr" }, { 1ll, "word ptr" }, { 2ll, "dword ptr" }, { 2ll, "dword ptr" }, { 2ll, "dword ptr" }, { 2ll, "dword ptr" }, { 2ll, "dword ptr" }, { 2ll, "qword ptr" }, { 2ll, "qword ptr" }, { 3ll, "dword ptr" }, { 3ll, "qword ptr" }, { 0ll, "" }, { 0ll, "byte ptr" }, { 2ll, "dword ptr" }, { 0ll, "" }, { 2ll, "dword ptr" }, { 0ll, "byte ptr" }, { 2ll, "dword ptr" }, { 3ll, "xmmword ptr" } };

int64 HISREGFREE( int64 DCLASS$1, int64 REG$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$10:;
	if( DCLASS$1 != 0ll ) goto label$13;
	{
		{
			if( REG$1 == 4ll ) goto label$16;
			label$17:;
			if( REG$1 == 2ll ) goto label$16;
			label$18:;
			if( REG$1 != 1ll ) goto label$15;
			label$16:;
			{
				if( (int64)-((*(int64*)((uint8*)&EMIT$ + 264ll) & (1ll << REG$1)) != 0ll) != 0ll ) goto label$20;
				{
					fb$result$1 = 0ll;
					goto label$11;
				}
				label$20:;
				label$19:;
			}
			label$15:;
			label$14:;
		}
	}
	label$13:;
	label$12:;
	*(int64*)((uint8*)((uint8*)&EMIT$ + (DCLASS$1 << 3ll)) + 264ll) = *(int64*)((uint8*)((uint8*)&EMIT$ + (DCLASS$1 << 3ll)) + 264ll) | (1ll << REG$1);
	fb$result$1 = (int64)-((*(int64*)((uint8*)((uint8*)*(struct $9EMIT_NODE**)((uint8*)&EMIT$ + 256ll) + (DCLASS$1 << 3ll)) + 64ll) & (1ll << REG$1)) != 0ll);
	label$11:;
	return fb$result$1;
}

int64 HFINDREGNOTINVREG( struct $6IRVREG* VREG$1, int64 NOSIDI$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$21:;
	int64 R$1;
	int64 REG$1;
	int64 REG2$1;
	int64 REGS$1;
	fb$result$1 = -1ll;
	REG$1 = -1ll;
	{
		$15IRVREGTYPE_ENUM TMP$718$2;
		TMP$718$2 = *($15IRVREGTYPE_ENUM*)VREG$1;
		if( TMP$718$2 != 4ll ) goto label$24;
		label$25:;
		{
			REG$1 = *(int64*)((uint8*)VREG$1 + 24ll);
		}
		goto label$23;
		label$24:;
		if( TMP$718$2 == 2ll ) goto label$27;
		label$28:;
		if( TMP$718$2 != 3ll ) goto label$26;
		label$27:;
		{
			if( *(struct $6IRVREG**)((uint8*)VREG$1 + 80ll) == (struct $6IRVREG*)0ull ) goto label$30;
			{
				if( *(int64*)*(struct $6IRVREG**)((uint8*)VREG$1 + 80ll) != 4ll ) goto label$32;
				{
					REG$1 = *(int64*)((uint8*)*(struct $6IRVREG**)((uint8*)VREG$1 + 80ll) + 24ll);
				}
				label$32:;
				label$31:;
			}
			label$30:;
			label$29:;
		}
		label$26:;
		label$23:;
	}
	REG2$1 = -1ll;
	if( *(struct $6IRVREG**)((uint8*)VREG$1 + 88ll) == (struct $6IRVREG*)0ull ) goto label$34;
	{
		if( *(int64*)*(struct $6IRVREG**)((uint8*)VREG$1 + 88ll) != 4ll ) goto label$36;
		{
			REG2$1 = *(int64*)((uint8*)*(struct $6IRVREG**)((uint8*)VREG$1 + 88ll) + 24ll);
		}
		label$36:;
		label$35:;
	}
	label$34:;
	label$33:;
	int64 vr$20 = (*(tmp$81*)((uint8*)*(struct $8REGCLASS**)((uint8*)&EMIT$ + 16ll) + 48ll))( *(struct $8REGCLASS**)((uint8*)&EMIT$ + 16ll) );
	REGS$1 = vr$20;
	if( REG2$1 != -1ll ) goto label$38;
	{
		if( NOSIDI$1 != 0ll ) goto label$40;
		{
			{
				int64 R$4;
				R$4 = REGS$1 + -1ll;
				goto label$41;
				label$44:;
				{
					if( R$4 == REG$1 ) goto label$46;
					{
						fb$result$1 = R$4;
						int64 vr$26 = HISREGFREE( 0ll, R$4 );
						if( vr$26 == 0ll ) goto label$48;
						{
							goto label$43;
						}
						label$48:;
						label$47:;
					}
					label$46:;
					label$45:;
				}
				label$42:;
				R$4 = R$4 + -1ll;
				label$41:;
				if( R$4 >= 0ll ) goto label$44;
				label$43:;
			}
		}
		goto label$39;
		label$40:;
		{
			{
				int64 R$4;
				R$4 = REGS$1 + -1ll;
				goto label$49;
				label$52:;
				{
					if( R$4 == REG$1 ) goto label$54;
					{
						if( R$4 == 2ll ) goto label$56;
						{
							if( R$4 == 1ll ) goto label$58;
							{
								fb$result$1 = R$4;
								int64 vr$34 = HISREGFREE( 0ll, R$4 );
								if( vr$34 == 0ll ) goto label$60;
								{
									goto label$51;
								}
								label$60:;
								label$59:;
							}
							label$58:;
							label$57:;
						}
						label$56:;
						label$55:;
					}
					label$54:;
					label$53:;
				}
				label$50:;
				R$4 = R$4 + -1ll;
				label$49:;
				if( R$4 >= 0ll ) goto label$52;
				label$51:;
			}
		}
		label$39:;
	}
	goto label$37;
	label$38:;
	{
		if( NOSIDI$1 != 0ll ) goto label$62;
		{
			{
				int64 R$4;
				R$4 = REGS$1 + -1ll;
				goto label$63;
				label$66:;
				{
					if( ((int64)-(R$4 != REG$1) & (int64)-(R$4 != REG2$1)) == 0ll ) goto label$68;
					{
						fb$result$1 = R$4;
						int64 vr$44 = HISREGFREE( 0ll, R$4 );
						if( vr$44 == 0ll ) goto label$70;
						{
							goto label$65;
						}
						label$70:;
						label$69:;
					}
					label$68:;
					label$67:;
				}
				label$64:;
				R$4 = R$4 + -1ll;
				label$63:;
				if( R$4 >= 0ll ) goto label$66;
				label$65:;
			}
		}
		goto label$61;
		label$62:;
		{
			{
				R$1 = REGS$1 + -1ll;
				goto label$71;
				label$74:;
				{
					if( ((int64)-(R$1 != REG$1) & (int64)-(R$1 != REG2$1)) == 0ll ) goto label$76;
					{
						if( R$1 == 2ll ) goto label$78;
						{
							if( R$1 == 1ll ) goto label$80;
							{
								fb$result$1 = R$1;
								int64 vr$55 = HISREGFREE( 0ll, R$1 );
								if( vr$55 == 0ll ) goto label$82;
								{
									goto label$73;
								}
								label$82:;
								label$81:;
							}
							label$80:;
							label$79:;
						}
						label$78:;
						label$77:;
					}
					label$76:;
					label$75:;
				}
				label$72:;
				R$1 = R$1 + -1ll;
				label$71:;
				if( R$1 >= 0ll ) goto label$74;
				label$73:;
			}
		}
		label$61:;
	}
	label$37:;
	label$22:;
	return fb$result$1;
}

int64 HFINDFREEREG( int64 DCLASS$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$83:;
	fb$result$1 = -1ll;
	{
		int64 R$2;
		int64 vr$3 = (*(tmp$81*)((uint8*)*(struct $8REGCLASS**)((uint8*)((uint8*)&EMIT$ + (DCLASS$1 << 3ll)) + 16ll) + 48ll))( *(struct $8REGCLASS**)((uint8*)((uint8*)&EMIT$ + (DCLASS$1 << 3ll)) + 16ll) );
		R$2 = vr$3 + -1ll;
		goto label$85;
		label$88:;
		{
			int64 vr$8 = HISREGFREE( DCLASS$1, R$2 );
			if( vr$8 == 0ll ) goto label$90;
			{
				fb$result$1 = R$2;
				goto label$84;
			}
			label$90:;
			label$89:;
		}
		label$86:;
		R$2 = R$2 + -1ll;
		label$85:;
		if( R$2 >= 0ll ) goto label$88;
		label$87:;
	}
	label$84:;
	return fb$result$1;
}

int64 HISREGINVREG( struct $6IRVREG* VREG$1, int64 REG$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$91:;
	fb$result$1 = 0ll;
	{
		$15IRVREGTYPE_ENUM TMP$719$2;
		TMP$719$2 = *($15IRVREGTYPE_ENUM*)VREG$1;
		if( TMP$719$2 != 4ll ) goto label$94;
		label$95:;
		{
			if( *(int64*)((uint8*)VREG$1 + 24ll) != REG$1 ) goto label$97;
			{
				fb$result$1 = -1ll;
				goto label$92;
			}
			label$97:;
			label$96:;
		}
		goto label$93;
		label$94:;
		if( TMP$719$2 == 2ll ) goto label$99;
		label$100:;
		if( TMP$719$2 != 3ll ) goto label$98;
		label$99:;
		{
			if( *(struct $6IRVREG**)((uint8*)VREG$1 + 80ll) == (struct $6IRVREG*)0ull ) goto label$102;
			{
				if( *(int64*)*(struct $6IRVREG**)((uint8*)VREG$1 + 80ll) != 4ll ) goto label$104;
				{
					if( *(int64*)((uint8*)*(struct $6IRVREG**)((uint8*)VREG$1 + 80ll) + 24ll) != REG$1 ) goto label$106;
					{
						fb$result$1 = -1ll;
						goto label$92;
					}
					label$106:;
					label$105:;
				}
				label$104:;
				label$103:;
			}
			label$102:;
			label$101:;
		}
		label$98:;
		label$93:;
	}
	if( *(struct $6IRVREG**)((uint8*)VREG$1 + 88ll) == (struct $6IRVREG*)0ull ) goto label$108;
	{
		if( *(int64*)*(struct $6IRVREG**)((uint8*)VREG$1 + 88ll) != 4ll ) goto label$110;
		{
			if( *(int64*)((uint8*)*(struct $6IRVREG**)((uint8*)VREG$1 + 88ll) + 24ll) != REG$1 ) goto label$112;
			{
				fb$result$1 = -1ll;
				goto label$92;
			}
			label$112:;
			label$111:;
		}
		label$110:;
		label$109:;
	}
	label$108:;
	label$107:;
	label$92:;
	return fb$result$1;
}

uint8* HGETREGNAME( int64 DTYPE$1, int64 REG$1 )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$113:;
	if( REG$1 != -1ll ) goto label$116;
	{
		fb$result$1 = (uint8*)0ull;
	}
	goto label$115;
	label$116:;
	{
		int64 TMP$720$2;
		int64 TB$2;
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$117;
		TMP$720$2 = 22ll;
		goto label$118;
		label$117:;
		TMP$720$2 = DTYPE$1 & 31ll;
		label$118:;
		TB$2 = *(int64*)((uint8*)DTYPETB$ + (TMP$720$2 * 24ll));
		fb$result$1 = (uint8*)((uint8*)RNAMETB$ + (((TB$2 << 3ll) + REG$1) << 3ll));
	}
	label$115:;
	label$114:;
	return fb$result$1;
}

void HPREPOPERAND( struct $6IRVREG* VREG$1, FBSTRING* OPERAND$1, $11FB_DATATYPE DTYPE$1, int64 OFS$1, int64 ISAUX$1, int64 ADDPREFIX$1 )
{
	label$138:;
	if( VREG$1 != (struct $6IRVREG*)0ull ) goto label$141;
	{
		fb_StrAssign( (void*)OPERAND$1, -1ll, (void*)"", 1ll, 0 );
		goto label$139;
	}
	label$141:;
	label$140:;
	if( DTYPE$1 != 2147483648ll ) goto label$143;
	{
		DTYPE$1 = *($11FB_DATATYPE*)((uint8*)VREG$1 + 8ll);
	}
	label$143:;
	label$142:;
	{
		uint64 TMP$729$2;
		TMP$729$2 = *(uint64*)VREG$1;
		goto label$145;
		label$146:;
		{
			FBSTRING TMP$739$3;
			if( ADDPREFIX$1 == 0ll ) goto label$148;
			{
				FBSTRING TMP$731$4;
				fb_StrAssign( (void*)OPERAND$1, -1ll, (void*)(((uint8*)DTYPETB$ + (DTYPE$1 * 24ll)) + 8ll), 12ll, 0 );
				__builtin_memset( &TMP$731$4, 0, 24ll );
				FBSTRING* vr$9 = fb_StrConcat( &TMP$731$4, (void*)OPERAND$1, -1ll, (void*)" [", 3ll );
				FBSTRING* vr$10 = fb_StrAssign( (void*)OPERAND$1, -1ll, (void*)vr$9, -1ll, 0 );
			}
			goto label$147;
			label$148:;
			{
				fb_StrAssign( (void*)OPERAND$1, -1ll, (void*)"[", 2ll, 0 );
			}
			label$147:;
			static uint8* IDX_OP$3;
			if( *(int64*)VREG$1 != 1ll ) goto label$150;
			{
				uint8* vr$14 = SYMBGETMANGLEDNAME( *(struct $8FBSYMBOL**)((uint8*)VREG$1 + 56ll) );
				IDX_OP$3 = vr$14;
			}
			goto label$149;
			label$150:;
			{
				uint8* vr$15 = HGETIDXNAME( VREG$1 );
				IDX_OP$3 = vr$15;
			}
			label$149:;
			if( IDX_OP$3 == (uint8*)0ull ) goto label$152;
			{
				FBSTRING TMP$733$4;
				__builtin_memset( &TMP$733$4, 0, 24ll );
				FBSTRING* vr$19 = fb_StrConcat( &TMP$733$4, (void*)OPERAND$1, -1ll, (void*)IDX_OP$3, 0ll );
				FBSTRING* vr$20 = fb_StrAssign( (void*)OPERAND$1, -1ll, (void*)vr$19, -1ll, 0 );
			}
			label$152:;
			label$151:;
			OFS$1 = OFS$1 + *(int64*)((uint8*)VREG$1 + 64ll);
			if( ISAUX$1 == 0ll ) goto label$154;
			{
				OFS$1 = OFS$1 + 4ll;
			}
			label$154:;
			label$153:;
			if( OFS$1 <= 0ll ) goto label$156;
			{
				FBSTRING TMP$735$4;
				if( IDX_OP$3 == (uint8*)0ull ) goto label$158;
				{
					FBSTRING TMP$734$5;
					__builtin_memset( &TMP$734$5, 0, 24ll );
					FBSTRING* vr$29 = fb_StrConcat( &TMP$734$5, (void*)OPERAND$1, -1ll, (void*)"+", 2ll );
					FBSTRING* vr$30 = fb_StrAssign( (void*)OPERAND$1, -1ll, (void*)vr$29, -1ll, 0 );
				}
				label$158:;
				label$157:;
				FBSTRING* vr$31 = fb_LongintToStr( OFS$1 );
				__builtin_memset( &TMP$735$4, 0, 24ll );
				FBSTRING* vr$34 = fb_StrConcat( &TMP$735$4, (void*)OPERAND$1, -1ll, (void*)vr$31, -1ll );
				FBSTRING* vr$35 = fb_StrAssign( (void*)OPERAND$1, -1ll, (void*)vr$34, -1ll, 0 );
			}
			goto label$155;
			label$156:;
			if( OFS$1 >= 0ll ) goto label$159;
			{
				FBSTRING TMP$736$4;
				FBSTRING* vr$37 = fb_LongintToStr( OFS$1 );
				__builtin_memset( &TMP$736$4, 0, 24ll );
				FBSTRING* vr$40 = fb_StrConcat( &TMP$736$4, (void*)OPERAND$1, -1ll, (void*)vr$37, -1ll );
				FBSTRING* vr$41 = fb_StrAssign( (void*)OPERAND$1, -1ll, (void*)vr$40, -1ll, 0 );
			}
			goto label$155;
			label$159:;
			{
				if( IDX_OP$3 != (uint8*)0ull ) goto label$161;
				{
					FBSTRING TMP$737$5;
					__builtin_memset( &TMP$737$5, 0, 24ll );
					FBSTRING* vr$45 = fb_StrConcat( &TMP$737$5, (void*)OPERAND$1, -1ll, (void*)"0", 2ll );
					FBSTRING* vr$46 = fb_StrAssign( (void*)OPERAND$1, -1ll, (void*)vr$45, -1ll, 0 );
				}
				label$161:;
				label$160:;
			}
			label$155:;
			__builtin_memset( &TMP$739$3, 0, 24ll );
			FBSTRING* vr$49 = fb_StrConcat( &TMP$739$3, (void*)OPERAND$1, -1ll, (void*)"]", 2ll );
			FBSTRING* vr$50 = fb_StrAssign( (void*)OPERAND$1, -1ll, (void*)vr$49, -1ll, 0 );
		}
		goto label$144;
		label$162:;
		{
			FBSTRING TMP$741$3;
			fb_StrAssign( (void*)OPERAND$1, -1ll, (void*)"offset ", 8ll, 0 );
			uint8* vr$52 = SYMBGETMANGLEDNAME( *(struct $8FBSYMBOL**)((uint8*)VREG$1 + 56ll) );
			__builtin_memset( &TMP$741$3, 0, 24ll );
			FBSTRING* vr$55 = fb_StrConcat( &TMP$741$3, (void*)OPERAND$1, -1ll, (void*)vr$52, 0ll );
			FBSTRING* vr$56 = fb_StrAssign( (void*)OPERAND$1, -1ll, (void*)vr$55, -1ll, 0 );
			if( *(int64*)((uint8*)VREG$1 + 64ll) == 0ll ) goto label$164;
			{
				FBSTRING TMP$743$4;
				FBSTRING TMP$744$4;
				__builtin_memset( &TMP$743$4, 0, 24ll );
				FBSTRING* vr$61 = fb_StrConcat( &TMP$743$4, (void*)OPERAND$1, -1ll, (void*)" + ", 4ll );
				FBSTRING* vr$62 = fb_StrAssign( (void*)OPERAND$1, -1ll, (void*)vr$61, -1ll, 0 );
				FBSTRING* vr$64 = fb_LongintToStr( *(int64*)((uint8*)VREG$1 + 64ll) );
				__builtin_memset( &TMP$744$4, 0, 24ll );
				FBSTRING* vr$67 = fb_StrConcat( &TMP$744$4, (void*)OPERAND$1, -1ll, (void*)vr$64, -1ll );
				FBSTRING* vr$68 = fb_StrAssign( (void*)OPERAND$1, -1ll, (void*)vr$67, -1ll, 0 );
			}
			label$164:;
			label$163:;
		}
		goto label$144;
		label$165:;
		{
			if( ISAUX$1 != 0ll ) goto label$167;
			{
				uint8* vr$71 = HGETREGNAME( DTYPE$1, *(int64*)((uint8*)VREG$1 + 24ll) );
				fb_StrAssign( (void*)OPERAND$1, -1ll, (void*)vr$71, 0ll, 0 );
			}
			goto label$166;
			label$167:;
			{
				uint8* vr$74 = HGETREGNAME( DTYPE$1, *(int64*)((uint8*)*(struct $6IRVREG**)((uint8*)VREG$1 + 88ll) + 24ll) );
				fb_StrAssign( (void*)OPERAND$1, -1ll, (void*)vr$74, 0ll, 0 );
			}
			label$166:;
		}
		goto label$144;
		label$168:;
		{
			if( ISAUX$1 != 0ll ) goto label$170;
			{
				FBSTRING* vr$77 = fb_LongintToStr( *(int64*)((uint8*)VREG$1 + 48ll) );
				FBSTRING* vr$78 = fb_StrAssign( (void*)OPERAND$1, -1ll, (void*)vr$77, -1ll, 0 );
			}
			goto label$169;
			label$170:;
			{
				FBSTRING* vr$81 = fb_LongintToStr( *(int64*)((uint8*)*(struct $6IRVREG**)((uint8*)VREG$1 + 88ll) + 48ll) );
				FBSTRING* vr$82 = fb_StrAssign( (void*)OPERAND$1, -1ll, (void*)vr$81, -1ll, 0 );
			}
			label$169:;
		}
		goto label$144;
		label$171:;
		{
			fb_StrAssign( (void*)OPERAND$1, -1ll, (void*)"", 1ll, 0 );
		}
		goto label$144;
		label$145:;
		static const void* tmp$745[6ll] = {
			&&label$168,
			&&label$146,
			&&label$146,
			&&label$146,
			&&label$165,
			&&label$162,
		};
		if( TMP$729$2 > 5ll ) goto label$171;
		goto *tmp$745[TMP$729$2 - 0ll];
		label$144:;
	}
	label$139:;
}

void HPREPOPERAND64( struct $6IRVREG* VREG$1, FBSTRING* OPERAND1$1, FBSTRING* OPERAND2$1 )
{
	label$172:;
	HPREPOPERAND( VREG$1, OPERAND1$1, 8ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( VREG$1, OPERAND2$1, 7ll, 0ll, -1ll, -1ll );
	label$173:;
}

void OUTP( uint8* S$1 )
{
	label$180:;
	static FBSTRING OSTR$1;
	if( *(int64*)((uint8*)&ENV$ + 288ll) == 0ll ) goto label$183;
	{
		FBSTRING TMP$747$2;
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"\x09", 2ll, 0 );
		__builtin_memset( &TMP$747$2, 0, 24ll );
		FBSTRING* vr$3 = fb_StrConcat( &TMP$747$2, (void*)&OSTR$1, -1ll, (void*)S$1, 0ll );
		FBSTRING* vr$4 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$3, -1ll, 0 );
	}
	goto label$182;
	label$183:;
	{
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)S$1, 0ll, 0 );
	}
	label$182:;
	FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)"\x0A", 2ll, 0 );
	int64 vr$6 = fb_StrLen( (void*)&OSTR$1, -1ll );
	OUTEX( *(uint8**)&OSTR$1, vr$6 );
	label$181:;
}

void HBRANCH( uint8* MNEMONIC$1, uint8* LABEL$1 )
{
	FBSTRING TMP$750$1;
	label$184:;
	static FBSTRING OSTR$1;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)MNEMONIC$1, 0ll, 0 );
	FBSTRING* vr$0 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)" ", 2ll, 0 );
	__builtin_memset( &TMP$750$1, 0, 24ll );
	FBSTRING* vr$3 = fb_StrConcat( &TMP$750$1, (void*)&OSTR$1, -1ll, (void*)LABEL$1, 0ll );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$3, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$185:;
}

void HPUSH( uint8* RNAME$1 )
{
	FBSTRING TMP$752$1;
	label$186:;
	static FBSTRING OSTR$1;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"push ", 6ll, 0 );
	__builtin_memset( &TMP$752$1, 0, 24ll );
	FBSTRING* vr$2 = fb_StrConcat( &TMP$752$1, (void*)&OSTR$1, -1ll, (void*)RNAME$1, 0ll );
	FBSTRING* vr$3 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$2, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$187:;
}

void HPOP( uint8* RNAME$1 )
{
	FBSTRING TMP$754$1;
	label$188:;
	static FBSTRING OSTR$1;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"pop ", 5ll, 0 );
	__builtin_memset( &TMP$754$1, 0, 24ll );
	FBSTRING* vr$2 = fb_StrConcat( &TMP$754$1, (void*)&OSTR$1, -1ll, (void*)RNAME$1, 0ll );
	FBSTRING* vr$3 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$2, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$189:;
}

void HMOV( uint8* DNAME$1, uint8* SNAME$1 )
{
	FBSTRING TMP$756$1;
	FBSTRING TMP$757$1;
	label$190:;
	static FBSTRING OSTR$1;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mov ", 5ll, 0 );
	__builtin_memset( &TMP$756$1, 0, 24ll );
	FBSTRING* vr$2 = fb_StrConcat( &TMP$756$1, (void*)&OSTR$1, -1ll, (void*)DNAME$1, 0ll );
	FBSTRING* vr$3 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$2, -1ll, 0 );
	FBSTRING* vr$4 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	__builtin_memset( &TMP$757$1, 0, 24ll );
	FBSTRING* vr$7 = fb_StrConcat( &TMP$757$1, (void*)&OSTR$1, -1ll, (void*)SNAME$1, 0ll );
	FBSTRING* vr$8 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$7, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$191:;
}

void HLABEL( uint8* LABEL$1 )
{
	label$198:;
	static FBSTRING OSTR$1;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)LABEL$1, 0ll, 0 );
	FBSTRING* vr$0 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)":\x0A", 3ll, 0 );
	OUTEX( *(uint8**)&OSTR$1, 0ll );
	label$199:;
}

void EMITVARINIBEGIN( struct $8FBSYMBOL* SYM$1 )
{
	label$1441:;
	_SETSECTION( 1ll, 0ll );
	EDBGEMITGLOBALVAR( SYM$1, 1ll );
	if( (*(int64*)((uint8*)SYM$1 + 48ll) & 511ll) != 15ll ) goto label$1444;
	{
		HALIGN( 8ll );
	}
	goto label$1443;
	label$1444:;
	{
		HALIGN( 4ll );
	}
	label$1443:;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 32ll) == 0ll ) goto label$1446;
	{
		uint8* vr$9 = SYMBGETMANGLEDNAME( SYM$1 );
		HPUBLIC( vr$9, (int64)-((*(int64*)((uint8*)SYM$1 + 8ll) & 256ll) != 0ll) );
	}
	label$1446:;
	label$1445:;
	uint8* vr$10 = SYMBGETMANGLEDNAME( SYM$1 );
	HLABEL( vr$10 );
	label$1442:;
}

void EMITVARINII( int64 DTYPE$1, int64 VALUE$1 )
{
	FBSTRING TMP$1355$1;
	label$1447:;
	FBSTRING S$1;
	__builtin_memset( &S$1, 0, 24ll );
	uint8* vr$1 = _GETTYPESTRING( DTYPE$1 );
	__builtin_memset( &TMP$1355$1, 0, 24ll );
	FBSTRING* vr$4 = fb_StrConcat( &TMP$1355$1, (void*)vr$1, 0ll, (void*)" ", 2ll );
	FBSTRING* vr$6 = fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$4, -1ll, 0 );
	if( ((int64)-(DTYPE$1 == 12ll) | (int64)-(DTYPE$1 == 13ll)) == 0ll ) goto label$1450;
	{
		FBSTRING* vr$12 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"0x", 3ll, 0 );
		FBSTRING* vr$13 = fb_HEX_l( (uint64)VALUE$1 );
		FBSTRING* vr$15 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)vr$13, -1ll, 0 );
	}
	goto label$1449;
	label$1450:;
	{
		FBSTRING* vr$16 = fb_LongintToStr( VALUE$1 );
		FBSTRING* vr$18 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)vr$16, -1ll, 0 );
	}
	label$1449:;
	FBSTRING* vr$20 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"\x0A", 2ll, 0 );
	OUTEX( *(uint8**)&S$1, 0ll );
	fb_StrDelete( &S$1 );
	label$1448:;
}

void EMITVARINIF( int64 DTYPE$1, double VALUE$1 )
{
	FBSTRING TMP$1357$1;
	FBSTRING TMP$1358$1;
	FBSTRING TMP$1359$1;
	FBSTRING TMP$1360$1;
	label$1451:;
	__builtin_memset( &TMP$1360$1, 0, 24ll );
	FBSTRING* vr$1 = HFLOATTOHEX( VALUE$1, DTYPE$1 );
	uint8* vr$2 = _GETTYPESTRING( DTYPE$1 );
	__builtin_memset( &TMP$1357$1, 0, 24ll );
	FBSTRING* vr$5 = fb_StrConcat( &TMP$1357$1, (void*)vr$2, 0ll, (void*)" ", 2ll );
	__builtin_memset( &TMP$1358$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$1358$1, (void*)vr$5, -1ll, (void*)vr$1, -1ll );
	__builtin_memset( &TMP$1359$1, 0, 24ll );
	FBSTRING* vr$11 = fb_StrConcat( &TMP$1359$1, (void*)vr$8, -1ll, (void*)"\x0A", 2ll );
	FBSTRING* vr$13 = fb_StrAssign( (void*)&TMP$1360$1, -1ll, (void*)vr$11, -1ll, 0 );
	OUTEX( *(uint8**)&TMP$1360$1, 0ll );
	fb_StrDelete( &TMP$1360$1 );
	label$1452:;
}

void EMITVARINIOFS( uint8* SNAME$1, int64 OFS$1 )
{
	FBSTRING TMP$1362$1;
	label$1453:;
	static FBSTRING OSTR$1;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)".int ", 6ll, 0 );
	__builtin_memset( &TMP$1362$1, 0, 24ll );
	FBSTRING* vr$2 = fb_StrConcat( &TMP$1362$1, (void*)&OSTR$1, -1ll, (void*)SNAME$1, 0ll );
	FBSTRING* vr$3 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$2, -1ll, 0 );
	if( OFS$1 == 0ll ) goto label$1456;
	{
		FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)" + ", 4ll, 0 );
		FBSTRING* vr$6 = fb_LongintToStr( OFS$1 );
		FBSTRING* vr$7 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)vr$6, -1ll, 0 );
	}
	label$1456:;
	label$1455:;
	FBSTRING* vr$8 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)"\x0A", 2ll, 0 );
	OUTEX( *(uint8**)&OSTR$1, 0ll );
	label$1454:;
}

void EMITVARINISTR( uint8* S$1 )
{
	FBSTRING TMP$1363$1;
	label$1457:;
	static FBSTRING OSTR$1;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)".ascii \x22", 9ll, 0 );
	__builtin_memset( &TMP$1363$1, 0, 24ll );
	FBSTRING* vr$2 = fb_StrConcat( &TMP$1363$1, (void*)&OSTR$1, -1ll, (void*)S$1, 0ll );
	FBSTRING* vr$3 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$2, -1ll, 0 );
	FBSTRING* vr$4 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)"\x5C" "0\x22\x0A", 5ll, 0 );
	OUTEX( *(uint8**)&OSTR$1, 0ll );
	label$1458:;
}

void EMITVARINIWSTR( uint8* S$1 )
{
	FBSTRING TMP$1365$1;
	label$1459:;
	static FBSTRING OSTR$1;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)".ascii \x22", 9ll, 0 );
	__builtin_memset( &TMP$1365$1, 0, 24ll );
	FBSTRING* vr$2 = fb_StrConcat( &TMP$1365$1, (void*)&OSTR$1, -1ll, (void*)S$1, 0ll );
	FBSTRING* vr$3 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$2, -1ll, 0 );
	{
		int64 I$2;
		I$2 = 1ll;
		int64 TMP$1366$2;
		TMP$1366$2 = *(int64*)((uint8*)SYMB_DTYPETB$ + 344ll);
		goto label$1461;
		label$1464:;
		{
			FBSTRING* vr$4 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)"\x5C" "0", 3ll, 0 );
		}
		label$1462:;
		I$2 = I$2 + 1ll;
		label$1461:;
		if( I$2 <= TMP$1366$2 ) goto label$1464;
		label$1463:;
	}
	FBSTRING* vr$7 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)"\x22\x0A", 3ll, 0 );
	OUTEX( *(uint8**)&OSTR$1, 0ll );
	label$1460:;
}

void EMITVARINIPAD( int64 BYTES$1 )
{
	FBSTRING TMP$1369$1;
	FBSTRING TMP$1370$1;
	FBSTRING TMP$1371$1;
	FBSTRING TMP$1372$1;
	label$1465:;
	__builtin_memset( &TMP$1372$1, 0, 24ll );
	FBSTRING* vr$1 = fb_LongintToStr( BYTES$1 );
	__builtin_memset( &TMP$1369$1, 0, 24ll );
	FBSTRING* vr$4 = fb_StrConcat( &TMP$1369$1, (void*)".skip ", 7ll, (void*)vr$1, -1ll );
	__builtin_memset( &TMP$1370$1, 0, 24ll );
	FBSTRING* vr$7 = fb_StrConcat( &TMP$1370$1, (void*)vr$4, -1ll, (void*)",0", 3ll );
	__builtin_memset( &TMP$1371$1, 0, 24ll );
	FBSTRING* vr$10 = fb_StrConcat( &TMP$1371$1, (void*)vr$7, -1ll, (void*)"\x0A", 2ll );
	FBSTRING* vr$12 = fb_StrAssign( (void*)&TMP$1372$1, -1ll, (void*)vr$10, -1ll, 0 );
	OUTEX( *(uint8**)&TMP$1372$1, 0ll );
	fb_StrDelete( &TMP$1372$1 );
	label$1466:;
}

void EMITFBCTINFBEGIN( void )
{
	label$1467:;
	_SETSECTION( 7ll, 0ll );
	label$1468:;
}

void EMITFBCTINFSTRING( uint8* S$1 )
{
	FBSTRING TMP$1375$1;
	FBSTRING TMP$1376$1;
	FBSTRING TMP$1377$1;
	label$1469:;
	static FBSTRING LN$1;
	uint8* vr$0 = (*(tmp$96*)((uint8*)&EMIT$ + 488ll))( 3ll );
	fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$0, 0ll, 0 );
	__builtin_memset( &TMP$1375$1, 0, 24ll );
	FBSTRING* vr$3 = fb_StrConcat( &TMP$1375$1, (void*)" \x22", 3ll, (void*)S$1, 0ll );
	__builtin_memset( &TMP$1376$1, 0, 24ll );
	FBSTRING* vr$6 = fb_StrConcat( &TMP$1376$1, (void*)vr$3, -1ll, (void*)"\x5C" "0\x22", 4ll );
	__builtin_memset( &TMP$1377$1, 0, 24ll );
	FBSTRING* vr$9 = fb_StrConcat( &TMP$1377$1, (void*)&LN$1, -1ll, (void*)vr$6, -1ll );
	FBSTRING* vr$10 = fb_StrAssign( (void*)&LN$1, -1ll, (void*)vr$9, -1ll, 0 );
	EMITWRITESTR( *(uint8**)&LN$1, 0ll );
	label$1470:;
}

void EMITFBCTINFEND( void )
{
	label$1471:;
	EMITWRITESTR( (uint8*)"", 0ll );
	label$1472:;
}

int64 EMITGASX86_CTOR( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1617:;
	static struct $9EMIT_VTBL _VTBL$1 = { (tmp$36)&_INIT, (tmp$35)&_END, (tmp$38)&_GETOPTIONVALUE, (tmp$36)&_OPEN, (tmp$37)&_CLOSE, (tmp$92)&_ISKEYWORD, (tmp$39)&_ISREGPRESERVED, (tmp$39)&_GETFREEPRESERVEDREG, (tmp$93)&_GETRESULTREG, (tmp$42)&_PROCGETFRAMEREGNAME, (tmp$40)&_PROCBEGIN, (tmp$40)&_PROCEND, (tmp$41)&_PROCHEADER, (tmp$94)&_PROCFOOTER, (tmp$41)&_PROCALLOCARG, (tmp$41)&_PROCALLOCLOCAL, (tmp$40)&_PROCALLOCSTATICVARS, (tmp$40)&_SCOPEBEGIN, (tmp$40)&_SCOPEEND, (tmp$95)&_SETSECTION, (tmp$96)&_GETTYPESTRING, (tmp$97)&_GETSECTIONSTRING };
	__builtin_memcpy( (struct $9EMIT_VTBL*)((uint8*)&EMIT$ + 328ll), &_VTBL$1, 176 );
	*(void***)((uint8*)&EMIT$ + 504ll) = (void**)_OPFNTB$;
	if( *(int64*)((uint8*)&ENV$ + 232ll) < 1ll ) goto label$1620;
	{
		_INIT_OPFNTB_SSE( *(void***)((uint8*)&EMIT$ + 504ll) );
	}
	label$1620:;
	label$1619:;
	fb$result$1 = -1ll;
	label$1618:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__emit_x86( void )
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

static uint8* HGETIDXNAME( struct $6IRVREG* VREG$1 )
{
	FBSTRING TMP$723$1;
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$119:;
	static uint8 INAME$1[154];
	static struct $8FBSYMBOL* SYM$1;
	static struct $6IRVREG* VI$1;
	static int64 ADDONE$1;
	static int64 MULT$1;
	static uint8* RNAME$1;
	SYM$1 = *(struct $8FBSYMBOL**)((uint8*)VREG$1 + 56ll);
	VI$1 = *(struct $6IRVREG**)((uint8*)VREG$1 + 80ll);
	if( SYM$1 != (struct $8FBSYMBOL*)0ull ) goto label$122;
	{
		if( VI$1 != (struct $6IRVREG*)0ull ) goto label$124;
		{
			fb$result$1 = (uint8*)0ull;
			goto label$120;
		}
		label$124:;
		label$123:;
		fb_StrAssign( (void*)INAME$1, 154ll, (void*)"", 1ll, 0 );
	}
	goto label$121;
	label$122:;
	{
		uint8* vr$5 = SYMBGETMANGLEDNAME( SYM$1 );
		fb_StrAssign( (void*)INAME$1, 154ll, (void*)vr$5, 0ll, 0 );
		if( VI$1 == (struct $6IRVREG*)0ull ) goto label$126;
		{
			FBSTRING TMP$722$3;
			__builtin_memset( &TMP$722$3, 0, 24ll );
			FBSTRING* vr$9 = fb_StrConcat( &TMP$722$3, (void*)INAME$1, 154ll, (void*)"+", 2ll );
			fb_StrAssign( (void*)INAME$1, 154ll, (void*)vr$9, -1ll, 0 );
		}
		label$126:;
		label$125:;
	}
	label$121:;
	uint8* vr$12 = HGETREGNAME( *(int64*)((uint8*)VI$1 + 8ll), *(int64*)((uint8*)VI$1 + 24ll) );
	RNAME$1 = vr$12;
	__builtin_memset( &TMP$723$1, 0, 24ll );
	FBSTRING* vr$15 = fb_StrConcat( &TMP$723$1, (void*)INAME$1, 154ll, (void*)RNAME$1, 0ll );
	fb_StrAssign( (void*)INAME$1, 154ll, (void*)vr$15, -1ll, 0 );
	if( VI$1 == (struct $6IRVREG*)0ull ) goto label$128;
	{
		MULT$1 = *(int64*)((uint8*)VREG$1 + 72ll);
		if( MULT$1 <= 1ll ) goto label$130;
		{
			FBSTRING TMP$725$3;
			FBSTRING TMP$726$3;
			ADDONE$1 = 0ll;
			{
				if( MULT$1 == 3ll ) goto label$133;
				label$134:;
				if( MULT$1 == 5ll ) goto label$133;
				label$135:;
				if( MULT$1 != 9ll ) goto label$132;
				label$133:;
				{
					MULT$1 = MULT$1 + -1ll;
					ADDONE$1 = -1ll;
				}
				label$132:;
				label$131:;
			}
			__builtin_memset( &TMP$725$3, 0, 24ll );
			FBSTRING* vr$25 = fb_StrConcat( &TMP$725$3, (void*)INAME$1, 154ll, (void*)"*", 2ll );
			fb_StrAssign( (void*)INAME$1, 154ll, (void*)vr$25, -1ll, 0 );
			FBSTRING* vr$26 = fb_LongintToStr( MULT$1 );
			__builtin_memset( &TMP$726$3, 0, 24ll );
			FBSTRING* vr$29 = fb_StrConcat( &TMP$726$3, (void*)INAME$1, 154ll, (void*)vr$26, -1ll );
			fb_StrAssign( (void*)INAME$1, 154ll, (void*)vr$29, -1ll, 0 );
			if( ADDONE$1 == 0ll ) goto label$137;
			{
				FBSTRING TMP$727$4;
				FBSTRING TMP$728$4;
				__builtin_memset( &TMP$727$4, 0, 24ll );
				FBSTRING* vr$33 = fb_StrConcat( &TMP$727$4, (void*)INAME$1, 154ll, (void*)"+", 2ll );
				fb_StrAssign( (void*)INAME$1, 154ll, (void*)vr$33, -1ll, 0 );
				__builtin_memset( &TMP$728$4, 0, 24ll );
				FBSTRING* vr$36 = fb_StrConcat( &TMP$728$4, (void*)INAME$1, 154ll, (void*)RNAME$1, 0ll );
				fb_StrAssign( (void*)INAME$1, 154ll, (void*)vr$36, -1ll, 0 );
			}
			label$137:;
			label$136:;
		}
		label$130:;
		label$129:;
	}
	label$128:;
	label$127:;
	fb$result$1 = (uint8*)INAME$1;
	label$120:;
	return fb$result$1;
}

static void OUTEX( uint8* S$1, int64 BYTES$1 )
{
	label$174:;
	if( BYTES$1 != 0ll ) goto label$177;
	{
		int64 vr$1 = fb_StrLen( (void*)S$1, 0ll );
		BYTES$1 = vr$1;
	}
	label$177:;
	label$176:;
	int32 vr$3 = fb_FilePutStrLarge( (int32)*(int64*)((uint8*)&ENV$ + 776ll), 0ll, (void*)S$1, 0ll );
	if( (int64)vr$3 != 0ll ) goto label$179;
	{
	}
	label$179:;
	label$178:;
	label$175:;
}

static void HXCHG( uint8* DNAME$1, uint8* SNAME$1 )
{
	FBSTRING TMP$759$1;
	FBSTRING TMP$760$1;
	label$192:;
	static FBSTRING OSTR$1;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"xchg ", 6ll, 0 );
	__builtin_memset( &TMP$759$1, 0, 24ll );
	FBSTRING* vr$2 = fb_StrConcat( &TMP$759$1, (void*)&OSTR$1, -1ll, (void*)DNAME$1, 0ll );
	FBSTRING* vr$3 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$2, -1ll, 0 );
	FBSTRING* vr$4 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	__builtin_memset( &TMP$760$1, 0, 24ll );
	FBSTRING* vr$7 = fb_StrConcat( &TMP$760$1, (void*)&OSTR$1, -1ll, (void*)SNAME$1, 0ll );
	FBSTRING* vr$8 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$7, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$193:;
}

static void HCOMMENT( uint8* S$1 )
{
	FBSTRING TMP$763$1;
	label$194:;
	static FBSTRING OSTR$1;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"\x09#", 3ll, 0 );
	__builtin_memset( &TMP$763$1, 0, 24ll );
	FBSTRING* vr$2 = fb_StrConcat( &TMP$763$1, (void*)&OSTR$1, -1ll, (void*)S$1, 0ll );
	FBSTRING* vr$3 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$2, -1ll, 0 );
	FBSTRING* vr$4 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)"\x0A", 2ll, 0 );
	OUTEX( *(uint8**)&OSTR$1, 0ll );
	label$195:;
}

static void HPUBLIC( uint8* LABEL$1, int64 ISEXPORT$1 )
{
	FBSTRING TMP$766$1;
	label$196:;
	static FBSTRING OSTR$1;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"\x0A.globl ", 9ll, 0 );
	__builtin_memset( &TMP$766$1, 0, 24ll );
	FBSTRING* vr$2 = fb_StrConcat( &TMP$766$1, (void*)&OSTR$1, -1ll, (void*)LABEL$1, 0ll );
	FBSTRING* vr$3 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$2, -1ll, 0 );
	FBSTRING* vr$4 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)"\x0A", 2ll, 0 );
	OUTEX( *(uint8**)&OSTR$1, 0ll );
	label$197:;
}

static void HALIGN( int64 BYTES$1 )
{
	label$200:;
	static FBSTRING OSTR$1;
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)".balign ", 9ll, 0 );
	FBSTRING* vr$1 = fb_LongintToStr( BYTES$1 );
	FBSTRING* vr$2 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)vr$1, -1ll, 0 );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)"\x0A", 2ll, 0 );
	OUTEX( *(uint8**)&OSTR$1, 0ll );
	label$201:;
}

static void HINITREGTB( void )
{
	label$202:;
	int64 LASTCLASS$1;
	__builtin_memset( &LASTCLASS$1, 0, 8ll );
	int64 REGS$1;
	__builtin_memset( &REGS$1, 0, 8ll );
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	static $12REG_SIZEMASK INT_BITSMASK$1[6] = { 7ll, 6ll, 6ll, 7ll, 7ll, 7ll };
	struct $8FBARRAY1I12REG_SIZEMASKE {
		$12REG_SIZEMASK* DATA;
		$12REG_SIZEMASK* PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1I12REG_SIZEMASKE ) == 64 );
	static struct $8FBARRAY1I12REG_SIZEMASKE tmp$770$1 = { ($12REG_SIZEMASK*)INT_BITSMASK$1, ($12REG_SIZEMASK*)INT_BITSMASK$1, 48ll, 8ll, 1ll, { { 6ll, 0ll, 5ll } } };
	struct $8REGCLASS* vr$3 = REGNEWCLASS( 0ll, 6ll, (struct $7FBARRAYI12REG_SIZEMASKE*)&tmp$770$1, 0ll );
	*(struct $8REGCLASS**)((uint8*)&EMIT$ + 16ll) = vr$3;
	static $12REG_SIZEMASK FLT_BITSMASK$1[7] = { 12ll, 12ll, 12ll, 12ll, 12ll, 12ll, 12ll };
	static struct $8FBARRAY1I12REG_SIZEMASKE tmp$771$1 = { ($12REG_SIZEMASK*)FLT_BITSMASK$1, ($12REG_SIZEMASK*)FLT_BITSMASK$1, 56ll, 8ll, 1ll, { { 7ll, 0ll, 6ll } } };
	if( *(int64*)((uint8*)&ENV$ + 232ll) != 1ll ) goto label$205;
	{
		struct $8REGCLASS* vr$5 = REGNEWCLASS( 1ll, 7ll, (struct $7FBARRAYI12REG_SIZEMASKE*)&tmp$771$1, 0ll );
		*(struct $8REGCLASS**)((uint8*)&EMIT$ + 24ll) = vr$5;
		{
			I$1 = 0ll;
			label$209:;
			{
				FBSTRING TMP$773$4;
				FBSTRING* vr$6 = fb_LongintToStr( I$1 );
				__builtin_memset( &TMP$773$4, 0, 24ll );
				FBSTRING* vr$9 = fb_StrConcat( &TMP$773$4, (void*)"xmm", 4ll, (void*)vr$6, -1ll );
				fb_StrAssign( (void*)(((uint8*)RNAMETB$ + (I$1 << 3ll)) + 192ll), 8ll, (void*)vr$9, -1ll, 0 );
			}
			label$207:;
			I$1 = I$1 + 1ll;
			label$206:;
			if( I$1 <= 7ll ) goto label$209;
			label$208:;
		}
	}
	goto label$204;
	label$205:;
	{
		struct $8REGCLASS* vr$14 = REGNEWCLASS( 1ll, 7ll, (struct $7FBARRAYI12REG_SIZEMASKE*)&tmp$771$1, -1ll );
		*(struct $8REGCLASS**)((uint8*)&EMIT$ + 24ll) = vr$14;
	}
	label$204:;
	label$203:;
}

static void HENDREGTB( void )
{
	label$210:;
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	{
		I$1 = 0ll;
		label$215:;
		{
			REGDELCLASS( *(struct $8REGCLASS**)((uint8*)((uint8*)&EMIT$ + (I$1 << 3ll)) + 16ll) );
		}
		label$213:;
		I$1 = I$1 + 1ll;
		label$212:;
		if( I$1 <= 1ll ) goto label$215;
		label$214:;
	}
	label$211:;
}

static void HINITKEYWORDSTB( void )
{
	label$216:;
	int64 T$1;
	__builtin_memset( &T$1, 0, 8ll );
	int64 I$1;
	__builtin_memset( &I$1, 0, 8ll );
	HASHINIT( (struct $5THASH*)((uint8*)&EMIT$ + 304ll), 600ll, 0ll );
	{
		T$1 = 0ll;
		label$221:;
		{
			{
				I$1 = 0ll;
				label$225:;
				{
					int64 vr$7 = fb_StrLen( (void*)((uint8*)RNAMETB$ + (((T$1 << 3ll) + I$1) << 3ll)), 8ll );
					if( vr$7 <= 0ll ) goto label$227;
					{
						HASHADD( (struct $5THASH*)((uint8*)&EMIT$ + 304ll), (uint8*)((uint8*)RNAMETB$ + (((T$1 << 3ll) + I$1) << 3ll)), (void*)18446744073709551615ull, 18446744073709551615ull );
					}
					label$227:;
					label$226:;
				}
				label$223:;
				I$1 = I$1 + 1ll;
				label$222:;
				if( I$1 <= 7ll ) goto label$225;
				label$224:;
			}
		}
		label$219:;
		T$1 = T$1 + 1ll;
		label$218:;
		if( T$1 <= 3ll ) goto label$221;
		label$220:;
	}
	{
		I$1 = 0ll;
		label$231:;
		{
			if( *(uint8**)((uint8*)KEYWORDTB$ + (I$1 << 3ll)) != (uint8*)0ull ) goto label$233;
			{
				goto label$230;
			}
			label$233:;
			label$232:;
			HASHADD( (struct $5THASH*)((uint8*)&EMIT$ + 304ll), *(uint8**)((uint8*)KEYWORDTB$ + (I$1 << 3ll)), (void*)18446744073709551615ull, 18446744073709551615ull );
		}
		label$229:;
		I$1 = I$1 + 1ll;
		label$228:;
		if( I$1 <= 599ll ) goto label$231;
		label$230:;
	}
	*(int64*)((uint8*)&EMIT$ + 296ll) = -1ll;
	label$217:;
}

static void HENDKEYWORDSTB( void )
{
	label$234:;
	if( *(int64*)((uint8*)&EMIT$ + 296ll) == 0ll ) goto label$237;
	{
		HASHEND( (struct $5THASH*)((uint8*)&EMIT$ + 304ll) );
	}
	label$237:;
	label$236:;
	*(int64*)((uint8*)&EMIT$ + 296ll) = 0ll;
	label$235:;
}

static void HEMITVARBSS( struct $8FBSYMBOL* S$1 )
{
	FBSTRING TMP$777$1;
	FBSTRING TMP$779$1;
	FBSTRING TMP$780$1;
	label$238:;
	static FBSTRING ALLOC$1;
	static FBSTRING OSTR$1;
	static int64 ATTRIB$1;
	static int64 ELEMENTS$1;
	ATTRIB$1 = *(int64*)((uint8*)S$1 + 8ll);
	ELEMENTS$1 = *(int64*)((uint8*)S$1 + 120ll);
	_SETSECTION( 2ll, 0ll );
	if( (ATTRIB$1 & 8ll) != 0ll ) goto label$241;
	{
		if( (ATTRIB$1 & 32ll) <= 0ll ) goto label$243;
		{
			uint8* vr$6 = SYMBGETMANGLEDNAME( S$1 );
			HPUBLIC( vr$6, -1ll );
		}
		label$243:;
		label$242:;
		fb_StrAssign( (void*)&ALLOC$1, -1ll, (void*)".lcomm", 7ll, 0 );
	}
	goto label$240;
	label$241:;
	{
		uint8* vr$7 = SYMBGETMANGLEDNAME( S$1 );
		HPUBLIC( vr$7, 0ll );
		fb_StrAssign( (void*)&ALLOC$1, -1ll, (void*)".comm", 6ll, 0 );
	}
	label$240:;
	if( (*(int64*)((uint8*)S$1 + 48ll) & 511ll) != 15ll ) goto label$245;
	{
		HALIGN( 8ll );
		EMITWRITESTR( (uint8*)".balign 8", -1ll );
	}
	goto label$244;
	label$245:;
	{
		HALIGN( 4ll );
	}
	label$244:;
	FBSTRING* vr$11 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)&ALLOC$1, -1ll, 0 );
	FBSTRING* vr$12 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)"\x09", 2ll, 0 );
	uint8* vr$13 = SYMBGETMANGLEDNAME( S$1 );
	__builtin_memset( &TMP$777$1, 0, 24ll );
	FBSTRING* vr$16 = fb_StrConcat( &TMP$777$1, (void*)&OSTR$1, -1ll, (void*)vr$13, 0ll );
	FBSTRING* vr$17 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$16, -1ll, 0 );
	FBSTRING* vr$20 = fb_LongintToStr( *(int64*)((uint8*)S$1 + 72ll) * ELEMENTS$1 );
	__builtin_memset( &TMP$779$1, 0, 24ll );
	FBSTRING* vr$23 = fb_StrConcat( &TMP$779$1, (void*)",", 2ll, (void*)vr$20, -1ll );
	__builtin_memset( &TMP$780$1, 0, 24ll );
	FBSTRING* vr$26 = fb_StrConcat( &TMP$780$1, (void*)&OSTR$1, -1ll, (void*)vr$23, -1ll );
	FBSTRING* vr$27 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$26, -1ll, 0 );
	EMITWRITESTR( *(uint8**)&OSTR$1, -1ll );
	EDBGEMITGLOBALVAR( S$1, 2ll );
	label$239:;
}

static void HWRITEHEADER( void )
{
	FBSTRING TMP$785$1;
	FBSTRING TMP$786$1;
	FBSTRING TMP$787$1;
	FBSTRING TMP$788$1;
	FBSTRING TMP$789$1;
	FBSTRING TMP$790$1;
	label$246:;
	EDBGEMITHEADER( (uint8*)((uint8*)&ENV$ + 488ll) );
	EMITWRITESTR( (uint8*)".intel_syntax noprefix", -1ll );
	EMITWRITESTR( (uint8*)"", 0ll );
	__builtin_memset( &TMP$790$1, 0, 24ll );
	FBSTRING* vr$2 = fb_Time(  );
	__builtin_memset( &TMP$785$1, 0, 24ll );
	FBSTRING* vr$6 = fb_StrConcat( &TMP$785$1, (void*)((uint8*)&ENV$ + 488ll), 261ll, (void*)"' compilation started at ", 26ll );
	__builtin_memset( &TMP$786$1, 0, 24ll );
	FBSTRING* vr$9 = fb_StrConcat( &TMP$786$1, (void*)vr$6, -1ll, (void*)vr$2, -1ll );
	__builtin_memset( &TMP$787$1, 0, 24ll );
	FBSTRING* vr$12 = fb_StrConcat( &TMP$787$1, (void*)vr$9, -1ll, (void*)" (", 3ll );
	__builtin_memset( &TMP$788$1, 0, 24ll );
	FBSTRING* vr$15 = fb_StrConcat( &TMP$788$1, (void*)vr$12, -1ll, (void*)"FreeBASIC 1.01.0", 17ll );
	__builtin_memset( &TMP$789$1, 0, 24ll );
	FBSTRING* vr$18 = fb_StrConcat( &TMP$789$1, (void*)vr$15, -1ll, (void*)")", 2ll );
	FBSTRING* vr$20 = fb_StrAssign( (void*)&TMP$790$1, -1ll, (void*)vr$18, -1ll, 0 );
	HCOMMENT( *(uint8**)&TMP$790$1 );
	fb_StrDelete( &TMP$790$1 );
	label$247:;
}

static void HEMITVARCONST( struct $8FBSYMBOL* S$1 )
{
	label$248:;
	static FBSTRING STEXT$1;
	static FBSTRING STYPE$1;
	static FBSTRING OSTR$1;
	static int64 DTYPE$1;
	DTYPE$1 = *(int64*)((uint8*)S$1 + 48ll) & 511ll;
	{
		uint64 TMP$791$2;
		TMP$791$2 = (uint64)DTYPE$1;
		goto label$251;
		label$252:;
		{
			FBSTRING TMP$793$3;
			fb_StrAssign( (void*)&STEXT$1, -1ll, (void*)"\x22", 2ll, 0 );
			uint8* vr$3 = HESCAPE( *(uint8**)((uint8*)S$1 + 88ll) );
			__builtin_memset( &TMP$793$3, 0, 24ll );
			FBSTRING* vr$6 = fb_StrConcat( &TMP$793$3, (void*)&STEXT$1, -1ll, (void*)vr$3, 0ll );
			FBSTRING* vr$7 = fb_StrAssign( (void*)&STEXT$1, -1ll, (void*)vr$6, -1ll, 0 );
			FBSTRING* vr$8 = fb_StrConcatAssign( (void*)&STEXT$1, -1ll, (void*)"\x5C" "0\x22", 4ll, 0 );
		}
		goto label$250;
		label$253:;
		{
			FBSTRING TMP$797$3;
			fb_StrAssign( (void*)&STEXT$1, -1ll, (void*)"\x22", 2ll, 0 );
			uint8* vr$10 = HESCAPEW( *(uint32**)((uint8*)S$1 + 88ll) );
			__builtin_memset( &TMP$797$3, 0, 24ll );
			FBSTRING* vr$13 = fb_StrConcat( &TMP$797$3, (void*)&STEXT$1, -1ll, (void*)vr$10, 0ll );
			FBSTRING* vr$14 = fb_StrAssign( (void*)&STEXT$1, -1ll, (void*)vr$13, -1ll, 0 );
			{
				int64 I$4;
				I$4 = 1ll;
				int64 TMP$798$4;
				TMP$798$4 = *(int64*)((uint8*)SYMB_DTYPETB$ + 344ll);
				goto label$254;
				label$257:;
				{
					FBSTRING* vr$15 = fb_StrConcatAssign( (void*)&STEXT$1, -1ll, (void*)"\x5C" "0", 3ll, 0 );
				}
				label$255:;
				I$4 = I$4 + 1ll;
				label$254:;
				if( I$4 <= TMP$798$4 ) goto label$257;
				label$256:;
			}
			FBSTRING* vr$18 = fb_StrConcatAssign( (void*)&STEXT$1, -1ll, (void*)"\x22", 2ll, 0 );
		}
		goto label$250;
		label$258:;
		{
			fb_StrAssign( (void*)&STEXT$1, -1ll, *(void**)((uint8*)S$1 + 88ll), 0ll, 0 );
		}
		goto label$250;
		label$251:;
		static const void* tmp$1428[4ll] = {
			&&label$252,
			&&label$258,
			&&label$258,
			&&label$253,
		};
		if( TMP$791$2 < 3ll ) goto label$258;
		if( TMP$791$2 > 6ll ) goto label$258;
		goto *tmp$1428[TMP$791$2 - 3ll];
		label$250:;
	}
	_SETSECTION( 0ll, 0ll );
	if( *(int64*)((uint8*)S$1 + 160ll) == 0ll ) goto label$260;
	{
		HALIGN( *(int64*)((uint8*)S$1 + 160ll) );
	}
	goto label$259;
	label$260:;
	{
		if( DTYPE$1 != 15ll ) goto label$262;
		{
			HALIGN( 8ll );
		}
		goto label$261;
		label$262:;
		{
			HALIGN( 4ll );
		}
		label$261:;
	}
	label$259:;
	uint8* vr$24 = _GETTYPESTRING( DTYPE$1 );
	fb_StrAssign( (void*)&STYPE$1, -1ll, (void*)vr$24, 0ll, 0 );
	uint8* vr$25 = SYMBGETMANGLEDNAME( S$1 );
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$25, 0ll, 0 );
	FBSTRING* vr$26 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)":\x09", 3ll, 0 );
	FBSTRING* vr$27 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&STYPE$1, -1ll, 0 );
	FBSTRING* vr$28 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)"\x09", 2ll, 0 );
	FBSTRING* vr$29 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&STEXT$1, -1ll, 0 );
	EMITWRITESTR( *(uint8**)&OSTR$1, 0ll );
	label$249:;
}

static void HWRITECTOR( struct $20FB_GLOBCTORLIST_ITEM* PROC_HEAD$1, int64 IS_CTOR$1 )
{
	label$263:;
	if( PROC_HEAD$1 != (struct $20FB_GLOBCTORLIST_ITEM*)0ull ) goto label$266;
	{
		goto label$264;
	}
	label$266:;
	label$265:;
	label$267:;
	{
		if( (*(int64*)((uint8*)*(struct $8FBSYMBOL**)PROC_HEAD$1 + 16ll) & 16777216ll) == 0ll ) goto label$271;
		{
			$10IR_SECTION TMP$800$3;
			if( IS_CTOR$1 == 0ll ) goto label$272;
			TMP$800$3 = 5ll;
			goto label$1621;
			label$272:;
			TMP$800$3 = 6ll;
			label$1621:;
			_SETSECTION( TMP$800$3, *(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)*(struct $8FBSYMBOL**)PROC_HEAD$1 + 200ll) + 112ll) );
			uint8* vr$10 = SYMBGETMANGLEDNAME( *(struct $8FBSYMBOL**)PROC_HEAD$1 );
			EMITVARINIOFS( vr$10, 0ll );
		}
		label$271:;
		label$270:;
		PROC_HEAD$1 = *(struct $20FB_GLOBCTORLIST_ITEM**)((uint8*)PROC_HEAD$1 + 8ll);
	}
	label$269:;
	if( PROC_HEAD$1 != (struct $20FB_GLOBCTORLIST_ITEM*)0ull ) goto label$267;
	label$268:;
	label$264:;
}

static void HEMITEXPORT( struct $8FBSYMBOL* S$1 )
{
	label$273:;
	if( (*(int64*)((uint8*)S$1 + 8ll) & 256ll) == 0ll ) goto label$276;
	{
		FBSTRING TMP$806$2;
		FBSTRING TMP$807$2;
		FBSTRING TMP$808$2;
		_SETSECTION( 4ll, 0ll );
		uint8* SNAME$2;
		uint8* vr$3 = SYMBGETMANGLEDNAME( S$1 );
		SNAME$2 = vr$3;
		if( *(int64*)((uint8*)&ENV$ + 464ll) == 0ll ) goto label$278;
		{
			SNAME$2 = (uint8*)((uint8*)SNAME$2 + 1ll);
		}
		label$278:;
		label$277:;
		__builtin_memset( &TMP$808$2, 0, 24ll );
		__builtin_memset( &TMP$806$2, 0, 24ll );
		FBSTRING* vr$9 = fb_StrConcat( &TMP$806$2, (void*)".ascii \x22 -export:", 18ll, (void*)SNAME$2, 0ll );
		__builtin_memset( &TMP$807$2, 0, 24ll );
		FBSTRING* vr$12 = fb_StrConcat( &TMP$807$2, (void*)vr$9, -1ll, (void*)"\x22\x0A", 3ll );
		FBSTRING* vr$14 = fb_StrAssign( (void*)&TMP$808$2, -1ll, (void*)vr$12, -1ll, 0 );
		EMITWRITESTR( *(uint8**)&TMP$808$2, -1ll );
		fb_StrDelete( &TMP$808$2 );
	}
	label$276:;
	label$275:;
	label$274:;
}

static void HDECLVARIABLE( struct $8FBSYMBOL* S$1 )
{
	label$279:;
	if( (*(int64*)((uint8*)S$1 + 8ll) & 524288ll) == 0ll ) goto label$282;
	{
		{
			int64 TMP$809$3;
			TMP$809$3 = *(int64*)((uint8*)S$1 + 48ll) & 511ll;
			if( TMP$809$3 == 3ll ) goto label$285;
			label$286:;
			if( TMP$809$3 != 6ll ) goto label$284;
			label$285:;
			{
				if( (int64)-((*(int64*)((uint8*)S$1 + 16ll) & 2ll) != 0ll) != 0ll ) goto label$288;
				{
					goto label$280;
				}
				label$288:;
				label$287:;
			}
			label$284:;
			label$283:;
		}
		HEMITVARCONST( S$1 );
		goto label$280;
	}
	label$282:;
	label$281:;
	if( (*(int64*)((uint8*)S$1 + 16ll) & 32768ll) == 0ll ) goto label$290;
	{
		goto label$280;
	}
	label$290:;
	label$289:;
	if( ((int64)-((*(int64*)((uint8*)S$1 + 8ll) & 16ll) != 0ll) | (int64)-((*(int64*)((uint8*)S$1 + 8ll) & 4ll) != 0ll)) == 0ll ) goto label$292;
	{
		goto label$280;
	}
	label$292:;
	label$291:;
	if( *(struct $7ASTNODE**)((uint8*)S$1 + 88ll) == (struct $7ASTNODE*)0ull ) goto label$294;
	{
		if( (int64)-((*(int64*)((uint8*)S$1 + 16ll) & 2ll) != 0ll) != 0ll ) goto label$296;
		{
			if( (int64)-((*(int64*)((uint8*)S$1 + 8ll) & 32ll) != 0ll) != 0ll ) goto label$298;
			{
				goto label$280;
			}
			label$298:;
			label$297:;
		}
		label$296:;
		label$295:;
		_SETSECTION( 1ll, 0ll );
		IRHLFLUSHSTATICINITIALIZER( S$1 );
		goto label$280;
	}
	label$294:;
	label$293:;
	HEMITVARBSS( S$1 );
	label$280:;
}

static void HCLEARLOCALS( int64 BYTESTOCLEAR$1, int64 BASEOFFSET$1 )
{
	label$299:;
	static int64 I$1;
	static FBSTRING LNAME$1;
	if( BYTESTOCLEAR$1 != 0ll ) goto label$302;
	{
		goto label$300;
	}
	label$302:;
	label$301:;
	if( *(int64*)((uint8*)&ENV$ + 224ll) < 3ll ) goto label$304;
	{
		if( ((uint64)BYTESTOCLEAR$1 >> 3ull) <= 7ull ) goto label$306;
		{
			FBSTRING TMP$811$3;
			FBSTRING TMP$812$3;
			FBSTRING TMP$813$3;
			FBSTRING TMP$815$3;
			FBSTRING TMP$816$3;
			FBSTRING TMP$822$3;
			FBSTRING TMP$823$3;
			if( (int64)-((*(int64*)((uint8*)&EMIT$ + 264ll) & 2ll) != 0ll) != 0ll ) goto label$308;
			{
				HPUSH( (uint8*)"edi" );
			}
			label$308:;
			label$307:;
			__builtin_memset( &TMP$813$3, 0, 24ll );
			FBSTRING* vr$9 = fb_LongintToStr( BASEOFFSET$1 + BYTESTOCLEAR$1 );
			__builtin_memset( &TMP$811$3, 0, 24ll );
			FBSTRING* vr$12 = fb_StrConcat( &TMP$811$3, (void*)"lea edi, [ebp-", 15ll, (void*)vr$9, -1ll );
			__builtin_memset( &TMP$812$3, 0, 24ll );
			FBSTRING* vr$15 = fb_StrConcat( &TMP$812$3, (void*)vr$12, -1ll, (void*)"]", 2ll );
			FBSTRING* vr$17 = fb_StrAssign( (void*)&TMP$813$3, -1ll, (void*)vr$15, -1ll, 0 );
			OUTP( *(uint8**)&TMP$813$3 );
			fb_StrDelete( &TMP$813$3 );
			__builtin_memset( &TMP$816$3, 0, 24ll );
			FBSTRING* vr$21 = fb_ULongintToStr( (uint64)BYTESTOCLEAR$1 >> 3ull );
			__builtin_memset( &TMP$815$3, 0, 24ll );
			FBSTRING* vr$24 = fb_StrConcat( &TMP$815$3, (void*)"mov ecx,", 9ll, (void*)vr$21, -1ll );
			FBSTRING* vr$26 = fb_StrAssign( (void*)&TMP$816$3, -1ll, (void*)vr$24, -1ll, 0 );
			OUTP( *(uint8**)&TMP$816$3 );
			fb_StrDelete( &TMP$816$3 );
			OUTP( (uint8*)"pxor mm0, mm0" );
			uint8* vr$28 = SYMBUNIQUELABEL(  );
			fb_StrAssign( (void*)&LNAME$1, -1ll, (void*)vr$28, 0ll, 0 );
			HLABEL( *(uint8**)&LNAME$1 );
			OUTP( (uint8*)"movq [edi], mm0" );
			OUTP( (uint8*)"add edi, 8" );
			OUTP( (uint8*)"dec ecx" );
			__builtin_memset( &TMP$823$3, 0, 24ll );
			__builtin_memset( &TMP$822$3, 0, 24ll );
			FBSTRING* vr$32 = fb_StrConcat( &TMP$822$3, (void*)"jnz ", 5ll, (void*)&LNAME$1, -1ll );
			FBSTRING* vr$34 = fb_StrAssign( (void*)&TMP$823$3, -1ll, (void*)vr$32, -1ll, 0 );
			OUTP( *(uint8**)&TMP$823$3 );
			fb_StrDelete( &TMP$823$3 );
			OUTP( (uint8*)"emms" );
			if( (int64)-((*(int64*)((uint8*)&EMIT$ + 264ll) & 2ll) != 0ll) != 0ll ) goto label$310;
			{
				HPOP( (uint8*)"edi" );
			}
			label$310:;
			label$309:;
		}
		goto label$305;
		label$306:;
		if( ((uint64)BYTESTOCLEAR$1 >> 3ull) <= 0ull ) goto label$311;
		{
			OUTP( (uint8*)"pxor mm0, mm0" );
			{
				I$1 = (int64)((uint64)BYTESTOCLEAR$1 >> 3ull);
				goto label$312;
				label$315:;
				{
					FBSTRING TMP$826$5;
					FBSTRING TMP$827$5;
					FBSTRING TMP$828$5;
					__builtin_memset( &TMP$828$5, 0, 24ll );
					FBSTRING* vr$44 = fb_LongintToStr( I$1 << 3ll );
					__builtin_memset( &TMP$826$5, 0, 24ll );
					FBSTRING* vr$47 = fb_StrConcat( &TMP$826$5, (void*)"movq [ebp-", 11ll, (void*)vr$44, -1ll );
					__builtin_memset( &TMP$827$5, 0, 24ll );
					FBSTRING* vr$50 = fb_StrConcat( &TMP$827$5, (void*)vr$47, -1ll, (void*)"], mm0", 7ll );
					FBSTRING* vr$52 = fb_StrAssign( (void*)&TMP$828$5, -1ll, (void*)vr$50, -1ll, 0 );
					OUTP( *(uint8**)&TMP$828$5 );
					fb_StrDelete( &TMP$828$5 );
				}
				label$313:;
				I$1 = I$1 + -1ll;
				label$312:;
				if( I$1 >= 1ll ) goto label$315;
				label$314:;
			}
			OUTP( (uint8*)"emms" );
		}
		label$311:;
		label$305:;
		if( (BYTESTOCLEAR$1 & 4ll) == 0ll ) goto label$317;
		{
			FBSTRING TMP$831$3;
			FBSTRING TMP$832$3;
			FBSTRING TMP$833$3;
			__builtin_memset( &TMP$833$3, 0, 24ll );
			FBSTRING* vr$60 = fb_LongintToStr( BASEOFFSET$1 + BYTESTOCLEAR$1 );
			__builtin_memset( &TMP$831$3, 0, 24ll );
			FBSTRING* vr$63 = fb_StrConcat( &TMP$831$3, (void*)"mov dword ptr [ebp-", 20ll, (void*)vr$60, -1ll );
			__builtin_memset( &TMP$832$3, 0, 24ll );
			FBSTRING* vr$66 = fb_StrConcat( &TMP$832$3, (void*)vr$63, -1ll, (void*)"], 0", 5ll );
			FBSTRING* vr$68 = fb_StrAssign( (void*)&TMP$833$3, -1ll, (void*)vr$66, -1ll, 0 );
			OUTP( *(uint8**)&TMP$833$3 );
			fb_StrDelete( &TMP$833$3 );
		}
		label$317:;
		label$316:;
		goto label$300;
	}
	label$304:;
	label$303:;
	if( ((uint64)BYTESTOCLEAR$1 >> 2ull) <= 6ull ) goto label$319;
	{
		FBSTRING TMP$834$2;
		FBSTRING TMP$835$2;
		FBSTRING TMP$836$2;
		FBSTRING TMP$837$2;
		FBSTRING TMP$838$2;
		if( (int64)-((*(int64*)((uint8*)&EMIT$ + 264ll) & 2ll) != 0ll) != 0ll ) goto label$321;
		{
			HPUSH( (uint8*)"edi" );
		}
		label$321:;
		label$320:;
		__builtin_memset( &TMP$836$2, 0, 24ll );
		FBSTRING* vr$77 = fb_LongintToStr( BASEOFFSET$1 + BYTESTOCLEAR$1 );
		__builtin_memset( &TMP$834$2, 0, 24ll );
		FBSTRING* vr$80 = fb_StrConcat( &TMP$834$2, (void*)"lea edi, [ebp-", 15ll, (void*)vr$77, -1ll );
		__builtin_memset( &TMP$835$2, 0, 24ll );
		FBSTRING* vr$83 = fb_StrConcat( &TMP$835$2, (void*)vr$80, -1ll, (void*)"]", 2ll );
		FBSTRING* vr$85 = fb_StrAssign( (void*)&TMP$836$2, -1ll, (void*)vr$83, -1ll, 0 );
		OUTP( *(uint8**)&TMP$836$2 );
		fb_StrDelete( &TMP$836$2 );
		__builtin_memset( &TMP$838$2, 0, 24ll );
		FBSTRING* vr$89 = fb_ULongintToStr( (uint64)BYTESTOCLEAR$1 >> 2ull );
		__builtin_memset( &TMP$837$2, 0, 24ll );
		FBSTRING* vr$92 = fb_StrConcat( &TMP$837$2, (void*)"mov ecx,", 9ll, (void*)vr$89, -1ll );
		FBSTRING* vr$94 = fb_StrAssign( (void*)&TMP$838$2, -1ll, (void*)vr$92, -1ll, 0 );
		OUTP( *(uint8**)&TMP$838$2 );
		fb_StrDelete( &TMP$838$2 );
		OUTP( (uint8*)"xor eax, eax" );
		OUTP( (uint8*)"rep stosd" );
		if( (int64)-((*(int64*)((uint8*)&EMIT$ + 264ll) & 2ll) != 0ll) != 0ll ) goto label$323;
		{
			HPOP( (uint8*)"edi" );
		}
		label$323:;
		label$322:;
	}
	goto label$318;
	label$319:;
	{
		{
			I$1 = (int64)((uint64)BYTESTOCLEAR$1 >> 2ull);
			goto label$324;
			label$327:;
			{
				FBSTRING TMP$841$4;
				FBSTRING TMP$842$4;
				FBSTRING TMP$843$4;
				__builtin_memset( &TMP$843$4, 0, 24ll );
				FBSTRING* vr$103 = fb_LongintToStr( BASEOFFSET$1 + (I$1 << 2ll) );
				__builtin_memset( &TMP$841$4, 0, 24ll );
				FBSTRING* vr$106 = fb_StrConcat( &TMP$841$4, (void*)"mov dword ptr [ebp-", 20ll, (void*)vr$103, -1ll );
				__builtin_memset( &TMP$842$4, 0, 24ll );
				FBSTRING* vr$109 = fb_StrConcat( &TMP$842$4, (void*)vr$106, -1ll, (void*)"], 0", 5ll );
				FBSTRING* vr$111 = fb_StrAssign( (void*)&TMP$843$4, -1ll, (void*)vr$109, -1ll, 0 );
				OUTP( *(uint8**)&TMP$843$4 );
				fb_StrDelete( &TMP$843$4 );
			}
			label$325:;
			I$1 = I$1 + -1ll;
			label$324:;
			if( I$1 >= 1ll ) goto label$327;
			label$326:;
		}
	}
	label$318:;
	label$300:;
}

static void HCREATEFRAME( struct $8FBSYMBOL* PROC$1 )
{
	label$328:;
	static int64 BYTESTOALLOC$1;
	static int64 BYTESTOCLEAR$1;
	static uint8* LPROF$1;
	if( (int64)-((*(int64*)((uint8*)PROC$1 + 8ll) & 268435456ll) != 0ll) != 0ll ) goto label$331;
	{
		BYTESTOALLOC$1 = (*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 24ll) + 3ll) & -4ll;
		if( (((((int64)-(BYTESTOALLOC$1 != 0ll) | (int64)-(*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 8ll) != 8ll)) | (int64)-((*(int64*)((uint8*)PROC$1 + 16ll) & 4096ll) != 0ll)) | *(int64*)((uint8*)&ENV$ + 288ll)) | *(int64*)((uint8*)&ENV$ + 320ll)) == 0ll ) goto label$333;
		{
			HPUSH( (uint8*)"ebp" );
			OUTP( (uint8*)"mov ebp, esp" );
			if( (*(int64*)((uint8*)PROC$1 + 16ll) & 4096ll) == 0ll ) goto label$335;
			{
				OUTP( (uint8*)"and esp, 0xFFFFFFF0" );
			}
			label$335:;
			label$334:;
			if( BYTESTOALLOC$1 <= 0ll ) goto label$337;
			{
				FBSTRING TMP$847$4;
				FBSTRING TMP$848$4;
				__builtin_memset( &TMP$848$4, 0, 24ll );
				FBSTRING* vr$25 = fb_LongintToStr( BYTESTOALLOC$1 );
				__builtin_memset( &TMP$847$4, 0, 24ll );
				FBSTRING* vr$28 = fb_StrConcat( &TMP$847$4, (void*)"sub esp, ", 10ll, (void*)vr$25, -1ll );
				FBSTRING* vr$30 = fb_StrAssign( (void*)&TMP$848$4, -1ll, (void*)vr$28, -1ll, 0 );
				OUTP( *(uint8**)&TMP$848$4 );
				fb_StrDelete( &TMP$848$4 );
			}
			label$337:;
			label$336:;
		}
		label$333:;
		label$332:;
		if( *(int64*)((uint8*)&ENV$ + 216ll) != 3ll ) goto label$339;
		{
			if( *(int64*)((uint8*)&ENV$ + 320ll) == 0ll ) goto label$341;
			{
				FBSTRING TMP$853$4;
				FBSTRING TMP$854$4;
				FBSTRING TMP$855$4;
				FBSTRING TMP$856$4;
				FBSTRING TMP$861$4;
				FBSTRING TMP$862$4;
				uint8* vr$34 = SYMBMAKEPROFILELABELNAME(  );
				LPROF$1 = vr$34;
				OUTEX( (uint8*)".section .data\x0A", 0ll );
				OUTEX( (uint8*)".balign 4\x0A", 0ll );
				__builtin_memset( &TMP$856$4, 0, 24ll );
				__builtin_memset( &TMP$853$4, 0, 24ll );
				FBSTRING* vr$38 = fb_StrConcat( &TMP$853$4, (void*)".", 2ll, (void*)LPROF$1, 0ll );
				__builtin_memset( &TMP$854$4, 0, 24ll );
				FBSTRING* vr$41 = fb_StrConcat( &TMP$854$4, (void*)vr$38, -1ll, (void*)":", 2ll );
				__builtin_memset( &TMP$855$4, 0, 24ll );
				FBSTRING* vr$44 = fb_StrConcat( &TMP$855$4, (void*)vr$41, -1ll, (void*)"\x0A", 2ll );
				FBSTRING* vr$46 = fb_StrAssign( (void*)&TMP$856$4, -1ll, (void*)vr$44, -1ll, 0 );
				OUTEX( *(uint8**)&TMP$856$4, 0ll );
				fb_StrDelete( &TMP$856$4 );
				OUTP( (uint8*)".long 0" );
				OUTEX( (uint8*)".section .text\x0A", 0ll );
				__builtin_memset( &TMP$862$4, 0, 24ll );
				__builtin_memset( &TMP$861$4, 0, 24ll );
				FBSTRING* vr$51 = fb_StrConcat( &TMP$861$4, (void*)"mov edx, offset .", 18ll, (void*)LPROF$1, 0ll );
				FBSTRING* vr$53 = fb_StrAssign( (void*)&TMP$862$4, -1ll, (void*)vr$51, -1ll, 0 );
				OUTP( *(uint8**)&TMP$862$4 );
				fb_StrDelete( &TMP$862$4 );
				OUTP( (uint8*)"call _mcount" );
			}
			label$341:;
			label$340:;
		}
		label$339:;
		label$338:;
		if( (*(int64*)((uint8*)&EMIT$ + 264ll) & 16ll) == 0ll ) goto label$343;
		{
			HPUSH( (uint8*)"ebx" );
		}
		label$343:;
		label$342:;
		if( (*(int64*)((uint8*)&EMIT$ + 264ll) & 4ll) == 0ll ) goto label$345;
		{
			HPUSH( (uint8*)"esi" );
		}
		label$345:;
		label$344:;
		if( (*(int64*)((uint8*)&EMIT$ + 264ll) & 2ll) == 0ll ) goto label$347;
		{
			HPUSH( (uint8*)"edi" );
		}
		label$347:;
		label$346:;
	}
	label$331:;
	label$330:;
	label$329:;
}

static void HDESTROYFRAME( struct $8FBSYMBOL* PROC$1, int64 BYTESTOPOP$1 )
{
	label$348:;
	if( (int64)-((*(int64*)((uint8*)PROC$1 + 8ll) & 268435456ll) != 0ll) != 0ll ) goto label$351;
	{
		static int64 BYTESTOALLOC$2;
		BYTESTOALLOC$2 = (*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 24ll) + 3ll) & -4ll;
		if( (*(int64*)((uint8*)&EMIT$ + 264ll) & 2ll) == 0ll ) goto label$353;
		{
			HPOP( (uint8*)"edi" );
		}
		label$353:;
		label$352:;
		if( (*(int64*)((uint8*)&EMIT$ + 264ll) & 4ll) == 0ll ) goto label$355;
		{
			HPOP( (uint8*)"esi" );
		}
		label$355:;
		label$354:;
		if( (*(int64*)((uint8*)&EMIT$ + 264ll) & 16ll) == 0ll ) goto label$357;
		{
			HPOP( (uint8*)"ebx" );
		}
		label$357:;
		label$356:;
		if( (((((int64)-(BYTESTOALLOC$2 != 0ll) | (int64)-(*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 8ll) != 8ll)) | (int64)-((*(int64*)((uint8*)PROC$1 + 16ll) & 4096ll) != 0ll)) | *(int64*)((uint8*)&ENV$ + 288ll)) | *(int64*)((uint8*)&ENV$ + 320ll)) == 0ll ) goto label$359;
		{
			OUTP( (uint8*)"mov esp, ebp" );
			HPOP( (uint8*)"ebp" );
		}
		label$359:;
		label$358:;
		if( BYTESTOPOP$1 <= 0ll ) goto label$361;
		{
			FBSTRING TMP$866$3;
			FBSTRING TMP$867$3;
			__builtin_memset( &TMP$867$3, 0, 24ll );
			FBSTRING* vr$28 = fb_LongintToStr( BYTESTOPOP$1 );
			__builtin_memset( &TMP$866$3, 0, 24ll );
			FBSTRING* vr$31 = fb_StrConcat( &TMP$866$3, (void*)"ret ", 5ll, (void*)vr$28, -1ll );
			FBSTRING* vr$33 = fb_StrAssign( (void*)&TMP$867$3, -1ll, (void*)vr$31, -1ll, 0 );
			OUTP( *(uint8**)&TMP$867$3 );
			fb_StrDelete( &TMP$867$3 );
		}
		goto label$360;
		label$361:;
		{
			OUTP( (uint8*)"ret" );
		}
		label$360:;
	}
	label$351:;
	label$350:;
	if( *(int64*)((uint8*)&ENV$ + 216ll) != 2ll ) goto label$363;
	{
		FBSTRING TMP$870$2;
		FBSTRING TMP$871$2;
		FBSTRING TMP$872$2;
		FBSTRING TMP$873$2;
		FBSTRING TMP$874$2;
		__builtin_memset( &TMP$874$2, 0, 24ll );
		uint8* vr$37 = SYMBGETMANGLEDNAME( PROC$1 );
		uint8* vr$38 = SYMBGETMANGLEDNAME( PROC$1 );
		__builtin_memset( &TMP$870$2, 0, 24ll );
		FBSTRING* vr$41 = fb_StrConcat( &TMP$870$2, (void*)".size ", 7ll, (void*)vr$38, 0ll );
		__builtin_memset( &TMP$871$2, 0, 24ll );
		FBSTRING* vr$44 = fb_StrConcat( &TMP$871$2, (void*)vr$41, -1ll, (void*)", .-", 5ll );
		__builtin_memset( &TMP$872$2, 0, 24ll );
		FBSTRING* vr$47 = fb_StrConcat( &TMP$872$2, (void*)vr$44, -1ll, (void*)vr$37, 0ll );
		__builtin_memset( &TMP$873$2, 0, 24ll );
		FBSTRING* vr$50 = fb_StrConcat( &TMP$873$2, (void*)vr$47, -1ll, (void*)"\x0A", 2ll );
		FBSTRING* vr$52 = fb_StrAssign( (void*)&TMP$874$2, -1ll, (void*)vr$50, -1ll, 0 );
		OUTEX( *(uint8**)&TMP$874$2, 0ll );
		fb_StrDelete( &TMP$874$2 );
	}
	label$363:;
	label$362:;
	label$349:;
}

static void _EMITLIT( uint8* S$1 )
{
	FBSTRING TMP$875$1;
	label$364:;
	FBSTRING OSTR$1;
	__builtin_memset( &OSTR$1, 0, 24ll );
	__builtin_memset( &TMP$875$1, 0, 24ll );
	FBSTRING* vr$3 = fb_StrConcat( &TMP$875$1, (void*)S$1, 0ll, (void*)"\x0A", 2ll );
	FBSTRING* vr$5 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$3, -1ll, 0 );
	OUTEX( *(uint8**)&OSTR$1, 0ll );
	fb_StrDelete( &OSTR$1 );
	label$365:;
}

static void _EMITJMPTB( struct $8FBSYMBOL* TBSYM$1, uint64* VALUES1$1, struct $8FBSYMBOL** LABELS1$1, int64 LABELCOUNT$1, struct $8FBSYMBOL* DEFLABEL$1, uint64 MINVAL$1, uint64 MAXVAL$1 )
{
	FBSTRING TMP$876$1;
	FBSTRING TMP$877$1;
	FBSTRING TMP$878$1;
	label$366:;
	struct $8FBSYMBOL* LABEL$1;
	FBSTRING DEFLABELNAME$1;
	__builtin_memset( &DEFLABELNAME$1, 0, 24ll );
	FBSTRING TB$1;
	__builtin_memset( &TB$1, 0, 24ll );
	int64 I$1;
	uint8* vr$2 = SYMBGETMANGLEDNAME( DEFLABEL$1 );
	fb_StrAssign( (void*)&DEFLABELNAME$1, -1ll, (void*)vr$2, 0ll, 0 );
	uint8* vr$4 = SYMBGETMANGLEDNAME( TBSYM$1 );
	fb_StrAssign( (void*)&TB$1, -1ll, (void*)vr$4, 0ll, 0 );
	__builtin_memset( &TMP$878$1, 0, 24ll );
	__builtin_memset( &TMP$876$1, 0, 24ll );
	FBSTRING* vr$10 = fb_StrConcat( &TMP$876$1, (void*)&TB$1, -1ll, (void*)":", 2ll );
	__builtin_memset( &TMP$877$1, 0, 24ll );
	FBSTRING* vr$13 = fb_StrConcat( &TMP$877$1, (void*)vr$10, -1ll, (void*)"\x0A", 2ll );
	FBSTRING* vr$15 = fb_StrAssign( (void*)&TMP$878$1, -1ll, (void*)vr$13, -1ll, 0 );
	OUTEX( *(uint8**)&TMP$878$1, 0ll );
	fb_StrDelete( &TMP$878$1 );
	I$1 = 0ll;
	{
		uint64 VALUE$2;
		VALUE$2 = MINVAL$1;
		uint64 TMP$879$2;
		TMP$879$2 = MAXVAL$1;
		goto label$368;
		label$371:;
		{
			FBSTRING TMP$880$3;
			FBSTRING TMP$881$3;
			FBSTRING TMP$882$3;
			if( VALUE$2 != *(uint64*)((uint8*)VALUES1$1 + (I$1 << 3ll)) ) goto label$373;
			{
				LABEL$1 = *(struct $8FBSYMBOL**)((uint8*)LABELS1$1 + (I$1 << 3ll));
				I$1 = I$1 + 1ll;
			}
			goto label$372;
			label$373:;
			{
				LABEL$1 = DEFLABEL$1;
			}
			label$372:;
			__builtin_memset( &TMP$882$3, 0, 24ll );
			uint8* vr$24 = SYMBGETMANGLEDNAME( LABEL$1 );
			uint8* vr$25 = _GETTYPESTRING( 8ll );
			__builtin_memset( &TMP$880$3, 0, 24ll );
			FBSTRING* vr$28 = fb_StrConcat( &TMP$880$3, (void*)vr$25, 0ll, (void*)" ", 2ll );
			__builtin_memset( &TMP$881$3, 0, 24ll );
			FBSTRING* vr$31 = fb_StrConcat( &TMP$881$3, (void*)vr$28, -1ll, (void*)vr$24, 0ll );
			FBSTRING* vr$33 = fb_StrAssign( (void*)&TMP$882$3, -1ll, (void*)vr$31, -1ll, 0 );
			OUTP( *(uint8**)&TMP$882$3 );
			fb_StrDelete( &TMP$882$3 );
		}
		label$369:;
		VALUE$2 = VALUE$2 + 1ull;
		label$368:;
		if( VALUE$2 <= TMP$879$2 ) goto label$371;
		label$370:;
	}
	fb_StrDelete( &TB$1 );
	fb_StrDelete( &DEFLABELNAME$1 );
	label$367:;
}

static void _EMITCALL( struct $6IRVREG* UNUSED$1, struct $8FBSYMBOL* LABEL$1, int64 BYTESTOPOP$1 )
{
	FBSTRING TMP$884$1;
	label$374:;
	static FBSTRING OSTR$1;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"call ", 6ll, 0 );
	uint8* vr$0 = SYMBGETMANGLEDNAME( LABEL$1 );
	__builtin_memset( &TMP$884$1, 0, 24ll );
	FBSTRING* vr$3 = fb_StrConcat( &TMP$884$1, (void*)&OSTR$1, -1ll, (void*)vr$0, 0ll );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$3, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	if( BYTESTOPOP$1 == 0ll ) goto label$377;
	{
		FBSTRING* vr$6 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"add esp, ", 10ll, 0 );
		FBSTRING* vr$7 = fb_LongintToStr( BYTESTOPOP$1 );
		FBSTRING* vr$8 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)vr$7, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	label$377:;
	label$376:;
	label$375:;
}

static void _EMITCALLPTR( struct $6IRVREG* SVREG$1, struct $8FBSYMBOL* UNUSED$1, int64 BYTESTOPOP$1 )
{
	label$378:;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"call ", 6ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	if( BYTESTOPOP$1 == 0ll ) goto label$381;
	{
		FBSTRING* vr$3 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"add esp, ", 10ll, 0 );
		FBSTRING* vr$4 = fb_LongintToStr( BYTESTOPOP$1 );
		FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)vr$4, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	label$381:;
	label$380:;
	label$379:;
}

static void _EMITBRANCH( struct $6IRVREG* UNUSED$1, struct $8FBSYMBOL* LABEL$1, int64 OP$1 )
{
	FBSTRING TMP$893$1;
	label$382:;
	static FBSTRING OSTR$1;
	{
		uint64 TMP$886$2;
		TMP$886$2 = (uint64)OP$1;
		goto label$385;
		label$386:;
		{
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"jle ", 5ll, 0 );
		}
		goto label$384;
		label$387:;
		{
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"jge ", 5ll, 0 );
		}
		goto label$384;
		label$388:;
		{
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"jl ", 4ll, 0 );
		}
		goto label$384;
		label$389:;
		{
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"jg ", 4ll, 0 );
		}
		goto label$384;
		label$390:;
		{
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"je ", 4ll, 0 );
		}
		goto label$384;
		label$391:;
		{
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"jne ", 5ll, 0 );
		}
		goto label$384;
		label$385:;
		static const void* tmp$1429[6ll] = {
			&&label$390,
			&&label$389,
			&&label$388,
			&&label$391,
			&&label$387,
			&&label$386,
		};
		if( TMP$886$2 < 91ll ) goto label$384;
		if( TMP$886$2 > 96ll ) goto label$384;
		goto *tmp$1429[TMP$886$2 - 91ll];
		label$384:;
	}
	uint8* vr$0 = SYMBGETMANGLEDNAME( LABEL$1 );
	__builtin_memset( &TMP$893$1, 0, 24ll );
	FBSTRING* vr$3 = fb_StrConcat( &TMP$893$1, (void*)&OSTR$1, -1ll, (void*)vr$0, 0ll );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$3, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$383:;
}

static void _EMITJUMP( struct $6IRVREG* UNUSED1$1, struct $8FBSYMBOL* LABEL$1, int64 UNUSED2$1 )
{
	FBSTRING TMP$895$1;
	label$392:;
	static FBSTRING OSTR$1;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"jmp ", 5ll, 0 );
	uint8* vr$0 = SYMBGETMANGLEDNAME( LABEL$1 );
	__builtin_memset( &TMP$895$1, 0, 24ll );
	FBSTRING* vr$3 = fb_StrConcat( &TMP$895$1, (void*)&OSTR$1, -1ll, (void*)vr$0, 0ll );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$3, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$393:;
}

static void _EMITJUMPPTR( struct $6IRVREG* SVREG$1, struct $8FBSYMBOL* UNUSED1$1, int64 UNUSED2$1 )
{
	label$394:;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"jmp ", 5ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$395:;
}

static void _EMITRET( struct $6IRVREG* VREG$1 )
{
	FBSTRING TMP$896$1;
	label$396:;
	static FBSTRING OSTR$1;
	FBSTRING* vr$1 = fb_LongintToStr( *(int64*)((uint8*)VREG$1 + 48ll) );
	__builtin_memset( &TMP$896$1, 0, 24ll );
	FBSTRING* vr$4 = fb_StrConcat( &TMP$896$1, (void*)"ret ", 5ll, (void*)vr$1, -1ll );
	FBSTRING* vr$5 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$4, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$397:;
}

static void _EMITPUBLIC( struct $8FBSYMBOL* LABEL$1 )
{
	FBSTRING TMP$897$1;
	label$398:;
	static FBSTRING OSTR$1;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"\x0A.globl ", 9ll, 0 );
	uint8* vr$0 = SYMBGETMANGLEDNAME( LABEL$1 );
	__builtin_memset( &TMP$897$1, 0, 24ll );
	FBSTRING* vr$3 = fb_StrConcat( &TMP$897$1, (void*)&OSTR$1, -1ll, (void*)vr$0, 0ll );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$3, -1ll, 0 );
	FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)"\x0A", 2ll, 0 );
	OUTEX( *(uint8**)&OSTR$1, 0ll );
	label$399:;
}

static void _EMITLABEL( struct $8FBSYMBOL* LABEL$1 )
{
	label$400:;
	static FBSTRING OSTR$1;
	uint8* vr$0 = SYMBGETMANGLEDNAME( LABEL$1 );
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$0, 0ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)":\x0A", 3ll, 0 );
	OUTEX( *(uint8**)&OSTR$1, 0ll );
	label$401:;
}

static void _EMITNOP( void )
{
	label$402:;
	label$403:;
}

static void HULONG2DBL( struct $6IRVREG* SVREG$1 )
{
	label$404:;
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
	label$405:;
}

static void _EMITSTORL2L( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$406:;
	static FBSTRING DST1$1;
	static FBSTRING DST2$1;
	static FBSTRING SRC1$1;
	static FBSTRING SRC2$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND64( DVREG$1, &DST1$1, &DST2$1 );
	HPREPOPERAND64( SVREG$1, &SRC1$1, &SRC2$1 );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mov ", 5ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST1$1, -1ll, 0 );
	FBSTRING* vr$2 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC1$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mov ", 5ll, 0 );
	FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST2$1, -1ll, 0 );
	FBSTRING* vr$6 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$7 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC2$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$407:;
}

static void _EMITSTORI2L( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$905$1;
	int64 TMP$911$1;
	label$408:;
	static FBSTRING DST1$1;
	static FBSTRING DST2$1;
	static FBSTRING SRC1$1;
	static FBSTRING EXT$1;
	static FBSTRING OSTR$1;
	static int64 SDSIZE$1;
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$410;
	TMP$905$1 = 22ll;
	goto label$1622;
	label$410:;
	TMP$905$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$1622:;
	SDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$905$1 * 56ll)) + 8ll);
	HPREPOPERAND64( DVREG$1, &DST1$1, &DST2$1 );
	HPREPOPERAND( SVREG$1, &SRC1$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)SVREG$1 != 0ll ) goto label$412;
	{
		int64 TMP$906$2;
		HMOV( *(uint8**)&DST1$1, *(uint8**)&SRC1$1 );
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$413;
		TMP$906$2 = 22ll;
		goto label$1623;
		label$413:;
		TMP$906$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$1623:;
		if( (*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$906$2 * 56ll)) + 16ll) & (int64)-(*(int64*)((uint8*)SVREG$1 + 48ll) < 0ll)) == 0ll ) goto label$415;
		{
			HMOV( *(uint8**)&DST2$1, (uint8*)"-1" );
		}
		goto label$414;
		label$415:;
		{
			HMOV( *(uint8**)&DST2$1, (uint8*)"0" );
		}
		label$414:;
		goto label$409;
	}
	label$412:;
	label$411:;
	if( SDSIZE$1 >= 4ll ) goto label$417;
	{
		int64 TMP$908$2;
		uint8* vr$20 = HGETREGNAME( 7ll, *(int64*)((uint8*)SVREG$1 + 24ll) );
		fb_StrAssign( (void*)&EXT$1, -1ll, (void*)vr$20, 0ll, 0 );
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$418;
		TMP$908$2 = 22ll;
		goto label$1624;
		label$418:;
		TMP$908$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$1624:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$908$2 * 56ll)) + 16ll) == 0ll ) goto label$420;
		{
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"movsx ", 7ll, 0 );
		}
		goto label$419;
		label$420:;
		{
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"movzx ", 7ll, 0 );
		}
		label$419:;
		FBSTRING* vr$28 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&EXT$1, -1ll, 0 );
		FBSTRING* vr$29 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
		FBSTRING* vr$30 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC1$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	goto label$416;
	label$417:;
	{
		FBSTRING* vr$31 = fb_StrAssign( (void*)&EXT$1, -1ll, (void*)&SRC1$1, -1ll, 0 );
	}
	label$416:;
	FBSTRING* vr$32 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mov ", 5ll, 0 );
	FBSTRING* vr$33 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST1$1, -1ll, 0 );
	FBSTRING* vr$34 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$35 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&EXT$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$421;
	TMP$911$1 = 22ll;
	goto label$1625;
	label$421:;
	TMP$911$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$1625:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$911$1 * 56ll)) + 16ll) == 0ll ) goto label$423;
	{
		HPUSH( *(uint8**)&EXT$1 );
		FBSTRING* vr$43 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"sar ", 5ll, 0 );
		FBSTRING* vr$44 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&EXT$1, -1ll, 0 );
		FBSTRING* vr$45 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", 31", 5ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
		FBSTRING* vr$46 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mov ", 5ll, 0 );
		FBSTRING* vr$47 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST2$1, -1ll, 0 );
		FBSTRING* vr$48 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
		FBSTRING* vr$49 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&EXT$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
		HPOP( *(uint8**)&EXT$1 );
	}
	goto label$422;
	label$423:;
	{
		FBSTRING* vr$50 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mov ", 5ll, 0 );
		FBSTRING* vr$51 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST2$1, -1ll, 0 );
		FBSTRING* vr$52 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", 0", 4ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	label$422:;
	label$409:;
}

static void _EMITSTORF2L( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$914$1;
	label$424:;
	static FBSTRING DST$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$426;
	TMP$914$1 = 22ll;
	goto label$1626;
	label$426:;
	TMP$914$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$1626:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$914$1 * 56ll)) + 16ll) == 0ll ) goto label$428;
	{
		FBSTRING* vr$7 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fistp ", 7ll, 0 );
		FBSTRING* vr$8 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	label$428:;
	label$427:;
	label$425:;
}

static void _EMITSTORI2I( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$916$1;
	int64 TMP$917$1;
	label$429:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 DDSIZE$1;
	static int64 SDSIZE$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$431;
	TMP$916$1 = 22ll;
	goto label$1627;
	label$431:;
	TMP$916$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$1627:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$916$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$432;
	TMP$917$1 = 22ll;
	goto label$1628;
	label$432:;
	TMP$917$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$1628:;
	SDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$917$1 * 56ll)) + 8ll);
	if( DDSIZE$1 != 1ll ) goto label$434;
	{
		if( *(int64*)SVREG$1 != 0ll ) goto label$436;
		{
			DDSIZE$1 = 4ll;
		}
		label$436:;
		label$435:;
	}
	label$434:;
	label$433:;
	if( ((int64)-(*(int64*)SVREG$1 == 0ll) | (int64)-(DDSIZE$1 == SDSIZE$1)) == 0ll ) goto label$438;
	{
		FBSTRING* vr$20 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mov ", 5ll, 0 );
		FBSTRING* vr$21 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		FBSTRING* vr$22 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
		FBSTRING* vr$23 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	goto label$437;
	label$438:;
	{
		static FBSTRING AUX$2;
		uint8* vr$26 = HGETREGNAME( *(int64*)((uint8*)DVREG$1 + 8ll), *(int64*)((uint8*)SVREG$1 + 24ll) );
		fb_StrAssign( (void*)&AUX$2, -1ll, (void*)vr$26, 0ll, 0 );
		if( DDSIZE$1 <= SDSIZE$1 ) goto label$440;
		{
			int64 TMP$918$3;
			if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$441;
			TMP$918$3 = 22ll;
			goto label$1629;
			label$441:;
			TMP$918$3 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
			label$1629:;
			if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$918$3 * 56ll)) + 16ll) == 0ll ) goto label$443;
			{
				fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"movsx ", 7ll, 0 );
			}
			goto label$442;
			label$443:;
			{
				fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"movzx ", 7ll, 0 );
			}
			label$442:;
			FBSTRING* vr$35 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&AUX$2, -1ll, 0 );
			FBSTRING* vr$36 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
			FBSTRING* vr$37 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
			FBSTRING* vr$38 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mov ", 5ll, 0 );
			FBSTRING* vr$39 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
			FBSTRING* vr$40 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
			FBSTRING* vr$41 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&AUX$2, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		goto label$439;
		label$440:;
		{
			static int64 IS_DISI$3;
			IS_DISI$3 = 0ll;
			if( DDSIZE$1 != 1ll ) goto label$445;
			{
				if( *(int64*)SVREG$1 != 4ll ) goto label$447;
				{
					IS_DISI$3 = (int64)-(*(int64*)((uint8*)SVREG$1 + 24ll) == 2ll) | (int64)-(*(int64*)((uint8*)SVREG$1 + 24ll) == 1ll);
				}
				label$447:;
				label$446:;
			}
			label$445:;
			label$444:;
			if( IS_DISI$3 == 0ll ) goto label$449;
			{
				static FBSTRING AUX8$4;
				static int64 REG$4;
				static int64 ISFREE$4;
				int64 vr$51 = HFINDREGNOTINVREG( DVREG$1, -1ll );
				REG$4 = vr$51;
				uint8* vr$52 = HGETREGNAME( 1ll, REG$4 );
				fb_StrAssign( (void*)&AUX8$4, -1ll, (void*)vr$52, 0ll, 0 );
				uint8* vr$54 = HGETREGNAME( *(int64*)((uint8*)SVREG$1 + 8ll), REG$4 );
				fb_StrAssign( (void*)&AUX$2, -1ll, (void*)vr$54, 0ll, 0 );
				int64 vr$55 = HISREGFREE( 0ll, REG$4 );
				ISFREE$4 = vr$55;
				if( ISFREE$4 != 0ll ) goto label$451;
				{
					HPUSH( *(uint8**)&AUX$2 );
				}
				label$451:;
				label$450:;
				FBSTRING* vr$57 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mov ", 5ll, 0 );
				FBSTRING* vr$58 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&AUX$2, -1ll, 0 );
				FBSTRING* vr$59 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
				FBSTRING* vr$60 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
				OUTP( *(uint8**)&OSTR$1 );
				FBSTRING* vr$61 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mov ", 5ll, 0 );
				FBSTRING* vr$62 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
				FBSTRING* vr$63 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
				FBSTRING* vr$64 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&AUX8$4, -1ll, 0 );
				OUTP( *(uint8**)&OSTR$1 );
				if( ISFREE$4 != 0ll ) goto label$453;
				{
					HPOP( *(uint8**)&AUX$2 );
				}
				label$453:;
				label$452:;
			}
			goto label$448;
			label$449:;
			{
				FBSTRING* vr$66 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mov ", 5ll, 0 );
				FBSTRING* vr$67 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
				FBSTRING* vr$68 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
				FBSTRING* vr$69 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&AUX$2, -1ll, 0 );
				OUTP( *(uint8**)&OSTR$1 );
			}
			label$448:;
		}
		label$439:;
	}
	label$437:;
	label$430:;
}

static void _EMITSTORL2I( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$454:;
	_EMITSTORI2I( DVREG$1, SVREG$1 );
	label$455:;
}

static void _EMITSTORF2I( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$919$1;
	label$456:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 DDSIZE$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$458;
	TMP$919$1 = 22ll;
	goto label$1630;
	label$458:;
	TMP$919$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$1630:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$919$1 * 56ll)) + 8ll);
	if( DDSIZE$1 != 1ll ) goto label$460;
	{
		OUTP( (uint8*)"sub esp, 4" );
		OUTP( (uint8*)"fistp dword ptr [esp]" );
		if( *(int64*)DVREG$1 != 4ll ) goto label$462;
		{
			HMOV( *(uint8**)&DST$1, (uint8*)"byte ptr [esp]" );
			OUTP( (uint8*)"add esp, 4" );
		}
		goto label$461;
		label$462:;
		{
			static int64 REG$3;
			static int64 ISFREE$3;
			static FBSTRING AUX$3;
			static FBSTRING AUX8$3;
			int64 vr$9 = HFINDREGNOTINVREG( DVREG$1, -1ll );
			REG$3 = vr$9;
			uint8* vr$10 = HGETREGNAME( 1ll, REG$3 );
			fb_StrAssign( (void*)&AUX8$3, -1ll, (void*)vr$10, 0ll, 0 );
			uint8* vr$11 = HGETREGNAME( 7ll, REG$3 );
			fb_StrAssign( (void*)&AUX$3, -1ll, (void*)vr$11, 0ll, 0 );
			int64 vr$12 = HISREGFREE( 0ll, REG$3 );
			ISFREE$3 = vr$12;
			if( ISFREE$3 != 0ll ) goto label$464;
			{
				HXCHG( *(uint8**)&AUX$3, (uint8*)"dword ptr [esp]" );
			}
			goto label$463;
			label$464:;
			{
				HMOV( *(uint8**)&AUX8$3, (uint8*)"byte ptr [esp]" );
			}
			label$463:;
			HMOV( *(uint8**)&DST$1, *(uint8**)&AUX8$3 );
			if( ISFREE$3 != 0ll ) goto label$466;
			{
				HPOP( *(uint8**)&AUX$3 );
			}
			goto label$465;
			label$466:;
			{
				OUTP( (uint8*)"add esp, 4" );
			}
			label$465:;
		}
		label$461:;
	}
	goto label$459;
	label$460:;
	{
		int64 TMP$925$2;
		if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$467;
		TMP$925$2 = 22ll;
		goto label$1631;
		label$467:;
		TMP$925$2 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
		label$1631:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$925$2 * 56ll)) + 16ll) == 0ll ) goto label$469;
		{
			FBSTRING* vr$22 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fistp ", 7ll, 0 );
			FBSTRING* vr$23 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		goto label$468;
		label$469:;
		{
			if( DDSIZE$1 != 4ll ) goto label$471;
			{
				OUTP( (uint8*)"sub esp, 8" );
				OUTP( (uint8*)"fistp qword ptr [esp]" );
				HPOP( *(uint8**)&DST$1 );
				OUTP( (uint8*)"add esp, 4" );
			}
			goto label$470;
			label$471:;
			{
				OUTP( (uint8*)"sub esp, 4" );
				OUTP( (uint8*)"fistp dword ptr [esp]" );
				HPOP( *(uint8**)&DST$1 );
				OUTP( (uint8*)"add esp, 2" );
			}
			label$470:;
		}
		label$468:;
	}
	label$459:;
	label$457:;
}

static void _EMITSTORL2F( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$472:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING AUX$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( ((int64)-(*(int64*)SVREG$1 == 4ll) | (int64)-(*(int64*)SVREG$1 == 0ll)) == 0ll ) goto label$475;
	{
		int64 TMP$929$2;
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$476;
		TMP$929$2 = 22ll;
		goto label$1632;
		label$476:;
		TMP$929$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$1632:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$929$2 * 56ll)) + 16ll) == 0ll ) goto label$478;
		{
			FBSTRING TMP$932$3;
			FBSTRING TMP$933$3;
			HPREPOPERAND64( SVREG$1, &SRC$1, &AUX$1 );
			HPUSH( *(uint8**)&AUX$1 );
			HPUSH( *(uint8**)&SRC$1 );
			__builtin_memset( &TMP$932$3, 0, 24ll );
			FBSTRING* vr$18 = fb_StrConcat( &TMP$932$3, (void*)"fild ", 6ll, (void*)(((uint8*)DTYPETB$ + (*(int64*)((uint8*)SVREG$1 + 8ll) * 24ll)) + 8ll), 12ll );
			__builtin_memset( &TMP$933$3, 0, 24ll );
			FBSTRING* vr$21 = fb_StrConcat( &TMP$933$3, (void*)vr$18, -1ll, (void*)" [esp]", 7ll );
			FBSTRING* vr$22 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$21, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
			OUTP( (uint8*)"add esp, 8" );
		}
		goto label$477;
		label$478:;
		{
			HPREPOPERAND64( SVREG$1, &SRC$1, &AUX$1 );
			HPUSH( *(uint8**)&AUX$1 );
			HPUSH( *(uint8**)&SRC$1 );
			OUTP( (uint8*)"fild qword ptr [esp]" );
			OUTP( (uint8*)"add esp, 8" );
			HULONG2DBL( SVREG$1 );
		}
		label$477:;
	}
	goto label$474;
	label$475:;
	{
		int64 TMP$936$2;
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$479;
		TMP$936$2 = 22ll;
		goto label$1633;
		label$479:;
		TMP$936$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$1633:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$936$2 * 56ll)) + 16ll) == 0ll ) goto label$481;
		{
			FBSTRING* vr$30 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fild ", 6ll, 0 );
			FBSTRING* vr$31 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		goto label$480;
		label$481:;
		{
			FBSTRING* vr$32 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fild ", 6ll, 0 );
			FBSTRING* vr$33 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
			HULONG2DBL( SVREG$1 );
		}
		label$480:;
	}
	label$474:;
	FBSTRING* vr$34 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fstp ", 6ll, 0 );
	FBSTRING* vr$35 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$473:;
}

static void _EMITSTORI2F( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$938$1;
	label$482:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 SDSIZE$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$484;
	TMP$938$1 = 22ll;
	goto label$1634;
	label$484:;
	TMP$938$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$1634:;
	SDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$938$1 * 56ll)) + 8ll);
	if( SDSIZE$1 != 1ll ) goto label$486;
	{
		int64 TMP$939$2;
		static FBSTRING AUX$2;
		static int64 REG$2;
		static int64 ISFREE$2;
		int64 vr$7 = HFINDREGNOTINVREG( SVREG$1, 0ll );
		REG$2 = vr$7;
		uint8* vr$8 = HGETREGNAME( 7ll, REG$2 );
		fb_StrAssign( (void*)&AUX$2, -1ll, (void*)vr$8, 0ll, 0 );
		int64 vr$9 = HISREGFREE( 0ll, REG$2 );
		ISFREE$2 = vr$9;
		if( ISFREE$2 != 0ll ) goto label$488;
		{
			HPUSH( *(uint8**)&AUX$2 );
		}
		label$488:;
		label$487:;
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$489;
		TMP$939$2 = 22ll;
		goto label$1635;
		label$489:;
		TMP$939$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$1635:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$939$2 * 56ll)) + 16ll) == 0ll ) goto label$491;
		{
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"movsx ", 7ll, 0 );
		}
		goto label$490;
		label$491:;
		{
			fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"movzx ", 7ll, 0 );
		}
		label$490:;
		FBSTRING* vr$18 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&AUX$2, -1ll, 0 );
		FBSTRING* vr$19 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
		FBSTRING* vr$20 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
		HPUSH( *(uint8**)&AUX$2 );
		OUTP( (uint8*)"fild dword ptr [esp]" );
		OUTP( (uint8*)"add esp, 4" );
		if( ISFREE$2 != 0ll ) goto label$493;
		{
			HPOP( *(uint8**)&AUX$2 );
		}
		label$493:;
		label$492:;
		FBSTRING* vr$22 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fstp ", 6ll, 0 );
		FBSTRING* vr$23 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
		goto label$483;
	}
	label$486:;
	label$485:;
	if( ((int64)-(*(int64*)SVREG$1 == 4ll) | (int64)-(*(int64*)SVREG$1 == 0ll)) == 0ll ) goto label$495;
	{
		int64 TMP$941$2;
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$496;
		TMP$941$2 = 22ll;
		goto label$1636;
		label$496:;
		TMP$941$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$1636:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$941$2 * 56ll)) + 16ll) == 0ll ) goto label$498;
		{
			FBSTRING TMP$942$3;
			FBSTRING TMP$943$3;
			if( ((int64)-(*(int64*)SVREG$1 == 4ll) & (int64)-(SDSIZE$1 < 4ll)) == 0ll ) goto label$500;
			{
				uint8* vr$43 = HGETREGNAME( 7ll, *(int64*)((uint8*)SVREG$1 + 24ll) );
				fb_StrAssign( (void*)&SRC$1, -1ll, (void*)vr$43, 0ll, 0 );
			}
			label$500:;
			label$499:;
			HPUSH( *(uint8**)&SRC$1 );
			__builtin_memset( &TMP$942$3, 0, 24ll );
			FBSTRING* vr$49 = fb_StrConcat( &TMP$942$3, (void*)"fild ", 6ll, (void*)(((uint8*)DTYPETB$ + (*(int64*)((uint8*)SVREG$1 + 8ll) * 24ll)) + 8ll), 12ll );
			__builtin_memset( &TMP$943$3, 0, 24ll );
			FBSTRING* vr$52 = fb_StrConcat( &TMP$943$3, (void*)vr$49, -1ll, (void*)" [esp]", 7ll );
			FBSTRING* vr$53 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$52, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
			OUTP( (uint8*)"add esp, 4" );
		}
		goto label$497;
		label$498:;
		{
			if( SDSIZE$1 != 4ll ) goto label$502;
			{
				HPUSH( (uint8*)"0" );
				HPUSH( *(uint8**)&SRC$1 );
				OUTP( (uint8*)"fild qword ptr [esp]" );
				OUTP( (uint8*)"add esp, 8" );
			}
			goto label$501;
			label$502:;
			{
				if( *(int64*)SVREG$1 == 0ll ) goto label$504;
				{
					HPUSH( (uint8*)"0" );
				}
				label$504:;
				label$503:;
				HPUSH( *(uint8**)&SRC$1 );
				OUTP( (uint8*)"fild dword ptr [esp]" );
				if( *(int64*)SVREG$1 == 0ll ) goto label$506;
				{
					OUTP( (uint8*)"add esp, 6" );
				}
				goto label$505;
				label$506:;
				{
					OUTP( (uint8*)"add esp, 4" );
				}
				label$505:;
			}
			label$501:;
		}
		label$497:;
	}
	goto label$494;
	label$495:;
	{
		int64 TMP$945$2;
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$507;
		TMP$945$2 = 22ll;
		goto label$1637;
		label$507:;
		TMP$945$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$1637:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$945$2 * 56ll)) + 16ll) == 0ll ) goto label$509;
		{
			FBSTRING* vr$66 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fild ", 6ll, 0 );
			FBSTRING* vr$67 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		goto label$508;
		label$509:;
		{
			if( SDSIZE$1 != 4ll ) goto label$511;
			{
				HPUSH( (uint8*)"0" );
				HPUSH( *(uint8**)&SRC$1 );
				OUTP( (uint8*)"fild qword ptr [esp]" );
				OUTP( (uint8*)"add esp, 8" );
			}
			goto label$510;
			label$511:;
			{
				HPUSH( (uint8*)"0" );
				HPUSH( *(uint8**)&SRC$1 );
				OUTP( (uint8*)"fild dword ptr [esp]" );
				OUTP( (uint8*)"add esp, 6" );
			}
			label$510:;
		}
		label$508:;
	}
	label$494:;
	FBSTRING* vr$69 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fstp ", 6ll, 0 );
	FBSTRING* vr$70 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$483:;
}

static void _EMITSTORF2F( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$946$1;
	int64 TMP$947$1;
	label$512:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 DDSIZE$1;
	static int64 SDSIZE$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$514;
	TMP$946$1 = 22ll;
	goto label$1638;
	label$514:;
	TMP$946$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$1638:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$946$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$515;
	TMP$947$1 = 22ll;
	goto label$1639;
	label$515:;
	TMP$947$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$1639:;
	SDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$947$1 * 56ll)) + 8ll);
	if( *(int64*)SVREG$1 != 4ll ) goto label$517;
	{
		FBSTRING* vr$14 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fstp ", 6ll, 0 );
		FBSTRING* vr$15 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	goto label$516;
	label$517:;
	{
		if( SDSIZE$1 != DDSIZE$1 ) goto label$519;
		{
			HPREPOPERAND( SVREG$1, &SRC$1, 7ll, 0ll, 0ll, -1ll );
			FBSTRING* vr$17 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"push ", 6ll, 0 );
			FBSTRING* vr$18 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
			if( SDSIZE$1 <= 4ll ) goto label$521;
			{
				HPREPOPERAND( SVREG$1, &SRC$1, 7ll, 4ll, 0ll, -1ll );
				FBSTRING* vr$20 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"push ", 6ll, 0 );
				FBSTRING* vr$21 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
				OUTP( *(uint8**)&OSTR$1 );
				HPREPOPERAND( DVREG$1, &DST$1, 7ll, 4ll, 0ll, -1ll );
				FBSTRING* vr$22 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"pop ", 5ll, 0 );
				FBSTRING* vr$23 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
				OUTP( *(uint8**)&OSTR$1 );
			}
			label$521:;
			label$520:;
			HPREPOPERAND( DVREG$1, &DST$1, 7ll, 0ll, 0ll, -1ll );
			FBSTRING* vr$24 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"pop ", 5ll, 0 );
			FBSTRING* vr$25 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		goto label$518;
		label$519:;
		{
			FBSTRING* vr$26 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fld ", 5ll, 0 );
			FBSTRING* vr$27 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
			FBSTRING* vr$28 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fstp ", 6ll, 0 );
			FBSTRING* vr$29 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		label$518:;
	}
	label$516:;
	label$513:;
}

static void _EMITLOADL2L( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$522:;
	static FBSTRING DST1$1;
	static FBSTRING DST2$1;
	static FBSTRING SRC1$1;
	static FBSTRING SRC2$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND64( DVREG$1, &DST1$1, &DST2$1 );
	HPREPOPERAND64( SVREG$1, &SRC1$1, &SRC2$1 );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mov ", 5ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST1$1, -1ll, 0 );
	FBSTRING* vr$2 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC1$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mov ", 5ll, 0 );
	FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST2$1, -1ll, 0 );
	FBSTRING* vr$6 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$7 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC2$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$523:;
}

static void _EMITLOADI2L( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$949$1;
	int64 TMP$951$1;
	label$524:;
	static FBSTRING DST1$1;
	static FBSTRING DST2$1;
	static FBSTRING SRC1$1;
	static int64 SDSIZE$1;
	static FBSTRING OSTR$1;
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$526;
	TMP$949$1 = 22ll;
	goto label$1640;
	label$526:;
	TMP$949$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$1640:;
	SDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$949$1 * 56ll)) + 8ll);
	HPREPOPERAND64( DVREG$1, &DST1$1, &DST2$1 );
	HPREPOPERAND( SVREG$1, &SRC1$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)SVREG$1 != 0ll ) goto label$528;
	{
		int64 TMP$950$2;
		HMOV( *(uint8**)&DST1$1, *(uint8**)&SRC1$1 );
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$529;
		TMP$950$2 = 22ll;
		goto label$1641;
		label$529:;
		TMP$950$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$1641:;
		if( (*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$950$2 * 56ll)) + 16ll) & (int64)-(*(int64*)((uint8*)SVREG$1 + 48ll) < 0ll)) == 0ll ) goto label$531;
		{
			HMOV( *(uint8**)&DST2$1, (uint8*)"-1" );
		}
		goto label$530;
		label$531:;
		{
			HMOV( *(uint8**)&DST2$1, (uint8*)"0" );
		}
		label$530:;
		goto label$525;
	}
	label$528:;
	label$527:;
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$532;
	TMP$951$1 = 22ll;
	goto label$1642;
	label$532:;
	TMP$951$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$1642:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$951$1 * 56ll)) + 16ll) == 0ll ) goto label$534;
	{
		if( SDSIZE$1 >= 4ll ) goto label$536;
		{
			FBSTRING* vr$26 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"movsx ", 7ll, 0 );
			FBSTRING* vr$27 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST1$1, -1ll, 0 );
			FBSTRING* vr$28 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
			FBSTRING* vr$29 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC1$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		goto label$535;
		label$536:;
		{
			HMOV( *(uint8**)&DST1$1, *(uint8**)&SRC1$1 );
		}
		label$535:;
		HMOV( *(uint8**)&DST2$1, *(uint8**)&DST1$1 );
		FBSTRING* vr$30 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"sar ", 5ll, 0 );
		FBSTRING* vr$31 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST2$1, -1ll, 0 );
		FBSTRING* vr$32 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", 31", 5ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	goto label$533;
	label$534:;
	{
		if( SDSIZE$1 >= 4ll ) goto label$538;
		{
			FBSTRING* vr$34 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"movzx ", 7ll, 0 );
			FBSTRING* vr$35 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST1$1, -1ll, 0 );
			FBSTRING* vr$36 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
			FBSTRING* vr$37 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC1$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		goto label$537;
		label$538:;
		{
			HMOV( *(uint8**)&DST1$1, *(uint8**)&SRC1$1 );
		}
		label$537:;
		HMOV( *(uint8**)&DST2$1, (uint8*)"0" );
	}
	label$533:;
	label$525:;
}

static void _EMITLOADF2L( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$952$1;
	label$539:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING AUX$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)SVREG$1 == 4ll ) goto label$542;
	{
		FBSTRING* vr$2 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fld ", 5ll, 0 );
		FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	label$542:;
	label$541:;
	HPREPOPERAND64( DVREG$1, &DST$1, &AUX$1 );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$543;
	TMP$952$1 = 22ll;
	goto label$1643;
	label$543:;
	TMP$952$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$1643:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$952$1 * 56ll)) + 16ll) == 0ll ) goto label$545;
	{
		FBSTRING TMP$953$2;
		FBSTRING TMP$954$2;
		OUTP( (uint8*)"sub esp, 8" );
		__builtin_memset( &TMP$953$2, 0, 24ll );
		FBSTRING* vr$16 = fb_StrConcat( &TMP$953$2, (void*)"fistp ", 7ll, (void*)(((uint8*)DTYPETB$ + (*(int64*)((uint8*)DVREG$1 + 8ll) * 24ll)) + 8ll), 12ll );
		__builtin_memset( &TMP$954$2, 0, 24ll );
		FBSTRING* vr$19 = fb_StrConcat( &TMP$954$2, (void*)vr$16, -1ll, (void*)" [esp]", 7ll );
		FBSTRING* vr$20 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$19, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
		HPOP( *(uint8**)&DST$1 );
		HPOP( *(uint8**)&AUX$1 );
	}
	goto label$544;
	label$545:;
	{
		int64 TMP$955$2;
		FBSTRING TMP$963$2;
		FBSTRING TMP$964$2;
		FBSTRING TMP$965$2;
		static FBSTRING LABEL_GEQ$2;
		static FBSTRING LABEL_DONE$2;
		static int64 ISEAXFREE$2;
		uint8* vr$21 = SYMBUNIQUELABEL(  );
		fb_StrAssign( (void*)&LABEL_GEQ$2, -1ll, (void*)vr$21, 0ll, 0 );
		uint8* vr$22 = SYMBUNIQUELABEL(  );
		fb_StrAssign( (void*)&LABEL_DONE$2, -1ll, (void*)vr$22, 0ll, 0 );
		int64 vr$23 = HISREGFREE( 0ll, 5ll );
		ISEAXFREE$2 = vr$23;
		if( ISEAXFREE$2 != 0ll ) goto label$546;
		int64 vr$25 = HISREGINVREG( DVREG$1, 5ll );
		TMP$955$2 = (int64)-(vr$25 != 0ll);
		goto label$1644;
		label$546:;
		TMP$955$2 = -1ll;
		label$1644:;
		ISEAXFREE$2 = TMP$955$2;
		OUTP( (uint8*)"sub esp, 8" );
		OUTP( (uint8*)"mov dword ptr [esp], 0x5F000000" );
		OUTP( (uint8*)"fcom dword ptr [esp]" );
		if( ISEAXFREE$2 == 0ll ) goto label$548;
		{
			OUTP( (uint8*)"fnstsw ax" );
			OUTP( (uint8*)"test ah, 1" );
		}
		goto label$547;
		label$548:;
		{
			HPUSH( (uint8*)"eax" );
			OUTP( (uint8*)"fnstsw ax" );
			OUTP( (uint8*)"test ah, 1" );
			HPOP( (uint8*)"eax" );
		}
		label$547:;
		HBRANCH( (uint8*)"jz", *(uint8**)&LABEL_GEQ$2 );
		OUTP( (uint8*)"fistp qword ptr [esp]" );
		HPOP( *(uint8**)&DST$1 );
		HPOP( *(uint8**)&AUX$1 );
		HBRANCH( (uint8*)"jmp", *(uint8**)&LABEL_DONE$2 );
		HLABEL( *(uint8**)&LABEL_GEQ$2 );
		OUTP( (uint8*)"fsub dword ptr [esp]" );
		OUTP( (uint8*)"fistp qword ptr [esp]" );
		HPOP( *(uint8**)&DST$1 );
		HPOP( *(uint8**)&AUX$1 );
		__builtin_memset( &TMP$965$2, 0, 24ll );
		__builtin_memset( &TMP$963$2, 0, 24ll );
		FBSTRING* vr$31 = fb_StrConcat( &TMP$963$2, (void*)"xor ", 5ll, (void*)&AUX$1, -1ll );
		__builtin_memset( &TMP$964$2, 0, 24ll );
		FBSTRING* vr$34 = fb_StrConcat( &TMP$964$2, (void*)vr$31, -1ll, (void*)", 0x80000000", 13ll );
		FBSTRING* vr$36 = fb_StrAssign( (void*)&TMP$965$2, -1ll, (void*)vr$34, -1ll, 0 );
		OUTP( *(uint8**)&TMP$965$2 );
		fb_StrDelete( &TMP$965$2 );
		HLABEL( *(uint8**)&LABEL_DONE$2 );
	}
	label$544:;
	label$540:;
}

static void _EMITLOADI2I( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$966$1;
	int64 TMP$967$1;
	label$549:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 DDSIZE$1;
	static int64 SDSIZE$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$551;
	TMP$966$1 = 22ll;
	goto label$1645;
	label$551:;
	TMP$966$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$1645:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$966$1 * 56ll)) + 8ll);
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$552;
	TMP$967$1 = 22ll;
	goto label$1646;
	label$552:;
	TMP$967$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$1646:;
	SDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$967$1 * 56ll)) + 8ll);
	if( DDSIZE$1 != 1ll ) goto label$554;
	{
		if( *(int64*)SVREG$1 != 0ll ) goto label$556;
		{
			DDSIZE$1 = 4ll;
		}
		label$556:;
		label$555:;
	}
	label$554:;
	label$553:;
	if( DDSIZE$1 != SDSIZE$1 ) goto label$558;
	{
		FBSTRING* vr$16 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mov ", 5ll, 0 );
		FBSTRING* vr$17 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		FBSTRING* vr$18 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
		FBSTRING* vr$19 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	goto label$557;
	label$558:;
	{
		if( DDSIZE$1 <= SDSIZE$1 ) goto label$560;
		{
			int64 TMP$968$3;
			if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$561;
			TMP$968$3 = 22ll;
			goto label$1647;
			label$561:;
			TMP$968$3 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
			label$1647:;
			if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$968$3 * 56ll)) + 16ll) == 0ll ) goto label$563;
			{
				fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"movsx ", 7ll, 0 );
			}
			goto label$562;
			label$563:;
			{
				fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"movzx ", 7ll, 0 );
			}
			label$562:;
			FBSTRING* vr$28 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
			FBSTRING* vr$29 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
			FBSTRING* vr$30 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		goto label$559;
		label$560:;
		{
			if( *(int64*)SVREG$1 != 4ll ) goto label$565;
			{
				if( *(int64*)((uint8*)SVREG$1 + 24ll) == *(int64*)((uint8*)DVREG$1 + 24ll) ) goto label$567;
				{
					static FBSTRING AUX$5;
					static int64 DTYPE$5;
					DTYPE$5 = *(int64*)((uint8*)DVREG$1 + 8ll);
					if( DDSIZE$1 != 1ll ) goto label$569;
					{
						if( ((int64)-(*(int64*)((uint8*)SVREG$1 + 24ll) == 2ll) | (int64)-(*(int64*)((uint8*)SVREG$1 + 24ll) == 1ll)) == 0ll ) goto label$571;
						{
							DTYPE$5 = 7ll;
							uint8* vr$45 = HGETREGNAME( DTYPE$5, *(int64*)((uint8*)DVREG$1 + 24ll) );
							fb_StrAssign( (void*)&DST$1, -1ll, (void*)vr$45, 0ll, 0 );
						}
						label$571:;
						label$570:;
					}
					label$569:;
					label$568:;
					uint8* vr$47 = HGETREGNAME( DTYPE$5, *(int64*)((uint8*)SVREG$1 + 24ll) );
					fb_StrAssign( (void*)&AUX$5, -1ll, (void*)vr$47, 0ll, 0 );
					FBSTRING* vr$48 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mov ", 5ll, 0 );
					FBSTRING* vr$49 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
					FBSTRING* vr$50 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
					FBSTRING* vr$51 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&AUX$5, -1ll, 0 );
					OUTP( *(uint8**)&OSTR$1 );
				}
				label$567:;
				label$566:;
			}
			goto label$564;
			label$565:;
			{
				HPREPOPERAND( SVREG$1, &SRC$1, *($11FB_DATATYPE*)((uint8*)DVREG$1 + 8ll), 0ll, 0ll, -1ll );
				FBSTRING* vr$53 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mov ", 5ll, 0 );
				FBSTRING* vr$54 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
				FBSTRING* vr$55 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
				FBSTRING* vr$56 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
				OUTP( *(uint8**)&OSTR$1 );
			}
			label$564:;
		}
		label$559:;
	}
	label$557:;
	label$550:;
}

static void _EMITLOADL2I( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$572:;
	_EMITLOADI2I( DVREG$1, SVREG$1 );
	label$573:;
}

static void _EMITLOADF2I( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$969$1;
	label$574:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 DDSIZE$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$576;
	TMP$969$1 = 22ll;
	goto label$1648;
	label$576:;
	TMP$969$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$1648:;
	DDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$969$1 * 56ll)) + 8ll);
	if( *(int64*)SVREG$1 == 4ll ) goto label$578;
	{
		FBSTRING* vr$8 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fld ", 5ll, 0 );
		FBSTRING* vr$9 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	label$578:;
	label$577:;
	if( DDSIZE$1 != 1ll ) goto label$580;
	{
		OUTP( (uint8*)"sub esp, 4" );
		OUTP( (uint8*)"fistp dword ptr [esp]" );
		if( *(int64*)DVREG$1 != 4ll ) goto label$582;
		{
			HMOV( *(uint8**)&DST$1, (uint8*)"byte ptr [esp]" );
			OUTP( (uint8*)"add esp, 4" );
		}
		goto label$581;
		label$582:;
		{
			static FBSTRING AUX$3;
			static FBSTRING AUX8$3;
			static int64 REG$3;
			static int64 ISFREE$3;
			int64 vr$13 = HFINDREGNOTINVREG( DVREG$1, -1ll );
			REG$3 = vr$13;
			uint8* vr$14 = HGETREGNAME( 1ll, REG$3 );
			fb_StrAssign( (void*)&AUX8$3, -1ll, (void*)vr$14, 0ll, 0 );
			uint8* vr$15 = HGETREGNAME( 7ll, REG$3 );
			fb_StrAssign( (void*)&AUX$3, -1ll, (void*)vr$15, 0ll, 0 );
			int64 vr$16 = HISREGFREE( 0ll, REG$3 );
			ISFREE$3 = vr$16;
			if( ISFREE$3 != 0ll ) goto label$584;
			{
				HXCHG( *(uint8**)&AUX$3, (uint8*)"dword ptr [esp]" );
			}
			goto label$583;
			label$584:;
			{
				HMOV( *(uint8**)&AUX8$3, (uint8*)"byte ptr [esp]" );
			}
			label$583:;
			HMOV( *(uint8**)&DST$1, *(uint8**)&AUX8$3 );
			if( ISFREE$3 != 0ll ) goto label$586;
			{
				HPOP( *(uint8**)&AUX$3 );
			}
			goto label$585;
			label$586:;
			{
				OUTP( (uint8*)"add esp, 4" );
			}
			label$585:;
		}
		label$581:;
	}
	goto label$579;
	label$580:;
	{
		int64 TMP$970$2;
		if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$587;
		TMP$970$2 = 22ll;
		goto label$1649;
		label$587:;
		TMP$970$2 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
		label$1649:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$970$2 * 56ll)) + 16ll) == 0ll ) goto label$589;
		{
			FBSTRING TMP$971$3;
			FBSTRING TMP$972$3;
			OUTP( (uint8*)"sub esp, 4" );
			__builtin_memset( &TMP$971$3, 0, 24ll );
			FBSTRING* vr$31 = fb_StrConcat( &TMP$971$3, (void*)"fistp ", 7ll, (void*)(((uint8*)DTYPETB$ + (*(int64*)((uint8*)DVREG$1 + 8ll) * 24ll)) + 8ll), 12ll );
			__builtin_memset( &TMP$972$3, 0, 24ll );
			FBSTRING* vr$34 = fb_StrConcat( &TMP$972$3, (void*)vr$31, -1ll, (void*)" [esp]", 7ll );
			FBSTRING* vr$35 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$34, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
			if( DDSIZE$1 >= 4ll ) goto label$591;
			{
				uint8* vr$38 = HGETREGNAME( 7ll, *(int64*)((uint8*)DVREG$1 + 24ll) );
				fb_StrAssign( (void*)&DST$1, -1ll, (void*)vr$38, 0ll, 0 );
			}
			label$591:;
			label$590:;
			HPOP( *(uint8**)&DST$1 );
		}
		goto label$588;
		label$589:;
		{
			if( DDSIZE$1 != 4ll ) goto label$593;
			{
				OUTP( (uint8*)"sub esp, 8" );
				OUTP( (uint8*)"fistp qword ptr [esp]" );
				HPOP( *(uint8**)&DST$1 );
				OUTP( (uint8*)"add esp, 4" );
			}
			goto label$592;
			label$593:;
			{
				OUTP( (uint8*)"sub esp, 4" );
				OUTP( (uint8*)"fistp dword ptr [esp]" );
				HPOP( *(uint8**)&DST$1 );
				OUTP( (uint8*)"add esp, 2" );
			}
			label$592:;
		}
		label$588:;
	}
	label$579:;
	label$575:;
}

static void _EMITLOADL2F( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$594:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING AUX$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( ((int64)-(*(int64*)SVREG$1 == 4ll) | (int64)-(*(int64*)SVREG$1 == 0ll)) == 0ll ) goto label$597;
	{
		int64 TMP$973$2;
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$598;
		TMP$973$2 = 22ll;
		goto label$1650;
		label$598:;
		TMP$973$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$1650:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$973$2 * 56ll)) + 16ll) == 0ll ) goto label$600;
		{
			FBSTRING TMP$974$3;
			FBSTRING TMP$975$3;
			HPREPOPERAND64( SVREG$1, &SRC$1, &AUX$1 );
			HPUSH( *(uint8**)&AUX$1 );
			HPUSH( *(uint8**)&SRC$1 );
			__builtin_memset( &TMP$974$3, 0, 24ll );
			FBSTRING* vr$18 = fb_StrConcat( &TMP$974$3, (void*)"fild ", 6ll, (void*)(((uint8*)DTYPETB$ + (*(int64*)((uint8*)SVREG$1 + 8ll) * 24ll)) + 8ll), 12ll );
			__builtin_memset( &TMP$975$3, 0, 24ll );
			FBSTRING* vr$21 = fb_StrConcat( &TMP$975$3, (void*)vr$18, -1ll, (void*)" [esp]", 7ll );
			FBSTRING* vr$22 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$21, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
			OUTP( (uint8*)"add esp, 8" );
		}
		goto label$599;
		label$600:;
		{
			HPREPOPERAND64( SVREG$1, &SRC$1, &AUX$1 );
			HPUSH( *(uint8**)&AUX$1 );
			HPUSH( *(uint8**)&SRC$1 );
			OUTP( (uint8*)"fild qword ptr [esp]" );
			OUTP( (uint8*)"add esp, 8" );
			HULONG2DBL( SVREG$1 );
		}
		label$599:;
	}
	goto label$596;
	label$597:;
	{
		int64 TMP$976$2;
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$601;
		TMP$976$2 = 22ll;
		goto label$1651;
		label$601:;
		TMP$976$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$1651:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$976$2 * 56ll)) + 16ll) == 0ll ) goto label$603;
		{
			FBSTRING* vr$30 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fild ", 6ll, 0 );
			FBSTRING* vr$31 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		goto label$602;
		label$603:;
		{
			FBSTRING* vr$32 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fild ", 6ll, 0 );
			FBSTRING* vr$33 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
			HULONG2DBL( SVREG$1 );
		}
		label$602:;
	}
	label$596:;
	label$595:;
}

static void _EMITLOADI2F( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$977$1;
	label$604:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 SDSIZE$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$606;
	TMP$977$1 = 22ll;
	goto label$1652;
	label$606:;
	TMP$977$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$1652:;
	SDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$977$1 * 56ll)) + 8ll);
	if( SDSIZE$1 != 1ll ) goto label$608;
	{
		int64 TMP$978$2;
		static FBSTRING AUX$2;
		static int64 ISFREE$2;
		static int64 REG$2;
		int64 vr$7 = HFINDREGNOTINVREG( SVREG$1, 0ll );
		REG$2 = vr$7;
		uint8* vr$8 = HGETREGNAME( 7ll, REG$2 );
		fb_StrAssign( (void*)&AUX$2, -1ll, (void*)vr$8, 0ll, 0 );
		int64 vr$9 = HISREGFREE( 0ll, REG$2 );
		ISFREE$2 = vr$9;
		if( ISFREE$2 != 0ll ) goto label$610;
		{
			HPUSH( *(uint8**)&AUX$2 );
		}
		label$610:;
		label$609:;
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$611;
		TMP$978$2 = 22ll;
		goto label$1653;
		label$611:;
		TMP$978$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$1653:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$978$2 * 56ll)) + 16ll) == 0ll ) goto label$613;
		{
			FBSTRING* vr$18 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"movsx ", 7ll, 0 );
			FBSTRING* vr$19 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&AUX$2, -1ll, 0 );
			FBSTRING* vr$20 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
			FBSTRING* vr$21 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		goto label$612;
		label$613:;
		{
			FBSTRING* vr$22 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"movzx ", 7ll, 0 );
			FBSTRING* vr$23 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&AUX$2, -1ll, 0 );
			FBSTRING* vr$24 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
			FBSTRING* vr$25 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		label$612:;
		HPUSH( *(uint8**)&AUX$2 );
		OUTP( (uint8*)"fild dword ptr [esp]" );
		OUTP( (uint8*)"add esp, 4" );
		if( ISFREE$2 != 0ll ) goto label$615;
		{
			HPOP( *(uint8**)&AUX$2 );
		}
		label$615:;
		label$614:;
		goto label$605;
	}
	label$608:;
	label$607:;
	if( ((int64)-(*(int64*)SVREG$1 == 4ll) | (int64)-(*(int64*)SVREG$1 == 0ll)) == 0ll ) goto label$617;
	{
		int64 TMP$979$2;
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$618;
		TMP$979$2 = 22ll;
		goto label$1654;
		label$618:;
		TMP$979$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$1654:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$979$2 * 56ll)) + 16ll) == 0ll ) goto label$620;
		{
			FBSTRING TMP$980$3;
			FBSTRING TMP$981$3;
			if( ((int64)-(*(int64*)SVREG$1 == 4ll) & (int64)-(SDSIZE$1 < 4ll)) == 0ll ) goto label$622;
			{
				uint8* vr$46 = HGETREGNAME( 7ll, *(int64*)((uint8*)SVREG$1 + 24ll) );
				fb_StrAssign( (void*)&SRC$1, -1ll, (void*)vr$46, 0ll, 0 );
			}
			label$622:;
			label$621:;
			HPUSH( *(uint8**)&SRC$1 );
			__builtin_memset( &TMP$980$3, 0, 24ll );
			FBSTRING* vr$52 = fb_StrConcat( &TMP$980$3, (void*)"fild ", 6ll, (void*)(((uint8*)DTYPETB$ + (*(int64*)((uint8*)SVREG$1 + 8ll) * 24ll)) + 8ll), 12ll );
			__builtin_memset( &TMP$981$3, 0, 24ll );
			FBSTRING* vr$55 = fb_StrConcat( &TMP$981$3, (void*)vr$52, -1ll, (void*)" [esp]", 7ll );
			FBSTRING* vr$56 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$55, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
			OUTP( (uint8*)"add esp, 4" );
		}
		goto label$619;
		label$620:;
		{
			if( SDSIZE$1 != 4ll ) goto label$624;
			{
				HPUSH( (uint8*)"0" );
				HPUSH( *(uint8**)&SRC$1 );
				OUTP( (uint8*)"fild qword ptr [esp]" );
				OUTP( (uint8*)"add esp, 8" );
			}
			goto label$623;
			label$624:;
			{
				if( *(int64*)SVREG$1 == 0ll ) goto label$626;
				{
					HPUSH( (uint8*)"0" );
				}
				label$626:;
				label$625:;
				HPUSH( *(uint8**)&SRC$1 );
				OUTP( (uint8*)"fild dword ptr [esp]" );
				if( *(int64*)SVREG$1 == 0ll ) goto label$628;
				{
					OUTP( (uint8*)"add esp, 6" );
				}
				goto label$627;
				label$628:;
				{
					OUTP( (uint8*)"add esp, 4" );
				}
				label$627:;
			}
			label$623:;
		}
		label$619:;
	}
	goto label$616;
	label$617:;
	{
		int64 TMP$982$2;
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$629;
		TMP$982$2 = 22ll;
		goto label$1655;
		label$629:;
		TMP$982$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$1655:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$982$2 * 56ll)) + 16ll) == 0ll ) goto label$631;
		{
			FBSTRING* vr$69 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fild ", 6ll, 0 );
			FBSTRING* vr$70 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		goto label$630;
		label$631:;
		{
			if( SDSIZE$1 != 4ll ) goto label$633;
			{
				HPUSH( (uint8*)"0" );
				HPUSH( *(uint8**)&SRC$1 );
				OUTP( (uint8*)"fild qword ptr [esp]" );
				OUTP( (uint8*)"add esp, 8" );
			}
			goto label$632;
			label$633:;
			{
				HPUSH( (uint8*)"0" );
				HPUSH( *(uint8**)&SRC$1 );
				OUTP( (uint8*)"fild dword ptr [esp]" );
				OUTP( (uint8*)"add esp, 6" );
			}
			label$632:;
		}
		label$630:;
	}
	label$616:;
	label$605:;
}

static void _EMITLOADF2F( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$634:;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fld ", 5ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$635:;
}

static void _EMITMOVL( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$636:;
	static FBSTRING DST1$1;
	static FBSTRING DST2$1;
	static FBSTRING SRC1$1;
	static FBSTRING SRC2$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND64( DVREG$1, &DST1$1, &DST2$1 );
	HPREPOPERAND64( SVREG$1, &SRC1$1, &SRC2$1 );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mov ", 5ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST1$1, -1ll, 0 );
	FBSTRING* vr$2 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC1$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mov ", 5ll, 0 );
	FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST2$1, -1ll, 0 );
	FBSTRING* vr$6 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$7 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC2$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$637:;
}

static void _EMITMOVI( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$983$1;
	label$638:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$640;
	TMP$983$1 = 22ll;
	goto label$1656;
	label$640:;
	TMP$983$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$1656:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$983$1 * 56ll)) + 8ll) != 1ll ) goto label$642;
	{
		uint8* vr$8 = HGETREGNAME( 7ll, *(int64*)((uint8*)DVREG$1 + 24ll) );
		fb_StrAssign( (void*)&DST$1, -1ll, (void*)vr$8, 0ll, 0 );
		uint8* vr$10 = HGETREGNAME( 7ll, *(int64*)((uint8*)SVREG$1 + 24ll) );
		fb_StrAssign( (void*)&SRC$1, -1ll, (void*)vr$10, 0ll, 0 );
	}
	goto label$641;
	label$642:;
	{
		HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
		HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	}
	label$641:;
	FBSTRING* vr$11 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mov ", 5ll, 0 );
	FBSTRING* vr$12 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
	FBSTRING* vr$13 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$14 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$639:;
}

static void _EMITMOVF( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$643:;
	label$644:;
}

static void _EMITADDL( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$645:;
	static FBSTRING DST1$1;
	static FBSTRING DST2$1;
	static FBSTRING SRC1$1;
	static FBSTRING SRC2$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND64( DVREG$1, &DST1$1, &DST2$1 );
	HPREPOPERAND64( SVREG$1, &SRC1$1, &SRC2$1 );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"add ", 5ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST1$1, -1ll, 0 );
	FBSTRING* vr$2 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC1$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"adc ", 5ll, 0 );
	FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST2$1, -1ll, 0 );
	FBSTRING* vr$6 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$7 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC2$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$646:;
}

static void _EMITADDI( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$647:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 DOINC$1;
	static int64 DODEC$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	DOINC$1 = 0ll;
	DODEC$1 = 0ll;
	if( *(int64*)SVREG$1 != 0ll ) goto label$650;
	{
		{
			int64 TMP$986$3;
			TMP$986$3 = *(int64*)((uint8*)SVREG$1 + 48ll);
			if( TMP$986$3 != 1ll ) goto label$652;
			label$653:;
			{
				DOINC$1 = -1ll;
			}
			goto label$651;
			label$652:;
			if( TMP$986$3 != -1ll ) goto label$654;
			label$655:;
			{
				DODEC$1 = -1ll;
			}
			label$654:;
			label$651:;
		}
	}
	label$650:;
	label$649:;
	if( DOINC$1 == 0ll ) goto label$657;
	{
		FBSTRING* vr$6 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"inc ", 5ll, 0 );
		FBSTRING* vr$7 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	goto label$656;
	label$657:;
	if( DODEC$1 == 0ll ) goto label$658;
	{
		FBSTRING* vr$9 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"dec ", 5ll, 0 );
		FBSTRING* vr$10 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	goto label$656;
	label$658:;
	{
		FBSTRING* vr$11 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"add ", 5ll, 0 );
		FBSTRING* vr$12 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		FBSTRING* vr$13 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
		FBSTRING* vr$14 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	label$656:;
	label$648:;
}

static void _EMITADDF( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$659:;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)SVREG$1 != 4ll ) goto label$662;
	{
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"faddp", 6ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	goto label$661;
	label$662:;
	{
		int64 TMP$989$2;
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$663;
		TMP$989$2 = 22ll;
		goto label$1657;
		label$663:;
		TMP$989$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$1657:;
		if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$989$2 * 56ll)) != 1ll ) goto label$665;
		{
			FBSTRING* vr$9 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fadd ", 6ll, 0 );
			FBSTRING* vr$10 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		goto label$664;
		label$665:;
		{
			FBSTRING* vr$11 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fiadd ", 7ll, 0 );
			FBSTRING* vr$12 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		label$664:;
	}
	label$661:;
	label$660:;
}

static void _EMITSUBL( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$666:;
	static FBSTRING DST1$1;
	static FBSTRING DST2$1;
	static FBSTRING SRC1$1;
	static FBSTRING SRC2$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND64( DVREG$1, &DST1$1, &DST2$1 );
	HPREPOPERAND64( SVREG$1, &SRC1$1, &SRC2$1 );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"sub ", 5ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST1$1, -1ll, 0 );
	FBSTRING* vr$2 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC1$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"sbb ", 5ll, 0 );
	FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST2$1, -1ll, 0 );
	FBSTRING* vr$6 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$7 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC2$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$667:;
}

static void _EMITSUBI( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$668:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 DOINC$1;
	static int64 DODEC$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	DOINC$1 = 0ll;
	DODEC$1 = 0ll;
	if( *(int64*)SVREG$1 != 0ll ) goto label$671;
	{
		{
			int64 TMP$994$3;
			TMP$994$3 = *(int64*)((uint8*)SVREG$1 + 48ll);
			if( TMP$994$3 != 1ll ) goto label$673;
			label$674:;
			{
				DODEC$1 = -1ll;
			}
			goto label$672;
			label$673:;
			if( TMP$994$3 != -1ll ) goto label$675;
			label$676:;
			{
				DOINC$1 = -1ll;
			}
			label$675:;
			label$672:;
		}
	}
	label$671:;
	label$670:;
	if( DODEC$1 == 0ll ) goto label$678;
	{
		FBSTRING* vr$6 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"dec ", 5ll, 0 );
		FBSTRING* vr$7 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	goto label$677;
	label$678:;
	if( DOINC$1 == 0ll ) goto label$679;
	{
		FBSTRING* vr$9 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"inc ", 5ll, 0 );
		FBSTRING* vr$10 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	goto label$677;
	label$679:;
	{
		FBSTRING* vr$11 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"sub ", 5ll, 0 );
		FBSTRING* vr$12 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		FBSTRING* vr$13 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
		FBSTRING* vr$14 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	label$677:;
	label$669:;
}

static void _EMITSUBF( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$680:;
	static FBSTRING SRC$1;
	static int64 DOINC$1;
	static int64 DODEC$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)SVREG$1 != 4ll ) goto label$683;
	{
		OUTP( (uint8*)"fsubrp" );
	}
	goto label$682;
	label$683:;
	{
		int64 TMP$995$2;
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$684;
		TMP$995$2 = 22ll;
		goto label$1658;
		label$684:;
		TMP$995$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$1658:;
		if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$995$2 * 56ll)) != 1ll ) goto label$686;
		{
			FBSTRING* vr$9 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fsub ", 6ll, 0 );
			FBSTRING* vr$10 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		goto label$685;
		label$686:;
		{
			FBSTRING* vr$11 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fisub ", 7ll, 0 );
			FBSTRING* vr$12 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		label$685:;
	}
	label$682:;
	label$681:;
}

static void _EMITMULL( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	FBSTRING TMP$999$1;
	FBSTRING TMP$1000$1;
	FBSTRING TMP$1001$1;
	FBSTRING TMP$1003$1;
	FBSTRING TMP$1004$1;
	FBSTRING TMP$1005$1;
	FBSTRING TMP$1007$1;
	FBSTRING TMP$1008$1;
	FBSTRING TMP$1009$1;
	FBSTRING TMP$1011$1;
	FBSTRING TMP$1012$1;
	FBSTRING TMP$1013$1;
	FBSTRING TMP$1016$1;
	FBSTRING TMP$1017$1;
	FBSTRING TMP$1018$1;
	FBSTRING TMP$1020$1;
	FBSTRING TMP$1021$1;
	FBSTRING TMP$1022$1;
	FBSTRING TMP$1026$1;
	FBSTRING TMP$1027$1;
	FBSTRING TMP$1028$1;
	label$687:;
	static FBSTRING DST1$1;
	static FBSTRING DST2$1;
	static FBSTRING SRC1$1;
	static FBSTRING SRC2$1;
	static int64 ISEAXFREE$1;
	static int64 ISEDXFREE$1;
	static int64 EAXINDEST$1;
	static int64 EDXINDEST$1;
	static int64 OFS$1;
	HPREPOPERAND64( DVREG$1, &DST1$1, &DST2$1 );
	HPREPOPERAND64( SVREG$1, &SRC1$1, &SRC2$1 );
	int64 vr$0 = HISREGFREE( 0ll, 5ll );
	ISEAXFREE$1 = vr$0;
	int64 vr$1 = HISREGFREE( 0ll, 0ll );
	ISEDXFREE$1 = vr$1;
	int64 vr$2 = HISREGINVREG( DVREG$1, 5ll );
	EAXINDEST$1 = vr$2;
	int64 vr$3 = HISREGINVREG( DVREG$1, 0ll );
	EDXINDEST$1 = vr$3;
	HPUSH( *(uint8**)&SRC2$1 );
	HPUSH( *(uint8**)&SRC1$1 );
	HPUSH( *(uint8**)&DST2$1 );
	HPUSH( *(uint8**)&DST1$1 );
	OFS$1 = 0ll;
	if( EDXINDEST$1 == 0ll ) goto label$690;
	{
		if( *(int64*)DVREG$1 == 4ll ) goto label$692;
		{
			OFS$1 = OFS$1 + 4ll;
			HPUSH( (uint8*)"edx" );
		}
		label$692:;
		label$691:;
	}
	goto label$689;
	label$690:;
	{
		if( ISEDXFREE$1 != 0ll ) goto label$694;
		{
			OFS$1 = OFS$1 + 4ll;
			HPUSH( (uint8*)"edx" );
		}
		label$694:;
		label$693:;
	}
	label$689:;
	if( EAXINDEST$1 == 0ll ) goto label$696;
	{
		if( *(int64*)DVREG$1 == 4ll ) goto label$698;
		{
			OFS$1 = OFS$1 + 4ll;
			HPUSH( (uint8*)"eax" );
		}
		label$698:;
		label$697:;
	}
	goto label$695;
	label$696:;
	{
		if( ISEAXFREE$1 != 0ll ) goto label$700;
		{
			OFS$1 = OFS$1 + 4ll;
			HPUSH( (uint8*)"eax" );
		}
		label$700:;
		label$699:;
	}
	label$695:;
	__builtin_memset( &TMP$1001$1, 0, 24ll );
	FBSTRING* vr$17 = fb_LongintToStr( OFS$1 );
	__builtin_memset( &TMP$999$1, 0, 24ll );
	FBSTRING* vr$20 = fb_StrConcat( &TMP$999$1, (void*)"mov eax, [esp+", 15ll, (void*)vr$17, -1ll );
	__builtin_memset( &TMP$1000$1, 0, 24ll );
	FBSTRING* vr$23 = fb_StrConcat( &TMP$1000$1, (void*)vr$20, -1ll, (void*)"]", 2ll );
	FBSTRING* vr$25 = fb_StrAssign( (void*)&TMP$1001$1, -1ll, (void*)vr$23, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1001$1 );
	fb_StrDelete( &TMP$1001$1 );
	__builtin_memset( &TMP$1005$1, 0, 24ll );
	FBSTRING* vr$29 = fb_LongintToStr( OFS$1 + 8ll );
	__builtin_memset( &TMP$1003$1, 0, 24ll );
	FBSTRING* vr$32 = fb_StrConcat( &TMP$1003$1, (void*)"mul dword ptr [esp+", 20ll, (void*)vr$29, -1ll );
	__builtin_memset( &TMP$1004$1, 0, 24ll );
	FBSTRING* vr$35 = fb_StrConcat( &TMP$1004$1, (void*)vr$32, -1ll, (void*)"]", 2ll );
	FBSTRING* vr$37 = fb_StrAssign( (void*)&TMP$1005$1, -1ll, (void*)vr$35, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1005$1 );
	fb_StrDelete( &TMP$1005$1 );
	__builtin_memset( &TMP$1009$1, 0, 24ll );
	FBSTRING* vr$40 = fb_LongintToStr( OFS$1 );
	__builtin_memset( &TMP$1007$1, 0, 24ll );
	FBSTRING* vr$43 = fb_StrConcat( &TMP$1007$1, (void*)"xchg eax, [esp+", 16ll, (void*)vr$40, -1ll );
	__builtin_memset( &TMP$1008$1, 0, 24ll );
	FBSTRING* vr$46 = fb_StrConcat( &TMP$1008$1, (void*)vr$43, -1ll, (void*)"]", 2ll );
	FBSTRING* vr$48 = fb_StrAssign( (void*)&TMP$1009$1, -1ll, (void*)vr$46, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1009$1 );
	fb_StrDelete( &TMP$1009$1 );
	__builtin_memset( &TMP$1013$1, 0, 24ll );
	FBSTRING* vr$52 = fb_LongintToStr( OFS$1 + 12ll );
	__builtin_memset( &TMP$1011$1, 0, 24ll );
	FBSTRING* vr$55 = fb_StrConcat( &TMP$1011$1, (void*)"imul eax, [esp+", 16ll, (void*)vr$52, -1ll );
	__builtin_memset( &TMP$1012$1, 0, 24ll );
	FBSTRING* vr$58 = fb_StrConcat( &TMP$1012$1, (void*)vr$55, -1ll, (void*)"]", 2ll );
	FBSTRING* vr$60 = fb_StrAssign( (void*)&TMP$1013$1, -1ll, (void*)vr$58, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1013$1 );
	fb_StrDelete( &TMP$1013$1 );
	OUTP( (uint8*)"add eax, edx" );
	__builtin_memset( &TMP$1018$1, 0, 24ll );
	FBSTRING* vr$64 = fb_LongintToStr( OFS$1 + 4ll );
	__builtin_memset( &TMP$1016$1, 0, 24ll );
	FBSTRING* vr$67 = fb_StrConcat( &TMP$1016$1, (void*)"mov edx, [esp+", 15ll, (void*)vr$64, -1ll );
	__builtin_memset( &TMP$1017$1, 0, 24ll );
	FBSTRING* vr$70 = fb_StrConcat( &TMP$1017$1, (void*)vr$67, -1ll, (void*)"]", 2ll );
	FBSTRING* vr$72 = fb_StrAssign( (void*)&TMP$1018$1, -1ll, (void*)vr$70, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1018$1 );
	fb_StrDelete( &TMP$1018$1 );
	__builtin_memset( &TMP$1022$1, 0, 24ll );
	FBSTRING* vr$76 = fb_LongintToStr( OFS$1 + 8ll );
	__builtin_memset( &TMP$1020$1, 0, 24ll );
	FBSTRING* vr$79 = fb_StrConcat( &TMP$1020$1, (void*)"imul edx, [esp+", 16ll, (void*)vr$76, -1ll );
	__builtin_memset( &TMP$1021$1, 0, 24ll );
	FBSTRING* vr$82 = fb_StrConcat( &TMP$1021$1, (void*)vr$79, -1ll, (void*)"]", 2ll );
	FBSTRING* vr$84 = fb_StrAssign( (void*)&TMP$1022$1, -1ll, (void*)vr$82, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1022$1 );
	fb_StrDelete( &TMP$1022$1 );
	OUTP( (uint8*)"add edx, eax" );
	__builtin_memset( &TMP$1028$1, 0, 24ll );
	FBSTRING* vr$88 = fb_LongintToStr( OFS$1 + 4ll );
	__builtin_memset( &TMP$1026$1, 0, 24ll );
	FBSTRING* vr$91 = fb_StrConcat( &TMP$1026$1, (void*)"mov [esp+", 10ll, (void*)vr$88, -1ll );
	__builtin_memset( &TMP$1027$1, 0, 24ll );
	FBSTRING* vr$94 = fb_StrConcat( &TMP$1027$1, (void*)vr$91, -1ll, (void*)"], edx", 7ll );
	FBSTRING* vr$96 = fb_StrAssign( (void*)&TMP$1028$1, -1ll, (void*)vr$94, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1028$1 );
	fb_StrDelete( &TMP$1028$1 );
	if( EAXINDEST$1 == 0ll ) goto label$702;
	{
		if( *(int64*)DVREG$1 == 4ll ) goto label$704;
		{
			HPOP( (uint8*)"eax" );
		}
		label$704:;
		label$703:;
	}
	goto label$701;
	label$702:;
	{
		if( ISEAXFREE$1 != 0ll ) goto label$706;
		{
			HPOP( (uint8*)"eax" );
		}
		label$706:;
		label$705:;
	}
	label$701:;
	if( EDXINDEST$1 == 0ll ) goto label$708;
	{
		if( *(int64*)DVREG$1 == 4ll ) goto label$710;
		{
			HPOP( (uint8*)"edx" );
		}
		label$710:;
		label$709:;
	}
	goto label$707;
	label$708:;
	{
		if( ISEDXFREE$1 != 0ll ) goto label$712;
		{
			HPOP( (uint8*)"edx" );
		}
		label$712:;
		label$711:;
	}
	label$707:;
	HPOP( *(uint8**)&DST1$1 );
	HPOP( *(uint8**)&DST2$1 );
	OUTP( (uint8*)"add esp, 8" );
	label$688:;
}

static void _EMITMULI( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$713:;
	static int64 REG$1;
	static int64 ISFREE$1;
	static FBSTRING RNAME$1;
	static FBSTRING OSTR$1;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)DVREG$1 == 4ll ) goto label$716;
	{
		int64 vr$2 = HFINDREGNOTINVREG( SVREG$1, 0ll );
		REG$1 = vr$2;
		uint8* vr$4 = HGETREGNAME( *(int64*)((uint8*)SVREG$1 + 8ll), REG$1 );
		fb_StrAssign( (void*)&RNAME$1, -1ll, (void*)vr$4, 0ll, 0 );
		int64 vr$5 = HISREGFREE( 0ll, REG$1 );
		ISFREE$1 = vr$5;
		if( ISFREE$1 != 0ll ) goto label$718;
		{
			HPUSH( *(uint8**)&RNAME$1 );
		}
		label$718:;
		label$717:;
		HMOV( *(uint8**)&RNAME$1, *(uint8**)&DST$1 );
		FBSTRING* vr$7 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"imul ", 6ll, 0 );
		FBSTRING* vr$8 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		FBSTRING* vr$9 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
		FBSTRING* vr$10 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
		HMOV( *(uint8**)&DST$1, *(uint8**)&RNAME$1 );
		if( ISFREE$1 != 0ll ) goto label$720;
		{
			HPOP( *(uint8**)&RNAME$1 );
		}
		label$720:;
		label$719:;
	}
	goto label$715;
	label$716:;
	{
		FBSTRING* vr$12 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"imul ", 6ll, 0 );
		FBSTRING* vr$13 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		FBSTRING* vr$14 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
		FBSTRING* vr$15 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	label$715:;
	label$714:;
}

static void _EMITMULF( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$721:;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)SVREG$1 != 4ll ) goto label$724;
	{
		OUTP( (uint8*)"fmulp" );
	}
	goto label$723;
	label$724:;
	{
		int64 TMP$1030$2;
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$725;
		TMP$1030$2 = 22ll;
		goto label$1659;
		label$725:;
		TMP$1030$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$1659:;
		if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$1030$2 * 56ll)) != 1ll ) goto label$727;
		{
			FBSTRING* vr$9 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fmul ", 6ll, 0 );
			FBSTRING* vr$10 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		goto label$726;
		label$727:;
		{
			FBSTRING* vr$11 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fimul ", 7ll, 0 );
			FBSTRING* vr$12 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		label$726:;
	}
	label$723:;
	label$722:;
}

static void _EMITDIVF( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$728:;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)SVREG$1 != 4ll ) goto label$731;
	{
		OUTP( (uint8*)"fdivrp" );
	}
	goto label$730;
	label$731:;
	{
		int64 TMP$1033$2;
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$732;
		TMP$1033$2 = 22ll;
		goto label$1660;
		label$732:;
		TMP$1033$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$1660:;
		if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$1033$2 * 56ll)) != 1ll ) goto label$734;
		{
			FBSTRING* vr$9 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fdiv ", 6ll, 0 );
			FBSTRING* vr$10 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		goto label$733;
		label$734:;
		{
			FBSTRING* vr$11 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fidiv ", 7ll, 0 );
			FBSTRING* vr$12 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		label$733:;
	}
	label$730:;
	label$729:;
}

static void _EMITDIVI( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$1036$1;
	int64 TMP$1038$1;
	label$735:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 ECXTRASHED$1;
	static int64 EAXFREE$1;
	static int64 ECXFREE$1;
	static int64 EDXFREE$1;
	static int64 EAXINDEST$1;
	static int64 ECXINDEST$1;
	static int64 EDXINDEST$1;
	static int64 EAXINSOURCE$1;
	static int64 EDXINSOURCE$1;
	static FBSTRING EAX$1;
	static FBSTRING ECX$1;
	static FBSTRING EDX$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$737;
	TMP$1036$1 = 22ll;
	goto label$1661;
	label$737:;
	TMP$1036$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$1661:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1036$1 * 56ll)) + 8ll) != 4ll ) goto label$739;
	{
		fb_StrAssign( (void*)&EAX$1, -1ll, (void*)"eax", 4ll, 0 );
		fb_StrAssign( (void*)&ECX$1, -1ll, (void*)"ecx", 4ll, 0 );
		fb_StrAssign( (void*)&EDX$1, -1ll, (void*)"edx", 4ll, 0 );
	}
	goto label$738;
	label$739:;
	{
		fb_StrAssign( (void*)&EAX$1, -1ll, (void*)"ax", 3ll, 0 );
		fb_StrAssign( (void*)&ECX$1, -1ll, (void*)"cx", 3ll, 0 );
		fb_StrAssign( (void*)&EDX$1, -1ll, (void*)"dx", 3ll, 0 );
	}
	label$738:;
	ECXTRASHED$1 = 0ll;
	int64 vr$7 = HISREGFREE( 0ll, 5ll );
	EAXFREE$1 = vr$7;
	int64 vr$8 = HISREGFREE( 0ll, 3ll );
	ECXFREE$1 = vr$8;
	int64 vr$9 = HISREGFREE( 0ll, 0ll );
	EDXFREE$1 = vr$9;
	int64 vr$10 = HISREGINVREG( SVREG$1, 5ll );
	EAXINSOURCE$1 = vr$10;
	int64 vr$11 = HISREGINVREG( SVREG$1, 0ll );
	EDXINSOURCE$1 = vr$11;
	int64 vr$12 = HISREGINVREG( DVREG$1, 5ll );
	EAXINDEST$1 = vr$12;
	int64 vr$13 = HISREGINVREG( DVREG$1, 0ll );
	EDXINDEST$1 = vr$13;
	int64 vr$14 = HISREGINVREG( DVREG$1, 3ll );
	ECXINDEST$1 = vr$14;
	if( ((EAXINSOURCE$1 | EDXINSOURCE$1) | (int64)-(*(int64*)SVREG$1 == 0ll)) == 0ll ) goto label$741;
	{
		ECXTRASHED$1 = -1ll;
		if( ECXINDEST$1 == 0ll ) goto label$743;
		{
			HPUSH( (uint8*)"ecx" );
			if( *(int64*)DVREG$1 == 4ll ) goto label$745;
			{
				HPREPOPERAND( DVREG$1, &OSTR$1, 7ll, 0ll, 0ll, -1ll );
				HPUSH( *(uint8**)&OSTR$1 );
			}
			label$745:;
			label$744:;
		}
		goto label$742;
		label$743:;
		if( ECXFREE$1 != 0ll ) goto label$746;
		{
			HPUSH( (uint8*)"ecx" );
		}
		label$746:;
		label$742:;
		HMOV( *(uint8**)&ECX$1, *(uint8**)&SRC$1 );
		FBSTRING* vr$24 = fb_StrAssign( (void*)&SRC$1, -1ll, (void*)&ECX$1, -1ll, 0 );
	}
	label$741:;
	label$740:;
	if( EAXINDEST$1 != 0ll ) goto label$748;
	{
		if( (ECXINDEST$1 & ECXTRASHED$1) == 0ll ) goto label$750;
		{
			if( EAXFREE$1 != 0ll ) goto label$752;
			{
				OUTP( (uint8*)"xchg eax, [esp]" );
			}
			goto label$751;
			label$752:;
			{
				HPOP( (uint8*)"eax" );
			}
			label$751:;
		}
		goto label$749;
		label$750:;
		{
			if( EAXFREE$1 != 0ll ) goto label$754;
			{
				HPUSH( (uint8*)"eax" );
			}
			label$754:;
			label$753:;
			HMOV( *(uint8**)&EAX$1, *(uint8**)&DST$1 );
		}
		label$749:;
	}
	goto label$747;
	label$748:;
	{
		if( *(int64*)DVREG$1 == 4ll ) goto label$756;
		{
			HPUSH( (uint8*)"eax" );
			HMOV( *(uint8**)&EAX$1, *(uint8**)&DST$1 );
		}
		label$756:;
		label$755:;
	}
	label$747:;
	if( EDXINDEST$1 == 0ll ) goto label$758;
	{
		if( *(int64*)DVREG$1 == 4ll ) goto label$760;
		{
			HPUSH( (uint8*)"edx" );
		}
		label$760:;
		label$759:;
	}
	goto label$757;
	label$758:;
	if( EDXFREE$1 != 0ll ) goto label$761;
	{
		HPUSH( (uint8*)"edx" );
	}
	label$761:;
	label$757:;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$762;
	TMP$1038$1 = 22ll;
	goto label$1662;
	label$762:;
	TMP$1038$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$1662:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1038$1 * 56ll)) + 16ll) == 0ll ) goto label$764;
	{
		int64 TMP$1039$2;
		if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$765;
		TMP$1039$2 = 22ll;
		goto label$1663;
		label$765:;
		TMP$1039$2 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
		label$1663:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1039$2 * 56ll)) + 8ll) != 4ll ) goto label$767;
		{
			OUTP( (uint8*)"cdq" );
		}
		goto label$766;
		label$767:;
		{
			OUTP( (uint8*)"cwd" );
		}
		label$766:;
		FBSTRING* vr$50 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"idiv ", 6ll, 0 );
		FBSTRING* vr$51 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	goto label$763;
	label$764:;
	{
		FBSTRING* vr$52 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"xor ", 5ll, 0 );
		FBSTRING* vr$53 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&EDX$1, -1ll, 0 );
		FBSTRING* vr$54 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
		FBSTRING* vr$55 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&EDX$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
		FBSTRING* vr$56 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"div ", 5ll, 0 );
		FBSTRING* vr$57 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	label$763:;
	if( EDXINDEST$1 == 0ll ) goto label$769;
	{
		if( *(int64*)DVREG$1 == 4ll ) goto label$771;
		{
			HPOP( (uint8*)"edx" );
		}
		label$771:;
		label$770:;
	}
	goto label$768;
	label$769:;
	if( EDXFREE$1 != 0ll ) goto label$772;
	{
		HPOP( (uint8*)"edx" );
	}
	label$772:;
	label$768:;
	if( EAXINDEST$1 != 0ll ) goto label$774;
	{
		if( (ECXINDEST$1 & ECXTRASHED$1) == 0ll ) goto label$776;
		{
			if( *(int64*)DVREG$1 == 4ll ) goto label$778;
			{
				if( EAXFREE$1 != 0ll ) goto label$780;
				{
					HPOP( (uint8*)"ecx" );
					OUTP( (uint8*)"xchg ecx, [esp]" );
				}
				goto label$779;
				label$780:;
				{
					HPOP( (uint8*)"ecx" );
				}
				label$779:;
			}
			label$778:;
			label$777:;
		}
		label$776:;
		label$775:;
		HMOV( *(uint8**)&DST$1, *(uint8**)&EAX$1 );
		if( EAXFREE$1 != 0ll ) goto label$782;
		{
			HPOP( (uint8*)"eax" );
		}
		label$782:;
		label$781:;
	}
	goto label$773;
	label$774:;
	{
		if( *(int64*)DVREG$1 == 4ll ) goto label$784;
		{
			if( ((int64)-(ECXFREE$1 == 0ll) & (int64)-(ECXTRASHED$1 == 0ll)) == 0ll ) goto label$786;
			{
				OUTP( (uint8*)"xchg ecx, [esp]" );
				OUTP( (uint8*)"xchg ecx, eax" );
			}
			goto label$785;
			label$786:;
			{
				HMOV( (uint8*)"ecx", (uint8*)"eax" );
				HPOP( (uint8*)"eax" );
			}
			label$785:;
			HMOV( *(uint8**)&DST$1, *(uint8**)&ECX$1 );
			if( ((int64)-(ECXFREE$1 == 0ll) & (int64)-(ECXTRASHED$1 == 0ll)) == 0ll ) goto label$788;
			{
				HPOP( (uint8*)"ecx" );
			}
			label$788:;
			label$787:;
		}
		label$784:;
		label$783:;
	}
	label$773:;
	if( ECXTRASHED$1 == 0ll ) goto label$790;
	{
		if( ((int64)-(ECXFREE$1 == 0ll) & (int64)-(ECXINDEST$1 == 0ll)) == 0ll ) goto label$792;
		{
			HPOP( (uint8*)"ecx" );
		}
		label$792:;
		label$791:;
	}
	label$790:;
	label$789:;
	label$736:;
}

static void _EMITMODI( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$1044$1;
	int64 TMP$1045$1;
	label$793:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static int64 ECXTRASHED$1;
	static int64 EAXFREE$1;
	static int64 ECXFREE$1;
	static int64 EDXFREE$1;
	static int64 EAXINDEST$1;
	static int64 ECXINDEST$1;
	static int64 EDXINDEST$1;
	static int64 EAXINSOURCE$1;
	static int64 EDXINSOURCE$1;
	static FBSTRING EAX$1;
	static FBSTRING ECX$1;
	static FBSTRING EDX$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$795;
	TMP$1044$1 = 22ll;
	goto label$1664;
	label$795:;
	TMP$1044$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$1664:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1044$1 * 56ll)) + 8ll) != 4ll ) goto label$797;
	{
		fb_StrAssign( (void*)&EAX$1, -1ll, (void*)"eax", 4ll, 0 );
		fb_StrAssign( (void*)&ECX$1, -1ll, (void*)"ecx", 4ll, 0 );
		fb_StrAssign( (void*)&EDX$1, -1ll, (void*)"edx", 4ll, 0 );
	}
	goto label$796;
	label$797:;
	{
		fb_StrAssign( (void*)&EAX$1, -1ll, (void*)"ax", 3ll, 0 );
		fb_StrAssign( (void*)&ECX$1, -1ll, (void*)"cx", 3ll, 0 );
		fb_StrAssign( (void*)&EDX$1, -1ll, (void*)"dx", 3ll, 0 );
	}
	label$796:;
	ECXTRASHED$1 = 0ll;
	int64 vr$7 = HISREGFREE( 0ll, 5ll );
	EAXFREE$1 = vr$7;
	int64 vr$8 = HISREGFREE( 0ll, 3ll );
	ECXFREE$1 = vr$8;
	int64 vr$9 = HISREGFREE( 0ll, 0ll );
	EDXFREE$1 = vr$9;
	int64 vr$10 = HISREGINVREG( SVREG$1, 5ll );
	EAXINSOURCE$1 = vr$10;
	int64 vr$11 = HISREGINVREG( SVREG$1, 0ll );
	EDXINSOURCE$1 = vr$11;
	int64 vr$12 = HISREGINVREG( DVREG$1, 5ll );
	EAXINDEST$1 = vr$12;
	int64 vr$13 = HISREGINVREG( DVREG$1, 0ll );
	EDXINDEST$1 = vr$13;
	int64 vr$14 = HISREGINVREG( DVREG$1, 3ll );
	ECXINDEST$1 = vr$14;
	if( ((EAXINSOURCE$1 | EDXINSOURCE$1) | (int64)-(*(int64*)SVREG$1 == 0ll)) == 0ll ) goto label$799;
	{
		ECXTRASHED$1 = -1ll;
		if( ECXINDEST$1 == 0ll ) goto label$801;
		{
			HPUSH( (uint8*)"ecx" );
			if( *(int64*)DVREG$1 == 4ll ) goto label$803;
			{
				HPREPOPERAND( DVREG$1, &OSTR$1, 7ll, 0ll, 0ll, -1ll );
				HPUSH( *(uint8**)&OSTR$1 );
			}
			label$803:;
			label$802:;
		}
		goto label$800;
		label$801:;
		if( ECXFREE$1 != 0ll ) goto label$804;
		{
			HPUSH( (uint8*)"ecx" );
		}
		label$804:;
		label$800:;
		HMOV( *(uint8**)&ECX$1, *(uint8**)&SRC$1 );
		FBSTRING* vr$24 = fb_StrAssign( (void*)&SRC$1, -1ll, (void*)&ECX$1, -1ll, 0 );
	}
	label$799:;
	label$798:;
	if( EAXINDEST$1 != 0ll ) goto label$806;
	{
		if( (ECXINDEST$1 & ECXTRASHED$1) == 0ll ) goto label$808;
		{
			if( EAXFREE$1 != 0ll ) goto label$810;
			{
				OUTP( (uint8*)"xchg eax, [esp]" );
			}
			goto label$809;
			label$810:;
			{
				HPOP( (uint8*)"eax" );
			}
			label$809:;
		}
		goto label$807;
		label$808:;
		{
			if( EAXFREE$1 != 0ll ) goto label$812;
			{
				HPUSH( (uint8*)"eax" );
			}
			label$812:;
			label$811:;
			HMOV( *(uint8**)&EAX$1, *(uint8**)&DST$1 );
		}
		label$807:;
	}
	goto label$805;
	label$806:;
	{
		if( *(int64*)DVREG$1 == 4ll ) goto label$814;
		{
			HPUSH( (uint8*)"eax" );
			HMOV( *(uint8**)&EAX$1, *(uint8**)&DST$1 );
		}
		label$814:;
		label$813:;
	}
	label$805:;
	if( EDXINDEST$1 == 0ll ) goto label$816;
	{
		if( *(int64*)DVREG$1 == 4ll ) goto label$818;
		{
			HPUSH( (uint8*)"edx" );
		}
		label$818:;
		label$817:;
	}
	goto label$815;
	label$816:;
	if( EDXFREE$1 != 0ll ) goto label$819;
	{
		HPUSH( (uint8*)"edx" );
	}
	label$819:;
	label$815:;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$820;
	TMP$1045$1 = 22ll;
	goto label$1665;
	label$820:;
	TMP$1045$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$1665:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1045$1 * 56ll)) + 16ll) == 0ll ) goto label$822;
	{
		int64 TMP$1046$2;
		if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$823;
		TMP$1046$2 = 22ll;
		goto label$1666;
		label$823:;
		TMP$1046$2 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
		label$1666:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1046$2 * 56ll)) + 8ll) != 4ll ) goto label$825;
		{
			OUTP( (uint8*)"cdq" );
		}
		goto label$824;
		label$825:;
		{
			OUTP( (uint8*)"cwd" );
		}
		label$824:;
		FBSTRING* vr$50 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"idiv ", 6ll, 0 );
		FBSTRING* vr$51 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	goto label$821;
	label$822:;
	{
		FBSTRING* vr$52 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"xor ", 5ll, 0 );
		FBSTRING* vr$53 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&EDX$1, -1ll, 0 );
		FBSTRING* vr$54 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
		FBSTRING* vr$55 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&EDX$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
		FBSTRING* vr$56 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"div ", 5ll, 0 );
		FBSTRING* vr$57 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	label$821:;
	HMOV( *(uint8**)&EAX$1, *(uint8**)&EDX$1 );
	if( EDXINDEST$1 == 0ll ) goto label$827;
	{
		if( *(int64*)DVREG$1 == 4ll ) goto label$829;
		{
			HPOP( (uint8*)"edx" );
		}
		label$829:;
		label$828:;
	}
	goto label$826;
	label$827:;
	if( EDXFREE$1 != 0ll ) goto label$830;
	{
		HPOP( (uint8*)"edx" );
	}
	label$830:;
	label$826:;
	if( EAXINDEST$1 != 0ll ) goto label$832;
	{
		if( (ECXINDEST$1 & ECXTRASHED$1) == 0ll ) goto label$834;
		{
			if( *(int64*)DVREG$1 == 4ll ) goto label$836;
			{
				if( EAXFREE$1 != 0ll ) goto label$838;
				{
					HPOP( (uint8*)"ecx" );
					OUTP( (uint8*)"xchg ecx, [esp]" );
				}
				goto label$837;
				label$838:;
				{
					HPOP( (uint8*)"ecx" );
				}
				label$837:;
			}
			label$836:;
			label$835:;
		}
		label$834:;
		label$833:;
		HMOV( *(uint8**)&DST$1, *(uint8**)&EAX$1 );
		if( EAXFREE$1 != 0ll ) goto label$840;
		{
			HPOP( (uint8*)"eax" );
		}
		label$840:;
		label$839:;
	}
	goto label$831;
	label$832:;
	{
		if( *(int64*)DVREG$1 == 4ll ) goto label$842;
		{
			if( ((int64)-(ECXFREE$1 == 0ll) & (int64)-(ECXTRASHED$1 == 0ll)) == 0ll ) goto label$844;
			{
				OUTP( (uint8*)"xchg ecx, [esp]" );
				OUTP( (uint8*)"xchg ecx, eax" );
			}
			goto label$843;
			label$844:;
			{
				HMOV( (uint8*)"ecx", (uint8*)"eax" );
				HPOP( (uint8*)"eax" );
			}
			label$843:;
			HMOV( *(uint8**)&DST$1, *(uint8**)&ECX$1 );
			if( ((int64)-(ECXFREE$1 == 0ll) & (int64)-(ECXTRASHED$1 == 0ll)) == 0ll ) goto label$846;
			{
				HPOP( (uint8*)"ecx" );
			}
			label$846:;
			label$845:;
		}
		label$842:;
		label$841:;
	}
	label$831:;
	if( ECXTRASHED$1 == 0ll ) goto label$848;
	{
		if( ((int64)-(ECXFREE$1 == 0ll) & (int64)-(ECXINDEST$1 == 0ll)) == 0ll ) goto label$850;
		{
			HPOP( (uint8*)"ecx" );
		}
		label$850:;
		label$849:;
	}
	label$848:;
	label$847:;
	label$794:;
}

static void HSHIFTL( int64 OP$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$851:;
	static FBSTRING DST1$1;
	static FBSTRING DST2$1;
	static FBSTRING SRC$1;
	static FBSTRING LABEL$1;
	static FBSTRING MNEMONIC32$1;
	static FBSTRING MNEMONIC64$1;
	static int64 TMPREG$1;
	static int64 TMPISFREE$1;
	static FBSTRING TMPREGNAME$1;
	static FBSTRING A$1;
	static FBSTRING B$1;
	static struct $6IRVREG* AV$1;
	static struct $6IRVREG* BV$1;
	if( OP$1 != 41ll ) goto label$854;
	{
		fb_StrAssign( (void*)&MNEMONIC32$1, -1ll, (void*)"shl ", 5ll, 0 );
		fb_StrAssign( (void*)&MNEMONIC64$1, -1ll, (void*)"shld ", 6ll, 0 );
	}
	goto label$853;
	label$854:;
	{
		int64 TMP$1049$2;
		if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$855;
		TMP$1049$2 = 22ll;
		goto label$1667;
		label$855:;
		TMP$1049$2 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
		label$1667:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1049$2 * 56ll)) + 16ll) == 0ll ) goto label$857;
		{
			fb_StrAssign( (void*)&MNEMONIC32$1, -1ll, (void*)"sar ", 5ll, 0 );
		}
		goto label$856;
		label$857:;
		{
			fb_StrAssign( (void*)&MNEMONIC32$1, -1ll, (void*)"shr ", 5ll, 0 );
		}
		label$856:;
		fb_StrAssign( (void*)&MNEMONIC64$1, -1ll, (void*)"shrd ", 6ll, 0 );
	}
	label$853:;
	HPREPOPERAND64( DVREG$1, &DST1$1, &DST2$1 );
	HPREPOPERAND( SVREG$1, &SRC$1, 7ll, 0ll, 0ll, -1ll );
	if( OP$1 != 41ll ) goto label$859;
	{
		FBSTRING* vr$9 = fb_StrAssign( (void*)&A$1, -1ll, (void*)&DST2$1, -1ll, 0 );
		AV$1 = *(struct $6IRVREG**)((uint8*)DVREG$1 + 88ll);
		FBSTRING* vr$11 = fb_StrAssign( (void*)&B$1, -1ll, (void*)&DST1$1, -1ll, 0 );
		BV$1 = DVREG$1;
	}
	goto label$858;
	label$859:;
	{
		FBSTRING* vr$12 = fb_StrAssign( (void*)&A$1, -1ll, (void*)&DST1$1, -1ll, 0 );
		AV$1 = DVREG$1;
		FBSTRING* vr$13 = fb_StrAssign( (void*)&B$1, -1ll, (void*)&DST2$1, -1ll, 0 );
		BV$1 = *(struct $6IRVREG**)((uint8*)DVREG$1 + 88ll);
	}
	label$858:;
	if( *(int64*)SVREG$1 != 0ll ) goto label$861;
	{
		if( *(int64*)((uint8*)SVREG$1 + 48ll) < 64ll ) goto label$863;
		{
			if( *(int64*)BV$1 != 4ll ) goto label$865;
			{
				FBSTRING TMP$1052$4;
				FBSTRING TMP$1053$4;
				FBSTRING TMP$1054$4;
				FBSTRING TMP$1055$4;
				__builtin_memset( &TMP$1055$4, 0, 24ll );
				__builtin_memset( &TMP$1052$4, 0, 24ll );
				FBSTRING* vr$24 = fb_StrConcat( &TMP$1052$4, (void*)"xor ", 5ll, (void*)&B$1, -1ll );
				__builtin_memset( &TMP$1053$4, 0, 24ll );
				FBSTRING* vr$27 = fb_StrConcat( &TMP$1053$4, (void*)vr$24, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$1054$4, 0, 24ll );
				FBSTRING* vr$30 = fb_StrConcat( &TMP$1054$4, (void*)vr$27, -1ll, (void*)&B$1, -1ll );
				FBSTRING* vr$32 = fb_StrAssign( (void*)&TMP$1055$4, -1ll, (void*)vr$30, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1055$4 );
				fb_StrDelete( &TMP$1055$4 );
			}
			goto label$864;
			label$865:;
			{
				FBSTRING TMP$1056$4;
				FBSTRING TMP$1057$4;
				FBSTRING TMP$1058$4;
				__builtin_memset( &TMP$1058$4, 0, 24ll );
				__builtin_memset( &TMP$1056$4, 0, 24ll );
				FBSTRING* vr$37 = fb_StrConcat( &TMP$1056$4, (void*)"mov ", 5ll, (void*)&B$1, -1ll );
				__builtin_memset( &TMP$1057$4, 0, 24ll );
				FBSTRING* vr$40 = fb_StrConcat( &TMP$1057$4, (void*)vr$37, -1ll, (void*)", 0", 4ll );
				FBSTRING* vr$42 = fb_StrAssign( (void*)&TMP$1058$4, -1ll, (void*)vr$40, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1058$4 );
				fb_StrDelete( &TMP$1058$4 );
			}
			label$864:;
			if( *(int64*)AV$1 != 4ll ) goto label$867;
			{
				FBSTRING TMP$1059$4;
				FBSTRING TMP$1060$4;
				FBSTRING TMP$1061$4;
				FBSTRING TMP$1062$4;
				__builtin_memset( &TMP$1062$4, 0, 24ll );
				__builtin_memset( &TMP$1059$4, 0, 24ll );
				FBSTRING* vr$49 = fb_StrConcat( &TMP$1059$4, (void*)"xor ", 5ll, (void*)&A$1, -1ll );
				__builtin_memset( &TMP$1060$4, 0, 24ll );
				FBSTRING* vr$52 = fb_StrConcat( &TMP$1060$4, (void*)vr$49, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$1061$4, 0, 24ll );
				FBSTRING* vr$55 = fb_StrConcat( &TMP$1061$4, (void*)vr$52, -1ll, (void*)&A$1, -1ll );
				FBSTRING* vr$57 = fb_StrAssign( (void*)&TMP$1062$4, -1ll, (void*)vr$55, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1062$4 );
				fb_StrDelete( &TMP$1062$4 );
			}
			goto label$866;
			label$867:;
			{
				FBSTRING TMP$1063$4;
				FBSTRING TMP$1064$4;
				FBSTRING TMP$1065$4;
				__builtin_memset( &TMP$1065$4, 0, 24ll );
				__builtin_memset( &TMP$1063$4, 0, 24ll );
				FBSTRING* vr$62 = fb_StrConcat( &TMP$1063$4, (void*)"mov ", 5ll, (void*)&A$1, -1ll );
				__builtin_memset( &TMP$1064$4, 0, 24ll );
				FBSTRING* vr$65 = fb_StrConcat( &TMP$1064$4, (void*)vr$62, -1ll, (void*)", 0", 4ll );
				FBSTRING* vr$67 = fb_StrAssign( (void*)&TMP$1065$4, -1ll, (void*)vr$65, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1065$4 );
				fb_StrDelete( &TMP$1065$4 );
			}
			label$866:;
		}
		goto label$862;
		label$863:;
		if( *(int64*)((uint8*)SVREG$1 + 48ll) < 32ll ) goto label$868;
		{
			int64 TMP$1078$3;
			TMPISFREE$1 = -1ll;
			if( ((int64)-(*(int64*)BV$1 == 4ll) | (int64)-(*(int64*)AV$1 == 4ll)) == 0ll ) goto label$870;
			{
				FBSTRING TMP$1066$4;
				FBSTRING TMP$1067$4;
				FBSTRING TMP$1068$4;
				FBSTRING TMP$1069$4;
				__builtin_memset( &TMP$1069$4, 0, 24ll );
				__builtin_memset( &TMP$1066$4, 0, 24ll );
				FBSTRING* vr$80 = fb_StrConcat( &TMP$1066$4, (void*)"mov ", 5ll, (void*)&A$1, -1ll );
				__builtin_memset( &TMP$1067$4, 0, 24ll );
				FBSTRING* vr$83 = fb_StrConcat( &TMP$1067$4, (void*)vr$80, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$1068$4, 0, 24ll );
				FBSTRING* vr$86 = fb_StrConcat( &TMP$1068$4, (void*)vr$83, -1ll, (void*)&B$1, -1ll );
				FBSTRING* vr$88 = fb_StrAssign( (void*)&TMP$1069$4, -1ll, (void*)vr$86, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1069$4 );
				fb_StrDelete( &TMP$1069$4 );
			}
			goto label$869;
			label$870:;
			{
				FBSTRING TMP$1070$4;
				FBSTRING TMP$1071$4;
				FBSTRING TMP$1072$4;
				FBSTRING TMP$1073$4;
				FBSTRING TMP$1074$4;
				FBSTRING TMP$1075$4;
				FBSTRING TMP$1076$4;
				FBSTRING TMP$1077$4;
				int64 vr$90 = HFINDFREEREG( 0ll );
				TMPREG$1 = vr$90;
				if( TMPREG$1 != -1ll ) goto label$872;
				{
					int64 vr$92 = HFINDREGNOTINVREG( DVREG$1, 0ll );
					TMPREG$1 = vr$92;
					TMPISFREE$1 = 0ll;
				}
				label$872:;
				label$871:;
				uint8* vr$93 = HGETREGNAME( 7ll, TMPREG$1 );
				fb_StrAssign( (void*)&TMPREGNAME$1, -1ll, (void*)vr$93, 0ll, 0 );
				if( TMPISFREE$1 != 0ll ) goto label$874;
				{
					HPUSH( *(uint8**)&TMPREGNAME$1 );
				}
				label$874:;
				label$873:;
				__builtin_memset( &TMP$1073$4, 0, 24ll );
				__builtin_memset( &TMP$1070$4, 0, 24ll );
				FBSTRING* vr$98 = fb_StrConcat( &TMP$1070$4, (void*)"mov ", 5ll, (void*)&TMPREGNAME$1, -1ll );
				__builtin_memset( &TMP$1071$4, 0, 24ll );
				FBSTRING* vr$101 = fb_StrConcat( &TMP$1071$4, (void*)vr$98, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$1072$4, 0, 24ll );
				FBSTRING* vr$104 = fb_StrConcat( &TMP$1072$4, (void*)vr$101, -1ll, (void*)&B$1, -1ll );
				FBSTRING* vr$106 = fb_StrAssign( (void*)&TMP$1073$4, -1ll, (void*)vr$104, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1073$4 );
				fb_StrDelete( &TMP$1073$4 );
				__builtin_memset( &TMP$1077$4, 0, 24ll );
				__builtin_memset( &TMP$1074$4, 0, 24ll );
				FBSTRING* vr$111 = fb_StrConcat( &TMP$1074$4, (void*)"mov ", 5ll, (void*)&A$1, -1ll );
				__builtin_memset( &TMP$1075$4, 0, 24ll );
				FBSTRING* vr$114 = fb_StrConcat( &TMP$1075$4, (void*)vr$111, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$1076$4, 0, 24ll );
				FBSTRING* vr$117 = fb_StrConcat( &TMP$1076$4, (void*)vr$114, -1ll, (void*)&TMPREGNAME$1, -1ll );
				FBSTRING* vr$119 = fb_StrAssign( (void*)&TMP$1077$4, -1ll, (void*)vr$117, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1077$4 );
				fb_StrDelete( &TMP$1077$4 );
			}
			label$869:;
			if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$875;
			TMP$1078$3 = 22ll;
			goto label$1668;
			label$875:;
			TMP$1078$3 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
			label$1668:;
			if( ((int64)-(OP$1 == 42ll) & *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1078$3 * 56ll)) + 16ll)) == 0ll ) goto label$877;
			{
				FBSTRING TMP$1079$4;
				FBSTRING TMP$1080$4;
				FBSTRING TMP$1081$4;
				__builtin_memset( &TMP$1081$4, 0, 24ll );
				__builtin_memset( &TMP$1079$4, 0, 24ll );
				FBSTRING* vr$133 = fb_StrConcat( &TMP$1079$4, (void*)"sar ", 5ll, (void*)&B$1, -1ll );
				__builtin_memset( &TMP$1080$4, 0, 24ll );
				FBSTRING* vr$136 = fb_StrConcat( &TMP$1080$4, (void*)vr$133, -1ll, (void*)", 31", 5ll );
				FBSTRING* vr$138 = fb_StrAssign( (void*)&TMP$1081$4, -1ll, (void*)vr$136, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1081$4 );
				fb_StrDelete( &TMP$1081$4 );
			}
			goto label$876;
			label$877:;
			if( *(int64*)BV$1 != 4ll ) goto label$878;
			{
				FBSTRING TMP$1082$4;
				FBSTRING TMP$1083$4;
				FBSTRING TMP$1084$4;
				FBSTRING TMP$1085$4;
				__builtin_memset( &TMP$1085$4, 0, 24ll );
				__builtin_memset( &TMP$1082$4, 0, 24ll );
				FBSTRING* vr$145 = fb_StrConcat( &TMP$1082$4, (void*)"xor ", 5ll, (void*)&B$1, -1ll );
				__builtin_memset( &TMP$1083$4, 0, 24ll );
				FBSTRING* vr$148 = fb_StrConcat( &TMP$1083$4, (void*)vr$145, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$1084$4, 0, 24ll );
				FBSTRING* vr$151 = fb_StrConcat( &TMP$1084$4, (void*)vr$148, -1ll, (void*)&B$1, -1ll );
				FBSTRING* vr$153 = fb_StrAssign( (void*)&TMP$1085$4, -1ll, (void*)vr$151, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1085$4 );
				fb_StrDelete( &TMP$1085$4 );
			}
			goto label$876;
			label$878:;
			{
				FBSTRING TMP$1086$4;
				FBSTRING TMP$1087$4;
				FBSTRING TMP$1088$4;
				__builtin_memset( &TMP$1088$4, 0, 24ll );
				__builtin_memset( &TMP$1086$4, 0, 24ll );
				FBSTRING* vr$158 = fb_StrConcat( &TMP$1086$4, (void*)"mov ", 5ll, (void*)&B$1, -1ll );
				__builtin_memset( &TMP$1087$4, 0, 24ll );
				FBSTRING* vr$161 = fb_StrConcat( &TMP$1087$4, (void*)vr$158, -1ll, (void*)", 0", 4ll );
				FBSTRING* vr$163 = fb_StrAssign( (void*)&TMP$1088$4, -1ll, (void*)vr$161, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1088$4 );
				fb_StrDelete( &TMP$1088$4 );
			}
			label$876:;
			if( *(int64*)((uint8*)SVREG$1 + 48ll) <= 32ll ) goto label$880;
			{
				FBSTRING TMP$1089$4;
				FBSTRING TMP$1090$4;
				FBSTRING TMP$1091$4;
				FBSTRING TMP$1092$4;
				FBSTRING* vr$169 = fb_LongintToStr( *(int64*)((uint8*)SVREG$1 + 48ll) + -32ll );
				FBSTRING* vr$170 = fb_StrAssign( (void*)&SRC$1, -1ll, (void*)vr$169, -1ll, 0 );
				__builtin_memset( &TMP$1092$4, 0, 24ll );
				__builtin_memset( &TMP$1089$4, 0, 24ll );
				FBSTRING* vr$174 = fb_StrConcat( &TMP$1089$4, (void*)&MNEMONIC32$1, -1ll, (void*)&A$1, -1ll );
				__builtin_memset( &TMP$1090$4, 0, 24ll );
				FBSTRING* vr$177 = fb_StrConcat( &TMP$1090$4, (void*)vr$174, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$1091$4, 0, 24ll );
				FBSTRING* vr$180 = fb_StrConcat( &TMP$1091$4, (void*)vr$177, -1ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$182 = fb_StrAssign( (void*)&TMP$1092$4, -1ll, (void*)vr$180, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1092$4 );
				fb_StrDelete( &TMP$1092$4 );
			}
			label$880:;
			label$879:;
			if( TMPISFREE$1 != 0ll ) goto label$882;
			{
				HPOP( *(uint8**)&TMPREGNAME$1 );
			}
			label$882:;
			label$881:;
		}
		goto label$862;
		label$868:;
		{
			if( *(int64*)BV$1 != 4ll ) goto label$884;
			{
				FBSTRING TMP$1093$4;
				FBSTRING TMP$1094$4;
				FBSTRING TMP$1095$4;
				FBSTRING TMP$1096$4;
				FBSTRING TMP$1097$4;
				FBSTRING TMP$1098$4;
				FBSTRING TMP$1099$4;
				FBSTRING TMP$1100$4;
				FBSTRING TMP$1101$4;
				FBSTRING TMP$1102$4;
				__builtin_memset( &TMP$1098$4, 0, 24ll );
				__builtin_memset( &TMP$1093$4, 0, 24ll );
				FBSTRING* vr$190 = fb_StrConcat( &TMP$1093$4, (void*)&MNEMONIC64$1, -1ll, (void*)&A$1, -1ll );
				__builtin_memset( &TMP$1094$4, 0, 24ll );
				FBSTRING* vr$193 = fb_StrConcat( &TMP$1094$4, (void*)vr$190, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$1095$4, 0, 24ll );
				FBSTRING* vr$196 = fb_StrConcat( &TMP$1095$4, (void*)vr$193, -1ll, (void*)&B$1, -1ll );
				__builtin_memset( &TMP$1096$4, 0, 24ll );
				FBSTRING* vr$199 = fb_StrConcat( &TMP$1096$4, (void*)vr$196, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$1097$4, 0, 24ll );
				FBSTRING* vr$202 = fb_StrConcat( &TMP$1097$4, (void*)vr$199, -1ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$204 = fb_StrAssign( (void*)&TMP$1098$4, -1ll, (void*)vr$202, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1098$4 );
				fb_StrDelete( &TMP$1098$4 );
				__builtin_memset( &TMP$1102$4, 0, 24ll );
				__builtin_memset( &TMP$1099$4, 0, 24ll );
				FBSTRING* vr$209 = fb_StrConcat( &TMP$1099$4, (void*)&MNEMONIC32$1, -1ll, (void*)&B$1, -1ll );
				__builtin_memset( &TMP$1100$4, 0, 24ll );
				FBSTRING* vr$212 = fb_StrConcat( &TMP$1100$4, (void*)vr$209, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$1101$4, 0, 24ll );
				FBSTRING* vr$215 = fb_StrConcat( &TMP$1101$4, (void*)vr$212, -1ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$217 = fb_StrAssign( (void*)&TMP$1102$4, -1ll, (void*)vr$215, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1102$4 );
				fb_StrDelete( &TMP$1102$4 );
			}
			goto label$883;
			label$884:;
			if( *(int64*)AV$1 != 4ll ) goto label$885;
			{
				FBSTRING TMP$1103$4;
				FBSTRING TMP$1104$4;
				FBSTRING TMP$1105$4;
				FBSTRING TMP$1106$4;
				FBSTRING TMP$1107$4;
				FBSTRING TMP$1108$4;
				FBSTRING TMP$1109$4;
				FBSTRING TMP$1110$4;
				FBSTRING TMP$1111$4;
				FBSTRING TMP$1112$4;
				FBSTRING TMP$1113$4;
				FBSTRING TMP$1114$4;
				FBSTRING TMP$1115$4;
				FBSTRING TMP$1116$4;
				FBSTRING TMP$1117$4;
				FBSTRING TMP$1118$4;
				FBSTRING TMP$1119$4;
				FBSTRING TMP$1120$4;
				__builtin_memset( &TMP$1106$4, 0, 24ll );
				__builtin_memset( &TMP$1103$4, 0, 24ll );
				FBSTRING* vr$224 = fb_StrConcat( &TMP$1103$4, (void*)"xchg ", 6ll, (void*)&A$1, -1ll );
				__builtin_memset( &TMP$1104$4, 0, 24ll );
				FBSTRING* vr$227 = fb_StrConcat( &TMP$1104$4, (void*)vr$224, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$1105$4, 0, 24ll );
				FBSTRING* vr$230 = fb_StrConcat( &TMP$1105$4, (void*)vr$227, -1ll, (void*)&B$1, -1ll );
				FBSTRING* vr$232 = fb_StrAssign( (void*)&TMP$1106$4, -1ll, (void*)vr$230, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1106$4 );
				fb_StrDelete( &TMP$1106$4 );
				__builtin_memset( &TMP$1112$4, 0, 24ll );
				__builtin_memset( &TMP$1107$4, 0, 24ll );
				FBSTRING* vr$237 = fb_StrConcat( &TMP$1107$4, (void*)&MNEMONIC64$1, -1ll, (void*)&B$1, -1ll );
				__builtin_memset( &TMP$1108$4, 0, 24ll );
				FBSTRING* vr$240 = fb_StrConcat( &TMP$1108$4, (void*)vr$237, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$1109$4, 0, 24ll );
				FBSTRING* vr$243 = fb_StrConcat( &TMP$1109$4, (void*)vr$240, -1ll, (void*)&A$1, -1ll );
				__builtin_memset( &TMP$1110$4, 0, 24ll );
				FBSTRING* vr$246 = fb_StrConcat( &TMP$1110$4, (void*)vr$243, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$1111$4, 0, 24ll );
				FBSTRING* vr$249 = fb_StrConcat( &TMP$1111$4, (void*)vr$246, -1ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$251 = fb_StrAssign( (void*)&TMP$1112$4, -1ll, (void*)vr$249, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1112$4 );
				fb_StrDelete( &TMP$1112$4 );
				__builtin_memset( &TMP$1116$4, 0, 24ll );
				__builtin_memset( &TMP$1113$4, 0, 24ll );
				FBSTRING* vr$256 = fb_StrConcat( &TMP$1113$4, (void*)&MNEMONIC32$1, -1ll, (void*)&A$1, -1ll );
				__builtin_memset( &TMP$1114$4, 0, 24ll );
				FBSTRING* vr$259 = fb_StrConcat( &TMP$1114$4, (void*)vr$256, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$1115$4, 0, 24ll );
				FBSTRING* vr$262 = fb_StrConcat( &TMP$1115$4, (void*)vr$259, -1ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$264 = fb_StrAssign( (void*)&TMP$1116$4, -1ll, (void*)vr$262, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1116$4 );
				fb_StrDelete( &TMP$1116$4 );
				__builtin_memset( &TMP$1120$4, 0, 24ll );
				__builtin_memset( &TMP$1117$4, 0, 24ll );
				FBSTRING* vr$269 = fb_StrConcat( &TMP$1117$4, (void*)"xchg ", 6ll, (void*)&A$1, -1ll );
				__builtin_memset( &TMP$1118$4, 0, 24ll );
				FBSTRING* vr$272 = fb_StrConcat( &TMP$1118$4, (void*)vr$269, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$1119$4, 0, 24ll );
				FBSTRING* vr$275 = fb_StrConcat( &TMP$1119$4, (void*)vr$272, -1ll, (void*)&B$1, -1ll );
				FBSTRING* vr$277 = fb_StrAssign( (void*)&TMP$1120$4, -1ll, (void*)vr$275, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1120$4 );
				fb_StrDelete( &TMP$1120$4 );
			}
			goto label$883;
			label$885:;
			{
				FBSTRING TMP$1121$4;
				FBSTRING TMP$1122$4;
				FBSTRING TMP$1123$4;
				FBSTRING TMP$1124$4;
				FBSTRING TMP$1125$4;
				FBSTRING TMP$1126$4;
				FBSTRING TMP$1127$4;
				FBSTRING TMP$1128$4;
				FBSTRING TMP$1129$4;
				FBSTRING TMP$1130$4;
				FBSTRING TMP$1131$4;
				FBSTRING TMP$1132$4;
				FBSTRING TMP$1133$4;
				FBSTRING TMP$1134$4;
				FBSTRING TMP$1135$4;
				FBSTRING TMP$1136$4;
				FBSTRING TMP$1137$4;
				FBSTRING TMP$1138$4;
				int64 vr$279 = HFINDFREEREG( 0ll );
				TMPREG$1 = vr$279;
				if( TMPREG$1 != -1ll ) goto label$887;
				{
					int64 vr$281 = HFINDREGNOTINVREG( DVREG$1, 0ll );
					TMPREG$1 = vr$281;
					TMPISFREE$1 = 0ll;
				}
				goto label$886;
				label$887:;
				{
					TMPISFREE$1 = -1ll;
				}
				label$886:;
				uint8* vr$282 = HGETREGNAME( 7ll, TMPREG$1 );
				fb_StrAssign( (void*)&TMPREGNAME$1, -1ll, (void*)vr$282, 0ll, 0 );
				if( TMPISFREE$1 != 0ll ) goto label$889;
				{
					HPUSH( *(uint8**)&TMPREGNAME$1 );
				}
				label$889:;
				label$888:;
				__builtin_memset( &TMP$1124$4, 0, 24ll );
				__builtin_memset( &TMP$1121$4, 0, 24ll );
				FBSTRING* vr$287 = fb_StrConcat( &TMP$1121$4, (void*)"mov ", 5ll, (void*)&TMPREGNAME$1, -1ll );
				__builtin_memset( &TMP$1122$4, 0, 24ll );
				FBSTRING* vr$290 = fb_StrConcat( &TMP$1122$4, (void*)vr$287, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$1123$4, 0, 24ll );
				FBSTRING* vr$293 = fb_StrConcat( &TMP$1123$4, (void*)vr$290, -1ll, (void*)&B$1, -1ll );
				FBSTRING* vr$295 = fb_StrAssign( (void*)&TMP$1124$4, -1ll, (void*)vr$293, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1124$4 );
				fb_StrDelete( &TMP$1124$4 );
				__builtin_memset( &TMP$1130$4, 0, 24ll );
				__builtin_memset( &TMP$1125$4, 0, 24ll );
				FBSTRING* vr$300 = fb_StrConcat( &TMP$1125$4, (void*)&MNEMONIC64$1, -1ll, (void*)&A$1, -1ll );
				__builtin_memset( &TMP$1126$4, 0, 24ll );
				FBSTRING* vr$303 = fb_StrConcat( &TMP$1126$4, (void*)vr$300, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$1127$4, 0, 24ll );
				FBSTRING* vr$306 = fb_StrConcat( &TMP$1127$4, (void*)vr$303, -1ll, (void*)&TMPREGNAME$1, -1ll );
				__builtin_memset( &TMP$1128$4, 0, 24ll );
				FBSTRING* vr$309 = fb_StrConcat( &TMP$1128$4, (void*)vr$306, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$1129$4, 0, 24ll );
				FBSTRING* vr$312 = fb_StrConcat( &TMP$1129$4, (void*)vr$309, -1ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$314 = fb_StrAssign( (void*)&TMP$1130$4, -1ll, (void*)vr$312, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1130$4 );
				fb_StrDelete( &TMP$1130$4 );
				__builtin_memset( &TMP$1134$4, 0, 24ll );
				__builtin_memset( &TMP$1131$4, 0, 24ll );
				FBSTRING* vr$319 = fb_StrConcat( &TMP$1131$4, (void*)&MNEMONIC32$1, -1ll, (void*)&TMPREGNAME$1, -1ll );
				__builtin_memset( &TMP$1132$4, 0, 24ll );
				FBSTRING* vr$322 = fb_StrConcat( &TMP$1132$4, (void*)vr$319, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$1133$4, 0, 24ll );
				FBSTRING* vr$325 = fb_StrConcat( &TMP$1133$4, (void*)vr$322, -1ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$327 = fb_StrAssign( (void*)&TMP$1134$4, -1ll, (void*)vr$325, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1134$4 );
				fb_StrDelete( &TMP$1134$4 );
				__builtin_memset( &TMP$1138$4, 0, 24ll );
				__builtin_memset( &TMP$1135$4, 0, 24ll );
				FBSTRING* vr$332 = fb_StrConcat( &TMP$1135$4, (void*)"mov ", 5ll, (void*)&B$1, -1ll );
				__builtin_memset( &TMP$1136$4, 0, 24ll );
				FBSTRING* vr$335 = fb_StrConcat( &TMP$1136$4, (void*)vr$332, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$1137$4, 0, 24ll );
				FBSTRING* vr$338 = fb_StrConcat( &TMP$1137$4, (void*)vr$335, -1ll, (void*)&TMPREGNAME$1, -1ll );
				FBSTRING* vr$340 = fb_StrAssign( (void*)&TMP$1138$4, -1ll, (void*)vr$338, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1138$4 );
				fb_StrDelete( &TMP$1138$4 );
				if( TMPISFREE$1 != 0ll ) goto label$891;
				{
					HPOP( (uint8*)"eax" );
				}
				label$891:;
				label$890:;
			}
			label$883:;
		}
		label$862:;
	}
	goto label$860;
	label$861:;
	{
		static int64 ISEAXFREE$2;
		static int64 ISEDXFREE$2;
		static int64 ISECXFREE$2;
		static int64 EAXINDEST$2;
		static int64 EDXINDEST$2;
		static int64 ECXINDEST$2;
		static int64 OFS$2;
		uint8* vr$343 = SYMBUNIQUELABEL(  );
		fb_StrAssign( (void*)&LABEL$1, -1ll, (void*)vr$343, 0ll, 0 );
		HPUSH( *(uint8**)&DST2$1 );
		HPUSH( *(uint8**)&DST1$1 );
		OFS$2 = 0ll;
		int64 vr$344 = HISREGFREE( 0ll, 5ll );
		ISEAXFREE$2 = vr$344;
		int64 vr$345 = HISREGFREE( 0ll, 0ll );
		ISEDXFREE$2 = vr$345;
		int64 vr$346 = HISREGFREE( 0ll, 3ll );
		ISECXFREE$2 = vr$346;
		int64 vr$347 = HISREGINVREG( DVREG$1, 5ll );
		EAXINDEST$2 = vr$347;
		int64 vr$348 = HISREGINVREG( DVREG$1, 0ll );
		EDXINDEST$2 = vr$348;
		int64 vr$349 = HISREGINVREG( DVREG$1, 3ll );
		ECXINDEST$2 = vr$349;
		if( ((int64)-(*(int64*)SVREG$1 != 4ll) | (int64)-(*(int64*)((uint8*)SVREG$1 + 24ll) != 3ll)) == 0ll ) goto label$893;
		{
			int64 TMP$1139$3;
			if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$894;
			TMP$1139$3 = 22ll;
			goto label$1669;
			label$894:;
			TMP$1139$3 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
			label$1669:;
			if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1139$3 * 56ll)) + 8ll) == 4ll ) goto label$896;
			{
				if( *(int64*)SVREG$1 != 4ll ) goto label$898;
				{
					uint8* vr$366 = HGETREGNAME( 7ll, *(int64*)((uint8*)SVREG$1 + 24ll) );
					fb_StrAssign( (void*)&SRC$1, -1ll, (void*)vr$366, 0ll, 0 );
				}
				label$898:;
				label$897:;
			}
			label$896:;
			label$895:;
			if( ISECXFREE$2 != 0ll ) goto label$900;
			{
				if( (ECXINDEST$2 & (int64)-(*(int64*)DVREG$1 == 4ll)) == 0ll ) goto label$902;
				{
					HMOV( (uint8*)"ecx", *(uint8**)&SRC$1 );
					ISECXFREE$2 = -1ll;
				}
				goto label$901;
				label$902:;
				{
					HPUSH( *(uint8**)&SRC$1 );
					OUTP( (uint8*)"xchg ecx, [esp]" );
					OFS$2 = OFS$2 + 4ll;
				}
				label$901:;
			}
			goto label$899;
			label$900:;
			{
				HMOV( (uint8*)"ecx", *(uint8**)&SRC$1 );
			}
			label$899:;
		}
		goto label$892;
		label$893:;
		{
			ISECXFREE$2 = -1ll;
		}
		label$892:;
		if( EAXINDEST$2 == 0ll ) goto label$904;
		{
			if( *(int64*)DVREG$1 == 4ll ) goto label$906;
			{
				FBSTRING TMP$1140$4;
				FBSTRING TMP$1141$4;
				FBSTRING TMP$1142$4;
				__builtin_memset( &TMP$1142$4, 0, 24ll );
				FBSTRING* vr$377 = fb_LongintToStr( OFS$2 );
				__builtin_memset( &TMP$1140$4, 0, 24ll );
				FBSTRING* vr$380 = fb_StrConcat( &TMP$1140$4, (void*)"xchg eax, [esp+", 16ll, (void*)vr$377, -1ll );
				__builtin_memset( &TMP$1141$4, 0, 24ll );
				FBSTRING* vr$383 = fb_StrConcat( &TMP$1141$4, (void*)vr$380, -1ll, (void*)"]", 2ll );
				FBSTRING* vr$385 = fb_StrAssign( (void*)&TMP$1142$4, -1ll, (void*)vr$383, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1142$4 );
				fb_StrDelete( &TMP$1142$4 );
			}
			goto label$905;
			label$906:;
			{
				FBSTRING TMP$1143$4;
				FBSTRING TMP$1144$4;
				FBSTRING TMP$1145$4;
				__builtin_memset( &TMP$1145$4, 0, 24ll );
				FBSTRING* vr$388 = fb_LongintToStr( OFS$2 );
				__builtin_memset( &TMP$1143$4, 0, 24ll );
				FBSTRING* vr$391 = fb_StrConcat( &TMP$1143$4, (void*)"mov eax, [esp+", 15ll, (void*)vr$388, -1ll );
				__builtin_memset( &TMP$1144$4, 0, 24ll );
				FBSTRING* vr$394 = fb_StrConcat( &TMP$1144$4, (void*)vr$391, -1ll, (void*)"]", 2ll );
				FBSTRING* vr$396 = fb_StrAssign( (void*)&TMP$1145$4, -1ll, (void*)vr$394, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1145$4 );
				fb_StrDelete( &TMP$1145$4 );
			}
			label$905:;
		}
		goto label$903;
		label$904:;
		{
			if( ISEAXFREE$2 != 0ll ) goto label$908;
			{
				FBSTRING TMP$1146$4;
				FBSTRING TMP$1147$4;
				FBSTRING TMP$1148$4;
				__builtin_memset( &TMP$1148$4, 0, 24ll );
				FBSTRING* vr$400 = fb_LongintToStr( OFS$2 );
				__builtin_memset( &TMP$1146$4, 0, 24ll );
				FBSTRING* vr$403 = fb_StrConcat( &TMP$1146$4, (void*)"xchg eax, [esp+", 16ll, (void*)vr$400, -1ll );
				__builtin_memset( &TMP$1147$4, 0, 24ll );
				FBSTRING* vr$406 = fb_StrConcat( &TMP$1147$4, (void*)vr$403, -1ll, (void*)"]", 2ll );
				FBSTRING* vr$408 = fb_StrAssign( (void*)&TMP$1148$4, -1ll, (void*)vr$406, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1148$4 );
				fb_StrDelete( &TMP$1148$4 );
			}
			goto label$907;
			label$908:;
			{
				FBSTRING TMP$1149$4;
				FBSTRING TMP$1150$4;
				FBSTRING TMP$1151$4;
				__builtin_memset( &TMP$1151$4, 0, 24ll );
				FBSTRING* vr$411 = fb_LongintToStr( OFS$2 );
				__builtin_memset( &TMP$1149$4, 0, 24ll );
				FBSTRING* vr$414 = fb_StrConcat( &TMP$1149$4, (void*)"mov eax, [esp+", 15ll, (void*)vr$411, -1ll );
				__builtin_memset( &TMP$1150$4, 0, 24ll );
				FBSTRING* vr$417 = fb_StrConcat( &TMP$1150$4, (void*)vr$414, -1ll, (void*)"]", 2ll );
				FBSTRING* vr$419 = fb_StrAssign( (void*)&TMP$1151$4, -1ll, (void*)vr$417, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1151$4 );
				fb_StrDelete( &TMP$1151$4 );
			}
			label$907:;
		}
		label$903:;
		if( EDXINDEST$2 == 0ll ) goto label$910;
		{
			if( *(int64*)DVREG$1 == 4ll ) goto label$912;
			{
				FBSTRING TMP$1153$4;
				FBSTRING TMP$1154$4;
				FBSTRING TMP$1155$4;
				__builtin_memset( &TMP$1155$4, 0, 24ll );
				FBSTRING* vr$426 = fb_LongintToStr( OFS$2 + 4ll );
				__builtin_memset( &TMP$1153$4, 0, 24ll );
				FBSTRING* vr$429 = fb_StrConcat( &TMP$1153$4, (void*)"xchg edx, [esp+", 16ll, (void*)vr$426, -1ll );
				__builtin_memset( &TMP$1154$4, 0, 24ll );
				FBSTRING* vr$432 = fb_StrConcat( &TMP$1154$4, (void*)vr$429, -1ll, (void*)"]", 2ll );
				FBSTRING* vr$434 = fb_StrAssign( (void*)&TMP$1155$4, -1ll, (void*)vr$432, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1155$4 );
				fb_StrDelete( &TMP$1155$4 );
			}
			goto label$911;
			label$912:;
			{
				FBSTRING TMP$1156$4;
				FBSTRING TMP$1157$4;
				FBSTRING TMP$1158$4;
				__builtin_memset( &TMP$1158$4, 0, 24ll );
				FBSTRING* vr$438 = fb_LongintToStr( OFS$2 + 4ll );
				__builtin_memset( &TMP$1156$4, 0, 24ll );
				FBSTRING* vr$441 = fb_StrConcat( &TMP$1156$4, (void*)"mov edx, [esp+", 15ll, (void*)vr$438, -1ll );
				__builtin_memset( &TMP$1157$4, 0, 24ll );
				FBSTRING* vr$444 = fb_StrConcat( &TMP$1157$4, (void*)vr$441, -1ll, (void*)"]", 2ll );
				FBSTRING* vr$446 = fb_StrAssign( (void*)&TMP$1158$4, -1ll, (void*)vr$444, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1158$4 );
				fb_StrDelete( &TMP$1158$4 );
			}
			label$911:;
		}
		goto label$909;
		label$910:;
		{
			if( ISEDXFREE$2 != 0ll ) goto label$914;
			{
				FBSTRING TMP$1159$4;
				FBSTRING TMP$1160$4;
				FBSTRING TMP$1161$4;
				__builtin_memset( &TMP$1161$4, 0, 24ll );
				FBSTRING* vr$451 = fb_LongintToStr( OFS$2 + 4ll );
				__builtin_memset( &TMP$1159$4, 0, 24ll );
				FBSTRING* vr$454 = fb_StrConcat( &TMP$1159$4, (void*)"xchg edx, [esp+", 16ll, (void*)vr$451, -1ll );
				__builtin_memset( &TMP$1160$4, 0, 24ll );
				FBSTRING* vr$457 = fb_StrConcat( &TMP$1160$4, (void*)vr$454, -1ll, (void*)"]", 2ll );
				FBSTRING* vr$459 = fb_StrAssign( (void*)&TMP$1161$4, -1ll, (void*)vr$457, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1161$4 );
				fb_StrDelete( &TMP$1161$4 );
			}
			goto label$913;
			label$914:;
			{
				FBSTRING TMP$1162$4;
				FBSTRING TMP$1163$4;
				FBSTRING TMP$1164$4;
				__builtin_memset( &TMP$1164$4, 0, 24ll );
				FBSTRING* vr$463 = fb_LongintToStr( OFS$2 + 4ll );
				__builtin_memset( &TMP$1162$4, 0, 24ll );
				FBSTRING* vr$466 = fb_StrConcat( &TMP$1162$4, (void*)"mov edx, [esp+", 15ll, (void*)vr$463, -1ll );
				__builtin_memset( &TMP$1163$4, 0, 24ll );
				FBSTRING* vr$469 = fb_StrConcat( &TMP$1163$4, (void*)vr$466, -1ll, (void*)"]", 2ll );
				FBSTRING* vr$471 = fb_StrAssign( (void*)&TMP$1164$4, -1ll, (void*)vr$469, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1164$4 );
				fb_StrDelete( &TMP$1164$4 );
			}
			label$913:;
		}
		label$909:;
		if( OP$1 != 41ll ) goto label$916;
		{
			FBSTRING TMP$1167$3;
			FBSTRING TMP$1168$3;
			OUTP( (uint8*)"shld edx, eax, cl" );
			__builtin_memset( &TMP$1168$3, 0, 24ll );
			__builtin_memset( &TMP$1167$3, 0, 24ll );
			FBSTRING* vr$477 = fb_StrConcat( &TMP$1167$3, (void*)&MNEMONIC32$1, -1ll, (void*)" eax, cl", 9ll );
			FBSTRING* vr$479 = fb_StrAssign( (void*)&TMP$1168$3, -1ll, (void*)vr$477, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1168$3 );
			fb_StrDelete( &TMP$1168$3 );
		}
		goto label$915;
		label$916:;
		{
			FBSTRING TMP$1171$3;
			FBSTRING TMP$1172$3;
			OUTP( (uint8*)"shrd eax, edx, cl" );
			__builtin_memset( &TMP$1172$3, 0, 24ll );
			__builtin_memset( &TMP$1171$3, 0, 24ll );
			FBSTRING* vr$484 = fb_StrConcat( &TMP$1171$3, (void*)&MNEMONIC32$1, -1ll, (void*)" edx, cl", 9ll );
			FBSTRING* vr$486 = fb_StrAssign( (void*)&TMP$1172$3, -1ll, (void*)vr$484, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1172$3 );
			fb_StrDelete( &TMP$1172$3 );
		}
		label$915:;
		OUTP( (uint8*)"test cl, 32" );
		HBRANCH( (uint8*)"jz", *(uint8**)&LABEL$1 );
		if( OP$1 != 41ll ) goto label$918;
		{
			OUTP( (uint8*)"mov edx, eax" );
			OUTP( (uint8*)"xor eax, eax" );
		}
		goto label$917;
		label$918:;
		{
			int64 TMP$1176$3;
			OUTP( (uint8*)"mov eax, edx" );
			if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$919;
			TMP$1176$3 = 22ll;
			goto label$1670;
			label$919:;
			TMP$1176$3 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
			label$1670:;
			if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1176$3 * 56ll)) + 16ll) == 0ll ) goto label$921;
			{
				OUTP( (uint8*)"sar edx, 31" );
			}
			goto label$920;
			label$921:;
			{
				OUTP( (uint8*)"xor edx, edx" );
			}
			label$920:;
		}
		label$917:;
		HLABEL( *(uint8**)&LABEL$1 );
		if( ISECXFREE$2 != 0ll ) goto label$923;
		{
			HPOP( (uint8*)"ecx" );
		}
		label$923:;
		label$922:;
		if( EDXINDEST$2 == 0ll ) goto label$925;
		{
			if( *(int64*)DVREG$1 == 4ll ) goto label$927;
			{
				OUTP( (uint8*)"xchg edx, [esp+4]" );
			}
			goto label$926;
			label$927:;
			{
				OUTP( (uint8*)"mov [esp+4], edx" );
			}
			label$926:;
		}
		goto label$924;
		label$925:;
		{
			if( ISEDXFREE$2 != 0ll ) goto label$929;
			{
				OUTP( (uint8*)"xchg edx, [esp+4]" );
			}
			goto label$928;
			label$929:;
			{
				OUTP( (uint8*)"mov [esp+4], edx" );
			}
			label$928:;
		}
		label$924:;
		if( EAXINDEST$2 == 0ll ) goto label$931;
		{
			if( *(int64*)DVREG$1 == 4ll ) goto label$933;
			{
				OUTP( (uint8*)"xchg eax, [esp+0]" );
			}
			goto label$932;
			label$933:;
			{
				OUTP( (uint8*)"mov [esp+0], eax" );
			}
			label$932:;
		}
		goto label$930;
		label$931:;
		{
			if( ISEAXFREE$2 != 0ll ) goto label$935;
			{
				OUTP( (uint8*)"xchg eax, [esp+0]" );
			}
			goto label$934;
			label$935:;
			{
				OUTP( (uint8*)"mov [esp+0], eax" );
			}
			label$934:;
		}
		label$930:;
		HPOP( *(uint8**)&DST1$1 );
		HPOP( *(uint8**)&DST2$1 );
	}
	label$860:;
	label$852:;
}

static void HSHIFTI( int64 OP$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$1183$1;
	label$936:;
	static int64 EAXPRESERVED$1;
	static int64 ECXPRESERVED$1;
	static int64 EAXFREE$1;
	static int64 ECXFREE$1;
	static int64 REG$1;
	static int64 ECXINDEST$1;
	static FBSTRING OSTR$1;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING TMP$1;
	static FBSTRING MNEMONIC$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$938;
	TMP$1183$1 = 22ll;
	goto label$1671;
	label$938:;
	TMP$1183$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$1671:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1183$1 * 56ll)) + 16ll) == 0ll ) goto label$940;
	{
		if( OP$1 != 41ll ) goto label$942;
		{
			fb_StrAssign( (void*)&MNEMONIC$1, -1ll, (void*)"sal", 4ll, 0 );
		}
		goto label$941;
		label$942:;
		{
			fb_StrAssign( (void*)&MNEMONIC$1, -1ll, (void*)"sar", 4ll, 0 );
		}
		label$941:;
	}
	goto label$939;
	label$940:;
	{
		if( OP$1 != 41ll ) goto label$944;
		{
			fb_StrAssign( (void*)&MNEMONIC$1, -1ll, (void*)"shl", 4ll, 0 );
		}
		goto label$943;
		label$944:;
		{
			fb_StrAssign( (void*)&MNEMONIC$1, -1ll, (void*)"shr", 4ll, 0 );
		}
		label$943:;
	}
	label$939:;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	ECXINDEST$1 = 0ll;
	EAXPRESERVED$1 = 0ll;
	ECXPRESERVED$1 = 0ll;
	if( *(int64*)SVREG$1 != 0ll ) goto label$946;
	{
		HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
		FBSTRING* vr$11 = fb_StrAssign( (void*)&TMP$1, -1ll, (void*)&DST$1, -1ll, 0 );
	}
	goto label$945;
	label$946:;
	{
		int64 vr$12 = HISREGFREE( 0ll, 5ll );
		EAXFREE$1 = vr$12;
		int64 vr$13 = HISREGFREE( 0ll, 3ll );
		ECXFREE$1 = vr$13;
		if( *(int64*)SVREG$1 != 4ll ) goto label$948;
		{
			REG$1 = *(int64*)((uint8*)SVREG$1 + 24ll);
		}
		goto label$947;
		label$948:;
		{
			REG$1 = -1ll;
		}
		label$947:;
		int64 vr$17 = HISREGINVREG( DVREG$1, 3ll );
		ECXINDEST$1 = vr$17;
		if( ECXINDEST$1 == 0ll ) goto label$950;
		{
			HPUSH( (uint8*)"ecx" );
			if( *(int64*)DVREG$1 == 4ll ) goto label$952;
			{
				HPREPOPERAND( DVREG$1, &OSTR$1, 7ll, 0ll, 0ll, -1ll );
				HPUSH( *(uint8**)&OSTR$1 );
			}
			label$952:;
			label$951:;
		}
		goto label$949;
		label$950:;
		if( ((int64)-(REG$1 != 3ll) & (int64)-(ECXFREE$1 == 0ll)) == 0ll ) goto label$953;
		{
			ECXPRESERVED$1 = -1ll;
			HPUSH( (uint8*)"ecx" );
		}
		label$953:;
		label$949:;
		if( *(int64*)SVREG$1 == 4ll ) goto label$955;
		{
			HPREPOPERAND( SVREG$1, &OSTR$1, 1ll, 0ll, 0ll, -1ll );
			HMOV( (uint8*)"cl", *(uint8**)&OSTR$1 );
		}
		goto label$954;
		label$955:;
		{
			if( REG$1 == 3ll ) goto label$957;
			{
				HMOV( (uint8*)"ecx", (uint8*)((uint8*)RNAMETB$ + (((*(int64*)((uint8*)DTYPETB$ + 168ll) << 3ll) + REG$1) << 3ll)) );
			}
			label$957:;
			label$956:;
		}
		label$954:;
		if( ECXINDEST$1 == 0ll ) goto label$959;
		{
			if( EAXFREE$1 != 0ll ) goto label$961;
			{
				EAXPRESERVED$1 = -1ll;
				OUTP( (uint8*)"xchg eax, [esp]" );
			}
			goto label$960;
			label$961:;
			{
				HPOP( (uint8*)"eax" );
			}
			label$960:;
			fb_StrAssign( (void*)&TMP$1, -1ll, (void*)(((uint8*)RNAMETB$ + (*(int64*)((uint8*)DTYPETB$ + (*(int64*)((uint8*)DVREG$1 + 8ll) * 24ll)) << 6ll)) + 40ll), 8ll, 0 );
		}
		goto label$958;
		label$959:;
		{
			FBSTRING* vr$38 = fb_StrAssign( (void*)&TMP$1, -1ll, (void*)&DST$1, -1ll, 0 );
		}
		label$958:;
		fb_StrAssign( (void*)&SRC$1, -1ll, (void*)"cl", 3ll, 0 );
	}
	label$945:;
	FBSTRING* vr$39 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)&MNEMONIC$1, -1ll, 0 );
	FBSTRING* vr$40 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)" ", 2ll, 0 );
	FBSTRING* vr$41 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&TMP$1, -1ll, 0 );
	FBSTRING* vr$42 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$43 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	if( ECXINDEST$1 == 0ll ) goto label$963;
	{
		if( *(int64*)DVREG$1 == 4ll ) goto label$965;
		{
			HPOP( (uint8*)"ecx" );
			if( EAXPRESERVED$1 == 0ll ) goto label$967;
			{
				OUTP( (uint8*)"xchg ecx, [esp]" );
			}
			label$967:;
			label$966:;
		}
		label$965:;
		label$964:;
		HMOV( *(uint8**)&DST$1, (uint8*)(((uint8*)RNAMETB$ + (*(int64*)((uint8*)DTYPETB$ + (*(int64*)((uint8*)DVREG$1 + 8ll) * 24ll)) << 6ll)) + 40ll) );
	}
	label$963:;
	label$962:;
	if( EAXPRESERVED$1 == 0ll ) goto label$969;
	{
		HPOP( (uint8*)"eax" );
	}
	label$969:;
	label$968:;
	if( ECXPRESERVED$1 == 0ll ) goto label$971;
	{
		HPOP( (uint8*)"ecx" );
	}
	label$971:;
	label$970:;
	label$937:;
}

static void _EMITSHLL( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$972:;
	HSHIFTL( 41ll, DVREG$1, SVREG$1 );
	label$973:;
}

static void _EMITSHLI( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$974:;
	HSHIFTI( 41ll, DVREG$1, SVREG$1 );
	label$975:;
}

static void _EMITSHRL( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$976:;
	HSHIFTL( 42ll, DVREG$1, SVREG$1 );
	label$977:;
}

static void _EMITSHRI( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$978:;
	HSHIFTI( 42ll, DVREG$1, SVREG$1 );
	label$979:;
}

static void _EMITANDL( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$980:;
	static FBSTRING DST1$1;
	static FBSTRING DST2$1;
	static FBSTRING SRC1$1;
	static FBSTRING SRC2$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND64( DVREG$1, &DST1$1, &DST2$1 );
	HPREPOPERAND64( SVREG$1, &SRC1$1, &SRC2$1 );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"and ", 5ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST1$1, -1ll, 0 );
	FBSTRING* vr$2 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC1$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"and ", 5ll, 0 );
	FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST2$1, -1ll, 0 );
	FBSTRING* vr$6 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$7 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC2$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$981:;
}

static void _EMITANDI( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$982:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"and ", 5ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
	FBSTRING* vr$2 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$983:;
}

static void _EMITORL( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$984:;
	static FBSTRING DST1$1;
	static FBSTRING DST2$1;
	static FBSTRING SRC1$1;
	static FBSTRING SRC2$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND64( DVREG$1, &DST1$1, &DST2$1 );
	HPREPOPERAND64( SVREG$1, &SRC1$1, &SRC2$1 );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"or ", 4ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST1$1, -1ll, 0 );
	FBSTRING* vr$2 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC1$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"or ", 4ll, 0 );
	FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST2$1, -1ll, 0 );
	FBSTRING* vr$6 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$7 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC2$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$985:;
}

static void _EMITORI( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$986:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"or ", 4ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
	FBSTRING* vr$2 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$987:;
}

static void _EMITXORL( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$988:;
	static FBSTRING DST1$1;
	static FBSTRING DST2$1;
	static FBSTRING SRC1$1;
	static FBSTRING SRC2$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND64( DVREG$1, &DST1$1, &DST2$1 );
	HPREPOPERAND64( SVREG$1, &SRC1$1, &SRC2$1 );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"xor ", 5ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST1$1, -1ll, 0 );
	FBSTRING* vr$2 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC1$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"xor ", 5ll, 0 );
	FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST2$1, -1ll, 0 );
	FBSTRING* vr$6 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$7 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC2$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$989:;
}

static void _EMITXORI( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$990:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"xor ", 5ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
	FBSTRING* vr$2 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$991:;
}

static void _EMITEQVL( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$992:;
	static FBSTRING DST1$1;
	static FBSTRING DST2$1;
	static FBSTRING SRC1$1;
	static FBSTRING SRC2$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND64( DVREG$1, &DST1$1, &DST2$1 );
	HPREPOPERAND64( SVREG$1, &SRC1$1, &SRC2$1 );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"xor ", 5ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST1$1, -1ll, 0 );
	FBSTRING* vr$2 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC1$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"xor ", 5ll, 0 );
	FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST2$1, -1ll, 0 );
	FBSTRING* vr$6 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$7 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC2$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$8 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"not ", 5ll, 0 );
	FBSTRING* vr$9 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST1$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$10 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"not ", 5ll, 0 );
	FBSTRING* vr$11 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST2$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$993:;
}

static void _EMITEQVI( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$994:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"xor ", 5ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
	FBSTRING* vr$2 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"not ", 5ll, 0 );
	FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$995:;
}

static void _EMITIMPL( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$996:;
	static FBSTRING DST1$1;
	static FBSTRING DST2$1;
	static FBSTRING SRC1$1;
	static FBSTRING SRC2$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND64( DVREG$1, &DST1$1, &DST2$1 );
	HPREPOPERAND64( SVREG$1, &SRC1$1, &SRC2$1 );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"not ", 5ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST1$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$2 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"not ", 5ll, 0 );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST2$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"or ", 4ll, 0 );
	FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST1$1, -1ll, 0 );
	FBSTRING* vr$6 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$7 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC1$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$8 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"or ", 4ll, 0 );
	FBSTRING* vr$9 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST2$1, -1ll, 0 );
	FBSTRING* vr$10 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$11 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC2$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$997:;
}

static void _EMITIMPI( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$998:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"not ", 5ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$2 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"or ", 4ll, 0 );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
	FBSTRING* vr$4 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$999:;
}

static void _EMITATN2( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$1000:;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)SVREG$1 == 4ll ) goto label$1003;
	{
		FBSTRING* vr$2 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fld ", 5ll, 0 );
		FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	goto label$1002;
	label$1003:;
	{
		OUTP( (uint8*)"fxch" );
	}
	label$1002:;
	OUTP( (uint8*)"fpatan" );
	label$1001:;
}

static void _EMITPOW( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$1004:;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)SVREG$1 == 4ll ) goto label$1007;
	{
		FBSTRING* vr$2 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fld ", 5ll, 0 );
		FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
		OUTP( (uint8*)"fxch" );
	}
	label$1007:;
	label$1006:;
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
	label$1005:;
}

static void HCMPL( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, uint8* MNEMONIC$1, uint8* REV_MNEMONIC$1, uint8* USG_MNEMONIC$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1, int64 ISINVERSE$1 )
{
	FBSTRING TMP$1191$1;
	FBSTRING TMP$1193$1;
	label$1008:;
	static FBSTRING DST1$1;
	static FBSTRING DST2$1;
	static FBSTRING SRC1$1;
	static FBSTRING SRC2$1;
	static FBSTRING RNAME$1;
	static FBSTRING OSTR$1;
	static FBSTRING LNAME$1;
	static FBSTRING FALSELABEL$1;
	HPREPOPERAND64( DVREG$1, &DST1$1, &DST2$1 );
	HPREPOPERAND64( SVREG$1, &SRC1$1, &SRC2$1 );
	if( LABEL$1 != (struct $8FBSYMBOL*)0ull ) goto label$1011;
	{
		uint8* vr$1 = SYMBUNIQUELABEL(  );
		fb_StrAssign( (void*)&LNAME$1, -1ll, (void*)vr$1, 0ll, 0 );
	}
	goto label$1010;
	label$1011:;
	{
		uint8* vr$2 = SYMBGETMANGLEDNAME( LABEL$1 );
		fb_StrAssign( (void*)&LNAME$1, -1ll, (void*)vr$2, 0ll, 0 );
	}
	label$1010:;
	FBSTRING* vr$3 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"cmp ", 5ll, 0 );
	FBSTRING* vr$4 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST2$1, -1ll, 0 );
	FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$6 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC2$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	uint8* vr$7 = SYMBUNIQUELABEL(  );
	fb_StrAssign( (void*)&FALSELABEL$1, -1ll, (void*)vr$7, 0ll, 0 );
	if( RVREG$1 == (struct $6IRVREG*)0ull ) goto label$1013;
	{
		HPREPOPERAND( RVREG$1, &RNAME$1, 2147483648ll, 0ll, 0ll, -1ll );
		HMOV( *(uint8**)&RNAME$1, (uint8*)"-1" );
	}
	label$1013:;
	label$1012:;
	__builtin_memset( &TMP$1191$1, 0, 24ll );
	FBSTRING* vr$11 = fb_StrConcat( &TMP$1191$1, (void*)"j", 2ll, (void*)MNEMONIC$1, 0ll );
	FBSTRING* vr$12 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$11, -1ll, 0 );
	if( ISINVERSE$1 != 0ll ) goto label$1015;
	{
		HBRANCH( *(uint8**)&OSTR$1, *(uint8**)&LNAME$1 );
	}
	goto label$1014;
	label$1015:;
	{
		HBRANCH( *(uint8**)&OSTR$1, *(uint8**)&FALSELABEL$1 );
	}
	label$1014:;
	int64 vr$14 = fb_StrLen( (void*)REV_MNEMONIC$1, 0ll );
	if( vr$14 <= 0ll ) goto label$1017;
	{
		FBSTRING TMP$1192$2;
		__builtin_memset( &TMP$1192$2, 0, 24ll );
		FBSTRING* vr$18 = fb_StrConcat( &TMP$1192$2, (void*)"j", 2ll, (void*)REV_MNEMONIC$1, 0ll );
		FBSTRING* vr$19 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$18, -1ll, 0 );
		HBRANCH( *(uint8**)&OSTR$1, *(uint8**)&FALSELABEL$1 );
	}
	label$1017:;
	label$1016:;
	FBSTRING* vr$20 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"cmp ", 5ll, 0 );
	FBSTRING* vr$21 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST1$1, -1ll, 0 );
	FBSTRING* vr$22 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$23 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC1$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	__builtin_memset( &TMP$1193$1, 0, 24ll );
	FBSTRING* vr$26 = fb_StrConcat( &TMP$1193$1, (void*)"j", 2ll, (void*)USG_MNEMONIC$1, 0ll );
	FBSTRING* vr$27 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$26, -1ll, 0 );
	HBRANCH( *(uint8**)&OSTR$1, *(uint8**)&LNAME$1 );
	HLABEL( *(uint8**)&FALSELABEL$1 );
	if( RVREG$1 == (struct $6IRVREG*)0ull ) goto label$1019;
	{
		FBSTRING* vr$29 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"xor ", 5ll, 0 );
		FBSTRING* vr$30 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		FBSTRING* vr$31 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
		FBSTRING* vr$32 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
		HLABEL( *(uint8**)&LNAME$1 );
	}
	label$1019:;
	label$1018:;
	label$1009:;
}

static void HCMPI( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, uint8* MNEMONIC$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$1020:;
	static FBSTRING RNAME$1;
	static FBSTRING RNAME8$1;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	static FBSTRING LNAME$1;
	static int64 ISEDXFREE$1;
	static int64 DOTEST$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( LABEL$1 != (struct $8FBSYMBOL*)0ull ) goto label$1023;
	{
		uint8* vr$1 = SYMBUNIQUELABEL(  );
		fb_StrAssign( (void*)&LNAME$1, -1ll, (void*)vr$1, 0ll, 0 );
	}
	goto label$1022;
	label$1023:;
	{
		uint8* vr$2 = SYMBGETMANGLEDNAME( LABEL$1 );
		fb_StrAssign( (void*)&LNAME$1, -1ll, (void*)vr$2, 0ll, 0 );
	}
	label$1022:;
	DOTEST$1 = 0ll;
	if( ((int64)-(*(int64*)SVREG$1 == 0ll) & (int64)-(*(int64*)DVREG$1 == 4ll)) == 0ll ) goto label$1025;
	{
		if( *(int64*)((uint8*)SVREG$1 + 48ll) != 0ll ) goto label$1027;
		{
			DOTEST$1 = -1ll;
		}
		label$1027:;
		label$1026:;
	}
	label$1025:;
	label$1024:;
	if( DOTEST$1 == 0ll ) goto label$1029;
	{
		FBSTRING* vr$12 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"test ", 6ll, 0 );
		FBSTRING* vr$13 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		FBSTRING* vr$14 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
		FBSTRING* vr$15 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	goto label$1028;
	label$1029:;
	{
		FBSTRING* vr$16 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"cmp ", 5ll, 0 );
		FBSTRING* vr$17 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		FBSTRING* vr$18 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
		FBSTRING* vr$19 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	label$1028:;
	if( RVREG$1 != (struct $6IRVREG*)0ull ) goto label$1031;
	{
		FBSTRING TMP$1195$2;
		__builtin_memset( &TMP$1195$2, 0, 24ll );
		FBSTRING* vr$23 = fb_StrConcat( &TMP$1195$2, (void*)"j", 2ll, (void*)MNEMONIC$1, 0ll );
		FBSTRING* vr$24 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$23, -1ll, 0 );
		HBRANCH( *(uint8**)&OSTR$1, *(uint8**)&LNAME$1 );
		goto label$1021;
	}
	label$1031:;
	label$1030:;
	HPREPOPERAND( RVREG$1, &RNAME$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( ((int64)-(*(int64*)((uint8*)&ENV$ + 224ll) >= 1ll) & (int64)-(*(int64*)RVREG$1 == 4ll)) == 0ll ) goto label$1033;
	{
		uint8* vr$31 = HGETREGNAME( 1ll, *(int64*)((uint8*)RVREG$1 + 24ll) );
		fb_StrAssign( (void*)&RNAME8$1, -1ll, (void*)vr$31, 0ll, 0 );
		if( ((int64)-(*(int64*)((uint8*)RVREG$1 + 24ll) == 2ll) | (int64)-(*(int64*)((uint8*)RVREG$1 + 24ll) == 1ll)) == 0ll ) goto label$1035;
		{
			FBSTRING TMP$1199$3;
			FBSTRING TMP$1200$3;
			int64 vr$38 = HISREGFREE( 0ll, 0ll );
			ISEDXFREE$1 = vr$38;
			if( ISEDXFREE$1 != 0ll ) goto label$1037;
			{
				FBSTRING* vr$40 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"xchg edx, ", 11ll, 0 );
				FBSTRING* vr$41 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
				OUTP( *(uint8**)&OSTR$1 );
			}
			label$1037:;
			label$1036:;
			__builtin_memset( &TMP$1199$3, 0, 24ll );
			FBSTRING* vr$44 = fb_StrConcat( &TMP$1199$3, (void*)"set", 4ll, (void*)MNEMONIC$1, 0ll );
			__builtin_memset( &TMP$1200$3, 0, 24ll );
			FBSTRING* vr$47 = fb_StrConcat( &TMP$1200$3, (void*)vr$44, -1ll, (void*)" dl", 4ll );
			FBSTRING* vr$48 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$47, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
			if( ISEDXFREE$1 != 0ll ) goto label$1039;
			{
				FBSTRING* vr$50 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"xchg edx, ", 11ll, 0 );
				FBSTRING* vr$51 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
				OUTP( *(uint8**)&OSTR$1 );
			}
			goto label$1038;
			label$1039:;
			{
				HMOV( *(uint8**)&RNAME$1, (uint8*)"edx" );
			}
			label$1038:;
		}
		goto label$1034;
		label$1035:;
		{
			FBSTRING TMP$1201$3;
			FBSTRING TMP$1202$3;
			FBSTRING TMP$1203$3;
			__builtin_memset( &TMP$1201$3, 0, 24ll );
			FBSTRING* vr$54 = fb_StrConcat( &TMP$1201$3, (void*)"set", 4ll, (void*)MNEMONIC$1, 0ll );
			__builtin_memset( &TMP$1202$3, 0, 24ll );
			FBSTRING* vr$57 = fb_StrConcat( &TMP$1202$3, (void*)vr$54, -1ll, (void*)" ", 2ll );
			__builtin_memset( &TMP$1203$3, 0, 24ll );
			FBSTRING* vr$60 = fb_StrConcat( &TMP$1203$3, (void*)vr$57, -1ll, (void*)&RNAME8$1, -1ll );
			FBSTRING* vr$61 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$60, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		label$1034:;
		FBSTRING* vr$62 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"shr ", 5ll, 0 );
		FBSTRING* vr$63 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		FBSTRING* vr$64 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", 1", 4ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
		FBSTRING* vr$65 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"sbb ", 5ll, 0 );
		FBSTRING* vr$66 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		FBSTRING* vr$67 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
		FBSTRING* vr$68 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	goto label$1032;
	label$1033:;
	{
		FBSTRING TMP$1206$2;
		FBSTRING* vr$69 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mov ", 5ll, 0 );
		FBSTRING* vr$70 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		FBSTRING* vr$71 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", -1", 5ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
		__builtin_memset( &TMP$1206$2, 0, 24ll );
		FBSTRING* vr$74 = fb_StrConcat( &TMP$1206$2, (void*)"j", 2ll, (void*)MNEMONIC$1, 0ll );
		FBSTRING* vr$75 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$74, -1ll, 0 );
		HBRANCH( *(uint8**)&OSTR$1, *(uint8**)&LNAME$1 );
		FBSTRING* vr$76 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"xor ", 5ll, 0 );
		FBSTRING* vr$77 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		FBSTRING* vr$78 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
		FBSTRING* vr$79 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
		HLABEL( *(uint8**)&LNAME$1 );
	}
	label$1032:;
	label$1021:;
}

static void HCMPF( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, uint8* MNEMONIC$1, uint8* MASK$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$1040:;
	static FBSTRING RNAME$1;
	static FBSTRING RNAME8$1;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	static FBSTRING LNAME$1;
	static int64 ISEAXFREE$1;
	static int64 ISEDXFREE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( LABEL$1 != (struct $8FBSYMBOL*)0ull ) goto label$1043;
	{
		uint8* vr$1 = SYMBUNIQUELABEL(  );
		fb_StrAssign( (void*)&LNAME$1, -1ll, (void*)vr$1, 0ll, 0 );
	}
	goto label$1042;
	label$1043:;
	{
		uint8* vr$2 = SYMBGETMANGLEDNAME( LABEL$1 );
		fb_StrAssign( (void*)&LNAME$1, -1ll, (void*)vr$2, 0ll, 0 );
	}
	label$1042:;
	if( *(int64*)SVREG$1 != 4ll ) goto label$1045;
	{
		OUTP( (uint8*)"fcompp" );
	}
	goto label$1044;
	label$1045:;
	{
		int64 TMP$1207$2;
		if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$1046;
		TMP$1207$2 = 22ll;
		goto label$1672;
		label$1046:;
		TMP$1207$2 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
		label$1672:;
		if( *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$1207$2 * 56ll)) != 1ll ) goto label$1048;
		{
			FBSTRING* vr$12 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fcomp ", 7ll, 0 );
			FBSTRING* vr$13 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		goto label$1047;
		label$1048:;
		{
			FBSTRING* vr$14 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"ficomp ", 8ll, 0 );
			FBSTRING* vr$15 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		label$1047:;
	}
	label$1044:;
	int64 vr$16 = HISREGFREE( 0ll, 5ll );
	ISEAXFREE$1 = vr$16;
	if( RVREG$1 == (struct $6IRVREG*)0ull ) goto label$1050;
	{
		ISEAXFREE$1 = (int64)-(*(int64*)((uint8*)RVREG$1 + 24ll) == 5ll);
	}
	label$1050:;
	label$1049:;
	if( ISEAXFREE$1 != 0ll ) goto label$1052;
	{
		HPUSH( (uint8*)"eax" );
	}
	label$1052:;
	label$1051:;
	OUTP( (uint8*)"fnstsw ax" );
	int64 vr$21 = fb_StrLen( (void*)MASK$1, 0ll );
	if( vr$21 <= 0ll ) goto label$1054;
	{
		FBSTRING TMP$1211$2;
		__builtin_memset( &TMP$1211$2, 0, 24ll );
		FBSTRING* vr$25 = fb_StrConcat( &TMP$1211$2, (void*)"test ah, ", 10ll, (void*)MASK$1, 0ll );
		FBSTRING* vr$26 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$25, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	goto label$1053;
	label$1054:;
	{
		OUTP( (uint8*)"sahf" );
	}
	label$1053:;
	if( ISEAXFREE$1 != 0ll ) goto label$1056;
	{
		HPOP( (uint8*)"eax" );
	}
	label$1056:;
	label$1055:;
	if( RVREG$1 != (struct $6IRVREG*)0ull ) goto label$1058;
	{
		FBSTRING TMP$1212$2;
		__builtin_memset( &TMP$1212$2, 0, 24ll );
		FBSTRING* vr$31 = fb_StrConcat( &TMP$1212$2, (void*)"j", 2ll, (void*)MNEMONIC$1, 0ll );
		FBSTRING* vr$32 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$31, -1ll, 0 );
		HBRANCH( *(uint8**)&OSTR$1, *(uint8**)&LNAME$1 );
		goto label$1041;
	}
	label$1058:;
	label$1057:;
	HPREPOPERAND( RVREG$1, &RNAME$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( *(int64*)((uint8*)&ENV$ + 224ll) < 1ll ) goto label$1060;
	{
		uint8* vr$35 = HGETREGNAME( 1ll, *(int64*)((uint8*)RVREG$1 + 24ll) );
		fb_StrAssign( (void*)&RNAME8$1, -1ll, (void*)vr$35, 0ll, 0 );
		if( ((int64)-(*(int64*)((uint8*)RVREG$1 + 24ll) == 2ll) | (int64)-(*(int64*)((uint8*)RVREG$1 + 24ll) == 1ll)) == 0ll ) goto label$1062;
		{
			FBSTRING TMP$1214$3;
			FBSTRING TMP$1215$3;
			int64 vr$42 = HISREGFREE( 0ll, 0ll );
			ISEDXFREE$1 = vr$42;
			if( ISEDXFREE$1 != 0ll ) goto label$1064;
			{
				FBSTRING* vr$44 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"xchg edx, ", 11ll, 0 );
				FBSTRING* vr$45 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
				OUTP( *(uint8**)&OSTR$1 );
			}
			label$1064:;
			label$1063:;
			__builtin_memset( &TMP$1214$3, 0, 24ll );
			FBSTRING* vr$48 = fb_StrConcat( &TMP$1214$3, (void*)"set", 4ll, (void*)MNEMONIC$1, 0ll );
			__builtin_memset( &TMP$1215$3, 0, 24ll );
			FBSTRING* vr$51 = fb_StrConcat( &TMP$1215$3, (void*)vr$48, -1ll, (void*)"\x09" "dl", 4ll );
			FBSTRING* vr$52 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$51, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
			if( ISEDXFREE$1 != 0ll ) goto label$1066;
			{
				FBSTRING* vr$54 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"xchg edx, ", 11ll, 0 );
				FBSTRING* vr$55 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
				OUTP( *(uint8**)&OSTR$1 );
			}
			goto label$1065;
			label$1066:;
			{
				HMOV( *(uint8**)&RNAME$1, (uint8*)"edx" );
			}
			label$1065:;
		}
		goto label$1061;
		label$1062:;
		{
			FBSTRING TMP$1216$3;
			FBSTRING TMP$1217$3;
			FBSTRING TMP$1218$3;
			__builtin_memset( &TMP$1216$3, 0, 24ll );
			FBSTRING* vr$58 = fb_StrConcat( &TMP$1216$3, (void*)"set", 4ll, (void*)MNEMONIC$1, 0ll );
			__builtin_memset( &TMP$1217$3, 0, 24ll );
			FBSTRING* vr$61 = fb_StrConcat( &TMP$1217$3, (void*)vr$58, -1ll, (void*)" ", 2ll );
			__builtin_memset( &TMP$1218$3, 0, 24ll );
			FBSTRING* vr$64 = fb_StrConcat( &TMP$1218$3, (void*)vr$61, -1ll, (void*)&RNAME8$1, -1ll );
			FBSTRING* vr$65 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$64, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		label$1061:;
		FBSTRING* vr$66 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"shr ", 5ll, 0 );
		FBSTRING* vr$67 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		FBSTRING* vr$68 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", 1", 4ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
		FBSTRING* vr$69 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"sbb ", 5ll, 0 );
		FBSTRING* vr$70 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		FBSTRING* vr$71 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
		FBSTRING* vr$72 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	goto label$1059;
	label$1060:;
	{
		FBSTRING TMP$1219$2;
		FBSTRING* vr$73 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mov ", 5ll, 0 );
		FBSTRING* vr$74 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		FBSTRING* vr$75 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", -1", 5ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
		__builtin_memset( &TMP$1219$2, 0, 24ll );
		FBSTRING* vr$78 = fb_StrConcat( &TMP$1219$2, (void*)"j", 2ll, (void*)MNEMONIC$1, 0ll );
		FBSTRING* vr$79 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$78, -1ll, 0 );
		HBRANCH( *(uint8**)&OSTR$1, *(uint8**)&LNAME$1 );
		FBSTRING* vr$80 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"xor ", 5ll, 0 );
		FBSTRING* vr$81 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		FBSTRING* vr$82 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
		FBSTRING* vr$83 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
		HLABEL( *(uint8**)&LNAME$1 );
	}
	label$1059:;
	label$1041:;
}

static void _EMITCGTL( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$1220$1;
	label$1067:;
	static FBSTRING JMP$1;
	static FBSTRING RJMP$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$1069;
	TMP$1220$1 = 22ll;
	goto label$1673;
	label$1069:;
	TMP$1220$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$1673:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1220$1 * 56ll)) + 16ll) == 0ll ) goto label$1071;
	{
		fb_StrAssign( (void*)&JMP$1, -1ll, (void*)"g", 2ll, 0 );
		fb_StrAssign( (void*)&RJMP$1, -1ll, (void*)"l", 2ll, 0 );
	}
	goto label$1070;
	label$1071:;
	{
		fb_StrAssign( (void*)&JMP$1, -1ll, (void*)"a", 2ll, 0 );
		fb_StrAssign( (void*)&RJMP$1, -1ll, (void*)"b", 2ll, 0 );
	}
	label$1070:;
	HCMPL( RVREG$1, LABEL$1, *(uint8**)&JMP$1, *(uint8**)&RJMP$1, (uint8*)"a", DVREG$1, SVREG$1, 0ll );
	label$1068:;
}

static void _EMITCGTI( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$1225$1;
	label$1072:;
	static FBSTRING JMP$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$1074;
	TMP$1225$1 = 22ll;
	goto label$1674;
	label$1074:;
	TMP$1225$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$1674:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1225$1 * 56ll)) + 16ll) == 0ll ) goto label$1076;
	{
		fb_StrAssign( (void*)&JMP$1, -1ll, (void*)"g", 2ll, 0 );
	}
	goto label$1075;
	label$1076:;
	{
		fb_StrAssign( (void*)&JMP$1, -1ll, (void*)"a", 2ll, 0 );
	}
	label$1075:;
	HCMPI( RVREG$1, LABEL$1, *(uint8**)&JMP$1, DVREG$1, SVREG$1 );
	label$1073:;
}

static void _EMITCGTF( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$1077:;
	HCMPF( RVREG$1, LABEL$1, (uint8*)"z", (uint8*)"0b01000001", DVREG$1, SVREG$1 );
	label$1078:;
}

static void _EMITCLTL( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$1228$1;
	label$1079:;
	static FBSTRING JMP$1;
	static FBSTRING RJMP$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$1081;
	TMP$1228$1 = 22ll;
	goto label$1675;
	label$1081:;
	TMP$1228$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$1675:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1228$1 * 56ll)) + 16ll) == 0ll ) goto label$1083;
	{
		fb_StrAssign( (void*)&JMP$1, -1ll, (void*)"l", 2ll, 0 );
		fb_StrAssign( (void*)&RJMP$1, -1ll, (void*)"g", 2ll, 0 );
	}
	goto label$1082;
	label$1083:;
	{
		fb_StrAssign( (void*)&JMP$1, -1ll, (void*)"b", 2ll, 0 );
		fb_StrAssign( (void*)&RJMP$1, -1ll, (void*)"a", 2ll, 0 );
	}
	label$1082:;
	HCMPL( RVREG$1, LABEL$1, *(uint8**)&JMP$1, *(uint8**)&RJMP$1, (uint8*)"b", DVREG$1, SVREG$1, 0ll );
	label$1080:;
}

static void _EMITCLTI( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$1229$1;
	label$1084:;
	static FBSTRING JMP$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$1086;
	TMP$1229$1 = 22ll;
	goto label$1676;
	label$1086:;
	TMP$1229$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$1676:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1229$1 * 56ll)) + 16ll) == 0ll ) goto label$1088;
	{
		fb_StrAssign( (void*)&JMP$1, -1ll, (void*)"l", 2ll, 0 );
	}
	goto label$1087;
	label$1088:;
	{
		fb_StrAssign( (void*)&JMP$1, -1ll, (void*)"b", 2ll, 0 );
	}
	label$1087:;
	HCMPI( RVREG$1, LABEL$1, *(uint8**)&JMP$1, DVREG$1, SVREG$1 );
	label$1085:;
}

static void _EMITCLTF( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$1089:;
	HCMPF( RVREG$1, LABEL$1, (uint8*)"nz", (uint8*)"0b00000001", DVREG$1, SVREG$1 );
	label$1090:;
}

static void _EMITCEQL( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$1091:;
	HCMPL( RVREG$1, LABEL$1, (uint8*)"ne", (uint8*)"", (uint8*)"e", DVREG$1, SVREG$1, -1ll );
	label$1092:;
}

static void _EMITCEQI( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$1093:;
	HCMPI( RVREG$1, LABEL$1, (uint8*)"e", DVREG$1, SVREG$1 );
	label$1094:;
}

static void _EMITCEQF( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$1095:;
	HCMPF( RVREG$1, LABEL$1, (uint8*)"nz", (uint8*)"0b01000000", DVREG$1, SVREG$1 );
	label$1096:;
}

static void _EMITCNEL( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$1097:;
	HCMPL( RVREG$1, LABEL$1, (uint8*)"ne", (uint8*)"", (uint8*)"ne", DVREG$1, SVREG$1, 0ll );
	label$1098:;
}

static void _EMITCNEI( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$1099:;
	HCMPI( RVREG$1, LABEL$1, (uint8*)"ne", DVREG$1, SVREG$1 );
	label$1100:;
}

static void _EMITCNEF( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$1101:;
	HCMPF( RVREG$1, LABEL$1, (uint8*)"z", (uint8*)"0b01000000", DVREG$1, SVREG$1 );
	label$1102:;
}

static void _EMITCLEL( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$1235$1;
	label$1103:;
	static FBSTRING JMP$1;
	static FBSTRING RJMP$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$1105;
	TMP$1235$1 = 22ll;
	goto label$1677;
	label$1105:;
	TMP$1235$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$1677:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1235$1 * 56ll)) + 16ll) == 0ll ) goto label$1107;
	{
		fb_StrAssign( (void*)&JMP$1, -1ll, (void*)"l", 2ll, 0 );
		fb_StrAssign( (void*)&RJMP$1, -1ll, (void*)"g", 2ll, 0 );
	}
	goto label$1106;
	label$1107:;
	{
		fb_StrAssign( (void*)&JMP$1, -1ll, (void*)"b", 2ll, 0 );
		fb_StrAssign( (void*)&RJMP$1, -1ll, (void*)"a", 2ll, 0 );
	}
	label$1106:;
	HCMPL( RVREG$1, LABEL$1, *(uint8**)&JMP$1, *(uint8**)&RJMP$1, (uint8*)"be", DVREG$1, SVREG$1, 0ll );
	label$1104:;
}

static void _EMITCLEI( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$1237$1;
	label$1108:;
	static FBSTRING JMP$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$1110;
	TMP$1237$1 = 22ll;
	goto label$1678;
	label$1110:;
	TMP$1237$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$1678:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1237$1 * 56ll)) + 16ll) == 0ll ) goto label$1112;
	{
		fb_StrAssign( (void*)&JMP$1, -1ll, (void*)"le", 3ll, 0 );
	}
	goto label$1111;
	label$1112:;
	{
		fb_StrAssign( (void*)&JMP$1, -1ll, (void*)"be", 3ll, 0 );
	}
	label$1111:;
	HCMPI( RVREG$1, LABEL$1, *(uint8**)&JMP$1, DVREG$1, SVREG$1 );
	label$1109:;
}

static void _EMITCLEF( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$1113:;
	HCMPF( RVREG$1, LABEL$1, (uint8*)"nz", (uint8*)"0b01000001", DVREG$1, SVREG$1 );
	label$1114:;
}

static void _EMITCGEL( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$1239$1;
	label$1115:;
	static FBSTRING JMP$1;
	static FBSTRING RJMP$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$1117;
	TMP$1239$1 = 22ll;
	goto label$1679;
	label$1117:;
	TMP$1239$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$1679:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1239$1 * 56ll)) + 16ll) == 0ll ) goto label$1119;
	{
		fb_StrAssign( (void*)&JMP$1, -1ll, (void*)"g", 2ll, 0 );
		fb_StrAssign( (void*)&RJMP$1, -1ll, (void*)"l", 2ll, 0 );
	}
	goto label$1118;
	label$1119:;
	{
		fb_StrAssign( (void*)&JMP$1, -1ll, (void*)"a", 2ll, 0 );
		fb_StrAssign( (void*)&RJMP$1, -1ll, (void*)"b", 2ll, 0 );
	}
	label$1118:;
	HCMPL( RVREG$1, LABEL$1, *(uint8**)&JMP$1, *(uint8**)&RJMP$1, (uint8*)"ae", DVREG$1, SVREG$1, 0ll );
	label$1116:;
}

static void _EMITCGEI( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	int64 TMP$1241$1;
	label$1120:;
	static FBSTRING JMP$1;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$1122;
	TMP$1241$1 = 22ll;
	goto label$1680;
	label$1122:;
	TMP$1241$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$1680:;
	if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1241$1 * 56ll)) + 16ll) == 0ll ) goto label$1124;
	{
		fb_StrAssign( (void*)&JMP$1, -1ll, (void*)"ge", 3ll, 0 );
	}
	goto label$1123;
	label$1124:;
	{
		fb_StrAssign( (void*)&JMP$1, -1ll, (void*)"ae", 3ll, 0 );
	}
	label$1123:;
	HCMPI( RVREG$1, LABEL$1, *(uint8**)&JMP$1, DVREG$1, SVREG$1 );
	label$1121:;
}

static void _EMITCGEF( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$1125:;
	HCMPF( RVREG$1, LABEL$1, (uint8*)"ae", (uint8*)"", DVREG$1, SVREG$1 );
	label$1126:;
}

static void _EMITNEGL( struct $6IRVREG* DVREG$1 )
{
	label$1127:;
	static FBSTRING DST1$1;
	static FBSTRING DST2$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND64( DVREG$1, &DST1$1, &DST2$1 );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"neg ", 5ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST1$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$2 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"adc ", 5ll, 0 );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST2$1, -1ll, 0 );
	FBSTRING* vr$4 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", 0", 4ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$5 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"neg ", 5ll, 0 );
	FBSTRING* vr$6 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST2$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$1128:;
}

static void _EMITNEGI( struct $6IRVREG* DVREG$1 )
{
	label$1129:;
	static FBSTRING DST$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"neg ", 5ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$1130:;
}

static void _EMITNEGF( struct $6IRVREG* DVREG$1 )
{
	label$1131:;
	OUTP( (uint8*)"fchs" );
	label$1132:;
}

static void _EMITNOTL( struct $6IRVREG* DVREG$1 )
{
	label$1133:;
	static FBSTRING DST1$1;
	static FBSTRING DST2$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND64( DVREG$1, &DST1$1, &DST2$1 );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"not ", 5ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST1$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$2 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"not ", 5ll, 0 );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST2$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$1134:;
}

static void _EMITNOTI( struct $6IRVREG* DVREG$1 )
{
	label$1135:;
	static FBSTRING DST$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"not ", 5ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$1136:;
}

static void _EMITABSL( struct $6IRVREG* DVREG$1 )
{
	label$1137:;
	static FBSTRING DST1$1;
	static FBSTRING DST2$1;
	static int64 REG$1;
	static int64 ISFREE$1;
	static FBSTRING RNAME$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND64( DVREG$1, &DST1$1, &DST2$1 );
	int64 vr$0 = HFINDREGNOTINVREG( DVREG$1, 0ll );
	REG$1 = vr$0;
	uint8* vr$1 = HGETREGNAME( 7ll, REG$1 );
	fb_StrAssign( (void*)&RNAME$1, -1ll, (void*)vr$1, 0ll, 0 );
	int64 vr$2 = HISREGFREE( 0ll, REG$1 );
	ISFREE$1 = vr$2;
	if( ISFREE$1 != 0ll ) goto label$1140;
	{
		HPUSH( *(uint8**)&RNAME$1 );
	}
	label$1140:;
	label$1139:;
	HMOV( *(uint8**)&RNAME$1, *(uint8**)&DST2$1 );
	FBSTRING* vr$4 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"sar ", 5ll, 0 );
	FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
	FBSTRING* vr$6 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", 31", 5ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$7 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"xor ", 5ll, 0 );
	FBSTRING* vr$8 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST1$1, -1ll, 0 );
	FBSTRING* vr$9 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$10 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$11 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"xor ", 5ll, 0 );
	FBSTRING* vr$12 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST2$1, -1ll, 0 );
	FBSTRING* vr$13 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$14 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$15 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"sub ", 5ll, 0 );
	FBSTRING* vr$16 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST1$1, -1ll, 0 );
	FBSTRING* vr$17 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$18 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$19 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"sbb ", 5ll, 0 );
	FBSTRING* vr$20 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST2$1, -1ll, 0 );
	FBSTRING* vr$21 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$22 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	if( ISFREE$1 != 0ll ) goto label$1142;
	{
		HPOP( *(uint8**)&RNAME$1 );
	}
	label$1142:;
	label$1141:;
	label$1138:;
}

static void _EMITABSI( struct $6IRVREG* DVREG$1 )
{
	int64 TMP$1244$1;
	label$1143:;
	static FBSTRING DST$1;
	static int64 REG$1;
	static int64 ISFREE$1;
	static FBSTRING RNAME$1;
	static int64 BITS$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	int64 vr$0 = HFINDREGNOTINVREG( DVREG$1, 0ll );
	REG$1 = vr$0;
	uint8* vr$2 = HGETREGNAME( *(int64*)((uint8*)DVREG$1 + 8ll), REG$1 );
	fb_StrAssign( (void*)&RNAME$1, -1ll, (void*)vr$2, 0ll, 0 );
	int64 vr$3 = HISREGFREE( 0ll, REG$1 );
	ISFREE$1 = vr$3;
	if( ISFREE$1 != 0ll ) goto label$1146;
	{
		HPUSH( *(uint8**)&RNAME$1 );
	}
	label$1146:;
	label$1145:;
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$1147;
	TMP$1244$1 = 22ll;
	goto label$1681;
	label$1147:;
	TMP$1244$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$1681:;
	BITS$1 = (*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1244$1 * 56ll)) + 8ll) << 3ll) + -1ll;
	HMOV( *(uint8**)&RNAME$1, *(uint8**)&DST$1 );
	FBSTRING* vr$13 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"sar ", 5ll, 0 );
	FBSTRING* vr$14 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
	FBSTRING* vr$15 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$16 = fb_LongintToStr( BITS$1 );
	FBSTRING* vr$17 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)vr$16, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$18 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"xor ", 5ll, 0 );
	FBSTRING* vr$19 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
	FBSTRING* vr$20 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$21 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$22 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"sub ", 5ll, 0 );
	FBSTRING* vr$23 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
	FBSTRING* vr$24 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$25 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&RNAME$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	if( ISFREE$1 != 0ll ) goto label$1149;
	{
		HPOP( *(uint8**)&RNAME$1 );
	}
	label$1149:;
	label$1148:;
	label$1144:;
}

static void _EMITABSF( struct $6IRVREG* DVREG$1 )
{
	label$1150:;
	OUTP( (uint8*)"fabs" );
	label$1151:;
}

static void _EMITSGNL( struct $6IRVREG* DVREG$1 )
{
	FBSTRING TMP$1245$1;
	FBSTRING TMP$1246$1;
	FBSTRING TMP$1247$1;
	FBSTRING TMP$1248$1;
	FBSTRING TMP$1249$1;
	FBSTRING TMP$1250$1;
	label$1152:;
	FBSTRING LOW$1;
	__builtin_memset( &LOW$1, 0, 24ll );
	FBSTRING HIGH$1;
	__builtin_memset( &HIGH$1, 0, 24ll );
	FBSTRING EXITLABEL$1;
	__builtin_memset( &EXITLABEL$1, 0, 24ll );
	FBSTRING TMP32$1;
	__builtin_memset( &TMP32$1, 0, 24ll );
	int64 TMPREG$1;
	int64 ISTMPFREE$1;
	HPREPOPERAND64( DVREG$1, &LOW$1, &HIGH$1 );
	uint8* vr$6 = SYMBUNIQUELABEL(  );
	fb_StrAssign( (void*)&EXITLABEL$1, -1ll, (void*)vr$6, 0ll, 0 );
	int64 vr$8 = HFINDREGNOTINVREG( DVREG$1, 0ll );
	TMPREG$1 = vr$8;
	int64 vr$9 = HISREGFREE( 0ll, TMPREG$1 );
	ISTMPFREE$1 = vr$9;
	uint8* vr$10 = HGETREGNAME( 7ll, TMPREG$1 );
	fb_StrAssign( (void*)&TMP32$1, -1ll, (void*)vr$10, 0ll, 0 );
	if( ISTMPFREE$1 != 0ll ) goto label$1155;
	{
		HPUSH( *(uint8**)&TMP32$1 );
	}
	label$1155:;
	label$1154:;
	HMOV( *(uint8**)&TMP32$1, *(uint8**)&LOW$1 );
	__builtin_memset( &TMP$1247$1, 0, 24ll );
	__builtin_memset( &TMP$1245$1, 0, 24ll );
	FBSTRING* vr$17 = fb_StrConcat( &TMP$1245$1, (void*)"cmp ", 5ll, (void*)&HIGH$1, -1ll );
	__builtin_memset( &TMP$1246$1, 0, 24ll );
	FBSTRING* vr$20 = fb_StrConcat( &TMP$1246$1, (void*)vr$17, -1ll, (void*)", 0", 4ll );
	FBSTRING* vr$22 = fb_StrAssign( (void*)&TMP$1247$1, -1ll, (void*)vr$20, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1247$1 );
	fb_StrDelete( &TMP$1247$1 );
	HMOV( *(uint8**)&LOW$1, (uint8*)"-1" );
	HMOV( *(uint8**)&HIGH$1, (uint8*)"-1" );
	HBRANCH( (uint8*)"jl", *(uint8**)&EXITLABEL$1 );
	HMOV( *(uint8**)&LOW$1, (uint8*)"1" );
	HMOV( *(uint8**)&HIGH$1, (uint8*)"0" );
	HBRANCH( (uint8*)"jg", *(uint8**)&EXITLABEL$1 );
	__builtin_memset( &TMP$1250$1, 0, 24ll );
	__builtin_memset( &TMP$1248$1, 0, 24ll );
	FBSTRING* vr$28 = fb_StrConcat( &TMP$1248$1, (void*)"cmp ", 5ll, (void*)&TMP32$1, -1ll );
	__builtin_memset( &TMP$1249$1, 0, 24ll );
	FBSTRING* vr$31 = fb_StrConcat( &TMP$1249$1, (void*)vr$28, -1ll, (void*)", 0", 4ll );
	FBSTRING* vr$33 = fb_StrAssign( (void*)&TMP$1250$1, -1ll, (void*)vr$31, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1250$1 );
	fb_StrDelete( &TMP$1250$1 );
	HBRANCH( (uint8*)"jne", *(uint8**)&EXITLABEL$1 );
	HMOV( *(uint8**)&LOW$1, (uint8*)"0" );
	HLABEL( *(uint8**)&EXITLABEL$1 );
	if( ISTMPFREE$1 != 0ll ) goto label$1157;
	{
		HPOP( *(uint8**)&TMP32$1 );
	}
	label$1157:;
	label$1156:;
	fb_StrDelete( &TMP32$1 );
	fb_StrDelete( &EXITLABEL$1 );
	fb_StrDelete( &HIGH$1 );
	fb_StrDelete( &LOW$1 );
	label$1153:;
}

static void _EMITSGNI( struct $6IRVREG* DVREG$1 )
{
	FBSTRING TMP$1251$1;
	FBSTRING TMP$1252$1;
	FBSTRING TMP$1253$1;
	label$1158:;
	FBSTRING DST$1;
	__builtin_memset( &DST$1, 0, 24ll );
	FBSTRING EXITLABEL$1;
	__builtin_memset( &EXITLABEL$1, 0, 24ll );
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	uint8* vr$3 = SYMBUNIQUELABEL(  );
	fb_StrAssign( (void*)&EXITLABEL$1, -1ll, (void*)vr$3, 0ll, 0 );
	__builtin_memset( &TMP$1253$1, 0, 24ll );
	__builtin_memset( &TMP$1251$1, 0, 24ll );
	FBSTRING* vr$9 = fb_StrConcat( &TMP$1251$1, (void*)"cmp ", 5ll, (void*)&DST$1, -1ll );
	__builtin_memset( &TMP$1252$1, 0, 24ll );
	FBSTRING* vr$12 = fb_StrConcat( &TMP$1252$1, (void*)vr$9, -1ll, (void*)", 0", 4ll );
	FBSTRING* vr$14 = fb_StrAssign( (void*)&TMP$1253$1, -1ll, (void*)vr$12, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1253$1 );
	fb_StrDelete( &TMP$1253$1 );
	HBRANCH( (uint8*)"je", *(uint8**)&EXITLABEL$1 );
	HMOV( *(uint8**)&DST$1, (uint8*)"1" );
	HBRANCH( (uint8*)"jg", *(uint8**)&EXITLABEL$1 );
	HMOV( *(uint8**)&DST$1, (uint8*)"-1" );
	HLABEL( *(uint8**)&EXITLABEL$1 );
	fb_StrDelete( &EXITLABEL$1 );
	fb_StrDelete( &DST$1 );
	label$1159:;
}

static void _EMITSGNF( struct $6IRVREG* DVREG$1 )
{
	label$1160:;
	FBSTRING DST$1;
	__builtin_memset( &DST$1, 0, 24ll );
	FBSTRING LABEL$1;
	__builtin_memset( &LABEL$1, 0, 24ll );
	int64 ISEAXFREE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	uint8* vr$3 = SYMBUNIQUELABEL(  );
	fb_StrAssign( (void*)&LABEL$1, -1ll, (void*)vr$3, 0ll, 0 );
	int64 vr$5 = HISREGFREE( 0ll, 5ll );
	ISEAXFREE$1 = vr$5;
	if( ISEAXFREE$1 != 0ll ) goto label$1163;
	{
		HPUSH( (uint8*)"eax" );
	}
	label$1163:;
	label$1162:;
	OUTP( (uint8*)"ftst" );
	OUTP( (uint8*)"fnstsw ax" );
	OUTP( (uint8*)"sahf" );
	if( ISEAXFREE$1 != 0ll ) goto label$1165;
	{
		HPOP( (uint8*)"eax" );
	}
	label$1165:;
	label$1164:;
	HBRANCH( (uint8*)"jz", *(uint8**)&LABEL$1 );
	OUTP( (uint8*)"fstp st(0)" );
	OUTP( (uint8*)"fld1" );
	HBRANCH( (uint8*)"ja", *(uint8**)&LABEL$1 );
	OUTP( (uint8*)"fchs" );
	HLABEL( *(uint8**)&LABEL$1 );
	fb_StrDelete( &LABEL$1 );
	fb_StrDelete( &DST$1 );
	label$1161:;
}

static void _EMITSIN( struct $6IRVREG* DVREG$1 )
{
	label$1166:;
	OUTP( (uint8*)"fsin" );
	label$1167:;
}

static void _EMITASIN( struct $6IRVREG* DVREG$1 )
{
	label$1168:;
	OUTP( (uint8*)"fld st(0)" );
	OUTP( (uint8*)"fmul st(0), st(0)" );
	OUTP( (uint8*)"fld1" );
	OUTP( (uint8*)"fsubrp" );
	OUTP( (uint8*)"fsqrt" );
	OUTP( (uint8*)"fpatan" );
	label$1169:;
}

static void _EMITCOS( struct $6IRVREG* DVREG$1 )
{
	label$1170:;
	OUTP( (uint8*)"fcos" );
	label$1171:;
}

static void _EMITACOS( struct $6IRVREG* DVREG$1 )
{
	label$1172:;
	OUTP( (uint8*)"fld st(0)" );
	OUTP( (uint8*)"fmul st(0), st(0)" );
	OUTP( (uint8*)"fld1" );
	OUTP( (uint8*)"fsubrp" );
	OUTP( (uint8*)"fsqrt" );
	OUTP( (uint8*)"fxch" );
	OUTP( (uint8*)"fpatan" );
	label$1173:;
}

static void _EMITTAN( struct $6IRVREG* DVREG$1 )
{
	label$1174:;
	OUTP( (uint8*)"fptan" );
	OUTP( (uint8*)"fstp st(0)" );
	label$1175:;
}

static void _EMITATAN( struct $6IRVREG* DVREG$1 )
{
	label$1176:;
	OUTP( (uint8*)"fld1" );
	OUTP( (uint8*)"fpatan" );
	label$1177:;
}

static void _EMITSQRT( struct $6IRVREG* DVREG$1 )
{
	label$1178:;
	OUTP( (uint8*)"fsqrt" );
	label$1179:;
}

static void _EMITLOG( struct $6IRVREG* DVREG$1 )
{
	label$1180:;
	OUTP( (uint8*)"fldln2" );
	OUTP( (uint8*)"fxch" );
	OUTP( (uint8*)"fyl2x" );
	label$1181:;
}

static void _EMITEXP( struct $6IRVREG* DVREG$1 )
{
	label$1182:;
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
	label$1183:;
}

static void HFPUCHANGERC( FBSTRING* REGNAME$1, uint8* MODE$1 )
{
	FBSTRING TMP$1270$1;
	FBSTRING TMP$1271$1;
	FBSTRING TMP$1272$1;
	FBSTRING TMP$1273$1;
	FBSTRING TMP$1274$1;
	label$1184:;
	OUTP( (uint8*)"sub esp, 4" );
	OUTP( (uint8*)"fnstcw [esp]" );
	HMOV( *(uint8**)REGNAME$1, (uint8*)"[esp]" );
	int32 vr$1 = fb_StrCompare( (void*)MODE$1, 0ll, (void*)"11", 3ll );
	if( (int64)vr$1 == 0ll ) goto label$1187;
	{
		FBSTRING TMP$1265$2;
		FBSTRING TMP$1266$2;
		FBSTRING TMP$1267$2;
		__builtin_memset( &TMP$1267$2, 0, 24ll );
		__builtin_memset( &TMP$1265$2, 0, 24ll );
		FBSTRING* vr$7 = fb_StrConcat( &TMP$1265$2, (void*)"and ", 5ll, (void*)REGNAME$1, -1ll );
		__builtin_memset( &TMP$1266$2, 0, 24ll );
		FBSTRING* vr$10 = fb_StrConcat( &TMP$1266$2, (void*)vr$7, -1ll, (void*)", 0b1111001111111111", 21ll );
		FBSTRING* vr$12 = fb_StrAssign( (void*)&TMP$1267$2, -1ll, (void*)vr$10, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1267$2 );
		fb_StrDelete( &TMP$1267$2 );
	}
	label$1187:;
	label$1186:;
	__builtin_memset( &TMP$1274$1, 0, 24ll );
	__builtin_memset( &TMP$1271$1, 0, 24ll );
	FBSTRING* vr$17 = fb_StrConcat( &TMP$1271$1, (void*)", 0b0000", 9ll, (void*)MODE$1, 0ll );
	__builtin_memset( &TMP$1272$1, 0, 24ll );
	FBSTRING* vr$20 = fb_StrConcat( &TMP$1272$1, (void*)vr$17, -1ll, (void*)"0000000000", 11ll );
	__builtin_memset( &TMP$1270$1, 0, 24ll );
	FBSTRING* vr$23 = fb_StrConcat( &TMP$1270$1, (void*)"or ", 4ll, (void*)REGNAME$1, -1ll );
	__builtin_memset( &TMP$1273$1, 0, 24ll );
	FBSTRING* vr$26 = fb_StrConcat( &TMP$1273$1, (void*)vr$23, -1ll, (void*)vr$20, -1ll );
	FBSTRING* vr$28 = fb_StrAssign( (void*)&TMP$1274$1, -1ll, (void*)vr$26, -1ll, 0 );
	OUTP( *(uint8**)&TMP$1274$1 );
	fb_StrDelete( &TMP$1274$1 );
	HPUSH( *(uint8**)REGNAME$1 );
	OUTP( (uint8*)"fldcw [esp]" );
	OUTP( (uint8*)"add esp, 4" );
	label$1185:;
}

static void HEMITFLOATFUNC( int64 FUNC$1 )
{
	label$1188:;
	int64 REG$1;
	int64 ISREGFREE$1;
	FBSTRING REGNAME$1;
	__builtin_memset( &REGNAME$1, 0, 24ll );
	int64 vr$1 = HFINDFREEREG( 0ll );
	REG$1 = vr$1;
	if( REG$1 != -1ll ) goto label$1191;
	{
		REG$1 = 5ll;
		ISREGFREE$1 = 0ll;
	}
	goto label$1190;
	label$1191:;
	{
		ISREGFREE$1 = -1ll;
	}
	label$1190:;
	uint8* vr$3 = HGETREGNAME( 7ll, REG$1 );
	fb_StrAssign( (void*)&REGNAME$1, -1ll, (void*)vr$3, 0ll, 0 );
	if( ISREGFREE$1 != 0ll ) goto label$1193;
	{
		HPUSH( *(uint8**)&REGNAME$1 );
	}
	label$1193:;
	label$1192:;
	{
		if( FUNC$1 != 1ll ) goto label$1195;
		label$1196:;
		{
			HFPUCHANGERC( &REGNAME$1, (uint8*)"01" );
			OUTP( (uint8*)"frndint" );
		}
		goto label$1194;
		label$1195:;
		if( FUNC$1 != 2ll ) goto label$1197;
		label$1198:;
		{
			HFPUCHANGERC( &REGNAME$1, (uint8*)"11" );
			OUTP( (uint8*)"frndint" );
		}
		goto label$1194;
		label$1197:;
		if( FUNC$1 != 3ll ) goto label$1199;
		label$1200:;
		{
			HFPUCHANGERC( &REGNAME$1, (uint8*)"11" );
			OUTP( (uint8*)"fld st(0)" );
			OUTP( (uint8*)"frndint" );
			OUTP( (uint8*)"fsubp" );
		}
		label$1199:;
		label$1194:;
	}
	OUTP( (uint8*)"fldcw [esp]" );
	OUTP( (uint8*)"add esp, 4" );
	if( ISREGFREE$1 != 0ll ) goto label$1202;
	{
		HPOP( *(uint8**)&REGNAME$1 );
	}
	label$1202:;
	label$1201:;
	fb_StrDelete( &REGNAME$1 );
	label$1189:;
}

static void _EMITFLOOR( struct $6IRVREG* DVREG$1 )
{
	label$1203:;
	HEMITFLOATFUNC( 1ll );
	label$1204:;
}

static void _EMITFIX( struct $6IRVREG* DVREG$1 )
{
	label$1205:;
	HEMITFLOATFUNC( 2ll );
	label$1206:;
}

static void _EMITFRAC( struct $6IRVREG* DVREG$1 )
{
	label$1207:;
	HEMITFLOATFUNC( 3ll );
	label$1208:;
}

static void _EMITCONVFD2FS( struct $6IRVREG* DVREG$1 )
{
	label$1209:;
	OUTP( (uint8*)"sub esp, 4" );
	OUTP( (uint8*)"fstp dword ptr [esp]" );
	OUTP( (uint8*)"fld dword ptr [esp]" );
	OUTP( (uint8*)"add esp, 4" );
	label$1210:;
}

static void _EMITXCHGTOS( struct $6IRVREG* SVREG$1 )
{
	label$1211:;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"fxch ", 6ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$1212:;
}

static void _EMITSTACKALIGN( struct $6IRVREG* VREG$1, int64 UNUSED$1 )
{
	label$1213:;
	if( *(int64*)((uint8*)VREG$1 + 48ll) <= 0ll ) goto label$1216;
	{
		FBSTRING TMP$1279$2;
		FBSTRING TMP$1280$2;
		__builtin_memset( &TMP$1280$2, 0, 24ll );
		FBSTRING* vr$4 = fb_LongintToStr( *(int64*)((uint8*)VREG$1 + 48ll) );
		__builtin_memset( &TMP$1279$2, 0, 24ll );
		FBSTRING* vr$7 = fb_StrConcat( &TMP$1279$2, (void*)"sub esp, ", 10ll, (void*)vr$4, -1ll );
		FBSTRING* vr$9 = fb_StrAssign( (void*)&TMP$1280$2, -1ll, (void*)vr$7, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1280$2 );
		fb_StrDelete( &TMP$1280$2 );
	}
	goto label$1215;
	label$1216:;
	{
		FBSTRING TMP$1281$2;
		FBSTRING TMP$1282$2;
		__builtin_memset( &TMP$1282$2, 0, 24ll );
		FBSTRING* vr$14 = fb_LongintToStr( -(*(int64*)((uint8*)VREG$1 + 48ll)) );
		__builtin_memset( &TMP$1281$2, 0, 24ll );
		FBSTRING* vr$17 = fb_StrConcat( &TMP$1281$2, (void*)"add esp, ", 10ll, (void*)vr$14, -1ll );
		FBSTRING* vr$19 = fb_StrAssign( (void*)&TMP$1282$2, -1ll, (void*)vr$17, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1282$2 );
		fb_StrDelete( &TMP$1282$2 );
	}
	label$1215:;
	label$1214:;
}

static void _EMITPUSHL( struct $6IRVREG* SVREG$1, int64 UNUSED$1 )
{
	label$1217:;
	static FBSTRING SRC1$1;
	static FBSTRING SRC2$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND64( SVREG$1, &SRC1$1, &SRC2$1 );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"push ", 6ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC2$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$2 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"push ", 6ll, 0 );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC1$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$1218:;
}

static void _EMITPUSHI( struct $6IRVREG* SVREG$1, int64 UNUSED$1 )
{
	int64 TMP$1283$1;
	label$1219:;
	FBSTRING SRC$1;
	__builtin_memset( &SRC$1, 0, 24ll );
	FBSTRING TMP32$1;
	__builtin_memset( &TMP32$1, 0, 24ll );
	int64 SDSIZE$1;
	int64 TMPREG$1;
	int64 ISTMPFREE$1;
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$1221;
	TMP$1283$1 = 22ll;
	goto label$1682;
	label$1221:;
	TMP$1283$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$1682:;
	SDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1283$1 * 56ll)) + 8ll);
	{
		$15IRVREGTYPE_ENUM TMP$1284$2;
		TMP$1284$2 = *($15IRVREGTYPE_ENUM*)SVREG$1;
		if( TMP$1284$2 != 4ll ) goto label$1223;
		label$1224:;
		{
			FBSTRING TMP$1285$3;
			FBSTRING TMP$1286$3;
			if( SDSIZE$1 >= 4ll ) goto label$1226;
			{
				uint8* vr$13 = HGETREGNAME( 7ll, *(int64*)((uint8*)SVREG$1 + 24ll) );
				fb_StrAssign( (void*)&SRC$1, -1ll, (void*)vr$13, 0ll, 0 );
			}
			label$1226:;
			label$1225:;
			__builtin_memset( &TMP$1286$3, 0, 24ll );
			__builtin_memset( &TMP$1285$3, 0, 24ll );
			FBSTRING* vr$19 = fb_StrConcat( &TMP$1285$3, (void*)"push ", 6ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$21 = fb_StrAssign( (void*)&TMP$1286$3, -1ll, (void*)vr$19, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1286$3 );
			fb_StrDelete( &TMP$1286$3 );
		}
		goto label$1222;
		label$1223:;
		if( TMP$1284$2 != 0ll ) goto label$1227;
		label$1228:;
		{
			FBSTRING TMP$1287$3;
			FBSTRING TMP$1288$3;
			__builtin_memset( &TMP$1288$3, 0, 24ll );
			__builtin_memset( &TMP$1287$3, 0, 24ll );
			FBSTRING* vr$28 = fb_StrConcat( &TMP$1287$3, (void*)"push ", 6ll, (void*)&SRC$1, -1ll );
			FBSTRING* vr$30 = fb_StrAssign( (void*)&TMP$1288$3, -1ll, (void*)vr$28, -1ll, 0 );
			OUTP( *(uint8**)&TMP$1288$3 );
			fb_StrDelete( &TMP$1288$3 );
		}
		goto label$1222;
		label$1227:;
		{
			if( SDSIZE$1 >= 4ll ) goto label$1231;
			{
				FBSTRING TMP$1289$4;
				FBSTRING TMP$1290$4;
				FBSTRING TMP$1291$4;
				FBSTRING TMP$1292$4;
				FBSTRING TMP$1293$4;
				FBSTRING TMP$1294$4;
				int64 vr$33 = HFINDREGNOTINVREG( SVREG$1, 0ll );
				TMPREG$1 = vr$33;
				int64 vr$34 = HISREGFREE( 0ll, TMPREG$1 );
				ISTMPFREE$1 = vr$34;
				uint8* vr$35 = HGETREGNAME( 7ll, TMPREG$1 );
				fb_StrAssign( (void*)&TMP32$1, -1ll, (void*)vr$35, 0ll, 0 );
				if( ISTMPFREE$1 != 0ll ) goto label$1233;
				{
					HPUSH( *(uint8**)&TMP32$1 );
				}
				label$1233:;
				label$1232:;
				__builtin_memset( &TMP$1292$4, 0, 24ll );
				__builtin_memset( &TMP$1289$4, 0, 24ll );
				FBSTRING* vr$43 = fb_StrConcat( &TMP$1289$4, (void*)"movzx ", 7ll, (void*)&TMP32$1, -1ll );
				__builtin_memset( &TMP$1290$4, 0, 24ll );
				FBSTRING* vr$46 = fb_StrConcat( &TMP$1290$4, (void*)vr$43, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$1291$4, 0, 24ll );
				FBSTRING* vr$49 = fb_StrConcat( &TMP$1291$4, (void*)vr$46, -1ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$51 = fb_StrAssign( (void*)&TMP$1292$4, -1ll, (void*)vr$49, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1292$4 );
				fb_StrDelete( &TMP$1292$4 );
				__builtin_memset( &TMP$1294$4, 0, 24ll );
				__builtin_memset( &TMP$1293$4, 0, 24ll );
				FBSTRING* vr$57 = fb_StrConcat( &TMP$1293$4, (void*)"push ", 6ll, (void*)&TMP32$1, -1ll );
				FBSTRING* vr$59 = fb_StrAssign( (void*)&TMP$1294$4, -1ll, (void*)vr$57, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1294$4 );
				fb_StrDelete( &TMP$1294$4 );
				if( ISTMPFREE$1 != 0ll ) goto label$1235;
				{
					HPOP( *(uint8**)&TMP32$1 );
				}
				label$1235:;
				label$1234:;
			}
			goto label$1230;
			label$1231:;
			{
				FBSTRING TMP$1295$4;
				FBSTRING TMP$1296$4;
				__builtin_memset( &TMP$1296$4, 0, 24ll );
				__builtin_memset( &TMP$1295$4, 0, 24ll );
				FBSTRING* vr$66 = fb_StrConcat( &TMP$1295$4, (void*)"push ", 6ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$68 = fb_StrAssign( (void*)&TMP$1296$4, -1ll, (void*)vr$66, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1296$4 );
				fb_StrDelete( &TMP$1296$4 );
			}
			label$1230:;
		}
		label$1229:;
		label$1222:;
	}
	fb_StrDelete( &TMP32$1 );
	fb_StrDelete( &SRC$1 );
	label$1220:;
}

static void _EMITPUSHF( struct $6IRVREG* SVREG$1, int64 UNUSED$1 )
{
	int64 TMP$1297$1;
	label$1236:;
	static FBSTRING SRC$1;
	static int64 SDSIZE$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)SVREG$1 + 8ll) & 480ll) == 0ll ) goto label$1238;
	TMP$1297$1 = 22ll;
	goto label$1683;
	label$1238:;
	TMP$1297$1 = *(int64*)((uint8*)SVREG$1 + 8ll) & 31ll;
	label$1683:;
	SDSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1297$1 * 56ll)) + 8ll);
	if( *(int64*)SVREG$1 == 4ll ) goto label$1240;
	{
		if( *(int64*)((uint8*)SVREG$1 + 8ll) != 14ll ) goto label$1242;
		{
			FBSTRING* vr$10 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"push ", 6ll, 0 );
			FBSTRING* vr$11 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		goto label$1241;
		label$1242:;
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
		label$1241:;
	}
	goto label$1239;
	label$1240:;
	{
		FBSTRING TMP$1299$2;
		FBSTRING TMP$1300$2;
		FBSTRING* vr$16 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"sub esp,", 9ll, 0 );
		FBSTRING* vr$17 = fb_LongintToStr( SDSIZE$1 );
		FBSTRING* vr$18 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)vr$17, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
		__builtin_memset( &TMP$1299$2, 0, 24ll );
		FBSTRING* vr$24 = fb_StrConcat( &TMP$1299$2, (void*)"fstp ", 6ll, (void*)(((uint8*)DTYPETB$ + (*(int64*)((uint8*)SVREG$1 + 8ll) * 24ll)) + 8ll), 12ll );
		__builtin_memset( &TMP$1300$2, 0, 24ll );
		FBSTRING* vr$27 = fb_StrConcat( &TMP$1300$2, (void*)vr$24, -1ll, (void*)" [esp]", 7ll );
		FBSTRING* vr$28 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$27, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	label$1239:;
	label$1237:;
}

static void _EMITPUSHUDT( struct $6IRVREG* SVREG$1, int64 SDSIZE$1 )
{
	label$1243:;
	FBSTRING SRC$1;
	__builtin_memset( &SRC$1, 0, 24ll );
	FBSTRING TMP32$1;
	__builtin_memset( &TMP32$1, 0, 24ll );
	FBSTRING TMP16$1;
	__builtin_memset( &TMP16$1, 0, 24ll );
	int64 OFS$1;
	int64 TMPREG$1;
	int64 ISTMPFREE$1;
	int64 REMAINDER$1;
	REMAINDER$1 = SDSIZE$1 & 3ll;
	if( REMAINDER$1 <= 0ll ) goto label$1246;
	{
		FBSTRING TMP$1321$2;
		FBSTRING TMP$1322$2;
		int64 vr$5 = HFINDREGNOTINVREG( SVREG$1, 0ll );
		TMPREG$1 = vr$5;
		int64 vr$6 = HISREGFREE( 0ll, TMPREG$1 );
		ISTMPFREE$1 = vr$6;
		uint8* vr$7 = HGETREGNAME( 7ll, TMPREG$1 );
		fb_StrAssign( (void*)&TMP32$1, -1ll, (void*)vr$7, 0ll, 0 );
		if( ISTMPFREE$1 != 0ll ) goto label$1248;
		{
			HPUSH( *(uint8**)&TMP32$1 );
		}
		label$1248:;
		label$1247:;
		{
			if( REMAINDER$1 != 3ll ) goto label$1250;
			label$1251:;
			{
				FBSTRING TMP$1301$4;
				FBSTRING TMP$1302$4;
				FBSTRING TMP$1303$4;
				FBSTRING TMP$1304$4;
				FBSTRING TMP$1306$4;
				FBSTRING TMP$1307$4;
				FBSTRING TMP$1308$4;
				FBSTRING TMP$1309$4;
				FBSTRING TMP$1310$4;
				FBSTRING TMP$1311$4;
				FBSTRING TMP$1312$4;
				HPREPOPERAND( SVREG$1, &SRC$1, 1ll, SDSIZE$1 + -1ll, 0ll, -1ll );
				__builtin_memset( &TMP$1304$4, 0, 24ll );
				__builtin_memset( &TMP$1301$4, 0, 24ll );
				FBSTRING* vr$18 = fb_StrConcat( &TMP$1301$4, (void*)"movzx ", 7ll, (void*)&TMP32$1, -1ll );
				__builtin_memset( &TMP$1302$4, 0, 24ll );
				FBSTRING* vr$21 = fb_StrConcat( &TMP$1302$4, (void*)vr$18, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$1303$4, 0, 24ll );
				FBSTRING* vr$24 = fb_StrConcat( &TMP$1303$4, (void*)vr$21, -1ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$26 = fb_StrAssign( (void*)&TMP$1304$4, -1ll, (void*)vr$24, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1304$4 );
				fb_StrDelete( &TMP$1304$4 );
				__builtin_memset( &TMP$1308$4, 0, 24ll );
				__builtin_memset( &TMP$1306$4, 0, 24ll );
				FBSTRING* vr$32 = fb_StrConcat( &TMP$1306$4, (void*)"shl ", 5ll, (void*)&TMP32$1, -1ll );
				__builtin_memset( &TMP$1307$4, 0, 24ll );
				FBSTRING* vr$35 = fb_StrConcat( &TMP$1307$4, (void*)vr$32, -1ll, (void*)", 16", 5ll );
				FBSTRING* vr$37 = fb_StrAssign( (void*)&TMP$1308$4, -1ll, (void*)vr$35, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1308$4 );
				fb_StrDelete( &TMP$1308$4 );
				uint8* vr$39 = HGETREGNAME( 4ll, TMPREG$1 );
				fb_StrAssign( (void*)&TMP16$1, -1ll, (void*)vr$39, 0ll, 0 );
				HPREPOPERAND( SVREG$1, &SRC$1, 4ll, SDSIZE$1 + -3ll, 0ll, -1ll );
				__builtin_memset( &TMP$1312$4, 0, 24ll );
				__builtin_memset( &TMP$1309$4, 0, 24ll );
				FBSTRING* vr$48 = fb_StrConcat( &TMP$1309$4, (void*)"mov ", 5ll, (void*)&TMP16$1, -1ll );
				__builtin_memset( &TMP$1310$4, 0, 24ll );
				FBSTRING* vr$51 = fb_StrConcat( &TMP$1310$4, (void*)vr$48, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$1311$4, 0, 24ll );
				FBSTRING* vr$54 = fb_StrConcat( &TMP$1311$4, (void*)vr$51, -1ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$56 = fb_StrAssign( (void*)&TMP$1312$4, -1ll, (void*)vr$54, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1312$4 );
				fb_StrDelete( &TMP$1312$4 );
			}
			goto label$1249;
			label$1250:;
			if( REMAINDER$1 != 2ll ) goto label$1252;
			label$1253:;
			{
				FBSTRING TMP$1313$4;
				FBSTRING TMP$1314$4;
				FBSTRING TMP$1315$4;
				FBSTRING TMP$1316$4;
				OFS$1 = SDSIZE$1 + -2ll;
				HPREPOPERAND( SVREG$1, &SRC$1, 4ll, OFS$1, 0ll, -1ll );
				__builtin_memset( &TMP$1316$4, 0, 24ll );
				__builtin_memset( &TMP$1313$4, 0, 24ll );
				FBSTRING* vr$66 = fb_StrConcat( &TMP$1313$4, (void*)"movzx ", 7ll, (void*)&TMP32$1, -1ll );
				__builtin_memset( &TMP$1314$4, 0, 24ll );
				FBSTRING* vr$69 = fb_StrConcat( &TMP$1314$4, (void*)vr$66, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$1315$4, 0, 24ll );
				FBSTRING* vr$72 = fb_StrConcat( &TMP$1315$4, (void*)vr$69, -1ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$74 = fb_StrAssign( (void*)&TMP$1316$4, -1ll, (void*)vr$72, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1316$4 );
				fb_StrDelete( &TMP$1316$4 );
			}
			goto label$1249;
			label$1252:;
			if( REMAINDER$1 != 1ll ) goto label$1254;
			label$1255:;
			{
				FBSTRING TMP$1317$4;
				FBSTRING TMP$1318$4;
				FBSTRING TMP$1319$4;
				FBSTRING TMP$1320$4;
				OFS$1 = SDSIZE$1 + -1ll;
				HPREPOPERAND( SVREG$1, &SRC$1, 1ll, OFS$1, 0ll, -1ll );
				__builtin_memset( &TMP$1320$4, 0, 24ll );
				__builtin_memset( &TMP$1317$4, 0, 24ll );
				FBSTRING* vr$84 = fb_StrConcat( &TMP$1317$4, (void*)"movzx ", 7ll, (void*)&TMP32$1, -1ll );
				__builtin_memset( &TMP$1318$4, 0, 24ll );
				FBSTRING* vr$87 = fb_StrConcat( &TMP$1318$4, (void*)vr$84, -1ll, (void*)", ", 3ll );
				__builtin_memset( &TMP$1319$4, 0, 24ll );
				FBSTRING* vr$90 = fb_StrConcat( &TMP$1319$4, (void*)vr$87, -1ll, (void*)&SRC$1, -1ll );
				FBSTRING* vr$92 = fb_StrAssign( (void*)&TMP$1320$4, -1ll, (void*)vr$90, -1ll, 0 );
				OUTP( *(uint8**)&TMP$1320$4 );
				fb_StrDelete( &TMP$1320$4 );
			}
			label$1254:;
			label$1249:;
		}
		__builtin_memset( &TMP$1322$2, 0, 24ll );
		__builtin_memset( &TMP$1321$2, 0, 24ll );
		FBSTRING* vr$98 = fb_StrConcat( &TMP$1321$2, (void*)"push ", 6ll, (void*)&TMP32$1, -1ll );
		FBSTRING* vr$100 = fb_StrAssign( (void*)&TMP$1322$2, -1ll, (void*)vr$98, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1322$2 );
		fb_StrDelete( &TMP$1322$2 );
		if( ISTMPFREE$1 != 0ll ) goto label$1257;
		{
			HPOP( *(uint8**)&TMP32$1 );
		}
		label$1257:;
		label$1256:;
		SDSIZE$1 = SDSIZE$1 - REMAINDER$1;
	}
	label$1246:;
	label$1245:;
	OFS$1 = SDSIZE$1 + -4ll;
	label$1258:;
	if( OFS$1 < 0ll ) goto label$1259;
	{
		FBSTRING TMP$1323$2;
		FBSTRING TMP$1324$2;
		HPREPOPERAND( SVREG$1, &SRC$1, 7ll, OFS$1, 0ll, -1ll );
		__builtin_memset( &TMP$1324$2, 0, 24ll );
		__builtin_memset( &TMP$1323$2, 0, 24ll );
		FBSTRING* vr$111 = fb_StrConcat( &TMP$1323$2, (void*)"push ", 6ll, (void*)&SRC$1, -1ll );
		FBSTRING* vr$113 = fb_StrAssign( (void*)&TMP$1324$2, -1ll, (void*)vr$111, -1ll, 0 );
		OUTP( *(uint8**)&TMP$1324$2 );
		fb_StrDelete( &TMP$1324$2 );
		OFS$1 = OFS$1 + -4ll;
	}
	goto label$1258;
	label$1259:;
	fb_StrDelete( &TMP16$1 );
	fb_StrDelete( &TMP32$1 );
	fb_StrDelete( &SRC$1 );
	label$1244:;
}

static void _EMITPOPL( struct $6IRVREG* DVREG$1, int64 UNUSED$1 )
{
	label$1260:;
	static FBSTRING DST1$1;
	static FBSTRING DST2$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND64( DVREG$1, &DST1$1, &DST2$1 );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"pop ", 5ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST1$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	FBSTRING* vr$2 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"pop ", 5ll, 0 );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST2$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$1261:;
}

static void _EMITPOPI( struct $6IRVREG* DVREG$1, int64 UNUSED$1 )
{
	int64 TMP$1325$1;
	label$1262:;
	static FBSTRING DST$1;
	static FBSTRING OSTR$1;
	static int64 DSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$1264;
	TMP$1325$1 = 22ll;
	goto label$1684;
	label$1264:;
	TMP$1325$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$1684:;
	DSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1325$1 * 56ll)) + 8ll);
	if( *(int64*)DVREG$1 != 0ll ) goto label$1266;
	{
		if( *(int64*)((uint8*)DVREG$1 + 48ll) != 4ll ) goto label$1268;
		{
			int64 vr$10 = HISREGFREE( 0ll, 5ll );
			if( vr$10 == 0ll ) goto label$1270;
			{
				HPOP( (uint8*)"eax" );
			}
			goto label$1269;
			label$1270:;
			{
				OUTP( (uint8*)"add esp, 4" );
			}
			label$1269:;
		}
		goto label$1267;
		label$1268:;
		{
			FBSTRING TMP$1326$3;
			FBSTRING* vr$13 = fb_LongintToStr( *(int64*)((uint8*)DVREG$1 + 48ll) );
			__builtin_memset( &TMP$1326$3, 0, 24ll );
			FBSTRING* vr$16 = fb_StrConcat( &TMP$1326$3, (void*)"add esp, ", 10ll, (void*)vr$13, -1ll );
			FBSTRING* vr$17 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$16, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		label$1267:;
	}
	goto label$1265;
	label$1266:;
	if( DSIZE$1 != 4ll ) goto label$1271;
	{
		FBSTRING* vr$19 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"pop ", 5ll, 0 );
		FBSTRING* vr$20 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	goto label$1265;
	label$1271:;
	{
		if( *(int64*)DVREG$1 != 4ll ) goto label$1273;
		{
			uint8* vr$24 = HGETREGNAME( 7ll, *(int64*)((uint8*)DVREG$1 + 24ll) );
			fb_StrAssign( (void*)&DST$1, -1ll, (void*)vr$24, 0ll, 0 );
			FBSTRING* vr$25 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"pop ", 5ll, 0 );
			FBSTRING* vr$26 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		goto label$1272;
		label$1273:;
		{
			static int64 REG$3;
			static int64 ISFREE$3;
			static FBSTRING AUX8$3;
			static FBSTRING AUX16$3;
			static FBSTRING AUX32$3;
			int64 vr$27 = HFINDREGNOTINVREG( DVREG$1, 0ll );
			REG$3 = vr$27;
			uint8* vr$28 = HGETREGNAME( 1ll, REG$3 );
			fb_StrAssign( (void*)&AUX8$3, -1ll, (void*)vr$28, 0ll, 0 );
			uint8* vr$29 = HGETREGNAME( 4ll, REG$3 );
			fb_StrAssign( (void*)&AUX16$3, -1ll, (void*)vr$29, 0ll, 0 );
			uint8* vr$30 = HGETREGNAME( 7ll, REG$3 );
			fb_StrAssign( (void*)&AUX32$3, -1ll, (void*)vr$30, 0ll, 0 );
			int64 vr$31 = HISREGFREE( 0ll, REG$3 );
			ISFREE$3 = vr$31;
			if( ISFREE$3 == 0ll ) goto label$1275;
			{
				HMOV( *(uint8**)&AUX32$3, (uint8*)"dword ptr [esp]" );
			}
			goto label$1274;
			label$1275:;
			{
				HXCHG( *(uint8**)&AUX32$3, (uint8*)"dword ptr [esp]" );
			}
			label$1274:;
			if( DSIZE$1 != 1ll ) goto label$1277;
			{
				HMOV( *(uint8**)&DST$1, *(uint8**)&AUX8$3 );
			}
			goto label$1276;
			label$1277:;
			{
				HMOV( *(uint8**)&DST$1, *(uint8**)&AUX16$3 );
			}
			label$1276:;
			if( ISFREE$3 == 0ll ) goto label$1279;
			{
				OUTP( (uint8*)"add esp, 4" );
			}
			goto label$1278;
			label$1279:;
			{
				HPOP( *(uint8**)&AUX32$3 );
			}
			label$1278:;
		}
		label$1272:;
	}
	label$1265:;
	label$1263:;
}

static void _EMITPOPF( struct $6IRVREG* DVREG$1, int64 UNUSED$1 )
{
	int64 TMP$1327$1;
	label$1280:;
	static FBSTRING DST$1;
	static FBSTRING OSTR$1;
	static int64 DSIZE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	if( (*(int64*)((uint8*)DVREG$1 + 8ll) & 480ll) == 0ll ) goto label$1282;
	TMP$1327$1 = 22ll;
	goto label$1685;
	label$1282:;
	TMP$1327$1 = *(int64*)((uint8*)DVREG$1 + 8ll) & 31ll;
	label$1685:;
	DSIZE$1 = *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1327$1 * 56ll)) + 8ll);
	if( *(int64*)DVREG$1 == 4ll ) goto label$1284;
	{
		if( *(int64*)((uint8*)DVREG$1 + 8ll) != 14ll ) goto label$1286;
		{
			FBSTRING* vr$10 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"pop ", 5ll, 0 );
			FBSTRING* vr$11 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
			OUTP( *(uint8**)&OSTR$1 );
		}
		goto label$1285;
		label$1286:;
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
		label$1285:;
	}
	goto label$1283;
	label$1284:;
	{
		FBSTRING TMP$1328$2;
		FBSTRING TMP$1329$2;
		__builtin_memset( &TMP$1328$2, 0, 24ll );
		FBSTRING* vr$21 = fb_StrConcat( &TMP$1328$2, (void*)"fld ", 5ll, (void*)(((uint8*)DTYPETB$ + (*(int64*)((uint8*)DVREG$1 + 8ll) * 24ll)) + 8ll), 12ll );
		__builtin_memset( &TMP$1329$2, 0, 24ll );
		FBSTRING* vr$24 = fb_StrConcat( &TMP$1329$2, (void*)vr$21, -1ll, (void*)" [esp]", 7ll );
		FBSTRING* vr$25 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$24, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
		FBSTRING* vr$26 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"add esp,", 9ll, 0 );
		FBSTRING* vr$27 = fb_LongintToStr( DSIZE$1 );
		FBSTRING* vr$28 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)vr$27, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
	}
	label$1283:;
	label$1281:;
}

static void _EMITPOPST0( void )
{
	label$1287:;
	OUTP( (uint8*)"fstp st(0)" );
	label$1288:;
}

static void _EMITADDROF( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$1289:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, 0ll );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"lea ", 5ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
	FBSTRING* vr$2 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$1290:;
}

static void _EMITDEREF( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	label$1291:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 8ll, 0ll, 0ll, -1ll );
	FBSTRING* vr$0 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mov ", 5ll, 0 );
	FBSTRING* vr$1 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
	FBSTRING* vr$2 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", ", 3ll, 0 );
	FBSTRING* vr$3 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&SRC$1, -1ll, 0 );
	OUTP( *(uint8**)&OSTR$1 );
	label$1292:;
}

static void HMEMMOVEREP( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1, int64 BYTES$1 )
{
	label$1293:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING OSTR$1;
	static int64 ECXFREE$1;
	static int64 EDIFREE$1;
	static int64 ESIFREE$1;
	static int64 EDIINSRC$1;
	static int64 ECXINSRC$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( SVREG$1, &SRC$1, 2147483648ll, 0ll, 0ll, -1ll );
	int64 vr$0 = HISREGFREE( 0ll, 3ll );
	ECXFREE$1 = vr$0;
	int64 vr$1 = HISREGFREE( 0ll, 1ll );
	EDIFREE$1 = vr$1;
	int64 vr$2 = HISREGFREE( 0ll, 2ll );
	ESIFREE$1 = vr$2;
	int64 vr$3 = HISREGINVREG( SVREG$1, 1ll );
	EDIINSRC$1 = vr$3;
	int64 vr$4 = HISREGINVREG( SVREG$1, 3ll );
	ECXINSRC$1 = vr$4;
	if( ECXFREE$1 != 0ll ) goto label$1296;
	{
		HPUSH( (uint8*)"ecx" );
	}
	label$1296:;
	label$1295:;
	if( EDIFREE$1 != 0ll ) goto label$1298;
	{
		HPUSH( (uint8*)"edi" );
	}
	label$1298:;
	label$1297:;
	if( ESIFREE$1 != 0ll ) goto label$1300;
	{
		HPUSH( (uint8*)"esi" );
	}
	label$1300:;
	label$1299:;
	if( EDIINSRC$1 != 0ll ) goto label$1302;
	{
		if( *(int64*)DVREG$1 == 4ll ) goto label$1304;
		{
			HMOV( (uint8*)"edi", *(uint8**)&DST$1 );
		}
		goto label$1303;
		label$1304:;
		{
			if( *(int64*)((uint8*)DVREG$1 + 24ll) == 1ll ) goto label$1306;
			{
				HMOV( (uint8*)"edi", *(uint8**)&DST$1 );
			}
			label$1306:;
			label$1305:;
		}
		label$1303:;
	}
	goto label$1301;
	label$1302:;
	{
		if( ECXINSRC$1 == 0ll ) goto label$1308;
		{
			HPUSH( (uint8*)"ecx" );
		}
		label$1308:;
		label$1307:;
		HMOV( (uint8*)"ecx", *(uint8**)&DST$1 );
		if( ECXINSRC$1 == 0ll ) goto label$1310;
		{
			OUTP( (uint8*)"xchg ecx, [esp]" );
		}
		label$1310:;
		label$1309:;
	}
	label$1301:;
	if( *(int64*)SVREG$1 == 4ll ) goto label$1312;
	{
		HMOV( (uint8*)"esi", *(uint8**)&SRC$1 );
	}
	goto label$1311;
	label$1312:;
	{
		if( *(int64*)((uint8*)SVREG$1 + 24ll) == 2ll ) goto label$1314;
		{
			HMOV( (uint8*)"esi", *(uint8**)&SRC$1 );
		}
		label$1314:;
		label$1313:;
	}
	label$1311:;
	if( EDIINSRC$1 == 0ll ) goto label$1316;
	{
		if( ECXINSRC$1 != 0ll ) goto label$1318;
		{
			HMOV( (uint8*)"edi", (uint8*)"ecx" );
		}
		goto label$1317;
		label$1318:;
		{
			HPOP( (uint8*)"edi" );
		}
		label$1317:;
	}
	label$1316:;
	label$1315:;
	if( BYTES$1 <= 4ll ) goto label$1320;
	{
		FBSTRING* vr$22 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mov ecx, ", 10ll, 0 );
		FBSTRING* vr$24 = fb_ULongintToStr( (uint64)BYTES$1 >> 2ull );
		FBSTRING* vr$25 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)vr$24, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
		OUTP( (uint8*)"rep movsd" );
	}
	goto label$1319;
	label$1320:;
	if( BYTES$1 != 4ll ) goto label$1321;
	{
		OUTP( (uint8*)"mov ecx, [esi]" );
		OUTP( (uint8*)"mov [edi], ecx" );
		if( (BYTES$1 & 3ll) <= 0ll ) goto label$1323;
		{
			OUTP( (uint8*)"add esi, 4" );
			OUTP( (uint8*)"add edi, 4" );
		}
		label$1323:;
		label$1322:;
	}
	label$1321:;
	label$1319:;
	BYTES$1 = BYTES$1 & 3ll;
	if( BYTES$1 <= 0ll ) goto label$1325;
	{
		if( BYTES$1 < 2ll ) goto label$1327;
		{
			OUTP( (uint8*)"mov cx, [esi]" );
			OUTP( (uint8*)"mov [edi], cx" );
			if( BYTES$1 != 3ll ) goto label$1329;
			{
				OUTP( (uint8*)"add esi, 2" );
				OUTP( (uint8*)"add edi, 2" );
			}
			label$1329:;
			label$1328:;
		}
		label$1327:;
		label$1326:;
		if( (BYTES$1 & 1ll) == 0ll ) goto label$1331;
		{
			OUTP( (uint8*)"mov cl, [esi]" );
			OUTP( (uint8*)"mov [edi], cl" );
		}
		label$1331:;
		label$1330:;
	}
	label$1325:;
	label$1324:;
	if( ESIFREE$1 != 0ll ) goto label$1333;
	{
		HPOP( (uint8*)"esi" );
	}
	label$1333:;
	label$1332:;
	if( EDIFREE$1 != 0ll ) goto label$1335;
	{
		HPOP( (uint8*)"edi" );
	}
	label$1335:;
	label$1334:;
	if( ECXFREE$1 != 0ll ) goto label$1337;
	{
		HPOP( (uint8*)"ecx" );
	}
	label$1337:;
	label$1336:;
	label$1294:;
}

static void HMEMMOVEBLK( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1, int64 BYTES$1 )
{
	label$1338:;
	static FBSTRING DST$1;
	static FBSTRING SRC$1;
	static FBSTRING AUX$1;
	static int64 I$1;
	static int64 OFS$1;
	static int64 REG$1;
	static int64 ISFREE$1;
	int64 vr$0 = HFINDREGNOTINVREG( DVREG$1, 0ll );
	REG$1 = vr$0;
	int64 vr$1 = HISREGINVREG( SVREG$1, REG$1 );
	if( vr$1 == 0ll ) goto label$1341;
	{
		HMEMMOVEREP( DVREG$1, SVREG$1, BYTES$1 );
		goto label$1339;
	}
	label$1341:;
	label$1340:;
	uint8* vr$3 = HGETREGNAME( 7ll, REG$1 );
	fb_StrAssign( (void*)&AUX$1, -1ll, (void*)vr$3, 0ll, 0 );
	int64 vr$4 = HISREGFREE( 0ll, REG$1 );
	ISFREE$1 = vr$4;
	if( ISFREE$1 != 0ll ) goto label$1343;
	{
		HPUSH( *(uint8**)&AUX$1 );
	}
	label$1343:;
	label$1342:;
	OFS$1 = 0ll;
	{
		I$1 = 1ll;
		int64 TMP$1344$2;
		TMP$1344$2 = (int64)((uint64)BYTES$1 >> 2ull);
		goto label$1344;
		label$1347:;
		{
			HPREPOPERAND( SVREG$1, &SRC$1, 7ll, OFS$1, 0ll, -1ll );
			HMOV( *(uint8**)&AUX$1, *(uint8**)&SRC$1 );
			HPREPOPERAND( DVREG$1, &DST$1, 7ll, OFS$1, 0ll, -1ll );
			HMOV( *(uint8**)&DST$1, *(uint8**)&AUX$1 );
			OFS$1 = OFS$1 + 4ll;
		}
		label$1345:;
		I$1 = I$1 + 1ll;
		label$1344:;
		if( I$1 <= TMP$1344$2 ) goto label$1347;
		label$1346:;
	}
	if( (BYTES$1 & 2ll) == 0ll ) goto label$1349;
	{
		uint8* vr$12 = HGETREGNAME( 4ll, REG$1 );
		fb_StrAssign( (void*)&AUX$1, -1ll, (void*)vr$12, 0ll, 0 );
		HPREPOPERAND( SVREG$1, &SRC$1, 4ll, OFS$1, 0ll, -1ll );
		HMOV( *(uint8**)&AUX$1, *(uint8**)&SRC$1 );
		HPREPOPERAND( DVREG$1, &DST$1, 4ll, OFS$1, 0ll, -1ll );
		HMOV( *(uint8**)&DST$1, *(uint8**)&AUX$1 );
		OFS$1 = OFS$1 + 2ll;
	}
	label$1349:;
	label$1348:;
	if( (BYTES$1 & 1ll) == 0ll ) goto label$1351;
	{
		uint8* vr$16 = HGETREGNAME( 1ll, REG$1 );
		fb_StrAssign( (void*)&AUX$1, -1ll, (void*)vr$16, 0ll, 0 );
		HPREPOPERAND( SVREG$1, &SRC$1, 1ll, OFS$1, 0ll, -1ll );
		HMOV( *(uint8**)&AUX$1, *(uint8**)&SRC$1 );
		HPREPOPERAND( DVREG$1, &DST$1, 1ll, OFS$1, 0ll, -1ll );
		HMOV( *(uint8**)&DST$1, *(uint8**)&AUX$1 );
	}
	label$1351:;
	label$1350:;
	if( ISFREE$1 != 0ll ) goto label$1353;
	{
		HPOP( *(uint8**)&AUX$1 );
	}
	label$1353:;
	label$1352:;
	label$1339:;
}

static void _EMITMEMMOVE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1, int64 BYTES$1, int64 EXTRA$1 )
{
	label$1354:;
	if( (int64)(uint32)BYTES$1 <= 16ll ) goto label$1357;
	{
		HMEMMOVEREP( DVREG$1, SVREG$1, BYTES$1 );
	}
	goto label$1356;
	label$1357:;
	{
		HMEMMOVEBLK( DVREG$1, SVREG$1, BYTES$1 );
	}
	label$1356:;
	label$1355:;
}

static void _EMITMEMSWAP( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1, int64 BYTES$1, int64 EXTRA$1 )
{
	label$1358:;
	label$1359:;
}

static void HMEMCLEARREPIMM( struct $6IRVREG* DVREG$1, uint32 BYTES$1 )
{
	label$1360:;
	static FBSTRING DST$1;
	static FBSTRING OSTR$1;
	static int64 EAXFREE$1;
	static int64 ECXFREE$1;
	static int64 EDIFREE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	int64 vr$0 = HISREGFREE( 0ll, 5ll );
	EAXFREE$1 = vr$0;
	int64 vr$1 = HISREGFREE( 0ll, 3ll );
	ECXFREE$1 = vr$1;
	int64 vr$2 = HISREGFREE( 0ll, 1ll );
	EDIFREE$1 = vr$2;
	if( EAXFREE$1 != 0ll ) goto label$1363;
	{
		HPUSH( (uint8*)"eax" );
	}
	label$1363:;
	label$1362:;
	if( ECXFREE$1 != 0ll ) goto label$1365;
	{
		HPUSH( (uint8*)"ecx" );
	}
	label$1365:;
	label$1364:;
	if( EDIFREE$1 != 0ll ) goto label$1367;
	{
		HPUSH( (uint8*)"edi" );
	}
	label$1367:;
	label$1366:;
	if( *(int64*)DVREG$1 == 4ll ) goto label$1369;
	{
		HMOV( (uint8*)"edi", *(uint8**)&DST$1 );
	}
	goto label$1368;
	label$1369:;
	{
		if( *(int64*)((uint8*)DVREG$1 + 24ll) == 1ll ) goto label$1371;
		{
			HMOV( (uint8*)"edi", *(uint8**)&DST$1 );
		}
		label$1371:;
		label$1370:;
	}
	label$1368:;
	OUTP( (uint8*)"xor eax, eax" );
	if( (int64)BYTES$1 <= 4ll ) goto label$1373;
	{
		FBSTRING* vr$12 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"mov ecx, ", 10ll, 0 );
		FBSTRING* vr$15 = fb_LongintToStr( (int64)BYTES$1 / 4ll );
		FBSTRING* vr$16 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)vr$15, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
		OUTP( (uint8*)"rep stosd" );
	}
	goto label$1372;
	label$1373:;
	if( (int64)BYTES$1 != 4ll ) goto label$1374;
	{
		OUTP( (uint8*)"mov dword ptr [edi], eax" );
		if( ((int64)BYTES$1 & 3ll) <= 0ll ) goto label$1376;
		{
			OUTP( (uint8*)"add edi, 4" );
		}
		label$1376:;
		label$1375:;
	}
	label$1374:;
	label$1372:;
	BYTES$1 = (uint32)((int64)BYTES$1 & 3ll);
	if( (int64)BYTES$1 <= 0ll ) goto label$1378;
	{
		if( (int64)BYTES$1 < 2ll ) goto label$1380;
		{
			OUTP( (uint8*)"mov word ptr [edi], ax" );
			if( (int64)BYTES$1 != 3ll ) goto label$1382;
			{
				OUTP( (uint8*)"add edi, 2" );
			}
			label$1382:;
			label$1381:;
		}
		label$1380:;
		label$1379:;
		if( ((int64)BYTES$1 & 1ll) == 0ll ) goto label$1384;
		{
			OUTP( (uint8*)"mov byte ptr [edi], al" );
		}
		label$1384:;
		label$1383:;
	}
	label$1378:;
	label$1377:;
	if( EDIFREE$1 != 0ll ) goto label$1386;
	{
		HPOP( (uint8*)"edi" );
	}
	label$1386:;
	label$1385:;
	if( ECXFREE$1 != 0ll ) goto label$1388;
	{
		HPOP( (uint8*)"ecx" );
	}
	label$1388:;
	label$1387:;
	if( EAXFREE$1 != 0ll ) goto label$1390;
	{
		HPOP( (uint8*)"eax" );
	}
	label$1390:;
	label$1389:;
	label$1361:;
}

static void HMEMCLEARBLKIMM( struct $6IRVREG* DVREG$1, uint32 BYTES$1 )
{
	label$1391:;
	static FBSTRING DST$1;
	static int64 I$1;
	static int64 OFS$1;
	OFS$1 = 0ll;
	{
		I$1 = 1ll;
		int64 TMP$1348$2;
		TMP$1348$2 = (int64)BYTES$1 / 4ll;
		goto label$1393;
		label$1396:;
		{
			HPREPOPERAND( DVREG$1, &DST$1, 7ll, OFS$1, 0ll, -1ll );
			HMOV( *(uint8**)&DST$1, (uint8*)"0" );
			OFS$1 = OFS$1 + 4ll;
		}
		label$1394:;
		I$1 = I$1 + 1ll;
		label$1393:;
		if( I$1 <= TMP$1348$2 ) goto label$1396;
		label$1395:;
	}
	if( ((int64)BYTES$1 & 2ll) == 0ll ) goto label$1398;
	{
		HPREPOPERAND( DVREG$1, &DST$1, 4ll, OFS$1, 0ll, -1ll );
		HMOV( *(uint8**)&DST$1, (uint8*)"0" );
		OFS$1 = OFS$1 + 2ll;
	}
	label$1398:;
	label$1397:;
	if( ((int64)BYTES$1 & 1ll) == 0ll ) goto label$1400;
	{
		HPREPOPERAND( DVREG$1, &DST$1, 1ll, OFS$1, 0ll, -1ll );
		HMOV( *(uint8**)&DST$1, (uint8*)"0" );
	}
	label$1400:;
	label$1399:;
	label$1392:;
}

static void HMEMCLEAR( struct $6IRVREG* DVREG$1, struct $6IRVREG* BYTES_VREG$1 )
{
	label$1401:;
	static FBSTRING DST$1;
	static FBSTRING BYTES$1;
	static FBSTRING OSTR$1;
	static int64 EAXFREE$1;
	static int64 ECXFREE$1;
	static int64 EDIFREE$1;
	HPREPOPERAND( DVREG$1, &DST$1, 2147483648ll, 0ll, 0ll, -1ll );
	HPREPOPERAND( BYTES_VREG$1, &BYTES$1, 2147483648ll, 0ll, 0ll, -1ll );
	int64 vr$0 = HISREGFREE( 0ll, 5ll );
	EAXFREE$1 = vr$0;
	int64 vr$1 = HISREGFREE( 0ll, 3ll );
	ECXFREE$1 = vr$1;
	int64 vr$2 = HISREGFREE( 0ll, 1ll );
	EDIFREE$1 = vr$2;
	if( EAXFREE$1 != 0ll ) goto label$1404;
	{
		HPUSH( (uint8*)"eax" );
	}
	label$1404:;
	label$1403:;
	if( ECXFREE$1 != 0ll ) goto label$1406;
	{
		HPUSH( (uint8*)"ecx" );
	}
	label$1406:;
	label$1405:;
	if( EDIFREE$1 != 0ll ) goto label$1408;
	{
		HPUSH( (uint8*)"edi" );
	}
	label$1408:;
	label$1407:;
	int64 vr$6 = HISREGINVREG( BYTES_VREG$1, 1ll );
	if( vr$6 != 0ll ) goto label$1410;
	{
		if( *(int64*)DVREG$1 == 4ll ) goto label$1412;
		{
			HMOV( (uint8*)"edi", *(uint8**)&DST$1 );
		}
		goto label$1411;
		label$1412:;
		{
			if( *(int64*)((uint8*)DVREG$1 + 24ll) == 1ll ) goto label$1414;
			{
				HMOV( (uint8*)"edi", *(uint8**)&DST$1 );
			}
			label$1414:;
			label$1413:;
		}
		label$1411:;
		if( *(int64*)BYTES_VREG$1 == 4ll ) goto label$1416;
		{
			HMOV( (uint8*)"ecx", *(uint8**)&BYTES$1 );
		}
		goto label$1415;
		label$1416:;
		{
			if( *(int64*)((uint8*)BYTES_VREG$1 + 24ll) == 3ll ) goto label$1418;
			{
				HMOV( (uint8*)"ecx", *(uint8**)&BYTES$1 );
			}
			label$1418:;
			label$1417:;
		}
		label$1415:;
	}
	goto label$1409;
	label$1410:;
	{
		HPUSH( *(uint8**)&BYTES$1 );
		FBSTRING* vr$16 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"lea edi, ", 10ll, 0 );
		FBSTRING* vr$17 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)&DST$1, -1ll, 0 );
		OUTP( *(uint8**)&OSTR$1 );
		HPOP( (uint8*)"ecx" );
	}
	label$1409:;
	OUTP( (uint8*)"xor eax, eax" );
	OUTP( (uint8*)"push ecx" );
	OUTP( (uint8*)"shr ecx, 2" );
	OUTP( (uint8*)"rep stosd" );
	OUTP( (uint8*)"pop ecx" );
	OUTP( (uint8*)"and ecx, 3" );
	OUTP( (uint8*)"rep stosb" );
	if( EDIFREE$1 != 0ll ) goto label$1420;
	{
		HPOP( (uint8*)"edi" );
	}
	label$1420:;
	label$1419:;
	if( ECXFREE$1 != 0ll ) goto label$1422;
	{
		HPOP( (uint8*)"ecx" );
	}
	label$1422:;
	label$1421:;
	if( EAXFREE$1 != 0ll ) goto label$1424;
	{
		HPOP( (uint8*)"eax" );
	}
	label$1424:;
	label$1423:;
	label$1402:;
}

static void _EMITMEMCLEAR( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1, int64 UNUSED$1, int64 EXTRA$1 )
{
	label$1425:;
	if( *(int64*)SVREG$1 != 0ll ) goto label$1428;
	{
		uint32 BYTES$2;
		BYTES$2 = (uint32)*(int64*)((uint8*)SVREG$1 + 48ll);
		if( (int64)BYTES$2 <= 16ll ) goto label$1430;
		{
			HMEMCLEARREPIMM( DVREG$1, BYTES$2 );
		}
		goto label$1429;
		label$1430:;
		{
			HMEMCLEARBLKIMM( DVREG$1, BYTES$2 );
		}
		label$1429:;
	}
	goto label$1427;
	label$1428:;
	{
		HMEMCLEAR( DVREG$1, SVREG$1 );
	}
	label$1427:;
	label$1426:;
}

static void _EMITSTKCLEAR( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1, int64 BYTES$1, int64 BASEOFS$1 )
{
	label$1431:;
	HCLEARLOCALS( BYTES$1, BASEOFS$1 );
	label$1432:;
}

static void _EMITLINEINI( struct $8FBSYMBOL* PROC$1, int64 LNUM$1, int64 POS_$1 )
{
	label$1433:;
	EDBGLINEBEGIN( PROC$1, LNUM$1, POS_$1 );
	label$1434:;
}

static void _EMITLINEEND( struct $8FBSYMBOL* PROC$1, int64 LNUM$1, int64 POS_$1 )
{
	label$1435:;
	EDBGLINEEND( PROC$1, LNUM$1, POS_$1 );
	label$1436:;
}

static void _EMITSCOPEINI( struct $8FBSYMBOL* SYM$1, int64 LNUM$1, int64 POS_$1 )
{
	label$1437:;
	EDBGEMITSCOPEINI( SYM$1 );
	label$1438:;
}

static void _EMITSCOPEEND( struct $8FBSYMBOL* SYM$1, int64 LNUM$1, int64 POS_$1 )
{
	label$1439:;
	EDBGEMITSCOPEEND( SYM$1 );
	label$1440:;
}

static int64 _INIT( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1473:;
	HINITREGTB(  );
	__builtin_memcpy( (struct $12EMITDATATYPE*)((uint8*)DTYPETB$ + 144ll), (struct $12EMITDATATYPE*)((uint8*)DTYPETB$ + (*(int64*)((uint8*)&ENV$ + 424ll) * 24ll)), 24 );
	*(int64*)((uint8*)&EMIT$ + 296ll) = 0ll;
	*(int64*)((uint8*)&EMIT$ + 280ll) = -1ll;
	*(int64*)((uint8*)&EMIT$ + 288ll) = -1ll;
	uint64 IROPTIONS$1;
	IROPTIONS$1 = 66304ull;
	if( *(int64*)((uint8*)&ENV$ + 232ll) != 1ll ) goto label$1476;
	{
		IROPTIONS$1 = IROPTIONS$1 | 1ull;
	}
	label$1476:;
	label$1475:;
	*($6IR_OPT*)((uint8*)&IR$ + 568ll) = ($6IR_OPT)(*(uint64*)((uint8*)&IR$ + 568ll) | IROPTIONS$1);
	EDBGINIT(  );
	fb$result$1 = -1ll;
	label$1474:;
	return fb$result$1;
}

static void _END( void )
{
	label$1477:;
	*(int64*)((uint8*)&EMIT$ + 280ll) = -1ll;
	*(int64*)((uint8*)&EMIT$ + 288ll) = -1ll;
	HENDREGTB(  );
	HENDKEYWORDSTB(  );
	label$1478:;
}

static int64 _GETOPTIONVALUE( $14IR_OPTIONVALUE OPT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1479:;
	{
		if( OPT$1 != 1ll ) goto label$1482;
		label$1483:;
		{
			fb$result$1 = 16ll;
			goto label$1480;
		}
		goto label$1481;
		label$1482:;
		{
			ERRREPORTEX( 21ll, (uint8*)"_GETOPTIONVALUE", 0ll, 1ll, (uint8*)0ull );
		}
		label$1484:;
		label$1481:;
	}
	label$1480:;
	return fb$result$1;
}

static int64 _OPEN( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1485:;
	int64 vr$2 = HFILEEXISTS( (uint8*)((uint8*)&ENV$ + 784ll) );
	if( vr$2 == 0ll ) goto label$1488;
	{
		FBSTRING* vr$5 = fb_StrAllocTempDescZ( (uint8*)((uint8*)&ENV$ + 784ll) );
		fb_FileKill( vr$5 );
	}
	label$1488:;
	label$1487:;
	int32 vr$6 = fb_FileFree(  );
	*(int64*)((uint8*)&ENV$ + 776ll) = (int64)vr$6;
	FBSTRING* vr$10 = fb_StrAllocTempDescZ( (uint8*)((uint8*)&ENV$ + 784ll) );
	int32 vr$11 = fb_FileOpen( vr$10, 0u, 3u, 0u, (int32)*(int64*)((uint8*)&ENV$ + 776ll), 0 );
	if( (int64)vr$11 == 0ll ) goto label$1490;
	{
		fb$result$1 = 0ll;
		goto label$1486;
	}
	label$1490:;
	label$1489:;
	HWRITEHEADER(  );
	fb$result$1 = -1ll;
	label$1486:;
	return fb$result$1;
}

static void _CLOSE( double TOTTIME$1 )
{
	FBSTRING TMP$1382$1;
	FBSTRING TMP$1383$1;
	FBSTRING TMP$1384$1;
	FBSTRING TMP$1385$1;
	label$1491:;
	__builtin_memset( &TMP$1385$1, 0, 24ll );
	FBSTRING* vr$1 = fb_DoubleToStr( TOTTIME$1 );
	__builtin_memset( &TMP$1382$1, 0, 24ll );
	FBSTRING* vr$5 = fb_StrConcat( &TMP$1382$1, (void*)((uint8*)&ENV$ + 488ll), 261ll, (void*)"' compilation took ", 20ll );
	__builtin_memset( &TMP$1383$1, 0, 24ll );
	FBSTRING* vr$8 = fb_StrConcat( &TMP$1383$1, (void*)vr$5, -1ll, (void*)vr$1, -1ll );
	__builtin_memset( &TMP$1384$1, 0, 24ll );
	FBSTRING* vr$11 = fb_StrConcat( &TMP$1384$1, (void*)vr$8, -1ll, (void*)" secs", 6ll );
	FBSTRING* vr$13 = fb_StrAssign( (void*)&TMP$1385$1, -1ll, (void*)vr$11, -1ll, 0 );
	HCOMMENT( *(uint8**)&TMP$1385$1 );
	fb_StrDelete( &TMP$1385$1 );
	EDBGINCLUDE( (uint8*)0ull );
	SYMBFOREACHGLOBAL( 1ll, (tmp$40)&HDECLVARIABLE );
	if( (*(int64*)((uint8*)&ENV$ + 368ll) & (*(int64*)((uint8*)&ENV$ + 448ll) & 4ll)) == 0ll ) goto label$1494;
	{
		SYMBFOREACHGLOBAL( 3ll, (tmp$40)&HEMITEXPORT );
	}
	label$1494:;
	label$1493:;
	HWRITECTOR( *(struct $20FB_GLOBCTORLIST_ITEM**)((uint8*)&SYMB$ + 198008ll), -1ll );
	HWRITECTOR( *(struct $20FB_GLOBCTORLIST_ITEM**)((uint8*)&SYMB$ + 198088ll), 0ll );
	EDBGEMITFOOTER(  );
	int32 vr$19 = fb_FileClose( (int32)*(int64*)((uint8*)&ENV$ + 776ll) );
	if( (int64)vr$19 == 0ll ) goto label$1496;
	{
	}
	label$1496:;
	label$1495:;
	*(int64*)((uint8*)&ENV$ + 776ll) = 0ll;
	label$1492:;
}

static uint8* _PROCGETFRAMEREGNAME( void )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1497:;
	static uint8 SNAME$1[4] = "ebp";
	fb$result$1 = (uint8*)SNAME$1;
	label$1498:;
	return fb$result$1;
}

static int64 _ISREGPRESERVED( int64 DCLASS$1, int64 REG$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1499:;
	if( DCLASS$1 != 1ll ) goto label$1502;
	{
		fb$result$1 = 0ll;
		goto label$1500;
	}
	label$1502:;
	label$1501:;
	{
		uint64 TMP$1386$2;
		TMP$1386$2 = (uint64)REG$1;
		goto label$1504;
		label$1505:;
		{
			fb$result$1 = 0ll;
			goto label$1500;
		}
		goto label$1503;
		label$1506:;
		{
			fb$result$1 = -1ll;
			goto label$1500;
		}
		goto label$1503;
		label$1504:;
		static const void* tmp$1430[6ll] = {
			&&label$1505,
			&&label$1506,
			&&label$1506,
			&&label$1505,
			&&label$1506,
			&&label$1505,
		};
		if( TMP$1386$2 > 5ll ) goto label$1506;
		goto *tmp$1430[TMP$1386$2 - 0ll];
		label$1503:;
	}
	label$1500:;
	return fb$result$1;
}

static void _GETRESULTREG( int64 DTYPE$1, int64 DCLASS$1, int64* R1$1, int64* R2$1 )
{
	label$1507:;
	if( DCLASS$1 != 0ll ) goto label$1510;
	{
		int64 TMP$1387$2;
		int64 TMP$1388$2;
		*R1$1 = 5ll;
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$1511;
		TMP$1387$2 = 22ll;
		goto label$1686;
		label$1511:;
		TMP$1387$2 = DTYPE$1 & 31ll;
		label$1686:;
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$1512;
		TMP$1388$2 = 22ll;
		goto label$1687;
		label$1512:;
		TMP$1388$2 = DTYPE$1 & 31ll;
		label$1687:;
		if( ((int64)-(TMP$1387$2 == 12ll) | (int64)-(TMP$1388$2 == 13ll)) == 0ll ) goto label$1514;
		{
			*R2$1 = 0ll;
		}
		goto label$1513;
		label$1514:;
		{
			*R2$1 = -1ll;
		}
		label$1513:;
	}
	goto label$1509;
	label$1510:;
	{
		*R1$1 = 0ll;
		*R2$1 = -1ll;
	}
	label$1509:;
	label$1508:;
}

static int64 _GETFREEPRESERVEDREG( int64 DCLASS$1, int64 DTYPE$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1515:;
	fb$result$1 = -1ll;
	if( DCLASS$1 != 1ll ) goto label$1518;
	{
		goto label$1516;
	}
	label$1518:;
	label$1517:;
	int64 vr$4 = (*(tmp$79*)((uint8*)*(struct $8REGCLASS**)((uint8*)((uint8*)&EMIT$ + (DCLASS$1 << 3ll)) + 16ll) + 32ll))( *(struct $8REGCLASS**)((uint8*)((uint8*)&EMIT$ + (DCLASS$1 << 3ll)) + 16ll), 4ll );
	if( vr$4 == 0ll ) goto label$1520;
	{
		fb$result$1 = 4ll;
	}
	goto label$1519;
	label$1520:;
	int64 vr$11 = (*(tmp$79*)((uint8*)*(struct $8REGCLASS**)((uint8*)((uint8*)&EMIT$ + (DCLASS$1 << 3ll)) + 16ll) + 32ll))( *(struct $8REGCLASS**)((uint8*)((uint8*)&EMIT$ + (DCLASS$1 << 3ll)) + 16ll), 2ll );
	if( vr$11 == 0ll ) goto label$1521;
	{
		int64 TMP$1389$2;
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$1522;
		TMP$1389$2 = 22ll;
		goto label$1688;
		label$1522:;
		TMP$1389$2 = DTYPE$1 & 31ll;
		label$1688:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1389$2 * 56ll)) + 8ll) == 1ll ) goto label$1524;
		{
			fb$result$1 = 2ll;
		}
		label$1524:;
		label$1523:;
	}
	goto label$1519;
	label$1521:;
	int64 vr$23 = (*(tmp$79*)((uint8*)*(struct $8REGCLASS**)((uint8*)((uint8*)&EMIT$ + (DCLASS$1 << 3ll)) + 16ll) + 32ll))( *(struct $8REGCLASS**)((uint8*)((uint8*)&EMIT$ + (DCLASS$1 << 3ll)) + 16ll), 1ll );
	if( vr$23 == 0ll ) goto label$1525;
	{
		int64 TMP$1390$2;
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$1526;
		TMP$1390$2 = 22ll;
		goto label$1689;
		label$1526:;
		TMP$1390$2 = DTYPE$1 & 31ll;
		label$1689:;
		if( *(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$1390$2 * 56ll)) + 8ll) == 1ll ) goto label$1528;
		{
			fb$result$1 = 1ll;
		}
		label$1528:;
		label$1527:;
	}
	label$1525:;
	label$1519:;
	label$1516:;
	return fb$result$1;
}

static int64 _ISKEYWORD( uint8* TEXT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1529:;
	if( *(int64*)((uint8*)&EMIT$ + 296ll) != 0ll ) goto label$1532;
	{
		HINITKEYWORDSTB(  );
	}
	label$1532:;
	label$1531:;
	void* vr$3 = HASHLOOKUP( (struct $5THASH*)((uint8*)&EMIT$ + 304ll), TEXT$1 );
	fb$result$1 = (int64)-(vr$3 != (void*)0ull);
	label$1530:;
	return fb$result$1;
}

static void _PROCBEGIN( struct $8FBSYMBOL* PROC$1 )
{
	label$1533:;
	*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 16ll) = 0ll;
	*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 24ll) = 0ll;
	*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 8ll) = 8ll;
	EDBGPROCBEGIN( PROC$1 );
	label$1534:;
}

static void _PROCEND( struct $8FBSYMBOL* PROC$1 )
{
	label$1535:;
	EDBGPROCEND( PROC$1 );
	label$1536:;
}

static void _PROCALLOCSTATICVARS( struct $8FBSYMBOL* S$1 )
{
	label$1537:;
	label$1539:;
	if( S$1 == (struct $8FBSYMBOL*)0ull ) goto label$1540;
	{
		{
			$12FB_SYMBCLASS TMP$1391$3;
			TMP$1391$3 = *($12FB_SYMBCLASS*)S$1;
			if( TMP$1391$3 != 15ll ) goto label$1542;
			label$1543:;
			{
				_PROCALLOCSTATICVARS( *(struct $8FBSYMBOL**)((uint8*)S$1 + 104ll) );
			}
			goto label$1541;
			label$1542:;
			if( TMP$1391$3 != 1ll ) goto label$1544;
			label$1545:;
			{
				if( (*(int64*)((uint8*)S$1 + 8ll) & 2ll) == 0ll ) goto label$1547;
				{
					HDECLVARIABLE( S$1 );
				}
				label$1547:;
				label$1546:;
			}
			label$1544:;
			label$1541:;
		}
		S$1 = *(struct $8FBSYMBOL**)((uint8*)S$1 + 296ll);
	}
	goto label$1539;
	label$1540:;
	label$1538:;
}

static void _PROCALLOCLOCAL( struct $8FBSYMBOL* PROC$1, struct $8FBSYMBOL* SYM$1 )
{
	label$1548:;
	int64 OFS$1;
	int64 LGT$1;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 4ll) == 0ll ) goto label$1551;
	{
		goto label$1549;
	}
	label$1551:;
	label$1550:;
	LGT$1 = *(int64*)((uint8*)SYM$1 + 72ll) * *(int64*)((uint8*)SYM$1 + 120ll);
	*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 16ll) = *(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 16ll) + ((LGT$1 + 3ll) & -4ll);
	OFS$1 = -(*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 16ll));
	if( -OFS$1 <= *(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 24ll) ) goto label$1553;
	{
		*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 24ll) = -OFS$1;
	}
	label$1553:;
	label$1552:;
	*(int64*)((uint8*)SYM$1 + 80ll) = OFS$1;
	label$1549:;
}

static void _PROCALLOCARG( struct $8FBSYMBOL* PROC$1, struct $8FBSYMBOL* SYM$1 )
{
	label$1554:;
	int64 LGT$1;
	if( (*(int64*)((uint8*)SYM$1 + 8ll) & 131072ll) == 0ll ) goto label$1557;
	{
		LGT$1 = *(int64*)((uint8*)SYM$1 + 72ll);
	}
	goto label$1556;
	label$1557:;
	{
		LGT$1 = 4ll;
	}
	label$1556:;
	*(int64*)((uint8*)SYM$1 + 80ll) = *(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 8ll);
	*(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 8ll) = *(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 8ll) + ((LGT$1 + 3ll) & -4ll);
	label$1555:;
}

static void _PROCHEADER( struct $8FBSYMBOL* PROC$1, struct $8FBSYMBOL* INITLABEL$1 )
{
	label$1558:;
	EMITRESET(  );
	EDBGPROCEMITBEGIN( PROC$1 );
	label$1559:;
}

static void _PROCFOOTER( struct $8FBSYMBOL* PROC$1, int64 BYTESTOPOP$1, struct $8FBSYMBOL* INITLABEL$1, struct $8FBSYMBOL* EXITLABEL$1 )
{
	label$1560:;
	int64 OLDPOS$1;
	int64 ISPUBLIC$1;
	ISPUBLIC$1 = (int64)-((*(int64*)((uint8*)PROC$1 + 8ll) & 32ll) != 0ll);
	_SETSECTION( 3ll, 0ll );
	EDBGEMITPROCHEADER( PROC$1 );
	HALIGN( 16ll );
	if( ISPUBLIC$1 == 0ll ) goto label$1563;
	{
		uint8* vr$7 = SYMBGETMANGLEDNAME( PROC$1 );
		HPUBLIC( vr$7, (int64)-((*(int64*)((uint8*)PROC$1 + 8ll) & 256ll) != 0ll) );
	}
	label$1563:;
	label$1562:;
	uint8* vr$8 = SYMBGETMANGLEDNAME( PROC$1 );
	HLABEL( vr$8 );
	if( *(int64*)((uint8*)&ENV$ + 216ll) != 2ll ) goto label$1565;
	{
		FBSTRING TMP$1394$2;
		FBSTRING TMP$1395$2;
		FBSTRING TMP$1396$2;
		FBSTRING TMP$1397$2;
		__builtin_memset( &TMP$1397$2, 0, 24ll );
		uint8* vr$11 = SYMBGETMANGLEDNAME( PROC$1 );
		__builtin_memset( &TMP$1394$2, 0, 24ll );
		FBSTRING* vr$14 = fb_StrConcat( &TMP$1394$2, (void*)".type ", 7ll, (void*)vr$11, 0ll );
		__builtin_memset( &TMP$1395$2, 0, 24ll );
		FBSTRING* vr$17 = fb_StrConcat( &TMP$1395$2, (void*)vr$14, -1ll, (void*)", @function", 12ll );
		__builtin_memset( &TMP$1396$2, 0, 24ll );
		FBSTRING* vr$20 = fb_StrConcat( &TMP$1396$2, (void*)vr$17, -1ll, (void*)"\x0A", 2ll );
		FBSTRING* vr$22 = fb_StrAssign( (void*)&TMP$1397$2, -1ll, (void*)vr$20, -1ll, 0 );
		OUTEX( *(uint8**)&TMP$1397$2, 0ll );
		fb_StrDelete( &TMP$1397$2 );
	}
	label$1565:;
	label$1564:;
	HCREATEFRAME( PROC$1 );
	EDBGEMITLINEFLUSH( PROC$1, *(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 32ll), PROC$1 );
	EMITFLUSH(  );
	HDESTROYFRAME( PROC$1, BYTESTOPOP$1 );
	EDBGEMITLINEFLUSH( PROC$1, *(int64*)((uint8*)*(struct $10FB_PROCEXT**)((uint8*)PROC$1 + 200ll) + 40ll), EXITLABEL$1 );
	EDBGEMITPROCFOOTER( PROC$1, INITLABEL$1, EXITLABEL$1 );
	label$1561:;
}

static void _SCOPEBEGIN( struct $8FBSYMBOL* S$1 )
{
	label$1566:;
	EDBGSCOPEBEGIN( S$1 );
	label$1567:;
}

static void _SCOPEEND( struct $8FBSYMBOL* S$1 )
{
	label$1568:;
	EDBGSCOPEEND( S$1 );
	label$1569:;
}

static void _SETSECTION( int64 SECTION$1, int64 PRIORITY$1 )
{
	label$1570:;
	uint8* SEC$1;
	uint8* vr$0 = _GETSECTIONSTRING( SECTION$1, PRIORITY$1 );
	SEC$1 = vr$0;
	if( SEC$1 != (uint8*)0ull ) goto label$1573;
	{
		goto label$1571;
	}
	label$1573:;
	label$1572:;
	static FBSTRING OSTR$1;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)SEC$1, 0ll, 0 );
	FBSTRING* vr$2 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)"\x0A", 2ll, 0 );
	OUTEX( *(uint8**)&OSTR$1, 0ll );
	label$1571:;
}

static uint8* _GETTYPESTRING( int64 DTYPE$1 )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1574:;
	{
		int64 TMP$1398$2;
		uint64 TMP$1399$2;
		if( (DTYPE$1 & 480ll) == 0ll ) goto label$1576;
		TMP$1398$2 = 22ll;
		goto label$1690;
		label$1576:;
		TMP$1398$2 = DTYPE$1 & 31ll;
		label$1690:;
		TMP$1399$2 = (uint64)TMP$1398$2;
		goto label$1578;
		label$1579:;
		{
			fb$result$1 = (uint8*)".byte";
		}
		goto label$1577;
		label$1580:;
		{
			fb$result$1 = (uint8*)".short";
		}
		goto label$1577;
		label$1581:;
		{
			fb$result$1 = (uint8*)".int";
		}
		goto label$1577;
		label$1582:;
		{
			fb$result$1 = (uint8*)".long";
		}
		goto label$1577;
		label$1583:;
		{
			fb$result$1 = (uint8*)".quad";
		}
		goto label$1577;
		label$1584:;
		{
			fb$result$1 = (uint8*)".ascii";
		}
		goto label$1577;
		label$1585:;
		{
			fb$result$1 = (uint8*)".INVALID";
		}
		goto label$1577;
		label$1586:;
		{
			fb$result$1 = (uint8*)".long";
		}
		goto label$1577;
		label$1587:;
		{
			fb$result$1 = (uint8*)".INVALID";
		}
		goto label$1577;
		label$1578:;
		static const void* tmp$1431[22ll] = {
			&&label$1579,
			&&label$1579,
			&&label$1584,
			&&label$1580,
			&&label$1580,
			&&label$1584,
			&&label$1581,
			&&label$1581,
			&&label$1581,
			&&label$1582,
			&&label$1582,
			&&label$1583,
			&&label$1583,
			&&label$1582,
			&&label$1583,
			&&label$1585,
			&&label$1584,
			&&label$1585,
			&&label$1587,
			&&label$1587,
			&&label$1587,
			&&label$1586,
		};
		if( TMP$1399$2 < 1ll ) goto label$1587;
		if( TMP$1399$2 > 22ll ) goto label$1587;
		goto *tmp$1431[TMP$1399$2 - 1ll];
		label$1577:;
	}
	label$1575:;
	return fb$result$1;
}

static uint8* _GETSECTIONSTRING( int64 SECTION$1, int64 PRIORITY$1 )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$1588:;
	static FBSTRING OSTR$1;
	if( ((int64)-(SECTION$1 == *(int64*)((uint8*)&EMIT$ + 280ll)) & (int64)-(PRIORITY$1 == *(int64*)((uint8*)&EMIT$ + 288ll))) == 0ll ) goto label$1591;
	{
		fb$result$1 = (uint8*)0ull;
		goto label$1589;
	}
	label$1591:;
	label$1590:;
	fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"\x0A", 2ll, 0 );
	int64 vr$5 = FBGETOPTION( 3ll );
	if( vr$5 == 7ll ) goto label$1593;
	{
		FBSTRING* vr$7 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)".section ", 10ll, 0 );
	}
	label$1593:;
	label$1592:;
	FBSTRING* vr$8 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)".", 2ll, 0 );
	{
		uint64 TMP$1408$2;
		TMP$1408$2 = (uint64)SECTION$1;
		goto label$1595;
		label$1596:;
		{
			{
				uint64 TMP$1409$4;
				int64 vr$9 = FBGETOPTION( 3ll );
				TMP$1409$4 = (uint64)vr$9;
				goto label$1598;
				label$1599:;
				{
					FBSTRING* vr$10 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)"rdata", 6ll, 0 );
				}
				goto label$1597;
				label$1600:;
				{
					FBSTRING* vr$11 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)"const", 6ll, 0 );
				}
				goto label$1597;
				label$1601:;
				{
					FBSTRING* vr$12 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)"rodata", 7ll, 0 );
				}
				goto label$1597;
				label$1598:;
				static const void* tmp$1432[8ll] = {
					&&label$1599,
					&&label$1599,
					&&label$1601,
					&&label$1599,
					&&label$1599,
					&&label$1601,
					&&label$1601,
					&&label$1600,
				};
				if( TMP$1409$4 > 7ll ) goto label$1601;
				goto *tmp$1432[TMP$1409$4 - 0ll];
				label$1597:;
			}
		}
		goto label$1594;
		label$1602:;
		{
			FBSTRING* vr$13 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)"data", 5ll, 0 );
		}
		goto label$1594;
		label$1603:;
		{
			FBSTRING* vr$14 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)"bss", 4ll, 0 );
		}
		goto label$1594;
		label$1604:;
		{
			FBSTRING* vr$15 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)"text", 5ll, 0 );
		}
		goto label$1594;
		label$1605:;
		{
			FBSTRING* vr$16 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)"drectve", 8ll, 0 );
		}
		goto label$1594;
		label$1606:;
		{
			FBSTRING* vr$17 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)"fbctinf", 8ll, 0 );
		}
		goto label$1594;
		label$1607:;
		{
			FBSTRING* vr$18 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)"ctors", 6ll, 0 );
			if( PRIORITY$1 <= 0ll ) goto label$1609;
			{
				FBSTRING TMP$1419$4;
				FBSTRING* vr$20 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)".", 2ll, 0 );
				FBSTRING* vr$22 = fb_LongintToStr( 65535ll - PRIORITY$1 );
				__builtin_memset( &TMP$1419$4, 0, 24ll );
				FBSTRING* vr$25 = fb_StrConcat( &TMP$1419$4, (void*)"00000", 6ll, (void*)vr$22, -1ll );
				FBSTRING* vr$26 = fb_RIGHT( vr$25, 5ll );
				FBSTRING* vr$27 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)vr$26, -1ll, 0 );
			}
			label$1609:;
			label$1608:;
			if( *(int64*)((uint8*)&ENV$ + 216ll) != 2ll ) goto label$1611;
			{
				FBSTRING* vr$29 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", \x22" "aw\x22, @progbits", 18ll, 0 );
			}
			label$1611:;
			label$1610:;
		}
		goto label$1594;
		label$1612:;
		{
			FBSTRING* vr$30 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)"dtors", 6ll, 0 );
			if( PRIORITY$1 <= 0ll ) goto label$1614;
			{
				FBSTRING TMP$1427$4;
				FBSTRING* vr$32 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)".", 2ll, 0 );
				FBSTRING* vr$34 = fb_LongintToStr( 65535ll - PRIORITY$1 );
				__builtin_memset( &TMP$1427$4, 0, 24ll );
				FBSTRING* vr$37 = fb_StrConcat( &TMP$1427$4, (void*)"00000", 6ll, (void*)vr$34, -1ll );
				FBSTRING* vr$38 = fb_RIGHT( vr$37, 5ll );
				FBSTRING* vr$39 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)vr$38, -1ll, 0 );
			}
			label$1614:;
			label$1613:;
			if( *(int64*)((uint8*)&ENV$ + 216ll) != 2ll ) goto label$1616;
			{
				FBSTRING* vr$41 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)", \x22" "aw\x22, @progbits", 18ll, 0 );
			}
			label$1616:;
			label$1615:;
		}
		goto label$1594;
		label$1595:;
		static const void* tmp$1433[8ll] = {
			&&label$1596,
			&&label$1602,
			&&label$1603,
			&&label$1604,
			&&label$1605,
			&&label$1607,
			&&label$1612,
			&&label$1606,
		};
		if( TMP$1408$2 > 7ll ) goto label$1594;
		goto *tmp$1433[TMP$1408$2 - 0ll];
		label$1594:;
	}
	fb$result$1 = *(uint8**)&OSTR$1;
	*(int64*)((uint8*)&EMIT$ + 280ll) = SECTION$1;
	*(int64*)((uint8*)&EMIT$ + 288ll) = PRIORITY$1;
	label$1589:;
	return fb$result$1;
}

// Total compilation time: 0.08890210790559649 seconds.
