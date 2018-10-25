#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>

int main()
{
    uint32_t a, b = 4 * pow(10, 9), c = pow(10, 9), d = pow(10, 9);
    a = (b + c) - d;
    printf("%u %u\n", a, b);
}
