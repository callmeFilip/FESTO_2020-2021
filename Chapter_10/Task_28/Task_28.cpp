#include <iostream>
#include "Header.h"

const int Arrays::m_constArray[Arrays::SIZE] = {1};
int Arrays::m_Array[Arrays::SIZE] = {2};

void Arrays::printConstArray()
{
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << m_constArray[i] << std::endl;
    }
}

void Arrays::printNonConstArray()
{
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << m_Array[i] << std::endl;
    }
}

int main()
{
    Arrays::printConstArray();
    Arrays::printNonConstArray();

    return 0;
}
