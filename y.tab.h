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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    Math = 258,
    String = 259,
    Import = 260,
    Standard = 261,
    FUNCTION = 262,
    RETURN = 263,
    FOR = 264,
    WHILE = 265,
    IF = 266,
    ELSE = 267,
    DO = 268,
    COMMA = 269,
    BREAK = 270,
    INT = 271,
    FLOAT = 272,
    CHAR = 273,
    STRING = 274,
    READ = 275,
    NUM = 276,
    SOB = 277,
    SCB = 278,
    COB = 279,
    CCB = 280,
    CROB = 281,
    CRCB = 282,
    ID = 283,
    PLUS = 284,
    MINUS = 285,
    MULTIPLY = 286,
    DIVISON = 287,
    AND = 288,
    OR = 289,
    LT = 290,
    LTE = 291,
    GT = 292,
    GTE = 293,
    EQUALTO = 294,
    ASSIGNMENT = 295,
    SEMICOLON = 296
  };
#endif
/* Tokens.  */
#define Math 258
#define String 259
#define Import 260
#define Standard 261
#define FUNCTION 262
#define RETURN 263
#define FOR 264
#define WHILE 265
#define IF 266
#define ELSE 267
#define DO 268
#define COMMA 269
#define BREAK 270
#define INT 271
#define FLOAT 272
#define CHAR 273
#define STRING 274
#define READ 275
#define NUM 276
#define SOB 277
#define SCB 278
#define COB 279
#define CCB 280
#define CROB 281
#define CRCB 282
#define ID 283
#define PLUS 284
#define MINUS 285
#define MULTIPLY 286
#define DIVISON 287
#define AND 288
#define OR 289
#define LT 290
#define LTE 291
#define GT 292
#define GTE 293
#define EQUALTO 294
#define ASSIGNMENT 295
#define SEMICOLON 296

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 40 "project.y" /* yacc.c:1909  */

int ival;
double dval;
char string[10];

#line 142 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
