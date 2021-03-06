#include <iostream>

class Base1
{
private:
public:
    virtual void f1() {}
};

class Base2
{
private:
public:
    virtual void f2() {}
};

class Derived : public Base1, public Base2
{
private:
public:
    void f1() {}
    void f2() {}
};

int main()
{

    std::cout << "Sizeof (Base1): " << sizeof(Base1) << std::endl;
    std::cout << "Sizeof (Base2): " << sizeof(Base2) << std::endl;

    std::cout << "Sizeof (Derived): " << sizeof(Derived) << std::endl;

    /**
     * The sizeof(Base1 and Base2) are equal to 4, because thats how much space the vptr takes.
     * The sizeof(Derived) is equal to 8, because thats how much the vptrs of the base classes take.
    */

    return 0;
}
