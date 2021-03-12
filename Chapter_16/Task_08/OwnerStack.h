//: C16:OwnerStack.h
// Stack with runtime conrollable ownership
#ifndef OWNERSTACK_H
#define OWNERSTACK_H
#include <vector>
#include <iostream>

template <class T>
class Stack
{
    std::vector<T *> m_storage;
    bool own;

public:
    Stack(bool own = true) : own(own) {}

    ~Stack();

    void push(T *dat)
    {
        m_storage.push_back(dat);
    }

    T *peek() const
    {
        return m_storage.back();
    }

    T *pop();

    bool owns() const { return own; }

    void owns(bool newownership)
    {
        own = newownership;
    }

    // Auto-type conversion: true if not empty:
    operator bool() const { return !(m_storage.empty()); }
};

template <class T>
T *Stack<T>::pop()
{
    if (m_storage.empty())
    {
        return 0;
    }

    T *result = m_storage.back();
    m_storage.pop_back();
    return result;
}

template <class T>
Stack<T>::~Stack()
{
    if (own)
    {
        while (!m_storage.empty())
        {
            std::cout << "deleteing..." << std::endl;
            delete pop();
        }
    }
}

#endif // OWNERSTACK_H ///:~
