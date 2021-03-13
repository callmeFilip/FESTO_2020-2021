//: C16:TStack2.h
// Templatized Stack with nested iterator
#ifndef TSTACK2_H
#define TSTACK2_H
#include <vector>
#include "require.h"

template <class T>
class Stack
{
    std::vector<T *> m_storage;

public:
    Stack() : m_storage(0) {}
    ~Stack();

    void push(T *dat)
    {
        m_storage.push_back(dat);
    }

    T *peek() const
    {

        return !m_storage.empty() ? m_storage.back() : 0;
    }

    T *pop();

    // Nested iterator class:
    class iterator;        // Declaration required
    friend class iterator; // Make it a friend
    class iterator
    { // Now define it
        std::vector<T *> p;
        size_t m_index;

    public:
        iterator(const Stack<T> &tl) : p(tl.m_storage), m_index(0) {}
        // Copy-constructor:
        iterator(const iterator &tl) : p(tl.p), m_index(tl.m_index) {}
        iterator(const iterator &tl, bool) : p(tl.p), m_index(p.size()) {}
        // The end sentinel iterator:
        iterator() : p(0), m_index(0) {}

        // operator++ returns boolean indicating end:
        bool operator++()
        {
            return m_index++ < p.size() ? true : false;
        }

        bool operator++(int) { return operator++(); }

        // Pointer dereference operator:

        T *operator->() const { return p[m_index]; }

        T *operator*() const { return p[m_index]; }

        // bool conversion for conditional test:
        operator bool() const { return bool(p); }

        // Comparison to test for end:
        bool operator==(const iterator &other) const
        {
            return m_index == other.m_index;
        }

        bool operator!=(const iterator &other) const
        {
            return m_index != other.m_index;
        }
    };

    iterator begin() const { return iterator(*this); }

    iterator end() const { return iterator(*this, true); }
};

template <class T>
Stack<T>::~Stack()
{
    while (!m_storage.empty())
    {
        delete pop();
    }
}

template <class T>
T *Stack<T>::pop()
{
    if (m_storage.empty())
        return 0;

    T *result = m_storage.back();

    m_storage.pop_back();

    return result;
}

#endif // TSTACK2_H ///:~
