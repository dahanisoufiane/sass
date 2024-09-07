#include <stdio.h>

int main() {
    float consommation, tarif, facture;
    int type_utilisateur, type_contrat;

    printf("Entrez la consommation d'électricité (en kWh) : ");
    scanf("%f", &consommation);

    printf("Entrez le type d'utilisateur (1 pour résidentiel, 2 pour commercial) : ");
    scanf("%d", &type_utilisateur);

    printf("Entrez le type de contrat (0 pour standard, 1 pour réduit) : ");
    scanf("%d", &type_contrat);

    if (type_utilisateur == 1) {
        if (type_contrat == 0) {
            tarif = 0.20;
        } else {
            tarif = 0.15;
        }
    } else {
        if (type_contrat == 0) {
            tarif = 0.30;
        } else {
            tarif = 0.25;
        }
    }

    facture = consommation * tarif;

    if (consommation > 500) {
        facture += facture * 0.1;
    }

    printf("La facture d'électricité est de %.2f euros.\n", facture);

    return 0;
}