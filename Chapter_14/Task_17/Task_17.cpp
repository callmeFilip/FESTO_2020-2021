#include "Base.h"
#include "Private.h"
#include "Protected.h"
#include <iostream>

Base::Base()
{
    std::cout << "Base()" << std::endl;
}

Private::Private()
{
    std::cout << "Private()" << std::endl;
}

Protected::Protected()
{
    std::cout << "Protected()" << std::endl;
}

void upcast(Base obj) {}

int main()
{
    Private private_obj;
    Protected protected_obj;

    //! upcast(private_obj);   // error: 'Base' is inaccessible base of 'Private'
    //! upcast(protected_obj); // error: 'Base' is an inaccessible base of 'Protected'

    return 0;
}
