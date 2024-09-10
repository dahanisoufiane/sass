#include "h.h"

int main() {
    int choice;
    do {
        printf("1. Ajouter un contact\n");
        printf("2. Modifier un contact\n");
        printf("3. Supprimer un contact\n");
        printf("4. Afficher tous les contacts\n");
        printf("5. Rechercher un contact\n");
        printf("6. Quitter\n");
        printf("Choix: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addContact(); break;
            case 2: modifyContact(); break;
            case 3: deleteContact(); break;
            case 4: displayContacts(); break;
            case 5: searchContact(); break;
        }
    } while (choice != 6);
    return 0;
}
