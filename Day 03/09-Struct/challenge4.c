#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Point {
    int x;
    int y;
};

int main() {
    struct Point* pointeur;

    pointeur = (struct Point*)malloc(sizeof(struct Point));
    (*pointeur).x = 3;
    (*pointeur).y = 4;
    printf("Point (%d, %d)\n", (*pointeur).x, (*pointeur).y);
    free(pointeur);

    return 0;
}