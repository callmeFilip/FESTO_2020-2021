//: C12:IostreamOperatorOverloading.cpp
// Example of non-member overloaded operators
#include "require.h"
#include <iostream>
#include <sstream> // "String streams"
#include <cstring>

using namespace std;

template <class T, int size = 5>
class IntArray
{
    T i[size];
    int sz;

public:
    IntArray() : sz(size)
    {
        memset(i, 0, sz * sizeof(*i));
    }

    int &operator[](int index)
    {
        require(index >= 0 && index < sz, "IntArray::operator[] out of range");

        return i[index];
    }

    friend ostream &operator<<(ostream &os, const IntArray<T> &ia)
    {
        for (int j = 0; j < ia.sz; j++)
        {
            os << ia.i[j];

            if (j != ia.sz - 1)
            {
                os << ", ";
            }
        }

        os << endl;

        return os;
    }

    friend istream &operator>>(istream &is, IntArray<T> &ia)
    {
        for (int j = 0; j < ia.sz; j++)
        {
            is >> ia.i[j];
        }

        return is;
    }
};

int main()
{
    stringstream input("47 34 56 92 103");
    IntArray<int> I;

    input >> I;

    I[4] = -1; // Use overloaded operator[]

    cout << I;

    return 0;
} ///:~
