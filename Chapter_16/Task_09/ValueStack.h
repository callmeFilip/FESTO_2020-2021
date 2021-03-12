//: C16:ValueStack.h
// Holding objects by value in a Stack
#ifndef VALUESTACK_H
#define VALUESTACK_H
#include "require.h"
#include <iostream>

const int INC = 5;

template <class T, int ssize = INC>
class Stack
{
    // Default constructor performs object
    // initialization for each element in array:
    T *stack;
    int top;
    int m_size;

public:
    Stack() : top(0), m_size(ssize)
    {
        stack = new T[m_size];
    }

    // Copy-constructor copies object into array:
    void push(const T &x)
    {
        if (top == m_size)
        {
            inflate();
        }

        require(top < m_size, "Too many push()es");

        stack[top++] = x;
    }

    T peek() const { return stack[top - 1]; }

    // Object still exists when you pop it;
    // it just isn't available anymore:
    T pop()
    {
        require(top > 0, "Too many pop()s");
        return stack[--top];
    }

    void inflate(int addition = INC)
    {
        std::cout << "inflate()" << std::endl;
        int oldSize = m_size;
        m_size += addition;

        T *newStorage = new T[m_size];

        for (int i = 0; i < oldSize; i++)
        {
            newStorage[i] = stack[i];
        }

        delete[] stack;

        stack = newStorage;
    }
};

#endif // VALUESTACK_H ///:~
