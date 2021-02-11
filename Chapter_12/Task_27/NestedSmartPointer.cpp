//: C12:NestedSmartPointer.cpp
#include <iostream>
#include <vector>
#include "require.h"
using namespace std;

class Obj;

typedef void (Obj::*PMF)();

class Obj
{
    static int i, j;
    PMF p_func;

public:
    void f() { cout << i++ << endl; }
    void g() { cout << j++ << endl; }

    Obj() { p_func = 0; }

    void setPmf(PMF pmf) { p_func = pmf; }
    void operator()()
    {
        return (this->*p_func)();
    }
};

// Static member definitions:
int Obj::i = 1;
int Obj::j = 1;

// Container:
class ObjContainer
{
    vector<Obj *> a;

public:
    void add(Obj *obj) { a.push_back(obj); }
    class SmartPointer;
    friend SmartPointer;
    class SmartPointer
    {
        ObjContainer &oc;
        unsigned int index;

    public:
        SmartPointer(ObjContainer &objc) : oc(objc)
        {
            index = 0;
        }

        // Return value indicates end of list:
        bool operator++()
        { // Prefix
            if (index >= oc.a.size())
                return false;
            if (oc.a[++index] == 0)
                return false;
            return true;
        }

        bool operator++(int)
        {                        // Postfix
            return operator++(); // Use prefix version
        }

        Obj *operator->() const
        {
            require(oc.a[index] != 0, "Zero value "
                                      "returned by SmartPointer::operator->()");
            return oc.a[index];
        }

        Obj operator->*(PMF pmf)
        {
            Obj result = *oc.a[index];

            result.setPmf(pmf);

            return result;
        }
    };

    // Function to produce a smart pointer that
    // points to the beginning of the ObjContainer:
    SmartPointer begin()
    {
        return SmartPointer(*this);
    }
};

int main()
{
    const int sz = 5;

    Obj o[sz];
    ObjContainer oc;

    PMF funcF = &Obj::f;
    PMF funcG = &Obj::g;

    for (int i = 0; i < sz; i++)
        oc.add(&o[i]); // Fill it up

    ObjContainer::SmartPointer sp = oc.begin();

    do
    {
        (sp->*funcF)(); // Pointer dereference operator call
        (sp->*funcG)(); // Pointer dereference operator call
    } while (++sp);

    return 0;
} ///:~