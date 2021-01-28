#ifndef HEADER_H
#define HEADER_H

class Arrays
{
private:
    static const int SIZE = 10;

    static const int m_constArray[SIZE];
    static int m_Array[SIZE];

public:
    static void printConstArray();
    static void printNonConstArray();
};

#endif