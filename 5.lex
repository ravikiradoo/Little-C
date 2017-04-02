%{
#include <stdio.h>
int count_i=0;
%}
%%
[A-Za-z]([0-9]|[A-Za-z])* {count_i++;}
%%
main(){
yyin=fopen("test","r");
yylex();
printf("Number of indentifiers =%d",count_i);
}
