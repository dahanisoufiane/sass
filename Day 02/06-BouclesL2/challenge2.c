#include <stdio.h>

int main() {
    int number, i, j, k;

    printf("Enter a number line : ");
    scanf("%d", &number);
    i = 0;
    k = number;
    while (i < number)
    {
        j = i;
       while (k > 0)
       {
        printf(" ");
        k--;
       }
        while(j > 0)
        {
            printf("**");
            j--;
        }
        printf("*");
        printf("\n");
        i++;
        k = number - i;
    }

    return 0;
}