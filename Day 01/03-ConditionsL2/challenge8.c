#include <stdio.h>

int main() {
    int age, historique_medical, type_couverture;

    printf("Entrez votre âge : ");
    scanf("%d", &age);

    printf("Entrez votre historique médical (0 pour aucun problème, 1 pour problème mineur, 2 pour problème majeur) : ");
    scanf("%d", &historique_medical);

    printf("Entrez votre type de couverture (1 pour de base, 2 pour étendue) : ");
    scanf("%d", &type_couverture);

    if (age < 30) {
        printf("Plan de santé : Plan de base\n");
    } else if (age >= 30 && historique_medical == 0) {
        printf("Plan de santé : Plan de base\n");
    } else if (age >= 30 && historique_medical >= 1) {
        printf("Plan de santé : Plan étendu\n");
        if (historique_medical == 2) {
            printf("Couverture supplémentaire pour les problèmes majeurs\n");
        }
    }

    return 0;
}