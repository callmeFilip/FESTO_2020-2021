#ifndef DOUBLECLASS_H
#define DOUBLECLASS_H

class DoubleClass
{
private:
    double m_val;

public:
    DoubleClass(double val = 0.0) : m_val(val) {}

    friend const DoubleClass operator+(const DoubleClass &left, const DoubleClass &right);
    friend const DoubleClass operator-(const DoubleClass &left, const DoubleClass &right);
    friend const DoubleClass operator*(const DoubleClass &left, const DoubleClass &right);
    friend const DoubleClass operator/(const DoubleClass &left, const DoubleClass &right);
};

#endif // DOUBLECLASS_H
