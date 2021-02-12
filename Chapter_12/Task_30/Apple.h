#ifndef APPLE_H
#define APPLE_H
#include "Orange.h"
class Apple
{
private:
    int m_data;

public:
    Apple(int data = 0) : m_data(data) {}

    operator Orange() const { return Orange(m_data); }

    void print() const;
};

#endif // APPLE_H
