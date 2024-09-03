#include <stdio.h>

int main() {
    float celsius, kelvin;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;

    printf("\nThe temperature in Kelvin is: %.2f K\n", kelvin);

    return 0;
}