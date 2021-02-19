#include <iostream>

#include "Class.h"
#include "Derived.h"
void Class::print()
{
    std::cout << "printing.." << std::endl;
}

void Class::print(int)
{
    std::cout << "printing again.." << std::endl;
}

void Derived::print(int)
{
    std::cout << "I will not obey anymore!" << std::endl;
}

int main()
{
    Derived d1;
    //! d1.print(); // error
    d1.print(1);
    return 0;
}
