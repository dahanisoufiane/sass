#include <stdio.h>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2, result;
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    result = multiply(num1, num2);
    
    printf("The product of %d and %d is %d\n", num1, num2, result);
    
    return 0;
}