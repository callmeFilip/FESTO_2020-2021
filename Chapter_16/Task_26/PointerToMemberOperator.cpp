//: C12:PointerToMemberOperator.cpp
#include <iostream>

using namespace std;

class Dog
{
public:
    int run() const
    {
        cout << "run\n";
        return 0;
    }

    int eat(int i) const
    {
        cout << "eat\n";
        return i;
    }

    int sleep(int i, int j) const
    {
        cout << "ZZZ\n";
        return i + j;
    }

    typedef int (Dog::*PMFNA)() const;
    typedef int (Dog::*PMFOA)(int) const;
    typedef int (Dog::*PMFTA)(int, int) const;
    // operator->* must return an object
    // that has an operator():

    template <class T, typename PMF>
    class FunctionObject
    {
        T *ptr;
        PMF pmem;

    public:
        // Save the object pointer and member pointer
        FunctionObject(T *wp, PMF pmf)
            : ptr(wp), pmem(pmf)
        {
            cout << "FunctionObject constructor\n";
        }
        // Make the call using the object pointer
        // and member pointer
        int operator()() const
        {
            cout << "FunctionObject::operator()\n";
            return (ptr->*pmem)(); // Make the call
        }

        int operator()(int i) const
        {
            cout << "FunctionObject::operator()\n";
            return (ptr->*pmem)(i); // Make the call
        }

        int operator()(int i, int j) const
        {
            cout << "FunctionObject::operator()\n";
            return (ptr->*pmem)(i, j); // Make the call
        }
    };
    template <typename PMF>
    FunctionObject<Dog, PMF> operator->*(PMF pmf)
    {
        cout << "operator->*" << endl;
        return FunctionObject<Dog, PMF>(this, pmf);
    }
};

int main()
{
    Dog w;
    Dog::PMFNA pmfNoArgs = &Dog::run;
    cout << (w->*pmfNoArgs)() << endl;

    Dog::PMFOA pmfOneArg = &Dog::eat;
    cout << (w->*pmfOneArg)(2) << endl;

    Dog::PMFTA pmfTwoArgs = &Dog::sleep;
    cout << (w->*pmfTwoArgs)(3, 3) << endl;

    return 0;
} ///:~
