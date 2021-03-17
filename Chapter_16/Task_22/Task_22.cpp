#include "StringVector.h"
#include "OContainer.h"

#include <string>
#include <iostream>

int main()
{
    const size_t ARRSIZE = 4;

    StringVector sv;
    std::string strArr[ARRSIZE] = {"1", "2", "3", "4"};
    for (size_t i = 0; i < ARRSIZE; i++)
    {
        sv.push_back(&strArr[i]);
    }

    OContainer<int> ic;
    int intArr[ARRSIZE] = {1, 2, 3, 4};
    for (size_t i = 0; i < ARRSIZE; i++)
    {
        ic.push_back(&intArr[i]);
    }

    for (size_t i = 0; i < ARRSIZE; i++)
    {
        std::cout << *ic[i] << " = " << *sv[i] << std::endl;
    }

    for (size_t i = 0; i < ARRSIZE; i++)
    {
        sv.pop_back();
        ic.pop_back();
    }
    sv.shrink_to_fit();
    ic.shrink_to_fit();

    return 0;
}
