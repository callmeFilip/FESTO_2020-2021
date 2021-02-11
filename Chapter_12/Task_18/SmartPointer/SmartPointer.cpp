#include <iostream>
#include <vector>
#include "require.h"
using namespace std;
class Obj
{
    static int i, j;

public:
    void f() const { cout << i++ << endl; }
    void g() const { cout << j++ << endl; }
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
    friend class SmartPointer;
};

class SmartPointer
{
    ObjContainer &oc;
    size_t index;

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

    bool operator--()
    {
        if (--index <= 0)
        {
            return false;
        }

        return true;
    }

    bool operator++(int)
    {                        // Postfix
        return operator++(); // Use prefix version
    }
    bool operator--(int)
    {                        // Postfix
        return operator--(); // Use prefix version
    }

    Obj *operator->() const
    {
        require(oc.a[index] != 0, "Zero value "
                                  "returned by SmartPointer::operator->()");
        return oc.a[index];
    }
};

int main()
{
    const int sz = 4;

    Obj o[sz];
    ObjContainer oc;

    for (int i = 0; i < sz; i++)
        oc.add(&o[i]); // Fill it up

    SmartPointer sp(oc); // Create an iterator

    do
    {
    } while (sp++); // Setting the so to max value

    do
    {
        sp->f(); // Pointer dereference operator call
        sp->g();
    } while (sp--); // Going back to the lowest value to demonstrate operator--

    do
    {
    } while (sp++); // Setting the so to max value

    do
    {
        sp->f(); // Pointer dereference operator call
        sp->g();
    } while (sp--); // Going back to the lowest value to demonstrate operator--

    return 0;
} ///:~
