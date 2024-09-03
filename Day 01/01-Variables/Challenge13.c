#include <stdio.h>

int main() {
    int nombre;
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    printf("Valeur en décimal : %d\n", nombre);
    printf("Valeur en binaire : %08b\n", nombre);
    printf("Valeur en hexadécimal : %x\n", nombre);

    return 0;
}