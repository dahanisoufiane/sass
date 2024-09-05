#include <stdio.h>

int main() {
    char caractere;

    printf("Entrez un caractère : ");
    scanf("%c", &caractere);

    if ((caractere >= 'A' && caractere <= 'Z') || (caractere >= 'a' && caractere <= 'z')) {
        if (caractere >= 'A' && caractere <= 'Z') {
            printf("%c est une lettre majuscule.\n", caractere);
        } else {
            printf("%c est une lettre minuscule.\n", caractere);
        }
    } else {
        printf("%c n'est pas un alphabet.\n", caractere);
    }

    return 0;
}
