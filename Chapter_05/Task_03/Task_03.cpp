#include "Indentifier.h"
#include <iostream>

//definitions of constructor and member functions

Indentifier::Indentifier()
{
    count = 0;
}

void Indentifier::print()
{
    std::cout << count << std::endl;
}

void increase(Indentifier *obj)
{
    obj->count++;
}

//end of Indentifier definitions

int main()
{
    Indentifier foo;

    increase(&foo);
    increase(&foo);
    increase(&foo);

    foo.print();

    return 0;
}