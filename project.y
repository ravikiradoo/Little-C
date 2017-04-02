%{ 
#include<stdio.h>
FILE *yyin;
%}


%token Math String Import Standard FUNCTION
%token FOR WHILE IF ELSE DO
%token INT FLOAT CHAR STRING ID READ NUM
%token SOB SCB COB CCB CROB CRCB 
%token PLUS MINUS MULTIPLY DIVISON AND OR LT LTE GT GTE EQUALTO ASSIGNMENT SEMICOLON
%%


	str: Program {return 0;} ;

	Program:Import SOB Standard Library SCB Variable_Declaration_List Function_List {printf("0");} ;

	Library: Math Library
		|String Library 
		| Math 
		|String ;

	Variable_Declaration_List: Variable Variable_Declaration_List 
				   | Variable {printf("1");};

	Variable: Type ID  {printf("2");};

	Type:INT
	    |FLOAT
	    |CHAR
	    |STRING {printf("3");};

	Function_List: Function Function_List
		      |Function  {printf("4");};

	Function:  FUNCTION Type ID COB CCB Block{printf("5");} ;

	Block:CROB Statement_List CRCB {printf("6");};

	Statement_List: Statement Statement_List
		       |Statement {printf("7");};

	Statement: Variable_Declaration_List
		  |Loop_Statement
		  |Conditional_Statement
		  |READ COB ID CCB {printf("8");};

	Loop_Statement: FOR COB ID ASSIGNMENT NUM SEMICOLON ID Conditional_Operator NUM SEMICOLON ID ASSIGNMENT ID Arithmetic_Operator NUM 				CCB Block
			|WHILE COB CCB Block
			|DO Block WHILE COB CCB {printf("while");};
	
	Conditional_Statement: IF COB Expression CCB Block ELSE Block
			      |IF COB Expression CCB Block {printf("If");};

	Expression : NUM Conditional_Operator NUM ;
		    

	Conditional_Operator : LT
			      |LTE
			      |GT
			      |GTE
			      |EQUALTO {printf("11 ");};

	Arithmetic_Operator : PLUS 
			    | MINUS 
			    | MULTIPLY
			    | DIVISON
			    |ASSIGNMENT {printf("10 ");} ;

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
}
int yywrap(void)
{
return 1;
}

