#ifndef INTSTORAGE_H
#define INTSTORAGE_H
class IntStorage
{
private:
    int m_value;

public:
    IntStorage(int new_value = 0) : m_value(new_value) {}
    void print() const;
};

#endif