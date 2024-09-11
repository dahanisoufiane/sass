#include <stdio.h>
#include <string.h>
struct Rectangle {
    int longueur;
    int largeur;
};

int calculerAire(struct Rectangle rect) {
    return rect.longueur * rect.largeur;
}

int main() {
    struct Rectangle rectangle;

    rectangle.longueur = 5;
    rectangle.largeur = 3;

    int aire = calculerAire(rectangle);
    printf("L'aire du rectangle est: %d\n", aire);

    return 0;
}