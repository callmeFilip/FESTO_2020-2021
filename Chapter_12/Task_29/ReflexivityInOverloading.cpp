//: C12:ReflexivityInOverloading.cpp
#include <iostream>
class Number
{
    int i;

public:
    Number(int ii = 0) : i(ii) {}

    void print() const
    {
        std::cout << i << std::endl;
    }

    const Number operator+(const Number &n) const
    {
        return Number(i + n.i);
    }
    friend const Number operator-(const Number &, const Number &);
    friend const Number operator*(const Number &, const Number &);
};

const Number operator-(const Number &n1, const Number &n2)
{
    return Number(n1.i - n2.i);
}

const Number operator*(const Number &left, const Number &right)
{
    return Number(left.i * right.i);
}

int main()
{
    Number a(47), b(11);
    (a * 1).print();
    (2 * b).print();

    return 0;
} ///:~
