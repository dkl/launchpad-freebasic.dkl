// Compilation of FreeBASIC-1.01.0-source/src/compiler/emit.bas started at 16:30:10 on 02-28-2015

typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
struct $10TFLISTITEM;
struct $10TFLISTITEM {
	struct $10TFLISTITEM* NEXT;
};
#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]
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
typedef int64 (*tmp$36)( void );
typedef void (*tmp$35)( void );
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
typedef void (*tmp$43)( struct $6IRVREG*, struct $6IRVREG* );
typedef void (*tmp$50)( struct $6IRVREG* );
typedef void (*tmp$86)( struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
typedef void (*tmp$87)( struct $6IRVREG*, int64 );
typedef void (*tmp$88)( struct $6IRVREG*, struct $8FBSYMBOL*, int64 );
typedef void (*tmp$40)( struct $8FBSYMBOL* );
typedef void (*tmp$47)( uint8* );
typedef void (*tmp$89)( struct $8FBSYMBOL*, uint64*, struct $8FBSYMBOL**, int64, struct $8FBSYMBOL*, uint64, uint64 );
typedef void (*tmp$90)( struct $6IRVREG*, struct $6IRVREG*, int64, int64 );
typedef void (*tmp$91)( struct $8FBSYMBOL*, int64, int64 );
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
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
int32 fb_FilePutStrLarge( int32, int64, void*, int64 );
void* calloc( uint64, uint64 );
void free( void* );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
FBSTRING* fb_StrConcatAssign( void*, int64, void*, int64, int32 );
int64 fb_StrLen( void*, int64 );
static void fb_ctor__emit( void ) __attribute__(( constructor ));
void* XALLOCATE( int32 );
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void FLISTINIT( struct $6TFLIST*, int64, int64 );
void* FLISTNEWITEM( struct $6TFLIST* );
void FLISTRESET( struct $6TFLIST* );
void* FLISTGETHEAD( struct $6TFLIST* );
void* FLISTGETNEXT( void* );
int64 EMITGASX86_CTOR( void );
static struct $9EMIT_NODE* HOPTSYMOP( struct $9EMIT_NODE*, struct $9EMIT_NODE* );
static void HPEEPHOLEOPT( void );
static struct $6IRVREG* HNEWVR( struct $6IRVREG* );
static struct $9EMIT_NODE* HNEWNODE( $19EMIT_NODECLASS_ENUM, int64 );
static struct $9EMIT_NODE* HNEWBOP( int64, struct $6IRVREG*, struct $6IRVREG* );
static struct $9EMIT_NODE* HNEWUOP( int64, struct $6IRVREG* );
static struct $9EMIT_NODE* HNEWREL( int64, struct $6IRVREG*, struct $8FBSYMBOL*, struct $6IRVREG*, struct $6IRVREG* );
static struct $9EMIT_NODE* HNEWSTK( int64, struct $6IRVREG*, int64 );
static struct $9EMIT_NODE* HNEWBRANCH( int64, struct $6IRVREG*, struct $8FBSYMBOL*, int64 );
static struct $9EMIT_NODE* HNEWSYMOP( int64, struct $8FBSYMBOL* );
static void HNEWLIT( uint8*, int64 );
static struct $9EMIT_NODE* HNEWMEM( int64, struct $6IRVREG*, struct $6IRVREG*, int64, int64 );
static struct $9EMIT_NODE* HNEWDBG( int64, struct $8FBSYMBOL*, int64, int64 );
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
typedef int64 $14IR_OPTIONVALUE;
typedef int64 (*tmp$38)( $14IR_OPTIONVALUE );
typedef void (*tmp$37)( double );
typedef int64 (*tmp$92)( uint8* );
typedef int64 (*tmp$39)( int64, int64 );
typedef void (*tmp$93)( int64, int64, int64*, int64* );
typedef uint8* (*tmp$42)( void );
typedef void (*tmp$41)( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef void (*tmp$94)( struct $8FBSYMBOL*, int64, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef void (*tmp$95)( int64, int64 );
typedef uint8* (*tmp$96)( int64 );
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
struct $5FBENV ENV$ __attribute__((common));
struct $7EMITCTX EMIT$;

int64 EMITINIT( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$10:;
	if( *(int64*)&EMIT$ == 0ll ) goto label$13;
	{
		fb$result$1 = -1ll;
		goto label$11;
	}
	label$13:;
	label$12:;
	EMITGASX86_CTOR(  );
	FLISTINIT( (struct $6TFLIST*)((uint8*)&EMIT$ + 32ll), 2048ll, 80ll );
	FLISTINIT( (struct $6TFLIST*)((uint8*)&EMIT$ + 144ll), 6144ll, 120ll );
	*(int64*)&EMIT$ = -1ll;
	*(int64*)((uint8*)&EMIT$ + 8ll) = 0ll;
	int64 vr$4 = (*(tmp$36*)((uint8*)&EMIT$ + 328ll))(  );
	fb$result$1 = vr$4;
	label$11:;
	return fb$result$1;
}

void EMITEND( void )
{
	label$14:;
	if( *(int64*)&EMIT$ != 0ll ) goto label$17;
	{
		goto label$15;
	}
	label$17:;
	label$16:;
	(*(tmp$35*)((uint8*)&EMIT$ + 336ll))(  );
	*(int64*)&EMIT$ = 0ll;
	label$15:;
}

void EMITWRITESTR( uint8* S$1, int64 ADDTAB$1 )
{
	label$18:;
	static FBSTRING OSTR$1;
	if( ADDTAB$1 == 0ll ) goto label$21;
	{
		FBSTRING TMP$100$2;
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)"\x09", 2ll, 0 );
		__builtin_memset( &TMP$100$2, 0, 24ll );
		FBSTRING* vr$3 = fb_StrConcat( &TMP$100$2, (void*)&OSTR$1, -1ll, (void*)S$1, 0ll );
		FBSTRING* vr$4 = fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)vr$3, -1ll, 0 );
	}
	goto label$20;
	label$21:;
	{
		fb_StrAssign( (void*)&OSTR$1, -1ll, (void*)S$1, 0ll, 0 );
	}
	label$20:;
	FBSTRING* vr$5 = fb_StrConcatAssign( (void*)&OSTR$1, -1ll, (void*)"\x0A", 2ll, 0 );
	int32 vr$7 = fb_FilePutStrLarge( (int32)*(int64*)((uint8*)&ENV$ + 776ll), 0ll, (void*)&OSTR$1, -1ll );
	if( (int64)vr$7 == 0ll ) goto label$23;
	{
	}
	label$23:;
	label$22:;
	label$19:;
}

void EMITRESET( void )
{
	label$24:;
	static int64 C$1;
	FLISTRESET( (struct $6TFLIST*)((uint8*)&EMIT$ + 32ll) );
	FLISTRESET( (struct $6TFLIST*)((uint8*)&EMIT$ + 144ll) );
	*(struct $9EMIT_NODE**)((uint8*)&EMIT$ + 256ll) = (struct $9EMIT_NODE*)0ull;
	{
		C$1 = 0ll;
		label$29:;
		{
			*(int64*)((uint8*)((uint8*)&EMIT$ + (C$1 << 3ll)) + 264ll) = 0ll;
		}
		label$27:;
		C$1 = C$1 + 1ll;
		label$26:;
		if( C$1 <= 1ll ) goto label$29;
		label$28:;
	}
	label$25:;
}

void EMITFLUSH( void )
{
	label$57:;
	struct $9EMIT_NODE* N$1;
	HPEEPHOLEOPT(  );
	void* vr$1 = FLISTGETHEAD( (struct $6TFLIST*)((uint8*)&EMIT$ + 32ll) );
	N$1 = (struct $9EMIT_NODE*)vr$1;
	label$59:;
	if( N$1 == (struct $9EMIT_NODE*)0ull ) goto label$60;
	{
		*(struct $9EMIT_NODE**)((uint8*)&EMIT$ + 256ll) = N$1;
		{
			uint64 TMP$105$3;
			TMP$105$3 = *(uint64*)N$1;
			goto label$62;
			label$63:;
			{
			}
			goto label$61;
			label$64:;
			{
				(*(tmp$43*)((uint8*)*(void***)((uint8*)&EMIT$ + 504ll) + (*(int64*)((uint8*)N$1 + 8ll) << 3ll)))( *(struct $6IRVREG**)((uint8*)N$1 + 16ll), *(struct $6IRVREG**)((uint8*)N$1 + 24ll) );
			}
			goto label$61;
			label$65:;
			{
				(*(tmp$50*)((uint8*)*(void***)((uint8*)&EMIT$ + 504ll) + (*(int64*)((uint8*)N$1 + 8ll) << 3ll)))( *(struct $6IRVREG**)((uint8*)N$1 + 16ll) );
			}
			goto label$61;
			label$66:;
			{
				(*(tmp$86*)((uint8*)*(void***)((uint8*)&EMIT$ + 504ll) + (*(int64*)((uint8*)N$1 + 8ll) << 3ll)))( *(struct $6IRVREG**)((uint8*)N$1 + 16ll), *(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll), *(struct $6IRVREG**)((uint8*)N$1 + 32ll), *(struct $6IRVREG**)((uint8*)N$1 + 40ll) );
			}
			goto label$61;
			label$67:;
			{
				(*(tmp$87*)((uint8*)*(void***)((uint8*)&EMIT$ + 504ll) + (*(int64*)((uint8*)N$1 + 8ll) << 3ll)))( *(struct $6IRVREG**)((uint8*)N$1 + 16ll), *(int64*)((uint8*)N$1 + 24ll) );
			}
			goto label$61;
			label$68:;
			{
				(*(tmp$88*)((uint8*)*(void***)((uint8*)&EMIT$ + 504ll) + (*(int64*)((uint8*)N$1 + 8ll) << 3ll)))( *(struct $6IRVREG**)((uint8*)N$1 + 16ll), *(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll), *(int64*)((uint8*)N$1 + 32ll) );
			}
			goto label$61;
			label$69:;
			{
				(*(tmp$40*)((uint8*)*(void***)((uint8*)&EMIT$ + 504ll) + (*(int64*)((uint8*)N$1 + 8ll) << 3ll)))( *(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll) );
			}
			goto label$61;
			label$70:;
			{
				(*(tmp$47*)((uint8*)*(void***)((uint8*)&EMIT$ + 504ll) + 952ll))( *(uint8**)((uint8*)N$1 + 16ll) );
				if( *(uint8**)((uint8*)N$1 + 16ll) == (uint8*)0ull ) goto label$72;
				{
					free( *(void**)((uint8*)N$1 + 16ll) );
				}
				label$72:;
				label$71:;
			}
			goto label$61;
			label$73:;
			{
				(*(tmp$89*)((uint8*)*(void***)((uint8*)&EMIT$ + 504ll) + 960ll))( *(struct $8FBSYMBOL**)((uint8*)N$1 + 8ll), *(uint64**)((uint8*)N$1 + 16ll), *(struct $8FBSYMBOL***)((uint8*)N$1 + 24ll), *(int64*)((uint8*)N$1 + 32ll), *(struct $8FBSYMBOL**)((uint8*)N$1 + 40ll), *(uint64*)((uint8*)N$1 + 48ll), *(uint64*)((uint8*)N$1 + 56ll) );
				free( *(void**)((uint8*)N$1 + 16ll) );
				free( *(void**)((uint8*)N$1 + 24ll) );
			}
			goto label$61;
			label$74:;
			{
				(*(tmp$90*)((uint8*)*(void***)((uint8*)&EMIT$ + 504ll) + (*(int64*)((uint8*)N$1 + 8ll) << 3ll)))( *(struct $6IRVREG**)((uint8*)N$1 + 16ll), *(struct $6IRVREG**)((uint8*)N$1 + 24ll), *(int64*)((uint8*)N$1 + 32ll), *(int64*)((uint8*)N$1 + 40ll) );
			}
			goto label$61;
			label$75:;
			{
				(*(tmp$91*)((uint8*)*(void***)((uint8*)&EMIT$ + 504ll) + (*(int64*)((uint8*)N$1 + 8ll) << 3ll)))( *(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll), *(int64*)((uint8*)N$1 + 24ll), *(int64*)((uint8*)N$1 + 32ll) );
			}
			goto label$61;
			label$62:;
			static const void* tmp$106[11ll] = {
				&&label$63,
				&&label$64,
				&&label$65,
				&&label$66,
				&&label$67,
				&&label$68,
				&&label$70,
				&&label$73,
				&&label$69,
				&&label$74,
				&&label$75,
			};
			if( TMP$105$3 > 10ll ) goto label$61;
			goto *tmp$106[TMP$105$3 - 0ll];
			label$61:;
		}
		void* vr$63 = FLISTGETNEXT( (void*)N$1 );
		N$1 = (struct $9EMIT_NODE*)vr$63;
	}
	goto label$59;
	label$60:;
	label$58:;
}

struct $8REGCLASS* EMITGETREGCLASS( int64 DCLASS$1 )
{
	struct $8REGCLASS* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$76:;
	fb$result$1 = *(struct $8REGCLASS**)((uint8*)((uint8*)&EMIT$ + (DCLASS$1 << 3ll)) + 16ll);
	label$77:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITLOAD( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$111:;
	{
		uint64 TMP$108$2;
		TMP$108$2 = *(uint64*)((uint8*)DVREG$1 + 8ll);
		goto label$114;
		label$115:;
		{
			{
				uint64 TMP$109$4;
				TMP$109$4 = *(uint64*)((uint8*)SVREG$1 + 8ll);
				goto label$117;
				label$118:;
				{
					struct $9EMIT_NODE* vr$3 = HNEWBOP( 9ll, DVREG$1, SVREG$1 );
					fb$result$1 = vr$3;
				}
				goto label$116;
				label$119:;
				{
					struct $9EMIT_NODE* vr$4 = HNEWBOP( 8ll, DVREG$1, SVREG$1 );
					fb$result$1 = vr$4;
				}
				goto label$116;
				label$120:;
				{
					struct $9EMIT_NODE* vr$5 = HNEWBOP( 7ll, DVREG$1, SVREG$1 );
					fb$result$1 = vr$5;
				}
				goto label$116;
				label$117:;
				static const void* tmp$112[4ll] = {
					&&label$118,
					&&label$118,
					&&label$119,
					&&label$119,
				};
				if( TMP$109$4 < 12ll ) goto label$120;
				if( TMP$109$4 > 15ll ) goto label$120;
				goto *tmp$112[TMP$109$4 - 12ll];
				label$116:;
			}
		}
		goto label$113;
		label$121:;
		{
			{
				uint64 TMP$110$4;
				TMP$110$4 = *(uint64*)((uint8*)SVREG$1 + 8ll);
				goto label$123;
				label$124:;
				{
					struct $9EMIT_NODE* vr$7 = HNEWBOP( 6ll, DVREG$1, SVREG$1 );
					fb$result$1 = vr$7;
				}
				goto label$122;
				label$125:;
				{
					struct $9EMIT_NODE* vr$8 = HNEWBOP( 5ll, DVREG$1, SVREG$1 );
					fb$result$1 = vr$8;
				}
				goto label$122;
				label$126:;
				{
					struct $9EMIT_NODE* vr$9 = HNEWBOP( 4ll, DVREG$1, SVREG$1 );
					fb$result$1 = vr$9;
				}
				goto label$122;
				label$123:;
				static const void* tmp$113[4ll] = {
					&&label$124,
					&&label$124,
					&&label$125,
					&&label$125,
				};
				if( TMP$110$4 < 12ll ) goto label$126;
				if( TMP$110$4 > 15ll ) goto label$126;
				goto *tmp$113[TMP$110$4 - 12ll];
				label$122:;
			}
		}
		goto label$113;
		label$127:;
		{
			{
				uint64 TMP$111$4;
				TMP$111$4 = *(uint64*)((uint8*)SVREG$1 + 8ll);
				goto label$129;
				label$130:;
				{
					struct $9EMIT_NODE* vr$11 = HNEWBOP( 3ll, DVREG$1, SVREG$1 );
					fb$result$1 = vr$11;
				}
				goto label$128;
				label$131:;
				{
					struct $9EMIT_NODE* vr$12 = HNEWBOP( 2ll, DVREG$1, SVREG$1 );
					fb$result$1 = vr$12;
				}
				goto label$128;
				label$132:;
				{
					struct $9EMIT_NODE* vr$13 = HNEWBOP( 1ll, DVREG$1, SVREG$1 );
					fb$result$1 = vr$13;
				}
				goto label$128;
				label$129:;
				static const void* tmp$114[4ll] = {
					&&label$130,
					&&label$130,
					&&label$131,
					&&label$131,
				};
				if( TMP$111$4 < 12ll ) goto label$132;
				if( TMP$111$4 > 15ll ) goto label$132;
				goto *tmp$114[TMP$111$4 - 12ll];
				label$128:;
			}
		}
		goto label$113;
		label$114:;
		static const void* tmp$115[4ll] = {
			&&label$115,
			&&label$115,
			&&label$121,
			&&label$121,
		};
		if( TMP$108$2 < 12ll ) goto label$127;
		if( TMP$108$2 > 15ll ) goto label$127;
		goto *tmp$115[TMP$108$2 - 12ll];
		label$113:;
	}
	label$112:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITSTORE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$133:;
	{
		uint64 TMP$116$2;
		TMP$116$2 = *(uint64*)((uint8*)DVREG$1 + 8ll);
		goto label$136;
		label$137:;
		{
			{
				uint64 TMP$117$4;
				TMP$117$4 = *(uint64*)((uint8*)SVREG$1 + 8ll);
				goto label$139;
				label$140:;
				{
					struct $9EMIT_NODE* vr$3 = HNEWBOP( 18ll, DVREG$1, SVREG$1 );
					fb$result$1 = vr$3;
				}
				goto label$138;
				label$141:;
				{
					struct $9EMIT_NODE* vr$4 = HNEWBOP( 17ll, DVREG$1, SVREG$1 );
					fb$result$1 = vr$4;
				}
				goto label$138;
				label$142:;
				{
					struct $9EMIT_NODE* vr$5 = HNEWBOP( 16ll, DVREG$1, SVREG$1 );
					fb$result$1 = vr$5;
				}
				goto label$138;
				label$139:;
				static const void* tmp$120[4ll] = {
					&&label$140,
					&&label$140,
					&&label$141,
					&&label$141,
				};
				if( TMP$117$4 < 12ll ) goto label$142;
				if( TMP$117$4 > 15ll ) goto label$142;
				goto *tmp$120[TMP$117$4 - 12ll];
				label$138:;
			}
		}
		goto label$135;
		label$143:;
		{
			{
				uint64 TMP$118$4;
				TMP$118$4 = *(uint64*)((uint8*)SVREG$1 + 8ll);
				goto label$145;
				label$146:;
				{
					struct $9EMIT_NODE* vr$7 = HNEWBOP( 15ll, DVREG$1, SVREG$1 );
					fb$result$1 = vr$7;
				}
				goto label$144;
				label$147:;
				{
					struct $9EMIT_NODE* vr$8 = HNEWBOP( 14ll, DVREG$1, SVREG$1 );
					fb$result$1 = vr$8;
				}
				goto label$144;
				label$148:;
				{
					struct $9EMIT_NODE* vr$9 = HNEWBOP( 13ll, DVREG$1, SVREG$1 );
					fb$result$1 = vr$9;
				}
				goto label$144;
				label$145:;
				static const void* tmp$121[4ll] = {
					&&label$146,
					&&label$146,
					&&label$147,
					&&label$147,
				};
				if( TMP$118$4 < 12ll ) goto label$148;
				if( TMP$118$4 > 15ll ) goto label$148;
				goto *tmp$121[TMP$118$4 - 12ll];
				label$144:;
			}
		}
		goto label$135;
		label$149:;
		{
			{
				uint64 TMP$119$4;
				TMP$119$4 = *(uint64*)((uint8*)SVREG$1 + 8ll);
				goto label$151;
				label$152:;
				{
					struct $9EMIT_NODE* vr$11 = HNEWBOP( 12ll, DVREG$1, SVREG$1 );
					fb$result$1 = vr$11;
				}
				goto label$150;
				label$153:;
				{
					struct $9EMIT_NODE* vr$12 = HNEWBOP( 11ll, DVREG$1, SVREG$1 );
					fb$result$1 = vr$12;
				}
				goto label$150;
				label$154:;
				{
					struct $9EMIT_NODE* vr$13 = HNEWBOP( 10ll, DVREG$1, SVREG$1 );
					fb$result$1 = vr$13;
				}
				goto label$150;
				label$151:;
				static const void* tmp$122[4ll] = {
					&&label$152,
					&&label$152,
					&&label$153,
					&&label$153,
				};
				if( TMP$119$4 < 12ll ) goto label$154;
				if( TMP$119$4 > 15ll ) goto label$154;
				goto *tmp$122[TMP$119$4 - 12ll];
				label$150:;
			}
		}
		goto label$135;
		label$136:;
		static const void* tmp$123[4ll] = {
			&&label$137,
			&&label$137,
			&&label$143,
			&&label$143,
		};
		if( TMP$116$2 < 12ll ) goto label$149;
		if( TMP$116$2 > 15ll ) goto label$149;
		goto *tmp$123[TMP$116$2 - 12ll];
		label$135:;
	}
	label$134:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITMOV( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$155:;
	{
		uint64 TMP$124$2;
		TMP$124$2 = *(uint64*)((uint8*)DVREG$1 + 8ll);
		goto label$158;
		label$159:;
		{
			struct $9EMIT_NODE* vr$2 = HNEWBOP( 21ll, DVREG$1, SVREG$1 );
			fb$result$1 = vr$2;
		}
		goto label$157;
		label$160:;
		{
			struct $9EMIT_NODE* vr$3 = HNEWBOP( 20ll, DVREG$1, SVREG$1 );
			fb$result$1 = vr$3;
		}
		goto label$157;
		label$161:;
		{
			struct $9EMIT_NODE* vr$4 = HNEWBOP( 19ll, DVREG$1, SVREG$1 );
			fb$result$1 = vr$4;
		}
		goto label$157;
		label$158:;
		static const void* tmp$125[4ll] = {
			&&label$159,
			&&label$159,
			&&label$160,
			&&label$160,
		};
		if( TMP$124$2 < 12ll ) goto label$161;
		if( TMP$124$2 > 15ll ) goto label$161;
		goto *tmp$125[TMP$124$2 - 12ll];
		label$157:;
	}
	label$156:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITADD( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$162:;
	{
		uint64 TMP$126$2;
		TMP$126$2 = *(uint64*)((uint8*)DVREG$1 + 8ll);
		goto label$165;
		label$166:;
		{
			struct $9EMIT_NODE* vr$2 = HNEWBOP( 24ll, DVREG$1, SVREG$1 );
			fb$result$1 = vr$2;
		}
		goto label$164;
		label$167:;
		{
			struct $9EMIT_NODE* vr$3 = HNEWBOP( 23ll, DVREG$1, SVREG$1 );
			fb$result$1 = vr$3;
		}
		goto label$164;
		label$168:;
		{
			struct $9EMIT_NODE* vr$4 = HNEWBOP( 22ll, DVREG$1, SVREG$1 );
			fb$result$1 = vr$4;
		}
		goto label$164;
		label$165:;
		static const void* tmp$127[4ll] = {
			&&label$166,
			&&label$166,
			&&label$167,
			&&label$167,
		};
		if( TMP$126$2 < 12ll ) goto label$168;
		if( TMP$126$2 > 15ll ) goto label$168;
		goto *tmp$127[TMP$126$2 - 12ll];
		label$164:;
	}
	label$163:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITSUB( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$169:;
	{
		uint64 TMP$128$2;
		TMP$128$2 = *(uint64*)((uint8*)DVREG$1 + 8ll);
		goto label$172;
		label$173:;
		{
			struct $9EMIT_NODE* vr$2 = HNEWBOP( 27ll, DVREG$1, SVREG$1 );
			fb$result$1 = vr$2;
		}
		goto label$171;
		label$174:;
		{
			struct $9EMIT_NODE* vr$3 = HNEWBOP( 26ll, DVREG$1, SVREG$1 );
			fb$result$1 = vr$3;
		}
		goto label$171;
		label$175:;
		{
			struct $9EMIT_NODE* vr$4 = HNEWBOP( 25ll, DVREG$1, SVREG$1 );
			fb$result$1 = vr$4;
		}
		goto label$171;
		label$172:;
		static const void* tmp$129[4ll] = {
			&&label$173,
			&&label$173,
			&&label$174,
			&&label$174,
		};
		if( TMP$128$2 < 12ll ) goto label$175;
		if( TMP$128$2 > 15ll ) goto label$175;
		goto *tmp$129[TMP$128$2 - 12ll];
		label$171:;
	}
	label$170:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITMUL( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$176:;
	{
		uint64 TMP$130$2;
		TMP$130$2 = *(uint64*)((uint8*)DVREG$1 + 8ll);
		goto label$179;
		label$180:;
		{
			struct $9EMIT_NODE* vr$2 = HNEWBOP( 30ll, DVREG$1, SVREG$1 );
			fb$result$1 = vr$2;
		}
		goto label$178;
		label$181:;
		{
			struct $9EMIT_NODE* vr$3 = HNEWBOP( 29ll, DVREG$1, SVREG$1 );
			fb$result$1 = vr$3;
		}
		goto label$178;
		label$182:;
		{
			struct $9EMIT_NODE* vr$4 = HNEWBOP( 28ll, DVREG$1, SVREG$1 );
			fb$result$1 = vr$4;
		}
		goto label$178;
		label$179:;
		static const void* tmp$131[4ll] = {
			&&label$180,
			&&label$180,
			&&label$181,
			&&label$181,
		};
		if( TMP$130$2 < 12ll ) goto label$182;
		if( TMP$130$2 > 15ll ) goto label$182;
		goto *tmp$131[TMP$130$2 - 12ll];
		label$178:;
	}
	label$177:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITDIV( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$183:;
	struct $9EMIT_NODE* vr$1 = HNEWBOP( 32ll, DVREG$1, SVREG$1 );
	fb$result$1 = vr$1;
	label$184:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITINTDIV( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$185:;
	struct $9EMIT_NODE* vr$1 = HNEWBOP( 31ll, DVREG$1, SVREG$1 );
	fb$result$1 = vr$1;
	label$186:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITMOD( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$187:;
	struct $9EMIT_NODE* vr$1 = HNEWBOP( 34ll, DVREG$1, SVREG$1 );
	fb$result$1 = vr$1;
	label$188:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITSHL( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$189:;
	{
		$11FB_DATATYPE TMP$132$2;
		TMP$132$2 = *($11FB_DATATYPE*)((uint8*)DVREG$1 + 8ll);
		if( TMP$132$2 == 12ll ) goto label$193;
		label$194:;
		if( TMP$132$2 != 13ll ) goto label$192;
		label$193:;
		{
			struct $9EMIT_NODE* vr$4 = HNEWBOP( 38ll, DVREG$1, SVREG$1 );
			fb$result$1 = vr$4;
		}
		goto label$191;
		label$192:;
		{
			struct $9EMIT_NODE* vr$5 = HNEWBOP( 37ll, DVREG$1, SVREG$1 );
			fb$result$1 = vr$5;
		}
		label$195:;
		label$191:;
	}
	label$190:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITSHR( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$196:;
	{
		$11FB_DATATYPE TMP$133$2;
		TMP$133$2 = *($11FB_DATATYPE*)((uint8*)DVREG$1 + 8ll);
		if( TMP$133$2 == 12ll ) goto label$200;
		label$201:;
		if( TMP$133$2 != 13ll ) goto label$199;
		label$200:;
		{
			struct $9EMIT_NODE* vr$4 = HNEWBOP( 40ll, DVREG$1, SVREG$1 );
			fb$result$1 = vr$4;
		}
		goto label$198;
		label$199:;
		{
			struct $9EMIT_NODE* vr$5 = HNEWBOP( 39ll, DVREG$1, SVREG$1 );
			fb$result$1 = vr$5;
		}
		label$202:;
		label$198:;
	}
	label$197:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITAND( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$203:;
	{
		$11FB_DATATYPE TMP$134$2;
		TMP$134$2 = *($11FB_DATATYPE*)((uint8*)DVREG$1 + 8ll);
		if( TMP$134$2 == 12ll ) goto label$207;
		label$208:;
		if( TMP$134$2 != 13ll ) goto label$206;
		label$207:;
		{
			struct $9EMIT_NODE* vr$4 = HNEWBOP( 42ll, DVREG$1, SVREG$1 );
			fb$result$1 = vr$4;
		}
		goto label$205;
		label$206:;
		{
			struct $9EMIT_NODE* vr$5 = HNEWBOP( 41ll, DVREG$1, SVREG$1 );
			fb$result$1 = vr$5;
		}
		label$209:;
		label$205:;
	}
	label$204:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITOR( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$210:;
	{
		$11FB_DATATYPE TMP$135$2;
		TMP$135$2 = *($11FB_DATATYPE*)((uint8*)DVREG$1 + 8ll);
		if( TMP$135$2 == 12ll ) goto label$214;
		label$215:;
		if( TMP$135$2 != 13ll ) goto label$213;
		label$214:;
		{
			struct $9EMIT_NODE* vr$4 = HNEWBOP( 44ll, DVREG$1, SVREG$1 );
			fb$result$1 = vr$4;
		}
		goto label$212;
		label$213:;
		{
			struct $9EMIT_NODE* vr$5 = HNEWBOP( 43ll, DVREG$1, SVREG$1 );
			fb$result$1 = vr$5;
		}
		label$216:;
		label$212:;
	}
	label$211:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITXOR( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$217:;
	{
		$11FB_DATATYPE TMP$136$2;
		TMP$136$2 = *($11FB_DATATYPE*)((uint8*)DVREG$1 + 8ll);
		if( TMP$136$2 == 12ll ) goto label$221;
		label$222:;
		if( TMP$136$2 != 13ll ) goto label$220;
		label$221:;
		{
			struct $9EMIT_NODE* vr$4 = HNEWBOP( 46ll, DVREG$1, SVREG$1 );
			fb$result$1 = vr$4;
		}
		goto label$219;
		label$220:;
		{
			struct $9EMIT_NODE* vr$5 = HNEWBOP( 45ll, DVREG$1, SVREG$1 );
			fb$result$1 = vr$5;
		}
		label$223:;
		label$219:;
	}
	label$218:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITEQV( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$224:;
	{
		$11FB_DATATYPE TMP$137$2;
		TMP$137$2 = *($11FB_DATATYPE*)((uint8*)DVREG$1 + 8ll);
		if( TMP$137$2 == 12ll ) goto label$228;
		label$229:;
		if( TMP$137$2 != 13ll ) goto label$227;
		label$228:;
		{
			struct $9EMIT_NODE* vr$4 = HNEWBOP( 48ll, DVREG$1, SVREG$1 );
			fb$result$1 = vr$4;
		}
		goto label$226;
		label$227:;
		{
			struct $9EMIT_NODE* vr$5 = HNEWBOP( 47ll, DVREG$1, SVREG$1 );
			fb$result$1 = vr$5;
		}
		label$230:;
		label$226:;
	}
	label$225:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITIMP( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$231:;
	{
		$11FB_DATATYPE TMP$138$2;
		TMP$138$2 = *($11FB_DATATYPE*)((uint8*)DVREG$1 + 8ll);
		if( TMP$138$2 == 12ll ) goto label$235;
		label$236:;
		if( TMP$138$2 != 13ll ) goto label$234;
		label$235:;
		{
			struct $9EMIT_NODE* vr$4 = HNEWBOP( 50ll, DVREG$1, SVREG$1 );
			fb$result$1 = vr$4;
		}
		goto label$233;
		label$234:;
		{
			struct $9EMIT_NODE* vr$5 = HNEWBOP( 49ll, DVREG$1, SVREG$1 );
			fb$result$1 = vr$5;
		}
		label$237:;
		label$233:;
	}
	label$232:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITATN2( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$238:;
	struct $9EMIT_NODE* vr$1 = HNEWBOP( 51ll, DVREG$1, SVREG$1 );
	fb$result$1 = vr$1;
	label$239:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITPOW( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$240:;
	struct $9EMIT_NODE* vr$1 = HNEWBOP( 52ll, DVREG$1, SVREG$1 );
	fb$result$1 = vr$1;
	label$241:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITADDROF( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$242:;
	struct $9EMIT_NODE* vr$1 = HNEWBOP( 53ll, DVREG$1, SVREG$1 );
	fb$result$1 = vr$1;
	label$243:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITDEREF( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$244:;
	struct $9EMIT_NODE* vr$1 = HNEWBOP( 54ll, DVREG$1, SVREG$1 );
	fb$result$1 = vr$1;
	label$245:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITGT( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$246:;
	{
		uint64 TMP$139$2;
		TMP$139$2 = *(uint64*)((uint8*)DVREG$1 + 8ll);
		goto label$249;
		label$250:;
		{
			struct $9EMIT_NODE* vr$2 = HNEWREL( 57ll, RVREG$1, LABEL$1, DVREG$1, SVREG$1 );
			fb$result$1 = vr$2;
		}
		goto label$248;
		label$251:;
		{
			struct $9EMIT_NODE* vr$3 = HNEWREL( 56ll, RVREG$1, LABEL$1, DVREG$1, SVREG$1 );
			fb$result$1 = vr$3;
		}
		goto label$248;
		label$252:;
		{
			struct $9EMIT_NODE* vr$4 = HNEWREL( 55ll, RVREG$1, LABEL$1, DVREG$1, SVREG$1 );
			fb$result$1 = vr$4;
		}
		goto label$248;
		label$249:;
		static const void* tmp$140[4ll] = {
			&&label$250,
			&&label$250,
			&&label$251,
			&&label$251,
		};
		if( TMP$139$2 < 12ll ) goto label$252;
		if( TMP$139$2 > 15ll ) goto label$252;
		goto *tmp$140[TMP$139$2 - 12ll];
		label$248:;
	}
	label$247:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITLT( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$253:;
	{
		uint64 TMP$141$2;
		TMP$141$2 = *(uint64*)((uint8*)DVREG$1 + 8ll);
		goto label$256;
		label$257:;
		{
			struct $9EMIT_NODE* vr$2 = HNEWREL( 60ll, RVREG$1, LABEL$1, DVREG$1, SVREG$1 );
			fb$result$1 = vr$2;
		}
		goto label$255;
		label$258:;
		{
			struct $9EMIT_NODE* vr$3 = HNEWREL( 59ll, RVREG$1, LABEL$1, DVREG$1, SVREG$1 );
			fb$result$1 = vr$3;
		}
		goto label$255;
		label$259:;
		{
			struct $9EMIT_NODE* vr$4 = HNEWREL( 58ll, RVREG$1, LABEL$1, DVREG$1, SVREG$1 );
			fb$result$1 = vr$4;
		}
		goto label$255;
		label$256:;
		static const void* tmp$142[4ll] = {
			&&label$257,
			&&label$257,
			&&label$258,
			&&label$258,
		};
		if( TMP$141$2 < 12ll ) goto label$259;
		if( TMP$141$2 > 15ll ) goto label$259;
		goto *tmp$142[TMP$141$2 - 12ll];
		label$255:;
	}
	label$254:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITEQ( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$260:;
	{
		uint64 TMP$143$2;
		TMP$143$2 = *(uint64*)((uint8*)DVREG$1 + 8ll);
		goto label$263;
		label$264:;
		{
			struct $9EMIT_NODE* vr$2 = HNEWREL( 63ll, RVREG$1, LABEL$1, DVREG$1, SVREG$1 );
			fb$result$1 = vr$2;
		}
		goto label$262;
		label$265:;
		{
			struct $9EMIT_NODE* vr$3 = HNEWREL( 62ll, RVREG$1, LABEL$1, DVREG$1, SVREG$1 );
			fb$result$1 = vr$3;
		}
		goto label$262;
		label$266:;
		{
			struct $9EMIT_NODE* vr$4 = HNEWREL( 61ll, RVREG$1, LABEL$1, DVREG$1, SVREG$1 );
			fb$result$1 = vr$4;
		}
		goto label$262;
		label$263:;
		static const void* tmp$144[4ll] = {
			&&label$264,
			&&label$264,
			&&label$265,
			&&label$265,
		};
		if( TMP$143$2 < 12ll ) goto label$266;
		if( TMP$143$2 > 15ll ) goto label$266;
		goto *tmp$144[TMP$143$2 - 12ll];
		label$262:;
	}
	label$261:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITNE( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$267:;
	{
		uint64 TMP$145$2;
		TMP$145$2 = *(uint64*)((uint8*)DVREG$1 + 8ll);
		goto label$270;
		label$271:;
		{
			struct $9EMIT_NODE* vr$2 = HNEWREL( 66ll, RVREG$1, LABEL$1, DVREG$1, SVREG$1 );
			fb$result$1 = vr$2;
		}
		goto label$269;
		label$272:;
		{
			struct $9EMIT_NODE* vr$3 = HNEWREL( 65ll, RVREG$1, LABEL$1, DVREG$1, SVREG$1 );
			fb$result$1 = vr$3;
		}
		goto label$269;
		label$273:;
		{
			struct $9EMIT_NODE* vr$4 = HNEWREL( 64ll, RVREG$1, LABEL$1, DVREG$1, SVREG$1 );
			fb$result$1 = vr$4;
		}
		goto label$269;
		label$270:;
		static const void* tmp$146[4ll] = {
			&&label$271,
			&&label$271,
			&&label$272,
			&&label$272,
		};
		if( TMP$145$2 < 12ll ) goto label$273;
		if( TMP$145$2 > 15ll ) goto label$273;
		goto *tmp$146[TMP$145$2 - 12ll];
		label$269:;
	}
	label$268:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITGE( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$274:;
	{
		uint64 TMP$147$2;
		TMP$147$2 = *(uint64*)((uint8*)DVREG$1 + 8ll);
		goto label$277;
		label$278:;
		{
			struct $9EMIT_NODE* vr$2 = HNEWREL( 69ll, RVREG$1, LABEL$1, DVREG$1, SVREG$1 );
			fb$result$1 = vr$2;
		}
		goto label$276;
		label$279:;
		{
			struct $9EMIT_NODE* vr$3 = HNEWREL( 68ll, RVREG$1, LABEL$1, DVREG$1, SVREG$1 );
			fb$result$1 = vr$3;
		}
		goto label$276;
		label$280:;
		{
			struct $9EMIT_NODE* vr$4 = HNEWREL( 67ll, RVREG$1, LABEL$1, DVREG$1, SVREG$1 );
			fb$result$1 = vr$4;
		}
		goto label$276;
		label$277:;
		static const void* tmp$148[4ll] = {
			&&label$278,
			&&label$278,
			&&label$279,
			&&label$279,
		};
		if( TMP$147$2 < 12ll ) goto label$280;
		if( TMP$147$2 > 15ll ) goto label$280;
		goto *tmp$148[TMP$147$2 - 12ll];
		label$276:;
	}
	label$275:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITLE( struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$281:;
	{
		uint64 TMP$149$2;
		TMP$149$2 = *(uint64*)((uint8*)DVREG$1 + 8ll);
		goto label$284;
		label$285:;
		{
			struct $9EMIT_NODE* vr$2 = HNEWREL( 72ll, RVREG$1, LABEL$1, DVREG$1, SVREG$1 );
			fb$result$1 = vr$2;
		}
		goto label$283;
		label$286:;
		{
			struct $9EMIT_NODE* vr$3 = HNEWREL( 71ll, RVREG$1, LABEL$1, DVREG$1, SVREG$1 );
			fb$result$1 = vr$3;
		}
		goto label$283;
		label$287:;
		{
			struct $9EMIT_NODE* vr$4 = HNEWREL( 70ll, RVREG$1, LABEL$1, DVREG$1, SVREG$1 );
			fb$result$1 = vr$4;
		}
		goto label$283;
		label$284:;
		static const void* tmp$150[4ll] = {
			&&label$285,
			&&label$285,
			&&label$286,
			&&label$286,
		};
		if( TMP$149$2 < 12ll ) goto label$287;
		if( TMP$149$2 > 15ll ) goto label$287;
		goto *tmp$150[TMP$149$2 - 12ll];
		label$283:;
	}
	label$282:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITNEG( struct $6IRVREG* DVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$288:;
	{
		uint64 TMP$151$2;
		TMP$151$2 = *(uint64*)((uint8*)DVREG$1 + 8ll);
		goto label$291;
		label$292:;
		{
			struct $9EMIT_NODE* vr$2 = HNEWUOP( 75ll, DVREG$1 );
			fb$result$1 = vr$2;
		}
		goto label$290;
		label$293:;
		{
			struct $9EMIT_NODE* vr$3 = HNEWUOP( 74ll, DVREG$1 );
			fb$result$1 = vr$3;
		}
		goto label$290;
		label$294:;
		{
			struct $9EMIT_NODE* vr$4 = HNEWUOP( 73ll, DVREG$1 );
			fb$result$1 = vr$4;
		}
		goto label$290;
		label$291:;
		static const void* tmp$152[4ll] = {
			&&label$292,
			&&label$292,
			&&label$293,
			&&label$293,
		};
		if( TMP$151$2 < 12ll ) goto label$294;
		if( TMP$151$2 > 15ll ) goto label$294;
		goto *tmp$152[TMP$151$2 - 12ll];
		label$290:;
	}
	label$289:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITNOT( struct $6IRVREG* DVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$295:;
	{
		$11FB_DATATYPE TMP$153$2;
		TMP$153$2 = *($11FB_DATATYPE*)((uint8*)DVREG$1 + 8ll);
		if( TMP$153$2 == 12ll ) goto label$299;
		label$300:;
		if( TMP$153$2 != 13ll ) goto label$298;
		label$299:;
		{
			struct $9EMIT_NODE* vr$4 = HNEWUOP( 77ll, DVREG$1 );
			fb$result$1 = vr$4;
		}
		goto label$297;
		label$298:;
		{
			struct $9EMIT_NODE* vr$5 = HNEWUOP( 76ll, DVREG$1 );
			fb$result$1 = vr$5;
		}
		label$301:;
		label$297:;
	}
	label$296:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITHADD( struct $6IRVREG* DVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$302:;
	{
		uint64 TMP$154$2;
		TMP$154$2 = *(uint64*)((uint8*)DVREG$1 + 8ll);
		goto label$305;
		label$306:;
		{
			struct $9EMIT_NODE* vr$2 = HNEWUOP( 78ll, DVREG$1 );
			fb$result$1 = vr$2;
		}
		goto label$304;
		label$307:;
		{
		}
		goto label$304;
		label$305:;
		static const void* tmp$155[2ll] = {
			&&label$306,
			&&label$306,
		};
		if( TMP$154$2 < 14ll ) goto label$307;
		if( TMP$154$2 > 15ll ) goto label$307;
		goto *tmp$155[TMP$154$2 - 14ll];
		label$304:;
	}
	label$303:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITABS( struct $6IRVREG* DVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$308:;
	{
		uint64 TMP$156$2;
		TMP$156$2 = *(uint64*)((uint8*)DVREG$1 + 8ll);
		goto label$311;
		label$312:;
		{
			struct $9EMIT_NODE* vr$2 = HNEWUOP( 81ll, DVREG$1 );
			fb$result$1 = vr$2;
		}
		goto label$310;
		label$313:;
		{
			struct $9EMIT_NODE* vr$3 = HNEWUOP( 80ll, DVREG$1 );
			fb$result$1 = vr$3;
		}
		goto label$310;
		label$314:;
		{
			struct $9EMIT_NODE* vr$4 = HNEWUOP( 79ll, DVREG$1 );
			fb$result$1 = vr$4;
		}
		goto label$310;
		label$311:;
		static const void* tmp$157[4ll] = {
			&&label$312,
			&&label$312,
			&&label$313,
			&&label$313,
		};
		if( TMP$156$2 < 12ll ) goto label$314;
		if( TMP$156$2 > 15ll ) goto label$314;
		goto *tmp$157[TMP$156$2 - 12ll];
		label$310:;
	}
	label$309:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITSGN( struct $6IRVREG* DVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$315:;
	{
		uint64 TMP$158$2;
		TMP$158$2 = *(uint64*)((uint8*)DVREG$1 + 8ll);
		goto label$318;
		label$319:;
		{
			struct $9EMIT_NODE* vr$2 = HNEWUOP( 84ll, DVREG$1 );
			fb$result$1 = vr$2;
		}
		goto label$317;
		label$320:;
		{
			struct $9EMIT_NODE* vr$3 = HNEWUOP( 83ll, DVREG$1 );
			fb$result$1 = vr$3;
		}
		goto label$317;
		label$321:;
		{
			struct $9EMIT_NODE* vr$4 = HNEWUOP( 82ll, DVREG$1 );
			fb$result$1 = vr$4;
		}
		goto label$317;
		label$318:;
		static const void* tmp$159[4ll] = {
			&&label$319,
			&&label$319,
			&&label$320,
			&&label$320,
		};
		if( TMP$158$2 < 12ll ) goto label$321;
		if( TMP$158$2 > 15ll ) goto label$321;
		goto *tmp$159[TMP$158$2 - 12ll];
		label$317:;
	}
	label$316:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITFIX( struct $6IRVREG* DVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$322:;
	struct $9EMIT_NODE* vr$1 = HNEWUOP( 85ll, DVREG$1 );
	fb$result$1 = vr$1;
	label$323:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITFRAC( struct $6IRVREG* DVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$324:;
	struct $9EMIT_NODE* vr$1 = HNEWUOP( 86ll, DVREG$1 );
	fb$result$1 = vr$1;
	label$325:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITCONVFD2FS( struct $6IRVREG* DVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$326:;
	struct $9EMIT_NODE* vr$1 = HNEWUOP( 87ll, DVREG$1 );
	fb$result$1 = vr$1;
	label$327:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITSIN( struct $6IRVREG* DVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$328:;
	struct $9EMIT_NODE* vr$1 = HNEWUOP( 89ll, DVREG$1 );
	fb$result$1 = vr$1;
	label$329:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITASIN( struct $6IRVREG* DVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$330:;
	struct $9EMIT_NODE* vr$1 = HNEWUOP( 90ll, DVREG$1 );
	fb$result$1 = vr$1;
	label$331:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITCOS( struct $6IRVREG* DVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$332:;
	struct $9EMIT_NODE* vr$1 = HNEWUOP( 91ll, DVREG$1 );
	fb$result$1 = vr$1;
	label$333:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITACOS( struct $6IRVREG* DVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$334:;
	struct $9EMIT_NODE* vr$1 = HNEWUOP( 92ll, DVREG$1 );
	fb$result$1 = vr$1;
	label$335:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITTAN( struct $6IRVREG* DVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$336:;
	struct $9EMIT_NODE* vr$1 = HNEWUOP( 93ll, DVREG$1 );
	fb$result$1 = vr$1;
	label$337:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITATAN( struct $6IRVREG* DVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$338:;
	struct $9EMIT_NODE* vr$1 = HNEWUOP( 94ll, DVREG$1 );
	fb$result$1 = vr$1;
	label$339:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITSQRT( struct $6IRVREG* DVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$340:;
	struct $9EMIT_NODE* vr$1 = HNEWUOP( 95ll, DVREG$1 );
	fb$result$1 = vr$1;
	label$341:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITRSQRT( struct $6IRVREG* DVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$342:;
	struct $9EMIT_NODE* vr$1 = HNEWUOP( 96ll, DVREG$1 );
	fb$result$1 = vr$1;
	label$343:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITRCP( struct $6IRVREG* DVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$344:;
	struct $9EMIT_NODE* vr$1 = HNEWUOP( 97ll, DVREG$1 );
	fb$result$1 = vr$1;
	label$345:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITLOG( struct $6IRVREG* DVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$346:;
	struct $9EMIT_NODE* vr$1 = HNEWUOP( 98ll, DVREG$1 );
	fb$result$1 = vr$1;
	label$347:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITEXP( struct $6IRVREG* DVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$348:;
	struct $9EMIT_NODE* vr$1 = HNEWUOP( 99ll, DVREG$1 );
	fb$result$1 = vr$1;
	label$349:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITFLOOR( struct $6IRVREG* DVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$350:;
	struct $9EMIT_NODE* vr$1 = HNEWUOP( 100ll, DVREG$1 );
	fb$result$1 = vr$1;
	label$351:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITXCHGTOS( struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$352:;
	struct $9EMIT_NODE* vr$1 = HNEWUOP( 101ll, SVREG$1 );
	fb$result$1 = vr$1;
	label$353:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITSWZREP( struct $6IRVREG* DVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$354:;
	struct $9EMIT_NODE* vr$1 = HNEWUOP( 88ll, DVREG$1 );
	fb$result$1 = vr$1;
	label$355:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITSTACKALIGN( int64 BYTES$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$356:;
	struct $6IRVREG VR$1;
	__builtin_memset( &VR$1, 0, 120ll );
	*($15IRVREGTYPE_ENUM*)&VR$1 = 0ll;
	*(int64*)((uint8*)&VR$1 + 48ll) = BYTES$1;
	struct $9EMIT_NODE* vr$3 = HNEWSTK( 102ll, &VR$1, 0ll );
	fb$result$1 = vr$3;
	label$357:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITPUSH( struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$358:;
	{
		uint64 TMP$160$2;
		TMP$160$2 = *(uint64*)((uint8*)SVREG$1 + 8ll);
		goto label$361;
		label$362:;
		{
			struct $9EMIT_NODE* vr$2 = HNEWSTK( 105ll, SVREG$1, 0ll );
			fb$result$1 = vr$2;
		}
		goto label$360;
		label$363:;
		{
			struct $9EMIT_NODE* vr$3 = HNEWSTK( 104ll, SVREG$1, 0ll );
			fb$result$1 = vr$3;
		}
		goto label$360;
		label$364:;
		{
			struct $9EMIT_NODE* vr$4 = HNEWSTK( 103ll, SVREG$1, 0ll );
			fb$result$1 = vr$4;
		}
		goto label$360;
		label$361:;
		static const void* tmp$161[4ll] = {
			&&label$362,
			&&label$362,
			&&label$363,
			&&label$363,
		};
		if( TMP$160$2 < 12ll ) goto label$364;
		if( TMP$160$2 > 15ll ) goto label$364;
		goto *tmp$161[TMP$160$2 - 12ll];
		label$360:;
	}
	label$359:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITPOP( struct $6IRVREG* DVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$365:;
	{
		uint64 TMP$162$2;
		TMP$162$2 = *(uint64*)((uint8*)DVREG$1 + 8ll);
		goto label$368;
		label$369:;
		{
			struct $9EMIT_NODE* vr$2 = HNEWSTK( 108ll, DVREG$1, 0ll );
			fb$result$1 = vr$2;
		}
		goto label$367;
		label$370:;
		{
			struct $9EMIT_NODE* vr$3 = HNEWSTK( 107ll, DVREG$1, 0ll );
			fb$result$1 = vr$3;
		}
		goto label$367;
		label$371:;
		{
			struct $9EMIT_NODE* vr$4 = HNEWSTK( 106ll, DVREG$1, 0ll );
			fb$result$1 = vr$4;
		}
		goto label$367;
		label$368:;
		static const void* tmp$163[4ll] = {
			&&label$369,
			&&label$369,
			&&label$370,
			&&label$370,
		};
		if( TMP$162$2 < 12ll ) goto label$371;
		if( TMP$162$2 > 15ll ) goto label$371;
		goto *tmp$163[TMP$162$2 - 12ll];
		label$367:;
	}
	label$366:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITPUSHUDT( struct $6IRVREG* SVREG$1, int64 SDSIZE$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$372:;
	struct $9EMIT_NODE* vr$1 = HNEWSTK( 109ll, SVREG$1, SDSIZE$1 );
	fb$result$1 = vr$1;
	label$373:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITPOPST0( void )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$374:;
	struct $9EMIT_NODE* vr$1 = HNEWSTK( 110ll, (struct $6IRVREG*)0ull, 0ll );
	fb$result$1 = vr$1;
	label$375:;
	return fb$result$1;
}

void EMITCOMMENT( uint8* TEXT$1 )
{
	FBSTRING TMP$165$1;
	FBSTRING TMP$166$1;
	label$376:;
	__builtin_memset( &TMP$166$1, 0, 24ll );
	__builtin_memset( &TMP$165$1, 0, 24ll );
	FBSTRING* vr$3 = fb_StrConcat( &TMP$165$1, (void*)"##", 3ll, (void*)TEXT$1, 0ll );
	FBSTRING* vr$5 = fb_StrAssign( (void*)&TMP$166$1, -1ll, (void*)vr$3, -1ll, 0 );
	HNEWLIT( *(uint8**)&TMP$166$1, 0ll );
	fb_StrDelete( &TMP$166$1 );
	label$377:;
}

void EMITASM( uint8* TEXT$1 )
{
	label$378:;
	HNEWLIT( TEXT$1, -1ll );
	{
		int64 C$2;
		C$2 = 0ll;
		label$383:;
		{
			*(int64*)((uint8*)((uint8*)&EMIT$ + (C$2 << 3ll)) + 264ll) = -1ll;
		}
		label$381:;
		C$2 = C$2 + 1ll;
		label$380:;
		if( C$2 <= 1ll ) goto label$383;
		label$382:;
	}
	label$379:;
}

struct $9EMIT_NODE* EMITJMPTB( struct $8FBSYMBOL* TBSYM$1, uint64* VALUES1$1, struct $8FBSYMBOL** LABELS1$1, int64 LABELCOUNT$1, struct $8FBSYMBOL* DEFLABEL$1, uint64 MINVAL$1, uint64 MAXVAL$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$384:;
	struct $9EMIT_NODE* N$1;
	uint64* VALUES$1;
	struct $8FBSYMBOL** LABELS$1;
	void* vr$2 = calloc( (uint64)(LABELCOUNT$1 << 3ll), 1ull );
	VALUES$1 = (uint64*)vr$2;
	void* vr$4 = calloc( (uint64)(LABELCOUNT$1 << 3ll), 1ull );
	LABELS$1 = (struct $8FBSYMBOL**)vr$4;
	{
		int64 I$2;
		I$2 = 0ll;
		int64 TMP$167$2;
		TMP$167$2 = LABELCOUNT$1 + -1ll;
		goto label$386;
		label$389:;
		{
			*(uint64*)((uint8*)VALUES$1 + (I$2 << 3ll)) = *(uint64*)((uint8*)VALUES1$1 + (I$2 << 3ll));
			*(struct $8FBSYMBOL**)((uint8*)LABELS$1 + (I$2 << 3ll)) = *(struct $8FBSYMBOL**)((uint8*)LABELS1$1 + (I$2 << 3ll));
		}
		label$387:;
		I$2 = I$2 + 1ll;
		label$386:;
		if( I$2 <= TMP$167$2 ) goto label$389;
		label$388:;
	}
	struct $9EMIT_NODE* vr$16 = HNEWNODE( 7ll, 0ll );
	N$1 = vr$16;
	*(struct $8FBSYMBOL**)((uint8*)N$1 + 8ll) = TBSYM$1;
	*(uint64**)((uint8*)N$1 + 16ll) = VALUES$1;
	*(struct $8FBSYMBOL***)((uint8*)N$1 + 24ll) = LABELS$1;
	*(int64*)((uint8*)N$1 + 32ll) = LABELCOUNT$1;
	*(struct $8FBSYMBOL**)((uint8*)N$1 + 40ll) = DEFLABEL$1;
	*(uint64*)((uint8*)N$1 + 48ll) = MINVAL$1;
	*(uint64*)((uint8*)N$1 + 56ll) = MAXVAL$1;
	fb$result$1 = N$1;
	label$385:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITCALL( struct $8FBSYMBOL* LABEL$1, int64 BYTESTOPOP$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$390:;
	struct $9EMIT_NODE* vr$1 = HNEWBRANCH( 111ll, (struct $6IRVREG*)0ull, LABEL$1, BYTESTOPOP$1 );
	fb$result$1 = vr$1;
	label$391:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITCALLPTR( struct $6IRVREG* SVREG$1, int64 BYTESTOPOP$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$392:;
	struct $9EMIT_NODE* vr$1 = HNEWBRANCH( 112ll, SVREG$1, (struct $8FBSYMBOL*)0ull, BYTESTOPOP$1 );
	fb$result$1 = vr$1;
	label$393:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITBRANCH( int64 OP$1, struct $8FBSYMBOL* LABEL$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$394:;
	struct $9EMIT_NODE* vr$1 = HNEWBRANCH( 113ll, (struct $6IRVREG*)0ull, LABEL$1, OP$1 );
	fb$result$1 = vr$1;
	label$395:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITJUMP( struct $8FBSYMBOL* LABEL$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$396:;
	struct $9EMIT_NODE* vr$1 = HNEWBRANCH( 114ll, (struct $6IRVREG*)0ull, LABEL$1, 0ll );
	fb$result$1 = vr$1;
	label$397:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITJUMPPTR( struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$398:;
	struct $9EMIT_NODE* vr$1 = HNEWBRANCH( 115ll, SVREG$1, (struct $8FBSYMBOL*)0ull, 0ll );
	fb$result$1 = vr$1;
	label$399:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITRET( int64 BYTESTOPOP$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$400:;
	struct $6IRVREG VR$1;
	__builtin_memset( &VR$1, 0, 120ll );
	*($15IRVREGTYPE_ENUM*)&VR$1 = 0ll;
	*(int64*)((uint8*)&VR$1 + 48ll) = BYTESTOPOP$1;
	struct $9EMIT_NODE* vr$3 = HNEWUOP( 116ll, &VR$1 );
	fb$result$1 = vr$3;
	label$401:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITLABEL( struct $8FBSYMBOL* LABEL$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$402:;
	struct $9EMIT_NODE* vr$1 = HNEWSYMOP( 117ll, LABEL$1 );
	fb$result$1 = vr$1;
	label$403:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITPUBLIC( struct $8FBSYMBOL* LABEL$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$404:;
	struct $9EMIT_NODE* vr$1 = HNEWSYMOP( 118ll, LABEL$1 );
	fb$result$1 = vr$1;
	label$405:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITMEMMOVE( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1, int64 BYTES$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$406:;
	struct $9EMIT_NODE* vr$1 = HNEWMEM( 121ll, DVREG$1, SVREG$1, BYTES$1, 0ll );
	fb$result$1 = vr$1;
	label$407:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITMEMSWAP( struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1, int64 BYTES$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$408:;
	struct $9EMIT_NODE* vr$1 = HNEWMEM( 122ll, DVREG$1, SVREG$1, BYTES$1, 0ll );
	fb$result$1 = vr$1;
	label$409:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITMEMCLEAR( struct $6IRVREG* DVREG$1, struct $6IRVREG* BYTES_VREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$410:;
	struct $9EMIT_NODE* vr$1 = HNEWMEM( 123ll, DVREG$1, BYTES_VREG$1, 0ll, 0ll );
	fb$result$1 = vr$1;
	label$411:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITSTKCLEAR( int64 BYTES$1, int64 BASEOFS$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$412:;
	struct $9EMIT_NODE* vr$1 = HNEWMEM( 124ll, (struct $6IRVREG*)0ull, (struct $6IRVREG*)0ull, BYTES$1, BASEOFS$1 );
	fb$result$1 = vr$1;
	label$413:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITDBGLINEBEGIN( struct $8FBSYMBOL* PROC$1, int64 LNUM$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$414:;
	struct $9EMIT_NODE* vr$1 = HNEWDBG( 125ll, PROC$1, LNUM$1, *(int64*)((uint8*)&EMIT$ + 8ll) );
	fb$result$1 = vr$1;
	label$415:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITDBGLINEEND( struct $8FBSYMBOL* PROC$1, int64 LNUM$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$416:;
	struct $9EMIT_NODE* vr$1 = HNEWDBG( 126ll, PROC$1, LNUM$1, *(int64*)((uint8*)&EMIT$ + 8ll) );
	fb$result$1 = vr$1;
	label$417:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITDBGSCOPEBEGIN( struct $8FBSYMBOL* SYM$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$418:;
	struct $9EMIT_NODE* vr$1 = HNEWDBG( 127ll, SYM$1, 0ll, 0ll );
	fb$result$1 = vr$1;
	label$419:;
	return fb$result$1;
}

struct $9EMIT_NODE* EMITDBGSCOPEEND( struct $8FBSYMBOL* SYM$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$420:;
	struct $9EMIT_NODE* vr$1 = HNEWDBG( 128ll, SYM$1, 0ll, 0ll );
	fb$result$1 = vr$1;
	label$421:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__emit( void )
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

static struct $9EMIT_NODE* HOPTSYMOP( struct $9EMIT_NODE* P$1, struct $9EMIT_NODE* N$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$30:;
	{
		int64 TMP$102$2;
		TMP$102$2 = *(int64*)((uint8*)N$1 + 8ll);
		if( TMP$102$2 != 117ll ) goto label$33;
		label$34:;
		{
			if( P$1 == (struct $9EMIT_NODE*)0ull ) goto label$36;
			{
				if( *(int64*)P$1 != 5ll ) goto label$38;
				{
					{
						int64 TMP$103$6;
						TMP$103$6 = *(int64*)((uint8*)P$1 + 8ll);
						if( TMP$103$6 == 113ll ) goto label$41;
						label$42:;
						if( TMP$103$6 != 114ll ) goto label$40;
						label$41:;
						{
							if( *(struct $8FBSYMBOL**)((uint8*)P$1 + 24ll) != *(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll) ) goto label$44;
							{
								*($19EMIT_NODECLASS_ENUM*)P$1 = 0ll;
							}
							label$44:;
							label$43:;
						}
						label$40:;
						label$39:;
					}
				}
				label$38:;
				label$37:;
			}
			label$36:;
			label$35:;
			fb$result$1 = P$1;
			goto label$31;
		}
		label$33:;
		label$32:;
	}
	fb$result$1 = N$1;
	label$31:;
	return fb$result$1;
}

static void HPEEPHOLEOPT( void )
{
	label$45:;
	struct $9EMIT_NODE* N$1;
	struct $9EMIT_NODE* P$1;
	P$1 = (struct $9EMIT_NODE*)0ull;
	void* vr$1 = FLISTGETHEAD( (struct $6TFLIST*)((uint8*)&EMIT$ + 32ll) );
	N$1 = (struct $9EMIT_NODE*)vr$1;
	label$47:;
	if( N$1 == (struct $9EMIT_NODE*)0ull ) goto label$48;
	{
		{
			uint64 TMP$104$3;
			TMP$104$3 = *(uint64*)N$1;
			goto label$50;
			label$51:;
			{
				struct $9EMIT_NODE* vr$4 = HOPTSYMOP( P$1, N$1 );
				P$1 = vr$4;
			}
			goto label$49;
			label$52:;
			{
			}
			goto label$49;
			label$53:;
			{
				if( *(int64*)((uint8*)N$1 + 8ll) == 0ll ) goto label$55;
				{
					P$1 = N$1;
				}
				label$55:;
				label$54:;
			}
			goto label$49;
			label$56:;
			{
				P$1 = N$1;
			}
			goto label$49;
			label$50:;
			static const void* tmp$168[5ll] = {
				&&label$53,
				&&label$56,
				&&label$51,
				&&label$56,
				&&label$52,
			};
			if( TMP$104$3 < 6ll ) goto label$56;
			if( TMP$104$3 > 10ll ) goto label$56;
			goto *tmp$168[TMP$104$3 - 6ll];
			label$49:;
		}
		void* vr$7 = FLISTGETNEXT( (void*)N$1 );
		N$1 = (struct $9EMIT_NODE*)vr$7;
	}
	goto label$47;
	label$48:;
	label$46:;
}

static struct $6IRVREG* HNEWVR( struct $6IRVREG* V$1 )
{
	struct $6IRVREG* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$78:;
	struct $6IRVREG* N$1;
	int64 DCLASS$1;
	if( V$1 != (struct $6IRVREG*)0ull ) goto label$81;
	{
		fb$result$1 = (struct $6IRVREG*)0ull;
		goto label$79;
	}
	label$81:;
	label$80:;
	void* vr$3 = FLISTNEWITEM( (struct $6TFLIST*)((uint8*)&EMIT$ + 144ll) );
	N$1 = (struct $6IRVREG*)vr$3;
	*($15IRVREGTYPE_ENUM*)N$1 = *($15IRVREGTYPE_ENUM*)V$1;
	*($11FB_DATATYPE*)((uint8*)N$1 + 8ll) = *($11FB_DATATYPE*)((uint8*)V$1 + 8ll);
	*(struct $8FBSYMBOL**)((uint8*)N$1 + 56ll) = *(struct $8FBSYMBOL**)((uint8*)V$1 + 56ll);
	*(int64*)((uint8*)N$1 + 64ll) = *(int64*)((uint8*)V$1 + 64ll);
	*(int64*)((uint8*)N$1 + 72ll) = *(int64*)((uint8*)V$1 + 72ll);
	__builtin_memcpy( (union $7FBVALUE*)((uint8*)N$1 + 48ll), (union $7FBVALUE*)((uint8*)V$1 + 48ll), 8 );
	*($12IR_REGFAMILY*)((uint8*)N$1 + 32ll) = *($12IR_REGFAMILY*)((uint8*)V$1 + 32ll);
	*(int64*)((uint8*)N$1 + 40ll) = *(int64*)((uint8*)V$1 + 40ll);
	if( *(int64*)V$1 != 4ll ) goto label$83;
	{
		int64 TMP$107$2;
		if( (*(int64*)((uint8*)V$1 + 8ll) & 480ll) == 0ll ) goto label$84;
		TMP$107$2 = 22ll;
		goto label$422;
		label$84:;
		TMP$107$2 = *(int64*)((uint8*)V$1 + 8ll) & 31ll;
		label$422:;
		DCLASS$1 = *(int64*)((uint8*)SYMB_DTYPETB$ + (TMP$107$2 * 56ll));
		int64 vr$33 = (*(tmp$79*)((uint8*)*(struct $8REGCLASS**)((uint8*)((uint8*)&EMIT$ + (DCLASS$1 << 3ll)) + 16ll) + 80ll))( *(struct $8REGCLASS**)((uint8*)((uint8*)&EMIT$ + (DCLASS$1 << 3ll)) + 16ll), *(int64*)((uint8*)V$1 + 24ll) );
		*(int64*)((uint8*)N$1 + 24ll) = vr$33;
		*(int64*)((uint8*)((uint8*)&EMIT$ + (DCLASS$1 << 3ll)) + 264ll) = *(int64*)((uint8*)((uint8*)&EMIT$ + (DCLASS$1 << 3ll)) + 264ll) | (1ll << *(int64*)((uint8*)N$1 + 24ll));
	}
	label$83:;
	label$82:;
	struct $6IRVREG* vr$46 = HNEWVR( *(struct $6IRVREG**)((uint8*)V$1 + 88ll) );
	*(struct $6IRVREG**)((uint8*)N$1 + 88ll) = vr$46;
	struct $6IRVREG* vr$49 = HNEWVR( *(struct $6IRVREG**)((uint8*)V$1 + 80ll) );
	*(struct $6IRVREG**)((uint8*)N$1 + 80ll) = vr$49;
	fb$result$1 = N$1;
	label$79:;
	return fb$result$1;
}

static struct $9EMIT_NODE* HNEWNODE( $19EMIT_NODECLASS_ENUM CLASS_$1, int64 UPDATEPOS$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$85:;
	static struct $9EMIT_NODE* N$1;
	static int64 I$1;
	void* vr$2 = FLISTNEWITEM( (struct $6TFLIST*)((uint8*)&EMIT$ + 32ll) );
	N$1 = (struct $9EMIT_NODE*)vr$2;
	*($19EMIT_NODECLASS_ENUM*)N$1 = CLASS_$1;
	{
		I$1 = 0ll;
		label$90:;
		{
			*(int64*)((uint8*)((uint8*)N$1 + (I$1 << 3ll)) + 64ll) = *(int64*)((uint8*)*(struct $8REGCLASS**)((uint8*)((uint8*)&EMIT$ + (I$1 << 3ll)) + 16ll) + 272ll);
		}
		label$88:;
		I$1 = I$1 + 1ll;
		label$87:;
		if( I$1 <= 1ll ) goto label$90;
		label$89:;
	}
	if( UPDATEPOS$1 == 0ll ) goto label$92;
	{
		*(int64*)((uint8*)&EMIT$ + 8ll) = *(int64*)((uint8*)&EMIT$ + 8ll) + 1ll;
	}
	label$92:;
	label$91:;
	fb$result$1 = N$1;
	label$86:;
	return fb$result$1;
}

static struct $9EMIT_NODE* HNEWBOP( int64 OP$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$93:;
	static struct $9EMIT_NODE* N$1;
	struct $9EMIT_NODE* vr$1 = HNEWNODE( 1ll, -1ll );
	N$1 = vr$1;
	*(int64*)((uint8*)N$1 + 8ll) = OP$1;
	struct $6IRVREG* vr$3 = HNEWVR( DVREG$1 );
	*(struct $6IRVREG**)((uint8*)N$1 + 16ll) = vr$3;
	struct $6IRVREG* vr$5 = HNEWVR( SVREG$1 );
	*(struct $6IRVREG**)((uint8*)N$1 + 24ll) = vr$5;
	fb$result$1 = N$1;
	label$94:;
	return fb$result$1;
}

static struct $9EMIT_NODE* HNEWUOP( int64 OP$1, struct $6IRVREG* DVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$95:;
	static struct $9EMIT_NODE* N$1;
	struct $9EMIT_NODE* vr$1 = HNEWNODE( 2ll, -1ll );
	N$1 = vr$1;
	*(int64*)((uint8*)N$1 + 8ll) = OP$1;
	struct $6IRVREG* vr$3 = HNEWVR( DVREG$1 );
	*(struct $6IRVREG**)((uint8*)N$1 + 16ll) = vr$3;
	fb$result$1 = N$1;
	label$96:;
	return fb$result$1;
}

static struct $9EMIT_NODE* HNEWREL( int64 OP$1, struct $6IRVREG* RVREG$1, struct $8FBSYMBOL* LABEL$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$97:;
	static struct $9EMIT_NODE* N$1;
	struct $9EMIT_NODE* vr$1 = HNEWNODE( 3ll, -1ll );
	N$1 = vr$1;
	*(int64*)((uint8*)N$1 + 8ll) = OP$1;
	struct $6IRVREG* vr$3 = HNEWVR( RVREG$1 );
	*(struct $6IRVREG**)((uint8*)N$1 + 16ll) = vr$3;
	*(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) = LABEL$1;
	struct $6IRVREG* vr$6 = HNEWVR( DVREG$1 );
	*(struct $6IRVREG**)((uint8*)N$1 + 32ll) = vr$6;
	struct $6IRVREG* vr$8 = HNEWVR( SVREG$1 );
	*(struct $6IRVREG**)((uint8*)N$1 + 40ll) = vr$8;
	fb$result$1 = N$1;
	label$98:;
	return fb$result$1;
}

static struct $9EMIT_NODE* HNEWSTK( int64 OP$1, struct $6IRVREG* VREG$1, int64 EXTRA$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$99:;
	static struct $9EMIT_NODE* N$1;
	struct $9EMIT_NODE* vr$1 = HNEWNODE( 4ll, -1ll );
	N$1 = vr$1;
	*(int64*)((uint8*)N$1 + 8ll) = OP$1;
	struct $6IRVREG* vr$3 = HNEWVR( VREG$1 );
	*(struct $6IRVREG**)((uint8*)N$1 + 16ll) = vr$3;
	*(int64*)((uint8*)N$1 + 24ll) = EXTRA$1;
	fb$result$1 = N$1;
	label$100:;
	return fb$result$1;
}

static struct $9EMIT_NODE* HNEWBRANCH( int64 OP$1, struct $6IRVREG* VREG$1, struct $8FBSYMBOL* SYM$1, int64 EXTRA$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$101:;
	static struct $9EMIT_NODE* N$1;
	struct $9EMIT_NODE* vr$1 = HNEWNODE( 5ll, -1ll );
	N$1 = vr$1;
	*(int64*)((uint8*)N$1 + 8ll) = OP$1;
	*(struct $8FBSYMBOL**)((uint8*)N$1 + 24ll) = SYM$1;
	struct $6IRVREG* vr$4 = HNEWVR( VREG$1 );
	*(struct $6IRVREG**)((uint8*)N$1 + 16ll) = vr$4;
	*(int64*)((uint8*)N$1 + 32ll) = EXTRA$1;
	fb$result$1 = N$1;
	label$102:;
	return fb$result$1;
}

static struct $9EMIT_NODE* HNEWSYMOP( int64 OP$1, struct $8FBSYMBOL* SYM$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$103:;
	static struct $9EMIT_NODE* N$1;
	struct $9EMIT_NODE* vr$1 = HNEWNODE( 8ll, 0ll );
	N$1 = vr$1;
	*(int64*)((uint8*)N$1 + 8ll) = OP$1;
	*(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll) = SYM$1;
	fb$result$1 = N$1;
	label$104:;
	return fb$result$1;
}

static void HNEWLIT( uint8* TEXT$1, int64 ISASM$1 )
{
	label$105:;
	struct $9EMIT_NODE* N$1;
	struct $9EMIT_NODE* vr$0 = HNEWNODE( 6ll, ISASM$1 );
	N$1 = vr$0;
	*(int64*)((uint8*)N$1 + 8ll) = ISASM$1;
	int64 vr$2 = fb_StrLen( (void*)TEXT$1, 0ll );
	void* vr$5 = XALLOCATE( (int32)(vr$2 + 1ll) );
	*(uint8**)((uint8*)N$1 + 16ll) = (uint8*)vr$5;
	fb_StrAssign( *(void**)((uint8*)N$1 + 16ll), 0ll, (void*)TEXT$1, 0ll, 0 );
	label$106:;
}

static struct $9EMIT_NODE* HNEWMEM( int64 OP$1, struct $6IRVREG* DVREG$1, struct $6IRVREG* SVREG$1, int64 BYTES$1, int64 EXTRA$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$107:;
	static struct $9EMIT_NODE* N$1;
	struct $9EMIT_NODE* vr$1 = HNEWNODE( 9ll, -1ll );
	N$1 = vr$1;
	*(int64*)((uint8*)N$1 + 8ll) = OP$1;
	struct $6IRVREG* vr$3 = HNEWVR( DVREG$1 );
	*(struct $6IRVREG**)((uint8*)N$1 + 16ll) = vr$3;
	struct $6IRVREG* vr$5 = HNEWVR( SVREG$1 );
	*(struct $6IRVREG**)((uint8*)N$1 + 24ll) = vr$5;
	*(int64*)((uint8*)N$1 + 32ll) = BYTES$1;
	*(int64*)((uint8*)N$1 + 40ll) = EXTRA$1;
	fb$result$1 = N$1;
	label$108:;
	return fb$result$1;
}

static struct $9EMIT_NODE* HNEWDBG( int64 OP$1, struct $8FBSYMBOL* SYM$1, int64 LNUM$1, int64 POS_$1 )
{
	struct $9EMIT_NODE* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$109:;
	static struct $9EMIT_NODE* N$1;
	struct $9EMIT_NODE* vr$1 = HNEWNODE( 10ll, 0ll );
	N$1 = vr$1;
	*(int64*)((uint8*)N$1 + 8ll) = OP$1;
	*(struct $8FBSYMBOL**)((uint8*)N$1 + 16ll) = SYM$1;
	*(int64*)((uint8*)N$1 + 24ll) = LNUM$1;
	*(int64*)((uint8*)N$1 + 32ll) = POS_$1;
	fb$result$1 = N$1;
	label$110:;
	return fb$result$1;
}

// Total compilation time: 0.04952107777353376 seconds.
