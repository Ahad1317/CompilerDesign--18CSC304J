%{
	#include<stdio.h>
%}

DIGIT [0-9]
LETTER [a-zA-Z]
ID {LETTER}({LETTER}|{DIGIT})*

%%
"integer" {printf("Keywords : %s", yytext);}
"read" {printf("Keywords : %s", yytext);}
"display" | "if" | "then" | "else" | "while" | "for" | "to" | "step" {printf("Keywords : %s", yytext);}
{ID} {printf("Identifier : %s", yytext);}
{DIGIT}+ {printf("Integer : %s", yytext);}
[;=,(){}] {printf("%s\n", yytext);}
"==" {printf("equal\n");}
">=" {printf("greater than or equal\n");}
"<=" {printf("less than or equal\n");}
[><] {printf("greater than or less than\n");}
%%

int yywrap(){return 1;}
int main()
{
	FILE *fp = fopen("file2.star.txt", "r");
	if(!fp){
	perror("cant open");
	return 1;}

	yyin=fp;
	
	yylex();
	fclose(fp);

	return 0;
}