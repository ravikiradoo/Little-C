
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
string return String;         //Library
String return STRING;
import return Import;
int return INT;
bool return BOOL;
float return FLOAT;
char return CHAR;
void return VOID;
for return FOR;
while return WHILE;
if return IF;
else return ELSE;
And return AND;
Or return OR;
function return FUNCTION;
Read return READ;
Write return WRITE;
Return return RETURN;
break return BREAK;
do return DO;
{Digit}+ return NUM;
{Letter}({Letter}|{Digit}|[_])* return ID;
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
, return COMMA;

 %%
