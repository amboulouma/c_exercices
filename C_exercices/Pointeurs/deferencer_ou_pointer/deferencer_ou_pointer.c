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
        - Afficher un pointeur: "%p"
        - Référencer un ponteur: &p
        - Déférencer un pointeur: *p
    */

    // Question 1
    
    printf("%p\n", main);

   // Question 2

   intNotInitialized = 42;
   intInitialized = 5;

   printf("%p -> %d\n%p -> %d\n",&intNotInitialized, intNotInitialized, &intInitialized, intInitialized);

    // Question 3
    int intNotInitialized;
    int intInitialized = 0;

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