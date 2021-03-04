#include <iostream>

// #define REMOVE

class Base
{
private:
public:
    void function()
    {
        std::cout << "( void )" << std::endl;
    }

    void function(int)
    {
        std::cout << "( int )" << std::endl;
    }

    void function(double)
    {
        std::cout << "( double )" << std::endl;
    }
};

class Derived : public Base
{
private:
public:
#ifndef REMOVE

    void function()
    {
        std::cout << "derived::( void )" << std::endl;
    }

#endif
};

int main()
{
    Derived *obj = new Derived;
    obj->function();
    //! obj->function(2);   // error
    //! obj->function(2.5); // error

#ifndef REMOVE

    Base *caster = obj;
    caster->function();
    caster->function(2);
    caster->function(2.5);

#else

    obj->function(2);
    obj->function(2.5);

#endif

    delete obj;
    return 0;
}
