#include <stdio.h>
#include <string.h>

int main () {
    
    char password[4] = "1234";
    
    do{
        if(strcmp(password,"1234")==0) {
            printf("密碼正確");
        } else {
            printf("密碼錯誤，請重試");
        }
    } while(strcmp(password,"1234")!=0);
    
}
