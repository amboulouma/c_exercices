#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>

int intNotInitialized;
int intInitialized = 0;

int main()
{

    /* Notes
        - Les différentes parties de la mémoires
        - Répondre aux questions: "Dans quelle partie de la mémoire sont stockée ces variables locales ?"
        - Afficher un pointeur: "%p"
        - Référencer un ponteur: &p
        - Déférencer un pointeur: *p
        - Variable globales non initialisées: stoquées dans le BSS (basic service set) segment.
        - Variable globales initialisées: stoquées dans le data segment.
        - La mémoire locale aussi appelée la pile, accessible localement seulement, où sont passés les paramètres des fonctions et stockées les données locales et temporaires. (.text)
        - La mémoire globale du segment data, accessible depuis n'importe quel endroit du programme, où sont stockées les données statiques globales. (.bss .data)
        - La mémoire globale du tas, accessible depuis n'importe quel endroit du programme, où sont stockées les données dynamiquement allouées (malloc, réalloc, free, ...). (heap)
    */

    // Question 1
    
    printf("%p\n", main);

   // Question 2

   intNotInitialized = 42;
   intInitialized = 5;

   printf("%p -> %d\n%p -> %d\n",&intNotInitialized, intNotInitialized, &intInitialized, intInitialized);

    // Question 3
    // int intNotInitialized;
    // int intInitialized = 0;

    intNotInitialized = 42;
    intInitialized = 5;
    printf("%p -> %d\n%p -> %d\n",&intNotInitialized, intNotInitialized, &intInitialized, intInitialized);

    // Question 4
    int* p_intNotInitialized = &intNotInitialized;
    int* p_intInitialized = &intInitialized;
    printf("%p -> %d\n%p -> %d\n",&p_intNotInitialized, *p_intNotInitialized, &p_intInitialized, *p_intInitialized);
    
    // Question 5



    return 0;
}