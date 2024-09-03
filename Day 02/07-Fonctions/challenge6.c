#include <stdio.h>

int     ft_fibonacci(int index)
{
        if (index < 0)
                return (-1);
        if (index <= 1)
                return (index);
        return (ft_fibonacci (index - 1) + ft_fibonacci (index - 2));
}

int main ()
{
    int nb ;
    printf("enter un nombre : ");
    scanf("%d", &nb);
    int res = ft_fibonacci(nb);
    printf("result : %d", res);
}
