#include <stdio.h>

int main() {
    int celsius;

    printf("Enter the temperature in Celsius: ");
    scanf("%d", &celsius);

    if (celsius < 0) {
        printf("The water is in a solid state.\n");
    } else if (celsius >= 0 && celsius < 100) {
        printf("The water is in a liquid state.\n");
    } else if (celsius >= 100) {
        printf("The water is in a gaseous state.\n");
    }

    return 0;
}