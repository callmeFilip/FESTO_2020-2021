#include "A.h"
#include "B.h"
#include "C.h"
#include <iostream>

A::A()
{
    std::cout << "*A()" << std::endl;
}

A::~A() {}

B::B()
{
    std::cout << "*B()" << std::endl;
}

B::~B() {}

int main()
{
    C obj;
    return 0;
}
