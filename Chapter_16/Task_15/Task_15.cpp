//: C16:IterIntStack.cpp
// Simple integer stack with iterators
//{L} fibonacci
#include "fibonacci.h"
#include "require.h"
#include <iostream>

using namespace std;

class IntStack
{
    enum
    {
        ssize = 100
    };
    int stack[ssize];
    int top;

public:
    IntStack() : top(0) {}

    void push(int i)
    {
        require(top < ssize, "Too many push()es");
        stack[top++] = i;
    }

    int pop()
    {
        require(top > 0, "Too many pop()s");
        return stack[--top];
    }
    class iterator;
    friend class iterator;

    // An iterator is like a "smart" pointer:
    class iterator
    {
        IntStack &s;
        int index;

    public:
        iterator(IntStack &is) : s(is), index(0) {}
        iterator(IntStack &is, bool) : s(is), index(s.top) {}

        int operator++()
        { // Prefix
            require(index < s.top,
                    "iterator moved out of range");
            return s.stack[++index];
        }

        bool operator==(const iterator &right) const
        {
            return index == right.index;
        }

        bool operator!=(const iterator &right) const
        {
            return index != right.index;
        }

        int operator++(int)
        { // Postfix
            require(index < s.top,
                    "iterator moved out of range");
            return s.stack[index++];
        }

        int &operator*() const
        {
            return s.stack[index];
        }
    };

    iterator begin() { return iterator(*this); }
    iterator end() { return iterator(*this, true); }
};

int main()
{
    IntStack is;

    for (int i = 0; i < 20; i++)
    {
        is.push(fibonacci(i));
    }

    // Traverse with an iterator:
    IntStack::iterator start = is.begin();
    IntStack::iterator end = is.end();

    while (start != end && !(start == end))
    {
        std::cout << start++ << std::endl;
    }

    // 20 : 6765 = 3 x 5 x 11 x 41

    return 0;
} ///:~
