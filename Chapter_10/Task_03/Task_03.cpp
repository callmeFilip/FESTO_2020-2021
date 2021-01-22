#include <iostream>

#include "DataClass.h"

int DataClass::calls = 28;

inline void DataClass::print()
{
    for (int i = 0; i < INT_ARRAY_SIZE; i++)
    {
        std::cout << intArray[i] << std::endl; // 0 - 19
    }

    printCalls(); //28
}

void DataClass::printCalls()
{
    std::cout << calls << std::endl;
}

int main(int argc, char const *argv[])
{

    DataClass obj;
    obj.print();

    return 0;
}
