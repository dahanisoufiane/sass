#include <stdio.h>

int main() {
    int total_conges, conges_utilises, statut_employe;
    int jours_restants;

    printf("Entrez le nombre total de jours de congés accordés : ");
    scanf("%d", &total_conges);

    printf("Entrez le nombre de jours de congés utilisés : ");
    scanf("%d", &conges_utilises);

    printf("Entrez le statut de l'employé (0 pour temps partiel, 1 pour temps plein) : ");
    scanf("%d", &statut_employe);

    if (statut_employe == 1) {
        jours_restants = total_conges - conges_utilises;
    } else if (statut_employe == 0) {
        jours_restants = (total_conges / 2) - conges_utilises;
    } else {
        printf("Statut de l'employé invalide.\n");
        return 0;
    }

    if (jours_restants < 0) {
        printf("Alerte : Les jours utilisés dépassent les jours accordés.\n");
    }

    printf("Jours de congé restants : %d\n", jours_restants);

    return 0;
}