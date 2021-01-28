//: C10:OverridingAmbiguity.cpp
#include "NamespaceMath.h"
#include "NamespaceOverriding2.h"

void s()
{
    using namespace Math;
    using namespace Calculation;

    Math::divide(1, 2); // Scope resolution

    using Calculation::divide; // using declaration
    divide(1, 2);
}
int main()
{
    s();

    return 0;
} ///:~
