#include <stdio.h>

int main() {
    float a, b;
    printf("Entrez la valeur de a : ");
    scanf("%f", &a);
    printf("Entrez la valeur de b : ");
    scanf("%f", &b);
    float somme = a + b;
    float difference = a - b;
    float produit = a * b;
    float quotient = a / b;
    printf("a + b = %.2f\n", somme);
    printf("a - b = %.2f\n", difference);
    printf("a * b = %.2f\n", produit);
    printf("a / b = %.2f\n", quotient);
    
    return 0;
}