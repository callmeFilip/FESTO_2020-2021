//: C14:NameHiding.cpp
// Hiding overloaded names during inheritance
#include <iostream>
#include <string>
using namespace std;
class Base
{
public:
    int f() const
    {
        cout << "Base::f()\n";
        return 1;
    }
    int f(string) const { return 1; }
    void g() {}
};

class Derived1 : public Base
{
public:
    void g() const {}
};

class Derived2 : public Base
{
public:
    // Redefinition:
    int f() const
    {
        cout << "Derived2::f()\n";
        return 2;
    }
};

class Derived3 : public Base
{
public:
    // Change return type:
    void f() const { cout << "Derived3::f()\n"; }
};

class Derived4 : public Base
{
public:
    // Change argument list:
    int f(int) const
    {
        cout << "Derived4::f()\n";
        return 4;
    }
};

int main()
{
    string s("hello");

    Derived1 d1;
    int x = d1.f();
    d1.f(s); // calls Base::f()

    Derived2 d2;
    x = d2.f(); // calls overloaded Derived2::f()
    //! d2.f(s); // error: no matching function for call to 'Derived2::f(std::string&)'

    Derived3 d3;
    d3.f(); // calls overloaded Derived3::f()
    //! d3.f(s); // error: no matching function for call to 'Derived3::f(std::string&)'

    //! x = d3.f(); // return int version hidden
    Derived4 d4;
    //! d4.f(); // error: no matching function for call to 'Derived4::f()'
    //! x = d4.f(); // f() version hidden
    //! d4.f(s); // error: cannot convert 'std::string' {aka 'std::__cxx11::basic_string<char>'} to 'int'
    x = d4.f(1);

    return 0;
} ///:~
