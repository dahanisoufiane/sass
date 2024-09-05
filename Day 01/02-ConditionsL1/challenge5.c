#include <stdio.h>

int main() {
    int annee, choix;
    int jours = 365;
    int mois = 30;
    int heures = 24;
    int minutes = 60;
    int secondes = 60;

    printf("Entrez l'année à convertir : ");
    scanf("%d", &annee);

    do {
        printf("\nMenu de conversion :\n");
        printf("1. Convertir en mois\n");
        printf("2. Convertir en jours\n");
        printf("3. Convertir en heures\n");
        printf("4. Convertir en minutes\n");
        printf("5. Convertir en secondes\n");
        printf("6. Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("%d année(s) = %d mois\n", annee, annee * (jours / mois));
                break;
            case 2:
                printf("%d année(s) = %d jours\n", annee, annee * jours);
                break;
            case 3:
                printf("%d année(s) = %d heures\n", annee, annee * jours * heures);
                break;
            case 4:
                printf("%d année(s) = %d minutes\n", annee, annee * jours * heures * minutes);
                break;
            case 5:
                printf("%d année(s) = %d secondes\n", annee, annee * jours * heures * minutes * secondes);
                break;
            case 6:
                printf("Quitter le programme.\n");
                break;
            default:
                printf("Choix invalide. Veuillez entrer un nombre entre 1 et 6.\n");
        }
    } while (choix != 6);

    return 0;
}
