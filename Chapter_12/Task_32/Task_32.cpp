#include "DoubleClass.h"

const DoubleClass operator+(const DoubleClass &left, const DoubleClass &right)
{
    return DoubleClass(left.m_val + right.m_val);
}

const DoubleClass operator-(const DoubleClass &left, const DoubleClass &right)
{
    return DoubleClass(left.m_val - right.m_val);
}

const DoubleClass operator*(const DoubleClass &left, const DoubleClass &right)
{
    return DoubleClass(left.m_val * right.m_val);
}

const DoubleClass operator/(const DoubleClass &left, const DoubleClass &right)
{
    return DoubleClass(left.m_val / right.m_val);
}

/**
 * The compiler creates functions for the operators
 * and calls them secretly
*/

int main()
{

    DoubleClass num1(2);
    DoubleClass num2(3);

    DoubleClass res;
    num1 + num2;
    num1 - num2;
    num1 *num2;
    (num1 * num2) / num2;

    return 0;
}
