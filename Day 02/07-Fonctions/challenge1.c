#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, result;
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    result = sum(num1, num2);
    
    printf("The sum of %d and %d is %d\n", num1, num2, result);
    
    return 0;
}