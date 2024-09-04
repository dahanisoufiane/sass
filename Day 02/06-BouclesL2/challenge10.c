#include <stdio.h>
#include <stdlib.h>

void    generate_password(int n) {
    char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    int len = sizeof(characters) - 1;

    for (int i = 0; i < n; i++) {
        printf("%c", characters[rand() % len]);
    }
    printf("\n");
}

int     main() {
    int n;

    printf("Entrez la longueur du mot de passe : ");
    scanf("%d", &n);

    generate_password(n);

    return 0;
}
