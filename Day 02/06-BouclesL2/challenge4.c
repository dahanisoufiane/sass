#include <stdio.h>

int main() {
    int number;
    int nb ;
    int i = 0;
    int len = 0;
    printf("Enter a number : ");
    scanf("%d", &number);
    nb = number;
    while (number)
    {
        number = number / 10 ;
        len++;
    }
    while (len > 0)
    {
        number = nb % 10;
        printf("%d" , number);
        nb = nb / 10;
        len--;
    }
    
    return 0;
}