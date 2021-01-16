#include <iostream>
#include <cstring>

#include "Header.h"

inline CharClass::CharClass()
{
    memset(storage, ' ', sizeof(char) * SIZE);
};

inline void CharClass::print()
{
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << storage[i] << std::endl;
    }
}

int main()
{
    CharClass obj;
    obj.print();

    return 0;
}
