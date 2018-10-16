#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>

int main()
{
    if (sizeof(int) < -1)
        printf("Bizzare...");
    else
        printf("Tout semble normal");
}
