#include "Base.h"
#include "Derived1.h"
#include "Derived2.h"
#include <iostream>

Base::Base()
{
    std::cout << "*Base" << std::endl;
}

Derived1::Derived1() : Base()
{
    std::cout << "*Derived1" << std::endl;
}

Derived2::Derived2() : Base()
{
    std::cout << "*Derived2" << std::endl;
}
