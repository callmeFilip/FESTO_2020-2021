//: C14:Combined.cpp
// Inheritance & composition
#include <iostream>
class A
{
    int i;

public:
    A(int ii) : i(ii)
    {
        std::cout << "*A" << std::endl;
    }
    ~A()
    {
        std::cout << "~A" << std::endl;
    }

    void f() const {}
};
class B
{
    int i;

public:
    B(int ii) : i(ii)
    {
        std::cout << "*B" << std::endl;
    }
    ~B()
    {
        std::cout << "~B" << std::endl;
    }

    void f() const {}
};
class C : public B
{
    A a;

public:
    C(int ii) : B(ii), a(ii)
    {
        std::cout << "*C" << std::endl;
    }
    ~C()
    {
        std::cout << "~C" << std::endl;
    } // Calls ~A() and ~B()

    void f() const
    { // Redefinition
        a.f();
        B::f();
    }
};
class D : public B
{
private:
    C c;

public:
    D();
    ~D();
};

D::D() : B(0), c(0)
{
    std::cout << "*D" << std::endl;
}

D::~D()
{
    std::cout << "~D" << std::endl;
}

int main()
{
    std::cout << "In main" << std::endl;
    D d;

    return 0;
} ///:~
