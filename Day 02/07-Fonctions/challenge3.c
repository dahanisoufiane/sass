#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2, result;
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    result = max(num1, num2);
    
    printf("The maximum between %d and %d is %d\n", num1, num2, result);
    
    return 0;
}