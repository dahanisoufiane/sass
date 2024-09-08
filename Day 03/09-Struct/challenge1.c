#include <stdio.h>

struct Personne {
    char nom[50];
    char prenom[50];
    int age;
};

int main() {
    struct Personne personne;
    
    strcpy(personne.nom, "Doe");
    strcpy(personne.prenom, "John");
    personne.age = 30;
    printf("Nom: %s\n", personne.nom);
    printf("Prénom: %s\n", personne.prenom);
    printf("Age: %d\n", personne.age);
    return 0;
}