%{ 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct SymbolTable
{

char Name[10];
char Type[10];
int Offset;

};

struct SymbolTable ST[100];
FILE *yyin;
int count=0;
int OFFSET=0;
int t=0,Index=0;
void Insert_Into_Table(char type[10],char Name[10])
{

strcpy(ST[count].Name,Name);
strcpy(ST[count].Type,type);

if(strcmp("int",type)==0)
{ST[count].Offset=OFFSET;
OFFSET=OFFSET+4;}
if(strcmp("char",type)==0)
{ST[count].Offset=OFFSET;
OFFSET=OFFSET+1;}
if(strcmp("float",type)==0)
{ST[count].Offset=OFFSET;
OFFSET=OFFSET+8;}
count++;

}
void display_table()
{
  int i;
  printf("\n\n The Symbol Table  \n\n");
  printf(" Name\tType\toffset\n");
  for(i=0;i<count;i++)
    printf("%s\t%s\t %d \n",ST[i].Name,ST[i].Type,ST[i].Offset);
}

int search(char symbol[10])
{
int i,flag=1;
for(i=0;i<count;i++)
{
if(strcmp(symbol,ST[i].Name)==0)
{
flag=-1;
break;
}
}
return flag;

}

struct Quadruple
{
char operator[5];
char arg1[10];
char arg2[10];
char result[10];
}QUAD[100];

void addQuadruple(char op[10],char op2[10],char op1[10],char res[10]){
strcpy(QUAD[Index].operator,op);
strcpy(QUAD[Index].arg1,op2);
strcpy(QUAD[Index].arg2,op1);
strcpy(QUAD[Index].result,res);
Index++;
}

void Display_Quad()
{

int i;
  printf("\n\n The Quraduple Table  \n\n");
  printf("operator arg1 arg2 result \n");
  for(i=0;i<Index;i++)
    printf("%-8s %-4s %-4s %-6s\n",QUAD[i].operator,QUAD[i].arg1,QUAD[i].arg2,QUAD[i].result);

}


%}
%union
{
int ival;
double dval;
char string[10];
}

%token Math String Import Standard FUNCTION RETURN
%token FOR WHILE IF ELSE DO COMMA BREAK
%token INT FLOAT CHAR STRING READ NUM
%token SOB SCB COB CCB CROB CRCB ID
%token PLUS MINUS MULTIPLY DIVISON AND OR LT LTE GT GTE EQUALTO ASSIGNMENT SEMICOLON
%type <string> ID INT FLOAT CHAR STRING Type Arithmetic_Expression NUM
%type <string> Arithmetic_Operator PLUS MINUS MULTIPLY DIVISON ASSIGNMENT
%%


str: Program {display_table();Display_Quad();return 0;} ;
Program:Import SOB Standard Library SCB Variable_Declaration_List Function_List  ;
Library: Math Library|String Library | Math |String ;
Variable_Declaration_List: Variable Variable_Declaration_List | Variable;
Variable: Type ID  {

if(search($2)==-1)
{ printf(" variable  %s Already Defined\n",$2);
yyerror();}
else
Insert_Into_Table($1,$2);
};
Type:INT|FLOAT|CHAR|STRING;
Function_List: Function Function_List|Function  ;
Function:  FUNCTION Type ID COB CCB Block ;
Block:CROB Statement_List CRCB ;
Statement_List: Statement Statement_List|Statement ;
Statement: Variable_Declaration_List|Loop_Statement|READ COB ID CCB|ID ASSIGNMENT Arithmetic_Expression {addQuadruple($2,$3,"",$1);}
 			| ID ASSIGNMENT Conditional_Expression | ID ASSIGNMENT Logical_Expression| Conditional_Statement 
            |Function_Call_Statement | RETURN ID | RETURN Conditional_Expression |RETURN NUM |RETURN Arithmetic_Expression|
            RETURN Logical_Expression| BREAK ;
Loop_Statement: FOR COB ID ASSIGNMENT NUM SEMICOLON ID Conditional_Operator NUM SEMICOLON ID ASSIGNMENT ID Arithmetic_Operator NUM CCB Block
				|WHILE COB Conditional_Expression CCB Block|DO Block WHILE COB Conditional_Expression CCB  ;
Arithmetic_Operator : PLUS | MINUS | MULTIPLY| DIVISON |ASSIGNMENT  ;
Conditional_Operator :  LT|LTE|GT|GTE|EQUALTO ;
Conditional_Expression : ID Conditional_Operator Arithmetic_Expression ;
Arithmetic_Expression : Arithmetic_Expression Arithmetic_Operator Arithmetic_Expression {char reg[10]="t";t=t+1;char temp[10]; sprintf(temp,"%d",t);strcat(reg,temp);strcpy($$,reg);addQuadruple($2,$1,$3,$$);} | NUM {strcpy($$,$1);}|ID  {strcpy($$,$1);};
Logical_Expression:Conditional_Expression Logical_Operator Logical_Expression |Conditional_Expression ;
Logical_Operator:AND|OR ;
Conditional_Statement : IF COB Conditional_Expression CCB Block ELSE Block | IF COB Conditional_Expression CCB Block;
Function_Call_Statement :ID COB List_Of_Identifiers CCB|ID ASSIGNMENT ID COB List_Of_Identifiers CCB;
List_Of_Identifiers : NUM COMMA List_Of_Identifiers | ID COMMA List_Of_Identifiers | NUM |ID;
%%
#include "lex.yy.c"
main(int argc,char *argv[])
{ 
	yyin=fopen(argv[1],"r");
    if(!yyparse())

{printf("NO Compilation Error!!\n");}


}

yyerror(char *s) {
	printf("\n line No. %d : %s %s\n", yylineno, yytext,s );
exit(0);
}
int yywrap(void)
{
return 1;
}

