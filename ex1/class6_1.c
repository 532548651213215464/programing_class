#include <stdio.h>

int main () {
    
    int n = 5;
    int i = 1;
    int result=1;
    
    while (n>=i) {
        
        result = result * i;
        i++;
    }
    
    printf("%d",result);
    
    return 0;
}
