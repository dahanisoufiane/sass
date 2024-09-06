#include <stdio.h>

int main() {
    float revenu;
    int credit_score, duree_pret;

    printf("Entrez votre revenu annuel (en euros) : ");
    scanf("%f", &revenu);

    printf("Entrez votre score de crédit (sur 1000) : ");
    scanf("%d", &credit_score);

    printf("Entrez la durée du prêt (en années) : ");
    scanf("%d", &duree_pret);

    if (revenu >= 30000 && credit_score >= 700 && duree_pret <= 10) {
        printf("Éligible.\n");
    } else if (revenu >= 30000 && credit_score >= 650 && duree_pret <= 15) {
        printf("Éligible avec conditions.\n");
    } else {
        printf("Non éligible.\n");
    }

    return 0;
}