#include <iostream>

class Base
{
private:
public:
    Base();
    virtual void func1() { std::cout << __PRETTY_FUNCTION__ << std::endl; }
};

Base::Base()
{
    func1();
}

int main()
{

    return 0;
}
