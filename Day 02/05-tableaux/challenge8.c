#include <stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);

    int arr[n];
    int copy[n];

    for (int i = 0; i < n; i++) {
        printf("d'élément %d :", i+1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        copy[i] = arr[i];
    }

    printf("Tableau original :\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    printf("Tableau copié :\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", copy[i]);
    }

    return 0;
}
