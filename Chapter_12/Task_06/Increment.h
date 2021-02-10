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

    const Increment operator+(const Increment &other) const;
    friend std::ostream &operator<<(std::ostream &os, const Increment &obj);
};

#endif // INCREMENT_H
