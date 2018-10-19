#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <stdbool.h>

int main()
{
    long a = 8000000004;
    float b = 2;
    long c = a / b;
    printf("%ld, %ld, %f, %li", sizeof(float), sizeof(long), c);

    return 0;
}
    