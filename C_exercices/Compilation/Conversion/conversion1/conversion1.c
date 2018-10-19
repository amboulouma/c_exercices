#include <stdio.h>

int main()
{
    //Exo 22
    char c = 42;
    int i = 42;
    printf("Exo 22\n%d, %c\n\n", (int)c, (char)i);

    //Exo 23
    i = -42;
    printf("Exo 23\n%u\n", (unsigned int)i);

    i = 0x2a3b;
    printf("%d, %c, %c\n\n", i, (char)i, (char)0xa3b);
    //La partie de l'entier conservée est 0xa3b

    //Exo 24
    char A = 3;
    int B = 4;
    float C = A / B;
    print("%f", C)
}