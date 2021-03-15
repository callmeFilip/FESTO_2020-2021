//: C12:NestedSmartPointer.cpp
#include <iostream>
#include <vector>
#include "require.h"

using namespace std;

class Obj
{
    static int i, j;

public:
    void f() { cout << i++ << endl; }
    void g() { cout << j++ << endl; }
};

// Static member definitions:
int Obj::i = 47;
int Obj::j = 11;

// Container:
template <class T>
class ObjContainer
{
    vector<T *> a;

public:
    void add(T *obj) { a.push_back(obj); }

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
            {
                return false;
            }
            if (oc.a[++index] == 0)
            {
                return false;
            }

            return true;
        }

        bool operator++(int)
        {                        // Postfix
            return operator++(); // Use prefix version
        }

        T *operator->() const
        {
            require(oc.a[index] != 0, "Zero value "
                                      "returned by SmartPointer::operator->()");
            return oc.a[index];
        }
        T *operator*() const
        {
            return oc.a[index];
        }
    };

    // Function to produce a smart pointer that
    // points to the beginning of the ObjContainer:
    SmartPointer begin() { return SmartPointer(*this); }
};

int main()
{
    const int sz = 10;
    Obj o[sz];
    ObjContainer<Obj> oc;
    for (int i = 0; i < sz; i++)
        oc.add(&o[i]); // Fill it up
    ObjContainer<Obj>::SmartPointer sp = oc.begin();
    do
    {
        sp->f(); // Pointer dereference operator call
        sp->g();
    } while (++sp);

    std::cout << "\nTesting with int..\n"
              << std::endl;

    ObjContainer<int> ic;

    ObjContainer<int>::SmartPointer ip = ic.begin();

    int arr[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        ic.add(&arr[i]);
    }

    do
    {
        std::cout << **ip << std::endl;
    } while (++ip);

    return 0;
} ///:~
