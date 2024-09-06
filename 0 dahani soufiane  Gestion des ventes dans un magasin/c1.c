#include <stdio.h>
int main ()
{
    int i;
    int c;
    int nb;
    int tab[100];
    i = 0;

    printf("nombre de produits vendus dans la journee :");
    scanf("%d", &nb);
    while (i < nb)
    {
    printf("les montants des ventes %d :", i+1);
    scanf("%d", &tab[i]);
    i++;
    }
    do
    {
        printf("\nque souhaitez-vous  faire : \n");
        printf("1. calculer le total des ventes\n");
        printf("2. trouver la ventes la plus elevee et la plus base\n");
        printf("3. Afficher le nombre de ventes superieures a moyenne\n");
        printf("4. compter le nombre de la vente superieurre a 100\n");
        printf("5. Afficher le nombre de la vente inferieures a 100\n");
        printf("6. Quitter\n");
        scanf("%d", &c);

        switch (c)
        {
            case 1:
                {
                    int somme = 0;
                    for (int j = 0; j < nb; j++)
                    {
                        somme += tab[j];
                    }
                    printf("La total des ventes est : %d\n", somme);
                    break;
                }
                
                case 2:
                {
                    int max = tab[0];
                    int min = tab[0];
                    for (int j = 1; j < nb; j++)
                    {
                        if (tab[j] > max)
                        {
                            max = tab[j];
                        }
                        if (tab[j] < min)
                        {
                            min = tab[j];
                        }
                    }
                    printf("La vente la plus elevee est : %d\n", max);
                    printf("La vente la plus base est : %d\n", min);
                    break;
                }
                case 3:
                {
                    int somme = 0;
                    for (int j = 0; j < nb; j++)
                    {
                        somme += tab[j];
                    }
                    int moyenne = somme / nb;
                    int nb_superieur = 0;
                    for (int j = 0; j < nb; j++)
                    {
                        if (tab[j] > moyenne)
                        {
                            nb_superieur++;
                        }
                    }
                    printf("Il y a %d ventes superieures a la moyenne\n", nb_superieur);
                    break;
                }
                case 4:
                {
                    int nb_superieur_100 = 0;
                    for (int j = 0; j < nb; j++)
                    {
                        if (tab[j] >= 100)
                        {
                            nb_superieur_100++;
                        }
                    }
                    printf("Il y a %d ventes superieures a 100\n", nb_superieur_100);
                    break;
                }
                case 5:
                {
                    int nb_inferieur_100 = 0;
                    for (int j = 0; j < nb; j++)
                    {
                        if (tab[j] < 100)
                        {
                            nb_inferieur_100++;
                        }
                    }
                    printf("Il y a %d ventes inferieures a 100\n", nb_inferieur_100);
                    break;
                }
                }
    } while ( c != 6);
    return 0;
}