/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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
#line 56 "../../../svn/src/common/parser.y" /* yacc.c:1909  */
 /* the types that we use in the tokens */
enum functions function;
enum operations operation;
Number number;
long integer;
enum commands cmd;
char * variable;
char character;
struct conv_req conver;

#line 287 "../../../svn/src/common/parser.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY__SVN_SRC_COMMON_PARSER_H_INCLUDED  */
