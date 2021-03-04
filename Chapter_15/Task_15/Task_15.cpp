#include <iostream>

class Base
{
private:
public:
    Base();
    virtual void function() { std::cout << __PRETTY_FUNCTION__ << std::endl; }
};

class Derived : public Base
{
public:
    Derived() : Base() {}
    void function()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};

Base::Base()
{
    std::cout << "In Base::Base().." << std::endl;
    function();
}

int main()
{
    Derived d;
    Base &b = d;
    std::cout << "Calling function after cast.." << std::endl;
    b.function();

    return 0;
}
