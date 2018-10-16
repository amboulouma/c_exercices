#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <stdbool.h>

int main()
{
    uint16_t a = 413;
    uint16_t b = 64948;

    fprintf(stdout, "%u", (a - b));

    return 0;
}
