/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse csound_orcparse
#define yylex   csound_orclex
#define yyerror csound_orcerror
#define yylval  csound_orclval
#define yychar  csound_orcchar
#define yydebug csound_orcdebug
#define yynerrs csound_orcnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NEWLINE = 258,
     S_NEQ = 259,
     S_AND = 260,
     S_OR = 261,
     S_LT = 262,
     S_LE = 263,
     S_EQ = 264,
     S_ADDIN = 265,
     S_SUBIN = 266,
     S_MULIN = 267,
     S_DIVIN = 268,
     S_GT = 269,
     S_GE = 270,
     S_BITSHIFT_LEFT = 271,
     S_BITSHIFT_RRIGHT = 272,
     LABEL_TOKEN = 273,
     IF_TOKEN = 274,
     T_OPCODE0 = 275,
     T_OPCODE0B = 276,
     T_OPCODE = 277,
     T_OPCODEB = 278,
     UDO_TOKEN = 279,
     UDOSTART_DEFINITION = 280,
     UDOEND_TOKEN = 281,
     UDO_ANS_TOKEN = 282,
     UDO_ARGS_TOKEN = 283,
     ERROR_TOKEN = 284,
     T_FUNCTION = 285,
     T_FUNCTIONB = 286,
     INSTR_TOKEN = 287,
     ENDIN_TOKEN = 288,
     GOTO_TOKEN = 289,
     KGOTO_TOKEN = 290,
     IGOTO_TOKEN = 291,
     SRATE_TOKEN = 292,
     KRATE_TOKEN = 293,
     KSMPS_TOKEN = 294,
     NCHNLS_TOKEN = 295,
     NCHNLSI_TOKEN = 296,
     ZERODBFS_TOKEN = 297,
     A4_TOKEN = 298,
     STRING_TOKEN = 299,
     T_IDENT = 300,
     T_IDENTB = 301,
     INTEGER_TOKEN = 302,
     NUMBER_TOKEN = 303,
     THEN_TOKEN = 304,
     ITHEN_TOKEN = 305,
     KTHEN_TOKEN = 306,
     ELSEIF_TOKEN = 307,
     ELSE_TOKEN = 308,
     ENDIF_TOKEN = 309,
     UNTIL_TOKEN = 310,
     WHILE_TOKEN = 311,
     DO_TOKEN = 312,
     OD_TOKEN = 313,
     T_INSTLIST = 314,
     S_ELIPSIS = 315,
     T_ARRAY = 316,
     T_ARRAY_IDENT = 317,
     T_MAPI = 318,
     T_MAPK = 319,
     S_GEQ = 320,
     S_LEQ = 321,
     S_BITSHIFT_RIGHT = 322,
     S_UNOT = 323,
     S_UMINUS = 324,
     S_ATAT = 325,
     S_AT = 326,
     S_GOTO = 327,
     T_HIGHEST = 328
   };
#endif
/* Tokens.  */
#define NEWLINE 258
#define S_NEQ 259
#define S_AND 260
#define S_OR 261
#define S_LT 262
#define S_LE 263
#define S_EQ 264
#define S_ADDIN 265
#define S_SUBIN 266
#define S_MULIN 267
#define S_DIVIN 268
#define S_GT 269
#define S_GE 270
#define S_BITSHIFT_LEFT 271
#define S_BITSHIFT_RRIGHT 272
#define LABEL_TOKEN 273
#define IF_TOKEN 274
#define T_OPCODE0 275
#define T_OPCODE0B 276
#define T_OPCODE 277
#define T_OPCODEB 278
#define UDO_TOKEN 279
#define UDOSTART_DEFINITION 280
#define UDOEND_TOKEN 281
#define UDO_ANS_TOKEN 282
#define UDO_ARGS_TOKEN 283
#define ERROR_TOKEN 284
#define T_FUNCTION 285
#define T_FUNCTIONB 286
#define INSTR_TOKEN 287
#define ENDIN_TOKEN 288
#define GOTO_TOKEN 289
#define KGOTO_TOKEN 290
#define IGOTO_TOKEN 291
#define SRATE_TOKEN 292
#define KRATE_TOKEN 293
#define KSMPS_TOKEN 294
#define NCHNLS_TOKEN 295
#define NCHNLSI_TOKEN 296
#define ZERODBFS_TOKEN 297
#define A4_TOKEN 298
#define STRING_TOKEN 299
#define T_IDENT 300
#define T_IDENTB 301
#define INTEGER_TOKEN 302
#define NUMBER_TOKEN 303
#define THEN_TOKEN 304
#define ITHEN_TOKEN 305
#define KTHEN_TOKEN 306
#define ELSEIF_TOKEN 307
#define ELSE_TOKEN 308
#define ENDIF_TOKEN 309
#define UNTIL_TOKEN 310
#define WHILE_TOKEN 311
#define DO_TOKEN 312
#define OD_TOKEN 313
#define T_INSTLIST 314
#define S_ELIPSIS 315
#define T_ARRAY 316
#define T_ARRAY_IDENT 317
#define T_MAPI 318
#define T_MAPK 319
#define S_GEQ 320
#define S_LEQ 321
#define S_BITSHIFT_RIGHT 322
#define S_UNOT 323
#define S_UMINUS 324
#define S_ATAT 325
#define S_AT 326
#define S_GOTO 327
#define T_HIGHEST 328




/* Copy the first part of user declarations.  */
#line 128 "/Users/darius/csound/Engine/csound_orc.y"

/* #define YYSTYPE ORCTOKEN* */
/* JPff thinks that line must be wrong and is trying this! */
#define YYSTYPE TREE*

#ifndef NULL
#define NULL 0L
#endif
#include "csoundCore.h"
#include <ctype.h>
#include <string.h>
#include "namedins.h"

#include "csound_orc.h"
#include "parse_param.h"

#ifndef __EMSCRIPTEN__
#include "cs_par_base.h"
#include "cs_par_orc_semantics.h"
#else
#define csp_orc_sa_instr_add(a,b)
#define csp_orc_sa_instr_add_tree(a,b)
#define csp_orc_sa_instr_finalize(a)
#define csp_orc_sa_global_read_write_add_list(a,b,c)
#define csp_orc_sa_globals_find(a,b)
#define csp_orc_sa_global_read_write_add_list1(a,b,c)
#define csp_orc_sa_interlocks(a, b)
#define csp_orc_sa_global_read_add_list(a,b)
#endif

#define udoflag csound->parserUdoflag

#define namedInstrFlag csound->parserNamedInstrFlag

    extern TREE* appendToTree(CSOUND * csound, TREE *first, TREE *newlast);
    extern int csound_orclex(TREE**, CSOUND *, void *);
    extern void print_tree(CSOUND *, char *msg, TREE *);
    extern TREE* constant_fold(CSOUND *, TREE *);
    extern void csound_orcerror(PARSE_PARM *, void *, CSOUND *,
                                TREE**, const char*);
    extern int add_udo_definition(CSOUND*, char *, char *, char *);
    extern ORCTOKEN *lookup_token(CSOUND*,char*,void*);
#define LINE csound_orcget_lineno(scanner)
#define LOCN csound_orcget_locn(scanner)
    extern uint64_t csound_orcget_locn(void *);
    extern int csound_orcget_lineno(void *);
    extern ORCTOKEN *make_string(CSOUND *, char *);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 309 "/Users/darius/csound/cs6make/csound_orcparse.c"

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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  74
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2409

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  189
/* YYNRULES -- Number of states.  */
#define YYNSTATES  318

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   328

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    91,     2,    77,     2,    75,    67,     2,
      90,    87,    73,    71,    85,    72,     2,    74,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    92,     2,
       2,    86,     2,    65,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    88,     2,    89,    76,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    66,     2,    78,     2,     2,     2,
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
      68,    69,    70,    79,    80,    81,    82,    83,    84
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    14,    16,    18,    20,
      24,    28,    33,    36,    38,    40,    41,    42,    51,    55,
      57,    59,    61,    62,    63,    64,    65,    66,    82,    85,
      86,    91,    93,    98,   103,   108,   113,   118,   123,   128,
     133,   137,   142,   144,   148,   154,   156,   162,   168,   170,
     172,   174,   176,   179,   183,   188,   192,   196,   201,   206,
     214,   224,   233,   244,   247,   249,   255,   257,   259,   261,
     263,   265,   267,   269,   271,   273,   275,   277,   279,   281,
     283,   285,   287,   289,   291,   293,   295,   297,   301,   305,
     309,   311,   313,   315,   317,   319,   320,   324,   328,   332,
     336,   340,   344,   348,   352,   356,   360,   364,   368,   372,
     376,   380,   384,   388,   392,   396,   399,   402,   408,   414,
     419,   423,   425,   429,   433,   437,   441,   444,   447,   450,
     453,   455,   459,   463,   467,   471,   475,   479,   483,   487,
     489,   491,   493,   495,   499,   503,   507,   511,   515,   519,
     523,   527,   531,   535,   538,   541,   545,   549,   552,   556,
     562,   566,   569,   572,   574,   576,   578,   580,   582,   584,
     586,   590,   594,   596,   598,   600,   602,   604,   606,   608,
     610,   612,   614,   616,   618,   620,   622,   624,   626,   628
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      94,     0,    -1,    95,    -1,    95,   108,    -1,    95,    97,
      -1,    95,   101,    -1,   108,    -1,    97,    -1,   101,    -1,
      47,    85,    96,    -1,   117,    85,    96,    -1,    71,   117,
      85,    96,    -1,    71,   117,    -1,    47,    -1,   117,    -1,
      -1,    -1,    32,    98,    96,     3,    99,   107,    33,     3,
      -1,    32,     3,     1,    -1,    45,    -1,    22,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   102,   100,   103,
      85,   104,    27,   105,    85,    28,     3,   106,   107,    26,
       3,    -1,   107,   109,    -1,    -1,   124,    86,   120,     3,
      -1,   109,    -1,   126,    86,   120,     3,    -1,   126,    10,
     120,     3,    -1,   126,    11,   120,     3,    -1,   126,    12,
     120,     3,    -1,   126,    13,   120,     3,    -1,   111,    86,
     120,     3,    -1,   125,    86,   120,     3,    -1,   110,   131,
     118,     3,    -1,   129,   118,     3,    -1,   130,   118,    87,
       3,    -1,    18,    -1,   116,   117,     3,    -1,    19,   119,
     116,   117,     3,    -1,   112,    -1,    55,   119,    57,   107,
      58,    -1,    56,   119,    57,   107,    58,    -1,     3,    -1,
     126,    -1,   125,    -1,   111,    -1,    45,     1,    -1,   110,
      85,   126,    -1,   110,    85,    45,     1,    -1,   110,    85,
     125,    -1,   110,    85,   111,    -1,   111,    88,   121,    89,
      -1,   126,    88,   121,    89,    -1,    19,   119,   115,     3,
     107,    54,     3,    -1,    19,   119,   115,     3,   107,    53,
     107,    54,     3,    -1,    19,   119,   115,     3,   107,   113,
      54,     3,    -1,    19,   119,   115,     3,   107,   113,    53,
     107,    54,     3,    -1,   113,   114,    -1,   114,    -1,    52,
     119,   115,     3,   107,    -1,    49,    -1,    51,    -1,    50,
      -1,    34,    -1,    35,    -1,    36,    -1,    22,    -1,    20,
      -1,    30,    -1,    45,    -1,    19,    -1,    49,    -1,    50,
      -1,    51,    -1,    52,    -1,    54,    -1,    55,    -1,    57,
      -1,    58,    -1,    47,    -1,    33,    -1,   118,    85,   120,
      -1,   118,    85,   117,    -1,   118,    85,     1,    -1,   120,
      -1,   119,    -1,    45,    -1,    22,    -1,    30,    -1,    -1,
      90,   119,    87,    -1,   120,     8,   120,    -1,   120,     8,
       1,    -1,   120,    15,   120,    -1,   120,    15,     1,    -1,
     120,     4,   120,    -1,   120,     4,     1,    -1,   120,     9,
     120,    -1,   120,     9,     1,    -1,   120,    86,   120,    -1,
     120,    86,     1,    -1,   120,    14,   120,    -1,   120,    14,
       1,    -1,   120,     7,   120,    -1,   120,     7,     1,    -1,
     119,     5,   119,    -1,   119,     5,     1,    -1,   119,     6,
     119,    -1,   119,     6,     1,    -1,    91,   119,    -1,    91,
       1,    -1,   119,    65,   120,    92,   120,    -1,   119,    65,
     120,    92,     1,    -1,   119,    65,   120,     1,    -1,   119,
      65,     1,    -1,   121,    -1,   121,    71,   121,    -1,   121,
      71,     1,    -1,   121,    72,   121,    -1,   121,    72,     1,
      -1,    72,   121,    -1,    72,     1,    -1,    71,   121,    -1,
      71,     1,    -1,   122,    -1,   121,    73,   121,    -1,   121,
      73,     1,    -1,   121,    74,   121,    -1,   121,    74,     1,
      -1,   121,    76,   121,    -1,   121,    76,     1,    -1,   121,
      75,   121,    -1,   121,    75,     1,    -1,   123,    -1,   126,
      -1,   128,    -1,   111,    -1,   121,    66,   121,    -1,   121,
      66,     1,    -1,   121,    67,   121,    -1,   121,    67,     1,
      -1,   121,    77,   121,    -1,   121,    77,     1,    -1,   121,
      16,   121,    -1,   121,    16,     1,    -1,   121,    70,   121,
      -1,   121,    70,     1,    -1,    78,   121,    -1,    78,     1,
      -1,    90,   120,    87,    -1,    90,   120,     1,    -1,    90,
       1,    -1,   131,   118,    87,    -1,   131,    92,   132,   118,
      87,    -1,   132,   118,    87,    -1,   127,     1,    -1,   132,
       1,    -1,    37,    -1,    38,    -1,    39,    -1,    40,    -1,
      41,    -1,    42,    -1,    43,    -1,   125,    88,    89,    -1,
     126,    88,    89,    -1,    45,    -1,    46,    -1,    47,    -1,
      48,    -1,    44,    -1,    37,    -1,    38,    -1,    39,    -1,
      40,    -1,    41,    -1,    42,    -1,    43,    -1,    20,    -1,
      21,    -1,    22,    -1,    30,    -1,    23,    -1,    31,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   178,   178,   191,   195,   199,   203,   204,   205,   208,
     212,   218,   225,   231,   233,   237,   239,   236,   249,   258,
     259,   260,   263,   265,   267,   269,   271,   262,   307,   311,
     314,   322,   326,   339,   356,   373,   390,   407,   415,   424,
     440,   454,   471,   476,   483,   490,   491,   501,   511,   513,
     514,   515,   516,   522,   523,   529,   530,   533,   538,   548,
     556,   569,   578,   604,   616,   619,   629,   631,   633,   637,
     639,   641,   646,   647,   648,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   664,   670,   677,
     678,   679,   680,   682,   684,   686,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,   701,   702,   703,
     704,   705,   706,   707,   708,   709,   711,   714,   717,   718,
     719,   720,   723,   724,   725,   726,   727,   731,   732,   736,
     737,   740,   741,   742,   743,   744,   745,   746,   747,   748,
     751,   752,   753,   754,   755,   756,   757,   758,   759,   760,
     762,   763,   765,   766,   768,   769,   770,   771,   772,   781,
     790,   801,   802,   805,   807,   809,   811,   813,   815,   817,
     822,   827,   833,   834,   836,   838,   840,   842,   844,   846,
     848,   850,   852,   854,   858,   869,   880,   882,   886,   888
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NEWLINE", "S_NEQ", "S_AND", "S_OR",
  "S_LT", "S_LE", "S_EQ", "S_ADDIN", "S_SUBIN", "S_MULIN", "S_DIVIN",
  "S_GT", "S_GE", "S_BITSHIFT_LEFT", "S_BITSHIFT_RRIGHT", "LABEL_TOKEN",
  "IF_TOKEN", "T_OPCODE0", "T_OPCODE0B", "T_OPCODE", "T_OPCODEB",
  "UDO_TOKEN", "UDOSTART_DEFINITION", "UDOEND_TOKEN", "UDO_ANS_TOKEN",
  "UDO_ARGS_TOKEN", "ERROR_TOKEN", "T_FUNCTION", "T_FUNCTIONB",
  "INSTR_TOKEN", "ENDIN_TOKEN", "GOTO_TOKEN", "KGOTO_TOKEN", "IGOTO_TOKEN",
  "SRATE_TOKEN", "KRATE_TOKEN", "KSMPS_TOKEN", "NCHNLS_TOKEN",
  "NCHNLSI_TOKEN", "ZERODBFS_TOKEN", "A4_TOKEN", "STRING_TOKEN", "T_IDENT",
  "T_IDENTB", "INTEGER_TOKEN", "NUMBER_TOKEN", "THEN_TOKEN", "ITHEN_TOKEN",
  "KTHEN_TOKEN", "ELSEIF_TOKEN", "ELSE_TOKEN", "ENDIF_TOKEN",
  "UNTIL_TOKEN", "WHILE_TOKEN", "DO_TOKEN", "OD_TOKEN", "T_INSTLIST",
  "S_ELIPSIS", "T_ARRAY", "T_ARRAY_IDENT", "T_MAPI", "T_MAPK", "'?'",
  "'|'", "'&'", "S_GEQ", "S_LEQ", "S_BITSHIFT_RIGHT", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'^'", "'#'", "'~'", "S_UNOT", "S_UMINUS", "S_ATAT",
  "S_AT", "S_GOTO", "T_HIGHEST", "','", "'='", "')'", "'['", "']'", "'('",
  "'!'", "':'", "$accept", "orcfile", "rootstatement", "instlist",
  "instrdecl", "@1", "@2", "udoname", "udodecl", "@3", "@4", "@5", "@6",
  "@7", "statementlist", "topstatement", "statement", "ans", "arrayexpr",
  "ifthen", "elseiflist", "elseif", "then", "goto", "label", "exprlist",
  "bexpr", "expr", "iexp", "iterm", "ifac", "rident", "arrayident",
  "ident", "identb", "constant", "opcode0", "opcode0b", "opcode",
  "opcodeb", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,    63,   124,    38,   320,   321,
     322,    43,    45,    42,    47,    37,    94,    35,   126,   323,
     324,   325,   326,   327,   328,    44,    61,    41,    91,    93,
      40,    33,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    95,    95,    95,    95,    95,    95,    96,
      96,    96,    96,    96,    96,    98,    99,    97,    97,   100,
     100,   100,   102,   103,   104,   105,   106,   101,   107,   107,
     108,   108,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   110,
     110,   110,   110,   110,   110,   110,   110,   111,   111,   112,
     112,   112,   112,   113,   113,   114,   115,   115,   115,   116,
     116,   116,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   120,   120,   120,
     120,   120,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   124,   124,   124,   124,   124,   124,   124,
     125,   125,   126,   127,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   129,   130,   131,   131,   132,   132
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     1,     1,     1,     3,
       3,     4,     2,     1,     1,     0,     0,     8,     3,     1,
       1,     1,     0,     0,     0,     0,     0,    15,     2,     0,
       4,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       3,     4,     1,     3,     5,     1,     5,     5,     1,     1,
       1,     1,     2,     3,     4,     3,     3,     4,     4,     7,
       9,     8,    10,     2,     1,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       1,     1,     1,     1,     1,     0,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     5,     5,     4,
       3,     1,     3,     3,     3,     3,     2,     2,     2,     2,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     3,     3,     2,     3,     5,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    48,    42,     0,   184,   185,    22,    15,    69,    70,
      71,   163,   164,   165,   166,   167,   168,   169,     0,     0,
       0,     0,     2,     7,     8,     6,    31,     0,    51,    45,
       0,     0,    50,    49,    95,    95,   186,   188,   187,   189,
     177,   178,   179,   180,   181,   182,   183,   176,   172,   173,
     174,   175,     0,     0,     0,     0,     0,   142,     0,     0,
     121,   130,   139,   140,     0,   141,    95,     0,     0,     0,
       0,    52,     0,     0,     1,     4,     5,     3,     0,    95,
       0,     0,    76,    73,    72,    74,    86,    75,    85,    77,
      78,    79,    80,    81,    82,    83,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   186,   187,   172,
       0,    91,    90,     0,   129,     0,   128,   127,   126,   154,
     153,   157,     0,     0,   116,   115,     0,     0,    66,    68,
      67,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   161,     0,     0,   162,     0,    21,    20,
      19,    23,    18,    13,     0,     0,    14,    29,    29,     0,
      56,    55,    53,     0,     0,     0,     0,    43,     0,     0,
     170,     0,     0,     0,     0,     0,   171,     0,    40,     0,
       0,    96,   156,   155,   112,   111,   114,   113,   120,     0,
      29,     0,   102,   101,   110,   109,    98,    97,   104,   103,
     108,   107,   100,    99,   106,   105,   150,   149,   144,   143,
     146,   145,   152,   151,   123,   122,   125,   124,   132,   131,
     134,   133,   138,   137,   136,   135,   148,   147,    95,   158,
     160,     0,     0,    12,    16,     0,     0,     0,    54,    39,
      37,    57,    30,    38,    33,    34,    35,    36,    32,    58,
      89,   186,   187,   172,   174,    88,    87,    41,   119,     0,
       0,    44,     0,    24,     9,     0,    29,    10,    46,    28,
      47,   118,   117,     0,    29,     0,     0,    64,   159,     0,
      11,     0,     0,     0,    59,    29,     0,    63,    25,     0,
       0,     0,     0,    61,     0,    17,    29,    60,     0,     0,
      65,    62,     0,    26,    29,     0,     0,    27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    21,    22,   165,    23,    70,   276,   161,    24,    68,
     241,   289,   304,   314,   246,    25,   279,    27,    57,    29,
     286,   287,   132,    30,   166,   110,   174,    59,    60,    61,
      62,    31,    32,    63,    64,    65,    34,    35,    66,    67
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -215
static const yytype_int16 yypact[] =
{
    2155,  -215,  -215,  1898,  -215,  -215,  -215,    11,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,   255,  1898,
    1898,    10,  2155,  -215,  -215,  -215,  -215,    61,   -45,  -215,
    2351,   -56,    56,    47,  1955,  1955,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  1085,  1139,  1193,   344,   401,   -48,   933,   340,
     846,  -215,  -215,   -39,    70,  -215,  1841,   286,     7,    78,
    2311,  -215,   195,   249,  -215,  -215,  -215,  -215,    37,  1955,
    1898,  2066,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,    82,  1898,  1898,
      29,  1898,  1898,  1898,  1898,  1898,  2012,     5,     8,     9,
      -1,    15,   340,    45,  -215,   344,  -215,  -215,  -215,  -215,
    -215,  -215,    39,   147,  -215,  -215,   458,   515,  -215,  -215,
    -215,   572,    96,  2351,   629,   686,   743,   800,   857,   914,
     971,  1247,  1301,  1355,  1409,  1463,  1517,  1571,  1625,  1679,
    1733,  1787,  2066,  -215,    -8,    62,  -215,    65,  -215,  -215,
    -215,  -215,  -215,    28,  2351,   116,    51,  -215,  -215,    12,
     -48,    81,    83,    13,    15,   275,   679,  -215,   390,   404,
    -215,   447,   504,   561,   618,   675,  -215,   793,  -215,   173,
     155,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,   113,
    -215,   167,  -215,   340,  -215,   340,  -215,   340,  -215,   340,
    -215,   340,  -215,   340,  -215,   340,  -215,   563,  -215,   393,
    -215,   507,  -215,   563,  -215,    90,  -215,    90,  -215,   -14,
    -215,   -14,  -215,   -14,  -215,    95,  -215,  -215,  1955,  -215,
    -215,    88,  2311,   103,  -215,  2311,  2097,  2127,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,    16,    44,    52,    53,  -215,   340,  -215,  -215,  1028,
    2183,  -215,    72,  -215,  -215,  2311,  -215,  -215,  -215,  -215,
    -215,  -215,   340,  1898,  -215,   172,    14,  -215,  -215,   162,
    -215,  2211,   192,  2206,  -215,  -215,   187,  -215,  -215,   188,
     191,   199,  2250,  -215,   123,  -215,  -215,  -215,   223,   201,
    2293,  -215,   229,  -215,  -215,  2254,   232,  -215
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -215,  -215,  -215,  -214,   215,  -215,  -215,  -215,   216,  -215,
    -215,  -215,  -215,  -215,  -161,   217,    24,  -215,     0,  -215,
    -215,   -38,   -34,   203,   -21,   -31,    -2,   -29,    35,  -215,
    -215,  -215,   175,     3,  -215,  -215,  -215,  -215,   235,   105
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -173
static const yytype_int16 yytable[] =
{
      28,    58,   188,    33,   113,   112,   112,   247,   -93,    97,
      74,   -94,   -92,   248,    69,    37,   249,    72,    73,   -72,
     126,   127,    28,    39,    26,    33,   123,   158,   274,   159,
      98,   277,   111,   111,  -172,   155,   157,   112,   112,   270,
      81,    80,  -172,    81,   126,   127,    26,   -74,   173,   152,
     112,   175,   160,   122,   125,   -75,   -85,   101,   102,   103,
     104,   290,   150,   151,   111,   111,   283,   295,   296,   178,
     179,   153,   181,   182,   183,   184,   185,   111,   170,   162,
     131,   172,   169,    36,   189,   177,   123,   116,   118,   120,
     -93,    38,   -93,   -94,   -92,   -94,   -92,  -172,   189,   200,
    -172,   -72,   199,   -72,   131,   203,   205,   207,   209,   211,
     213,   215,   201,   242,   268,   291,   176,   134,   180,   244,
     135,   136,   137,   293,   195,   197,   191,   138,   139,   -74,
     189,   -74,   190,   105,   302,   106,   245,   -75,   -85,   -75,
     -85,   187,    99,   243,   100,   310,    78,   189,   192,   239,
     189,   134,   240,   315,   135,   136,   137,   189,   267,   288,
     266,   138,   139,   147,   148,   149,   150,   151,   265,   100,
     271,   106,   151,   273,   260,   294,   217,   219,   221,   223,
     225,   227,   229,   231,   233,   235,   237,   187,   275,   298,
     303,   305,    82,    83,   306,   261,    37,   126,   127,   140,
     126,   127,   307,   262,    39,   269,    86,   272,   309,   112,
      40,    41,    42,    43,    44,    45,    46,    47,   263,    49,
     264,    51,    89,    90,    91,    92,   311,    93,    94,   312,
      95,    96,   313,   140,   193,   317,   111,    75,    76,    77,
     282,   128,   129,   130,    52,    53,    28,    28,   297,    33,
      33,    54,   167,   171,   126,   127,    71,   131,   300,   238,
     131,   133,    79,    55,    56,  -172,  -172,  -172,  -172,     0,
      28,     0,     0,    33,     0,     0,     0,  -172,   250,   134,
       0,   292,   135,   136,   137,  -172,     0,   156,     0,   138,
     139,    28,     0,    28,    33,     0,    33,     0,     0,     0,
       0,     0,    28,     0,     0,    33,   168,     0,   107,    37,
      28,     0,     0,    33,   131,    28,   108,    39,    33,     0,
       0,     0,     0,    40,    41,    42,    43,    44,    45,    46,
      47,   109,    49,    50,    51,     0,     0,     0,     0,     0,
    -172,  -172,     0,  -172,   134,   121,     0,   135,   136,   137,
       0,     0,     0,     0,   138,   139,     0,    52,    53,     0,
       0,   140,     0,     0,    54,     0,    36,    37,     0,     0,
       0,   -95,     0,   -95,    38,    39,    55,    56,     0,     0,
       0,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,   252,   134,     0,     0,   135,   136,   137,
       0,     0,   124,     0,   138,   139,     0,   253,   134,   141,
       0,   135,   136,   137,     0,    52,    53,     0,   138,   139,
       0,     0,    54,    36,    37,     0,   140,     0,     0,     0,
       0,    38,    39,     0,    55,    56,     0,     0,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
     254,   134,     0,     0,   135,   136,   137,     0,     0,   194,
     143,   138,   139,   144,   145,   146,   147,   148,   149,   150,
     151,     0,    52,    53,     0,     0,   140,     0,     0,    54,
      36,    37,     0,     0,     0,     0,     0,     0,    38,    39,
     140,    55,    56,     0,     0,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,   255,   134,     0,
       0,   135,   136,   137,     0,     0,   196,     0,   138,   139,
       0,     0,     0,   141,     0,     0,     0,     0,     0,    52,
      53,     0,     0,   140,     0,     0,    54,    36,    37,     0,
       0,     0,     0,     0,     0,    38,    39,     0,    55,    56,
       0,     0,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,   256,   134,     0,     0,   135,   136,
     137,     0,     0,   198,     0,   138,   139,   144,   145,   146,
     147,   148,   149,   150,   151,     0,    52,    53,     0,     0,
     140,     0,     0,    54,    36,    37,     0,     0,     0,     0,
       0,     0,    38,    39,     0,    55,    56,     0,     0,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,   257,   134,     0,     0,   135,   136,   137,     0,     0,
     202,     0,   138,   139,   145,   146,   147,   148,   149,   150,
     151,     0,     0,    52,    53,     0,     0,   140,     0,     0,
      54,    36,    37,     0,     0,     0,     0,     0,     0,    38,
      39,     0,    55,    56,     0,     0,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,   258,   134,
       0,     0,   135,   136,   137,     0,     0,   204,     0,   138,
     139,     0,     0,     0,     0,   141,     0,     0,     0,     0,
      52,    53,     0,     0,   140,     0,     0,    54,    36,    37,
       0,     0,     0,     0,     0,     0,    38,    39,     0,    55,
      56,     0,     0,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   206,   142,   143,     0,     0,   144,
     145,   146,   147,   148,   149,   150,   151,    52,    53,     0,
       0,   140,     0,     0,    54,    36,    37,     0,   251,     0,
       0,     0,     0,    38,    39,     0,    55,    56,     0,     0,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   208,     0,     0,     0,     0,     0,     0,     0,   141,
       0,     0,     0,     0,    52,    53,     0,     0,     0,     0,
       0,    54,    36,    37,     0,     0,     0,     0,     0,     0,
      38,    39,     0,    55,    56,     0,     0,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   210,   142,
     143,     0,   141,   144,   145,   146,   147,   148,   149,   150,
     151,    52,    53,     0,     0,     0,     0,     0,    54,    36,
      37,     0,   259,     0,     0,     0,     0,    38,    39,     0,
      55,    56,     0,     0,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,   142,   143,     0,   212,   144,   145,   146,   147,
     148,   149,   150,   151,     0,     0,     0,     0,    52,    53,
       0,     0,     0,     0,     0,    54,    36,    37,   126,   127,
       0,     0,     0,     0,    38,    39,     0,    55,    56,     0,
       0,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     8,     9,    10,
       0,     0,   214,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   128,   129,   130,    52,    53,     0,     0,     0,
       0,     0,    54,    36,    37,     0,     0,     0,   131,     0,
       0,    38,    39,     0,    55,    56,     0,     0,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   281,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,    53,     0,     0,     0,     0,     0,    54,
      36,    37,     0,     0,     0,     0,     0,     0,    38,    39,
       0,    55,    56,     0,     0,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   114,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
      53,     0,     0,     0,     0,     0,    54,    36,    37,     0,
       0,     0,     0,     0,     0,    38,    39,     0,    55,    56,
       0,     0,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,    53,     0,     0,
       0,    36,    37,    54,     0,     0,     0,     0,     0,    38,
      39,     0,     0,     0,     0,   115,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,   119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,    53,     0,     0,     0,    36,    37,    54,     0,     0,
       0,     0,     0,    38,    39,     0,     0,     0,     0,   115,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,     0,     0,     0,     0,     0,     0,   216,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    52,    53,     0,     0,     0,    36,
      37,    54,     0,     0,     0,     0,     0,    38,    39,     0,
       0,     0,     0,   115,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,   218,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,    53,
       0,     0,     0,    36,    37,    54,     0,     0,     0,     0,
       0,    38,    39,     0,     0,     0,     0,   115,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,   220,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,    53,     0,     0,     0,    36,    37,    54,
       0,     0,     0,     0,     0,    38,    39,     0,     0,     0,
       0,   115,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
     222,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,    53,     0,     0,
       0,    36,    37,    54,     0,     0,     0,     0,     0,    38,
      39,     0,     0,     0,     0,   115,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,   224,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,    53,     0,     0,     0,    36,    37,    54,     0,     0,
       0,     0,     0,    38,    39,     0,     0,     0,     0,   115,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,     0,     0,     0,     0,     0,     0,   226,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    52,    53,     0,     0,     0,    36,
      37,    54,     0,     0,     0,     0,     0,    38,    39,     0,
       0,     0,     0,   115,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,   228,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,    53,
       0,     0,     0,    36,    37,    54,     0,     0,     0,     0,
       0,    38,    39,     0,     0,     0,     0,   115,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,   230,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,    53,     0,     0,     0,    36,    37,    54,
       0,     0,     0,     0,     0,    38,    39,     0,     0,     0,
       0,   115,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
     232,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,    53,     0,     0,
       0,    36,    37,    54,     0,     0,     0,     0,     0,    38,
      39,     0,     0,     0,     0,   115,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,   234,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,    53,     0,     0,     0,    36,    37,    54,     0,     0,
       0,     0,     0,    38,    39,     0,     0,     0,     0,   115,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,     0,     0,     0,     0,     0,     0,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    52,    53,     0,     0,     0,    36,
      37,    54,     0,     0,     0,     0,     0,    38,    39,     0,
       0,     0,     0,   115,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,    53,
       0,     0,     0,   107,    37,    54,     0,     0,     0,     0,
       0,   108,    39,     0,     0,     0,     0,   115,    40,    41,
      42,    43,    44,    45,    46,    47,   109,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,    53,     0,     0,     0,     0,     0,    54,
      36,    37,     0,     0,     0,     0,     0,     0,    38,    39,
       0,    55,    56,   154,     0,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
      53,     0,     0,     0,     0,     0,    54,   107,    37,     0,
       0,     0,     0,     0,     0,   108,    39,     0,    55,    56,
       0,     0,    40,    41,    42,    43,    44,    45,    46,    47,
     109,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,    53,     0,     0,
       0,     0,     0,    54,    36,    37,     0,     0,     0,     0,
       0,     0,    38,    39,     0,    55,    56,     0,     0,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,    53,     0,     0,     0,    36,    37,
      54,     0,     0,     0,     0,     0,    38,    39,     0,     0,
       1,   186,   115,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     2,     3,     4,     5,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     8,     9,    10,     0,     0,     0,    52,    53,     0,
       0,     0,    18,     0,    54,     2,     3,     4,     5,     0,
       0,     0,    19,    20,     0,   278,   115,     0,     1,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     2,     3,     4,     5,     0,     0,     0,
       6,     0,    19,    20,     0,   280,     1,     7,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     0,
      18,     2,     3,     4,     5,     0,     0,     0,     0,     1,
      19,    20,     0,     0,     1,     0,     0,     8,     9,    10,
       0,     0,     0,     0,     2,     3,     4,     5,    18,     2,
       3,     4,     5,     0,     0,   283,   284,   285,    19,    20,
       8,     9,    10,     0,   299,     8,     9,    10,     0,     0,
       0,    18,     0,     1,     0,     0,    18,     1,     0,     0,
     301,    19,    20,     0,     0,     0,    19,    20,     2,     3,
       4,     5,     2,     3,     4,     5,     0,     0,     0,     0,
     316,     0,     0,     0,     8,     9,    10,     0,     8,     9,
      10,     0,     0,     0,     0,    18,     1,     0,     0,    18,
       0,     0,     0,     0,   308,    19,    20,     0,     0,    19,
      20,     2,     3,     4,     5,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     8,     9,    10,
      82,    83,     0,    84,     0,     0,     0,     0,    18,     0,
       0,    85,     0,     0,    86,     0,     0,     0,    19,    20,
       0,     0,     0,     0,     0,     0,    87,     0,   163,     0,
      89,    90,    91,    92,     0,    93,    94,     0,    95,    96,
      82,    83,     0,    84,     0,     0,     0,     0,     0,     0,
       0,    85,   164,     0,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,     0,    88,     0,
      89,    90,    91,    92,     0,    93,    94,     0,    95,    96
};

static const yytype_int16 yycheck[] =
{
       0,     3,     3,     0,    35,    34,    35,   168,     3,    30,
       0,     3,     3,     1,     3,    23,     3,    19,    20,     3,
       5,     6,    22,    31,     0,    22,    55,    20,   242,    22,
      86,   245,    34,    35,    22,    66,    67,    66,    67,   200,
      88,    86,    30,    88,     5,     6,    22,     3,    79,    88,
      79,    80,    45,    55,    56,     3,     3,    10,    11,    12,
      13,   275,    76,    77,    66,    67,    52,    53,    54,    98,
      99,     1,   101,   102,   103,   104,   105,    79,    78,     1,
      65,    78,    45,    22,    85,     3,   115,    52,    53,    54,
      85,    30,    87,    85,    85,    87,    87,    85,    85,     3,
      88,    85,   131,    87,    65,   134,   135,   136,   137,   138,
     139,   140,   133,    85,     1,   276,    81,     4,    89,     3,
       7,     8,     9,   284,   126,   127,    87,    14,    15,    85,
      85,    87,    87,    86,   295,    88,    85,    85,    85,    87,
      87,   106,    86,   164,    88,   306,    85,    85,     1,    87,
      85,     4,    87,   314,     7,     8,     9,    85,     3,    87,
     189,    14,    15,    73,    74,    75,    76,    77,   189,    88,
       3,    88,    77,    85,     1,     3,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,    85,    27,
       3,     3,    19,    20,     3,    22,    23,     5,     6,    86,
       5,     6,     3,    30,    31,    92,    33,   238,    85,   238,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     3,    54,    55,    28,
      57,    58,     3,    86,    87,     3,   238,    22,    22,    22,
     269,    49,    50,    51,    71,    72,   246,   247,   286,   246,
     247,    78,    57,    78,     5,     6,     1,    65,   292,   154,
      65,    58,    27,    90,    91,    10,    11,    12,    13,    -1,
     270,    -1,    -1,   270,    -1,    -1,    -1,    22,     3,     4,
      -1,   283,     7,     8,     9,    30,    -1,     1,    -1,    14,
      15,   291,    -1,   293,   291,    -1,   293,    -1,    -1,    -1,
      -1,    -1,   302,    -1,    -1,   302,    57,    -1,    22,    23,
     310,    -1,    -1,   310,    65,   315,    30,    31,   315,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      85,    86,    -1,    88,     4,     1,    -1,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    15,    -1,    71,    72,    -1,
      -1,    86,    -1,    -1,    78,    -1,    22,    23,    -1,    -1,
      -1,    85,    -1,    87,    30,    31,    90,    91,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     3,     4,    -1,    -1,     7,     8,     9,
      -1,    -1,     1,    -1,    14,    15,    -1,     3,     4,    16,
      -1,     7,     8,     9,    -1,    71,    72,    -1,    14,    15,
      -1,    -1,    78,    22,    23,    -1,    86,    -1,    -1,    -1,
      -1,    30,    31,    -1,    90,    91,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
       3,     4,    -1,    -1,     7,     8,     9,    -1,    -1,     1,
      67,    14,    15,    70,    71,    72,    73,    74,    75,    76,
      77,    -1,    71,    72,    -1,    -1,    86,    -1,    -1,    78,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      86,    90,    91,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     3,     4,    -1,
      -1,     7,     8,     9,    -1,    -1,     1,    -1,    14,    15,
      -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    71,
      72,    -1,    -1,    86,    -1,    -1,    78,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    90,    91,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     3,     4,    -1,    -1,     7,     8,
       9,    -1,    -1,     1,    -1,    14,    15,    70,    71,    72,
      73,    74,    75,    76,    77,    -1,    71,    72,    -1,    -1,
      86,    -1,    -1,    78,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    90,    91,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     3,     4,    -1,    -1,     7,     8,     9,    -1,    -1,
       1,    -1,    14,    15,    71,    72,    73,    74,    75,    76,
      77,    -1,    -1,    71,    72,    -1,    -1,    86,    -1,    -1,
      78,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    90,    91,    -1,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     3,     4,
      -1,    -1,     7,     8,     9,    -1,    -1,     1,    -1,    14,
      15,    -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,
      71,    72,    -1,    -1,    86,    -1,    -1,    78,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    90,
      91,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    66,    67,    -1,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    71,    72,    -1,
      -1,    86,    -1,    -1,    78,    22,    23,    -1,    89,    -1,
      -1,    -1,    -1,    30,    31,    -1,    90,    91,    -1,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      -1,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,
      -1,    78,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    90,    91,    -1,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    66,
      67,    -1,    16,    70,    71,    72,    73,    74,    75,    76,
      77,    71,    72,    -1,    -1,    -1,    -1,    -1,    78,    22,
      23,    -1,    89,    -1,    -1,    -1,    -1,    30,    31,    -1,
      90,    91,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    -1,     1,    70,    71,    72,    73,
      74,    75,    76,    77,    -1,    -1,    -1,    -1,    71,    72,
      -1,    -1,    -1,    -1,    -1,    78,    22,    23,     5,     6,
      -1,    -1,    -1,    -1,    30,    31,    -1,    90,    91,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    34,    35,    36,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    51,    71,    72,    -1,    -1,    -1,
      -1,    -1,    78,    22,    23,    -1,    -1,    -1,    65,    -1,
      -1,    30,    31,    -1,    90,    91,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    78,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    90,    91,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      72,    -1,    -1,    -1,    -1,    -1,    78,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    90,    91,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    -1,    -1,
      -1,    22,    23,    78,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    90,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    72,    -1,    -1,    -1,    22,    23,    78,    -1,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    90,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    22,
      23,    78,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    90,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
      -1,    -1,    -1,    22,    23,    78,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    90,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    -1,    -1,    -1,    22,    23,    78,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,
      -1,    90,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    -1,    -1,
      -1,    22,    23,    78,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    90,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    72,    -1,    -1,    -1,    22,    23,    78,    -1,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    90,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    22,
      23,    78,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    90,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
      -1,    -1,    -1,    22,    23,    78,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    90,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    -1,    -1,    -1,    22,    23,    78,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,
      -1,    90,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    -1,    -1,
      -1,    22,    23,    78,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    90,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    72,    -1,    -1,    -1,    22,    23,    78,    -1,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    90,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    22,
      23,    78,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    90,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
      -1,    -1,    -1,    22,    23,    78,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    90,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    78,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    90,    91,    92,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      72,    -1,    -1,    -1,    -1,    -1,    78,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    90,    91,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    -1,    -1,
      -1,    -1,    -1,    78,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    90,    91,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    22,    23,
      78,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
       3,    89,    90,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    34,    35,    36,    -1,    -1,    -1,    71,    72,    -1,
      -1,    -1,    45,    -1,    78,    18,    19,    20,    21,    -1,
      -1,    -1,    55,    56,    -1,    58,    90,    -1,     3,    -1,
      -1,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    18,    19,    20,    21,    -1,    -1,    -1,
      25,    -1,    55,    56,    -1,    58,     3,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      45,    18,    19,    20,    21,    -1,    -1,    -1,    -1,     3,
      55,    56,    -1,    -1,     3,    -1,    -1,    34,    35,    36,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    45,    18,
      19,    20,    21,    -1,    -1,    52,    53,    54,    55,    56,
      34,    35,    36,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    45,    -1,     3,    -1,    -1,    45,     3,    -1,    -1,
      54,    55,    56,    -1,    -1,    -1,    55,    56,    18,    19,
      20,    21,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    34,    35,    36,    -1,    34,    35,
      36,    -1,    -1,    -1,    -1,    45,     3,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    54,    55,    56,    -1,    -1,    55,
      56,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      19,    20,    -1,    22,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    30,    -1,    -1,    33,    -1,    -1,    -1,    55,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    47,    -1,
      49,    50,    51,    52,    -1,    54,    55,    -1,    57,    58,
      19,    20,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    71,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    47,    -1,
      49,    50,    51,    52,    -1,    54,    55,    -1,    57,    58
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    18,    19,    20,    21,    25,    32,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    45,    55,
      56,    94,    95,    97,   101,   108,   109,   110,   111,   112,
     116,   124,   125,   126,   129,   130,    22,    23,    30,    31,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    71,    72,    78,    90,    91,   111,   119,   120,
     121,   122,   123,   126,   127,   128,   131,   132,   102,     3,
      98,     1,   119,   119,     0,    97,   101,   108,    85,   131,
      86,    88,    19,    20,    22,    30,    33,    45,    47,    49,
      50,    51,    52,    54,    55,    57,    58,   117,    86,    86,
      88,    10,    11,    12,    13,    86,    88,    22,    30,    45,
     118,   119,   120,   118,     1,    90,   121,     1,   121,     1,
     121,     1,   119,   120,     1,   119,     5,     6,    49,    50,
      51,    65,   115,   116,     4,     7,     8,     9,    14,    15,
      86,    16,    66,    67,    70,    71,    72,    73,    74,    75,
      76,    77,    88,     1,    92,   118,     1,   118,    20,    22,
      45,   100,     1,    47,    71,    96,   117,    57,    57,    45,
     111,   125,   126,   118,   119,   120,   121,     3,   120,   120,
      89,   120,   120,   120,   120,   120,    89,   121,     3,    85,
      87,    87,     1,    87,     1,   119,     1,   119,     1,   120,
       3,   117,     1,   120,     1,   120,     1,   120,     1,   120,
       1,   120,     1,   120,     1,   120,     1,   121,     1,   121,
       1,   121,     1,   121,     1,   121,     1,   121,     1,   121,
       1,   121,     1,   121,     1,   121,     1,   121,   132,    87,
      87,   103,    85,   117,     3,    85,   107,   107,     1,     3,
       3,    89,     3,     3,     3,     3,     3,     3,     3,    89,
       1,    22,    30,    45,    47,   117,   120,     3,     1,    92,
     107,     3,   118,    85,    96,    85,    99,    96,    58,   109,
      58,     1,   120,    52,    53,    54,   113,   114,    87,   104,
      96,   107,   119,   107,     3,    53,    54,   114,    27,    33,
     115,    54,   107,     3,   105,     3,     3,     3,    54,    85,
     107,     3,    28,     3,   106,   107,    26,     3
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (parm, scanner, csound, astTree, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, csound, scanner)
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
		  Type, Value, parm, scanner, csound, astTree); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, PARSE_PARM *parm, void *scanner, CSOUND * csound, TREE ** astTree)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, parm, scanner, csound, astTree)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    PARSE_PARM *parm;
    void *scanner;
    CSOUND * csound;
    TREE ** astTree;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (parm);
  YYUSE (scanner);
  YYUSE (csound);
  YYUSE (astTree);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, PARSE_PARM *parm, void *scanner, CSOUND * csound, TREE ** astTree)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, parm, scanner, csound, astTree)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    PARSE_PARM *parm;
    void *scanner;
    CSOUND * csound;
    TREE ** astTree;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, parm, scanner, csound, astTree);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, PARSE_PARM *parm, void *scanner, CSOUND * csound, TREE ** astTree)
#else
static void
yy_reduce_print (yyvsp, yyrule, parm, scanner, csound, astTree)
    YYSTYPE *yyvsp;
    int yyrule;
    PARSE_PARM *parm;
    void *scanner;
    CSOUND * csound;
    TREE ** astTree;
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , parm, scanner, csound, astTree);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, parm, scanner, csound, astTree); \
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, PARSE_PARM *parm, void *scanner, CSOUND * csound, TREE ** astTree)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, parm, scanner, csound, astTree)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    PARSE_PARM *parm;
    void *scanner;
    CSOUND * csound;
    TREE ** astTree;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (parm);
  YYUSE (scanner);
  YYUSE (csound);
  YYUSE (astTree);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (PARSE_PARM *parm, void *scanner, CSOUND * csound, TREE ** astTree);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






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
yyparse (PARSE_PARM *parm, void *scanner, CSOUND * csound, TREE ** astTree)
#else
int
yyparse (parm, scanner, csound, astTree)
    PARSE_PARM *parm;
    void *scanner;
    CSOUND * csound;
    TREE ** astTree;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
        case 2:
#line 179 "/Users/darius/csound/Engine/csound_orc.y"
    {
                          csound->synterrcnt = csound_orcnerrs;
                          if (UNLIKELY(csound->oparms->odebug))
                            print_tree(csound, "ALL", (yyvsp[(1) - (1)]));
                          (yyvsp[(1) - (1)]) = constant_fold(csound, (yyvsp[(1) - (1)]));
                          if (UNLIKELY(csound->oparms->odebug))
                            print_tree(csound, "Folded", (yyvsp[(1) - (1)]));
                          if ((yyvsp[(1) - (1)]) != NULL)
                            *astTree = ((TREE *)(yyvsp[(1) - (1)]));
                        ;}
    break;

  case 3:
#line 192 "/Users/darius/csound/Engine/csound_orc.y"
    {
                        (yyval) = appendToTree(csound, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
                        ;}
    break;

  case 4:
#line 196 "/Users/darius/csound/Engine/csound_orc.y"
    {
                        (yyval) = appendToTree(csound, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
                        ;}
    break;

  case 5:
#line 200 "/Users/darius/csound/Engine/csound_orc.y"
    {
                        (yyval) = appendToTree(csound, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
                        ;}
    break;

  case 9:
#line 209 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_node(csound, LINE, LOCN, T_INSTLIST,
                               make_leaf(csound, LINE,LOCN,
                                         INTEGER_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (3)])), (yyvsp[(3) - (3)])); ;}
    break;

  case 10:
#line 213 "/Users/darius/csound/Engine/csound_orc.y"
    {
                  csp_orc_sa_instr_add(csound, ((ORCTOKEN *)(yyvsp[(1) - (3)]))->lexeme);
                  (yyval) = make_node(csound,LINE,LOCN, T_INSTLIST,
                               make_leaf(csound, LINE,LOCN,
                                         T_IDENT, (ORCTOKEN *)(yyvsp[(1) - (3)])), (yyvsp[(3) - (3)])); ;}
    break;

  case 11:
#line 219 "/Users/darius/csound/Engine/csound_orc.y"
    {
                  TREE *ans;
                  ans = make_leaf(csound, LINE,LOCN, T_IDENT, (ORCTOKEN *)(yyvsp[(2) - (4)]));
                  ans->rate = (int) '+';
                  csp_orc_sa_instr_add(csound, ((ORCTOKEN *)(yyvsp[(2) - (4)]))->lexeme);
                  (yyval) = make_node(csound,LINE,LOCN, T_INSTLIST, ans, (yyvsp[(4) - (4)])); ;}
    break;

  case 12:
#line 226 "/Users/darius/csound/Engine/csound_orc.y"
    {
                  TREE *ans;
                  ans = make_leaf(csound, LINE,LOCN, T_IDENT, (ORCTOKEN *)(yyvsp[(2) - (2)]));
                  ans->rate = (int) '+';
                  (yyval) = ans; ;}
    break;

  case 13:
#line 231 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound, LINE,LOCN,
                                           INTEGER_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 14:
#line 233 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound, LINE,LOCN, T_IDENT, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 15:
#line 237 "/Users/darius/csound/Engine/csound_orc.y"
    { namedInstrFlag = 1; csound_orcput_ilocn(scanner, LINE, LOCN); ;}
    break;

  case 16:
#line 239 "/Users/darius/csound/Engine/csound_orc.y"
    { namedInstrFlag = 0;
                  csp_orc_sa_instr_add_tree(csound, (yyvsp[(3) - (4)]));
                ;}
    break;

  case 17:
#line 243 "/Users/darius/csound/Engine/csound_orc.y"
    {
                    (yyval) = make_node(csound, csound_orcget_iline(scanner),
                                   csound_orcget_ilocn(scanner), INSTR_TOKEN,
                                   (yyvsp[(3) - (8)]), (yyvsp[(6) - (8)]));
                    csp_orc_sa_instr_finalize(csound);
                ;}
    break;

  case 18:
#line 250 "/Users/darius/csound/Engine/csound_orc.y"
    {
                    namedInstrFlag = 0;
                    csound->Message(csound, Str("No number following instr\n"));
                    csp_orc_sa_instr_finalize(csound);
                    (yyval) = NULL;
                ;}
    break;

  case 19:
#line 258 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (TREE *)(yyvsp[(1) - (1)]); ;}
    break;

  case 20:
#line 259 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (TREE *)(yyvsp[(1) - (1)]); ;}
    break;

  case 21:
#line 260 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (TREE *)(yyvsp[(1) - (1)]); ;}
    break;

  case 22:
#line 263 "/Users/darius/csound/Engine/csound_orc.y"
    { udoflag = -2; ;}
    break;

  case 23:
#line 265 "/Users/darius/csound/Engine/csound_orc.y"
    { udoflag = -1; ;}
    break;

  case 24:
#line 267 "/Users/darius/csound/Engine/csound_orc.y"
    { udoflag = 0;;}
    break;

  case 25:
#line 269 "/Users/darius/csound/Engine/csound_orc.y"
    { udoflag = 1; ;}
    break;

  case 26:
#line 271 "/Users/darius/csound/Engine/csound_orc.y"
    {
                udoflag = 2;
                add_udo_definition(csound,
                        ((ORCTOKEN *)(yyvsp[(3) - (11)]))->lexeme,
                        ((ORCTOKEN *)(yyvsp[(7) - (11)]))->lexeme,
                        ((ORCTOKEN *)(yyvsp[(10) - (11)]))->lexeme);
              ;}
    break;

  case 27:
#line 279 "/Users/darius/csound/Engine/csound_orc.y"
    {
                TREE *udoTop = make_leaf(csound, LINE,LOCN, UDO_TOKEN,
                                         (ORCTOKEN *)NULL);
                TREE *ident = make_leaf(csound, LINE,LOCN, T_IDENT,
                                        (ORCTOKEN *)(yyvsp[(3) - (15)]));
                TREE *udoAns = make_leaf(csound, LINE,LOCN, UDO_ANS_TOKEN,
                                         (ORCTOKEN *)(yyvsp[(7) - (15)]));
                TREE *udoArgs = make_leaf(csound, LINE,LOCN, UDO_ARGS_TOKEN,
                                          (ORCTOKEN *)(yyvsp[(10) - (15)]));
                udoflag = -1;
                if (UNLIKELY(PARSER_DEBUG))
                  csound->Message(csound, "UDO COMPLETE\n");

                udoTop->left = ident;
                ident->left = udoAns;
                ident->right = udoArgs;

                udoTop->right = (TREE *)(yyvsp[(13) - (15)]);

                (yyval) = udoTop;

                if (UNLIKELY(PARSER_DEBUG))
                  print_tree(csound, "UDO\n", (TREE *)(yyval));

              ;}
    break;

  case 28:
#line 308 "/Users/darius/csound/Engine/csound_orc.y"
    {
                    (yyval) = appendToTree(csound, (TREE *)(yyvsp[(1) - (2)]), (TREE *)(yyvsp[(2) - (2)]));
                ;}
    break;

  case 29:
#line 311 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL;  ;}
    break;

  case 30:
#line 315 "/Users/darius/csound/Engine/csound_orc.y"
    {

                  TREE *ans = make_leaf(csound,LINE,LOCN, '=', (ORCTOKEN *)(yyvsp[(2) - (4)]));
                  ans->left = (TREE *)(yyvsp[(1) - (4)]);
                  ans->right = (TREE *)(yyvsp[(3) - (4)]);
                  (yyval) = ans;
                ;}
    break;

  case 31:
#line 322 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 32:
#line 327 "/Users/darius/csound/Engine/csound_orc.y"
    {
                    //int op = ($1->value->lexeme[0]!='a')?'=':LOCAL_ASSIGN;
                  TREE *ans = make_leaf(csound,LINE,LOCN, '=', (ORCTOKEN *)(yyvsp[(2) - (4)]));
                  ans->left = (TREE *)(yyvsp[(1) - (4)]);
                  //print_tree(csound, "****assign", ans);
                  ans->right = (TREE *)(yyvsp[(3) - (4)]);
                  (yyval) = ans;
                  if (namedInstrFlag!=2)
                    csp_orc_sa_global_read_write_add_list(csound,
                                    csp_orc_sa_globals_find(csound, ans->left),
                                    csp_orc_sa_globals_find(csound, ans->right));
                ;}
    break;

  case 33:
#line 340 "/Users/darius/csound/Engine/csound_orc.y"
    {
                  TREE *ans = make_leaf(csound,LINE,LOCN, '=',
                                        make_token(csound, "="));
                  ORCTOKEN *repeat = make_token(csound, (yyvsp[(1) - (4)])->value->lexeme);
                  ans->left = (TREE *)(yyvsp[(1) - (4)]);
                  ans->right = make_node(csound,LINE,LOCN, '+',
                                         make_leaf(csound,LINE,LOCN,
                                                   (yyvsp[(1) - (4)])->value->type, repeat),
                                         (TREE *)(yyvsp[(3) - (4)]));
                  //print_tree(csound, "+=", ans);
                  (yyval) = ans;
                  if (namedInstrFlag!=2)
                      csp_orc_sa_global_read_write_add_list1(csound,
                                    csp_orc_sa_globals_find(csound, ans->left),
                                    csp_orc_sa_globals_find(csound, ans->right));
                ;}
    break;

  case 34:
#line 357 "/Users/darius/csound/Engine/csound_orc.y"
    {
                  TREE *ans = make_leaf(csound,LINE,LOCN, '=',
                                        make_token(csound, "="));
                  ORCTOKEN *repeat = make_token(csound, (yyvsp[(1) - (4)])->value->lexeme);
                  ans->left = (TREE *)(yyvsp[(1) - (4)]);
                  ans->right = make_node(csound,LINE,LOCN, '-',
                                         make_leaf(csound,LINE,LOCN,
                                                   (yyvsp[(1) - (4)])->value->type, repeat),
                                         (TREE *)(yyvsp[(3) - (4)]));
                  //print_tree(csound, "-=", ans);
                  (yyval) = ans;
                  if (namedInstrFlag!=2)
                    csp_orc_sa_global_read_write_add_list1(csound,
                                    csp_orc_sa_globals_find(csound, ans->left),
                                    csp_orc_sa_globals_find(csound, ans->right));
                ;}
    break;

  case 35:
#line 374 "/Users/darius/csound/Engine/csound_orc.y"
    {
                  TREE *ans = make_leaf(csound,LINE,LOCN, '=',
                                        make_token(csound, "="));
                  ORCTOKEN *repeat = make_token(csound, (yyvsp[(1) - (4)])->value->lexeme);
                  ans->left = (TREE *)(yyvsp[(1) - (4)]);
                  ans->right = make_node(csound,LINE,LOCN, '*',
                                         make_leaf(csound,LINE,LOCN,
                                                   (yyvsp[(1) - (4)])->value->type, repeat),
                                         (TREE *)(yyvsp[(3) - (4)]));
                  //print_tree(csound, "-=", ans);
                  (yyval) = ans;
                  if (namedInstrFlag!=2)
                    csp_orc_sa_global_read_write_add_list(csound,
                                    csp_orc_sa_globals_find(csound, ans->left),
                                    csp_orc_sa_globals_find(csound, ans->right));
                ;}
    break;

  case 36:
#line 391 "/Users/darius/csound/Engine/csound_orc.y"
    {
                  TREE *ans = make_leaf(csound,LINE,LOCN, '=',
                                        make_token(csound, "="));
                  ORCTOKEN *repeat = make_token(csound, (yyvsp[(1) - (4)])->value->lexeme);
                  ans->left = (TREE *)(yyvsp[(1) - (4)]);
                  ans->right = make_node(csound,LINE,LOCN, '/',
                                         make_leaf(csound,LINE,LOCN,
                                                   (yyvsp[(1) - (4)])->value->type, repeat),
                                         (TREE *)(yyvsp[(3) - (4)]));
                  //print_tree(csound, "-=", ans);
                  (yyval) = ans;
                  if (namedInstrFlag!=2)
                    csp_orc_sa_global_read_write_add_list(csound,
                                    csp_orc_sa_globals_find(csound, ans->left),
                                    csp_orc_sa_globals_find(csound, ans->right));
                ;}
    break;

  case 37:
#line 408 "/Users/darius/csound/Engine/csound_orc.y"
    {
              TREE *ans = make_leaf(csound,LINE,LOCN, '=', (ORCTOKEN *)(yyvsp[(2) - (4)]));
              ans->left = (TREE *)(yyvsp[(1) - (4)]);
              ans->right = (TREE *)(yyvsp[(3) - (4)]);
              (yyval) = ans;

          ;}
    break;

  case 38:
#line 416 "/Users/darius/csound/Engine/csound_orc.y"
    {
              TREE *ans = make_leaf(csound,LINE,LOCN, '=', (ORCTOKEN *)(yyvsp[(2) - (4)]));
              ans->left = (TREE *)(yyvsp[(1) - (4)]);
              ans->right = (TREE *)(yyvsp[(3) - (4)]);
              (yyval) = ans;

          ;}
    break;

  case 39:
#line 425 "/Users/darius/csound/Engine/csound_orc.y"
    {
                  (yyvsp[(2) - (4)])->left = (yyvsp[(1) - (4)]);
                  (yyvsp[(2) - (4)])->right = (yyvsp[(3) - (4)]);
                  (yyvsp[(2) - (4)])->value->optype = NULL;
                  (yyval) = (yyvsp[(2) - (4)]);

                  if (namedInstrFlag!=2) {
                    csp_orc_sa_global_read_write_add_list(csound,
                                    csp_orc_sa_globals_find(csound, (yyvsp[(2) - (4)])->left),
                                    csp_orc_sa_globals_find(csound, (yyvsp[(2) - (4)])->right));
                    csp_orc_sa_interlocks(csound, (yyvsp[(2) - (4)])->value);
                  }
                  query_deprecated_opcode(csound, (yyvsp[(2) - (4)])->value);
                ;}
    break;

  case 40:
#line 441 "/Users/darius/csound/Engine/csound_orc.y"
    {
                  ((TREE *)(yyvsp[(1) - (3)]))->left = NULL;
                  ((TREE *)(yyvsp[(1) - (3)]))->right = (TREE *)(yyvsp[(2) - (3)]);
                  (yyvsp[(1) - (3)])->value->optype = NULL;
                  (yyval) = (yyvsp[(1) - (3)]);
                  if (namedInstrFlag!=2) {
                    csp_orc_sa_global_read_add_list(csound,
                                  csp_orc_sa_globals_find(csound,
                                                          (yyvsp[(1) - (3)])->right));
                    csp_orc_sa_interlocks(csound, (yyvsp[(1) - (3)])->value);
                  }
                  query_deprecated_opcode(csound, (yyvsp[(1) - (3)])->value);
                ;}
    break;

  case 41:
#line 455 "/Users/darius/csound/Engine/csound_orc.y"
    {   /* VL: to allow general func ops with no answers */
                  ((TREE *)(yyvsp[(1) - (4)]))->left = NULL;
                  ((TREE *)(yyvsp[(1) - (4)]))->right = (TREE *)(yyvsp[(2) - (4)]);
                  (yyvsp[(1) - (4)])->value->optype = NULL;
                  (yyval) = (yyvsp[(1) - (4)]);

                  if (namedInstrFlag!=2) {
                    csp_orc_sa_global_read_add_list(csound,
                                  csp_orc_sa_globals_find(csound,
                                                          (yyvsp[(1) - (4)])->right));

                  csp_orc_sa_interlocks(csound, (yyvsp[(1) - (4)])->value);
                  }
                  query_deprecated_opcode(csound, (yyvsp[(1) - (4)])->value);

                ;}
    break;

  case 42:
#line 472 "/Users/darius/csound/Engine/csound_orc.y"
    {
                    //printf("label %s\n", ((ORCTOKEN *)$1)->lexeme);
                    (yyval) = make_leaf(csound,LINE,LOCN, LABEL_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)]));
                ;}
    break;

  case 43:
#line 477 "/Users/darius/csound/Engine/csound_orc.y"
    {
                    (yyvsp[(1) - (3)])->left = NULL;
                    (yyvsp[(1) - (3)])->right = make_leaf(csound, LINE,LOCN,
                                          LABEL_TOKEN, (ORCTOKEN *)(yyvsp[(2) - (3)]));
                    (yyval) = (yyvsp[(1) - (3)]);
                ;}
    break;

  case 44:
#line 484 "/Users/darius/csound/Engine/csound_orc.y"
    {
                    (yyvsp[(3) - (5)])->left = NULL;
                    (yyvsp[(3) - (5)])->right = make_leaf(csound, LINE,LOCN,
                                          LABEL_TOKEN, (ORCTOKEN *)(yyvsp[(4) - (5)]));
                    (yyval) = make_node(csound,LINE,LOCN, IF_TOKEN, (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]));
                ;}
    break;

  case 46:
#line 492 "/Users/darius/csound/Engine/csound_orc.y"
    {
                  if ((yyvsp[(2) - (5)])) {
                    (yyval) = make_leaf(csound,(yyvsp[(2) - (5)])->line,(yyvsp[(2) - (5)])->locn,
                                   UNTIL_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (5)]));
                    (yyval)->left = (yyvsp[(2) - (5)]);
                    (yyval)->right = (yyvsp[(4) - (5)]);
                  }
                  else (yyval) = NULL;
              ;}
    break;

  case 47:
#line 502 "/Users/darius/csound/Engine/csound_orc.y"
    {
                  if ((yyvsp[(2) - (5)])) {
                    (yyval) = make_leaf(csound,(yyvsp[(2) - (5)])->line,(yyvsp[(2) - (5)])->locn,
                                    WHILE_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (5)]));
                    (yyval)->left = (yyvsp[(2) - (5)]);
                    (yyval)->right = (yyvsp[(4) - (5)]);
                  }
                  else (yyval) = NULL;
              ;}
    break;

  case 48:
#line 511 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 49:
#line 513 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 50:
#line 514 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 51:
#line 515 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 52:
#line 517 "/Users/darius/csound/Engine/csound_orc.y"
    { csound->Message(csound,
                      "Unexpected untyped word %s when expecting a variable\n",
                      ((ORCTOKEN*)(yyvsp[(1) - (2)]))->lexeme);
                (yyval) = NULL;
              ;}
    break;

  case 53:
#line 522 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = appendToTree(csound, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 54:
#line 524 "/Users/darius/csound/Engine/csound_orc.y"
    { csound->Message(csound,
                      "Unexpected untyped word %s when expecting a variable\n",
                               ((ORCTOKEN*)(yyvsp[(3) - (4)]))->lexeme);
                (yyval) = appendToTree(csound, (yyvsp[(1) - (4)]), NULL);
              ;}
    break;

  case 55:
#line 529 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = appendToTree(csound, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 56:
#line 530 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = appendToTree(csound, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 57:
#line 534 "/Users/darius/csound/Engine/csound_orc.y"
    {
            appendToTree(csound, (yyvsp[(1) - (4)])->right, (yyvsp[(3) - (4)]));
            (yyval) = (yyvsp[(1) - (4)]);
          ;}
    break;

  case 58:
#line 539 "/Users/darius/csound/Engine/csound_orc.y"
    {
           char* arrayName = (yyvsp[(1) - (4)])->value->lexeme;
            (yyval) = make_node(csound, LINE, LOCN, T_ARRAY,
           make_leaf(csound, LINE, LOCN, T_IDENT,
                     make_token(csound, arrayName)), (yyvsp[(3) - (4)]));

          ;}
    break;

  case 59:
#line 549 "/Users/darius/csound/Engine/csound_orc.y"
    {
                  if ((yyvsp[(2) - (7)]))
                  (yyval) = make_node(csound,(yyvsp[(2) - (7)])->line, (yyvsp[(2) - (7)])->locn, IF_TOKEN, (yyvsp[(2) - (7)]), (yyvsp[(3) - (7)]));
                  else (yyval) = NULL;
                  (yyvsp[(3) - (7)])->right = (yyvsp[(5) - (7)]);
                  //print_tree(csound, "if-endif", $$);
              ;}
    break;

  case 60:
#line 558 "/Users/darius/csound/Engine/csound_orc.y"
    {
            (yyvsp[(3) - (9)])->right = (yyvsp[(5) - (9)]);
            if ((yyvsp[(5) - (9)]) != NULL)
              (yyvsp[(3) - (9)])->next = make_node(csound,(yyvsp[(5) - (9)])->line, (yyvsp[(5) - (9)])->locn, ELSE_TOKEN, NULL, (yyvsp[(7) - (9)]));
            else
              (yyvsp[(3) - (9)])->next = make_node(csound,1+((yyvsp[(3) - (9)])->line),(yyvsp[(3) - (9)])->locn,
                                   ELSE_TOKEN, NULL, (yyvsp[(7) - (9)]));
            (yyval) = make_node(csound,(yyvsp[(2) - (9)])->line, (yyvsp[(2) - (9)])->locn, IF_TOKEN, (yyvsp[(2) - (9)]), (yyvsp[(3) - (9)]));
            //print_tree(csound, "if-else", $$);

          ;}
    break;

  case 61:
#line 570 "/Users/darius/csound/Engine/csound_orc.y"
    {
            if (UNLIKELY(PARSER_DEBUG))
                csound->Message(csound, "IF-ELSEIF FOUND!\n");
            (yyvsp[(3) - (8)])->right = (yyvsp[(5) - (8)]);
            (yyvsp[(3) - (8)])->next = (yyvsp[(6) - (8)]);
            (yyval) = make_node(csound, (yyvsp[(2) - (8)])->line, (yyvsp[(2) - (8)])->locn, IF_TOKEN, (yyvsp[(2) - (8)]), (yyvsp[(3) - (8)]));
            //print_tree(csound, "if-elseif\n", $$);
          ;}
    break;

  case 62:
#line 580 "/Users/darius/csound/Engine/csound_orc.y"
    {
            TREE * tempLastNode;

            (yyvsp[(3) - (10)])->right = (yyvsp[(5) - (10)]);
            (yyvsp[(3) - (10)])->next = (yyvsp[(6) - (10)]);

            (yyval) = make_node(csound, (yyvsp[(2) - (10)])->line, (yyvsp[(2) - (10)])->locn, IF_TOKEN, (yyvsp[(2) - (10)]), (yyvsp[(3) - (10)]));

            tempLastNode = (yyval);

            while (tempLastNode->right!=NULL && tempLastNode->right->next!=NULL) {
                tempLastNode = tempLastNode->right->next;
            }

            if ((yyvsp[(8) - (10)]))
              tempLastNode->right->next = make_node(csound, (yyvsp[(8) - (10)])->line,(yyvsp[(8) - (10)])->locn,
                                                    ELSE_TOKEN, NULL, (yyvsp[(8) - (10)]));
            else
              tempLastNode->right->next = make_node(csound, LINE,LOCN,
                                                    ELSE_TOKEN, NULL, (yyvsp[(8) - (10)]));
            //print_tree(csound, "IF TREE", $$);
          ;}
    break;

  case 63:
#line 605 "/Users/darius/csound/Engine/csound_orc.y"
    {
                TREE * tempLastNode = (yyvsp[(1) - (2)]);

                while (tempLastNode->right!=NULL &&
                       tempLastNode->right->next!=NULL) {
                    tempLastNode = tempLastNode->right->next;
                }

                tempLastNode->right->next = (yyvsp[(2) - (2)]);
                (yyval) = (yyvsp[(1) - (2)]);
            ;}
    break;

  case 64:
#line 616 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 65:
#line 620 "/Users/darius/csound/Engine/csound_orc.y"
    {
                if (UNLIKELY(PARSER_DEBUG))
                  csound->Message(csound, "ELSEIF FOUND!\n");
                (yyvsp[(3) - (5)])->right = (yyvsp[(5) - (5)]);
                (yyval) = make_node(csound,(yyvsp[(2) - (5)])->line,(yyvsp[(2) - (5)])->locn, ELSEIF_TOKEN, (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]));
                //print_tree(csound, "ELSEIF", $$);
            ;}
    break;

  case 66:
#line 630 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound,LINE,LOCN, THEN_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 67:
#line 632 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound,LINE,LOCN, KTHEN_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 68:
#line 634 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound,LINE,LOCN, ITHEN_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 69:
#line 638 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound,LINE,LOCN, GOTO_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 70:
#line 640 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound,LINE,LOCN, KGOTO_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 71:
#line 642 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound,LINE,LOCN, IGOTO_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 72:
#line 646 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (TREE *)(yyvsp[(1) - (1)]); ;}
    break;

  case 73:
#line 647 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (TREE *)(yyvsp[(1) - (1)]); ;}
    break;

  case 74:
#line 648 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (TREE *)(yyvsp[(1) - (1)]); ;}
    break;

  case 75:
#line 649 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (TREE *)(yyvsp[(1) - (1)]); ;}
    break;

  case 76:
#line 650 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (TREE *)(yyvsp[(1) - (1)]); ;}
    break;

  case 77:
#line 651 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (TREE *)(yyvsp[(1) - (1)]); ;}
    break;

  case 78:
#line 652 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (TREE *)(yyvsp[(1) - (1)]); ;}
    break;

  case 79:
#line 653 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (TREE *)(yyvsp[(1) - (1)]); ;}
    break;

  case 80:
#line 654 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (TREE *)(yyvsp[(1) - (1)]); ;}
    break;

  case 81:
#line 655 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (TREE *)(yyvsp[(1) - (1)]); ;}
    break;

  case 82:
#line 656 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (TREE *)(yyvsp[(1) - (1)]); ;}
    break;

  case 83:
#line 657 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (TREE *)(yyvsp[(1) - (1)]); ;}
    break;

  case 84:
#line 658 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (TREE *)(yyvsp[(1) - (1)]); ;}
    break;

  case 85:
#line 659 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (TREE *)(yyvsp[(1) - (1)]); ;}
    break;

  case 86:
#line 660 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (TREE *)(yyvsp[(1) - (1)]); ;}
    break;

  case 87:
#line 665 "/Users/darius/csound/Engine/csound_orc.y"
    {
                    /* $$ = make_node(',', $1, $3); */
                    (yyval) = appendToTree(csound, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));

                ;}
    break;

  case 88:
#line 671 "/Users/darius/csound/Engine/csound_orc.y"
    {
                    /* $$ = make_node(',', $1, $3); */
                    (yyval) = appendToTree(csound, (yyvsp[(1) - (3)]),
                                      make_leaf(csound, LINE,LOCN,
                                                LABEL_TOKEN, (ORCTOKEN *)(yyvsp[(3) - (3)])));
                ;}
    break;

  case 89:
#line 677 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 90:
#line 678 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 91:
#line 679 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 92:
#line 680 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound, LINE,LOCN,
                                     LABEL_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)]));  ;}
    break;

  case 93:
#line 682 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound, LINE,LOCN,
                                        LABEL_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 94:
#line 684 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound, LINE,LOCN,
                                        LABEL_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 95:
#line 686 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 96:
#line 690 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (yyvsp[(2) - (3)]); ;}
    break;

  case 97:
#line 691 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_node(csound, LINE,LOCN, S_LE, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 98:
#line 692 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 99:
#line 693 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_node(csound, LINE,LOCN, S_GE, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 100:
#line 694 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 101:
#line 695 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_node(csound, LINE,LOCN, S_NEQ, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 102:
#line 696 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 103:
#line 697 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_node(csound, LINE,LOCN, S_EQ, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 104:
#line 698 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 105:
#line 699 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_node(csound, LINE,LOCN, S_EQ, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 106:
#line 700 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 107:
#line 701 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_node(csound, LINE,LOCN, S_GT, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 108:
#line 702 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 109:
#line 703 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_node(csound, LINE,LOCN, S_LT, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 110:
#line 704 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 111:
#line 705 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_node(csound, LINE,LOCN, S_AND, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 112:
#line 706 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 113:
#line 707 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_node(csound, LINE,LOCN, S_OR, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 114:
#line 708 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 115:
#line 709 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_node(csound, LINE,LOCN,
                                                    S_UNOT, (yyvsp[(2) - (2)]), NULL); ;}
    break;

  case 116:
#line 711 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 117:
#line 715 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_node(csound,LINE,LOCN, '?', (yyvsp[(1) - (5)]),
                             make_node(csound, LINE,LOCN, ':', (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]))); ;}
    break;

  case 118:
#line 717 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 119:
#line 718 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 120:
#line 719 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 121:
#line 720 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 122:
#line 723 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_node(csound, LINE,LOCN, '+', (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 123:
#line 724 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 124:
#line 725 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_node(csound ,LINE,LOCN, '-', (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 125:
#line 726 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 126:
#line 728 "/Users/darius/csound/Engine/csound_orc.y"
    {
                (yyval) = make_node(csound,LINE,LOCN, S_UMINUS, NULL, (yyvsp[(2) - (2)]));
            ;}
    break;

  case 127:
#line 731 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 128:
#line 733 "/Users/darius/csound/Engine/csound_orc.y"
    {
                (yyval) = (yyvsp[(2) - (2)]);
            ;}
    break;

  case 129:
#line 736 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 130:
#line 737 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 131:
#line 740 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_node(csound, LINE,LOCN, '*', (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 132:
#line 741 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 133:
#line 742 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_node(csound, LINE,LOCN, '/', (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 134:
#line 743 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 135:
#line 744 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_node(csound, LINE,LOCN, '^', (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 136:
#line 745 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 137:
#line 746 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_node(csound, LINE,LOCN, '%', (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 138:
#line 747 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 139:
#line 748 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (yyvsp[(1) - (1)]);  ;}
    break;

  case 140:
#line 751 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 141:
#line 752 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 142:
#line 753 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 143:
#line 754 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_node(csound, LINE,LOCN, '|', (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 144:
#line 755 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 145:
#line 756 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_node(csound, LINE,LOCN, '&', (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 146:
#line 757 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 147:
#line 758 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_node(csound, LINE,LOCN, '#', (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 148:
#line 759 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 149:
#line 761 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_node(csound, LINE,LOCN, S_BITSHIFT_LEFT, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 150:
#line 762 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 151:
#line 764 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_node(csound, LINE,LOCN, S_BITSHIFT_RIGHT, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 152:
#line 765 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 153:
#line 767 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_node(csound, LINE,LOCN, '~', NULL, (yyvsp[(2) - (2)]));;}
    break;

  case 154:
#line 768 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 155:
#line 769 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = (yyvsp[(2) - (3)]);  ;}
    break;

  case 156:
#line 770 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL;  ;}
    break;

  case 157:
#line 771 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 158:
#line 773 "/Users/darius/csound/Engine/csound_orc.y"
    {

                (yyvsp[(1) - (3)])->left = NULL;
                (yyvsp[(1) - (3)])->right = (yyvsp[(2) - (3)]);
                (yyvsp[(1) - (3)])->type = T_FUNCTION;

                (yyval) = (yyvsp[(1) - (3)]);
            ;}
    break;

  case 159:
#line 782 "/Users/darius/csound/Engine/csound_orc.y"
    {
                (yyvsp[(1) - (5)])->left = NULL;
                (yyvsp[(1) - (5)])->right = (yyvsp[(4) - (5)]);
                (yyvsp[(1) - (5)])->type = T_FUNCTION;
                (yyvsp[(1) - (5)])->value->optype = (yyvsp[(3) - (5)])->value->lexeme;

                (yyval) = (yyvsp[(1) - (5)]);
            ;}
    break;

  case 160:
#line 791 "/Users/darius/csound/Engine/csound_orc.y"
    {
                (yyvsp[(1) - (3)])->left = NULL;
                (yyvsp[(1) - (3)])->right = (yyvsp[(2) - (3)]);
                (yyvsp[(1) - (3)])->type = T_FUNCTION;
                (yyvsp[(1) - (3)])->value->optype = NULL;

                (yyval) = (yyvsp[(1) - (3)]);
                //print_tree(csound, "FUNCTION CALL", $$);
            ;}
    break;

  case 161:
#line 801 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 162:
#line 802 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = NULL; ;}
    break;

  case 163:
#line 805 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound, LINE,LOCN,
                                             SRATE_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 164:
#line 807 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound, LINE,LOCN,
                                             KRATE_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 165:
#line 809 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound, LINE,LOCN,
                                             KSMPS_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 166:
#line 811 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound, LINE,LOCN,
                                             NCHNLS_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 167:
#line 813 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound, LINE,LOCN,
                                             NCHNLSI_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 168:
#line 815 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound, LINE,LOCN,
                                             ZERODBFS_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 169:
#line 817 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound, LINE,LOCN,
                                             A4_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 170:
#line 822 "/Users/darius/csound/Engine/csound_orc.y"
    {
            appendToTree(csound, (yyvsp[(1) - (3)])->right,
                 make_leaf(csound, LINE, LOCN, '[', make_token(csound, "[")));
            (yyval) = (yyvsp[(1) - (3)]);
          ;}
    break;

  case 171:
#line 827 "/Users/darius/csound/Engine/csound_orc.y"
    {
            (yyval) = make_leaf(csound, LINE, LOCN, T_ARRAY_IDENT,
                           make_token(csound, (yyvsp[(1) - (3)])->value->lexeme));
            (yyval)->right = make_leaf(csound, LINE, LOCN, '[', make_token(csound, "["));
          ;}
    break;

  case 172:
#line 833 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound, LINE,LOCN, T_IDENT, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 173:
#line 834 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound, LINE,LOCN, T_IDENT, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 174:
#line 836 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound, LINE,LOCN,
                                           INTEGER_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 175:
#line 838 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound, LINE,LOCN,
                                           NUMBER_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 176:
#line 840 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound, LINE,LOCN,
                                           STRING_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 177:
#line 842 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound, LINE,LOCN,
                                           SRATE_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 178:
#line 844 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound, LINE,LOCN,
                                           KRATE_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 179:
#line 846 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound, LINE,LOCN,
                                           KSMPS_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 180:
#line 848 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound, LINE,LOCN,
                                           NCHNLS_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 181:
#line 850 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound, LINE,LOCN,
                                           NCHNLSI_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 182:
#line 852 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound, LINE,LOCN,
                                            ZERODBFS_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 183:
#line 854 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound, LINE,LOCN,
                                            A4_TOKEN, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 184:
#line 859 "/Users/darius/csound/Engine/csound_orc.y"
    {
              if (UNLIKELY(PARSER_DEBUG))
                  csound->Message(csound, "opcode0 $1=%p (%s)\n",
                                  (yyvsp[(1) - (1)]),((ORCTOKEN *)(yyvsp[(1) - (1)]))->lexeme );
                (yyval) = make_leaf(csound,LINE,LOCN, T_OPCODE0, (ORCTOKEN *)(yyvsp[(1) - (1)]));


            ;}
    break;

  case 185:
#line 870 "/Users/darius/csound/Engine/csound_orc.y"
    {
              if (UNLIKELY(PARSER_DEBUG))
                  csound->Message(csound, "opcode0b $1=%p (%s)\n",
                                  (yyvsp[(1) - (1)]),((ORCTOKEN *)(yyvsp[(1) - (1)]))->lexeme );
                (yyval) = make_leaf(csound,LINE,LOCN, T_OPCODE0, (ORCTOKEN *)(yyvsp[(1) - (1)]));


            ;}
    break;

  case 186:
#line 881 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound,LINE,LOCN, T_OPCODE, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 187:
#line 883 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound,LINE,LOCN, T_OPCODE, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 188:
#line 887 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound,LINE,LOCN, T_OPCODE, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;

  case 189:
#line 889 "/Users/darius/csound/Engine/csound_orc.y"
    { (yyval) = make_leaf(csound,LINE,LOCN, T_OPCODE, (ORCTOKEN *)(yyvsp[(1) - (1)])); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3574 "/Users/darius/csound/cs6make/csound_orcparse.c"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (parm, scanner, csound, astTree, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (parm, scanner, csound, astTree, yymsg);
	  }
	else
	  {
	    yyerror (parm, scanner, csound, astTree, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval, parm, scanner, csound, astTree);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
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
      if (yyn != YYPACT_NINF)
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
		  yystos[yystate], yyvsp, parm, scanner, csound, astTree);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (parm, scanner, csound, astTree, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, parm, scanner, csound, astTree);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, parm, scanner, csound, astTree);
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


#line 892 "/Users/darius/csound/Engine/csound_orc.y"


#ifdef SOME_FINE_DAY
void
yyerror(char *s, ...)
{
  va_list ap;
  va_start(ap, s);

  if (yylloc.first_line)
    fprintf(stderr, "%d.%d-%d.%d: error: ",
            yylloc.first_line, yylloc.first_column,
            yylloc.last_line, yylloc.last_column);
  vfprintf(stderr, s, ap);
  fprintf(stderr, "\n");

}

void
lyyerror(YYLTYPE t, char *s, ...)
{
  va_list ap;
  va_start(ap, s);

  if (t.first_line)
    fprintf(stderr, "%d.%d-%d.%d: error: ", t.first_line, t.first_column,
            t.last_line, t.last_column);
  vfprintf(stderr, s, ap);
  fprintf(stderr, "\n");
}

#endif

