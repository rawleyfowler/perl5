/* -*- mode: C; buffer-read-only: t -*-
   !!!!!!!   DO NOT EDIT THIS FILE   !!!!!!!
   This file is built by ./regen_perly.pl from perly.y.
   Any changes made here will be lost!
 */

#define PERL_BISON_VERSION  30003

#ifdef PERL_CORE
/* A Bison parser, made by GNU Bison 3.3.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    GRAMPROG = 258,
    GRAMEXPR = 259,
    GRAMBLOCK = 260,
    GRAMBARESTMT = 261,
    GRAMFULLSTMT = 262,
    GRAMSTMTSEQ = 263,
    GRAMSUBSIGNATURE = 264,
    PERLY_AMPERSAND = 265,
    PERLY_BRACE_OPEN = 266,
    PERLY_BRACE_CLOSE = 267,
    PERLY_BRACKET_OPEN = 268,
    PERLY_BRACKET_CLOSE = 269,
    PERLY_COMMA = 270,
    PERLY_DOLLAR = 271,
    PERLY_DOT = 272,
    PERLY_EQUAL_SIGN = 273,
    PERLY_MINUS = 274,
    PERLY_PERCENT_SIGN = 275,
    PERLY_PLUS = 276,
    PERLY_SEMICOLON = 277,
    PERLY_SLASH = 278,
    PERLY_SNAIL = 279,
    PERLY_STAR = 280,
    KW_FORMAT = 281,
    KW_PACKAGE = 282,
    KW_CLASS = 283,
    KW_LOCAL = 284,
    KW_MY = 285,
    KW_FIELD = 286,
    KW_IF = 287,
    KW_ELSE = 288,
    KW_ELSIF = 289,
    KW_UNLESS = 290,
    KW_FOR = 291,
    KW_UNTIL = 292,
    KW_WHILE = 293,
    KW_CONTINUE = 294,
    KW_TRY = 295,
    KW_CATCH = 296,
    KW_FINALLY = 297,
    KW_DEFER = 298,
    KW_REQUIRE = 299,
    KW_DO = 300,
    KW_USE_or_NO = 301,
    KW_SUB_named = 302,
    KW_SUB_named_sig = 303,
    KW_SUB_anon = 304,
    KW_SUB_anon_sig = 305,
    KW_METHOD_named = 306,
    KW_METHOD_anon = 307,
    BAREWORD = 308,
    METHCALL0 = 309,
    METHCALL = 310,
    THING = 311,
    PMFUNC = 312,
    PRIVATEREF = 313,
    QWLIST = 314,
    FUNC0OP = 315,
    FUNC0SUB = 316,
    UNIOPSUB = 317,
    LSTOPSUB = 318,
    PLUGEXPR = 319,
    PLUGSTMT = 320,
    LABEL = 321,
    LOOPEX = 322,
    DOTDOT = 323,
    YADAYADA = 324,
    FUNC0 = 325,
    FUNC1 = 326,
    FUNC = 327,
    UNIOP = 328,
    LSTOP = 329,
    POWOP = 330,
    MULOP = 331,
    ADDOP = 332,
    DOLSHARP = 333,
    HASHBRACK = 334,
    NOAMP = 335,
    COLONATTR = 336,
    FORMLBRACK = 337,
    FORMRBRACK = 338,
    SUBLEXSTART = 339,
    SUBLEXEND = 340,
    PHASER = 341,
    PREC_LOW = 342,
    PLUGIN_LOW_OP = 343,
    OROP = 344,
    PLUGIN_LOGICAL_OR_LOW_OP = 345,
    ANDOP = 346,
    PLUGIN_LOGICAL_AND_LOW_OP = 347,
    NOTOP = 348,
    ASSIGNOP = 349,
    PLUGIN_ASSIGN_OP = 350,
    PERLY_QUESTION_MARK = 351,
    PERLY_COLON = 352,
    OROR = 353,
    DORDOR = 354,
    PLUGIN_LOGICAL_OR_OP = 355,
    ANDAND = 356,
    PLUGIN_LOGICAL_AND_OP = 357,
    BITOROP = 358,
    BITANDOP = 359,
    CHEQOP = 360,
    NCEQOP = 361,
    CHRELOP = 362,
    NCRELOP = 363,
    PLUGIN_REL_OP = 364,
    SHIFTOP = 365,
    PLUGIN_ADD_OP = 366,
    PLUGIN_MUL_OP = 367,
    MATCHOP = 368,
    PERLY_EXCLAMATION_MARK = 369,
    PERLY_TILDE = 370,
    UMINUS = 371,
    REFGEN = 372,
    PLUGIN_POW_OP = 373,
    PREINC = 374,
    PREDEC = 375,
    POSTINC = 376,
    POSTDEC = 377,
    POSTJOIN = 378,
    PLUGIN_HIGH_OP = 379,
    ARROW = 380,
    PERLY_PAREN_CLOSE = 381,
    PERLY_PAREN_OPEN = 382
  };
#endif

/* Value type.  */
#ifdef PERL_IN_TOKE_C
static bool
S_is_opval_token(int type) {
    switch (type) {
    case BAREWORD:
    case FUNC0OP:
    case FUNC0SUB:
    case LABEL:
    case LSTOPSUB:
    case METHCALL:
    case METHCALL0:
    case PLUGEXPR:
    case PLUGSTMT:
    case PMFUNC:
    case PRIVATEREF:
    case QWLIST:
    case THING:
    case UNIOPSUB:
	return 1;
    }
    return 0;
}
#endif /* PERL_IN_TOKE_C */
#endif /* PERL_CORE */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{

    I32	ival; /* __DEFAULT__ (marker for regen_perly.pl;
				must always be 1st union member) */
    void *pval;
    OP *opval;
    GV *gvval;

};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (void);


/* Generated from:
 * 34582a3aa6840d5df7ae96e2cf4e4f0f1a050f393fbec6efeace994c996387aa perly.y
 * af9eea5667ae4cf5c222df4068af3533b3d6a530bac87a3ce09871d32646017b regen_perly.pl
 * ex: set ro ft=c: */
