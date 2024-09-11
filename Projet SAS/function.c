#include "h.h"

Etudiant etudiants[MAX_ETUDIANTS];
int nbEtudiants = 0;

void afficherMenu() {
    printf("\n--- MENU PRINCIPAL ---\n");
    printf("1. Ajouter un étudiant\n");
    printf("2. Modifier ou supprimer un étudiant\n");
    printf("3. Afficher les détails d'un étudiant\n");
    printf("4. Calculer la moyenne générale\n");
    printf("5. Statistiques\n");
    printf("6. Rechercher un étudiant\n");
    printf("7. Trier les étudiants\n");
    printf("0. Quitter\n");
    printf("Votre choix : ");
}

void ajouterEtudiant() {
    if (nbEtudiants >= MAX_ETUDIANTS) {
        printf("Nombre maximum d'étudiants atteint.\n");
        return;
    }

    Etudiant e;
    printf("Numéro unique : ");
    scanf("%d", &e.numero);
    printf("Nom : ");
    scanf("%s", e.nom);
    printf("Prénom : ");
    scanf("%s", e.prenom);
    printf("Date de naissance (JJ MM AAAA) : ");
    scanf("%d %d %d", &e.dateNaissance.jour, &e.dateNaissance.mois, &e.dateNaissance.annee);
    printf("Département : ");
    scanf("%s", e.departement);
    printf("Note générale : ");
    scanf("%f", &e.noteGenerale);

    etudiants[nbEtudiants++] = e;
    printf("Étudiant ajouté avec succès.\n");
}

void modifierEtudiant() {
    int numero;
    printf("Entrez le numéro de l'étudiant à modifier : ");
    scanf("%d", &numero);

    for (int i = 0; i < nbEtudiants; i++) {
        if (etudiants[i].numero == numero) {
            printf("Nouveau nom (ou '.' pour ne pas changer) : ");
            char temp[MAX_NOM];
            scanf("%s", temp);
            if (strcasecmp(temp, ".") != 0) strcpy(etudiants[i].nom, temp);

            printf("Nouveau prénom (ou '.' pour ne pas changer) : ");
            scanf("%s", temp);
            if (strcasecmp(temp, ".") != 0) strcpy(etudiants[i].prenom, temp);

            printf("Nouvelle note générale (ou -1 pour ne pas changer) : ");
            float newNote;
            scanf("%f", &newNote);
            if (newNote != -1) etudiants[i].noteGenerale = newNote;

            printf("Étudiant modifié avec succès.\n");
            return;
        }
    }
    printf("Étudiant non trouvé.\n");
}

void supprimerEtudiant() {
    int numero;
    printf("Entrez le numéro de l'étudiant à supprimer : ");
    scanf("%d", &numero);

    for (int i = 0; i < nbEtudiants; i++) {
        if (etudiants[i].numero == numero) {
            for (int j = i; j < nbEtudiants - 1; j++) {
                etudiants[j] = etudiants[j + 1];
            }
            nbEtudiants--;
            printf("Étudiant supprimé avec succès.\n");
            return;
        }
    }
    printf("Étudiant non trouvé.\n");
}

void afficherEtudiant() {
    int numero;
    printf("Entrez le numéro de l'étudiant : ");
    scanf("%d", &numero);

    for (int i = 0; i < nbEtudiants; i++) {
        if (etudiants[i].numero == numero) {
            printf("Numéro : %d\n", etudiants[i].numero);
            printf("Nom : %s\n", etudiants[i].nom);
            printf("Prénom : %s\n", etudiants[i].prenom);
            printf("Date de naissance : %d/%d/%d\n", etudiants[i].dateNaissance.jour,
                   etudiants[i].dateNaissance.mois, etudiants[i].dateNaissance.annee);
            printf("Département : %s\n", etudiants[i].departement);
            printf("Note générale : %.2f\n", etudiants[i].noteGenerale);
            return;
        }
    }
    printf("Étudiant non trouvé.\n");
}

void calculerMoyenne() {
    float somme = 0;
    for (int i = 0; i < nbEtudiants; i++) {
        somme += etudiants[i].noteGenerale;
    }
    printf("Moyenne générale de l'université : %.2f\n", somme / nbEtudiants);

    // Calcul par département
    char departements[MAX_ETUDIANTS][MAX_DEPARTEMENT];
    int nbDepartements = 0;

    for (int i = 0; i < nbEtudiants; i++) {
        int trouve = 0;
        for (int j = 0; j < nbDepartements; j++) {
            if (strcasecmp(etudiants[i].departement, departements[j]) == 0) {
                trouve = 1;
                break;
            }
        }
        if (!trouve) {
            strcpy(departements[nbDepartements], etudiants[i].departement);
            nbDepartements++;
        }
    }

    for (int i = 0; i < nbDepartements; i++) {
        float sommeDep = 0;
        int nbEtudiantsDep = 0;
        for (int j = 0; j < nbEtudiants; j++) {
            if (strcasecmp(etudiants[j].departement, departements[i]) == 0) {
                sommeDep += etudiants[j].noteGenerale;
                nbEtudiantsDep++;
            }
        }
        printf("Moyenne du département %s : %.2f\n", departements[i], sommeDep / nbEtudiantsDep);
    }
}

void afficherStatistiques() {
    printf("Nombre total d'étudiants inscrits : %d\n", nbEtudiants);

    // Nombre d'étudiants par département
    char departements[MAX_ETUDIANTS][MAX_DEPARTEMENT];
    int nbDepartements = 0;
    int nbEtudiantsDep[MAX_ETUDIANTS] = {0};

    for (int i = 0; i < nbEtudiants; i++) {
        int trouve = -1;
        for (int j = 0; j < nbDepartements; j++) {
            if (strcasecmp(etudiants[i].departement, departements[j]) == 0) {
                trouve = j;
                break;
            }
        }
        if (trouve == -1) {
            strcpy(departements[nbDepartements], etudiants[i].departement);
            nbEtudiantsDep[nbDepartements] = 1;
            nbDepartements++;
        } else {
            nbEtudiantsDep[trouve]++;
        }
    }

    for (int i = 0; i < nbDepartements; i++) {
        printf("Nombre d'étudiants dans le département %s : %d\n", departements[i], nbEtudiantsDep[i]);
    }

    // Étudiants avec moyenne supérieure à un seuil
    float seuil;
    printf("Entrez le seuil de moyenne : ");
    scanf("%f", &seuil);
    printf("Étudiants ayant une moyenne supérieure à %.2f :\n", seuil);
    for (int i = 0; i < nbEtudiants; i++) {
        if (etudiants[i].noteGenerale > seuil) {
            printf("%s %s (%.2f)\n", etudiants[i].nom, etudiants[i].prenom, etudiants[i].noteGenerale);
        }
    }

    // 3 meilleurs étudiants
    Etudiant top3[3];
    for (int i = 0; i < 3 && i < nbEtudiants; i++) {
        top3[i] = etudiants[i];
        for (int j = i + 1; j < nbEtudiants; j++) {
            if (etudiants[j].noteGenerale > top3[i].noteGenerale) {
                top3[i] = etudiants[j];
            }
        }
    }
    printf("Les 3 meilleurs étudiants :\n");
    for (int i = 0; i < 3 && i < nbEtudiants; i++) {
        printf("%d. %s %s (%.2f)\n", i+1, top3[i].nom, top3[i].prenom, top3[i].noteGenerale);
    }

    // Nombre d'étudiants ayant réussi par département
    printf("Nombre d'étudiants ayant réussi par département :\n");
    for (int i = 0; i < nbDepartements; i++) {
        int nbReussi = 0;
        for (int j = 0; j < nbEtudiants; j++) {
            if (strcasecmp(etudiants[j].departement, departements[i]) == 0 && etudiants[j].noteGenerale >= 10) {
                nbReussi++;
            }
        }
        printf("%s : %d\n", departements[i], nbReussi);
    }
}

void rechercherEtudiant() {
    printf("1. Rechercher par nom\n");
    printf("2. Afficher la liste des étudiants d'un département\n");
    int choix;
    scanf("%d", &choix);

    if (choix == 1) {
        char nom[MAX_NOM];
        printf("Entrez le nom à rechercher : ");
        scanf("%s", nom);
        for (int i = 0; i < nbEtudiants; i++) {
            if (strcasecmp(etudiants[i].nom, nom) == 0) {
                printf("%s %s (Numéro: %d, Département: %s)\n", 
                       etudiants[i].nom, etudiants[i].prenom, 
                       etudiants[i].numero, etudiants[i].departement);
            }
        }
    } else if (choix == 2) {
        char departement[MAX_DEPARTEMENT];
        printf("Entrez le nom du département : ");
        scanf("%s", departement);
        for (int i = 0; i < nbEtudiants; i++) {
            if (strcasecmp(etudiants[i].departement, departement) == 0) {
                printf("%s %s (Numéro: %d)\n", 
                       etudiants[i].nom, etudiants[i].prenom, etudiants[i].numero);
            }
        }
    }
}

void trierEtudiants() {
    printf("1. Trier par nom (A-Z)\n");
    printf("2. Trier par nom (Z-A)\n");
    printf("3. Trier par moyenne (croissant)\n");
    printf("4. Trier par moyenne (décroissant)\n");
    printf("5. Trier par réussite\n");
    int choix;
    scanf("%d", &choix);

    for (int i = 0; i < nbEtudiants - 1; i++) {
        for (int j = 0; j < nbEtudiants - i - 1; j++) {
            int doSwap = 0;
            switch(choix) {
                case 1:
                    doSwap = strcasecmp(etudiants[j].nom, etudiants[j+1].nom) > 0;
                    break;
                case 2:
                    doSwap = strcasecmp(etudiants[j].nom, etudiants[j+1].nom) < 0;
                    break;
                case 3:
                    doSwap = etudiants[j].noteGenerale > etudiants[j+1].noteGenerale;
                    break;
                case 4:
                    doSwap = etudiants[j].noteGenerale < etudiants[j+1].noteGenerale;
                    break;
                case 5:
                    doSwap = (etudiants[j].noteGenerale >= 10 && etudiants[j+1].noteGenerale < 10) ||
                             (etudiants[j].noteGenerale >= 10 && etudiants[j+1].noteGenerale >= 10 && 
                              etudiants[j].noteGenerale < etudiants[j+1].noteGenerale) ||
                             (etudiants[j].noteGenerale < 10 && etudiants[j+1].noteGenerale < 10 && 
                              etudiants[j].noteGenerale < etudiants[j+1].noteGenerale);
                    break;
            }
            if (doSwap) {
                Etudiant temp = etudiants[j];
                etudiants[j] = etudiants[j+1];
                etudiants[j+1] = temp;
            }
        }
    }

    printf("Liste triée :\n");
    for (int i = 0; i < nbEtudiants; i++) {
        printf("%s %s (Note: %.2f)\n", etudiants[i].nom, etudiants[i].prenom, etudiants[i].noteGenerale);
    }
}
