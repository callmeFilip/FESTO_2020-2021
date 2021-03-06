#include <iostream>

class Class
{
private:
    int m_a;
    int m_b;

public:
    Class(int = 4, int = 8);

    virtual int function1()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;

        return 45;
    }
    virtual double function2()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;

        return 2.5;
    }
};

Class::Class(int a, int b) : m_a(a), m_b(b) {}

void function(Class &obj)
{
    char *objPtr = reinterpret_cast<char *>(&obj);

    std::cout << "Starting address of obj: " << (long)objPtr << std::endl;

    int *iptr = reinterpret_cast<int *>(objPtr + sizeof(void *));

    std::cout << "Starting address of fdm: " << (long)iptr << std::endl;
    std::cout << "First data member: " << *iptr << std::endl;

    iptr = reinterpret_cast<int *>(objPtr + sizeof(void *) + sizeof(int *));

    std::cout << "Starting address of sdm: " << (long)iptr << std::endl;
    std::cout << "Second data member: " << *iptr << std::endl;

    iptr = reinterpret_cast<int *>(objPtr + sizeof(void *) + 2 * sizeof(int *));
}

int main()
{
    Class obj;
    function(obj);

    /**
     * If this code shows the correct values for the data members,
     * that means that the vptr is at the begining
     * of the class, else it means that it is in the end.
    */

    return 0;
}
