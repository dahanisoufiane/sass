#include <stdio.h>

int main() {
    float km, yards;

    printf("Enter the distance in kilometers: ");
    scanf("%f", &km);

    yards = km * 1093.61;

    printf("\nThe distance in yards is: %.2f yd\n", yards);

    return 0;
}