#include <stdio.h>

int linear_search(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int n, target, arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        printf("d'élément %d :", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    if (linear_search(arr, n, target)) {
        printf("The element is present.\n");
    } else {
        printf("The element is not present.\n");
    }

    return 0;
}