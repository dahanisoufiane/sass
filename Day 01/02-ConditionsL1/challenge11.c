#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int jour = rand() % 7;

    switch (jour) {
        case 0: printf("Lundi\n"); break;
        case 1: printf("Mardi\n"); break;
        case 2: printf("Mercredi\n"); break;
        case 3: printf("Jeudi\n"); break;
        case 4: printf("Vendredi\n"); break;
        case 5: printf("Samedi\n"); break;
        case 6: printf("Dimanche\n"); break;
    }

    return 0;
}
