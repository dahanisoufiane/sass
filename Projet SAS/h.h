#ifndef H_H
#define H_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ETUDIANTS 1000
#define MAX_NOM 50
#define MAX_PRENOM 50
#define MAX_DEPARTEMENT 50

typedef struct {
    int jour;
    int mois;
    int annee;
} Date;

typedef struct {
    int numero;
    char nom[MAX_NOM];
    char prenom[MAX_PRENOM];
    Date dateNaissance;
    char departement[MAX_DEPARTEMENT];
    float noteGenerale;
} Etudiant;

void afficherMenu();
void ajouterEtudiant();
void modifierEtudiant();
void supprimerEtudiant();
void afficherEtudiant();
void calculerMoyenne();
void afficherStatistiques();
void rechercherEtudiant();
void trierEtudiants( );
#endif
