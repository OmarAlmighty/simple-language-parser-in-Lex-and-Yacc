/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "CalculatorAndLoopYaccV3.txt"

	#include <stdio.h>
    #include <string.h>
    const double XXX = -99.999;
    const int in_sym = 0;
    const int in_txt = 1;
    const int in_fun = 2;
    
	int yylex(void);
	void yyerror(char *);
	double sym[26];
	double buf[100];
	char k[100];
    char *txt[100] = {NULL};
    double fun[26];
    int isDec(int z);
    int errFlag = 0;// 0 means no errors, 1 means an error

/* Line 371 of yacc.c  */
#line 87 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     NUMBER = 259,
     STRING = 260,
     WHILE = 261,
     IF = 262,
     FOR = 263,
     INT = 264,
     DOUBLE = 265,
     BOOL = 266,
     SWITCH = 267,
     DISP = 268,
     DISPLN = 269,
     TEXT = 270,
     DEF = 271,
     RT = 272,
     UMINUS = 273
   };
#endif
/* Tokens.  */
#define ID 258
#define NUMBER 259
#define STRING 260
#define WHILE 261
#define IF 262
#define FOR 263
#define INT 264
#define DOUBLE 265
#define BOOL 266
#define SWITCH 267
#define DISP 268
#define DISPLN 269
#define TEXT 270
#define DEF 271
#define RT 272
#define UMINUS 273



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 20 "CalculatorAndLoopYaccV3.txt"

	double dval;
	int id;
    char *string;


/* Line 387 of yacc.c  */
#line 173 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 201 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   320

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  11
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNRULES -- Number of states.  */
#define YYNSTATES  162

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   273

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      25,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,     2,     2,    23,     2,     2,
      26,    27,    21,    19,    36,    20,     2,    22,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    32,    30,
      34,     3,    33,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    31,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    28,     2,    29,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    24
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,     8,    10,    18,    26,    38,    46,
      48,    50,    52,    54,    56,    58,    59,    64,    69,    74,
      79,    84,    89,    94,    99,   100,   111,   121,   122,   124,
     129,   131,   135,   139,   143,   147,   151,   155,   159,   163,
     167,   171,   175,   179,   183,   187,   191,   194,   197,   201,
     205,   209,   213,   217,   221,   223,   224,   229,   234,   239,
     244,   248,   252,   256,   260,   264,   268,   281,   294,   298,
     302,   304,   306
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      38,     0,    -1,    38,    39,    25,    -1,    -1,    43,    -1,
       7,    26,    45,    27,    28,    39,    29,    -1,     8,    26,
      45,    27,    28,    39,    29,    -1,     9,    26,    40,    30,
      45,    30,    43,    27,    28,    39,    29,    -1,    13,    26,
       4,    27,    28,    42,    29,    -1,    40,    -1,    45,    -1,
      44,    -1,    41,    -1,    46,    -1,     1,    -1,    -1,    10,
       4,     3,    43,    -1,    11,     4,     3,    43,    -1,    12,
       4,     3,    45,    -1,    16,     4,     3,     6,    -1,    14,
      26,     4,    27,    -1,    14,    26,     6,    27,    -1,    15,
      26,     4,    27,    -1,    15,    26,     6,    27,    -1,    -1,
      31,    26,    45,    27,    32,    28,    39,    29,    30,    42,
      -1,    31,    26,    45,    27,    32,    28,    39,    29,    30,
      -1,    -1,     5,    -1,     4,    26,    47,    27,    -1,     4,
      -1,     4,    19,     4,    -1,     4,    20,     4,    -1,     4,
      21,     4,    -1,     4,    22,     4,    -1,     4,    23,     4,
      -1,     4,    19,    43,    -1,     4,    20,    43,    -1,     4,
      21,    43,    -1,     4,    22,    43,    -1,     4,    23,    43,
      -1,    43,    19,     4,    -1,    43,    20,     4,    -1,    43,
      21,     4,    -1,    43,    22,     4,    -1,    43,    23,     4,
      -1,    20,    43,    -1,    20,     4,    -1,    43,    19,    43,
      -1,    43,    20,    43,    -1,    43,    22,    43,    -1,    43,
      21,    43,    -1,    43,    23,    43,    -1,    26,    43,    27,
      -1,    44,    -1,    -1,     4,    19,     3,    43,    -1,     4,
      20,     3,    43,    -1,     4,    21,     3,    43,    -1,     4,
      22,     3,    43,    -1,    43,    33,    43,    -1,    43,    34,
      43,    -1,    43,    34,    43,    -1,    43,    33,    43,    -1,
      43,     3,    43,    -1,    43,    35,    43,    -1,    17,     4,
      26,    47,    27,    28,    39,    18,    26,    43,    27,    29,
      -1,    17,     4,    26,    47,    27,    28,    39,    18,    26,
       4,    27,    29,    -1,     4,    36,    47,    -1,    40,    36,
      47,    -1,     4,    -1,    40,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    40,    40,    41,    45,    50,    97,   107,   150,   151,
     152,   153,   154,   155,   156,   157,   161,   171,   180,   191,
     209,   223,   226,   240,   242,   245,   246,   247,   250,   251,
     260,   269,   278,   287,   296,   310,   320,   329,   338,   347,
     359,   369,   378,   387,   396,   408,   418,   419,   428,   429,
     430,   435,   436,   437,   438,   439,   443,   454,   465,   476,
     495,   500,   505,   510,   515,   520,   529,   536,   553,   554,
     555,   556,   557
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "'='", "ID", "NUMBER", "STRING", "WHILE",
  "IF", "FOR", "INT", "DOUBLE", "BOOL", "SWITCH", "DISP", "DISPLN", "TEXT",
  "DEF", "RT", "'+'", "'-'", "'*'", "'/'", "'%'", "UMINUS", "'\\n'", "'('",
  "')'", "'{'", "'}'", "';'", "'c'", "':'", "'>'", "'<'", "'!'", "','",
  "$accept", "s", "stmt", "dec", "print", "caseStmt", "expr", "eqAssign",
  "cond", "func", "parms", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    61,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,    43,
      45,    42,    47,    37,   273,    10,    40,    41,   123,   125,
      59,    99,    58,    62,    60,    33,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    38,    38,    39,    39,    39,    39,    39,    39,
      39,    39,    39,    39,    39,    39,    40,    40,    40,    40,
      41,    41,    41,    41,    41,    42,    42,    42,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    44,    44,    44,    44,
      45,    45,    45,    45,    45,    45,    46,    46,    47,    47,
      47,    47,    47
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     1,     7,     7,    11,     7,     1,
       1,     1,     1,     1,     1,     0,     4,     4,     4,     4,
       4,     4,     4,     4,     0,    10,     9,     0,     1,     4,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     3,     3,
       3,     3,     3,     3,     1,     0,     4,     4,     4,     4,
       3,     3,     3,     3,     3,     3,    12,    12,     3,     3,
       1,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,    14,    30,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,    55,     0,
       9,    12,     4,    54,    10,    13,    55,    55,    55,    55,
      55,    72,    55,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    46,    54,     0,     2,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    30,    36,
      55,    30,    37,    55,    30,    38,    55,    30,    39,    30,
      40,    70,    71,     0,     0,     0,     0,     0,    55,    55,
      55,     0,     0,     0,     0,     0,     0,    72,    53,    64,
      30,    48,    30,    49,    30,    51,    30,    50,    30,    52,
      60,    61,    65,    56,    57,    58,    59,    72,    72,    29,
       0,     0,    55,    16,    17,    18,     0,    20,    21,    22,
      23,    19,     0,    68,    69,     0,     0,     0,    27,     0,
       0,     0,    55,     0,     0,     0,     5,     6,     0,    55,
       8,     0,     0,     0,     0,     0,     0,    55,     0,     0,
       0,     0,     7,     0,     0,     0,     0,    67,    66,     0,
      26,    25
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    19,    20,    21,   134,    22,    45,    24,    25,
      73
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -78
static const yytype_int16 yypact[] =
{
     -78,   146,   -78,   -78,   294,   -78,   -17,   -11,    16,    39,
      52,    53,    33,    34,    41,    65,    71,     2,    93,    55,
     -78,   -78,    51,   112,   -78,   -78,    26,    74,    85,    88,
     102,   260,    93,    93,     8,    84,    92,    96,    97,    17,
      49,    99,    77,    78,   -78,   -78,   267,   -78,    93,   113,
     116,   236,   239,   241,    93,    93,    93,    93,   294,     4,
      93,   294,     4,    93,   294,   -78,    93,   294,   -78,   294,
     -78,    73,    76,   100,    51,   105,   108,   110,    93,    93,
      93,   111,   118,   121,   137,   143,   109,   260,   -78,   154,
     294,     4,   294,     4,   294,   -78,   294,   -78,   294,   -78,
     154,   154,   154,   154,   154,   154,   154,   260,   260,   -78,
      98,   101,    93,   154,   154,   -78,   115,   -78,   -78,   -78,
     -78,   -78,   151,   -78,   -78,   181,   181,   153,   156,   171,
     176,   177,    93,   182,   180,   216,   -78,   -78,   276,    93,
     -78,   193,   184,   186,   192,   181,   190,   243,   223,   225,
     258,   285,   -78,   181,   226,   228,   229,   -78,   -78,   224,
     156,   -78
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -78,   -78,   -77,   -26,   -78,   106,   -16,    -1,   -29,   -78,
     -42
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -56
static const yytype_int16 yytable[] =
{
      23,    44,    46,    75,    76,    72,    43,     5,    77,    32,
      59,    62,    65,    68,    70,    33,    74,    74,     9,    10,
      11,    82,    17,    83,    15,    51,    52,    53,    18,    57,
      58,     5,    89,    91,    93,    95,    97,    99,   100,   101,
     102,   103,    34,    35,   104,   122,    17,   105,   130,   131,
     106,   115,    18,    84,    48,    85,    36,    37,   141,    38,
      39,    72,   113,   114,    74,   123,   124,    40,   148,    41,
      49,    50,    51,    52,    53,    42,   156,    60,    61,     5,
      47,    72,    72,   127,    54,    55,    56,    78,    63,    64,
       5,    66,    67,     5,    17,    79,    74,     4,     5,    80,
      18,    81,    86,    87,    31,    17,    69,     5,    17,   107,
     143,    18,   108,    17,    18,   121,   138,    90,     5,    18,
      92,     5,    17,    74,    23,    23,   125,   109,    18,   126,
     -11,   151,   110,    17,    23,   111,    17,   -11,   116,    18,
     112,   -11,    18,   128,    23,   117,     2,     3,   118,   -55,
       4,     5,    23,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,   119,   -55,    17,   -55,   -55,   -55,
     120,   -15,    18,    49,    50,    51,    52,    53,   129,   -55,
     -55,   -55,     3,   132,   -55,     4,     5,   133,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,   135,
     -55,    17,   -55,   -55,   -55,   136,   137,    18,   139,   140,
     -15,   144,   145,   146,   -55,   -55,   -55,     3,   147,   -55,
       4,     5,   149,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,   -15,   -55,    17,   -55,   -55,   -55,
      94,     5,    18,    96,     5,    98,     5,   150,     5,   -55,
     -55,   -55,   152,   153,   160,   157,    17,   158,   159,    17,
       0,    17,    18,    17,    71,    18,   161,    18,     0,    18,
       9,    10,    11,     0,     0,     0,    15,    26,    27,    28,
      29,    30,     0,     0,    31,   154,    49,    50,    51,    52,
      53,     0,     0,     0,    88,    49,    50,    51,    52,    53,
       0,     0,     0,   142,    49,    50,    51,    52,    53,     0,
       0,     0,   155,    26,    27,    28,    29,    30,     0,     0,
      31
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-78)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       1,    17,    18,    32,    33,    31,     4,     5,    34,    26,
      26,    27,    28,    29,    30,    26,    32,    33,    10,    11,
      12,     4,    20,     6,    16,    21,    22,    23,    26,     3,
       4,     5,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    26,     4,    60,    87,    20,    63,   125,   126,
      66,    80,    26,     4,     3,     6,     4,     4,   135,    26,
      26,    87,    78,    79,    80,   107,   108,    26,   145,     4,
      19,    20,    21,    22,    23,     4,   153,     3,     4,     5,
      25,   107,   108,   112,    33,    34,    35,     3,     3,     4,
       5,     3,     4,     5,    20,     3,   112,     4,     5,     3,
      26,     4,     3,    26,    26,    20,     4,     5,    20,    36,
     139,    26,    36,    20,    26,     6,   132,     4,     5,    26,
       4,     5,    20,   139,   125,   126,    28,    27,    26,    28,
      18,   147,    27,    20,   135,    27,    20,    25,    27,    26,
      30,    29,    26,    28,   145,    27,     0,     1,    27,     3,
       4,     5,   153,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    27,    19,    20,    21,    22,    23,
      27,    25,    26,    19,    20,    21,    22,    23,    27,    33,
      34,    35,     1,    30,     3,     4,     5,    31,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    28,
      19,    20,    21,    22,    23,    29,    29,    26,    26,    29,
      29,    18,    28,    27,    33,    34,    35,     1,    26,     3,
       4,     5,    32,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       4,     5,    26,     4,     5,     4,     5,     4,     5,    33,
      34,    35,    29,    28,    30,    29,    20,    29,    29,    20,
      -1,    20,    26,    20,     4,    26,   160,    26,    -1,    26,
      10,    11,    12,    -1,    -1,    -1,    16,    19,    20,    21,
      22,    23,    -1,    -1,    26,    27,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    27,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    27,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    27,    19,    20,    21,    22,    23,    -1,    -1,
      26
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,     0,     1,     4,     5,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    20,    26,    39,
      40,    41,    43,    44,    45,    46,    19,    20,    21,    22,
      23,    26,    26,    26,    26,     4,     4,     4,    26,    26,
      26,     4,     4,     4,    43,    44,    43,    25,     3,    19,
      20,    21,    22,    23,    33,    34,    35,     3,     4,    43,
       3,     4,    43,     3,     4,    43,     3,     4,    43,     4,
      43,     4,    40,    47,    43,    45,    45,    40,     3,     3,
       3,     4,     4,     6,     4,     6,     3,    26,    27,    43,
       4,    43,     4,    43,     4,    43,     4,    43,     4,    43,
      43,    43,    43,    43,    43,    43,    43,    36,    36,    27,
      27,    27,    30,    43,    43,    45,    27,    27,    27,    27,
      27,     6,    47,    47,    47,    28,    28,    45,    28,    27,
      39,    39,    30,    31,    42,    28,    29,    29,    43,    26,
      29,    39,    27,    45,    18,    28,    27,    26,    39,    32,
       4,    43,    29,    28,    27,    27,    39,    29,    29,    29,
      30,    42
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
      yychar = YYLEX;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
/* Line 1792 of yacc.c  */
#line 45 "CalculatorAndLoopYaccV3.txt"
    {
                                                        if (errFlag == 0)
                                                            printf("Expression result: %g\n", (yyvsp[(1) - (1)].dval));
                                                        errFlag = 0;
                                                    }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 50 "CalculatorAndLoopYaccV3.txt"
    {
							int op1 = (int)buf[0];
							int re = (int)buf[1];
							int op2 = (int)buf[2];
							int counter = -1;

							if (re == 0){
								while(op1 >= op2){
								op1--;
								counter++;
								}
							}else if(re == 1){
								while(op1 <= op2){
								op1++;
								counter++;
								}
							}else if (re == 2){
								while(op1 < op2){
								op1++;
								counter++;
								}
							}else if (re == 3){
								while(op1 > op2){
								op1--;
								counter++;
								}
							}else if (re == 4){
								while(op1 == op2){
								op1--;
								counter++;
								}
							}else if (re ==5){
								while(op1 != op2){
								if(op1 > op2)
								   op1--;
								else
								   op1++;
								counter++;
								}
							}
							printf("The counter is: %d\n",counter);
							}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 97 "CalculatorAndLoopYaccV3.txt"
    {
							                            int op1 = (int)buf[0];
							                            int re = (int)buf[1];
							                            int op2 = (int)buf[2];
							                            if((yyvsp[(3) - (7)].dval))
							                                printf("True\n");
							                            else
                                                            printf("False]n");
                                                    }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 107 "CalculatorAndLoopYaccV3.txt"
    {
							int op1 = (int)buf[0];
							int re = (int)buf[1];
							int op2 = (int)buf[2];
							int counter = -1;

							if (re == 0){
								while(op1 >= op2){
								op1--;
								counter++;
								}
							}else if(re == 1){
								while(op1 <= op2){
								op1++;
								counter++;
								}
							}else if (re == 2){
								while(op1 < op2){
								op1++;
								counter++;
								}
							}else if (re == 3){
								while(op1 > op2){
								op1--;
								counter++;
								}
							}else if (re == 4){
								while(op1 == op2){
								op1--;
								counter++;
								}
							}else if (re ==5){
								while(op1 != op2){
								if(op1 > op2)
								   op1--;
								else
								   op1++;
								counter++;
								}
							}
							printf("The counter is: %d\n",counter);
							}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 150 "CalculatorAndLoopYaccV3.txt"
    {printf("Accepted switch\n");}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 161 "CalculatorAndLoopYaccV3.txt"
    {   
                                                        if(isDec((yyvsp[(2) - (4)].id))==-1)
                                                        {
                                                            (yyvsp[(4) - (4)].dval) = (int)(yyvsp[(4) - (4)].dval);
                                                            sym[(yyvsp[(2) - (4)].id)] = (yyvsp[(4) - (4)].dval);
                                                        }else
                                                        {
                                                            printf("Error: ID is already defined\n");
                                                        }
                                                    }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 171 "CalculatorAndLoopYaccV3.txt"
    {   if(isDec((yyvsp[(2) - (4)].id))==-1)
                                                        {
                                                            (yyvsp[(4) - (4)].dval) = (double)(yyvsp[(4) - (4)].dval);
                                                            sym[(yyvsp[(2) - (4)].id)] = (yyvsp[(4) - (4)].dval);
                                                        }else
                                                        {
                                                            printf("Error: ID is already defined\n");
                                                        }
                                                    }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 180 "CalculatorAndLoopYaccV3.txt"
    {
                                                        if(isDec((yyvsp[(2) - (4)].id))==-1)
                                                        {
                                                             sym[(yyvsp[(2) - (4)].id)] = (yyvsp[(4) - (4)].dval);
                                                        }else
                                                        {
                                                            printf("Error: ID is already defined\n");
                                                        }
                                                       
                                                    }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 191 "CalculatorAndLoopYaccV3.txt"
    {
                                                        if(isDec((yyvsp[(2) - (4)].id))==-1)
                                                        {
                                                            txt[(yyvsp[(2) - (4)].id)] = (yyvsp[(4) - (4)].string);
                                                            for(int i = 0; i<strlen((yyvsp[(4) - (4)].string));i++){
                                                                k[i] = (yyvsp[(4) - (4)].string)[i];
                                                            }
                                                        }else
                                                        {
                                                            printf("Error: ID is already defined\n");
                                                        }
                                                    }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 209 "CalculatorAndLoopYaccV3.txt"
    { int c  = isDec((yyvsp[(3) - (4)].id));
                                    if(c == -1)
                                        printf("ID not declared\n");
                                    else if (c == in_sym)
                                        printf("%g",sym[(yyvsp[(3) - (4)].id)]);
                                    else if (c == in_txt){
				                        txt[(yyvsp[(3) - (4)].id)] = k;
                                        printf("%s",txt[(yyvsp[(3) - (4)].id)]);
					                    for(int i = 0;i<strlen(k);i++){
					                    k[i] = '\0';
					                    }
					                }
                                }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 223 "CalculatorAndLoopYaccV3.txt"
    {(yyvsp[(3) - (4)].string)[strlen((yyvsp[(3) - (4)].string))-1] = '\0';
                                printf("%s",(yyvsp[(3) - (4)].string));}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 226 "CalculatorAndLoopYaccV3.txt"
    { int c  = isDec((yyvsp[(3) - (4)].id));
                                    if(c == -1)
                                        printf("ID not declared\n");
                                    else if (c == in_sym)
                                        printf("%g\n",sym[(yyvsp[(3) - (4)].id)]);
                                    else if (c == in_txt){
				                        txt[(yyvsp[(3) - (4)].id)] = k;
                                        printf("%s\n",txt[(yyvsp[(3) - (4)].id)]);
					                    for(int i = 0;i<strlen(k);i++){
					                    k[i] = '\0';
					                    }
					                }
                                }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 240 "CalculatorAndLoopYaccV3.txt"
    {(yyvsp[(3) - (4)].string)[strlen((yyvsp[(3) - (4)].string))-1] = '\0';
                                printf("%s\n",(yyvsp[(3) - (4)].string));}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 250 "CalculatorAndLoopYaccV3.txt"
    {(yyval.dval) = (yyvsp[(1) - (1)].dval);}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 251 "CalculatorAndLoopYaccV3.txt"
    {
                        int c = isDec((yyvsp[(1) - (4)].id));
                        if(c == in_fun){
                            printf("%g\n",fun[(yyvsp[(1) - (4)].id)]);
                        }else{
                            printf("ID is not declared -> as a function\n");
                        }
                        errFlag = 1;
                    }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 260 "CalculatorAndLoopYaccV3.txt"
    {
                    if (isDec((yyvsp[(1) - (1)].id)) == in_sym)
                        (yyval.dval) = sym[(yyvsp[(1) - (1)].id)];
                    else
                    {
                        errFlag = 1;
                        printf("ID is not declared -> as a number\n");
                    }
                }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 269 "CalculatorAndLoopYaccV3.txt"
    {
                    if (isDec((yyvsp[(1) - (3)].id)) == in_sym && isDec((yyvsp[(3) - (3)].id)) == in_sym)
                        (yyval.dval) = sym[(yyvsp[(1) - (3)].id)]+sym[(yyvsp[(3) - (3)].id)];
                    else
                    {
                        errFlag = 1;
                        printf("ID is not declared -> as a number\n");
                    }
                }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 278 "CalculatorAndLoopYaccV3.txt"
    {
                    if (isDec((yyvsp[(1) - (3)].id)) == in_sym && isDec((yyvsp[(3) - (3)].id)) == in_sym)
                        (yyval.dval) = sym[(yyvsp[(1) - (3)].id)]-sym[(yyvsp[(3) - (3)].id)];
                    else
                    {
                        errFlag = 1;
                        printf("ID is not declared -> as a number\n");
                    }
                }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 287 "CalculatorAndLoopYaccV3.txt"
    {
                    if (isDec((yyvsp[(1) - (3)].id)) == in_sym && isDec((yyvsp[(3) - (3)].id)) == in_sym)
                        (yyval.dval) = sym[(yyvsp[(1) - (3)].id)]*sym[(yyvsp[(3) - (3)].id)];
                    else
                    {
                        errFlag = 1;
                        printf("ID is not declared -> as a number\n");
                    }
                }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 296 "CalculatorAndLoopYaccV3.txt"
    {
                    
                    if (isDec((yyvsp[(1) - (3)].id)) == in_sym && isDec((yyvsp[(3) - (3)].id)) == in_sym)
                        if(sym[(yyvsp[(3) - (3)].id)] == 0)
				            yyerror("divide by zero not allowed");
			            else
				            (yyval.dval) = sym[(yyvsp[(1) - (3)].id)]/sym[(yyvsp[(3) - (3)].id)];
                    else
                    {
                        errFlag = 1;
                        printf("ID is not declared -> as a number\n");
                    }
                }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 310 "CalculatorAndLoopYaccV3.txt"
    {
                    if (isDec((yyvsp[(1) - (3)].id)) == in_sym && isDec((yyvsp[(3) - (3)].id)) == in_sym)
                        (yyval.dval) = ((int)sym[(yyvsp[(1) - (3)].id)])%((int)sym[(yyvsp[(3) - (3)].id)]);
                    else
                    {
                        errFlag = 1;
                        printf("ID is not declared -> as a number\n");
                    }
                }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 320 "CalculatorAndLoopYaccV3.txt"
    {
                    if (isDec((yyvsp[(1) - (3)].id)) == in_sym)
                        (yyval.dval) = sym[(yyvsp[(1) - (3)].id)]+(yyvsp[(3) - (3)].dval);
                    else
                    {
                        errFlag = 1;
                        printf("ID is not declared -> as a number\n");
                    }
                }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 329 "CalculatorAndLoopYaccV3.txt"
    {
                    if (isDec((yyvsp[(1) - (3)].id)) == in_sym)
                        (yyval.dval) = sym[(yyvsp[(1) - (3)].id)]-(yyvsp[(3) - (3)].dval);
                    else
                    {
                        errFlag = 1;
                        printf("ID is not declared -> as a number\n");
                    }
                }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 338 "CalculatorAndLoopYaccV3.txt"
    {
                    if (isDec((yyvsp[(1) - (3)].id)) == in_sym)
                        (yyval.dval) = sym[(yyvsp[(1) - (3)].id)]*(yyvsp[(3) - (3)].dval);
                    else
                    {
                        errFlag = 1;
                        printf("ID is not declared -> as a number\n");
                    }
                }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 347 "CalculatorAndLoopYaccV3.txt"
    {
                    if (isDec((yyvsp[(1) - (3)].id)) == in_sym)
                        if((yyvsp[(3) - (3)].dval) == 0)
				            yyerror("divide by zero not allowed");
			            else
				            (yyval.dval) = sym[(yyvsp[(1) - (3)].id)]/(yyvsp[(3) - (3)].dval);
                    else
                    {
                        errFlag = 1;
                        printf("ID is not declared -> as a number\n");
                    }            
                }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 359 "CalculatorAndLoopYaccV3.txt"
    {    
                    if (isDec((yyvsp[(1) - (3)].id)) == in_sym)
                        (yyval.dval) = ((int)sym[(yyvsp[(1) - (3)].id)])%((int)(yyvsp[(3) - (3)].dval));
                    else
                    {
                        errFlag = 1;
                        printf("ID is not declared -> as a number\n");
                    }
                }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 369 "CalculatorAndLoopYaccV3.txt"
    {
                    if (isDec((yyvsp[(3) - (3)].id)) == in_sym)
                        (yyval.dval) = (yyvsp[(1) - (3)].dval)+sym[(yyvsp[(3) - (3)].id)];
                    else
                    {
                        errFlag = 1;
                        printf("ID is not declared -> as a number\n");
                    }
                }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 378 "CalculatorAndLoopYaccV3.txt"
    {
                    if (isDec((yyvsp[(3) - (3)].id)) == in_sym)
                        (yyval.dval) = (yyvsp[(1) - (3)].dval)-sym[(yyvsp[(3) - (3)].id)];
                    else
                    {
                        errFlag = 1;
                        printf("ID is not declared -> as a number\n");
                    }
                }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 387 "CalculatorAndLoopYaccV3.txt"
    {
                    if (isDec((yyvsp[(3) - (3)].id)) == in_sym)
                        (yyval.dval) = (yyvsp[(1) - (3)].dval)*sym[(yyvsp[(3) - (3)].id)];
                    else
                    {
                        errFlag = 1;
                        printf("ID is not declared -> as a number\n");
                    }
                }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 396 "CalculatorAndLoopYaccV3.txt"
    {
                    if (isDec((yyvsp[(3) - (3)].id)) == in_sym)
                        if(sym[(yyvsp[(3) - (3)].id)] == 0)
				            yyerror("divide by zero not allowed");
			            else
				            (yyval.dval) = (yyvsp[(1) - (3)].dval)/sym[(yyvsp[(3) - (3)].id)];
                    else
                    {
                        errFlag = 1;
                        printf("ID is not declared -> as a number\n");
                    }
                }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 408 "CalculatorAndLoopYaccV3.txt"
    {
                    if (isDec((yyvsp[(3) - (3)].id)) == in_sym)
                        (yyval.dval) = ((int)(yyvsp[(1) - (3)].dval))%((int)sym[(yyvsp[(3) - (3)].id)]);
                    else
                    {
                        errFlag = 1;
                        printf("ID is not declared -> as a number\n");
                    }
                }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 418 "CalculatorAndLoopYaccV3.txt"
    {(yyval.dval) = -(yyvsp[(2) - (2)].dval);}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 419 "CalculatorAndLoopYaccV3.txt"
    {
                            if(isDec((yyvsp[(2) - (2)].id))==in_sym)
                                (yyval.dval) = -sym[(yyvsp[(2) - (2)].id)];
                            else
                            {
                                errFlag = 1;
                                printf("ID is not declared -> as a number\n");
                            }
                        }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 428 "CalculatorAndLoopYaccV3.txt"
    { (yyval.dval) = (yyvsp[(1) - (3)].dval) + (yyvsp[(3) - (3)].dval); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 429 "CalculatorAndLoopYaccV3.txt"
    { (yyval.dval) = (yyvsp[(1) - (3)].dval) - (yyvsp[(3) - (3)].dval); }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 430 "CalculatorAndLoopYaccV3.txt"
    { if((yyvsp[(3) - (3)].dval) == 0)
				            yyerror("divide by zero not allowed");
			            else
				            (yyval.dval) = (yyvsp[(1) - (3)].dval) / (yyvsp[(3) - (3)].dval); 
                    }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 435 "CalculatorAndLoopYaccV3.txt"
    { (yyval.dval) = (yyvsp[(1) - (3)].dval) * (yyvsp[(3) - (3)].dval); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 436 "CalculatorAndLoopYaccV3.txt"
    { (yyval.dval) = ((int)(yyvsp[(1) - (3)].dval)) % ((int)(yyvsp[(3) - (3)].dval)); }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 437 "CalculatorAndLoopYaccV3.txt"
    { (yyval.dval) = (yyvsp[(2) - (3)].dval); }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 443 "CalculatorAndLoopYaccV3.txt"
    { 
                        if (isDec((yyvsp[(1) - (4)].id)) == in_sym)
                        {
                            (yyval.dval) = sym[(yyvsp[(1) - (4)].id)]+(yyvsp[(4) - (4)].dval); sym[(yyvsp[(1) - (4)].id)] = (yyval.dval);
                        }
                        else
                        {
                            errFlag = 1;
                            printf("ID is not declared -> as a number\n");
                        }
                    }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 454 "CalculatorAndLoopYaccV3.txt"
    { 
                        if(isDec((yyvsp[(1) - (4)].id)) == in_sym)
                        {
                            (yyval.dval) = sym[(yyvsp[(1) - (4)].id)]-(yyvsp[(4) - (4)].dval); sym[(yyvsp[(1) - (4)].id)] = (yyval.dval);
                        }
                        else
                        {
                            errFlag = 1;
                            printf("ID is not declared -> as a number\n");
                        }
                    }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 465 "CalculatorAndLoopYaccV3.txt"
    { 
                        if(isDec((yyvsp[(1) - (4)].id)) == in_sym)
                        {
                            (yyval.dval) = sym[(yyvsp[(1) - (4)].id)]*(yyvsp[(4) - (4)].dval); sym[(yyvsp[(1) - (4)].id)] = (yyval.dval);
                        }
                        else
                        {
                            errFlag = 1;
                            printf("ID is not declared -> as a number\n");
                        }
                    }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 476 "CalculatorAndLoopYaccV3.txt"
    { 
                        if(isDec((yyvsp[(1) - (4)].id)) == in_sym)
                        {
                            if((yyvsp[(4) - (4)].dval) == 0)
                                yyerror("divid by zero not allowed");
                            else
                            {
                                (yyval.dval) = sym[(yyvsp[(1) - (4)].id)]/(yyvsp[(4) - (4)].dval); sym[(yyvsp[(1) - (4)].id)] = (yyval.dval);
                            }
                        }
                        else
                        {
                            errFlag = 1;
                            printf("ID is not declared -> as a number\n");
                        }
                    }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 495 "CalculatorAndLoopYaccV3.txt"
    {	(yyval.dval) = ((yyvsp[(1) - (3)].dval)>=(yyvsp[(3) - (3)].dval));
			buf[0] = (yyvsp[(1) - (3)].dval);
			buf[1] = 0;
			buf[2] = (yyvsp[(3) - (3)].dval);
			printf((yyval.dval)?"Condition result: true\n":"Condition result: false\n");}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 500 "CalculatorAndLoopYaccV3.txt"
    { (yyval.dval) =((yyvsp[(1) - (3)].dval) <= (yyvsp[(3) - (3)].dval));
			buf[0] = (yyvsp[(1) - (3)].dval);
			buf[1] = 1;
			buf[2] = (yyvsp[(3) - (3)].dval);
			printf((yyval.dval)?"Condition result: true\n":"Condition result: false\n");}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 505 "CalculatorAndLoopYaccV3.txt"
    { (yyval.dval) =((yyvsp[(1) - (3)].dval) < (yyvsp[(3) - (3)].dval));
		        buf[0] = (yyvsp[(1) - (3)].dval);
			buf[1] = 2;
			buf[2] = (yyvsp[(3) - (3)].dval);
			printf((yyval.dval)?"Condition result: true\n":"Condition result: false\n");}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 510 "CalculatorAndLoopYaccV3.txt"
    { (yyval.dval) =((yyvsp[(1) - (3)].dval) > (yyvsp[(3) - (3)].dval));
			buf[0] = (yyvsp[(1) - (3)].dval);
			buf[1] = 3;
			buf[2] = (yyvsp[(3) - (3)].dval);
			printf((yyval.dval)?"Condition result: true\n":"Condition result: false\n");}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 515 "CalculatorAndLoopYaccV3.txt"
    { (yyval.dval) =((yyvsp[(1) - (3)].dval) == (yyvsp[(3) - (3)].dval));
			buf[0] = (yyvsp[(1) - (3)].dval);
			buf[1] = 4;
			buf[2] = (yyvsp[(3) - (3)].dval);
			printf((yyval.dval)?"Condition result: true\n":"Condition result: false\n");}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 520 "CalculatorAndLoopYaccV3.txt"
    { (yyval.dval) =((yyvsp[(1) - (3)].dval) != (yyvsp[(3) - (3)].dval));
			buf[0] = (yyvsp[(1) - (3)].dval);
			buf[1] = 5;
			buf[2] = (yyvsp[(3) - (3)].dval);
			printf((yyval.dval)?"Condition result: true\n":"Condition result: false\n");}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 529 "CalculatorAndLoopYaccV3.txt"
    {
                                                        if(isDec((yyvsp[(2) - (12)].id)) == -1)
                                                            fun[(yyvsp[(2) - (12)].id)] = (yyvsp[(10) - (12)].dval);
                                                        else
                                                            printf("Error: ID is already defined\n"); 
                                                    }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 536 "CalculatorAndLoopYaccV3.txt"
    {    
                                                        if(isDec((yyvsp[(2) - (12)].id)) == -1)
                                                        {
                                                            if(isDec((yyvsp[(10) - (12)].id))==in_sym)
                                                            {
                                                                fun[(yyvsp[(2) - (12)].id)] =  sym[(yyvsp[(10) - (12)].id)];
                                                            }
                                                            else
                                                            {
                                                                errFlag = 1;
                                                                printf("ID is not declared -> as a number\n");
                                                            }
                                                        }else
                                                            printf("Error: ID is already defined\n");
                                                        
                                            }
    break;


/* Line 1792 of yacc.c  */
#line 2267 "y.tab.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 560 "CalculatorAndLoopYaccV3.txt"

void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}

int isDec(int z){
    if(sym[z] != XXX){
        return in_sym; // declared in sym
    }else if (txt[z] != NULL){
        return in_txt;  // declared in txt
    }else if (fun[z] != XXX){
        return in_fun; // declared as integer funcion
    }else
        return -1; //not declared
}

int main(void) {
    for(int i =0; i<26;i++){
        sym[i] = XXX;
        fun[i] = XXX;
    }
    yyparse();
    return 0;
}