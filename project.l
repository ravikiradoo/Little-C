
Letter [a-zA-Z]
Digit  [0-9]
AlphaNumeric [a-zA-Z0-9]
%{
#include "y.tab.h"
int yylineno;
%}

%%


[ \t] ;
[ \n] {yylineno=yylineno+1;}
standard return Standard;
math return Math;
string return String;
String return STRING;
import return Import;
int return INT;
float return FLOAT;
char return CHAR;
for return FOR;
while return WHILE;
if return IF;
else return ELSE;
And return AND;
Or return OR;
function return FUNCTION;
Read return READ;
do return DO;
{Digit}+ return NUM;
{Letter}({Letter}|{Digit})* return ID;
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
"+" return PLUS;
"-" return MINUS;
"/" return DIVISON;
"*" return MULTIPLY;
"=" return ASSIGNMENT;
; return SEMICOLON;
 %%
