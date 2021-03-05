#ifndef DERIVED1_H
#define DERIVED1_H
#include "Base.h"

class Derived1 : public Base
{
private:
public:
    Derived1();
    ~Derived1() {}
    Derived1 *clone()
    {
        return new Derived1();
    }
};

#endif // DERIVED1_H
