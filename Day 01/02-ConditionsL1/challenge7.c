#include <stdio.h>

int main() {
    char caractere;

    printf("Entrez un caractère : ");
    scanf("%c", &caractere);

    if (caractere >= 65 && caractere <= 90) {
        printf("%c est une lettre majuscule.\n", caractere);
    } if (caractere >= 97 && caractere <= 122) {
        printf("%c est une lettre minuscule.\n", caractere);
    }

    return 0;
}
