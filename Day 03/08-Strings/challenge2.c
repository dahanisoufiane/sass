#include <stdio.h>

int main() {
    char str[100];  
    int longueur = 1; 

    printf("Entrez une chaîne de caractères : ");

    scanf("%s", str); 

    while (str[longueur] != '\0') {
        longueur++;
    }

    printf("La longueur de la chaîne est : %d\n", longueur);

    return 0;
}
