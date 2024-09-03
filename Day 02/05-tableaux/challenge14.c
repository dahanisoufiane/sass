#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        printf("d'élément %d :", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    float mean = (float)sum / n;
    printf("The average is: %f\n", mean);
    return 0;
}