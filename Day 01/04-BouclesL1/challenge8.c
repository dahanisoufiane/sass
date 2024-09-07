#include <stdio.h>

int main() {
    int n, i;
    long long int fib[100];

    printf("Entrez un nombre : ");
    scanf("%d", &n);

    fib[0] = 0;
    fib[1] = 1;

    for (i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("Les %d premiers termes de la suite de Fibonacci sont : \n", n);

    for (i = 0; i < n; i++) {
        printf("%lld ", fib[i]);
    }

    printf("\n");

    return 0;
}