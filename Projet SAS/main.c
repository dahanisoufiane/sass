#include "h.h"
int main() {
    int choix;
    do {
        afficherMenu();
        scanf("%d", &choix);

        switch(choix) {
            case 1:
                ajouterEtudiant();
                break;
            case 2:
                printf("1. Modifier\n2. Supprimer\nChoix : ");
                int sousChoix;
                scanf("%d", &sousChoix);
                if (sousChoix == 1) {
                    modifierEtudiant();
                } else if (sousChoix == 2) {
                    supprimerEtudiant();
                } else {
                    printf("Choix invalide.\n");
                }
                break;
            case 3:
                afficherEtudiant();
                break;
            case 4:
                calculerMoyenne();
                break;
            case 5:
                afficherStatistiques();
                break;
            case 6:
                rechercherEtudiant();
                break;
            case 7:
                trierEtudiants();
                break;
            case 0:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (choix != 0);

    return 0;
}
