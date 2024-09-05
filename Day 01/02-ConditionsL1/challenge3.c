#include <stdio.h>

int main() {
    int a, b;

    printf("Entrez la première valeur : ");
    scanf("%d", &a);

    printf("Entrez la deuxième valeur : ");
    scanf("%d", &b);

    int somme = a + b;

    if (a == b) {
        printf("Le triple de la somme est : %d\n", 3 * somme);
    } else {
        printf("La somme des deux valeurs est : %d\n", somme);
    }

    return 0;
}
