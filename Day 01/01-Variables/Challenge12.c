#include <stdio.h>

int main() {
    int nombre = 1234;
    int inverse = (nombre / 1000) * 1000 + ((nombre / 100) % 10) * 100 + ((nombre / 10) % 10) * 10 + (nombre % 10);
    printf("Le nombre entier à quatre chiffres dans l'ordre inverse est : %d\n", inverse);

    return 0;
}