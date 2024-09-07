#include <stdio.h>

int main() {
    int n, i, factorielle = 1;

    printf("Entrez un nombre : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorielle *= i;
    }

    printf("%d! = %d\n", n, factorielle);

    return 0;
}