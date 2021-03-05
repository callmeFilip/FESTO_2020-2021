//: C14:Order.cpp
// Constructor/destructor order
#include <fstream>
#include <iostream>

using namespace std;

ofstream out("order.out");

#define CLASS(ID)                                     \
    class ID                                          \
    {                                                 \
    public:                                           \
        ID(int) { out << #ID " constructor\n"; }      \
        virtual ~ID() { out << #ID " destructor\n"; } \
    };

class Base1
{
private:
public:
    virtual ~Base1()
    {
        out << "Base::destructor\n";
    }

    virtual void print()
    {
        out << "Base1::print()\n";
    }
};

CLASS(Member1);
CLASS(Member2);
CLASS(Member3);
CLASS(Member4);

class Derived1 : public Base1
{
    Member1 m1;
    Member2 m2;

public:
    Derived1(int) : Base1(), m1(2), m2(1)
    {
        out << "Derived1 constructor\n";
    }

    ~Derived1()
    {
        out << "Derived1 destructor\n";
    }

    void print()
    {
        out << "Derived1::print()\n";
    }
};

class Derived2 : public Derived1
{
    Member3 m3;
    Member4 m4;

public:
    Derived2() : Derived1(2), m3(1), m4(3)
    {
        out << "Derived2 constructor\n";
    }

    ~Derived2()
    {
        out << "Derived2 destructor\n";
    }

    void print()
    {
        out << "Derived2::print()\n";
    }
};

int main()
{
    Base1 *d1 = new Derived1(2);
    Base1 *d2 = new Derived2;

    d1->print();
    d2->print();

    delete d1;
    delete d2;

    return 0;
} ///:~
