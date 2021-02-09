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

    Increment &operator++();
    const Increment operator++(int);

    Increment &operator--();
    const Increment operator--(int);
};

#endif // INCREMENT_H
