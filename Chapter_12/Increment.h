#ifndef INCREMENT_H
#define INCREMENT_H

class Increment
{
private:
    int m_number;

public:
    Increment(int number = 0)
        : m_number(number) {}

    void print();

    friend const Increment &operator++(Increment &obj);
};

#endif // INCREMENT_H
