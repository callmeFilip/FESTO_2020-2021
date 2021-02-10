#ifndef INCREMENT_H
#define INCREMENT_H

#include <iostream>

class Increment
{
private:
    int m_number;

public:
    Increment(int number = 0)
        : m_number(number) {}

    void print(std::ostream &os) const;

    friend const Increment operator+(const Increment &left, const Increment &right);
    friend const Increment operator-(const Increment &left, const Increment &right);
};

#endif // INCREMENT_H
