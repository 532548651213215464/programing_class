#include <stdio.h>

int main () {
    
    int h = 5;
    int choice = 4;
    
    while (choice !=4) {
        printf("請輸入要列印的圖形類型:\n");
        printf("1.正三角形\n");
        printf("2.倒三角形\n");
        printf("3.長方形\n");
        printf("4.離開\n");
        
        switch (choice) {
            
            case 1 :
            for (int i = 1;i<=h;i++) {
                
                for (int j = 1;j <= h - i;j++) {
                    
                    printf (" ");
                    
                }
                
                for (int j = 1;j <= i * 2 - 1;j++) {
                    
                    printf("*");
                    
                }
                
                printf ("\n");
                
            }
            break;
            
            case 2 :
            for (int i = h;i >= 1;i--) {
                
                for (int j = 1;j <= h - i;j++) {
                    
                        printf (" ");
                        
                    }
                
                for (int j = 1;j <= i * 2 - 1;j++) {
                    
                    printf("*");
                    
                }
                
                printf ("\n");
            }
            break;
            
            case 3 :
            for (int i = 1;i<=h;i++) {
                
                printf("***");
                printf("\n");
                
            }
            break;
            
            case 4 :
            printf("結束程式\n");
            return 0;
            break;
            
            default :
            printf("無效選擇\n");
            break;
        }
        
    }    
    
}
