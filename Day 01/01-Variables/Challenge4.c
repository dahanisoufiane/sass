#include <stdio.h>

int main() {
    float kmh, mps;

    printf("Enter the speed in kilometers per hour: ");
    scanf("%f", &kmh);

    mps = kmh * 0.27778;

    printf("\nThe speed in meters per second is: %.4f m/s\n", mps);

    return 0;
}