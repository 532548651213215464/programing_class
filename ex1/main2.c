#include <stdio.h>

int main(){
    
    int a;
    int b;
    char op;
    
    a=3;
    b=0;
    op='/';
    
    switch (op) {
        
        case '+':
        printf("%d\n",a+b);
        break;
        
        case '-':
        printf("%d\n",a-b);
        break;
        
        case '*':
        printf("%d\n",a*b);
        break;
        
        case '/':
        if (b!=0) {
            printf("%d\n",a/b);
        } else {
            printf("dividend can't be 0");
        }
        break;
        
        default:
        printf ("Invalid");
    }
    
    return 0;
    
}
