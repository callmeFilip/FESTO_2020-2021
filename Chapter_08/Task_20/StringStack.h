#ifndef STRINGSTACK_H
#define STRINGSTACK_H
#include "MyString.h"

class StringStack
{
private:
    static const int size = 100;
    const MyString *stack[size];
    int index;

public:
    StringStack();
    ~StringStack();
    void push(const MyString *s);
    const MyString *pop();
};
#endif