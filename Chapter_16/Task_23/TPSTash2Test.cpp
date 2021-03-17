//: C16:TPStash2Test.cpp
#include "TPStash2.h"
#include "require.h"

#include <iostream>

using namespace std;
class Int
{
    int i;

public:
    Int(int ii = 0) : i(ii)
    {
        cout << ">" << i << ' ';
    }

    ~Int() { cout << "~" << i << ' '; }

    operator int() const { return i; }

    friend ostream &
    operator<<(ostream &os, const Int &x)
    {
        return os << "Int: " << x.i;
    }

    friend ostream &
    operator<<(ostream &os, const Int *x)
    {
        return os << "Int: " << x->i;
    }
};

int main()
{

    PStash<Int> ints;
    for (int i = 0; i < 15; i++)
    {
        ints.add(new Int(i));
    }

    cout << endl;
    PStash<Int>::iterator it = ints.end();
    PStash<Int>::iterator it2 = it - 5;

    for (; it != it2; it2++)
    {
        std::cout << *it2 << std::endl;
    }

    return 0;
} ///:~
