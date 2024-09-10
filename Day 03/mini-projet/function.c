#include "h.h"
#define MAX_CONTACTS 100
typedef struct {
    char name[50];
    char phone[15];
    char email[50];
} Contact;

Contact contacts[MAX_CONTACTS];
int contactCount = 0;
void addContact() {
    if (contactCount >= MAX_CONTACTS) return;
    printf("Nom: ");
    scanf("%s", contacts[contactCount].name);
    printf("Téléphone: ");
    scanf("%s", contacts[contactCount].phone);
    printf("Email: ");
    scanf("%s", contacts[contactCount].email);
    contactCount++;
}

void modifyContact() {
    char name[50];
    printf("Nom du contact à modifier: ");
    scanf("%s", name);
    for (int i = 0; i < contactCount; i++) {
        if (strcasecmp(contacts[i].name, name) == 0) {
            printf("Nouveau Téléphone: ");
            scanf("%s", contacts[i].phone);
            printf("Nouveau Email: ");
            scanf("%s", contacts[i].email);
            return;
        }
    }
    printf("Contact non trouvé.\n");
}

void deleteContact() {
    char name[50];
    printf("Nom du contact à supprimer: ");
    scanf("%s", name);
    for (int i = 0; i < contactCount; i++) {
        if (strcasecmp(contacts[i].name, name) == 0) {
            for (int j = i; j < contactCount - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            contactCount--;
            return;
        }
    }
    printf("Contact non trouvé.\n");
}

void displayContacts() {
    for (int i = 0; i < contactCount; i++) {
        printf("Nom: %s, Téléphone: %s, Email: %s\n", contacts[i].name, contacts[i].phone, contacts[i].email);
    }
}

void searchContact() {
    char name[50];
    printf("Nom du contact à rechercher: ");
    scanf("%s", name);
    for (int i = 0; i < contactCount; i++) {
        if (strcasecmp(contacts[i].name, name) == 0) {
            printf("Nom: %s, Téléphone: %s, Email: %s\n", contacts[i].name, contacts[i].phone, contacts[i].email);
            return;
        }
    }
    printf("Contact non trouvé.\n");
}
