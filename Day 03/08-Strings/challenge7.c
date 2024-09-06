char    *ft_strupcase(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                if (str[i] >= 'a' && str[i] <= 'z')
                        str[i] = str[i] - 32;
                i++;
        }
        return (str);
}
#include <stdio.h>

int main() {
    char str[100]; 
    printf("Entrez une chaîne de caractères : ");
    scanf("%s", &str); 


    printf("after %s", ft_strupcase(str));


    return 0;
}