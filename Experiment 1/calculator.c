#include<stdio.h>

int main(){
    char op;
    int x,y;
    int res;
    printf("Enter operator (+,-,*, /): ");
    scanf("%c", &op);
    printf("Enter numbers ");
    scanf("%d %d", &x,&y);
    switch (op){
        case '+':
        res = x+y;
        printf("%d", res);
        break;
         case '-' :
        res = x-y;
        printf("%d", res);
        break;
         case '*' :
        res = x*y;
        printf("%d", res);
        break;
         case '/' :
        res = x/y;
        printf("%d", res);
        break;
        
         default :
    printf("something wrong");
    }
   return 0;
    
}