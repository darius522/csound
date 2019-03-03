/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



