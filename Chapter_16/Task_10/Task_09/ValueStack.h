//: C16:ValueStack.h
// Holding objects by value in a Stack
#ifndef VALUESTACK_H
#define VALUESTACK_H
#include "require.h"
#include <iostream>
#include <vector>

template <class T>
class Stack
{
    // Default constructor performs object
    // initialization for each element in array:
    std::vector<T> stack;

public:
    Stack() {}

    // Copy-constructor copies object into array:
    void push(const T &x)
    {
        stack.push_back(x);
    }

    T peek() const { return stack.back(); }

    // Object still exists when you pop it;
    // it just isn't available anymore:
    T pop()
    {
        T result = stack.back();
        stack.pop_back();
        return result;
    }
};

#endif // VALUESTACK_H ///:~
