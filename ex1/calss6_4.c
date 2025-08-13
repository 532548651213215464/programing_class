#include <stdio.h>

int main () {
    
    int i = 1;
    int j = 0;
    while (j<=100) {
        
        j=j+i;
        i++;
        
    }
    printf("%d",i-1);
}
