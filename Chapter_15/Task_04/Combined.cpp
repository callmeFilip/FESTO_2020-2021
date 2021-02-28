// Inheritance & composition
#include <iostream>

class A
{
    int i;

public:
    A(int ii) : i(ii) {}
    ~A() {}
    virtual void f() const
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};

class B
{
    int i;

public:
    B(int ii) : i(ii) {}
    ~B() {}
    void f() const
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};

class C : public B
{
    A a;

public:
    C(int ii) : B(ii), a(ii) {}

    ~C() {} // Calls ~A() and ~B()

    void f() const
    { // Redefinition
        a.f();
        B::f();
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};

int main()
{
    C c(47);

    B &ref = c;

    ref.f();

    std::cout << "___separator___" << std::endl;

    c.f();

    return 0;
} ///:~
