#ifndef INTSTORAGE_H
#define INTSTORAGE_H

class IntStorage
{
private:
    int m_number;

public:
    IntStorage(int value = 0) : m_number(value){};

    void print() const;

    const IntStorage operator++(int);
    const IntStorage operator--(int);
};

#endif // INTSTORAGE_H
