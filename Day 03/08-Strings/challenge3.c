#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];  
    char str2[100];  

    printf("Entrez une chaîne de caractères : ");
    scanf("%s", str1); 
    printf("Entrez une chaîne de caractères : ");
    scanf("%s", str2); 
    
    int l1 = strlen(str1);
    int l2 = strlen(str2);
    
    for(int i =0; i < l2; i++){
        str1[l1] = str2[i];
        l1++;
    }
    
    printf("La concatenation des 2 chaînes est : %s\n", str1);

    return 0;
}
