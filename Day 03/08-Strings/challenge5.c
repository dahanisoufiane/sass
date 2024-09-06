#include <stdio.h>
#include <string.h>
int main() {
    char str[100];  

    printf("Entrez une chaîne de caractères : ");
    scanf("%s", &str); 

    int i = strlen(str) - 1;
    while (i != -1) {
        printf("%c", str[i]);
        i--;
    }

    return 0;
}
