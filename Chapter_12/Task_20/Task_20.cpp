#include "Dummy.h"

/**
 *  Dummy.h:12:17: error: 'void operator=(const Dummy&, const Dummy&)' must be a nonstatic member function
 *  12 |     friend void operator=(const Dummy &left, const Dummy &right);
 *     |                 ^~~~~~~~
 *  Task_20.cpp:2:6: error: 'void operator=(const Dummy&, const Dummy&)' must be a nonstatic member function
 *   2 | void operator=(const Dummy &left, const Dummy &right)
 *     |      ^~~~~~~~
 * 
 * 
 * 'operator=' must be a member function
*/

void operator=(const Dummy &left, const Dummy &right)
{
    if (&left != &right)
    {
        left.m_number = right.m_number;
    }
}

int main()
{
    Dummy obj1;
    Dummy obj2(3);

    obj1 = obj2;

    return 0;
}
