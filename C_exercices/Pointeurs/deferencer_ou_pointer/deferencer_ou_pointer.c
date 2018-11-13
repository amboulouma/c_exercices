#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>

int intNotInitialized;
int intInitialized = 0;

int main()
{
    /*
        1 Je déréférence ou je pointe ?
        Chaque variable d’un programme C possède une adresse. Une adresse est un entier correspondant à
        l’emplacement du premier octet de la mémoire occupée par la variable. Un pointeur est une variable
        contenant une adresse.
        L’opérateur & renvoie l’adresse de l’objet indiqué à sa suite. Un objet est un emplacement mémoire
        identifiable. Vous pouvez par exemple demander l’adresse de n’importe quel symbole : variables locales,
        variables globales, fonction... Exemple : &aVariable;. Il s’agit du référencement d’une variable. Mais vous
        ne pouvez pas demander l’adresse de l’expression 5 + 1, ça n’a pas de sens en C.
    */

    /*
        QUESTION 1 I Écrivez un programme qui affiche l’adresse de votre fonction main(). Dans quelle section
        de la mémoire (Figure 2.1) se trouve cette fonction ?
    */
    
    printf("%p\n", main);

    /*
        QUESTION 2 I Écrivez un programme qui :
        — affecte à une variable globale intNotInitialized non initialisée| la valeur 42
        — affecte à une variable globale intInitialized initialisée à zéro la valeur 5
        — affiche les valeurs et l’adresse de ces variables ainsi que l’adresse de la variable.
        11
        À quelle section de la Figure 2.1 chacune de ses variable appartient-elle ? Vérifiez que ces adresses ainsi
        que l’adresse de la fonction main() sont ordonnées correctement, c’est à dire qu’une adresse appartenant
        à la section .text n’est pas supérieure à une autre.
        Une adresse peut être stockée dans une variable mais cette variable doit avoir un type adéquat. Ce type est
        indiqué par le type de l’élément en mémoire suivi du caractère *. On l’appelle alors un pointeur. Exemple de
        déclaration d’un pointeur : int* adress;. Exemple d’affectation de ce pointeur : adress = &aVariable
    */

   /*
        Q UESTION 2 I Écrivez un programme qui :
        — affecte à une variable globale intNotInitialized non initialisée| la valeur 42
        — affecte à une variable globale intInitialized initialisée à zéro la valeur 5
        — affiche les valeurs et l’adresse de ces variables ainsi que l’adresse de la variable.
        11À quelle section de la Figure 2.1 chacune de ses variable appartient-elle ? Vérifiez que ces adresses ainsi
        que l’adresse de la fonction main() sont ordonnées correctement, c’est à dire qu’une adresse appartenant
        à la section .text n’est pas supérieure à une autre.
        Une adresse peut être stockée dans une variable mais cette variable doit avoir un type adéquat. Ce type est
        indiqué par le type de l’élément en mémoire suivi du caractère * . On l’appelle alors un pointeur. Exemple de
        déclaration d’un pointeur : int* adress; . Exemple d’affectation de ce pointeur : adress = &aVariable
   */

   intNotInitialized = 42;
   intInitialized = 5;

   printf("%p -> %d\n%p -> %d\n",&intNotInitialized, intNotInitialized, &intInitialized, intInitialized);

    // Question 3
    

   return 0;
}