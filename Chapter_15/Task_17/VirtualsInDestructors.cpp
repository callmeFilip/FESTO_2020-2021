//: C15:VirtualsInDestructors.cpp
// Virtual calls inside destructors
#include <iostream>
using namespace std;

class Base
{
public:
    virtual ~Base()
    {
        cout << "~Base1()\n";
        f();
    }
    virtual void f() { cout << "Base::f()\n"; }
};

class Derived : public Base
{
public:
    virtual ~Derived()
    {
        cout << "~Derived()\n";
        f();
    }
    virtual void f() { cout << "Derived::f()\n"; }
};

class AnotherDerived : public Derived
{
private:
public:
    ~AnotherDerived()
    {
        std::cout << "~AnotherDerived()" << std::endl;
        f();
    }
    void f()
    {
        std::cout << "AnotherDerived::f()" << std::endl;
    }
};

int main()
{
    Base *bp = new Derived; // Upcast
    delete bp;

    std::cout << "Creating ad.." << std::endl;

    Base *ad = new AnotherDerived();

    delete ad;

    return 0;
} ///:~

/**
 * Each constructor iterates trough the definition and calls 
 * the "deepest" not deleted f(); (which is the local one)
*/
