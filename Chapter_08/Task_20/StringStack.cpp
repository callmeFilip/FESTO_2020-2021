#include <cstring>
#include "StringStack.h"

StringStack::StringStack() : index(0)
{
    memset(stack, 0, size * sizeof(MyString *));
}
StringStack::~StringStack()
{
    delete[](MyString *) stack;
}

void StringStack::push(const MyString *s)
{
    if (index < size)
        stack[index++] = s;
}

const MyString *StringStack::pop()
{
    if (index > 0)
    {
        const MyString *rv = stack[--index];
        stack[index] = 0;
        return rv;
    }
    return 0;
}
