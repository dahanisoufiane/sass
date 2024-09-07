#include <stdio.h>

int main() {
    int n, i, count = 0;

    printf("Entrez un nombre : ");
    scanf("%d", &n);

    printf("Les %d premiers nombres impairs sont : ", n);

    for (i = 1; count < n; i += 2) {
        printf("%d, ", i);
        count++;
    }

    printf("\b\b \n"); // Remove the trailing comma and space

    return 0;
}