#include <stdio.h>

int main() {
    float revenu, impots, deductions;
    int statut_fiscal;

    printf("Entrez votre revenu annuel (en euros) : ");
    scanf("%f", &revenu);

    printf("Entrez votre statut fiscal (1 pour célibataire, 2 pour marié, 3 pour chef de famille) : ");
    scanf("%d", &statut_fiscal);

    printf("Entrez vos déductions (en euros) : ");
    scanf("%f", &deductions);

    revenu -= deductions;

    switch (statut_fiscal) {
        case 1:
            deductions = 1000;
            break;
        case 2:
            deductions = 2000;
            break;
        case 3:
            deductions = 3000;
            break;
        default:
            printf("Statut fiscal invalide\n");
            return 0;
    }

    revenu -= deductions;

    if (revenu <= 20000) {
        impots = revenu * 0.05;
    } else if (revenu > 20000 && revenu <= 50000) {
        impots = (20000 * 0.05) + ((revenu - 20000) * 0.1);
    } else {
        impots = (20000 * 0.05) + (30000 * 0.1) + ((revenu - 50000) * 0.2);
    }

    printf("Les impôts à payer sont de %.2f euros.\n", impots);

    return 0;
}