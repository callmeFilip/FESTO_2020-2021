//: C12:TypeConversionFanout.cpp
#include <iostream>
class Orange
{
};
class Pear
{
};
class Apple
{
public:
    explicit operator Orange() const { return Orange(/*No args to copy*/); }
    explicit operator Pear() const { return Pear(/*No args to copy*/); }
};
// Overloaded eat():
void eat(Orange)
{
    std::cout << "In Orange eat" << std::endl;
}
void eat(Pear)
{
    std::cout << "In Pear eat" << std::endl;
}

Orange toOrange(Apple obj)
{
    return Orange(obj);
}
Pear toPear(Apple obj)
{
    return Pear(obj);
}

int main()
{
    Apple c;
    eat(toOrange(c));
    eat(toPear(c));

    return 0;
} ///:~
