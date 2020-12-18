#ifndef LIBC_H
#define LIBC_H
#include <string>

class Libc
{
    std::string s[3];

public:
    void setA(std::string);
    void setB(std::string);
    void setC(std::string);
    std::string getA();
    std::string getB();
    std::string getC();
};

#endif