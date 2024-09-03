#include <stdio.h>

int main() {
    int number, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Multiplication table in reverse order:\n");
    for (i = 10; i >= 1; i--) {
        printf("%d * %d = %d\n", number, i, number * i);
    }

    return 0;
}