#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("d'élément %d :", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("La somme des éléments du tableau est : %d\n", sum);

    return 0;
}
