//: C14:CopyConstructor.cpp
// Correctly creating the copy-constructor
#include <iostream>
using namespace std;

class Parent
{
    int i;

public:
    Parent(int ii) : i(ii)
    {
        cout << "Parent(int ii)\n";
    }

    Parent(const Parent &b) : i(b.i)
    {
        cout << "Parent(const Parent&)\n";
    }

    Parent() : i(0) { cout << "Parent()\n"; }

    friend ostream &operator<<(ostream &os, const Parent &b)
    {
        return os << "Parent: " << b.i << endl;
    }
};
class Member
{
    int i;

public:
    Member(int ii) : i(ii)
    {
        cout << "Member(int ii)\n";
    }

    Member(const Member &m) : i(m.i)
    {
        cout << "Member(const Member&)\n";
    }

    friend ostream &operator<<(ostream &os, const Member &m)
    {
        return os << "Member: " << m.i << endl;
    }
};
class Child : public Parent
{
    int i;
    Member m;

public:
    Child(int ii) : Parent(ii), i(ii), m(ii)
    {
        cout << "Child(int ii)\n";
    }

    friend ostream &operator<<(ostream &os, const Child &c)
    {
        return os << (Parent &)c << c.m << "Child: " << c.i << endl;
    }
};

class Childer : public Child
{
private:
    Member m;

public:
    Childer(int i = 0) : Child(i), m(i) {}
    Childer(const Childer &other) : Child(other), m(other.m) {}
    Childer &operator=(const Childer &other)
    {
        if (this != &other)
        {
            Child::operator=(other);
            m = other.m;
        }
        return *this;
    }

    friend std::ostream &operator<<(std::ostream &os, const Childer &obj)
    {
        os << (Child &)obj << obj.m << std::endl;
        return os;
    }
};

int main()
{
    Childer c(2);
    cout << "calling copy-constructor: " << endl;
    Childer c2 = c; // Calls copy-constructor
    cout << "values in c2:\n"
         << c2;

    return 0;
} ///:~
