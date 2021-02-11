#ifndef DUMMY_H
#define DUMMY_H

class Dummy
{
private:
    int m_number;

public:
    Dummy(int number = 0) : m_number(number) {}

    friend void operator=(const Dummy &left, const Dummy &right);
};

#endif // DUMMY_H
