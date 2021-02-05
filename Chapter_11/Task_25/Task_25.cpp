#include "IntArray.h"
#include <iostream>

typedef int (IntArray::*arrPtr_t)[ARRAYSIZE];

int main()
{
    IntArray storage;
    arrPtr_t arrPtr = &IntArray::intArray;

    for (int i = 0; i < ARRAYSIZE; i++)
    {
        std::cout << (storage.*arrPtr)[i] << std::endl;
    }

    return 0;
}
