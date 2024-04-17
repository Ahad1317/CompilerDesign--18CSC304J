%{
	#include<stdio.h>
	int count=0;
%}

%%
[A-Z]	{printf("%s Capital letters\n", yytext);
	count++;}
. { printf("%s Non capital letters\n", yytext);}
\n {return 0;}
%%

int yywrap(){return 1;}

int main(){
yylex();
printf("no of capital letters are : %d\n", count);
return 0;
}