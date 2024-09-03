#include <stdio.h>
#include <string.h>

char* reverse_string(char* str) {
    int i, j;
    char temp;
    
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    
    return str;
}

int main() {
    char input[100]= "test";
    printf("The reversed string is: %s\n", reverse_string(input));
    
    return 0;
}