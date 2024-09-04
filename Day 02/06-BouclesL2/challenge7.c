#include <stdio.h>

int     ft_fibonacci(int index)
{
        if (index < 0)
                return (-1);
        if (index <= 1)
                return (index);
        return (ft_fibonacci (index - 1) + ft_fibonacci (index - 2));
}

int     main() {
    int n;
    int res;

    printf("Entrez le nombre de termes de la suite de Fibonacci à générer : ");
    scanf("%d", &n);

   res =  ft_fibonacci(n);
   printf("%d", res);

    return 0;
}
