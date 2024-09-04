
#include <stdio.h>
int     ft_recursive_power(int nb, int power)
{
        if (power == 0)
                return (1);
        if (power < 0)
                return (0);
        return (nb * ft_recursive_power(nb, power - 1));
}
int     main() {
    int n;
    int p;
    int res;

    printf("Entrez le nombre n : ");
    scanf("%d", &n);
    printf("Entrez le nombre p : ");
    scanf("%d", &p);

   res =  ft_recursive_power(n, p);
   printf("%d", res);

    return 0;
}