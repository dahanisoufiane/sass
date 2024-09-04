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
int     main() {
    int n;
    int res;

    printf("Entrez le nombre de termes de la suite de factorial à générer : ");
    scanf("%d", &n);

   res =  ft_recursive_factorial(n);
   printf("%d", res);

    return 0;
}