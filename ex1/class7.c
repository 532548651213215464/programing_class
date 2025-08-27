#include <stdio.h>

int main () {
    
    int n = 10;
    int i1 = 0;
    int i2 = 1;
    int i3 = 0;
    int a = 2;
    
    if (n > 2) {
        do {
        
            i3 = i1 + i2;
            i1 = i2;
            i2 = i3;
            a++;
        
        } while (a < n);
    } else if (n == 2) {
        
        i3 = 1;
        
    } else {
        
        i3=0;
        
    } 
    
    printf ("第%d項是%d",n,i3);
    
    return 0;
    
}
