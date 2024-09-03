#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, z1, x2, y2, z2;
    float distance;
    printf("Entrez les coordonnées du premier point (x1, y1, z1) : ");
    scanf("%f %f %f", &x1, &y1, &z1);
    printf("Entrez les coordonnées du deuxième point (x2, y2, z2) : ");
    scanf("%f %f %f", &x2, &y2, &z2);
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
    printf("La distance entre les deux points est : %.2f\n", distance);

    return 0;
}