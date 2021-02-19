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

    int h()
    {
        std::cout << "h()" << std::endl;
    }
    int h(int)
    {
        std::cout << "h(int)" << std::endl;
    }
    int h(int, int)
    {
        std::cout << "h(int,int)" << std::endl;
    }
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

    int h(int)
    {
        std::cout << "Derived4::h(int)" << std::endl;
    }
};

int main()
{
    string s("hello");
    Derived1 d1;
    int x = d1.f();
    d1.f(s);
    Derived2 d2;
    x = d2.f();
    //! d2.f(s); // string version hidden
    Derived3 d3;
    //! x = d3.f(); // return int version hidden
    Derived4 d4;
    //! x = d4.f(); // f() version hidden
    x = d4.f(1);

    d4.h(3);
    //! d4.h(); // error: no matching function for call to 'Derived4::h()'
    //! d4.h(1, 1); // error: no matching function for call to 'Derived4::h(int, int)'

    return 0;
} ///:~
