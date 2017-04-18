Letter [a-zA-Z]
Digit  [0-9]
AlphaNumeric [a-zA-Z0-9]
%{
#include<string.h>
#include<stdlib.h>
#include "y.tab.h"
int yylineno;
%}

%%


[ \t] ;
[ \n] {yylineno=yylineno+1;}
standard return Standard;
math return Math;
string {strcpy(yylval.string,yytext);return String; };
String return STRING;
import return Import;
int  {strcpy(yylval.string,yytext);return INT; };
float  {strcpy(yylval.string,yytext);return FLOAT; };
char  {strcpy(yylval.string,yytext);return CHAR; };
for return FOR;
while return WHILE;
if return IF;
else return ELSE;
And return AND;
Or return OR;
function return FUNCTION;
Read return READ;
Return return RETURN;
break return BREAK;
do return DO;
{Digit}+ {strcpy(yylval.string,yytext);return NUM; };;
{Letter}({Letter}|{Digit})* {strcpy(yylval.string,yytext);return ID; };
"[" return SOB;
"]" return SCB;
"(" return COB;
")" return CCB;
"{" return CROB;
"}" return CRCB;
"==" return EQUALTO;
"<" return LT;
">" return GT;
"<=" return LTE;
">=" return GTE;
"+"  {strcpy(yylval.string,yytext);return PLUS; };
"-"  {strcpy(yylval.string,yytext); return MINUS;};
"/"  {strcpy(yylval.string,yytext);return DIVISON; };
"*"  {strcpy(yylval.string,yytext);return MULTIPLY;};
"=" {strcpy(yylval.string,yytext);return ASSIGNMENT; };
; return SEMICOLON;
, return COMMA;

 %%
