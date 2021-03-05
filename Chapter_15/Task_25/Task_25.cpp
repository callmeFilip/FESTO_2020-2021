#include "Derived1.h"
#include "Derived2.h"

int main()
{
    Base *d1 = new Derived1();
    Base *d2 = new Derived2();

    Base *cloned1 = d1->clone(); // If two constructors are called, then the right object is constructed
    Base *cloned2 = d1->clone(); // If two constructors are called, then the right object is constructed

    delete cloned1;
    delete cloned2;
    delete d1;
    delete d2;

    return 0;
}
