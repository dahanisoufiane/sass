#include <stdio.h>

int main() {
    int age, annees_cotisation;
    float montant_epargne, bonus;

    printf("Entrez votre âge : ");
    scanf("%d", &age);

    printf("Entrez les années de cotisation : ");
    scanf("%d", &annees_cotisation);

    printf("Entrez le montant total épargné (en euros) : ");
    scanf("%f", &montant_epargne);

    bonus = 0.0;

    if (age >= 65 && annees_cotisation >= 30 && montant_epargne >= 100000) {
        printf("Plan de retraite : Plan complet avec pension élevée\n");
        bonus = (montant_epargne - 100000) * 0.05;
    } else if (age >= 65 && annees_cotisation >= 20 && montant_epargne >= 50000) {
        printf("Plan de retraite : Plan partiel avec pension moyenne\n");
        bonus = (montant_epargne - 50000) * 0.05;
    } else {
        printf("Plan de retraite : Plan épargne non encore disponible\n");
    }

    if (bonus > 0) {
        printf("Bonus de retraite : %.2f euros\n", bonus);
    }

    return 0;
}