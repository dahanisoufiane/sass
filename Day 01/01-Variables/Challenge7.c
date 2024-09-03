#include <stdio.h>

int main() {
    float num1, num2, num3;
    float poids1 = 2, poids2 = 3, poids3 = 5;
    float moyenne_ponderee;
    printf("Entrez le premier nombre : ");
    scanf("%f", &num1);
    printf("Entrez le deuxième nombre : ");
    scanf("%f", &num2);
    printf("Entrez le troisième nombre : ");
    scanf("%f", &num3);
    moyenne_ponderee = ((num1 * poids1) + (num2 * poids2) + (num3 * poids3)) / (poids1 + poids2 + poids3);
    printf("La moyenne pondérée est : %.2f\n", moyenne_ponderee);

    return 0;
}