/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ic.y" /* yacc.c:339  */

#include "ic.h"
Quad *quadTable=NULL;
BBlock *bblockTable=NULL;
Label *labelTable=NULL;
char str[10];
int i;
char *ptr;
int numDim;
char labelpending[10];
char tempvar[10];
char tempLabel[10];
char switchExpResult[10];
char switchFlagName[10];
short int dataType;
short int signType;
short int storeType;
short int qualifierType;
short int dataSize;
int dimArray[DIMSIZE+1];
int totArrayElements;
extern int lineNo;
extern LNode* findSymbolHash(char*);
LNode* L;
Attr opnd1,opnd2,result;
Attr noAttr, tempAttr,constAttr,constAttr1,constAttr2,constAttr3;
Attr attr1,tempAttr1,tempAttr2,tempAttr3;
short int noDimensions;
typedef struct TFLABEL
{	
	char trueLabel[10];
  	char falseLabel[10];
}TFLABEL;
TFLABEL tflabel;

#line 102 "ic.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "ic.tab.h".  */
#ifndef YY_YY_IC_TAB_H_INCLUDED
# define YY_YY_IC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    _or = 258,
    _and = 259,
    _eq = 260,
    _ne = 261,
    _lt = 262,
    _le = 263,
    _gt = 264,
    _ge = 265,
    _minus = 266,
    _plus = 267,
    _mul = 268,
    _div = 269,
    _modulo = 270,
    _uminus = 271,
    _char = 272,
    _int = 273,
    _float = 274,
    _double = 275,
    _const = 276,
    _signed = 277,
    _unsigned = 278,
    _short = 279,
    _long = 280,
    _goto = 281,
    _else = 282,
    _switch = 283,
    _break = 284,
    _continue = 285,
    _case = 286,
    _struct = 287,
    _union = 288,
    _typedef = 289,
    _main = 290,
    _assign = 291,
    _default = 292,
    _leftb = 293,
    _rightb = 294,
    _leftp = 295,
    _rightp = 296,
    _leftsp = 297,
    _rightsp = 298,
    _comma = 299,
    _semicolon = 300,
    _colon = 301,
    _void = 302,
    _auto = 303,
    _register = 304,
    _static = 305,
    _extern = 306,
    _volatile = 307,
    _eofile = 308,
    _id = 309,
    _charcons = 310,
    _num = 311,
    _dnum = 312,
    _if = 313,
    _while = 314,
    _do = 315,
    _for = 316
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 37 "ic.y" /* yacc.c:355  */

  char name[NAMESIZE];
  int no;
  Attr attr;
  
  /*Label label;*/
  struct tfLabel
  {	
	char trueLabel[10];
  	char falseLabel[10];
  }tflabel;
 struct ForLabel
 {
	char cond2Label[10];
	char cond3Label[10];
	char cond2TestLabel[10];
	char nextStmtLabel[10];
 }forLabel;

#line 224 "ic.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_IC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 239 "ic.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   354

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  172

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    89,    89,    89,   113,   113,   116,   116,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   130,   133,   134,
     136,   151,   177,   181,   187,   191,   195,   199,   203,   207,
     212,   215,   218,   222,   225,   228,   231,   234,   237,   241,
     244,   247,   251,   273,   288,   291,   301,   349,   371,   384,
     391,   399,   406,   413,   420,   428,   436,   443,   450,   457,
     464,   471,   478,   485,   489,   519,   522,   527,   530,   535,
     535,   557,   562,   557,   587,   592,   587,   620,   626,   629,
     638,   620,   666,   669,   672,   672,   686,   686,   726,   727,
     730,   733,   736,   743,   744,   745,   748
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_or", "_and", "_eq", "_ne", "_lt",
  "_le", "_gt", "_ge", "_minus", "_plus", "_mul", "_div", "_modulo",
  "_uminus", "_char", "_int", "_float", "_double", "_const", "_signed",
  "_unsigned", "_short", "_long", "_goto", "_else", "_switch", "_break",
  "_continue", "_case", "_struct", "_union", "_typedef", "_main",
  "_assign", "_default", "_leftb", "_rightb", "_leftp", "_rightp",
  "_leftsp", "_rightsp", "_comma", "_semicolon", "_colon", "_void",
  "_auto", "_register", "_static", "_extern", "_volatile", "_eofile",
  "_id", "_charcons", "_num", "_dnum", "_if", "_while", "_do", "_for",
  "$accept", "Pgm", "$@1", "Stmts", "Stmt", "eStmt", "dStmt", "varList",
  "id", "dimList", "dType", "sign", "sType", "qType", "assignExpr",
  "assignStmt", "LValue", "arrayDims", "Expr", "condition", "ifStmt",
  "$@2", "whileStmt", "$@3", "$@4", "doStmt", "$@5", "$@6", "forStmt",
  "$@7", "$@8", "$@9", "$@10", "breakStmt", "continueStmt", "switchStmt",
  "$@11", "caseStmtPrefix", "$@12", "caseStmts", "cons", "Stmtlist",
  "gotoStmt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316
};
# endif

#define YYPACT_NINF -119

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-119)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -34,  -119,     7,   -23,  -119,   -22,   -17,   272,   -28,   -12,
     -11,    -9,  -119,  -119,  -119,  -119,  -119,    -4,     5,  -119,
    -119,  -119,   200,  -119,  -119,  -119,   -10,     1,  -119,    -5,
       8,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,     4,
      47,  -119,  -119,    47,    47,    11,   164,    13,     2,  -119,
    -119,  -119,   -13,  -119,    47,    47,  -119,    47,    47,  -119,
    -119,  -119,    -5,   304,  -119,  -119,   102,  -119,    47,   272,
    -119,  -119,    -3,    47,  -119,  -119,  -119,    40,  -119,   304,
     129,  -119,   170,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    27,  -119,    48,  -119,
     236,    14,    45,  -119,  -119,  -119,  -119,  -119,  -119,    38,
    -119,  -119,   330,   141,   339,   339,    71,    71,    71,    71,
      -1,    -1,  -119,  -119,  -119,    56,   164,    54,  -119,    47,
    -119,    57,   -20,  -119,    65,  -119,   164,  -119,    47,    46,
      76,    38,  -119,   -33,    65,    81,  -119,    80,    79,    82,
      72,  -119,  -119,  -119,  -119,  -119,  -119,  -119,    85,  -119,
    -119,    84,   112,  -119,    47,  -119,   164,   119,  -119,  -119,
     164,  -119
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     0,     1,     0,     0,    33,     0,     0,
       0,     0,    38,    34,    35,    36,    37,    45,     0,    71,
      74,    77,    33,     5,     7,     6,    39,     0,     8,     0,
      46,     9,    10,    11,    12,    13,    14,    15,    16,     0,
       0,    82,    83,     0,     0,     0,    33,     0,     0,     4,
      40,    41,    30,    44,     0,     0,    96,     0,     0,    65,
      66,    68,    64,    67,    84,    64,     0,    69,     0,    33,
      95,    94,     0,     0,     3,    31,    32,     0,    43,    42,
       0,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,    72,
      33,     0,     0,    24,    26,    28,    29,    25,    27,     0,
      47,    63,    61,    62,    59,    60,    55,    56,    58,    57,
      50,    49,    51,    52,    53,     0,    33,     0,    93,     0,
      78,    20,     0,    19,    89,    70,    33,    75,     0,     0,
      21,     0,    17,     0,    89,     0,    73,     0,     0,     0,
       0,    18,    92,    91,    90,    86,    88,    85,     0,    79,
      23,     0,     0,    76,     0,    22,    33,     0,    87,    80,
      33,    81
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -119,  -119,  -119,    92,    -2,  -119,  -119,  -119,    21,  -119,
    -119,  -119,  -119,  -119,   -38,  -119,    -7,  -119,   -14,   -41,
    -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,    20,
    -119,  -118,  -119
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    22,    71,    24,    25,   132,   133,   140,
     109,    77,    26,    52,    27,    28,    65,    30,    63,    64,
      31,    98,    32,    45,   127,    33,    46,   147,    34,    47,
     138,   164,   170,    35,    36,    37,    96,   144,   162,   145,
     155,    72,    38
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      29,     1,    61,    67,   152,    23,    61,     4,   135,    75,
      76,    50,    93,    94,    95,    29,    78,     5,   146,     6,
      49,     7,   153,   154,   141,   142,    39,    99,    40,    66,
      61,    54,   102,    62,    41,    61,    42,    62,    43,    29,
      79,    80,    51,    81,    82,    44,    53,    62,   168,    56,
      55,    68,   171,    73,   129,    74,   101,   103,   104,   105,
     106,    62,    29,    57,   107,   108,    62,    23,   125,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,    91,    92,    93,    94,    95,    58,   137,   126,
     130,    61,   131,    29,   134,   136,   143,   148,    49,   139,
      61,    17,   149,    59,    60,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,   150,    29,
     157,   158,    62,   167,   159,   160,    61,   165,   161,    29,
     163,    62,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    97,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    62,   166,    29,
     169,   100,   151,    29,   156,     0,     0,     0,     0,     0,
       0,     0,   110,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,     0,     0,     0,     0,
       8,     0,     9,    10,    11,     0,     0,     0,    12,     0,
       0,     0,    69,     0,     0,     0,     0,     0,     0,    70,
       0,   111,    13,    14,    15,    16,     0,     0,    17,     0,
       0,     0,    18,    19,    20,    21,     8,     0,     9,    10,
      11,     0,     0,     0,    12,     0,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,    13,    14,
      15,    16,     0,     0,    17,     0,     0,     0,    18,    19,
      20,    21,     8,     0,     9,    10,    11,     0,     0,     0,
      12,     0,     0,     0,     0,   128,     0,     0,     0,     0,
       0,     0,     0,     0,    13,    14,    15,    16,     0,     0,
      17,     0,     0,     0,    18,    19,    20,    21,     8,     0,
       9,    10,    11,     0,     0,     0,    12,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      13,    14,    15,    16,     0,     0,    17,     0,     0,     0,
      18,    19,    20,    21,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    87,    88,    89,    90,
      91,    92,    93,    94,    95
};

static const yytype_int16 yycheck[] =
{
       7,    35,    40,    44,    37,     7,    44,     0,   126,    22,
      23,    21,    13,    14,    15,    22,    54,    40,   136,    41,
      22,    38,    55,    56,    44,    45,    54,    68,    40,    43,
      68,    36,    73,    40,    45,    73,    45,    44,    42,    46,
      54,    55,    52,    57,    58,    40,    45,    54,   166,    45,
      42,    40,   170,    40,    40,    53,    59,    17,    18,    19,
      20,    68,    69,    16,    24,    25,    73,    69,    41,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    11,    12,    13,    14,    15,    40,   129,    41,
      45,   129,    54,   100,    38,    41,    31,   138,   100,    42,
     138,    54,    56,    56,    57,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    42,   126,
      39,    41,   129,   164,    45,    43,   164,    43,    56,   136,
      45,   138,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    43,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,   164,    46,   166,
      41,    69,   141,   170,   144,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,
      26,    -1,    28,    29,    30,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    41,    48,    49,    50,    51,    -1,    -1,    54,    -1,
      -1,    -1,    58,    59,    60,    61,    26,    -1,    28,    29,
      30,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    -1,    -1,    54,    -1,    -1,    -1,    58,    59,
      60,    61,    26,    -1,    28,    29,    30,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    -1,    -1,
      54,    -1,    -1,    -1,    58,    59,    60,    61,    26,    -1,
      28,    29,    30,    -1,    -1,    -1,    34,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      48,    49,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,
      58,    59,    60,    61,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,     7,     8,     9,    10,
      11,    12,    13,    14,    15
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    63,    64,     0,    40,    41,    38,    26,    28,
      29,    30,    34,    48,    49,    50,    51,    54,    58,    59,
      60,    61,    65,    66,    67,    68,    74,    76,    77,    78,
      79,    82,    84,    87,    90,    95,    96,    97,   104,    54,
      40,    45,    45,    42,    40,    85,    88,    91,    39,    66,
      21,    52,    75,    45,    36,    42,    45,    16,    40,    56,
      57,    76,    78,    80,    81,    78,    80,    81,    40,    38,
      45,    66,   103,    40,    53,    22,    23,    73,    76,    80,
      80,    80,    80,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    98,    43,    83,    81,
      65,    59,    81,    17,    18,    19,    20,    24,    25,    72,
      43,    41,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    41,    41,    86,    39,    40,
      45,    54,    69,    70,    38,   103,    41,    81,    92,    42,
      71,    44,    45,    31,    99,   101,   103,    89,    81,    56,
      42,    70,    37,    55,    56,   102,   101,    39,    41,    45,
      43,    56,   100,    45,    93,    43,    46,    81,   103,    41,
      94,   103
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    64,    63,    65,    65,    66,    66,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    68,    69,    69,
      70,    70,    71,    71,    72,    72,    72,    72,    72,    72,
      73,    73,    73,    74,    74,    74,    74,    74,    74,    75,
      75,    75,    76,    76,    77,    78,    78,    79,    79,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    81,    81,    83,
      82,    85,    86,    84,    88,    89,    87,    91,    92,    93,
      94,    90,    95,    96,    98,    97,   100,    99,   101,   101,
     102,   102,   102,   103,   103,   103,   104
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     8,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     6,     3,     1,
       1,     2,     4,     3,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     0,     1,     1,     1,     1,     1,     0,
       1,     1,     3,     3,     2,     1,     1,     4,     4,     3,
       3,     3,     3,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     0,
       6,     0,     0,     7,     0,     0,     9,     0,     0,     0,
       0,    13,     2,     2,     0,     8,     0,     5,     2,     0,
       1,     1,     1,     3,     1,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 89 "ic.y" /* yacc.c:1646  */
    {
			initHash(HASHSIZE);
			createQuadList(&quadTable);
			createBBlockList(&bblockTable);
			createLabelsListHeader(&labelTable);
			strcpy(labelpending," ");
		}
#line 1492 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 97 "ic.y" /* yacc.c:1646  */
    {
			if(errCount == 0)
			{
				printCode(quadTable);
				split2BB(quadTable,&bblockTable);
				printBB(bblockTable);
				constructFlowGraph(bblockTable);
				printFlowGraph(bblockTable);
				printLabelsList(labelTable);
				printf("\n");
				//dispSymbolTableHash();
			}
			destroySymbolTable(HASHSIZE);
			return;
		}
#line 1512 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 136 "ic.y" /* yacc.c:1646  */
    {
					sym.nameLen = strlen((yyvsp[0].attr).name);
                                        sym.name = malloc(sym.nameLen+1);
					strcpy(sym.name,(yyvsp[0].attr).name);
					sym.storage = storeType;
					sym.qualifier = qualifierType;
					sym.sign=signType;
				 	sym.subtype = BASIC; 
				 	sym.datatype = dataType; 
					sym.type = ID;
					sym.width = dataSize; 
					sym.relAddr=relAddr;
					relAddr = relAddr + sym.width;
					addSymbolHash(sym);
				}
#line 1532 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 152 "ic.y" /* yacc.c:1646  */
    {
					sym.nameLen = strlen((yyvsp[-1].attr).name);
                                        sym.name = malloc(sym.nameLen+1);
					strcpy(sym.name,(yyvsp[-1].attr).name);
					sym.storage = storeType;
					sym.qualifier = qualifierType;
					sym.sign=signType;
					sym.type = ID;
				 	sym.subtype = ARRAY; 
				 	sym.datatype = dataType; 
					sym.width = dataSize; 
					totArrayElements = 1;
					if(sym.type == ARRAY)
						sym.dimArray = malloc(sizeof(int) * (dimArray[0]+1));
					totArrayElements = 1;
					for(i = 1;i <= dimArray[0];i++)
						totArrayElements *= dimArray[i];
					sym.relAddr = relAddr;
					sym.dimArray = malloc((dimArray[0]+1)*sizeof(int));
					memcpy(sym.dimArray,dimArray,(dimArray[0]+1) * sizeof(int));
					relAddr=relAddr+totArrayElements * sym.width;
					addSymbolHash(sym);
					numDim = 0;
				}
#line 1561 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 177 "ic.y" /* yacc.c:1646  */
    { 
					dimArray[0]=++numDim;
					dimArray[numDim] = (yyvsp[-1].attr).value.iVal;// atoi($3.name);
				}
#line 1570 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 181 "ic.y" /* yacc.c:1646  */
    {
				  	dimArray[0]=++numDim;
					dimArray[numDim] = (yyvsp[-1].attr).value.iVal;//atoi($2.name);
				}
#line 1579 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 187 "ic.y" /* yacc.c:1646  */
    {
					dataType = CHAR;
					dataSize=sizeof(char);
				}
#line 1588 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 191 "ic.y" /* yacc.c:1646  */
    {
					dataType = SHORT;
					dataSize=sizeof(short int);
				}
#line 1597 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 195 "ic.y" /* yacc.c:1646  */
    {
					dataType  = INT;
					dataSize=sizeof(int);
				}
#line 1606 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 199 "ic.y" /* yacc.c:1646  */
    {
					dataType  = LONG;
					dataSize=sizeof(long int);
				}
#line 1615 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 203 "ic.y" /* yacc.c:1646  */
    {
					dataType  = FLOAT;
					dataSize=sizeof(float);
				}
#line 1624 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 207 "ic.y" /* yacc.c:1646  */
    {
					dataType  = DOUBLE;
					dataSize = sizeof(double);
				}
#line 1633 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 212 "ic.y" /* yacc.c:1646  */
    {
					signType = DEFAULT;
				}
#line 1641 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 215 "ic.y" /* yacc.c:1646  */
    {
					signType = SIGNED;
				}
#line 1649 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 218 "ic.y" /* yacc.c:1646  */
    {
					signType = UNSIGNED;
				}
#line 1657 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 222 "ic.y" /* yacc.c:1646  */
    {
					storeType = DEFAULT;
				}
#line 1665 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 225 "ic.y" /* yacc.c:1646  */
    {
					storeType = AUTO;
				}
#line 1673 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 228 "ic.y" /* yacc.c:1646  */
    {
					storeType = REGISTER;
				}
#line 1681 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 231 "ic.y" /* yacc.c:1646  */
    {
					storeType = STATIC;
				}
#line 1689 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 234 "ic.y" /* yacc.c:1646  */
    {
					storeType = EXTERN;
				}
#line 1697 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 237 "ic.y" /* yacc.c:1646  */
    {
					storeType = TYPEDEF;
				}
#line 1705 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 241 "ic.y" /* yacc.c:1646  */
    {
					qualifierType = DEFAULT;
				}
#line 1713 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 244 "ic.y" /* yacc.c:1646  */
    {
					qualifierType = CONST;
				}
#line 1721 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 247 "ic.y" /* yacc.c:1646  */
    {
					qualifierType = VOLATILE;
				}
#line 1729 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 251 "ic.y" /* yacc.c:1646  */
    {
					(yyval.attr) = (yyvsp[-2].attr);
					opnd2.type = NOP;
					if((yyvsp[-2].attr).subtype==BASIC)
					{
						addCode(quadTable,labelpending,ASSIGN,(yyvsp[0].attr),opnd2,(yyvsp[-2].attr)); 
					}
					else if((yyvsp[-2].attr).subtype == ARRAY || (yyvsp[-2].attr).subtype == OFFSET) //we have clarify how to differentiate bw ARRAY and OFFSET
					{
						opnd2 = (yyvsp[-2].attr);
						strcpy(opnd2.name,(yyvsp[-2].attr).offsetName);
						opnd2.type = TID;
						//opnd2.subtype = BASIC;
						result = (yyvsp[-2].attr);
						strcpy(result.name,(yyvsp[-2].attr).name);
						result.type = TID;
						result.subtype = BASIC;
						addCode(quadTable,labelpending,LASSIGN,(yyvsp[0].attr),opnd2,result); 
						//format:  []= 'rightside value' 'offset' 'baseaddr'
	 				}
					
			      	}
#line 1756 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 273 "ic.y" /* yacc.c:1646  */
    { 
					(yyval.attr)=(yyvsp[-2].attr);
					opnd2.type = NOP;
					if(strcmp((yyvsp[-2].attr).offsetName,"")==0)
					{
						addCode(quadTable,labelpending,ASSIGN,(yyvsp[0].attr),opnd2,(yyvsp[-2].attr)); 
					}
					else
					{
						addCode(quadTable,labelpending,LASSIGN,(yyvsp[-2].attr),(yyvsp[0].attr),(yyvsp[-2].attr)); 
	 				}
			      	}
#line 1773 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 291 "ic.y" /* yacc.c:1646  */
    { 
			if(findSymbolHash((yyvsp[0].attr).name) == NULL)
			{
				printf("%s: %d:Error %s: Undeclared Identifier\n",srcFileName,lineNo-1,(yyvsp[0].attr).name);
				errCount++;
			}
			(yyval.attr)=(yyvsp[0].attr);
			(yyval.attr).subtype = BASIC;
			strcpy((yyval.attr).offsetName,"");
		}
#line 1788 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 301 "ic.y" /* yacc.c:1646  */
    {
			L = findSymbolHash((yyvsp[0].attr).name);  //$1.name holds the lexeme of _id
			if(L == NULL)
			{
				printf("%s: %d:Error %s: Undeclared Identifier\n",srcFileName,lineNo-1,(yyvsp[0].attr).name);
				errCount++;
			}

	   		(yyval.attr).type = TID;
			(yyval.attr).subtype = ARRAY;
			(yyval.attr).datatype = (yyvsp[0].attr).datatype;

			opnd2.type = CONST;			//opnd2 holds the multiplier
			opnd2.subtype = BASIC;
			opnd2.datatype = INT;
			opnd2.value.iVal = L->symbol.width;

			createTemp(result.name);		//result holds the displacement expr
			result.type = TID;
			result.subtype = BASIC;
			result.datatype = INT;
			strcpy((yyval.attr).offsetName,result.name);	

	 		addCode(quadTable,labelpending,MUL,(yyvsp[0].attr),opnd2,result);
			copyAttr2Symbol(result,&sym);
	   		addSymbolHash(sym);
	
			opnd1.type = CONST;			//opnd1 holds the base address from symbol table
			opnd1.subtype = BASIC; 		
			opnd1.datatype = LONG; 		
			opnd1.value.lVal = L->symbol.relAddr;

			opnd2.type=NOP;
	
			createTemp(result.name);		//base address from opnd1 is stored in temp id (result)
			result.type = TID;
			result.subtype = BASIC;
			result.datatype = INT;
	 		addCode(quadTable,labelpending,ASSIGN,opnd1,opnd2,result);
			
			sym = initSymbol();
			copyAttr2Symbol(result,&sym);
	   		addSymbolHash(sym);

			strcpy((yyval.attr).name,result.name);	
	    	}
#line 1839 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 350 "ic.y" /* yacc.c:1646  */
    { 
			noDimensions += 1;
			createTemp((yyval.attr).offsetName);
			strcpy((yyval.attr).name,(yyvsp[-3].attr).name);
			(yyval.attr).type = (yyvsp[-3].attr).type;
			//$$.subtype = ARRAY;
			(yyval.attr).subtype = OFFSET;
			(yyval.attr).datatype = (yyvsp[-3].attr).datatype;
			L = findSymbolHash((yyvsp[-3].attr).name);
			if(L == NULL)
			{
				printf("%s: %d:Error %s: Undeclared Identifier\n",srcFileName,lineNo-1,(yyvsp[-3].attr).name);
				errCount++;
			}
			createTemp(opnd2.name);
			opnd2.type = CONST;
			opnd2.datatype = INT;
			opnd2.value.iVal=L->symbol.dimArray[noDimensions];
	 		addCode(quadTable,labelpending,MUL,(yyvsp[-3].attr),opnd2,(yyval.attr));
	 		addCode(quadTable,labelpending,PLUS,(yyval.attr),(yyvsp[-1].attr),(yyval.attr));
		}
#line 1865 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 372 "ic.y" /* yacc.c:1646  */
    {
			strcpy((yyval.attr).name,(yyvsp[-3].attr).name);   //to propagate the id name
			//createTemp($$.offsetName); 
			(yyval.attr).type=(yyvsp[-3].attr).type;
			(yyval.attr).subtype=OFFSET;
			(yyval.attr).datatype=(yyvsp[-3].attr).datatype;
			strcpy((yyval.attr).offsetName,(yyvsp[-1].attr).name);
			opnd2.type = NOP;
			noDimensions = 1;
		}
#line 1880 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 384 "ic.y" /* yacc.c:1646  */
    {
			   		createTemp((yyval.attr).name);
	 		   		addCode(quadTable,labelpending,PLUS,(yyvsp[-2].attr),(yyvsp[0].attr),(yyval.attr));
			   		(yyval.attr).type = TID;
			   		sym=createTempSymbolWithType((yyvsp[-2].attr),(yyvsp[0].attr),(yyval.attr));
			   		addSymbolHash(sym);
			  	}
#line 1892 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 391 "ic.y" /* yacc.c:1646  */
    {
			   		createTemp((yyval.attr).name);
	 		   		addCode(quadTable,labelpending,MINUS,(yyvsp[-2].attr),(yyvsp[0].attr),(yyval.attr));
			   		(yyval.attr).type = TID;
			   		sym=createTempSymbolWithType((yyvsp[-2].attr),(yyvsp[0].attr),(yyval.attr));
			   		addSymbolHash(sym);
			  	}
#line 1904 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 399 "ic.y" /* yacc.c:1646  */
    {
			   		createTemp((yyval.attr).name);
	 		   		addCode(quadTable,labelpending,MUL,(yyvsp[-2].attr),(yyvsp[0].attr),(yyval.attr));
			   		(yyval.attr).type = TID;
			   		sym=createTempSymbolWithType((yyvsp[-2].attr),(yyvsp[0].attr),(yyval.attr));
			   		addSymbolHash(sym);
                         	}
#line 1916 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 406 "ic.y" /* yacc.c:1646  */
    {
			   		createTemp((yyval.attr).name);
	 		   		addCode(quadTable,labelpending,DIV,(yyvsp[-2].attr),(yyvsp[0].attr),(yyval.attr));
			   		(yyval.attr).type = TID;
			   		sym=createTempSymbolWithType((yyvsp[-2].attr),(yyvsp[0].attr),(yyval.attr));
			   		addSymbolHash(sym);
			 	}
#line 1928 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 413 "ic.y" /* yacc.c:1646  */
    {
			   		createTemp((yyval.attr).name);
	 		   		addCode(quadTable,labelpending,MOD,(yyvsp[-2].attr),(yyvsp[0].attr),(yyval.attr));
			   		(yyval.attr).type = TID;
			   		sym=createTempSymbolWithType((yyvsp[-2].attr),(yyvsp[0].attr),(yyval.attr));
			   		addSymbolHash(sym);
			    	}
#line 1940 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 420 "ic.y" /* yacc.c:1646  */
    {
			  		createTemp((yyval.attr).name);
					opnd2.type = NOP;
			  		addCode(quadTable,labelpending,UMINUS,(yyvsp[0].attr),opnd2, (yyval.attr));
			   		(yyval.attr).type = TID;
			   		sym=copySymbol((yyvsp[0].attr),(yyval.attr).name);
			   		addSymbolHash(sym);
		       		}
#line 1953 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 428 "ic.y" /* yacc.c:1646  */
    {
			  		createTemp((yyval.attr).name);
	 		   		addCode(quadTable,labelpending,LT,(yyvsp[-2].attr),(yyvsp[0].attr),(yyval.attr));
			   		(yyval.attr).type = TID;
			   		sym=createTempSymbolWithType((yyvsp[-2].attr),(yyvsp[0].attr),(yyval.attr));
			   		addSymbolHash(sym);
				}
#line 1965 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 436 "ic.y" /* yacc.c:1646  */
    {
			   		createTemp((yyval.attr).name);
	 		   		addCode(quadTable,labelpending,LE,(yyvsp[-2].attr),(yyvsp[0].attr),(yyval.attr));
			   		(yyval.attr).type = TID;
			   		sym=createTempSymbolWithType((yyvsp[-2].attr),(yyvsp[0].attr),(yyval.attr));
			   		addSymbolHash(sym);
				}
#line 1977 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 443 "ic.y" /* yacc.c:1646  */
    { 
			   		createTemp((yyval.attr).name);
	 		   		addCode(quadTable,labelpending,GE,(yyvsp[-2].attr),(yyvsp[0].attr),(yyval.attr));
			   		(yyval.attr).type = TID;
			   		sym=createTempSymbolWithType((yyvsp[-2].attr),(yyvsp[0].attr),(yyval.attr));
			   		addSymbolHash(sym);
				}
#line 1989 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 450 "ic.y" /* yacc.c:1646  */
    {
			   		createTemp((yyval.attr).name);
	 		   		addCode(quadTable,labelpending,GT,(yyvsp[-2].attr),(yyvsp[0].attr),(yyval.attr));
			   		(yyval.attr).type = TID;
			   		sym=createTempSymbolWithType((yyvsp[-2].attr),(yyvsp[0].attr),(yyval.attr));
			   		addSymbolHash(sym);
				}
#line 2001 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 457 "ic.y" /* yacc.c:1646  */
    { 
			   		createTemp((yyval.attr).name);
	 		   		addCode(quadTable,labelpending,EQ,(yyvsp[-2].attr),(yyvsp[0].attr),(yyval.attr));
			        	(yyval.attr).type = TID;
			   		sym=createTempSymbolWithType((yyvsp[-2].attr),(yyvsp[0].attr),(yyval.attr));
			   		addSymbolHash(sym);
			    	}
#line 2013 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 464 "ic.y" /* yacc.c:1646  */
    {
			   		createTemp((yyval.attr).name);
	 		   		addCode(quadTable,labelpending,NE,(yyvsp[-2].attr),(yyvsp[0].attr),(yyval.attr));
			   		(yyval.attr).type = TID;
			   		sym=createTempSymbolWithType((yyvsp[-2].attr),(yyvsp[0].attr),(yyval.attr));
			   		addSymbolHash(sym);
			      	}
#line 2025 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 471 "ic.y" /* yacc.c:1646  */
    {
			   		createTemp((yyval.attr).name);
	 		   		addCode(quadTable,labelpending,OR,(yyvsp[-2].attr),(yyvsp[0].attr),(yyval.attr));
			   		(yyval.attr).type = TID;
			   		sym=createTempSymbolWithType((yyvsp[-2].attr),(yyvsp[0].attr),(yyval.attr));
			   		addSymbolHash(sym);
				}
#line 2037 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 478 "ic.y" /* yacc.c:1646  */
    { 
			   		createTemp((yyval.attr).name);
	 		   		addCode(quadTable,labelpending,AND,(yyvsp[-2].attr),(yyvsp[0].attr),(yyval.attr));
			   		(yyval.attr).type = TID;
			  		sym=createTempSymbolWithType((yyvsp[-2].attr),(yyvsp[0].attr),(yyval.attr));
			   		addSymbolHash(sym);
			 	}
#line 2049 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 485 "ic.y" /* yacc.c:1646  */
    {
					(yyval.attr) = (yyvsp[-1].attr);
			   		(yyval.attr).type = TID;
				}
#line 2058 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 489 "ic.y" /* yacc.c:1646  */
    {
					if((yyvsp[0].attr).subtype==BASIC)
						(yyval.attr)=(yyvsp[0].attr);
					else if((yyvsp[0].attr).subtype == ARRAY)
					{
						opnd1 = (yyvsp[0].attr);			//opnd1 is the base address of array
						strcpy(opnd1.name,(yyvsp[0].attr).name);
						opnd1.type = TID;
						opnd1.subtype = BASIC;
						opnd1.datatype = (yyvsp[0].attr).datatype;

						opnd2 = (yyvsp[0].attr);		       //opnd2 is the displacement of array
						strcpy(opnd2.name,(yyvsp[0].attr).offsetName);
						opnd2.type = TID;
						opnd2.subtype = BASIC;
						opnd2.datatype = (yyvsp[0].attr).datatype;

						(yyval.attr) = (yyvsp[0].attr);
			   			createTemp((yyval.attr).name);
						(yyval.attr).type=TID;
						(yyval.attr).subtype=ARRAY;
						(yyval.attr).datatype=(yyvsp[0].attr).datatype;
						printf("RASSIGN = %d\n",RASSIGN);
	 		   			addCode(quadTable,labelpending,RASSIGN,opnd1,opnd2,(yyval.attr));
						sym = initSymbol();
						copyAttr2Symbol((yyval.attr),&sym);
			   			addSymbolHash(sym);
						
					}
				}
#line 2093 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 519 "ic.y" /* yacc.c:1646  */
    {
					(yyval.attr) = (yyvsp[0].attr);
				}
#line 2101 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 522 "ic.y" /* yacc.c:1646  */
    {
					(yyval.attr)=(yyvsp[0].attr);
				}
#line 2109 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 527 "ic.y" /* yacc.c:1646  */
    {
					(yyval.attr) = (yyvsp[0].attr);
				}
#line 2117 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 530 "ic.y" /* yacc.c:1646  */
    {
					(yyval.attr) = (yyvsp[0].attr);
				}
#line 2125 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 535 "ic.y" /* yacc.c:1646  */
    {
					createLabel((yyvsp[-2].tflabel).falseLabel);
					opnd2.type = CONST;
					opnd2.datatype = INT;
					opnd2.value.iVal = 0;
					createTemp(result.name);
//					result.type = CONST;
					result.type = LABEL;
					strcpy(result.name,(yyvsp[-2].tflabel).falseLabel);
					//result.datatype = FALSE;
//					result.value.string = malloc(strlen($1.falseLabel)+1);
					addCode(quadTable,labelpending,IFEQ,(yyvsp[0].attr),opnd2,result);
                              	}
#line 2143 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 548 "ic.y" /* yacc.c:1646  */
    {
                                	strcpy(labelpending,(yyvsp[-5].tflabel).falseLabel);
					opnd1.type=NOP;
					opnd2.type=NOP;
					result.type=NOP;
					addCode(quadTable,labelpending,NOP,opnd1,opnd2,result);
				}
#line 2155 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 557 "ic.y" /* yacc.c:1646  */
    { 
					createLabel((yyvsp[0].tflabel).trueLabel); 
printf("In while->%s: ....\n",(yyvsp[0].tflabel).trueLabel);
					strcpy(labelpending,(yyvsp[0].tflabel).trueLabel);
				}
#line 2165 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 562 "ic.y" /* yacc.c:1646  */
    {
				      	createLabel((yyvsp[-3].tflabel).falseLabel);
printf("In while->%s: ....\n",(yyvsp[-3].tflabel).falseLabel);
					opnd2.type = CONST;
					opnd2.datatype = INT;
					opnd2.value.iVal = 0;
					createTemp(result.name);
					result.type = LABEL;
					strcpy(result.name,(yyvsp[-3].tflabel).falseLabel);
					addCode(quadTable,labelpending,IFEQ,(yyvsp[0].attr),opnd2,result);
				}
#line 2181 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 573 "ic.y" /* yacc.c:1646  */
    {
					opnd1.type = NOP;
					opnd2.type = NOP;
					result.type = LABEL;
					strcpy(result.name,(yyvsp[-6].tflabel).trueLabel);
					addCode(quadTable," ",GOTO,opnd1, opnd2,result);
                                	strcpy(labelpending,(yyvsp[-6].tflabel).falseLabel);
					opnd1.type=NOP;
					opnd2.type=NOP;
					result.type=NOP;
					addCode(quadTable,labelpending,NOP,opnd1,opnd2,result);
				}
#line 2198 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 587 "ic.y" /* yacc.c:1646  */
    {
					createLabel((yyvsp[0].tflabel).trueLabel);
					strcpy(labelpending, (yyvsp[0].tflabel).trueLabel);
	      			}
#line 2207 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 592 "ic.y" /* yacc.c:1646  */
    {
					createLabel((yyvsp[-5].tflabel).falseLabel);
					opnd2.type = CONST;
					opnd2.datatype = INT;
					opnd2.value.iVal = 0;
					createTemp(result.name);
					//result.type = CONST;
					result.type = LABEL;
					//result.datatype = FALSE;
					strcpy(result.name,(yyvsp[-5].tflabel).falseLabel);
					addCode(quadTable,labelpending,IFEQ,(yyvsp[0].attr),opnd2,result);
					opnd1.type = NOP;
					opnd2.type = NOP;
					createTemp(result.name);
					//result.type = CONST;
					result.type = LABEL;
					//result.datatype = TRUE;
					strcpy(result.name,(yyvsp[-5].tflabel).trueLabel);
					addCode(quadTable," ",GOTO,opnd1,opnd2,result);
                        		strcpy(labelpending,(yyvsp[-5].tflabel).falseLabel);
					opnd1.type=NOP;
					opnd2.type=NOP;
					result.type=NOP;
					addCode(quadTable,labelpending,NOP,opnd1,opnd2,result);
				}
#line 2237 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 620 "ic.y" /* yacc.c:1646  */
    {
					createLabel((yyvsp[0].forLabel).cond2Label);
					createLabel((yyvsp[0].forLabel).cond3Label);
					createLabel((yyvsp[0].forLabel).cond2TestLabel);
					createLabel((yyvsp[0].forLabel).nextStmtLabel);
				}
#line 2248 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 626 "ic.y" /* yacc.c:1646  */
    { 
					strcpy(labelpending,(yyvsp[-4].forLabel).cond2Label);
				}
#line 2256 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 629 "ic.y" /* yacc.c:1646  */
    {
					result.type=LABEL;
					strcpy(result.name,(yyvsp[-7].forLabel).cond2TestLabel);
					opnd1.type=NOP;
					opnd2.type=NOP;
					addCode(quadTable," ",GOTO,opnd1,opnd2,result);
					//addCode(quadTable," ",GOTO," "," ",$1.cond2TestLabel);
					strcpy(labelpending,(yyvsp[-7].forLabel).cond3Label);
				}
#line 2270 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 638 "ic.y" /* yacc.c:1646  */
    {
					result.type=LABEL;
					strcpy(result.name,(yyvsp[-10].forLabel).cond2Label);
					opnd1.type=NOP;
					opnd2.type=NOP;
					addCode(quadTable," ",GOTO,opnd1,opnd2,result);
					strcpy(labelpending,(yyvsp[-10].forLabel).cond2TestLabel);
					opnd2.type = CONST;
					opnd2.datatype = INT;
					opnd2.value.iVal = 0;
					result.type=LABEL;
					strcpy(result.name,(yyvsp[-10].forLabel).nextStmtLabel);
		     			addCode(quadTable,labelpending,IFEQ,(yyvsp[-4].attr),opnd2,result);
				}
#line 2289 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 652 "ic.y" /* yacc.c:1646  */
    {
					opnd1.type = NOP;
					opnd2.type = NOP;
					result.type=LABEL;
					strcpy(result.name,(yyvsp[-12].forLabel).cond3Label);
					addCode(quadTable," ",GOTO,opnd1,opnd2,result); 
					strcpy(labelpending,(yyvsp[-12].forLabel).nextStmtLabel);
					opnd1.type=NOP;
					opnd2.type=NOP;
					result.type=NOP;
					addCode(quadTable,labelpending,NOP,opnd1,opnd2,result);
				}
#line 2306 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 672 "ic.y" /* yacc.c:1646  */
    {
					createTemp(switchFlagName);
					strcpy(switchExpResult,(yyvsp[0].attr).name); 
					result.type=LABEL;
					strcpy(result.name,switchFlagName);
					opnd1.type = CONST;
					opnd1.datatype = INT;
					opnd1.value.iVal = 0;
					opnd2.type = NOP;
					addCode(quadTable," ",EQ,opnd1,opnd2,result);
				}
#line 2322 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 686 "ic.y" /* yacc.c:1646  */
    {
					createTemp(result.name);
					result.type = TID;
					opnd2.type = CONST;
					opnd2.datatype = INT;
					opnd2.value.iVal = (yyvsp[0].attr).value.iVal;
					strcpy(opnd1.name,switchExpResult);
					opnd1.type = TID;
	 		      		addCode(quadTable,labelpending,NE,opnd1,opnd2,result);
			      		createTemp(result.name); //str);
					result.type = TID;
			      		createTemp(opnd1.name); //str);
					opnd1.type = TID;
					strcpy(opnd1.name,switchFlagName); 
	 		      		addCode(quadTable,labelpending,OR,opnd1,opnd2,result); 
                              		createLabel(tempLabel);
					result.type=LABEL;
					strcpy(result.name,tempLabel);
					opnd2.type = CONST;
					opnd2.datatype = INT;
					opnd2.value.iVal = 0;
		              		addCode(quadTable,labelpending,IFEQ,opnd1,opnd2,result);
	            		}
#line 2350 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 709 "ic.y" /* yacc.c:1646  */
    { 
					createTemp(result.name);
					result.type = TID;
					strcpy(result.name,switchFlagName); 
					opnd1.type = CONST;
					opnd1.datatype = INT;
					opnd1.value.iVal = 1;
					opnd2.type=NOP;
					addCode(quadTable," ",EQ,opnd1,opnd2,result);
					strcpy(labelpending,tempLabel);
					opnd1.type=NOP;
					opnd2.type=NOP;
					result.type=NOP;
					addCode(quadTable,labelpending,NOP,opnd1,opnd2,result);
				}
#line 2370 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 730 "ic.y" /* yacc.c:1646  */
    {
					(yyval.attr) = (yyvsp[0].attr);
				}
#line 2378 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 733 "ic.y" /* yacc.c:1646  */
    {
					(yyval.attr) = (yyvsp[0].attr);
				}
#line 2386 "ic.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 736 "ic.y" /* yacc.c:1646  */
    {
					(yyval.attr).type = CONST;
					(yyval.attr).datatype = INT;
					(yyval.attr).value.iVal=999;
				}
#line 2396 "ic.tab.c" /* yacc.c:1646  */
    break;


#line 2400 "ic.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 751 "ic.y" /* yacc.c:1906  */


int yyerror(char *errmsg)
{
	printf("Error has occurred\n",errmsg);
	exit(-1);
}

