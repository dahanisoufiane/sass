#include <stdio.h>

int main() {
    int n, count = 0, num = 2;

    printf("Entrez un nombre : ");
    scanf("%d", &n);

    printf("Les %d premiers nombres pairs sont : ", n);

    while (count < n) {
        printf("%d, ", num);
        num += 2;
        count++;
    }

    printf("\b\b \n"); // Remove the trailing comma and space

    return 0;
}