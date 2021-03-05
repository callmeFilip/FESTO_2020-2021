#include <iostream>

class Base
{
private:
public:
    virtual void print() const
    {
        std::cout << "Base says: Hello!" << std::endl;
    }
    virtual ~Base() {}
};

class Derived : public Base
{
private:
    const int m_data = 5;

public:
    virtual ~Derived() {}

    virtual void print() const
    {
        std::cout << "Derived says: Hello!" << std::endl;
    }
    void data()
    {
        std::cout << m_data << std::endl;
    }
};

void function(Base obj)
{
    obj.print();
    Derived *d = reinterpret_cast<Derived *>(&obj);
    d->print();
    d->data();
}

int main()
{
    Derived b1;
    function(b1);

    return 0;
}

/**
 * No it doesn't crash, it just have undefined behavior.
 * Passing object by value causes another allocation on another address.
 * When it gets the m_data it gets random value from the memory.
*/
