#include <stdio.h>

int main() {
    float budget;
    int destination, personnes;

    printf("Entrez votre budget (en euros) : ");
    scanf("%f", &budget);

    printf("Choisissez votre destination (1 pour plage, 2 pour montagne, 3 pour ville) : ");
    scanf("%d", &destination);

    printf("Entrez le nombre de personnes : ");
    scanf("%d", &personnes);

    if (budget >= 1000) {
        printf("Voyage haut de gamme\n");
    } else if (budget >= 500 && budget < 1000) {
        printf("Voyage moyen\n");
    } else {
        printf("Voyage économique\n");
    }

    switch (destination) {
        case 1:
            if (budget >= 1000 && personnes > 2) {
                printf("Recommandation : Plage\n");
            } else {
                printf("Recommandation : Voyage non adapté à la destination et au budget\n");
            }
            break;
        case 2:
            if (budget >= 500 && personnes <= 2) {
                printf("Recommandation : Montagne\n");
            } else {
                printf("Recommandation : Voyage non adapté à la destination et au budget\n");
            }
            break;
        case 3:
            printf("Recommandation : Ville\n");
            break;
        default:
            printf("Destination invalide\n");
    }

    return 0;
}