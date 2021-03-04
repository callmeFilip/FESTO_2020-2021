#include <iostream>

class Base
{
private:
    int num;

public:
    Base() : num(0) {}
};

class Derived : public Base
{
private:
    double price;

public:
    Derived() : price(0.0) {}
};

void function(Base obj)
{
    std::cout << sizeof(obj) << std::endl;
}

int main()
{
    Derived obj;
    std::cout << sizeof(obj) << std::endl;

    function(obj);
    return 0;
}

/**
 * This phenomen is called object slicing.
 * Because the object is passed by value, only
 * the base class data members gets copied with
 * the upcast. Thats what cause the object to 
 * become smaller.
*/
