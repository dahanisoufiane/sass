#include <stdio.h>
#include <unistd.h>

int main() {
    char str[100];  

    printf("Entrez une chaîne de caractères : ");
    scanf("%s", &str);

for (size_t i = 0; str[i] != '\0'; i++)
{
    if (str[i] != ' ' && str[i])
    {
    printf("%c", str[i]);
    }
    
}


    return 0;
}
