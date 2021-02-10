#ifndef NUMBER_H
#define NUMBER_H
#include <iostream>
class Number
{
private:
    double m_number;

public:
    Number(double number = 0) : m_number(number){};

    friend const Number operator+(const Number &left, const Number &right);
    friend const Number operator-(const Number &left, const Number &right);
    friend const Number operator*(const Number &left, const Number &right);
    friend const Number operator/(const Number &left, const Number &right);

    Number &operator=(const Number &other);
    friend std::ostream &operator<<(std::ostream &os, const Number &obj);

    operator int() const { return int(m_number); };
};

#endif // NUMBER_H
