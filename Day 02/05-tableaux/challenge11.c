#include <stdio.h>

void replace_value(int arr[], int n, int old_val, int new_val) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == old_val) {
            arr[i] = new_val;
        }
    }
}

int main() {
    int n, old_val, new_val, arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to replace: ");
    scanf("%d", &old_val);

    printf("Enter the new value: ");
    scanf("%d", &new_val);

    replace_value(arr, n, old_val, new_val);

    printf("The updated array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}