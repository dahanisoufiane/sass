#include <stdio.h>

int     ft_recursive_factorial(int nb)
{
        if (nb < 0)
                return (0);
        if (nb == 0 || nb == 1)
                return (1);
        else
                return (nb * ft_recursive_factorial(nb - 1));
}
int main ()
{
    int nb ;
    printf("enter un nombre : ");
    scanf("%d", &nb);
    int res = ft_recursive_factorial(nb);
    printf("result : %d", res);
}
