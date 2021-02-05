#include <iostream>
#include "X.h"

X *X::clone() const
{
    return new X;
}

void X::print()
{
    std::cout << "X.print" << std::endl;
}

void function(const X &obj)
{
    X *local = obj.clone();

    local->print();

    delete local;
}

int main()
{
    X var;

    function(var);

    return 0;
}
