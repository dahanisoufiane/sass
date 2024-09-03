#include <stdio.h>

int is_even(int num) {
    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int number;
    
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    if (is_even(number)) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }
    
    return 0;
}