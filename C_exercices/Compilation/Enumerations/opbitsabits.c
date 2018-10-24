#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>

enum scrutin_e
{
    MAJORITAIRE = 2,
    MAJORITAIRE_PLURI = 8,
    PROPORTIONNEL = 42,
    MIXTE = 12
};

typedef enum scrutin_e scrutin_t;

int main()
{
    scrutin_t majoritaire = MAJORITAIRE;
    scrutin_t majoritaire_pluri = MAJORITAIRE_PLURI;
    scrutin_t proportiennel = PROPORTIONNEL;
    scrutin_t mixte = MIXTE;
    printf("%d %d %d %d\n",
           majoritaire, majoritaire_pluri, proportiennel, mixte);
}