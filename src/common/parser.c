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
#line 4 "../../../svn/src/common/parser.y" /* yacc.c:339  */

/*#define REENTRANT_PARSER */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#if ! defined(HAVE_CONFIG_H) || HAVE_STRING_H
# include <string.h>
#else
# if !HAVE_STRCHR
#  define strchr index
#  define strrchr rindex
# endif
char *strchr (), *strrchr ();
#endif

#include <stdio.h>
#include <stdlib.h>

#include "number.h"

#include <stdarg.h>
#include <math.h>
#include <float.h>
#include <unistd.h> /* for isatty() */
#include "calculator.h"
#include "variables.h"
#include "files.h"
#include "conversion.h"
#include "number_formatting.h"
#include "output.h"

/* Based on the headstart code by Shawn Ostermann
* modified by Kyle Wheeler
*/

/* include debugging code, in case we want it */
#define YYDEBUG 1

/* to make it stop complaining about undeclared functions */
int yylex(void);
int yyerror(char *error_string, ...);

int lines = 1;
int synerrors = 0;
short scanerror = 0;
char * errstring = NULL;
int errloc = -1;
int show_line_numbers = 0;


#line 117 "../../../svn/src/common/parser.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY__SVN_SRC_COMMON_PARSER_H_INCLUDED
# define YY_YY__SVN_SRC_COMMON_PARSER_H_INCLUDED
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
    DEC_CMD = 258,
    OCT_CMD = 259,
    HEX_CMD = 260,
    BIN_CMD = 261,
    DISPLAY_PREFS_CMD = 262,
    RADIAN_CMD = 263,
    REMEMBER_CMD = 264,
    LISTVAR_CMD = 265,
    STORE_CMD = 266,
    CMOD_CMD = 267,
    PRINT_HELP_CMD = 268,
    PREFIX_CMD = 269,
    INT_CMD = 270,
    VERBOSE_CMD = 271,
    DELIM_CMD = 272,
    ASSERT_CMD = 273,
    ENG_CMD = 274,
    HLIMIT_CMD = 275,
    ROUNDING_INDICATION_CMD = 276,
    PRECISION_CMD = 277,
    BITS_CMD = 278,
    BASE_CMD = 279,
    GUARD_CMD = 280,
    CONVERT_CMD = 281,
    EOLN = 282,
    OPEN_PARENTHESES = 283,
    CLOSE_PARENTHESES = 284,
    OPEN_BRACE = 285,
    CLOSE_BRACE = 286,
    OPEN_BRACKET = 287,
    CLOSE_BRACKET = 288,
    WPLUS = 289,
    WMINUS = 290,
    WMULT = 291,
    WDIV = 292,
    WMOD = 293,
    EQUALS_SIGN = 294,
    WPOW = 295,
    WEXP = 296,
    WSQR = 297,
    WOR = 298,
    WAND = 299,
    WEQUAL = 300,
    WNEQUAL = 301,
    WGT = 302,
    WLT = 303,
    WGEQ = 304,
    WLEQ = 305,
    WLSHFT = 306,
    WRSHFT = 307,
    WBOR = 308,
    WBAND = 309,
    WBXOR = 310,
    WBNOT = 311,
    WNOT = 312,
    WLOG = 313,
    WLN = 314,
    WROUND = 315,
    WABS = 316,
    WSQRT = 317,
    WCEIL = 318,
    WFLOOR = 319,
    WCBRT = 320,
    WLOGTWO = 321,
    WBANG = 322,
    WSIN = 323,
    WCOS = 324,
    WTAN = 325,
    WASIN = 326,
    WACOS = 327,
    WATAN = 328,
    WSINH = 329,
    WCOSH = 330,
    WTANH = 331,
    WASINH = 332,
    WACOSH = 333,
    WATANH = 334,
    WCOT = 335,
    WACOT = 336,
    WCOTH = 337,
    WACOTH = 338,
    WRAND = 339,
    WIRAND = 340,
    WFACT = 341,
    WCOMP = 342,
    WSEC = 343,
    WCSC = 344,
    WASEC = 345,
    WACSC = 346,
    WSECH = 347,
    WCSCH = 348,
    WASECH = 349,
    WACSCH = 350,
    WEINT = 351,
    WGAMMA = 352,
    WLNGAMMA = 353,
    WZETA = 354,
    WSINC = 355,
    NUMBER = 356,
    VARIABLE = 357,
    STRING = 358,
    OPEN_CMD = 359,
    SAVE_CMD = 360,
    ASSIGNMENT = 361,
    IDSEP_CMD = 362,
    DSEP_CMD = 363,
    ITSEP_CMD = 364,
    TSEP_CMD = 365,
    WNEG = 366
  };
#endif
/* Tokens.  */
#define DEC_CMD 258
#define OCT_CMD 259
#define HEX_CMD 260
#define BIN_CMD 261
#define DISPLAY_PREFS_CMD 262
#define RADIAN_CMD 263
#define REMEMBER_CMD 264
#define LISTVAR_CMD 265
#define STORE_CMD 266
#define CMOD_CMD 267
#define PRINT_HELP_CMD 268
#define PREFIX_CMD 269
#define INT_CMD 270
#define VERBOSE_CMD 271
#define DELIM_CMD 272
#define ASSERT_CMD 273
#define ENG_CMD 274
#define HLIMIT_CMD 275
#define ROUNDING_INDICATION_CMD 276
#define PRECISION_CMD 277
#define BITS_CMD 278
#define BASE_CMD 279
#define GUARD_CMD 280
#define CONVERT_CMD 281
#define EOLN 282
#define OPEN_PARENTHESES 283
#define CLOSE_PARENTHESES 284
#define OPEN_BRACE 285
#define CLOSE_BRACE 286
#define OPEN_BRACKET 287
#define CLOSE_BRACKET 288
#define WPLUS 289
#define WMINUS 290
#define WMULT 291
#define WDIV 292
#define WMOD 293
#define EQUALS_SIGN 294
#define WPOW 295
#define WEXP 296
#define WSQR 297
#define WOR 298
#define WAND 299
#define WEQUAL 300
#define WNEQUAL 301
#define WGT 302
#define WLT 303
#define WGEQ 304
#define WLEQ 305
#define WLSHFT 306
#define WRSHFT 307
#define WBOR 308
#define WBAND 309
#define WBXOR 310
#define WBNOT 311
#define WNOT 312
#define WLOG 313
#define WLN 314
#define WROUND 315
#define WABS 316
#define WSQRT 317
#define WCEIL 318
#define WFLOOR 319
#define WCBRT 320
#define WLOGTWO 321
#define WBANG 322
#define WSIN 323
#define WCOS 324
#define WTAN 325
#define WASIN 326
#define WACOS 327
#define WATAN 328
#define WSINH 329
#define WCOSH 330
#define WTANH 331
#define WASINH 332
#define WACOSH 333
#define WATANH 334
#define WCOT 335
#define WACOT 336
#define WCOTH 337
#define WACOTH 338
#define WRAND 339
#define WIRAND 340
#define WFACT 341
#define WCOMP 342
#define WSEC 343
#define WCSC 344
#define WASEC 345
#define WACSC 346
#define WSECH 347
#define WCSCH 348
#define WASECH 349
#define WACSCH 350
#define WEINT 351
#define WGAMMA 352
#define WLNGAMMA 353
#define WZETA 354
#define WSINC 355
#define NUMBER 356
#define VARIABLE 357
#define STRING 358
#define OPEN_CMD 359
#define SAVE_CMD 360
#define ASSIGNMENT 361
#define IDSEP_CMD 362
#define DSEP_CMD 363
#define ITSEP_CMD 364
#define TSEP_CMD 365
#define WNEG 366

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 56 "../../../svn/src/common/parser.y" /* yacc.c:355  */
 /* the types that we use in the tokens */
enum functions function;
enum operations operation;
Number number;
long integer;
enum commands cmd;
char * variable;
char character;
struct conv_req conver;

#line 390 "../../../svn/src/common/parser.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY__SVN_SRC_COMMON_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 405 "../../../svn/src/common/parser.c" /* yacc.c:358  */

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
#define YYFINAL  111
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   997

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  112
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  133
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  176

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   366

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   109,   109,   110,   113,   114,   117,   136,   142,   159,
     169,   183,   186,   190,   194,   198,   202,   211,   221,   231,
     241,   252,   257,   262,   268,   272,   276,   284,   292,   302,
     306,   323,   335,   340,   345,   349,   367,   375,   385,   408,
     419,   429,   437,   440,   445,   468,   490,   498,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,   556,   557,   558,   559,   560,   561,
     562,   563,   564,   565,   566,   567,   568,   569,   570,   571,
     572,   573,   576,   577,   578,   581,   582,   583,   586,   587,
     594,   599,   602,   606,   615,   617,   619,   621,   624,   626,
     627,   633,   634,   640
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DEC_CMD", "OCT_CMD", "HEX_CMD",
  "BIN_CMD", "DISPLAY_PREFS_CMD", "RADIAN_CMD", "REMEMBER_CMD",
  "LISTVAR_CMD", "STORE_CMD", "CMOD_CMD", "PRINT_HELP_CMD", "PREFIX_CMD",
  "INT_CMD", "VERBOSE_CMD", "DELIM_CMD", "ASSERT_CMD", "ENG_CMD",
  "HLIMIT_CMD", "ROUNDING_INDICATION_CMD", "PRECISION_CMD", "BITS_CMD",
  "BASE_CMD", "GUARD_CMD", "CONVERT_CMD", "EOLN", "OPEN_PARENTHESES",
  "CLOSE_PARENTHESES", "OPEN_BRACE", "CLOSE_BRACE", "OPEN_BRACKET",
  "CLOSE_BRACKET", "WPLUS", "WMINUS", "WMULT", "WDIV", "WMOD",
  "EQUALS_SIGN", "WPOW", "WEXP", "WSQR", "WOR", "WAND", "WEQUAL",
  "WNEQUAL", "WGT", "WLT", "WGEQ", "WLEQ", "WLSHFT", "WRSHFT", "WBOR",
  "WBAND", "WBXOR", "WBNOT", "WNOT", "WLOG", "WLN", "WROUND", "WABS",
  "WSQRT", "WCEIL", "WFLOOR", "WCBRT", "WLOGTWO", "WBANG", "WSIN", "WCOS",
  "WTAN", "WASIN", "WACOS", "WATAN", "WSINH", "WCOSH", "WTANH", "WASINH",
  "WACOSH", "WATANH", "WCOT", "WACOT", "WCOTH", "WACOTH", "WRAND",
  "WIRAND", "WFACT", "WCOMP", "WSEC", "WCSC", "WASEC", "WACSC", "WSECH",
  "WCSCH", "WASECH", "WACSCH", "WEINT", "WGAMMA", "WLNGAMMA", "WZETA",
  "WSINC", "NUMBER", "VARIABLE", "STRING", "OPEN_CMD", "SAVE_CMD",
  "ASSIGNMENT", "IDSEP_CMD", "DSEP_CMD", "ITSEP_CMD", "TSEP_CMD", "WNEG",
  "$accept", "input", "lines", "oneline", "eoln", "command",
  "optionalstring", "assignment", "exp", "func", "nullexp", "sign",
  "exp_l2", "oval", "exp_l3", "parenthated", "capsule", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366
};
# endif

#define YYPACT_NINF -91

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-91)))

#define YYTABLE_NINF -5

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,     4,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -69,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   399,   473,   547,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,    -2,   -91,   -91,
     249,   -91,   -91,   -91,   -91,    39,   -91,   111,   -91,     4,
       4,   845,     8,   -91,   695,   -91,   -91,   -91,   621,   -91,
     -91,   -91,   -91,   872,   -91,   897,   -91,   920,   323,   -57,
     768,   -91,   -91,   -91,   -91,   695,   695,   695,   695,   695,
     695,   695,   695,   695,   695,   695,   695,   695,   695,   695,
     695,   695,   695,   -91,   769,   -91,   769,    10,   -91,   -91,
     -91,   769,   -91,   -91,   -91,   -57,   768,   -91,   -91,   -91,
     236,   236,    -7,    -7,    -7,   620,   620,   188,   188,   188,
     188,   188,   188,    -7,    -7,   620,   620,   942,   -13,   -91,
     769,   -91,   -91,   -91,   769,   -91
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    15,    13,    12,    14,    24,    25,    33,    29,
       0,    41,    34,    32,    22,    23,    21,    16,    30,    28,
      31,    27,    37,    39,    26,    38,    11,     0,     0,     0,
     116,   115,    97,   103,   104,    91,    93,    94,    95,    96,
      99,    98,   100,    92,    67,    68,    69,    73,    74,    75,
      79,    80,    81,    85,    86,    87,    70,    76,    82,    88,
     101,   102,   105,   106,    71,    72,    77,    78,    83,    84,
      89,    90,   107,   108,   109,   110,   111,   129,    35,    36,
       0,    18,    17,    20,    19,     0,     2,     0,     9,     0,
       0,     0,   117,   127,     0,    66,   118,   128,   121,    10,
      40,   112,   129,     0,   113,     0,   114,     0,     0,    43,
      43,     1,     5,     8,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     6,     0,   132,   121,   117,   131,   130,
     122,   121,   124,   125,   126,    43,    43,    42,    45,    44,
      49,    48,    63,    64,    65,    51,    50,    55,    56,    57,
      58,    59,    60,    61,    62,    52,    54,    53,   133,   119,
       0,   120,    47,    46,   121,   123
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -91,   -91,   -38,   -91,    66,   -91,     3,   -91,   133,   -91,
     -91,   -90,   -44,    93,   130,   -41,   -82
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    85,    86,    87,    88,    89,   148,    90,    91,    92,
      93,    94,    95,   140,    96,    97,    98
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      -3,     1,   134,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,   138,
      28,    26,    29,   100,    30,    31,    27,   108,    28,   111,
      29,    32,    30,    31,    30,    31,   147,   170,   132,   112,
     136,   135,   168,     0,   139,     0,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    99,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,     0,     0,    78,    79,    80,    81,    82,    83,
      84,    -4,     1,   149,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,    28,     0,    29,     0,    30,    31,     0,   172,   173,
       0,     0,    32,     0,     0,   113,   114,   133,     0,     0,
     103,   105,   107,     0,     0,     0,     0,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,     0,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,   110,     0,    78,    79,    80,    81,    82,
      83,    84,   115,   116,   117,   118,   119,     0,   141,   169,
       0,     0,     0,     0,   171,     0,     0,     0,     0,   128,
     129,   146,     0,   132,     0,     0,     0,     0,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   141,   175,     0,     0,
       0,   141,   117,   118,   119,     0,     0,    27,     0,    28,
       0,    29,     0,    30,    31,     0,     0,   128,   129,     0,
      32,   132,     0,     0,     0,     0,     0,     0,     0,     0,
     174,     0,     0,     0,   141,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,     0,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
     102,    27,   109,    28,     0,    29,     0,    30,    31,     0,
       0,     0,     0,     0,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
       0,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,   102,     0,   145,    27,   101,    28,
       0,    29,     0,    30,    31,     0,     0,     0,     0,     0,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,     0,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
     102,    27,     0,    28,   104,    29,     0,    30,    31,     0,
       0,     0,     0,     0,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
       0,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,   102,    27,     0,    28,     0,    29,
     106,    30,    31,     0,     0,     0,     0,     0,    32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,     0,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,   102,    27,
       0,    28,     0,    29,   115,   116,   117,   118,   119,     0,
       0,   137,    32,   138,     0,   122,   123,   124,   125,   126,
     127,   128,   129,     0,     0,   132,     0,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,   139,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,   102,    27,     0,    28,     0,    29,     0,    30,
      31,     0,     0,     0,     0,     0,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,     0,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,   102,    27,     0,    28,
       0,    29,   115,   116,   117,   118,   119,     0,     0,     0,
      32,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,     0,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
     102,   147,    26,     0,     0,     0,     0,     0,     0,   115,
     116,   117,   118,   119,     0,     0,     0,     0,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   142,     0,     0,     0,     0,   115,   116,   117,   118,
     119,     0,     0,     0,     0,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   143,     0,
       0,   115,   116,   117,   118,   119,     0,     0,     0,     0,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   144,   115,   116,   117,   118,   119,     0,
       0,     0,     0,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   115,   116,   117,   118,
     119,     0,     0,     0,     0,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132
};

static const yytype_int16 yycheck[] =
{
       0,     1,    92,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    42,
      30,    27,    32,   102,    34,    35,    28,    39,    30,     0,
      32,    41,    34,    35,    34,    35,   103,   137,    55,    87,
      94,    92,   134,    -1,    67,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,     1,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    -1,    -1,   104,   105,   106,   107,   108,   109,
     110,     0,     1,   110,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    30,    -1,    32,    -1,    34,    35,    -1,   145,   146,
      -1,    -1,    41,    -1,    -1,    89,    90,    91,    -1,    -1,
      27,    28,    29,    -1,    -1,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    80,    -1,   104,   105,   106,   107,   108,
     109,   110,    34,    35,    36,    37,    38,    -1,    98,   136,
      -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    51,
      52,   108,    -1,    55,    -1,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   136,   174,    -1,    -1,
      -1,   141,    36,    37,    38,    -1,    -1,    28,    -1,    30,
      -1,    32,    -1,    34,    35,    -1,    -1,    51,    52,    -1,
      41,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     170,    -1,    -1,    -1,   174,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,    28,   103,    30,    -1,    32,    -1,    34,    35,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    -1,   103,    28,    29,    30,
      -1,    32,    -1,    34,    35,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,    28,    -1,    30,    31,    32,    -1,    34,    35,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    28,    -1,    30,    -1,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    28,
      -1,    30,    -1,    32,    34,    35,    36,    37,    38,    -1,
      -1,    40,    41,    42,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    -1,    55,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    28,    -1,    30,    -1,    32,    -1,    34,
      35,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    28,    -1,    30,
      -1,    32,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      41,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   103,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    29,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    31,    -1,
      -1,    34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    34,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    30,    32,
      34,    35,    41,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   104,   105,
     106,   107,   108,   109,   110,   113,   114,   115,   116,   117,
     119,   120,   121,   122,   123,   124,   126,   127,   128,   116,
     102,    29,   101,   120,    31,   120,    33,   120,    39,   103,
     120,     0,   114,   116,   116,    34,    35,    36,    37,    38,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,   116,   123,   127,   124,    40,    42,    67,
     125,   126,    29,    31,    33,   103,   120,   103,   118,   118,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   128,   125,
     123,   125,   118,   118,   126,   125
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   112,   113,   113,   114,   114,   115,   115,   115,   115,
     115,   116,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   118,   118,   119,   119,   119,   119,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   122,   122,   122,   123,   123,   123,   124,   124,
     125,   125,   126,   126,   127,   127,   127,   127,   128,   128,
     128,   128,   128,   128
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     2,     2,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     0,     3,     3,     4,     4,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     1,     1,     0,     1,     3,
       2,     0,     2,     5,     3,     3,     3,     1,     1,     1,
       2,     2,     2,     3
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
        case 6:
#line 118 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	extern int line_is_a_command;

	if (scanerror) {
		scanerror = synerrors = 0;
	} else {
		if (! synerrors && ! yynerrs) {
			set_prettyanswer((yyvsp[-1].number));
			num_set(last_answer,(yyvsp[-1].number));
		} else {
			synerrors = 0;
			report_error("Too many errors.");
		}
	}
	num_free((yyvsp[-1].number));
	compute = 1;
	line_is_a_command = 0;
}
#line 1818 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 7:
#line 136 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	extern int line_is_a_command;

	compute = 1;
	line_is_a_command = 0;
}
#line 1829 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 8:
#line 142 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	extern int line_is_a_command;

	switch ((yyvsp[-1].cmd)) {
		case redisplay:
			if (! synerrors) {
				set_prettyanswer(last_answer);
			} else {
				synerrors = 0;
				report_error("Too many errors.");
			}
				break;
		case nothing: break;
	}
	compute = 1;
	line_is_a_command = 0;
}
#line 1851 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 9:
#line 160 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	extern int line_is_a_command;

	if (scanerror) {
		scanerror = synerrors = 0;
	}
	compute = 1;
	line_is_a_command = 0;
}
#line 1865 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 169 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	extern int line_is_a_command;

    /* there is the possibility of lost memory here,
     * because "error" has no data type
     * (and because I'm passing around *actual* Number's
	 * rather than pointers to them) */
    /* report_error("3 Error in scanner halts parser."); */
    compute = 1;
	line_is_a_command = 0;
}
#line 1881 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 11:
#line 183 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { ++lines; }
#line 1887 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 186 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	(yyval.cmd) = isatty(0)?redisplay:nothing;
	conf.output_format = HEXADECIMAL_FORMAT;
        display_output_format(HEXADECIMAL_FORMAT); }
#line 1896 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 190 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	(yyval.cmd) = isatty(0)?redisplay:nothing;
	conf.output_format = OCTAL_FORMAT;
        display_output_format(OCTAL_FORMAT); }
#line 1905 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 194 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	(yyval.cmd) = isatty(0)?redisplay:nothing;
	conf.output_format = BINARY_FORMAT;
        display_output_format(BINARY_FORMAT); }
#line 1914 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 198 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	(yyval.cmd) = isatty(0)?redisplay:nothing;
	conf.output_format = DECIMAL_FORMAT;
        display_output_format(DECIMAL_FORMAT); }
#line 1923 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 202 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	if (strcmp((yyvsp[0].variable), pretty_answer)) {
                fprintf(stderr, "Assertion on line %u:\n", lines);
		fprintf(stderr, "   Pretty Answer is: '%s'\n", pretty_answer);
		fprintf(stderr, "...should have been: '%s'\n", (yyvsp[0].variable));
		exit(EXIT_FAILURE);
	}
	free((yyvsp[0].variable));
}
#line 1937 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 211 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	(yyval.cmd) = nothing;
	if (conf.thou_delimiter != (yyvsp[0].character)) {
            conf.dec_delimiter = (yyvsp[0].character);
	    display_status("%c is now the decimal separator.", (yyvsp[0].character));
	} else {
            extern int column;
            column --;
	    report_error("%c cannot be the decimal separator. It is the thousands separator.", (yyvsp[0].character));
	}}
#line 1952 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 221 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	(yyval.cmd) = nothing;
	if (conf.in_thou_delimiter != (yyvsp[0].character) && (conf.in_thou_delimiter != 0 || conf.thou_delimiter != (yyvsp[0].character))) {
	    conf.in_dec_delimiter = (yyvsp[0].character);
	    display_status("%c is now the decimal separator for input.\n", (yyvsp[0].character));
	} else {
            extern int column;
            column --;
	    report_error("%c cannot be the decimal separator. It is the thousands separator.\n", (yyvsp[0].character));
	}}
#line 1967 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 231 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	(yyval.cmd) = nothing;
	if (conf.dec_delimiter != (yyvsp[0].character)) {
	    conf.thou_delimiter = (yyvsp[0].character);
	    display_status("%c is now the thousands separator.\n", (yyvsp[0].character));
	} else if (standard_output) {
            extern int column;
            column --;
	    report_error("%c cannot be the thousands separator. It is the decimal separator.\n", (yyvsp[0].character));
	}}
#line 1982 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 241 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	(yyval.cmd) = nothing;
	if (conf.in_dec_delimiter != (yyvsp[0].character) && (conf.in_dec_delimiter != 0 || conf.dec_delimiter != (yyvsp[0].character))) {
	    conf.in_thou_delimiter = (yyvsp[0].character);
	    display_status("%c is now the thousands separator for input.\n", (yyvsp[0].character));
	} else  {
            extern int column;
            column --;
	    report_error("%c cannot be the thousands separator. It is the decimal separator.\n", (yyvsp[0].character));
	}
}
#line 1998 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 21:
#line 252 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	(yyval.cmd) = nothing;
	conf.print_commas = ! conf.print_commas;
	display_status("Will %sshow separators when printing large numbers.\n",conf.print_commas?"":"not ");
}
#line 2008 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 257 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	(yyval.cmd) = nothing;
	conf.print_ints = ! conf.print_ints;
	display_status("Will %suse abbreviations for large integers.\n",conf.print_ints?"not ":"");
}
#line 2018 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 263 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	(yyval.cmd) = nothing;
	conf.verbose = ! conf.verbose;
	display_status("Will %secho the lines to be evaluated.\n",conf.verbose?"":"not ");
}
#line 2028 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 268 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
        display_prefs();
	(yyval.cmd) = nothing;
}
#line 2037 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 272 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	(yyval.cmd) = nothing;
	conf.use_radians = ! conf.use_radians;
	display_status("Now Using %s\n", conf.use_radians?"Radians":"Degrees");}
#line 2046 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 276 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	(yyval.cmd) = nothing;
        switch ((yyvsp[0].integer)) {
            case 0: conf.precision_guard = 0; break;
            case 1: conf.precision_guard = 1; break;
            case -1: conf.precision_guard = ! conf.precision_guard; break;
        }
	display_status("Now %sUsing Conservative Precision\n", conf.precision_guard?"":"Not ");}
#line 2059 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 284 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	(yyval.cmd) = isatty(0)?redisplay:nothing;
	conf.precision = (yyvsp[0].integer);
        if (conf.precision == -1) {
            display_status("Precision = auto");
        } else {
            display_status("Precision = %i", conf.precision);
        } }
#line 2072 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 292 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
    (yyval.cmd) = nothing;
	if ((yyvsp[0].integer)) {
		conf.history_limit = 1;
		conf.history_limit_len = (yyvsp[0].integer);
	} else {
		conf.history_limit = 0;
		conf.history_limit_len = 0;
	}
}
#line 2087 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 302 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	printvariables();
	(yyval.cmd) = nothing;
}
#line 2096 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 306 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0].integer) < 0) {
		switch (conf.engineering) {
			case always: conf.engineering = never; break;
			case never: conf.engineering = automatic; break;
			case automatic: conf.engineering = always; break;
		}
	} else {
		switch((yyvsp[0].integer)) {
			case 1: conf.engineering = automatic; break;
			case 2: conf.engineering = always; break;
			case 3: conf.engineering = never; break;
		}
	}
	display_status("Engineering notation is %s\n",(conf.engineering==always)?"always used":(conf.engineering==never)?"never used":"used if convenient");
	(yyval.cmd) = isatty(0)?redisplay:nothing;
}
#line 2118 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 323 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	(yyval.cmd) = nothing;
	if ((yyvsp[0].integer) != -1)
		conf.rounding_indication = (yyvsp[0].integer);
	else {
		conf.rounding_indication += 1;
		conf.rounding_indication %= 3;
	}
	display_status("Will display %s rounding indication",
		(conf.rounding_indication==NO_ROUNDING_INDICATION)?"no":
                ((conf.rounding_indication==SIMPLE_ROUNDING_INDICATION)?"simple":"significant figure"));
}
#line 2135 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 335 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	(yyval.cmd) = nothing;
	conf.print_prefixes = ! conf.print_prefixes;
	display_status("Will %sprint number prefixes\n",conf.print_prefixes?"":"not ");
}
#line 2145 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 340 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	(yyval.cmd) = nothing;
	conf.remember_errors = ! conf.remember_errors;
	display_status("Statements that produce errors are %s.\n",conf.remember_errors?"recorded":"forgotten");
}
#line 2155 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 345 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	(yyval.cmd) = nothing;
	display_interactive_help();
}
#line 2164 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 349 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	extern char* open_file;
	int i;
	unsigned int len = strlen((yyvsp[0].variable))+1;
	open_file = malloc(len);
        strncpy(open_file, (yyvsp[0].variable), len);
	/* strip trailing spaces */
	for (i=strlen(open_file)-1;i>=0;i--) {
		if (open_file[i] != ' ') break;
		open_file[i] = 0;
	}
	if (strlen(open_file) == 0) {
		free(open_file);
		open_file = NULL;
		report_error("Please specify a file name to open.");
	}
	(yyval.cmd) = nothing;
}
#line 2187 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 367 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	int retval;
	retval = saveState((yyvsp[0].variable));
	if (retval) {
		report_error("Could not save file. (%s)", (char*)strerror(retval));
	}
	(yyval.cmd) = nothing;
}
#line 2200 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 375 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0].integer) < NUM_PREC_MIN) {
		report_error("Minimum precision is %lu (you asked for %lu).\n", (unsigned long)NUM_PREC_MIN, (yyvsp[0].integer));
	} else if ((yyvsp[0].integer) > NUM_PREC_MAX) {
		report_error("Maximum precision is %lu (you asked for %lu).\n", (unsigned long)NUM_PREC_MAX, (yyvsp[0].integer));
	} else {
		num_set_default_prec((yyvsp[0].integer));
	}
	(yyval.cmd) = nothing;
}
#line 2215 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 386 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	int category = identify_units((yyvsp[0].conver).u1,(yyvsp[0].conver).u2);
	switch (category) {
		case -1:
			report_error("Units must be in the same category.");
			break;
		case -2:
			report_error("Units provided are not recognized.");
			break;
		case -3:
			report_error("First unit provided was not recognized (%s).", (yyvsp[0].conver).u1);
			break;
		case -4:
			report_error("Second unit provided was not recognized (%s).", (yyvsp[0].conver).u2);
			break;
		default:
			uber_conversion(last_answer,category,unit_id(category,(yyvsp[0].conver).u1),unit_id(category,(yyvsp[0].conver).u2),last_answer);
	}
	free((yyvsp[0].conver).u1);
	free((yyvsp[0].conver).u2);
	(yyval.cmd) = redisplay;
}
#line 2242 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 409 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0].integer) >= 2 && (yyvsp[0].integer) <= 36) {
		char * str, junk;
		str = num_to_str_complex(last_answer, (yyvsp[0].integer), conf.engineering, -1, conf.print_prefixes, &junk);
		display_status("base %i: %s\n",(yyvsp[0].integer),str);
	} else {
		report_error("Base must be greater than one and less than 37.");
	}
	(yyval.cmd) = nothing;
}
#line 2257 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 420 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	int retval = storeVar((yyvsp[0].variable));
	if (retval == 0) {
		display_status("successfully stored %s\n",(yyvsp[0].variable));
	} else {
		report_error("Failure to store variable!");
	}
	free((yyvsp[0].variable));
}
#line 2271 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 430 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	(yyval.cmd) = nothing;
	conf.c_style_mod = ! conf.c_style_mod;
	display_status("The mod (%%) operation will %sbehave like it does in the C programming language.\n",conf.c_style_mod?"":"not ");
}
#line 2281 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 437 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
			   (yyval.variable) = (yyvsp[0].variable);
			   }
#line 2289 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 440 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
			   (yyval.variable) = NULL;
			   }
#line 2297 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 446 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	if (compute && ! scanerror) {
		/* if standard_error, q is reserved */
		if (standard_output && !strcmp((yyvsp[-2].variable),"q")) {
			report_error("q cannot be assigned a value. q is used to exit.");
		} else {
			if (putval((yyvsp[-2].variable),(yyvsp[-1].number),(yyvsp[0].variable)) == 0) {
                                display_val((yyvsp[-2].variable));
			} else {
				report_error("There was a problem assigning the value.");
			}
		}
		num_free((yyvsp[-1].number));
	} else {
		scanerror = 0;
		report_error("Scanner error halts parser.");
	}
	free((yyvsp[-2].variable));
	if ((yyvsp[0].variable) != NULL) {
		free((yyvsp[0].variable));
	}
}
#line 2324 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 469 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	if (compute && ! scanerror) {
		if (standard_output && !strcmp((yyvsp[-2].variable),"q")) {
			report_error("q cannot be assigned an expression. q is used to exit.");
		} else {
			if (putexp((yyvsp[-2].variable),(yyvsp[-1].variable),(yyvsp[0].variable)) == 0) {
                                display_val((yyvsp[-2].variable));
			} else {
				report_error("There was a problem assigning the expression.");
			}
		}
	} else {
		scanerror = 0;
		report_error("Scanner error halts parser.");
	}
	free((yyvsp[-2].variable));
	free((yyvsp[-1].variable));
	if ((yyvsp[0].variable) != NULL) {
		free((yyvsp[0].variable));
	}
}
#line 2350 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 491 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	report_error("Constants cannot be assigned to other values.");
	num_free((yyvsp[-1].number));
	if ((yyvsp[0].variable) != NULL) {
		free((yyvsp[0].variable));
	}
}
#line 2362 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 499 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	report_error("Constants cannot be assigned to other values.");
	free((yyvsp[-1].variable));
	if ((yyvsp[0].variable) != NULL) {
		free((yyvsp[0].variable));
	}
}
#line 2374 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 508 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init((yyval.number)); simple_exp((yyval.number), (yyvsp[-2].number), wminus, (yyvsp[0].number)); num_free((yyvsp[-2].number)); num_free((yyvsp[0].number)); }
#line 2380 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 509 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init((yyval.number)); simple_exp((yyval.number), (yyvsp[-2].number), wplus, (yyvsp[0].number)); num_free((yyvsp[-2].number)); num_free((yyvsp[0].number)); }
#line 2386 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 510 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init((yyval.number)); simple_exp((yyval.number), (yyvsp[-2].number), wand, (yyvsp[0].number)); num_free((yyvsp[-2].number)); num_free((yyvsp[0].number)); }
#line 2392 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 511 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init((yyval.number)); simple_exp((yyval.number), (yyvsp[-2].number), wor, (yyvsp[0].number)); num_free((yyvsp[-2].number)); num_free((yyvsp[0].number)); }
#line 2398 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 512 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init((yyval.number)); simple_exp((yyval.number), (yyvsp[-2].number), wbor, (yyvsp[0].number)); num_free((yyvsp[-2].number)); num_free((yyvsp[0].number)); }
#line 2404 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 513 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init((yyval.number)); simple_exp((yyval.number), (yyvsp[-2].number), wbxor, (yyvsp[0].number)); num_free((yyvsp[-2].number)); num_free((yyvsp[0].number)); }
#line 2410 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 514 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init((yyval.number)); simple_exp((yyval.number), (yyvsp[-2].number), wband, (yyvsp[0].number)); num_free((yyvsp[-2].number)); num_free((yyvsp[0].number)); }
#line 2416 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 515 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init((yyval.number)); simple_exp((yyval.number), (yyvsp[-2].number), wequal, (yyvsp[0].number)); num_free((yyvsp[-2].number)); num_free((yyvsp[0].number)); }
#line 2422 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 516 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init((yyval.number)); simple_exp((yyval.number), (yyvsp[-2].number), wnequal, (yyvsp[0].number)); num_free((yyvsp[-2].number)); num_free((yyvsp[0].number)); }
#line 2428 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 517 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init((yyval.number)); simple_exp((yyval.number), (yyvsp[-2].number), wgt, (yyvsp[0].number)); num_free((yyvsp[-2].number)); num_free((yyvsp[0].number)); }
#line 2434 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 518 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init((yyval.number)); simple_exp((yyval.number), (yyvsp[-2].number), wlt, (yyvsp[0].number)); num_free((yyvsp[-2].number)); num_free((yyvsp[0].number)); }
#line 2440 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 519 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init((yyval.number)); simple_exp((yyval.number), (yyvsp[-2].number), wgeq, (yyvsp[0].number)); num_free((yyvsp[-2].number)); num_free((yyvsp[0].number)); }
#line 2446 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 520 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init((yyval.number)); simple_exp((yyval.number), (yyvsp[-2].number), wleq, (yyvsp[0].number)); num_free((yyvsp[-2].number)); num_free((yyvsp[0].number)); }
#line 2452 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 521 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init((yyval.number)); simple_exp((yyval.number), (yyvsp[-2].number), wlshft, (yyvsp[0].number)); num_free((yyvsp[-2].number)); num_free((yyvsp[0].number)); }
#line 2458 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 522 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init((yyval.number)); simple_exp((yyval.number), (yyvsp[-2].number), wrshft, (yyvsp[0].number)); num_free((yyvsp[-2].number)); num_free((yyvsp[0].number)); }
#line 2464 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 523 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init((yyval.number)); simple_exp((yyval.number), (yyvsp[-2].number), wmult, (yyvsp[0].number)); num_free((yyvsp[-2].number)); num_free((yyvsp[0].number)); }
#line 2470 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 524 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init((yyval.number)); simple_exp((yyval.number), (yyvsp[-2].number), wdiv, (yyvsp[0].number)); num_free((yyvsp[-2].number)); num_free((yyvsp[0].number)); }
#line 2476 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 525 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init((yyval.number)); simple_exp((yyval.number), (yyvsp[-2].number), wmod, (yyvsp[0].number)); num_free((yyvsp[-2].number)); num_free((yyvsp[0].number)); }
#line 2482 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 529 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wsin; }
#line 2488 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 530 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wcos; }
#line 2494 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 531 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wtan; }
#line 2500 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 532 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wcot; }
#line 2506 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 533 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wsec; }
#line 2512 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 534 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wcsc; }
#line 2518 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 535 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wasin; }
#line 2524 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 536 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wacos; }
#line 2530 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 537 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = watan; }
#line 2536 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 538 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wacot; }
#line 2542 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 539 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wasec; }
#line 2548 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 540 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wacsc; }
#line 2554 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 541 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wsinh; }
#line 2560 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 542 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wcosh; }
#line 2566 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 543 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wtanh; }
#line 2572 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 544 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wcoth; }
#line 2578 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 545 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wsech; }
#line 2584 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 546 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wcsch; }
#line 2590 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 547 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wasinh; }
#line 2596 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 548 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wacosh; }
#line 2602 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 549 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = watanh; }
#line 2608 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 550 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wacoth; }
#line 2614 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 551 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wasech; }
#line 2620 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 552 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wacsch; }
#line 2626 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 553 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wlog; }
#line 2632 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 554 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wlogtwo; }
#line 2638 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 555 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wln; }
#line 2644 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 556 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wround; }
#line 2650 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 557 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wabs; }
#line 2656 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 558 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wsqrt; }
#line 2662 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 559 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wexp; }
#line 2668 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 560 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wfloor; }
#line 2674 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 561 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wceil; }
#line 2680 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 562 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wcbrt; }
#line 2686 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 563 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wrand; }
#line 2692 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 102:
#line 564 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wirand; }
#line 2698 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 103:
#line 565 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wbnot; }
#line 2704 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 104:
#line 566 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wnot; }
#line 2710 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 105:
#line 567 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wfact; }
#line 2716 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 106:
#line 568 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wcomp; }
#line 2722 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 569 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = weint; }
#line 2728 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 570 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wgamma; }
#line 2734 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 571 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wlngamma; }
#line 2740 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 572 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wzeta; }
#line 2746 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 111:
#line 573 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.function) = wsinc; }
#line 2752 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 581 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.integer) = -1; }
#line 2758 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 116:
#line 582 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.integer) = 1; }
#line 2764 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 583 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { (yyval.integer) = 1; }
#line 2770 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 587 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init((yyval.number));
		     num_mul((yyvsp[-1].number),(yyvsp[-1].number),(yyvsp[0].number));
		     num_mul_si((yyval.number),(yyvsp[-1].number),(yyvsp[-2].integer));
		     num_free((yyvsp[-1].number));
		     num_free((yyvsp[0].number)); }
#line 2780 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 594 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
     num_init_set((yyval.number),(yyvsp[-1].number));
     num_free((yyvsp[-1].number));
     num_free((yyvsp[0].number));
}
#line 2790 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 599 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init_set_ui((yyval.number),1); }
#line 2796 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 122:
#line 602 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init((yyval.number));
                        simple_exp((yyval.number),(yyvsp[-1].number),wmult,(yyvsp[0].number));
			num_free((yyvsp[-1].number));
			num_free((yyvsp[0].number));}
#line 2805 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 123:
#line 606 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init((yyval.number));
				  num_mul_si((yyvsp[-1].number),(yyvsp[-1].number),(yyvsp[-2].integer));
				  num_pow((yyvsp[-4].number),(yyvsp[-4].number),(yyvsp[-1].number));
				  num_mul((yyval.number),(yyvsp[-4].number),(yyvsp[0].number));
				  num_free((yyvsp[-4].number));
				  num_free((yyvsp[-1].number));
				  num_free((yyvsp[0].number));}
#line 2817 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 616 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init((yyval.number)); num_set((yyval.number),(yyvsp[-1].number)); num_free((yyvsp[-1].number)); }
#line 2823 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 125:
#line 618 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init((yyval.number)); num_set((yyval.number),(yyvsp[-1].number)); num_free((yyvsp[-1].number)); }
#line 2829 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 620 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init((yyval.number)); num_set((yyval.number),(yyvsp[-1].number)); num_free((yyvsp[-1].number)); }
#line 2835 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 621 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init_set_ui((yyval.number),0); }
#line 2841 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 625 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init((yyval.number)); num_set((yyval.number),(yyvsp[0].number)); num_free((yyvsp[0].number)); }
#line 2847 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 628 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	   num_init((yyval.number));
	   num_factorial((yyval.number),num_get_ui((yyvsp[-1].number)));
	   num_free((yyvsp[-1].number));
	   }
#line 2857 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 633 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    { num_init((yyval.number)); num_sqr((yyval.number),(yyvsp[-1].number)); num_free((yyvsp[-1].number)); }
#line 2863 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 635 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	   num_init((yyval.number));
	   uber_function((yyval.number),(yyvsp[-1].function),(yyvsp[0].number));
	   num_free((yyvsp[0].number));
	   }
#line 2873 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 641 "../../../svn/src/common/parser.y" /* yacc.c:1646  */
    {
	   num_init((yyval.number));
	   num_mul_si((yyvsp[0].number),(yyvsp[0].number),(yyvsp[-1].integer));
	   uber_function((yyval.number),(yyvsp[-2].function),(yyvsp[0].number));
	   num_free((yyvsp[0].number));
	   }
#line 2884 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
    break;


#line 2888 "../../../svn/src/common/parser.c" /* yacc.c:1646  */
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
#line 649 "../../../svn/src/common/parser.y" /* yacc.c:1906  */


int
yyerror(char *error_string, ...) {
    va_list ap;
	char error[1000];

    ++synerrors;

    va_start(ap,error_string);
	vsnprintf(error,1000,error_string,ap);
    va_end(ap);

	report_error(error);
	return 0;
}
