// Compilation of FreeBASIC-1.01.0-source/src/compiler/fb.bas started at 16:30:10 on 02-28-2015

typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
typedef int64 $11FB_LANG_OPT;
typedef int64 $7FB_LANG;
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
struct $7TSTRSET {
	struct $5TLIST LIST;
	struct $5THASH HASH;
};
__FB_STATIC_ASSERT( sizeof( struct $7TSTRSET ) == 88 );
struct $16__FB_ARRAYDIMTB$ {
	int64 ELEMENTS;
	int64 LBOUND;
	int64 UBOUND;
};
__FB_STATIC_ASSERT( sizeof( struct $16__FB_ARRAYDIMTB$ ) == 24 );
struct $7FBARRAYIvE {
	void* DATA;
	void* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYIvE ) == 232 );
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
typedef int64 $13FB_COMPTARGET;
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
typedef int64 $10FB_OUTTYPE;
typedef int64 $10FB_BACKEND;
typedef int64 $10FB_CPUTYPE;
typedef int64 $10FB_FPUTYPE;
typedef int64 $9FB_FPMODE;
typedef int64 $17FB_VECTORIZELEVEL;
typedef int64 $10FB_PDCHECK;
typedef int64 $12FB_ASMSYNTAX;
typedef int64 $13FBFILE_FORMAT;
typedef int64 (*tmp$36)( void );
typedef void (*tmp$37)( double );
struct $6FBFILE {
	int64 NUM;
	uint8 NAME[261];
	uint8* INCFILE;
	int64 ISMAIN;
	$13FBFILE_FORMAT FORMAT;
};
__FB_STATIC_ASSERT( sizeof( struct $6FBFILE ) == 296 );
struct $11TSTRSETITEM {
	FBSTRING S;
	int64 USERDATA;
};
__FB_STATIC_ASSERT( sizeof( struct $11TSTRSETITEM ) == 32 );
typedef int64 $12FB_TARGETOPT;
struct $8FBTARGET {
	uint8* ID;
	$11FB_DATATYPE WCHAR;
	$11FB_FUNCMODE FBCALL;
	$11FB_FUNCMODE STDCALL;
	$12FB_TARGETOPT OPTIONS;
};
__FB_STATIC_ASSERT( sizeof( struct $8FBTARGET ) == 40 );
typedef void (*tmp$35)( void );
typedef void (*tmp$47)( uint8* );
int32 fb_ArrayRedimEx( struct $7FBARRAYIvE*, uint64, int32, int32, uint64, ... );
int32 fb_ArrayErase( struct $7FBARRAYIvE*, int32 );
void* fb_ErrorThrowAt( int32, uint8*, void*, void* );
int32 fb_FileOpen( FBSTRING*, uint32, uint32, uint32, int32, int32 );
int32 fb_FileClose( int32 );
int32 fb_FileFree( void );
void free( void* );
FBSTRING* fb_StrInit( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
int32 fb_StrCompare( void*, int64, void*, int64 );
FBSTRING* fb_StrConcatAssign( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAllocTempResult( FBSTRING* );
FBSTRING* fb_StrAllocTempDescZ( uint8* );
FBSTRING* fb_StrAllocTempDescZEx( uint8*, int64 );
int64 fb_StrLen( void*, int64 );
int64 fb_StrInstr( int64, FBSTRING*, FBSTRING* );
FBSTRING* fb_LEFT( FBSTRING*, int64 );
FBSTRING* fb_RIGHT( FBSTRING*, int64 );
FBSTRING* fb_StrLcase2( FBSTRING*, int32 );
double fb_Timer( void );
static void fb_ctor__fb( void ) __attribute__(( constructor ));
void* XALLOCATE( int32 );
void* LISTGETHEAD( struct $5TLIST* );
void* LISTGETNEXT( void* );
void STRLISTAPPEND( struct $5TLIST*, FBSTRING* );
void STRLISTINIT( struct $5TLIST*, int64 );
void HASHINIT( struct $5THASH*, int64, int64 );
void HASHEND( struct $5THASH* );
uint64 HASHHASH( uint8* );
void* HASHLOOKUP( struct $5THASH*, uint8* );
void* HASHLOOKUPEX( struct $5THASH*, uint8*, uint64 );
struct $8HASHITEM* HASHADD( struct $5THASH*, uint8*, void*, uint64 );
static void _ZN11TSTRSETITEMaSERKS_( struct $11TSTRSETITEM*, struct $11TSTRSETITEM* );
void STRSETADD( struct $7TSTRSET*, FBSTRING*, int64 );
void STRSETCOPY( struct $7TSTRSET*, struct $7TSTRSET* );
void STRSETINIT( struct $7TSTRSET*, int64 );
void STRSETEND( struct $7TSTRSET* );
void ERRINIT( void );
void ERREND( void );
void ERRHIDEFURTHERERRORS( void );
int64 ERRGETCOUNT( void );
typedef int64 $12FB_ERRMSGOPT;
void ERRREPORTEX( int64, uint8*, int64, $12FB_ERRMSGOPT, uint8* );
void ERRREPORT( int64, int64, uint8* );
void ERRREPORTWARN( int64, uint8*, $12FB_ERRMSGOPT );
int64 FBSHOULDCONTINUE( void );
void FBSETOPTION( int64, int64 );
int64 FBGETOPTION( int64 );
void FBINCLUDEFILE( uint8*, int64 );
int64 FBIDENTIFYCPUFAMILY( FBSTRING* );
int64 FBIS64BIT( void );
int64 FBGETBITS( void );
int64 FBISCROSSCOMP( void );
void FBMAINBEGIN( void );
void FBMAINEND( void );
FBSTRING* FBGETLANGNAME( $7FB_LANG );
int64 STACKNEW( struct $6TSTACK*, int64, int64, int64 );
int64 STACKFREE( struct $6TSTACK* );
void IRINIT( void );
void IREND( void );
void ASTINIT( void );
void ASTEND( void );
void SYMBINIT( int64 );
void SYMBEND( void );
struct $8FBSYMBOL* SYMBADDDEFINE( uint8*, uint8*, int64, int64, tmp$26, $15FB_DEFINE_FLAGS );
int64 SYMBCHECKLABELS( struct $8FBSYMBOL* );
int64 HFILEEXISTS( uint8* );
void HCLEARNAME( uint8* );
FBSTRING* HSTRIPEXT( FBSTRING* );
FBSTRING* HSTRIPPATH( uint8* );
FBSTRING* HSTRIPFILENAME( uint8* );
void HREPLACESLASH( uint8*, int64 );
FBSTRING* PATHSTRIPDIV( FBSTRING* );
int64 PATHISABSOLUTE( uint8* );
int64 HCHECKFILEFORMAT( int64 );
FBSTRING* HCURDIR( void );
uint8* HESCAPE( uint8* );
void LEXINIT( int64 );
void LEXEND( void );
void LEXPUSHCTX( void );
void LEXPOPCTX( void );
void CPROGRAM( void );
void RTLINIT( void );
void RTLEND( void );
uint8* OBJINFOENCODE( int64 );
void PARSERINIT( void );
void PARSEREND( void );
void PARSERSETCTX( void );
static uint8* HFINDINCFILE( struct $5THASH*, uint8* );
static uint8* HADDINCFILE( struct $5THASH*, uint8* );
static void HUPDATELANGOPTIONS( void );
static void HUPDATETARGETOPTIONS( void );
static void HUPDATEBACKENDOPTIONS( void );
static FBSTRING* HGETTARGETID( int64, int64 );
static void FBPARSEPREDEFINES( void );
static void FBPARSEPREINCLUDES( void );
static void HAPPENDFBCTINF( uint8* );
static void HEMITOBJINFO( void );
static int64 IS_ROOTPATH( uint8** );
static int64 GET_ROOTPATH_LEN( uint8* );
static int64 SOLVE_PATH( uint8* );
typedef int64 $14IR_OPTIONVALUE;
typedef int64 (*tmp$38)( $14IR_OPTIONVALUE );
typedef int64 (*tmp$39)( int64, int64 );
typedef void (*tmp$40)( struct $8FBSYMBOL* );
typedef void (*tmp$41)( struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef uint8* (*tmp$42)( void );
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
typedef void (*tmp$43)( struct $6IRVREG*, struct $6IRVREG* );
typedef void (*tmp$44)( int64 );
typedef void (*tmp$45)( struct $8FBSYMBOL*, struct $8FBSYMBOL*, struct $8FBSYMBOL* );
typedef void (*tmp$46)( struct $8FBSYMBOL*, struct $6IRVREG*, int64, int64 );
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
struct $12FBHASHTBLIST {
	struct $8FBHASHTB* HEAD;
	struct $8FBHASHTB* TAIL;
};
__FB_STATIC_ASSERT( sizeof( struct $12FBHASHTBLIST ) == 16 );
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
struct $6FBMAIN {
	struct $8FBSYMBOL* PROC;
	struct $7ASTNODE* INITNODE;
};
__FB_STATIC_ASSERT( sizeof( struct $6FBMAIN ) == 16 );
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
typedef int64 $8FB_TOKEN;
typedef int64 $15FB_CMPSTMT_MASK;
struct $17FB_CMPSTMT_FORELM {
	struct $8FBSYMBOL* SYM;
	union $7FBVALUE VALUE;
	int64 DTYPE;
};
__FB_STATIC_ASSERT( sizeof( struct $17FB_CMPSTMT_FORELM ) == 24 );
struct $13FB_CMPSTMTSTK;
struct $14FB_CMPSTMT_FOR {
	struct $7ASTNODE* OUTERSCOPENODE;
	struct $17FB_CMPSTMT_FORELM CNT;
	struct $17FB_CMPSTMT_FORELM END;
	struct $17FB_CMPSTMT_FORELM STP;
	struct $17FB_CMPSTMT_FORELM ISPOS;
	struct $8FBSYMBOL* TESTLABEL;
	struct $8FBSYMBOL* INILABEL;
	struct $8FBSYMBOL* CMPLABEL;
	struct $8FBSYMBOL* ENDLABEL;
	struct $13FB_CMPSTMTSTK* LAST;
	int64 EXPLICIT_STEP;
};
__FB_STATIC_ASSERT( sizeof( struct $14FB_CMPSTMT_FOR ) == 152 );
struct $13FB_CMPSTMT_DO {
	int64 ATTOP;
	struct $8FBSYMBOL* INILABEL;
	struct $8FBSYMBOL* CMPLABEL;
	struct $8FBSYMBOL* ENDLABEL;
	struct $13FB_CMPSTMTSTK* LAST;
};
__FB_STATIC_ASSERT( sizeof( struct $13FB_CMPSTMT_DO ) == 40 );
struct $16FB_CMPSTMT_WHILE {
	struct $8FBSYMBOL* CMPLABEL;
	struct $8FBSYMBOL* ENDLABEL;
	struct $13FB_CMPSTMTSTK* LAST;
};
__FB_STATIC_ASSERT( sizeof( struct $16FB_CMPSTMT_WHILE ) == 24 );
struct $13FB_CMPSTMT_IF {
	int64 ISSINGLE;
	struct $8FBSYMBOL* NXTLABEL;
	struct $8FBSYMBOL* ENDLABEL;
	int64 ELSECNT;
};
__FB_STATIC_ASSERT( sizeof( struct $13FB_CMPSTMT_IF ) == 32 );
struct $15FB_CMPSTMT_PROC {
	$8FB_TOKEN TKN;
	int64 IS_NESTED;
	struct $8FBSYMBOL* ENDLABEL;
	struct $13FB_CMPSTMTSTK* LAST;
};
__FB_STATIC_ASSERT( sizeof( struct $15FB_CMPSTMT_PROC ) == 32 );
struct $19FB_CMPSTMT_SELCONST {
	int64 BASE;
	struct $8FBSYMBOL* DEFLABEL;
	uint64 MINVAL;
	uint64 MAXVAL;
};
__FB_STATIC_ASSERT( sizeof( struct $19FB_CMPSTMT_SELCONST ) == 32 );
struct $17FB_CMPSTMT_SELECT {
	int64 ISCONST;
	struct $8FBSYMBOL* SYM;
	int64 CASECNT;
	struct $19FB_CMPSTMT_SELCONST CONST_;
	struct $8FBSYMBOL* CMPLABEL;
	struct $8FBSYMBOL* ENDLABEL;
	struct $13FB_CMPSTMTSTK* LAST;
	struct $7ASTNODE* OUTERSCOPENODE;
};
__FB_STATIC_ASSERT( sizeof( struct $17FB_CMPSTMT_SELECT ) == 88 );
struct $15FB_CMPSTMT_WITH {
	struct $8FBSYMBOL* SYM;
	int64 IS_PTR;
	struct $13FB_CMPSTMTSTK* LAST;
};
__FB_STATIC_ASSERT( sizeof( struct $15FB_CMPSTMT_WITH ) == 24 );
struct $20FB_CMPSTMT_NAMESPACE {
	struct $8FBSYMBOL* SYM;
	int64 LEVELS;
};
__FB_STATIC_ASSERT( sizeof( struct $20FB_CMPSTMT_NAMESPACE ) == 16 );
typedef int64 $11FB_MANGLING;
struct $17FB_CMPSTMT_EXTERN {
	$11FB_MANGLING LASTMANG;
};
__FB_STATIC_ASSERT( sizeof( struct $17FB_CMPSTMT_EXTERN ) == 8 );
struct $16FB_CMPSTMT_SCOPE {
	int64 LASTIS_SCOPE;
};
__FB_STATIC_ASSERT( sizeof( struct $16FB_CMPSTMT_SCOPE ) == 8 );
struct $13FB_CMPSTMTSTK {
	int64 ID;
	$15FB_CMPSTMT_MASK ALLOWMASK;
	struct $7ASTNODE* SCOPENODE;
	union {
		struct $14FB_CMPSTMT_FOR FOR;
		struct $13FB_CMPSTMT_DO DO;
		struct $16FB_CMPSTMT_WHILE WHILE;
		struct $13FB_CMPSTMT_IF IF;
		struct $15FB_CMPSTMT_PROC PROC;
		struct $17FB_CMPSTMT_SELECT SELECT;
		struct $15FB_CMPSTMT_WITH WITH;
		struct $20FB_CMPSTMT_NAMESPACE NSPC;
		struct $17FB_CMPSTMT_EXTERN EXT;
		struct $16FB_CMPSTMT_SCOPE SCP;
	};
};
__FB_STATIC_ASSERT( sizeof( struct $13FB_CMPSTMTSTK ) == 176 );
struct $17FBPARSER_STMT_LET {
	struct $5TLIST LIST;
};
__FB_STATIC_ASSERT( sizeof( struct $17FBPARSER_STMT_LET ) == 64 );
struct $13FBPARSER_STMT {
	struct $6TSTACK STK;
	$8FB_TOKEN ID;
	int64 CNT;
	struct $13FB_CMPSTMTSTK* FOR;
	struct $13FB_CMPSTMTSTK* DO;
	struct $13FB_CMPSTMTSTK* WHILE;
	struct $13FB_CMPSTMTSTK* SELECT;
	struct $13FB_CMPSTMTSTK* PROC;
	struct $13FB_CMPSTMTSTK* WITH;
	struct $17FBPARSER_STMT_LET LET;
};
__FB_STATIC_ASSERT( sizeof( struct $13FBPARSER_STMT ) == 176 );
typedef int64 $12FB_PARSEROPT;
struct $9PARSERCTX {
	struct $13FBPARSER_STMT STMT;
	int64 NSPCREC;
	uint64 SCOPE;
	$11FB_MANGLING MANGLING;
	struct $8FBSYMBOL* CURRPROC;
	struct $8FBSYMBOL* CURRBLOCK;
	struct $5TLIST OVLARGLIST;
	int64 PRNTCNT;
	$12FB_PARSEROPT OPTIONS;
	int64 CTX_DTYPE;
	struct $8FBSYMBOL* CTXSYM;
	int64 HAVE_EQ_OUTSIDE_PARENS;
};
__FB_STATIC_ASSERT( sizeof( struct $9PARSERCTX ) == 320 );
extern struct $9PARSERCTX PARSER$;
struct $7FBARRAYI6FBFILEE {
	struct $6FBFILE* DATA;
	struct $6FBFILE* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYI6FBFILEE ) == 232 );
static struct $7FBARRAYI6FBFILEE INFILETB$ = { (struct $6FBFILE*)0ull, (struct $6FBFILE*)0ull, 0ll, 296ll, 0ll, {  } };
struct $12FB_LANG_INFO {
	uint8* NAME;
	$11FB_LANG_OPT OPTIONS;
};
__FB_STATIC_ASSERT( sizeof( struct $12FB_LANG_INFO ) == 16 );
static struct $12FB_LANG_INFO LANGTB$[4] = { { (uint8*)"fb", 536873471ll }, { (uint8*)"deprecated", 738066591ll }, { (uint8*)"fblite", 738132125ll }, { (uint8*)"qb", 738131968ll } };
static struct $8FBTARGET TARGETINFO$[9] = { { (uint8*)"win32", 5ll, 1ll, 1ll, 20ll }, { (uint8*)"cygwin", 5ll, 1ll, 1ll, 21ll }, { (uint8*)"linux", 11ll, 3ll, 2ll, 9ll }, { (uint8*)"dos", 2ll, 3ll, 2ll, 8ll }, { (uint8*)"xbox", 11ll, 1ll, 1ll, 16ll }, { (uint8*)"freebsd", 11ll, 3ll, 2ll, 25ll }, { (uint8*)"openbsd", 11ll, 3ll, 2ll, 25ll }, { (uint8*)"darwin", 11ll, 3ll, 2ll, 25ll }, { (uint8*)"netbsd", 11ll, 3ll, 2ll, 25ll } };
struct $15FBCPUFAMILYINFO {
	uint8* ID;
	int64 DEFAULTCPUTYPE;
};
__FB_STATIC_ASSERT( sizeof( struct $15FBCPUFAMILYINFO ) == 16 );
static struct $15FBCPUFAMILYINFO CPUFAMILYINFO$[4] = { { (uint8*)"x86", 1ll }, { (uint8*)"x86_64", 13ll }, { (uint8*)"arm", 15ll }, { (uint8*)"aarch64", 16ll } };
struct $13FBCPUTYPEINFO {
	uint8* GCCARCH;
	uint8* FBCARCH;
	int64 FAMILY;
	int64 BITS;
};
__FB_STATIC_ASSERT( sizeof( struct $13FBCPUTYPEINFO ) == 32 );
static struct $13FBCPUTYPEINFO CPUTYPEINFO$[17] = { { (uint8*)"i386", (uint8*)"386", 0ll, 32ll }, { (uint8*)"i486", (uint8*)"486", 0ll, 32ll }, { (uint8*)"i586", (uint8*)"586", 0ll, 32ll }, { (uint8*)"i686", (uint8*)"686", 0ll, 32ll }, { (uint8*)0ull, (uint8*)"athlon", 0ll, 32ll }, { (uint8*)0ull, (uint8*)"athlon-xp", 0ll, 32ll }, { (uint8*)0ull, (uint8*)"athlon-fx", 0ll, 32ll }, { (uint8*)0ull, (uint8*)"k8-sse3", 0ll, 32ll }, { (uint8*)0ull, (uint8*)"pentium-mmx", 0ll, 32ll }, { (uint8*)0ull, (uint8*)"pentium2", 0ll, 32ll }, { (uint8*)0ull, (uint8*)"pentium3", 0ll, 32ll }, { (uint8*)0ull, (uint8*)"pentium4", 0ll, 32ll }, { (uint8*)"prescott", (uint8*)"pentium4-sse3", 0ll, 32ll }, { (uint8*)0ull, (uint8*)"x86-64", 1ll, 64ll }, { (uint8*)0ull, (uint8*)"armv6", 2ll, 32ll }, { (uint8*)0ull, (uint8*)"armv7-a", 2ll, 32ll }, { (uint8*)0ull, (uint8*)"aarch64", 3ll, 64ll } };
struct $5FBENV ENV$ __attribute__((common));

$11FB_LANG_OPT FBGETLANGOPTIONS( $7FB_LANG LANG$1 )
{
	$11FB_LANG_OPT fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$16:;
	fb$result$1 = *($11FB_LANG_OPT*)(((uint8*)LANGTB$ + (LANG$1 << 4ll)) + 8ll);
	label$17:;
	return fb$result$1;
}

FBSTRING* FBGETLANGNAME( $7FB_LANG LANG$1 )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$18:;
	fb_StrAssign( (void*)&fb$result$1, -1ll, *(void**)((uint8*)LANGTB$ + (LANG$1 << 4ll)), 0ll, 0 );
	label$19:;
	FBSTRING* vr$4 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$4;
}

void FBINIT( int64 ISMAIN$1, int64 RESTARTS$1 )
{
	int64 TMP$131$1;
	label$20:;
	STRSETINIT( (struct $7TSTRSET*)((uint8*)&ENV$ + 1280ll), 5ll );
	STRSETINIT( (struct $7TSTRSET*)((uint8*)&ENV$ + 1368ll), 5ll );
	*(int64*)((uint8*)&ENV$ + 1264ll) = RESTARTS$1;
	*(int64*)((uint8*)&ENV$ + 1272ll) = 0ll;
	int32 vr$2 = fb_ArrayRedimEx( (struct $7FBARRAYIvE*)&INFILETB$, 296ull, -1, 0, 1ull, 0ll, 15ll );
	if( (int64)vr$2 == 0ll ) goto label$22;
	void* vr$5 = fb_ErrorThrowAt( 306, (uint8*)"FreeBASIC-1.01.0-source/src/compiler/fb.bas", (void*)0ull, (void*)0ull );
	goto *vr$5;
	label$22:;
	*(int64*)((uint8*)&ENV$ + 1128ll) = 0ll;
	*(struct $8FBSYMBOL**)((uint8*)&ENV$ + 1136ll) = (struct $8FBSYMBOL*)0ull;
	*(int64*)((uint8*)&ENV$ + 1224ll) = (int64)-(*(int64*)((uint8*)&ENV$ + 272ll) == 0ll);
	if( *(int64*)((uint8*)&ENV$ + 272ll) == 3ll ) goto label$24;
	{
		*($11FB_DATATYPE*)((uint8*)&ENV$ + 1160ll) = 7ll;
		*($11FB_DATATYPE*)((uint8*)&ENV$ + 1168ll) = 7ll;
		*($11FB_DATATYPE*)((uint8*)&ENV$ + 1176ll) = 8ll;
		*($11FB_DATATYPE*)((uint8*)&ENV$ + 1184ll) = 7ll;
		*($11FB_DATATYPE*)((uint8*)&ENV$ + 1192ll) = 8ll;
		*($11FB_DATATYPE*)((uint8*)&ENV$ + 1200ll) = 15ll;
	}
	goto label$23;
	label$24:;
	{
		*($11FB_DATATYPE*)((uint8*)&ENV$ + 1160ll) = 4ll;
		*($11FB_DATATYPE*)((uint8*)&ENV$ + 1168ll) = 4ll;
		*($11FB_DATATYPE*)((uint8*)&ENV$ + 1176ll) = 5ll;
		*($11FB_DATATYPE*)((uint8*)&ENV$ + 1184ll) = 10ll;
		*($11FB_DATATYPE*)((uint8*)&ENV$ + 1192ll) = 11ll;
		*($11FB_DATATYPE*)((uint8*)&ENV$ + 1200ll) = 14ll;
	}
	label$23:;
	*(int64*)((uint8*)&ENV$ + 1216ll) = 2ll;
	*(int64*)((uint8*)&ENV$ + 1232ll) = -1ll;
	*(int64*)((uint8*)&ENV$ + 1240ll) = 0ll;
	*(int64*)((uint8*)&ENV$ + 1248ll) = 0ll;
	*(int64*)((uint8*)&ENV$ + 1208ll) = 0ll;
	*(int64*)((uint8*)&ENV$ + 1256ll) = (int64)-(*(int64*)((uint8*)&ENV$ + 272ll) == 3ll);
	*(int64*)((uint8*)&ENV$ + 1456ll) = 0ll;
	*(int64*)((uint8*)&ENV$ + 464ll) = 0ll;
	{
		$13FB_COMPTARGET TMP$130$2;
		TMP$130$2 = *($13FB_COMPTARGET*)((uint8*)&ENV$ + 216ll);
		if( TMP$130$2 == 3ll ) goto label$27;
		label$28:;
		if( TMP$130$2 != 4ll ) goto label$26;
		label$27:;
		{
			*(int64*)((uint8*)&ENV$ + 464ll) = -1ll;
		}
		goto label$25;
		label$26:;
		if( TMP$130$2 == 1ll ) goto label$30;
		label$31:;
		if( TMP$130$2 != 0ll ) goto label$29;
		label$30:;
		{
			int64 vr$13 = FBIS64BIT(  );
			*(int64*)((uint8*)&ENV$ + 464ll) = ~vr$13;
		}
		label$29:;
		label$25:;
	}
	*(int64*)((uint8*)&ENV$ + 472ll) = 0ll;
	PARSERSETCTX(  );
	SYMBINIT( ISMAIN$1 );
	ERRINIT(  );
	ASTINIT(  );
	IRINIT(  );
	if( (*(int64*)((uint8*)&ENV$ + 424ll) & 480ll) == 0ll ) goto label$32;
	TMP$131$1 = 22ll;
	goto label$33;
	label$32:;
	TMP$131$1 = *(int64*)((uint8*)&ENV$ + 424ll) & 31ll;
	label$33:;
	*(int64*)((uint8*)&ENV$ + 456ll) = (int64)-(*(int64*)(((uint8*)SYMB_DTYPETB$ + (TMP$131$1 * 56ll)) + 8ll) == 4ll);
	HASHINIT( (struct $5THASH*)((uint8*)&ENV$ + 1080ll), 256ll, 0ll );
	HASHINIT( (struct $5THASH*)((uint8*)&ENV$ + 1104ll), 256ll, 0ll );
	STACKNEW( (struct $6TSTACK*)&PARSER$, 128ll, 176ll, 0ll );
	LEXINIT( 0ll );
	PARSERINIT(  );
	RTLINIT(  );
	label$21:;
}

void FBEND( void )
{
	label$34:;
	RTLEND(  );
	PARSEREND(  );
	LEXEND(  );
	STACKFREE( (struct $6TSTACK*)&PARSER$ );
	HASHEND( (struct $5THASH*)((uint8*)&ENV$ + 1104ll) );
	HASHEND( (struct $5THASH*)((uint8*)&ENV$ + 1080ll) );
	IREND(  );
	ASTEND(  );
	ERREND(  );
	SYMBEND(  );
	fb_ArrayErase( (struct $7FBARRAYIvE*)&INFILETB$, 0 );
	STRSETEND( (struct $7TSTRSET*)((uint8*)&ENV$ + 1280ll) );
	STRSETEND( (struct $7TSTRSET*)((uint8*)&ENV$ + 1368ll) );
	label$35:;
}

void FBGLOBALINIT( void )
{
	label$44:;
	STRLISTINIT( (struct $5TLIST*)&ENV$, 256ll );
	STRLISTINIT( (struct $5TLIST*)((uint8*)&ENV$ + 64ll), 256ll );
	STRLISTINIT( (struct $5TLIST*)((uint8*)&ENV$ + 128ll), 256ll );
	*($10FB_OUTTYPE*)((uint8*)&ENV$ + 192ll) = 0ll;
	*(int64*)((uint8*)&ENV$ + 200ll) = 0ll;
	*($10FB_BACKEND*)((uint8*)&ENV$ + 208ll) = 1ll;
	*($13FB_COMPTARGET*)((uint8*)&ENV$ + 216ll) = 2ll;
	*($10FB_CPUTYPE*)((uint8*)&ENV$ + 224ll) = 13ll;
	*($10FB_FPUTYPE*)((uint8*)&ENV$ + 232ll) = 0ll;
	*($9FB_FPMODE*)((uint8*)&ENV$ + 240ll) = 0ll;
	*($17FB_VECTORIZELEVEL*)((uint8*)&ENV$ + 248ll) = 0ll;
	*(int64*)((uint8*)&ENV$ + 256ll) = 0ll;
	*($7FB_LANG*)((uint8*)&ENV$ + 272ll) = 0ll;
	*(int64*)((uint8*)&ENV$ + 280ll) = 0ll;
	*(int64*)((uint8*)&ENV$ + 288ll) = 0ll;
	*(int64*)((uint8*)&ENV$ + 296ll) = 0ll;
	*(int64*)((uint8*)&ENV$ + 312ll) = 0ll;
	*(int64*)((uint8*)&ENV$ + 304ll) = 0ll;
	*(int64*)((uint8*)&ENV$ + 320ll) = 0ll;
	*(int64*)((uint8*)&ENV$ + 328ll) = 0ll;
	*(int64*)((uint8*)&ENV$ + 336ll) = -1ll;
	*(int64*)((uint8*)&ENV$ + 344ll) = 10ll;
	*($10FB_PDCHECK*)((uint8*)&ENV$ + 352ll) = 0ll;
	*(int64*)((uint8*)&ENV$ + 360ll) = 0ll;
	*(int64*)((uint8*)&ENV$ + 368ll) = 0ll;
	*(int64*)((uint8*)&ENV$ + 384ll) = 0ll;
	*(int64*)((uint8*)&ENV$ + 392ll) = 0ll;
	*(int64*)((uint8*)&ENV$ + 400ll) = 0ll;
	*(int64*)((uint8*)&ENV$ + 376ll) = 0ll;
	*(int64*)((uint8*)&ENV$ + 408ll) = 1048576ll;
	HUPDATELANGOPTIONS(  );
	HUPDATETARGETOPTIONS(  );
	HUPDATEBACKENDOPTIONS(  );
	label$45:;
}

void FBADDINCLUDEPATH( FBSTRING* PATH$1 )
{
	label$46:;
	STRLISTAPPEND( (struct $5TLIST*)((uint8*)&ENV$ + 128ll), PATH$1 );
	label$47:;
}

void FBADDPREDEFINE( FBSTRING* DEF$1 )
{
	label$48:;
	STRLISTAPPEND( (struct $5TLIST*)&ENV$, DEF$1 );
	label$49:;
}

void FBADDPREINCLUDE( FBSTRING* FILE$1 )
{
	label$50:;
	STRLISTAPPEND( (struct $5TLIST*)((uint8*)&ENV$ + 64ll), FILE$1 );
	label$51:;
}

void FBSETOPTION( int64 OPT$1, int64 VALUE$1 )
{
	label$52:;
	{
		uint64 TMP$132$2;
		TMP$132$2 = (uint64)OPT$1;
		goto label$55;
		label$56:;
		{
			*($10FB_OUTTYPE*)((uint8*)&ENV$ + 192ll) = VALUE$1;
		}
		goto label$54;
		label$57:;
		{
			*(int64*)((uint8*)&ENV$ + 200ll) = VALUE$1;
		}
		goto label$54;
		label$58:;
		{
			*($10FB_BACKEND*)((uint8*)&ENV$ + 208ll) = VALUE$1;
			HUPDATEBACKENDOPTIONS(  );
		}
		goto label$54;
		label$59:;
		{
			*($13FB_COMPTARGET*)((uint8*)&ENV$ + 216ll) = VALUE$1;
			HUPDATETARGETOPTIONS(  );
		}
		goto label$54;
		label$60:;
		{
			*($10FB_CPUTYPE*)((uint8*)&ENV$ + 224ll) = VALUE$1;
		}
		goto label$54;
		label$61:;
		{
			*($10FB_FPUTYPE*)((uint8*)&ENV$ + 232ll) = VALUE$1;
		}
		goto label$54;
		label$62:;
		{
			*($9FB_FPMODE*)((uint8*)&ENV$ + 240ll) = VALUE$1;
		}
		goto label$54;
		label$63:;
		{
			*($17FB_VECTORIZELEVEL*)((uint8*)&ENV$ + 248ll) = VALUE$1;
		}
		goto label$54;
		label$64:;
		{
			*(int64*)((uint8*)&ENV$ + 256ll) = VALUE$1;
		}
		goto label$54;
		label$65:;
		{
			*($12FB_ASMSYNTAX*)((uint8*)&ENV$ + 264ll) = VALUE$1;
		}
		goto label$54;
		label$66:;
		{
			*($7FB_LANG*)((uint8*)&ENV$ + 272ll) = VALUE$1;
			HUPDATELANGOPTIONS(  );
		}
		goto label$54;
		label$67:;
		{
			*(int64*)((uint8*)&ENV$ + 280ll) = VALUE$1;
		}
		goto label$54;
		label$68:;
		{
			*(int64*)((uint8*)&ENV$ + 288ll) = VALUE$1;
		}
		goto label$54;
		label$69:;
		{
			*(int64*)((uint8*)&ENV$ + 296ll) = VALUE$1;
		}
		goto label$54;
		label$70:;
		{
			*(int64*)((uint8*)&ENV$ + 304ll) = VALUE$1;
		}
		goto label$54;
		label$71:;
		{
			*(int64*)((uint8*)&ENV$ + 312ll) = VALUE$1;
		}
		goto label$54;
		label$72:;
		{
			*(int64*)((uint8*)&ENV$ + 320ll) = VALUE$1;
		}
		goto label$54;
		label$73:;
		{
			*(int64*)((uint8*)&ENV$ + 328ll) = VALUE$1;
		}
		goto label$54;
		label$74:;
		{
			*(int64*)((uint8*)&ENV$ + 336ll) = VALUE$1;
		}
		goto label$54;
		label$75:;
		{
			*(int64*)((uint8*)&ENV$ + 344ll) = VALUE$1;
		}
		goto label$54;
		label$76:;
		{
			*($10FB_PDCHECK*)((uint8*)&ENV$ + 352ll) = VALUE$1;
		}
		goto label$54;
		label$77:;
		{
			*(int64*)((uint8*)&ENV$ + 360ll) = VALUE$1;
		}
		goto label$54;
		label$78:;
		{
			*(int64*)((uint8*)&ENV$ + 368ll) = VALUE$1;
		}
		goto label$54;
		label$79:;
		{
			*(int64*)((uint8*)&ENV$ + 376ll) = VALUE$1;
		}
		goto label$54;
		label$80:;
		{
			*(int64*)((uint8*)&ENV$ + 384ll) = VALUE$1;
		}
		goto label$54;
		label$81:;
		{
			*(int64*)((uint8*)&ENV$ + 392ll) = VALUE$1;
		}
		goto label$54;
		label$82:;
		{
			*(int64*)((uint8*)&ENV$ + 400ll) = VALUE$1;
		}
		goto label$54;
		label$83:;
		{
			*(int64*)((uint8*)&ENV$ + 408ll) = VALUE$1;
			if( *(int64*)((uint8*)&ENV$ + 408ll) >= 32768ll ) goto label$85;
			{
				*(int64*)((uint8*)&ENV$ + 408ll) = 32768ll;
			}
			label$85:;
			label$84:;
		}
		goto label$54;
		label$55:;
		static const void* tmp$133[28ll] = {
			&&label$56,
			&&label$57,
			&&label$58,
			&&label$59,
			&&label$60,
			&&label$61,
			&&label$62,
			&&label$63,
			&&label$64,
			&&label$65,
			&&label$66,
			&&label$67,
			&&label$68,
			&&label$69,
			&&label$70,
			&&label$71,
			&&label$72,
			&&label$73,
			&&label$74,
			&&label$75,
			&&label$76,
			&&label$77,
			&&label$78,
			&&label$79,
			&&label$80,
			&&label$81,
			&&label$82,
			&&label$83,
		};
		if( TMP$132$2 > 27ll ) goto label$54;
		goto *tmp$133[TMP$132$2 - 0ll];
		label$54:;
	}
	label$53:;
}

int64 FBGETOPTION( int64 OPT$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$86:;
	{
		uint64 TMP$134$2;
		TMP$134$2 = (uint64)OPT$1;
		goto label$89;
		label$90:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 192ll);
		}
		goto label$88;
		label$91:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 200ll);
		}
		goto label$88;
		label$92:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 208ll);
		}
		goto label$88;
		label$93:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 216ll);
		}
		goto label$88;
		label$94:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 224ll);
		}
		goto label$88;
		label$95:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 232ll);
		}
		goto label$88;
		label$96:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 240ll);
		}
		goto label$88;
		label$97:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 248ll);
		}
		goto label$88;
		label$98:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 256ll);
		}
		goto label$88;
		label$99:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 264ll);
		}
		goto label$88;
		label$100:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 272ll);
		}
		goto label$88;
		label$101:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 280ll);
		}
		goto label$88;
		label$102:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 288ll);
		}
		goto label$88;
		label$103:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 296ll);
		}
		goto label$88;
		label$104:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 304ll);
		}
		goto label$88;
		label$105:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 312ll);
		}
		goto label$88;
		label$106:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 320ll);
		}
		goto label$88;
		label$107:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 328ll);
		}
		goto label$88;
		label$108:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 336ll);
		}
		goto label$88;
		label$109:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 344ll);
		}
		goto label$88;
		label$110:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 352ll);
		}
		goto label$88;
		label$111:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 360ll);
		}
		goto label$88;
		label$112:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 368ll);
		}
		goto label$88;
		label$113:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 376ll);
		}
		goto label$88;
		label$114:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 384ll);
		}
		goto label$88;
		label$115:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 392ll);
		}
		goto label$88;
		label$116:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 400ll);
		}
		goto label$88;
		label$117:;
		{
			fb$result$1 = *(int64*)((uint8*)&ENV$ + 408ll);
		}
		goto label$88;
		label$118:;
		{
			fb$result$1 = 0ll;
		}
		goto label$88;
		label$89:;
		static const void* tmp$135[28ll] = {
			&&label$90,
			&&label$91,
			&&label$92,
			&&label$93,
			&&label$94,
			&&label$95,
			&&label$96,
			&&label$97,
			&&label$98,
			&&label$99,
			&&label$100,
			&&label$101,
			&&label$102,
			&&label$103,
			&&label$104,
			&&label$105,
			&&label$106,
			&&label$107,
			&&label$108,
			&&label$109,
			&&label$110,
			&&label$111,
			&&label$112,
			&&label$113,
			&&label$114,
			&&label$115,
			&&label$116,
			&&label$117,
		};
		if( TMP$134$2 > 27ll ) goto label$118;
		goto *tmp$135[TMP$134$2 - 0ll];
		label$88:;
	}
	label$87:;
	return fb$result$1;
}

void FBCHANGEOPTION( int64 OPT$1, int64 VALUE$1 )
{
	label$119:;
	{
		uint64 TMP$136$2;
		TMP$136$2 = (uint64)OPT$1;
		goto label$122;
		label$123:;
		{
			FBSETOPTION( OPT$1, VALUE$1 );
		}
		goto label$121;
		label$124:;
		{
			int64 vr$0 = FBGETOPTION( OPT$1 );
			if( VALUE$1 == vr$0 ) goto label$126;
			{
				if( *(uint64*)((uint8*)&PARSER$ + 184ll) == 0ull ) goto label$128;
				{
					if( (int64)-(*(struct $8FBSYMBOL**)((uint8*)&PARSER$ + 200ll) == *(struct $8FBSYMBOL**)((uint8*)&ENV$ + 1136ll)) != 0ll ) goto label$130;
					{
						ERRREPORT( 60ll, 0ll, (uint8*)0ull );
					}
					goto label$129;
					label$130:;
					{
						ERRREPORT( 95ll, 0ll, (uint8*)0ull );
					}
					label$129:;
				}
				goto label$127;
				label$128:;
				{
					if( *(int64*)((uint8*)&ENV$ + 280ll) == 0ll ) goto label$132;
					{
						ERRREPORTWARN( 30ll, (uint8*)0ull, 1ll );
					}
					goto label$131;
					label$132:;
					{
						if( *(int64*)((uint8*)&ENV$ + 1264ll) != 0ll ) goto label$134;
						{
							FBSETOPTION( OPT$1, VALUE$1 );
							*(int64*)((uint8*)&ENV$ + 1272ll) = -1ll;
							ERRHIDEFURTHERERRORS(  );
						}
						goto label$133;
						label$134:;
						{
							ERRREPORTWARN( 31ll, (uint8*)0ull, 1ll );
						}
						label$133:;
					}
					label$131:;
				}
				label$127:;
			}
			label$126:;
			label$125:;
		}
		goto label$121;
		label$135:;
		{
			ERRREPORT( 21ll, 0ll, (uint8*)0ull );
		}
		goto label$121;
		label$122:;
		static const void* tmp$137[14ll] = {
			&&label$124,
			&&label$135,
			&&label$135,
			&&label$135,
			&&label$135,
			&&label$135,
			&&label$135,
			&&label$135,
			&&label$135,
			&&label$135,
			&&label$135,
			&&label$135,
			&&label$135,
			&&label$123,
		};
		if( TMP$136$2 < 10ll ) goto label$135;
		if( TMP$136$2 > 23ll ) goto label$135;
		goto *tmp$137[TMP$136$2 - 10ll];
		label$121:;
	}
	label$120:;
}

int64 FBISCROSSCOMP( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$136:;
	fb$result$1 = (int64)-(*(int64*)((uint8*)&ENV$ + 216ll) != 2ll);
	label$137:;
	return fb$result$1;
}

FBSTRING* FBGETTARGETID( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$149:;
	FBSTRING* vr$1 = HGETTARGETID( *(int64*)((uint8*)&ENV$ + 216ll), *(int64*)((uint8*)&ENV$ + 224ll) );
	FBSTRING* vr$3 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$1, -1ll, 0 );
	label$150:;
	FBSTRING* vr$5 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$5;
}

FBSTRING* FBGETHOSTID( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$151:;
	FBSTRING* vr$1 = HGETTARGETID( 2ll, 13ll );
	FBSTRING* vr$3 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$1, -1ll, 0 );
	label$152:;
	FBSTRING* vr$5 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$5;
}

int64 FBIDENTIFYOS( FBSTRING* OSID$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$153:;
	{
		int64 I$2;
		I$2 = 0ll;
		label$158:;
		{
			int32 vr$2 = fb_StrCompare( (void*)OSID$1, -1ll, *(void**)((uint8*)TARGETINFO$ + (I$2 * 40ll)), 0ll );
			if( (int64)vr$2 != 0ll ) goto label$160;
			{
				fb$result$1 = I$2;
				goto label$154;
			}
			label$160:;
			label$159:;
		}
		label$156:;
		I$2 = I$2 + 1ll;
		label$155:;
		if( I$2 <= 8ll ) goto label$158;
		label$157:;
	}
	fb$result$1 = -1ll;
	label$154:;
	return fb$result$1;
}

int64 FBIDENTIFYCPUFAMILY( FBSTRING* CPUFAMILYID$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$161:;
	{
		int64 I$2;
		I$2 = 0ll;
		label$166:;
		{
			int32 vr$2 = fb_StrCompare( (void*)CPUFAMILYID$1, -1ll, *(void**)((uint8*)CPUFAMILYINFO$ + (I$2 << 4ll)), 0ll );
			if( (int64)vr$2 != 0ll ) goto label$168;
			{
				fb$result$1 = I$2;
				goto label$162;
			}
			label$168:;
			label$167:;
		}
		label$164:;
		I$2 = I$2 + 1ll;
		label$163:;
		if( I$2 <= 3ll ) goto label$166;
		label$165:;
	}
	fb$result$1 = -1ll;
	label$162:;
	return fb$result$1;
}

int64 FBCPUTYPEFROMCPUFAMILYID( FBSTRING* CPUFAMILYID$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$169:;
	int64 CPUFAMILY$1;
	int64 vr$1 = FBIDENTIFYCPUFAMILY( CPUFAMILYID$1 );
	CPUFAMILY$1 = vr$1;
	if( CPUFAMILY$1 < 0ll ) goto label$172;
	{
		fb$result$1 = *(int64*)(((uint8*)CPUFAMILYINFO$ + (CPUFAMILY$1 << 4ll)) + 8ll);
		goto label$170;
	}
	label$172:;
	label$171:;
	fb$result$1 = -1ll;
	label$170:;
	return fb$result$1;
}

uint8* FBGETGCCARCH( void )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$173:;
	uint8* GCCARCH$1;
	GCCARCH$1 = *(uint8**)((uint8*)CPUTYPEINFO$ + (*(int64*)((uint8*)&ENV$ + 224ll) << 5ll));
	if( GCCARCH$1 != (uint8*)0ull ) goto label$176;
	{
		GCCARCH$1 = *(uint8**)(((uint8*)CPUTYPEINFO$ + (*(int64*)((uint8*)&ENV$ + 224ll) << 5ll)) + 8ll);
	}
	label$176:;
	label$175:;
	fb$result$1 = GCCARCH$1;
	label$174:;
	return fb$result$1;
}

uint8* FBGETFBCARCH( void )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$177:;
	fb$result$1 = *(uint8**)(((uint8*)CPUTYPEINFO$ + (*(int64*)((uint8*)&ENV$ + 224ll) << 5ll)) + 8ll);
	label$178:;
	return fb$result$1;
}

int64 FBIS64BIT( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$179:;
	int64 vr$1 = FBGETBITS(  );
	fb$result$1 = (int64)-(vr$1 == 64ll);
	label$180:;
	return fb$result$1;
}

int64 FBGETBITS( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$181:;
	fb$result$1 = *(int64*)(((uint8*)CPUTYPEINFO$ + (*(int64*)((uint8*)&ENV$ + 224ll) << 5ll)) + 24ll);
	label$182:;
	return fb$result$1;
}

int64 FBGETHOSTBITS( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$183:;
	fb$result$1 = *(int64*)((uint8*)CPUTYPEINFO$ + 440ll);
	label$184:;
	return fb$result$1;
}

int64 FBGETCPUFAMILY( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$185:;
	fb$result$1 = *(int64*)(((uint8*)CPUTYPEINFO$ + (*(int64*)((uint8*)&ENV$ + 224ll) << 5ll)) + 16ll);
	label$186:;
	return fb$result$1;
}

int64 FBIDENTIFYFBCARCH( FBSTRING* FBCARCH$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$187:;
	{
		FBSTRING TMP$142$2;
		FBSTRING* vr$2 = fb_StrInit( (void*)&TMP$142$2, -1ll, (void*)FBCARCH$1, -1ll, 0 );
		int32 vr$4 = fb_StrCompare( (void*)&TMP$142$2, -1ll, (void*)"native", 7ll );
		if( (int64)vr$4 != 0ll ) goto label$190;
		label$191:;
		{
			fb$result$1 = 13ll;
			fb_StrDelete( &TMP$142$2 );
			goto label$188;
		}
		goto label$189;
		label$190:;
		int32 vr$9 = fb_StrCompare( (void*)&TMP$142$2, -1ll, (void*)"32", 3ll );
		if( (int64)vr$9 != 0ll ) goto label$192;
		label$193:;
		{
			fb$result$1 = 1ll;
			fb_StrDelete( &TMP$142$2 );
			goto label$188;
		}
		goto label$189;
		label$192:;
		int32 vr$14 = fb_StrCompare( (void*)&TMP$142$2, -1ll, (void*)"64", 3ll );
		if( (int64)vr$14 != 0ll ) goto label$194;
		label$195:;
		{
			fb$result$1 = 13ll;
			fb_StrDelete( &TMP$142$2 );
			goto label$188;
		}
		label$194:;
		label$189:;
		fb_StrDelete( &TMP$142$2 );
	}
	{
		int64 I$2;
		I$2 = 0ll;
		label$199:;
		{
			int32 vr$20 = fb_StrCompare( *(void**)(((uint8*)CPUTYPEINFO$ + (I$2 << 5ll)) + 8ll), 0ll, (void*)FBCARCH$1, -1ll );
			if( (int64)vr$20 != 0ll ) goto label$201;
			{
				fb$result$1 = I$2;
				goto label$188;
			}
			label$201:;
			label$200:;
		}
		label$197:;
		I$2 = I$2 + 1ll;
		label$196:;
		if( I$2 <= 16ll ) goto label$199;
		label$198:;
	}
	{
		FBSTRING TMP$146$2;
		FBSTRING* vr$26 = fb_StrInit( (void*)&TMP$146$2, -1ll, (void*)FBCARCH$1, -1ll, 0 );
		int32 vr$28 = fb_StrCompare( (void*)&TMP$146$2, -1ll, (void*)"x86_64", 7ll );
		if( (int64)vr$28 == 0ll ) goto label$204;
		label$205:;
		int32 vr$32 = fb_StrCompare( (void*)&TMP$146$2, -1ll, (void*)"amd64", 6ll );
		if( (int64)vr$32 != 0ll ) goto label$203;
		label$204:;
		{
			fb$result$1 = 13ll;
		}
		goto label$202;
		label$203:;
		{
			fb$result$1 = -1ll;
		}
		label$206:;
		label$202:;
		fb_StrDelete( &TMP$146$2 );
	}
	label$188:;
	return fb$result$1;
}

FBSTRING* FBGETENTRYPOINT( void )
{
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$207:;
	if( *(int64*)((uint8*)&ENV$ + 216ll) != 4ll ) goto label$210;
	{
		fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"XBoxStartup", 12ll, 0 );
	}
	goto label$209;
	label$210:;
	{
		fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"main", 5ll, 0 );
	}
	label$209:;
	label$208:;
	FBSTRING* vr$5 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$5;
}

FBSTRING* FBGETMODULEENTRY( void )
{
	FBSTRING TMP$150$1;
	FBSTRING TMP$151$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$211:;
	static FBSTRING SNAME$1;
	__builtin_memset( &TMP$151$1, 0, 24ll );
	__builtin_memset( &TMP$150$1, 0, 24ll );
	FBSTRING* vr$5 = fb_StrAssign( (void*)&TMP$150$1, -1ll, (void*)((uint8*)&ENV$ + 784ll), 261ll, 0 );
	FBSTRING* vr$7 = HSTRIPEXT( &TMP$150$1 );
	FBSTRING* vr$9 = fb_StrAssign( (void*)&TMP$151$1, -1ll, (void*)vr$7, -1ll, 0 );
	FBSTRING* vr$10 = HSTRIPPATH( *(uint8**)&TMP$151$1 );
	FBSTRING* vr$11 = fb_StrAssign( (void*)&SNAME$1, -1ll, (void*)vr$10, -1ll, 0 );
	fb_StrDelete( &TMP$151$1 );
	fb_StrDelete( &TMP$150$1 );
	HCLEARNAME( *(uint8**)&SNAME$1 );
	FBSTRING* vr$15 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)"fb_ctor__", 10ll, 0 );
	FBSTRING* vr$17 = fb_StrConcatAssign( (void*)&fb$result$1, -1ll, (void*)&SNAME$1, -1ll, 0 );
	label$212:;
	FBSTRING* vr$19 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$19;
}

FBSTRING* FBGETINPUTFILEPARENTDIR( void )
{
	FBSTRING TMP$153$1;
	FBSTRING TMP$154$1;
	FBSTRING TMP$155$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$213:;
	FBSTRING S$1;
	__builtin_memset( &S$1, 0, 24ll );
	int64 vr$3 = PATHISABSOLUTE( (uint8*)((uint8*)&ENV$ + 488ll) );
	if( vr$3 != 0ll ) goto label$216;
	{
		FBSTRING* vr$5 = HCURDIR(  );
		FBSTRING* vr$7 = fb_StrAssign( (void*)&S$1, -1ll, (void*)vr$5, -1ll, 0 );
		FBSTRING* vr$9 = fb_StrConcatAssign( (void*)&S$1, -1ll, (void*)"/", 2ll, 0 );
	}
	label$216:;
	label$215:;
	__builtin_memset( &TMP$155$1, 0, 24ll );
	__builtin_memset( &TMP$154$1, 0, 24ll );
	__builtin_memset( &TMP$153$1, 0, 24ll );
	FBSTRING* vr$16 = fb_StrConcat( &TMP$153$1, (void*)&S$1, -1ll, (void*)((uint8*)&ENV$ + 488ll), 261ll );
	FBSTRING* vr$18 = fb_StrAssign( (void*)&TMP$154$1, -1ll, (void*)vr$16, -1ll, 0 );
	FBSTRING* vr$19 = HSTRIPFILENAME( *(uint8**)&TMP$154$1 );
	FBSTRING* vr$21 = fb_StrAssign( (void*)&TMP$155$1, -1ll, (void*)vr$19, -1ll, 0 );
	FBSTRING* vr$23 = PATHSTRIPDIV( &TMP$155$1 );
	FBSTRING* vr$25 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$23, -1ll, 0 );
	fb_StrDelete( &TMP$155$1 );
	fb_StrDelete( &TMP$154$1 );
	fb_StrDelete( &S$1 );
	label$214:;
	FBSTRING* vr$30 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$30;
}

void FBADDLIB( uint8* LIBNAME$1 )
{
	FBSTRING TMP$156$1;
	label$217:;
	__builtin_memset( &TMP$156$1, 0, 24ll );
	FBSTRING* vr$2 = fb_StrAssign( (void*)&TMP$156$1, -1ll, (void*)LIBNAME$1, 0ll, 0 );
	STRSETADD( (struct $7TSTRSET*)((uint8*)&ENV$ + 1280ll), &TMP$156$1, 0ll );
	fb_StrDelete( &TMP$156$1 );
	label$218:;
}

void FBADDLIBPATH( uint8* PATH$1 )
{
	FBSTRING TMP$157$1;
	FBSTRING TMP$158$1;
	label$219:;
	__builtin_memset( &TMP$158$1, 0, 24ll );
	__builtin_memset( &TMP$157$1, 0, 24ll );
	FBSTRING* vr$3 = fb_StrAssign( (void*)&TMP$157$1, -1ll, (void*)PATH$1, 0ll, 0 );
	FBSTRING* vr$5 = PATHSTRIPDIV( &TMP$157$1 );
	FBSTRING* vr$7 = fb_StrAssign( (void*)&TMP$158$1, -1ll, (void*)vr$5, -1ll, 0 );
	STRSETADD( (struct $7TSTRSET*)((uint8*)&ENV$ + 1368ll), &TMP$158$1, 0ll );
	fb_StrDelete( &TMP$158$1 );
	fb_StrDelete( &TMP$157$1 );
	label$220:;
}

void FBCOMPILE( uint8* INFNAME$1, uint8* OUTFNAME$1, FBSTRING* PPONLYFILE$1, int64 ISMAIN$1 )
{
	label$255:;
	double TMR$1;
	__builtin_memset( &TMR$1, 0, 8ll );
	fb_StrAssign( (void*)((uint8*)&ENV$ + 488ll), 261ll, (void*)INFNAME$1, 0ll, 0 );
	HREPLACESLASH( (uint8*)((uint8*)&ENV$ + 488ll), 47ll );
	*(uint8**)((uint8*)&ENV$ + 752ll) = (uint8*)0ull;
	*(int64*)((uint8*)&ENV$ + 760ll) = ISMAIN$1;
	fb_StrAssign( (void*)((uint8*)&ENV$ + 784ll), 261ll, (void*)OUTFNAME$1, 0ll, 0 );
	*(int64*)((uint8*)&ENV$ + 1056ll) = ISMAIN$1;
	int64 vr$4 = HFILEEXISTS( INFNAME$1 );
	if( vr$4 != 0ll ) goto label$258;
	{
		ERRREPORTEX( 23ll, INFNAME$1, -1ll, 1ll, (uint8*)0ull );
		goto label$256;
	}
	label$258:;
	label$257:;
	int32 vr$6 = fb_FileFree(  );
	*(int64*)((uint8*)&ENV$ + 480ll) = (int64)vr$6;
	FBSTRING* vr$9 = fb_StrAllocTempDescZ( INFNAME$1 );
	int32 vr$10 = fb_FileOpen( vr$9, 0u, 1u, 0u, (int32)*(int64*)((uint8*)&ENV$ + 480ll), 0 );
	if( (int64)vr$10 == 0ll ) goto label$260;
	{
		ERRREPORTEX( 26ll, INFNAME$1, -1ll, 1ll, (uint8*)0ull );
		goto label$256;
	}
	label$260:;
	label$259:;
	int64 vr$13 = HCHECKFILEFORMAT( *(int64*)((uint8*)&ENV$ + 480ll) );
	*($13FBFILE_FORMAT*)((uint8*)&ENV$ + 768ll) = vr$13;
	int64 vr$14 = (*(tmp$36*)((uint8*)&IR$ + 24ll))(  );
	if( vr$14 != 0ll ) goto label$262;
	{
		ERRREPORTEX( 26ll, (uint8*)((uint8*)&ENV$ + 784ll), -1ll, 1ll, (uint8*)0ull );
		goto label$256;
	}
	label$262:;
	label$261:;
	int64 vr$17 = FBGETOPTION( 1ll );
	if( vr$17 == 0ll ) goto label$264;
	{
		int32 vr$19 = fb_FileFree(  );
		*(int64*)((uint8*)&ENV$ + 1072ll) = (int64)vr$19;
		int32 vr$22 = fb_FileOpen( PPONLYFILE$1, 3u, 0u, 0u, (int32)*(int64*)((uint8*)&ENV$ + 1072ll), 0 );
		if( (int64)vr$22 == 0ll ) goto label$266;
		{
			ERRREPORTEX( 26ll, *(uint8**)PPONLYFILE$1, -1ll, 1ll, (uint8*)0ull );
			goto label$256;
		}
		label$266:;
		label$265:;
	}
	goto label$263;
	label$264:;
	{
		*(int64*)((uint8*)&ENV$ + 1072ll) = 0ll;
	}
	label$263:;
	FBMAINBEGIN(  );
	double vr$26 = fb_Timer(  );
	TMR$1 = vr$26;
	FBPARSEPREDEFINES(  );
	FBPARSEPREINCLUDES(  );
	int64 vr$27 = FBSHOULDCONTINUE(  );
	if( vr$27 == 0ll ) goto label$268;
	{
		CPROGRAM(  );
	}
	label$268:;
	label$267:;
	double vr$29 = fb_Timer(  );
	TMR$1 = vr$29 - TMR$1;
	FBMAINEND(  );
	int64 vr$31 = FBISCROSSCOMP(  );
	if( vr$31 != 0ll ) goto label$270;
	{
		if( *(int64*)((uint8*)&ENV$ + 192ll) != 3ll ) goto label$272;
		{
			HEMITOBJINFO(  );
		}
		label$272:;
		label$271:;
	}
	label$270:;
	label$269:;
	(*(tmp$37*)((uint8*)&IR$ + 32ll))( TMR$1 );
	if( *(int64*)((uint8*)&ENV$ + 1072ll) <= 0ll ) goto label$274;
	{
		int32 vr$36 = fb_FileClose( (int32)*(int64*)((uint8*)&ENV$ + 1072ll) );
		if( (int64)vr$36 == 0ll ) goto label$275;
		void* vr$39 = fb_ErrorThrowAt( 1046, (uint8*)"FreeBASIC-1.01.0-source/src/compiler/fb.bas", (void*)0ull, (void*)0ull );
		goto *vr$39;
		label$275:;
	}
	label$274:;
	label$273:;
	int32 vr$41 = fb_FileClose( (int32)*(int64*)((uint8*)&ENV$ + 480ll) );
	if( (int64)vr$41 == 0ll ) goto label$276;
	void* vr$44 = fb_ErrorThrowAt( 1049, (uint8*)"FreeBASIC-1.01.0-source/src/compiler/fb.bas", (void*)0ull, (void*)0ull );
	goto *vr$44;
	label$276:;
	int64 vr$45 = FBSHOULDCONTINUE(  );
	if( vr$45 == 0ll ) goto label$278;
	{
		SYMBCHECKLABELS( *(struct $8FBSYMBOL**)((uint8*)&SYMB$ + 196800ll) );
	}
	label$278:;
	label$277:;
	label$256:;
}

int64 FBSHOULDRESTART( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$279:;
	fb$result$1 = *(int64*)((uint8*)&ENV$ + 1272ll);
	goto label$280;
	label$280:;
	return fb$result$1;
}

int64 FBSHOULDCONTINUE( void )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$281:;
	int64 vr$2 = ERRGETCOUNT(  );
	fb$result$1 = (int64)-(*(int64*)((uint8*)&ENV$ + 1272ll) == 0ll) & (int64)-(vr$2 < *(int64*)((uint8*)&ENV$ + 344ll));
	goto label$282;
	label$282:;
	return fb$result$1;
}

void FBSETLIBS( struct $7TSTRSET* LIBS$1, struct $7TSTRSET* LIBPATHS$1 )
{
	label$283:;
	STRSETCOPY( (struct $7TSTRSET*)((uint8*)&ENV$ + 1280ll), LIBS$1 );
	STRSETCOPY( (struct $7TSTRSET*)((uint8*)&ENV$ + 1368ll), LIBPATHS$1 );
	label$284:;
}

void FBGETLIBS( struct $7TSTRSET* LIBS$1, struct $7TSTRSET* LIBPATHS$1 )
{
	label$285:;
	STRSETCOPY( LIBS$1, (struct $7TSTRSET*)((uint8*)&ENV$ + 1280ll) );
	STRSETCOPY( LIBPATHS$1, (struct $7TSTRSET*)((uint8*)&ENV$ + 1368ll) );
	label$286:;
}

void FBPRAGMAONCE( void )
{
	label$287:;
	int32 vr$1 = fb_StrCompare( (void*)((uint8*)&ENV$ + 488ll), 261ll, (void*)"", 1ll );
	if( (int64)vr$1 <= 0ll ) goto label$290;
	{
		uint8* vr$6 = HFINDINCFILE( (struct $5THASH*)((uint8*)&ENV$ + 1104ll), (uint8*)((uint8*)&ENV$ + 488ll) );
		if( vr$6 != (uint8*)0ull ) goto label$292;
		{
			HADDINCFILE( (struct $5THASH*)((uint8*)&ENV$ + 1104ll), (uint8*)((uint8*)&ENV$ + 488ll) );
		}
		label$292:;
		label$291:;
	}
	label$290:;
	label$289:;
	label$288:;
}

void FBINCLUDEFILE( uint8* FILENAME$1, int64 ISONCE$1 )
{
	FBSTRING TMP$164$1;
	uint8* TMP$171$1;
	uint8* TMP$174$1;
	label$317:;
	static uint8 INCFILE$1[260];
	uint8* FILEIDX$1;
	__builtin_memset( &FILEIDX$1, 0, 8ll );
	if( *(int64*)((uint8*)&ENV$ + 1128ll) < 16ll ) goto label$320;
	{
		ERRREPORT( 27ll, 0ll, (uint8*)0ull );
		ERRHIDEFURTHERERRORS(  );
		goto label$318;
	}
	label$320:;
	label$319:;
	FBSTRING* vr$3 = HSTRIPFILENAME( (uint8*)((uint8*)&ENV$ + 488ll) );
	fb_StrAssign( (void*)INCFILE$1, 260ll, (void*)vr$3, -1ll, 0 );
	__builtin_memset( &TMP$164$1, 0, 24ll );
	FBSTRING* vr$6 = fb_StrConcat( &TMP$164$1, (void*)INCFILE$1, 260ll, (void*)FILENAME$1, 0ll );
	fb_StrAssign( (void*)INCFILE$1, 260ll, (void*)vr$6, -1ll, 0 );
	int64 vr$7 = HFILEEXISTS( (uint8*)INCFILE$1 );
	if( vr$7 != 0ll ) goto label$322;
	{
		int64 vr$9 = HFILEEXISTS( FILENAME$1 );
		if( vr$9 != 0ll ) goto label$324;
		{
			FBSTRING* PATH$3;
			void* vr$12 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&ENV$ + 128ll) );
			PATH$3 = (FBSTRING*)vr$12;
			label$325:;
			if( PATH$3 == (FBSTRING*)0ull ) goto label$326;
			{
				FBSTRING TMP$165$4;
				FBSTRING TMP$166$4;
				__builtin_memset( &TMP$165$4, 0, 24ll );
				FBSTRING* vr$16 = fb_StrConcat( &TMP$165$4, (void*)PATH$3, -1ll, (void*)"/", 2ll );
				__builtin_memset( &TMP$166$4, 0, 24ll );
				FBSTRING* vr$19 = fb_StrConcat( &TMP$166$4, (void*)vr$16, -1ll, (void*)FILENAME$1, 0ll );
				fb_StrAssign( (void*)INCFILE$1, 260ll, (void*)vr$19, -1ll, 0 );
				int64 vr$20 = HFILEEXISTS( (uint8*)INCFILE$1 );
				if( vr$20 == 0ll ) goto label$328;
				{
					goto label$326;
				}
				label$328:;
				label$327:;
				void* vr$22 = LISTGETNEXT( (void*)PATH$3 );
				PATH$3 = (FBSTRING*)vr$22;
			}
			goto label$325;
			label$326:;
			if( PATH$3 != (FBSTRING*)0ull ) goto label$330;
			{
				FBSTRING TMP$168$4;
				FBSTRING TMP$169$4;
				FBSTRING TMP$170$4;
				__builtin_memset( &TMP$170$4, 0, 24ll );
				__builtin_memset( &TMP$168$4, 0, 24ll );
				FBSTRING* vr$27 = fb_StrConcat( &TMP$168$4, (void*)"\x22", 2ll, (void*)FILENAME$1, 0ll );
				__builtin_memset( &TMP$169$4, 0, 24ll );
				FBSTRING* vr$30 = fb_StrConcat( &TMP$169$4, (void*)vr$27, -1ll, (void*)"\x22", 2ll );
				FBSTRING* vr$32 = fb_StrAssign( (void*)&TMP$170$4, -1ll, (void*)vr$30, -1ll, 0 );
				ERRREPORTEX( 23ll, *(uint8**)&TMP$170$4, 0ll, 1ll, (uint8*)0ull );
				fb_StrDelete( &TMP$170$4 );
				ERRHIDEFURTHERERRORS(  );
				goto label$318;
			}
			label$330:;
			label$329:;
		}
		goto label$323;
		label$324:;
		{
			fb_StrAssign( (void*)INCFILE$1, 260ll, (void*)FILENAME$1, 0ll, 0 );
		}
		label$323:;
	}
	label$322:;
	label$321:;
	TMP$171$1 = (uint8*)INCFILE$1;
	int64 vr$35 = IS_ROOTPATH( &TMP$171$1 );
	if( vr$35 != 0ll ) goto label$332;
	{
		FBSTRING TMP$172$2;
		FBSTRING TMP$173$2;
		FBSTRING* vr$37 = HCURDIR(  );
		__builtin_memset( &TMP$172$2, 0, 24ll );
		FBSTRING* vr$40 = fb_StrConcat( &TMP$172$2, (void*)vr$37, -1ll, (void*)"/", 2ll );
		__builtin_memset( &TMP$173$2, 0, 24ll );
		FBSTRING* vr$43 = fb_StrConcat( &TMP$173$2, (void*)vr$40, -1ll, (void*)INCFILE$1, 260ll );
		fb_StrAssign( (void*)INCFILE$1, 260ll, (void*)vr$43, -1ll, 0 );
	}
	label$332:;
	label$331:;
	TMP$174$1 = (uint8*)INCFILE$1;
	int64 vr$45 = IS_ROOTPATH( &TMP$174$1 );
	if( vr$45 != 0ll ) goto label$334;
	{
		FBSTRING TMP$175$2;
		FBSTRING TMP$176$2;
		FBSTRING TMP$177$2;
		__builtin_memset( &TMP$177$2, 0, 24ll );
		__builtin_memset( &TMP$175$2, 0, 24ll );
		FBSTRING* vr$50 = fb_StrConcat( &TMP$175$2, (void*)"\x22", 2ll, (void*)INCFILE$1, 260ll );
		__builtin_memset( &TMP$176$2, 0, 24ll );
		FBSTRING* vr$53 = fb_StrConcat( &TMP$176$2, (void*)vr$50, -1ll, (void*)"\x22", 2ll );
		FBSTRING* vr$55 = fb_StrAssign( (void*)&TMP$177$2, -1ll, (void*)vr$53, -1ll, 0 );
		ERRREPORTEX( 23ll, *(uint8**)&TMP$177$2, 0ll, 1ll, (uint8*)0ull );
		fb_StrDelete( &TMP$177$2 );
		ERRHIDEFURTHERERRORS(  );
		goto label$318;
	}
	label$334:;
	label$333:;
	int64 vr$57 = SOLVE_PATH( (uint8*)INCFILE$1 );
	if( vr$57 != 0ll ) goto label$336;
	{
		FBSTRING TMP$178$2;
		FBSTRING TMP$179$2;
		FBSTRING TMP$180$2;
		__builtin_memset( &TMP$180$2, 0, 24ll );
		__builtin_memset( &TMP$178$2, 0, 24ll );
		FBSTRING* vr$62 = fb_StrConcat( &TMP$178$2, (void*)"\x22", 2ll, (void*)INCFILE$1, 260ll );
		__builtin_memset( &TMP$179$2, 0, 24ll );
		FBSTRING* vr$65 = fb_StrConcat( &TMP$179$2, (void*)vr$62, -1ll, (void*)"\x22", 2ll );
		FBSTRING* vr$67 = fb_StrAssign( (void*)&TMP$180$2, -1ll, (void*)vr$65, -1ll, 0 );
		ERRREPORTEX( 23ll, *(uint8**)&TMP$180$2, 0ll, 1ll, (uint8*)0ull );
		fb_StrDelete( &TMP$180$2 );
		ERRHIDEFURTHERERRORS(  );
		goto label$318;
	}
	label$336:;
	label$335:;
	HREPLACESLASH( (uint8*)INCFILE$1, 47ll );
	if( ISONCE$1 == 0ll ) goto label$338;
	{
		uint8* vr$71 = HFINDINCFILE( (struct $5THASH*)((uint8*)&ENV$ + 1080ll), (uint8*)INCFILE$1 );
		if( vr$71 == (uint8*)0ull ) goto label$340;
		{
			goto label$318;
		}
		label$340:;
		label$339:;
	}
	label$338:;
	label$337:;
	uint8* vr$74 = HFINDINCFILE( (struct $5THASH*)((uint8*)&ENV$ + 1104ll), (uint8*)INCFILE$1 );
	if( vr$74 == (uint8*)0ull ) goto label$342;
	{
		goto label$318;
	}
	label$342:;
	label$341:;
	uint8* vr$77 = HADDINCFILE( (struct $5THASH*)((uint8*)&ENV$ + 1080ll), (uint8*)INCFILE$1 );
	FILEIDX$1 = vr$77;
	__builtin_memcpy( (struct $6FBFILE*)((*(int64*)((uint8*)&ENV$ + 1128ll) * 296ll) + *(int64*)&INFILETB$), (struct $6FBFILE*)((uint8*)&ENV$ + 480ll), 296 );
	*(int64*)((uint8*)&ENV$ + 1128ll) = *(int64*)((uint8*)&ENV$ + 1128ll) + 1ll;
	fb_StrAssign( (void*)((uint8*)&ENV$ + 488ll), 261ll, (void*)INCFILE$1, 260ll, 0 );
	*(uint8**)((uint8*)&ENV$ + 752ll) = FILEIDX$1;
	int32 vr$84 = fb_FileFree(  );
	*(int64*)((uint8*)&ENV$ + 480ll) = (int64)vr$84;
	FBSTRING* vr$87 = fb_StrAllocTempDescZ( (uint8*)INCFILE$1 );
	int32 vr$88 = fb_FileOpen( vr$87, 0u, 1u, 0u, (int32)*(int64*)((uint8*)&ENV$ + 480ll), 0 );
	if( (int64)vr$88 == 0ll ) goto label$344;
	{
		FBSTRING TMP$181$2;
		FBSTRING TMP$182$2;
		FBSTRING TMP$183$2;
		__builtin_memset( &TMP$183$2, 0, 24ll );
		__builtin_memset( &TMP$181$2, 0, 24ll );
		FBSTRING* vr$94 = fb_StrConcat( &TMP$181$2, (void*)"\x22", 2ll, (void*)FILENAME$1, 0ll );
		__builtin_memset( &TMP$182$2, 0, 24ll );
		FBSTRING* vr$97 = fb_StrConcat( &TMP$182$2, (void*)vr$94, -1ll, (void*)"\x22", 2ll );
		FBSTRING* vr$99 = fb_StrAssign( (void*)&TMP$183$2, -1ll, (void*)vr$97, -1ll, 0 );
		ERRREPORTEX( 23ll, *(uint8**)&TMP$183$2, 0ll, 1ll, (uint8*)0ull );
		fb_StrDelete( &TMP$183$2 );
		ERRHIDEFURTHERERRORS(  );
		goto label$318;
	}
	label$344:;
	label$343:;
	int64 vr$101 = HCHECKFILEFORMAT( *(int64*)((uint8*)&ENV$ + 480ll) );
	*($13FBFILE_FORMAT*)((uint8*)&ENV$ + 768ll) = vr$101;
	LEXPUSHCTX(  );
	LEXINIT( -1ll );
	CPROGRAM(  );
	LEXPOPCTX(  );
	int32 vr$103 = fb_FileClose( (int32)*(int64*)((uint8*)&ENV$ + 480ll) );
	if( (int64)vr$103 == 0ll ) goto label$345;
	void* vr$106 = fb_ErrorThrowAt( 1339, (uint8*)"FreeBASIC-1.01.0-source/src/compiler/fb.bas", (void*)0ull, (void*)0ull );
	goto *vr$106;
	label$345:;
	*(int64*)((uint8*)&ENV$ + 1128ll) = *(int64*)((uint8*)&ENV$ + 1128ll) + -1ll;
	__builtin_memcpy( (struct $6FBFILE*)((uint8*)&ENV$ + 480ll), (struct $6FBFILE*)((*(int64*)((uint8*)&ENV$ + 1128ll) * 296ll) + *(int64*)&INFILETB$), 296 );
	label$318:;
}

$7FB_LANG FBGETLANGID( uint8* TXT$1 )
{
	$7FB_LANG fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$346:;
	{
		FBSTRING TMP$184$2;
		FBSTRING* vr$1 = fb_StrAllocTempDescZ( TXT$1 );
		FBSTRING* vr$2 = fb_StrLcase2( vr$1, 0 );
		FBSTRING* vr$4 = fb_StrInit( (void*)&TMP$184$2, -1ll, (void*)vr$2, -1ll, 0 );
		int32 vr$6 = fb_StrCompare( (void*)&TMP$184$2, -1ll, (void*)"fb", 3ll );
		if( (int64)vr$6 != 0ll ) goto label$349;
		label$350:;
		{
			fb$result$1 = 0ll;
		}
		goto label$348;
		label$349:;
		int32 vr$10 = fb_StrCompare( (void*)&TMP$184$2, -1ll, (void*)"deprecated", 11ll );
		if( (int64)vr$10 != 0ll ) goto label$351;
		label$352:;
		{
			fb$result$1 = 1ll;
		}
		goto label$348;
		label$351:;
		int32 vr$14 = fb_StrCompare( (void*)&TMP$184$2, -1ll, (void*)"fblite", 7ll );
		if( (int64)vr$14 != 0ll ) goto label$353;
		label$354:;
		{
			fb$result$1 = 2ll;
		}
		goto label$348;
		label$353:;
		int32 vr$18 = fb_StrCompare( (void*)&TMP$184$2, -1ll, (void*)"qb", 3ll );
		if( (int64)vr$18 != 0ll ) goto label$355;
		label$356:;
		{
			fb$result$1 = 3ll;
		}
		goto label$348;
		label$355:;
		{
			fb$result$1 = -1ll;
		}
		label$357:;
		label$348:;
		fb_StrDelete( &TMP$184$2 );
	}
	label$347:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__fb( void )
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

static uint8* HFINDINCFILE( struct $5THASH* INCFILEHASH$1, uint8* FILENAME$1 )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$10:;
	static FBSTRING FNAME$1;
	fb_StrAssign( (void*)&FNAME$1, -1ll, (void*)FILENAME$1, 0ll, 0 );
	void* vr$1 = HASHLOOKUP( INCFILEHASH$1, *(uint8**)&FNAME$1 );
	fb$result$1 = (uint8*)vr$1;
	label$11:;
	return fb$result$1;
}

static uint8* HADDINCFILE( struct $5THASH* INCFILEHASH$1, uint8* FILENAME$1 )
{
	uint8* fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$12:;
	static uint8* FNAME$1;
	static uint8* RES$1;
	static uint64 INDEX$1;
	int64 vr$1 = fb_StrLen( (void*)FILENAME$1, 0ll );
	void* vr$4 = XALLOCATE( (int32)(vr$1 + 1ll) );
	FNAME$1 = (uint8*)vr$4;
	fb_StrAssign( (void*)FNAME$1, 0ll, (void*)FILENAME$1, 0ll, 0 );
	uint64 vr$5 = HASHHASH( FNAME$1 );
	INDEX$1 = vr$5;
	void* vr$6 = HASHLOOKUPEX( INCFILEHASH$1, FNAME$1, INDEX$1 );
	RES$1 = (uint8*)vr$6;
	if( RES$1 != (uint8*)0ull ) goto label$15;
	{
		HASHADD( INCFILEHASH$1, FNAME$1, (void*)FNAME$1, INDEX$1 );
	}
	goto label$14;
	label$15:;
	{
		free( (void*)FNAME$1 );
		FNAME$1 = RES$1;
	}
	label$14:;
	fb$result$1 = FNAME$1;
	label$13:;
	return fb$result$1;
}

static void HUPDATELANGOPTIONS( void )
{
	label$36:;
	*($11FB_LANG_OPT*)((uint8*)&ENV$ + 1152ll) = *($11FB_LANG_OPT*)(((uint8*)LANGTB$ + (*(int64*)((uint8*)&ENV$ + 272ll) << 4ll)) + 8ll);
	label$37:;
}

static void HUPDATETARGETOPTIONS( void )
{
	label$38:;
	__builtin_memcpy( (struct $8FBTARGET*)((uint8*)&ENV$ + 416ll), (struct $8FBTARGET*)((uint8*)TARGETINFO$ + (*(int64*)((uint8*)&ENV$ + 216ll) * 40ll)), 40 );
	label$39:;
}

static void HUPDATEBACKENDOPTIONS( void )
{
	label$40:;
	if( *(int64*)((uint8*)&ENV$ + 208ll) != 0ll ) goto label$43;
	{
		*($12FB_ASMSYNTAX*)((uint8*)&ENV$ + 264ll) = 0ll;
	}
	goto label$42;
	label$43:;
	{
		*($12FB_ASMSYNTAX*)((uint8*)&ENV$ + 264ll) = 1ll;
	}
	label$42:;
	label$41:;
}

static FBSTRING* HGETTARGETID( int64 OS$1, int64 CPUTYPE$1 )
{
	FBSTRING TMP$140$1;
	FBSTRING TMP$141$1;
	FBSTRING fb$result$1;
	__builtin_memset( &fb$result$1, 0, 24ll );
	label$138:;
	int64 CPUFAMILY$1;
	CPUFAMILY$1 = *(int64*)(((uint8*)CPUTYPEINFO$ + (CPUTYPE$1 << 5ll)) + 16ll);
	FBSTRING OSID$1;
	FBSTRING* vr$4 = fb_StrInit( (void*)&OSID$1, -1ll, *(void**)((uint8*)TARGETINFO$ + (OS$1 * 40ll)), 0ll, 0 );
	{
		if( OS$1 == 0ll ) goto label$142;
		label$143:;
		if( OS$1 == 3ll ) goto label$142;
		label$144:;
		if( OS$1 != 4ll ) goto label$141;
		label$142:;
		{
			if( CPUFAMILY$1 != 0ll ) goto label$146;
			{
				fb_StrInit( (void*)&fb$result$1, -1ll, (void*)&OSID$1, -1ll, 0 );
				fb_StrDelete( &OSID$1 );
				goto label$139;
			}
			label$146:;
			label$145:;
		}
		label$141:;
		label$140:;
	}
	if( ((int64)-(OS$1 == 0ll) & (int64)-(CPUFAMILY$1 == 1ll)) == 0ll ) goto label$148;
	{
		fb_StrInit( (void*)&fb$result$1, -1ll, (void*)"win64", 6ll, 0 );
		fb_StrDelete( &OSID$1 );
		goto label$139;
	}
	label$148:;
	label$147:;
	__builtin_memset( &TMP$140$1, 0, 24ll );
	FBSTRING* vr$22 = fb_StrConcat( &TMP$140$1, (void*)&OSID$1, -1ll, (void*)"-", 2ll );
	__builtin_memset( &TMP$141$1, 0, 24ll );
	FBSTRING* vr$25 = fb_StrConcat( &TMP$141$1, (void*)vr$22, -1ll, *(void**)((uint8*)CPUFAMILYINFO$ + (CPUFAMILY$1 << 4ll)), 0ll );
	FBSTRING* vr$27 = fb_StrAssign( (void*)&fb$result$1, -1ll, (void*)vr$25, -1ll, 0 );
	fb_StrDelete( &OSID$1 );
	label$139:;
	FBSTRING* vr$30 = fb_StrAllocTempResult( &fb$result$1 );
	return vr$30;
}

static void FBPARSEPREDEFINES( void )
{
	label$221:;
	FBSTRING DEFID$1;
	__builtin_memset( &DEFID$1, 0, 24ll );
	FBSTRING DEFTEXT$1;
	__builtin_memset( &DEFTEXT$1, 0, 24ll );
	FBSTRING* DEF$1;
	void* vr$3 = LISTGETHEAD( (struct $5TLIST*)&ENV$ );
	DEF$1 = (FBSTRING*)vr$3;
	label$223:;
	if( DEF$1 == (FBSTRING*)0ull ) goto label$224;
	{
		int64 IDLENGTH$2;
		FBSTRING* vr$5 = fb_StrAllocTempDescZEx( (uint8*)"=", 1ll );
		int64 vr$6 = fb_StrInstr( 1ll, DEF$1, vr$5 );
		IDLENGTH$2 = vr$6 + -1ll;
		if( IDLENGTH$2 >= 0ll ) goto label$226;
		{
			int64 vr$9 = fb_StrLen( (void*)DEF$1, -1ll );
			IDLENGTH$2 = vr$9;
		}
		label$226:;
		label$225:;
		FBSTRING* vr$10 = fb_LEFT( DEF$1, IDLENGTH$2 );
		FBSTRING* vr$12 = fb_StrAssign( (void*)&DEFID$1, -1ll, (void*)vr$10, -1ll, 0 );
		int64 vr$13 = fb_StrLen( (void*)DEF$1, -1ll );
		FBSTRING* vr$16 = fb_RIGHT( DEF$1, (vr$13 - IDLENGTH$2) + -1ll );
		FBSTRING* vr$18 = fb_StrAssign( (void*)&DEFTEXT$1, -1ll, (void*)vr$16, -1ll, 0 );
		int64 vr$20 = fb_StrLen( (void*)&DEFTEXT$1, -1ll );
		if( vr$20 != 0ll ) goto label$228;
		{
			fb_StrAssign( (void*)&DEFTEXT$1, -1ll, (void*)"1", 2ll, 0 );
		}
		label$228:;
		label$227:;
		int64 vr$24 = fb_StrLen( (void*)&DEFTEXT$1, -1ll );
		SYMBADDDEFINE( *(uint8**)&DEFID$1, *(uint8**)&DEFTEXT$1, vr$24, 0ll, (tmp$26)0ull, 0ll );
		void* vr$25 = LISTGETNEXT( (void*)DEF$1 );
		DEF$1 = (FBSTRING*)vr$25;
	}
	goto label$223;
	label$224:;
	fb_StrDelete( &DEFTEXT$1 );
	fb_StrDelete( &DEFID$1 );
	label$222:;
}

static void FBPARSEPREINCLUDES( void )
{
	label$229:;
	FBSTRING* FILE$1;
	void* vr$1 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&ENV$ + 64ll) );
	FILE$1 = (FBSTRING*)vr$1;
	label$231:;
	int64 vr$3 = FBSHOULDCONTINUE(  );
	if( ((int64)-(FILE$1 != (FBSTRING*)0ull) & vr$3) == 0ll ) goto label$232;
	{
		FBINCLUDEFILE( *(uint8**)FILE$1, -1ll );
		void* vr$7 = LISTGETNEXT( (void*)FILE$1 );
		FILE$1 = (FBSTRING*)vr$7;
	}
	goto label$231;
	label$232:;
	label$230:;
}

static void HAPPENDFBCTINF( uint8* VALUE$1 )
{
	label$233:;
	if( *(int64*)((uint8*)&ENV$ + 1456ll) != 0ll ) goto label$236;
	{
		*(int64*)((uint8*)&ENV$ + 1456ll) = -1ll;
		(*(tmp$35*)((uint8*)&IR$ + 448ll))(  );
	}
	label$236:;
	label$235:;
	(*(tmp$47*)((uint8*)&IR$ + 456ll))( VALUE$1 );
	label$234:;
}

static void HEMITOBJINFO( void )
{
	label$237:;
	struct $11TSTRSETITEM* I$1;
	void* vr$1 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&ENV$ + 1280ll) );
	I$1 = (struct $11TSTRSETITEM*)vr$1;
	label$239:;
	if( I$1 == (struct $11TSTRSETITEM*)0ull ) goto label$240;
	{
		if( *(int64*)((uint8*)I$1 + 24ll) != 0ll ) goto label$242;
		{
			uint8* vr$5 = OBJINFOENCODE( 0ll );
			HAPPENDFBCTINF( vr$5 );
			HAPPENDFBCTINF( *(uint8**)I$1 );
		}
		label$242:;
		label$241:;
		void* vr$7 = LISTGETNEXT( (void*)I$1 );
		I$1 = (struct $11TSTRSETITEM*)vr$7;
	}
	goto label$239;
	label$240:;
	void* vr$9 = LISTGETHEAD( (struct $5TLIST*)((uint8*)&ENV$ + 1368ll) );
	I$1 = (struct $11TSTRSETITEM*)vr$9;
	label$243:;
	if( I$1 == (struct $11TSTRSETITEM*)0ull ) goto label$244;
	{
		if( *(int64*)((uint8*)I$1 + 24ll) != 0ll ) goto label$246;
		{
			uint8* vr$13 = OBJINFOENCODE( 1ll );
			HAPPENDFBCTINF( vr$13 );
			uint8* vr$15 = HESCAPE( *(uint8**)I$1 );
			HAPPENDFBCTINF( vr$15 );
		}
		label$246:;
		label$245:;
		void* vr$16 = LISTGETNEXT( (void*)I$1 );
		I$1 = (struct $11TSTRSETITEM*)vr$16;
	}
	goto label$243;
	label$244:;
	if( *(int64*)((uint8*)&ENV$ + 384ll) == 0ll ) goto label$248;
	{
		uint8* vr$18 = OBJINFOENCODE( 2ll );
		HAPPENDFBCTINF( vr$18 );
	}
	label$248:;
	label$247:;
	if( *(int64*)((uint8*)&ENV$ + 392ll) == 0ll ) goto label$250;
	{
		uint8* vr$20 = OBJINFOENCODE( 3ll );
		HAPPENDFBCTINF( vr$20 );
	}
	label$250:;
	label$249:;
	if( *(int64*)((uint8*)&ENV$ + 272ll) == 0ll ) goto label$252;
	{
		FBSTRING TMP$160$2;
		uint8* vr$22 = OBJINFOENCODE( 4ll );
		HAPPENDFBCTINF( vr$22 );
		__builtin_memset( &TMP$160$2, 0, 24ll );
		FBSTRING* vr$24 = FBGETLANGNAME( *($7FB_LANG*)((uint8*)&ENV$ + 272ll) );
		FBSTRING* vr$26 = fb_StrAssign( (void*)&TMP$160$2, -1ll, (void*)vr$24, -1ll, 0 );
		HAPPENDFBCTINF( *(uint8**)&TMP$160$2 );
		fb_StrDelete( &TMP$160$2 );
	}
	label$252:;
	label$251:;
	if( *(int64*)((uint8*)&ENV$ + 1456ll) == 0ll ) goto label$254;
	{
		(*(tmp$35*)((uint8*)&IR$ + 464ll))(  );
	}
	label$254:;
	label$253:;
	label$238:;
}

static int64 IS_ROOTPATH( uint8** PATH$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$293:;
	fb$result$1 = 0ll;
	if( *PATH$1 != (uint8*)0ull ) goto label$296;
	{
		goto label$294;
	}
	label$296:;
	label$295:;
	fb$result$1 = (int64)-((uint64)(int64)*(*PATH$1) == 47ull);
	label$294:;
	return fb$result$1;
}

static int64 GET_ROOTPATH_LEN( uint8* PATH$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$297:;
	fb$result$1 = 0ll;
	if( (int64)*PATH$1 != 0ll ) goto label$300;
	{
		goto label$298;
	}
	label$300:;
	label$299:;
	fb$result$1 = 1ll;
	label$298:;
	return fb$result$1;
}

static int64 SOLVE_PATH( uint8* PATH$1 )
{
	int64 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 8ll );
	label$301:;
	static int64 CIDX$1[131];
	struct $8FBARRAY1IlE {
		int64* DATA;
		int64* PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1IlE ) == 64 );
	static struct $8FBARRAY1IlE tmp$161$1 = { (int64*)CIDX$1, (int64*)CIDX$1, 1048ll, 8ll, 1ll, { { 131ll, 0ll, 130ll } } };
	int64 STK$1;
	int64 S$1;
	int64 N$1;
	int64 D$1;
	int64 R$1;
	int64 W$1;
	int64 C$1;
	STK$1 = 0ll;
	int64 vr$1 = GET_ROOTPATH_LEN( PATH$1 );
	S$1 = vr$1;
	*(int64*)((uint8*)CIDX$1 + (STK$1 << 3ll)) = S$1;
	W$1 = S$1;
	N$1 = 0ll;
	D$1 = 0ll;
	{
		R$1 = S$1;
		int64 TMP$162$2;
		int64 vr$3 = fb_StrLen( (void*)PATH$1, 0ll );
		TMP$162$2 = vr$3 + -1ll;
		goto label$303;
		label$306:;
		{
			C$1 = (int64)*(uint8*)((uint8*)PATH$1 + R$1);
			if( ((int64)-((uint64)C$1 == 47ull) | (int64)-((uint64)C$1 == 92ull)) == 0ll ) goto label$308;
			{
				if( N$1 != 0ll ) goto label$310;
				{
				}
				goto label$309;
				label$310:;
				if( ((int64)-(D$1 == 1ll) & (int64)-(N$1 == 1ll)) == 0ll ) goto label$311;
				{
					W$1 = W$1 + -1ll;
				}
				goto label$309;
				label$311:;
				if( ((int64)-(D$1 == 2ll) & (int64)-(N$1 == 2ll)) == 0ll ) goto label$312;
				{
					if( STK$1 == 0ll ) goto label$314;
					{
						STK$1 = STK$1 + -1ll;
					}
					label$314:;
					label$313:;
					W$1 = *(int64*)((uint8*)CIDX$1 + (STK$1 << 3ll));
				}
				goto label$309;
				label$312:;
				{
					*(uint8*)((uint8*)PATH$1 + W$1) = (uint8)C$1;
					W$1 = W$1 + 1ll;
					STK$1 = STK$1 + 1ll;
					*(int64*)((uint8*)CIDX$1 + (STK$1 << 3ll)) = W$1;
				}
				label$309:;
				N$1 = 0ll;
				D$1 = 0ll;
			}
			goto label$307;
			label$308:;
			{
				if( (uint64)C$1 != 46ull ) goto label$316;
				{
					D$1 = D$1 + 1ll;
				}
				label$316:;
				label$315:;
				N$1 = N$1 + 1ll;
				*(uint8*)((uint8*)PATH$1 + W$1) = (uint8)C$1;
				W$1 = W$1 + 1ll;
			}
			label$307:;
		}
		label$304:;
		R$1 = R$1 + 1ll;
		label$303:;
		if( R$1 <= TMP$162$2 ) goto label$306;
		label$305:;
	}
	*(uint8*)((uint8*)PATH$1 + W$1) = (uint8)0u;
	fb$result$1 = -1ll;
	label$302:;
	return fb$result$1;
}

// Total compilation time: 0.05152393935713917 seconds.
