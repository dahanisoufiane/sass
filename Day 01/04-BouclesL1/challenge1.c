#include <stdio.h>

int main() {
    int nombre, i;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    printf("Table de multiplication de %d :\n", nombre);

    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", nombre, i, nombre * i);
    }

    return 0;
}