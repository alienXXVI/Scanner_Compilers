/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
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

#ifndef YY_YY_ANALISE_SINTATICA_TAB_H_INCLUDED
# define YY_YY_ANALISE_SINTATICA_TAB_H_INCLUDED
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
     INTEIRO = 258,
     REAL = 259,
     IDENTIFICADOR = 260,
     CADEIA = 261,
     FILE_NAME = 262,
     CARACTER = 263,
     IF = 264,
     ELSE = 265,
     WHILE = 266,
     FOR = 267,
     DO = 268,
     SWITCH = 269,
     CASE = 270,
     RETURN = 271,
     BREAK = 272,
     DEFAULT = 273,
     INT = 274,
     FLOAT = 275,
     CHAR = 276,
     VOID = 277,
     STRING = 278,
     STRUCT = 279,
     ENUM = 280,
     DEFINE = 281,
     INCLUDE = 282,
     SCAN = 283,
     PRINT = 284,
     SOMA = 285,
     MULTIPLICACAO = 286,
     DIVISAO = 287,
     SUBTRACAO = 288,
     RECEBE = 289,
     IGUAL = 290,
     DIFERENTE = 291,
     MAIOR = 292,
     MENOR = 293,
     MAIOR_IGUAL = 294,
     MENOR_IGUAL = 295,
     E_LOGICO = 296,
     OU_LOGICO = 297,
     NOT_LOGICO = 298,
     ABRE_P = 299,
     FECHA_P = 300,
     ABRE_CH = 301,
     FECHA_CH = 302,
     ABRE_COL = 303,
     FECHA_COL = 304,
     VIRGULA = 305,
     ASPAS_DUPLAS = 306,
     DOIS_PONTOS = 307,
     PONTO_VIRGULA = 308
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 19 "analise_sintatica.y"

    int inteiro;
    double real;
    char* string;
    char caractere;


/* Line 2058 of yacc.c  */
#line 118 "analise_sintatica.tab.h"
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

#endif /* !YY_YY_ANALISE_SINTATICA_TAB_H_INCLUDED  */