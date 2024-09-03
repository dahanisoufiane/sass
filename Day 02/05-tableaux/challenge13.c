#include <stdio.h>

void print_odd_elements(int arr[], int n) {
    printf("Odd elements are:\n");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int n, arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        printf("d'élément %d :", i+1);
        scanf("%d", &arr[i]);
    }

    print_odd_elements(arr, n);

    return 0;
}