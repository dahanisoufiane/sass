#include <stdio.h>
int     ft_is_prime(int nb)
{
        int     i;

        if (nb <= 1)
                return (0);
        i = 2;
        while (nb >= i * i)
        {
                if (nb % i == 0)
                        return (0);
                i++;
        }
        return (1);
}

int main() {
    int number;
    int i = 2;
    printf("Enter a number : ");
    scanf("%d", &number);
    while (i <= number)
    {
        if (ft_is_prime(i) == 1)
        {
            printf("%d \n", i);
        }
        i++;
    }
    return 0;
}