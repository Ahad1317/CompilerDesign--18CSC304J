%{
	#include<stdio.h>
%}

%%
[0-9]+(\.[0-9]+)? {printf("Numbers : %s", yytext);}
[a-zA-Z]+ {printf("Chars : %s", yytext);}
%%

int yywrap(){return 1;}
int main()
{
	yylex();
	printf("enter the input mere bhai");
	return 0;
}