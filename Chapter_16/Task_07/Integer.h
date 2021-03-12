#ifndef INTEGER_H
#define INTEGER_H
#include "AutoCounter.h"
class Integer
{
private:
    int m_number;
    AutoCounter *m_counter;

public:
    Integer(int number) : m_number(number), m_counter(AutoCounter::create("Integer")) { std::cout << "*Integer" << std::endl; }
    ~Integer()
    {
        std::cout << "~Integer" << std::endl;
        delete m_counter;
    }
};

#endif // INTEGER_H
