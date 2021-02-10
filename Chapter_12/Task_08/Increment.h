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

    const Increment operator+(const Increment &other) const;
    const Increment operator-(const Increment &other) const;
};

#endif // INCREMENT_H
