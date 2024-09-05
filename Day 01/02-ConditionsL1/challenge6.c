#include <stdio.h>

int main() {
    int nombre;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    if (nombre > 0) {
        printf("%d est un nombre positif.\n", nombre);
    } else if (nombre < 0) {
        printf("%d est un nombre négatif.\n", nombre);
    } else {
        printf("Le nombre est nul.\n");
    }

    return 0;
}
