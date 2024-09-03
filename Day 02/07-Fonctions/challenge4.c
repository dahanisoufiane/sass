#include <stdio.h>

int min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2, result;
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    result = min(num1, num2);
    
    printf("The Minimum between %d and %d is %d\n", num1, num2, result);
    
    return 0;
}