#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char b;
    int i = 0, count = 0;

    printf("Entrez une chaîne de caractères : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove the trailing newline character

    printf("Entrez un caractère, puis compte : ");
    scanf(" %c", &b);

    while (str[i] != '\0') {
        if (str[i] == b) {
            count++;
        }
        i++;
    }
    printf(" count : %d\n", count);
    return 0;
}