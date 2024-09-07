#include <stdio.h>

int main() {
    float salaire_base, salaire_total, heures_supplementaires, taux_horaire;
    int type_poste;

    printf("Entrez votre salaire de base (en euros) : ");
    scanf("%f", &salaire_base);

    printf("Entrez le nombre d'heures supplémentaires : ");
    scanf("%f", &heures_supplementaires);

    printf("Entrez votre type de poste (1 pour junior, 2 pour senior) : ");
    scanf("%d", &type_poste);

    printf("Entrez votre taux horaire : ");
    scanf("%f", &taux_horaire);

    salaire_total = salaire_base + (heures_supplementaires * taux_horaire * 1.5);

    if (type_poste == 2) {
        salaire_total += salaire_base * 0.2;
    } else if (type_poste == 1) {
        salaire_total += salaire_base * 0.1;
    }

    printf("Le salaire total est de %.2f euros.\n", salaire_total);

    return 0;
}