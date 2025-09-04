#include <stdio.h>

int main() {
    int choice;
    int h = 5; 

    while (1) {
        
        printf("\n請選擇圖形：\n");
        printf("1. 金字塔三角形\n");
        printf("2. 倒金字塔三角形\n");
        printf("3. 長方形\n");
        printf("4. 離開\n");
        printf("輸入選項：");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                for (int i = 1; i <= h; i++) { //高度為5，即此迴圈內的內容重複五遍
                    
                    for (int j = 1; j <= h - i; j++) { //空格數為 h-i 每增加一層，i+1，h-i便會變小1，單邊空格數正好也減一
                        printf(" ");
                    }
                    
                    for (int k = 1; k <= 2 * i - 1; k++) {
                        printf("*");
                    }
                    printf("\n"); //印完星星直接換行，效果與印完星星再印一次空格一樣 換行便將後面全部空下來，不須再次印空格
                }
                break;

            case 2: //將case 1 的流程倒過來
                for (int i = h; i >= 1; i--) { //高度為5，順序與前面相反，是先將i設為h，然後遞減
                    
                    for (int j = 1; j <= h - i; j++) { //空格數一樣是h-i，因為i的順序相反，所以空格數是由0開始遞增
                        printf(" ");
                    }
                    
                    for (int k = 1; k <= 2 * i - 1; k++) {
                        printf("*");
                    }
                    printf("\n"); //印完星星直接換行，效果與印完星星再印一次空格一樣 換行便將後面全部空下來，不須再次印空格
                }
                break;

            case 3: 
                for (int i = 1; i <= h; i++) {
                    for (int j = 1; j <= h; j++) {
                        printf("*");
                    }
                    printf("\n");
                }
                break;

            case 4: 
                printf("程式結束。\n");
                return 0; //return 0 直接結束程式

            default:
                printf("選項錯誤。\n");
        }
    }

    return 0;
}
