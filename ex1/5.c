#include <stdio.h>

int main () { 
    int i = 0;
    int n = 15;
    int k = n;
    int bin = 0;
    int base = 1;
    int count = 0;
    
    while (n != 0) {
        
        i = n % 2;
        bin += ( i * base);
        n /= 2;
        base *= 10;
        
    }
    int j = bin;
    while (j != 0) {
        
        if (j % 10 == 1) {
            
            count++;
            
        }
        j /= 10;
    }
    printf ("binary of %d is %d,it has %d 1s\n",k,bin,count);
    
    return 0;
}
