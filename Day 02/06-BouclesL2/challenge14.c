#include <stdio.h>

int main() {
    const char *jours_de_la_semaine[] = {
        "Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"
    };
    int choix;
    int nombre_de_jours = sizeof(jours_de_la_semaine) / sizeof(jours_de_la_semaine[0]);

    printf("Sélectionnez un jour de la semaine (1 pour Lundi, 2 pour Mardi, ..., 7 pour Dimanche) : ");
    scanf("%d", &choix);

    if (choix < 1 || choix > 7) {
        printf("Choix invalide. Veuillez entrer un nombre entre 1 et 7.\n");
        return 1;
    }

    printf("Vous avez choisi : %s\n", jours_de_la_semaine[choix - 1]);

    printf("Jours suivants :\n");
    for (int i = choix - 1; i < nombre_de_jours; i++) {
        printf("%s\n", jours_de_la_semaine[i]);
    }

    return 0;
}
