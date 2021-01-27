#include "Building.h"

int main()
{
    extern Building house; // generates linker error

    house.print();
    return 0;
}
