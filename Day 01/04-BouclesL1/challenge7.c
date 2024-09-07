#include <stdio.h>

int main() {
    int nombre, reste;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    while (nombre != 0) {
        reste = nombre % 10;
        printf("%d", reste);
        nombre = nombre / 10;
    }

    printf("\n");

    return 0;
}