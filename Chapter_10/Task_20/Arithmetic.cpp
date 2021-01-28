//: C10:Arithmetic.cpp
#include "NamespaceInt.h"
void arithmetic()
{
    using namespace Int;
    Integer x;
    x.setSign(positive);
}
int main()
{
    // Integer x; // error
    Int::Integer x;
    // x.setSign(positive); // error
    x.setSign(Int::positive);

} ///:~