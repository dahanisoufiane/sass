#include <stdio.h>
#include <string.h>

int main() {
    
    char str1[100];
    char str2[100];
    
    int r;

    printf("entre str1 : ");
    scanf("%s", &str1);
    printf("entre str2 : ");
    scanf("%s", &str2);
    
    for(int i =0; i < strlen(str1);i++ ){
        if(str1[i] != str2[i]){
            r =  str1[i] - str2[i];
            printf("%d", r);
            break;
        }
    }


    return 0;
}