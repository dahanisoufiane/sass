#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float moyenne_geometrique;
    printf("Entrez le premier nombre : ");
    scanf("%f", &a);
    printf("Entrez le deuxième nombre : ");
    scanf("%f", &b);
    printf("Entrez le troisième nombre : ");
    scanf("%f", &c);
    moyenne_geometrique = pow(a * b * c, 1.0/3);
    printf("La moyenne géométrique est : %.2f\n", moyenne_geometrique);

    return 0;
}