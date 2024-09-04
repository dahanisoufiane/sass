#include <stdio.h>

int main() {
    int number;
    int sum = 0;

    printf("Entrez un nombre : ");
    scanf("%d", &number);

    printf("Table de multiplication de %d :\n", number);

    for (int i = 1; i <= 10; i++) {
        int product = number * i;
        printf("%d x %d = %d\n", number, i, product);
        sum += product;
    }

    printf("La somme des produits est : %d\n", sum);

    return 0;
}
