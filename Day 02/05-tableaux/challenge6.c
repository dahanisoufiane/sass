#include <stdio.h>

int main() {
    int n, factor;

    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("d'élément %d :", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Entrez le facteur de multiplication : ");
    scanf("%d", &factor);

    for (int i = 0; i < n; i++) {
        arr[i] = factor * arr[i];
    }

    printf("Le tableau résultant est :\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
