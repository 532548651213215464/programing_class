#include <stdio.h>

int main () {
    
    int y = 1;
    
    for (int x = 1; x <= 9;){
        
        if (y <= 9) {
            
            printf ("%d*%d=%d\t",x,y,x*y);
            y++;
        } else {
            
            x++;
            printf ("\n");
            y = 1;
            
        }
        
    }
    
    return 0;
    
}
