#ifndef INCREMENT_H
#define INCREMENT_H

class Increment
{
private:
    int m_number;

public:
    Increment(int number = 0)
        : m_number(number) {}

    void print() const;

    const Increment &operator++();
};

#endif // INCREMENT_H
