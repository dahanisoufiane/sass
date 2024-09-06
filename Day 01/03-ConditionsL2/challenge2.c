#include <stdio.h>

int main() {
    int age, type_voiture, accidents;
    float prime_base = 1000.0;
    float prime_finale;

    printf("Entrez l'âge du conducteur (en années) : ");
    scanf("%d", &age);

    printf("Entrez le type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale) : ");
    scanf("%d", &type_voiture);

    printf("Entrez le nombre d'accidents au cours des 5 dernières années : ");
    scanf("%d", &accidents);

    if (age < 25) {
        prime_finale = prime_base * 1.5;
    } else if (age > 65) {
        prime_finale = prime_base * 1.2;
    } else {
        prime_finale = prime_base;
    }

    switch (type_voiture) {
        case 1:
            prime_finale *= 2;
            break;
        case 2:
            prime_finale *= 1.2;
            break;
        case 3:
            prime_finale *= 1.1;
            break;
    }

    if (accidents > 1) {
        prime_finale += prime_finale * 0.3;
    }

    printf("La prime d'assurance est de %.2f euros.\n", prime_finale);

    return 0;
}