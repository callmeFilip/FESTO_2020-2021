#ifndef ORANGE_H
#define ORANGE_H
#include "Apple.h"
class Orange
{
private:
    int m_data;

public:
    Orange(int data = 0) : m_data(data) {}

    void print() const;

    friend const Orange operator+(const Orange &left, const Orange &right);
};

#endif // ORANGE_H
