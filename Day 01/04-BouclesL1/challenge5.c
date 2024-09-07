#include <stdio.h>

int main() {
    int base, exposant, resultat = 1;

    printf("Entrez la base : ");
    scanf("%d", &base);

    printf("Entrez l'exposant : ");
    scanf("%d", &exposant);

    for (int i = 0; i < exposant; i++) {
        resultat *= base;
    }

    printf("%d^%d = %d\n", base, exposant, resultat);

    return 0;
}