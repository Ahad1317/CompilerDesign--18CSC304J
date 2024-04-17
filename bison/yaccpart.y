%{
	#include<stdio.h>
%}

%union{
int num;}

%token<num> NUMBER;

%left '+' '-'
%left '*' '/'

%type<num> AE
%type<num> E

%% 
AE:E {printf("The result is %d", $$);}
E:E'+'E {$$=$1+$3;} 
E:E'-'E {$$=$1-$3;}
E:E'*'E {$$=$1*$3;}
E:E'/'E {$$=$1/$3;}
| NUMBER {$$ = $1;}
%%

void main(){
yyparse();}

void yyerror(){
printf("error mofo");
}		