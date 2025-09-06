#include <stdio.h>

int main () {
    
    int h = 11;
    while (h!=11) {
        
        printf ("請輸入要列出的乘法表，輸入10印出全部，輸入11離開\n");
    
        if (h>=1&&h<=9) {
       
            for (int i = 1;i <= 9;i++) {
           
                printf("%d*%d=%d\n",h,i,h*i);
           
            }
        
        } else if (h==10) {
        
            for (int i = 1;i <= 9;i++) {
            
                for (int j = 1;j <= 9;j++) {
                
                    printf ("%d*%d=%d\n",i,j,i*j);
                
                }
            
                printf("\n");
            
            }
        
        } else if (h==11) {
        
            printf ("程式結束\n");
            return 0;
        
        } else {
        
        printf ("選擇無效\n");
        
        }
        
    }
    
    printf("程式結束\n");
    
    return 0;
}
