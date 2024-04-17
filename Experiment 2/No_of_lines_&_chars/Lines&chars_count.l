%{
#include<stdio.h>
int lines=0;
int chars=0;
%}

%%
\n {++lines;}
.   {++chars;}
end {return 0;}
%%

int yywrap(){return 1;}

int main(){
yylex();
printf("no of lines are : %d \n no of chars are : %d \n", lines, chars);
return 0;
}