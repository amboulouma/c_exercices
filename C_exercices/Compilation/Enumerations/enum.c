#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>

enum scrutin_e
{
    MAJORITAIRE,
    MAJORITAIRE_PLURI,
    PROPORTIONNEL,
    MIXTE
};

enum jours_e
{
    LUNDI,
    MARDI,
    MERCREDI,
    JEUDI,
    VENDREDI,
    SAMEDI,
    DIMANCHE
};

typedef enum scrutin_e scrutin_t;
typedef enum jours_e jours_t;

int main()
{
    // Exo 32
    scrutin_t majoritaire = MAJORITAIRE;
    scrutin_t majoritaire_pluri = MAJORITAIRE_PLURI;
    scrutin_t proportiennel = PROPORTIONNEL;
    scrutin_t mixte = MIXTE;

    printf("%d %d %d %d\n",
           majoritaire, majoritaire_pluri, proportiennel, mixte);

    // Exo 33
    jours_t mardi = MARDI;
    printf("%d", mardi);
}