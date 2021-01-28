//: C10:NamespaceMath.h
#ifndef NAMESPACEMATH_H
#define NAMESPACEMATH_H
#include "NamespaceInt.h"
namespace Math
{
    using namespace Int;
    Integer a, b;
    Integer divide(Integer first, Integer second)
    {
        return Integer(first.getNum() / second.getNum());
    }
    // ...
} // namespace Math
#endif // NAMESPACEMATH_H ///:~