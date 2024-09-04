#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int count = 0;

    printf("Entrez une série de nombres positifs (terminez par 0) :\n");

    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        sum += num;
        count++;
    }

    if (count > 0) {
        double average = (double)sum / count;
        printf("La moyenne des nombres est : %.2f\n", average);
    } else {
        printf("Aucun nombre positif n'a été entré.\n");
    }

    return 0;
}
