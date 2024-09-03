#include <stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("d'élément %d :", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Tableau original :\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    n--;
    printf("Inversion d'un Tableau :\n");
    while (0 <= n) {
        printf("%d\n", arr[n]);
        n--;
    }

    return 0;
}
