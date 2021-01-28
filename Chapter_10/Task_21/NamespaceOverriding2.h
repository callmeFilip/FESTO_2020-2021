//: C10:NamespaceOverriding2.h
#ifndef NAMESPACEOVERRIDING2_H
#define NAMESPACEOVERRIDING2_H
#include "NamespaceInt.h"
namespace Calculation
{
    using namespace Int;
    Integer divide(Integer first, Integer second)
    {
        return Integer(first.getNum() / second.getNum());
    }
    // ...
} // namespace Calculation
#endif // NAMESPACEOVERRIDING2_H ///:~
