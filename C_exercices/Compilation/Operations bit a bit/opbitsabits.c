#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>

void printRoomsState(uint32_t allRooms)
{
    uint32_t b = pow(2, allRooms);
    printf("%u", b);
}

uint32_t roomGoesOccupied(uint32_t allRooms, unsigned int roomN)
{
    uint32_t b = pow(2, allRooms);
    return b;
}

int main(int argc, const char *argv[])
{
    void printRoomsState(uint32_t allRooms)
    {
        uint32_t b = pow(2, allRooms);
        printf("%u", b);
    }

    // Exo 25
    printRoomsState(10);
    printf("Hello world!");
    return 0;
}
