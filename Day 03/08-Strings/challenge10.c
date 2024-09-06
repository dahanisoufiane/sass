#include <stdio.h>
int    ft_strstr(char *str, char *to_find)
{
        int     i;

        i = 0;
        if (*to_find == '\0')
                return (1);
        while (*str)
        {
                i = 0;
                while (str[i] == to_find[i] && to_find[i])
                        i++;
                if (to_find[i] == '\0')
                        return (1);
                str++;
        }
        return (0);
}


int main() {
    char str[100];
    char b[100];
    int i = 0;

    printf("Entrez une chaîne de caractères : ");
    scanf(" %s", &str);
    printf("Entrez un caractère, puis compte : ");
    scanf(" %s", &b);
    i = ft_strstr(str,b);
    if (i == 0)
        printf("no");
    if (i == 1)
        printf("yes");
    return 0;
}