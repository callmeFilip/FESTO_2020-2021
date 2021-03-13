//: C16:TStack2.h
// Templatized Stack with nested iterator
#ifndef TSTACK2_H
#define TSTACK2_H
#include <vector>
#include "require.h"

template <class T>
class Stack
{
private:
    std::vector<T *> m_storage;

public:
    ~Stack();

    void push(T *dat) { m_storage.push_back(dat); }

    T *peek() const { return !m_storage.empty() ? m_storage.back() : 0; }

    T *pop();

    // Nested iterator class:
    class iterator;
    friend class iterator;
    class iterator
    {
        Stack &m_stack;
        size_t m_index;

    public:
        iterator(Stack &tl) : m_stack(tl), m_index(0) {}
        iterator(Stack &tl, bool) : m_stack(tl), m_index(tl.m_storage.size()) {}
        //iterator(const iterator &tl, bool) : m_stack(tl.m_stack), m_index(tl.m_stack.m_storage.size()) {} // Zashto tova raboti ako komentiram gorniq red i ostavq tozi????

        // Copy-constructor:
        iterator(const iterator &tl) : m_stack(tl.m_stack), m_index(tl.m_index) {}

        // operator++ returns boolean indicating end:
        bool operator++() { return m_index++ < m_stack.m_storage.size() ? true : false; }

        bool operator++(int) { return operator++(); }

        // Pointer dereference operator:

        T *operator->() const { return m_stack.m_storage[m_index]; }

        T *operator*() const { return m_stack.m_storage[m_index]; }

        // Comparison to test for end:
        bool operator==(const iterator &other) const { return m_index == other.m_index; }

        bool operator!=(const iterator &other) const { return m_index != other.m_index; }

    }; // ~iterator class

    iterator begin() { return iterator(*this); } // *this stands for Stack <T>

    iterator end() { return iterator(*this, true); } // *this stands for Stack <T>
};

template <class T>
Stack<T>::~Stack()
{
    while (!m_storage.empty())
    {
        delete m_storage.back();
        m_storage.pop_back();
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
