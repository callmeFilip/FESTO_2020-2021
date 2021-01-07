#include <string>
#include <iostream>

#include "Stack.h"

const size_t ARRSIZE = 3;

int main()
{
    Stack storage;

    std::string strArray[ARRSIZE];

    strArray[0] = "Daily Mix 1";
    strArray[1] = "Daily Mix 2";
    strArray[2] = "Daily Mix 3";

    for (size_t i = 0; i < ARRSIZE; i++)
    {
        storage.push((void *)&strArray[i]); // pushing a pointer to each string object as a void*
    }

    std::string *buffer; //buffer string* , used to extract each element from storage

    while ((buffer = (std::string *)storage.pop()) != 0)
    {
        std::cout << *buffer << std::endl;
    }

    return 0;
}
