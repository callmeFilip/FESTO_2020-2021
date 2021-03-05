#include <iostream>

class Base
{
private:
public:
    virtual void print() const
    {
        std::cout << "Base says: Hello!" << std::endl;
    }
};

class Derived
{
private:
    const int m_data = 5;

public:
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

    delete d;
}

int main()
{
    Base b1;
    b1.print();
    return 0;
}
