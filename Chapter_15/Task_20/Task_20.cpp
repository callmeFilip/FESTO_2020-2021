#include <ctime>
#include <iostream>

class Base
{
private:
public:
    virtual void virtF()
    {
        int i;
    }
    void nonVirtF()
    {
        int i;
    }
};

class Derived : public Base
{
private:
public:
};

int main()
{
    Base *obj = new Derived;

    const int LOOPCOUNTER = 100000;

    clock_t start_virtF;
    clock_t end_virtF;

    clock_t start_nonVirtF;
    clock_t end_nonVirtF;

    start_virtF = clock();

    for (int i = 0; i < LOOPCOUNTER; i++)
    {
        obj->virtF();
    }

    end_virtF = clock();

    std::cout << end_virtF - start_virtF << std::endl;

    start_nonVirtF = clock();

    for (int i = 0; i < LOOPCOUNTER; i++)
    {
        obj->nonVirtF();
    }
    end_nonVirtF = clock();

    std::cout << end_nonVirtF - start_nonVirtF << std::endl;

    return 0;
}

// In average the nonvirtual function is faster
