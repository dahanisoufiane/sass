#include <stdio.h>
#include <string.h>
struct Etudiant {
    char nom[50];
    char prenom[50];
    int notes[5];
};

int main() {
    struct Etudiant etudiant;

    strcpy(etudiant.nom, "Smith");
    strcpy(etudiant.prenom, "John");
    etudiant.notes[0] = 85;
    etudiant.notes[1] = 90;
    etudiant.notes[2] = 78;
    etudiant.notes[3] = 92;
    etudiant.notes[4] = 88;

    printf("Nom: %s\n", etudiant.nom);
    printf("Prénom: %s\n", etudiant.prenom);
    printf("Notes: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", etudiant.notes[i]);
    }
    printf("\n");

    return 0;
}