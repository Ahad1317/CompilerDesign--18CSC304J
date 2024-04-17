%option noyywrap
%{
	#include<stdio.h>
	#include "y.tab.h"
%}

%%
[0-9]+	{yylval.num=atoi(yytext);
	return NUMBER;}
\n	{return 0;}
.	{return yytext[0];}
%%