//: C12:Integer.cpp {O}
// Implementation of overloaded operators
#include "Integer.h"
#include "require.h"
using namespace std;
const Integer
operator+(const Integer &left,
          const Integer &right)
{
    return Integer(left.i + right.i);
}
const Integer
operator-(const Integer &left,
          const Integer &right)
{
    return Integer(left.i - right.i);
}
const Integer
operator*(const Integer &left,
          const Integer &right)
{
    return Integer(left.i * right.i);
}
const Integer
operator/(const Integer &left,
          const Integer &right)
{
    require(right.i != 0, "divide by zero");
    return Integer(left.i / right.i);
}
const Integer
operator%(const Integer &left,
          const Integer &right)
{
    require(right.i != 0, "modulo by zero");
    return Integer(left.i % right.i);
}
const Integer
operator^(const Integer &left,
          const Integer &right)
{
    return Integer(left.i ^ right.i);
}
const Integer
operator&(const Integer &left,
          const Integer &right)
{
    return Integer(left.i & right.i);
}
const Integer
operator|(const Integer &left,
          const Integer &right)
{
    return Integer(left.i | right.i);
}
const Integer
operator<<(const Integer &left,
           const Integer &right)
{
    return Integer(left.i << right.i);
}
const Integer
operator>>(const Integer &left,
           const Integer &right)
{
    return Integer(left.i >> right.i);
}
// Assignments modify & return lvalue:
Integer &operator+=(Integer &left,
                    const Integer &right)
{
    if (&left == &right)
    { /* self-assignment */
    }
    left.i += right.i;
    return left;
}
Integer &operator-=(Integer &left,
                    const Integer &right)
{
    if (&left == &right)
    { /* self-assignment */
    }
    left.i -= right.i;
    return left;
}
Integer &operator*=(Integer &left,
                    const Integer &right)
{
    if (&left == &right)
    { /* self-assignment */
    }
    left.i *= right.i;
    return left;
}
Integer &operator/=(Integer &left,
                    const Integer &right)
{
    require(right.i != 0, "divide by zero");
    if (&left == &right)
    { /* self-assignment */
    }
    left.i /= right.i;
    return left;
}
Integer &operator%=(Integer &left,
                    const Integer &right)
{
    require(right.i != 0, "modulo by zero");
    if (&left == &right)
    { /* self-assignment */
    }
    left.i %= right.i;
    return left;
}
Integer &operator^=(Integer &left,
                    const Integer &right)
{
    if (&left == &right)
    { /* self-assignment */
    }
    left.i ^= right.i;
    return left;
}
Integer &operator&=(Integer &left,
                    const Integer &right)
{
    if (&left == &right)
    { /* self-assignment */
    }
    left.i &= right.i;
    return left;
}
Integer &operator|=(Integer &left,
                    const Integer &right)
{
    if (&left == &right)
    { /* self-assignment */
    }
    left.i |= right.i;
    return left;
}
Integer &operator>>=(Integer &left,
                     const Integer &right)
{
    if (&left == &right)
    { /* self-assignment */
    }
    left.i >>= right.i;
    return left;
}
Integer &operator<<=(Integer &left,
                     const Integer &right)
{
    if (&left == &right)
    { /* self-assignment */
    }
    left.i <<= right.i;
    return left;
}
// Conditional operators return true/false:
int operator==(const Integer &left,
               const Integer &right)
{
    return left.i == right.i;
}
int operator!=(const Integer &left,
               const Integer &right)
{
    return left.i != right.i;
}
int operator<(const Integer &left,
              const Integer &right)
{
    return left.i < right.i;
}
int operator>(const Integer &left,
              const Integer &right)
{
    return left.i > right.i;
}
int operator<=(const Integer &left,
               const Integer &right)
{
    return left.i <= right.i;
}
int operator>=(const Integer &left,
               const Integer &right)
{
    return left.i >= right.i;
}
int operator&&(const Integer &left,
               const Integer &right)
{
    return left.i && right.i;
}
int operator||(const Integer &left,
               const Integer &right)
{
    return left.i || right.i;
} ///:~

// Global operators:
const Integer &operator+(const Integer &a)
{
    return a; // Unary + has no effect
}
const Integer operator-(const Integer &a)
{
    return Integer(-a.i);
}
const Integer operator~(const Integer &a)
{
    return Integer(~a.i);
}
Integer *operator&(Integer &a)
{
    return a.This(); // &a is recursive!
}
int operator!(const Integer &a)
{
    return !a.i;
}
// Prefix; return incremented value
const Integer &operator++(Integer &a)
{
    a.i++;
    return a;
}
// Postfix; return the value before increment:
const Integer operator++(Integer &a, int)
{
    Integer before(a.i);
    a.i++;
    return before;
}
// Prefix; return decremented value
const Integer &operator--(Integer &a)
{
    a.i--;
    return a;
}
// Postfix; return the value before decrement:
const Integer operator--(Integer &a, int)
{
    Integer before(a.i);
    a.i--;
    return before;
}
std::ostream &operator<<(std::ostream &out, const Integer &integer)
{
    return out << integer.i;
}
