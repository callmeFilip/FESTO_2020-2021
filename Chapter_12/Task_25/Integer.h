//: C12:Integer.h
// Non-member overloaded operators
#ifndef INTEGER_H
#define INTEGER_H
#include <iostream>
// Non-member functions:
class Integer
{
    long i;
    unsigned char b;
    Integer *This() { return this; }

public:
    Integer(long ll = 0) : i(ll) {}

    // No side effects takes const& argument:
    friend const Integer &operator+(const Integer &a);
    friend const Integer operator-(const Integer &a);
    friend const Integer operator~(const Integer &a);
    friend Integer *operator&(Integer &a);
    friend int operator!(const Integer &a);

    // Side effects have non-const& argument:
    // Prefix:
    friend const Integer &operator++(Integer &a);
    // Postfix:
    friend const Integer operator++(Integer &a, int);
    // Prefix:
    friend const Integer &operator--(Integer &a);
    // Postfix:
    friend const Integer operator--(Integer &a, int);

    // Operators that create new, modified value:
    friend const Integer operator+(const Integer &left, const Integer &right);
    friend const Integer operator-(const Integer &left, const Integer &right);
    friend const Integer operator*(const Integer &left, const Integer &right);
    friend const Integer operator/(const Integer &left, const Integer &right);
    friend const Integer operator%(const Integer &left, const Integer &right);
    friend const Integer operator^(const Integer &left, const Integer &right);
    friend const Integer operator&(const Integer &left, const Integer &right);
    friend const Integer operator|(const Integer &left, const Integer &right);
    friend const Integer operator<<(const Integer &left, const Integer &right);
    friend const Integer operator>>(const Integer &left, const Integer &right);

    // Assignments modify & return lvalue:
    friend Integer &operator+=(Integer &left, const Integer &right);
    friend Integer &operator-=(Integer &left, const Integer &right);
    friend Integer &operator*=(Integer &left, const Integer &right);
    friend Integer &operator/=(Integer &left, const Integer &right);
    friend Integer &operator%=(Integer &left, const Integer &right);
    friend Integer &operator^=(Integer &left, const Integer &right);
    friend Integer &operator&=(Integer &left, const Integer &right);
    friend Integer &operator|=(Integer &left, const Integer &right);
    friend Integer &operator>>=(Integer &left, const Integer &right);
    friend Integer &operator<<=(Integer &left, const Integer &right);

    // Conditional operators return true/false:

    friend int operator==(const Integer &left, const Integer &right);
    friend int operator!=(const Integer &left, const Integer &right);
    friend int operator<(const Integer &left, const Integer &right);
    friend int operator>(const Integer &left, const Integer &right);
    friend int operator<=(const Integer &left, const Integer &right);
    friend int operator>=(const Integer &left, const Integer &right);
    friend int operator&&(const Integer &left, const Integer &right);
    friend int operator||(const Integer &left, const Integer &right);

    // Write the contents to an ostream:
    void print(std::ostream &os) const { os << i; }
    friend std::ostream &operator<<(std::ostream &out, const Integer &integer);
};
#endif // INTEGER_H ///:~