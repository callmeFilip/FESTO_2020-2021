#include <iostream>
class Vehicle
{
private:
public:
    Vehicle()
    {
        std::cout << "*Vehicle" << std::endl;
    }
    ~Vehicle()
    {
        std::cout << "~Vehicle" << std::endl;
    }
};

class Car : public Vehicle
{
private:
public:
    Car()
    {
        std::cout << "*Car" << std::endl;
    }
    ~Car()
    {
        std::cout << "~Car" << std::endl;
    }
};

class Toyota : public Car
{
private:
public:
    Toyota()
    {
        std::cout << "*Toyota" << std::endl;
    }
    ~Toyota()
    {
        std::cout << "~Toyota" << std::endl;
    }
};

int main()
{
    Toyota car;
    return 0;
}

/**
 * The order of constructors is from the base
 * class to the most derived class
 * The order of destruction is backwards -
 * from the most-derived class to the roots.
 * This is possible due to inheritance.
*/
