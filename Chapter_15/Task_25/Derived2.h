#ifndef DERIVED2_H
#define DERIVED2_H
#include "Base.h"

class Derived2 : public Base
{
private:
public:
    Derived2();
    ~Derived2() {}
    Derived2 *clone()
    {
        return new Derived2();
    }
};

#endif // DERIVED2_H
