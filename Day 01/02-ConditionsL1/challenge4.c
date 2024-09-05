#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, racine1, racine2;

    printf("Entrez les coefficients a, b et c de l'équation ax^2 + bx + c = 0 :\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        if (b != 0) {
            printf("L'équation est linéaire : x = %.2f\n", -c / b);
        } else {
            if (c != 0) {
                printf("Pas de solution (équation inconsistente).\n");
            } else {
                printf("Tous les x sont solutions (équation indéterminée).\n");
            }
        }
        return 0;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        racine1 = (-b + sqrt(discriminant)) / (2 * a);
        racine2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Les solutions de l'équation sont : x1 = %.2f et x2 = %.2f\n", racine1, racine2);
    } else if (discriminant == 0) {
        racine1 = -b / (2 * a);
        printf("La solution double de l'équation est : x = %.2f\n", racine1);
    } else {
        printf("L'équation n'a pas de solution réelle.\n");
    }

    return 0;
}
