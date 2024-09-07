#include <stdio.h>

int main() {
    int performance_score, anciennete, recompenses;
    float bonus = 0.0;

    printf("Entrez le score de performance (de 0 à 100) : ");
    scanf("%d", &performance_score);

    printf("Entrez l'ancienneté (en années) : ");
    scanf("%d", &anciennete);

    printf("Entrez le nombre de récompenses reçues (0 pour aucune, 1 pour une, 2 pour deux ou plus) : ");
    scanf("%d", &recompenses);

    if (performance_score >= 90 && anciennete >= 5) {
        printf("Performance : Excellente\n");
    } else if (performance_score >= 75 && anciennete >= 3) {
        printf("Performance : Bonne\n");
    } else if (performance_score >= 50 && anciennete < 3) {
        printf("Performance : Satisfaisante\n");
    } else {
        printf("Performance : Insuffisante\n");
    }

    if (recompenses == 1) {
        bonus = 0.1;
    } else if (recompenses >= 2) {
        bonus = 0.2;
    }

    if (bonus > 0.0) {
        printf("Bonus de performance : %.0f%%\n", bonus * 100);
    }

    return 0;
}