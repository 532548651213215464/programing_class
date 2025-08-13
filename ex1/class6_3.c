#include <stdio.h>

int main () {
    
    int n = 7;
    int i = 2;
    int isPrime = 1;
    while (i<n) {
        isPrime = 1; 
        if (n%i==0) {  
        
            isPrime=0;
            break;
        }
        i++;
    }
    if (isPrime) {
        printf("%d是質數",n);
    } else {
        printf("%d不是質數",n);
    }
    
    return 0;
}
