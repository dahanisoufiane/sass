#include <stdio.h>

int main() {
    int n, m, i, j, k;
    printf("Enter the number of elements for the first array: ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        printf("d'élément %d :", i+1);
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elements for the second array: ");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter the elements:\n");
    for(i = 0; i < m; i++){
        printf("d'élément %d :", i+1);
        scanf("%d", &arr2[i]);
    }
    int merged[n + m];
    for(i = 0; i < n; i++) {
        merged[i] = arr1[i];
    }
    for(j = 0; j < m; j++) {
        merged[n + j] = arr2[j];
    }
    printf("The merged array is:\n");
    for(k = 0; k < n + m; k++) {
        printf("%d ", merged[k]);
    }
    return 0;
}